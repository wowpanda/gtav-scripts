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
	int iLocal_98[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<123> Local_100 = { 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<5> Local_104[32];
	int iLocal_105 = 0;
	struct<18> Local_106[32];
	vector3 vLocal_107[32] = {{ 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f }, { 0f, NaNf, 0f } };
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	struct<21> Local_115[1];
	struct<2> Local_116 = { 0, 0 } ;
	struct<129> Local_117[1];
	struct<42> Local_118[32];
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
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 1;
	var uLocal_156 = 0;
	var uLocal_157 = 32;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = -1;
	var uLocal_162 = 0;
	var uLocal_163 = -1;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = -1;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = -1;
	var uLocal_178 = 0;
	var uLocal_179 = -1;
	var uLocal_180 = 0;
	var uLocal_181 = -1;
	var uLocal_182 = 0;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = -1;
	var uLocal_186 = 0;
	var uLocal_187 = -1;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = -1;
	var uLocal_204 = 0;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = 0;
	var uLocal_211 = -1;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = -1;
	var uLocal_216 = 0;
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = -1;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = -1;
	var uLocal_229 = -1;
	var uLocal_230 = -1;
	var uLocal_231 = -1;
	var uLocal_232 = -1;
	var uLocal_233 = 32;
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
	var uLocal_569 = 0;
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
	var uLocal_591 = 0;
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
	var uLocal_633 = 0;
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
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	int iLocal_660 = 0;
	var uLocal_661 = 0;
	vector3 vLocal_662 = { 0f, 0f, 0f };
	float fLocal_663 = 0f;
	int iLocal_664 = 0;
	struct<12> Local_665 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_666 = 0;
	bool bLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	var uLocal_670 = 0;
	struct<21> Local_671 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
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
	iLocal_660 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1448(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1434(ScriptParam_671);
	}
	else
	{
		func_1408();
	}
	while (true)
	{
		func_1407();
		if (func_1401())
		{
			func_1408();
		}
		if (func_1398(27))
		{
			func_1408();
		}
		if (func_1397())
		{
			func_1408();
		}
		iLocal_660 = -1;
		if (MISC::IS_BIT_SET(iLocal_651, PLAYER::PLAYER_ID()))
		{
			if (MISC::IS_BIT_SET(iLocal_652, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_1395(PLAYER::PLAYER_ID()))
				{
					iLocal_660 = NETWORK::PARTICIPANT_ID_TO_INT();
				}
				else if (func_1394() && !func_1393())
				{
					iVar0 = func_1391();
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iLocal_660 = iVar2;
						}
					}
				}
			}
		}
		func_1370();
		if (func_1369() < 3)
		{
			if (func_1366(2, 0, 1, 0, 0))
			{
				MISC::SET_BIT(&iLocal_105, 21);
				func_1330(-1);
				func_1408();
			}
		}
		func_1291();
		func_1282();
		func_1279();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1264();
		}
		func_1247();
		switch (func_1246(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1245() == 1 && Local_100.f_116 != 8)
				{
					func_1238(139, Local_100.f_116, 0, 0);
					func_1237(1);
				}
				else if (func_1245() == 4)
				{
					func_1237(4);
				}
				break;
			
			case 1:
				if (func_1245() == 1)
				{
					func_14();
				}
				else if (func_1245() == 4)
				{
					func_13(&(Local_100.f_4));
					func_1237(3);
				}
				break;
			
			case 3:
				if (func_12(&(Local_100.f_4)))
				{
					if (func_11(&(Local_100.f_4)))
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					func_1237(4);
				}
				break;
			
			case 2:
				func_1237(4);
			
			case 4:
				func_1408();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1245())
			{
				case 0:
					func_10(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_1264();
	switch (func_1369())
	{
		case 0:
			func_9(&(Local_100.f_1.f_1), 0, 0);
			func_8(1);
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (func_7(iVar0))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 1)
			{
				func_8(2);
			}
			break;
		
		case 2:
			if (func_12(&(Local_100.f_1.f_1)))
			{
				if (func_6())
				{
					func_8(3);
				}
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(Local_100.f_115, 2))
			{
				if (func_5(iVar0) != -1)
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_2(iVar0, 0, 0);
						iVar0++;
					}
				}
				MISC::SET_BIT(&(Local_100.f_115), 2);
			}
			else if (MISC::IS_BIT_SET(Local_100.f_115, 2))
			{
				if (MISC::IS_BIT_SET(Local_100.f_115, 1))
				{
					func_8(4);
				}
			}
			break;
		
		case 4:
			func_8(5);
			break;
		
		case 5:
			func_10(4);
			break;
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	if (func_12(&(Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/])))
	{
		Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/].f_2 = (Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/].f_2 + func_4(&(Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/]), 0, 0));
		func_3(&(Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/]));
	}
	if (bParam2)
	{
		if (!func_12(&(Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/])))
		{
			func_9(&(Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/]), 0, 0);
		}
	}
	if (bParam1)
	{
		Local_100.f_6[iParam0 /*107*/].f_9[func_5(iParam0) /*3*/].f_2++;
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

int func_5(int iParam0)
{
	return Local_100.f_6[iParam0 /*107*/].f_2;
}

int func_6()
{
	if (func_4(&(Local_100.f_1.f_1), 0, 0) >= Global_262145.f_10511)
	{
		return 1;
	}
	return 0;
}

bool func_7(int iParam0)
{
	return MISC::IS_BIT_SET(Local_116, iParam0);
}

void func_8(int iParam0)
{
	Local_100.f_1 = iParam0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
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

void func_10(int iParam0)
{
	Local_100 = iParam0;
}

int func_11(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	char* sVar12;
	bool bVar13;
	
	if (func_7(0))
	{
		if (!func_1236(0))
		{
			func_1215(139, ENTITY::GET_ENTITY_COORDS(func_1235(0), 0), &uLocal_670, SYSTEM::TO_FLOAT(Global_262145.f_10838), 1148846080, iLocal_668);
		}
	}
	func_1186();
	func_1185();
	func_1183();
	func_1182();
	func_1181();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_546(&(Local_100.f_6[iVar0 /*107*/]), &uLocal_656, &uLocal_658, 0);
		iVar0++;
	}
	if (func_522(0, 1))
	{
		func_521();
	}
	if (func_519())
	{
		func_389(0);
	}
	switch (func_1369())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Local_100.f_115, 0))
			{
				if (!MISC::IS_BIT_SET(iLocal_105, 0))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!func_388())
						{
							if (!func_522(0, 0))
							{
								if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (MISC::IS_BIT_SET(iLocal_651, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
									{
										if (!MISC::IS_BIT_SET(iLocal_653, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
										{
											func_387("HTP_INITHELP", 30000);
											func_386(0);
											MISC::SET_BIT(&iLocal_105, 0);
											AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_105, 0))
			{
				MISC::SET_BIT(&iLocal_105, 0);
			}
			fVar1 = 99999.9f;
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (MISC::IS_BIT_SET(iLocal_105, 13) && func_5(iVar0) != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (!MISC::IS_BIT_SET(iLocal_105, 16))
					{
						func_385(63);
						MISC::SET_BIT(&iLocal_105, 16);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_105, 16))
				{
					MISC::CLEAR_BIT(&iLocal_105, 16);
				}
				if (func_7(iVar0))
				{
					if (!func_1236(iVar0))
					{
						if (func_384(iVar0) == 3)
						{
							if (func_383("HTP_NEARHELP") || func_383("HTP_INITHELP"))
							{
								HUD::CLEAR_HELP(1);
							}
						}
						if (!MISC::IS_BIT_SET(iLocal_105, 17))
						{
							ENTITY::SET_ENTITY_LOD_DIST(func_1235(iVar0), 150);
							MISC::SET_BIT(&iLocal_105, 17);
						}
						fVar2 = SYSTEM::VDIST(func_382(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(func_1235(iVar0), 1));
						if (fVar2 < fVar1)
						{
							iVar3 = iVar0;
							fVar1 = fVar2;
						}
						func_234(iVar0);
						func_215(iVar0);
						func_213(iVar0);
						func_207(iVar0);
						if (func_5(iVar0) != -1)
						{
							if (iLocal_660 != -1)
							{
								if (func_206(iLocal_660, iVar0))
								{
									if (MISC::IS_BIT_SET(iLocal_105, 19))
									{
										MISC::CLEAR_BIT(&iLocal_105, 19);
									}
									if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (Local_665.f_11 == 0)
										{
											Local_665.f_11 = NETWORK::_GET_POSIX_TIME();
										}
									}
									if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!func_202(1, 0))
										{
											if (!MISC::IS_BIT_SET(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 3))
											{
												MISC::SET_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 3);
											}
										}
									}
									if (!func_522(1, 0))
									{
										func_199("HTP_HOLD_PCK", 0);
									}
									else
									{
										func_198();
									}
									if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!MISC::IS_BIT_SET(iLocal_105, 1))
										{
											if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												if (!func_388())
												{
													if (MISC::IS_BIT_SET(iLocal_105, 6))
													{
														if (!func_197(63))
														{
															if (!func_522(0, 0))
															{
																if (MISC::IS_BIT_SET(iLocal_651, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
																{
																	if (!MISC::IS_BIT_SET(iLocal_653, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
																	{
																		func_387("HTP_HOLDHELP", 30000);
																		func_386(1);
																		MISC::SET_BIT(&iLocal_105, 1);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iVar0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(func_1235(iVar0), false, 0);
										OBJECT::_0x867458251D47CCB2(func_1235(iVar0), true);
									}
									if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!func_202(1, 0))
										{
											if (!MISC::IS_BIT_SET(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
											{
												MISC::SET_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 1);
												if (!func_195(PLAYER::PLAYER_ID()))
												{
													func_194(139);
												}
												func_186(1);
											}
										}
									}
									if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!Global_1573339)
										{
											Global_1573339 = 1;
										}
									}
								}
								else
								{
									if (func_5(iVar0) != NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_388())
											{
												if (!func_197(63))
												{
													if (!func_522(0, 0))
													{
														if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (MISC::IS_BIT_SET(iLocal_651, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
															{
																if (!MISC::IS_BIT_SET(iLocal_653, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
																{
																	if (MISC::IS_BIT_SET(iLocal_105, 6))
																	{
																		if (!func_184(PLAYER::PLAYER_ID(), func_185(iVar0)))
																		{
																			if (!MISC::IS_BIT_SET(iLocal_105, 2))
																			{
																				func_387("HTP_HOLDHELP2", 30000);
																				func_386(1);
																				MISC::SET_BIT(&iLocal_105, 2);
																			}
																		}
																		else if (!MISC::IS_BIT_SET(iLocal_105, 3))
																		{
																			func_161("HTP_HOLDHELP2b", func_183(), 1, "HTP_PROPBLIP", func_162(PLAYER::PLAYER_ID(), -2, 0, 0), -1);
																			func_386(1);
																			MISC::SET_BIT(&iLocal_105, 3);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										if (!func_522(0, 0))
										{
											if (!MISC::IS_BIT_SET(iLocal_105, 19))
											{
												AUDIO::PLAY_SOUND_FRONTEND(-1, "Object_Collect_Remote", "GTAO_FM_Events_Soundset", false);
												MISC::SET_BIT(&iLocal_105, 19);
											}
										}
									}
									else if (MISC::IS_BIT_SET(iLocal_105, 19))
									{
										MISC::CLEAR_BIT(&iLocal_105, 19);
									}
									if (iLocal_660 != -1)
									{
										if (((MISC::IS_BIT_SET(Local_104[iLocal_660 /*5*/].f_4, 10) || func_160(iLocal_660)) && MISC::IS_BIT_SET(iLocal_652, func_5(iVar0))) && !func_522(1, 0))
										{
											if (func_184(PLAYER::PLAYER_ID(), func_185(iVar0)))
											{
												func_157("HPT_OTHLDRb", func_185(iVar0), "HPT_PROPNAME", 1, func_162(PLAYER::PLAYER_ID(), -2, 0, 0), 0);
											}
											else
											{
												func_146("HPT_OTHLDR", &(Local_106[func_5(iVar0) /*18*/].f_2), 0, 1);
											}
										}
										else
										{
											func_198();
										}
									}
									if (Global_1573339)
									{
										Global_1573339 = 0;
									}
								}
							}
							else
							{
								func_198();
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(iLocal_105, 19))
							{
								MISC::CLEAR_BIT(&iLocal_105, 19);
							}
							if (iLocal_660 != -1)
							{
								if ((func_160(iLocal_660) && MISC::IS_BIT_SET(Local_100.f_115, 3)) && !func_522(1, 0))
								{
									func_199("HPT_GETCASE", 0);
								}
								else
								{
									func_198();
								}
							}
							else
							{
								func_198();
							}
						}
						if (MISC::IS_BIT_SET(Local_100.f_115, 3))
						{
							if (!MISC::IS_BIT_SET(iLocal_105, 26))
							{
								func_120(139, 0f, 0f, 0, 0, 0, 0);
								MISC::SET_BIT(&iLocal_105, 26);
							}
							if (!MISC::IS_BIT_SET(iLocal_105, 5))
							{
								if (iLocal_660 != -1)
								{
									if (MISC::IS_BIT_SET(iLocal_651, Local_106[iLocal_660 /*18*/].f_1))
									{
										if (!MISC::IS_BIT_SET(iLocal_653, Local_106[iLocal_660 /*18*/].f_1))
										{
											if (!func_522(0, 0))
											{
												if (func_5(iVar0) != -1)
												{
													sVar4 = "HPT_STRAP2";
													if (func_184(PLAYER::PLAYER_ID(), func_185(iVar0)))
													{
														sVar4 = "HPT_STRAP2GN";
													}
													if (func_5(iVar0) != iLocal_660)
													{
														func_118(63, sVar4, PLAYER::GET_PLAYER_NAME(func_185(iVar0)), func_119(), -1, "HTP_START", func_119());
													}
													else
													{
														func_117(63, "HTP_START2", "HPT_STRAP1", func_119(), -1, func_119());
														MISC::SET_BIT(&iLocal_105, 13);
														MISC::SET_BIT(&iLocal_105, 14);
													}
												}
												else
												{
													func_117(63, "HTP_START", "HPT_STRAP3", func_119(), -1, func_119());
												}
												MISC::SET_BIT(&iLocal_105, 5);
											}
										}
									}
								}
							}
							else if (!MISC::IS_BIT_SET(iLocal_105, 6))
							{
								if (func_197(63))
								{
									MISC::SET_BIT(&iLocal_105, 6);
								}
							}
							else if (iLocal_660 != -1)
							{
								if (func_5(iVar0) == iLocal_660)
								{
									if (!MISC::IS_BIT_SET(iLocal_105, 13))
									{
										if (!func_522(0, 0))
										{
											if (MISC::IS_BIT_SET(iLocal_651, Local_106[iLocal_660 /*18*/].f_1))
											{
												if (!MISC::IS_BIT_SET(iLocal_653, Local_106[iLocal_660 /*18*/].f_1))
												{
													func_117(63, "HTP_START2", "HPT_STRAP1", 1, -1, 2);
													MISC::SET_BIT(&iLocal_105, 13);
												}
											}
										}
									}
									else if (!MISC::IS_BIT_SET(iLocal_105, 14))
									{
										if (func_197(63))
										{
											MISC::SET_BIT(&iLocal_105, 14);
										}
									}
								}
								else
								{
									if (MISC::IS_BIT_SET(iLocal_105, 13))
									{
										MISC::CLEAR_BIT(&iLocal_105, 13);
									}
									if (MISC::IS_BIT_SET(iLocal_105, 14))
									{
										MISC::CLEAR_BIT(&iLocal_105, 14);
									}
								}
							}
							else
							{
								if (MISC::IS_BIT_SET(iLocal_105, 13))
								{
									MISC::CLEAR_BIT(&iLocal_105, 13);
								}
								if (MISC::IS_BIT_SET(iLocal_105, 14))
								{
									MISC::CLEAR_BIT(&iLocal_105, 14);
								}
							}
							func_389(iVar0);
							func_100(iVar0);
						}
					}
				}
				iVar0++;
			}
			if (!iVar3 == -1)
			{
				if (func_7(iVar3))
				{
					if (!func_1236(iVar3))
					{
						if (func_99(PLAYER::PLAYER_ID()) == 139)
						{
							func_73(iVar3);
						}
					}
				}
			}
			break;
		
		case 3:
			iVar6 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_71(iVar0);
				iVar0++;
			}
			func_198();
			func_521();
			if (MISC::IS_BIT_SET(Local_100.f_115, 2))
			{
				if (func_70())
				{
					sVar7 = "HPT_OVER";
					sVar8 = "HPT_FL_STR";
					iVar9 = -1;
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (iLocal_660 != -1)
						{
							if (MISC::IS_BIT_SET(iLocal_105, 4))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Local_117[iVar0 /*129*/][iVar5 /*4*/].f_3 > 0)
									{
										fVar11 = SYSTEM::TO_FLOAT(Local_117[iVar0 /*129*/][iVar5 /*4*/].f_3);
										fVar11 = (fVar11 / 1000f);
										Local_117[iVar0 /*129*/][iVar5 /*4*/].f_3 = SYSTEM::FLOOR(fVar11);
										Local_117[iVar0 /*129*/][iVar5 /*4*/].f_3 *= 1000;
									}
									if (Local_117[iVar0 /*129*/][iVar5 /*4*/] == iLocal_660)
									{
										if (Local_117[iVar0 /*129*/][iVar5 /*4*/].f_3 > 0)
										{
											iVar6 = iVar5;
											iVar9 = iVar5;
											switch (iVar5)
											{
												case 0:
													sVar8 = "HPT_1ST_STR";
													sVar7 = "HPT_WIN";
													bLocal_667 = true;
													break;
												
												case 1:
													sVar8 = "HPT_2ND_STR";
													bLocal_667 = true;
													break;
												
												case 2:
													sVar8 = "HPT_3RD_STR";
													bLocal_667 = true;
													break;
												}
											}
									}
									iVar5++;
								}
							}
						}
						func_389(iVar0);
						func_100(iVar0);
						if (Local_117[iVar0 /*129*/][0 /*4*/] == -1)
						{
							bVar10 = true;
						}
						else if (!MISC::IS_BIT_SET(iLocal_652, Local_117[iVar0 /*129*/][0 /*4*/]))
						{
							bVar10 = true;
						}
						else if (Local_117[iVar0 /*129*/][0 /*4*/].f_3 <= 0)
						{
							bVar10 = true;
						}
						iVar0++;
					}
					if (!MISC::IS_BIT_SET(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_105, 7))
						{
							iVar0 = 0;
							while (iVar0 < 1)
							{
								if (!MISC::IS_BIT_SET(Local_100.f_115, 3))
								{
									if (!func_522(0, 0))
									{
										func_69("HTP_NOCLLCT", 1);
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iVar0)))
										{
											ENTITY::SET_ENTITY_VISIBLE(func_1235(iVar0), false, 0);
											OBJECT::_0x867458251D47CCB2(func_1235(iVar0), true);
										}
									}
								}
								else if (bVar10)
								{
									if (iLocal_660 != -1)
									{
										if (!func_522(0, 0))
										{
											if (MISC::IS_BIT_SET(iLocal_651, Local_106[iLocal_660 /*18*/].f_1))
											{
												if (!MISC::IS_BIT_SET(iLocal_653, Local_106[iLocal_660 /*18*/].f_1))
												{
													if (func_160(iLocal_660))
													{
														func_117(68, "HPT_OVER", "HPT_NOWIN", 1, 15000, 2);
													}
													else
													{
														func_69("HPT_NOWIN", 1);
													}
												}
											}
										}
									}
								}
								else if (bLocal_667)
								{
									if (iLocal_660 != -1)
									{
										if (!func_522(0, 0))
										{
											if (MISC::IS_BIT_SET(iLocal_651, Local_106[iLocal_660 /*18*/].f_1))
											{
												if (!MISC::IS_BIT_SET(iLocal_653, Local_106[iLocal_660 /*18*/].f_1))
												{
													if (func_160(iLocal_660))
													{
														func_68(69, Local_117[iVar0 /*129*/][iVar9 /*4*/].f_3, sVar8, sVar7, 1, 15000, -1082130432, 2);
													}
													else
													{
														func_67(sVar8, Local_117[iVar0 /*129*/][iVar9 /*4*/].f_3, 1);
													}
												}
											}
										}
									}
								}
								else if (iLocal_660 != -1)
								{
									if (!func_522(0, 0))
									{
										if (MISC::IS_BIT_SET(iLocal_651, Local_106[iLocal_660 /*18*/].f_1))
										{
											if (!MISC::IS_BIT_SET(iLocal_653, Local_106[iLocal_660 /*18*/].f_1))
											{
												sVar8 = "HPT_FL_STR";
												if (func_160(iLocal_660))
												{
													if (func_65(Local_117[iVar0 /*129*/][0 /*4*/].f_1, 1))
													{
														sVar12 = func_55(Local_117[iVar0 /*129*/][0 /*4*/].f_1);
													}
													else
													{
														sVar12 = PLAYER::GET_PLAYER_NAME(Local_117[iVar0 /*129*/][0 /*4*/].f_1);
													}
													func_39(77, Local_117[iVar0 /*129*/][0 /*4*/].f_3, sVar8, sVar12, sVar7, 1, 15000, 2);
												}
												else
												{
													func_27("HPT_OTH_1TCK", Local_117[iVar0 /*129*/][0 /*4*/].f_1, 1, Local_117[iVar0 /*129*/][0 /*4*/].f_3, 0, 0, 0, 1, 1, 0, 1);
												}
											}
										}
									}
								}
								iVar0++;
							}
							if (MISC::IS_BIT_SET(iLocal_651, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
							{
								if (!MISC::IS_BIT_SET(iLocal_653, Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
								{
									MISC::SET_BIT(&iLocal_105, 7);
								}
							}
						}
						else if (!MISC::IS_BIT_SET(iLocal_105, 8))
						{
							if (iLocal_660 != -1)
							{
								if ((((((((func_197(65) || func_197(69)) || func_197(77)) || func_197(68)) || !func_160(iLocal_660)) || func_522(1, 1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || !MISC::IS_BIT_SET(Local_100.f_115, 3)) || iLocal_660 == -1)
								{
									MISC::SET_BIT(&iLocal_105, 8);
								}
							}
							else
							{
								MISC::SET_BIT(&iLocal_105, 8);
							}
						}
						if (MISC::IS_BIT_SET(iLocal_105, 8))
						{
							func_1330(iVar6);
						}
					}
				}
				bVar13 = true;
				if (func_522(0, 0))
				{
					bVar13 = false;
				}
				if (!MISC::IS_BIT_SET(Local_100.f_115, 3))
				{
					bVar13 = false;
				}
				if (iLocal_660 == -1)
				{
					bVar13 = false;
				}
				if (func_15(&uLocal_108, bVar13) && MISC::IS_BIT_SET(iLocal_105, 8))
				{
					if (!func_388() || HUD::IS_PAUSE_MENU_ACTIVE())
					{
						MISC::SET_BIT(&iLocal_105, 15);
						if (MISC::IS_BIT_SET(iLocal_105, 9))
						{
							MISC::SET_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 0);
							func_1237(3);
						}
					}
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

int func_15(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_388()) && !(func_26(PLAYER::PLAYER_ID(), 0) && (func_25(PLAYER::PLAYER_ID()) || func_23(PLAYER::PLAYER_ID())))) && !func_20(PLAYER::PLAYER_ID()))
	{
		func_19();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_12(&(uParam0->f_3)))
			{
				func_9(&(uParam0->f_3), 0, 0);
			}
			else if (func_18(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1574409.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2512808.f_4553), 0);
					func_9(&(uParam0->f_5), 0, 0);
				}
				func_9(&(uParam0->f_1), 0, 0);
				func_17(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_12(&(uParam0->f_5)))
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
				func_16();
				func_17(uParam0, 2);
			}
			break;
		
		case 2:
			func_16();
			if (func_18(&(uParam0->f_1), 15000, 0))
			{
				if (func_383("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_17(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_18(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2512808.f_4553), 1);
				func_17(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2512808.f_4553), 1);
			return 1;
	}
	return 0;
}

void func_16()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2512808.f_778, 2)) && func_1448(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68215) && !Global_53084) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2512808.f_4553), 1);
			func_387("AMEV_LBD_HELP", -1);
			func_386(1);
			MISC::CLEAR_BIT(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
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

void func_19()
{
	Global_2458365 = 1;
}

int func_20(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_21(int iParam0)
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
	}
	return -1;
}

int func_22()
{
	return -1;
}

bool func_23(int iParam0)
{
	return func_24(iParam0, 19);
}

bool func_24(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_24(iParam0, 9);
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_27(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_37(&Var1));
		if (!bParam10)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam3, 7);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam3, 2055);
		}
		if (!bParam6)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2492157 = { func_36(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2492087, 35, &Global_2492157))
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2492087.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam8)
				{
					if (bParam9)
					{
						Var1 = { func_35(&Var1) };
					}
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, &Var1, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_28(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_28(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_34() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_31(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_29(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_30(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_31(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_32(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
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

int func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_33();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_33()
{
	return Global_1312736;
}

bool func_34()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_35(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_36(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_37(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_38(&cVar0);
}

var func_38(char[4] cParam0)
{
	return cParam0;
}

int func_39(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_54(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_24), sParam3, 64);
	Var0.f_70 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_71 = iParam7;
	return func_40(&Var0);
}

int func_40(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_53(uParam0, uParam0->f_16);
	func_51(uParam0);
	if (func_50())
	{
		func_51(uParam0);
	}
	if (func_49(uParam0->f_1))
	{
		func_42();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_42();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_41(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0)
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

void func_42()
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_43();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_43()
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_47(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_44(&(Global_2436181.f_2912.f_1));
}

void func_44(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71125)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_46(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_45(0);
}

void func_45(int iParam0)
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71104, 0);
}

void func_47(var uParam0)
{
	func_48(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_48(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_49(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_50()
{
	return Global_2447174.f_16;
}

void func_51(var uParam0)
{
	if (func_52(uParam0->f_1))
	{
		uParam0->f_71 = func_119();
	}
}

int func_52(int iParam0)
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

void func_53(var uParam0, int iParam1)
{
	if (func_52(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_22() || !func_1448(iParam1, 0, 1))
	{
		return;
	}
	if (func_41(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_162(iParam1, -2, 0, 0);
		}
	}
}

void func_54(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_22();
	uParam1->f_17 = func_22();
	uParam1->f_18 = func_22();
	uParam1->f_19 = func_22();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

char* func_55(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_64(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_115)
	{
		sVar0 = func_59(iParam0, 0);
		return sVar0;
	}
	if (((func_24(iParam0, 28) || func_24(PLAYER::PLAYER_ID(), 28)) || func_58(iParam0)) && !func_57(iParam0))
	{
		return func_59(iParam0, 0);
	}
	iVar1 = func_56(iParam0);
	if (iVar1 != func_22())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_59(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_22())
	{
		sVar0 = func_64(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_59(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_56(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_22();
}

int func_57(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_36(iParam0) };
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

int func_58(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_22())
	{
		Var0 = { func_36(iParam0) };
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

char* func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_61(iParam0, 1))
		{
			return func_60();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_60()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_61(int iParam0, bool bParam1)
{
	return func_62(iParam0, bParam1, 1);
}

int func_62(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_63(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_22() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam0 != func_22())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_22())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_64(var uParam0)
{
	return uParam0;
}

bool func_65(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_66(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_22();
}

int func_66(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_22())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_67(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!bParam2)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 7);
	}
	else
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 2055);
	}
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_28(17, sParam0, 1, &sVar1, iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_68(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_54(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_70 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam7;
	return func_40(&Var0);
}

int func_69(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_28(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_70()
{
	return MISC::IS_BIT_SET(Global_1574409.f_1, 25);
}

void func_71(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(func_72(iParam0)))
	{
		if (!func_522(0, 0))
		{
			if (func_384(iParam0) == 3)
			{
				if (func_1369() == 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Object_Collect_Player", "GTAO_FM_Events_Soundset", false);
				}
			}
		}
		HUD::REMOVE_BLIP(&(Local_115[iParam0 /*21*/].f_3));
	}
}

var func_72(int iParam0)
{
	return Local_115[iParam0 /*21*/].f_3;
}

void func_73(int iParam0)
{
	if ((((func_160(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_522(1, 1)) && iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT()) && !func_92(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 1)) && !func_91(PLAYER::PLAYER_ID()))
	{
		func_86(10, 0, 0, 0, 0);
		func_78(ENTITY::GET_ENTITY_COORDS(func_1235(iParam0), 1), 0f, 250f, 1, 75f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
		func_77(ENTITY::GET_ENTITY_COORDS(func_1235(iParam0), 1), 1, 0);
		if (iLocal_668 == 0)
		{
			iLocal_668 = 1;
		}
	}
	else
	{
		func_76();
		func_74();
		if (iLocal_668)
		{
			iLocal_668 = 0;
		}
	}
}

void func_74()
{
	if (Global_2413426.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_75();
	}
}

void func_75()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413426 = { Var0 };
	Global_2413426.f_6 = -1;
}

void func_76()
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_77(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405047.f_44.f_49 = { vParam0 };
	Global_2405047.f_44.f_52 = iParam1;
	Global_2405047.f_44.f_53 = iParam2;
}

void func_78(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	else
	{
		Global_2413426.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413426.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_79(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413426 = { Var0 };
}

int func_79(int iParam0)
{
	if (((func_81(iParam0, 1) || func_195(iParam0)) || func_26(iParam0, 0)) || func_80(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (!func_1448(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

bool func_81(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_85(iParam0) != 0;
	}
	return func_82(iParam0, bParam1);
}

int func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_83(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_83(int iParam0)
{
	return func_84(iParam0);
}

bool func_84(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_85(int iParam0)
{
	if (func_1448(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436181.f_1777.f_690.f_16 != func_22())
	{
		if (MISC::IS_BIT_SET(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_87())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_87()
{
	if (((func_90(PLAYER::PLAYER_ID()) == 229 || func_90(PLAYER::PLAYER_ID()) == 191) || func_89()) || func_88())
	{
		return 0;
	}
	return 1;
}

bool func_88()
{
	return Global_1574307;
}

int func_89()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_91(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
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
		if (func_98(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_20(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_97(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_96(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_95(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_94(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_93(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_22())
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_95(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1[3];
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar5;
	
	if (iLocal_660 == -1)
	{
		return;
	}
	if (func_522(0, 0))
	{
		return;
	}
	iVar3 = (Global_262145.f_10511 + 1000 - func_4(&(Local_100.f_1.f_1), 0, 1));
	if (iVar3 < 0)
	{
		iVar3 = 0;
	}
	if (!MISC::IS_BIT_SET(Local_100.f_115, 3))
	{
		return;
	}
	if (iVar3 > 30000)
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 6;
	}
	if (!MISC::IS_BIT_SET(Local_104[iLocal_660 /*5*/].f_4, 10))
	{
		if (!func_160(iLocal_660))
		{
			func_114(iVar3, iVar5, func_115());
			return;
		}
	}
	func_113(iVar3);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1[iVar0] = -1;
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/] = -1;
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_1 = -1;
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_2 = func_22();
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/] = Local_117[iParam0 /*129*/][iVar0 /*4*/];
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_1 = Local_117[iParam0 /*129*/][iVar0 /*4*/].f_1;
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_2 = Local_117[iParam0 /*129*/][iVar0 /*4*/].f_2;
		Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_3 = Local_117[iParam0 /*129*/][iVar0 /*4*/].f_3;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1[iVar0] = Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_3;
		iVar4[iVar0] = 0;
		if (func_112(1))
		{
			if (Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_2 != func_22())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_2))
				{
					if (func_65(Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_2, 1))
					{
						iVar4[iVar0] = func_162(Local_115[iParam0 /*21*/].f_4[iVar0 /*4*/].f_2, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar2 = Local_100.f_6[iParam0 /*107*/].f_9[iLocal_660 /*3*/].f_2;
	if (func_5(iParam0) == iLocal_660 && !func_6())
	{
		iVar2 = (iVar2 + func_4(&(Local_100.f_6[iParam0 /*107*/].f_9[iLocal_660 /*3*/]), 0, 1));
	}
	func_102(Local_115[iParam0 /*21*/].f_4[0 /*4*/].f_2, Local_115[iParam0 /*21*/].f_4[1 /*4*/].f_2, Local_115[iParam0 /*21*/].f_4[2 /*4*/].f_2, iVar1[0], iVar1[1], iVar1[2], iVar2, iVar3, &uLocal_661, iVar5, func_115(), iVar4[0], iVar4[1], iVar4[2]);
	if (Local_117[0 /*129*/][0 /*4*/] == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (!MISC::IS_BIT_SET(iLocal_105, 20))
		{
			if (func_101(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&iLocal_105, 20);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_105, 20))
	{
		if (func_101(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&iLocal_105, 20);
	}
}

bool func_101(bool bParam0)
{
	return func_61(PLAYER::PLAYER_ID(), bParam0);
}

void func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, int iParam12, int iParam13)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_109(0) == 0)
	{
		return;
	}
	func_108();
	iVar1 = 0;
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_22())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_107(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_104(iParam3, &(Global_2457899[0 /*16*/]), 0, 0, -1, 0, 7, 1, 109, 0, 0, 0, 109, 0, iParam11, 0, 0);
		}
	}
	if (Global_2457893[1] != func_22())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_107(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_104(iParam4, &(Global_2457899[1 /*16*/]), 0, 0, -1, 0, 6, 1, 108, 0, 0, 0, 108, 0, iParam12, 0, 0);
		}
	}
	if (Global_2457893[2] != func_22())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_107(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_104(iParam5, &(Global_2457899[2 /*16*/]), 0, 0, -1, 0, 5, 1, 107, 0, 0, 0, 107, 0, iParam13, 0, 0);
		}
	}
	func_104(iParam6, "HUD_TIMEHELD", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar2 = "HUD_COUNTDOWN";
	if (!func_103(sParam10))
	{
		sVar2 = sParam10;
	}
	func_104(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
	*uParam8 = 0;
}

int func_103(char* sParam0)
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

void func_104(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_106(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_105(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_105(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_106(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1359035.f_6119[iParam0], iParam1);
}

struct<16> func_107(int iParam0, char* sParam1)
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

void func_108()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2458368 = 1;
}

int func_109(bool bParam0)
{
	if (func_111())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1448(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_110()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_196 != 0;
}

bool func_111()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

bool func_112(bool bParam0)
{
	return func_65(PLAYER::PLAYER_ID(), bParam0);
}

void func_113(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2512808.f_4695)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2512808.f_4695));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_2512808.f_4703 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
			Global_2512808.f_4693 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
		{
			if (MISC::IS_BIT_SET(Global_2512808.f_4693, 4))
			{
				if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 2))
				{
					if (AUDIO::_0x109697E2FFBAC8A1())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2512808.f_4695)))
						{
							StringCopy(&(Global_2512808.f_4695), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
							MISC::SET_BIT(&(Global_2512808.f_4693), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && MISC::IS_BIT_SET(Global_2512808.f_4693, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 1))
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
				MISC::SET_BIT(&(Global_2512808.f_4693), 1);
			}
			else if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::_0x0626A247D2405330())
						{
							StringCopy(&(Global_2512808.f_4695), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						MISC::SET_BIT(&(Global_2512808.f_4693), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 3))
				{
					Global_2512808.f_4703 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2512808.f_4703, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2512808.f_4693), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
			{
				Global_2512808.f_4693 = 0;
				Global_2512808.f_4703 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				MISC::SET_BIT(&(Global_2512808.f_4693), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::IS_BIT_SET(Global_2512808.f_4693, 2))
				{
					MISC::SET_BIT(&(Global_2512808.f_4693), 2);
					MISC::SET_BIT(&(Global_2512808.f_4693), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2512808.f_4693), 5);
					MISC::CLEAR_BIT(&(Global_2512808.f_4693), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
		{
			Global_2512808.f_4693 = 0;
			Global_2512808.f_4703 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			MISC::SET_BIT(&(Global_2512808.f_4693), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				MISC::SET_BIT(&(Global_2512808.f_4693), 2);
				MISC::SET_BIT(&(Global_2512808.f_4693), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2512808.f_4693), 2);
				MISC::CLEAR_BIT(&(Global_2512808.f_4693), 5);
			}
		}
	}
}

void func_114(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_109(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_103(sParam2))
	{
		sVar0 = sParam2;
	}
	func_104(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0);
}

char* func_115()
{
	return "HUD_COUNTDOWN";
	switch (func_99(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_116())
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

int func_116()
{
	if (func_99(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

int func_117(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_54(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_40(&Var0);
}

int func_118(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_54(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_24), sParam2, 64);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam6;
	return func_40(&Var0);
}

int func_119()
{
	return 21;
}

void func_120(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2512808.f_4703 = -1;
	bVar0 = (func_26(PLAYER::PLAYER_ID(), 0) && func_25(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_145(21, 1);
	}
	else
	{
		func_142(iParam0, -1);
		if (func_141(PLAYER::PLAYER_ID()))
		{
			Global_1574409.f_3 = iParam0;
		}
		else
		{
			func_194(iParam0);
		}
		Global_1574409.f_4 = -1;
		if (func_141(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574409.f_1), 5);
		}
		if ((func_140() && !func_139()) || func_138(PLAYER::PLAYER_ID(), 21))
		{
			MISC::SET_BIT(&(Global_1574409.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 17);
		MISC::SET_BIT(&(Global_1574409.f_1), 20);
		if (func_137(iParam0))
		{
			func_136();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_133(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (func_131(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			MISC::SET_BIT(&(Global_1574409.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_129(1);
				if (func_126(0))
				{
					MISC::SET_BIT(&(Global_1574409.f_1), 9);
				}
				MISC::SET_BIT(&(Global_1574409.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_124(1);
			MISC::SET_BIT(&(Global_1574409.f_1), 12);
		}
		if (bParam5)
		{
			func_123();
			MISC::SET_BIT(&(Global_1574409.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_121(iParam0))
			{
				MISC::SET_BIT(&(Global_1574409.f_1), 21);
			}
		}
	}
	Global_2492048 = 1;
}

int func_121(int iParam0)
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
			return 1;
		
		default:
	}
	if (func_122())
	{
		return 1;
	}
	return 0;
}

int func_122()
{
	switch (func_116())
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

void func_123()
{
	MISC::SET_BIT(&(Global_2512808.f_4694), 0);
}

void func_124(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92885.f_8 = 1;
	}
	else
	{
		Global_92885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_125(iVar0);
		iVar0++;
	}
}

void func_125(int iParam0)
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = func_127(2523, -1, 0);
	if (iParam0 == 0)
	{
		if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((MISC::IS_BIT_SET(iVar0, 3) && MISC::IS_BIT_SET(iVar0, 4)) && MISC::IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((MISC::IS_BIT_SET(iVar0, 6) && MISC::IS_BIT_SET(iVar0, 7)) && MISC::IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((MISC::IS_BIT_SET(iVar0, 9) && MISC::IS_BIT_SET(iVar0, 10)) && MISC::IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_128(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_33();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

void func_129(int iParam0)
{
	if (func_130() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_130()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_132(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

void func_133(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_134())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_134()
{
	switch (func_135())
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

int func_135()
{
	return Global_25233;
}

void func_136()
{
	Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_215 = 0;
	MISC::CLEAR_BIT(&(Global_2512808.f_4529), 1);
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

bool func_138(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

bool func_139()
{
	return Global_1312416.f_1;
}

bool func_140()
{
	return Global_1312416;
}

bool func_141(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 2);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_144(0) || func_144(func_143(iVar0)))
		{
			MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 2);
		}
	}
}

int func_143(int iParam0)
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
		
		default:
	}
	return 14;
}

bool func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_127(2469, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

void func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223, iParam0))
		{
			MISC::SET_BIT(&(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223), iParam0);
	}
}

int func_146(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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
	if (func_156(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312576.f_54;
	func_150();
	Global_1312576 = 9;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	Global_1312576.f_54 = uVar0;
	func_149();
	func_148(bParam2);
	func_147();
	return 1;
}

void func_147()
{
	MISC::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_149()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_150()
{
	func_152();
	func_151(0);
}

void func_151(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_152()
{
	if (!func_155())
	{
	}
	if (func_154())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_153();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_153()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_154()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_155()
{
	if (!func_154())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_153();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_156(char* sParam0, char* sParam1)
{
	if (!func_154())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_157(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_158(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312576 = 15;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_57 = iParam4;
		Global_1312576.f_54 = iParam1;
	}
}

int func_158(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
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
	if (func_159(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_150();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_149();
	func_148(bParam3);
	func_147();
	return 1;
}

bool func_159(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_154())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1312576.f_32));
}

int func_160(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_104[iParam0 /*5*/].f_4, 1))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_104[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_161(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam5);
}

int func_162(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_1395(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_1395(PLAYER::PLAYER_ID()) || (func_182() && func_1394())) && !MISC::IS_BIT_SET(Global_2512808.f_4556, 31))
	{
		iVar1 = func_181();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1448(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_179(iParam1, iParam0, 0);
							}
							else
							{
								return func_170(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_170(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_179(iParam1, iParam0, 0);
				}
				else
				{
					return func_163(0, -1, 0);
				}
			}
			else
			{
				return func_163(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_179(iParam1, iParam0, 0);
		}
		else
		{
			return func_170(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_170(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_163(bool bParam0, int iParam1, bool bParam2)
{
	return func_164(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_164(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_169(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_168(1);
				}
				else
				{
					return func_168(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_165(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_165(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_168(1);
	}
	return func_168(0);
}

int func_165(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_167(iParam0, iParam1, iParam3);
	if (func_166(Global_4456448.f_122309))
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

int func_166(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2)
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
			if (!func_169(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_168(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_170(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_176(1))
			{
				iVar3 = func_175(iParam0);
				if (!iVar3 == -1)
				{
					return func_173(iVar3);
				}
			}
			if ((func_172(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_169(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_168(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_171(1);
			}
			else
			{
				return func_164(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_168(1);
			}
			else
			{
				return func_164(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_175(iParam0);
	if (!iVar4 == -1)
	{
		return func_173(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_171(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_172(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
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
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_174(iParam0);
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

var func_174(int iParam0)
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_175(int iParam0)
{
	if (!iParam0 == func_22())
	{
		if (func_65(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_56(iParam0)];
		}
	}
	return -1;
}

int func_176(int iParam0)
{
	if ((func_178() || func_177()) || (func_50() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_177()
{
	return Global_2447174.f_15;
}

bool func_178()
{
	return Global_2447174.f_14;
}

int func_179(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_176(1))
	{
		iVar2 = func_175(iParam1);
		if (!iVar2 == -1)
		{
			return func_173(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_22())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_164(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_180(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_180(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
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

var func_181()
{
	return Global_2359302.f_2;
}

bool func_182()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_39.f_18, 14);
}

char* func_183()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_56(PLAYER::PLAYER_ID());
	if (iVar0 != func_22())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_24(iVar0, 28) || func_24(PLAYER::PLAYER_ID(), 28)) || func_58(iVar0)) && !func_57(iVar0))
			{
				return func_59(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_59(iVar0, 0);
			}
		}
		sVar1 = func_64(&(Global_1627537[iVar0 /*532*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_59(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (!iVar0 == func_22())
	{
		if (iVar0 == func_56(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	return Local_100.f_6[iParam0 /*107*/].f_3;
}

void func_186(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 7))
		{
			if (func_140())
			{
				func_189(0);
				func_188();
			}
			if (func_144(0))
			{
				uVar0 = func_127(2469, -1, 0);
				MISC::CLEAR_BIT(&uVar0, 0);
				func_188();
			}
			if (func_144(func_143(func_99(PLAYER::PLAYER_ID()))))
			{
				uVar0 = func_127(2469, -1, 0);
				MISC::CLEAR_BIT(&uVar0, func_143(func_99(PLAYER::PLAYER_ID())));
				func_188();
			}
			if (func_187())
			{
				func_188();
			}
			if (func_99(PLAYER::PLAYER_ID()) > -1)
			{
				MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 7);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 7);
	}
}

int func_187()
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_188()
{
	if (func_187())
	{
		Global_2436181.f_1040.f_16 = 1;
	}
}

void func_189(int iParam0)
{
	if (func_140())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_193(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_193(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_8 = 0;
			func_192(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_191()) && !func_190(PLAYER::PLAYER_ID()))
		{
			Global_979885 = 0;
		}
	}
}

int func_190(int iParam0)
{
	if (func_82(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_191()
{
	return Global_2447174.f_727;
}

void func_192(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_140())
		{
			if (func_1448(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_1448(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

void func_193(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
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

void func_194(int iParam0)
{
	Global_1627537[PLAYER::PLAYER_ID() /*532*/] = iParam0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

var func_196(int iParam0)
{
	return Local_100.f_6[iParam0 /*107*/];
}

bool func_197(int iParam0)
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_198()
{
	if (!func_154())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_150();
}

void func_199(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_200(sParam0))
	{
		return;
	}
	func_150();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_149();
	func_148(bParam1);
	func_147();
}

bool func_200(char* sParam0)
{
	if (!func_154())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_201(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_201(char* sParam0)
{
	if (!func_154())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_202(bool bParam0, bool bParam1)
{
	if (func_205(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_204(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_203(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_203(int iParam0)
{
	return func_31(iParam0, 0);
}

bool func_204(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if ((func_140() && !func_139()) || func_138(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		if (func_12(&(Global_1574409.f_13)))
		{
			if (!func_18(&(Global_1574409.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1574409.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 10))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 9);
}

bool func_205(int iParam0)
{
	if (func_141(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 8);
}

bool func_206(int iParam0, int iParam1)
{
	return Local_104[iParam0 /*5*/].f_1[iParam1];
}

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if (func_212())
	{
		func_208(iVar0);
	}
}

void func_208(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iParam0), 0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iParam0)))
			{
				if (func_210(NETWORK::NET_TO_VEH(iParam0), 1, 0, 0, 0, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(iParam0), Global_1574409.f_9, 10f, 10f, 10f, false, true, 0))
					{
						MISC::CLEAR_BIT(&(Global_1574409.f_1), 24);
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
					{
						MISC::CLEAR_AREA(Global_1574409.f_9, 20f, 1, 0, 0, false);
						ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iParam0), Global_1574409.f_9, 1, false, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(NETWORK::NET_TO_VEH(iParam0), 1084227584);
					}
				}
				else if (func_209(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iParam0), 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(NETWORK::NET_TO_ENT(iParam0)))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(iParam0)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(iParam0), PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(iParam0), 1, true);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(iParam0), Global_1574409.f_9, 10f, 10f, 10f, false, true, 0))
				{
					MISC::CLEAR_BIT(&(Global_1574409.f_1), 24);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
				{
					MISC::CLEAR_AREA(Global_1574409.f_9, 20f, 1, 0, 0, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(iParam0), Global_1574409.f_9, 0, 0, 1);
				}
			}
		}
	}
}

int func_209(int iParam0, int iParam1, int iParam2)
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

int func_210(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
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
			iVar2 = func_211(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
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
					}
					else if (iParam1 == 0)
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

int func_211(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

bool func_212()
{
	return MISC::IS_BIT_SET(Global_1574409.f_1, 24);
}

void func_213(int iParam0)
{
	if (!MISC::IS_BIT_SET(iLocal_105, 18))
	{
		if (func_160(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!func_522(1, 1))
			{
				if (iLocal_660 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (Local_117[iParam0 /*129*/][0 /*4*/] != -1)
					{
						if (Local_117[iParam0 /*129*/][0 /*4*/].f_3 > 0)
						{
							if (Local_117[iParam0 /*129*/][0 /*4*/] != NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!func_184(PLAYER::PLAYER_ID(), Local_117[iParam0 /*129*/][0 /*4*/].f_1))
								{
									func_214();
									MISC::SET_BIT(&iLocal_105, 18);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_214()
{
	MISC::SET_BIT(&(Global_2512808.f_1709), 19);
}

void func_215(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_196(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(iVar0), 0) };
		iVar2 = func_229(vVar1, 6, -1, 0, 1, -1);
		vVar3 = { func_218(iVar2, 0) };
		iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar3, func_216(iVar2));
		iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(iVar0));
		if (iVar4 != 0 && iVar4 == iVar5)
		{
			if (!Global_2512808.f_4778)
			{
				Global_2512808.f_4778 = 1;
			}
			return;
		}
	}
	if (Global_2512808.f_4778)
	{
		Global_2512808.f_4778 = 0;
	}
}

char* func_216(int iParam0)
{
	switch (iParam0)
	{
		case -1:
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
			return func_217(Global_94374);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
	}
	return "";
}

char* func_217(int iParam0)
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
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_218(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
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
			return func_228(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_22())
			{
				if (func_227(Global_1595538))
				{
					return func_220(2, 2);
				}
				else if (func_219(Global_1595538))
				{
					return func_220(45, 3);
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_219(int iParam0)
{
	if (iParam0 != func_22())
	{
		if ((MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_220(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_22())
	{
		if (iParam1 == 3)
		{
			if (func_221(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_221(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_221(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_221(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_226(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_226(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_224(iParam0) };
	}
	else
	{
		Var2 = { func_223(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_222(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_222(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_222(vector3 vParam0, float fParam1)
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

struct<6> func_223(int iParam0)
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

struct<6> func_224(int iParam0)
{
	return func_225(iParam0);
}

struct<6> func_225(int iParam0)
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

int func_226(int iParam0, var uParam1)
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

int func_227(int iParam0)
{
	if (iParam0 != func_22())
	{
		if ((MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_228(int iParam0)
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
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_229(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam1 == 6 || iParam1 == func_233(iVar0))
		{
			if (!bParam3 || func_230(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_218(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
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

int func_230(int iParam0)
{
	return func_231(iParam0, 0, 0);
}

int func_231(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_135() == 0)
		{
			return MISC::IS_BIT_SET(func_127(func_232(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7013;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7872;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case -1:
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
	}
	return 6;
}

void func_234(int iParam0)
{
	vector3 vVar0;
	struct<26> Var1;
	
	if (Global_2436181.f_3853 || (Local_115[iParam0 /*21*/].f_17 > 0 && Local_115[iParam0 /*21*/].f_17 < 4))
	{
		if (func_7(iParam0))
		{
			if (!func_1236(iParam0))
			{
				if (ENTITY::IS_ENTITY_VISIBLE(func_1235(iParam0)))
				{
					Local_115[iParam0 /*21*/].f_17 = 4;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!func_12(&(Local_100.f_117)))
					{
						func_9(&(Local_100.f_117), 0, 0);
					}
					else if (func_18(&(Local_100.f_117), 5000, 0))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iParam0)))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(func_196(iParam0));
						}
						else
						{
							NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_196(iParam0), false);
						}
					}
				}
			}
		}
	}
	switch (Local_115[iParam0 /*21*/].f_17)
	{
		case 0:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iParam0)))
			{
				if (Global_2436181.f_3853)
				{
					if (func_7(iParam0))
					{
						if (!func_1236(iParam0))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(func_1235(iParam0)))
							{
								Local_115[iParam0 /*21*/].f_17 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iParam0)))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(func_1235(iParam0), 1) };
				if (func_380(vVar0, 2f))
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Global_1655637, true) <= 2f)
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Global_1655633, true) <= 2f)
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Global_1655645, true) <= 2f)
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else if (func_379(func_1235(iParam0)))
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else if (Global_2436181.f_3854)
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else if (Global_2436181.f_3855)
				{
					Local_115[iParam0 /*21*/].f_17 = 2;
				}
				else
				{
					Local_115[iParam0 /*21*/].f_17 = 3;
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iParam0)))
			{
				if (func_378(Local_115[iParam0 /*21*/].f_18))
				{
					if (func_379(func_1235(iParam0)))
					{
						Local_115[iParam0 /*21*/].f_18 = { 104.4489f, -1320.723f, 28.26478f };
					}
					else
					{
						Local_115[iParam0 /*21*/].f_18 = { ENTITY::GET_ENTITY_COORDS(func_1235(iParam0), 1) };
					}
				}
				else
				{
					Var1.f_5 = 1115815936;
					Var1.f_13 = 2;
					Var1.f_20 = 2;
					Var1.f_25 = -1082130432;
					Var1.f_3 = 0;
					Var1.f_5 = 1f;
					Var1.f_13[0 /*3*/] = { Local_115[iParam0 /*21*/].f_18 };
					Var1.f_20[0] = 8f;
					if (Global_2436181.f_3855)
					{
						Var1.f_20[0] = 100f;
					}
					if (func_235(Local_115[iParam0 /*21*/].f_18, 20f, &vLocal_662, &fLocal_663, Var1))
					{
						vLocal_662 = { vLocal_662 + Vector(0.5f, 0f, 0f) };
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_1235(iParam0), vLocal_662, 0, 0, 1);
						ENTITY::_SET_ENTITY_SOMETHING(func_1235(iParam0), true);
						Local_115[iParam0 /*21*/].f_17 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iParam0)))
			{
				OBJECT::_0x867458251D47CCB2(func_1235(iParam0), false);
				ENTITY::SET_ENTITY_VISIBLE(func_1235(iParam0), true, 1);
				Local_115[iParam0 /*21*/].f_17 = 4;
			}
			break;
		
		case 4:
			Global_2436181.f_3853 = 0;
			Global_2436181.f_3854 = 0;
			Global_2436181.f_3855 = 0;
			MISC::CLEAR_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
			MISC::CLEAR_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 12);
			Local_115[iParam0 /*21*/].f_17 = 0;
			Local_115[iParam0 /*21*/].f_18 = { 0f, 0f, 0f };
			vLocal_662 = { 0f, 0f, 0f };
			fLocal_663 = 0f;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_3(&(Local_100.f_117));
				Local_100.f_114 = -1;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_196(iParam0)))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_196(iParam0), true);
			}
			break;
	}
}

int func_235(vector3 vParam0, float fParam1, var uParam2, float fParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = Param4.f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_236(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_12 > 0f && Param4.f_7) && Param4.f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > Param4.f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = Param4.f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*fParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_236(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405047.f_2433 == *uParam0 || !Global_2405047.f_2433.f_1 == uParam0->f_1) || !Global_2405047.f_2433.f_2 == uParam0->f_2) || !Global_2405047.f_2436 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2) || !Global_2405047.f_2453 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405047.f_2431 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405047.f_2440))
			{
				if (Global_2405047.f_2440 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2437) < func_377(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2437) < func_377(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_376();
		}
		Global_2405047.f_2431 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2437) > func_377(0))
	{
		Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
		func_370();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405047.f_2431)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_376();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_369(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405047.f_2454 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405047.f_2433 = { *uParam0 };
					Global_2405047.f_2436 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = 0f;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = uParam0->f_14;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_368(vVar6.x, vVar6.y);
			}
			Global_2405047.f_2432 = 1;
			Global_2405047.f_2431 = 1;
			Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
			Global_2405047.f_2437 = NETWORK::GET_NETWORK_TIME();
			Global_2405047.f_2440 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405047.f_2431)
	{
		if (Global_2405047.f_2432 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2438) > 5000)
			{
				Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var14.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_23;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_367(Global_4456448.f_143970))
					{
						Var14.f_9 = 1;
					}
					func_345(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_344(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405047.f_2432 = 9;
				}
				else
				{
					Global_2405047.f_2432 = 2;
				}
			}
		}
		if (Global_2405047.f_2432 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2438) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar7, vVar8) == 0)
			{
				Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_31(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405047.f_2432 = 3;
				}
				else
				{
					Global_2405047.f_2432 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2442) > 7000)
			{
				func_343(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405047.f_2432 == 3)
		{
			if (func_342() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2438) > 10000)
			{
				Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
				Global_2405047.f_2432 = 4;
			}
		}
		if (Global_2405047.f_2432 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_370();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 1:
							func_341(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
								Global_2405047.f_2432 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
					Global_2405047.f_2432 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_341(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405047.f_2432 == 5)
		{
			if (func_281(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405047.f_2458.f_5)
				{
					Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
					Global_2405047.f_2432 = 6;
				}
				else
				{
					Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405047.f_2432 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2438) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 6)
		{
			iVar0 = 0;
			Global_2405047.f_2458.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_280(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_279(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
			Global_2405047.f_2432 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_341(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405047.f_2432 == 7)
		{
			if (func_281(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405047.f_2587[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_344(Global_2405047.f_2587[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_277(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_239(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405047.f_2432 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_2438) > 20000)
			{
				Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_238(Global_2405047.f_482))
				{
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_237(uParam2, &(Global_2405047.f_2458.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405047.f_2433 };
				func_239(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405047.f_2438 = NETWORK::GET_NETWORK_TIME();
			Global_2405047.f_2432 = 9;
		}
		if (Global_2405047.f_2432 == 9)
		{
			Global_2405047.f_2431 = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_376();
			return 1;
		}
		Global_2405047.f_2437 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_237(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_238(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_280(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_279(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_279(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_241(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var2.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_23;
		Var2.f_55 = uParam5->f_16;
		func_345(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_240(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_241(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_240(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405047.f_642 = 1;
}

int func_240(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_277(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_241(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_276(vParam0, uParam1))
	{
		if (func_242(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_242(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_259(Global_2405047.f_505, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_249(*uParam1, 1056964608))
			{
				if (!func_243(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_243(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_248(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_247(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_244(&vVar1, Global_2409893[iVar2 /*127*/][iVar0 /*7*/], Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_247(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_244(&vVar1, Global_2409893[8 /*127*/][iVar0 /*7*/], Global_2409893[8 /*127*/][iVar0 /*7*/].f_3, Global_2409893[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_244(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_246(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_245(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_245(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_246(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_246(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_245(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_245(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_245(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_246(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_247(vector3 vParam0, var uParam1)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_248(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411047[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411047[1])
	{
		if (Param0 < Global_2411051[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411047[2])
	{
		if (Param0 < Global_2411051[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411051[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411051[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_249(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_82(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_4456448.f_54288 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_54288)
			{
				if (Global_4456448.f_54289[iVar0 /*71*/].f_7 != 0)
				{
					if (func_250(vParam0, Global_4456448.f_54289[iVar0 /*71*/], Global_4456448.f_54289[iVar0 /*71*/].f_6, Global_4456448.f_54289[iVar0 /*71*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_51079 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_51079)
			{
				if (Global_4456448.f_51082[iVar0 /*130*/].f_16 != 0)
				{
					if (func_250(vParam0, Global_4456448.f_51082[iVar0 /*130*/], Global_4456448.f_51082[iVar0 /*130*/].f_3, Global_4456448.f_51082[iVar0 /*130*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_71947 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_71947)
			{
				if (Global_4456448.f_71951[iVar0 /*213*/].f_12 != 0)
				{
					if (func_250(vParam0, Global_4456448.f_71951[iVar0 /*213*/], Global_4456448.f_71951[iVar0 /*213*/].f_3, Global_4456448.f_71951[iVar0 /*213*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_250(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_258(iParam3, 1008981770))
	{
		func_251(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_251(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_257(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_252(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_252(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_255(iParam0);
		if (iVar0 != 0)
		{
			func_253(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*fParam1) <= 0.01f || SYSTEM::VMAG(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_253(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_254(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315788[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315792[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315799[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0.5f);
	Global_1315820 = (Global_1315815 * 0.5f);
	Global_1315817.f_1 = ((((0.5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0.5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0.5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0.5f);
	*fParam1 = { Global_1315817 };
	*fParam2 = { Global_1315820 };
}

void func_254(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_256(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_257(var uParam0, vector3 vParam1)
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

float func_258(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_252(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_259(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_272(vParam0))
	{
		if (func_271(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_262(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_261(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_260(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_260(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_257(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_257(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_261(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405047.f_2695[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_262(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_267(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_264(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_267(vVar2, &uVar1) || func_263(vVar2))
			{
				vVar2 = { *uParam0 };
				func_264(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_263(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405047.f_577 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405047.f_574);
		if (fVar0 < Global_2405047.f_577)
		{
			return 1;
		}
	}
	return 0;
}

void func_264(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_266(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_266(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_266(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_260(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_265(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_244(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_265(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_266(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_260(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_265(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_244(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_344(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_277(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_267(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_270())
	{
		return 0;
	}
	iVar1 = func_269();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9 == 1)
		{
			if (func_268(vParam0, &(Global_2405047.f_361[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_268(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_344(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_277(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_269()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_270()
{
	return Global_1669535.f_28;
}

int func_271(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409756[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409756[iVar0 /*17*/].f_16))
			{
				if (func_268(*uParam0, &(Global_2409756[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409756[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409756[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_264(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_271(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_264(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_272(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405047.f_508 && !Global_2405047.f_509)
	{
		if (!Global_2405047.f_44.f_314)
		{
			if (!func_81(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_275(vParam0, 1008981770))
			{
				if (!func_271(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_271(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_274(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_273(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_271(&vVar1, 0, 0, 0, 1))
					{
						if (!func_271(&vParam0, 0, 0, 0, 1))
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

Vector3 func_273(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_274(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_268(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_275(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_268(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_276(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			fVar3 = SYSTEM::VDIST(Global_2405047.f_2230[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405047.f_2230[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_277(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_278(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_278(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_279(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_280(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405047.f_2458.f_1 == 0 && Global_2405047.f_2458 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_2405047.f_2458.f_1)))
			{
				case 0:
					func_339(uParam1, uParam2);
					if (!Global_2405047.f_2458.f_2)
					{
						if (uParam2->f_7 && Global_2405047.f_539.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
							}
							if (uParam1->f_5 && func_238(Global_2405047.f_482))
							{
								if (!Global_2405047.f_2458.f_5)
								{
									Global_2405047.f_2458.f_5 = 1;
								}
								else
								{
									func_239(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_239(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_339(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_339(uParam1, uParam2);
					Global_2405047.f_2458.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_339(uParam1, uParam2);
				if (!Global_2405047.f_2458.f_2)
				{
					Global_2405047.f_2458.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_336(Global_2405047.f_539, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85));
	}
	if (uParam2->f_7 && !Global_2405047.f_2458.f_4)
	{
		Global_2405047.f_2458.f_4 = 1;
		func_289(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405047.f_2458.f_1 > 0 || Global_2405047.f_2458 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405047.f_2458.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405047.f_2458.f_3)
					{
						iVar2 = Global_2405047.f_2458.f_3 + 1;
					}
					if (iVar2 > (Global_2405047.f_2458.f_1 - 1))
					{
						iVar2 = (Global_2405047.f_2458.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::_0x6C34F1208B8923FD(iVar2);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_289(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405047.f_2458.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405047.f_2458.f_1;
		}
		if (Global_2405047.f_2458.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405047.f_2847)
			{
				func_283(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_238(Global_2405047.f_482))
			{
				if (Global_2405047.f_2458.f_2)
				{
					func_237(uParam0, &(Global_2405047.f_2458.f_6));
					func_282(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_239(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_282(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_237(uParam0, &(Global_2405047.f_2458.f_6));
				func_282(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405047.f_2458.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_243(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_282(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_239(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_282(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
				func_239(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_282(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
		if (uParam1->f_5 && func_238(Global_2405047.f_482))
		{
			if (!Global_2405047.f_2458.f_5)
			{
				Global_2405047.f_2458.f_5 = 1;
			}
			else
			{
				func_239(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_239(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_282(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_282(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405047.f_2587[(3 - iVar0) /*3*/] = { Global_2405047.f_2587[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405047.f_2587[0 /*3*/] = { vParam0 };
}

void func_283(var uParam0, var uParam1, var uParam2)
{
	if (func_238(Global_2405047.f_482) && func_288() < 4096)
	{
		func_287(uParam0, 0f);
		func_287(uParam1, uParam0->f_2);
		func_287(uParam2, uParam1->f_2);
	}
	else
	{
		func_286(uParam0);
		func_285(uParam2, uParam0->f_4);
		func_284(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_284(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2407922[iVar0 /*9*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_285(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_286(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_1;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_287(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_2 < fVar1 && Global_2407922[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_2;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_288()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407922[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_289(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	int iVar17;
	struct<9> Var18;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam2->f_5)
	{
		if (Global_2405047.f_482 == 1)
		{
			if (MISC::ABSF((Global_2405047.f_505.f_2 - vParam0.z)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam2->f_5)
	{
		if (func_79(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_335(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_334(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar12 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_13[iVar10 /*3*/]) > uParam3->f_20[iVar10])
			{
				bVar12 = false;
			}
		}
		iVar10++;
	}
	if (bVar12)
	{
		iVar7 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_329(vParam0, fParam1, uParam2->f_15, func_333(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2405047.f_3;
		}
	}
	else if (!func_326(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_324(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_324(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			vVar11 = { Global_2405047.f_505 };
			if (Global_2405047.f_482 == 26)
			{
				vVar11 = { Global_2405047.f_539.f_18 };
			}
			if (!func_261(vParam0, 0.5f))
			{
				if (func_272(vVar11))
				{
					if (!func_271(&vParam0, 0, 0, 0, 1) && !func_323(&vParam0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_323(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_322(vParam0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_190(PLAYER::PLAYER_ID()) && func_320(PLAYER::PLAYER_ID())))
		{
			if (!func_319(&vParam0, &(Global_2405047.f_2458.f_85), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_320(PLAYER::PLAYER_ID()))
		{
			if (!func_318(vParam0, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_317(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_238(Global_2405047.f_482))
			{
				if (func_275(vParam0, 0.01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_316(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2405047.f_44.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			if (!func_262(&vParam0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_243(&vParam0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar13 = func_274(vParam0, 1008981770);
		if (iVar13 > -1)
		{
			func_315(vParam0, &vVar14, &vVar15, &fVar16);
			if (!func_310(&(Global_2405047.f_44[iVar13 /*12*/]), vVar14, vVar15, fVar16))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_249(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam2->f_5)
	{
	}
	else if (func_309(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var18.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	if (Global_2405047.f_2847 && uParam2->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_301(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			else
			{
				fVar0 = func_301(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_238(Global_2405047.f_482) && iVar7 < 4096)
			{
				Var18.f_2 = func_299(vParam0);
			}
			Var18.f_4 = { vParam0 };
			Var18.f_7 = fParam1;
			Var18 = iVar7;
			Var18.f_1 = fVar0;
			func_298(Var18);
			Global_2405047.f_2458.f_2 = 1;
		}
	}
	else
	{
		iVar17 = 0;
		while (iVar17 < 5)
		{
			if (iVar7 >= Global_2405047.f_2458.f_6[iVar17 /*9*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar19)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_301(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						else
						{
							fVar0 = func_301(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar19 = true;
					}
					if ((func_238(Global_2405047.f_482) && iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar20)
						{
							fVar2 = func_299(vParam0);
							bVar20 = true;
						}
						if (fVar2 < Global_2405047.f_2458.f_6[iVar17 /*9*/].f_2)
						{
							Var18.f_4 = { vParam0 };
							Var18.f_7 = fParam1;
							Var18 = iVar7;
							Var18.f_1 = fVar0;
							Var18.f_2 = fVar2;
							func_297(Var18, iVar17);
							Global_2405047.f_2458.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar0 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_1))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_1 = fVar0;
						func_297(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar19)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_296(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_291(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_290(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_290(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar19 = true;
					}
					if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar3 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_3))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_3 = fVar3;
						func_297(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
			}
			iVar17++;
		}
	}
}

float func_290(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_291(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_1448(iVar7, 1, 1))
		{
			if (!iVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_293(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == -1 || !func_81(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar7) || !bParam4)
					{
						if (func_292(iVar7))
						{
							vVar5 = { func_382(iVar7) };
							if (!iVar7 == PLAYER::PLAYER_ID())
							{
								vVar6 = { NETWORK::_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_292(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0)
{
	if (func_1448(iParam0, 0, 1))
	{
		if (!func_1395(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_82(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_169(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_82(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_294(iParam0))
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
	}
	return 0;
}

int func_294(int iParam0)
{
	if (func_295(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_36(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2492157))
	{
		return 1;
	}
	if (func_184(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_295(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2492157 = { func_36(iParam0) };
		Global_2492170 = { func_36(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2492157))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2492170))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2492087, 35, &Global_2492157);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_296(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_1448(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1448(iVar1, 1, 1))
		{
			if (!func_31(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_292(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_297(struct<9> Param0, int iParam1)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405047.f_2458.f_6[iParam1 /*9*/] };
	Global_2405047.f_2458.f_6[iParam1 /*9*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_297(Var0, iParam1 + 1);
	}
}

void func_298(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_288();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] < iVar2)
		{
			Global_2407922[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] == 0)
		{
			Global_2407922[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 < fVar3)
			{
				fVar3 = Global_2407922[iVar0 /*9*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407922[iVar4 /*9*/] = { Param0 };
	}
}

float func_299(vector3 vParam0)
{
	var uVar0;
	
	return func_300(vParam0, &(Global_2405047.f_44), &uVar0);
}

float func_300(vector3 vParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405047.f_2693) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*iParam2 = iVar3;
	return fVar2;
}

float func_301(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_290(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_291(vParam0, 1, 0, 0, 1);
	fVar0 = func_290(fVar4, 0f, func_308(), func_306(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_304(vParam0);
	fVar0 = func_290(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_81(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_303(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_290(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_302(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_290(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_290(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_290(SYSTEM::VDIST(Global_2405047.f_505, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_302(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_303(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1448(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_1448(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1))
					{
						if (Global_2416800.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2416800.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_304(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_305(uVar4[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], 1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::_0xCC6E3B6BB69501F1(Global_1574725[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574725[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::_0xCC6E3B6BB69501F1(Global_1574436[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574436[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_306()
{
	if (func_307())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405047.f_44.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_307()
{
	if (Global_2405047.f_44.f_65 && !Global_2405047.f_44.f_301)
	{
		if (!func_1395(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_308()
{
	if (func_307())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405047.f_44.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_309(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_310(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_314(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_313(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_311(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_311(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_312(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_312(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_246(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_313(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_314(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_315(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_248(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_247(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_247(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_316(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405047.f_44.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405047.f_44.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405047.f_44.f_57)
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
	return 1;
}

int func_317(vector3 vParam0)
{
	switch (Global_2405047.f_2454)
	{
		case 0:
			return func_344(vParam0, Global_2405047.f_2433, Global_2405047.f_2436, 0, 0);
			break;
		
		case 1:
			return func_277(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, Global_2405047.f_2453, 0, true);
			break;
	}
	return 0;
}

int func_318(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_319(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_260(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_320(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_321(iParam0))
			{
				if (Global_1595693[iParam0 /*680*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_321(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_322(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_2405047.f_2587[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_323(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_263(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_260(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 0, fVar2);
			if (func_267(vVar1, &uVar0) || func_263(vVar1))
			{
				vVar1 = { *uParam0 };
				func_260(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_324(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1448(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_325(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_1448(iVar1, 1, 1))
		{
			if (!func_31(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_292(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_325(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_325(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

Vector3 func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_50() && Global_1595693[iVar0 /*680*/].f_673) && !func_378(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_382(iParam0);
}

int func_326(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_328(vParam0, fParam1, iParam2, iParam3, 0) || func_327(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_327(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_250(vParam0, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1448(iVar2, 0, 1) && func_1448(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_328(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
				if (func_1448(iVar1, 0, 1) && func_1448(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1448(iVar1, 0, 1) && func_1448(iParam2, 0, 1))
				{
					if (Global_2416800.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_382(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416800.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_1448(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_382(iVar1), vParam0) < 1f)
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

int func_329(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405047.f_3 = 0;
	if (!func_326(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405047.f_3++;
		if (bParam3)
		{
			if (func_369(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_332(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_249(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_369(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_332(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_330(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405047.f_3++;
						if (!func_249(vParam0, 1056964608))
						{
							Global_2405047.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (func_369(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			if (!func_332(vParam0, fParam10))
			{
				Global_2405047.f_3++;
				if (!func_330(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405047.f_3++;
					if (!func_249(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
		}
	}
	return 0;
}

int func_330(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_1448(iVar1, 1, 1) && func_292(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_172(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_331(func_382(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
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

bool func_331(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, true);
}

int func_332(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1448(iVar1, 1, 1) && func_292(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_81(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_172(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_382(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_333(int iParam0)
{
	if ((Global_2405047.f_482 == 9 || Global_2405047.f_482 == 9) || (Global_2405047.f_482 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_334(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_1448(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_292(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && func_294(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_382(iVar1), vParam0, true) < fParam1)
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

int func_335(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1448(iVar1, 1, 1))
			{
				if ((!func_31(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_382(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_336(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_338(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar4 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar4, vParam0) < SYSTEM::VDIST(vVar5, vParam0))
			{
				Var3 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_337(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_337(var uParam0, var uParam1, int iParam2)
{
	Global_2412035 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_337(&Global_2412035, uParam1, iParam2 + 1);
	}
}

void func_338(var uParam0, var uParam1, int iParam2)
{
	Global_2412031 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_338(&Global_2412031, uParam1, iParam2 + 1);
	}
}

void func_339(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			if (func_340(Global_2405047.f_2230[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405047.f_2230[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405047.f_2230[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_289(Global_2405047.f_2230[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405047.f_2458++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405047.f_2847)
	{
		func_283(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
	}
}

int func_340(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_240(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_240(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_341(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_278(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_342()
{
	return Global_1310987.f_4;
}

void func_343(float fParam0, float fParam1)
{
	func_376();
	func_368(fParam0, fParam1);
}

bool func_344(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_345(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405047.f_1721 > 0 && func_364(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_346(uParam0, uParam1, uParam2);
	}
}

void func_346(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_259(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_363(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412045.f_162 = 0;
	Global_2412045.f_163 = 0;
	Global_2412045.f_164 = -99;
	Global_2412045.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412045.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_255(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412045.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412045.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar6)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_323(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_362(vVar1))
									{
										vVar1 = { func_360(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_249(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_359(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_363(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_355(vVar1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_259(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_354(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_369(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_369(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_352(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_351(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162)
																										{
																											Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412045.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412045.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412045.f_162 == 0)
																									{
																										Global_2412045[0 /*3*/] = { vVar1 };
																										Global_2412045.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412045[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_350(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412045.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412045.f_162++;
																									if (Global_2412045.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412045[Global_2412045.f_162 /*3*/] = { vVar1 };
																									Global_2412045.f_121[Global_2412045.f_162] = fVar2;
																									Global_2412045.f_162++;
																									if (func_359(vVar1, uParam2))
																									{
																										Global_2412045.f_163++;
																									}
																									if (Global_2412045.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412045.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
					else
					{
						if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
						{
							func_348(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412045.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412045[0 /*3*/] };
						uVar26 = Global_2412045.f_121[0];
						Global_2412045[0 /*3*/] = { Global_2412045[iVar24 /*3*/] };
						Global_2412045.f_121[0] = Global_2412045.f_121[iVar24];
						Global_2412045[iVar24 /*3*/] = { vVar25 };
						Global_2412045.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_346(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iVar13), (40 + iVar13));
						PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &vVar1, &fVar2, &iVar7, iVar3, fVar11, fVar12);
						vVar1 = { func_360(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, 0, 0, uParam2->f_51) };
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_259(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_363(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_346(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_346(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_347(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412045.f_164 = iVar6;
	}
}

void func_347(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_326(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_348(int iParam0, var uParam1)
{
	if (!func_359(Global_2412045[iParam0 /*3*/], uParam1))
	{
		Global_2412045.f_162 = (Global_2412045.f_162 - 1);
		func_349(iParam0);
		if (Global_2412045.f_162 > Global_2412045.f_163)
		{
			func_348(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_348(iParam0 + 1, uParam1);
	}
}

void func_349(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412045[iParam0 /*3*/] = { Global_2412045[iParam0 + 1 /*3*/] };
			Global_2412045.f_121[iParam0] = Global_2412045.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_350(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412045[iParam2 /*3*/] };
	uVar1 = Global_2412045.f_121[iParam2];
	Global_2412045[iParam2 /*3*/] = { vParam0 };
	Global_2412045.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412045.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_350(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_351(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_293(iVar3))
		{
			vVar1 = { func_382(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_352(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_1448(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_292(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_294(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, 0) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_353(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_250(func_382(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_353(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_250(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_252(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_257(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_257(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_257(&vVar6, 0f, 0f, fParam1);
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
		if (func_250(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_353(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_354(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_353(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_353(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_358(vParam0, fParam1, iParam2, iParam3, iParam4) || func_356(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_356(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_357(vParam0, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_353(vParam0, fParam1, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1448(iVar2, 0, 1) && func_1448(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_357(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_258(iParam1, 1008981770);
	fVar1 = func_258(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_358(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_1448(iVar1, 0, 1) && func_1448(iParam3, 0, 1))
			{
				if (Global_2416800.f_261[iVar0])
				{
					if (func_250(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_250(func_382(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416800.f_261[iVar0])
			{
				if (func_250(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1448(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_250(func_382(iVar1), vParam0, fParam1, iParam2, 1036831949))
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

int func_359(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_344(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_277(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_360(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_361(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*bParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *bParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				func_252(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				if (fVar12 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar12 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_361(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (PATHFIND::_0xA0F8A7517A273C05(vParam0, *fParam1, &vVar13))
		{
			vVar14 = { vVar13 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar15 = { vVar14 / FtoV(SYSTEM::VMAG(vVar14)) };
				func_252(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				vVar15 = { vVar15 * FtoV((fVar12 * 0.5f)) };
				vVar14 = { vVar14 - vVar15 };
				vVar13 = { vParam0 + vVar14 };
			}
			vVar15 = { vVar0 - vVar13 };
			vVar0 = { vVar13 };
		}
	}
	return vVar0;
}

int func_361(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_257(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_245(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_362(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_248(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411759[iVar1])
	{
		if (func_247(vParam0, &(Global_2411056[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411759[8])
	{
		if (func_247(vParam0, &(Global_2411056[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_363(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_344(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_277(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_266(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_364(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405047.f_1721 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_259(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_363(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412045.f_162 = 0;
		Global_2412045.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412045.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_365(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1721)
		{
			iVar1 = Global_2405047.f_2127[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405047.f_1722[iVar1 /*4*/] };
				fVar3 = Global_2405047.f_1722[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_355(vVar2, fVar3, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_259(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_354(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_369(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_369(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_352(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_351(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162)
															{
																Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412045.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412045.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412045.f_162 == 0)
														{
															Global_2412045[0 /*3*/] = { vVar2 };
															Global_2412045.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412045[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_350(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412045.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
													else
													{
														Global_2412045[Global_2412045.f_162 /*3*/] = { vVar2 };
														Global_2412045.f_121[Global_2412045.f_162] = fVar3;
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
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
		if (Global_2412045.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
				{
					func_348(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412045.f_162);
				vVar13 = { Global_2412045[0 /*3*/] };
				uVar14 = Global_2412045.f_121[0];
				Global_2412045[0 /*3*/] = { Global_2412045[iVar12 /*3*/] };
				Global_2412045.f_121[0] = Global_2412045.f_121[iVar12];
				Global_2412045[iVar12 /*3*/] = { vVar13 };
				Global_2412045.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_364(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_346(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_365(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1721)
	{
		uVar1 = func_366(vParam0, fVar0, &fVar0);
		Global_2405047.f_2127[iVar2] = uVar1;
		iVar2++;
	}
}

int func_366(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1721)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405047.f_1722[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_367(int iParam0)
{
	return iParam0 == 50;
}

void func_368(float fParam0, float fParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405047.f_2441 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405047.f_2439 = 1;
	Global_2405047.f_2442 = NETWORK::GET_NETWORK_TIME();
}

int func_369(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405047.f_2 = 0;
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
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_334(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_324(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

void func_370()
{
	func_375();
	func_374();
	func_373();
	func_372();
	func_371();
}

void func_371()
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407922[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_372()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405047.f_2458.f_85[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_373()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405047.f_2458.f_52[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_374()
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405047.f_2458.f_6[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_375()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405047.f_2458 = { Var0 };
}

void func_376()
{
	if (Global_2405047.f_2439)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405047.f_2441)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405047.f_2439 = 0;
	}
}

int func_377(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_378(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_379(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_142906;
}

int func_380(vector3 vParam0, float fParam1)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			fVar0 = (Global_2359721[iVar1 /*26*/].f_6.f_2 + fParam1);
			if (func_381(Global_2359721[iVar1 /*26*/].f_3, vParam0, fVar0, 0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		vVar2 = { Global_1311025[iVar1 /*8*/].f_1 };
		vVar3 = { Global_1311025[iVar1 /*8*/].f_4 };
		fVar4 = Global_1311025[iVar1 /*8*/].f_7;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_381(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

Vector3 func_382(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_383(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_384(int iParam0)
{
	return Local_100.f_6[iParam0 /*107*/].f_1;
}

void func_385(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_1 == iParam0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

void func_386(int iParam0)
{
	HUD::_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_388())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_387(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

bool func_388()
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

void func_389(int iParam0)
{
	int iVar0;
	
	if (func_522(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_118[iVar0 /*42*/] = -1;
		Local_118[iVar0 /*42*/].f_1 = func_22();
		Local_118[iVar0 /*42*/].f_31 = 0;
		if (Local_117[iParam0 /*129*/][iVar0 /*4*/] > -1)
		{
			Local_118[iVar0 /*42*/] = Local_117[iParam0 /*129*/][iVar0 /*4*/];
			Local_118[iVar0 /*42*/].f_1 = Local_117[iParam0 /*129*/][iVar0 /*4*/].f_1;
			Local_118[iVar0 /*42*/].f_31 = Local_117[iParam0 /*129*/][iVar0 /*4*/].f_3;
		}
		iVar0++;
	}
	func_390(&Local_118, &iLocal_669, 26, &uLocal_119, &uLocal_233, -1, 0);
}

void func_390(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_510(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_508() || iParam2 == 27)
	{
		if (func_460(iParam1, iParam2, uParam3, Global_1574123, 0, func_519()))
		{
			func_459(1);
			if ((!func_458() && !func_457()) || MISC::IS_BIT_SET(Global_2512808.f_4553, 1))
			{
				if (func_456())
				{
					func_454();
				}
				else
				{
					GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_453(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_452(iParam1);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_1448(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_31(iVar3, 0))
									{
										if ((func_451(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_321(iVar3))
										{
											iVar9 = iVar3;
											if (func_66(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_448(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_445(PLAYER::PLAYER_ID(), 0) && func_90(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_444())
							{
								if (func_1448(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_22();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_443(iVar3) && func_440(iVar3, iParam2)) && func_1448(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_435(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_36(iVar3) };
								iVar5 = func_429(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574123++;
								if ((iParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_22;
								}
								if ((iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_31;
								}
								if ((iParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != -1 || (iParam0[iVar17 /*42*/])->f_22 != -1f) || (iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_444())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_424(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_423(iParam5, 1, 0, 0), 16);
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
										iVar13 = -2;
									}
								}
								iVar16 = func_421(iVar3, 0);
								if (bVar2)
								{
									if (func_65(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_420(iParam5))
								{
									func_419(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_419(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_1448(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_22();
							}
							if (func_443(iVar3))
							{
								if (func_1448(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_435(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_36(iVar3) };
									iVar5 = func_429(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574123++;
									iVar16 = func_421(iVar3, 1);
									if (bVar2)
									{
										if (func_65(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_403(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_400(uParam3, iParam1);
						}
						func_3(&(uParam3->f_21));
						func_399();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_398(uParam3, iParam1);
							func_397(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_398(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_393(uParam3))
						{
							Global_1574308 = 1;
						}
						func_391(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_399();
			func_453(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_391(var uParam0)
{
	if (!func_12(&(uParam0->f_21)))
	{
		func_9(&(uParam0->f_21), 0, 0);
	}
	else if (func_18(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_392(0);
	}
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_22() && func_1448(iVar3, 0, 1))
	{
		Var2 = { func_36(iVar3) };
		iVar1 = func_396(uParam0, uParam0->f_37);
		if (func_395(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_394(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_394(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_394(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_394(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_394(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_394(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_394(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_395(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_396(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_397(int iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_398(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_399()
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_400(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_22())
		{
			if (func_1448(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_402(uParam0->f_38[iVar0 /*2*/], 0);
					func_401(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_401(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_402(int iParam0, bool bParam1)
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

void func_403(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_418() && iParam4 < func_417())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_416("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_416(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_416("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_416("");
			if (uParam3->f_108 == 6)
			{
				func_416("");
			}
			else
			{
				func_416(&sParam5);
			}
			func_408(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_407(uParam3))
			{
				func_406("DPAD_FRIEND");
			}
			else if (func_405(uParam3))
			{
				func_406("DPAD_FRIEND");
			}
			else if (func_404(uParam3))
			{
				func_406("DPAD_CREW");
			}
			else
			{
				func_406("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_404(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_405(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_406(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_407(var uParam0)
{
	if (func_405(uParam0) && func_404(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_408(var uParam0, int iParam1)
{
	if (func_415(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_412(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_409())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_409()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_410() || func_178())
		{
			return 1;
		}
	}
	return 0;
}

bool func_410()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_178();
	}
	return func_411(Global_4456448.f_122309);
}

int func_411(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_412(int iParam0)
{
	if ((func_1448(iParam0, 0, 1) && func_413()) && func_61(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_413()
{
	if (func_195(PLAYER::PLAYER_ID()) || func_414())
	{
		return 0;
	}
	return 1;
}

int func_414()
{
	switch (func_90(PLAYER::PLAYER_ID()))
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

int func_415(int iParam0)
{
	if (func_409())
	{
		if (func_1448(iParam0, 0, 1))
		{
			return func_66(iParam0);
		}
	}
	if ((func_1448(iParam0, 0, 1) && func_413()) && func_63(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_416(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_417()
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_418()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_419(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_418() && iParam3 < func_417())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_416("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_406(sParam16);
				}
				else
				{
					func_416(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_416("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_444())
				{
					func_416("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_406(&(uParam2->f_104));
					}
					else
					{
						func_416("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_416("");
				}
				if (uParam2->f_108 == 6)
				{
					func_416("");
				}
				else
				{
					func_416(&sParam4);
				}
				func_408(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_416("");
					func_416("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_407(uParam2))
				{
					func_406("DPAD_FRIEND");
				}
				else if (func_405(uParam2))
				{
					func_406("DPAD_FRIEND");
				}
				else if (func_404(uParam2))
				{
					func_406("DPAD_CREW");
				}
				else
				{
					func_406("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_420(int iParam0)
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

int func_421(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_195(iParam0)) && !func_422(iParam0))
	{
		iVar0 = func_119();
	}
	iVar1 = func_175(iParam0);
	if (!iVar1 == -1)
	{
		return func_173(iVar1);
	}
	return iVar0;
}

bool func_422(int iParam0)
{
	return func_24(iParam0, 20);
}

char* func_423(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (MISC::_0xD3D15555431AB793())
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
			if (MISC::_0xD3D15555431AB793())
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

int func_424(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_428(iParam3))
	{
		*fParam1 = (func_425(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_420(iParam3))
	{
		*fParam1 = (func_425(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_425(int iParam0, int iParam1)
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
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_427(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_426(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_426(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_427(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_428(int iParam0)
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

int func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		func_430(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_430(int iParam0, bool bParam1)
{
	if (!func_1448(iParam0, 0, 1))
	{
		return;
	}
	if (func_432(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_431(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (!func_1448(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1369176[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_433(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_433(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1369176[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1369337)
	{
		Global_1369176[iVar2 /*5*/] = { Global_1369176[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_434(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_434(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_22();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_435(int iParam0)
{
	char cVar0[32];
	
	if (func_1448(iParam0, 0, 1))
	{
		Global_2492157 = { func_36(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_395(Global_2492157))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2492157))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_439(&Global_2492157))
		{
			Global_2492087 = { func_437(iParam0) };
			func_436(&Global_2492087, &cVar0);
		}
	}
	return cVar0;
}

void func_436(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_437(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_438(iParam0))
	{
		return Global_1312886[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_36(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_438(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_439(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_141(iParam0) || func_442(iParam0)) || func_205(iParam0))
		{
			return 0;
		}
	}
	if (!func_441(iParam0))
	{
		return 0;
	}
	if ((!func_451(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_321(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_441(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 10) || MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_443(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_31(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_444()
{
	switch (func_90(PLAYER::PLAYER_ID()))
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
	switch (func_99(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_422(PLAYER::PLAYER_ID()))
	{
		switch (func_90(PLAYER::PLAYER_ID()))
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
	return 0;
}

int func_445(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_446(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_446(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_446(int iParam0)
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
			return 1;
		
		default:
	}
	return func_447(iParam0, 0);
	return 0;
}

int func_447(int iParam0, int iParam1)
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

void func_448(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1448(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_31(iVar1, 0))
			{
				if ((func_451(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_321(iVar1))
				{
					if (func_449(iVar1, iParam1, 0))
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

int func_449(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_22())
	{
		if (!bParam2)
		{
			if (func_450(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_22())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_450(int iParam0, int iParam1)
{
	if (iParam1 != func_22())
	{
		if (iParam0 != func_22())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_22())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_451(int iParam0)
{
	if (func_1448(iParam0, 0, 1))
	{
		if (func_1448(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_90(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_452(int iParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_453(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_454()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 1))
	{
		if (func_388())
		{
			func_455();
		}
	}
}

void func_455()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

int func_456()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 0) && func_388())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 1) && func_388())
	{
		return 1;
	}
	return 0;
}

int func_457()
{
	if (func_388())
	{
		if (func_41(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_458()
{
	if (func_388())
	{
		if (func_52(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_459(int iParam0)
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_460(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_507(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_506();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_505())
		{
			if (func_504() > 0 && Global_1574125)
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
		if (!func_492())
		{
			func_491(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_4556, 26))
	{
		func_491(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_12(&(uParam2->f_19)))
	{
		if (func_504() == 1)
		{
			func_490(bVar3, iParam0, 0);
			func_9(&(uParam2->f_19), 0, 0);
			func_491(iParam0, uParam2, 0);
		}
	}
	if (func_12(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_18(&(uParam2->f_19), 10000, 0) || (func_504() == 0 && !bParam5))
		{
			func_491(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_489();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_489();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_490(bVar3, iParam0, 0))
				{
					func_452(iParam0);
					sVar1 = func_487(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_485(iParam1) };
					if (bParam4)
					{
						func_482(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_476(iParam0, func_479(uParam2), func_477(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_468(iParam0, func_470(uParam2), func_469(), -1);
					}
					else if (func_409())
					{
						uParam2->f_34 = Global_1574124;
						func_482(iParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_482(iParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_461(iParam1);
						func_482(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_467())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
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
			if (func_466(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_465(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_464(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_462())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_462()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_50();
	}
	return func_463(Global_4456448.f_122309);
}

int func_463(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_464(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_465(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_466(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_467()
{
	return Global_4456448.f_1 == 0;
}

void func_468(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_406(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_406("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_469()
{
	switch (func_90(PLAYER::PLAYER_ID()))
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

char* func_470(var uParam0)
{
	switch (uParam0->f_112)
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
	switch (uParam0->f_110)
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
	switch (func_90(PLAYER::PLAYER_ID()))
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
			if (func_472())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_101(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_101(1))
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
			if (func_471(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_471(int iParam0)
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

bool func_472()
{
	return (func_475() && func_473(func_474()));
}

int func_473(int iParam0)
{
	return func_63(iParam0, 1);
}

int func_474()
{
	return Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_35;
}

bool func_475()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 148;
}

void func_476(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_406(sParam1);
		}
		else if (func_99(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_406("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_477(var uParam0)
{
	int iVar0;
	
	iVar0 = func_99(PLAYER::PLAYER_ID());
	if (func_478())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_116())
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

bool func_478()
{
	return Global_1595566;
}

char* func_479(var uParam0)
{
	int iVar0;
	
	iVar0 = func_99(PLAYER::PLAYER_ID());
	if (func_478())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_481() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_481() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_116())
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
			if (func_480() == 1)
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

int func_480()
{
	return Global_2512808.f_4780;
}

int func_481()
{
	if (func_99(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_482(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_416(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_406(sParam1);
		}
		if (func_505() && iParam6)
		{
			if (func_484())
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
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_406(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_483(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_50())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_483(int iParam0)
{
	if (func_466(iParam0) || func_465(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_484()
{
	return Global_1574125;
}

struct<4> func_485(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_486(PLAYER::PLAYER_ID()) || func_464(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_409() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_486(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_487(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_409() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_488();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		switch (iParam0)
		{
			case 0:
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

char* func_488()
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

void func_489()
{
	Global_36765 = 1;
}

bool func_490(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_491(int iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_399();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_12(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_492()
{
	if (func_503())
	{
		return 0;
	}
	if (func_502())
	{
		return 0;
	}
	if (!func_500())
	{
		return 0;
	}
	if (!func_498())
	{
		return 0;
	}
	if (func_497(8, -1))
	{
		return 0;
	}
	if (func_504() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	else if (!func_82(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_496(1) || func_494(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_1395(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_493(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_493(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2512808.f_4856.f_34, iParam0);
}

int func_494(bool bParam0)
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_495(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
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
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_495(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_496(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_497(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1357530.f_1048, iParam0);
}

int func_498()
{
	if (func_499() == 0)
	{
		return 1;
	}
	return 0;
}

int func_499()
{
	return Global_1312466.f_18;
}

int func_500()
{
	if (func_501())
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

bool func_501()
{
	return Global_1312438;
}

bool func_502()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 5;
}

bool func_503()
{
	return MISC::GET_GAME_TIMER() <= Global_17301.f_5745 + 100;
}

int func_504()
{
	return Global_1357530.f_68;
}

int func_505()
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_506()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_507(int iParam0)
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

int func_508()
{
	if (func_519())
	{
		return 1;
	}
	if (func_205(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_478())
	{
		return 1;
	}
	if (func_195(PLAYER::PLAYER_ID()))
	{
		switch (func_99(PLAYER::PLAYER_ID()))
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
				if (!func_509(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_509(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_509(PLAYER::PLAYER_ID()))
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

bool func_509(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_510(int iParam0)
{
	if ((iParam0 == 27 && func_195(PLAYER::PLAYER_ID())) && !func_422(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_26(PLAYER::PLAYER_ID(), 0) && func_422(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_511(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_195(iParam0) && !func_141(iParam0)) && !MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_422(iParam0);
	bVar3 = func_140();
	uVar4 = func_513();
	if ((bVar1 && (func_512(iParam0) || func_132(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_25(iParam0)) && !func_23(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_513()
{
	if ((func_24(PLAYER::PLAYER_ID(), 21) || func_24(PLAYER::PLAYER_ID(), 22)) || func_517())
	{
		return 1;
	}
	if (func_515())
	{
		func_514(22);
		return 1;
	}
	return 0;
}

void func_514(int iParam0)
{
	MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_4), iParam0);
}

int func_515()
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_140() && !func_139()) || func_138(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_516(27);
		}
	}
	return 0;
}

void func_516(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_4), iParam0);
}

int func_517()
{
	return func_518(306, -1);
}

int func_518(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2547365[iParam0 /*3*/][func_128(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_519()
{
	if (func_520(PLAYER::PLAYER_ID()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_31(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_521()
{
	if (func_383("HTP_INITHELP"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_383("HTP_NEARHELP"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_383("HTP_HOLDHELP"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_383("HTP_HOLDHELP2"))
	{
		HUD::CLEAR_HELP(1);
	}
}

int func_522(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (MISC::IS_BIT_SET(iLocal_105, 15))
	{
		return 1;
	}
	if (func_545(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_110())
	{
		return 1;
	}
	if (func_144(6))
	{
		return 1;
	}
	if (func_144(0))
	{
		return 1;
	}
	if (!func_533())
	{
		return 1;
	}
	if (func_526())
	{
		return 1;
	}
	if (func_524(4))
	{
		return 1;
	}
	if (func_523())
	{
		return 1;
	}
	if (func_202(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1655673)
	{
		return 1;
	}
	if (func_80(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_523()
{
	return Global_92885.f_316 > 0;
}

int func_524(int iParam0)
{
	int iVar0;
	
	if (func_523())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_233(iVar0) == iParam0)
			{
				if (func_525(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_525(int iParam0)
{
	return func_231(iParam0, 6, 1);
}

int func_526()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_376.f_5, 0))
	{
		return 1;
	}
	if (func_528() && Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_98 != 3)
	{
		return 1;
	}
	if (func_527() && Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574409.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_527()
{
	return MISC::IS_BIT_SET(Global_2447174, 5);
}

int func_528()
{
	if (((func_532() || func_531()) || func_530()) || func_529())
	{
		return 1;
	}
	return 0;
}

bool func_529()
{
	return MISC::IS_BIT_SET(Global_2447174, 1);
}

bool func_530()
{
	return MISC::IS_BIT_SET(Global_2447174, 2);
}

bool func_531()
{
	return MISC::IS_BIT_SET(Global_2447174, 20);
}

bool func_532()
{
	return Global_2447174.f_586;
}

int func_533()
{
	if (func_544(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_138(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (func_190(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_543())
	{
		return 0;
	}
	if (func_542(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_502())
	{
		return 0;
	}
	if (func_511(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_540(func_541()))
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_83(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_498())
	{
		return 0;
	}
	if (func_138(PLAYER::PLAYER_ID(), 0) || func_138(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_138(PLAYER::PLAYER_ID(), 12) || func_138(PLAYER::PLAYER_ID(), 14)) || func_138(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_92(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (func_538(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_523())
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_80(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_537())
	{
		return 0;
	}
	if (func_535(PLAYER::PLAYER_ID()) && Global_1595343.f_171)
	{
		return 0;
	}
	if (((((func_96(PLAYER::PLAYER_ID()) || func_534(PLAYER::PLAYER_ID())) || func_95(PLAYER::PLAYER_ID())) || func_93(PLAYER::PLAYER_ID())) || func_94(PLAYER::PLAYER_ID())) || func_270())
	{
		return 0;
	}
	return 1;
}

int func_534(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1448(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_22())
			{
				return func_21(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_535(int iParam0)
{
	if (func_536(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_536(int iParam0)
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

int func_537()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_538(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 11);
}

bool func_539()
{
	return Global_1312854;
}

int func_540(int iParam0)
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

int func_541()
{
	return Global_2436181.f_2592[0 /*79*/].f_1;
}

int func_542(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_543()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_39.f_18, 0);
}

bool func_544(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_545(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_546(var uParam0, var uParam1, var uParam2, bool bParam3)
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
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(*uParam0), 1) };
		if (!func_12(uParam1))
		{
			func_9(uParam1, 0, 0);
		}
		else if (func_18(uParam1, 1000, 0))
		{
			if (func_1177(NETWORK::NET_TO_ENT(*uParam0), 1215605247, 1, uParam2, 0, 500, 1, 0))
			{
				func_1176(&Global_1311923, &vVar1, &uVar2, 10f);
				if (bParam3)
				{
					func_1175(1);
					func_1174(1);
					func_1173(1);
					Global_2512808.f_4489 = 0;
				}
				bVar4 = true;
				bVar5 = true;
			}
			else if (func_1172(vVar0, func_216(39), func_218(39, 0)))
			{
				if (func_1168(39, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1172(vVar0, func_216(40), func_218(40, 0)))
			{
				if (func_1168(40, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1172(vVar0, func_216(41), func_218(41, 0)))
			{
				if (func_1168(41, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1172(vVar0, func_216(42), func_218(42, 0)))
			{
				if (func_1168(42, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1172(vVar0, func_216(43), func_218(43, 0)))
			{
				if (func_1168(43, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1172(vVar0, func_216(44), func_218(44, 0)))
			{
				if (func_1168(44, 0, &vVar1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				MISC::SET_BIT(&(Global_2512808.f_1710), 5);
				if (bParam3)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(*uParam0), 1))
					{
						iVar7 = 1;
					}
					else if (func_210(NETWORK::NET_TO_VEH(*uParam0), 1, 0, 0, 0, 0, 1, 0))
					{
						iVar7 = 2;
					}
				}
				else if (Global_1573339 && !bVar5)
				{
					iVar7 = 1;
				}
				else if (func_1165() && !bVar5)
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
					if (!MISC::IS_BIT_SET(Global_2512808.f_1710, 3))
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						MISC::SET_BIT(&(Global_2512808.f_1710), 6);
						MISC::SET_BIT(&(Global_2512808.f_1710), 3);
					}
					else if (!MISC::IS_BIT_SET(Global_2512808.f_1710, 4))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							MISC::SET_BIT(&(Global_2512808.f_1710), 4);
						}
					}
					else
					{
						bVar8 = false;
						if (func_1164(PLAYER::PLAYER_ID(), -1))
						{
							bVar8 = true;
						}
						if (!bVar6)
						{
							if (func_547(5, 0, 0, 0, 1, 0, 0, bVar8, 1, 3000, 1, 1, 0, 0, 0, 0, 0))
							{
								CAM::DO_SCREEN_FADE_IN(800);
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
								MISC::CLEAR_BIT(&(Global_2512808.f_1710), 6);
								MISC::CLEAR_BIT(&(Global_2512808.f_1710), 3);
								MISC::CLEAR_BIT(&(Global_2512808.f_1710), 4);
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
			else if (MISC::IS_BIT_SET(Global_2512808.f_1710, 6))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					MISC::CLEAR_BIT(&(Global_2512808.f_1710), 3);
					MISC::CLEAR_BIT(&(Global_2512808.f_1710), 4);
					MISC::CLEAR_BIT(&(Global_2512808.f_1710), 6);
				}
			}
			else if (MISC::IS_BIT_SET(Global_2512808.f_1710, 5))
			{
				Global_2512808.f_4489 = 0;
				func_1175(0);
				func_1174(0);
				func_1173(0);
				MISC::CLEAR_BIT(&(Global_2512808.f_1710), 5);
			}
			func_3(uParam1);
		}
	}
}

int func_547(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_1163();
	if (func_1162(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && func_1448(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_237 == 1)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2405047.f_675 == iParam0)
		{
			if (bParam15 && Global_2405047.f_675 == 37)
			{
			}
			else if (!Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_676) < func_377(0))
				{
					return 0;
				}
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 0;
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 0)
		{
			Global_2405047.f_675 = iParam0;
			Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 2;
			if (bParam2)
			{
				if (!func_307())
				{
					bParam2 = false;
				}
			}
			Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 2;
			Global_2405047.f_2445 = 0;
			Global_2405047.f_2446 = 0;
			Global_2405047.f_2444 = 0;
			Global_2405047.f_2836 = 0;
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2405047.f_675 == 11)
			{
				Global_2405047.f_679 = { Global_2413426 };
				Global_2405047.f_682 = Global_2413426.f_5;
				Global_2405047.f_2856 = Global_2413426.f_26;
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 3;
			}
			else if (func_1028(&(Global_2405047.f_679), &(Global_2405047.f_682), Global_2405047.f_675, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam16))
			{
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 3;
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						func_1023(&iVar2);
					}
					else
					{
						iVar2 = func_1022();
						func_1021(&iVar2);
					}
					if (func_307())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == Global_2405047.f_44.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (iVar4 == Global_2405047.f_44.f_172)
								{
									func_1019();
								}
								BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_1002(iVar2);
							func_1001(1);
							Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					func_1001(1);
					Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 6;
				}
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 4)
		{
			if (func_998())
			{
				if (Global_2405047.f_44.f_65)
				{
					if (func_795(Global_2405047.f_679, Global_2405047.f_679.f_1, func_994(Global_2405047.f_44.f_67), Global_2405047.f_682, 0))
					{
						Global_2405047.f_677 = NETWORK::GET_NETWORK_TIME();
						Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 5;
					}
				}
				else if (func_794(Global_2405047.f_44.f_67) || Global_2405047.f_44.f_67 == 0)
				{
					Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 6;
				}
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 6;
				if (Global_2405047.f_44.f_174)
				{
					Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_242 = 1;
				}
				else
				{
					Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_242 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_677) > 5000)
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 4;
			}
			else if (BRAIN::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2405047.f_44.f_172) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2405047.f_44.f_172, 0))
				{
					func_600(PLAYER::PLAYER_PED_ID(), Global_2405047.f_44.f_172, -1, 0);
				}
				else
				{
					BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 4;
				}
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 6)
		{
			Global_2405047.f_676 = NETWORK::GET_NETWORK_TIME();
			if (Global_2405047.f_685)
			{
				Global_2405047.f_678 = NETWORK::GET_NETWORK_TIME();
				Global_2405047.f_685 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405047.f_678)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1574312)
			{
				func_594(Global_2405047.f_679);
			}
			if (bParam7 && !Global_2436181.f_1117)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)) || func_593(iVar2))
						{
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_586(Global_2405047.f_679, Global_2405047.f_682, bVar1, bParam1, 0, 0, 1, bParam4, 1, 1, Global_2405047.f_2856))
				{
					if (bParam15)
					{
						Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 7;
						return 0;
					}
					else
					{
						func_582();
					}
				}
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 7)
		{
			if ((Global_2405047.f_675 == 8 && Global_2405047.f_687.f_507) && Global_2405047.f_2836)
			{
				func_582();
			}
			else if (func_576(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if (Global_2405047.f_675 == 8 && !Global_2405047.f_2836)
				{
					Global_2405047.f_2836 = 1;
				}
				else
				{
					Global_2405047.f_675 = 37;
				}
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 2;
				Global_2405047.f_2445 = 0;
				Global_2405047.f_2446 = 0;
				Global_2405047.f_2444 = 0;
			}
			else
			{
				func_582();
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 10)
		{
			if (SYSTEM::VDIST(Global_2413426, Global_2405047.f_679) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2405047.f_679, Global_2405047.f_679.f_1, Global_2405047.f_679.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_2405047.f_679.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2413426, Global_2405047.f_679) > 15f)
							{
								Global_2405047.f_679 = { Global_2413426 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2405047.f_679, Global_2405047.f_679.f_1, (fVar0 + func_575(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, false, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
								}
								Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 11;
							}
							else
							{
								Global_2405047.f_679.f_2 = (Global_2405047.f_679.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2405047.f_679, Global_2405047.f_679.f_1, (fVar0 + func_575(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, false, 0, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
							}
							Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 11;
						}
					}
					else
					{
						Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 11;
					}
				}
				else
				{
					Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 11;
				}
			}
			else
			{
				Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 11;
			}
		}
		if (Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2405047.f_44.f_172) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2405047.f_44.f_172))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2405047.f_44.f_172, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_568(iParam9, 0, 0);
				}
			}
			func_566(func_382(PLAYER::PLAYER_ID()), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2405047.f_44.f_172))
			{
				func_1019();
			}
			if (!(func_794(Global_2405047.f_44.f_67) || Global_2405047.f_44.f_67 == 0) && !Global_2405047.f_483.f_5)
			{
				func_565();
			}
			func_564(0, 0);
			if (bParam10)
			{
				func_563();
			}
			func_562();
			func_550();
			if (bParam13)
			{
				func_549();
			}
			func_548();
			return 1;
		}
	}
	else if (!Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 == 0)
	{
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_1021(&(Global_2405047.f_44.f_172));
		func_548();
	}
	Global_2405047.f_676 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_548()
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

void func_549()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405047.f_665[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405047.f_665[iVar0])
			{
				if (!Global_2405047.f_661[iVar0] == -1)
				{
					if (NETWORK::_0xE64A3CA08DFA37A9(Global_2405047.f_661[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405047.f_661[iVar0]);
						Global_2405047.f_661[iVar0] = -1;
					}
					else
					{
						Global_2405047.f_661[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405047.f_661[iVar0] == -1)
		{
			Global_2405047.f_661[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_550()
{
	int iVar0;
	
	Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_276.f_20 = -1;
	Global_2405047.f_2833 = -1f;
	iVar0 = 0;
	while (iVar0 < 36)
	{
		func_552(iVar0);
		iVar0++;
	}
	if (func_551(PLAYER::PLAYER_ID(), 0))
	{
		Global_2520904.f_77 = 1;
		Global_2520904.f_78 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_551(int iParam0, bool bParam1)
{
	if (func_1448(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2422736[iParam0 /*420*/].f_276.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2422736[iParam0 /*420*/].f_276.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_552(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_2422736[iVar0 /*420*/].f_276.f_14 != -1)
	{
		if (func_561(Global_2422736[iVar0 /*420*/].f_276.f_14))
		{
			if (!func_557(PLAYER::PLAYER_ID(), Global_2422736[iVar0 /*420*/].f_276.f_14, 0, 0))
			{
				Global_2422736[iVar0 /*420*/].f_276.f_14 = -1;
			}
		}
		else
		{
			Global_2422736[iVar0 /*420*/].f_276.f_14 = -1;
		}
	}
	if (Global_2422736[iVar0 /*420*/].f_276.f_16 != -1)
	{
		if (func_561(Global_2422736[iVar0 /*420*/].f_276.f_16))
		{
			if (!func_557(PLAYER::PLAYER_ID(), Global_2422736[iVar0 /*420*/].f_276.f_16, 0, 1))
			{
				Global_2422736[iVar0 /*420*/].f_276.f_16 = -1;
			}
		}
		else
		{
			Global_2422736[iVar0 /*420*/].f_276.f_16 = -1;
		}
	}
	if (Global_2422736[iVar0 /*420*/].f_276.f_15 != -1)
	{
		if (!func_557(PLAYER::PLAYER_ID(), Global_2422736[iVar0 /*420*/].f_276.f_15, 0, 0))
		{
			Global_2422736[iVar0 /*420*/].f_276.f_15 = -1;
		}
	}
	if (func_561(iParam0))
	{
		if (func_557(PLAYER::PLAYER_ID(), iParam0, 0, 0))
		{
			if (!Global_2422736[iVar0 /*420*/].f_276.f_14 == iParam0)
			{
				Global_2422736[iVar0 /*420*/].f_276.f_14 = iParam0;
			}
		}
		if (func_557(PLAYER::PLAYER_ID(), iParam0, 0, 1))
		{
			if (!Global_2422736[iVar0 /*420*/].f_276.f_16 == iParam0)
			{
				Global_2422736[iVar0 /*420*/].f_276.f_16 = iParam0;
			}
		}
		iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
		if (func_554(PLAYER::PLAYER_ID(), iParam0, 1120403456))
		{
			MISC::SET_BIT(&(Global_2422736[iVar0 /*420*/].f_276.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2422736[iVar0 /*420*/].f_276.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = SYSTEM::VDIST(func_553(iParam0), func_382(PLAYER::PLAYER_ID()));
		if (iParam0 == Global_2422736[iVar0 /*420*/].f_276.f_20)
		{
			Global_2405047.f_2833 = fVar1;
		}
		else if (fVar1 < Global_2405047.f_2833 || Global_2405047.f_2833 <= 0f)
		{
			Global_2405047.f_2833 = fVar1;
			Global_2422736[iVar0 /*420*/].f_276.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2422736[iVar0 /*420*/].f_276.f_20)
	{
		Global_2422736[iVar0 /*420*/].f_276.f_20 = -1;
		Global_2405047.f_2833 = -1f;
	}
	if (func_557(PLAYER::PLAYER_ID(), iParam0, 0, 0))
	{
		if (!Global_2422736[iVar0 /*420*/].f_276.f_15 == iParam0)
		{
			Global_2422736[iVar0 /*420*/].f_276.f_15 = iParam0;
		}
	}
}

Vector3 func_553(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_4;
}

int func_554(int iParam0, int iParam1, float fParam2)
{
	if (func_556(iParam1))
	{
		return func_555(func_382(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_555(vector3 vParam0, int iParam1, float fParam2)
{
	if (func_556(iParam1))
	{
		if (SYSTEM::VDIST2(vParam0, func_553(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_556(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_557(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_556(iParam1))
	{
		if (!bParam3)
		{
			return func_558(func_382(iParam0), iParam1, fParam2);
		}
		else if (func_558(func_382(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_558(func_382(iParam0), iParam1, 15f))
		{
			if (func_1448(iParam0, 1, 1))
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

int func_558(vector3 vParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_556(iParam1))
	{
		func_559(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true);
	}
	return 0;
}

void func_559(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { func_553(iParam0) };
	fVar1 = func_560(iParam0);
	vVar2 = { 0f, 1f, 0f };
	func_257(&vVar2, 0f, 0f, fVar1);
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	*uParam1 = { vVar0 + vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_560(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_7;
}

int func_561(int iParam0)
{
	if (func_556(iParam0))
	{
		return Global_2520904.f_2[iParam0];
	}
	return 0;
}

void func_562()
{
	Global_1625995 = -1;
	Global_1625999 = 0;
	Global_1625996 = -1;
}

void func_563()
{
	Global_2405047.f_5 = 1;
}

void func_564(float fParam0, int iParam1)
{
	vector3 vVar0;
	
	if (!func_539() || iParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				vVar0 = { func_382(PLAYER::PLAYER_ID()) };
				if (vVar0.z > -80f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
				}
			}
		}
	}
}

void func_565()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		vVar0.z = (vVar0.z + (0.3f * IntToFloat(Global_2405047.f_683)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar1, 0, 0))
		{
			fVar2 = (vVar0.z - (fVar1 + 1f));
			if (MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar0.x, vVar0.y, fVar1, 0, true, 0, 1);
				Global_2405047.f_683 = 0;
			}
		}
		else if (Global_2405047.f_683 < 3)
		{
			Global_2405047.f_683++;
			func_565();
		}
		else
		{
			Global_2405047.f_683 = 0;
		}
	}
}

void func_566(vector3 vParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		fVar1 = func_567(ENTITY::GET_ENTITY_MODEL(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		MISC::CLEAR_AREA(vParam0, fVar1, 1, 0, 0, bParam1);
		MISC::CLEAR_AREA_OF_VEHICLES(vParam0, fVar1, 1, 0, 1, 1, bParam1, 0);
		FIRE::STOP_FIRE_IN_RANGE(vParam0, 6f);
	}
	else
	{
		iVar6 = SHAPETEST::_START_SHAPE_TEST_RAY(vParam0.x, vParam0.y, (vParam0.z - 2f), vParam0.x, vParam0.y, (vParam0.z + 1f), 19, 0, 7);
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

float func_567(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_252(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_1 - Var1.f_1));
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_574())
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_572(iVar1, &iVar0))
		{
			func_569(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
	}
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		if (Global_1574306 && VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, 1, 1);
			return;
		}
		else if (func_571())
		{
			func_570(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, iParam2, 1);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
			{
				NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam2);
			}
		}
		else
		{
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, iParam1, 1);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
			{
				NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam1);
			}
		}
	}
}

int func_570(int iParam0, int iParam1)
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
			if (iParam1 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
			{
				NETWORK::_0xA7C511FA1C5BDA38(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::_SET_NETWORK_VEHICLE_NON_CONTACT(iParam0, 1);
		return 1;
	}
	else
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	return 0;
}

bool func_571()
{
	return Global_1574324;
}

int func_572(int iParam0, int iParam1)
{
	if (func_573(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_573(int iParam0, var uParam1)
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

int func_574()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_575(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_252(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((vVar0.z - vVar1.z));
}

int func_576(vector3 vParam0)
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
	
	iVar0 = VEHICLE::_GET_ALL_VEHICLES(&Global_1315823);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5, 0))
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar5, 1) };
			fVar8 = ENTITY::GET_ENTITY_HEADING(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1315823[iVar4]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1315823[iVar4], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1315823[iVar4], 0))
			{
			}
			else if (func_581(Global_1315823[iVar4]))
			{
			}
			else if (!func_577(Global_1315823[iVar4]))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1315823[iVar4], 0) };
				fVar2 = ENTITY::GET_ENTITY_HEADING(Global_1315823[iVar4]);
				iVar3 = ENTITY::GET_ENTITY_MODEL(Global_1315823[iVar4]);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_353(vVar1, fVar2, iVar3, vVar7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_250(vParam0, vVar1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_577(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (func_1448(iVar1, 0, 0))
				{
					if (func_578(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_578(int iParam0)
{
	if (func_580())
	{
		if (func_579(NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0), &(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_350.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_579(int iParam0, var uParam1)
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

int func_580()
{
	if (Global_2405047.f_2837 > -1)
	{
		return 1;
	}
	return 0;
}

int func_581(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
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

void func_582()
{
	if (!Global_2405047.f_685)
	{
		Global_2405047.f_685 = 1;
	}
	func_1001(0);
	if (Global_2405047.f_2633)
	{
		func_583();
		Global_2405047.f_2633 = 0;
	}
	Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_222 = 11;
}

void func_583()
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
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if ((!Global_2405047.f_44.f_52 && !Global_2405047.f_44.f_53) && !Global_2405047.f_2634)
		{
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar1, &vVar2, 1, 1077936128, 0))
			{
				vVar2.z = (vVar2.z + 1f);
				bVar3 = true;
				if (!SYSTEM::VDIST(vVar1, vVar2) < 50f || Global_2405047.f_44.f_52)
				{
					bVar3 = false;
				}
			}
		}
		else if (Global_2405047.f_2634)
		{
			Global_2405047.f_2634 = 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			fVar4 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		}
		fVar5 = 3f;
		vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * Vector(fVar5, fVar5, fVar5) };
		vVar7 = { vVar6 };
		func_257(&vVar7, 0f, 0f, -45f);
		vVar8 = { vVar6 };
		func_257(&vVar8, 0f, 0f, -90f);
		vVar9 = { vVar6 };
		func_257(&vVar9, 0f, 0f, 45f);
		vVar10 = { vVar6 };
		func_257(&vVar10, 0f, 0f, 90f);
		if (bVar3)
		{
			vVar11 = { vVar2 - vVar1 };
			vVar12 = { func_246(vVar11, 0f, 0f, 1f) };
			vVar12 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
			vVar12 = { vVar12 * Vector(0.2f, 0.2f, 0.2f) };
		}
		vVar13 = { vVar1 + vVar6 };
		vVar14 = { vVar1 + vVar7 };
		vVar15 = { vVar1 + vVar8 };
		vVar16 = { vVar1 + vVar9 };
		vVar17 = { vVar1 + vVar10 };
		iVar18 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar13, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar19 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar14, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar15, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar21 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar16, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		iVar22 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar17, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
		if (bVar3)
		{
			iVar23 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar2, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
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
		iVar41 = -1;
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
			func_585(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_2405047.f_44.f_52)
		{
			vVar42 = { Global_2405047.f_44.f_49 - vVar1 };
			fVar43 = func_245(vVar42, vVar15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_585(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_585(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_585(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_585(fVar4);
					return;
				}
				else
				{
					func_584(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_585(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_585(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_585(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_585(fVar4);
				return;
			}
			else
			{
				func_584(iVar41, fVar4, vVar11);
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
					func_585(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_585(fVar4);
					return;
				}
				else
				{
					func_584(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_585(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_585(fVar4);
				return;
			}
			else
			{
				func_584(iVar41, fVar4, vVar11);
			}
		}
	}
}

void func_584(int iParam0, float fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_585(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_585(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_585(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_585(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Param2, Param2.f_1);
			func_585(fParam1);
			return;
			break;
	}
}

void func_585(float fParam0)
{
	if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
	}
	func_564(0f, 1);
}

int func_586(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_17162.f_6 = 1;
	if (Global_2436181.f_1117 && Global_2436181.f_1125)
	{
		func_590(0, bParam7);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7)
	{
		if (Global_2436181.f_1117)
		{
			func_590(0, bParam7);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_589())
	{
		if (func_1162(PLAYER::PLAYER_ID(), 1, 0))
		{
			if (((bParam7 && func_1448(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_237 == 1)
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
	if (!Global_2436181.f_1117 && !bParam9)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if ((MISC::ABSF((vVar1.x - vParam0.x)) < 0.2f && MISC::ABSF((vVar1.y - vParam0.y)) < 0.2f) && MISC::ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
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
				Global_2436181.f_1117 = 0;
				Global_2436181.f_1118 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2436181.f_1119 || !vParam0.y == Global_2436181.f_1119.f_1) || !vParam0.z == Global_2436181.f_1119.f_2) || !fParam1 == Global_2436181.f_1122)
	{
		if (Global_2436181.f_1117 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2436181.f_1123) < func_377(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2436181.f_1118 = 1;
		}
		else
		{
			Global_2436181.f_1118 = 0;
		}
		Global_2436181.f_1119 = { vParam0 };
		Global_2436181.f_1122 = fParam1;
		Global_2436181.f_1117 = 0;
	}
	if (!Global_2436181.f_1117 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(Global_92885.f_1322[44], 16))
			{
				func_588();
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2405047.f_495)))
			{
				Global_2405047.f_495 = 0;
			}
		}
		if (bParam2)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2436181.f_1124 = 0;
				}
			}
		}
		if (Global_2436181.f_1124 > -1)
		{
			Global_2436181.f_1123 = NETWORK::GET_NETWORK_TIME();
			Global_2436181.f_1117 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, 0, true, 1, 1);
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
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 0, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 0, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				}
				func_590(bParam4, bParam7);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam0, fParam1, bParam2, bParam8, 0);
			}
			Global_2436181.f_1123 = NETWORK::GET_NETWORK_TIME();
			Global_2436181.f_1117 = 1;
		}
	}
	if (Global_2436181.f_1117)
	{
		Global_17162.f_6 = 1;
		Global_2436181.f_1123 = NETWORK::GET_NETWORK_TIME();
		if (Global_2436181.f_1124 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_587(&(Global_2436181.f_1124), vParam0, fParam1, iVar0))
			{
				func_590(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2436181.f_1119) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_590(bParam4, bParam7);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam10 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2436181.f_1125 = 1;
						return 0;
					}
				}
				func_590(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_587(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2436181.f_1126) && !ENTITY::IS_ENTITY_DEAD(Global_2436181.f_1126, 0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2436181.f_1126);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2436181.f_1126 = iParam3;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2436181.f_1126);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2436181.f_1126))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2436181.f_1126, 0))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2436181.f_1126, fParam2);
					ENTITY::SET_ENTITY_COORDS(Global_2436181.f_1126, vParam1, 0, true, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_588()
{
	int iVar0;
	
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2405047.f_2648 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405047.f_2647)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405047.f_2647 = iVar0;
		}
	}
}

bool func_589()
{
	return Global_1312831;
}

void func_590(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_592();
	if (!MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 14))
	{
		func_591();
	}
}

void func_591()
{
	Global_2520904.f_80 = 1;
}

void func_592()
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

int func_593(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
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

void func_594(vector3 vParam0)
{
	Global_2405047.f_44.f_299 = 1;
	Global_2405047.f_44.f_296 = { vParam0 };
	func_595(1);
}

void func_595(bool bParam0)
{
	float fVar0;
	
	if (Global_1574312 || Global_2405047.f_44.f_300)
	{
		if (Global_2405047.f_44.f_299)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (Global_1574316)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_2405047.f_44.f_296) < fVar0 || func_599(PLAYER::PLAYER_ID())) || func_1162(PLAYER::PLAYER_ID(), 0, 0)))
				{
					if ((func_598() || func_597()) || func_596())
					{
						if (PAD::IS_CONTROL_PRESSED(0, 351))
						{
							Global_2405047.f_44.f_315 = NETWORK::_0x89023FBBF9200E9F();
							func_568(1000, 0, 1);
						}
						else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2405047.f_44.f_315, NETWORK::_0x89023FBBF9200E9F())) > 2000)
						{
							func_568(2500, 0, bParam0);
							Global_2405047.f_44.f_315 = NETWORK::_0x89023FBBF9200E9F();
						}
					}
					else
					{
						Global_2405047.f_44.f_315 = NETWORK::_0x89023FBBF9200E9F();
						func_568(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2405047.f_44.f_296 = { 0f, 0f, 0f };
					Global_2405047.f_44.f_299 = 0;
				}
			}
		}
	}
}

int func_596()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("thruster"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_597()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_598()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_599(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_222 != 0)
	{
		return 1;
	}
	return 0;
}

void func_600(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!func_793(iParam0, iParam1, bVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
		if (!SYSTEM::VDIST(vVar1, vVar2) < 5f || !iParam2 == -1)
		{
			vVar2.z = (vVar2.z + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar2, 0, false, 0, 1);
		}
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			BRAIN::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::_0x2208438012482A1A(iParam0, 0, 0);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1574312)
		{
			if (func_792(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_601(0);
			}
		}
	}
}

void func_601(bool bParam0)
{
	struct<14> Var0;
	int iVar1;
	
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4456448.f_144004 == 0)
		{
			if ((Global_2405047.f_2657 == -99 || Global_2405047.f_2657 == 0) || !func_791(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2405047.f_2657, -1))
			{
				if (!bParam0)
				{
					iVar1 = func_127(585, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2405047.f_2657;
			}
			Var0 = { func_748(func_790(), 14, iVar1) };
			func_747(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_602(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_602(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_602(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
	float fVar52;
	int iVar53;
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
	var uVar64;
	int iVar65;
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
	var uVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1312788 != 4 && Global_1312788 != 5) && Global_1312788 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_237 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_70668;
	}
	Global_70669++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
		if (!func_746(iParam3))
		{
			Global_70669 = (Global_70669 - 1);
			return 0;
		}
		func_741(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_70714 };
		}
		else
		{
			uVar15 = { func_737(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_70671[1 /*14*/] = { func_748(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_736(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 1))
					{
						func_741(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_70671[1 /*14*/] = { func_748(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_70731 };
							}
							else
							{
								uVar16 = { func_733(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_70671[1 /*14*/] = { func_748(iVar5, 14, uVar16[iVar1]) };
								func_732(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 1))
								{
									func_741(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_736(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_602(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 1))
							{
								func_741(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_70671[1 /*14*/] = { func_748(iVar5, iVar0, func_728(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_737(iVar5, 0) };
					func_602(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_727();
			if (iVar18 != -1)
			{
				func_725(iVar18, 0, iParam10);
			}
			func_721(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_733(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_70671[1 /*14*/] = { func_748(iVar5, 14, uVar19[iVar1]) };
			func_732(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 1))
			{
				func_741(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_70669 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_719(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_602(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_732(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 1))
		{
			func_741(iVar5, iParam1, iParam2, 1);
		}
		if (Global_70671[1 /*14*/].f_12 == 0)
		{
			if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 6) && FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
				if (FILES::_0x341DE7ED1D2A1BFD(iVar20, 66092876, 0))
				{
					func_602(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
				}
			}
		}
		if (Global_70671[1 /*14*/].f_12 == 0)
		{
			func_715(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_70669 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_719(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_602(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_719(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_602(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar21 = -1;
				if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 6) && FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11))
				{
					PED::_0xCC9682B8951C5229(iParam0, Global_1314011, Global_1314012, Global_1314013, 0);
					PED::_0xCC9682B8951C5229(iParam0, Global_1314011, Global_1314012, Global_1314013, 1);
					PED::_0xCC9682B8951C5229(iParam0, Global_1314011, Global_1314012, Global_1314013, 2);
					PED::_0xCC9682B8951C5229(iParam0, Global_1314011, Global_1314012, Global_1314013, 3);
				}
				iVar22 = func_713(iParam0, 11);
				iVar23 = func_713(iParam0, 8);
				iVar24 = func_713(iParam0, 4);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_712(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_712(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::_0x341DE7ED1D2A1BFD(iVar21, 320460654, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -2017999390, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -1855618474, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -1420825402, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_713(iParam0, 8);
					}
				}
				iVar25 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::_0x341DE7ED1D2A1BFD(iVar25, -356646862, 0))
				{
					iVar26 = func_711(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == -99)
					{
						iVar26 = func_719(iParam0, iVar5, 11, iVar22, 3, 0);
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
							iVar21 = func_712(iVar5, iParam2, 11, 4);
							if (!FILES::_0x341DE7ED1D2A1BFD(iVar21, -530089825, 0))
							{
								iVar26 = -99;
							}
							break;
					}
					if (iVar26 != -99)
					{
						iVar27 = 0;
						while (iVar27 < 17)
						{
							if (func_710(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar22 = func_713(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_712(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0))
					{
						iVar28 = func_708(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar28 != -99)
						{
							func_602(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (func_707(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_712(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_712(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_707(iVar5, iVar22, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (FILES::_0x341DE7ED1D2A1BFD(iVar21, -1200513218, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((FILES::_0x341DE7ED1D2A1BFD(iVar21, 684992453, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar21, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -820724897, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, 153792394, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -872449705, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, 700658917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_706(iParam0, iParam2);
							iVar30 = func_708(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar30 != -99)
							{
								func_602(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else if (iVar29 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4264923))
							{
								func_602(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_704(iVar5, 11, -1);
									Global_70671[1 /*14*/] = { func_748(iVar5, 11, iVar31) };
									iVar30 = func_708(iVar5, iVar31, iParam2, Global_70671[1 /*14*/].f_4);
									if (iVar30 == -99 || FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_602(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_70671[1 /*14*/] = { func_748(iVar5, 11, iVar22) };
						iVar32 = Global_70671[1 /*14*/].f_3;
						Global_70671[1 /*14*/] = { func_748(iVar5, 11, iParam2) };
						iVar33 = Global_70671[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_706(iParam0, iParam2);
							Global_70671[1 /*14*/] = { func_748(iVar5, 8, iVar23) };
							iVar34 = Global_70671[1 /*14*/].f_4;
							iVar36 = func_703(iVar5, iVar23, iVar34);
							if (iVar35 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4264923))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == -99)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_712(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_702(iVar38) == 6) || FILES::_0x341DE7ED1D2A1BFD(iVar38, -1237899132, 0))
									{
										iVar36 = func_704(iVar5, 11, -1);
										Global_70671[1 /*14*/] = { func_748(iVar5, 11, iVar36) };
										iVar37 = func_708(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar36 = func_704(iVar5, 11, -1);
										Global_70671[1 /*14*/] = { func_748(iVar5, 11, iVar36) };
										iVar37 = func_708(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
									}
								}
								iVar39 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_712(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_712(iVar5, iVar23, 8, 4);
								}
								if (FILES::_0x341DE7ED1D2A1BFD(iVar39, -316495692, 0))
								{
									iVar36 = func_704(iVar5, 11, -1);
									Global_70671[1 /*14*/] = { func_748(iVar5, 11, iVar36) };
									iVar37 = func_708(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_708(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_701(iVar5, func_713(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_701(iVar5, func_713(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != -99)
							{
								func_602(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_704(iVar5, 11, -1);
								Global_70671[1 /*14*/] = { func_748(iVar5, 11, iVar36) };
								iVar37 = func_708(iVar5, iVar36, iParam2, Global_70671[1 /*14*/].f_4);
								if (iVar37 == -99)
								{
									iVar37 = 240;
								}
								func_602(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_602(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
						}
					}
				}
				func_698(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_721(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_711(iVar5, func_728(iParam0, 8, -1), iParam2, func_728(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_127(2148, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_127(2155, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_659(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar40 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::_0x341DE7ED1D2A1BFD(iVar40, -356646862, 0))
			{
				iVar41 = func_713(iParam0, 11);
				iVar42 = func_713(iParam0, 4);
				iVar43 = func_711(iVar5, iParam2, iVar41, iVar42);
				if (iVar43 == -99)
				{
					iVar43 = func_719(iParam0, iVar5, 11, iVar41, 3, 0);
				}
				switch (iVar40)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar43 = 11;
						iVar44 = func_712(iVar5, iParam2, 11, 4);
						if (!FILES::_0x341DE7ED1D2A1BFD(iVar44, -530089825, 0))
						{
							iVar43 = -99;
						}
						break;
				}
				if (iVar43 != -99)
				{
					iVar45 = 0;
					while (iVar45 < 17)
					{
						if (func_710(iVar5, iVar43, iVar45) == iVar40)
						{
							iVar11 = iVar45;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar45++;
					}
				}
			}
			func_721(iParam0, iParam1, iParam2, iParam6, 0);
			iVar46 = func_713(iParam0, 11);
			if (func_707(iVar5, iVar46, -1))
			{
				iVar47 = func_703(iVar5, iParam2, Global_70671[1 /*14*/].f_4);
				func_698(iVar5, iVar47);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_711(iVar5, iParam2, func_713(iParam0, 11), func_713(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar48 = func_713(iParam0, 7);
				if (!func_656(iVar5, iVar48, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)))
			{
				iVar49 = func_127(2095, iParam10, 0);
				iVar50 = func_127(2096, iParam10, 0);
				iVar51 = func_127(2097, iParam10, 0);
				fVar52 = func_655(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar49, iVar50, iVar51, 0f, fVar52, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar49, iVar50, iVar51, 0f, fVar52, 0f, false);
				}
				iVar53 = 0;
				while (iVar53 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar53, 0f);
					iVar53++;
				}
			}
			else
			{
				func_639(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar54 = func_713(iParam0, 11);
			iVar55 = func_713(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iVar54, 11, 3), -1719338724, 0))
				{
					if (!func_701(iVar5, iParam2, func_703(iVar5, iVar55, 0)))
					{
						func_602(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(func_712(iVar5, iVar54, 11, 4), -1719338724, 0))
				{
					if (!func_701(iVar5, iParam2, func_703(iVar5, iVar55, 0)))
					{
						func_602(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_70671[1 /*14*/] = { func_748(iVar5, iParam1, iParam2) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_711(iVar5, func_713(iParam0, 8), func_713(iParam0, 11), iParam2);
			}
			iVar56 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::_0x341DE7ED1D2A1BFD(iVar56, -356646862, 0))
			{
				iVar57 = func_711(iVar5, iVar55, iVar54, iParam2);
				if (iVar57 == -99)
				{
					iVar57 = func_719(iParam0, iVar5, 11, iVar54, 3, 0);
				}
				switch (iVar56)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar57 = 11;
						iVar58 = func_712(iVar5, iParam2, 11, 4);
						if (!FILES::_0x341DE7ED1D2A1BFD(iVar58, -530089825, 0))
						{
							iVar57 = -99;
						}
						break;
				}
				if (iVar57 != -99)
				{
					iVar59 = 0;
					while (iVar59 < 17)
					{
						if (func_710(iVar5, iVar57, iVar59) == iVar56)
						{
							iVar11 = iVar59;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar59++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(iParam1), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_736(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_736(iParam1), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_70669 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_719(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_602(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_711(iVar5, iVar3, func_713(iParam0, 11), func_713(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_719(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_602(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_638(iParam0))
				{
					iVar60 = func_636(iParam0, iVar5, iParam1, iParam2);
					if (iVar60 > 0)
					{
						iVar60 = (iVar60 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_630(iParam0, 9, iVar60))
						{
							func_602(iParam0, 9, iVar60, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_602(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_602(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar61 = func_127(2037, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_624(iParam0, iVar61), func_623(iParam0, iVar61), func_622(iParam0, iVar61));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_624(PLAYER::PLAYER_PED_ID(), iVar61), func_623(PLAYER::PLAYER_PED_ID(), iVar61), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_622(PLAYER::PLAYER_PED_ID(), iVar61));
					func_619(PLAYER::PLAYER_ID(), iVar61);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, 0))
					{
						func_602(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar62 = func_728(iParam0, 4, -1);
					iVar63 = iParam2;
				}
				else
				{
					iVar62 = iParam2;
					iVar63 = func_728(iParam0, 11, -1);
				}
				if (func_618(iVar5, 11, iVar63, -1))
				{
					if (!func_617(iVar5, 4, iVar62, -1))
					{
						if (func_616(iVar5, 4, iVar62, &uVar64))
						{
							func_602(iParam0, 4, uVar64, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_617(iVar5, 4, iVar62, -1))
				{
					if (func_615(iVar5, 4, iVar62, &uVar64))
					{
						func_602(iParam0, 4, uVar64, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar65 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar66 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar67 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar65, iVar66);
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar68, iVar69);
				iVar71 = func_713(iParam0, 4);
				iVar72 = func_713(iParam0, 6);
				if (func_614(iVar5, iVar67))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar67, 1812005517, 0) != func_613(iVar5, iVar71, iVar67))
					{
						iVar73 = FILES::_0xC17AD0E5752BECDA(iVar67);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							FILES::GET_VARIANT_COMPONENT(iVar67, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 6)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_610(iVar5, iVar75, 6, 3);
										iVar67 = iVar75;
										func_602(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_610(iVar5, iVar75, 6, 4);
										iVar67 = iVar75;
										func_602(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar70, -2042643157, 0) != func_609(iVar5, iVar72, iVar70))
					{
						iVar73 = FILES::_0xC17AD0E5752BECDA(iVar70);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 4)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar71 = func_610(iVar5, iVar75, 4, 3);
										iVar70 = iVar75;
										func_602(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar71 = func_610(iVar5, iVar75, 4, 4);
										iVar70 = iVar75;
										func_602(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
				}
				if (func_614(iVar5, iVar70))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar70, -2042643157, 0) != func_609(iVar5, iVar72, iVar70))
					{
						iVar73 = FILES::_0xC17AD0E5752BECDA(iVar70);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 4)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar71 = func_610(iVar5, iVar75, 4, 3);
										iVar70 = iVar75;
										func_602(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar71 = func_610(iVar5, iVar75, 4, 4);
										iVar70 = iVar75;
										func_602(iParam0, 4, iVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar67, 1812005517, 0) != func_613(iVar5, iVar71, iVar67))
					{
						iVar73 = FILES::_0xC17AD0E5752BECDA(iVar67);
						iVar74 = 0;
						while (iVar74 < iVar73)
						{
							FILES::GET_VARIANT_COMPONENT(iVar67, iVar74, &iVar75, &uVar76, &iVar77);
							if (iVar77 == 6)
							{
								if (iVar75 != 0 && iVar75 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_610(iVar5, iVar75, 6, 3);
										iVar67 = iVar75;
										func_602(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_610(iVar5, iVar75, 6, 4);
										iVar67 = iVar75;
										func_602(iParam0, 6, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar74 = iVar73 + 1;
								}
							}
							iVar74++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_715(iParam0);
				iVar78 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar79 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar80 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar78, iVar79);
				if (FILES::_0x341DE7ED1D2A1BFD(iVar80, 838607662, 0))
				{
					iVar3 = func_719(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_602(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_719(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_602(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_603(iParam0, &uVar4))
		{
			func_602(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_602(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_602(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_602(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar81 = func_710(iVar5, func_728(iParam0, 3, -1), iVar11);
		if (iVar81 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_610(iVar5, iVar81, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_610(iVar5, iVar81, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_602(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_70669 = (Global_70669 - 1);
	return 1;
}

int func_603(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_728(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (func_127(750, Global_70668, 0) != -99 && func_606())
	{
		if (func_605() == 4)
		{
			return 1;
		}
		if (func_127(750, Global_70668, 0) == 0 && func_127(751, Global_70668, 0) == 0)
		{
			if (func_518(161, Global_70668))
			{
				if (func_127(2048, Global_70668, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_127(749, Global_70668, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_127(750, Global_70668, 0);
		iVar1 = func_127(751, Global_70668, 0);
		if (!func_630(iParam0, iVar1, iVar0))
		{
			if (func_518(161, Global_70668))
			{
				*uParam1 = func_127(2048, Global_70668, 0);
			}
			else
			{
				*uParam1 = func_127(749, Global_70668, 0);
			}
			func_604(750, -99, Global_70668, 1, 0);
			func_604(751, 2, Global_70668, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_604(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_128(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_605()
{
	return Global_1312788;
}

int func_606()
{
	if (func_608() && func_607(0))
	{
		return 1;
	}
	return 0;
}

var func_607(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_608()
{
	return func_607(func_33() + 1);
}

int func_609(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_712(iParam0, iParam1, 6, 3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0))
			{
				if ((FILES::_0x341DE7ED1D2A1BFD(iParam2, -1080576805, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam2, -1387458490, 0)) || FILES::_0x341DE7ED1D2A1BFD(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				if ((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_712(iParam0, iParam1, 6, 4);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				if (((((((((FILES::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_610(int iParam0, int iParam1, int iParam2, int iParam3)
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
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_612(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 0, -1, func_736(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_611(iParam0, func_736(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_611(int iParam0, int iParam1)
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
	return -99;
}

int func_612(int iParam0)
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
	return -99;
}

int func_613(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_712(iParam0, iParam1, 4, 3);
				iVar1 = func_702(iVar0);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1080576805, 0) && !FILES::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0))) || (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1387458490, 0) && !FILES::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0))) || (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0) && !FILES::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
						iVar2 = 0;
						break;
				}
				if (FILES::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0))
				{
					if ((((((FILES::_0x341DE7ED1D2A1BFD(iVar0, -1080576805, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1387458490, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
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
				iVar0 = func_712(iParam0, iParam1, 4, 4);
				iVar1 = func_702(iVar0);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0))
			{
				if ((FILES::_0x341DE7ED1D2A1BFD(iVar0, -1080576805, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1387458490, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
				{
					if ((((FILES::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam2, -979468724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iParam2, -1813210391, 0)) || FILES::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0)) || FILES::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -761463976, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1127835965, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1207283343, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -2088146832, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -430330349, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1103045158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1052059919, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_614(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (FILES::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (FILES::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_615(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_712(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!FILES::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0))
										{
											*uParam3 = func_610(iParam0, iVar3, iParam1, 4);
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

int func_616(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_712(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (FILES::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0))
										{
											*uParam3 = func_610(iParam0, iVar3, iParam1, 4);
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

int func_617(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_712(iParam0, iParam2, 4, 4);
						}
						if (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1100807313, 0))
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

int func_618(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_712(iParam0, iParam2, 11, 4);
						}
						return FILES::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_619(int iParam0, int iParam1)
{
	if (func_621())
	{
		if (iParam1 > 51)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else if (iParam1 > 46)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
		}
	}
	else if (func_620())
	{
		if (iParam1 > 0)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
		}
	}
}

bool func_620()
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

bool func_621()
{
	return DLC::IS_DLC_PRESENT(-1005876368);
}

int func_622(int iParam0, int iParam1)
{
	return 0;
}

int func_623(int iParam0, int iParam1)
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
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

var func_624(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_70832 || !iParam1 == Global_70833) || !iVar1 == Global_70834) || !iVar2 == Global_70835) || !iVar3 == Global_70836)
	{
		Global_70832 = bVar0;
		Global_70833 = iParam1;
		Global_70834 = iVar1;
		Global_70835 = iVar2;
		Global_70836 = iVar3;
		Global_70837 = func_625(iParam0, iParam1);
	}
	return Global_70837;
}

int func_625(int iParam0, int iParam1)
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
		iVar3 = 50;
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
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -887141061, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1185371730, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -2124629577, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -887141061, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1185371730, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -2124629577, 8))
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		return func_629(iParam0, iParam1);
	}
	if (func_628(iParam0))
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
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0))
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
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0))
			{
				return func_629(iParam0, iParam1) + 15;
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			iVar6 = func_627(iVar5, 0);
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
						iVar0 = func_702(iVar5);
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
						iVar0 = func_702(iVar5);
						break;
					}
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_626(iVar5, 0);
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
					iVar0 = func_702(iVar5);
					break;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1407614029, 0))
				{
					return func_629(iParam0, iParam1) + 15;
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILES::_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar5, -994703884, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0))
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
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_629(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0))
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
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1506370874, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 1927516484, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1786447517, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1010805287, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -549843760, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -269266203, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -685039259, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1813210391, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -309899747, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -89003918, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return func_629(iParam0, iParam1);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return func_629(iParam0, iParam1);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -838136846, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_629(iParam0, iParam1) + 15;
			}
			else
			{
				return func_629(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1375878737, 0))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0))
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
		else if ((FILES::_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_702(iVar5);
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

int func_626(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_627(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_628(int iParam0)
{
	if (FILES::_0x341DE7ED1D2A1BFD(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_629(int iParam0, int iParam1)
{
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

int func_630(int iParam0, int iParam1, int iParam2)
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
	Global_70671[1 /*14*/] = { func_748(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_737(iVar0, iParam2) };
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
			if (uVar8[iVar4] != -99)
			{
				if (!func_630(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_733(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_630(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_70671[2 /*14*/] = { func_748(iVar0, 14, iVar6) };
									if (Global_70671[2 /*14*/].f_12 == iVar5)
									{
										if (func_630(iParam0, 14, iVar6))
										{
											if (!func_631(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_70671[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
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
						iVar1 = func_713(iParam0, iVar4);
						Global_70671[2 /*14*/] = { func_748(iVar0, iVar4, iVar1) };
						if (!func_631(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_70671[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_127(1754, Global_70668, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_733(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_630(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_4 || Global_70671[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_70671[1 /*14*/].f_12 == 0 && MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 6)) && FILES::_0x341DE7ED1D2A1BFD(Global_2621444, -1033433901, 1)) && FILES::_GET_NUM_DLC_PED_PROPS_UNK(Global_2621444) > 0)
		{
			iVar16 = FILES::_GET_NUM_DLC_PED_PROPS_UNK(Global_2621444);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::_0xD81B7F27BC773E66(Global_2621444, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::_0x5D5CAFF661DDF6FC(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_70671[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_70671[1 /*14*/].f_12))
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
		if (Global_70671[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_736(iParam1)) && Global_70671[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_736(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_70670++;
			if (Global_70670 == 1)
			{
				if (func_618(iVar0, 11, func_713(iParam0, 11), -1))
				{
					if (func_616(iVar0, 4, iParam2, &uVar18))
					{
						return func_630(iParam0, 4, uVar18);
					}
				}
				else if (func_615(iVar0, 4, iParam2, &uVar18))
				{
					return func_630(iParam0, 4, uVar18);
				}
			}
			Global_70670 = (Global_70670 - 1);
		}
	}
	return 0;
}

int func_631(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
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
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_733(iParam0, (*uParam4)[13]) };
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
	if (func_635(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_634(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_633(iParam0, iParam2, iParam3, -1))
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
		else if (func_632(iParam0, iParam2, iParam3, -1))
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
		if (func_634(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_633(iParam0, iParam2, iParam3, -1))
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
		else if (func_632(iParam0, iParam2, iParam3, -1))
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
		if (func_634(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_633(iParam0, iParam2, iParam3, -1))
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
		else if (func_632(iParam0, iParam2, iParam3, -1))
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

int func_632(int iParam0, int iParam1, int iParam2, int iParam3)
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
						if (iParam3 == -1)
						{
							iParam3 = func_712(iParam0, iParam2, 14, 3);
						}
						return (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) || FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_712(iParam0, iParam2, 1, 3);
						}
						return (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam2, 1, 3), -1842686353, 0));
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
						if (iParam3 == -1)
						{
							iParam3 = func_712(iParam0, iParam2, 14, 4);
						}
						return (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) || FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_712(iParam0, iParam2, 1, 4);
						}
						return (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_633(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (iParam3 == -1)
					{
						iParam3 = func_712(iParam0, iParam2, 1, 3);
					}
					if (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
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
					if (iParam3 == -1)
					{
						iParam3 = func_712(iParam0, iParam2, 1, 4);
					}
					if (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
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

int func_634(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (iParam3 == -1)
					{
						iParam3 = func_712(iParam0, iParam2, 14, 3);
					}
					return FILES::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
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
					if (iParam3 == -1)
					{
						iParam3 = func_712(iParam0, iParam2, 14, 4);
					}
					return FILES::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_635(int iParam0, int iParam1, int iParam2)
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

int func_636(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (func_628(iParam0))
	{
		return -99;
	}
	if (func_637(iParam0))
	{
		return -99;
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
				iVar0 = func_712(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = FILES::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_610(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
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
				iVar6 = func_712(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = FILES::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_610(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_637(int iParam0)
{
	if (FILES::_0x341DE7ED1D2A1BFD(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_638(int iParam0)
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

void func_639(int iParam0, int iParam1)
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
	iVar1 = func_127(2092, iParam1, 0);
	iVar2 = func_127(2093, iParam1, 0);
	iVar3 = func_127(2094, iParam1, 0);
	iVar4 = func_127(2095, iParam1, 0);
	iVar5 = func_127(2096, iParam1, 0);
	iVar6 = func_127(2097, iParam1, 0);
	fVar7 = func_655(134, iParam1);
	fVar8 = func_655(135, iParam1);
	fVar9 = func_655(136, iParam1);
	bVar10 = func_518(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_127(2098, iParam1, 0);
		if (iVar11 > 0)
		{
			func_640(iParam0, iParam1, 0);
		}
	}
}

void func_640(int iParam0, int iParam1, bool bParam2)
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
		iVar2 = func_654(iVar1);
		if (!bParam2)
		{
			fVar3 = func_655(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_653(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_652(iVar4);
		iVar6 = func_651(iVar5);
		iVar7 = func_650(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_647(iVar6, iParam1, -1);
				fVar11 = func_655(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_646(iVar6, iParam1);
				fVar11 = func_653(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_645(iVar5);
			iVar9 = func_644(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_127(iVar8, iParam1, 0);
					iVar14 = func_127(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_643(iVar8, iParam1);
					iVar14 = func_643(iVar9, iParam1);
				}
				func_642(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_641(&iParam0, iParam1, bParam2);
}

void func_641(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_655(157, iParam1);
	}
	else
	{
		fVar0 = func_653(157, iParam1);
	}
	if (*iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_642(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_643(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_128(iParam1)];
	if (HUD::SET_USERIDS_UIHIDDEN(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2156;
		
		case 1:
			return 2157;
		
		case 5:
			return 2158;
		
		case 8:
			return 2159;
		
		case 10:
			return 2154;
		
		default:
	}
	return -1;
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2149;
		
		case 1:
			return 2150;
		
		case 5:
			return 2151;
		
		case 8:
			return 2152;
		
		case 10:
			return 2153;
		
		default:
	}
	return -1;
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_33();
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
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
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

int func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_33();
	}
	iVar0 = 0;
	iVar1 = func_649(iParam0, iParam1);
	iVar2 = func_648(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_648(int iParam0)
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
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_649(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_33();
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
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_650(int iParam0)
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
	return -1;
}

int func_651(int iParam0)
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
	return -1;
}

int func_652(int iParam0)
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
	return -1;
}

float func_653(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2546677[iParam0 /*3*/][func_128(iParam1)];
	if (HUD::_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_654(int iParam0)
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
	return -1;
}

float func_655(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2546677[iParam0 /*3*/][func_128(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4264635 == iParam1)
		{
			iVar2 = Global_4264634;
			iVar1 = Global_4264633;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_712(iParam0, iParam1, 7, 3);
			iVar1 = func_702(iVar2);
			Global_4264635 = iParam1;
			Global_4264634 = iVar2;
			Global_4264633 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4264638 == iParam3)
		{
			iVar4 = Global_4264637;
			iVar3 = Global_4264636;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_712(iParam0, iParam3, 11, 3);
			iVar3 = func_702(iVar4);
			Global_4264638 = iParam3;
			Global_4264637 = iVar4;
			Global_4264636 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4264641 == iParam4)
		{
			iVar6 = Global_4264640;
			iVar5 = Global_4264639;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_712(iParam0, iParam4, 8, 3);
			iVar5 = func_702(iVar6);
			Global_4264641 = iParam4;
			Global_4264640 = iVar6;
			Global_4264639 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4264644 == iParam10)
		{
			iVar8 = Global_4264643;
			iVar7 = Global_4264642;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_712(iParam0, iParam10, 1, 3);
			iVar7 = func_702(iVar8);
			Global_4264644 = iParam10;
			Global_4264643 = iVar8;
			Global_4264642 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((FILES::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 351511157, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_712(iParam0, iParam9, 14, 3);
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
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
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
			if (iParam10 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -2102859770, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1274099003, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_658(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_658(iParam0, iParam3))
				{
					return 0;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -353070590, 0))
			{
				if (((FILES::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_712(iParam0, iParam11, 4, 3);
				}
				if (FILES::_0x341DE7ED1D2A1BFD(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -779835469, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1086258388, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -672871169, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -196114988, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1655154167, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1607949555, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -491588875, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!FILES::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 974680318, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1817355735, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -148928294, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1927516484, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -435539886, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1914383230, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
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
			if (iParam3 != -99)
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
			if (iParam3 != -99)
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
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_707(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((FILES::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0))) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)))
				{
				}
				else
				{
					iVar0 = func_713(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_702(func_712(iParam0, iVar0, 11, 3)) == 13))
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
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_707(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((FILES::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0))) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0))) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					iVar0 = func_713(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_702(func_712(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILES::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!FILES::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILES::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) && FILES::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) || ((iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0))
				{
					if (!FILES::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
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
							if (!FILES::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0))
				{
					if (!FILES::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
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
							if (!FILES::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_657(iVar6)) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4264635 == iParam1)
		{
			iVar12 = Global_4264634;
			iVar11 = Global_4264633;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_712(iParam0, iParam1, 7, 4);
			iVar11 = func_702(iVar12);
			Global_4264635 = iParam1;
			Global_4264634 = iVar12;
			Global_4264633 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4264638 == iParam3)
		{
			iVar14 = Global_4264637;
			iVar13 = Global_4264636;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_712(iParam0, iParam3, 11, 4);
			iVar13 = func_702(iVar14);
			Global_4264638 = iParam3;
			Global_4264637 = iVar14;
			Global_4264636 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4264641 == iParam4)
		{
			iVar16 = Global_4264640;
			iVar15 = Global_4264639;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_712(iParam0, iParam4, 8, 4);
			iVar15 = func_702(iVar16);
			Global_4264641 = iParam4;
			Global_4264640 = iVar16;
			Global_4264639 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4264644 == iParam10)
		{
			iVar18 = Global_4264643;
			iVar17 = Global_4264642;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_712(iParam0, iParam10, 1, 4);
			iVar17 = func_702(iVar18);
			Global_4264644 = iParam10;
			Global_4264643 = iVar18;
			Global_4264642 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_712(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((FILES::_0x341DE7ED1D2A1BFD(iVar14, -1855618474, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 351511157, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -299089347, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -1473812293, 0))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar14, -63750166, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_658(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_658(iParam0, iParam3) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -353070590, 0))
			{
				if ((((FILES::_0x341DE7ED1D2A1BFD(iVar14, -870074461, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1174924468, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1769225721, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -1473812293, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -1473812293, 0)) || (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_712(iParam0, iParam11, 4, 4);
				}
				if (FILES::_0x341DE7ED1D2A1BFD(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (FILES::_0x341DE7ED1D2A1BFD(iVar12, -920534092, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar14, 684992453, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -820724897, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 153792394, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -872449705, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1714969731, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1055526375, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 947651647, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((FILES::_0x341DE7ED1D2A1BFD(iVar14, 700658917, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 745826556, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 144417099, 0))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 1537081084, 0))
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
				if (FILES::_0x341DE7ED1D2A1BFD(iVar16, 1553766533, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1914383230, 0))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar12, -920534092, 0))
					{
						if (FILES::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0))
						{
							if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 1828206051, 0))
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
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar19, 1406402954, 1)) || (iVar19 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((FILES::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -828478571, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_707(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -761463976, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1347486026, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -939525357, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1119232689, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -2102859770, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1784133476, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -430330349, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -55550566, 0))
				{
					if (!FILES::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -530089825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -713698407, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1843965488, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -55104292, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -779835469, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1086258388, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 140732128, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2106216756, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1627756587, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 264959411, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1127835965, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -672871169, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 572416369, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -196114988, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1607949555, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1976716889, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2099109084, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -2017999390, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -441291342, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1407863332, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1986415230, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -785939537, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1103045158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1455992833, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 153792394, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -870074461, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1174924468, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1177480446, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1347486026, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1655154167, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -2105858993, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1893564692, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1710451520, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1416808511, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1641506460, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1119232689, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -2102859770, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1784133476, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1607949555, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1976716889, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 2099109084, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1419806467, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -849839091, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -2088146832, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -352447393, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -642551350, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -819569488, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -2020068325, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -269266203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 201427653, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -979468724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -58412562, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -435539886, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 974680318, 0))
				{
					if (!FILES::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((FILES::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 684992453, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 264959411, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 1353777856, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_703(iParam0, iParam4, 0) != -99)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
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
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 654065530, 0))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					FILES::_0x5D5CAFF661DDF6FC(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -761463976, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1347486026, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -994703884, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1119232689, 0))) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -2017999390, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -441291342, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1986415230, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -430330349, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -828478571, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 602650322, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 905042630, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1204125293, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1855618474, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -761463976, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 821147517, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1347486026, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -994703884, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1119232689, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1607949555, 0))) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -2017999390, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1965569012, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -441291342, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1986415230, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -430330349, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -733792105, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1351486939, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2030343924, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -828478571, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1831422288, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1927516484, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1147939952, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1882920022, 0))) || FILES::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar16, 1965569012, 0))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((FILES::_0x341DE7ED1D2A1BFD(iVar16, -1786447517, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((FILES::_0x341DE7ED1D2A1BFD(iVar16, -1703203608, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1415000253, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -530089825, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -994703884, 0)))
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
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -1200513218, 0))) || (iParam3 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -7109286, 0))
				{
					return 0;
				}
				else if (((FILES::_0x341DE7ED1D2A1BFD(iVar16, -1786447517, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar16, -549843760, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILES::_0x341DE7ED1D2A1BFD(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar14, -747583185, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = func_712(iParam0, iParam11, 4, 4);
				}
				if (FILES::_0x341DE7ED1D2A1BFD(iVar22, -33031567, 0))
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

int func_657(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_658(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_712(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -2102859770, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1719167561, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1274099003, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1419806467, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -441291342, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -785939537, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1927516484, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_707(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_712(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_702(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1393156190, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -2017999390, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -826135203, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -747583185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -102825006, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -733792105, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -641612092, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1506370874, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1786447517, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1010805287, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, -1325813684, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_659(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_697(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = func_696(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_70668;
		}
		func_725(iVar1, 1, iParam2);
	}
	func_660(iParam0, bParam3, 0);
}

void func_660(int iParam0, bool bParam1, bool bParam2)
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
		iVar0 = Global_70668;
		PED::_CLEAR_PED_FACIAL_DECORATIONS(iParam0);
		iVar2 = func_695(iParam0);
		bVar3 = func_692(iParam0, 0);
		bVar4 = func_690(iParam0);
		bVar5 = func_689(iParam0);
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
			if (func_686(iVar6, iVar0))
			{
				if (func_679(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_676(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_686(123, iVar0))
		{
			if (PED::_GET_TATTOO_ZONE(-1719270477, -1824026490) != 7)
			{
				PED::_SET_PED_DECORATION(iParam0, -1719270477, -1824026490);
			}
		}
		iVar8 = FILES::_GET_NUM_DECORATIONS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::_0xFF56381874F82086(iVar2, iVar7, &Var9))
			{
				if (!FILES::_IS_DLC_DATA_EMPTY(Var9))
				{
					iVar10 = (129 + iVar7);
					if (func_686(iVar10, iVar0))
					{
						if (func_676(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_662(Var9.f_2, Var9.f_3))
							{
								PED::_SET_PED_DECORATION(iParam0, Var9.f_2, Var9.f_3);
								func_661(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_661(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					PED::_SET_PED_DECORATION(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					PED::_SET_PED_DECORATION(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					PED::_SET_PED_DECORATION(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					PED::_SET_PED_DECORATION(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					PED::_SET_PED_DECORATION(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					PED::_SET_PED_DECORATION(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					PED::_SET_PED_DECORATION(iParam0, 484754152, -588549683);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					PED::_SET_PED_DECORATION(iParam0, 484754152, -965491494);
					PED::_SET_PED_DECORATION(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_662(int iParam0, int iParam1)
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
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_673(15426, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2123485438)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -815706791:
				case -1066127505:
					if (func_673(15422, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -815706791)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_673(15423, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1318802347)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 306110040:
				case 1944822196:
					if (func_673(15421, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 306110040)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_673(15427, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1828101251)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -919314748:
				case 1282565442:
					if (func_673(15419, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -919314748)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1971111649:
				case -884280700:
					if (func_673(15420, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1971111649)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_673(15394, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1029334921)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -534855486:
				case -1168575065:
					if (func_518(209, -1))
					{
						return 0;
					}
					if (iParam1 == -534855486)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -516333262:
				case 756873456:
					if (func_673(15406, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -516333262)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 485135095:
				case -730037708:
					if (func_673(15395, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 485135095)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1713551997:
				case -970458486:
					if (func_518(209, -1))
					{
						return 0;
					}
					if (iParam1 == 1713551997)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1490658501:
				case 975601953:
					if (func_673(15410, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1490658501)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_673(15407, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1735635238)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1931303956:
				case -726032561:
					if (func_518(209, -1))
					{
						return 0;
					}
					if (iParam1 == 1931303956)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_518(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1931617488)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1726332301:
				case 417579524:
					if (func_673(15414, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1726332301)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1382922530:
				case 734151492:
					if (func_673(15415, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1382922530)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 452778672:
				case -1766862320:
					if (func_673(15399, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 452778672)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1776790350:
				case 579562906:
					if (func_673(15404, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1776790350)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1988057295:
				case -619754931:
					if (func_518(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1988057295)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 816707921:
				case 1424441799:
					if (func_673(15392, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 816707921)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 744446190:
				case -1405036369:
					if (func_673(15390, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 744446190)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 917772807:
				case 1929056908:
					if (func_673(15402, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 917772807)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -292922355:
				case -34538790:
					if (func_673(15416, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -292922355)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_518(209, -1))
					{
						return 0;
					}
					if (iParam1 == -1495432685)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_673(9366, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 769964545)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1424500982:
				case -701486200:
					if (func_673(9367, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1424500982)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_673(9369, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1810785185)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 837990279:
				case -1981978861:
					if (func_673(9368, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 837990279)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1752551314:
				case 468661890:
					if (func_673(9365, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1752551314)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 735155845:
				case 1907925586:
					if (func_673(9364, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 735155845)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1863251462:
				case 646243571:
					if (func_673(9363, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1863251462)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_673(9362, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2142058763)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -207591105:
				case 874867224:
					if (func_673(9370, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -207591105)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -932813887:
				case 1344008898:
					if (func_673(9371, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -932813887)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -313503199:
				case 1297781304:
					if (func_673(9372, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -313503199)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 718936417:
				case 1977233252:
					if (func_673(9373, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 718936417)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1107649605:
				case -194410344:
					if (func_673(9374, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1107649605)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 39090475:
				case 392012609:
					if (func_673(9384, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 39090475)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1628251208:
				case 705148450:
					if (func_673(9385, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1628251208)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_673(7551, -1, -1) || func_127(3772, -1, 0) >= Global_262145.f_15634)
					{
						return 0;
					}
					if (iParam1 == -621355603)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_673(7467, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1006202521)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_673(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -2060372580:
				case -254669596:
					if (func_673(7469, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2060372580)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_673(7470, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1057304170)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1421572640:
				case -941072260:
					if (func_673(7471, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1421572640)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 481259621:
				case -1844749517:
					if (func_673(7472, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 481259621)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1227497670:
				case 82745424:
					if (func_673(7473, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1227497670)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 319276780:
				case -673460083:
					if (func_673(7474, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 319276780)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 2070827921:
				case -99954496:
					if (func_673(7475, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2070827921)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_673(7476, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1433629991)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_673(7477, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1712994650)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_673(7478, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 2125094286)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 712298404:
				case -1504557219:
					if (func_673(7479, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 712298404)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1998072324:
				case 367912881:
					if (func_673(7480, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1998072324)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1249206960:
				case -836343280:
					if (func_673(7481, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1249206960)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_673(4260, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 283190173)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -60867780:
				case 1528527015:
					if (func_673(4257, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1528527015)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 926967912:
				case -1690029966:
					if (func_673(4269, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1690029966)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_673(4261, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1685994466)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1314959708:
				case 255166927:
					if (func_673(4259, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 255166927)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1696774529:
				case -271257487:
					if (func_673(4268, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -271257487)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -356446484:
				case 1885215284:
					if (func_673(4265, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1885215284)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 857810380:
				case -1935156988:
					if (func_673(4258, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1935156988)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -629676646:
				case 1061465906:
					if (func_673(4264, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 1061465906)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1879530481:
				case -871031729:
					if (func_673(4267, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -871031729)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case -1265847311:
				case -101171485:
					if (func_673(4262, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -101171485)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 32094424:
				case -1590298770:
					if (func_673(4263, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1590298770)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
				
				case 1969286744:
				case 303441856:
					if (func_673(4266, -1, -1))
					{
						return 0;
					}
					if (iParam1 == 303441856)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_127(2920, -1, 0) > 0)
					{
						return 0;
					}
					return !func_664(func_670(iParam1, 3), -1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_127(2920, -1, 0) > 0)
					{
						return 0;
					}
					return !func_664(func_670(iParam1, 4), -1);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_673(113, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -2049689650)
					{
						return !func_664(func_670(iParam1, 3), -1);
					}
					else
					{
						return !func_664(func_670(iParam1, 4), -1);
					}
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_673(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_673(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_673(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_673(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_673(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_673(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_673(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_673(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_673(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_673(3779, -1, -1))
						{
							return 0;
						}
					}
					return !func_664(func_670(iParam1, 3), -1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_673(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_673(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_673(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_673(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_673(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_673(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_673(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_673(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_673(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_673(3779, -1, -1))
						{
							return 0;
						}
					}
					return !func_664(func_670(iParam1, 4), -1);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_673(3765, -1, -1) && func_673(3766, -1, -1)) && func_673(3767, -1, -1)) && func_673(3768, -1, -1)) && func_673(3769, -1, -1))
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
					return !func_673(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case -1450406320:
				case 1412653072:
					return (!func_518(152, -1) && !func_673(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_518(151, -1) && !func_673(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_664(func_670(iParam1, 3), -1) && !func_673(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_664(func_670(iParam1, 4), -1) && !func_673(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_34();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_673(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_673(3615, -1, -1) && !func_673(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_673(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_673(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_673(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_673(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_673(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_673(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					return !func_673(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_673(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_673(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_673(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_673(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_673(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_673(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_673(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_673(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_673(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_673(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_673(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_673(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_127(2431, -1, 0);
						if (MISC::IS_BIT_SET(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_127(2411, -1, 0);
						if (MISC::IS_BIT_SET(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_673(3802, -1, -1);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case -588549683:
				case 464027076:
					return 1;
					break;
				
				case -965491494:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case -1458541976:
				case -606014753:
				case -613376371:
				case -446291501:
				case -1034642040:
				case 1022637316:
				case -1677156418:
				case -1130213300:
					return !func_663();
					break;
			}
			break;
	}
	return 0;
}

int func_663()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
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
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_664(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_667(iParam0) == 7872)
	{
		return 0;
	}
	iVar0 = func_666(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_665(iVar1));
}

int func_665(int iParam0)
{
	return (iParam0 % 32);
}

int func_666(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_127(func_667(uParam0), iParam1, 0);
	return iVar0;
}

int func_667(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_669(iVar0);
	if ((func_135() == 0 || func_668() == 0) || (func_135() == 999 && func_668() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1035;
				break;
			
			case 1:
				return 1036;
				break;
			
			case 2:
				return 1037;
				break;
			
			case 3:
				return 1038;
				break;
			
			case 4:
				return 1039;
				break;
			
			case 5:
				return 1499;
				break;
			
			case 6:
				return 1753;
				break;
			
			case 7:
				return 1947;
				break;
			
			case 8:
				return 1948;
				break;
			
			case 9:
				return 1949;
				break;
			
			case 10:
				return 1950;
				break;
			
			case 11:
				return 1951;
				break;
			
			case 12:
				return 1952;
				break;
			
			case 13:
				return 2411;
				break;
			
			case 14:
				return 2431;
				break;
			
			case 15:
				return 2434;
				break;
			
			case 16:
				return 2437;
				break;
			
			case 17:
				return 2600;
				break;
			
			case 18:
				return 2603;
				break;
			
			case 19:
				return 2606;
				break;
			
			case 20:
				return 3766;
				break;
			
			case 21:
				return 3769;
				break;
			
			case 22:
				return 3844;
				break;
			
			case 23:
				return 3847;
				break;
			
			case 24:
				return 3850;
				break;
			
			case 25:
				return 3853;
				break;
			
			case 26:
				return 5344;
				break;
			
			case 27:
				return 5347;
				break;
			
			case 28:
				return 5449;
				break;
			
			case 29:
				return 5452;
				break;
			
			case 30:
				return 6411;
				break;
			
			case 31:
				return 6414;
				break;
			}
	}
	return 7872;
}

int func_668()
{
	return Global_25234;
}

int func_669(int iParam0)
{
	return (iParam0 / 32);
}

int func_670(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_672(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_671(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILES::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILES::_0xFF56381874F82086(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1 = (iVar1 + 1);
	}
	return -1;
}

int func_671(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
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
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
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
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
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
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
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
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
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
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
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
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
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
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
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
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
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
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
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
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
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
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
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
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
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
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
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
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
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
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
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
		
		case -1793199216:
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
		
		case -1558441108:
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
		
		case -47863515:
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
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
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
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
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
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
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
		
		case -477451680:
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
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
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
		
		case -1542393224:
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
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
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
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
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
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
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
		
		case -777671131:
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
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
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
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
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
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
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
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
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
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
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
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
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
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
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
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
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
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
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
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
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
		
		case -194410344:
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
		
		case -1362677538:
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
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
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
		
		case -953362234:
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
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
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
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
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
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
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
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
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
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
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
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
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
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
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
		
		case -1903962822:
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
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_672(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
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
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
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
		
		case -221624488:
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
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
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
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
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
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
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
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
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
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
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
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
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
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
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
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
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
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
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
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
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
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
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
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
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
		
		case -1964624525:
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
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
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
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
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
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
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
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
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
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
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
		
		case -282875325:
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
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
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
		
		case -637951661:
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
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
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
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
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
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
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
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
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
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
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
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
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
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
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
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
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
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
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
		
		case -1833118141:
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
		
		case -1182831168:
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
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
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
		
		case -1712994650:
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
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
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
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
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
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
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
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
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
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
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
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
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
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
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
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
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
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
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
		
		case -2071014467:
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
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
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
		
		case -786732051:
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
		
		case -792802958:
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
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
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
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
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
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
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
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
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
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
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
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
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
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
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
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
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
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_673(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_33();
	}
	iVar1 = func_675(iParam0, iParam1);
	uVar2 = func_674(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_674(int iParam0)
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
	return iVar0;
}

int func_675(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_33();
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
	return iVar0;
}

int func_676(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_678(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(func_677(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case -793495770:
		case -763917073:
		case -1409061796:
		case -2066166276:
		case 849089063:
		case 1192230427:
		case -454273031:
		case -1459967458:
		case 1548327796:
		case -1238079313:
		case 129912816:
		case -1469750959:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case -388268096:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == -793495770 || (iParam4 == -1409061796 && iVar0 == joaat("mp_f_freemode_01"))) || iParam4 == -2066166276) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_686(13, -1))
							{
								return 0;
							}
							else if (func_686(14, -1))
							{
								return 0;
							}
							else if (func_686(15, -1))
							{
								return 0;
							}
							else if (func_686(16, -1))
							{
								return 0;
							}
							else if (func_686(71, -1))
							{
								return 0;
							}
							else if (func_686(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
						return 0;
					}
					else if (Global_4265621 == 14)
					{
						return 0;
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
						return 0;
					}
					else if (Global_4265621 == 71)
					{
						return 0;
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			else if (iParam4 == -763917073)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_686(13, -1))
							{
								return 0;
							}
							else if (func_686(14, -1))
							{
								return 0;
							}
							else if (func_686(15, -1))
							{
								return 0;
							}
							else if (func_686(16, -1))
							{
								return 0;
							}
							else if (func_686(71, -1))
							{
								return 0;
							}
							else if (func_686(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
						return 0;
					}
					else if (Global_4265621 == 14)
					{
						return 0;
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
						return 0;
					}
					else if (Global_4265621 == 71)
					{
						return 0;
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == -1469750959)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_686(13, -1))
							{
							}
							else if (func_686(14, -1))
							{
								return 0;
							}
							else if (func_686(15, -1))
							{
								return 0;
							}
							else if (func_686(16, -1))
							{
							}
							else if (func_686(71, -1))
							{
								return 0;
							}
							else if (func_686(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
					}
					else if (Global_4265621 == 14)
					{
						return 0;
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
					}
					else if (Global_4265621 == 71)
					{
						return 0;
					}
					else if (Global_4265621 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_686(13, -1))
							{
							}
							else if (func_686(14, -1))
							{
							}
							else if (func_686(15, -1))
							{
							}
							else if (func_686(16, -1))
							{
							}
							else if (func_686(71, -1))
							{
							}
							else if (func_686(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
					}
					else if (Global_4265621 == 14)
					{
					}
					else if (Global_4265621 == 15)
					{
					}
					else if (Global_4265621 == 16)
					{
					}
					else if (Global_4265621 == 71)
					{
					}
					else if (Global_4265621 == 72)
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
				if (Global_4265621 == -1)
				{
					if (!Global_92885.f_1473)
					{
						if (func_686(13, -1))
						{
						}
						else if (func_686(14, -1))
						{
						}
						else if (func_686(15, -1))
						{
							return 0;
						}
						else if (func_686(16, -1))
						{
						}
						else if (func_686(71, -1))
						{
						}
						else if (func_686(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4265621 == 13)
				{
				}
				else if (Global_4265621 == 14)
				{
				}
				else if (Global_4265621 == 15)
				{
					return 0;
				}
				else if (Global_4265621 == 16)
				{
				}
				else if (Global_4265621 == 71)
				{
				}
				else if (Global_4265621 == 72)
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
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_686(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4265621 == 15)
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
				if (Global_4265621 == -1)
				{
					if (!Global_92885.f_1473)
					{
						if (func_686(13, -1))
						{
							return 0;
						}
						else if (func_686(14, -1))
						{
							return 0;
						}
						else if (func_686(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_686(16, -1))
						{
						}
						else if (func_686(71, -1))
						{
						}
						else if (func_686(72, -1))
						{
						}
					}
				}
				else if (Global_4265621 == 13)
				{
					return 0;
				}
				else if (Global_4265621 == 14)
				{
					return 0;
				}
				else if (Global_4265621 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_4265621 == 16)
				{
				}
				else if (Global_4265621 == 71)
				{
				}
				else if (Global_4265621 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
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
					if (Global_4265621 == -1)
					{
						if (!Global_92885.f_1473)
						{
							if (func_686(13, -1))
							{
							}
							else if (func_686(14, -1))
							{
							}
							else if (func_686(15, -1))
							{
							}
							else if (func_686(16, -1))
							{
							}
							else if (func_686(71, -1))
							{
							}
							else if (func_686(72, -1))
							{
							}
						}
					}
					else if (Global_4265621 == 13)
					{
						return 0;
					}
					else if (Global_4265621 == 14)
					{
					}
					else if (Global_4265621 == 15)
					{
						return 0;
					}
					else if (Global_4265621 == 16)
					{
					}
					else if (Global_4265621 == 71)
					{
					}
					else if (Global_4265621 == 72)
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

char* func_677(int iParam0)
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

int func_678(int iParam0, char* sParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
			break;
	}
	switch (iParam2)
	{
		case -1775023605:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case -1684314297:
			return 2;
			break;
		
		case -1546663824:
			return 3;
			break;
		
		case -2119253768:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case -1524227787:
			return 7;
			break;
		
		case -311742370:
			return 8;
			break;
		
		case -2057190659:
			return 9;
			break;
		
		case -686545645:
			return 10;
			break;
		
		case -80377674:
			return 11;
			break;
		
		case -1055976551:
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
		
		case -1309595991:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case -1716562576:
			return 20;
			break;
		
		case -1940582056:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case -1073830579:
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
		
		case -951899470:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case -793495770:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case -763917073:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case -2066166276:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case -1409061796:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case -1459967458:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case -1871804242:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case -742053244:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case -1469750959:
			return 54;
			break;
		
		case -388268096:
			return 55;
			break;
		
		case -1538681432:
			return 56;
			break;
		
		case -737856380:
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
		
		case -277214012:
			return 61;
			break;
		
		case -484264198:
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
		
		case -1946435033:
			return 67;
			break;
		
		case -1917346117:
			return 68;
			break;
		
		case -382139768:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case -266913369:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case -1399656601:
			return 73;
			break;
		
		case -1560441083:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case -1170681301:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case -818089340:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case -624267373:
			return 81;
			break;
		
		case -1178847967:
			return 82;
			break;
		
		case -197292861:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case -1918884694:
			return 86;
			break;
		
		case -1670727628:
			return 87;
			break;
		
		case -1389296468:
			return 88;
			break;
		
		case -405262373:
			return 89;
			break;
		
		case -1619609833:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case -1202647020:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case -1559605744:
			return 94;
			break;
		
		case -88374898:
			return 95;
			break;
		
		case -292219126:
			return 96;
			break;
		
		case -634232984:
			return 97;
			break;
		
		case -1259754598:
			return 98;
			break;
	}
	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case -2027116220:
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
		
		case -344656041:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case -1636967950:
			return 75;
			break;
		
		case -1759426263:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case -33154131:
			return 22;
			break;
		
		case -1364624791:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case -2132107540:
			return 73;
			break;
		
		case -2097372400:
			return 38;
			break;
		
		case -106785870:
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
		
		case -652292269:
			return 75;
			break;
		
		case -1179283327:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case -880004050:
			return 14;
			break;
		
		case -1386676768:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case -1952728474:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case -1134718043:
			return 13;
			break;
		
		case -440373586:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case -1282504117:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case -1035884623:
			return 73;
			break;
		
		case -1877294236:
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
		
		case -2016202731:
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
		
		case -654914345:
			return 13;
			break;
		
		case -1745115353:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case -161772432:
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
		
		case -281772534:
			return 26;
			break;
		
		case -837798134:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case -800320369:
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
		
		case -1514257748:
			return 89;
			break;
		
		case -1023836894:
			return 6;
			break;
		
		case -1974105125:
			return 33;
			break;
		
		case -558386018:
			return 16;
			break;
		
		case -328314869:
			return 40;
			break;
		
		case -1903783095:
			return 40;
			break;
		
		case -1674924399:
			return 40;
			break;
		
		case -252323802:
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
		
		case -978943608:
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
		
		case -1516865571:
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
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case -859358814:
			return 20;
			break;
		
		case -1157818866:
			return 58;
			break;
		
		case -247856505:
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
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
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
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
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
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
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
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
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
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
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case -518474626:
			return -1;
			break;
	}
	return -1;
}

bool func_679(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_685(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
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
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_684() || func_683())
					{
						iVar1 = 400;
						if (func_663() && (func_682() || func_681()))
						{
							iVar1 = 0;
						}
						func_685(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_685(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_680(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_684() || func_683())
					{
						iVar1 = 450;
						if (func_663() && (func_682() || func_681()))
						{
							iVar1 = 0;
						}
						func_685(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_685(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_680(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_684() || func_683())
					{
						iVar1 = 380;
						if (func_663() && (func_682() || func_681()))
						{
							iVar1 = 0;
						}
						func_685(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_685(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_680(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2906)), 0);
					break;
				
				case 1:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_262145.f_2907)), 2);
					break;
				
				case 2:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_262145.f_2908)), 3);
					break;
				
				case 3:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_262145.f_2909)), 0);
					break;
				
				case 4:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2910)), 0);
					break;
				
				case 54:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_262145.f_2911)), 1);
					break;
				
				case 5:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2912)), 0);
					break;
				
				case 6:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2913)), 2);
					break;
				
				case 55:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_262145.f_2914)), 1);
					break;
				
				case 7:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_262145.f_2915)), 0);
					break;
				
				case 8:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_262145.f_2916)), 7);
					break;
				
				case 9:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_262145.f_2917)), 0);
					break;
				
				case 10:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_262145.f_2918)), 0);
					break;
				
				case 11:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_262145.f_2919)), 0);
					break;
				
				case 56:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2920)), 1);
					break;
				
				case 12:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2921)), 2);
					break;
				
				case 57:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2922)), 1);
					break;
				
				case 58:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2923)), 1);
					break;
				
				case 59:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_262145.f_2924)), 1);
					break;
				
				case 60:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2925)), 1);
					break;
				
				case 17:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2930)), 2);
					break;
				
				case 18:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2931)), 2);
					break;
				
				case 19:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_262145.f_2932)), 2);
					break;
				
				case 20:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2933)), 3);
					break;
				
				case 21:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_262145.f_2934)), 3);
					break;
				
				case 22:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2935)), 3);
					break;
				
				case 23:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2936)), 3);
					break;
				
				case 24:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2937)), 3);
					break;
				
				case 25:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2938)), 2);
					break;
				
				case 26:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2939)), 3);
					break;
				
				case 27:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_262145.f_2940)), 3);
					break;
				
				case 28:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2941)), 3);
					break;
				
				case 61:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_262145.f_2942)), 1);
					break;
				
				case 62:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2943)), 1);
					break;
				
				case 63:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_262145.f_2944)), 1);
					break;
				
				case 64:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2945)), 1);
					break;
				
				case 65:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_262145.f_2946)), 1);
					break;
				
				case 29:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2947)), 0);
					break;
				
				case 30:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2948)), 0);
					break;
				
				case 31:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 66:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2950)), 1);
					break;
				
				case 32:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2951)), 2);
					break;
				
				case 33:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2952)), 3);
					break;
				
				case 34:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_262145.f_2953)), 2);
					break;
				
				case 35:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_262145.f_2954)), 0);
					break;
				
				case 36:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_262145.f_2955)), 0);
					break;
				
				case 37:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_262145.f_2956)), 0);
					break;
				
				case 38:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2957)), 3);
					break;
				
				case 39:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_262145.f_2958)), 2);
					break;
				
				case 40:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2959)), 0);
					break;
				
				case 67:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2960)), 1);
					break;
				
				case 41:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2961)), 2);
					break;
				
				case 68:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2962)), 1);
					break;
				
				case 42:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_262145.f_2963)), 0);
					break;
				
				case 43:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_262145.f_2964)), 2);
					break;
				
				case 44:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2965)), 0);
					break;
				
				case 45:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2966)), 0);
					break;
				
				case 46:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2967)), 0);
					break;
				
				case 47:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2968)), 3);
					break;
				
				case 48:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2969)), 3);
					break;
				
				case 49:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_262145.f_2970)), 3);
					break;
				
				case 50:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_262145.f_2971)), 2);
					break;
				
				case 51:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2972)), 3);
					break;
				
				case 52:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_262145.f_2973)), 3);
					break;
				
				case 53:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2974)), 0);
					break;
				
				case 69:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2975)), 1);
					break;
				
				case 70:
					func_685(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2976)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2977)), 0);
						break;
					
					case 88:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 89:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 93:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2926)), 0);
						break;
					
					case 14:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2927)), 0);
						break;
					
					case 15:
						func_685(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2928)), 2);
						break;
					
					case 16:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2929)), 0);
						break;
					
					case 71:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 0);
						break;
					
					case 72:
						func_685(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2977)), 0);
						break;
					
					case 88:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 89:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 93:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_685(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2926)), 0);
						break;
					
					case 14:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 15:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2928)), 2);
						break;
					
					case 16:
						func_685(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_680(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_680(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILES::_GET_NUM_DECORATIONS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILES::_0xFF56381874F82086(iParam1, iVar0, &Var2))
		{
			if (!FILES::_IS_DLC_DATA_EMPTY(Var2))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_681()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
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
		if (Global_143075.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
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
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
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

int func_682()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(Global_25, 6))
	{
		if (MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (MISC::IS_BIT_SET(iVar0, 2) || MISC::IS_BIT_SET(iVar0, 4))
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
		if (Global_143075.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 2) || MISC::IS_BIT_SET(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_683()
{
	return 1;
}

int func_684()
{
	return 1;
}

void func_685(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
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
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_11 == 20)
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
				sParam0->f_11 = -1;
			}
		}
	}
}

bool func_686(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_687(iParam0, iParam1);
	iVar1 = func_665(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(iVar0, iVar1);
}

int func_687(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_688(iParam0);
	if (iVar0 == 7872)
	{
		return 0;
	}
	iVar1 = func_127(iVar0, iParam1, 0);
	return iVar1;
}

int func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_669(iVar0);
	if ((func_135() == 0 || func_668() == 0) || (func_135() == 999 && func_668() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1045;
				break;
			
			case 1:
				return 1046;
				break;
			
			case 2:
				return 1047;
				break;
			
			case 3:
				return 1048;
				break;
			
			case 4:
				return 1049;
				break;
			
			case 5:
				return 1050;
				break;
			
			case 6:
				return 1484;
				break;
			
			case 7:
				return 1485;
				break;
			
			case 8:
				return 1486;
				break;
			
			case 9:
				return 1487;
				break;
			
			case 10:
				return 1944;
				break;
			
			case 11:
				return 1945;
				break;
			
			case 12:
				return 1946;
				break;
			
			case 13:
				return 2412;
				break;
			
			case 14:
				return 2432;
				break;
			
			case 15:
				return 2435;
				break;
			
			case 16:
				return 2438;
				break;
			
			case 17:
				return 2601;
				break;
			
			case 18:
				return 2604;
				break;
			
			case 19:
				return 2607;
				break;
			
			case 20:
				return 3767;
				break;
			
			case 21:
				return 3770;
				break;
			
			case 22:
				return 3845;
				break;
			
			case 23:
				return 3848;
				break;
			
			case 24:
				return 3851;
				break;
			
			case 25:
				return 3854;
				break;
			
			case 26:
				return 5345;
			
			case 27:
				return 5348;
				break;
			
			case 28:
				return 5450;
				break;
			
			case 29:
				return 5453;
				break;
			
			case 30:
				return 6412;
				break;
			
			case 31:
				return 6415;
				break;
		}
		return 7872;
	}
	return 7872;
}

int func_689(int iParam0)
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
			iVar2 = func_127(1754, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_728(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_712(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if ((FILES::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return 1;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1393156190, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar4, -1237899132, 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = func_127(1754, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_728(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_712(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((FILES::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return 1;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -1393156190, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar6, -1237899132, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_690(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_99.f_28;
		if (iVar0 != -1 && iVar0 < 4)
		{
			if (func_691(iVar0) != -1 && func_691(iVar0) != 0)
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

int func_691(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2447954.f_5989[iParam0];
}

int func_692(int iParam0, bool bParam1)
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
							iVar2 = func_694(joaat("mp_m_freemode_01"), 11, func_728(iParam0, 11, -1), 0);
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
						if (func_686(13, -1))
						{
							return 1;
						}
						else if (func_686(14, -1))
						{
							return 1;
						}
						else if (func_686(15, -1))
						{
							return 1;
						}
						else if (func_686(16, -1))
						{
							return 1;
						}
						else if (func_686(71, -1))
						{
							return 1;
						}
						else if (func_686(72, -1))
						{
						}
						else if (func_61(PLAYER::PLAYER_ID(), 1) && Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_70.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_728(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_712(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if (((FILES::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0))
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
						iVar5 = func_728(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_712(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if (((FILES::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 1843965488, 0))
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
							iVar7 = func_694(joaat("mp_f_freemode_01"), 11, func_728(iParam0, 11, -1), 0);
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
						iVar8 = func_728(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_712(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if (((FILES::_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar9, -1467682989, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar9, 362493804, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar9, 1843965488, 0))
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
							iVar10 = func_694(joaat("mp_f_freemode_01"), 11, func_728(iParam0, 11, -1), 0);
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
							iVar11 = func_694(joaat("mp_f_freemode_01"), 11, func_728(iParam0, 11, -1), 0);
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
						iVar12 = func_728(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_712(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if (((FILES::_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar13, -1467682989, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar13, 362493804, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar13, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (func_693(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_693(int iParam0)
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
		FILES::GET_SHOP_PED_COMPONENT(103980309, &Var0);
	}
	else
	{
		FILES::GET_SHOP_PED_COMPONENT(-31075674, &Var0);
	}
	if (iVar2 == Var0.f_3 && iVar3 == Var0.f_4)
	{
		return 1;
	}
	return 0;
}

int func_694(int iParam0, int iParam1, int iParam2, int iParam3)
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
				if (func_664(89, -1))
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
				if (func_664(87, -1))
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
				iVar0 = func_712(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 362493804, 0))
					{
						iVar1 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != 1849449579)
								{
									return func_670(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_127(1754, -1, 0);
						}
						return func_670(iParam3, 3);
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
				if (func_664(89, -1))
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
				if (func_664(87, -1))
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
				if (func_664(89, -1))
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
				if (func_664(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_712(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						iVar7 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != 1849449579)
								{
									return func_670(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_127(1754, -1, 0);
						}
						return func_670(iParam3, 3);
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
				if (func_664(89, -1))
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
				if (func_664(87, -1))
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
				iVar12 = func_712(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar12, 362493804, 0))
					{
						iVar13 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != 1849449579)
								{
									return func_670(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar12, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_127(1754, -1, 0);
						}
						return func_670(iParam3, 4);
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
				if (func_664(89, -1))
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
				if (func_664(87, -1))
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
				if (func_664(89, -1))
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
				if (func_664(87, -1))
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
				iVar18 = func_712(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar18, 362493804, 0))
					{
						iVar19 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != 1849449579)
								{
									return func_670(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar18, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_127(1754, -1, 0);
						}
						return func_670(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_695(int iParam0)
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

int func_696(int iParam0, int iParam1)
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
			return -1;
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
			iVar0 = func_712(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case -1983429828:
					case 228608740:
					case 600995656:
					case 850728205:
					case 1093513726:
					case 1732051928:
						return 108;
						break;
					
					case -457639650:
					case -94952354:
					case 144031963:
					case 533262145:
					case -1545668757:
					case -905050483:
						return 109;
						break;
					
					case -1625493211:
					case -1112723899:
					case -1432451032:
					case -647502406:
					case -925481833:
						return 110;
						break;
					
					case -1168328595:
					case -1421993424:
					case -576454917:
					case -438399124:
					case 271967258:
						return 111;
						break;
					
					case -1903246936:
					case 1155542604:
					case 2048071857:
					case -1605475033:
					case 100085859:
						return 112;
						break;
					
					case 745771948:
					case -1619297862:
					case -1878926649:
					case -485850917:
					case 558628189:
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case -1761842625:
						return 114;
						break;
				}
				iVar1 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != 1849449579)
						{
							return func_670(iVar3, 3);
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
			return -1;
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
			return func_670(-1261720761, 4);
		}
		else if (iParam1 == 80)
		{
			return func_670(-1261720761, 4);
		}
		else if (iParam1 == 81)
		{
			return func_670(-1261720761, 4);
		}
		else if (iParam1 == 82)
		{
			return func_670(-1261720761, 4);
		}
		else if (iParam1 == 83)
		{
			return func_670(-1261720761, 4);
		}
		else if (iParam1 == 84)
		{
			return func_670(-1261720761, 4);
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
			iVar6 = func_712(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case -1238992735:
					case -1947261901:
					case -771018642:
					case -1486169302:
					case 1159796376:
					case 256274500:
						return 108;
						break;
					
					case 1389867525:
					case 1622396349:
					case 1851615504:
					case -2052614252:
					case -1818610823:
					case -1799420756:
						return 109;
						break;
					
					case 1855226196:
					case 271139943:
					case -1099030254:
					case -307724442:
					case -637872117:
						return 110;
						break;
					
					case -663797501:
					case 2088667427:
					case 1779786837:
					case -1609936838:
					case -1880477702:
						return 111;
						break;
					
					case 1052499595:
					case 142438919:
					case 458495932:
					case -701723290:
					case -119221546:
						return 112;
						break;
					
					case 1245050198:
					case 1481937299:
					case 1754870300:
					case -2033029490:
					case 62318681:
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case -231538229:
						return 114;
						break;
				}
				iVar7 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != 1849449579)
						{
							return func_670(iVar9, 4);
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
	return -1;
}

void func_697(int iParam0, int iParam1)
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
		iVar1 = func_695(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_725(13, 0, Global_70668);
					func_725(14, 0, Global_70668);
					func_725(15, 0, Global_70668);
					func_725(16, 0, Global_70668);
					func_725(71, 0, Global_70668);
					func_725(72, 0, Global_70668);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar1 == 3)
					{
						func_725(73, 0, Global_70668);
						func_725(74, 0, Global_70668);
						func_725(75, 0, Global_70668);
						func_725(76, 0, Global_70668);
						func_725(77, 0, Global_70668);
						func_725(78, 0, Global_70668);
						func_725(79, 0, Global_70668);
						func_725(80, 0, Global_70668);
						func_725(81, 0, Global_70668);
						func_725(82, 0, Global_70668);
						func_725(83, 0, Global_70668);
						func_725(84, 0, Global_70668);
						func_725(85, 0, Global_70668);
						func_725(86, 0, Global_70668);
						func_725(90, 0, Global_70668);
						func_725(91, 0, Global_70668);
						func_725(124, 0, Global_70668);
						func_725(125, 0, Global_70668);
						func_725(87, 0, Global_70668);
						func_725(88, 0, Global_70668);
						func_725(89, 0, Global_70668);
						iVar3 = FILES::_GET_NUM_DECORATIONS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::_0xFF56381874F82086(3, iVar2, &Var4))
							{
								if (Var4.f_6 == 277073536)
								{
									func_725((129 + iVar2), 0, Global_70668);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_725(73, 0, Global_70668);
						func_725(74, 0, Global_70668);
						func_725(75, 0, Global_70668);
						func_725(76, 0, Global_70668);
						func_725(77, 0, Global_70668);
						func_725(78, 0, Global_70668);
						func_725(79, 0, Global_70668);
						func_725(80, 0, Global_70668);
						func_725(81, 0, Global_70668);
						func_725(82, 0, Global_70668);
						func_725(83, 0, Global_70668);
						func_725(84, 0, Global_70668);
						func_725(85, 0, Global_70668);
						func_725(92, 0, Global_70668);
						func_725(87, 0, Global_70668);
						func_725(88, 0, Global_70668);
						func_725(89, 0, Global_70668);
						iVar6 = FILES::_GET_NUM_DECORATIONS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::_0xFF56381874F82086(4, iVar5, &Var7))
							{
								if (Var7.f_6 == 277073536)
								{
									func_725((129 + iVar5), 0, Global_70668);
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
						func_725(93, 0, Global_70668);
						func_725(94, 0, Global_70668);
						func_725(95, 0, Global_70668);
						func_725(96, 0, Global_70668);
						func_725(97, 0, Global_70668);
						func_725(98, 0, Global_70668);
						func_725(99, 0, Global_70668);
						func_725(100, 0, Global_70668);
						func_725(101, 0, Global_70668);
						func_725(102, 0, Global_70668);
						func_725(103, 0, Global_70668);
						func_725(104, 0, Global_70668);
						func_725(105, 0, Global_70668);
						func_725(106, 0, Global_70668);
						func_725(107, 0, Global_70668);
						func_725(108, 0, Global_70668);
						func_725(109, 0, Global_70668);
						func_725(110, 0, Global_70668);
						func_725(111, 0, Global_70668);
						func_725(112, 0, Global_70668);
						func_725(113, 0, Global_70668);
						func_725(114, 0, Global_70668);
						func_725(115, 0, Global_70668);
						func_725(116, 0, Global_70668);
						func_725(117, 0, Global_70668);
						func_725(123, 0, Global_70668);
						iVar9 = FILES::_GET_NUM_DECORATIONS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::_0xFF56381874F82086(3, iVar8, &Var10))
							{
								if (Var10.f_6 == 2140335355)
								{
									func_725((129 + iVar8), 0, Global_70668);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_725(93, 0, Global_70668);
						func_725(94, 0, Global_70668);
						func_725(95, 0, Global_70668);
						func_725(96, 0, Global_70668);
						func_725(97, 0, Global_70668);
						func_725(98, 0, Global_70668);
						func_725(99, 0, Global_70668);
						func_725(100, 0, Global_70668);
						func_725(101, 0, Global_70668);
						func_725(102, 0, Global_70668);
						func_725(103, 0, Global_70668);
						func_725(104, 0, Global_70668);
						func_725(105, 0, Global_70668);
						func_725(106, 0, Global_70668);
						func_725(107, 0, Global_70668);
						func_725(108, 0, Global_70668);
						func_725(109, 0, Global_70668);
						func_725(110, 0, Global_70668);
						func_725(111, 0, Global_70668);
						func_725(112, 0, Global_70668);
						func_725(113, 0, Global_70668);
						func_725(114, 0, Global_70668);
						func_725(115, 0, Global_70668);
						func_725(116, 0, Global_70668);
						func_725(117, 0, Global_70668);
						func_725(118, 0, Global_70668);
						func_725(119, 0, Global_70668);
						func_725(120, 0, Global_70668);
						func_725(121, 0, Global_70668);
						func_725(122, 0, Global_70668);
						func_725(123, 0, Global_70668);
						iVar12 = FILES::_GET_NUM_DECORATIONS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::_0xFF56381874F82086(4, iVar11, &Var13))
							{
								if (Var13.f_6 == 2140335355)
								{
									func_725((129 + iVar11), 0, Global_70668);
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
				if (func_679(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_725(Var0.f_11, 0, Global_70668);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_698(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_727();
	if (iVar0 != -1)
	{
		if (!func_699(iParam0, iParam1, iVar0))
		{
			func_725(iVar0, 0, Global_70668);
			return 1;
		}
	}
	return 0;
}

int func_699(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_707(iParam0, iParam1, -1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_712(iParam0, iParam1, 11, 3);
				iVar0 = func_702(iVar1);
			}
			if (iVar1 != -1 && func_627(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && func_700(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar1, -497440475, 0))
			{
				return 0;
			}
			if ((iVar1 == -1198378836 || iVar1 == 968798999) || iVar1 == 1283250323)
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
					if (func_694(iParam0, 11, iParam1, 0) == -1)
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
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_712(iParam0, iParam1, 11, 4);
				iVar2 = func_702(iVar3);
			}
			if (iVar3 != -1 && func_627(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && func_700(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar3, -497440475, 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_694(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_694(iParam0, 11, iParam1, 0) == -1)
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
					if (iVar2 != 4 || !FILES::_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0))
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

int func_700(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1769225721, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1834446747, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -939525357, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 38465448, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1469891622, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -502321359, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -792359778, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 997614074, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 748799057, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 653048039, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1922736331, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1685128312, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1892460036, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -296738547, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_701(int iParam0, int iParam1, int iParam2)
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
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = func_712(iParam0, iParam1, 4, 3);
			iVar1 = func_702(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_712(iParam0, iParam2, 11, 3);
			iVar3 = func_702(iVar2);
		}
		if (iVar2 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0))
			{
				if (iVar0 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0))
			{
				if (iVar0 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1420825402, 0))
			{
				if (iVar0 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar0 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
			{
				if (iVar0 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				if (iVar0 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return 1;
			}
		}
		else if (iVar0 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return 1;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -1420825402, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || FILES::_0x341DE7ED1D2A1BFD(iVar0, 1627756587, 0))
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
			case -439764935:
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106:
				if (((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == 1844077094) || iVar2 == 1672760762) || iVar2 == 339848918) || iVar2 == -625689667) || iVar2 == -924903406) || iVar2 == -149326714) || iVar2 == -443756179) || iVar2 == -1817498197) || iVar2 == -2110289212) || iVar2 == -1333926064) || iVar2 == -1903638278) || iVar2 == 1018832222) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -2088146832, 0))
				{
					return 0;
				}
				break;
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1021189127, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = func_712(iParam0, iParam1, 4, 4);
			iVar5 = func_702(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = func_712(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -299089347, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -299089347, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -1420825402, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1420825402, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0))
			{
				if ((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0)) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0)) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar6, -1200513218, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -779835469, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1086258388, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1119232689, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1488441032, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -2088146832, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1446333198, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -1351486939, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, 821147517, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar6, -55550566, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -299089347, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1420825402, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0)) || (iVar6 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -2102859770, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar6, 2026620439, 0))
			{
				return 0;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar6, -2119756144, 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1055526375, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1882920022, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1080576805, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1387458490, 0))
			{
				return 0;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar6, 947651647, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar6, -58412562, 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_702(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_703(int iParam0, int iParam1, int iParam2)
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
	
	iVar0 = -99;
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
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
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
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
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
			iVar1 = func_712(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_610(iParam0, iVar4, 11, 3);
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
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
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
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
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
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_712(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_610(iParam0, iVar10, 11, 4);
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
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_704(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_705(iVar0);
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
					return Global_104555.f_2353.f_539[0 /*65*/].f_59;
					break;
				
				case 3:
					if (Global_104555.f_9055.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_104555.f_9055.f_99.f_58[120])
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
					return Global_104555.f_2353.f_539[1 /*65*/].f_59;
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
					return Global_104555.f_2353.f_539[2 /*65*/].f_59;
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
	return -99;
}

int func_705(int iParam0)
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

int func_706(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_95022 != -99)
	{
		if (Global_95023 == 11)
		{
			Global_70671[1 /*14*/] = { func_748(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_95022) };
			iVar0 = func_708(ENTITY::GET_ENTITY_MODEL(iParam0), Global_95022, iParam1, Global_70671[1 /*14*/].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_95023 == 8)
		{
			iVar1 = func_703(ENTITY::GET_ENTITY_MODEL(iParam0), Global_95022, Global_95024);
			if (iVar1 != -99)
			{
				Global_70671[1 /*14*/] = { func_748(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1) };
				iVar2 = func_708(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_70671[1 /*14*/].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_95022;
			}
		}
	}
	return -99;
}

int func_707(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 237)
			{
				iParam2 = func_712(iParam0, iParam1, 11, 3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -1393156190, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = func_712(iParam0, iParam1, 11, 4);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -1393156190, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_708(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_712(iParam0, iParam2, 11, 3);
			iVar3 = func_702(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = func_712(iParam0, iParam1, 11, 3);
			iVar5 = func_702(iVar4);
		}
		if (iVar2 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar2, -1347486026, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1274099003, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1723403459, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1538937264, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1407614029, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
				if (((((((!FILES::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -1407614029, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0))
					{
						return -99;
					}
				}
			}
			if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, -1655154167, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1719167561, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1431529976, 0))
			{
				return -99;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1690933245, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1325813684, 0))
			{
				return -99;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
			{
				return -99;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_610(iParam0, -1071423629, 8, 3);
							break;
						
						case 1:
							iVar0 = func_610(iParam0, -833094692, 8, 3);
							break;
						
						case 2:
							iVar0 = func_610(iParam0, -1836153782, 8, 3);
							break;
						
						case 3:
							iVar0 = func_610(iParam0, -1598414687, 8, 3);
							break;
						
						case 4:
							iVar0 = func_610(iParam0, 123661793, 8, 3);
							break;
						
						case 5:
							iVar0 = func_610(iParam0, 330958487, 8, 3);
							break;
						
						case 7:
							iVar0 = func_610(iParam0, -646180324, 8, 3);
							break;
						
						case 8:
							iVar0 = func_610(iParam0, -142717408, 8, 3);
							break;
						
						case 11:
							iVar0 = func_610(iParam0, 1290696959, 8, 3);
							break;
					}
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_610(iParam0, -1382822784, 8, 3);
							break;
						
						case 1:
							iVar0 = func_610(iParam0, -1731353868, 8, 3);
							break;
						
						case 2:
							iVar0 = func_610(iParam0, -1960638561, 8, 3);
							break;
						
						case 3:
							iVar0 = func_610(iParam0, 147161830, 8, 3);
							break;
						
						case 4:
							iVar0 = func_610(iParam0, -92608943, 8, 3);
							break;
						
						case 5:
							iVar0 = func_610(iParam0, -162931217, 8, 3);
							break;
						
						case 7:
							iVar0 = func_610(iParam0, -537087659, 8, 3);
							break;
						
						case 8:
							iVar0 = func_610(iParam0, 1665087452, 8, 3);
							break;
						
						case 11:
							iVar0 = func_610(iParam0, 1012984348, 8, 3);
							break;
					}
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_610(iParam0, 385813134, 8, 3);
							break;
						
						case 1:
							iVar0 = func_610(iParam0, 675392787, 8, 3);
							break;
						
						case 2:
							iVar0 = func_610(iParam0, -238272479, 8, 3);
							break;
						
						case 3:
							iVar0 = func_610(iParam0, 67757212, 8, 3);
							break;
						
						case 4:
							iVar0 = func_610(iParam0, -536372072, 8, 3);
							break;
						
						case 5:
							iVar0 = func_610(iParam0, -247578875, 8, 3);
							break;
						
						case 7:
							iVar0 = func_610(iParam0, -1160588753, 8, 3);
							break;
						
						case 8:
							iVar0 = func_610(iParam0, -854821214, 8, 3);
							break;
						
						case 11:
							iVar0 = func_610(iParam0, -1458295118, 8, 3);
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
				if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
				{
					iVar6 = 4;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
				{
					iVar6 = 5;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
		{
			bVar7 = true;
			if (((((((((FILES::_0x341DE7ED1D2A1BFD(iVar2, 470686834, 0) && FILES::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1407614029, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
			{
				iVar6 = 1;
			}
			else if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (bVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = FILES::_0xC17AD0E5752BECDA(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && FILES::_0x341DE7ED1D2A1BFD(iVar10, -168336417, 0)) || (iVar6 == 5 && FILES::_0x341DE7ED1D2A1BFD(iVar10, -1415000253, 0))) || (iVar6 == 4 && FILES::_0x341DE7ED1D2A1BFD(iVar10, -1703203608, 0))) || (iVar6 == 3 && FILES::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0))) || (iVar6 == 2 && FILES::_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0))) || (iVar6 == 1 && FILES::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0))) || ((((((iVar6 == 0 && !FILES::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar10, -1703203608, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar10, -1415000253, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar10, -168336417, 0)))
						{
							if (iVar10 != 0 && iVar10 != 1849449579)
							{
								iVar0 = func_610(iParam0, iVar10, 8, 3);
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
			return -99;
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return -99;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 350281921, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return -99;
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
			else if (((iParam1 >= 220 && iParam1 <= 235) && func_709()) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0))
			{
				iVar0 = 34;
				iVar1 = 0;
				FILES::INIT_SHOP_PED_COMPONENT(&Var13);
				if (Global_4264616[1] != 0)
				{
					FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, -1, 0, -1, 8);
					FILES::GET_SHOP_PED_QUERY_COMPONENT(Global_4264613[1], &Var13);
					if (Var13.f_1 != Global_4264616[1])
					{
						Global_4264616[1] = 0;
						Global_4264613[1] = 0;
					}
				}
				if (Global_4264616[1] == 0)
				{
					iVar15 = 0;
					iVar16 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, -1, 0, -1, 8);
					iVar14 = 0;
					while (iVar14 < iVar16)
					{
						FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar14, &Var13);
						if (!FILES::_IS_DLC_DATA_EMPTY(Var13))
						{
							if (MISC::GET_HASH_KEY(&(Var13.f_9)) == -1665616807 && FILES::_0x341DE7ED1D2A1BFD(Var13.f_1, 647976134, 0))
							{
								Global_4264616[1] = Var13.f_1;
								Global_4264613[1] = iVar15;
								iVar14 = iVar16 + 1;
							}
							iVar15++;
						}
						iVar14++;
					}
				}
				if (Global_4264616[1] != 0)
				{
					iVar0 = (func_611(iParam0, func_736(8)) + Global_4264613[1]);
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar17 = func_712(iParam0, iParam1, 11, 3);
					if ((iVar17 != -1 && !FILES::_0x341DE7ED1D2A1BFD(iVar17, 310957510, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar17, -109983526, 0))
					{
						iVar18 = FILES::_0xC17AD0E5752BECDA(iVar17);
						iVar19 = 0;
						while (iVar19 < iVar18)
						{
							FILES::GET_VARIANT_COMPONENT(iVar17, iVar19, &iVar20, &iVar21, &iVar22);
							if (iVar22 == 8)
							{
								if (iVar20 != 0 && iVar20 != 1849449579)
								{
									if ((!FILES::_0x341DE7ED1D2A1BFD(iVar20, -1703203608, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar20, -1415000253, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar20, -168336417, 0))
									{
										iVar0 = func_610(iParam0, iVar20, 8, 3);
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
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
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
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar23 = 0;
				if (iParam2 >= 236 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
				{
					iVar23 = 1;
				}
				iVar24 = func_712(iParam0, iParam1, 11, 3);
				if (iVar24 != -1)
				{
					iVar25 = FILES::_0xC17AD0E5752BECDA(iVar24);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						FILES::GET_VARIANT_COMPONENT(iVar24, iVar26, &iVar27, &iVar28, &iVar29);
						if (iVar29 == 8 && iVar23 == FILES::_0x341DE7ED1D2A1BFD(iVar27, 1680519719, 0))
						{
							if (iVar27 != 0 && iVar27 != 1849449579)
							{
								iVar0 = func_610(iParam0, iVar27, 8, 3);
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
					iVar0 = func_610(iParam0, -1739646902, 8, 3);
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
			if (func_709())
			{
				iVar30 = 0;
				iVar31 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)))
				{
					iVar30 = 1;
					iVar31 = 1;
				}
				FILES::INIT_SHOP_PED_COMPONENT(&Var32);
				if (Global_4264616[iVar31] != 0)
				{
					FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, -1, 0, -1, 8);
					FILES::GET_SHOP_PED_QUERY_COMPONENT(Global_4264613[iVar31], &Var32);
					if (Var32.f_1 != Global_4264616[iVar31])
					{
						Global_4264616[iVar31] = 0;
						Global_4264613[iVar31] = 0;
					}
				}
				if (Global_4264616[iVar31] == 0)
				{
					iVar34 = 0;
					iVar35 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 6, -1, 0, -1, 8);
					iVar33 = 0;
					while (iVar33 < iVar35)
					{
						FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar33, &Var32);
						if (!FILES::_IS_DLC_DATA_EMPTY(Var32))
						{
							if (MISC::GET_HASH_KEY(&(Var32.f_9)) == -1665616807 && iVar30 == FILES::_0x341DE7ED1D2A1BFD(Var32.f_1, 647976134, 0))
							{
								Global_4264616[iVar31] = Var32.f_1;
								Global_4264613[iVar31] = iVar34;
								iVar33 = iVar35 + 1;
							}
							iVar34++;
						}
						iVar33++;
					}
				}
				if (Global_4264616[iVar31] != 0)
				{
					iVar0 = (func_611(iParam0, func_736(8)) + Global_4264613[iVar31]);
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = -99;
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
			iVar37 = func_712(iParam0, iParam1, 11, 3);
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0))
			{
				bVar36 = true;
			}
			if (iVar37 != -1)
			{
				iVar38 = FILES::_0xC17AD0E5752BECDA(iVar37);
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					FILES::GET_VARIANT_COMPONENT(iVar37, iVar39, &iVar40, &iVar41, &iVar42);
					if (iVar42 == 8)
					{
						if (iVar40 != 0 && iVar40 != 1849449579)
						{
							iVar0 = func_610(iParam0, iVar40, 8, 3);
							iVar1 = 0;
							if (!bVar36 || FILES::_0x341DE7ED1D2A1BFD(iVar40, 647976134, 0))
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
		iVar43 = -1;
		iVar44 = -1;
		if (iParam2 >= 256)
		{
			iVar43 = func_712(iParam0, iParam2, 11, 4);
			iVar44 = func_702(iVar43);
		}
		iVar45 = -1;
		iVar46 = -1;
		if (iParam1 >= 256)
		{
			iVar45 = func_712(iParam0, iParam1, 11, 4);
			iVar46 = func_702(iVar45);
		}
		if (iVar43 != -1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar43, -491588875, 0))
			{
				return -99;
			}
		}
		if ((((FILES::_0x341DE7ED1D2A1BFD(iVar43, -1813210391, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -89003918, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1407614029, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar45, -828478571, 0))
			{
				return -99;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar43, -1719338724, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar46 == 0) || iVar46 == 2) || iVar46 == 4) || iVar46 == 5) || iVar46 == 11) || iVar46 == 12) || iVar46 == 13) || iVar46 == 15) || iVar45 == -221826679) || iVar45 == 1172264892) || iVar45 == 1474853838) || iVar45 == 278369420) || iVar45 == -310817200) || iVar45 == -138976564) || iVar45 == -905541781) || iVar45 == 998321559) || iVar45 == 64401473)
			{
			}
			else
			{
				return -99;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar45, -849839091, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar45, -2088146832, 0))
		{
			return -99;
		}
		iVar47 = 0;
		bVar48 = false;
		if ((((((FILES::_0x341DE7ED1D2A1BFD(iVar45, -761463976, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar45, -1347486026, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar45, -1119232689, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar45, 1784133476, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar45, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar45, 2030343924, 0))
		{
			bVar48 = true;
			if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar44 == 1) || iVar44 == 8)
			{
				iVar47 = 2;
			}
			else if ((((FILES::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1834446747, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
			{
				iVar47 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar44 == 10) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 684992453, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -820724897, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 153792394, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -872449705, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 700658917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1714969731, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 745826556, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1055526375, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 144417099, 0))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar45, 1784133476, 0))
				{
					iVar47 = 1;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar45, -1119232689, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0))
				{
					iVar47 = 1;
				}
				else
				{
					iVar47 = -1;
				}
			}
			else
			{
				iVar47 = 1;
			}
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar45, -1351486939, 0))
		{
			bVar48 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar44 == 7) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 684992453, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -820724897, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -872449705, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0))
			{
				if (((FILES::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1834446747, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = 1;
				}
			}
			else if ((((((FILES::_0x341DE7ED1D2A1BFD(iVar43, 153792394, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1322269404, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 548036233, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 700658917, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1014753511, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1410897066, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -2119756144, 0))
			{
				iVar47 = 0;
			}
			else
			{
				iVar47 = -1;
			}
		}
		switch (iVar45)
		{
			case -221826679:
			case 1172264892:
			case 1474853838:
			case 278369420:
			case -310817200:
			case -138976564:
			case -905541781:
			case 998321559:
			case 64401473:
			case 15269846:
			case -674026069:
			case -904392139:
			case -1135708510:
			case -1360241698:
			case -2130051046:
			case 1935434943:
			case 1704282417:
			case 1472114052:
			case 1169688951:
			case -1193832172:
			case -886884949:
			case -1669539745:
			case -1370260468:
			case -413962745:
			case -238779663:
				bVar48 = true;
				if (((FILES::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
				{
					iVar47 = 1;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar43, -1834446747, 0))
				{
					iVar47 = 2;
				}
				else if ((((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar43, -870074461, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1719338724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1813210391, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -89003918, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -747858475, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -58412562, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1407614029, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
				{
					iVar47 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar44 == 1) || iVar44 == 7) || iVar44 == 8)
				{
					iVar47 = 0;
				}
				else
				{
					iVar47 = -1;
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
					iVar47 = -1;
				}
				break;
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iVar43, -1266557933, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -979468724, 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar46 == 15)
			{
				iVar0 = 120;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar45, 2044466679, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar45, -2020757158, 0))
			{
				bVar48 = true;
				iVar47 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar43, -1237899132, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar43, -491588875, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar43, -2124629577, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar46 == 12)
				{
					return -99;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar46 == 4) || iVar46 == 5) || iVar46 == 11) || iVar46 == 12) || iVar46 == 13) || iVar46 == 15)
			{
				bVar48 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar48 = true;
				if ((FILES::_0x341DE7ED1D2A1BFD(iVar43, -269266203, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 297865853, 0))
				{
					iVar47 = 4;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar43, 201427653, 0))
				{
					iVar47 = 5;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar43, 967829025, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -2124629577, 0))
				{
					iVar47 = 6;
				}
				else
				{
					iVar47 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar48)
		{
			if (iVar47 != -1)
			{
				iVar49 = FILES::_0xC17AD0E5752BECDA(iVar45);
				iVar50 = 0;
				while (iVar50 < iVar49)
				{
					FILES::GET_VARIANT_COMPONENT(iVar45, iVar50, &iVar51, &iVar52, &iVar53);
					if (iVar53 == 8)
					{
						if (((((((iVar47 == 6 && FILES::_0x341DE7ED1D2A1BFD(iVar51, -168336417, 0)) || (iVar47 == 5 && FILES::_0x341DE7ED1D2A1BFD(iVar51, -1415000253, 0))) || (iVar47 == 4 && FILES::_0x341DE7ED1D2A1BFD(iVar51, -1703203608, 0))) || (iVar47 == 3 && FILES::_0x341DE7ED1D2A1BFD(iVar51, 1318819110, 0))) || (iVar47 == 2 && FILES::_0x341DE7ED1D2A1BFD(iVar51, -1138757583, 0))) || (iVar47 == 1 && FILES::_0x341DE7ED1D2A1BFD(iVar51, 647976134, 0))) || ((((((iVar47 == 0 && !FILES::_0x341DE7ED1D2A1BFD(iVar51, 647976134, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar51, -1138757583, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar51, 1318819110, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar51, -1703203608, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar51, -1415000253, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar51, -168336417, 0)))
						{
							if (iVar51 != 0 && iVar51 != 1849449579)
							{
								iVar0 = func_610(iParam0, iVar51, 8, 4);
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
			return -99;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar46 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar44 == 6) || iVar44 == 7)) && func_709()) && !FILES::_0x341DE7ED1D2A1BFD(iVar43, -416620954, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar43, 947651647, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar43, -549843760, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar43, 1830529185, 0))
		{
			if ((((((FILES::_0x341DE7ED1D2A1BFD(iVar43, -1813210391, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -89003918, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -747858475, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -58412562, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1407614029, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 481861038, 0))
			{
				return -99;
			}
			iVar54 = iVar45;
			if (iParam1 == 199)
			{
				iVar0 = func_610(iParam0, 331193219, 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_610(iParam0, 1115060468, 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_610(iParam0, 779636984, 8, 4);
			}
			else if (iVar54 == 948380380)
			{
				iVar0 = func_610(iParam0, -570249206, 8, 4);
			}
			else if (iVar54 == 708412993)
			{
				iVar0 = func_610(iParam0, -876115052, 8, 4);
			}
			else if (iVar54 == 1974869305)
			{
				iVar0 = func_610(iParam0, -108599534, 8, 4);
			}
			else if (iVar54 == 1197916315)
			{
				iVar0 = func_610(iParam0, 200575961, 8, 4);
			}
			else if (iVar54 == 587593690)
			{
				iVar0 = func_610(iParam0, 961930907, 8, 4);
			}
			else if (iVar54 == 323213398)
			{
				iVar0 = func_610(iParam0, -257698508, 8, 4);
			}
			else if (iVar54 == 1050193651)
			{
				iVar0 = func_610(iParam0, 516534659, 8, 4);
			}
			else if (iVar54 == 811438717)
			{
				iVar0 = func_610(iParam0, -1174312584, 8, 4);
			}
			else if (iVar54 == -877868759)
			{
				iVar0 = func_610(iParam0, -1192794304, 8, 4);
			}
			else if (iVar54 == -1108464212)
			{
				iVar0 = func_610(iParam0, -2027256889, 8, 4);
			}
			else if (iVar54 == -467866094)
			{
				iVar0 = func_610(iParam0, -1670074789, 8, 4);
			}
			else if (iVar54 == -673000034)
			{
				iVar0 = func_610(iParam0, -326349175, 8, 4);
			}
			else if (iVar54 == -1984939718)
			{
				iVar0 = func_610(iParam0, -796060021, 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1769225721, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar43, 1248753945, 0))
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
			iVar0 = -99;
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
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
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
				return -99;
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
			if (iVar45 != -1)
			{
				bVar55 = true;
				if (FILES::_0x341DE7ED1D2A1BFD(iVar45, 1965569012, 0))
				{
					bVar55 = false;
					if (iParam2 >= 256 && FILES::_0x341DE7ED1D2A1BFD(iVar43, -1200513218, 0))
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
					iVar56 = FILES::_0xC17AD0E5752BECDA(iVar45);
					iVar57 = 0;
					while (iVar57 < iVar56)
					{
						FILES::GET_VARIANT_COMPONENT(iVar45, iVar57, &iVar58, &iVar59, &iVar60);
						if (iVar60 == 8 && ((((((((iVar58 == 0 || iVar58 == 1849449579) || (iVar47 == 6 && FILES::_0x341DE7ED1D2A1BFD(iVar58, -168336417, 0))) || (iVar47 == 5 && FILES::_0x341DE7ED1D2A1BFD(iVar58, -1415000253, 0))) || (iVar47 == 4 && FILES::_0x341DE7ED1D2A1BFD(iVar58, -1703203608, 0))) || (iVar47 == 3 && FILES::_0x341DE7ED1D2A1BFD(iVar58, 1318819110, 0))) || (iVar47 == 2 && FILES::_0x341DE7ED1D2A1BFD(iVar58, -1138757583, 0))) || (iVar47 == 1 && FILES::_0x341DE7ED1D2A1BFD(iVar58, 647976134, 0))) || ((((((iVar47 == 0 && !FILES::_0x341DE7ED1D2A1BFD(iVar58, 647976134, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar58, -1138757583, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar58, 1318819110, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar58, -1703203608, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar58, -1415000253, 0)) && !FILES::_0x341DE7ED1D2A1BFD(iVar58, -168336417, 0))))
						{
							if (iVar58 != 0 && iVar58 != 1849449579)
							{
								iVar0 = func_610(iParam0, iVar58, 8, 4);
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
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_709()
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_710(int iParam0, int iParam1, int iParam2)
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
							return -331193181;
							break;
						
						case 5:
							return 73557144;
							break;
						
						case 6:
							return -887980266;
							break;
						
						case 7:
							return -306315670;
							break;
						
						case 8:
							return -1154048938;
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
							return -1301636615;
							break;
						
						case 3:
							return 1153996761;
							break;
						
						case 4:
							return -1315084792;
							break;
						
						case 5:
							return 1655884038;
							break;
						
						case 6:
							return 1489229833;
							break;
						
						case 7:
							return -1929503325;
							break;
						
						case 8:
							return -1189128367;
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
							return -1787244429;
							break;
						
						case 16:
							return -164625564;
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
							return -244985062;
							break;
						
						case 4:
							return 442977103;
							break;
						
						case 5:
							return -1385727891;
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
							return -2053677691;
							break;
						
						case 16:
							return -815345802;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return -1438684756;
							break;
						
						case 1:
							return 194146035;
							break;
						
						case 2:
							return -420901598;
							break;
						
						case 3:
							return 2107411814;
							break;
						
						case 4:
							return 1242686602;
							break;
						
						case 5:
							return -596540583;
							break;
						
						case 6:
							return -653786071;
							break;
						
						case 7:
							return 1460048630;
							break;
						
						case 8:
							return -2079589815;
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
							return -1947098483;
							break;
						
						case 3:
							return 569295621;
							break;
						
						case 4:
							return -208098559;
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
							return -137095372;
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
							return -116524123;
							break;
						
						case 16:
							return -2029602031;
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
							return -1158564771;
							break;
						
						case 4:
							return -69929428;
							break;
						
						case 5:
							return 1957730707;
							break;
						
						case 6:
							return 374587029;
							break;
						
						case 7:
							return -210146735;
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
							return -372444226;
							break;
						
						case 16:
							return -1181708276;
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
							return -1148238879;
							break;
						
						case 3:
							return -958872024;
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
							return -521728710;
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
							return -552192905;
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
							return -99079306;
							break;
						
						case 5:
							return 1989760633;
							break;
						
						case 6:
							return 1157052274;
							break;
						
						case 7:
							return -1196262225;
							break;
						
						case 8:
							return -664356399;
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
							return -254517089;
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
							return -1978886808;
							break;
						
						case 4:
							return -1279403197;
							break;
						
						case 5:
							return -1459998821;
							break;
						
						case 6:
							return 1786467932;
							break;
						
						case 7:
							return -795005246;
							break;
						
						case 8:
							return -1147008986;
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
							return -1894776690;
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
							return -1925009287;
							break;
						
						case 3:
							return -268733734;
							break;
						
						case 4:
							return -2124412821;
							break;
						
						case 5:
							return -360036697;
							break;
						
						case 6:
							return -926433555;
							break;
						
						case 7:
							return 985839403;
							break;
						
						case 8:
							return -234436397;
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
							return -1759053005;
							break;
						
						case 4:
							return 630158551;
							break;
						
						case 5:
							return -707909514;
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
							return -37756040;
							break;
						
						case 16:
							return -1984260867;
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
							return -840276017;
							break;
						
						case 3:
							return 756400133;
							break;
						
						case 4:
							return 1148630611;
							break;
						
						case 5:
							return -893909282;
							break;
						
						case 6:
							return 1485630477;
							break;
						
						case 7:
							return -934174767;
							break;
						
						case 8:
							return -1866981918;
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
							return -5325525;
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
							return -591418577;
							break;
						
						case 3:
							return -2029591494;
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
							return -1559755280;
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
							return -935552076;
							break;
						
						case 4:
							return 766407714;
							break;
						
						case 5:
							return 1509946582;
							break;
						
						case 6:
							return -2105033798;
							break;
						
						case 7:
							return 1608018857;
							break;
						
						case 8:
							return -1746944984;
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
							return -1815322218;
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
							return -51036152;
							break;
						
						case 5:
							return 1864144311;
							break;
						
						case 6:
							return 875934121;
							break;
						
						case 7:
							return -671105758;
							break;
						
						case 8:
							return -1439393512;
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
							return -1795808405;
							break;
						
						case 3:
							return -583173670;
							break;
						
						case 4:
							return 1309411930;
							break;
						
						case 5:
							return -1097003929;
							break;
						
						case 6:
							return 947491077;
							break;
						
						case 7:
							return -1021187095;
							break;
						
						case 8:
							return -1662421384;
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
							return -1456322823;
							break;
						
						case 16:
							return -752003681;
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
							return -1866149930;
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
							return -1755663855;
							break;
						
						case 8:
							return -277654310;
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
							return -491777818;
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
							return -1685192020;
							break;
						
						case 3:
							return 447714365;
							break;
						
						case 4:
							return -187478284;
							break;
						
						case 5:
							return 2101575193;
							break;
						
						case 6:
							return 1655151264;
							break;
						
						case 7:
							return -212448586;
							break;
						
						case 8:
							return -575494038;
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
							return -414534788;
							break;
						
						case 3:
							return 185531215;
							break;
						
						case 4:
							return -775417853;
							break;
						
						case 5:
							return 1619085169;
							break;
						
						case 6:
							return 888176083;
							break;
						
						case 7:
							return -868636293;
							break;
						
						case 8:
							return -481241218;
							break;
						
						case 9:
							return -1659896370;
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
							return -1137668925;
							break;
						
						case 7:
							return -245327436;
							break;
						
						case 8:
							return -2092735770;
							break;
						
						case 9:
							return 445078583;
							break;
						
						case 10:
							return -181565105;
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
							return -2039335276;
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
							return -1665814217;
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
							return -77210386;
							break;
						
						case 2:
							return 206640931;
							break;
						
						case 3:
							return 1434974169;
							break;
						
						case 4:
							return -2076303403;
							break;
						
						case 5:
							return 2073263245;
							break;
						
						case 6:
							return 229693395;
							break;
						
						case 7:
							return -981246739;
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
							return -2118725149;
							break;
						
						case 5:
							return -849747283;
							break;
						
						case 6:
							return 1582789248;
							break;
						
						case 7:
							return -1675687168;
							break;
						
						case 8:
							return -381889304;
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
							return -743369876;
							break;
						
						case 4:
							return 582693633;
							break;
						
						case 5:
							return -1280288284;
							break;
						
						case 6:
							return -1000105499;
							break;
						
						case 7:
							return -2147200029;
							break;
						
						case 8:
							return -1838714866;
							break;
						
						case 9:
							return -1501536929;
							break;
						
						case 10:
							return -1868660317;
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
							return -1420954963;
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
							return -252997160;
							break;
						
						case 8:
							return -2044888090;
							break;
						
						case 9:
							return 171952701;
							break;
						
						case 10:
							return -142319190;
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
							return -713453992;
							break;
						
						case 6:
							return 1417339152;
							break;
						
						case 7:
							return 587281350;
							break;
						
						case 8:
							return -86904022;
							break;
						
						case 9:
							return 1665085600;
							break;
						
						case 10:
							return -802903636;
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
							return -1858518769;
							break;
						
						case 3:
							return 44044890;
							break;
						
						case 4:
							return -1131137757;
							break;
						
						case 5:
							return 213313570;
							break;
						
						case 6:
							return -233124949;
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
							return -1710613996;
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
							return -957185436;
							break;
						
						case 8:
							return -240960885;
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
							return -259688953;
							break;
						
						case 3:
							return -736534114;
							break;
						
						case 4:
							return -1673886961;
							break;
						
						case 5:
							return 976562040;
							break;
						
						case 6:
							return -1794803798;
							break;
						
						case 7:
							return -81887956;
							break;
						
						case 8:
							return 1689176064;
							break;
						
						case 9:
							return -1265405818;
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
							return -1835438866;
							break;
						
						case 3:
							return -504887899;
							break;
						
						case 4:
							return -2062205969;
							break;
						
						case 5:
							return 1171204323;
							break;
						
						case 6:
							return 655612525;
							break;
						
						case 7:
							return -739019619;
							break;
						
						case 8:
							return 1371789707;
							break;
						
						case 9:
							return 417256409;
							break;
						
						case 10:
							return -768009060;
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
							return -1129482474;
							break;
						
						case 5:
							return 801728466;
							break;
						
						case 6:
							return 1764150402;
							break;
						
						case 7:
							return -43777;
							break;
						
						case 8:
							return -543743869;
							break;
						
						case 9:
							return -971593942;
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
							return -1926802042;
							break;
						
						case 5:
							return -1879434956;
							break;
						
						case 6:
							return -582200001;
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
							return -878058152;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_711(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_712(iParam0, iParam2, 11, 3);
				iVar1 = func_702(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_712(iParam0, iParam1, 8, 3);
				iVar3 = func_702(iVar4);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 14;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0))
			{
				iVar0 = 4;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
					{
						iVar0 = func_610(iParam0, -189347783, 3, 3);
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
					{
						iVar0 = func_610(iParam0, -2124259813, 3, 3);
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0))
					{
						iVar0 = func_610(iParam0, 1522547645, 3, 3);
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_711(iParam0, -99, func_703(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -316495692, 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0)) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0))) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0))
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
			else if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0))
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
			else if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0))
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
			else if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
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
			else if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -973213642, 0))
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
				else if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1847239679, 0))
				{
					if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1914383230, 0))
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
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != 1849449579)
								{
									iVar0 = func_610(iParam0, iVar7, 3, 3);
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
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
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
				else if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
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
				iVar2 = func_712(iParam0, iParam2, 11, 4);
				iVar1 = func_702(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_712(iParam0, iParam1, 8, 4);
				iVar3 = func_702(iVar4);
				switch (iVar4)
				{
					case 327496660:
					case -63928837:
					case 695885966:
					case 525421628:
					case 1426634666:
					case 1160648693:
					case 1928065904:
					case 1748557322:
					case -1777223233:
					case -1991794649:
					case 917309067:
					case -1629661498:
						iVar3 = 15;
						break;
					
					case 587358117:
					case 742748715:
					case 490263574:
					case 682683142:
					case -1172927021:
					case -174365543:
					case -1450128251:
					case -1811439245:
					case 1578218888:
					case -1193481443:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case -1848319017:
						iVar3 = 13;
						break;
					}
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 0;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == 1389091979) || iVar4 == 442100644) || iVar4 == -1406103725) || iVar4 == -167304449) || iVar4 == 129353308) || iVar4 == 1943510702) || iVar4 == 1963041026) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0))
				{
					if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0))
					{
						iVar0 = func_610(iParam0, -405734992, 3, 4);
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0))
					{
						iVar0 = func_610(iParam0, 1297919831, 3, 4);
					}
					else if ((FILES::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -2124629577, 0))
					{
						iVar0 = func_610(iParam0, 440926231, 3, 4);
					}
				}
				else if ((FILES::_0x341DE7ED1D2A1BFD(iVar4, -89003918, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -747858475, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_711(iParam0, -99, func_703(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -316495692, 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1965569012, 0)) && !func_707(iParam0, iParam2, -1)) && !FILES::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0)) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -2102859770, 0))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(func_712(iParam0, iParam3, 4, 4), -33031567, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0)) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1976716889, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -1813210391, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 263623295, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -309899747, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -89003918, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, -747858475, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0))) || (iVar4 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1322269404, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 548036233, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -870074461, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1174924468, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -868698159, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1834446747, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 947651647, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -58412562, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1407614029, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1248753945, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0))
				{
					iVar0 = 3;
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -870074461, 0)) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0))) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0))) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0))) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0))) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -58412562, 0))) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, -1407614029, 0))) || (iVar2 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar2, 481861038, 0)))
			{
				if ((((FILES::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
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
					if (iVar4 != -1)
					{
						iVar10 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != 1849449579)
								{
									iVar0 = func_610(iParam0, iVar12, 3, 4);
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
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0))
			{
				if ((((FILES::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
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

int func_712(int iParam0, int iParam1, int iParam2, int iParam3)
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
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_612(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var0))
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
		FILES::INIT_SHOP_PED_COMPONENT(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_611(iParam0, func_736(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_70793.f_26[iParam2] && iParam1 == Global_70793[iParam2]) && Global_70793.f_13[iParam2] != 0)
		{
			return Global_70793.f_13[iParam2];
		}
		iVar9 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 0, -1, func_736(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar6, &Var5);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_70793.f_13[iParam2] = Var5.f_1;
					Global_70793[iParam2] = iParam1;
					Global_70793.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_713(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_736(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_714(iParam0, iVar1, iVar2, iParam1);
}

int func_714(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_736(iParam3);
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
	return -99;
}

void func_715(int iParam0)
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
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::_0x341DE7ED1D2A1BFD(iVar9, -317649054, 0) && FILES::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0))
	{
		if (!func_718(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (func_717(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0))
					{
						if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -816428229, 0) && iVar13 != -1104282163)
						{
							FILES::GET_SHOP_PED_COMPONENT(-1104282163, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -521539998, 0) && iVar13 != 326501576)
						{
							FILES::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -420560153, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 604028170, 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(-1769373731, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -816428229, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILES::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -521539998, 0))
					{
						if (iVar13 != -521200785)
						{
							FILES::GET_SHOP_PED_COMPONENT(-521200785, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar16, -420560153, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar16, 604028170, 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(-66968432, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iVar9, -317649054, 0) && FILES::_0x341DE7ED1D2A1BFD(iVar9, 1569775397, 0))
	{
		if (FILES::_0x341DE7ED1D2A1BFD(iVar12, -219395886, 1))
		{
			if (func_717(iVar9, 1, 0, &iVar17))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0))
					{
						if (FILES::_0x341DE7ED1D2A1BFD(iVar17, -816428229, 0) && iVar13 != -1104282163)
						{
							FILES::GET_SHOP_PED_COMPONENT(-1104282163, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::_0x341DE7ED1D2A1BFD(iVar17, -521539998, 0) && iVar13 != 326501576)
						{
							FILES::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::_0x341DE7ED1D2A1BFD(iVar17, -420560153, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar17, 604028170, 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(-1769373731, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iVar17, -816428229, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILES::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar17, -521539998, 0))
					{
						if (iVar13 != -521200785)
						{
							FILES::GET_SHOP_PED_COMPONENT(-521200785, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar17, -420560153, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar17, 604028170, 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(-66968432, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iVar11, 391733089, 0) || func_716(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_718(iParam0, &bVar14, iVar9, iVar10, iVar12))
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
				FILES::GET_SHOP_PED_COMPONENT(1241116144, &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(-972757995, &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(-367850957, &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(555191698, &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_716(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
	{
		if (FILES::_0x341DE7ED1D2A1BFD(iParam1, 572416369, 0))
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
	{
		if (FILES::_0x341DE7ED1D2A1BFD(iParam1, -196114988, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_717(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*iParam3 = -1;
	iVar0 = FILES::_0xC17AD0E5752BECDA(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != 1849449579) && iParam1 == FILES::_0x341DE7ED1D2A1BFD(*iParam3, -1889900289, 0)) && iParam2 == FILES::_0x341DE7ED1D2A1BFD(*iParam3, -1325143745, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_718(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::_0x341DE7ED1D2A1BFD(iParam2, -317649054, 0))
	{
		if (FILES::_0x341DE7ED1D2A1BFD(iParam2, 32905942, 0))
		{
			if (!FILES::_0x341DE7ED1D2A1BFD(iParam4, 605826125, 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::_0x341DE7ED1D2A1BFD(iParam3, 72391838, 0) && !FILES::_0x341DE7ED1D2A1BFD(iParam3, -1409448021, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iParam4, 605826125, 1))
				{
					if (FILES::_0x341DE7ED1D2A1BFD(iParam3, 629327198, 0) || FILES::_0x341DE7ED1D2A1BFD(iParam3, -692832227, 0))
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
			if (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1188154325, 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::_0x341DE7ED1D2A1BFD(iParam3, 72391838, 0) && !FILES::_0x341DE7ED1D2A1BFD(iParam3, -1409448021, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!FILES::_0x341DE7ED1D2A1BFD(iParam2, 572416369, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::_0x341DE7ED1D2A1BFD(iParam2, -196114988, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1218048590, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case -1741098918:
			case -1360388756:
			case -1130579759:
			case -929181485:
			case -564396977:
			case -314533352:
			case 48874858:
			case 335112073:
			case 643009597:
			case 931540642:
			case 1886036076:
			case -1417439587:
			case -1780323493:
			case 955888011:
			case 691999254:
			case 1549695060:
			case 1319689449:
			case -258334499:
			case -498367424:
			case 346089706:
			case 1038236244:
			case 1731071211:
			case 1365303633:
			case 209639294:
			case -422671330:
			case 805478037:
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::_0x341DE7ED1D2A1BFD(iParam3, -1409448021, 0) && !func_791(iVar0, 14, func_728(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_719(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_720(iParam0, iParam1, iParam2, iParam3, &iVar0);
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
					iVar2 = func_713(iParam0, 8);
					iVar15 = func_712(iParam1, iVar2, 8, 3);
					iVar16 = func_702(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILES::_0x341DE7ED1D2A1BFD(iVar15, 1965569012, 0)))
					{
						iVar0 = -99;
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
					iVar14 = func_712(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (FILES::_0x341DE7ED1D2A1BFD(iVar14, 19149565, 0))
						{
							iVar2 = func_713(iParam0, 8);
							iVar18 = func_712(iParam1, iVar2, 8, 3);
							iVar19 = func_702(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILES::_0x341DE7ED1D2A1BFD(iVar18, 1965569012, 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_610(iParam1, iVar5, 3, 3);
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
					iVar0 = -99;
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
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_712(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 3, 3);
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
					iVar14 = func_712(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 3, 3);
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
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = func_702(func_712(iParam1, iParam3, 11, 3));
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
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
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
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_713(iParam0, 8);
					iVar21 = func_712(iParam1, iVar2, 8, 3);
					iVar22 = func_702(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILES::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
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
					iVar14 = func_712(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 3);
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
						iVar14 = func_712(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_610(iParam1, iVar5, 8, 3);
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
				iVar23 = -1;
				iVar24 = -1;
				if (iParam3 >= 92)
				{
					iVar24 = func_712(iParam1, iParam3, 7, 3);
					iVar23 = func_702(iVar24);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar23 == 10) || iVar23 == 11) || iVar23 == 12) || (iParam3 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar24, -1950939707, 0))) || (iParam3 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar24, -1371423804, 0))) || (iParam3 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar24, -920534092, 0)))
				{
					iVar2 = func_713(iParam0, 8);
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
						iVar14 = func_712(iParam1, iVar2, 8, 3);
						iVar25 = func_702(iVar14);
						bVar26 = FILES::_0x341DE7ED1D2A1BFD(iVar14, 651155766, 0);
						if (((iVar25 == 3 || iVar25 == 7) || iVar25 == 11) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::_0xC17AD0E5752BECDA(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar26) || (iVar7 == 10 && bVar26))
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_610(iParam1, iVar5, 8, 3);
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
				else if (((iParam3 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar24, -378906828, 0)) || (iParam3 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar24, -695703461, 0))) || (iParam3 >= 92 && FILES::_0x341DE7ED1D2A1BFD(iVar24, -108328099, 0)))
				{
					iVar14 = func_712(iParam1, iVar2, 8, 3);
					iVar27 = func_702(iVar14);
					bVar28 = FILES::_0x341DE7ED1D2A1BFD(iVar14, 651155766, 0);
					if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILES::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = FILES::_0xC17AD0E5752BECDA(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_610(iParam1, iVar5, 8, 3);
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
					iVar14 = func_712(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 3);
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
					iVar14 = func_712(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 3);
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
					iVar14 = func_712(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 3);
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
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = func_712(iParam1, iParam3, 7, 3);
					iVar29 = func_702(iVar30);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || FILES::_0x341DE7ED1D2A1BFD(iVar30, -920534092, 0))
				{
					iVar31 = func_713(iParam0, 11);
					if (iVar31 >= 237)
					{
						iVar14 = func_712(iParam1, iVar31, 11, 3);
						if (FILES::_0x341DE7ED1D2A1BFD(iVar14, 1847239679, 0) && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::_0xC17AD0E5752BECDA(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_610(iParam1, iVar5, 11, 3);
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
					iVar14 = func_712(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 11, 3);
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
				iVar32 = func_713(iParam0, 11);
				if (iVar32 >= 237)
				{
					iVar14 = func_712(iParam1, iVar32, 11, 3);
					if (FILES::_0x341DE7ED1D2A1BFD(iVar14, 1847239679, 0) && FILES::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						iVar14 = func_712(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_610(iParam1, iVar5, 7, 3);
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
					iVar14 = func_712(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 7, 3);
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
					iVar14 = func_712(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 4, 3);
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
					iVar14 = func_712(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 10, 3);
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
					iVar14 = func_712(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 6, 3);
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
					iVar14 = func_712(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 6, 3);
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
					iVar14 = func_712(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 1, 3);
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
					iVar14 = func_712(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 1, 3);
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
					iVar14 = func_712(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::_0x017568A8182D98A6(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 14, 3);
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
					iVar14 = func_712(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::_0x017568A8182D98A6(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 14, 3);
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
					iVar14 = func_712(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::_0x017568A8182D98A6(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 14, 3);
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
					iVar14 = func_712(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 3, 4);
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
					iVar14 = func_712(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 3, 4);
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
					iVar0 = -99;
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
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
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
					iVar14 = func_712(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 4);
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
				iVar33 = -1;
				if (iParam3 >= 55)
				{
					iVar33 = func_712(iParam1, iParam3, 7, 4);
				}
				if ((iVar33 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar33, -920534092, 0)) || (iVar33 != -1 && FILES::_0x341DE7ED1D2A1BFD(iVar33, 1537081084, 0)))
				{
					iVar14 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar34 = false;
					if (FILES::_0x341DE7ED1D2A1BFD(iVar33, -378906828, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar33, -108328099, 0))
					{
						if (FILES::_0x341DE7ED1D2A1BFD(iVar14, -1914383230, 0))
						{
							bVar34 = true;
						}
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar14, 1553766533, 0))
					{
						bVar34 = true;
					}
					if (bVar34)
					{
						iVar12 = FILES::_0xC17AD0E5752BECDA(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 4);
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
					iVar14 = func_712(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 4);
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
					iVar14 = func_712(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 8, 4);
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
					iVar14 = func_712(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 6, 4);
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
					iVar14 = func_712(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 6, 4);
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
					iVar14 = func_712(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 4, 4);
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
					iVar14 = func_712(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 10, 4);
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
					iVar14 = func_712(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = (iVar3 + 1);
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
					iVar14 = func_712(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 7, 4);
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
					iVar14 = func_712(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 1, 4);
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
					iVar14 = func_712(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 1, 4);
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
					iVar14 = func_712(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::_0x017568A8182D98A6(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 14, 4);
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
					iVar14 = func_712(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::_0x017568A8182D98A6(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 14, 4);
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
					iVar14 = func_712(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::_0x017568A8182D98A6(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::_0xE1CA84EBF72E691D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_610(iParam1, iVar5, 14, 4);
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

int func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	
	*iParam4 = -99;
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
					if (iParam3 >= func_611(iParam1, 1))
					{
						func_748(iParam1, 1, iParam3);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_713(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_712(iParam1, iVar0, 1, 3);
						if (FILES::_0x341DE7ED1D2A1BFD(iVar1, -1188154325, 0))
						{
							iVar1 = func_712(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != 1849449579)
										{
											*iParam4 = func_610(iParam1, iVar4, 2, 3);
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
					if (iParam3 >= func_611(iParam1, 1))
					{
						func_748(iParam1, 1, iParam3);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_713(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_712(iParam1, iVar7, 1, 4);
						if (FILES::_0x341DE7ED1D2A1BFD(iVar8, -1188154325, 0))
						{
							iVar8 = func_712(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::_GET_NUM_FORCED_COMPONENTS(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != 1849449579)
										{
											*iParam4 = func_610(iParam1, iVar11, 2, 4);
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
	if (*iParam4 != -99)
	{
		func_604(750, iParam3, Global_70668, 1, 0);
		func_604(751, iParam2, Global_70668, 1, 0);
		return 1;
	}
	return 0;
}

void func_721(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_723(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (func_707(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = func_713(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_713(iParam0, 11);
				if (!func_707(iVar0, iVar1, -1))
				{
					return;
				}
			}
			func_697(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_699(iVar0, iParam2, 13) && !func_699(iVar0, iParam2, 14)) && !func_699(iVar0, iParam2, 15)) && !func_699(iVar0, iParam2, 16)) && !func_699(iVar0, iParam2, 71)) && !func_699(iVar0, iParam2, 72))
				{
					func_697(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_694(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_722(iParam0, iVar2, 0);
				}
				else
				{
					func_725(iVar2, 1, Global_70668);
				}
			}
		}
	}
}

void func_722(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_695(iParam0);
			if (!func_686(iParam1, -1) || iParam2)
			{
				if (func_679(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::_SET_PED_DECORATION(iParam0, Var1.f_4, Var1.f_5);
					func_661(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

int func_723(int iParam0)
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != func_22() && func_724(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_728(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = func_712(joaat("mp_m_freemode_01"), iVar1, 11, 3);
					if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0))
					{
						return 1;
					}
					else if ((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 310055897, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 606713654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 1831422288, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -838136846, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 655638019, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, 83294665, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar2, -697656159, 0))
					{
						return 1;
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1148412551, 0))
					{
						return 1;
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -1786447517, 0))
					{
						return 1;
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, 1148412551, 0))
					{
						return 1;
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar2, -2124629577, 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != func_22() && func_724(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_728(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_712(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0))
					{
						return 1;
					}
					else if ((((((((((FILES::_0x341DE7ED1D2A1BFD(iVar4, 201427653, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 967829025, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -1266557933, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -979468724, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 970679185, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 83294665, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 382246252, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, 198641529, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -398213037, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar4, -306768813, 0))
					{
						return 1;
					}
					else if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 1148412551, 0))
					{
						return 1;
					}
			}