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
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
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
	struct<26> Local_130 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_131[32];
	struct<535> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_133 = -1;
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
	var uLocal_155 = -1082130432;
	var uLocal_156 = 3;
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
	var uLocal_172 = -1;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = -1;
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
	var uLocal_197 = -1082130432;
	var uLocal_198 = 3;
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
	var uLocal_214 = -1;
	var uLocal_215 = 0;
	var uLocal_216 = -1;
	var uLocal_217 = -1;
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
	var uLocal_239 = -1082130432;
	var uLocal_240 = 3;
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
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = -1;
	var uLocal_259 = -1;
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
	var uLocal_281 = -1082130432;
	var uLocal_282 = 3;
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
	var uLocal_298 = -1;
	var uLocal_299 = 0;
	var uLocal_300 = -1;
	var uLocal_301 = -1;
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
	var uLocal_323 = -1082130432;
	var uLocal_324 = 3;
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
	var uLocal_340 = -1;
	var uLocal_341 = 0;
	var uLocal_342 = -1;
	var uLocal_343 = -1;
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
	var uLocal_365 = -1082130432;
	var uLocal_366 = 3;
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
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = -1;
	var uLocal_385 = -1;
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
	var uLocal_407 = -1082130432;
	var uLocal_408 = 3;
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
	var uLocal_424 = -1;
	var uLocal_425 = 0;
	var uLocal_426 = -1;
	var uLocal_427 = -1;
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
	var uLocal_449 = -1082130432;
	var uLocal_450 = 3;
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
	var uLocal_466 = -1;
	var uLocal_467 = 0;
	var uLocal_468 = -1;
	var uLocal_469 = -1;
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
	var uLocal_491 = -1082130432;
	var uLocal_492 = 3;
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
	var uLocal_508 = -1;
	var uLocal_509 = 0;
	var uLocal_510 = -1;
	var uLocal_511 = -1;
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
	var uLocal_533 = -1082130432;
	var uLocal_534 = 3;
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
	var uLocal_550 = -1;
	var uLocal_551 = 0;
	var uLocal_552 = -1;
	var uLocal_553 = -1;
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
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = -1082130432;
	var uLocal_576 = 3;
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
	var uLocal_591 = 0;
	var uLocal_592 = -1;
	var uLocal_593 = 0;
	var uLocal_594 = -1;
	var uLocal_595 = -1;
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
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = -1082130432;
	var uLocal_618 = 3;
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
	var uLocal_633 = 0;
	var uLocal_634 = -1;
	var uLocal_635 = 0;
	var uLocal_636 = -1;
	var uLocal_637 = -1;
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
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = -1082130432;
	var uLocal_660 = 3;
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
	var uLocal_675 = 0;
	var uLocal_676 = -1;
	var uLocal_677 = 0;
	var uLocal_678 = -1;
	var uLocal_679 = -1;
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
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = -1082130432;
	var uLocal_702 = 3;
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
	var uLocal_717 = 0;
	var uLocal_718 = -1;
	var uLocal_719 = 0;
	var uLocal_720 = -1;
	var uLocal_721 = -1;
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
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = -1082130432;
	var uLocal_744 = 3;
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
	var uLocal_759 = 0;
	var uLocal_760 = -1;
	var uLocal_761 = 0;
	var uLocal_762 = -1;
	var uLocal_763 = -1;
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
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = -1082130432;
	var uLocal_786 = 3;
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
	var uLocal_801 = 0;
	var uLocal_802 = -1;
	var uLocal_803 = 0;
	var uLocal_804 = -1;
	var uLocal_805 = -1;
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
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1082130432;
	var uLocal_828 = 3;
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
	var uLocal_843 = 0;
	var uLocal_844 = -1;
	var uLocal_845 = 0;
	var uLocal_846 = -1;
	var uLocal_847 = -1;
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
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = -1082130432;
	var uLocal_870 = 3;
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
	var uLocal_885 = 0;
	var uLocal_886 = -1;
	var uLocal_887 = 0;
	var uLocal_888 = -1;
	var uLocal_889 = -1;
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
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = -1082130432;
	var uLocal_912 = 3;
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
	var uLocal_927 = 0;
	var uLocal_928 = -1;
	var uLocal_929 = 0;
	var uLocal_930 = -1;
	var uLocal_931 = -1;
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
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = -1082130432;
	var uLocal_954 = 3;
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
	var uLocal_969 = 0;
	var uLocal_970 = -1;
	var uLocal_971 = 0;
	var uLocal_972 = -1;
	var uLocal_973 = -1;
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
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = -1082130432;
	var uLocal_996 = 3;
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
	var uLocal_1011 = 0;
	var uLocal_1012 = -1;
	var uLocal_1013 = 0;
	var uLocal_1014 = -1;
	var uLocal_1015 = -1;
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
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = -1082130432;
	var uLocal_1038 = 3;
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
	var uLocal_1053 = 0;
	var uLocal_1054 = -1;
	var uLocal_1055 = 0;
	var uLocal_1056 = -1;
	var uLocal_1057 = -1;
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
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = -1082130432;
	var uLocal_1080 = 3;
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
	var uLocal_1095 = 0;
	var uLocal_1096 = -1;
	var uLocal_1097 = 0;
	var uLocal_1098 = -1;
	var uLocal_1099 = -1;
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
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1082130432;
	var uLocal_1122 = 3;
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
	var uLocal_1137 = 0;
	var uLocal_1138 = -1;
	var uLocal_1139 = 0;
	var uLocal_1140 = -1;
	var uLocal_1141 = -1;
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
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = -1082130432;
	var uLocal_1164 = 3;
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
	var uLocal_1179 = 0;
	var uLocal_1180 = -1;
	var uLocal_1181 = 0;
	var uLocal_1182 = -1;
	var uLocal_1183 = -1;
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
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = -1082130432;
	var uLocal_1206 = 3;
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
	var uLocal_1221 = 0;
	var uLocal_1222 = -1;
	var uLocal_1223 = 0;
	var uLocal_1224 = -1;
	var uLocal_1225 = -1;
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
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = -1082130432;
	var uLocal_1248 = 3;
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
	var uLocal_1263 = 0;
	var uLocal_1264 = -1;
	var uLocal_1265 = 0;
	var uLocal_1266 = -1;
	var uLocal_1267 = -1;
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
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = -1082130432;
	var uLocal_1290 = 3;
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
	var uLocal_1305 = 0;
	var uLocal_1306 = -1;
	var uLocal_1307 = 0;
	var uLocal_1308 = -1;
	var uLocal_1309 = -1;
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
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = -1082130432;
	var uLocal_1332 = 3;
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
	var uLocal_1347 = 0;
	var uLocal_1348 = -1;
	var uLocal_1349 = 0;
	var uLocal_1350 = -1;
	var uLocal_1351 = -1;
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
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = -1082130432;
	var uLocal_1374 = 3;
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
	var uLocal_1389 = 0;
	var uLocal_1390 = -1;
	var uLocal_1391 = 0;
	var uLocal_1392 = -1;
	var uLocal_1393 = -1;
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
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = -1082130432;
	var uLocal_1416 = 3;
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
	var uLocal_1431 = 0;
	var uLocal_1432 = -1;
	var uLocal_1433 = 0;
	var uLocal_1434 = -1;
	var uLocal_1435 = -1;
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
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = -1082130432;
	var uLocal_1458 = 3;
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
	var uLocal_1473 = 0;
	var uLocal_1474 = -1;
	var uLocal_1475 = 0;
	var uLocal_1476 = -1;
	struct<12> Local_1477 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	struct<21> Local_1485 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		if (!func_1480(ScriptParam_1485))
		{
			func_1461();
		}
	}
	while (true)
	{
		func_1460();
		if (func_1454() || func_1452())
		{
			func_1461();
		}
		func_1426();
		func_1420();
		switch (func_1419(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_1418() == 1)
				{
					if (func_1410())
					{
						func_1409(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_1418() == 1)
				{
					func_112();
				}
				else if (func_1418() == 3)
				{
					func_1409(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_1461();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1418())
			{
				case 0:
					if (func_93())
					{
						func_89(func_91(138, func_92(), 0, 0));
						func_88(1);
					}
					break;
				
				case 1:
					if (Local_130.f_3 == 5)
					{
						func_88(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_111, 1000, 0))
					{
						func_88(3);
					}
					break;
				
				case 3:
					func_1461();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1A3
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x201
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

void func_3()//Position - 0x246
{
	if (func_23(2, 0, 0, 0, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3))
		{
			Local_130.f_2 = HUD::_0x13C4B962653A5280();
			MISC::SET_BIT(&(Local_130.f_1), 3);
		}
	}
	switch (Local_130.f_3)
	{
		case 0:
			if (func_18())
			{
				func_17(1);
			}
			break;
		
		case 1:
			func_12();
			if (Local_130.f_15 != func_11())
			{
				func_10(&(Local_130.f_5), 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_130.f_11, 5f, 1);
				func_17(2);
			}
			if (func_1(&(Local_130.f_B), Global_40001.f_2B22, 0) || func_9())
			{
				func_17(3);
			}
			break;
		
		case 2:
			if (func_9() || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1) && Local_130.f_15 != func_11()))
			{
				Local_130.f_2 = HUD::_0x13C4B962653A5280();
				func_17(3);
			}
			else if (func_8(&(Local_130.f_5), 0, 0) >= func_7())
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
				{
					if (Local_130.f_15 == func_11())
					{
						if (func_8(&(Local_130.f_5), 0, 0) >= func_7() + 250)
						{
							MISC::SET_BIT(&(Local_130.f_1), 1);
							func_10(&(Local_130.f_5), 0, 0);
						}
					}
					else
					{
						Local_130.f_2 = HUD::_0x13C4B962653A5280();
						func_17(3);
					}
				}
				else
				{
					Local_130.f_2 = HUD::_0x13C4B962653A5280();
					func_17(3);
				}
			}
			func_12();
			break;
		
		case 3:
			if (func_1(&(Local_130.f_7), 20000, 0) || func_4())
			{
				func_10(&(Local_130.f_9), 0, 0);
				func_17(5);
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_130.f_10), 0))
			{
				func_17(5);
			}
			break;
		
		case 5:
			break;
	}
}

int func_4()//Position - 0x3F3
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
			if (!func_5(iVar2))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[iVar1 /*4*/].f_1, 1) || Local_131[iVar1 /*4*/].f_3 != 5)
				{
					return 0;
				}
				else if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[iVar1 /*4*/].f_1, 0) || Local_130.f_15 == func_11()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 0))
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

bool func_5(int iParam0)//Position - 0x497
{
	if (func_6(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

bool func_6(int iParam0)//Position - 0x4BD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

int func_7()//Position - 0x4D5
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
	{
		return Global_40001.f_2B28;
	}
	return Global_40001.f_2B21;
}

int func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x4FD
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

int func_9()//Position - 0x544
{
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_130.f_10), 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 4))
	{
		MISC::SET_BIT(&(Local_130.f_1), 0);
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3))
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x589
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

int func_11()//Position - 0x5C6
{
	return 4294967295;
}

void func_12()//Position - 0x5CF
{
	int iVar0;
	
	if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_130.f_10) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(Local_130.f_10), 0))
	{
		if ((VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_130.f_10), 4294967295, 0) || !func_16()) || (Local_130.f_15 != func_11() && !func_15(Local_130.f_15, 1, 1)))
		{
			if (Local_130.f_15 != func_11())
			{
				Local_130.f_15 = func_11();
			}
		}
		else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_113)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_113));
			if (func_15(iVar0, 1, 1))
			{
				if (func_13(iVar0))
				{
					if (Local_130.f_15 != iVar0)
					{
						Local_130.f_19++;
						Local_130.f_15 = iVar0;
						MISC::SET_BIT(&(Local_130.f_1), 2);
					}
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[iLocal_113 /*4*/].f_1, 5))
	{
		MISC::SET_BIT(&(Local_130.f_1), 4);
	}
	iLocal_113++;
	if (iLocal_113 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_113 = 0;
	}
}

int func_13(int iParam0)//Position - 0x6CC
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, NETWORK::NET_TO_VEH(Local_130.f_10), 0))
		{
			if (func_14(iVar0, 0) == 4294967295)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1)//Position - 0x708
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

int func_15(int iParam0, bool bParam1, bool bParam2)//Position - 0x78D
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

int func_16()//Position - 0x7D7
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_130.f_10), 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_130.f_10), 4294967295, 0) != 0)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_130.f_10), 4294967295, 0);
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_17(int iParam0)//Position - 0x82B
{
	Local_130.f_3 = iParam0;
}

int func_18()//Position - 0x839
{
	int iVar0;
	int iVar1;
	
	if (func_22(Local_130.f_F))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_130.f_10))
		{
			if (func_21(&(Local_130.f_10), Local_130.f_F, Local_130.f_11, Local_130.f_14, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_130.f_10), 1);
				ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_130.f_10), 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_130.f_10), false);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_130.f_10), true);
				VEHICLE::_0xB28B1FE5BFADD7F5(NETWORK::NET_TO_VEH(Local_130.f_10), 1);
				iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_130.f_10));
				ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_130.f_10), SYSTEM::ROUND((func_20() * IntToFloat(iVar0 * 2))));
				unk_0x65E471E4A2D56226(NETWORK::NET_TO_VEH(Local_130.f_10), SYSTEM::ROUND((func_20() * IntToFloat(iVar0 * 2))), 0);
				unk_0x54D1FE7811E0FBC6(NETWORK::NET_TO_VEH(Local_130.f_10), 0, 0);
				VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_130.f_10), 1);
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_130.f_10), "Not_Allow_As_Saved_Veh", 1);
				}
				func_19(NETWORK::NET_TO_VEH(Local_130.f_10));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_130.f_10), "MPBitset"))
					{
						iVar1 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_130.f_10), "MPBitset");
					}
					MISC::SET_BIT(&iVar1, 10);
					MISC::SET_BIT(&iVar1, 11);
					MISC::SET_BIT(&iVar1, 12);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_130.f_10), "MPBitset", iVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_130.f_F);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_130.f_10))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x9B5
{
	if (!Global_40001.f_1249)
	{
		unk_0x8389D644A7CF28CF(iParam0, 0);
	}
}

float func_20()//Position - 0x9CF
{
	return Global_40001.f_2B27;
}

int func_21(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x9DE
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

bool func_22(int iParam0)//Position - 0xAD8
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_23(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0xAF6
{
	if (func_87(CAM::_0xDC9DA9E8789F5246(), 0) || func_84(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_83(CAM::_0xDC9DA9E8789F5246()) || func_81(CAM::_0xDC9DA9E8789F5246()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_31(sParam3, sParam4, 1);
		}
		if (func_30(26, 4294967295))
		{
			func_27(26, 4294967295);
		}
		return 1;
	}
	if (func_26(&(Global_1806E7.f_12)))
	{
		if (!func_1(&(Global_1806E7.f_12), 7500, 0))
		{
			return 0;
		}
		func_25(&(Global_1806E7.f_12));
	}
	if (func_24())
	{
		if (bParam2)
		{
			func_31(sParam3, sParam4, 0);
		}
		if (func_30(26, 4294967295))
		{
			func_27(26, 4294967295);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_31(sParam3, sParam4, 1);
		}
		if (func_30(26, 4294967295))
		{
			func_27(26, 4294967295);
		}
		return 1;
	}
	return 0;
}

bool func_24()//Position - 0xBED
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0);
}

void func_25(var uParam0)//Position - 0xC00
{
	uParam0->f_1 = 0;
}

bool func_26(var uParam0)//Position - 0xC0D
{
	return uParam0->f_1;
}

void func_27(int iParam0, int iParam1)//Position - 0xC19
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_28(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_28(int iParam0)//Position - 0xC75
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_29();
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

int func_29()//Position - 0xCD8
{
	return Global_1407E0;
}

bool func_30(int iParam0, int iParam1)//Position - 0xCE4
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	iVar0 = func_28(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iParam0);
}

void func_31(char* sParam0, char* sParam1, bool bParam2)//Position - 0xD10
{
	if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 2) && !func_6(CAM::_0xDC9DA9E8789F5246())) && !func_5(CAM::_0xDC9DA9E8789F5246()))
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
		func_32(66, sParam0, sParam1, 1, 4294967295, 2, 1);
		MISC::SET_BIT(&(Global_1806E7.f_1), 2);
	}
}

int func_32(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD86
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
	func_80(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_33(&Var0);
}

int func_33(var uParam0)//Position - 0xDF6
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_47(uParam0, uParam0->f_11);
	func_44(uParam0);
	if (func_43())
	{
		func_44(uParam0);
	}
	if (func_42(uParam0->f_1))
	{
		func_35();
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
				func_35();
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
				if (func_34(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
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

int func_34(int iParam0)//Position - 0xFC7
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

void func_35()//Position - 0x1047
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
	func_36();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_36()//Position - 0x107A
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_40(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_37(&(Global_252F9E.f_BD4.f_1));
}

void func_37(var uParam0)//Position - 0x10BB
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_39(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_38(0);
}

void func_38(int iParam0)//Position - 0x1161
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_39(bool bParam0)//Position - 0x1175
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_40(var uParam0)//Position - 0x11A0
{
	func_41(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_41(var uParam0)//Position - 0x11CA
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

int func_42(int iParam0)//Position - 0x1249
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_43()//Position - 0x134B
{
	return Global_255C02.f_10;
}

void func_44(var uParam0)//Position - 0x1359
{
	if (func_46(uParam0->f_1))
	{
		uParam0->f_48 = func_45();
	}
}

int func_45()//Position - 0x1374
{
	return 21;
}

int func_46(int iParam0)//Position - 0x137E
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

void func_47(var uParam0, int iParam1)//Position - 0x1410
{
	if (func_46(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_11() || !func_15(iParam1, 0, 1))
	{
		return;
	}
	if (func_34(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_48(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_48(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1467
{
	int iVar0;
	int iVar1;
	
	if (func_76(iParam0) && !bParam4)
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
	if (((func_76(CAM::_0xDC9DA9E8789F5246()) || (func_75() && func_74())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_73();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_15(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_71(iParam1, iParam0, 0);
							}
							else
							{
								return func_59(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_59(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_71(iParam1, iParam0, 0);
				}
				else
				{
					return func_49(0, 4294967295, 0);
				}
			}
			else
			{
				return func_49(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_71(iParam1, iParam0, 0);
		}
		else
		{
			return func_59(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_59(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_49(bool bParam0, int iParam1, bool bParam2)//Position - 0x1647
{
	return func_50(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_50(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x165D
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_57() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_56(iParam2, iVar0);
		}
		else
		{
			return func_56(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_55(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_54(1);
				}
				else
				{
					return func_54(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_51(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_51(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_54(1);
	}
	return func_54(0);
}

int func_51(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1751
{
	int iVar0;
	
	iVar0 = func_53(iParam0, iParam1, iParam3);
	if (func_52(Global_440000.f_1FEDE, 1))
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

int func_52(int iParam0, bool bParam1)//Position - 0x1869
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

int func_53(int iParam0, int iParam1, int iParam2)//Position - 0x18BA
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
			if (!func_55(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_54(bool bParam0)//Position - 0x1901
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x1918
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

int func_56(int iParam0, int iParam1)//Position - 0x1AE3
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_53(iParam1, iParam0, 4);
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

int func_57()//Position - 0x1B31
{
	if (func_58() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_58()//Position - 0x1B4E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1B66
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
			if (func_68(1))
			{
				iVar3 = func_64(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_62(iVar3);
				}
			}
			if ((func_61(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_55(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_54(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_60(1);
			}
			else
			{
				return func_50(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_54(1);
			}
			else
			{
				return func_50(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_64(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_62(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_60(bool bParam0)//Position - 0x1D0A
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_61(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1D21
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

int func_62(int iParam0)//Position - 0x1D99
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_63(iParam0);
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

var func_63(int iParam0)//Position - 0x1E5C
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_64(int iParam0)//Position - 0x1E73
{
	if (!iParam0 == func_11())
	{
		if (func_66(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_65(iParam0)];
		}
	}
	return 4294967295;
}

int func_65(int iParam0)//Position - 0x1EA5
{
	if (iParam0 != func_11())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_11();
}

bool func_66(int iParam0, bool bParam1)//Position - 0x1EC8
{
	if (!bParam1)
	{
		if (func_67(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_11();
}

int func_67(int iParam0)//Position - 0x1EF3
{
	if (iParam0 != func_11())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_11())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x1F28
{
	if ((func_70() || func_69()) || (func_43() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_69()//Position - 0x1F57
{
	return Global_255C02.f_F;
}

bool func_70()//Position - 0x1F65
{
	return Global_255C02.f_E;
}

int func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x1F73
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_68(1))
	{
		iVar2 = func_64(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_62(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_11())
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
			iVar0 = func_50(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_72(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_55(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_60(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_72(int iParam0)//Position - 0x2101
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

var func_73()//Position - 0x21D6
{
	return Global_240006.f_2;
}

bool func_74()//Position - 0x21E4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_75()//Position - 0x21F5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_76(int iParam0)//Position - 0x2212
{
	if (func_78(iParam0, 0))
	{
		return 1;
	}
	if (func_77())
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

bool func_77()//Position - 0x2254
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_78(int iParam0, int iParam1)//Position - 0x2265
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_79(4294967295, 0) == 8;
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

int func_79(int iParam0, bool bParam1)//Position - 0x22B0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_29();
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

void func_80(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x22F1
{
	uParam1->f_11 = func_11();
	uParam1->f_12 = func_11();
	uParam1->f_13 = func_11();
	uParam1->f_14 = func_11();
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

bool func_81(int iParam0)//Position - 0x236F
{
	return func_82(iParam0, 20);
}

bool func_82(int iParam0, int iParam1)//Position - 0x237F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

int func_83(int iParam0)//Position - 0x239A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_82(iParam0, 9);
	}
	return 0;
}

int func_84(int iParam0, int iParam1)//Position - 0x23B8
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_85(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_85(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x241E
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
	return func_86(iParam0, 0);
	return 0;
}

int func_86(int iParam0, int iParam1)//Position - 0x2478
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

int func_87(int iParam0, int iParam1)//Position - 0x24CD
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_88(int iParam0)//Position - 0x2508
{
	Local_130 = iParam0;
}

void func_89(int iParam0)//Position - 0x2514
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2975243204;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam0;
	iVar1 = func_90(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_90(int iParam0, bool bParam1)//Position - 0x254E
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_78(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25B3
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

int func_92()//Position - 0x2E18
{
	switch (Local_130.f_F)
	{
		case joaat("CADDY"):
			return 0;
		
		case joaat("BMX"):
			return 1;
		
		case joaat("TRIBIKE"):
			return 2;
		
		case joaat("SANCHEZ"):
			return 3;
		
		case joaat("FAGGIO2"):
			return 4;
		
		case joaat("LECTRO"):
			return 5;
		
		case joaat("TRACTOR2"):
			return 6;
		
		default:
	}
	return 0;
}

int func_93()//Position - 0x2E70
{
	func_108();
	func_94();
	Local_130.f_15 = func_11();
	return 1;
}

void func_94()//Position - 0x2E89
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_107(Local_130.f_F));
	switch (Local_130.f_F)
	{
		case joaat("CADDY"):
			Local_130.f_11 = { -1343.692f, 131.86f, 55.2396f };
			Local_130.f_14 = 274.9769f;
			break;
		
		case joaat("BMX"):
			Local_130.f_11 = { 271.5271f, -207.4667f, 60.5707f };
			Local_130.f_14 = 69.8638f;
			break;
		
		case joaat("TRIBIKE"):
			Local_130.f_11 = { -1858.163f, -1229.838f, 12.0171f };
			Local_130.f_14 = 265.1099f;
			break;
		
		case joaat("SANCHEZ"):
			switch (iVar0)
			{
				case 0:
					Local_130.f_11 = { 2395.741f, 3307.75f, 46.5735f };
					Local_130.f_14 = 130.8036f;
					break;
				
				case 1:
					Local_130.f_11 = { -1207.128f, -2790.576f, 12.9522f };
					Local_130.f_14 = 105.9907f;
					Local_130.f_16 = 1;
					break;
			}
			break;
		
		case joaat("FAGGIO2"):
			Local_130.f_11 = { -3033.599f, 550.3338f, 6.5127f };
			Local_130.f_14 = 253.5783f;
			break;
		
		case joaat("LECTRO"):
			Local_130.f_11 = { -1819.191f, 785.0829f, 136.8941f };
			Local_130.f_14 = 223.8026f;
			break;
		
		case joaat("TRACTOR2"):
			Local_130.f_11 = { 2358.663f, 4891.231f, 41.0573f };
			Local_130.f_14 = 157.8569f;
			break;
	}
	if (func_106(iVar0) || !func_95(Local_130.f_11, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
	{
		func_108();
		func_94();
	}
}

int func_95(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x303F
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
		if (func_101(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_96(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_96(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x3150
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_98(CAM::_0xDC9DA9E8789F5246()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_15(iVar1, 1, 1))
		{
			if (!func_78(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_97(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_98(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_98(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_97(int iParam0)//Position - 0x3308
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

Vector3 func_98(int iParam0)//Position - 0x3333
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_43() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_100(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_99(iParam0);
}

Vector3 func_99(int iParam0)//Position - 0x3386
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_100(vector3 vParam0)//Position - 0x3399
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_101(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x33C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_15(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_97(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam7) && bParam4) && func_102(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_99(iVar1), vParam0, true) < fParam1)
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

int func_102(int iParam0)//Position - 0x34BF
{
	if (func_105(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_104(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_103(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0, int iParam1)//Position - 0x3506
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_11())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_104(int iParam0)//Position - 0x3531
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_105(int iParam0, int iParam1)//Position - 0x3548
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_104(iParam0) };
		Global_2633EE = { func_104(iParam1) };
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

int func_106(int iParam0)//Position - 0x35B5
{
	switch (Local_130.f_F)
	{
		case joaat("SANCHEZ"):
			switch (iParam0)
			{
				case 0:
					return Global_40001.f_2B2C;
				
				case 1:
					return Global_40001.f_2B2D;
				
				default:
			}
			break;
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x35F7
{
	switch (iParam0)
	{
		case joaat("SANCHEZ"):
			return 2;
		
		default:
	}
	return 1;
}

void func_108()//Position - 0x3611
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	if ((func_111(iVar0) || func_109(138, iVar0, 0, 0)) && iLocal_1484 < 100)
	{
		iLocal_1484++;
		func_108();
	}
	else
	{
		iLocal_1484 = 0;
		switch (iVar0)
		{
			case 0:
				Local_130.f_F = joaat("CADDY");
				break;
			
			case 1:
				Local_130.f_F = joaat("BMX");
				break;
			
			case 2:
				Local_130.f_F = joaat("TRIBIKE");
				break;
			
			case 3:
				Local_130.f_F = joaat("SANCHEZ");
				break;
			
			case 4:
				Local_130.f_F = joaat("FAGGIO2");
				break;
			
			case 5:
				Local_130.f_F = joaat("LECTRO");
				break;
			
			case 6:
				Local_130.f_F = joaat("TRACTOR2");
				break;
			}
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36DD
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
	iVar1 = func_110(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_40001.f_1F3F)
		{
			if (Global_261C61.f_82[iVar0 /*2*/] == iVar1 && Global_261C61.f_82[iVar0 /*2*/].f_1 == func_91(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x375C
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

int func_111(int iParam0)//Position - 0x37F0
{
	switch (iParam0)
	{
		case 0:
			return Global_40001.f_2B29;
		
		case 1:
			return Global_40001.f_2B2A;
		
		case 2:
			return Global_40001.f_2B2B;
		
		case 3:
			return (Global_40001.f_2B2C && Global_40001.f_2B2D);
		
		case 4:
			return Global_40001.f_2B2E;
		
		case 5:
			return Global_40001.f_2B2F;
		
		case 6:
			return Global_40001.f_2B30;
		
		default:
	}
	return 0;
}

void func_112()//Position - 0x387C
{
	if (!func_5(CAM::_0xDC9DA9E8789F5246()) && func_1398(0, 1, 1))
	{
		if (func_1396())
		{
			func_1279();
		}
		if (Local_130.f_15 != func_11())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 2))
			{
				func_1266(138, 1065353216, 1065353216, 0, 0, 0, 0);
				MISC::SET_BIT(&iLocal_110, 2);
			}
			func_1252(8);
		}
		switch (Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3)
		{
			case 0:
				if (Local_130.f_3 > 0)
				{
					if (Local_130.f_16)
					{
						func_1251();
					}
					HUD::FLASH_MINIMAP_DISPLAY();
					func_1239();
					func_1238(1);
				}
				break;
			
			case 1:
				func_1252(13);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 13))
				{
					func_1232();
				}
				if (Local_1477.f_9 == 0)
				{
					Local_1477.f_9 = NETWORK::_GET_POSIX_TIME();
				}
				if (Local_130.f_3 > 2)
				{
					func_1238(3);
				}
				else if (Local_130.f_15 == CAM::_0xDC9DA9E8789F5246())
				{
					if (Local_1477.f_B == 0)
					{
						Local_1477.f_B = NETWORK::_GET_POSIX_TIME();
					}
					func_1231();
					func_1238(2);
				}
				else
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
					{
						if (func_1230(NETSHOP::_NETWORK_SHOP_BASKET_START()))
						{
							func_1252(5);
						}
					}
					if (Local_130.f_3 == 1 && func_1229(0))
					{
						func_1252(6);
					}
					func_1228(0);
				}
				func_1227(0);
				func_1223();
				func_395(&(Local_130.f_10), &uLocal_126, &uLocal_128, 1);
				func_394();
				func_385();
				func_383();
				func_359();
				func_356();
				func_1279();
				break;
			
			case 2:
				if (Local_130.f_3 > 2)
				{
					func_1238(3);
				}
				else if (Local_130.f_15 != CAM::_0xDC9DA9E8789F5246())
				{
					func_355(83);
					func_1238(1);
				}
				else
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 2))
					{
						func_1232();
					}
					if (Local_1477.f_B == 0)
					{
						Local_1477.f_B = NETWORK::_GET_POSIX_TIME();
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
				{
					func_1252(0);
				}
				if (func_354("AMPP_NEAR") || func_354("AMPP_NEAR2"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_1223();
				func_395(&(Local_130.f_10), &uLocal_126, &uLocal_128, 1);
				func_394();
				func_385();
				func_359();
				func_1279();
				break;
			
			case 3:
				if (func_346(&uLocal_119, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3))
				{
					func_1238(5);
				}
				if (Local_130.f_15 == CAM::_0xDC9DA9E8789F5246())
				{
					if (Local_1477.f_B == 0)
					{
						Local_1477.f_B = NETWORK::_GET_POSIX_TIME();
					}
				}
				func_345();
				func_344();
				func_259();
				func_257();
				func_1228(0);
				func_256();
				func_1279();
				break;
			
			case 4:
				if (Local_130.f_3 > 4)
				{
					func_1238(5);
				}
				else
				{
					func_251();
				}
				break;
			
			case 5:
				break;
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_116))
	{
		HUD::REMOVE_BLIP(&iLocal_116);
	}
	func_229();
	func_198();
	func_153();
	func_129();
	func_123();
	func_119();
	func_113();
}

void func_113()//Position - 0x3B50
{
	if (func_118())
	{
		func_114(Local_130.f_10);
	}
}

void func_114(var uParam0)//Position - 0x3B67
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(uParam0), 0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(uParam0)))
			{
				if (func_116(NETWORK::NET_TO_VEH(uParam0), 1, 0, 0, 0, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(uParam0), Global_1806E7.f_9, 10f, 10f, 10f, 0, 1, 0))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 24);
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0))
					{
						MISC::CLEAR_AREA(Global_1806E7.f_9, 20f, 1, 0, 0, false);
						ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(uParam0), Global_1806E7.f_9, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(NETWORK::NET_TO_VEH(uParam0), 1084227584);
					}
				}
				else if (func_115(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(uParam0), 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(NETWORK::NET_TO_ENT(uParam0)))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(uParam0)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(uParam0), AUDIO::_0x0626A247D2405330()))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(uParam0), 1, 1);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(uParam0), Global_1806E7.f_9, 10f, 10f, 10f, 0, 1, 0))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 24);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0))
				{
					MISC::CLEAR_AREA(Global_1806E7.f_9, 20f, 1, 0, 0, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(uParam0), Global_1806E7.f_9, 0, 0, 1);
				}
			}
		}
	}
}

int func_115(int iParam0, int iParam1, int iParam2)//Position - 0x3CF5
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x3D3B
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
			iVar2 = func_117(iParam0, (iVar0 - 1), bParam6, iParam7);
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

int func_117(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3DEE
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

bool func_118()//Position - 0x3E89
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 24);
}

void func_119()//Position - 0x3E9D
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_114)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_114));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			func_121(iVar0, 2);
			if (func_120(iLocal_114))
			{
				iLocal_1481++;
			}
			iLocal_1480++;
		}
	}
	iLocal_114++;
	if (iLocal_114 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (iLocal_1480 > iLocal_1478)
		{
			iLocal_1478 = iLocal_1480;
		}
		else
		{
			iLocal_1479 = (iLocal_1478 - iLocal_1480);
		}
		if (iLocal_1481 > iLocal_1482)
		{
			iLocal_1482 = iLocal_1481;
		}
		iLocal_1480 = 0;
		iLocal_114 = 0;
		iLocal_1481 = 0;
	}
}

int func_120(int iParam0)//Position - 0x3F2C
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[iParam0 /*4*/].f_1, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[iParam0 /*4*/].f_1, 4));
	}
	return 0;
}

void func_121(int iParam0, int iParam1)//Position - 0x3F69
{
	bool bVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 0))
	{
		return;
	}
	if (func_26(&(Global_1806E7.f_12)))
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
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (func_122(iParam0))
	{
		bVar0 = false;
	}
	if (func_78(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_5(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1806E7++;
	}
}

bool func_122(int iParam0)//Position - 0x4039
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10);
}

void func_123()//Position - 0x4052
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(Local_130.f_10), 0))
		{
			if (func_125(CAM::_0xDC9DA9E8789F5246()) || func_5(CAM::_0xDC9DA9E8789F5246()))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_130.f_10), 0);
				if (func_124(0, 0))
				{
					BRAIN::TASK_LEAVE_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_130.f_10), 0);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_130.f_10), 1);
			}
		}
	}
}

int func_124(bool bParam0, bool bParam1)//Position - 0x40C5
{
	if (Local_130.f_15 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
		{
			if (func_115(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_130.f_10), 1))
			{
				if (bParam1)
				{
					if (func_14(AUDIO::_0x0626A247D2405330(), 1) == 4294967295)
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
	}
	return 0;
}

bool func_125(int iParam0)//Position - 0x411E
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		if ((func_128() && !func_127()) || func_126(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		if (func_26(&(Global_1806E7.f_D)))
		{
			if (!func_1(&(Global_1806E7.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_25(&(Global_1806E7.f_D));
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9);
}

bool func_126(int iParam0, int iParam1)//Position - 0x41B0
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

bool func_127()//Position - 0x41C9
{
	return Global_1406A0.f_1;
}

bool func_128()//Position - 0x41D7
{
	return Global_1406A0;
}

void func_129()//Position - 0x41E3
{
	vector3 vVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_130.f_10), 0) };
		iVar1 = func_145(vVar0, 6, 4294967295, 0, 1, 4294967295);
		vVar2 = { func_134(iVar1, 0) };
		iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar2, func_130(iVar1));
		iVar4 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_130.f_10));
		if (iVar3 != 0 && iVar3 == iVar4)
		{
			if (!Global_26862F.f_12C5)
			{
				Global_26862F.f_12C5 = 1;
			}
			return;
		}
	}
	if (Global_26862F.f_12C5)
	{
		Global_26862F.f_12C5 = 0;
	}
}

char* func_130(int iParam0)//Position - 0x4278
{
	switch (iParam0)
	{
		case 4294967295:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_131(Global_17447);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
	}
	return "";
}

char* func_131(int iParam0)//Position - 0x458F
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_132() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_132()//Position - 0x46AD
{
	return func_133(CAM::_0xDC9DA9E8789F5246());
}

var func_133(int iParam0)//Position - 0x46BD
{
	return MISC::GET_BITS_IN_RANGE(Global_24FBF9[iParam0 /*413*/].f_135.f_3, 28, 31);
}

Vector3 func_134(int iParam0, bool bParam1)//Position - 0x46DA
{
	switch (iParam0)
	{
		case 4294967295:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_144(Global_17447);
			break;
		
		case 46:
			if (Global_184157 != func_11())
			{
				if (func_143(Global_184157))
				{
					return func_136(2, 2);
				}
				else if (func_135(Global_184157))
				{
					return func_136(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_135(int iParam0)//Position - 0x4CAF
{
	if (iParam0 != func_11())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_136(int iParam0, int iParam1)//Position - 0x4D0D
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184157 != func_11())
	{
		if (iParam1 == 3)
		{
			if (func_137(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[Global_184157 /*790*/].f_111.f_FA, 4))
			{
				if (func_137(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[Global_184157 /*790*/].f_111.f_FA, 5))
			{
				if (func_137(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_137(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x4DBB
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_142(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_142(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_140(iParam0) };
	}
	else
	{
		Var2 = { func_139(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_138(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_138(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_138(vector3 vParam0, float fParam1)//Position - 0x4E50
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_139(int iParam0)//Position - 0x4E94
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_140(int iParam0)//Position - 0x5018
{
	return func_141(iParam0);
}

struct<6> func_141(int iParam0)//Position - 0x5026
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_142(int iParam0, var uParam1)//Position - 0x5AED
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x5B6F
{
	if (iParam0 != func_11())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_144(int iParam0)//Position - 0x5BCD
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_132() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_145(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x5DD8
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (iParam1 == 6 || iParam1 == func_152(iVar0))
		{
			if (!bParam3 || func_146(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_134(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 4294967295)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_146(int iParam0)//Position - 0x5E7A
{
	return func_147(iParam0, 0, 0);
}

int func_147(int iParam0, int iParam1, bool bParam2)//Position - 0x5E8A
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
		if (func_151() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_148(func_150(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2)//Position - 0x5EF4
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_149(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x5F26
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_29();
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

int func_150(int iParam0)//Position - 0x5F5A
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

int func_151()//Position - 0x625D
{
	return Global_6373;
}

int func_152(int iParam0)//Position - 0x6268
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

void func_153()//Position - 0x650F
{
	if (Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 == 2)
	{
		if (!func_197(CAM::_0xDC9DA9E8789F5246()))
		{
			func_154(1);
		}
	}
	else if (func_197(CAM::_0xDC9DA9E8789F5246()))
	{
		func_154(0);
	}
}

void func_154(bool bParam0)//Position - 0x6549
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 0))
		{
			Global_258ACA = func_196(CAM::_0xDC9DA9E8789F5246());
			if (Global_258ACA == 4294967295)
			{
				Global_258ACA = Global_1806E7.f_4;
			}
			if (func_195(Global_258ACA) == 0)
			{
				if (func_194(1) > 0)
				{
					func_193(26, 4294967295);
				}
			}
			if (func_128())
			{
				func_186(0);
				func_185();
			}
			if (func_184(0))
			{
				iVar1 = func_148(2480, 4294967295, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, 0);
				func_185();
			}
			if (func_184(func_183(func_196(CAM::_0xDC9DA9E8789F5246()))))
			{
				iVar1 = func_148(2480, 4294967295, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, func_183(func_196(CAM::_0xDC9DA9E8789F5246())));
				func_185();
			}
			if (func_182())
			{
				func_185();
			}
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 0))
	{
		if ((!func_181() && !func_180()) && !func_179())
		{
			Global_258ACA = 4294967295;
			func_27(26, 4294967295);
		}
		else if (func_195(Global_258ACA) == 0)
		{
			iVar0 = func_164(1);
			if (iVar0 > 0)
			{
				func_159(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_155(1932, 1, 4294967295);
				func_159(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_30(26, 4294967295))
		{
			Global_258ACA = 4294967295;
			func_27(26, 4294967295);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 0);
	}
}

void func_155(int iParam0, int iParam1, int iParam2)//Position - 0x66CD
{
	int iVar0;
	
	iVar0 = func_148(iParam0, func_149(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_158(iParam0))
	{
		func_157(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_156(iParam0, iVar0, iParam2, 1);
	}
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x670F
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_149(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_149(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_149(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_149(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_149(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_149(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_149(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_149(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_149(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_149(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_149(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_149(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_149(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_149(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_149(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_149(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_149(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_149(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_149(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_149(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_149(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_149(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_149(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_149(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_149(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_149(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_149(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_149(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_149(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_149(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_149(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_149(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_149(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6F1A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_149(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_158(int iParam0)//Position - 0x6F4A
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

void func_159(int iParam0, int iParam1)//Position - 0x7154
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_162(iParam0))
	{
		func_161(iParam0, iVar0);
	}
	else
	{
		func_160(iParam0, iVar0);
	}
}

void func_160(int iParam0, int iParam1)//Position - 0x7188
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

void func_161(int iParam0, int iParam1)//Position - 0x72AD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_162(int iParam0)//Position - 0x72C9
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

int func_163(int iParam0)//Position - 0x734D
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

int func_164(int iParam0)//Position - 0x736B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_25866F == 0)
	{
		return 0;
	}
	if (func_179())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_178() || func_176()))
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
	if (func_175(Global_19A8A.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_258208)
	{
		iVar0 = 1;
	}
	if (func_174(512))
	{
		iVar0 = 1;
	}
	if (func_173(128))
	{
		iVar0 = 1;
	}
	if (Global_14137C == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_172())
	{
		iVar0 = 0;
	}
	if (Global_25843E)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_170())
		{
			if (Global_440000.f_2032F == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_78(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = 0;
	}
	if (func_169())
	{
		iVar0 = 0;
	}
	if ((Global_258253 || Global_258252) || Global_141364)
	{
		if (func_176())
		{
			iVar0 = 0;
		}
	}
	Global_25843E = 0;
	Global_258252 = 0;
	Global_258253 = 0;
	Global_141364 = 0;
	Global_258208 = 0;
	func_167(&(Global_19A8A.f_1), 32);
	func_166(512);
	func_165(128);
	return iVar0;
}

void func_165(int iParam0)//Position - 0x74BE
{
	Global_19AC3 = (Global_19AC3 - (Global_19AC3 && iParam0));
}

void func_166(int iParam0)//Position - 0x74D6
{
	Global_19AC4 = (Global_19AC4 - (Global_19AC4 && iParam0));
}

void func_167(var uParam0, int iParam1)//Position - 0x74EE
{
	func_168(uParam0, iParam1);
}

void func_168(var uParam0, var uParam1)//Position - 0x74FE
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_169()//Position - 0x7513
{
	if (((Global_18060A || Global_1805ED) || func_78(CAM::_0xDC9DA9E8789F5246(), 0)) || func_75())
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x754A
{
	switch (func_171())
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

int func_171()//Position - 0x7584
{
	return Global_255F11.f_1.f_B04;
}

bool func_172()//Position - 0x7595
{
	return Global_140842;
}

bool func_173(int iParam0)//Position - 0x75A1
{
	return (Global_19AC3 && iParam0) != 0;
}

bool func_174(int iParam0)//Position - 0x75B2
{
	return (Global_19AC4 && iParam0) != 0;
}

bool func_175(var uParam0, int iParam1)//Position - 0x75C3
{
	return (uParam0 && iParam1) != 0;
}

int func_176()//Position - 0x75D2
{
	if (func_195(Global_258ACA))
	{
		return 0;
	}
	if (func_177(CAM::_0xDC9DA9E8789F5246(), 146))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0, int iParam1)//Position - 0x75FB
{
	if (Global_18CD5B[iParam0 /*560*/] == iParam1)
	{
		return func_197(iParam0);
	}
	return 0;
}

int func_178()//Position - 0x761B
{
	if (func_195(Global_258ACA))
	{
		return 0;
	}
	if (func_197(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

bool func_179()//Position - 0x7642
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1406A7, 0);
}

bool func_180()//Position - 0x7653
{
	return Global_14083A;
}

bool func_181()//Position - 0x765F
{
	return Global_140859;
}

int func_182()//Position - 0x766B
{
	if (Global_252F9E.f_47F.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_183(int iParam0)//Position - 0x7685
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

bool func_184(int iParam0)//Position - 0x7718
{
	int iVar0;
	
	iVar0 = func_148(2480, 4294967295, 0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0);
}

void func_185()//Position - 0x7733
{
	if (func_182())
	{
		Global_252F9E.f_47F.f_10 = 1;
	}
}

void func_186(int iParam0)//Position - 0x774C
{
	if (func_128())
	{
		if (iParam0 == 1)
		{
			if (Global_26862F.f_111E == 4294967295)
			{
				Global_26862F.f_111E = 60000;
			}
			func_10(&(Global_26862F.f_111C), 0, 0);
			if (Global_26862F.f_1121 == 4294967295)
			{
				Global_26862F.f_1121 = 10000;
			}
			func_10(&(Global_26862F.f_111F), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_8 = 0;
			func_192(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_191()) && !func_187(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_EC6C8 = 0;
		}
	}
}

int func_187(int iParam0)//Position - 0x77E6
{
	if (func_188(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0, bool bParam1)//Position - 0x780A
{
	if (bParam1)
	{
		if (func_189(iParam0))
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

bool func_189(int iParam0)//Position - 0x7836
{
	return func_190(iParam0);
}

bool func_190(int iParam0)//Position - 0x7844
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

bool func_191()//Position - 0x785E
{
	return Global_255C02.f_2D9;
}

void func_192(bool bParam0)//Position - 0x786D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_128())
		{
			if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 0))
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
			if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
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

void func_193(int iParam0, int iParam1)//Position - 0x7966
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_28(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_194(int iParam0)//Position - 0x79C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_14137C == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_172())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_170())
		{
			if (Global_440000.f_2032F == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_78(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = 0;
	}
	if (func_169())
	{
		iVar0 = 0;
	}
	Global_25866F = 1;
	return iVar0;
}

int func_195(int iParam0)//Position - 0x7A2F
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

int func_196(int iParam0)//Position - 0x7B45
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_197(int iParam0)//Position - 0x7B64
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_198()//Position - 0x7B8A
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (((((((Local_130.f_3 == 2 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 3)) && !func_5(CAM::_0xDC9DA9E8789F5246())) && !func_125(CAM::_0xDC9DA9E8789F5246())) && func_1398(0, 1, 1)) && !func_228()) && !func_215(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_214(CAM::_0xDC9DA9E8789F5246()))
	{
		func_209(10, 0, 0, 0, 0);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_130.f_10), 0))
			{
				vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_130.f_10), 1) };
				fVar1 = 250f;
				fVar2 = 75f;
				if (Local_130.f_F == joaat("CADDY"))
				{
					fVar1 = 100f;
					fVar2 = 50f;
				}
				func_203(vVar0, 0f, fVar1, 1, fVar2, 0, 1, 1115815936, 1, 1, 0, 1, 3212836864);
				func_202(vVar0, 1, 0);
			}
		}
		if (iLocal_118 == 0)
		{
			iLocal_118 = 1;
		}
	}
	else
	{
		func_201();
		func_199();
		if (iLocal_118)
		{
			iLocal_118 = 0;
		}
	}
}

void func_199()//Position - 0x7CAC
{
	if (Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_200();
	}
}

void func_200()//Position - 0x7CC5
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

void func_201()//Position - 0x7D22
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_202(vector3 vParam0, int iParam1, int iParam2)//Position - 0x7D47
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_203(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x7D71
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
	Var0.f_15 = iParam7;
	Var0.f_16 = iParam8;
	if (func_204(CAM::_0xDC9DA9E8789F5246()))
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

int func_204(int iParam0)//Position - 0x7E9A
{
	if (((func_207(iParam0, 1) || func_206(iParam0)) || func_87(iParam0, 0)) || func_205(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x7ED6
{
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_206(int iParam0)//Position - 0x7EF9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

bool func_207(int iParam0, bool bParam1)//Position - 0x7F1A
{
	if (Global_1406BF != 0)
	{
		return func_208(iParam0) != 0;
	}
	return func_188(iParam0, bParam1);
}

int func_208(int iParam0)//Position - 0x7F40
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7F62
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_11())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_210())
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

int func_210()//Position - 0x8003
{
	if (((func_213(CAM::_0xDC9DA9E8789F5246()) == 229 || func_213(CAM::_0xDC9DA9E8789F5246()) == 191) || func_212()) || func_211())
	{
		return 0;
	}
	return 1;
}

bool func_211()//Position - 0x8043
{
	return Global_1805F4;
}

int func_212()//Position - 0x804F
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x8064
{
	if (func_87(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_214(int iParam0)//Position - 0x8087
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

int func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0x80C6
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
		if (func_227(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_225(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_223(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_222(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_221(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_219(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_218(iParam0, 0))
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

int func_216(int iParam0)//Position - 0x81D9
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)//Position - 0x8220
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

int func_218(int iParam0, bool bParam1)//Position - 0x857A
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
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_11())
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x8608
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x864F
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x8696
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_11())
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x86F6
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x873D
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)//Position - 0x8783
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x87C9
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x880F
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x8855
{
	if (iParam0 != func_11())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_217(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

bool func_228()//Position - 0x889B
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

void func_229()//Position - 0x88B2
{
	char* sVar0;
	char* sVar1;
	
	if ((((func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1) && func_1230(NETSHOP::_NETWORK_SHOP_BASKET_START())) && !func_5(CAM::_0xDC9DA9E8789F5246())) && !func_125(CAM::_0xDC9DA9E8789F5246())) && func_1398(0, 1, 1))
	{
		if (Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 == 2)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_130.f_F))
			{
				sVar0 = "AMPP_HOLD";
			}
			else
			{
				sVar0 = "AMPP_HOLD2";
			}
			func_248(sVar0, 0);
		}
		else if (Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 == 1 && Local_130.f_3 == 2)
		{
			if (Local_130.f_15 != func_11() && func_15(Local_130.f_15, 1, 1))
			{
				if (func_103(CAM::_0xDC9DA9E8789F5246(), Local_130.f_15))
				{
					func_242("AMPP_GBOWNER", Local_130.f_15, "AMPP_VEHICLE", 1, func_245(0), 0);
				}
				else
				{
					func_237("AMPP_OWNER", PLAYER::GET_PLAYER_NAME(Local_130.f_15), 0, 1);
				}
			}
			else if (!func_124(1, 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_130.f_F))
					{
						sVar1 = "AMPP_NOWNERSD";
					}
					else
					{
						sVar1 = "AMPP_NOWNER2SD";
					}
				}
				else if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_130.f_F))
				{
					sVar1 = "AMPP_NOWNER";
				}
				else
				{
					sVar1 = "AMPP_NOWNER2";
				}
				func_248(sVar1, 0);
			}
			else
			{
				func_230();
			}
		}
		else
		{
			func_230();
		}
	}
	else
	{
		func_230();
	}
}

void func_230()//Position - 0x8A0E
{
	if (!func_236())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_231();
}

void func_231()//Position - 0x8A3B
{
	func_233();
	func_232(0);
}

void func_232(bool bParam0)//Position - 0x8A4C
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

void func_233()//Position - 0x8ADE
{
	if (!func_235())
	{
	}
	if (func_236())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_234();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_234()//Position - 0x8B07
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

int func_235()//Position - 0x8D79
{
	if (!func_236())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_234();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_236()//Position - 0x8D9F
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_237(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x8DB5
{
	var uVar0;
	
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
	if (HUD::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (func_241(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	uVar0 = Global_140740.f_36;
	func_231();
	Global_140740 = 9;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = iParam3;
	Global_140740.f_38 = iParam3;
	Global_140740.f_36 = uVar0;
	func_240();
	func_239(bParam2);
	func_238();
	return 1;
}

void func_238()//Position - 0x8E7F
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_239(bool bParam0)//Position - 0x8E92
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_240()//Position - 0x8EB8
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

bool func_241(char* sParam0, char* sParam1)//Position - 0x8EDD
{
	if (!func_236())
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

void func_242(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x8F35
{
	if (func_243(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_140740 = 15;
		Global_140740.f_38 = iParam3;
		Global_140740.f_39 = iParam4;
		Global_140740.f_36 = iParam1;
	}
}

int func_243(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x8F70
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
	if (HUD::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam2) > 63)
	{
		return 0;
	}
	if (func_244(sParam0, sParam1, sParam2) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_231();
	Global_140740 = 10;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	StringCopy(&(Global_140740.f_20), sParam2, 64);
	Global_140740.f_3A = uParam4;
	Global_140740.f_38 = uParam4;
	func_240();
	func_239(bParam3);
	func_238();
	return 1;
}

bool func_244(char* sParam0, char* sParam1, char* sParam2)//Position - 0x9052
{
	if (!func_236())
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

int func_245(bool bParam0)//Position - 0x90D0
{
	if (Local_130.f_15 != func_11())
	{
		if (func_247(1) && func_65(Local_130.f_15) == func_246())
		{
			return func_48(Local_130.f_15, 4294967294, 0, 0, 0);
		}
	}
	if (bParam0)
	{
		return 29;
	}
	return 6;
}

int func_246()//Position - 0x9119
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_247(bool bParam0)//Position - 0x912E
{
	return func_66(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

void func_248(char* sParam0, bool bParam1)//Position - 0x9140
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_249(sParam0))
	{
		return;
	}
	func_231();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_240();
	func_239(bParam1);
	func_238();
}

bool func_249(char* sParam0)//Position - 0x91AB
{
	if (!func_236())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_250(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_250(char* sParam0)//Position - 0x91EF
{
	if (!func_236())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

void func_251()//Position - 0x9221
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_130.f_10))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_130.f_10), 0))
		{
			if ((10000 - func_8(&(Local_130.f_9), 0, 0)) >= 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_130.f_10), 50f, 50f, 50f, 0, 1, 0))
				{
					func_253((Global_40001.f_2764 - func_8(&(Local_130.f_9), 0, 0)), "HTV_DESTR", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					func_252();
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_130.f_10), 50f, 50f, 50f, 0, 1, 0))
				{
					func_253(0, "HTV_DESTR", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					func_252();
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_130.f_10))
				{
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_130.f_10), 1, 0, 4294967295);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_116))
	{
		HUD::REMOVE_BLIP(&iLocal_116);
	}
}

void func_252()//Position - 0x9317
{
	Global_14E696.f_440 = 1;
}

void func_253(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9327
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_255(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_254(7, iVar0);
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

void func_254(int iParam0, int iParam1)//Position - 0x9475
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_255(int iParam0, int iParam1)//Position - 0x948E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_256()//Position - 0x94A7
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_130.f_10))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_130.f_10);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				VEHICLE::_0xB28B1FE5BFADD7F5(NETWORK::NET_TO_VEH(Local_130.f_10), 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_130.f_10), true);
				unk_0x54D1FE7811E0FBC6(NETWORK::NET_TO_VEH(Local_130.f_10), 1, 0);
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
					{
						iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
					}
					GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, 10);
					GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, 11);
					GRAPHICS::_0x35FB78DC42B7BD21(&iVar1, 12);
					DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar1);
				}
			}
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_116))
	{
		HUD::REMOVE_BLIP(&iLocal_116);
	}
}

void func_257()//Position - 0x9564
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 1) && (func_258() || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3)))
	{
		if (func_1230(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3))
			{
				Local_1477.f_5 = 6;
				func_31("", "", 1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 0))
			{
				Local_1477.f_5 = 2;
				func_1252(4);
			}
			else if (Local_130.f_15 == func_11())
			{
				Local_1477.f_5 = 2;
				func_1252(11);
			}
			else if (func_124(0, 0))
			{
				Local_1477.f_5 = 1;
				func_1252(1);
			}
			else
			{
				Local_1477.f_5 = 2;
				func_1252(2);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3))
		{
			func_31("", "", 1);
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 0))
		{
			func_1252(9);
		}
		else if (Local_130.f_15 == func_11())
		{
			func_1252(12);
		}
		else
		{
			func_1252(7);
		}
		MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 1);
	}
}

bool func_258()//Position - 0x9672
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 25);
}

void func_259()//Position - 0x9686
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 0))
	{
		if (func_5(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
			return;
		}
		if (func_125(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 4))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 0))
			{
				iVar3 = (Local_130.f_2 - iLocal_1483);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
				{
					iVar3 = func_343(iVar3, (Global_40001.f_2B28 + Global_40001.f_2B21));
				}
				else
				{
					iVar3 = func_343(iVar3, Global_40001.f_2B21);
				}
				iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar3) / 60f) / 1000f));
				if (iVar3 > Global_40001.f_2C3A)
				{
					iVar3 = Global_40001.f_2C3A;
				}
				else if (iVar3 < 1)
				{
					iVar3 = 1;
				}
				iVar2 = (func_342() * iVar3);
				if (func_124(0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 3))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(func_341()) * Global_40001.f_2C4F));
					iVar1 = (SYSTEM::ROUND((IntToFloat(func_340()) * Global_40001.f_2C50)) + (func_339() * iVar3));
				}
				else
				{
					func_337(1);
					iVar1 = (func_339() * iVar3);
				}
				func_317(&iVar0, 1);
				iVar0 = (iVar0 + iVar2);
				if (iVar0 > 0)
				{
					if (func_316())
					{
						func_304(1577781788, iVar0, &uVar4, 0, 1, 0);
					}
					else
					{
						NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PASS_THE_PARCEL", &uVar5);
					}
				}
				if (iVar1 > 0)
				{
					func_303();
					func_261(0, AUDIO::_0x0626A247D2405330(), "", 2658791846, 3041509490, iVar1, 1, 4294967295, 0, 0, 0);
				}
				Global_258AE3 = iVar0;
				Local_1477.f_6 = (Local_1477.f_6 + iVar0);
				if (!Global_40001.f_2C1C)
				{
					if (Local_1477.f_6 > 0)
					{
						func_260(13, Local_1477.f_6);
					}
				}
				Local_1477.f_7 = (Local_1477.f_7 + iVar1);
			}
		}
		else
		{
			func_337(0);
		}
		MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
	}
}

void func_260(int iParam0, int iParam1)//Position - 0x989F
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

int func_261(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x9911
{
	return func_262(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_262(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x9933
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_272(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_268(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_263(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_263(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x99AC
{
	vector3 vVar0;
	
	vVar0 = { func_266(iParam0, 1) };
	if (iParam0 == func_265(AUDIO::_0x0626A247D2405330()))
	{
		func_264(1);
	}
	func_268(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_264(int iParam0)//Position - 0x99E0
{
	Global_252F9E.f_75E = iParam0;
}

int func_265(int iParam0)//Position - 0x99F1
{
	return iParam0;
}

Vector3 func_266(int iParam0, bool bParam1)//Position - 0x99FB
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
	if (iParam0 == func_267(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_267(int iParam0)//Position - 0x9ABF
{
	return iParam0;
}

void func_268(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x9AC9
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_271(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_270();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_269();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_269()//Position - 0x9BE0
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_270()//Position - 0x9C0A
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_271(vector3 vParam0, var uParam1, var uParam2)//Position - 0x9C25
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
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

var func_272(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9CBE
{
	var uVar0;
	
	uVar0 = func_273(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_273(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x9CE1
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_302(CAM::_0xDC9DA9E8789F5246()) || func_301(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_299() || func_297(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_296(sParam2))
	{
	}
	if (func_295())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_293(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_292(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_290(0, &iVar1);
					break;
				
				case 3:
					func_290(1, &iVar1);
					break;
				
				case 1:
					func_288(&iVar1);
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
			func_155(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_280((func_287(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_155(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_276(iVar1);
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
				func_274((func_275(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_274((func_275(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_274(int iParam0)//Position - 0x9EDF
{
	if (func_295())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_161(joaat("mpply_globalxp"), iParam0);
	}
}

int func_275(int iParam0)//Position - 0x9F0A
{
	if (iParam0 > 4294967295)
	{
		if (func_15(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_163(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_163(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_276(int iParam0)//Position - 0x9F5B
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_104(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_278(func_279(&Var0));
			if (iVar1 == 0)
			{
				func_277(&Global_150A08, iParam0);
				func_160(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_277(&Global_150A09, iParam0);
				func_160(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_277(&Global_150A0A, iParam0);
				func_160(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_277(&Global_150A0B, iParam0);
				func_160(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_277(&Global_150A0C, iParam0);
				func_160(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_277(var uParam0, int iParam1)//Position - 0xA02F
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_278(int iParam0)//Position - 0xA040
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

int func_279(var uParam0)//Position - 0xA09D
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

void func_280(int iParam0, int iParam1, int iParam2)//Position - 0xA0C0
{
	if (func_295())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_149(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_149(4294967295)])
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
		if (func_286(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_284(iParam0, 1);
		}
		func_156(639, iParam0, 4294967295, 1);
		func_157(640, func_284(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_149(4294967295)] = iParam0;
		func_281(7, 0);
	}
}

void func_281(int iParam0, int iParam1)//Position - 0xA1E1
{
	int iVar0;
	
	if (func_283(iParam0, iParam1))
	{
		iVar0 = func_282();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_282()//Position - 0xA204
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

int func_283(int iParam0, var uParam1)//Position - 0xA239
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

int func_284(int iParam0, bool bParam1)//Position - 0xA2BF
{
	if (bParam1)
	{
	}
	return func_285(iParam0, 0);
}

int func_285(int iParam0, int iParam1)//Position - 0xA2D3
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

int func_286(int iParam0)//Position - 0xA392
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

int func_287(int iParam0)//Position - 0xA3B7
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_149(4294967295)];
			}
			else if (func_286(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_149(4294967295)];
	}
	return 0;
}

void func_288(int iParam0)//Position - 0xA414
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_55(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_105(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_289(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_289(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_289(int iParam0, int iParam1)//Position - 0xA4FF
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_290(bool bParam0, int iParam1)//Position - 0xA520
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
				if (func_15(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_105(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_15(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_291(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_105(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_289(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_289(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_291(int iParam0, int iParam1)//Position - 0xA638
{
	return SYSTEM::VDIST(func_99(iParam0), func_99(iParam1));
	return 0f;
}

int func_292(int iParam0)//Position - 0xA654
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_289(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_293(int iParam0)//Position - 0xA68B
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_287(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_287(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_294(8000, 0, 0) > 0)
	{
		if (func_294(8000, 0, 0) < (iParam0 + func_287(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_294(8000, 0, 0) - func_287(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_294(int iParam0, bool bParam1, int iParam2)//Position - 0xA6EF
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

int func_295()//Position - 0xA717
{
	return 1;
}

int func_296(char* sParam0)//Position - 0xA720
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

int func_297(int iParam0)//Position - 0xA759
{
	return func_298(func_213(iParam0));
}

int func_298(int iParam0)//Position - 0xA76B
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_299()//Position - 0xA785
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_43();
	}
	return func_300(Global_440000.f_1FEDE);
}

int func_300(int iParam0)//Position - 0xA7A9
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

bool func_301(int iParam0)//Position - 0xA7E3
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_302(int iParam0)//Position - 0xA7F8
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_303()//Position - 0xA80D
{
	Global_258851 = 1;
}

void func_304(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xA81A
{
	int iVar0;
	
	if (!func_316())
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
				func_305(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_305(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_305(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_305(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xAD87
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_316())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_29()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_312(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_311(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_306(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xAF32
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_307(iParam0);
	}
}

void func_307(int iParam0)//Position - 0xAF6A
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_316())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_310(iParam0))
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
		func_308(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_308(var uParam0)//Position - 0xAFBE
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
	func_309(&(uParam0->f_D));
	func_309(&(uParam0->f_D.f_D));
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

void func_309(var uParam0)//Position - 0xB0C5
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

int func_310(int iParam0)//Position - 0xB10D
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_311(int iParam0, int iParam1)//Position - 0xB137
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xB14B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_316())
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
				func_313(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_313(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xB287
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
	iVar1 = func_315(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_314();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_314()//Position - 0xB319
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_315(int iParam0)//Position - 0xB329
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_316()//Position - 0xB33B
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_317(int iParam0, int iParam1)//Position - 0xB352
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_336())
		{
			if (func_247(0))
			{
				if (!func_332(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_246()))
					{
						if (func_331() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_331());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_329(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_322("GB_BCUT_TICK1", func_246(), iVar0, 0, 0, 1, 1);
						}
						func_321(20);
						func_318(func_246(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_318(int iParam0, int iParam1, int iParam2)//Position - 0xB3F3
{
	struct<8> Var0;
	
	if (func_15(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_320(iParam0);
		func_319(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_315(iParam0));
	}
}

void func_319(var uParam0, var uParam1)//Position - 0xB449
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_320(int iParam0)//Position - 0xB463
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_321(int iParam0)//Position - 0xB477
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_322(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xB4A0
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_48(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_327(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_323(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_323(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xB538
{
	int iVar0;
	
	if ((!func_326() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_78(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_324(iParam2);
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

int func_324(int iParam0)//Position - 0xB640
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_325(iVar0);
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

void func_325(int iParam0)//Position - 0xB6A2
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_326()//Position - 0xB6DB
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_327(char* sParam0)//Position - 0xB6EC
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_328(&cVar0);
}

var func_328(char[4] cParam0)//Position - 0xB710
{
	return cParam0;
}

void func_329(int iParam0, bool bParam1)//Position - 0xB71A
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_330(1);
	}
	else
	{
		iVar1 = func_330(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_330(bool bParam0)//Position - 0xB74C
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_331()//Position - 0xB772
{
	return Global_40001.f_2FF4;
}

bool func_332(bool bParam0)//Position - 0xB781
{
	return func_333(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_333(int iParam0, bool bParam1)//Position - 0xB793
{
	return func_334(iParam0, bParam1, 1);
}

int func_334(int iParam0, bool bParam1, int iParam2)//Position - 0xB7A4
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_335(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_11() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0, int iParam1)//Position - 0xB800
{
	if (iParam0 != func_11())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_11())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_336()//Position - 0xB84F
{
	return func_67(CAM::_0xDC9DA9E8789F5246());
}

void func_337(bool bParam0)//Position - 0xB85F
{
	if (bParam0)
	{
		if (func_338(1))
		{
			MISC::SET_BIT(&Global_180700, 1);
		}
	}
	else if (func_338(2))
	{
		MISC::SET_BIT(&Global_180700, 2);
	}
}

int func_338(int iParam0)//Position - 0xB891
{
	int iVar0;
	
	iVar0 = func_148(2534, 4294967295, 0);
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

int func_339()//Position - 0xB962
{
	return Global_40001.f_2A90;
}

int func_340()//Position - 0xB971
{
	return Global_40001.f_2A92;
}

int func_341()//Position - 0xB980
{
	return Global_40001.f_2A91;
}

int func_342()//Position - 0xB98F
{
	return Global_40001.f_2A8F;
}

int func_343(int iParam0, int iParam1)//Position - 0xB99E
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_344()//Position - 0xB9B4
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_SUDDEN_DEATH_STOP_MUSIC");
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_110, 3);
	}
}

void func_345()//Position - 0xB9E8
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

int func_346(var uParam0, bool bParam1)//Position - 0xBA86
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_353()) && !(func_87(CAM::_0xDC9DA9E8789F5246(), 0) && (func_83(CAM::_0xDC9DA9E8789F5246()) || func_352(CAM::_0xDC9DA9E8789F5246())))) && !func_226(CAM::_0xDC9DA9E8789F5246()))
	{
		func_351();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_26(&(uParam0->f_3)))
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
				func_350(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_26(&(uParam0->f_5)))
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
				func_347();
				func_350(uParam0, 2);
			}
			break;
		
		case 2:
			func_347();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_354("AMEV_LBD_HELP"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_350(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				func_350(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			return 1;
	}
	return 0;
}

void func_347()//Position - 0xBC02
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_349("AMEV_LBD_HELP", 4294967295);
			func_348(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_348(int iParam0)//Position - 0xBC85
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_353())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_349(char* sParam0, int iParam1)//Position - 0xBCB4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

void func_350(var uParam0, int iParam1)//Position - 0xBCCB
{
	*uParam0 = iParam1;
}

void func_351()//Position - 0xBCD8
{
	Global_258852 = 1;
}

bool func_352(int iParam0)//Position - 0xBCE5
{
	return func_82(iParam0, 19);
}

bool func_353()//Position - 0xBCF5
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

int func_354(char* sParam0)//Position - 0xBD0B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_355(int iParam0)//Position - 0xBD1E
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

void func_356()//Position - 0xBD6A
{
	float fVar0;
	
	if (Local_130.f_3 >= 2)
	{
		if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
			{
				fVar0 = func_358(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_ENT(Local_130.f_10), 1);
				if (fVar0 <= IntToFloat(Global_40001.f_2C78))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 3);
					}
				}
				else if (fVar0 > IntToFloat(Global_40001.f_2C79))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 3))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 3);
					}
				}
				if (func_358(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_ENT(Local_130.f_10), 1) <= IntToFloat(func_357()))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 4))
					{
						MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 4);
						if (iLocal_1483 == 0)
						{
							iLocal_1483 = HUD::_0x13C4B962653A5280();
						}
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 4))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 4);
				}
			}
		}
	}
}

int func_357()//Position - 0xBE75
{
	return Global_40001.f_2A95;
}

float func_358(int iParam0, int iParam1, bool bParam2)//Position - 0xBE84
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

void func_359()//Position - 0xBEE2
{
	vector3 vVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_130.f_10), 1) };
		func_360(138, vVar0, &uLocal_117, SYSTEM::TO_FLOAT(Global_40001.f_2C78), 1148846080, iLocal_118);
	}
}

void func_360(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, var uParam5)//Position - 0xBF24
{
	float fVar0;
	int iVar1;
	
	Global_1806E7.f_6 = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), vParam1);
	if (fVar0 < fParam3 && !func_6(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam0 != 146 && !func_126(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			func_202(vParam1, 1, 0);
		}
		if ((!*uParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 3)) && func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 1;
			func_380(func_382(iParam0));
			GRAPHICS::_0x54E22EA2C1956A8D(func_379(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_378(iParam0);
				HUD::_0x14621BB1DF14E2B2(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), iVar1, 1);
					HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 1);
				}
				MISC::SET_BIT(&(Global_1806E7.f_1), 8);
			}
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 3);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam4) && !func_6(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 3) && func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			func_377();
			GRAPHICS::_0x54E22EA2C1956A8D(Global_40001.f_2C18);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 3);
			MISC::SET_BIT(&(Global_1806E7.f_1), 3);
		}
	}
	else if ((*uParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 3)) && func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		*uParam2 = 0;
		func_377();
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 8);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 3);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1806E7.f_1), 3);
		if (iParam0 != 146 && uParam5)
		{
			func_361();
		}
	}
}

void func_361()//Position - 0xC108
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_375();
	func_364(1, 1, 0);
	func_362();
}

void func_362()//Position - 0xC13E
{
	func_363(0, 0);
}

void func_363(int iParam0, int iParam1)//Position - 0xC14C
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_364(bool bParam0, bool bParam1, bool bParam2)//Position - 0xC164
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
		func_374();
	}
	if (!bParam2)
	{
		func_366(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_365(0);
	func_201();
}

void func_365(bool bParam0)//Position - 0xC203
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

void func_366(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xC223
{
	if (bParam0)
	{
		if (func_373())
		{
			func_372();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_370();
		func_209(8, 0, 0, 0, 0);
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
		func_367();
	}
}

void func_367()//Position - 0xC2EA
{
	if (func_373() && !func_369())
	{
		func_372();
	}
	if (func_369())
	{
		func_368();
	}
	else
	{
		func_370();
		func_209(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_368()//Position - 0xC332
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_369()//Position - 0xC37A
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_370()//Position - 0xC3B9
{
	if (func_373() && !func_369())
	{
		func_372();
	}
	func_371();
	Global_24B2CE.f_2BF = 0;
}

void func_371()//Position - 0xC3E2
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

void func_372()//Position - 0xC41D
{
	if (func_369())
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

int func_373()//Position - 0xC48B
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_374()//Position - 0xC4CA
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_375()//Position - 0xC4E3
{
	func_376();
	Global_24B2CE.f_8C5 = 0;
}

void func_376()//Position - 0xC4F7
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

void func_377()//Position - 0xC523
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

int func_378(int iParam0)//Position - 0xC56A
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_379(int iParam0)//Position - 0xC5AC
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_380(float fParam0)//Position - 0xC664
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_381())
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

int func_381()//Position - 0xC6D0
{
	switch (func_151())
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

float func_382(int iParam0)//Position - 0xC704
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_383()//Position - 0xC74E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 2))
		{
			if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1) && func_1230(NETSHOP::_NETWORK_SHOP_BASKET_START()))
			{
				if (!func_124(1, 0))
				{
					if (Local_130.f_15 != func_11())
					{
						HUD::GET_HUD_COLOUR(func_245(0), &iVar0, &iVar1, &iVar2, &uVar3);
					}
					else
					{
						HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
					}
					func_384(NETWORK::NET_TO_VEH(Local_130.f_10), iVar0, iVar1, iVar2, 0);
				}
			}
		}
		else
		{
			HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
			func_384(NETWORK::NET_TO_VEH(Local_130.f_10), iVar0, iVar1, iVar2, 0);
		}
	}
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xC7F5
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar1);
	fVar3 = ((vVar1.z - vVar0.z) / 2f);
	fVar4 = (vVar1.z - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(iParam0, 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_385()//Position - 0xC88C
{
	int iVar0;
	int iVar1;
	
	if (func_26(&(Local_130.f_5)))
	{
		iVar1 = (func_7() - func_8(&(Local_130.f_5), 0, 0));
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_130.f_1, 1))
		{
			func_393(iVar1);
		}
		else
		{
			func_392(iVar1);
		}
		if (iVar1 > 30000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 6;
		}
		iVar1 = func_391(iVar1, 0);
		func_386(iVar1, iVar0, func_389());
	}
}

void func_386(int iParam0, int iParam1, char* sParam2)//Position - 0xC8F2
{
	char* sVar0;
	
	if (func_387(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_296(sParam2))
	{
		sVar0 = sParam2;
	}
	func_253(iParam0, sVar0, 0, 0, 4294967295, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0);
}

int func_387(bool bParam0)//Position - 0xC933
{
	if (func_388())
	{
		return 0;
	}
	if (func_228())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_15(CAM::_0xDC9DA9E8789F5246(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_388()//Position - 0xC96A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 12);
}

char* func_389()//Position - 0xC97C
{
	return "HUD_COUNTDOWN";
	switch (func_196(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_390())
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

int func_390()//Position - 0xCB26
{
	if (func_196(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

int func_391(int iParam0, int iParam1)//Position - 0xCB49
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_392(int iParam0)//Position - 0xCB5F
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 3))
	{
		if (iParam0 <= (func_7() - 3000))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FM_SUDDEN_DEATH_START_MUSIC");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			MISC::SET_BIT(&iLocal_110, 3);
		}
	}
}

void func_393(int iParam0)//Position - 0xCBA1
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

void func_394()//Position - 0xCF84
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_10))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_130.f_10))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_130.f_10), 3, Global_40001.f_2C1F) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_130.f_10), 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_130.f_10), 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_130.f_10), 0, 7000))
			{
				MISC::SET_BIT(&(Local_131[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 5);
			}
		}
	}
}

void func_395(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xD00B
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(*uParam0), 0) };
		if (!func_26(uParam1))
		{
			func_2(uParam1, 0, 0);
		}
		else if (func_1(uParam1, 1000, 0))
		{
			if (func_1219(NETWORK::NET_TO_ENT(*uParam0), 1215605247, 1, uParam2, 0, 500, 1, 0))
			{
				func_1218(&Global_1404B3, &vVar1, &uVar2, 10f);
				if (bParam3)
				{
					func_1217(1);
					func_1216(1);
					func_1215(1);
					Global_26862F.f_119C = 0;
				}
				bVar4 = true;
				bVar5 = true;
			}
			else if (func_1214(vVar0, func_130(39), func_134(39, 0)))
			{
				if (func_1209(39, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1214(vVar0, func_130(40), func_134(40, 0)))
			{
				if (func_1209(40, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1214(vVar0, func_130(41), func_134(41, 0)))
			{
				if (func_1209(41, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1214(vVar0, func_130(42), func_134(42, 0)))
			{
				if (func_1209(42, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1214(vVar0, func_130(43), func_134(43, 0)))
			{
				if (func_1209(43, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1214(vVar0, func_130(44), func_134(44, 0)))
			{
				if (func_1209(44, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				MISC::SET_BIT(&(Global_26862F.f_6BC), 5);
				if (bParam3)
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(*uParam0), 1))
					{
						iVar7 = 1;
					}
					else if (func_116(NETWORK::NET_TO_VEH(*uParam0), 1, 0, 0, 0, 0, 1, 0))
					{
						iVar7 = 2;
					}
				}
				else if (func_1208() && !bVar5)
				{
					iVar7 = 1;
				}
				else if (func_1205() && !bVar5)
				{
					iVar7 = 1;
					bVar6 = true;
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(*uParam0)))
				{
					iVar7 = 2;
				}
				if (iVar7 == 1)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 3))
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						MISC::SET_BIT(&(Global_26862F.f_6BC), 6);
						MISC::SET_BIT(&(Global_26862F.f_6BC), 3);
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 4))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							MISC::SET_BIT(&(Global_26862F.f_6BC), 4);
						}
					}
					else
					{
						bVar8 = false;
						if (func_1204(CAM::_0xDC9DA9E8789F5246(), 4294967295))
						{
							bVar8 = true;
						}
						if (!bVar6)
						{
							if (func_396(5, 0, 0, 0, 1, 0, 0, bVar8, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
							{
								CAM::DO_SCREEN_FADE_IN(800);
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(AUDIO::_0x0626A247D2405330());
								GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 6);
								GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 3);
								GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 4);
							}
						}
					}
				}
				else if (iVar7 == 2)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(*uParam0)))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(*uParam0), vVar1, 0, 0, 1);
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(*uParam0), 1, 1);
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
					}
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 6))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 3);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 4);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 6);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6BC, 5))
			{
				Global_26862F.f_119C = 0;
				func_1217(0);
				func_1216(0);
				func_1215(0);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BC), 5);
			}
			func_25(uParam1);
		}
	}
}

int func_396(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17)//Position - 0xD3E8
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_1203();
	if (func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 0))
	{
		if (((bParam4 && func_15(CAM::_0xDC9DA9E8789F5246(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_DE == 1)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 150, 1);
		if (!Global_24B2CE.f_2B3 == iParam0)
		{
			if (bParam15 && Global_24B2CE.f_2B3 == 37)
			{
			}
			else if (!Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_2B4) < func_1201(0))
				{
					return 0;
				}
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 0)
		{
			Global_24B2CE.f_2B3 = iParam0;
			Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 2;
			if (bParam2)
			{
				if (!func_1200())
				{
					bParam2 = false;
				}
			}
			Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 2;
			Global_24B2CE.f_99D = 0;
			Global_24B2CE.f_99E = 0;
			Global_24B2CE.f_99C = 0;
			Global_24B2CE.f_B2C = 0;
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_24B2CE.f_2B3 == 11)
			{
				Global_24B2CE.f_2B7 = { Global_24D471 };
				Global_24B2CE.f_2BA = Global_24D471.f_5;
				Global_24B2CE.f_B40 = Global_24D471.f_1A;
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 3;
			}
			else if (func_968(&(Global_24B2CE.f_2B7), &(Global_24B2CE.f_2BA), Global_24B2CE.f_2B3, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 3;
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
						func_963(&iVar2);
					}
					else
					{
						iVar2 = func_962();
						func_961(&iVar2);
					}
					if (func_1200())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)) == Global_24B2CE.f_2C.f_43)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
								if (iVar4 == Global_24B2CE.f_2C.f_AC)
								{
									func_959();
								}
								BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_942(iVar2);
							func_941(1);
							Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					func_941(1);
					Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 6;
				}
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 4)
		{
			if (func_938())
			{
				if (Global_24B2CE.f_2C.f_41)
				{
					if (func_662(Global_24B2CE.f_2B7, Global_24B2CE.f_2B7.f_1, func_934(Global_24B2CE.f_2C.f_43), Global_24B2CE.f_2BA, 0))
					{
						Global_24B2CE.f_2B5 = HUD::_0x13C4B962653A5280();
						Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 5;
					}
				}
				else if (func_661(Global_24B2CE.f_2C.f_43) || Global_24B2CE.f_2C.f_43 == 0)
				{
					Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 6;
				}
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 5)
		{
			PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 150, 1);
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 6;
				if (Global_24B2CE.f_2C.f_AE)
				{
					Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_E3 = 1;
				}
				else
				{
					Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_E3 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_2B5) > 5000)
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 4;
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 2500551826) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_24B2CE.f_2C.f_AC) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_24B2CE.f_2C.f_AC, 0))
				{
					func_463(AUDIO::_0x0626A247D2405330(), Global_24B2CE.f_2C.f_AC, 4294967295, 0);
				}
				else
				{
					BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
					Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 4;
				}
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 6)
		{
			Global_24B2CE.f_2B4 = HUD::_0x13C4B962653A5280();
			if (Global_24B2CE.f_2BD)
			{
				Global_24B2CE.f_2B6 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_2BD = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_2B6)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1805F9)
			{
				func_457(Global_24B2CE.f_2B7);
			}
			if (bParam7 && !Global_252F9E.f_4CC)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, 0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0)) || func_456(iVar2))
						{
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_448(Global_24B2CE.f_2B7, Global_24B2CE.f_2BA, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_24B2CE.f_B40))
				{
					if (bParam15)
					{
						Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 7;
						return 0;
					}
					else
					{
						func_442();
					}
				}
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 7)
		{
			if ((Global_24B2CE.f_2B3 == 8 && Global_24B2CE.f_2BF.f_1FB) && Global_24B2CE.f_B2C)
			{
				func_442();
			}
			else if (func_432(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0)))
			{
				if (Global_24B2CE.f_2B3 == 8 && !Global_24B2CE.f_B2C)
				{
					Global_24B2CE.f_B2C = 1;
				}
				else
				{
					Global_24B2CE.f_2B3 = 37;
				}
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 2;
				Global_24B2CE.f_99D = 0;
				Global_24B2CE.f_99E = 0;
				Global_24B2CE.f_99C = 0;
			}
			else
			{
				func_442();
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 10)
		{
			if (SYSTEM::VDIST(Global_24D471, Global_24B2CE.f_2B7) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_24B2CE.f_2B7, Global_24B2CE.f_2B7.f_1, Global_24B2CE.f_2B7.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_24B2CE.f_2B7.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_24D471, Global_24B2CE.f_2B7) > 15f)
							{
								Global_24B2CE.f_2B7 = { Global_24D471 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_24B2CE.f_2B7, Global_24B2CE.f_2B7.f_1, (fVar0 + func_431(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
								}
								Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 11;
							}
							else
							{
								Global_24B2CE.f_2B7.f_2 = (Global_24B2CE.f_2B7.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_24B2CE.f_2B7, Global_24B2CE.f_2B7.f_1, (fVar0 + func_431(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
							}
							Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 11;
						}
					}
					else
					{
						Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 11;
					}
				}
				else
				{
					Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 11;
				}
			}
			else
			{
				Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 11;
			}
		}
		if (Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_24B2CE.f_2C.f_AC) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_24B2CE.f_2C.f_AC))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_24B2CE.f_2C.f_AC, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_423(iParam9, 0, 0);
				}
			}
			func_416(func_99(CAM::_0xDC9DA9E8789F5246()), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_24B2CE.f_2C.f_AC))
			{
				func_959();
			}
			if (!(func_661(Global_24B2CE.f_2C.f_43) || Global_24B2CE.f_2C.f_43 == 0) && !Global_24B2CE.f_1E4.f_5)
			{
				func_415();
			}
			func_414(0, 0);
			if (bParam10)
			{
				func_413();
			}
			func_412();
			func_399();
			if (bParam13)
			{
				func_398();
			}
			func_397();
			return 1;
		}
	}
	else if (!Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF == 0)
	{
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
		func_961(&(Global_24B2CE.f_2C.f_AC));
		func_397();
	}
	Global_24B2CE.f_2B4 = HUD::_0x13C4B962653A5280();
	return 0;
}

void func_397()//Position - 0xDCED
{
	Global_24B2CE.f_2B3 = 0;
	Global_24B2CE.f_A9D = 0;
	Global_24B2CE.f_1FD = 0;
	Global_24B2CE.f_255 = 0;
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
	Global_24B2CE.f_A70 = 0;
}

void func_398()//Position - 0xDD2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2A9[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2A9[iVar0])
			{
				if (!Global_24B2CE.f_2A5[iVar0] == 4294967295)
				{
					if (NETWORK::_0xE64A3CA08DFA37A9(Global_24B2CE.f_2A5[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_24B2CE.f_2A5[iVar0]);
						Global_24B2CE.f_2A5[iVar0] = 4294967295;
					}
					else
					{
						Global_24B2CE.f_2A5[iVar0] = 4294967295;
					}
				}
			}
		}
		else if (!Global_24B2CE.f_2A5[iVar0] == 4294967295)
		{
			Global_24B2CE.f_2A5[iVar0] = 4294967295;
		}
		iVar0++;
	}
}

void func_399()//Position - 0xDDD7
{
	int iVar0;
	
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_105.f_14 = 4294967295;
	Global_24B2CE.f_B29 = -1f;
	iVar0 = 0;
	while (iVar0 < 36)
	{
		func_401(iVar0);
		iVar0++;
	}
	if (func_400(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		Global_26A7C0.f_4D = 1;
		Global_26A7C0.f_4E = HUD::_0x13C4B962653A5280();
	}
}

int func_400(int iParam0, bool bParam1)//Position - 0xDE2E
{
	if (func_15(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_24FBF9[iParam0 /*413*/].f_105.f_E == 4294967295)
			{
				return 1;
			}
		}
		else if (!Global_24FBF9[iParam0 /*413*/].f_105.f_10 == 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void func_401(int iParam0)//Position - 0xDE7B
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (Global_24FBF9[iVar0 /*413*/].f_105.f_E != 4294967295)
	{
		if (func_411(Global_24FBF9[iVar0 /*413*/].f_105.f_E))
		{
			if (!func_406(CAM::_0xDC9DA9E8789F5246(), Global_24FBF9[iVar0 /*413*/].f_105.f_E, 0, 0))
			{
				Global_24FBF9[iVar0 /*413*/].f_105.f_E = 4294967295;
			}
		}
		else
		{
			Global_24FBF9[iVar0 /*413*/].f_105.f_E = 4294967295;
		}
	}
	if (Global_24FBF9[iVar0 /*413*/].f_105.f_10 != 4294967295)
	{
		if (func_411(Global_24FBF9[iVar0 /*413*/].f_105.f_10))
		{
			if (!func_406(CAM::_0xDC9DA9E8789F5246(), Global_24FBF9[iVar0 /*413*/].f_105.f_10, 0, 1))
			{
				Global_24FBF9[iVar0 /*413*/].f_105.f_10 = 4294967295;
			}
		}
		else
		{
			Global_24FBF9[iVar0 /*413*/].f_105.f_10 = 4294967295;
		}
	}
	if (Global_24FBF9[iVar0 /*413*/].f_105.f_F != 4294967295)
	{
		if (!func_406(CAM::_0xDC9DA9E8789F5246(), Global_24FBF9[iVar0 /*413*/].f_105.f_F, 0, 0))
		{
			Global_24FBF9[iVar0 /*413*/].f_105.f_F = 4294967295;
		}
	}
	if (func_411(iParam0))
	{
		if (func_406(CAM::_0xDC9DA9E8789F5246(), iParam0, 0, 0))
		{
			if (!Global_24FBF9[iVar0 /*413*/].f_105.f_E == iParam0)
			{
				Global_24FBF9[iVar0 /*413*/].f_105.f_E = iParam0;
			}
		}
		if (func_406(CAM::_0xDC9DA9E8789F5246(), iParam0, 0, 1))
		{
			if (!Global_24FBF9[iVar0 /*413*/].f_105.f_10 == iParam0)
			{
				Global_24FBF9[iVar0 /*413*/].f_105.f_10 = iParam0;
			}
		}
		iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
		if (func_403(CAM::_0xDC9DA9E8789F5246(), iParam0, 1120403456))
		{
			MISC::SET_BIT(&(Global_24FBF9[iVar0 /*413*/].f_105.f_11[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24FBF9[iVar0 /*413*/].f_105.f_11[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = SYSTEM::VDIST(func_402(iParam0), func_99(CAM::_0xDC9DA9E8789F5246()));
		if (iParam0 == Global_24FBF9[iVar0 /*413*/].f_105.f_14)
		{
			Global_24B2CE.f_B29 = fVar1;
		}
		else if (fVar1 < Global_24B2CE.f_B29 || Global_24B2CE.f_B29 <= 0f)
		{
			Global_24B2CE.f_B29 = fVar1;
			Global_24FBF9[iVar0 /*413*/].f_105.f_14 = iParam0;
		}
	}
	else if (iParam0 == Global_24FBF9[iVar0 /*413*/].f_105.f_14)
	{
		Global_24FBF9[iVar0 /*413*/].f_105.f_14 = 4294967295;
		Global_24B2CE.f_B29 = -1f;
	}
	if (func_406(CAM::_0xDC9DA9E8789F5246(), iParam0, 0, 0))
	{
		if (!Global_24FBF9[iVar0 /*413*/].f_105.f_F == iParam0)
		{
			Global_24FBF9[iVar0 /*413*/].f_105.f_F = iParam0;
		}
	}
}

Vector3 func_402(int iParam0)//Position - 0xE129
{
	return Global_3D2298[iParam0 /*45*/].f_4;
}

int func_403(int iParam0, int iParam1, float fParam2)//Position - 0xE13D
{
	if (func_405(iParam1))
	{
		return func_404(func_99(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_404(vector3 vParam0, int iParam1, float fParam2)//Position - 0xE160
{
	if (func_405(iParam1))
	{
		if (SYSTEM::VDIST2(vParam0, func_402(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_405(int iParam0)//Position - 0xE18D
{
	if (iParam0 > 4294967295 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xE1AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_405(iParam1))
	{
		if (!bParam3)
		{
			return func_407(func_99(iParam0), iParam1, fParam2);
		}
		else if (func_407(func_99(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_407(func_99(iParam0), iParam1, 15f))
		{
			if (func_15(iParam0, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iVar0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
						{
							if (DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Yacht"))
							{
								iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
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
	return 0;
}

int func_407(vector3 vParam0, int iParam1, float fParam2)//Position - 0xE278
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_405(iParam1))
	{
		func_408(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, 1);
	}
	return 0;
}

void func_408(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)//Position - 0xE2AF
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { func_402(iParam0) };
	fVar1 = func_410(iParam0);
	vVar2 = { 0f, 1f, 0f };
	func_409(&vVar2, 0f, 0f, fVar1);
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	*uParam1 = { vVar0 + vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

void func_409(var uParam0, vector3 vParam1)//Position - 0xE35F
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

var func_410(int iParam0)//Position - 0xE436
{
	return Global_3D2298[iParam0 /*45*/].f_7;
}

int func_411(int iParam0)//Position - 0xE448
{
	if (func_405(iParam0))
	{
		return Global_26A7C0.f_2[iParam0];
	}
	return 0;
}

void func_412()//Position - 0xE467
{
	Global_18C6F1 = 4294967295;
	Global_18C6F7 = 0;
	Global_18C6F2 = 4294967295;
}

void func_413()//Position - 0xE47E
{
	Global_24B2CE.f_5 = 1;
}

void func_414(float fParam0, int iParam1)//Position - 0xE48D
{
	vector3 vVar0;
	
	if (!func_181() || iParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				vVar0 = { func_99(CAM::_0xDC9DA9E8789F5246()) };
				if (vVar0.z > -80f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
				}
			}
		}
	}
}

void func_415()//Position - 0xE4F3
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !ENTITY::IS_ENTITY_ATTACHED(AUDIO::_0x0626A247D2405330()))
	{
		vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
		vVar0.z = (vVar0.z + (0.3f * IntToFloat(Global_24B2CE.f_2BB)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar1, 0, 0))
		{
			fVar2 = (vVar0.z - (fVar1 + 1f));
			if (MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				}
				ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0.x, vVar0.y, fVar1, 0, 1, 0, 1);
				Global_24B2CE.f_2BB = 0;
			}
		}
		else if (Global_24B2CE.f_2BB < 3)
		{
			Global_24B2CE.f_2BB++;
			func_415();
		}
		else
		{
			Global_24B2CE.f_2BB = 0;
		}
	}
}

void func_416(vector3 vParam0, bool bParam1)//Position - 0xE5C6
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		fVar1 = func_417(ENTITY::GET_ENTITY_MODEL(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		MISC::CLEAR_AREA(vParam0, fVar1, 1, 0, 0, bParam1);
		MISC::CLEAR_AREA_OF_VEHICLES(vParam0, fVar1, 1, 0, 1, 1, bParam1, 0);
		FIRE::STOP_FIRE_IN_RANGE(vParam0, 6f);
	}
	else
	{
		iVar6 = unk_0x2CE52CF124DA4A6A(vParam0.x, vParam0.y, (vParam0.z - 2f), vParam0.x, vParam0.y, (vParam0.z + 1f), 19, 0, 7);
		SHAPETEST::GET_SHAPE_TEST_RESULT(iVar6, &iVar2, &uVar3, &uVar4, &uVar5);
		MISC::CLEAR_AREA(vParam0, 0.7f, 1, 0, 0, bParam1);
		if (!iVar2 == 0)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(vParam0, 6f, 1, 0, 1, 1, bParam1, 0);
			if (bParam1)
			{
				MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 6f, 17);
			}
			else
			{
				MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 6f, 16);
			}
		}
		FIRE::STOP_FIRE_IN_RANGE(vParam0, 2.5f);
	}
}

float func_417(int iParam0)//Position - 0xE6B3
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_418(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_1 - Var1.f_1));
}

void func_418(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xE6E1
{
	int iVar0;
	
	if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_421(iParam0);
		if (iVar0 != 0)
		{
			func_419(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_419(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xE7A0
{
	int iVar0;
	
	func_420(iParam0, &Global_1413D0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Global_1413D0[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1413D0[iVar0], &(Global_1413D4[iVar0 /*3*/]), &(Global_1413DB[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D4[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413DB[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D4[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413DB[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413E2[iVar0] = (Global_1413DB[iVar0 /*3*/] - Global_1413D4[iVar0 /*3*/]);
		Global_1413E5[iVar0] = (Global_1413DB[iVar0 /*3*/].f_1 - Global_1413D4[iVar0 /*3*/].f_1);
		Global_1413E8[iVar0] = (Global_1413DB[iVar0 /*3*/].f_2 - Global_1413D4[iVar0 /*3*/].f_2);
		if (Global_1413E2[iVar0] > Global_1413EB)
		{
			Global_1413EB = Global_1413E2[iVar0];
		}
		if (Global_1413E8[iVar0] > Global_1413EC)
		{
			Global_1413EC = Global_1413E8[iVar0];
		}
		iVar0++;
	}
	Global_1413ED = (Global_1413EB * -0.5f);
	Global_1413F0 = (Global_1413EB * 0.5f);
	Global_1413ED.f_1 = ((((0.5f * Global_1413E5[0]) + Global_1413E5[1]) + Global_1413D0.f_3) * -1f);
	Global_1413F0.f_1 = (0.5f * Global_1413E5[0]);
	Global_1413ED.f_2 = (Global_1413E8[0] * -0.5f);
	Global_1413F0.f_2 = (Global_1413E8[0] * 0.5f);
	*uParam1 = { Global_1413ED };
	*uParam2 = { Global_1413F0 };
}

void func_420(int iParam0, var uParam1)//Position - 0xE9AC
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_421(int iParam0)//Position - 0xEA2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_422(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_422(int iParam0)//Position - 0xEA5C
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_423(int iParam0, int iParam1, bool bParam2)//Position - 0xEA6E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && func_430())
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_428(iVar1, &iVar0))
		{
			func_424(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
	}
}

void func_424(int iParam0, int iParam1, int iParam2)//Position - 0xEAC4
{
	var uVar0;
	
	uVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uVar0))
	{
		if (Global_1805F3 && VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("RHINO")))
		{
			iParam1 = 1;
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(uVar0, 1, 1, func_427());
			return;
		}
		else if (func_426())
		{
			func_425(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(uVar0, iParam2, 1, func_427());
			if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0, 0))
			{
				unk_0x0B9132B556730A32(iParam2);
			}
		}
		else
		{
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(uVar0, iParam1, 1, func_427());
			if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0, 0))
			{
				unk_0x0B9132B556730A32(iParam1);
			}
		}
	}
}

int func_425(int iParam0, int iParam1)//Position - 0xEB6A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(iVar1, 1);
			if (iParam1 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
			{
				unk_0x656BAEF9186C73AF(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		unk_0x62FB179438B21448(iParam0, 1);
		return 1;
	}
	else
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	return 0;
}

bool func_426()//Position - 0xEBE6
{
	return Global_180605;
}

int func_427()//Position - 0xEBF2
{
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_286(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_428(int iParam0, int iParam1)//Position - 0xEC2A
{
	if (func_429(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_429(int iParam0, var uParam1)//Position - 0xEC42
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

int func_430()//Position - 0xECA1
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_431(int iParam0)//Position - 0xECE7
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_418(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((vVar0.z - vVar1.z));
}

int func_432(vector3 vParam0)//Position - 0xED15
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar8;
	
	iVar0 = unk_0x2E48292BBFCD88A8(&Global_1413F3);
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar5 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5, 0))
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			vVar7 = { unk_0x8000C77B5F336760(iVar5, 1) };
			fVar8 = ENTITY::GET_ENTITY_HEADING(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1413F3[iVar4]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1413F3[iVar4], 0) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_1413F3[iVar4], 0))
			{
			}
			else if (func_441(Global_1413F3[iVar4]))
			{
			}
			else if (!func_437(Global_1413F3[iVar4]))
			{
				vVar1 = { unk_0x8000C77B5F336760(Global_1413F3[iVar4], 0) };
				fVar2 = ENTITY::GET_ENTITY_HEADING(Global_1413F3[iVar4]);
				iVar3 = ENTITY::GET_ENTITY_MODEL(Global_1413F3[iVar4]);
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (func_436(vVar1, fVar2, iVar3, vVar7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_433(vParam0, vVar1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_433(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0xEE50
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_435(iParam3, 1008981770))
	{
		func_434(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_434(vector3 vParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0xEEA3
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_409(&vVar0, 0f, 0f, uParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_418(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

float func_435(int iParam0, float fParam1)//Position - 0xEF6F
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_418(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_436(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0xEFEF
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_433(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_418(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_409(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_409(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_409(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_433(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_436(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0)//Position - 0xF1A9
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4294967295, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (func_15(iVar1, 0, 0))
				{
					if (func_438(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_438(int iParam0)//Position - 0xF20A
{
	if (func_440())
	{
		if (func_439(NETWORK::_NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0), &(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_151.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_439(int iParam0, var uParam1)//Position - 0xF23B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_440()//Position - 0xF267
{
	if (Global_24B2CE.f_B2D > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)//Position - 0xF27F
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_442()//Position - 0xF2C3
{
	if (!Global_24B2CE.f_2BD)
	{
		Global_24B2CE.f_2BD = 1;
	}
	func_941(0);
	if (Global_24B2CE.f_A5F)
	{
		func_443();
		Global_24B2CE.f_A5F = 0;
	}
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 11;
}

void func_443()//Position - 0xF308
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	vector3 vVar17;
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
	var uVar30;
	var uVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar43;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
		if ((!Global_24B2CE.f_2C.f_34 && !Global_24B2CE.f_2C.f_35) && !Global_24B2CE.f_A60)
		{
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar1, &vVar2, 1, 1077936128, 0))
			{
				vVar2.z = (vVar2.z + 1f);
				bVar3 = true;
				if (!SYSTEM::VDIST(vVar1, vVar2) < 50f || Global_24B2CE.f_2C.f_34)
				{
					bVar3 = false;
				}
			}
		}
		else if (Global_24B2CE.f_A60)
		{
			Global_24B2CE.f_A60 = 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			fVar4 = ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330());
		}
		fVar5 = 3f;
		vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(AUDIO::_0x0626A247D2405330()) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * Vector(fVar5, fVar5, fVar5) };
		vVar7 = { vVar6 };
		func_409(&vVar7, 0f, 0f, -45f);
		vVar8 = { vVar6 };
		func_409(&vVar8, 0f, 0f, -90f);
		vVar9 = { vVar6 };
		func_409(&vVar9, 0f, 0f, 45f);
		vVar10 = { vVar6 };
		func_409(&vVar10, 0f, 0f, 90f);
		if (bVar3)
		{
			vVar11 = { vVar2 - vVar1 };
			vVar12 = { func_447(vVar11, 0f, 0f, 1f) };
			vVar12 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
			vVar12 = { vVar12 * Vector(0.2f, 0.2f, 0.2f) };
		}
		vVar13 = { vVar1 + vVar6 };
		vVar14 = { vVar1 + vVar7 };
		vVar15 = { vVar1 + vVar8 };
		vVar16 = { vVar1 + vVar9 };
		vVar17 = { vVar1 + vVar10 };
		iVar18 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar13, 0.2f, 257, AUDIO::_0x0626A247D2405330(), 7);
		iVar19 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar14, 0.2f, 257, AUDIO::_0x0626A247D2405330(), 7);
		iVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar15, 0.2f, 257, AUDIO::_0x0626A247D2405330(), 7);
		iVar21 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar16, 0.2f, 257, AUDIO::_0x0626A247D2405330(), 7);
		iVar22 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar17, 0.2f, 257, AUDIO::_0x0626A247D2405330(), 7);
		if (bVar3)
		{
			iVar23 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar2, 0.2f, 257, AUDIO::_0x0626A247D2405330(), 7);
		}
		iVar33 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar18, &iVar24, &uVar30, &uVar31, &uVar32);
		iVar33 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar19, &iVar25, &uVar30, &uVar31, &uVar32);
		iVar33 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar20, &iVar26, &uVar30, &uVar31, &uVar32);
		iVar33 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar21, &iVar27, &uVar30, &uVar31, &uVar32);
		iVar33 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar22, &iVar28, &uVar30, &uVar31, &uVar32);
		if (bVar3)
		{
			iVar33 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar23, &iVar29, &uVar30, &uVar31, &uVar32);
		}
		if (iVar33 == 0)
		{
		}
		iVar34 = (iVar34 + iVar24);
		iVar35 = (iVar35 + iVar25);
		iVar36 = (iVar36 + iVar26);
		iVar37 = (iVar37 + iVar27);
		iVar38 = (iVar38 + iVar28);
		if (bVar3)
		{
			iVar39 = (iVar39 + iVar29);
		}
		iVar40 = 99;
		iVar41 = 4294967295;
		if (iVar34 < iVar40)
		{
			iVar40 = iVar34;
			iVar41 = 0;
		}
		if (iVar35 < iVar40)
		{
			iVar40 = iVar35;
			iVar41 = 1;
		}
		if (iVar37 < iVar40)
		{
			iVar40 = iVar37;
			iVar41 = 2;
		}
		if (iVar36 < iVar40)
		{
			iVar40 = iVar36;
			iVar41 = 3;
		}
		if (iVar38 < iVar40)
		{
			iVar40 = iVar38;
			iVar41 = 4;
		}
		if (bVar3)
		{
			if (iVar39 < iVar40)
			{
				iVar40 = iVar39;
				iVar41 = 5;
			}
		}
		if (bVar3 && iVar39 == 0)
		{
			fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar11.x, vVar11.y);
			func_446(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_24B2CE.f_2C.f_34)
		{
			vVar42 = { Global_24B2CE.f_2C.f_31 - vVar1 };
			fVar43 = func_445(vVar42, vVar15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_446(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_446(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_446(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_446(fVar4);
					return;
				}
				else
				{
					func_444(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_446(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_446(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_446(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_446(fVar4);
				return;
			}
			else
			{
				func_444(iVar41, fVar4, vVar11);
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_446(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_446(fVar4);
					return;
				}
				else
				{
					func_444(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_446(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_446(fVar4);
				return;
			}
			else
			{
				func_444(iVar41, fVar4, vVar11);
			}
		}
	}
}

void func_444(int iParam0, float fParam1, struct<2> Param2, var uParam3)//Position - 0xF86C
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_446(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_446(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_446(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_446(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Param2, Param2.f_1);
			func_446(fParam1);
			return;
			break;
	}
}

float func_445(vector3 vParam0, vector3 vParam1)//Position - 0xF915
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_446(float fParam0)//Position - 0xF936
{
	if (!PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
	{
		ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fParam0);
	}
	func_414(0f, 1);
}

Vector3 func_447(vector3 vParam0, vector3 vParam1)//Position - 0xF95A
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

int func_448(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)//Position - 0xF993
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_434C.f_6 = 1;
	if (Global_252F9E.f_4CC && Global_252F9E.f_4D4)
	{
		func_453(0, bParam7);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7)
	{
		if (Global_252F9E.f_4CC)
		{
			func_453(0, bParam7);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_172())
	{
		if (func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 0) && !(func_452() || func_451()))
		{
			if (((bParam7 && func_15(CAM::_0xDC9DA9E8789F5246(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_DE == 1)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_252F9E.f_4CC && !bParam9)
	{
		vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
		if ((MISC::ABSF((vVar1.x - vParam0.x)) < 0.2f && MISC::ABSF((vVar1.y - vParam0.y)) < 0.2f) && MISC::ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (MISC::ABSF(fVar2) < 1f)
			{
				Global_252F9E.f_4CC = 0;
				Global_252F9E.f_4CD = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_252F9E.f_4CE || !vParam0.y == Global_252F9E.f_4CE.f_1) || !vParam0.z == Global_252F9E.f_4CE.f_2) || !fParam1 == Global_252F9E.f_4D1)
	{
		if (Global_252F9E.f_4CC == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_252F9E.f_4D2) < func_1201(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_252F9E.f_4CD = 1;
		}
		else
		{
			Global_252F9E.f_4CD = 0;
		}
		Global_252F9E.f_4CE = { vParam0 };
		Global_252F9E.f_4D1 = fParam1;
		Global_252F9E.f_4CC = 0;
	}
	if (!Global_252F9E.f_4CC && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C64.f_538[44], 16))
			{
				func_450(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(AUDIO::_0x0626A247D2405330(), &(Global_24B2CE.f_1F0)))
			{
				Global_24B2CE.f_1F0 = 0;
			}
		}
		if (bParam2)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_252F9E.f_4D3 = 0;
				}
			}
		}
		if (Global_252F9E.f_4D3 > 4294967295)
		{
			Global_252F9E.f_4D2 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_4CC = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, 0, 1, 1, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vParam0, 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fParam1);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vParam0, 0, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fParam1);
				}
				func_453(bParam4, bParam7);
				return 1;
			}
			else
			{
				HUD::SET_MULTIPLAYER_BANK_CASH();
				PLAYER::START_PLAYER_TELEPORT(CAM::_0xDC9DA9E8789F5246(), vParam0, fParam1, bParam2, iParam8, 0);
			}
			Global_252F9E.f_4D2 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_4CC = 1;
		}
	}
	if (Global_252F9E.f_4CC)
	{
		Global_434C.f_6 = 1;
		Global_252F9E.f_4D2 = HUD::_0x13C4B962653A5280();
		if (Global_252F9E.f_4D3 > 4294967295)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
			}
			if (func_449(&(Global_252F9E.f_4D3), vParam0, fParam1, iVar0))
			{
				func_453(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), Global_252F9E.f_4CE) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_453(bParam4, bParam7);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam10 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_252F9E.f_4D4 = 1;
						return 0;
					}
				}
				func_453(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_449(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xFE65
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_252F9E.f_4D5) && !ENTITY::IS_ENTITY_DEAD(Global_252F9E.f_4D5, 0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_252F9E.f_4D5);
	}
	switch (*uParam0)
	{
		case 0:
			Global_252F9E.f_4D5 = iParam3;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_252F9E.f_4D5);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_252F9E.f_4D5))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_252F9E.f_4D5, 0))
				{
					ENTITY::SET_ENTITY_HEADING(Global_252F9E.f_4D5, fParam2);
					ENTITY::SET_ENTITY_COORDS(Global_252F9E.f_4D5, vParam1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_450(int iParam0)//Position - 0xFF08
{
	int iVar0;
	
	iVar0 = Global_24B2CE.f_A71;
	if ((unk_0x179432B321CCFD03() && Global_24B2CE.f_A6F == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_24B2CE.f_A6E)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_24B2CE.f_A6E = iVar0;
		}
	}
}

bool func_451()//Position - 0xFF5D
{
	return ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 12)) && Global_19BACA == 8);
}

bool func_452()//Position - 0xFF8C
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

void func_453(bool bParam0, bool bParam1)//Position - 0xFFAE
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::CLEAR_PED_WETNESS(AUDIO::_0x0626A247D2405330());
	}
	if (!bParam1)
	{
		HUD::SET_MULTIPLAYER_BANK_CASH();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_455();
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 14))
	{
		func_454();
	}
}

void func_454()//Position - 0x10019
{
	Global_26A7C0.f_50 = 1;
}

void func_455()//Position - 0x10028
{
	vector3 vVar0;
	
	Global_252F9E.f_4CC = 0;
	Global_252F9E.f_4CD = 0;
	Global_252F9E.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252F9E.f_4D3 = 4294967295;
	Global_252F9E.f_4D4 = 0;
	Global_24B2CE.f_A72 = { vVar0 };
}

int func_456(int iParam0)//Position - 0x10075
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

void func_457(vector3 vParam0)//Position - 0x100AE
{
	Global_24B2CE.f_2C.f_12B = 1;
	Global_24B2CE.f_2C.f_128 = { vParam0 };
	Global_24B2CE.f_2C.f_13B = NETWORK::GET_TIME_OFFSET(NETWORK::_0x89023FBBF9200E9F(), 4294957297);
	func_458(1);
}

void func_458(bool bParam0)//Position - 0x100E8
{
	float fVar0;
	
	if (Global_1805F9 || Global_24B2CE.f_2C.f_12C)
	{
		if (Global_24B2CE.f_2C.f_12B)
		{
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (Global_1805FD)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !PED::IS_PED_BEING_JACKED(AUDIO::_0x0626A247D2405330())) && ((SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), Global_24B2CE.f_2C.f_128) < fVar0 || func_462(CAM::_0xDC9DA9E8789F5246())) || func_1202(CAM::_0xDC9DA9E8789F5246(), 0, 0)))
				{
					if ((func_461() || func_460()) || func_459())
					{
						if (PAD::IS_CONTROL_PRESSED(0, 351))
						{
							Global_24B2CE.f_2C.f_13B = NETWORK::_0x89023FBBF9200E9F();
							func_423(1000, 0, 1);
						}
						else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_24B2CE.f_2C.f_13B, NETWORK::_0x89023FBBF9200E9F())) > 2000)
						{
							func_423(2500, 0, bParam0);
							Global_24B2CE.f_2C.f_13B = NETWORK::_0x89023FBBF9200E9F();
						}
					}
					else
					{
						Global_24B2CE.f_2C.f_13B = NETWORK::_0x89023FBBF9200E9F();
						func_423(1000, 0, bParam0);
					}
				}
				else
				{
					Global_24B2CE.f_2C.f_128 = { 0f, 0f, 0f };
					Global_24B2CE.f_2C.f_12B = 0;
				}
			}
		}
	}
}

int func_459()//Position - 0x10235
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("THRUSTER"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_460()//Position - 0x10270
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("RUINER2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_461()//Position - 0x102AB
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("BLAZER5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x102E6
{
	if (Global_24FBF9[iParam0 /*413*/].f_CF != 0)
	{
		return 1;
	}
	return 0;
}

void func_463(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x10302
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!func_660(iParam0, iParam1, bVar0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam0, 0) };
		vVar2 = { unk_0x8000C77B5F336760(iParam1, 0) };
		if (!SYSTEM::VDIST(vVar1, vVar2) < 5f || !iParam2 == 4294967295)
		{
			vVar2.z = (vVar2.z + -4f);
			vVar2.x = (vVar2.x + -4f);
			vVar2.y = (vVar2.y + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar2, 0, 0, 0, 1);
		}
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, 0);
		unk_0x346478B12F69D4E3(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(AUDIO::_0x0626A247D2405330(), 0);
		PED::SET_PED_RESET_FLAG(iParam0, 150, 1);
		PED::SET_PED_RESET_FLAG(iParam0, 151, 1);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			BRAIN::TASK_ENTER_VEHICLE(iParam0, iParam1, 4294967295, iParam2, 2f, 16, 0);
		}
		MISC::_0x1327E2FE9746BAEE(iParam0, 0, 0);
		PED::SET_PED_RESET_FLAG(iParam0, 150, 1);
		if (Global_1805F9)
		{
			if (func_659(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_464(0);
			}
		}
	}
}

void func_464(bool bParam0)//Position - 0x1040C
{
	struct<14> Var0;
	int iVar1;
	
	if (!PED::IS_PED_WEARING_HELMET(AUDIO::_0x0626A247D2405330()))
	{
		if (Global_440000.f_255C1 == 0)
		{
			if ((Global_24B2CE.f_A79 == 4294967197 || Global_24B2CE.f_A79 == 0) || !func_658(ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()), 14, Global_24B2CE.f_A79, 4294967295))
			{
				if (!bParam0)
				{
					iVar1 = func_148(588, 4294967295, 0);
				}
			}
			else
			{
				iVar1 = Global_24B2CE.f_A79;
			}
			Var0 = { func_615(func_657(), 14, iVar1, 4294967295) };
			func_614(AUDIO::_0x0626A247D2405330(), 14, iVar1);
			func_465(AUDIO::_0x0626A247D2405330(), 14, iVar1, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 1, 0);
			func_465(AUDIO::_0x0626A247D2405330(), 1, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 380, true);
		}
	}
}

int func_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x104E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	float fVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	var uVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	var uVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_140817 != 4 && Global_140817 != 5) && Global_140817 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == 4294967197)
	{
		return 0;
	}
	if (iParam0 == AUDIO::_0x0626A247D2405330() && Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_DE == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == 4294967295)
	{
		iParam10 = Global_11566;
	}
	Global_11567++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = 4294967197;
	iVar7 = 4294967197;
	iVar8 = 4294967295;
	iVar9 = 4294967197;
	iVar10 = 4294967197;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	if (iParam5 == 0)
	{
		Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
		if (!func_613(iParam3))
		{
			Global_11567 = (Global_11567 - 1);
			return 0;
		}
		func_608(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_280004;
		uVar14 = Global_280005;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_11594 };
		}
		else
		{
			uVar15 = { func_604(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != 4294967197)
			{
				if (iVar0 == 10 && uVar15.f_10)
				{
					Global_11569[1 /*14*/] = { func_615(iVar5, 10, 0, 4294967295) };
					if (iParam4 == 4294967295)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_603(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
					{
						func_608(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_11569[1 /*14*/] = { func_615(iVar5, iVar0, uVar15[iVar0], 4294967295) };
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_115A5 };
							}
							else
							{
								uVar16 = { func_600(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_11569[1 /*14*/] = { func_615(iVar5, 14, uVar16[iVar1], 4294967295) };
								func_599(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
								{
									func_608(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == 4294967295)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_603(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_465(iParam0, iVar0, uVar15[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
							{
								func_608(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_11569[1 /*14*/] = { func_615(iVar5, iVar0, func_595(iParam0, iVar0, 4294967295), 4294967295) };
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_604(iVar5, 0) };
					func_465(iParam0, iVar0, uVar17[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_280004 = uVar13;
		Global_280005 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_594();
			if (iVar18 != 4294967295)
			{
				func_592(iVar18, 0, iParam10);
			}
			func_588(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_600(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_11569[1 /*14*/] = { func_615(iVar5, 14, uVar19[iVar1], 4294967295) };
			func_599(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
			{
				func_608(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_11567 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_586(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != 4294967197)
						{
							func_465(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_599(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
		{
			func_608(iVar5, iParam1, iParam2, 1);
		}
		if (Global_11569[1 /*14*/].f_C == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 537651880, 1))
			{
			}
			else
			{
				iVar20 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
				if (FILE::_0x341DE7ED1D2A1BFD(iVar20, 66092876, 0))
				{
					func_465(iParam0, 1, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
				}
			}
		}
		if (Global_11569[1 /*14*/].f_C == 0)
		{
			func_582(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_465(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != 4294967197)
				{
					func_465(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar21 = 4294967295;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 2298592124, 11))
				{
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 0);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 1);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 2);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 3);
				}
				iVar22 = func_580(iParam0, 11);
				iVar23 = func_580(iParam0, 8);
				iVar24 = func_580(iParam0, 4);
				iVar8 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_579(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_579(iVar5, iParam2, 11, 4);
					}
					if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar21, 320460654, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2439348822, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2874141894, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3995877949, 0))
					{
					}
					else
					{
						iVar9 = func_580(iParam0, 8);
					}
				}
				iVar25 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILE::_0x341DE7ED1D2A1BFD(iVar25, 3938320434, 0))
				{
					iVar26 = func_578(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == 4294967197)
					{
						iVar26 = func_586(iParam0, iVar5, 11, iVar22, 3, 0);
					}
					switch (iVar25)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar26 = 11;
							iVar21 = func_579(iVar5, iParam2, 11, 4);
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar21, 3764877471, 0))
							{
								iVar26 = 4294967197;
							}
							break;
					}
					if (iVar26 != 4294967197)
					{
						iVar27 = 0;
						while (iVar27 < 17)
						{
							if (func_577(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = 4294967295;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iParam2, 11, 4), 3094454078, 0))
				{
					iVar22 = func_580(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_579(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0))
					{
						iVar28 = func_575(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar28 != 4294967197)
						{
							func_465(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
						}
					}
				}
				else if (func_574(iVar5, iParam2, 4294967295))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_579(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_579(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = 4294967197;
					if (!func_574(iVar5, iVar22, 4294967295))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (FILE::_0x341DE7ED1D2A1BFD(iVar21, 3094454078, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((FILE::_0x341DE7ED1D2A1BFD(iVar21, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_573(iParam0, iParam2);
							iVar30 = func_575(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar30 != 4294967197)
							{
								func_465(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
								iVar9 = 4294967197;
							}
							else if (iVar29 != 4294967197 && (iParam0 == AUDIO::_0x0626A247D2405330() || iParam0 == Global_411802))
							{
								func_465(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_571(iVar5, 11, 4294967295);
									Global_11569[1 /*14*/] = { func_615(iVar5, 11, iVar31, 4294967295) };
									iVar30 = func_575(iVar5, iVar31, iParam2, Global_11569[1 /*14*/].f_4);
									if (iVar30 == 4294967197 || FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iParam2, 11, 3), 3057068164, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iParam2, 11, 4), 3057068164, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_465(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
							}
						}
					}
					else
					{
						Global_11569[1 /*14*/] = { func_615(iVar5, 11, iVar22, 4294967295) };
						iVar32 = Global_11569[1 /*14*/].f_3;
						Global_11569[1 /*14*/] = { func_615(iVar5, 11, iParam2, 4294967295) };
						iVar33 = Global_11569[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_573(iParam0, iParam2);
							Global_11569[1 /*14*/] = { func_615(iVar5, 8, iVar23, 4294967295) };
							iVar34 = Global_11569[1 /*14*/].f_4;
							iVar36 = func_570(iVar5, iVar23, iVar34);
							if (iVar35 != 4294967197 && (iParam0 == AUDIO::_0x0626A247D2405330() || iParam0 == Global_411802))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == 4294967197)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_579(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_569(iVar38) == 6) || FILE::_0x341DE7ED1D2A1BFD(iVar38, 3057068164, 0))
									{
										iVar36 = func_571(iVar5, 11, 4294967295);
										Global_11569[1 /*14*/] = { func_615(iVar5, 11, iVar36, 4294967295) };
										iVar37 = func_575(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iParam2, 11, 4), 3803378421, 0))
									{
										iVar36 = func_571(iVar5, 11, 4294967295);
										Global_11569[1 /*14*/] = { func_615(iVar5, 11, iVar36, 4294967295) };
										iVar37 = func_575(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
									}
								}
								iVar39 = 4294967295;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_579(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_579(iVar5, iVar23, 8, 4);
								}
								if (FILE::_0x341DE7ED1D2A1BFD(iVar39, 3978471604, 0))
								{
									iVar36 = func_571(iVar5, 11, 4294967295);
									Global_11569[1 /*14*/] = { func_615(iVar5, 11, iVar36, 4294967295) };
									iVar37 = func_575(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_575(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iParam2, 11, 3), 2575628572, 0))
									{
										if (!func_568(iVar5, func_580(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iParam2, 11, 4), 2575628572, 0))
									{
										if (!func_568(iVar5, func_580(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != 4294967197)
							{
								func_465(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_571(iVar5, 11, 4294967295);
								Global_11569[1 /*14*/] = { func_615(iVar5, 11, iVar36, 4294967295) };
								iVar37 = func_575(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
								if (iVar37 == 4294967197)
								{
									iVar37 = 240;
								}
								func_465(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_465(iParam0, 8, 48, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
						}
					}
				}
				func_565(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_588(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_578(iVar5, func_595(iParam0, 8, 4294967295), iParam2, func_595(iParam0, 4, 4294967295));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == 4294967295)
				{
					iParam8 = func_148(2151, iParam10, 0);
				}
				if (iParam9 == 4294967295)
				{
					iParam9 = func_148(2158, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != 4294967197)
				{
					iVar40 = 4294967197;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar40 = func_563(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar40 = func_561(iParam2);
					}
					if (iVar40 != 4294967197 && iParam2 != iVar40)
					{
						iParam2 = iVar40;
					}
				}
				func_520(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar41 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar41, 3938320434, 0))
			{
				iVar42 = func_580(iParam0, 11);
				iVar43 = func_580(iParam0, 4);
				iVar44 = func_578(iVar5, iParam2, iVar42, iVar43);
				if (iVar44 == 4294967197)
				{
					iVar44 = func_586(iParam0, iVar5, 11, iVar42, 3, 0);
				}
				switch (iVar41)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar44 = 11;
						iVar45 = func_579(iVar5, iParam2, 11, 4);
						if (!FILE::_0x341DE7ED1D2A1BFD(iVar45, 3764877471, 0))
						{
							iVar44 = 4294967197;
						}
						break;
				}
				if (iVar44 != 4294967197)
				{
					iVar46 = 0;
					while (iVar46 < 17)
					{
						if (func_577(iVar5, iVar44, iVar46) == iVar41)
						{
							iVar11 = iVar46;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar46++;
					}
				}
			}
			func_588(iParam0, iParam1, iParam2, iParam6, 0);
			iVar47 = func_580(iParam0, 11);
			if (func_574(iVar5, iVar47, 4294967295))
			{
				iVar48 = func_570(iVar5, iParam2, Global_11569[1 /*14*/].f_4);
				func_565(iVar5, iVar48);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_578(iVar5, iParam2, func_580(iParam0, 11), func_580(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar49 = func_580(iParam0, 7);
				if (!func_517(iVar5, iVar49, 9, 4294967197, 4294967197, 4294967197, iParam0, 0, iParam2, 4294967197, 4294967197, 4294967197))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3373257213, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3373257213, 0)))
			{
				iVar50 = func_148(2098, iParam10, 0);
				iVar51 = func_148(2099, iParam10, 0);
				iVar52 = func_148(2100, iParam10, 0);
				fVar53 = func_516(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				iVar54 = 0;
				while (iVar54 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar54, 0f);
					iVar54++;
				}
			}
			else
			{
				func_500(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar55 = func_580(iParam0, 11);
			iVar56 = func_580(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iVar55, 11, 3), 2575628572, 0))
				{
					if (!func_568(iVar5, iParam2, func_570(iVar5, iVar56, 0)))
					{
						func_465(iParam0, 8, 240, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_579(iVar5, iVar55, 11, 4), 2575628572, 0))
				{
					if (!func_568(iVar5, iParam2, func_570(iVar5, iVar56, 0)))
					{
						func_465(iParam0, 8, 78, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						Global_11569[1 /*14*/] = { func_615(iVar5, iParam1, iParam2, 4294967295) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_578(iVar5, func_580(iParam0, 8), func_580(iParam0, 11), iParam2);
			}
			iVar57 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar57, 3938320434, 0))
			{
				iVar58 = func_578(iVar5, iVar56, iVar55, iParam2);
				if (iVar58 == 4294967197)
				{
					iVar58 = func_586(iParam0, iVar5, 11, iVar55, 3, 0);
				}
				switch (iVar57)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar58 = 11;
						iVar59 = func_579(iVar5, iParam2, 11, 4);
						if (!FILE::_0x341DE7ED1D2A1BFD(iVar59, 3764877471, 0))
						{
							iVar58 = 4294967197;
						}
						break;
				}
				if (iVar58 != 4294967197)
				{
					iVar60 = 0;
					while (iVar60 < 17)
					{
						if (func_577(iVar5, iVar58, iVar60) == iVar57)
						{
							iVar11 = iVar60;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar60++;
					}
				}
			}
		}
		if (iParam4 == 4294967295)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_603(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_603(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_465(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_280004)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = 4294967295;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != 4294967197)
							{
								iVar6 = func_578(iVar5, iVar3, func_580(iParam0, 11), func_580(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != 4294967197)
				{
					func_465(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_499(iParam0))
				{
					iVar61 = func_497(iParam0, iVar5, iParam1, iParam2);
					if (iVar61 > 0)
					{
						iVar61 = (iVar61 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_491(iParam0, 9, iVar61))
						{
							func_465(iParam0, 9, iVar61, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
					}
					else
					{
						func_465(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar8 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_465(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar62 = func_148(2040, 4294967295, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_485(iParam0, iVar62), func_484(iParam0, iVar62), func_483(iParam0, iVar62));
				}
				if (iParam0 == AUDIO::_0x0626A247D2405330())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_485(AUDIO::_0x0626A247D2405330(), iVar62), func_484(AUDIO::_0x0626A247D2405330(), iVar62), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_483(AUDIO::_0x0626A247D2405330(), iVar62));
					func_482(CAM::_0xDC9DA9E8789F5246(), iVar62);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3975398423, 0))
					{
						func_465(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar63 = func_595(iParam0, 4, 4294967295);
					iVar64 = iParam2;
				}
				else
				{
					iVar63 = iParam2;
					iVar64 = func_595(iParam0, 11, 4294967295);
				}
				if (func_481(iVar5, 11, iVar64, 4294967295))
				{
					if (!func_480(iVar5, 4, iVar63, 4294967295))
					{
						if (func_479(iVar5, 4, iVar63, &uVar65))
						{
							func_465(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
					}
				}
				else if (func_480(iVar5, 4, iVar63, 4294967295))
				{
					if (func_478(iVar5, 4, iVar63, &uVar65))
					{
						func_465(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar66 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar67 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar68 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar66, iVar67);
				iVar69 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar70 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar71 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar69, iVar70);
				iVar72 = func_580(iParam0, 4);
				iVar73 = func_580(iParam0, 6);
				if (func_477(iVar5, iVar68))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar68, 1812005517, 0) != func_476(iVar5, iVar72, iVar68))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_473(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_465(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_473(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_465(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar71, 2252324139, 0) != func_472(iVar5, iVar73, iVar71))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_473(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_465(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_473(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_465(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
				if (func_477(iVar5, iVar71))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar71, 2252324139, 0) != func_472(iVar5, iVar73, iVar71))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_473(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_465(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_473(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_465(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar68, 1812005517, 0) != func_476(iVar5, iVar72, iVar68))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_473(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_465(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_473(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_465(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_582(iParam0);
				iVar79 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar80 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar81 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar79, iVar80);
				if (FILE::_0x341DE7ED1D2A1BFD(iVar81, 838607662, 0))
				{
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != 4294967197)
					{
						func_465(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar3 = func_586(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != 4294967197)
					{
						func_465(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_466(iParam0, &uVar4))
		{
			func_465(iParam0, 2, uVar4, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
	}
	if (iVar6 != 4294967197 && !bParam13)
	{
		func_465(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar9 != 4294967197)
	{
		func_465(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar7 != 4294967197)
	{
		func_465(iParam0, 1, iVar7, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar11 != 4294967295)
	{
		iVar82 = func_577(iVar5, func_595(iParam0, 3, 4294967295), iVar11);
		if (iVar82 != 4294967295)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_473(iVar5, iVar82, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_473(iVar5, iVar82, 3, 4);
			}
			if (iVar10 != 4294967197)
			{
				iVar10 = (iVar10 + iVar12);
				func_465(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
		}
	}
	Global_11567 = (Global_11567 - 1);
	return 1;
}

int func_466(int iParam0, var uParam1)//Position - 0x12274
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_595(AUDIO::_0x0626A247D2405330(), 2, 4294967295);
	if (func_148(753, Global_11566, 0) != 4294967197 && func_469())
	{
		if (func_468() == 4)
		{
			return 1;
		}
		if (func_148(753, Global_11566, 0) == 0 && func_148(754, Global_11566, 0) == 0)
		{
			if (func_467(161, Global_11566))
			{
				if (func_148(2051, Global_11566, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_148(752, Global_11566, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_148(753, Global_11566, 0);
		iVar1 = func_148(754, Global_11566, 0);
		if (!func_491(iParam0, iVar1, iVar0))
		{
			if (func_467(161, Global_11566))
			{
				*uParam1 = func_148(2051, Global_11566, 0);
			}
			else
			{
				*uParam1 = func_148(752, Global_11566, 0);
			}
			func_157(753, 4294967197, Global_11566, 1, 0);
			func_157(754, 2, Global_11566, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_467(int iParam0, int iParam1)//Position - 0x12388
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_149(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_468()//Position - 0x123B4
{
	return Global_140817;
}

int func_469()//Position - 0x123C0
{
	if (func_471() && func_470(0))
	{
		return 1;
	}
	return 0;
}

var func_470(int iParam0)//Position - 0x123DE
{
	return Global_140675[iParam0];
}

var func_471()//Position - 0x123EE
{
	return func_470(func_29() + 1);
}

int func_472(int iParam0, int iParam1, int iParam2)//Position - 0x12400
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_579(iParam0, iParam1, 6, 3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3930719226, 0))
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iParam2, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2874141894, 0))
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if ((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3581268889, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3930719226, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_579(iParam0, iParam1, 6, 4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if (((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3581268889, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3985067549, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_473(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12631
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_475(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_603(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_474(iParam0, func_603(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 4294967197;
}

int func_474(int iParam0, int iParam1)//Position - 0x12711
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return 4294967197;
}

int func_475(int iParam0)//Position - 0x12AB8
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return 4294967197;
}

int func_476(int iParam0, int iParam1, int iParam2)//Position - 0x12B19
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_579(iParam0, iParam1, 4, 3);
				iVar1 = func_569(iVar0);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0))) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0))) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case 3855202361:
					case 1858824227:
					case 4250699079:
					case 301706885:
					case 1283072893:
					case 2704788731:
					case 1995307108:
					case 1029014836:
					case 3929399030:
					case 4156520969:
					case 2260244477:
					case 3075454234:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case 4149288057:
					case 686423978:
					case 3531559638:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case 2596955306:
					case 2851865357:
					case 2133699953:
					case 2370455978:
					case 3819435620:
					case 4057830099:
					case 754461254:
					case 3139126914:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case 4201984160:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case 3846861623:
					case 3683868617:
					case 3183879215:
					case 2888597756:
					case 2382808253:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case 2165873043:
					case 3873596709:
					case 3619604190:
						iVar2 = 0;
						break;
				}
				if (((FILE::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 713391749, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 434101562, 0))
				{
					if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_579(iParam0, iParam1, 4, 4);
				iVar1 = func_569(iVar0);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
				{
					if ((((FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3533503320, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3087683953, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3191922138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1052059919, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_477(int iParam0, int iParam1)//Position - 0x131D2
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam1, 4238699116, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam1, 4238699116, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_478(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x1323E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_579(iParam0, iParam2, iParam1, 4);
						if (iVar0 != 4294967295)
						{
							iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!FILE::_0x341DE7ED1D2A1BFD(iVar3, 3194159983, 0))
										{
											*uParam3 = func_473(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_479(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x132E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_579(iParam0, iParam2, iParam1, 4);
						if (iVar0 != 4294967295)
						{
							iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (FILE::_0x341DE7ED1D2A1BFD(iVar3, 3194159983, 0))
										{
											*uParam3 = func_473(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_480(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1338F
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_579(iParam0, iParam2, 4, 4);
						}
						if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3194159983, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_481(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x133E5
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_579(iParam0, iParam2, 11, 4);
						}
						return FILE::_0x341DE7ED1D2A1BFD(iParam3, 3764877471, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_482(int iParam0, int iParam1)//Position - 0x13438
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

int func_483(int iParam0, int iParam1)//Position - 0x134AE
{
	return 0;
}

int func_484(int iParam0, int iParam1)//Position - 0x134B7
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

var func_485(int iParam0, int iParam1)//Position - 0x13519
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
		Global_1160F = func_486(iParam0, iParam1);
	}
	return Global_1160F;
}

int func_486(int iParam0, int iParam1)//Position - 0x135E9
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
				return func_490(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		return func_490(iParam0, iParam1);
	}
	if (func_489(iParam0))
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
				return func_490(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
			{
				return func_490(iParam0, iParam1) + 15;
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
			iVar6 = func_488(iVar5, 0);
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
						iVar0 = func_569(iVar5);
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
						iVar0 = func_569(iVar5);
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
			iVar7 = func_487(iVar5, 0);
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
					iVar0 = func_569(iVar5);
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
					return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1);
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
					return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
			}
			else
			{
				return func_490(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
			}
			else
			{
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1);
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
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3896754259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2326391594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3379614369, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3756588945, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2155823279, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3859427410, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1);
			}
			else
			{
				return func_490(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1);
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
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
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1);
			}
			else
			{
				return func_490(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1);
			}
			else
			{
				return func_490(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_490(iParam0, iParam1) + 15;
			}
			else
			{
				return func_490(iParam0, iParam1);
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
			iVar0 = func_569(iVar5);
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

int func_487(int iParam0, int iParam1)//Position - 0x157E2
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

int func_488(int iParam0, int iParam1)//Position - 0x15982
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

int func_489(int iParam0)//Position - 0x15AC6
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0, int iParam1)//Position - 0x15AF5
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

int func_491(int iParam0, int iParam1, int iParam2)//Position - 0x15B73
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_11569[1 /*14*/] = { func_615(iVar0, iParam1, iParam2, 4294967295) };
	uVar2 = Global_280004;
	uVar3 = Global_280005;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_604(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != 4294967197)
			{
				if (!func_491(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_280004 = uVar2;
					Global_280005 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_600(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_491(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_11569[2 /*14*/] = { func_615(iVar0, 14, iVar6, 4294967295) };
									if (Global_11569[2 /*14*/].f_C == iVar5)
									{
										if (func_491(iParam0, 14, iVar6))
										{
											if (!func_492(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_11569[2 /*14*/])))
											{
												Global_280004 = uVar2;
												Global_280005 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_580(iParam0, iVar4);
						Global_11569[2 /*14*/] = { func_615(iVar0, iVar4, iVar1, 4294967295) };
						if (!func_492(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_11569[2 /*14*/])))
						{
							Global_280004 = uVar2;
							Global_280005 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_10)
		{
			if (func_148(1757, Global_11566, 0) != uVar8[10])
			{
				Global_280004 = uVar2;
				Global_280005 = uVar3;
				return 0;
			}
		}
		Global_280004 = uVar2;
		Global_280005 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_600(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_491(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_4 || Global_11569[1 /*14*/].f_3 == 4294967295))
		{
			return 1;
		}
		if (((Global_11569[1 /*14*/].f_C == 0 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6)) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3261533395, 1)) && unk_0x10B86AFFB106342E(Global_280004) > 0)
		{
			iVar16 = unk_0x10B86AFFB106342E(Global_280004);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0xB316418AA9C1867B(Global_280004, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					FILE::INIT_SHOP_PED_PROP(&Var17);
					FILE::_0x5D5CAFF661DDF6FC(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_11569[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_603(iParam1)) && Global_11569[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_603(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_11568++;
			if (Global_11568 == 1)
			{
				if (func_481(iVar0, 11, func_580(iParam0, 11), 4294967295))
				{
					if (func_479(iVar0, 4, iParam2, &uVar18))
					{
						return func_491(iParam0, 4, uVar18);
					}
				}
				else if (func_478(iVar0, 4, iParam2, &uVar18))
				{
					return func_491(iParam0, 4, uVar18);
				}
			}
			Global_11568 = (Global_11568 - 1);
		}
	}
	return 0;
}

int func_492(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x15FD3
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == 4294967197 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == 4294967197 || uParam5->f_1 == 4294967295)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_600(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_496(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_495(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_494(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_493(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_495(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_494(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_493(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_495(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_494(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_493(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_493(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x165D7
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_579(iParam0, iParam2, 14, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam2, 14, 3), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_579(iParam0, iParam2, 1, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam2, 1, 3), 2452280943, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_579(iParam0, iParam2, 14, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam2, 14, 4), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_579(iParam0, iParam2, 1, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam2, 1, 4), 2452280943, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_494(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16854
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_579(iParam0, iParam2, 1, 3);
					}
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_579(iParam0, iParam2, 1, 4);
					}
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_495(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16C79
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_579(iParam0, iParam2, 14, 3);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_579(iParam0, iParam2, 14, 4);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_496(int iParam0, int iParam1, int iParam2)//Position - 0x16F6C
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_497(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17005
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_489(iParam0))
	{
		return 4294967197;
	}
	if (func_498(iParam0))
	{
		return 4294967197;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_579(iParam1, iParam3, 11, 3);
				if (iVar0 != 4294967295)
				{
					iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_473(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return 4294967197;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_579(iParam1, iParam3, 11, 4);
				if (iVar6 != 4294967295)
				{
					iVar7 = FILE::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILE::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_473(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return 4294967197;
			}
		}
	}
	return 4294967197;
}

int func_498(int iParam0)//Position - 0x17424
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8)), 2170337719, 0))
	{
		return 1;
	}
	return 0;
}

int func_499(int iParam0)//Position - 0x17456
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_500(int iParam0, int iParam1)//Position - 0x174A8
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::_GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar1 = func_148(2095, iParam1, 0);
	iVar2 = func_148(2096, iParam1, 0);
	iVar3 = func_148(2097, iParam1, 0);
	iVar4 = func_148(2098, iParam1, 0);
	iVar5 = func_148(2099, iParam1, 0);
	iVar6 = func_148(2100, iParam1, 0);
	fVar7 = func_516(134, iParam1);
	fVar8 = func_516(135, iParam1);
	fVar9 = func_516(136, iParam1);
	bVar10 = func_467(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_148(2101, iParam1, 0);
		if (iVar11 > 0)
		{
			func_501(iParam0, iParam1, 0);
		}
	}
}

void func_501(int iParam0, int iParam1, bool bParam2)//Position - 0x175E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_515(iVar1);
		if (!bParam2)
		{
			fVar3 = func_516(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_514(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_513(iVar4);
		iVar6 = func_512(iVar5);
		iVar7 = func_511(iVar5);
		if (iVar6 != 4294967295 && iVar7 != 4294967295)
		{
			if (!bParam2)
			{
				iVar10 = func_508(iVar6, iParam1, 4294967295);
				fVar11 = func_516(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_507(iVar6, iParam1);
				fVar11 = func_514(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_506(iVar5);
			iVar9 = func_505(iVar5);
			if (iVar8 != 4294967295)
			{
				if (!bParam2)
				{
					iVar13 = func_148(iVar8, iParam1, 0);
					iVar14 = func_148(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_504(iVar8, iParam1);
					iVar14 = func_504(iVar9, iParam1);
				}
				func_503(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_502(&iParam0, iParam1, bParam2);
}

void func_502(int iParam0, int iParam1, bool bParam2)//Position - 0x1771A
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_516(157, iParam1);
	}
	else
	{
		fVar0 = func_514(157, iParam1);
	}
	if (*iParam0 == AUDIO::_0x0626A247D2405330())
	{
	}
	PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_503(int iParam0, var uParam1, var uParam2)//Position - 0x17759
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_504(int iParam0, int iParam1)//Position - 0x1777A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_26B05F[iParam0 /*3*/][func_149(iParam1)];
	if (unk_0x4FB93AB9FE7E9240(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_505(int iParam0)//Position - 0x177A5
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return 4294967295;
}

int func_506(int iParam0)//Position - 0x177F1
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return 4294967295;
}

int func_507(int iParam0, int iParam1)//Position - 0x1783D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	if (!HUD::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_508(int iParam0, int iParam1, int iParam2)//Position - 0x17D7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	iVar0 = 0;
	iVar1 = func_510(iParam0, iParam1);
	iVar2 = func_509(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_509(int iParam0)//Position - 0x17DC5
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_510(int iParam0, int iParam1)//Position - 0x18168
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_511(int iParam0)//Position - 0x184BD
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return 4294967295;
}

int func_512(int iParam0)//Position - 0x1855C
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return 4294967295;
}

int func_513(int iParam0)//Position - 0x18608
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return 4294967295;
}

float func_514(int iParam0, int iParam1)//Position - 0x1869F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_272506[iParam0 /*3*/][func_149(iParam1)];
	if (HUD::_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_515(int iParam0)//Position - 0x186CA
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return 4294967295;
}

float func_516(int iParam0, int iParam1)//Position - 0x187B6
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_272506[iParam0 /*3*/][func_149(iParam1)];
	if (STATS::STAT_GET_FLOAT(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0f;
}

int func_517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x187E2
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
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = 4294967295;
		iVar2 = 4294967295;
		if (Global_4116E2 == iParam1)
		{
			iVar2 = Global_4116E1;
			iVar1 = Global_4116E0;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_579(iParam0, iParam1, 7, 3);
			iVar1 = func_569(iVar2);
			Global_4116E2 = iParam1;
			Global_4116E1 = iVar2;
			Global_4116E0 = iVar1;
		}
		iVar3 = 4294967295;
		iVar4 = 4294967295;
		if (Global_4116E5 == iParam3)
		{
			iVar4 = Global_4116E4;
			iVar3 = Global_4116E3;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_579(iParam0, iParam3, 11, 3);
			iVar3 = func_569(iVar4);
			Global_4116E5 = iParam3;
			Global_4116E4 = iVar4;
			Global_4116E3 = iVar3;
		}
		iVar5 = 4294967295;
		iVar6 = 4294967295;
		if (Global_4116E8 == iParam4)
		{
			iVar6 = Global_4116E7;
			iVar5 = Global_4116E6;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_579(iParam0, iParam4, 8, 3);
			iVar5 = func_569(iVar6);
			Global_4116E8 = iParam4;
			Global_4116E7 = iVar6;
			Global_4116E6 = iVar5;
		}
		iVar7 = 4294967295;
		iVar8 = 4294967295;
		if (Global_4116EB == iParam10)
		{
			iVar8 = Global_4116EA;
			iVar7 = Global_4116E9;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_579(iParam0, iParam10, 1, 3);
			iVar7 = func_569(iVar8);
			Global_4116EB = iParam10;
			Global_4116EA = iVar8;
			Global_4116E9 = iVar7;
		}
		if (iParam3 != 4294967197)
		{
			if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 351511157, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar8, 3321753654, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0))
			{
				if (iParam1 != 0 && !(iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3581268889, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3922081864, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2191515025, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 531704825, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2191515025, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3922081864, 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 4174722810, 0))
		{
			if (iParam9 != 4294967197)
			{
				iVar9 = 4294967295;
				if (iParam9 >= 327)
				{
					iVar9 = func_579(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case 2322066652:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case 3412210475:
					case 3052341317:
					case 2936175212:
					case 2440153500:
					case 3037782224:
					case 4219301288:
					case 3843309782:
					case 2954974957:
					case 2307328441:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case 2332199449:
					case 2640850660:
					case 2809611010:
					case 3116754847:
					case 3528333487:
					case 665568109:
					case 4006662580:
					case 1772824957:
					case 1533381874:
					case 2282743366:
					case 2008237453:
					case 2990848683:
					case 2751536676:
					case 3440865360:
					case 3233863587:
					case 3678932145:
					case 1307111925:
					case 1759289928:
					case 3258386893:
					case 4091931946:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2821155003, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 4231217130, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3424892835, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3020868293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_519(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4231217130, 0))
				{
					return 0;
				}
				else if (func_519(iParam0, iParam3))
				{
					return 0;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 4174722810, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != 4294967197)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3941896706, 0))
			{
				if (((FILE::_0x341DE7ED1D2A1BFD(iVar4, 3424892835, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2460520549, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2821155003, 0)) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3975398423, 0)))
		{
			if (iParam11 != 4294967197)
			{
				iVar10 = 4294967295;
				if (iParam11 >= 256)
				{
					iVar10 = func_579(iParam0, iParam11, 4, 3);
				}
				if (FILE::_0x341DE7ED1D2A1BFD(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3975398423, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3515131827, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3208708908, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3622096127, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4098852308, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2639813129, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2687017741, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3803378421, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!FILE::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 974680318, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3284162009, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3975398423, 0))
		{
			if (iParam8 != 4294967197)
			{
				return 0;
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3581268889, 0))
		{
			if (iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam9, 14, 3), 3581268889, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam9, 14, 3), 3581268889, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3175960345, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2477611561, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4195902460, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4146039002, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3859427410, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2919088559, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2516701414, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2380584066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != 4294967197)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != 4294967197)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != 4294967197)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3374433204, 0)))
		{
			if (iParam3 != 4294967197)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_574(iParam0, iParam3, 4294967295)) || iVar3 == 13)
				{
					if (((FILE::_0x341DE7ED1D2A1BFD(iVar4, 2848634098, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2516701414, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)))
				{
				}
				else
				{
					iVar0 = func_580(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_569(func_579(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != 4294967197)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_574(iParam0, iParam3, 4294967295)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 2848634098, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2516701414, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0))) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3401840379, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					iVar0 = func_580(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_569(func_579(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2344027589, 0))
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == 4267801282) || iVar4 == 4021738861) || iVar4 == 2176909583) || iVar4 == 2485888484) || iVar4 == 2772551696) || iVar4 == 3082382591) || iVar4 == 3408303065) || iVar4 == 3648467066) || iVar4 == 4004076254) || iVar4 == 15400801) || iVar4 == 3809553847) || iVar4 == 4040608066) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == 4102260035) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == 2299297850)
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
					{
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
			else if (iParam4 != 4294967197)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3401840379, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2923543492, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4017285990, 0)) || ((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 4017285990, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4186639197, 0))
		{
			if (iParam4 != 4294967197)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == 2403948617) || iVar6 == 2711026916) || iVar6 == 3601557260) || iVar6 == 2165554142) || iVar6 == 3014795546) || iVar6 == 3323774447) || iVar6 == 389965873) || iVar6 == 2843675828) || iVar6 == 4244353964) || iVar6 == 318070129) || iVar6 == 2443172568) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == 2989641374) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == 2326757277) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == 3821220287) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == 3920237998) || iVar6 == 399897093) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3916060468, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == 2403948617) || iVar6 == 2711026916) || iVar6 == 3601557260) || iVar6 == 2165554142) || iVar6 == 3014795546) || iVar6 == 3323774447) || iVar6 == 389965873) || iVar6 == 2843675828) || iVar6 == 4244353964) || iVar6 == 318070129) || iVar6 == 2443172568) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == 3920237998) || iVar6 == 399897093) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar6, 4287858010, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3599263835, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_518(iVar6)) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2821155003, 0))
		{
			if (iParam3 != 4294967197)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3581268889, 0))
				{
					return 0;
				}
			}
			if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = 4294967295;
		iVar12 = 4294967295;
		if (Global_4116E2 == iParam1)
		{
			iVar12 = Global_4116E1;
			iVar11 = Global_4116E0;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_579(iParam0, iParam1, 7, 4);
			iVar11 = func_569(iVar12);
			Global_4116E2 = iParam1;
			Global_4116E1 = iVar12;
			Global_4116E0 = iVar11;
		}
		iVar13 = 4294967295;
		iVar14 = 4294967295;
		if (Global_4116E5 == iParam3)
		{
			iVar14 = Global_4116E4;
			iVar13 = Global_4116E3;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_579(iParam0, iParam3, 11, 4);
			iVar13 = func_569(iVar14);
			Global_4116E5 = iParam3;
			Global_4116E4 = iVar14;
			Global_4116E3 = iVar13;
		}
		iVar15 = 4294967295;
		iVar16 = 4294967295;
		if (Global_4116E8 == iParam4)
		{
			iVar16 = Global_4116E7;
			iVar15 = Global_4116E6;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_579(iParam0, iParam4, 8, 4);
			iVar15 = func_569(iVar16);
			Global_4116E8 = iParam4;
			Global_4116E7 = iVar16;
			Global_4116E6 = iVar15;
		}
		iVar17 = 4294967295;
		iVar18 = 4294967295;
		if (Global_4116EB == iParam10)
		{
			iVar18 = Global_4116EA;
			iVar17 = Global_4116E9;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_579(iParam0, iParam10, 1, 4);
			iVar17 = func_569(iVar18);
			Global_4116EB = iParam10;
			Global_4116EA = iVar18;
			Global_4116E9 = iVar17;
		}
		iVar19 = 4294967295;
		if (iParam9 >= 327)
		{
			iVar19 = func_579(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != 4294967197)
		{
			if (((FILE::_0x341DE7ED1D2A1BFD(iVar14, 2439348822, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 351511157, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3995877949, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2874141894, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar18, 3321753654, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2974827720, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 3581268889, 0))
			{
				if (iParam1 != 0 && !(iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3581268889, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3922081864, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2191515025, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 531704825, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2191515025, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != 4294967197)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3922081864, 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == 2775409281)
		{
			if (iParam9 != 4294967197)
			{
				switch (iVar19)
				{
					case 1446628467:
					case 2356918518:
					case 2041418586:
					case 2952069096:
					case 2026483804:
					case 2317439755:
					case 2624518054:
					case 2909936092:
					case 3206856001:
					case 2764048460:
					case 3073551665:
					case 3665097653:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case 3116796654:
					case 3414240867:
					case 3595191285:
					case 3893094264:
					case 3594470363:
					case 3890538278:
					case 2160728306:
					case 2158591042:
					case 1861212367:
					case 3505822975:
					case 4071874681:
					case 763352592:
					case 3745069444:
					case 2318077801:
					case 2884391659:
					case 3865987054:
					case 2563484842:
					case 2904609816:
					case 2529150874:
					case 2761646929:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case 2297277414:
					case 2677758273:
					case 2903012379:
					case 2461997424:
						return 0;
						break;
					}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2821155003, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 4231217130, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_519(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_519(iParam0, iParam3) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4231217130, 0))
				{
					return 0;
				}
				if (iParam10 != 4294967197)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3941896706, 0))
			{
				if ((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 3424892835, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3120042828, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2460520549, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2821155003, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 4231217130, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3581268889, 0))
		{
			if (iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam9, 14, 4), 3581268889, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam9, 14, 4), 3581268889, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2821155003, 0)) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 3975398423, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != 4294967197)
			{
				iVar20 = 4294967295;
				if (iParam11 >= 256)
				{
					iVar20 = func_579(iParam0, iParam11, 4, 4);
				}
				if (FILE::_0x341DE7ED1D2A1BFD(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != 4294967295 && (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3374433204, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1714969731, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((FILE::_0x341DE7ED1D2A1BFD(iVar14, 700658917, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 745826556, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 144417099, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 1553766533, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2380584066, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 3374433204, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0))
						{
							if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != 4294967197)
		{
			if ((iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 1406402954, 1)) || (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_574(iParam0, iParam3, 4294967295))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3533503320, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2947481270, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3355441939, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4239416730, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3764877471, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3581268889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4239863004, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3515131827, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3208708908, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1627756587, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3622096127, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 572416369, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4098852308, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2687017741, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1976716889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1407863332, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2308552066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3191922138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1455992833, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3424892835, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3120042828, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3117486850, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2947481270, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2639813129, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2189108303, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1893564692, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1710451520, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1416808511, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1641506460, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 699233865, 0)) || iVar16 == 3729670221) || iVar16 == 262349558) || iVar16 == 3377163241) || iVar16 == 3138899842) || iVar16 == 2170215433) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == 3257146800) || iVar16 == 4215869433) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2687017741, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1976716889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3942519903, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3652415946, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3475397808, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2274898971, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3859427410, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
				{
					if (!FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((FILE::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 1353777856, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3087683953, 0))
				{
					return 0;
				}
				else if (func_570(iParam0, iParam4, 0) != 4294967197)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != 4294967197)
		{
			if (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 654065530, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2974827720, 0)))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (iParam4 >= 136 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (iParam4 >= 136 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					FILE::_0x5D5CAFF661DDF6FC(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (iParam4 >= 136 && FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3533503320, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2947481270, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3300263412, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3175734607, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2308552066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 602650322, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 905042630, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1204125293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2439348822, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2919088559, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0)))
		{
			if (iParam3 != 4294967197)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3533503320, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 821147517, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2947481270, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3300263412, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3175734607, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2687017741, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2308552066, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2943480357, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3466488725, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1831422288, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 2412047274, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0))
				{
					if (iParam1 >= 55 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((FILE::_0x341DE7ED1D2A1BFD(iVar16, 2508519779, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3745123536, 0))
				{
					return 0;
				}
				else if ((FILE::_0x341DE7ED1D2A1BFD(iVar16, 2591763688, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2879967043, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 4126630879, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != 4294967197)
			{
				if (iVar19 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar19, 2974827720, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3764877471, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3300263412, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != 4294967197)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3094454078, 0))) || (iParam3 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3764877471, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 4287858010, 0))
				{
					return 0;
				}
				else if (((FILE::_0x341DE7ED1D2A1BFD(iVar16, 2508519779, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 3745123536, 0))
				{
					return 0;
				}
			}
			if (iParam8 != 4294967197)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != 4294967197)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILE::_0x341DE7ED1D2A1BFD(iVar12, 1716958480, 0))
		{
			if (iParam3 != 4294967197)
			{
				if (iVar14 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar14, 3547384111, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != 4294967197)
			{
				iVar22 = 4294967295;
				if (iParam11 >= 256)
				{
					iVar22 = func_579(iParam0, iParam11, 4, 4);
				}
				if (FILE::_0x341DE7ED1D2A1BFD(iVar22, 4261935729, 0))
				{
					return 1;
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

int func_518(int iParam0)//Position - 0x1D639
{
	if (iParam0 != 4294967295)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3511317604:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case 4088416422:
		case 860928119:
		case 3849169953:
		case 1107219923:
		case 4121250964:
		case 2277826910:
		case 3756663070:
		case 3059367564:
		case 3702725296:
		case 1815489089:
		case 3463872055:
		case 2062043045:
		case 3202866970:
		case 3229635276:
		case 2828972680:
		case 2778430579:
		case 507503642:
		case 2824569335:
		case 2902884777:
		case 264425668:
		case 4206107907:
		case 560755735:
		case 157858412:
		case 3701402237:
		case 3781814895:
		case 4008021770:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_519(int iParam0, int iParam1)//Position - 0x1D71A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_579(iParam0, iParam1, 11, 3);
		if (iVar0 != 4294967295)
		{
			if (((((((((((((((((((((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3175734607, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2192107526, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3020868293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3853675954, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3509027759, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1927516484, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2691772368, 0))
			{
				return 1;
			}
		}
		if (iVar0 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
			{
				return 1;
			}
		}
		return func_574(iParam0, iParam1, 4294967295);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_579(iParam0, iParam1, 11, 4);
		iVar2 = 4294967295;
		if (iVar1 != 4294967295)
		{
			iVar2 = func_569(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2901811106, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3547384111, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 4192142290, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3561175191, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3653355204, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2788596422, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2508519779, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 3284162009, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_520(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DC48
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_560(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = func_559(iVar0, iParam1);
	if (iVar1 != 4294967295)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = Global_11566;
		}
		func_592(iVar1, 1, iParam2);
	}
	func_521(iParam0, bParam3, 0);
}

void func_521(int iParam0, bool bParam1, bool bParam2)//Position - 0x1DC94
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_11566;
		PED::_CLEAR_PED_FACIAL_DECORATIONS(iParam0);
		iVar2 = func_558(iParam0);
		bVar3 = func_555(iParam0, 0);
		bVar4 = func_551(iParam0);
		bVar5 = func_550(iParam0);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_547(iVar6, iVar0))
			{
				if (func_540(&Var1, iVar6, iVar2, iParam0, 4294967295))
				{
					if (func_537(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_547(123, iVar0))
		{
			if (PED::_GET_TATTOO_ZONE(2575696819, 2470940806) != 7)
			{
				PED::_SET_PED_DECORATION(iParam0, 2575696819, 2470940806);
			}
		}
		iVar8 = FILE::_GET_NUM_DECORATIONS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILE::_GET_TATTOO_COLLECTION_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILE::_IS_DLC_DATA_EMPTY(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_547(iVar10, iVar0))
					{
						if (func_537(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_523(Var9.f_2, Var9.f_3))
							{
								PED::_SET_PED_DECORATION(iParam0, Var9.f_2, Var9.f_3);
								func_522(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_522(int iParam0, int iParam1, int iParam2)//Position - 0x1DDF8
{
	switch (iParam1)
	{
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					PED::_SET_PED_DECORATION(iParam0, 202420620, 3793820136);
					break;
			}
			switch (iParam2)
			{
				case 3080744829:
					PED::_SET_PED_DECORATION(iParam0, 202420620, 2555545128);
					break;
			}
			break;
		
		case 3278445300:
			switch (iParam2)
			{
				case 1321477520:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 5866095);
					break;
				
				case 3624132081:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1257645214);
					break;
				
				case 4262651638:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2356089588);
					break;
				
				case 3579465656:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 177616986);
					break;
				
				case 812138662:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3857326654);
					break;
				
				case 2344457391:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 460297451);
					break;
				
				case 1850969667:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3705068271);
					break;
				
				case 997671095:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 342543493);
					break;
				
				case 2768500028:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3344833108);
					break;
				
				case 3413114517:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2043701187);
					break;
				
				case 3723975078:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 794519137);
					break;
				
				case 3219467157:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 90598123);
					break;
				
				case 3503278242:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 4143671092);
					break;
				
				case 699980662:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 386731882);
					break;
				
				case 3711737208:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3165949897);
					break;
				
				case 1922201848:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3119890044);
					break;
				
				case 3527264388:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2584384061);
					break;
				
				case 1979813112:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 900966291);
					break;
				
				case 2238694704:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 4141212614);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 580372087);
					break;
				
				case 3773762709:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3968395205);
					break;
				
				case 1685732560:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2744434991);
					break;
				
				case 2908523918:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2381561611);
					break;
				
				case 2588319015:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 3338626153);
					break;
				
				case 3775009430:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2063062018);
					break;
				
				case 653935582:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 605481338);
					break;
				
				case 2111779395:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2586040309);
					break;
				
				case 428988289:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 264383347);
					break;
				
				case 2391004474:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1101363062);
					break;
				
				case 1365770911:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2331712927);
					break;
				
				case 42029862:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 390663856);
					break;
				
				case 438631811:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 916481637);
					break;
				
				case 2816251405:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1930151778);
					break;
				
				case 2899436067:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2563950594);
					break;
				
				case 30333135:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 2379769414);
					break;
				
				case 1783341339:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 4269431579);
					break;
				
				case 4278890170:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1193200233);
					break;
				
				case 3461324112:
					PED::_SET_PED_DECORATION(iParam0, 3278445300, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case 2976164949:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, 3479260505);
					break;
				
				case 2928217253:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, 3228839791);
					break;
			}
			break;
		
		case 3100036948:
			switch (iParam2)
			{
				case 3453728753:
					PED::_SET_PED_DECORATION(iParam0, 3100036948, 3853547334);
					break;
				
				case 2889112351:
					PED::_SET_PED_DECORATION(iParam0, 3100036948, 1647997020);
					break;
			}
			break;
		
		case 3517691514:
			switch (iParam2)
			{
				case 671171671:
					PED::_SET_PED_DECORATION(iParam0, 3517691514, 904519720);
					break;
				
				case 1911627074:
					PED::_SET_PED_DECORATION(iParam0, 3517691514, 3687575798);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					PED::_SET_PED_DECORATION(iParam0, 484754152, 3706417613);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 464027076);
					break;
				
				case 3033179461:
					PED::_SET_PED_DECORATION(iParam0, 484754152, 3329475802);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_523(int iParam0, int iParam1)//Position - 0x1E344
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
	
	switch (iParam0)
	{
		case 2149853087:
			switch (iParam1)
			{
				case 3279574649:
				case 1817749559:
					if (func_534(25032, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3279574649)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_534(25033, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1742471685)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 408116861:
				case 1306937694:
					if (func_534(25034, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 408116861)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2439639698:
				case 4199433301:
					if (func_534(25035, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2439639698)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1578402908:
				case 2423515410:
					if (func_534(25036, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1578402908)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2871600622:
				case 3174124050:
					if (func_534(25037, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2871600622)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_534(25038, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1611107047)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 742927305:
				case 2955752373:
					if (func_534(25039, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 742927305)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2716133631:
				case 9807447:
					if (func_534(25040, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2716133631)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 773738667:
				case 4058961977:
					if (func_534(25041, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 773738667)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 213007702:
				case 2824172702:
					if (func_534(25042, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 213007702)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 432208089:
				case 2194098912:
					if (func_534(25043, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 432208089)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 35817542:
				case 805626890:
					if (func_534(25044, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 35817542)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2508887203:
				case 3856479567:
					if (func_534(25045, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2508887203)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4079043990:
				case 1258452311:
					if (func_534(25046, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4079043990)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1275581512:
				case 2907379409:
					if (func_534(25047, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1275581512)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3080958277:
				case 390131826:
					if (func_534(25048, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3080958277)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1639713863:
				case 3361102206:
					if (func_534(25049, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1639713863)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 529311368:
				case 42888304:
					if (func_534(25050, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 529311368)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3261071432:
				case 2782349107:
					if (func_534(25051, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3261071432)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 924043677:
				case 1805955770:
					if (func_534(25052, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 924043677)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3720218030:
				case 2040741242:
					if (func_534(25053, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3720218030)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 519463901:
				case 2722851469:
					if (func_534(25054, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 519463901)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3651614109:
				case 2193688522:
					if (func_534(25055, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3651614109)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1571011017:
				case 2288750428:
					if (func_534(25056, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1571011017)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4200426360:
				case 1445470992:
					if (func_534(25057, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4200426360)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1884218662:
				case 31459402:
					if (func_534(25058, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1884218662)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3949705427:
				case 850282323:
					if (func_534(25059, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3949705427)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3272108238:
				case 1518409673:
					if (func_534(25060, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3272108238)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2508644372:
				case 576453072:
					if (func_534(25061, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2508644372)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_534(25062, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2085269022)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1511882653:
				case 3050911507:
					if (func_534(25063, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1511882653)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3787980911:
				case 1650491806:
					if (func_534(25064, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3787980911)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3420885708:
				case 507754313:
					if (func_534(25065, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3420885708)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2251561359:
				case 3126231503:
					if (func_534(25066, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2251561359)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 59038842:
				case 539301314:
					if (func_534(25067, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 59038842)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1101237057:
				case 485114319:
					if (func_534(25068, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1101237057)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3637431619:
				case 1397146165:
					if (func_534(25069, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3637431619)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2201382271:
				case 3372054796:
					if (func_534(25070, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2201382271)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 908383468:
				case 898093918:
					if (func_534(25071, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 908383468)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2686206897:
				case 3781150267:
					if (func_534(25072, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2686206897)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1373660540:
				case 134762953:
					if (func_534(25073, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1373660540)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1854316713:
				case 252404144:
					if (func_534(25074, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1854316713)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4175016100:
				case 168579849:
					if (func_534(25075, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4175016100)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2645125068:
				case 1888095634:
					if (func_534(25076, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2645125068)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2654202371:
				case 3248730510:
					if (func_534(25077, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2654202371)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1787927716:
				case 33901453:
					if (func_534(25078, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1787927716)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 104283481:
				case 2251734358:
					if (func_534(25079, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 104283481)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 378263500:
				case 1113927554:
					if (func_534(25080, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 378263500)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3233751987:
				case 2692407995:
					if (func_534(25081, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3233751987)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1034166199:
				case 3127154998:
					if (func_534(25082, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1034166199)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_534(25083, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1828057305)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2808669915:
				case 647456058:
					if (func_534(25084, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2808669915)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3754200137:
				case 3577444135:
					if (func_534(25085, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3754200137)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3059006604:
				case 2653097029:
					if (func_534(25086, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3059006604)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3965650301:
				case 1857030685:
					if (func_534(25087, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3965650301)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3713087024:
				case 3220044650:
					if (func_534(25088, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3713087024)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2487621862:
				case 2750658625:
					if (func_534(25089, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2487621862)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3276557861:
				case 3814592076:
					if (func_534(25090, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3276557861)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4158955398:
				case 3136660877:
					if (func_534(25091, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4158955398)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2225472569:
				case 808115088:
					if (func_534(25092, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2225472569)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3652080291:
				case 1544542048:
					if (func_534(25093, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3652080291)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2484129658:
				case 212713658:
					if (func_534(25094, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2484129658)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1034484576:
				case 3757490169:
					if (func_534(25095, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1034484576)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1979445594:
				case 2227834618:
					if (func_534(25096, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1979445594)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2761089960:
				case 1060051174:
					if (func_534(25097, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2761089960)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3402712309:
				case 2038375002:
					if (func_534(25098, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3402712309)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3640745036:
				case 4038592993:
					if (func_534(25099, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3640745036)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 450544862:
				case 3330546742:
					if (iParam1 == 450544862)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case 3080744829:
					if (func_534(22108, 4294967295, 4294967295) || func_534(25006, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1495413374)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 370906922:
				case 3215190484:
					if (func_534(9481, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 370906922)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 531742637:
				case 3345977130:
					if (func_534(9470, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 531742637)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4069161506:
				case 1382201813:
					if (func_534(9475, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4069161506)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3670380344:
				case 1576375706:
					if (func_534(9472, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3670380344)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 915144902:
				case 2938466779:
					if (func_534(9465, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 915144902)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4052221253:
				case 1838019927:
					if (func_534(9463, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4052221253)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1620048835:
				case 618955885:
					if (func_534(9464, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1620048835)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3197364028:
				case 909858453:
					if (func_534(9468, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3197364028)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3634294757:
				case 1809389163:
					if (func_534(9469, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3634294757)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4290325108:
				case 3912596849:
					if (func_534(9479, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4290325108)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1855977539:
				case 4004018258:
					if (func_534(9473, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1855977539)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1537270222:
				case 381474823:
					if (func_534(9480, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1537270222)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3068397526:
				case 570088958:
					if (func_534(9476, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3068397526)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_534(9477, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1641457991)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1366312361:
				case 2967569550:
					if (func_534(9471, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1366312361)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2737854075:
				case 655777349:
					if (func_534(9474, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2737854075)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2604396882:
				case 2798061676:
					if (func_534(9467, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2604396882)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3787763041:
				case 3251957114:
					if (func_534(9478, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3787763041)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2490069657:
				case 2968890285:
					if (func_534(9462, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2490069657)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2919733873:
				case 3174643924:
					if (func_534(9466, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2919733873)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 490066935:
				case 2711346369:
					if (func_534(22126, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 490066935)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_534(22127, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1193725595)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 628493116:
				case 4050887464:
					if (func_534(22128, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 628493116)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2182811778:
				case 1055951410:
					if (func_534(22124, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2182811778)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_534(22130, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1511337702)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3667300768:
				case 2420112636:
					if (func_534(22125, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3667300768)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 768324163:
				case 2915775040:
					if (func_534(22129, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 768324163)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2846205483:
				case 1435106801:
					if (func_534(22131, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2846205483)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 868551738:
				case 3042283349:
					if (func_534(22132, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 868551738)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			switch (iParam1)
			{
				case 3273704435:
				case 2914359593:
					if (func_534(22147, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3273704435)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4030519365:
				case 1010167914:
					if (func_534(22148, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4030519365)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3642839861:
				case 1059266367:
					if (func_534(22149, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3642839861)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3684952697:
				case 1869746711:
					if (func_534(22150, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3684952697)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 848073973:
				case 167494616:
					if (func_534(22151, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 848073973)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1561087717:
				case 231256171:
					if (func_534(22152, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1561087717)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2067249852:
				case 2253771008:
					if (func_534(22153, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2067249852)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1963924398:
				case 4063172076:
					if (func_534(22154, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1963924398)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3396417020:
				case 3087503657:
					if (func_534(22155, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3396417020)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3220788605:
				case 2023442158:
					if (func_534(22156, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3220788605)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3926350552:
				case 3001773213:
					if (func_534(22157, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3926350552)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4216400795:
				case 767365246:
					if (func_534(22158, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4216400795)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1623651387:
				case 3976924357:
					if (func_534(22159, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1623651387)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3064987056:
				case 3554359290:
					if (func_534(22160, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3064987056)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2736645870:
				case 126660566:
					if (func_534(22161, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2736645870)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 518190097:
				case 4042233903:
					if (func_534(22162, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 518190097)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2298924002:
				case 3250830683:
					if (func_534(22163, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2298924002)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1720844546:
				case 3403205002:
					if (func_534(22164, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1720844546)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4274257317:
				case 1410738248:
					if (func_534(22165, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4274257317)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2677583717:
				case 2316239806:
					if (func_534(22166, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2677583717)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3769832231:
				case 1684642458:
					if (func_534(22167, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3769832231)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1796039054:
				case 4147476956:
					if (func_534(22168, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1796039054)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1250030109:
				case 2872849300:
					if (func_534(22169, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1250030109)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3099091001:
				case 3981035871:
					if (func_534(22170, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3099091001)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 672890092:
				case 211076563:
					if (func_534(22171, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 672890092)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 413298313:
				case 355035035:
					if (func_534(22172, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 413298313)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1157302328:
				case 2847658428:
					if (func_534(22173, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1157302328)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2730509825:
				case 1802655618:
					if (func_534(22174, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2730509825)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1152621988:
				case 3231225140:
					if (func_534(22175, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1152621988)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2333675947:
				case 1988028531:
					if (func_534(22176, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2333675947)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2382376222:
				case 73898487:
					if (func_534(22177, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2382376222)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1049766626:
				case 3253154178:
					if (func_534(22178, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1049766626)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case 2171481858:
				case 1457900554:
					if (func_534(15426, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2171481858)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3479260505:
				case 3228839791:
					if (func_534(15422, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3479260505)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2976164949:
				case 2928217253:
					if (func_534(15423, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2976164949)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 306110040:
				case 1944822196:
					if (func_534(15421, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 306110040)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1828101251:
				case 2655677837:
					if (func_534(15427, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1828101251)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3375652548:
				case 1282565442:
					if (func_534(15419, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3375652548)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1971111649:
				case 3410686596:
					if (func_534(15420, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1971111649)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case 3972875916:
					if (func_534(15394, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1029334921)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3760111810:
				case 3126392231:
					if (func_467(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3760111810)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3778634034:
				case 756873456:
					if (func_534(15406, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3778634034)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 485135095:
				case 3564929588:
					if (func_534(15395, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 485135095)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1713551997:
				case 3324508810:
					if (func_467(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1713551997)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2804308795:
				case 975601953:
					if (func_534(15410, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2804308795)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2559332058:
				case 1614208560:
					if (func_534(15407, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2559332058)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1931303956:
				case 3568934735:
					if (func_467(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1931303956)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2363349808:
				case 2469980134:
					if (func_467(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2363349808)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2568634995:
				case 417579524:
					if (func_534(15414, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2568634995)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2912044766:
				case 734151492:
					if (func_534(15415, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2912044766)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 452778672:
				case 2528104976:
					if (func_534(15399, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 452778672)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2518176946:
				case 579562906:
					if (func_534(15404, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2518176946)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2306910001:
				case 3675212365:
					if (func_467(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2306910001)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 816707921:
				case 1424441799:
					if (func_534(15392, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 816707921)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 744446190:
				case 2889930927:
					if (func_534(15390, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 744446190)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 917772807:
				case 1929056908:
					if (func_534(15402, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 917772807)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4002044941:
				case 4260428506:
					if (func_534(15416, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4002044941)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2799534611:
				case 1898518287:
					if (func_467(209, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2799534611)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 4054732749:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_534(9366, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 769964545)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1424500982:
				case 3593481096:
					if (func_534(9367, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1424500982)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2484182111:
				case 1951718630:
					if (func_534(9369, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2484182111)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 837990279:
				case 2312988435:
					if (func_534(9368, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 837990279)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1752551314:
				case 468661890:
					if (func_534(9365, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1752551314)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 735155845:
				case 1907925586:
					if (func_534(9364, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 735155845)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1863251462:
				case 646243571:
					if (func_534(9363, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1863251462)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2152908533:
				case 1953935161:
					if (func_534(9362, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2152908533)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4087376191:
				case 874867224:
					if (func_534(9370, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4087376191)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3362153409:
				case 1344008898:
					if (func_534(9371, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3362153409)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3981464097:
				case 1297781304:
					if (func_534(9372, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3981464097)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 718936417:
				case 1977233252:
					if (func_534(9373, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 718936417)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3187317691:
				case 4100556952:
					if (func_534(9374, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3187317691)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 39090475:
				case 392012609:
					if (func_534(9384, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 39090475)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1628251208:
				case 705148450:
					if (func_534(9385, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1628251208)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 3100036948:
			switch (iParam1)
			{
				case 3673611693:
				case 4248445491:
					if (func_534(7551, 4294967295, 4294967295) || func_148(3789, 4294967295, 0) >= Global_40001.f_3F35)
					{
						return 0;
					}
					if (iParam1 == 3673611693)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3288764775:
				case 2745749676:
					if (func_534(7467, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3288764775)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2460917757:
				case 1674429052:
					if (func_534(7468, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2460917757)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2234594716:
				case 4040297700:
					if (func_534(7469, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2234594716)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_534(7470, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1057304170)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1421572640:
				case 3353895036:
					if (func_534(7471, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1421572640)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 481259621:
				case 2450217779:
					if (func_534(7472, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 481259621)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1227497670:
				case 82745424:
					if (func_534(7473, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1227497670)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 319276780:
				case 3621507213:
					if (func_534(7474, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 319276780)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2070827921:
				case 4195012800:
					if (func_534(7475, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2070827921)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_534(7476, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1433629991)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2581972646:
				case 1362343227:
					if (func_534(7477, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2581972646)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_534(7478, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2125094286)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 712298404:
				case 2790410077:
					if (func_534(7479, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 712298404)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1998072324:
				case 367912881:
					if (func_534(7480, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1998072324)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1249206960:
				case 3458624016:
					if (func_534(7481, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1249206960)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 2387134446:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_534(4260, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 283190173)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 4234099516:
				case 1528527015:
					if (func_534(4257, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1528527015)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 926967912:
				case 2604937330:
					if (func_534(4269, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2604937330)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2408688706:
				case 2608972830:
					if (func_534(4261, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2608972830)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2980007588:
				case 255166927:
					if (func_534(4259, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 255166927)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2598192767:
				case 4023709809:
					if (func_534(4268, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4023709809)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3938520812:
				case 1885215284:
					if (func_534(4265, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1885215284)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 857810380:
				case 2359810308:
					if (func_534(4258, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2359810308)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3665290650:
				case 1061465906:
					if (func_534(4264, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 1061465906)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 2415436815:
				case 3423935567:
					if (func_534(4267, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 3423935567)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 3029119985:
				case 4193795811:
					if (func_534(4262, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 4193795811)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 32094424:
				case 2704668526:
					if (func_534(4263, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2704668526)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
				
				case 1969286744:
				case 303441856:
					if (func_534(4266, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 303441856)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_148(2931, 4294967295, 0) > 0)
					{
						return 0;
					}
					return !func_525(func_531(iParam1, 3), 4294967295);
					break;
				
				case 979307144:
				case 3821234857:
					if (func_148(2931, 4294967295, 0) > 0)
					{
						return 0;
					}
					return !func_525(func_531(iParam1, 4), 4294967295);
					break;
			}
			break;
		
		case 2752777702:
			switch (iParam1)
			{
				case 2245277646:
				case 560620683:
					if (func_534(113, 4294967295, 4294967295))
					{
						return 0;
					}
					if (iParam1 == 2245277646)
					{
						return !func_525(func_531(iParam1, 3), 4294967295);
					}
					else
					{
						return !func_525(func_531(iParam1, 4), 4294967295);
					}
					break;
			}
			break;
		
		case 3517691514:
			switch (iParam1)
			{
				case 3666968031:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case 4263986066:
				case 3966935081:
				case 2843286071:
				case 267904819:
					if (iParam1 == 3666968031)
					{
						if (func_534(3770, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_534(3771, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_534(3772, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_534(3773, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_534(3774, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_534(3775, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 4263986066)
					{
						if (func_534(3776, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3966935081)
					{
						if (func_534(3777, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2843286071)
					{
						if (func_534(3778, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_534(3779, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					return !func_525(func_531(iParam1, 3), 4294967295);
					break;
				
				case 2429969072:
				case 2154152399:
				case 223468453:
				case 4210996991:
				case 3888124034:
				case 3340226354:
				case 2619440442:
				case 2111717556:
				case 3879572293:
				case 427521984:
					if (iParam1 == 2429969072)
					{
						if (func_534(3770, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2154152399)
					{
						if (func_534(3771, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_534(3772, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 4210996991)
					{
						if (func_534(3773, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3888124034)
					{
						if (func_534(3774, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3340226354)
					{
						if (func_534(3775, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2619440442)
					{
						if (func_534(3776, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_534(3777, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 3879572293)
					{
						if (func_534(3778, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_534(3779, 4294967295, 4294967295))
						{
							return 0;
						}
					}
					return !func_525(func_531(iParam1, 4), 4294967295);
					break;
				
				case 3431576112:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_534(3765, 4294967295, 4294967295) && func_534(3766, 4294967295, 4294967295)) && func_534(3767, 4294967295, 4294967295)) && func_534(3768, 4294967295, 4294967295)) && func_534(3769, 4294967295, 4294967295))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_534(3593, 4294967295, 4294967295);
					break;
			}
			break;
		
		case 2896097998:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case 2629545179:
				case 1100930183:
				case 2699959038:
				case 94055115:
				case 3667070535:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case 2650539189:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case 2610826077:
				case 390655118:
				case 3815524672:
				case 3752042985:
				case 1696910411:
				case 3035909259:
					return 1;
					break;
				
				case 1980445908:
				case 2412537942:
				case 3059625407:
				case 2750449892:
					return 1;
					break;
				
				case 2844560976:
				case 1412653072:
					return (!func_467(152, 4294967295) && !func_534(9440, 4294967295, 4294967295));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_467(151, 4294967295) && !func_534(9430, 4294967295, 4294967295));
					break;
				
				case 953986562:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9426, 4294967295, 4294967295));
					break;
				
				case 585335312:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9427, 4294967295, 4294967295));
					break;
				
				case 489617063:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9428, 4294967295, 4294967295));
					break;
				
				case 1843402776:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9431, 4294967295, 4294967295));
					break;
				
				case 2694446475:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9432, 4294967295, 4294967295));
					break;
				
				case 1399087889:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9433, 4294967295, 4294967295));
					break;
				
				case 1169344430:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9439, 4294967295, 4294967295));
					break;
				
				case 2266319478:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9434, 4294967295, 4294967295));
					break;
				
				case 2959121676:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9435, 4294967295, 4294967295));
					break;
				
				case 3085118205:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9436, 4294967295, 4294967295));
					break;
				
				case 2065609077:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9429, 4294967295, 4294967295));
					break;
				
				case 3630722055:
					return (!func_525(func_531(iParam1, 3), 4294967295) && !func_534(9437, 4294967295, 4294967295));
					break;
				
				case 1531057961:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9426, 4294967295, 4294967295));
					break;
				
				case 1986678137:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9427, 4294967295, 4294967295));
					break;
				
				case 2142789653:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9428, 4294967295, 4294967295));
					break;
				
				case 308053343:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9431, 4294967295, 4294967295));
					break;
				
				case 753842819:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9432, 4294967295, 4294967295));
					break;
				
				case 1052794406:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9433, 4294967295, 4294967295));
					break;
				
				case 3599240635:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9439, 4294967295, 4294967295));
					break;
				
				case 3293145406:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9434, 4294967295, 4294967295));
					break;
				
				case 2869507774:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9435, 4294967295, 4294967295));
					break;
				
				case 1163510365:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9436, 4294967295, 4294967295));
					break;
				
				case 933242602:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9429, 4294967295, 4294967295));
					break;
				
				case 2947946180:
					return (!func_525(func_531(iParam1, 4), 4294967295) && !func_534(9437, 4294967295, 4294967295));
					break;
				
				case 1676130538:
				case 2564432594:
				case 2527534700:
				case 1297354841:
				case 3455160722:
				case 3752867087:
					return !func_326();
					break;
			}
			break;
		
		case 2610615559:
			switch (iParam1)
			{
				case 4104927148:
				case 4283626145:
					return !func_534(3608, 4294967295, 4294967295);
					break;
			}
			break;
		
		case 2617495721:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_534(3615, 4294967295, 4294967295) && !func_534(9438, 4294967295, 4294967295));
					break;
			}
			break;
		
		case 3238631853:
			if (iParam1 == 3331802784)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case 2750342078:
					return !func_534(3783, 4294967295, 4294967295);
					break;
				
				case 4012091971:
				case 1185175875:
					return !func_534(3784, 4294967295, 4294967295);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_534(3785, 4294967295, 4294967295);
					break;
				
				case 1088443427:
				case 3237008450:
					return !func_534(3786, 4294967295, 4294967295);
					break;
				
				case 200001600:
				case 2441171801:
					return !func_534(3787, 4294967295, 4294967295);
					break;
				
				case 1620729159:
				case 2434481736:
					return !func_534(3788, 4294967295, 4294967295);
					break;
				
				case 2581693058:
				case 499288642:
					return !func_534(3789, 4294967295, 4294967295);
					break;
				
				case 2723376327:
				case 4287080242:
					return !func_534(3790, 4294967295, 4294967295);
					break;
				
				case 3837327922:
				case 2741925794:
					return !func_534(3791, 4294967295, 4294967295);
					break;
				
				case 64160805:
				case 3214375851:
					return !func_534(3792, 4294967295, 4294967295);
					break;
				
				case 776078819:
				case 2991394291:
					if (iParam1 == 776078819)
					{
						iVar0 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == 2991394291)
					{
						iVar1 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_534(3793, 4294967295, 4294967295);
					break;
				
				case 3225502814:
				case 2085207152:
					if (iParam1 == 3225502814)
					{
						iVar2 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_534(3794, 4294967295, 4294967295);
					break;
				
				case 2952092057:
				case 857137150:
					if (iParam1 == 2952092057)
					{
						iVar4 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_534(3795, 4294967295, 4294967295);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_534(3796, 4294967295, 4294967295);
					break;
				
				case 642864781:
				case 2320309895:
					if (iParam1 == 642864781)
					{
						iVar8 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == 2320309895)
					{
						iVar9 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_534(3797, 4294967295, 4294967295);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_534(3798, 4294967295, 4294967295);
					break;
				
				case 3004186890:
				case 2795907126:
					if (iParam1 == 3004186890)
					{
						iVar12 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == 2795907126)
					{
						iVar13 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_534(3799, 4294967295, 4294967295);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_534(3800, 4294967295, 4294967295);
					break;
				
				case 3073018766:
				case 915049044:
					if (iParam1 == 3073018766)
					{
						iVar16 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_534(3801, 4294967295, 4294967295);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_148(2442, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_148(2422, 4294967295, 0);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_534(3802, 4294967295, 4294967295);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case 3706417613:
				case 464027076:
					return 1;
					break;
				
				case 3329475802:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case 2836425320:
				case 3688952543:
				case 3681590925:
				case 3848675795:
				case 3260325256:
				case 1022637316:
				case 2617810878:
				case 3164753996:
					return !func_524();
					break;
			}
			break;
	}
	return 0;
}

int func_524()//Position - 0x22EDD
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

bool func_525(int iParam0, int iParam1)//Position - 0x22F98
{
	int iVar0;
	int iVar1;
	
	if (func_528(iParam0) == 9954)
	{
		return 0;
	}
	iVar0 = func_527(iParam0, iParam1);
	iVar1 = iParam0;
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_526(iVar1));
}

int func_526(int iParam0)//Position - 0x22FCA
{
	return (iParam0 % 32);
}

int func_527(var uParam0, int iParam1)//Position - 0x22FD7
{
	int iVar0;
	
	iVar0 = func_148(func_528(uParam0), iParam1, 0);
	return iVar0;
}

int func_528(var uParam0)//Position - 0x22FF0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_530(iVar0);
	if ((func_151() == 0 || func_529() == 0) || (func_151() == 999 && func_529() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			}
	}
	return 9954;
}

int func_529()//Position - 0x23287
{
	return Global_6374;
}

int func_530(int iParam0)//Position - 0x23292
{
	return (iParam0 / 32);
}

int func_531(int iParam0, int iParam1)//Position - 0x2329F
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_533(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_532(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILE::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILE::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return 4294967295;
}

int func_532(int iParam0, var uParam1)//Position - 0x23310
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case 2719306513:
			iVar0 = 1;
			break;
		
		case 3574336209:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case 3001218220:
			iVar0 = 5;
			break;
		
		case 2723563697:
			iVar0 = 6;
			break;
		
		case 3583843390:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case 2970948711:
			iVar0 = 9;
			break;
		
		case 3813898467:
			iVar0 = 10;
			break;
		
		case 2808226100:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case 3202297851:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case 4277916028:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case 3115665136:
			iVar0 = 21;
			break;
		
		case 3345801823:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case 3805845814:
			iVar0 = 24;
			break;
		
		case 2658013278:
			iVar0 = 25;
			break;
		
		case 3017227056:
			iVar0 = 26;
			break;
		
		case 3247527588:
			iVar0 = 27;
			break;
		
		case 3480941175:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case 2195282233:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case 2166093439:
			iVar0 = 42;
			break;
		
		case 4146419516:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case 2944471331:
			iVar0 = 46;
			break;
		
		case 4144108005:
			iVar0 = 47;
			break;
		
		case 3108774251:
			iVar0 = 48;
			break;
		
		case 3088129781:
			iVar0 = 49;
			break;
		
		case 2781313634:
			iVar0 = 50;
			break;
		
		case 3751018965:
			iVar0 = 51;
			break;
		
		case 4119408063:
			iVar0 = 52;
			break;
		
		case 4163436466:
			iVar0 = 53;
			break;
		
		case 2478880483:
			iVar0 = 54;
			break;
		
		case 2181960574:
			iVar0 = 55;
			break;
		
		case 3193080838:
			iVar0 = 56;
			break;
		
		case 2896226467:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case 3290815752:
			iVar0 = 59;
			break;
		
		case 3472093860:
			iVar0 = 60;
			break;
		
		case 2849745012:
			iVar0 = 61;
			break;
		
		case 4231056673:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case 3621454966:
			iVar0 = 64;
			break;
		
		case 3871121977:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case 2582087468:
			iVar0 = 68;
			break;
		
		case 3343278569:
			iVar0 = 69;
			break;
		
		case 3162328151:
			iVar0 = 70;
			break;
		
		case 3781334565:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case 2680687897:
			iVar0 = 78;
			break;
		
		case 2843680903:
			iVar0 = 79;
			break;
		
		case 2536897525:
			iVar0 = 80;
			break;
		
		case 3069492074:
			iVar0 = 81;
			break;
		
		case 2302074863:
			iVar0 = 82;
			break;
		
		case 2456810081:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case 3541168836:
			iVar0 = 88;
			break;
		
		case 2841616224:
			iVar0 = 89;
			break;
		
		case 2986913970:
			iVar0 = 90;
			break;
		
		case 2211107895:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case 2397695325:
			iVar0 = 101;
			break;
		
		case 2628225240:
			iVar0 = 102;
			break;
		
		case 3012802224:
			iVar0 = 103;
			break;
		
		case 3242086917:
			iVar0 = 104;
			break;
		
		case 3549492906:
			iVar0 = 105;
			break;
		
		case 3779170831:
			iVar0 = 106;
			break;
		
		case 3483761071:
			iVar0 = 107;
			break;
		
		case 2708151610:
			iVar0 = 108;
			break;
		
		case 2871537844:
			iVar0 = 109;
			break;
		
		case 2597097481:
			iVar0 = 110;
			break;
		
		case 2824121113:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case 4159129068:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case 3460450294:
			iVar0 = 118;
			break;
		
		case 3891034954:
			iVar0 = 119;
			break;
		
		case 3115228879:
			iVar0 = 120;
			break;
		
		case 3272716693:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case 2449283690:
			iVar0 = 127;
			break;
		
		case 2739649799:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case 3761739506:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case 4014028093:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case 4269331372:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case 2267538644:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case 4189491799:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case 2615760574:
			iVar0 = 151;
			break;
		
		case 3985569448:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case 3525590995:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case 3599240635:
			iVar0 = 162;
			break;
		
		case 3293145406:
			iVar0 = 163;
			break;
		
		case 2869507774:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case 2947946180:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case 3455160722:
			iVar0 = 170;
			break;
		
		case 3752867087:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case 3424234774:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case 2195724964:
			iVar0 = 178;
			break;
		
		case 2434938664:
			iVar0 = 179;
			break;
		
		case 3734000131:
			iVar0 = 180;
			break;
		
		case 4235529392:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case 2544452382:
			iVar0 = 184;
			break;
		
		case 3310984830:
			iVar0 = 185;
			break;
		
		case 4062738459:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case 3091785380:
			iVar0 = 189;
			break;
		
		case 2182380092:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case 2448529910:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case 2906476685:
			iVar0 = 194;
			break;
		
		case 2667754520:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case 4283626145:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case 3260325256:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case 2617810878:
			iVar0 = 201;
			break;
		
		case 3164753996:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case 2643332496:
			iVar0 = 207;
			break;
		
		case 3402688533:
			iVar0 = 208;
			break;
		
		case 3262961517:
			iVar0 = 209;
			break;
		
		case 4039291896:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case 3888161488:
			iVar0 = 212;
			break;
		
		case 3702426796:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case 2167690677:
			iVar0 = 215;
			break;
		
		case 2932289758:
			iVar0 = 216;
			break;
		
		case 2745244306:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case 4009440706:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case 2702216367:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case 2295737380:
			iVar0 = 226;
			break;
		
		case 3550265776:
			iVar0 = 227;
			break;
		
		case 3869927371:
			iVar0 = 228;
			break;
		
		case 3496557385:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case 2613531142:
			iVar0 = 231;
			break;
		
		case 2808047926:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case 3106147795:
			iVar0 = 235;
			break;
		
		case 2529773858:
			iVar0 = 236;
			break;
		
		case 2878698170:
			iVar0 = 237;
			break;
		
		case 2183602142:
			iVar0 = 238;
			break;
		
		case 2414394209:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case 2969596196:
			iVar0 = 246;
			break;
		
		case 3465653318:
			iVar0 = 247;
			break;
		
		case 3764342753:
			iVar0 = 248;
			break;
		
		case 3995921276:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case 2541731363:
			iVar0 = 252;
			break;
		
		case 2769377606:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case 2429969072:
			iVar0 = 255;
			break;
		
		case 2154152399:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case 4210996991:
			iVar0 = 258;
			break;
		
		case 3888124034:
			iVar0 = 259;
			break;
		
		case 3340226354:
			iVar0 = 260;
			break;
		
		case 2619440442:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case 3879572293:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case 2675116380:
			iVar0 = 266;
			break;
		
		case 3581900148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case 2871623595:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case 3440335309:
			iVar0 = 272;
			break;
		
		case 2587096087:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case 3687575798:
			iVar0 = 276;
			break;
		
		case 2750342078:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case 3237008450:
			iVar0 = 280;
			break;
		
		case 2441171801:
			iVar0 = 281;
			break;
		
		case 2434481736:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case 4287080242:
			iVar0 = 284;
			break;
		
		case 2741925794:
			iVar0 = 285;
			break;
		
		case 3214375851:
			iVar0 = 286;
			break;
		
		case 3553906860:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case 3198238525:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case 2501768080:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case 2736526188:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case 4247103781:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case 3619247380:
			iVar0 = 315;
			break;
		
		case 3684079028:
			iVar0 = 316;
			break;
		
		case 4165269048:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case 3225502814:
			iVar0 = 320;
			break;
		
		case 2952092057:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case 3004186890:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case 3073018766:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case 2488340653:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case 2376809245:
			iVar0 = 332;
			break;
		
		case 2459884565:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case 3879721272:
			iVar0 = 336;
			break;
		
		case 2291438259:
			iVar0 = 337;
			break;
		
		case 3022015970:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case 4230317643:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case 3033179461:
			iVar0 = 343;
			break;
		
		case 3329475802:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case 3177468311:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case 3522478648:
			iVar0 = 349;
			break;
		
		case 2895795962:
			iVar0 = 350;
			break;
		
		case 3331802784:
			iVar0 = 351;
			break;
		
		case 3010449627:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case 3416324628:
			iVar0 = 355;
			break;
		
		case 2676422371:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case 2645923143:
			iVar0 = 358;
			break;
		
		case 3001010771:
			iVar0 = 359;
			break;
		
		case 4210881926:
			iVar0 = 360;
			break;
		
		case 3351105817:
			iVar0 = 361;
			break;
		
		case 2939511462:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case 2240983032:
			iVar0 = 365;
			break;
		
		case 3772134555:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case 2782860292:
			iVar0 = 368;
			break;
		
		case 4021661791:
			iVar0 = 369;
			break;
		
		case 3515844366:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case 3658329143:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case 3254144735:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case 2147722994:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case 2392582730:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case 3817515616:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case 2525988880:
			iVar0 = 390;
			break;
		
		case 2155255474:
			iVar0 = 391;
			break;
		
		case 2785731033:
			iVar0 = 392;
			break;
		
		case 3151583837:
			iVar0 = 393;
			break;
		
		case 2604760515:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case 2752574072:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case 3928891749:
			iVar0 = 402;
			break;
		
		case 3169535712:
			iVar0 = 403;
			break;
		
		case 2294898333:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case 2208565317:
			iVar0 = 407;
			break;
		
		case 2448499935:
			iVar0 = 408;
			break;
		
		case 2969508819:
			iVar0 = 409;
			break;
		
		case 3728242245:
			iVar0 = 410;
			break;
		
		case 3507117033:
			iVar0 = 411;
			break;
		
		case 2409946211:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case 3821234857:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case 4234099516:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case 2408688706:
			iVar0 = 418;
			break;
		
		case 2980007588:
			iVar0 = 419;
			break;
		
		case 2598192767:
			iVar0 = 420;
			break;
		
		case 3938520812:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case 3665290650:
			iVar0 = 423;
			break;
		
		case 2415436815:
			iVar0 = 424;
			break;
		
		case 3029119985:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case 4146654654:
			iVar0 = 429;
			break;
		
		case 3716689868:
			iVar0 = 430;
			break;
		
		case 3576057326:
			iVar0 = 431;
			break;
		
		case 3435940437:
			iVar0 = 432;
			break;
		
		case 3455069491:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case 4000810112:
			iVar0 = 435;
			break;
		
		case 3072767075:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case 4159038241:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case 4281835905:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case 3147082974:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case 2893033765:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case 2433014551:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case 2363252288:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case 2972012212:
			iVar0 = 451;
			break;
		
		case 3478309113:
			iVar0 = 452;
			break;
		
		case 3306659598:
			iVar0 = 453;
			break;
		
		case 2953555988:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case 3745509286:
			iVar0 = 456;
			break;
		
		case 2966422119:
			iVar0 = 457;
			break;
		
		case 2933613677:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case 4270783840:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case 3163075870:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case 2468829448:
			iVar0 = 471;
			break;
		
		case 4150861695:
			iVar0 = 472;
			break;
		
		case 3545983646:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case 3517296165:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case 2275461399:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case 2889112351:
			iVar0 = 483;
			break;
		
		case 3123672299:
			iVar0 = 484;
			break;
		
		case 4217890946:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case 2745749676:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case 4040297700:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case 3353895036:
			iVar0 = 492;
			break;
		
		case 2450217779:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case 3621507213:
			iVar0 = 495;
			break;
		
		case 4195012800:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case 2790410077:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case 3458624016:
			iVar0 = 502;
			break;
		
		case 4248445491:
			iVar0 = 503;
			break;
		
		case 3551918516:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case 2815280922:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case 3491685025:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case 3200288032:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case 2223762891:
			iVar0 = 516;
			break;
		
		case 2676785820:
			iVar0 = 517;
			break;
		
		case 2886713631:
			iVar0 = 518;
			break;
		
		case 4160781905:
			iVar0 = 519;
			break;
		
		case 3509183885:
			iVar0 = 520;
			break;
		
		case 3661500586:
			iVar0 = 521;
			break;
		
		case 2222479924:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case 4130915193:
			iVar0 = 527;
			break;
		
		case 2988476999:
			iVar0 = 528;
			break;
		
		case 3300164651:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case 4124112265:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case 4153598245:
			iVar0 = 534;
			break;
		
		case 3701612078:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case 3901253752:
			iVar0 = 537;
			break;
		
		case 2418732671:
			iVar0 = 538;
			break;
		
		case 2841884962:
			iVar0 = 539;
			break;
		
		case 2897261313:
			iVar0 = 540;
			break;
		
		case 3016881125:
			iVar0 = 541;
			break;
		
		case 2784075028:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case 3306607804:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case 3280018990:
			iVar0 = 547;
			break;
		
		case 2428527508:
			iVar0 = 548;
			break;
		
		case 3029200110:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case 3608342674:
			iVar0 = 553;
			break;
		
		case 3357418947:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case 3966627234:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case 2777002960:
			iVar0 = 558;
			break;
		
		case 3509477057:
			iVar0 = 559;
			break;
		
		case 4283198067:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case 2230702198:
			iVar0 = 562;
			break;
		
		case 2779074421:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case 3434797486:
			iVar0 = 566;
			break;
		
		case 4117085182:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case 3477716213:
			iVar0 = 571;
			break;
		
		case 3186090973:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case 3530950885:
			iVar0 = 576;
			break;
		
		case 2764151147:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case 4084857181:
			iVar0 = 579;
			break;
		
		case 4087857040:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case 3342021255:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case 3513341382:
			iVar0 = 586;
			break;
		
		case 2772719461:
			iVar0 = 587;
			break;
		
		case 2763722065:
			iVar0 = 588;
			break;
		
		case 3224494302:
			iVar0 = 589;
			break;
		
		case 2181626236:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case 2659935083:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case 3320989663:
			iVar0 = 595;
			break;
		
		case 2855323967:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case 3061399314:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case 3746049327:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case 3593481096:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case 2312988435:
			iVar0 = 607;
			break;
		
		case 2296873029:
			iVar0 = 608;
			break;
		
		case 3576521667:
			iVar0 = 609;
			break;
		
		case 4259269897:
			iVar0 = 610;
			break;
		
		case 3395885947:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case 3155073514:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case 2508441820:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case 3895743756:
			iVar0 = 621;
			break;
		
		case 2400575066:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case 3674777613:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case 3152487949:
			iVar0 = 626;
			break;
		
		case 3782007271:
			iVar0 = 627;
			break;
		
		case 3535154739:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case 4100556952:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case 2932289758:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case 3948027337:
			iVar0 = 645;
			break;
		
		case 3360213752:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case 2780266875:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case 3357438008:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case 3306634683:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case 3074772662:
			iVar0 = 655;
			break;
		
		case 3369232143:
			iVar0 = 656;
			break;
		
		case 2891221850:
			iVar0 = 657;
			break;
		
		case 3210341268:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case 2309369720:
			iVar0 = 661;
			break;
		
		case 2291778192:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case 4109213574:
			iVar0 = 665;
			break;
		
		case 2714051187:
			iVar0 = 666;
			break;
		
		case 3217907323:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case 4041616258:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case 3609915426:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case 4145026552:
			iVar0 = 673;
			break;
		
		case 4147226166:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case 2933398704:
			iVar0 = 676;
			break;
		
		case 4138367078:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case 3661223292:
			iVar0 = 679;
			break;
		
		case 2827221344:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case 3073786524:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case 3959733919:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case 4245330869:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case 3105073487:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case 3341605062:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case 3076236755:
			iVar0 = 703;
			break;
		
		case 4206780412:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case 2506473623:
			iVar0 = 706;
			break;
		
		case 4053072768:
			iVar0 = 707;
			break;
		
		case 2869552723:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case 2401215563:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case 4106342356:
			iVar0 = 718;
			break;
		
		case 3197892653:
			iVar0 = 719;
			break;
		
		case 3685259111:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case 2600238467:
			iVar0 = 722;
			break;
		
		case 3972875916:
			iVar0 = 723;
			break;
		
		case 3126392231:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case 3564929588:
			iVar0 = 726;
			break;
		
		case 3324508810:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case 3568934735:
			iVar0 = 730;
			break;
		
		case 2469980134:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case 2528104976:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case 3675212365:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case 2889930927:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case 4260428506:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case 3401862646:
			iVar0 = 742;
			break;
		
		case 3741152872:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case 3028531907:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case 2727135053:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case 3666763872:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case 3670125203:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case 3591426333:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case 4207529945:
			iVar0 = 764;
			break;
		
		case 4107728081:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case 3926187128:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case 3228839791:
			iVar0 = 770;
			break;
		
		case 2928217253:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case 2655677837:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case 3410686596:
			iVar0 = 775;
			break;
		
		case 3247654217:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case 2165113505:
			iVar0 = 778;
			break;
		
		case 3650992788:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case 2425672918:
			iVar0 = 787;
			break;
		
		case 3425794962:
			iVar0 = 788;
			break;
		
		case 3266468187:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case 3658187169:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case 3332073289:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case 3659218018:
			iVar0 = 798;
			break;
		
		case 3086063092:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case 2194961047:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case 3175896049:
			iVar0 = 805;
			break;
		
		case 3148252592:
			iVar0 = 806;
			break;
		
		case 4006114311:
			iVar0 = 807;
			break;
		
		case 3732937789:
			iVar0 = 808;
			break;
		
		case 3824432681:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case 3773762709:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case 2908523918:
			iVar0 = 813;
			break;
		
		case 2588319015:
			iVar0 = 814;
			break;
		
		case 3775009430:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case 2391004474:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case 2816251405:
			iVar0 = 823;
			break;
		
		case 2899436067:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case 4278890170:
			iVar0 = 827;
			break;
		
		case 3461324112:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case 2558002985:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case 3061170228:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case 3334946457:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case 4206739474:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case 2376344836:
			iVar0 = 845;
			break;
		
		case 3347619771:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case 4130924804:
			iVar0 = 850;
			break;
		
		case 2924945301:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case 3578137776:
			iVar0 = 853;
			break;
		
		case 3816509344:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case 3172311579:
			iVar0 = 856;
			break;
		
		case 3938332799:
			iVar0 = 857;
			break;
		
		case 2948625878:
			iVar0 = 858;
			break;
		
		case 3080744829:
			iVar0 = 859;
			break;
		
		case 3215190484:
			iVar0 = 860;
			break;
		
		case 3345977130:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case 2938466779:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case 3912596849:
			iVar0 = 869;
			break;
		
		case 4004018258:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case 2967569550:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case 2798061676:
			iVar0 = 876;
			break;
		
		case 3251957114:
			iVar0 = 877;
			break;
		
		case 2968890285:
			iVar0 = 878;
			break;
		
		case 3174643924:
			iVar0 = 879;
			break;
		
		case 2711346369:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case 4050887464:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case 2420112636:
			iVar0 = 885;
			break;
		
		case 2915775040:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case 3042283349:
			iVar0 = 888;
			break;
		
		case 2914359593:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case 2253771008:
			iVar0 = 895;
			break;
		
		case 4063172076:
			iVar0 = 896;
			break;
		
		case 3087503657:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case 3001773213:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case 3976924357:
			iVar0 = 901;
			break;
		
		case 3554359290:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case 4042233903:
			iVar0 = 904;
			break;
		
		case 3250830683:
			iVar0 = 905;
			break;
		
		case 3403205002:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case 2316239806:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case 4147476956:
			iVar0 = 910;
			break;
		
		case 2872849300:
			iVar0 = 911;
			break;
		
		case 3981035871:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case 2847658428:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case 3231225140:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case 3253154178:
			iVar0 = 920;
			break;
		
		case 3330546742:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case 4199433301:
			iVar0 = 925;
			break;
		
		case 2423515410:
			iVar0 = 926;
			break;
		
		case 3174124050:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case 2955752373:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case 4058961977:
			iVar0 = 931;
			break;
		
		case 2824172702:
			iVar0 = 932;
			break;
		
		case 2194098912:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case 3856479567:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case 2907379409:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case 3361102206:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case 2782349107:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case 2722851469:
			iVar0 = 944;
			break;
		
		case 2193688522:
			iVar0 = 945;
			break;
		
		case 2288750428:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case 3050911507:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case 3126231503:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case 3372054796:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case 3781150267:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case 3248730510:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case 2251734358:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case 2692407995:
			iVar0 = 971;
			break;
		
		case 3127154998:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case 3577444135:
			iVar0 = 975;
			break;
		
		case 2653097029:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case 3220044650:
			iVar0 = 978;
			break;
		
		case 2750658625:
			iVar0 = 979;
			break;
		
		case 3814592076:
			iVar0 = 980;
			break;
		
		case 3136660877:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case 3757490169:
			iVar0 = 985;
			break;
		
		case 2227834618:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case 4038592993:
			iVar0 = 989;
			break;
		
		case 2206007286:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case 4132540682:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case 4183115074:
			iVar0 = 994;
			break;
		
		case 2162071476:
			iVar0 = 995;
			break;
		
		case 2601745922:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case 3339094562:
			iVar0 = 998;
			break;
		
		case 3436910274:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case 3857235586:
			iVar0 = 1001;
			break;
		
		case 2740148174:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case 2300900741:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case 3526647457:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case 2934115835:
			iVar0 = 1009;
			break;
		
		case 3090672386:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case 3776928327:
			iVar0 = 1013;
			break;
		
		case 2732608579:
			iVar0 = 1014;
			break;
		
		case 2352732915:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case 2570652720:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case 3762782423:
			iVar0 = 1020;
			break;
		
		case 4118548380:
			iVar0 = 1021;
			break;
		
		case 4039712335:
			iVar0 = 1022;
			break;
		
		case 2719310071:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case 3443157429:
			iVar0 = 1027;
			break;
		
		case 3584645279:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case 2513882371:
			iVar0 = 1034;
			break;
		
		case 3293247315:
			iVar0 = 1035;
			break;
		
		case 3445478258:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case 3395834459:
			iVar0 = 1038;
			break;
		
		case 2449967341:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case 2712077458:
			iVar0 = 1041;
			break;
		
		case 4051998793:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case 3605174800:
			iVar0 = 1046;
			break;
	}
	if (iVar0 != 4294967295)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_533(int iParam0, var uParam1)//Position - 0x26B8B
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 2377643231:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case 3212230321:
			iVar0 = 4;
			break;
		
		case 3539985859:
			iVar0 = 5;
			break;
		
		case 2493111758:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case 4073342808:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case 3390818517:
			iVar0 = 15;
			break;
		
		case 3600527525:
			iVar0 = 16;
			break;
		
		case 2825376830:
			iVar0 = 17;
			break;
		
		case 2783760196:
			iVar0 = 18;
			break;
		
		case 2942296618:
			iVar0 = 19;
			break;
		
		case 2334693820:
			iVar0 = 20;
			break;
		
		case 2637577687:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case 4050773581:
			iVar0 = 30;
			break;
		
		case 3754181362:
			iVar0 = 31;
			break;
		
		case 3600134293:
			iVar0 = 32;
			break;
		
		case 3442908631:
			iVar0 = 33;
			break;
		
		case 2782318356:
			iVar0 = 34;
			break;
		
		case 3533613219:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case 2341230109:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case 3168924648:
			iVar0 = 46;
			break;
		
		case 3169944784:
			iVar0 = 47;
			break;
		
		case 2990598279:
			iVar0 = 48;
			break;
		
		case 2276823921:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case 3613438943:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case 4024572018:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case 3312042882:
			iVar0 = 65;
			break;
		
		case 3138957024:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case 3600180699:
			iVar0 = 68;
			break;
		
		case 2344767540:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case 3925514555:
			iVar0 = 71;
			break;
		
		case 4205853350:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case 3290549642:
			iVar0 = 74;
			break;
		
		case 3540872033:
			iVar0 = 75;
			break;
		
		case 3084268787:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case 2641166089:
			iVar0 = 80;
			break;
		
		case 4207753672:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case 3046354774:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case 3957824509:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case 3634460845:
			iVar0 = 91;
			break;
		
		case 3202106659:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case 2465787273:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case 3860337562:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case 2861079424:
			iVar0 = 102;
			break;
		
		case 3830353675:
			iVar0 = 103;
			break;
		
		case 3993739909:
			iVar0 = 104;
			break;
		
		case 3593204390:
			iVar0 = 105;
			break;
		
		case 3404684333:
			iVar0 = 106;
			break;
		
		case 3106715816:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case 2420527717:
			iVar0 = 113;
			break;
		
		case 2615461403:
			iVar0 = 114;
			break;
		
		case 2318738108:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case 4059820632:
			iVar0 = 117;
			break;
		
		case 3853113780:
			iVar0 = 118;
			break;
		
		case 3630745853:
			iVar0 = 119;
			break;
		
		case 3923340254:
			iVar0 = 120;
			break;
		
		case 3028746554:
			iVar0 = 121;
			break;
		
		case 3326911685:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case 4251325175:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case 2170264508:
			iVar0 = 129;
			break;
		
		case 2468233025:
			iVar0 = 130;
			break;
		
		case 3394514356:
			iVar0 = 131;
			break;
		
		case 4002772534:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case 3090123115:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case 2204476848:
			iVar0 = 140;
			break;
		
		case 2493499428:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case 2694446475:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case 2266319478:
			iVar0 = 150;
			break;
		
		case 2959121676:
			iVar0 = 151;
			break;
		
		case 2844560976:
			iVar0 = 152;
			break;
		
		case 3085118205:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case 3630722055:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case 2564432594:
			iVar0 = 157;
			break;
		
		case 2527534700:
			iVar0 = 158;
			break;
		
		case 2278861692:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case 3932156049:
			iVar0 = 161;
			break;
		
		case 3626880045:
			iVar0 = 162;
			break;
		
		case 3473684970:
			iVar0 = 163;
			break;
		
		case 3211500201:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case 2295606939:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case 2466693888:
			iVar0 = 170;
			break;
		
		case 2975727534:
			iVar0 = 171;
			break;
		
		case 3060566475:
			iVar0 = 172;
			break;
		
		case 3302663847:
			iVar0 = 173;
			break;
		
		case 3656569047:
			iVar0 = 174;
			break;
		
		case 4253423613:
			iVar0 = 175;
			break;
		
		case 2360064278:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case 2330342771:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case 4104927148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case 2836425320:
			iVar0 = 186;
			break;
		
		case 3688952543:
			iVar0 = 187;
			break;
		
		case 3681590925:
			iVar0 = 188;
			break;
		
		case 3848675795:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case 2608255643:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case 3833488553:
			iVar0 = 196;
			break;
		
		case 2411641643:
			iVar0 = 197;
			break;
		
		case 2180718500:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case 3087599751:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case 4266025802:
			iVar0 = 205;
			break;
		
		case 2467794158:
			iVar0 = 206;
			break;
		
		case 3774285873:
			iVar0 = 207;
			break;
		
		case 4085624142:
			iVar0 = 208;
			break;
		
		case 4001387825:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case 4205143952:
			iVar0 = 211;
			break;
		
		case 2474775961:
			iVar0 = 212;
			break;
		
		case 2706420022:
			iVar0 = 213;
			break;
		
		case 3070680226:
			iVar0 = 214;
			break;
		
		case 3300816913:
			iVar0 = 215;
			break;
		
		case 3425142503:
			iVar0 = 216;
			break;
		
		case 3661636376:
			iVar0 = 217;
			break;
		
		case 3986835932:
			iVar0 = 218;
			break;
		
		case 4256688647:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case 2202530885:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case 2695606028:
			iVar0 = 224;
			break;
		
		case 2397965201:
			iVar0 = 225;
			break;
		
		case 3283154198:
			iVar0 = 226;
			break;
		
		case 2978173115:
			iVar0 = 227;
			break;
		
		case 3878861853:
			iVar0 = 228;
			break;
		
		case 4246988799:
			iVar0 = 229;
			break;
		
		case 3936764676:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case 2349298380:
			iVar0 = 241;
			break;
		
		case 3666968031:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case 4263986066:
			iVar0 = 248;
			break;
		
		case 3966935081:
			iVar0 = 249;
			break;
		
		case 2843286071:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case 2675116380:
			iVar0 = 253;
			break;
		
		case 3581900148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case 2871623595:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case 3440335309:
			iVar0 = 259;
			break;
		
		case 2587096087:
			iVar0 = 260;
			break;
		
		case 3431576112:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case 4012091971:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case 2581693058:
			iVar0 = 270;
			break;
		
		case 2723376327:
			iVar0 = 271;
			break;
		
		case 3837327922:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case 2343188329:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case 3873872675:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case 3657015635:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case 3675901912:
			iVar0 = 286;
			break;
		
		case 3797881341:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case 2337235988:
			iVar0 = 289;
			break;
		
		case 2231255171:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 3399860945:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case 3315100136:
			iVar0 = 302;
			break;
		
		case 3061150354:
			iVar0 = 303;
			break;
		
		case 3428008581:
			iVar0 = 304;
			break;
		
		case 2991394291:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case 2320309895:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case 2795907126:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case 2511246236:
			iVar0 = 316;
			break;
		
		case 3286604016:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case 3356641015:
			iVar0 = 319;
			break;
		
		case 3221042061:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case 3498148572:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case 3706417613:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case 4178014736:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case 3287695293:
			iVar0 = 336;
			break;
		
		case 3650137595:
			iVar0 = 337;
			break;
		
		case 2191744799:
			iVar0 = 338;
			break;
		
		case 2705172223:
			iVar0 = 339;
			break;
		
		case 2605299229:
			iVar0 = 340;
			break;
		
		case 4105153188:
			iVar0 = 341;
			break;
		
		case 2699675155:
			iVar0 = 342;
			break;
		
		case 2754026582:
			iVar0 = 343;
			break;
		
		case 2158496124:
			iVar0 = 344;
			break;
		
		case 3628074862:
			iVar0 = 345;
			break;
		
		case 3293841973:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case 3081835584:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case 3389921303:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case 3628335496:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case 3742608980:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case 2511670695:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case 3319432886:
			iVar0 = 363;
			break;
		
		case 2206772672:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case 3813577650:
			iVar0 = 366;
			break;
		
		case 2513604260:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case 3627358476:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case 2683488490:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case 4216959023:
			iVar0 = 374;
			break;
		
		case 3532591449:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case 2211339246:
			iVar0 = 377;
			break;
		
		case 3826167179:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case 3236205948:
			iVar0 = 380;
			break;
		
		case 3748789084:
			iVar0 = 381;
			break;
		
		case 4176914562:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case 3217413647:
			iVar0 = 384;
			break;
		
		case 3408875137:
			iVar0 = 385;
			break;
		
		case 2888635760:
			iVar0 = 386;
			break;
		
		case 2326032446:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case 2353909077:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case 2678752380:
			iVar0 = 393;
			break;
		
		case 3453771999:
			iVar0 = 394;
			break;
		
		case 3385678017:
			iVar0 = 395;
			break;
		
		case 4055399955:
			iVar0 = 396;
			break;
		
		case 3681374589:
			iVar0 = 397;
			break;
		
		case 3306398922:
			iVar0 = 398;
			break;
		
		case 3204159642:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case 2954827777:
			iVar0 = 401;
			break;
		
		case 3444986535:
			iVar0 = 402;
			break;
		
		case 3743413818:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case 2604937330:
			iVar0 = 408;
			break;
		
		case 2608972830:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case 4023709809:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case 2359810308:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case 3423935567:
			iVar0 = 415;
			break;
		
		case 4193795811:
			iVar0 = 416;
			break;
		
		case 2704668526:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case 2245277646:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case 3435105851:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case 2792709690:
			iVar0 = 424;
			break;
		
		case 3748817012:
			iVar0 = 425;
			break;
		
		case 3937500408:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case 2765566124:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case 2729535606:
			iVar0 = 431;
			break;
		
		case 2766501723:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case 3618899888:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case 2461849155:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case 3112136128:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case 2826964225:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case 3568108136:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case 3986383110:
			iVar0 = 462;
			break;
		
		case 4230837422:
			iVar0 = 463;
			break;
		
		case 2863762782:
			iVar0 = 464;
			break;
		
		case 3161632992:
			iVar0 = 465;
			break;
		
		case 2485182525:
			iVar0 = 466;
			break;
		
		case 2718032298:
			iVar0 = 467;
			break;
		
		case 2724037612:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case 3853547334:
			iVar0 = 470;
			break;
		
		case 3453728753:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case 3126352371:
			iVar0 = 474;
			break;
		
		case 4238207201:
			iVar0 = 475;
			break;
		
		case 3288764775:
			iVar0 = 476;
			break;
		
		case 2460917757:
			iVar0 = 477;
			break;
		
		case 2234594716:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case 2581972646:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case 3673611693:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case 3040764753:
			iVar0 = 493;
			break;
		
		case 3338831235:
			iVar0 = 494;
			break;
		
		case 2369486613:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case 3273115719:
			iVar0 = 497;
			break;
		
		case 3521621780:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case 3135143256:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case 3806839956:
			iVar0 = 502;
			break;
		
		case 2330000013:
			iVar0 = 503;
			break;
		
		case 2659787169:
			iVar0 = 504;
			break;
		
		case 4284465733:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case 2425912672:
			iVar0 = 509;
			break;
		
		case 2477324465:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case 2558127479:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case 3387527107:
			iVar0 = 514;
			break;
		
		case 2195512507:
			iVar0 = 515;
			break;
		
		case 2575423754:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case 2276937590:
			iVar0 = 518;
			break;
		
		case 3577754752:
			iVar0 = 519;
			break;
		
		case 3700756846:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case 2462186424:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case 3738051574:
			iVar0 = 527;
			break;
		
		case 2364404600:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case 3452267707:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case 2298171041:
			iVar0 = 533;
			break;
		
		case 2444251856:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case 2664317299:
			iVar0 = 537;
			break;
		
		case 4269240224:
			iVar0 = 538;
			break;
		
		case 2931548643:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case 3834799180:
			iVar0 = 545;
			break;
		
		case 2279623714:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case 2743635327:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case 3330059108:
			iVar0 = 555;
			break;
		
		case 3149070523:
			iVar0 = 556;
			break;
		
		case 3518718614:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case 3367831962:
			iVar0 = 560;
			break;
		
		case 3849147253:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case 3224167131:
			iVar0 = 563;
			break;
		
		case 3705375134:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case 3411806187:
			iVar0 = 568;
			break;
		
		case 2530048142:
			iVar0 = 569;
			break;
		
		case 2244614783:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case 2595944785:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case 3945221051:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case 4053629649:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case 3642431830:
			iVar0 = 584;
			break;
		
		case 3146066454:
			iVar0 = 585;
			break;
		
		case 4023103986:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case 2833216333:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case 2484182111:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case 2937179293:
			iVar0 = 595;
			break;
		
		case 4286756969:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case 3310518207:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 4245396459:
			iVar0 = 600;
			break;
		
		case 2614595511:
			iVar0 = 601;
			break;
		
		case 2444054906:
			iVar0 = 602;
			break;
		
		case 2554929209:
			iVar0 = 603;
			break;
		
		case 3675425349:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case 3529425100:
			iVar0 = 606;
			break;
		
		case 2874304651:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case 2223952829:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case 2152908533:
			iVar0 = 619;
			break;
		
		case 4087376191:
			iVar0 = 620;
			break;
		
		case 3362153409:
			iVar0 = 621;
			break;
		
		case 3981464097:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case 3187317691:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case 3983721389:
			iVar0 = 627;
			break;
		
		case 3352935961:
			iVar0 = 628;
			break;
		
		case 3009926759:
			iVar0 = 629;
			break;
		
		case 3688260405:
			iVar0 = 630;
			break;
		
		case 2575871438:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case 3122584141:
			iVar0 = 634;
			break;
		
		case 4291474892:
			iVar0 = 635;
			break;
		
		case 3288962651:
			iVar0 = 636;
			break;
		
		case 2357655814:
			iVar0 = 637;
			break;
		
		case 2229363202:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case 2417150155:
			iVar0 = 641;
			break;
		
		case 3383391104:
			iVar0 = 642;
			break;
		
		case 2256954020:
			iVar0 = 643;
			break;
		
		case 3392980754:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case 4208481967:
			iVar0 = 646;
			break;
		
		case 3211533028:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case 3900113481:
			iVar0 = 649;
			break;
		
		case 3191839676:
			iVar0 = 650;
			break;
		
		case 2729316790:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case 3508235245:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case 3502164338:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case 2330238560:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case 3892191131:
			iVar0 = 668;
			break;
		
		case 4073306562:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case 4290543133:
			iVar0 = 672;
			break;
		
		case 4121678705:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case 2863393274:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case 3026762825:
			iVar0 = 679;
			break;
		
		case 2357299044:
			iVar0 = 680;
			break;
		
		case 4102164726:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case 3650464080:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case 3790954557:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case 2206744097:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case 2432050824:
			iVar0 = 696;
			break;
		
		case 3110235257:
			iVar0 = 697;
			break;
		
		case 4151463841:
			iVar0 = 698;
			break;
		
		case 3175745814:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 2652767338:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case 2254739093:
			iVar0 = 702;
			break;
		
		case 3511324146:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case 3749493234:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case 2587589773:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case 3760111810:
			iVar0 = 710;
			break;
		
		case 3778634034:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case 2804308795:
			iVar0 = 714;
			break;
		
		case 2559332058:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case 2363349808:
			iVar0 = 717;
			break;
		
		case 2568634995:
			iVar0 = 718;
			break;
		
		case 2912044766:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case 2518176946:
			iVar0 = 721;
			break;
		
		case 2306910001:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case 4002044941:
			iVar0 = 726;
			break;
		
		case 2799534611:
			iVar0 = 727;
			break;
		
		case 3483819579:
			iVar0 = 728;
			break;
		
		case 3443856147:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case 2929051212:
			iVar0 = 731;
			break;
		
		case 3872053927:
			iVar0 = 732;
			break;
		
		case 3402173809:
			iVar0 = 733;
			break;
		
		case 2499759140:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case 4240712565:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case 2453340107:
			iVar0 = 742;
			break;
		
		case 2480813839:
			iVar0 = 743;
			break;
		
		case 4248706915:
			iVar0 = 744;
			break;
		
		case 3991558277:
			iVar0 = 745;
			break;
		
		case 2773834007:
			iVar0 = 746;
			break;
		
		case 3646773689:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case 3837214976:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case 2171481858:
			iVar0 = 753;
			break;
		
		case 3479260505:
			iVar0 = 754;
			break;
		
		case 2976164949:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case 3375652548:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case 2817495570:
			iVar0 = 760;
			break;
		
		case 3644041061:
			iVar0 = 761;
			break;
		
		case 3676649172:
			iVar0 = 762;
			break;
		
		case 2474028615:
			iVar0 = 763;
			break;
		
		case 2762333887:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case 4027309874:
			iVar0 = 767;
			break;
		
		case 3751426808:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case 3855904941:
			iVar0 = 770;
			break;
		
		case 4107181384:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case 2263409101:
			iVar0 = 773;
			break;
		
		case 3223088199:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case 2749415457:
			iVar0 = 776;
			break;
		
		case 2483818209:
			iVar0 = 777;
			break;
		
		case 4038930773:
			iVar0 = 778;
			break;
		
		case 4047781074:
			iVar0 = 779;
			break;
		
		case 3939020719:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case 3075536586:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case 2537526450:
			iVar0 = 784;
			break;
		
		case 3407610657:
			iVar0 = 785;
			break;
		
		case 4132551387:
			iVar0 = 786;
			break;
		
		case 2472790513:
			iVar0 = 787;
			break;
		
		case 4163385587:
			iVar0 = 788;
			break;
		
		case 3325552056:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case 3624132081:
			iVar0 = 795;
			break;
		
		case 4262651638:
			iVar0 = 796;
			break;
		
		case 3579465656:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case 2344457391:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case 2768500028:
			iVar0 = 802;
			break;
		
		case 3413114517:
			iVar0 = 803;
			break;
		
		case 3723975078:
			iVar0 = 804;
			break;
		
		case 3219467157:
			iVar0 = 805;
			break;
		
		case 3503278242:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case 3711737208:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case 3527264388:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case 2238694704:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case 3354646051:
			iVar0 = 814;
			break;
		
		case 2276445447:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case 3061120706:
			iVar0 = 820;
			break;
		
		case 2846397379:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case 3878250084:
			iVar0 = 826;
			break;
		
		case 3066797730:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case 2722775333:
			iVar0 = 831;
			break;
		
		case 3503125668:
			iVar0 = 832;
			break;
		
		case 2763611865:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case 2180650139:
			iVar0 = 835;
			break;
		
		case 2209775669:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case 2444468219:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case 3383962959:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case 3433822703:
			iVar0 = 844;
			break;
		
		case 4265059418:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case 3432492940:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case 4069161506:
			iVar0 = 851;
			break;
		
		case 3670380344:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case 4052221253:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case 3197364028:
			iVar0 = 856;
			break;
		
		case 3634294757:
			iVar0 = 857;
			break;
		
		case 4290325108:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case 3068397526:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case 2737854075:
			iVar0 = 864;
			break;
		
		case 2604396882:
			iVar0 = 865;
			break;
		
		case 3787763041:
			iVar0 = 866;
			break;
		
		case 2490069657:
			iVar0 = 867;
			break;
		
		case 2919733873:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case 2182811778:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case 3667300768:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case 2846205483:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case 3273704435:
			iVar0 = 878;
			break;
		
		case 4030519365:
			iVar0 = 879;
			break;
		
		case 3642839861:
			iVar0 = 880;
			break;
		
		case 3684952697:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case 3396417020:
			iVar0 = 886;
			break;
		
		case 3220788605:
			iVar0 = 887;
			break;
		
		case 3926350552:
			iVar0 = 888;
			break;
		
		case 4216400795:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case 3064987056:
			iVar0 = 891;
			break;
		
		case 2736645870:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case 2298924002:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case 4274257317:
			iVar0 = 896;
			break;
		
		case 2677583717:
			iVar0 = 897;
			break;
		
		case 3769832231:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case 3099091001:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case 2730509825:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case 2333675947:
			iVar0 = 907;
			break;
		
		case 2382376222:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case 3279574649:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case 2439639698:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case 2871600622:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case 2716133631:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case 2508887203:
			iVar0 = 924;
			break;
		
		case 4079043990:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case 3080958277:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case 3261071432:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case 3720218030:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case 3651614109:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case 4200426360:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case 3949705427:
			iVar0 = 938;
			break;
		
		case 3272108238:
			iVar0 = 939;
			break;
		
		case 2508644372:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case 3787980911:
			iVar0 = 943;
			break;
		
		case 3420885708:
			iVar0 = 944;
			break;
		
		case 2251561359:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case 3637431619:
			iVar0 = 948;
			break;
		
		case 2201382271:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case 2686206897:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case 4175016100:
			iVar0 = 954;
			break;
		
		case 2645125068:
			iVar0 = 955;
			break;
		
		case 2654202371:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case 3233751987:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case 2808669915:
			iVar0 = 963;
			break;
		
		case 3754200137:
			iVar0 = 964;
			break;
		
		case 3059006604:
			iVar0 = 965;
			break;
		
		case 3965650301:
			iVar0 = 966;
			break;
		
		case 3713087024:
			iVar0 = 967;
			break;
		
		case 2487621862:
			iVar0 = 968;
			break;
		
		case 3276557861:
			iVar0 = 969;
			break;
		
		case 4158955398:
			iVar0 = 970;
			break;
		
		case 2225472569:
			iVar0 = 971;
			break;
		
		case 3652080291:
			iVar0 = 972;
			break;
		
		case 2484129658:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case 2761089960:
			iVar0 = 976;
			break;
		
		case 3402712309:
			iVar0 = 977;
			break;
		
		case 3640745036:
			iVar0 = 978;
			break;
		
		case 4142360269:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case 3116603395:
			iVar0 = 981;
			break;
		
		case 4124137286:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case 3319865784:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case 3557762637:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case 2824004057:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case 3866636330:
			iVar0 = 993;
			break;
		
		case 3762812163:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case 3191724549:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case 2298645612:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 3062152000:
			iVar0 = 1000;
			break;
		
		case 3352366821:
			iVar0 = 1001;
			break;
		
		case 4137518403:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case 3901133707:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case 2747474244:
			iVar0 = 1006;
			break;
		
		case 3736743022:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case 2959508846:
			iVar0 = 1010;
			break;
		
		case 3756358800:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case 2871372644:
			iVar0 = 1013;
			break;
		
		case 3545660474:
			iVar0 = 1014;
			break;
		
		case 2937465171:
			iVar0 = 1015;
			break;
		
		case 2597782779:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case 2298632616:
			iVar0 = 1019;
			break;
		
		case 2576515526:
			iVar0 = 1020;
			break;
		
		case 2943076500:
			iVar0 = 1021;
			break;
		
		case 3586650971:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case 3539390271:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case 3017800131:
			iVar0 = 1032;
			break;
		
		case 2254278838:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
	}
	if (iVar0 != 4294967295)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_534(int iParam0, int iParam1, int iParam2)//Position - 0x2A397
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	iVar1 = func_536(iParam0, iParam1);
	uVar2 = func_535(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_535(int iParam0)//Position - 0x2A3D4
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

int func_536(int iParam0, int iParam1)//Position - 0x2A6EC
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
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

int func_537(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x2A9E4
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_539(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(func_538(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case 3501471526:
		case 3531050223:
		case 2885905500:
		case 2228801020:
		case 849089063:
		case 1192230427:
		case 3840694265:
		case 2834999838:
		case 1548327796:
		case 3056887983:
		case 129912816:
		case 2825216337:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case 3906699200:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == 3501471526 || (iParam4 == 2885905500 && iVar0 == joaat("mp_f_freemode_01"))) || iParam4 == 2228801020) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_547(13, 4294967295))
							{
								return 0;
							}
							else if (func_547(14, 4294967295))
							{
								return 0;
							}
							else if (func_547(15, 4294967295))
							{
								return 0;
							}
							else if (func_547(16, 4294967295))
							{
								return 0;
							}
							else if (func_547(71, 4294967295))
							{
								return 0;
							}
							else if (func_547(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
						return 0;
					}
					else if (Global_411B37 == 14)
					{
						return 0;
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
						return 0;
					}
					else if (Global_411B37 == 71)
					{
						return 0;
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			else if (iParam4 == 3531050223)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_547(13, 4294967295))
							{
								return 0;
							}
							else if (func_547(14, 4294967295))
							{
								return 0;
							}
							else if (func_547(15, 4294967295))
							{
								return 0;
							}
							else if (func_547(16, 4294967295))
							{
								return 0;
							}
							else if (func_547(71, 4294967295))
							{
								return 0;
							}
							else if (func_547(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
						return 0;
					}
					else if (Global_411B37 == 14)
					{
						return 0;
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
						return 0;
					}
					else if (Global_411B37 == 71)
					{
						return 0;
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == 2825216337)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_547(13, 4294967295))
							{
							}
							else if (func_547(14, 4294967295))
							{
								return 0;
							}
							else if (func_547(15, 4294967295))
							{
								return 0;
							}
							else if (func_547(16, 4294967295))
							{
							}
							else if (func_547(71, 4294967295))
							{
								return 0;
							}
							else if (func_547(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
					}
					else if (Global_411B37 == 14)
					{
						return 0;
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
					}
					else if (Global_411B37 == 71)
					{
						return 0;
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_547(13, 4294967295))
							{
							}
							else if (func_547(14, 4294967295))
							{
							}
							else if (func_547(15, 4294967295))
							{
							}
							else if (func_547(16, 4294967295))
							{
							}
							else if (func_547(71, 4294967295))
							{
							}
							else if (func_547(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
					}
					else if (Global_411B37 == 14)
					{
					}
					else if (Global_411B37 == 15)
					{
					}
					else if (Global_411B37 == 16)
					{
					}
					else if (Global_411B37 == 71)
					{
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_411B37 == 4294967295)
				{
					if (!Global_16C64.f_5D1)
					{
						if (func_547(13, 4294967295))
						{
						}
						else if (func_547(14, 4294967295))
						{
						}
						else if (func_547(15, 4294967295))
						{
							return 0;
						}
						else if (func_547(16, 4294967295))
						{
						}
						else if (func_547(71, 4294967295))
						{
						}
						else if (func_547(72, 4294967295))
						{
							return 0;
						}
					}
				}
				else if (Global_411B37 == 13)
				{
				}
				else if (Global_411B37 == 14)
				{
				}
				else if (Global_411B37 == 15)
				{
					return 0;
				}
				else if (Global_411B37 == 16)
				{
				}
				else if (Global_411B37 == 71)
				{
				}
				else if (Global_411B37 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_547(15, 4294967295))
							{
								return 0;
							}
						}
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_411B37 == 4294967295)
				{
					if (!Global_16C64.f_5D1)
					{
						if (func_547(13, 4294967295))
						{
							return 0;
						}
						else if (func_547(14, 4294967295))
						{
							return 0;
						}
						else if (func_547(15, 4294967295))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_547(16, 4294967295))
						{
						}
						else if (func_547(71, 4294967295))
						{
						}
						else if (func_547(72, 4294967295))
						{
						}
					}
				}
				else if (Global_411B37 == 13)
				{
					return 0;
				}
				else if (Global_411B37 == 14)
				{
					return 0;
				}
				else if (Global_411B37 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_411B37 == 16)
				{
				}
				else if (Global_411B37 == 71)
				{
				}
				else if (Global_411B37 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case 3776492670:
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case 3966652427:
						case 2391184201:
						case 2620042897:
						case 4188181426:
						case 3950311255:
						case 1480281490:
						case 2197594896:
						case 118598456:
						case 2908290528:
						case 1464947154:
						case 3012463179:
						case 2417673060:
						case 736950162:
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_411B37 == 4294967295)
					{
						if (!Global_16C64.f_5D1)
						{
							if (func_547(13, 4294967295))
							{
							}
							else if (func_547(14, 4294967295))
							{
							}
							else if (func_547(15, 4294967295))
							{
							}
							else if (func_547(16, 4294967295))
							{
							}
							else if (func_547(71, 4294967295))
							{
							}
							else if (func_547(72, 4294967295))
							{
							}
						}
					}
					else if (Global_411B37 == 13)
					{
						return 0;
					}
					else if (Global_411B37 == 14)
					{
					}
					else if (Global_411B37 == 15)
					{
						return 0;
					}
					else if (Global_411B37 == 16)
					{
					}
					else if (Global_411B37 == 71)
					{
					}
					else if (Global_411B37 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_538(int iParam0)//Position - 0x2B20C
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_539(int iParam0, char* sParam1, int iParam2)//Position - 0x2B84E
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return 4294967295;
			break;
	}
	switch (iParam2)
	{
		case 2519943691:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case 2610652999:
			return 2;
			break;
		
		case 2748303472:
			return 3;
			break;
		
		case 2175713528:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case 2770739509:
			return 7;
			break;
		
		case 3983224926:
			return 8;
			break;
		
		case 2237776637:
			return 9;
			break;
		
		case 3608421651:
			return 10;
			break;
		
		case 4214589622:
			return 11;
			break;
		
		case 3238990745:
			return 12;
			break;
		
		case 1963750528:
			return 13;
			break;
		
		case 796226384:
			return 14;
			break;
		
		case 123428314:
			return 15;
			break;
		
		case 1944550961:
			return 16;
			break;
		
		case 2136911405:
			return 17;
			break;
		
		case 2985371305:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case 2578404720:
			return 20;
			break;
		
		case 2354385240:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case 3221136717:
			return 23;
			break;
		
		case 1071134407:
			return 24;
			break;
		
		case 1455567330:
			return 25;
			break;
		
		case 711089605:
			return 26;
			break;
		
		case 1206993109:
			return 27;
			break;
		
		case 32564956:
			return 28;
			break;
		
		case 314326195:
			return 29;
			break;
		
		case 1928884106:
			return 30;
			break;
		
		case 1565386395:
			return 31;
			break;
		
		case 2107621060:
			return 32;
			break;
		
		case 1618133209:
			return 33;
			break;
		
		case 3343067826:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case 3501471526:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case 3531050223:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case 2228801020:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case 2885905500:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case 2834999838:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case 2423163054:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case 3552914052:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case 2825216337:
			return 54;
			break;
		
		case 3906699200:
			return 55;
			break;
		
		case 2756285864:
			return 56;
			break;
		
		case 3557110916:
			return 57;
			break;
		
		case 1261643197:
			return 58;
			break;
		
		case 436139458:
			return 59;
			break;
		
		case 1012782925:
			return 60;
			break;
		
		case 4017753284:
			return 61;
			break;
		
		case 3810703098:
			return 62;
			break;
		
		case 1708200656:
			return 63;
			break;
		
		case 758827473:
			return 64;
			break;
		
		case 1039283199:
			return 65;
			break;
		
		case 325801797:
			return 66;
			break;
		
		case 2348532263:
			return 67;
			break;
		
		case 2377621179:
			return 68;
			break;
		
		case 3912827528:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case 4028053927:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case 2895310695:
			return 73;
			break;
		
		case 2734526213:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case 3124285995:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case 3476877956:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case 3670699923:
			return 81;
			break;
		
		case 3116119329:
			return 82;
			break;
		
		case 4097674435:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case 2376082602:
			return 86;
			break;
		
		case 2624239668:
			return 87;
			break;
		
		case 2905670828:
			return 88;
			break;
		
		case 3889704923:
			return 89;
			break;
		
		case 2675357463:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case 3092320276:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case 2735361552:
			return 94;
			break;
		
		case 4206592398:
			return 95;
			break;
		
		case 4002748170:
			return 96;
			break;
		
		case 3660734312:
			return 97;
			break;
		
		case 3035212698:
			return 98;
			break;
	}
	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return 4294967295;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case 2267851076:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case 973279522:
			return 26;
			break;
		
		case 3950311255:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case 2657999346:
			return 75;
			break;
		
		case 2535541033:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case 4261813165:
			return 22;
			break;
		
		case 2930342505:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case 2162859756:
			return 73;
			break;
		
		case 2197594896:
			return 38;
			break;
		
		case 4188181426:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 1116120433:
			return 31;
			break;
		
		case 118598456:
			return 42;
			break;
		
		case 1480281490:
			return 47;
			break;
		
		case 3642675027:
			return 75;
			break;
		
		case 3115683969:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case 3414963246:
			return 14;
			break;
		
		case 2908290528:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case 2342238822:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case 3160249253:
			return 13;
			break;
		
		case 3854593710:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case 3012463179:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 3259082673:
			return 73;
			break;
		
		case 2417673060:
			return 47;
			break;
		
		case 1289632992:
			return 73;
			break;
		
		case 1152623695:
			return 10;
			break;
		
		case 1705208746:
			return 26;
			break;
		
		case 1774176944:
			return 42;
			break;
		
		case 2278764565:
			return 89;
			break;
		
		case 474241973:
			return 16;
			break;
		
		case 1549424756:
			return 91;
			break;
		
		case 1915520024:
			return 82;
			break;
		
		case 3640052951:
			return 13;
			break;
		
		case 2549851943:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case 4133194864:
			return 10;
			break;
		
		case 74131599:
			return 90;
			break;
		
		case 363383562:
			return 89;
			break;
		
		case 736950162:
			return 38;
			break;
		
		case 1291882802:
			return 20;
			break;
		
		case 4013194762:
			return 26;
			break;
		
		case 3457169162:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case 3494646927:
			return 3;
			break;
		
		case 1363941829:
			return 47;
			break;
		
		case 1586377801:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 2780709548:
			return 89;
			break;
		
		case 3271130402:
			return 6;
			break;
		
		case 2320862171:
			return 33;
			break;
		
		case 3736581278:
			return 16;
			break;
		
		case 3966652427:
			return 40;
			break;
		
		case 2391184201:
			return 40;
			break;
		
		case 2620042897:
			return 40;
			break;
		
		case 4042643494:
			return 33;
			break;
		
		case 11466648:
			return 6;
			break;
		
		case 927130819:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 3316023688:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 452144164:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 691194019:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 2778101725:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case 3725879520:
			return 45;
			break;
		
		case 2950007907:
			return 89;
			break;
		
		case 4083749769:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case 4157283121:
			return 30;
			break;
		
		case 3315578587:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case 3776146882:
			return 52;
			break;
		
		case 2933229895:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case 3400155376:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case 3367353383:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case 3480340895:
			return 57;
			break;
		
		case 3046741487:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case 2170465654:
			return 91;
			break;
		
		case 2351219458:
			return 20;
			break;
		
		case 2724851596:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case 3435608482:
			return 20;
			break;
		
		case 3137148430:
			return 58;
			break;
		
		case 4047110791:
			return 47;
			break;
		
		case 2666432333:
			return 37;
			break;
		
		case 3243068426:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case 4050797579:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case 2896175792:
			return 33;
			break;
		
		case 4188814535:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case 2718016739:
			return 52;
			break;
		
		case 2479851647:
			return 53;
			break;
		
		case 3251570426:
			return 59;
			break;
		
		case 2906349011:
			return 3;
			break;
		
		case 3346482658:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case 3672455462:
			return 42;
			break;
		
		case 4019315327:
			return 11;
			break;
		
		case 3038683441:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case 2260201032:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case 3637821246:
			return 30;
			break;
		
		case 3339131811:
			return 19;
			break;
		
		case 3025008177:
			return 40;
			break;
		
		case 2816204109:
			return 4;
			break;
		
		case 2413374792:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case 2275679554:
			return 22;
			break;
		
		case 2514139567:
			return 80;
			break;
		
		case 2328470089:
			return 25;
			break;
		
		case 2167967527:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case 3884669895:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case 2196624304:
			return 23;
			break;
		
		case 3014047013:
			return 64;
			break;
		
		case 2793511643:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case 2349262314:
			return 32;
			break;
		
		case 2713096525:
			return 31;
			break;
		
		case 2944445665:
			return 10;
			break;
		
		case 3340459030:
			return 5;
			break;
		
		case 3578722429:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case 3086860083:
			return 35;
			break;
		
		case 3482545758:
			return 30;
			break;
		
		case 3728870331:
			return 32;
			break;
		
		case 3978209652:
			return 38;
			break;
		
		case 4191470304:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case 2235025580:
			return 30;
			break;
		
		case 2535091313:
			return 40;
			break;
		
		case 2773813478:
			return 24;
			break;
	}
	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 4294967295;
	}
	switch (iParam2)
	{
		case 3776492670:
			return 4294967295;
			break;
	}
	return 4294967295;
}

bool func_540(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2CA9E
{
	int iVar0;
	int iVar1;
	
	func_546(sParam0, 4294967295, 0, "", "", "", "", iParam2, 4294967295, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_545() || func_544())
					{
						iVar1 = 400;
						if (func_524() && (func_543() || func_542()))
						{
							iVar1 = 0;
						}
						func_546(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_546(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_541(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_545() || func_544())
					{
						iVar1 = 450;
						if (func_524() && (func_543() || func_542()))
						{
							iVar1 = 0;
						}
						func_546(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_546(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_541(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_545() || func_544())
					{
						iVar1 = 380;
						if (func_524() && (func_543() || func_542()))
						{
							iVar1 = 0;
						}
						func_546(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_546(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_541(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_40001.f_B5A)), 0);
					break;
				
				case 1:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_40001.f_B5B)), 2);
					break;
				
				case 2:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_40001.f_B5C)), 3);
					break;
				
				case 3:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_40001.f_B5D)), 0);
					break;
				
				case 4:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B5E)), 0);
					break;
				
				case 54:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_40001.f_B5F)), 1);
					break;
				
				case 5:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B60)), 0);
					break;
				
				case 6:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B61)), 2);
					break;
				
				case 55:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_40001.f_B62)), 1);
					break;
				
				case 7:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_40001.f_B63)), 0);
					break;
				
				case 8:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_40001.f_B64)), 7);
					break;
				
				case 9:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_40001.f_B65)), 0);
					break;
				
				case 10:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_40001.f_B66)), 0);
					break;
				
				case 11:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_40001.f_B67)), 0);
					break;
				
				case 56:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B68)), 1);
					break;
				
				case 12:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B69)), 2);
					break;
				
				case 57:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B6A)), 1);
					break;
				
				case 58:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B6B)), 1);
					break;
				
				case 59:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_40001.f_B6C)), 1);
					break;
				
				case 60:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B6D)), 1);
					break;
				
				case 17:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_40001.f_B72)), 2);
					break;
				
				case 18:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B73)), 2);
					break;
				
				case 19:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_40001.f_B74)), 2);
					break;
				
				case 20:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B75)), 3);
					break;
				
				case 21:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_40001.f_B76)), 3);
					break;
				
				case 22:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B77)), 3);
					break;
				
				case 23:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B78)), 3);
					break;
				
				case 24:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B79)), 3);
					break;
				
				case 25:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B7A)), 2);
					break;
				
				case 26:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_40001.f_B7B)), 3);
					break;
				
				case 27:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_40001.f_B7C)), 3);
					break;
				
				case 28:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_40001.f_B7D)), 3);
					break;
				
				case 61:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_40001.f_B7E)), 1);
					break;
				
				case 62:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_40001.f_B7F)), 1);
					break;
				
				case 63:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_40001.f_B80)), 1);
					break;
				
				case 64:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B81)), 1);
					break;
				
				case 65:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_40001.f_B82)), 1);
					break;
				
				case 29:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B83)), 0);
					break;
				
				case 30:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B84)), 0);
					break;
				
				case 31:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B85)), 0);
					break;
				
				case 66:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B86)), 1);
					break;
				
				case 32:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B87)), 2);
					break;
				
				case 33:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B88)), 3);
					break;
				
				case 34:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_40001.f_B89)), 2);
					break;
				
				case 35:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_40001.f_B8A)), 0);
					break;
				
				case 36:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_40001.f_B8B)), 0);
					break;
				
				case 37:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_40001.f_B8C)), 0);
					break;
				
				case 38:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_40001.f_B8D)), 3);
					break;
				
				case 39:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_40001.f_B8E)), 2);
					break;
				
				case 40:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_40001.f_B8F)), 0);
					break;
				
				case 67:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B90)), 1);
					break;
				
				case 41:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B91)), 2);
					break;
				
				case 68:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B92)), 1);
					break;
				
				case 42:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_40001.f_B93)), 0);
					break;
				
				case 43:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_40001.f_B94)), 2);
					break;
				
				case 44:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_40001.f_B95)), 0);
					break;
				
				case 45:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_40001.f_B96)), 0);
					break;
				
				case 46:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_40001.f_B97)), 0);
					break;
				
				case 47:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_40001.f_B98)), 3);
					break;
				
				case 48:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B99)), 3);
					break;
				
				case 49:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_40001.f_B9A)), 3);
					break;
				
				case 50:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_40001.f_B9B)), 2);
					break;
				
				case 51:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_B9C)), 3);
					break;
				
				case 52:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_40001.f_B9D)), 3);
					break;
				
				case 53:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_40001.f_B9E)), 0);
					break;
				
				case 69:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B9F)), 1);
					break;
				
				case 70:
					func_546(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_40001.f_BA0)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA1)), 0);
						break;
					
					case 88:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA2)), 0);
						break;
					
					case 89:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA3)), 0);
						break;
					
					case 93:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6E)), 0);
						break;
					
					case 14:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B6F)), 0);
						break;
					
					case 15:
						func_546(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B70)), 2);
						break;
					
					case 16:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B71)), 0);
						break;
					
					case 71:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B71)), 0);
						break;
					
					case 72:
						func_546(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B71)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA1)), 0);
						break;
					
					case 88:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA2)), 0);
						break;
					
					case 89:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_40001.f_BA3)), 0);
						break;
					
					case 93:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_546(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6E)), 0);
						break;
					
					case 14:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_40001.f_B6F)), 0);
						break;
					
					case 15:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B70)), 2);
						break;
					
					case 16:
						func_546(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_40001.f_B71)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_541(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_B != 4294967295;
}

void func_541(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2FAE7
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILE::_GET_NUM_DECORATIONS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILE::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar0, &Var2))
		{
			if (!FILE::_IS_DLC_DATA_EMPTY(Var2))
			{
				sParam0->f_B = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_A = (iParam2 % 32);
				sParam0->f_C = Var2.f_5;
			}
		}
	}
}

int func_542()//Position - 0x2FB79
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 5))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, 4294967295);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_19, 1);
				MISC::SET_BIT(&Global_19, 3);
				MISC::SET_BIT(&Global_19, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_543()//Position - 0x2FCCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 6))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 6))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_544()//Position - 0x2FD9E
{
	return 1;
}

int func_545()//Position - 0x2FDA7
{
	return 1;
}

void func_546(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2FDB0
{
	char cVar0[32];
	
	sParam0->f_B = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_A = (iParam1 % 32);
	sParam0->f_C = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_B == 13 || sParam0->f_B == 14) || sParam0->f_B == 15) || sParam0->f_B == 16) || sParam0->f_B == 71) || sParam0->f_B == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_B == 0 || sParam0->f_B == 1) || sParam0->f_B == 2) || sParam0->f_B == 4) || sParam0->f_B == 3) || sParam0->f_B == 54) || sParam0->f_B == 5) || sParam0->f_B == 6) || sParam0->f_B == 55) || sParam0->f_B == 7) || sParam0->f_B == 8) || sParam0->f_B == 9) || sParam0->f_B == 10) || sParam0->f_B == 11) || sParam0->f_B == 56) || sParam0->f_B == 12) || sParam0->f_B == 57) || sParam0->f_B == 58) || sParam0->f_B == 59) || sParam0->f_B == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_B == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::_GET_TATTOO_ZONE(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_B = 4294967295;
			}
		}
	}
}

bool func_547(int iParam0, int iParam1)//Position - 0x30067
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	iVar0 = func_548(iParam0, iParam1);
	iVar1 = func_526(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iVar1);
}

int func_548(int iParam0, int iParam1)//Position - 0x300A9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_549(iParam0);
	if (iVar0 == 9954)
	{
		return 0;
	}
	iVar1 = func_148(iVar0, iParam1, 0);
	return iVar1;
}

int func_549(int iParam0)//Position - 0x300D5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_530(iVar0);
	if ((func_151() == 0 || func_529() == 0) || (func_151() == 999 && func_529() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
		}
		return 9954;
	}
	return 9954;
}

int func_550(int iParam0)//Position - 0x3036F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = func_148(1757, 4294967295, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_595(iParam0, 11, 4294967295);
				if (iVar3 >= 237)
				{
					iVar4 = func_579(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return 1;
						}
						if (iVar2 == 1495413374)
						{
							return 1;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2901811106, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar4, 3057068164, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = func_148(1757, 4294967295, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_595(iParam0, 11, 4294967295);
				if (iVar5 >= 256)
				{
					iVar6 = func_579(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return 1;
						}
						if (iVar2 == 3080744829)
						{
							return 1;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2901811106, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar6, 3057068164, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_551(int iParam0)//Position - 0x3053D
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_63.f_1C;
		if (iVar0 != 4294967295 && iVar0 < 4)
		{
			if (func_552(iVar0) != 4294967295 && func_552(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x305B9
{
	if (func_553(1))
	{
		return Global_150B1F;
	}
	if (iParam0 <= 4294967295 || iParam0 >= 4)
	{
		return 4294967295;
	}
	return Global_255F11.f_17BD[iParam0];
}

bool func_553(bool bParam0)//Position - 0x305F0
{
	if (bParam0)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12) && func_554());
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_554()//Position - 0x3062C
{
	if (Global_440000.f_2033E == 1 || Global_440000.f_2033E == 2)
	{
		return 1;
	}
	return 0;
}

int func_555(int iParam0, bool bParam1)//Position - 0x3065A
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_557(joaat("mp_m_freemode_01"), 11, func_595(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				case 5:
					if (!bParam1)
					{
						if (func_547(13, 4294967295))
						{
							return 1;
						}
						else if (func_547(14, 4294967295))
						{
							return 1;
						}
						else if (func_547(15, 4294967295))
						{
							return 1;
						}
						else if (func_547(16, 4294967295))
						{
							return 1;
						}
						else if (func_547(71, 4294967295))
						{
							return 1;
						}
						else if (func_547(72, 4294967295))
						{
						}
						else if (func_333(CAM::_0xDC9DA9E8789F5246(), 1) && Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_46.f_15 != 0)
						{
							return 1;
						}
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_595(iParam0, 11, 4294967295);
						if (iVar3 >= 237)
						{
							iVar4 = func_579(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_595(iParam0, 8, 4294967295);
						if (iVar5 >= 241)
						{
							iVar6 = func_579(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_557(joaat("mp_f_freemode_01"), 11, func_595(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_595(iParam0, 11, 4294967295);
						if (iVar8 >= 256)
						{
							iVar9 = func_579(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar9, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar9, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar9, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_557(joaat("mp_f_freemode_01"), 11, func_595(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_557(joaat("mp_f_freemode_01"), 11, func_595(iParam0, 11, 4294967295), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_595(iParam0, 8, 4294967295);
						if (iVar12 >= 136)
						{
							iVar13 = func_579(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if (((FILE::_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar13, 2827284307, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar13, 362493804, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar13, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (func_556(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_556(int iParam0)//Position - 0x30E7D
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01");
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	if (bVar1)
	{
		FILE::GET_SHOP_PED_COMPONENT(103980309, &Var0);
	}
	else
	{
		FILE::GET_SHOP_PED_COMPONENT(4263891622, &Var0);
	}
	if (iVar2 == Var0.f_3 && iVar3 == Var0.f_4)
	{
		return 1;
	}
	return 0;
}

int func_557(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30EE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_525(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_525(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_579(iParam0, iParam2, 11, 3);
				if (iVar0 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 362493804, 0))
					{
						iVar1 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILE::_0x017568A8182D98A6(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != 1849449579)
								{
									return func_531(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_148(1757, 4294967295, 0);
						}
						return func_531(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_525(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_525(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_525(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_525(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_579(iParam0, iParam2, 8, 3);
				if (iVar6 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						iVar7 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILE::_0x017568A8182D98A6(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != 1849449579)
								{
									return func_531(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_148(1757, 4294967295, 0);
						}
						return func_531(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_525(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_525(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_579(iParam0, iParam2, 11, 4);
				if (iVar12 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar12, 362493804, 0))
					{
						iVar13 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILE::_0x017568A8182D98A6(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != 1849449579)
								{
									return func_531(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_148(1757, 4294967295, 0);
						}
						return func_531(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_525(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_525(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_525(89, 4294967295))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_525(87, 4294967295))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_579(iParam0, iParam2, 8, 4);
				if (iVar18 != 4294967295)
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar18, 362493804, 0))
					{
						iVar19 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILE::_0x017568A8182D98A6(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != 1849449579)
								{
									return func_531(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar18, 2827284307, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_148(1757, 4294967295, 0);
						}
						return func_531(iParam3, 4);
					}
				}
			}
		}
	}
	return 4294967295;
}

int func_558(int iParam0)//Position - 0x31704
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

int func_559(int iParam0, int iParam1)//Position - 0x31759
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return 4294967295;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_579(iParam0, iParam1, 2, 3);
			if (iVar0 != 4294967295)
			{
				switch (iVar0)
				{
					case 2311537468:
					case 228608740:
					case 600995656:
					case 850728205:
					case 1093513726:
					case 1732051928:
						return 108;
						break;
					
					case 3837327646:
					case 4200014942:
					case 144031963:
					case 533262145:
					case 2749298539:
					case 3389916813:
						return 109;
						break;
					
					case 2669474085:
					case 3182243397:
					case 2862516264:
					case 3647464890:
					case 3369485463:
						return 110;
						break;
					
					case 3126638701:
					case 2872973872:
					case 3718512379:
					case 3856568172:
					case 271967258:
						return 111;
						break;
					
					case 2391720360:
					case 1155542604:
					case 2048071857:
					case 2689492263:
					case 100085859:
						return 112;
						break;
					
					case 745771948:
					case 2675669434:
					case 2416040647:
					case 3809116379:
					case 558628189:
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case 2533124671:
						return 114;
						break;
				}
				iVar1 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					FILE::_0x017568A8182D98A6(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != 1849449579)
						{
							return func_531(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return 4294967295;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_531(3033246535, 4);
		}
		else if (iParam1 == 80)
		{
			return func_531(3033246535, 4);
		}
		else if (iParam1 == 81)
		{
			return func_531(3033246535, 4);
		}
		else if (iParam1 == 82)
		{
			return func_531(3033246535, 4);
		}
		else if (iParam1 == 83)
		{
			return func_531(3033246535, 4);
		}
		else if (iParam1 == 84)
		{
			return func_531(3033246535, 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_579(iParam0, iParam1, 2, 4);
			if (iVar6 != 4294967295)
			{
				switch (iVar6)
				{
					case 3055974561:
					case 2347705395:
					case 3523948654:
					case 2808797994:
					case 1159796376:
					case 256274500:
						return 108;
						break;
					
					case 1389867525:
					case 1622396349:
					case 1851615504:
					case 2242353044:
					case 2476356473:
					case 2495546540:
						return 109;
						break;
					
					case 1855226196:
					case 271139943:
					case 3195937042:
					case 3987242854:
					case 3657095179:
						return 110;
						break;
					
					case 3631169795:
					case 2088667427:
					case 1779786837:
					case 2685030458:
					case 2414489594:
						return 111;
						break;
					
					case 1052499595:
					case 142438919:
					case 458495932:
					case 3593244006:
					case 4175745750:
						return 112;
						break;
					
					case 1245050198:
					case 1481937299:
					case 1754870300:
					case 2261937806:
					case 62318681:
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case 4063429067:
						return 114;
						break;
				}
				iVar7 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					FILE::_0x017568A8182D98A6(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != 1849449579)
						{
							return func_531(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return 4294967295;
}

void func_560(int iParam0, int iParam1)//Position - 0x32572
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar1 = func_558(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_592(13, 0, Global_11566);
					func_592(14, 0, Global_11566);
					func_592(15, 0, Global_11566);
					func_592(16, 0, Global_11566);
					func_592(71, 0, Global_11566);
					func_592(72, 0, Global_11566);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar1 == 3)
					{
						func_592(73, 0, Global_11566);
						func_592(74, 0, Global_11566);
						func_592(75, 0, Global_11566);
						func_592(76, 0, Global_11566);
						func_592(77, 0, Global_11566);
						func_592(78, 0, Global_11566);
						func_592(79, 0, Global_11566);
						func_592(80, 0, Global_11566);
						func_592(81, 0, Global_11566);
						func_592(82, 0, Global_11566);
						func_592(83, 0, Global_11566);
						func_592(84, 0, Global_11566);
						func_592(85, 0, Global_11566);
						func_592(86, 0, Global_11566);
						func_592(90, 0, Global_11566);
						func_592(91, 0, Global_11566);
						func_592(124, 0, Global_11566);
						func_592(125, 0, Global_11566);
						func_592(87, 0, Global_11566);
						func_592(88, 0, Global_11566);
						func_592(89, 0, Global_11566);
						iVar3 = FILE::_GET_NUM_DECORATIONS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == 277073536)
								{
									func_592((129 + iVar2), 0, Global_11566);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_592(73, 0, Global_11566);
						func_592(74, 0, Global_11566);
						func_592(75, 0, Global_11566);
						func_592(76, 0, Global_11566);
						func_592(77, 0, Global_11566);
						func_592(78, 0, Global_11566);
						func_592(79, 0, Global_11566);
						func_592(80, 0, Global_11566);
						func_592(81, 0, Global_11566);
						func_592(82, 0, Global_11566);
						func_592(83, 0, Global_11566);
						func_592(84, 0, Global_11566);
						func_592(85, 0, Global_11566);
						func_592(92, 0, Global_11566);
						func_592(87, 0, Global_11566);
						func_592(88, 0, Global_11566);
						func_592(89, 0, Global_11566);
						iVar6 = FILE::_GET_NUM_DECORATIONS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == 277073536)
								{
									func_592((129 + iVar5), 0, Global_11566);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar1 == 3)
					{
						func_592(93, 0, Global_11566);
						func_592(94, 0, Global_11566);
						func_592(95, 0, Global_11566);
						func_592(96, 0, Global_11566);
						func_592(97, 0, Global_11566);
						func_592(98, 0, Global_11566);
						func_592(99, 0, Global_11566);
						func_592(100, 0, Global_11566);
						func_592(101, 0, Global_11566);
						func_592(102, 0, Global_11566);
						func_592(103, 0, Global_11566);
						func_592(104, 0, Global_11566);
						func_592(105, 0, Global_11566);
						func_592(106, 0, Global_11566);
						func_592(107, 0, Global_11566);
						func_592(108, 0, Global_11566);
						func_592(109, 0, Global_11566);
						func_592(110, 0, Global_11566);
						func_592(111, 0, Global_11566);
						func_592(112, 0, Global_11566);
						func_592(113, 0, Global_11566);
						func_592(114, 0, Global_11566);
						func_592(115, 0, Global_11566);
						func_592(116, 0, Global_11566);
						func_592(117, 0, Global_11566);
						func_592(123, 0, Global_11566);
						iVar9 = FILE::_GET_NUM_DECORATIONS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == 2140335355)
								{
									func_592((129 + iVar8), 0, Global_11566);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_592(93, 0, Global_11566);
						func_592(94, 0, Global_11566);
						func_592(95, 0, Global_11566);
						func_592(96, 0, Global_11566);
						func_592(97, 0, Global_11566);
						func_592(98, 0, Global_11566);
						func_592(99, 0, Global_11566);
						func_592(100, 0, Global_11566);
						func_592(101, 0, Global_11566);
						func_592(102, 0, Global_11566);
						func_592(103, 0, Global_11566);
						func_592(104, 0, Global_11566);
						func_592(105, 0, Global_11566);
						func_592(106, 0, Global_11566);
						func_592(107, 0, Global_11566);
						func_592(108, 0, Global_11566);
						func_592(109, 0, Global_11566);
						func_592(110, 0, Global_11566);
						func_592(111, 0, Global_11566);
						func_592(112, 0, Global_11566);
						func_592(113, 0, Global_11566);
						func_592(114, 0, Global_11566);
						func_592(115, 0, Global_11566);
						func_592(116, 0, Global_11566);
						func_592(117, 0, Global_11566);
						func_592(118, 0, Global_11566);
						func_592(119, 0, Global_11566);
						func_592(120, 0, Global_11566);
						func_592(121, 0, Global_11566);
						func_592(122, 0, Global_11566);
						func_592(123, 0, Global_11566);
						iVar12 = FILE::_GET_NUM_DECORATIONS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILE::_GET_TATTOO_COLLECTION_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == 2140335355)
								{
									func_592((129 + iVar11), 0, Global_11566);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (func_540(&Var0, iVar14, iVar1, iParam1, 4294967295))
				{
					if (Var0.f_8 == iParam0)
					{
						func_592(Var0.f_B, 0, Global_11566);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_561(int iParam0)//Position - 0x32B6F
{
	if (Global_175C4)
	{
		return func_562(iParam0);
	}
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 148;
			break;
		
		case 7:
			return 149;
			break;
		
		case 13:
			return 150;
			break;
		
		case 18:
			return 151;
			break;
		
		case 24:
			return 152;
			break;
		
		case 30:
			return 153;
			break;
		
		case 35:
			return 154;
			break;
		
		case 41:
			return 155;
			break;
		
		case 47:
			return 156;
			break;
		
		case 53:
			return 157;
			break;
		
		case 60:
			return 158;
			break;
		
		case 67:
			return 159;
			break;
		
		case 73:
			return 160;
			break;
		
		case 79:
			return 161;
			break;
		
		case 85:
			return 162;
			break;
		
		case 92:
			return 163;
			break;
		
		case 97:
			return 164;
			break;
		
		case 102:
			return 165;
			break;
		
		case 108:
			return 166;
			break;
		
		case 113:
			return 167;
			break;
		
		case 118:
			return 168;
			break;
		
		case 123:
			return 169;
			break;
		
		case 128:
			return 170;
			break;
		
		case 134:
			return 171;
			break;
		
		case 135:
			return 172;
			break;
		
		case 136:
			return 173;
			break;
		
		case 137:
			return 174;
			break;
		
		case 138:
			return 175;
			break;
		
		case 139:
			return 176;
			break;
		
		case 140:
			return 177;
			break;
		
		case 141:
			return 178;
			break;
		
		case 142:
			return 179;
			break;
		
		case 143:
			return 180;
			break;
		
		case 144:
			return 181;
			break;
		
		case 145:
			return 182;
			break;
		
		case 146:
			return 183;
			break;
		
		case 147:
			return 184;
			break;
	}
	return iParam0;
}

int func_562(int iParam0)//Position - 0x32DA3
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return func_473(joaat("mp_f_freemode_01"), 1483333387, 2, 4);
	}
	else if (iParam0 == 7)
	{
		return func_473(joaat("mp_f_freemode_01"), 1797860035, 2, 4);
	}
	else if (iParam0 == 13)
	{
		return func_473(joaat("mp_f_freemode_01"), 2003121316, 2, 4);
	}
	else if (iParam0 == 18)
	{
		return func_473(joaat("mp_f_freemode_01"), 3918903709, 2, 4);
	}
	else if (iParam0 == 24)
	{
		return func_473(joaat("mp_f_freemode_01"), 1460588214, 2, 4);
	}
	else if (iParam0 == 30)
	{
		return func_473(joaat("mp_f_freemode_01"), 1686262221, 2, 4);
	}
	else if (iParam0 == 35)
	{
		return func_473(joaat("mp_f_freemode_01"), 2274382858, 2, 4);
	}
	else if (iParam0 == 41)
	{
		return func_473(joaat("mp_f_freemode_01"), 47488331, 2, 4);
	}
	else if (iParam0 == 47)
	{
		return func_473(joaat("mp_f_freemode_01"), 3488816858, 2, 4);
	}
	else if (iParam0 == 53)
	{
		return func_473(joaat("mp_f_freemode_01"), 3219543616, 2, 4);
	}
	else if (iParam0 == 60)
	{
		return func_473(joaat("mp_f_freemode_01"), 3098436713, 2, 4);
	}
	else if (iParam0 == 67)
	{
		return func_473(joaat("mp_f_freemode_01"), 4283512080, 2, 4);
	}
	else if (iParam0 == 73)
	{
		return func_473(joaat("mp_f_freemode_01"), 3085100131, 2, 4);
	}
	else if (iParam0 == 79)
	{
		return func_473(joaat("mp_f_freemode_01"), 1420404654, 2, 4);
	}
	else if (iParam0 == 85)
	{
		return func_473(joaat("mp_f_freemode_01"), 4014003703, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3055974561, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 2495546540, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1389867525, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 256274500, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1855226196, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 1917322864, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3631169795, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 1210948031, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3919441216, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 533702594, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1052499595, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 4111961774, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1245050198, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 4251562383, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 845182355, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 32192007, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3971152441, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 295747077, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3956721418, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 1626639084, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 2659432574, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 2295179491, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 661580756, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 1354191768, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3040429011, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 543190161, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1962635659, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 615601747, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 2929308793, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 1811042168, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3240682925, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 782790520, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 2841143987, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 57454374, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1000894112, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 1070569288, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3774654477, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 606322920, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 2114158736, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 2563805765, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 1149945242, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 858313904, 2, 4);
	}
	else if (iParam0 == func_473(joaat("mp_f_freemode_01"), 3953004027, 2, 4))
	{
		return func_473(joaat("mp_f_freemode_01"), 2548818926, 2, 4);
	}
	return iParam0;
}

int func_563(int iParam0)//Position - 0x3331A
{
	if (Global_175C4)
	{
		return func_564(iParam0);
	}
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 140;
			break;
		
		case 7:
			return 141;
			break;
		
		case 13:
			return 142;
			break;
		
		case 19:
			return 143;
			break;
		
		case 26:
			return 144;
			break;
		
		case 32:
			return 145;
			break;
		
		case 38:
			return 146;
			break;
		
		case 45:
			return 147;
			break;
		
		case 50:
			return 148;
			break;
		
		case 57:
			return 149;
			break;
		
		case 63:
			return 150;
			break;
		
		case 69:
			return 151;
			break;
		
		case 74:
			return 152;
			break;
		
		case 80:
			return 153;
			break;
		
		case 85:
			return 154;
			break;
		
		case 91:
			return 155;
			break;
		
		case 96:
			return 156;
			break;
		
		case 101:
			return 157;
			break;
		
		case 106:
			return 158;
			break;
		
		case 111:
			return 159;
			break;
		
		case 116:
			return 160;
			break;
		
		case 121:
			return 161;
			break;
		
		case 126:
			return 126;
			break;
		
		case 127:
			return 162;
			break;
		
		case 128:
			return 163;
			break;
		
		case 129:
			return 164;
			break;
		
		case 130:
			return 165;
			break;
		
		case 131:
			return 166;
			break;
		
		case 132:
			return 167;
			break;
		
		case 133:
			return 168;
			break;
		
		case 134:
			return 169;
			break;
		
		case 135:
			return 170;
			break;
		
		case 136:
			return 171;
			break;
		
		case 137:
			return 172;
			break;
		
		case 138:
			return 173;
			break;
		
		case 139:
			return 174;
			break;
	}
	return iParam0;
}

int func_564(int iParam0)//Position - 0x33540
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return func_473(joaat("mp_m_freemode_01"), 3013754223, 2, 3);
	}
	else if (iParam0 == 7)
	{
		return func_473(joaat("mp_m_freemode_01"), 121077921, 2, 3);
	}
	else if (iParam0 == 13)
	{
		return func_473(joaat("mp_m_freemode_01"), 1799320764, 2, 3);
	}
	else if (iParam0 == 19)
	{
		return func_473(joaat("mp_m_freemode_01"), 4263758604, 2, 3);
	}
	else if (iParam0 == 26)
	{
		return func_473(joaat("mp_m_freemode_01"), 101330974, 2, 3);
	}
	else if (iParam0 == 32)
	{
		return func_473(joaat("mp_m_freemode_01"), 2781226445, 2, 3);
	}
	else if (iParam0 == 38)
	{
		return func_473(joaat("mp_m_freemode_01"), 4095583207, 2, 3);
	}
	else if (iParam0 == 45)
	{
		return func_473(joaat("mp_m_freemode_01"), 3676901713, 2, 3);
	}
	else if (iParam0 == 50)
	{
		return func_473(joaat("mp_m_freemode_01"), 2620813113, 2, 3);
	}
	else if (iParam0 == 57)
	{
		return func_473(joaat("mp_m_freemode_01"), 2430243772, 2, 3);
	}
	else if (iParam0 == 63)
	{
		return func_473(joaat("mp_m_freemode_01"), 2440203021, 2, 3);
	}
	else if (iParam0 == 69)
	{
		return func_473(joaat("mp_m_freemode_01"), 1389427312, 2, 3);
	}
	else if (iParam0 == 74)
	{
		return func_473(joaat("mp_m_freemode_01"), 1842034654, 2, 3);
	}
	else if (iParam0 == 80)
	{
		return func_473(joaat("mp_m_freemode_01"), 2389969715, 2, 3);
	}
	else if (iParam0 == 85)
	{
		return func_473(joaat("mp_m_freemode_01"), 1875462851, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2311537468, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 1732051928, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3837327646, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 3389916813, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2669474085, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 438313231, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3126638701, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 743294919, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2391720360, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 2774633859, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 745771948, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 645080588, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3119628204, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 1501542503, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3531167026, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 1849088284, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 1662337451, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 3517953503, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3095868848, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 3103132790, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2927365565, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 1856835360, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3424493803, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 517044685, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 4253368260, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 2381883233, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 4254395451, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 954763497, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2475756522, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 996901182, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2232650014, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 4126636133, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3006886188, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 3831746497, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 3266407452, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 2062117628, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 2231388860, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 263191072, 2, 3);
	}
	else if (iParam0 == func_473(joaat("mp_m_freemode_01"), 86179491, 2, 3))
	{
		return func_473(joaat("mp_m_freemode_01"), 3462595947, 2, 3);
	}
	return iParam0;
}

int func_565(int iParam0, int iParam1)//Position - 0x33A61
{
	int iVar0;
	
	iVar0 = func_594();
	if (iVar0 != 4294967295)
	{
		if (!func_566(iParam0, iParam1, iVar0))
		{
			func_592(iVar0, 0, Global_11566);
			return 1;
		}
	}
	return 0;
}

int func_566(int iParam0, int iParam1, int iParam2)//Position - 0x33A93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_574(iParam0, iParam1, 4294967295))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 4294967295;
			iVar1 = 4294967295;
			if (iParam1 >= 237)
			{
				iVar1 = func_579(iParam0, iParam1, 11, 3);
				iVar0 = func_569(iVar1);
			}
			if (iVar1 != 4294967295 && func_488(iVar1, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar1 != 4294967295 && func_567(iVar1, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar1 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar1, 3797526821, 0))
			{
				return 0;
			}
			if ((iVar1 == 3096588460 || iVar1 == 968798999) || iVar1 == 1283250323)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_557(iParam0, 11, iParam1, 0) == 4294967295)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = 4294967295;
			iVar3 = 4294967295;
			if (iParam1 >= 256)
			{
				iVar3 = func_579(iParam0, iParam1, 11, 4);
				iVar2 = func_569(iVar3);
			}
			if (iVar3 != 4294967295 && func_488(iVar3, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar3 != 4294967295 && func_567(iVar3, 0) != 4294967295)
			{
				return 0;
			}
			if (iVar3 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar3, 3797526821, 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_557(iParam0, 11, iParam1, 0) == 4294967295)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_557(iParam0, 11, iParam1, 0) == 4294967295)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILE::_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_567(int iParam0, int iParam1)//Position - 0x33E05
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1769225721, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2460520549, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3355441939, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 38465448, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2825075674, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3792645937, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3502607518, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 997614074, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 748799057, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 653048039, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2372230965, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2609838984, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1892460036, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3998228749, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_568(int iParam0, int iParam1, int iParam2)//Position - 0x33F49
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 4294967295;
		iVar1 = 4294967295;
		if (iParam1 >= 256)
		{
			iVar0 = func_579(iParam0, iParam1, 4, 3);
			iVar1 = func_569(iVar0);
		}
		iVar2 = 4294967295;
		iVar3 = 4294967295;
		if (iParam2 >= 237)
		{
			iVar2 = func_579(iParam0, iParam2, 11, 3);
			iVar3 = func_569(iVar2);
		}
		if (iVar2 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3468832093, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2439348822, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2439348822, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2874141894, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				if (iVar0 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return 1;
			}
		}
		else if (iVar0 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return 1;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3468832093, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2439348822, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2276967906, 0))
			{
				if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1627756587, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case 3855202361:
			case 312004063:
			case 6695290:
			case 1724446270:
			case 3846861623:
			case 3683868617:
			case 3183879215:
			case 2888597756:
			case 2382808253:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case 2165873043:
			case 3873596709:
			case 3619604190:
				if (((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == 1844077094) || iVar2 == 1672760762) || iVar2 == 339848918) || iVar2 == 3669277629) || iVar2 == 3370063890) || iVar2 == 4145640582) || iVar2 == 3851211117) || iVar2 == 2477469099) || iVar2 == 2184678084) || iVar2 == 2961041232) || iVar2 == 2391329018) || iVar2 == 1018832222) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2206820464, 0))
				{
					return 0;
				}
				break;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1021189127, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = 4294967295;
		iVar5 = 4294967295;
		if (iParam1 >= 256)
		{
			iVar4 = func_579(iParam0, iParam1, 4, 4);
			iVar5 = func_569(iVar4);
		}
		iVar6 = 4294967295;
		if (iParam2 >= 256)
		{
			iVar6 = func_579(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3468832093, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2439348822, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3995877949, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3995877949, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3995877949, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3995877949, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2874141894, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2276967906, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3764877471, 0))
			{
				if ((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3764877471, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3764877471, 0))
			{
				if ((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3764877471, 0)) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3071453855, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar6, 3094454078, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3515131827, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3208708908, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2806526264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 2943480357, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == 4084062188) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == 2609031191) || iVar4 == 2915585186) || iVar4 == 3506344718) || iVar4 == 3813226403) || iVar4 == 4028224108) || iVar4 == 573421207) || iVar4 == 3555298657) || iVar4 == 3168919394) || iVar4 == 3340170188) || iVar4 == 2436728858) || iVar4 == 2743676081) || iVar4 == 3305094513) || iVar4 == 2073733812) || iVar4 == 2698769718) || iVar4 == 3352609563) || iVar4 == 4254019215) || iVar4 == 3032095974) || iVar4 == 3799578723) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == 3981676056) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 821147517, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar6, 4239416730, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == 4084062188) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == 2609031191) || iVar4 == 2915585186) || iVar4 == 3506344718) || iVar4 == 3813226403) || iVar4 == 4028224108) || iVar4 == 573421207) || iVar4 == 3555298657) || iVar4 == 3168919394) || iVar4 == 3340170188) || iVar4 == 2436728858) || iVar4 == 2743676081) || iVar4 == 3305094513) || iVar4 == 2073733812) || iVar4 == 2698769718) || iVar4 == 3352609563) || iVar4 == 4254019215) || iVar4 == 3032095974) || iVar4 == 3799578723) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == 3981676056) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
		}
		if (iVar4 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3468832093, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3468832093, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2439348822, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2439348822, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3995877949, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3995877949, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2874141894, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2874141894, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2276967906, 0))
			{
				if (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 2276967906, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3764877471, 0))
			{
				if ((iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3764877471, 0)) || (iVar6 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar6, 3071453855, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4261935729, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2192107526, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 3547384111, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 3547384111, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 4261935729, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2969153612, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2026620439, 0))
			{
				return 0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 2175211152, 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2412047274, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3214390491, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2907508806, 0))
			{
				return 0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar6, 947651647, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar6, 4236554734, 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3071453855, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == 4084062188) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == 2609031191) || iVar4 == 2915585186) || iVar4 == 3506344718) || iVar4 == 3813226403) || iVar4 == 4028224108) || iVar4 == 573421207) || iVar4 == 3555298657) || iVar4 == 3168919394) || iVar4 == 3340170188) || iVar4 == 2436728858) || iVar4 == 2743676081) || iVar4 == 3305094513) || iVar4 == 2073733812) || iVar4 == 2698769718) || iVar4 == 3352609563) || iVar4 == 4254019215) || iVar4 == 3032095974) || iVar4 == 3799578723) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == 3981676056) || iVar4 == 495041640) || iVar4 == 749492925)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_569(int iParam0)//Position - 0x35237
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

int func_570(int iParam0, int iParam1, int iParam2)//Position - 0x353A4
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
	
	iVar0 = 4294967197;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_579(iParam0, iParam1, 8, 3);
			if (iVar1 != 4294967295)
			{
				iVar2 = FILE::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILE::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_473(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_579(iParam0, iParam1, 8, 4);
			if (iVar7 != 4294967295)
			{
				iVar8 = FILE::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILE::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_473(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != 4294967197)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_571(int iParam0, int iParam1, int iParam2)//Position - 0x3569B
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_572(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_19E56.f_933.f_21B[0 /*65*/].f_3B;
					break;
				
				case 3:
					if (Global_19E56.f_2361.f_63.f_3A[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_19E56.f_2361.f_63.f_3A[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_19E56.f_933.f_21B[1 /*65*/].f_3B;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_19E56.f_933.f_21B[2 /*65*/].f_3B;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return 4294967197;
}

int func_572(int iParam0)//Position - 0x35AB5
{
	switch (iParam0)
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
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_573(int iParam0, int iParam1)//Position - 0x35B3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_176D0 != 4294967197)
	{
		if (Global_176D1 == 11)
		{
			Global_11569[1 /*14*/] = { func_615(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_176D0, 4294967295) };
			iVar0 = func_575(ENTITY::GET_ENTITY_MODEL(iParam0), Global_176D0, iParam1, Global_11569[1 /*14*/].f_4);
			if (iVar0 != 4294967197)
			{
				return iVar0;
			}
		}
		else if (Global_176D1 == 8)
		{
			iVar1 = func_570(ENTITY::GET_ENTITY_MODEL(iParam0), Global_176D0, Global_176D2);
			if (iVar1 != 4294967197)
			{
				Global_11569[1 /*14*/] = { func_615(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, 4294967295) };
				iVar2 = func_575(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_11569[1 /*14*/].f_4);
				if (iVar2 != 4294967197)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_176D0;
			}
		}
	}
	return 4294967197;
}

int func_574(int iParam0, int iParam1, int iParam2)//Position - 0x35C0D
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == 4294967295 && iParam1 >= 237)
			{
				iParam2 = func_579(iParam0, iParam1, 11, 3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 2901811106, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == 4294967295 && iParam1 >= 256)
			{
				iParam2 = func_579(iParam0, iParam1, 11, 4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 2901811106, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_575(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35D66
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
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
	struct<10> Var32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = 4294967197;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = 4294967295;
		iVar3 = 4294967295;
		if (iParam2 >= 237)
		{
			iVar2 = func_579(iParam0, iParam2, 11, 3);
			iVar3 = func_569(iVar2);
		}
		iVar4 = 4294967295;
		iVar5 = 4294967295;
		if (iParam1 >= 237)
		{
			iVar4 = func_579(iParam0, iParam1, 11, 3);
			iVar5 = func_569(iVar4);
		}
		if (iVar2 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
			{
				return 4294967197;
			}
		}
		if (iVar2 != 4294967295)
		{
			if (((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar2, 2947481270, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3020868293, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1723403459, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1538937264, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return 4294967197;
				}
				if (((((((!FILE::_0x341DE7ED1D2A1BFD(iVar2, 3745123536, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3466488725, 0))
					{
						return 4294967197;
					}
				}
			}
			if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 2639813129, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575799735, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1431529976, 0))
			{
				return 4294967197;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1690933245, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2969153612, 0))
			{
				return 4294967197;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return 4294967197;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return 4294967197;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0))
			{
				return 4294967197;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 4294967197;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_473(iParam0, 3223543667, 8, 3);
							break;
						
						case 1:
							iVar0 = func_473(iParam0, 3461872604, 8, 3);
							break;
						
						case 2:
							iVar0 = func_473(iParam0, 2458813514, 8, 3);
							break;
						
						case 3:
							iVar0 = func_473(iParam0, 2696552609, 8, 3);
							break;
						
						case 4:
							iVar0 = func_473(iParam0, 123661793, 8, 3);
							break;
						
						case 5:
							iVar0 = func_473(iParam0, 330958487, 8, 3);
							break;
						
						case 7:
							iVar0 = func_473(iParam0, 3648786972, 8, 3);
							break;
						
						case 8:
							iVar0 = func_473(iParam0, 4152249888, 8, 3);
							break;
						
						case 11:
							iVar0 = func_473(iParam0, 1290696959, 8, 3);
							break;
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_473(iParam0, 2912144512, 8, 3);
							break;
						
						case 1:
							iVar0 = func_473(iParam0, 2563613428, 8, 3);
							break;
						
						case 2:
							iVar0 = func_473(iParam0, 2334328735, 8, 3);
							break;
						
						case 3:
							iVar0 = func_473(iParam0, 147161830, 8, 3);
							break;
						
						case 4:
							iVar0 = func_473(iParam0, 4202358353, 8, 3);
							break;
						
						case 5:
							iVar0 = func_473(iParam0, 4132036079, 8, 3);
							break;
						
						case 7:
							iVar0 = func_473(iParam0, 3757879637, 8, 3);
							break;
						
						case 8:
							iVar0 = func_473(iParam0, 1665087452, 8, 3);
							break;
						
						case 11:
							iVar0 = func_473(iParam0, 1012984348, 8, 3);
							break;
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_473(iParam0, 385813134, 8, 3);
							break;
						
						case 1:
							iVar0 = func_473(iParam0, 675392787, 8, 3);
							break;
						
						case 2:
							iVar0 = func_473(iParam0, 4056694817, 8, 3);
							break;
						
						case 3:
							iVar0 = func_473(iParam0, 67757212, 8, 3);
							break;
						
						case 4:
							iVar0 = func_473(iParam0, 3758595224, 8, 3);
							break;
						
						case 5:
							iVar0 = func_473(iParam0, 4047388421, 8, 3);
							break;
						
						case 7:
							iVar0 = func_473(iParam0, 3134378543, 8, 3);
							break;
						
						case 8:
							iVar0 = func_473(iParam0, 3440146082, 8, 3);
							break;
						
						case 11:
							iVar0 = func_473(iParam0, 2836672178, 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
				{
					iVar6 = 4;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
				{
					iVar6 = 5;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = 4294967295;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3653355204, 0))
		{
			bVar7 = true;
			if (((((((((FILE::_0x341DE7ED1D2A1BFD(iVar2, 470686834, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2787434379, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
			{
				iVar6 = 1;
			}
			else if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2943480357, 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = 4294967295;
			}
		}
		if (bVar7)
		{
			if (iVar6 != 4294967295)
			{
				iVar8 = FILE::_0xC17AD0E5752BECDA(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILE::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 4126630879, 0)) || (iVar6 == 5 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 2879967043, 0))) || (iVar6 == 4 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 2591763688, 0))) || (iVar6 == 3 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0))) || (iVar6 == 2 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 3156209713, 0))) || (iVar6 == 1 && FILE::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0))) || ((((((iVar6 == 0 && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 3156209713, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 2591763688, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar10, 4126630879, 0)))
						{
							if (iVar10 != 0 && iVar10 != 1849449579)
							{
								iVar0 = func_473(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return 4294967197;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return 4294967197;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 350281921, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return 4294967197;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && func_576()) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3028409363, 0))
			{
				iVar0 = 34;
				iVar1 = 0;
				FILE::INIT_SHOP_PED_COMPONENT(&Var13);
				if (Global_4116CF[1] != 0)
				{
					FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					FILE::GET_SHOP_PED_QUERY_COMPONENT(Global_4116CC[1], &Var13);
					if (Var13.f_1 != Global_4116CF[1])
					{
						Global_4116CF[1] = 0;
						Global_4116CC[1] = 0;
					}
				}
				if (Global_4116CF[1] == 0)
				{
					iVar15 = 0;
					iVar16 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					iVar14 = 0;
					while (iVar14 < iVar16)
					{
						FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar14, &Var13);
						if (!FILE::_IS_DLC_DATA_EMPTY(Var13))
						{
							if (MISC::GET_HASH_KEY(&(Var13.f_9)) == 2629350489 && FILE::_0x341DE7ED1D2A1BFD(Var13.f_1, 647976134, 0))
							{
								Global_4116CF[1] = Var13.f_1;
								Global_4116CC[1] = iVar15;
								iVar14 = iVar16 + 1;
							}
							iVar15++;
						}
						iVar14++;
					}
				}
				if (Global_4116CF[1] != 0)
				{
					iVar0 = (func_474(iParam0, func_603(8)) + Global_4116CC[1]);
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar17 = func_579(iParam0, iParam1, 11, 3);
					if ((iVar17 != 4294967295 && !FILE::_0x341DE7ED1D2A1BFD(iVar17, 310957510, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar17, 4184983770, 0))
					{
						iVar18 = FILE::_0xC17AD0E5752BECDA(iVar17);
						iVar19 = 0;
						while (iVar19 < iVar18)
						{
							FILE::GET_VARIANT_COMPONENT(iVar17, iVar19, &iVar20, &iVar21, &iVar22);
							if (iVar22 == 8)
							{
								if (iVar20 != 0 && iVar20 != 1849449579)
								{
									if ((!FILE::_0x341DE7ED1D2A1BFD(iVar20, 2591763688, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar20, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar20, 4126630879, 0))
									{
										iVar0 = func_473(iParam0, iVar20, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar21;
								}
							}
							iVar19++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar23 = 0;
				if (iParam2 >= 236 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
				{
					iVar23 = 1;
				}
				iVar24 = func_579(iParam0, iParam1, 11, 3);
				if (iVar24 != 4294967295)
				{
					iVar25 = FILE::_0xC17AD0E5752BECDA(iVar24);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						FILE::GET_VARIANT_COMPONENT(iVar24, iVar26, &iVar27, &iVar28, &iVar29);
						if (iVar29 == 8 && iVar23 == FILE::_0x341DE7ED1D2A1BFD(iVar27, 1680519719, 0))
						{
							if (iVar27 != 0 && iVar27 != 1849449579)
							{
								iVar0 = func_473(iParam0, iVar27, 8, 3);
							}
							else
							{
								iVar0 = iVar28;
							}
							iVar26 = iVar25 + 1;
							iVar1 = 0;
						}
						iVar26++;
					}
				}
				else
				{
					iVar0 = func_473(iParam0, 2555320394, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_576())
			{
				iVar30 = 0;
				iVar31 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)))
				{
					iVar30 = 1;
					iVar31 = 1;
				}
				FILE::INIT_SHOP_PED_COMPONENT(&Var32);
				if (Global_4116CF[iVar31] != 0)
				{
					FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					FILE::GET_SHOP_PED_QUERY_COMPONENT(Global_4116CC[iVar31], &Var32);
					if (Var32.f_1 != Global_4116CF[iVar31])
					{
						Global_4116CF[iVar31] = 0;
						Global_4116CC[iVar31] = 0;
					}
				}
				if (Global_4116CF[iVar31] == 0)
				{
					iVar34 = 0;
					iVar35 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, 4294967295, 0, 4294967295, 8);
					iVar33 = 0;
					while (iVar33 < iVar35)
					{
						FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar33, &Var32);
						if (!FILE::_IS_DLC_DATA_EMPTY(Var32))
						{
							if (MISC::GET_HASH_KEY(&(Var32.f_9)) == 2629350489 && iVar30 == FILE::_0x341DE7ED1D2A1BFD(Var32.f_1, 647976134, 0))
							{
								Global_4116CF[iVar31] = Var32.f_1;
								Global_4116CC[iVar31] = iVar34;
								iVar33 = iVar35 + 1;
							}
							iVar34++;
						}
						iVar33++;
					}
				}
				if (Global_4116CF[iVar31] != 0)
				{
					iVar0 = (func_474(iParam0, func_603(8)) + Global_4116CC[iVar31]);
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = 4294967197;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar36 = false;
			iVar37 = func_579(iParam0, iParam1, 11, 3);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2943480357, 0))
			{
				bVar36 = true;
			}
			if (iVar37 != 4294967295)
			{
				iVar38 = FILE::_0xC17AD0E5752BECDA(iVar37);
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					FILE::GET_VARIANT_COMPONENT(iVar37, iVar39, &iVar40, &iVar41, &iVar42);
					if (iVar42 == 8)
					{
						if (iVar40 != 0 && iVar40 != 1849449579)
						{
							iVar0 = func_473(iParam0, iVar40, 8, 3);
							iVar1 = 0;
							if (!bVar36 || FILE::_0x341DE7ED1D2A1BFD(iVar40, 647976134, 0))
							{
								iVar39 = iVar38 + 1;
							}
						}
						else
						{
							iVar0 = iVar41;
							iVar39 = iVar38 + 1;
							iVar1 = 0;
						}
					}
					iVar39++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar43 = 4294967295;
		iVar44 = 4294967295;
		if (iParam2 >= 256)
		{
			iVar43 = func_579(iParam0, iParam2, 11, 4);
			iVar44 = func_569(iVar43);
		}
		iVar45 = 4294967295;
		iVar46 = 4294967295;
		if (iParam1 >= 256)
		{
			iVar45 = func_579(iParam0, iParam1, 11, 4);
			iVar46 = func_569(iVar45);
		}
		if (iVar43 != 4294967295)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 3803378421, 0))
			{
				return 4294967197;
			}
		}
		if ((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 2481756905, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 3466488725, 0))
			{
				return 4294967197;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 2575628572, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar46 == 0) || iVar46 == 2) || iVar46 == 4) || iVar46 == 5) || iVar46 == 11) || iVar46 == 12) || iVar46 == 13) || iVar46 == 15) || iVar45 == 4073140617) || iVar45 == 1172264892) || iVar45 == 1474853838) || iVar45 == 278369420) || iVar45 == 3984150096) || iVar45 == 4155990732) || iVar45 == 3389425515) || iVar45 == 998321559) || iVar45 == 64401473)
			{
			}
			else
			{
				return 4294967197;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 3445128205, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2206820464, 0))
		{
			return 4294967197;
		}
		iVar47 = 0;
		bVar48 = false;
		if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar45, 3533503320, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2947481270, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 1784133476, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2030343924, 0))
		{
			bVar48 = true;
			if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar44 == 1) || iVar44 == 8)
			{
				iVar47 = 2;
			}
			else if ((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
			{
				iVar47 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar44 == 10) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1714969731, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 745826556, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 144417099, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 1784133476, 0))
				{
					iVar47 = 1;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 3175734607, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0))
				{
					iVar47 = 1;
				}
				else
				{
					iVar47 = 4294967295;
				}
			}
			else
			{
				iVar47 = 1;
			}
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 2943480357, 0))
		{
			bVar48 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar44 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0))
			{
				if (((FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 1;
				}
			}
			else if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 153792394, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1322269404, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 548036233, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3280213785, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2175211152, 0))
			{
				iVar47 = 0;
			}
			else
			{
				iVar47 = 4294967295;
			}
		}
		switch (iVar45)
		{
			case 4073140617:
			case 1172264892:
			case 1474853838:
			case 278369420:
			case 3984150096:
			case 4155990732:
			case 3389425515:
			case 998321559:
			case 64401473:
			case 15269846:
			case 3620941227:
			case 3390575157:
			case 3159258786:
			case 2934725598:
			case 2164916250:
			case 1935434943:
			case 1704282417:
			case 1472114052:
			case 1169688951:
			case 3101135124:
			case 3408082347:
			case 2625427551:
			case 2924706828:
			case 3881004551:
			case 4056187633:
				bVar48 = true;
				if (((FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
				{
					iVar47 = 1;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 2460520549, 0))
				{
					iVar47 = 2;
				}
				else if ((((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 3424892835, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2575628572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
				{
					iVar47 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar44 == 1) || iVar44 == 7) || iVar44 == 8)
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 4294967295;
				}
				break;
			
			case 619380843:
				bVar48 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar44 == 1) || iVar44 == 8)
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 4294967295;
				}
				break;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3315498572, 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar46 == 15)
			{
				iVar0 = 120;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar45, 2274210138, 0))
			{
				bVar48 = true;
				iVar47 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 3803378421, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 2170337719, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar46 == 12)
				{
					return 4294967197;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar46 == 4) || iVar46 == 5) || iVar46 == 11) || iVar46 == 12) || iVar46 == 13) || iVar46 == 15)
			{
				bVar48 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar48 = true;
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar43, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 297865853, 0))
				{
					iVar47 = 4;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 201427653, 0))
				{
					iVar47 = 5;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar43, 967829025, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2170337719, 0))
				{
					iVar47 = 6;
				}
				else
				{
					iVar47 = 4294967295;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar48)
		{
			if (iVar47 != 4294967295)
			{
				iVar49 = FILE::_0xC17AD0E5752BECDA(iVar45);
				iVar50 = 0;
				while (iVar50 < iVar49)
				{
					FILE::GET_VARIANT_COMPONENT(iVar45, iVar50, &iVar51, &iVar52, &iVar53);
					if (iVar53 == 8)
					{
						if (((((((iVar47 == 6 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 4126630879, 0)) || (iVar47 == 5 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 2879967043, 0))) || (iVar47 == 4 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 2591763688, 0))) || (iVar47 == 3 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 1318819110, 0))) || (iVar47 == 2 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 3156209713, 0))) || (iVar47 == 1 && FILE::_0x341DE7ED1D2A1BFD(iVar51, 647976134, 0))) || ((((((iVar47 == 0 && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 647976134, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 3156209713, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 1318819110, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 2591763688, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar51, 4126630879, 0)))
						{
							if (iVar51 != 0 && iVar51 != 1849449579)
							{
								iVar0 = func_473(iParam0, iVar51, 8, 4);
							}
							else
							{
								iVar0 = iVar52;
							}
							iVar50 = iVar49 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar50++;
				}
			}
			return 4294967197;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar46 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar44 == 6) || iVar44 == 7)) && func_576()) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 3878346342, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 3745123536, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0))
		{
			if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar43, 2481756905, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
			{
				return 4294967197;
			}
			iVar54 = iVar45;
			if (iParam1 == 199)
			{
				iVar0 = func_473(iParam0, 331193219, 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_473(iParam0, 1115060468, 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_473(iParam0, 779636984, 8, 4);
			}
			else if (iVar54 == 948380380)
			{
				iVar0 = func_473(iParam0, 3724718090, 8, 4);
			}
			else if (iVar54 == 708412993)
			{
				iVar0 = func_473(iParam0, 3418852244, 8, 4);
			}
			else if (iVar54 == 1974869305)
			{
				iVar0 = func_473(iParam0, 4186367762, 8, 4);
			}
			else if (iVar54 == 1197916315)
			{
				iVar0 = func_473(iParam0, 200575961, 8, 4);
			}
			else if (iVar54 == 587593690)
			{
				iVar0 = func_473(iParam0, 961930907, 8, 4);
			}
			else if (iVar54 == 323213398)
			{
				iVar0 = func_473(iParam0, 4037268788, 8, 4);
			}
			else if (iVar54 == 1050193651)
			{
				iVar0 = func_473(iParam0, 516534659, 8, 4);
			}
			else if (iVar54 == 811438717)
			{
				iVar0 = func_473(iParam0, 3120654712, 8, 4);
			}
			else if (iVar54 == 3417098537)
			{
				iVar0 = func_473(iParam0, 3102172992, 8, 4);
			}
			else if (iVar54 == 3186503084)
			{
				iVar0 = func_473(iParam0, 2267710407, 8, 4);
			}
			else if (iVar54 == 3827101202)
			{
				iVar0 = func_473(iParam0, 2624892507, 8, 4);
			}
			else if (iVar54 == 3621967262)
			{
				iVar0 = func_473(iParam0, 3968618121, 8, 4);
			}
			else if (iVar54 == 2310027578)
			{
				iVar0 = func_473(iParam0, 3498907275, 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = 4294967197;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar44 == 10)
			{
				return 4294967197;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar45 != 4294967295)
			{
				bVar55 = true;
				if (FILE::_0x341DE7ED1D2A1BFD(iVar45, 1965569012, 0))
				{
					bVar55 = false;
					if (iParam2 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar43, 3094454078, 0))
					{
						bVar55 = true;
					}
				}
				if (bVar55)
				{
					iVar47 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar46 == 12)
						{
							iVar47 = 1;
						}
					}
					iVar56 = FILE::_0xC17AD0E5752BECDA(iVar45);
					iVar57 = 0;
					while (iVar57 < iVar56)
					{
						FILE::GET_VARIANT_COMPONENT(iVar45, iVar57, &iVar58, &iVar59, &iVar60);
						if (iVar60 == 8 && ((((((((iVar58 == 0 || iVar58 == 1849449579) || (iVar47 == 6 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 4126630879, 0))) || (iVar47 == 5 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 2879967043, 0))) || (iVar47 == 4 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 2591763688, 0))) || (iVar47 == 3 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 1318819110, 0))) || (iVar47 == 2 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 3156209713, 0))) || (iVar47 == 1 && FILE::_0x341DE7ED1D2A1BFD(iVar58, 647976134, 0))) || ((((((iVar47 == 0 && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 647976134, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 3156209713, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 1318819110, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 2591763688, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 2879967043, 0)) && !FILE::_0x341DE7ED1D2A1BFD(iVar58, 4126630879, 0))))
						{
							if (iVar58 != 0 && iVar58 != 1849449579)
							{
								iVar0 = func_473(iParam0, iVar58, 8, 4);
							}
							else
							{
								iVar0 = iVar59;
							}
							iVar57 = iVar56 + 1;
							iVar1 = 0;
						}
						iVar57++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != 4294967197)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_576()//Position - 0x38324
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_577(int iParam0, int iParam1, int iParam2)//Position - 0x38335
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2131039487;
							break;
						
						case 3:
							return 717379468;
							break;
						
						case 4:
							return 3963774115;
							break;
						
						case 5:
							return 73557144;
							break;
						
						case 6:
							return 3406987030;
							break;
						
						case 7:
							return 3988651626;
							break;
						
						case 8:
							return 3140918358;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 1604817400;
							break;
						
						case 16:
							return 1070350465;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2993330681;
							break;
						
						case 3:
							return 1153996761;
							break;
						
						case 4:
							return 2979882504;
							break;
						
						case 5:
							return 1655884038;
							break;
						
						case 6:
							return 1489229833;
							break;
						
						case 7:
							return 2365463971;
							break;
						
						case 8:
							return 3105838929;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2507722867;
							break;
						
						case 16:
							return 4130341732;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 538171135;
							break;
						
						case 3:
							return 4049982234;
							break;
						
						case 4:
							return 442977103;
							break;
						
						case 5:
							return 2909239405;
							break;
						
						case 6:
							return 1309989623;
							break;
						
						case 7:
							return 1191418696;
							break;
						
						case 8:
							return 189293242;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2241289605;
							break;
						
						case 16:
							return 3479621494;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 2856282540;
							break;
						
						case 1:
							return 194146035;
							break;
						
						case 2:
							return 3874065698;
							break;
						
						case 3:
							return 2107411814;
							break;
						
						case 4:
							return 1242686602;
							break;
						
						case 5:
							return 3698426713;
							break;
						
						case 6:
							return 3641181225;
							break;
						
						case 7:
							return 1460048630;
							break;
						
						case 8:
							return 2215377481;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 195042046;
							break;
						
						case 16:
							return 1585638009;
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2347868813;
							break;
						
						case 3:
							return 569295621;
							break;
						
						case 4:
							return 4086868737;
							break;
						
						case 5:
							return 1256246195;
							break;
						
						case 6:
							return 1605755939;
							break;
						
						case 7:
							return 874748698;
							break;
						
						case 8:
							return 4157871924;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4178443173;
							break;
						
						case 16:
							return 2265365265;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1950801119;
							break;
						
						case 3:
							return 3136402525;
							break;
						
						case 4:
							return 4225037868;
							break;
						
						case 5:
							return 1957730707;
							break;
						
						case 6:
							return 374587029;
							break;
						
						case 7:
							return 4084820561;
							break;
						
						case 8:
							return 336100633;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 3922523070;
							break;
						
						case 16:
							return 3113259020;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3146728417;
							break;
						
						case 3:
							return 3336095272;
							break;
						
						case 4:
							return 1353141306;
							break;
						
						case 5:
							return 394070886;
							break;
						
						case 6:
							return 255958050;
							break;
						
						case 7:
							return 3773238586;
							break;
						
						case 8:
							return 1843470374;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 482576981;
							break;
						
						case 16:
							return 3742774391;
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 670760190;
							break;
						
						case 3:
							return 799655540;
							break;
						
						case 4:
							return 4195887990;
							break;
						
						case 5:
							return 1989760633;
							break;
						
						case 6:
							return 1157052274;
							break;
						
						case 7:
							return 3098705071;
							break;
						
						case 8:
							return 3630610897;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4040450207;
							break;
						
						case 16:
							return 249940927;
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1875496913;
							break;
						
						case 3:
							return 2316080488;
							break;
						
						case 4:
							return 3015564099;
							break;
						
						case 5:
							return 2834968475;
							break;
						
						case 6:
							return 1786467932;
							break;
						
						case 7:
							return 3499962050;
							break;
						
						case 8:
							return 3147958310;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2135611597;
							break;
						
						case 16:
							return 2400190606;
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2369958009;
							break;
						
						case 3:
							return 4026233562;
							break;
						
						case 4:
							return 2170554475;
							break;
						
						case 5:
							return 3934930599;
							break;
						
						case 6:
							return 3368533741;
							break;
						
						case 7:
							return 985839403;
							break;
						
						case 8:
							return 4060530899;
							break;
						
						case 9:
							return 1165919867;
							break;
						
						case 10:
							return 1606204151;
							break;
						
						case 11:
							return 1774276352;
							break;
						
						case 12:
							return 1934254610;
							break;
						
						case 13:
							return 980775017;
							break;
						
						case 14:
							return 399321881;
							break;
						
						case 15:
							return 1330460533;
							break;
						
						case 16:
							return 1085725282;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 493536654;
							break;
						
						case 3:
							return 2535914291;
							break;
						
						case 4:
							return 630158551;
							break;
						
						case 5:
							return 3587057782;
							break;
						
						case 6:
							return 1254885089;
							break;
						
						case 7:
							return 596977742;
							break;
						
						case 8:
							return 1861540342;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4257211256;
							break;
						
						case 16:
							return 2310706429;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3454691279;
							break;
						
						case 3:
							return 756400133;
							break;
						
						case 4:
							return 1148630611;
							break;
						
						case 5:
							return 3401058014;
							break;
						
						case 6:
							return 1485630477;
							break;
						
						case 7:
							return 3360792529;
							break;
						
						case 8:
							return 2427985378;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 4289641771;
							break;
						
						case 16:
							return 532560667;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3703548719;
							break;
						
						case 3:
							return 2265375802;
							break;
						
						case 4:
							return 1293565798;
							break;
						
						case 5:
							return 1230599348;
							break;
						
						case 6:
							return 80125466;
							break;
						
						case 7:
							return 768104686;
							break;
						
						case 8:
							return 2735212016;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 347604073;
							break;
						
						case 16:
							return 824480839;
							break;
					}
					break;
				
				case 352:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1435783799;
							break;
						
						case 3:
							return 3359415220;
							break;
						
						case 4:
							return 766407714;
							break;
						
						case 5:
							return 1509946582;
							break;
						
						case 6:
							return 2189933498;
							break;
						
						case 7:
							return 1608018857;
							break;
						
						case 8:
							return 2548022312;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 717365732;
							break;
						
						case 16:
							return 2479645078;
							break;
					}
					break;
				
				case 353:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 640553446;
							break;
						
						case 3:
							return 376036624;
							break;
						
						case 4:
							return 4243931144;
							break;
						
						case 5:
							return 1864144311;
							break;
						
						case 6:
							return 875934121;
							break;
						
						case 7:
							return 3623861538;
							break;
						
						case 8:
							return 2855573784;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2063066579;
							break;
						
						case 16:
							return 1248148722;
							break;
					}
					break;
				
				case 354:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2499158891;
							break;
						
						case 3:
							return 3711793626;
							break;
						
						case 4:
							return 1309411930;
							break;
						
						case 5:
							return 3197963367;
							break;
						
						case 6:
							return 947491077;
							break;
						
						case 7:
							return 3273780201;
							break;
						
						case 8:
							return 2632545912;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2838644473;
							break;
						
						case 16:
							return 3542963615;
							break;
					}
					break;
				
				case 391:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2428817366;
							break;
						
						case 3:
							return 169817082;
							break;
						
						case 4:
							return 876172205;
							break;
						
						case 5:
							return 2053608242;
							break;
						
						case 6:
							return 720468224;
							break;
						
						case 7:
							return 2539303441;
							break;
						
						case 8:
							return 4017312986;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 3803189478;
							break;
						
						case 16:
							return 1956130191;
							break;
					}
					break;
				
				case 404:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2609775276;
							break;
						
						case 3:
							return 447714365;
							break;
						
						case 4:
							return 4107489012;
							break;
						
						case 5:
							return 2101575193;
							break;
						
						case 6:
							return 1655151264;
							break;
						
						case 7:
							return 4082518710;
							break;
						
						case 8:
							return 3719473258;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 180304173;
							break;
						
						case 16:
							return 1266107782;
							break;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 3880432508;
							break;
						
						case 3:
							return 185531215;
							break;
						
						case 4:
							return 3519549443;
							break;
						
						case 5:
							return 1619085169;
							break;
						
						case 6:
							return 888176083;
							break;
						
						case 7:
							return 3426331003;
							break;
						
						case 8:
							return 3813726078;
							break;
						
						case 9:
							return 2635070926;
							break;
						
						case 10:
							return 1919724703;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 982904848;
							break;
						
						case 3:
							return 1053086051;
							break;
						
						case 4:
							return 1565990968;
							break;
						
						case 5:
							return 869354244;
							break;
						
						case 6:
							return 3157298371;
							break;
						
						case 7:
							return 4049639860;
							break;
						
						case 8:
							return 2202231526;
							break;
						
						case 9:
							return 445078583;
							break;
						
						case 10:
							return 4113402191;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1286693086;
							break;
						
						case 3:
							return 443095479;
							break;
						
						case 4:
							return 2255632020;
							break;
						
						case 5:
							return 2083407994;
							break;
						
						case 6:
							return 533001127;
							break;
						
						case 7:
							return 1728875992;
							break;
						
						case 8:
							return 2629153079;
							break;
						
						case 9:
							return 372072052;
							break;
						
						case 10:
							return 143449031;
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1402439971;
							break;
						
						case 1:
							return 4217756910;
							break;
						
						case 2:
							return 206640931;
							break;
						
						case 3:
							return 1434974169;
							break;
						
						case 4:
							return 2218663893;
							break;
						
						case 5:
							return 2073263245;
							break;
						
						case 6:
							return 229693395;
							break;
						
						case 7:
							return 3313720557;
							break;
						
						case 8:
							return 2107613618;
							break;
						
						case 9:
							return 1636528688;
							break;
						
						case 10:
							return 1619141120;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1954830049;
							break;
						
						case 3:
							return 1793062342;
							break;
						
						case 4:
							return 2176242147;
							break;
						
						case 5:
							return 3445220013;
							break;
						
						case 6:
							return 1582789248;
							break;
						
						case 7:
							return 2619280128;
							break;
						
						case 8:
							return 3913077992;
							break;
						
						case 9:
							return 316684696;
							break;
						
						case 10:
							return 1798619938;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1942207698;
							break;
						
						case 3:
							return 3551597420;
							break;
						
						case 4:
							return 582693633;
							break;
						
						case 5:
							return 3014679012;
							break;
						
						case 6:
							return 3294861797;
							break;
						
						case 7:
							return 2147767267;
							break;
						
						case 8:
							return 2456252430;
							break;
						
						case 9:
							return 2793430367;
							break;
						
						case 10:
							return 2426306979;
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1187050736;
							break;
						
						case 3:
							return 2874012333;
							break;
						
						case 4:
							return 232453794;
							break;
						
						case 5:
							return 406178867;
							break;
						
						case 6:
							return 739288468;
							break;
						
						case 7:
							return 4041970136;
							break;
						
						case 8:
							return 2250079206;
							break;
						
						case 9:
							return 171952701;
							break;
						
						case 10:
							return 4152648106;
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1703311969;
							break;
						
						case 3:
							return 1875667738;
							break;
						
						case 4:
							return 1291347593;
							break;
						
						case 5:
							return 3581513304;
							break;
						
						case 6:
							return 1417339152;
							break;
						
						case 7:
							return 587281350;
							break;
						
						case 8:
							return 4208063274;
							break;
						
						case 9:
							return 1665085600;
							break;
						
						case 10:
							return 3492063660;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2436448527;
							break;
						
						case 3:
							return 44044890;
							break;
						
						case 4:
							return 3163829539;
							break;
						
						case 5:
							return 213313570;
							break;
						
						case 6:
							return 4061842347;
							break;
						
						case 7:
							return 171345846;
							break;
						
						case 8:
							return 1452902248;
							break;
						
						case 9:
							return 457174457;
							break;
						
						case 10:
							return 2584353300;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 747852506;
							break;
						
						case 3:
							return 216238268;
							break;
						
						case 4:
							return 404894315;
							break;
						
						case 5:
							return 950341895;
							break;
						
						case 6:
							return 1159773017;
							break;
						
						case 7:
							return 3337781860;
							break;
						
						case 8:
							return 4054006411;
							break;
						
						case 9:
							return 1933094739;
							break;
						
						case 10:
							return 2146821602;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 4035278343;
							break;
						
						case 3:
							return 3558433182;
							break;
						
						case 4:
							return 2621080335;
							break;
						
						case 5:
							return 976562040;
							break;
						
						case 6:
							return 2500163498;
							break;
						
						case 7:
							return 4213079340;
							break;
						
						case 8:
							return 1689176064;
							break;
						
						case 9:
							return 3029561478;
							break;
						
						case 10:
							return 1455856271;
							break;
					}
					break;
				
				case 302:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2459528430;
							break;
						
						case 3:
							return 3790079397;
							break;
						
						case 4:
							return 2232761327;
							break;
						
						case 5:
							return 1171204323;
							break;
						
						case 6:
							return 655612525;
							break;
						
						case 7:
							return 3555947677;
							break;
						
						case 8:
							return 1371789707;
							break;
						
						case 9:
							return 417256409;
							break;
						
						case 10:
							return 3526958236;
							break;
					}
					break;
				
				case 303:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 124374814;
							break;
						
						case 3:
							return 2119944607;
							break;
						
						case 4:
							return 3165484822;
							break;
						
						case 5:
							return 801728466;
							break;
						
						case 6:
							return 1764150402;
							break;
						
						case 7:
							return 4294923519;
							break;
						
						case 8:
							return 3751223427;
							break;
						
						case 9:
							return 3323373354;
							break;
						
						case 10:
							return 1482293004;
							break;
					}
					break;
				
				case 304:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1732443055;
							break;
						
						case 3:
							return 1991589117;
							break;
						
						case 4:
							return 2368165254;
							break;
						
						case 5:
							return 2415532340;
							break;
						
						case 6:
							return 3712767295;
							break;
						
						case 7:
							return 498117603;
							break;
						
						case 8:
							return 1121585510;
							break;
						
						case 9:
							return 96864554;
							break;
						
						case 10:
							return 3416909144;
							break;
					}
					break;
			}
			break;
	}
	return 4294967295;
}

int func_578(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39F2F
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
	
	iVar0 = 4294967197;
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar3 = 4294967295;
	iVar4 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_579(iParam0, iParam2, 11, 3);
				iVar1 = func_569(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_579(iParam0, iParam1, 8, 3);
				iVar3 = func_569(iVar4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 14;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2276967906, 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3284162009, 0))
			{
				iVar0 = 4;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
			{
				if (iParam1 == 240)
				{
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
					{
						iVar0 = func_473(iParam0, 4105619513, 3, 3);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
					{
						iVar0 = func_473(iParam0, 2170707483, 3, 3);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
					{
						iVar0 = func_473(iParam0, 1522547645, 3, 3);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3315498572, 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_578(iParam0, 4294967197, func_570(iParam0, iParam1, 0), iParam3);
					if (iVar0 == 4294967197)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3978471604, 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3878346342, 0)) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2787434379, 0))) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2355588846, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3321753654, 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1847239679, 0))
				{
					if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2380584066, 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3445128205, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2206820464, 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != 4294967295)
					{
						iVar5 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILE::_0x017568A8182D98A6(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != 1849449579)
								{
									iVar0 = func_473(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 4287858010, 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = func_579(iParam0, iParam2, 11, 4);
				iVar1 = func_569(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_579(iParam0, iParam1, 8, 4);
				iVar3 = func_569(iVar4);
				switch (iVar4)
				{
					case 327496660:
					case 4231038459:
					case 695885966:
					case 525421628:
					case 1426634666:
					case 1160648693:
					case 1928065904:
					case 1748557322:
					case 2517744063:
					case 2303172647:
					case 917309067:
					case 2665305798:
						iVar3 = 15;
						break;
					
					case 587358117:
					case 742748715:
					case 490263574:
					case 682683142:
					case 3122040275:
					case 4120601753:
					case 2844839045:
					case 2483528051:
					case 1578218888:
					case 3101485853:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case 2446648279:
						iVar3 = 13;
						break;
					}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 0;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 3057068164, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 3803378421, 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == 1389091979) || iVar4 == 442100644) || iVar4 == 2888863571) || iVar4 == 4127662847) || iVar4 == 129353308) || iVar4 == 1943510702) || iVar4 == 1963041026) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3230704479, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3241125037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2936078416, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0))
				{
					if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 4025701093, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
					{
						iVar0 = func_473(iParam0, 3889232304, 3, 4);
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
					{
						iVar0 = func_473(iParam0, 1297919831, 3, 4);
					}
					else if ((FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2170337719, 0))
					{
						iVar0 = func_473(iParam0, 440926231, 3, 4);
					}
				}
				else if ((FILE::_0x341DE7ED1D2A1BFD(iVar4, 4205963378, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_578(iParam0, 4294967197, func_570(iParam0, iParam1, 0), iParam3);
					if (iVar0 == 4294967197)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3978471604, 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1965569012, 0)) && !func_574(iParam0, iParam2, 4294967295)) && !FILE::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3445128205, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2206820464, 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2192107526, 0))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_579(iParam0, iParam3, 4, 4), 4261935729, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3175734607, 0)) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1976716889, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2806526264, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2875160829, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 2481756905, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 263623295, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3985067549, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 4205963378, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 3547108821, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0))) || (iVar4 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1322269404, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 548036233, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3424892835, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3120042828, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3426269137, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2460520549, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3878346342, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 947651647, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 4236554734, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1248753945, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
				{
					iVar0 = 3;
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2355588846, 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3424892835, 0)) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2481756905, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4205963378, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 3547108821, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 4236554734, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 2887353267, 0))) || (iVar2 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0)))
			{
				if ((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != 4294967295)
					{
						iVar10 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILE::_0x017568A8182D98A6(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != 1849449579)
								{
									iVar0 = func_473(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 2575628572, 0))
			{
				if ((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_579(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B1F4
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_475(iParam0));
		if (iVar3 < 0)
		{
			return 4294967295;
		}
		iVar4 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_474(iParam0, func_603(iParam2)));
		if (iVar8 < 0)
		{
			return 4294967295;
		}
		if ((iParam0 == Global_115E3.f_1A[iParam2] && iParam1 == Global_115E3[iParam2]) && Global_115E3.f_D[iParam2] != 0)
		{
			return Global_115E3.f_D[iParam2];
		}
		iVar9 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_603(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar6, &Var5);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_115E3.f_D[iParam2] = Var5.f_1;
					Global_115E3[iParam2] = iParam1;
					Global_115E3.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 4294967295;
}

int func_580(int iParam0, int iParam1)//Position - 0x3B350
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return 4294967197;
	}
	iVar0 = func_603(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_581(iParam0, iVar1, iVar2, iParam1);
}

int func_581(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B3B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_603(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 4294967197;
}

void func_582(int iParam0)//Position - 0x3B434
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
	bool bVar14;
	struct<5> Var15;
	int iVar16;
	int iVar17;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILE::_0x341DE7ED1D2A1BFD(iVar9, 3977318242, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar9, 2405067007, 0))
	{
		if (!func_585(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (func_584(iVar9, 0, 0, &iVar16))
			{
				FILE::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3478539067, 0) && iVar13 != 3190685133)
						{
							FILE::GET_SHOP_PED_COMPONENT(3190685133, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3773427298, 0) && iVar13 != 326501576)
						{
							FILE::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 604028170, 0))
						{
							FILE::GET_SHOP_PED_COMPONENT(2525593565, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3478539067, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILE::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3773427298, 0))
					{
						if (iVar13 != 3773766511)
						{
							FILE::GET_SHOP_PED_COMPONENT(3773766511, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar16, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar16, 604028170, 0))
					{
						FILE::GET_SHOP_PED_COMPONENT(4227998864, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iVar9, 3977318242, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar9, 1569775397, 0))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iVar12, 4075571410, 1))
		{
			if (func_584(iVar9, 1, 0, &iVar17))
			{
				FILE::GET_SHOP_PED_COMPONENT(iVar17, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3478539067, 0) && iVar13 != 3190685133)
						{
							FILE::GET_SHOP_PED_COMPONENT(3190685133, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3773427298, 0) && iVar13 != 326501576)
						{
							FILE::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar17, 604028170, 0))
						{
							FILE::GET_SHOP_PED_COMPONENT(2525593565, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILE::_0x341DE7ED1D2A1BFD(iVar13, 2807284209, 0))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3478539067, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILE::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3773427298, 0))
					{
						if (iVar13 != 3773766511)
						{
							FILE::GET_SHOP_PED_COMPONENT(3773766511, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar17, 3874407143, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar17, 604028170, 0))
					{
						FILE::GET_SHOP_PED_COMPONENT(4227998864, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iVar11, 391733089, 0) || func_583(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_585(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
			{
				FILE::GET_SHOP_PED_COMPONENT(1241116144, &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILE::GET_SHOP_PED_COMPONENT(3322209301, &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			FILE::GET_SHOP_PED_COMPONENT(3927116339, &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILE::GET_SHOP_PED_COMPONENT(555191698, &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_583(int iParam0, int iParam1)//Position - 0x3B9D9
{
	if (iParam1 == 4294967295)
	{
		iParam1 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 572416369, 0))
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 4098852308, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_584(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3BA47
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam3 = 4294967295;
	iVar0 = FILE::_0xC17AD0E5752BECDA(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILE::GET_VARIANT_COMPONENT(iParam0, iVar1, uParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *uParam3 != 0) && *uParam3 != 1849449579) && iParam1 == FILE::_0x341DE7ED1D2A1BFD(*uParam3, 2405067007, 0)) && iParam2 == FILE::_0x341DE7ED1D2A1BFD(*uParam3, 2969823551, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_585(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3BACB
{
	int iVar0;
	
	*iParam1 = 0;
	if (iParam2 == 4294967295)
	{
		iParam2 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == 4294967295)
	{
		iParam3 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == 4294967295)
	{
		iParam4 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3977318242, 0))
	{
		if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 32905942, 0))
		{
			if (!FILE::_0x341DE7ED1D2A1BFD(iParam4, 605826125, 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != 4294967295)
			{
				return 0;
			}
			if ((!FILE::_0x341DE7ED1D2A1BFD(iParam3, 72391838, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam3, 2885519275, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iParam4, 605826125, 1))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 629327198, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 3602135069, 0))
					{
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
			if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3106812971, 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != 4294967295)
			{
				return 0;
			}
			if ((!FILE::_0x341DE7ED1D2A1BFD(iParam3, 72391838, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam3, 2885519275, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!FILE::_0x341DE7ED1D2A1BFD(iParam2, 572416369, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case 3808240745:
			case 219052171:
			case 3262899047:
			case 3566307218:
			case 3444275478:
			case 3750895011:
			case 2483783319:
			case 3183663621:
			case 116190296:
			case 3012293826:
			case 3358858774:
			case 3623730601:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case 2428907319:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case 3465400232:
			case 4164363006:
			case 3914958147:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case 2497041453:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case 3622558296:
			case 2318253789:
			case 2392687100:
			case 4179023821:
			case 1684425644:
			case 1983115079:
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILE::_0x341DE7ED1D2A1BFD(iParam2, 4098852308, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3076918706, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case 2553868378:
			case 2934578540:
			case 3164387537:
			case 3365785811:
			case 3730570319:
			case 3980433944:
			case 48874858:
			case 335112073:
			case 643009597:
			case 931540642:
			case 1886036076:
			case 2877527709:
			case 2514643803:
			case 955888011:
			case 691999254:
			case 1549695060:
			case 1319689449:
			case 4036632797:
			case 3796599872:
			case 346089706:
			case 1038236244:
			case 1731071211:
			case 1365303633:
			case 209639294:
			case 3872295966:
			case 805478037:
			case 2679456994:
			case 1527692182:
			case 2211482905:
			case 2922766819:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case 4132368924:
			case 3901904547:
			case 2063387500:
			case 1633785910:
			case 3420056881:
			case 3054551455:
			case 4970004:
			case 2599488352:
			case 3844546507:
			case 257455149:
			case 1098963073:
			case 4090412314:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case 4164294133:
			case 1595499458:
			case 1424510816:
			case 2608749707:
			case 415037286:
			case 1095714954:
			case 2910291552:
			case 3691602819:
			case 423419373:
			case 3349461690:
			case 4106294518:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case 3755509153:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case 2343560157:
			case 1109577920:
			case 1943254053:
			case 3588716619:
			case 3361004838:
			case 2065187502:
			case 2143125494:
			case 3566109766:
			case 113895612:
			case 4188294769:
			case 2620625809:
			case 2868326684:
			case 2678856326:
			case 3469408451:
			case 3232193660:
			case 1680712586:
			case 731446975:
			case 2853272486:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case 3892082555:
			case 1982600156:
			case 2339782256:
			case 2572147235:
			case 519431533:
			case 1338441322:
			case 4197496693:
			case 3001886959:
			case 2762968180:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case 2281820961:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case 3157856030:
			case 316882033:
			case 590699797:
			case 3909052586:
			case 2397090922:
			case 3433181168:
			case 3661351715:
			case 2996238986:
			case 2019526172:
			case 4138336919:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case 2418260542:
			case 2647184776:
			case 2900849605:
			case 977702533:
			case 3624874919:
			case 3386873672:
			case 1219695857:
			case 1919117393:
			case 3759976986:
			case 445654672:
			case 329262298:
			case 22970455:
			case 3818565953:
			case 3588691418:
			case 3180581939:
			case 3454957199:
			case 2246963778:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case 2930623425:
			case 721974080:
			case 4249458627:
			case 1998385862:
			case 1222776401:
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2885519275, 0) && !func_658(iVar0, 14, func_595(iParam0, 14, 0), 4294967295))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_586(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3C3D0
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
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	
	iVar0 = 4294967197;
	if (iParam4 == 2)
	{
		func_587(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_580(iParam0, 8);
					iVar15 = func_579(iParam1, iVar2, 8, 3);
					iVar16 = func_569(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILE::_0x341DE7ED1D2A1BFD(iVar15, 1965569012, 0)))
					{
						iVar0 = 4294967197;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						bVar17 = true;
						if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 19149565, 0))
						{
							iVar2 = func_580(iParam0, 8);
							iVar18 = func_579(iParam1, iVar2, 8, 3);
							iVar19 = func_569(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILE::_0x341DE7ED1D2A1BFD(iVar18, 1965569012, 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_473(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_579(iParam1, iParam3, 8, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_579(iParam1, iParam3, 10, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = 4294967295;
				if (iParam3 >= 237)
				{
					iVar20 = func_569(func_579(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_580(iParam0, 8);
					iVar21 = func_579(iParam1, iVar2, 8, 3);
					iVar22 = func_569(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = func_579(iParam1, iParam3, 6, 3);
						if (iVar14 != 4294967295)
						{
							iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_473(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar23 = 4294967295;
				iVar24 = 4294967295;
				if (iParam3 >= 92)
				{
					iVar24 = func_579(iParam1, iParam3, 7, 3);
					iVar23 = func_569(iVar24);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar23 == 10) || iVar23 == 11) || iVar23 == 12) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 2344027589, 0))) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 2923543492, 0))) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 3374433204, 0)))
				{
					iVar2 = func_580(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = func_579(iParam1, iVar2, 8, 3);
						iVar25 = func_569(iVar14);
						bVar26 = FILE::_0x341DE7ED1D2A1BFD(iVar14, 651155766, 0);
						if (((iVar25 == 3 || iVar25 == 7) || iVar25 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
						{
							if (iVar14 != 4294967295)
							{
								iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar26) || (iVar7 == 10 && bVar26))
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_473(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 3916060468, 0)) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 3599263835, 0))) || (iParam3 >= 92 && FILE::_0x341DE7ED1D2A1BFD(iVar24, 4186639197, 0)))
				{
					iVar14 = func_579(iParam1, iVar2, 8, 3);
					iVar27 = func_569(iVar14);
					bVar28 = FILE::_0x341DE7ED1D2A1BFD(iVar14, 651155766, 0);
					if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						if (iVar14 != 4294967295)
						{
							iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_473(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = func_579(iParam1, iParam3, 7, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_579(iParam1, iParam3, 10, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 6, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar29 = 4294967295;
				iVar30 = 4294967295;
				if (iParam3 >= 92)
				{
					iVar30 = func_579(iParam1, iParam3, 7, 3);
					iVar29 = func_569(iVar30);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || FILE::_0x341DE7ED1D2A1BFD(iVar30, 3374433204, 0))
				{
					iVar31 = func_580(iParam0, 11);
					if (iVar31 >= 237)
					{
						iVar14 = func_579(iParam1, iVar31, 11, 3);
						if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 1847239679, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
						{
							if (iVar14 != 4294967295)
							{
								iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_473(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_579(iParam1, iParam3, 10, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar32 = func_580(iParam0, 11);
				if (iVar32 >= 237)
				{
					iVar14 = func_579(iParam1, iVar32, 11, 3);
					if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 1847239679, 0) && FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						iVar14 = func_579(iParam1, iParam3, 11, 3);
						if (iVar14 != 4294967295)
						{
							iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_473(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_579(iParam1, iParam3, 14, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 4, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_579(iParam1, iParam3, 14, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 6, 3);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_579(iParam1, iParam3, 1, 3);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 3);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 6, 3);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_579(iParam1, iParam3, 10, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4294967197;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar33 = 4294967295;
				if (iParam3 >= 55)
				{
					iVar33 = func_579(iParam1, iParam3, 7, 4);
				}
				if ((iVar33 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar33, 3374433204, 0)) || (iVar33 != 4294967295 && FILE::_0x341DE7ED1D2A1BFD(iVar33, 1537081084, 0)))
				{
					iVar14 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar34 = false;
					if (FILE::_0x341DE7ED1D2A1BFD(iVar33, 3916060468, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar33, 4186639197, 0))
					{
						if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 2380584066, 0))
						{
							bVar34 = true;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						bVar34 = true;
					}
					if (bVar34)
					{
						iVar12 = FILE::_0xC17AD0E5752BECDA(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILE::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_579(iParam1, iParam3, 10, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 6, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 4, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_579(iParam1, iParam3, 10, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_579(iParam1, iParam3, 14, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_579(iParam1, iParam3, 14, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 6, 4);
					if (iVar14 != 4294967295)
					{
						iVar3 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILE::_0x017568A8182D98A6(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_579(iParam1, iParam3, 1, 4);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 11, 4);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_579(iParam1, iParam3, 6, 4);
					if (iVar14 != 4294967295)
					{
						iVar8 = unk_0xB46507D36092CDFB(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILE::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_473(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_587(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3E2B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = 4294967197;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_474(iParam1, 1))
					{
						func_615(iParam1, 1, iParam3, 4294967295);
						if (Global_280005 == 2543240862)
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_580(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_579(iParam1, iVar0, 1, 3);
						if (FILE::_0x341DE7ED1D2A1BFD(iVar1, 3106812971, 0))
						{
							iVar1 = func_579(iParam1, iParam3, 1, 3);
							if (iVar1 != 4294967295)
							{
								iVar2 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILE::_0x017568A8182D98A6(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != 1849449579)
										{
											*iParam4 = func_473(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_474(iParam1, 1))
					{
						func_615(iParam1, 1, iParam3, 4294967295);
						if (Global_280005 == 2543240862)
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_580(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_579(iParam1, iVar7, 1, 4);
						if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 3106812971, 0))
						{
							iVar8 = func_579(iParam1, iParam3, 1, 4);
							if (iVar8 != 4294967295)
							{
								iVar9 = FILE::_GET_NUM_FORCED_COMPONENTS(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILE::_0x017568A8182D98A6(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != 1849449579)
										{
											*iParam4 = func_473(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != 4294967197)
	{
		func_157(753, iParam3, Global_11566, 1, 0);
		func_157(754, iParam2, Global_11566, 1, 0);
		return 1;
	}
	return 0;
}

void func_588(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3E57C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_590(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (func_574(iVar0, iParam2, 4294967295))
				{
					iParam1 = 8;
					iParam2 = func_580(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_580(iParam0, 11);
				if (!func_574(iVar0, iVar1, 4294967295))
				{
					return;
				}
			}
			func_560(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_566(iVar0, iParam2, 13) && !func_566(iVar0, iParam2, 14)) && !func_566(iVar0, iParam2, 15)) && !func_566(iVar0, iParam2, 16)) && !func_566(iVar0, iParam2, 71)) && !func_566(iVar0, iParam2, 72))
				{
					func_560(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_557(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != 4294967295)
			{
				if (iParam3 == 1)
				{
					func_589(iParam0, iVar2, 0);
				}
				else
				{
					func_592(iVar2, 1, Global_11566);
				}
			}
		}
	}
}

void func_589(int iParam0, int iParam1, int iParam2)//Position - 0x3E6AC
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != 4294967295)
		{
			iVar0 = func_558(iParam0);
			if (!func_547(iParam1, 4294967295) || iParam2)
			{
				if (func_540(&Var1, iParam1, iVar0, iParam0, 4294967295))
				{
					PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					func_522(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

int func_590(int iParam0)//Position - 0x3E70B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != func_11() && func_591(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_595(iParam0, 11, 4294967295);
				if (iVar1 >= 237)
				{
					iVar2 = func_579(joaat("mp_m_freemode_01"), iVar1, 11, 3);
					if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
					{
						return 1;
					}
					else if ((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 310055897, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 606713654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 1831422288, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3456830450, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 655638019, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 83294665, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar2, 3597311137, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1148412551, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2508519779, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 1148412551, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar2, 2170337719, 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != func_11() && func_591(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_595(iParam0, 11, 4294967295);
				if (iVar3 >= 237)
				{
					iVar4 = func_579(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))
					{
						return 1;
					}
					else if ((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar4, 201427653, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 970679185, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 83294665, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 382246252, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 4195902460, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 198641529, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3896754259, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar4, 3988198483, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 1148412551, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2508519779, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 1148412551, 0))
					{
						return 1;
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_591(int iParam0)//Position - 0x3EA55
{
	return func_82(iParam0, 10);
}

void func_592(int iParam0, bool bParam1, int iParam2)//Position - 0x3EA65
{
	if (bParam1)
	{
		if (!func_547(iParam0, iParam2))
		{
			func_593(iParam0, 1, iParam2);
		}
	}
	else if (func_547(iParam0, iParam2))
	{
		func_593(iParam0, 0, iParam2);
	}
}

void func_593(int iParam0, bool bParam1, int iParam2)//Position - 0x3EA9E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_548(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > 4294967295)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_526(iVar1));
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, func_526(iVar1));
		}
		if (!func_172())
		{
			func_157(func_549(iParam0), iVar0, iParam2, 1, 0);
		}
	}
}

{
	int iVar0;
	
	{
	}
	{