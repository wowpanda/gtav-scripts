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
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<68> Local_98 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 3;
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
	var uLocal_153 = 4;
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
	var uLocal_218 = 2;
	var uLocal_219 = 0;
	var uLocal_220 = 4;
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
	var uLocal_286 = 4;
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
	var uLocal_357 = 12;
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
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	struct<4> Local_548 = { 0, 0, 0, 0 } ;
	var uLocal_549 = 16;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	var uVar4;
	var uVar5;
	struct<27> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<11> Var11;
	var uVar12;
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
	vector3 vVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39[3];
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44[6];
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	var uVar52;
	char[] cVar53[8];
	char* sVar54;
	struct<4> Var55;
	vector3 vVar56;
	vector3 vVar57;
	vector3 vVar58;
	vector3 vVar59;
	var uVar60;
	vector3 vVar61;
	vector3 vVar62;
	var uVar63;
	var uVar64;
	float fVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar92;
	bool bVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	int iVar114;
	vector3 vVar115;
	int iVar116;
	bool bVar117;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	vLocal_101 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var3.f_12 = 12;
	uVar5 = 2;
	Var6.f_3 = 8;
	Var6.f_12 = 8;
	Var6.f_21 = 4;
	Var6.f_26.f_32 = 3;
	Var6.f_26.f_36 = 1;
	Var6.f_26.f_53 = 2;
	Var6.f_26.f_57 = 13;
	Var6.f_26.f_71 = 13;
	Var6.f_26.f_280 = 13;
	Var6.f_26.f_489 = 13;
	Var6.f_26.f_503 = 13;
	Var6.f_26.f_517 = 13;
	Var6.f_26.f_531 = 13;
	Var11.f_10.f_2 = 8;
	Var11.f_10.f_2.f_1.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	iVar14 = -1;
	uVar32 = 16;
	iVar33 = ScriptParam_548;
	iVar42 = ScriptParam_548.f_3;
	cVar53 = "BJ_FAIL";
	sVar54 = "";
	vVar59 = { 5f, 5f, 10f };
	fVar65 = 1f;
	fVar69 = -1f;
	iVar70 = -1;
	iVar73 = -1;
	iVar77 = Global_104555.f_18937;
	iVar80 = 1;
	iVar81 = -1;
	bVar100 = false;
	bVar105 = true;
	bVar107 = false;
	bVar108 = false;
	bVar110 = true;
	bVar111 = false;
	bVar112 = false;
	bVar113 = false;
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_548.f_1))
	{
		iVar40 = ScriptParam_548.f_1;
	}
	else
	{
		iVar40 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	bVar111 = WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0);
	bVar112 = PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
	if (bVar111)
	{
		PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar86);
		PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar87);
	}
	if (bVar112)
	{
		PLAYER::GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar88);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar40))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar40, true, 1);
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_539(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, &iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
	}
	if (iVar77 < 0)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_104555.f_18937.f_1, iVar77))
	{
		fVar65 = 0.1f;
	}
	iVar13 = iVar77;
	func_538(0);
	HUD::CLEAR_HELP(1);
	MISC::SET_MISSION_FLAG(1);
	func_537(23, 1);
	HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(1500f, 0, 21);
	func_511(&Var3, iVar13);
	if (ENTITY::DOES_ENTITY_EXIST(iVar42))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar42, true, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar33))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar33, true, 1);
		if (func_510(&Var3) != 0 && ENTITY::GET_ENTITY_MODEL(iVar33) == func_510(&Var3))
		{
			iVar36 = iVar33;
			iVar33 = 0;
		}
	}
	while (true)
	{
		if (!bVar105)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			bVar105 = false;
		}
		if ((iVar7 >= 6 && iVar7 <= 10) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar15 = func_499();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		}
		func_498();
		func_490(&uVar4);
		func_486(&Var6, iVar7);
		func_482(&Var6, iVar7, iVar13, bVar93);
		switch (iVar7)
		{
			case 0:
				func_481();
				if (CAM::IS_SCREEN_FADING_OUT())
				{
					break;
				}
				func_475();
				func_474(1);
				func_470("AM_H_BASEJ", 1);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				if (iVar13 == 0)
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, false, 1);
					uVar41 = VEHICLE::_0x54B0F614960F4A5F(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar13 == 5)
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, false, 1);
				}
				else if (iVar13 == 4)
				{
					func_466(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					MISC::CLEAR_AREA(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, false);
				}
				else if (iVar13 == 8)
				{
					func_466(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					MISC::CLEAR_AREA(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar33))
				{
					func_465(&iVar23);
				}
				if ((iVar13 == 6 || iVar13 == 12) || iVar13 == 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_548.f_2))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_548.f_2, true, 1);
						OBJECT::DELETE_OBJECT(&(ScriptParam_548.f_2));
					}
					func_456(&uVar5, &Var3, iVar13, iVar13 == 6);
					bVar102 = true;
				}
				iVar7 = 1;
				break;
			
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT() || (((iVar13 == 5 || iVar13 == 6) || iVar13 == 12) && !bVar93))
				{
					if (!bVar93)
					{
						if ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)
						{
							vVar57 = { func_455(iVar13) };
							vVar57 = { func_454(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), MISC::TAN(vVar57.x)) };
							if (func_453(iVar13))
							{
								STREAMING::NEW_LOAD_SCENE_START(func_452(iVar13), vVar57, 4000f, 0);
							}
						}
						func_446(&Var3, iVar13, &uVar0, &iVar1, &iVar2, &uVar51, &iVar84);
					}
					else if (func_444(func_445(iVar13)))
					{
						vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_443(&Var3))), SYSTEM::SIN((-97.4239f + func_443(&Var3)))) };
						vVar61 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar33, 1.12046f, -0.317773f, 1.3385f) };
						vVar62 = { func_442(vVar62, 8.909f) };
						if (func_453(iVar13))
						{
							STREAMING::NEW_LOAD_SCENE_START(vVar61 + vVar62, vVar62, 4000f, 0);
						}
					}
					else
					{
						vVar57 = { -10f, 0f, func_443(&Var3) };
						vVar57 = { func_454(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), MISC::TAN(vVar57.x)) };
						if (func_453(iVar13))
						{
							STREAMING::NEW_LOAD_SCENE_START(func_452(iVar13), vVar57, 4000f, 0);
						}
					}
					if (((bVar93 || iVar13 == 4) || iVar13 == 8) || iVar13 == 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_452(iVar13), 0, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_443(&Var3));
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					}
					iVar7 = 2;
				}
				else if (!CAM::IS_SCREEN_FADING_OUT() && (!func_441(&iVar23) || func_440(&iVar23) > 0.05f))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						CAM::DO_SCREEN_FADE_OUT(2500);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(800);
					}
				}
				break;
			
			case 2:
				if (func_438(&uVar0, &iVar16, &uVar51, iVar13, iVar84, ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)))
				{
					func_437(&iVar16);
					func_414(&Var3, &uVar32, &iVar72, &iVar33, &iVar34, &iVar36, &iVar35, &iVar37, &iVar42, &iVar43, iVar1, iVar2, &iVar19, iVar13, &iVar81);
					PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
					if (!bVar93 && !bVar102)
					{
						func_456(&uVar5, &Var3, iVar13, 0);
					}
					iVar7 = 3;
				}
				break;
			
			case 3:
				if (!func_441(&iVar16) && !bVar93)
				{
					func_413(0, 0, 1);
					func_465(&iVar16);
				}
				else if ((func_441(&iVar16) && func_440(&iVar16) > 0.2f) || bVar93)
				{
					if (func_444(func_445(iVar13)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar93)
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						if (func_441(&iVar16))
						{
							func_437(&iVar16);
						}
						if (func_510(&Var3) != 0)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar36, false);
							func_465(&iVar22);
						}
						iVar7 = 4;
					}
					else
					{
						func_437(&iVar16);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							SYSTEM::WAIT(1000);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(func_412(&uVar5, 1), func_412(&uVar5, 0), 10000, 1, 1);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
							CAM::DO_SCREEN_FADE_IN(800);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						if (func_444(func_445(iVar13)))
						{
							vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_443(&Var3))), SYSTEM::SIN((-97.4239f + func_443(&Var3)))) };
							vVar61 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar33, 1.12046f, -0.317773f, 1.3385f) };
							vVar62 = { func_442(vVar62, 8.909f) };
							if (func_453(iVar13))
							{
								STREAMING::NEW_LOAD_SCENE_START(vVar61 + vVar62, vVar62, 4000f, 0);
							}
						}
						else
						{
							vVar57 = { -10f, 0f, func_443(&Var3) };
							vVar57 = { func_454(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), MISC::TAN(vVar57.x)) };
							if (func_453(iVar13))
							{
								STREAMING::NEW_LOAD_SCENE_START(func_452(iVar13), vVar57, 4000f, 0);
							}
						}
						if (!func_410(func_411(iVar13)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_411(iVar13), 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_409(func_411(iVar13), func_452(iVar13)));
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
							if (func_407() == 0)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
							}
							else if (func_407() == 1)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
							}
							else if (func_407() == 2)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
							}
							BRAIN::OPEN_SEQUENCE_TASK(&iVar48);
							if (func_406(iVar13) > 0)
							{
								BRAIN::TASK_STAND_STILL(0, func_406(iVar13));
							}
							BRAIN::TASK_GO_STRAIGHT_TO_COORD(0, func_452(iVar13), 1f, -1, func_443(&Var3), 1056964608);
							BRAIN::CLOSE_SEQUENCE_TASK(iVar48);
							BRAIN::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar48);
							BRAIN::CLEAR_SEQUENCE_TASK(&iVar48);
						}
						if (!func_444(func_445(iVar13)))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar39);
							}
							iVar82 = 0;
							while (iVar82 < iVar39)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar39[iVar82]) && !ENTITY::IS_ENTITY_DEAD(iVar39[iVar82], 0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar39[iVar82], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 2500f)
									{
										ENTITY::SET_ENTITY_LOD_DIST(iVar39[iVar82], 1000);
										VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar39[iVar82], 5f);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar39[iVar82], true, 1);
									}
								}
								iVar82++;
							}
						}
						if (func_510(&Var3) != 0)
						{
							func_465(&iVar22);
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						}
						if (func_405(iVar13, iVar84) > 0f)
						{
							func_465(&iVar28);
						}
						iVar7 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (bVar96 || bVar97)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(300);
						SYSTEM::WAIT(300);
					}
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iVar7 = 10;
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_397(0, 1, 1, 0);
					if (func_444(func_445(iVar13)))
					{
						func_396(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
						iVar85 = AUDIO::GET_SOUND_ID();
						if (bVar110)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(iVar85, "Helicopter_Wind_Idle", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						}
						if (bVar109)
						{
							AUDIO::_0x70B8EC8FC108A634(1, 300362576);
						}
					}
					else
					{
						if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
						{
							CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
						}
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
					PED::_0x6585D955A68452A5(PLAYER::PLAYER_PED_ID());
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					iVar7 = 5;
				}
				else
				{
					if (!bVar104)
					{
						if (!func_441(&iVar30))
						{
							func_465(&iVar30);
						}
						else if (func_440(&iVar30) > 4f || (func_444(func_445(iVar13)) && func_440(&iVar30) > 0.5f))
						{
							func_385(&uVar32, "OJBJAUD", func_395(&Var3), 8, 0, 0, 0);
							bVar104 = true;
						}
					}
					if (!CAM::IS_SCREEN_FADING_OUT() && !bVar93)
					{
						if (func_363(&Var3, iVar13, &iVar36, &uVar5, &uVar4, &iVar17, &iVar18, &iVar22, &iVar28, iVar84, &bVar94, &bVar106, bVar98))
						{
							HUD::CLEAR_HELP(1);
							bVar98 = false;
							if (func_362(&Var3))
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
							else
							{
								HUD::DISPLAY_RADAR(false);
								HUD::DISPLAY_HUD(false);
								iVar7 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				func_360();
				func_359();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (bVar93 && bVar103)
					{
						CLOCK::SET_CLOCK_TIME(func_358(iVar15), func_357(iVar15), func_356(iVar15));
					}
					SYSTEM::WAIT(2000);
					if (bVar93)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						func_355(&iVar29);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
						}
						while (func_440(&iVar29) < 1.1f)
						{
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
							}
						}
						func_437(&iVar29);
					}
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0))
				{
					iVar45 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar34, func_354(&Var3)));
					HUD::SET_BLIP_COLOUR(iVar45, 5);
					HUD::_0x75A16C3DA34F1245(iVar45, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar45, "BJ_BLIP_TGT");
				}
				else
				{
					iVar45 = HUD::ADD_BLIP_FOR_COORD(func_353(&Var3, 0));
					HUD::SET_BLIP_COLOUR(iVar45, 5);
					if (iVar72 == 1)
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar45, "BJ_BLIP_TGT");
					}
					else
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar45, "BJ_BLIP_CHK");
					}
				}
				HUD::SET_BLIP_SCALE(iVar45, 1.2f);
				if (iVar72 > 1)
				{
					iVar46 = HUD::ADD_BLIP_FOR_COORD(func_353(&Var3, 1));
					HUD::SET_BLIP_COLOUR(iVar46, 5);
					HUD::_0x75A16C3DA34F1245(iVar45, true);
					HUD::SET_BLIP_SCALE(iVar46, 0.7f);
					if (iVar72 == 2)
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar46, "BJ_BLIP_TGT");
					}
					else
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar46, "BJ_BLIP_CHK");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(iVar34, 2000);
					if (ENTITY::DOES_ENTITY_EXIST(iVar43) && !PED::IS_PED_INJURED(iVar43))
					{
						BRAIN::CLEAR_PED_TASKS(iVar43);
					}
					if (func_351(func_352(&Var3)))
					{
						VEHICLE::DELETE_MISSION_TRAIN(&iVar34);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar34, func_353(&Var3, 0), 1, false, 0, 1);
					}
				}
				if (MISC::IS_BIT_SET(Global_104555.f_18937.f_1, (func_350(&Var3) - 125)))
				{
					PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), true);
					PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), MISC::GET_RANDOM_INT_IN_RANGE(0, 256), MISC::GET_RANDOM_INT_IN_RANGE(0, 256), MISC::GET_RANDOM_INT_IN_RANGE(0, 256));
				}
				if (func_349(func_445(iVar13)))
				{
					func_348(1, 1, 1);
					BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_355(&iVar19);
					iVar7 = 6;
					func_347(88, 1);
				}
				else if (func_444(func_445(iVar13)))
				{
					func_348(0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iVar7 = 7;
					func_347(88, 1);
				}
				else
				{
					func_348(1, 1, 1);
					BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
					iVar7 = 6;
					func_347(88, 1);
				}
				if (iVar13 == 5)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, true);
				}
				if (!bVar94 && ENTITY::DOES_ENTITY_EXIST(iVar36))
				{
					func_346(&iVar36, 1);
					bVar94 = true;
				}
				if (!func_362(&Var3))
				{
					if (func_444(func_445(iVar13)))
					{
						func_396(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
					}
					else
					{
						if ((func_345(&Var3) && !bVar106) && !bVar93)
						{
							CAM::_RENDER_FIRST_PERSON_CAM(1, 0, 3, 0);
						}
						else if (iVar13 == 4 && !func_344())
						{
							CAM::SET_CAM_COORD(func_412(&uVar5, 0), -76.7226f, -829.9866f, 326.0427f);
							CAM::SET_CAM_ROT(func_412(&uVar5, 0), 0.8541f, 0f, -17.012f, 2);
							CAM::SET_CAM_FOV(func_412(&uVar5, 0), 53.883f);
							CAM::SET_CAM_ACTIVE(func_412(&uVar5, 0), true);
						}
						else
						{
							if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
							{
								CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 1, 0);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (bVar111)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1, false, true);
						}
						PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iVar86);
						if (bVar112)
						{
							if (!PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
							}
							PED::SET_PED_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), uVar88);
						}
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1, false, true);
						PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 8));
					}
				}
				STREAMING::REQUEST_ANIM_DICT("skydive@base");
				STREAMING::REQUEST_ANIM_DICT("skydive@freefall");
				STREAMING::REQUEST_ANIM_DICT("skydive@parachute@chute");
				STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
				break;
			
			case 6:
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar7 = 12;
					break;
				}
				else if ((bVar97 || bVar96) || func_343(&Var3, iVar13, &bVar99))
				{
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					iVar7 = 10;
				}
				else
				{
					if (iVar13 == 5)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar98)
					{
						vVar58 = { func_353(&Var3, (iVar72 - 1)) };
						vVar58.z = (vVar58.z + 100f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar58, 1, false, 0, 1);
						bVar98 = false;
					}
					if (!bVar101)
					{
						if (iVar13 == 4)
						{
							if (((((PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 1)) || PAD::IS_CONTROL_PRESSED(0, 2)) || PAD::IS_CONTROL_PRESSED(0, 75)) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								CAM::RENDER_SCRIPT_CAMS(false, true, 1300, 1, 1, 0);
								bVar101 = true;
							}
						}
					}
					func_342(&iVar19);
					func_332(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_331(&uVar52);
					if (func_441(&iVar16))
					{
						if (func_440(&iVar16) > 10f)
						{
							func_327(&iVar20, &iVar80);
						}
					}
					else
					{
						func_326(&iVar16, 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar36) && !ENTITY::IS_ENTITY_DEAD(iVar36, 0))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar36) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar36, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 40000f)
						{
							iVar114 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar36, -1, 0);
							if (!PED::IS_PED_INJURED(iVar114))
							{
								PED::DELETE_PED(&iVar114);
							}
							VEHICLE::DELETE_VEHICLE(&iVar36);
						}
					}
					if (!MISC::IS_BIT_SET(iVar78, 0))
					{
						if (HUD::IS_MESSAGE_BEING_DISPLAYED() || !func_441(&iVar31))
						{
							func_355(&iVar31);
						}
						else if (func_440(&iVar31) > 0.25f)
						{
							Var55 = { func_325(iVar13) };
							func_324(&Var55, 7500, 0);
							func_437(&iVar31);
							MISC::SET_BIT(&iVar78, 0);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_323(&Var6, 1);
						iVar38 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar38, 0) && ENTITY::IS_ENTITY_IN_AIR(iVar38))
						{
							if (!MISC::IS_BIT_SET(iVar78, 1))
							{
								if (!func_441(&iVar24))
								{
									func_465(&iVar24);
								}
								else if (func_440(&iVar24) > 0.15f)
								{
									func_322("BJ_VEHHELP", -1);
									func_437(&iVar24);
									MISC::SET_BIT(&iVar78, 1);
								}
							}
						}
						else
						{
							MISC::CLEAR_BIT(&iVar78, 1);
							if (func_321("BJ_VEHHELP"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (func_441(&iVar24))
							{
								func_437(&iVar24);
							}
						}
					}
					else
					{
						func_323(&Var6, 0);
						MISC::CLEAR_BIT(&iVar78, 1);
						if (func_321("BJ_VEHHELP"))
						{
							HUD::CLEAR_HELP(1);
						}
						if (func_441(&iVar24))
						{
							func_437(&iVar24);
						}
					}
					if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
					{
						if (iVar13 == 5)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, false);
						}
						GRAPHICS::_0x6DDBF9DFFC4AC080(1);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
						iVar7 = 9;
						func_437(&iVar16);
					}
				}
				break;
			
			case 7:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (bVar96 || bVar97)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(300);
						SYSTEM::WAIT(300);
					}
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
					{
						CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iVar7 = 10;
				}
				else
				{
					func_342(&iVar19);
					func_332(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_331(&uVar52);
					if (func_444(func_445(iVar13)) && !ENTITY::IS_ENTITY_DEAD(iVar33, 0))
					{
						func_320(iVar33, func_452(iVar13));
					}
					if (func_441(&iVar16))
					{
						if (func_440(&iVar16) > 10f)
						{
							func_327(&iVar20, &iVar80);
						}
					}
					else
					{
						func_326(&iVar16, 0f);
					}
					if (func_316(&Var3, &uVar5, &uVar4, &iVar18, &vVar56, &uVar60, vVar61, vVar62) || bVar98)
					{
						func_437(&iVar16);
						HUD::CLEAR_HELP(1);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar33) && !ENTITY::IS_ENTITY_DEAD(iVar33, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar33, func_452(iVar13), 1, false, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar33, func_443(&Var3));
								ENTITY::FREEZE_ENTITY_POSITION(iVar33, true);
								iVar81 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar81, iVar33, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar33, "Chassis"));
								BRAIN::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar81, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar81, 0.6f);
								func_314(iVar33, &uVar5, &iVar17);
								STREAMING::NEW_LOAD_SCENE_STOP();
							}
						}
						if (bVar109)
						{
							AUDIO::_0x70B8EC8FC108A634(0, 300362576);
						}
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar85, "Helicopter_Wind", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						bVar98 = false;
						iVar7 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				func_342(&iVar19);
				func_332(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar81))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar81) > 0.92f)
					{
						BRAIN::OPEN_SEQUENCE_TASK(&iVar47);
						BRAIN::TASK_FORCE_MOTION_STATE(0, -1161760501, 0);
						BRAIN::TASK_PARACHUTE(0, 1, 0);
						BRAIN::CLOSE_SEQUENCE_TASK(iVar47);
						BRAIN::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar47);
						BRAIN::CLEAR_SEQUENCE_TASK(&iVar47);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar33))
				{
					if (func_313(&uVar5, &iVar17, vVar61, vVar62, vVar56, &uVar63, &uVar64))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), iVar33, 0);
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							HUD::DISPLAY_RADAR(true);
							if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
							{
								CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							GRAPHICS::_0x6DDBF9DFFC4AC080(1);
							iVar7 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (Global_17162.f_135)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (Global_17162.f_135)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar7 = 12;
					break;
				}
				if (bVar96 || bVar97)
				{
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					iVar7 = 10;
				}
				else if (func_312(&uVar4, 3, 1000) && !Global_17162.f_135)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					CAM::DO_SCREEN_FADE_OUT(800);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						func_332(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
						SYSTEM::WAIT(0);
					}
					func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
					bVar93 = true;
					iVar7 = 0;
				}
				else
				{
					func_263(&iVar26, &iVar44);
					if (bVar98)
					{
						vVar58 = { func_353(&Var3, (iVar72 - 1)) };
						func_261(PLAYER::PLAYER_PED_ID(), vVar58);
						bVar98 = false;
					}
					func_342(&iVar19);
					if (func_351(func_352(&Var3)))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iVar34) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_353(&Var3, 0), false) <= 200f)
						{
							iVar34 = VEHICLE::CREATE_MISSION_TRAIN(6, func_353(&Var3, 0), 1);
							if (!ENTITY::IS_ENTITY_DEAD(iVar34, 0))
							{
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar34, 7.5f);
							}
						}
					}
					else if ((ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0)) && !func_410(func_353(&Var3, 0)))
					{
						PED::IS_PED_INJURED(iVar43);
						if (func_260(PLAYER::PLAYER_PED_ID(), iVar34, 0) <= 325f)
						{
							if (iVar13 == 5)
							{
								vVar115 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar115 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar43, -1273030092) != 1)
							{
								if (iVar13 == 5)
								{
									BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(iVar43, iVar34, vVar115, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(iVar43, iVar34, vVar115, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_255(&iVar34);
							}
						}
					}
					iVar8 = func_332(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 1, 1, fVar65);
					if (iVar8 == 1 || iVar8 >= 2)
					{
						BRAIN::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						if (iVar8 >= 2)
						{
							if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_HELP(1);
							}
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
						}
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
						if (iVar13 == 5)
						{
							BRAIN::CLEAR_PED_TASKS(iVar43);
							PED::SET_PED_CONFIG_FLAG(iVar43, 296, true);
						}
						iVar116 = 0;
						while (iVar116 < iVar44)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar44[iVar116]) && !ENTITY::IS_ENTITY_DEAD(iVar44[iVar116], 0))
							{
								BRAIN::CLEAR_PED_TASKS(iVar44[iVar116]);
								iVar44[iVar116] = 0;
							}
							iVar116++;
						}
						iVar7 = 10;
					}
					func_254(&Var6, &Var3, iVar13, iVar72);
				}
				break;
			
			case 10:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar43) && !ENTITY::IS_ENTITY_DEAD(iVar43, 0))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar43, -982327190) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(iVar43, -982327190) != 1)
					{
						BRAIN::CLEAR_PED_TASKS(iVar43);
						BRAIN::TASK_STAND_STILL(iVar43, -1);
					}
				}
				if ((!bVar96 && !bVar97) && !bVar99)
				{
					if (!func_441(&iVar21))
					{
						if (!func_441(&iVar18))
						{
							func_465(&iVar18);
						}
						if (HUD::DOES_BLIP_EXIST(iVar45))
						{
							HUD::REMOVE_BLIP(&iVar45);
						}
						if (HUD::DOES_BLIP_EXIST(iVar46))
						{
							HUD::REMOVE_BLIP(&iVar46);
						}
						if (iVar73 > -1)
						{
							GRAPHICS::DELETE_CHECKPOINT(iVar49);
							GRAPHICS::DELETE_CHECKPOINT(iVar50);
							iVar73 = -1;
						}
						func_326(&iVar21, 0f);
					}
					if (!func_441(&vVar27))
					{
						func_465(&vVar27);
					}
					if (func_352(&Var3) == 0)
					{
						func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (((((ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar34, vVar59, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_353(&Var3, iVar71), vVar59, false, true, 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							bVar117 = false;
							if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && (ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar34)))
							{
								bVar117 = true;
							}
							else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								bVar117 = true;
							}
							if (bVar117)
							{
								if (func_312(&uVar4, 3, 1000) && !Global_17162.f_135)
								{
									ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									CAM::DO_SCREEN_FADE_OUT(800);
									while (CAM::IS_SCREEN_FADING_OUT())
									{
										func_332(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
										SYSTEM::WAIT(0);
									}
									func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
									bVar93 = true;
									iVar7 = 0;
								}
								break;
							}
						}
					}
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar7 = 12;
					break;
				}
				if (((bVar96 || bVar97) || bVar99) || (func_441(&iVar21) && func_440(&iVar21) > 0.25f))
				{
					if (func_441(&iVar21) && func_440(&iVar21) > 0.25f)
					{
						func_249(func_353(&Var3, iVar71), iVar34, iVar43, &iVar8, &iVar75, &fVar69);
					}
					func_437(&iVar21);
					if (bVar96 || iVar8 == 1)
					{
						iVar10 = func_248();
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar10))
						{
							SYSTEM::WAIT(0);
							if (func_352(&Var3) == 0)
							{
								func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
							}
							iVar10 = func_248();
						}
						if (iVar13 == 0)
						{
							if (!PED::IS_PED_INJURED(iVar43))
							{
								func_385(&uVar32, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar7 = 11;
						if (!func_247(&Var6, 7))
						{
							iVar79 = 125;
							MISC::SET_BIT(&(Global_104555.f_18937.f_1), (func_350(&Var3) - iVar79));
							func_246(func_350(&Var3), 1);
							iVar89 = 1;
							bVar90 = true;
							bVar91 = true;
							iVar83 = 0;
							while (iVar83 < 13)
							{
								if (!MISC::IS_BIT_SET(Global_104555.f_18937.f_1, iVar83))
								{
									if (func_444(func_445(iVar83)))
									{
										bVar91 = false;
									}
									else
									{
										bVar90 = false;
									}
									iVar89 = 0;
								}
								iVar83++;
							}
							if (iVar89 && !func_245(98))
							{
								func_244(98, 1);
							}
							if (bVar90)
							{
								func_241(128, 0, 0);
							}
							if (bVar91)
							{
								func_241(129, 0, 0);
							}
							func_208(&iVar74, iVar72, &iVar75, &iVar76, fVar65);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
							}
							func_207(&Var6, 7, 1);
							func_206(1, 0);
							func_465(&iVar25);
							func_205();
						}
					}
					else if ((bVar97 || bVar99) || iVar8 >= 2)
					{
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						if (!bVar99)
						{
							func_202();
						}
						if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar92 = 1;
						}
						if (PLAYER::IS_PLAYER_ONLINE())
						{
							func_200(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 358, 0, 358, 0);
						}
						else
						{
							func_207(&Var6, 27, 1);
							func_200(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
						}
						iVar7 = 12;
					}
					func_437(&iVar18);
				}
				break;
			
			case 11:
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
				if (!bVar96 && !bVar97)
				{
					if (func_199() && !func_247(&Var6, 26))
					{
						func_190(iVar13);
						if (func_178(iVar13, iVar75, fVar69, iVar76))
						{
							func_200(&Var6, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_207(&Var6, 26, 1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					bVar108 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (func_352(&Var3) == 0)
				{
					func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
				}
				if (!bVar113)
				{
					iVar9 = func_73(iVar13, &Var6, &uVar51, &uVar4, iVar74, iVar72, iVar75, &iVar76, fVar65, &bVar100);
					bVar113 = iVar9 == true;
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (iVar77 == 0)
					{
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, true, 1);
					}
					else if (iVar77 == 5)
					{
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, true, 1);
					}
					func_72(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
				}
				else if (!CAM::IS_SCREEN_FADING_OUT() && (!func_71() || func_440(&iVar25) >= 2f))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 95, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 96, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 97, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 98, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					if (func_441(&iVar18))
					{
						if ((iVar9 == 1 || func_440(&iVar18) >= 60f) || ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || (!bVar108 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))))
						{
							if (!bVar113)
							{
								func_70(&(Var6.f_26));
								bVar113 = true;
							}
							if (func_44(&(Var6.f_26), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar96 && !bVar97)
								{
									if (func_199() && !func_247(&Var6, 26))
									{
										if (func_178(iVar13, iVar75, fVar69, iVar76))
										{
											func_207(&Var6, 26, 1);
										}
									}
								}
								func_41(&(Var6.f_26));
								func_437(&iVar25);
								if (iVar13 == 0)
								{
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, true, 1);
								}
								else if (iVar13 == 5)
								{
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, true, 1);
								}
								func_72(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
							}
						}
						else if (iVar9 == 0)
						{
							if (!bVar96 && !bVar97)
							{
								if (func_199() && !func_247(&Var6, 26))
								{
									if (func_178(iVar13, iVar75, fVar69, iVar76))
									{
										func_207(&Var6, 26, 1);
									}
								}
							}
							func_41(&(Var6.f_26));
							func_437(&iVar25);
							func_207(&Var6, 5, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							CAM::DO_SCREEN_FADE_OUT(800);
							while (CAM::IS_SCREEN_FADING_OUT())
							{
								SYSTEM::WAIT(0);
								if (func_352(&Var3) == 0)
								{
									func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
								}
							}
							func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
							bVar93 = true;
							iVar7 = 0;
							break;
						}
						else if (bVar100)
						{
							if (func_440(&iVar18) > (60f - 5f))
							{
								func_39(&iVar18, (60f - 5f));
							}
						}
					}
					else
					{
						func_326(&iVar18, 0f);
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					bVar108 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
				if (iVar76 > 0)
				{
					iVar76 = 0;
				}
				if (!bVar96 && !bVar97)
				{
					if (func_199() && !func_247(&Var6, 26))
					{
						func_190(iVar13);
						if (func_178(iVar13, iVar75, fVar69, iVar76))
						{
							func_200(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_207(&Var6, 26, 1);
						}
					}
				}
				if (!func_247(&Var6, 24))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						bVar103 = true;
					}
					else
					{
						bVar103 = false;
					}
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_START");
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_LANDED");
					AUDIO::TRIGGER_MUSIC_EVENT("OJBJ_STOP");
					if (HUD::DOES_BLIP_EXIST(iVar45))
					{
						HUD::REMOVE_BLIP(&iVar45);
					}
					if (HUD::DOES_BLIP_EXIST(iVar46))
					{
						HUD::REMOVE_BLIP(&iVar46);
					}
					if (iVar13 == 0)
					{
						VEHICLE::_0xBC3CCA5844452B06(200f);
					}
					iVar10 = func_248();
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar10))
					{
						if (func_352(&Var3) == 0)
						{
							func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
						}
						SYSTEM::WAIT(0);
						iVar10 = func_248();
					}
					if (bVar103)
					{
						func_38(&uVar12, 0);
					}
					else
					{
						func_37(&Var11, 1050253722, 1073741824);
					}
					func_207(&Var6, 24, 1);
				}
				if (!bVar103 && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_207(&Var6, 24, 0);
					break;
				}
				if (func_352(&Var3) == 0)
				{
					func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					switch (func_34(PLAYER::PLAYER_PED_ID()))
					{
						case 0:
							sVar54 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar54 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar54 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar99)
				{
					sVar54 = "BJ_FAIL_02";
				}
				else
				{
					sVar54 = "BJ_FAIL_01";
				}
				bVar107 = false;
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
				if (bVar103)
				{
					bVar107 = func_16(&uVar12, &Var11, &iVar10, cVar53, sVar54, &bVar93, 78);
				}
				else
				{
					bVar107 = func_3(&iVar10, &Var11, cVar53, sVar54, &bVar93, 79, 7, 1, 1097859072, 1);
				}
				if (bVar107)
				{
					if (bVar93)
					{
						if (!bVar96 && !bVar97)
						{
							if (func_199() && !func_247(&Var6, 26))
							{
								if (func_178(iVar13, iVar75, fVar69, iVar76))
								{
									func_207(&Var6, 26, 1);
								}
							}
						}
						func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
						iVar7 = 0;
					}
					else
					{
						if (!bVar96 && !bVar97)
						{
							if (func_199() && !func_247(&Var6, 26))
							{
								if (func_178(iVar13, iVar75, fVar69, iVar76))
								{
									func_207(&Var6, 26, 1);
								}
							}
						}
						func_2(bVar103, &Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
					}
					func_1(&iVar10);
				}
				iVar8 = 0;
				break;
		}
	}
}

void func_1(int iParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_539(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_539(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				RECORDING::_0xEB2D525B57F42B40();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(true);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (func_15(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::_SET_NOTIFICATION_COLOR_NEXT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			func_14(sParam3);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_13(&(uParam1->f_10), 0, 1, 1, 1);
			func_12(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_407())
				{
					case 0:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_441(&(uParam1->f_1)))
			{
				func_465(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_441(&(uParam1->f_4)))
				{
					func_465(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::_SET_2D_LAYER(iParam6);
			func_11(iParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_440(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_5(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SHOW_CURSOR_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_15(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_15(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_440(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_15(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(iParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_355(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_440(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(int iParam0)
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_10(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::_SET_2D_LAYER(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam5);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(func_15(uParam0->f_1, 4096));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
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
				if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_15(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
							}
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar6++;
		}
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar8);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_10(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_441(&(uParam0->f_2)))
	{
		func_355(&(uParam0->f_2));
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
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_440(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_437(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			func_33(&(uParam0->f_1));
			func_32();
			func_37(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		
		case 1:
			if (func_24() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(iParam2, uParam1, sParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(iParam2, uParam1, sParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_32();
				if (*bParam5)
				{
					MISC::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				MISC::_DISABLE_AUTOMATIC_RESPAWN(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_20(0, 1);
				func_18(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

void func_17(bool bParam0)
{
	if ((Global_35861 == 9 || Global_35861 == 10) || Global_35861 == 5)
	{
		Global_103204 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_103204 = 0;
	}
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		GRAPHICS::_START_SCREEN_EFFECT("DeathFailOut", 0, 0);
		MISC::SET_BIT(&iLocal_41, 1);
		func_19(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_41, 1) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT("DeathFailOut");
			func_19(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_41, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_41, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_41, 2);
	}
}

void func_20(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_407())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::_START_SCREEN_EFFECT(sVar0, 0, 0);
			MISC::SET_BIT(&iLocal_41, 0);
			func_19(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT(sVar0);
			func_19(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 0);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_24()
{
	if (!MISC::IS_BIT_SET(iLocal_41, 0) && !MISC::IS_BIT_SET(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_20(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!MISC::IS_BIT_SET(iLocal_41, 1))
		{
			func_18(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_42 == 0)
			{
				iLocal_42 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_19(0, 2, 1);
				func_397(1, 1, 1, 0);
				func_26(1);
				HUD::SET_FRONTEND_ACTIVE(0);
				HUD::SET_PAUSE_MENU_ACTIVE(0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(iLocal_41, 3))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&iLocal_41, 3);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_41, 3))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&iLocal_41, 3);
		}
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_31();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_30(0))
		{
			func_27(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_27(int iParam0)
{
	if (Global_14615)
	{
		func_29(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2324, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2323, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2323, 30);
	}
	if (!func_28())
	{
		Global_14453.f_1 = 3;
	}
}

int func_28()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_30(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14390);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
		}
	}
}

int func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2323, 14))
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
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_31()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_32()
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_397(0, 1, 1, 0);
	func_26(1);
}

void func_33(int iParam0)
{
	if (!func_441(iParam0))
	{
		func_465(iParam0);
	}
	else
	{
		func_355(iParam0);
	}
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_36(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

void func_37(var uParam0, int iParam1, int iParam2)
{
	if (func_441(&(uParam0->f_1)))
	{
		func_437(&(uParam0->f_1));
	}
	if (func_441(&(uParam0->f_4)))
	{
		func_437(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1);
}

void func_39(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_40(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_40(bool bParam0)
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
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_41(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_43(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_42(0);
}

void func_42(int iParam0)
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_43(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71104, 0);
}

int func_44(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (BRAIN::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
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
	func_69(0);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_36411 = 1;
	if (!uParam0->f_563)
	{
		switch (func_34(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
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
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_68(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_68(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_68((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_68(30f) - func_68(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_42(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_47(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_46(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_46(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_46(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_45(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_45(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				uParam0->f_559 = func_46((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_46((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_46((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_46((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_42(0);
			}
			return !bVar0;
		}
	}
	func_42(0);
	return 1;
}

void func_45(var uParam0, bool bParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_14("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(215);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (bParam1)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
		func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_14("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(216);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

float func_46(float fParam0, float fParam1, float fParam2)
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

void func_47(var uParam0, float fParam1, bool bParam2)
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
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_67() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_66(&(uParam0->f_13));
				}
				else
				{
					func_14(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(150);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_56);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(69);
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0.15f);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				uParam0->f_3 = 1;
			}
		}
		func_65();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_68((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
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
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_67());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_64(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_64(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_67()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
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
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_61((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_68(6f));
	fVar1 = (fVar1 + (func_68(30f) - func_68((2f * 2f))));
	fVar11 = (fVar2 - func_68((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_46((fVar11 / (0.6f * func_68(25f))), 0f, 1f);
		func_65();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_68((2f - 0.5f)) - 0.001388889f)), fVar6, func_60(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_68((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_68((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_46((fVar11 / (0.8f * func_68(25f))), 0f, 1f);
			func_57(uParam0, iVar17, (fVar1 + func_68(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_68(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_68((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_68(2f));
					fVar12 = func_46((fVar11 / (0.6f * func_68(25f))), 0f, 1f);
					func_65();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_68((2f * 0.5f))), fVar6, func_60(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_68((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_68((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_68((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_68(2f));
			fVar12 = func_46((fVar11 / (0.6f * func_68(25f))), 0f, 1f);
			func_65();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_68((2f * 0.5f))), fVar6, func_60(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_68((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_46((fVar11 / (0.8f * func_68(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_50(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALE::_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_67()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_67()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_67()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_67()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
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
			func_49(&(uParam0->f_550), fVar20, (fVar1 + func_68((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_65();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
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
				fVar32 = ((fVar21 + func_48(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_68(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_68(30f) - 2f));
		}
	}
}

float func_48(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_49(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_65();
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

int func_50(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_56(iParam0), 64);
	StringCopy(&cVar1, func_53(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_52())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_52())
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
		vVar7.x = (vVar7.x * (func_51(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_51(iParam0) / fVar4));
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
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
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
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_51(int iParam0)
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

int func_52()
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

var func_53(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_55(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_54(&uVar1);
			}
		}
		else
		{
			return func_54(&(Global_17301.f_6719[iParam0 /*16*/]));
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

var func_54(var uParam0)
{
	return uParam0;
}

struct<13> func_55(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_56(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_55(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_54(&uVar0);
		}
		else
		{
			return func_54(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_57(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
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
	HUD::SET_TEXT_SCALE(1f, func_59(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_65();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_50(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_53(7, 0), (fParam4 - 0.006f), ((fParam2 + func_68(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_50(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_53(5, 0), (fParam4 - 0.006f), ((fParam2 + func_68(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_50(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_53(6, 0), (fParam4 - 0.006f), ((fParam2 + func_68(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_59(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_58(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_58(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
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
	func_65();
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
			HUD::SET_TEXT_SCALE(1f, func_59(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
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
			HUD::SET_TEXT_SCALE(1f, func_59(14f));
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
			HUD::SET_TEXT_SCALE(1f, func_59(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
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
			HUD::SET_TEXT_SCALE(1f, func_59(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_59(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_60(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_63(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_62(7, iVar0);
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

void func_62(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_63(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1359035.f_6119[iParam0], iParam1);
}

float func_64(char* sParam0)
{
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_65()
{
	GRAPHICS::_SET_2D_LAYER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_SET_2D_LAYER(7);
	}
	GRAPHICS::_0xC6372ECD45D73BCD(0);
}

void func_66(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

float func_67()
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_68(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_69(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_30(0))
		{
			func_27(iParam0);
		}
		MISC::SET_BIT(&Global_2324, 2);
	}
}

void func_70(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

bool func_71()
{
	return Global_92872.f_1;
}

void func_72(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	func_539(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &iParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, uParam16, bParam17);
}

int func_73(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (!func_247(iParam1, 5))
	{
		HUD::CLEAR_HELP(1);
		func_173(iParam1, func_177(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		func_207(iParam1, 5, 1);
		SYSTEM::SETTIMERA(0);
	}
	if (!func_247(iParam1, 6))
	{
		if (func_169(&(iParam1->f_26), 0, 0))
		{
			func_207(iParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_247(iParam1, 27) && PLAYER::IS_PLAYER_ONLINE())
	{
		if (!func_247(iParam1, 26))
		{
			func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		}
		func_207(iParam1, 27, 0);
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		if (*iParam9)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				func_92(uParam2, iParam0);
				func_88(iParam1);
			}
			else if (func_75(&iLocal_542, 0))
			{
				iLocal_542 = 0;
				*iParam9 = 0;
				func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else
		{
			if (!func_247(iParam1, 10))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BASE_JUMP_PASSED", "HUD_AWARDS", true);
				func_207(iParam1, 10, 1);
			}
			func_44(&(iParam1->f_26), 0, 1065353216, 0, 1, 0);
			func_88(iParam1);
		}
		if (*iParam9)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				if (!func_247(iParam1, 28) && func_74(&uLocal_105))
				{
					func_207(iParam1, 28, 1);
					func_200(iParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
			}
			if (func_312(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else if (func_312(uParam3, 5, 1000))
		{
			func_70(&(iParam1->f_26));
			return 1;
		}
		else if (func_312(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_312(uParam3, 8, 1000)) && (!PLAYER::IS_PLAYER_ONLINE() || func_247(iParam1, 26)))
		{
			*iParam9 = 1;
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				if (func_74(&uLocal_105))
				{
					func_207(iParam1, 28, 1);
					func_200(iParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
				else
				{
					func_207(iParam1, 28, 0);
					func_200(iParam1, 0, 202, "HUD_INPUT53", 358, 0, 358, 0, 358, 0);
				}
			}
		}
	}
	return 2;
}

int func_74(var uParam0)
{
	if ((MISC::IS_BIT_SET(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_1840922.f_2 > 0)
	{
		func_87(&Global_1840922);
		func_87(&(Global_1840922.f_49));
		*iParam0 = 0;
		Global_1840922.f_2 = 0;
		func_86(0);
	}
	Global_1840922.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = -1;
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((MISC::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_84() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_81(&(Global_1840922.f_3), func_83(&(Global_1840922.f_3)));
			if (!MISC::IS_BIT_SET(*iParam0, 4))
			{
				MISC::SET_BIT(iParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_79(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_84())
			{
				HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!MISC::IS_BIT_SET(*iParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(iParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_87(&(Global_1840922.f_49));
				func_87(&Global_1840922);
				*iParam0 = 0;
				Global_1840922.f_2 = 0;
				func_86(0);
				return 1;
			}
		}
	}
	else
	{
		func_81(&(Global_1840922.f_3), func_83(&(Global_1840922.f_3)));
		if ((func_78(&(Global_1840922.f_49)) && !func_76(&(Global_1840922.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(iParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_79(&(Global_1840922.f_3), 0);
		}
		else if (!MISC::IS_BIT_SET(*iParam0, 3))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				MISC::SET_BIT(iParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_79(&(Global_1840922.f_3), 0);
			}
		}
		if (func_78(&Global_1840922))
		{
			if (!func_76(&Global_1840922, 4000, 1))
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
						HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!MISC::IS_BIT_SET(*iParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(iParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_87(&Global_1840922);
							*iParam0 = 0;
							Global_1840922.f_2 = 0;
							func_86(0);
							return 1;
						}
					}
				}
				else
				{
					func_87(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_86(0);
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(*iParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!MISC::IS_BIT_SET(*iParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(iParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_87(&(Global_1840922.f_49));
					func_87(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_86(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					HUD::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(*iParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(iParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_87(&(Global_1840922.f_49));
						func_87(&Global_1840922);
						*iParam0 = 0;
						Global_1840922.f_2 = 0;
						func_86(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_76(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_77(uParam0, bParam2, 0);
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

void func_77(var uParam0, bool bParam1, bool bParam2)
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

bool func_78(var uParam0)
{
	return uParam0->f_1;
}

void func_79(var uParam0, bool bParam1)
{
	func_80(uParam0);
	if (bParam1)
	{
		func_86(0);
	}
	uParam0->f_35 = 1;
}

void func_80(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_81(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_82(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else
		{
			HUD::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			HUD::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_82(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_83(var uParam0)
{
	return uParam0->f_35;
}

int func_84()
{
	if (func_85())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_85()
{
	return Global_2457327;
}

void func_86(bool bParam0)
{
	HUD::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		HUD::_0xC65AB383CD91DF98();
	}
}

void func_87(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_88(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_91(iParam0))
	{
		return;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 0, 0);
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iParam0->f_3[iVar0] != 358)
			{
				iParam0->f_12[iVar0] = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_89(&(iParam0->f_1), 4);
	}
	if (!func_23(iParam0->f_1, 4))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(200f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_21[iVar2]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_12[iVar2 + 4]))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar1);
					func_9(iParam0->f_12[iVar2 + 4]);
					func_9(iParam0->f_12[iVar2]);
					func_14(iParam0->f_21[iVar2]);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar1);
					func_9(iParam0->f_12[iVar2]);
					func_14(iParam0->f_21[iVar2]);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(iParam0->f_2));
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_21(&(iParam0->f_1), 4);
	}
}

void func_89(var uParam0, int iParam1)
{
	func_90(uParam0, iParam1);
}

void func_90(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_91(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, &uLocal_105);
}

void func_93(var uParam0, var uParam1)
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
	
	func_168(&(Global_1840922.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_167();
	func_69(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_165();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_164(1);
	func_163(1);
	if (!func_160())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_159();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var10 = { func_55(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1835390.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1835390.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())
			{
				if (Global_1835390.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
			{
				if (Global_1835390.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!MISC::IS_BIT_SET(uParam1->f_42, 1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_158(*uParam0, Global_1835390.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_157(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							Var6 = { Global_1835390.f_2780.f_9 };
							func_156(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_156(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_155(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_154(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_154(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_154(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				func_153(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(1);
			}
			else
			{
				func_153(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_117(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!MISC::IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					func_158(*uParam0, Global_1835390.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_157(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835390.f_2780.f_9 };
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_155(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_116(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_87(&(Global_1835390.f_2823));
				}
				else if (func_76(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_116(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_87(&(Global_1835390.f_2823));
				}
				func_153(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!MISC::IS_BIT_SET(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					func_158(*uParam0, Global_1835390.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_157(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835390.f_2780.f_9 };
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_156(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_155(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_42, 6))
					{
						func_115(&Global_1839721);
						func_111(uParam1, &Global_1839721);
						func_110(uParam1, &Global_1839721);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_157(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_154(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_157(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_154(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_154(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
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
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_157(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_154(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_154(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_109(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_157(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_1839721[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_108(&(Global_1839721[iVar0 /*100*/].f_32), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (func_157(uParam1->f_44))
									{
										Var6 = { Global_1839721[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1839721[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_107(*uParam0, iVar3, iVar9, Global_1839721[iVar0 /*100*/].f_59, &Var6, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_107(*uParam0, iVar3, iVar9, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar5 = false;
										if (MISC::IS_BIT_SET(Global_1835390.f_2770, iVar1))
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_102(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_102(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_99(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_99(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_98();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_97(*uParam0, (iVar3 - 1), iVar9);
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
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_154(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_154(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_154(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					func_153(*uParam0);
					HUD::CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_97(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_153(*uParam0);
					func_94(uParam0, uParam1);
				}
			}
		}
	}
}

void func_94(var uParam0, var uParam1)
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
	
	iVar1 = uParam1->f_246.f_1;
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		HUD::_SHOW_CURSOR_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			PAD::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			PAD::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (HUD::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
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
		func_96(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!MISC::IS_BIT_SET(uParam1->f_246, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				MISC::SET_BIT(&(uParam1->f_246), 0);
				func_87(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_95(uParam1, 188))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 0);
		}
		if (!MISC::IS_BIT_SET(uParam1->f_246, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1++;
				MISC::SET_BIT(&(uParam1->f_246), 1);
				func_87(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_95(uParam1, 187))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_246, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			MISC::SET_BIT(&(uParam1->f_246), 3);
			func_87(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_95(uParam1, 204))
	{
		MISC::CLEAR_BIT(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				MISC::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_97(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_97(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			MISC::CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_109(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_246, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2, 217) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						MISC::SET_BIT(&(uParam1->f_246), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 217))
			{
				MISC::CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_95(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_96(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_76(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_76(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_96(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_97(int iParam0, int iParam1, int iParam2)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_SLOT_STATE");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_98()
{
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_99(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 18 || Param0.f_29[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!MISC::_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam14] == 19 || Param0.f_29[iParam14] == 20)
					{
						fParam15 = func_101(fParam15);
					}
					else
					{
						fParam15 = func_100(fParam15);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_100(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_101(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_102(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_29[iParam14])
	{
		case 5:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[iParam14] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[iParam14] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_106(iParam15) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_103(func_106(iParam15), 0));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 14 || Param0.f_29[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!MISC::_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam14] == 15 || Param0.f_29[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_101(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_100(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_103(int iParam0, bool bParam1)
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
		
		case -1474608608:
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
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
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
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
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
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		default:
			if (func_105(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_104(&(Var0.f_31));
				}
				else
				{
					return func_104(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_104(var uParam0)
{
	return uParam0;
}

int func_105(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_106(int iParam0)
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
		return -572349828;
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
		return -947031628;
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

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::_0xE83A3E3557A56640(sParam4);
	GRAPHICS::_0xE83A3E3557A56640(sParam5);
}

int func_108(var uParam0, var uParam1)
{
	if (!func_109(*uParam0))
	{
		return 0;
	}
	if (!func_109(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_109(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_110(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!MISC::IS_BIT_SET(uParam0->f_42, 5) && !MISC::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
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

void func_111(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!MISC::IS_BIT_SET(uParam0->f_42, 5) && !MISC::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_114(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_114(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_114(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
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
		func_112(uParam1);
	}
}

void func_112(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_55(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835390.f_2826))
	{
		iVar4 = STATS::_0x58A651CD201D89AD(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_113(&Global_1839591);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (MISC::IS_BIT_SET(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (MISC::IS_BIT_SET(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (MISC::IS_BIT_SET(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (MISC::IS_BIT_SET(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_108(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (MISC::IS_BIT_SET(Global_1839591.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_113(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_114(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534[iParam3 /*16*/] = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_55(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835390.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835390.f_2775[iParam3] + iVar0) < 12 && (Global_1835390.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_115(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_87(&(Global_1835390.f_2830));
}

void func_116(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_117(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_78(&(Global_1835390.f_2827)))
		{
			func_77(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_76(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1835390.f_2832 != 0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_42), 4);
		return 1;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_42, 4))
	{
		func_152(uParam0);
		MISC::SET_BIT(&(uParam0->f_42), 4);
		return 0;
	}
	else if (MISC::IS_BIT_SET(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_150(uParam0))
	{
		return 0;
	}
	if (!func_148(uParam0))
	{
		return 0;
	}
	if (!func_134(uParam0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_42, 6))
	{
		func_115(&Global_1839721);
		func_111(uParam0, &Global_1839721);
		func_110(uParam0, &Global_1839721);
		MISC::SET_BIT(&(uParam0->f_42), 6);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!func_78(&(Global_1835390.f_2830)))
		{
			func_77(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_76(&(Global_1835390.f_2830), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_131(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_128(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_122(&Global_1839721))
		{
			func_118(&Global_1839721);
			MISC::SET_BIT(&(uParam0->f_42), 7);
			func_118(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_121(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_120(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_113(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_109((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839591.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839591.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				MISC::SET_BIT(&(Global_1839591.f_61), 0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1839591.f_61), 0);
			}
			MISC::SET_BIT(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (MISC::IS_BIT_SET(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_119(PLAYER::PLAYER_ID()) };
}

Vector3 func_119(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838575.f_81[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838575.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1838575.f_81[iVar0]);
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

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_126(uParam0);
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_109((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_125(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_123(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_109((uParam0[iVar0 /*100*/])->f_32) && func_109(Global_1841018[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841018.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_123(var uParam0, var uParam1, var uParam2, var uParam3)
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
					func_124(&uVar0, uParam3[iVar1 /*4*/]);
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

void func_124(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

int func_125(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_109(*(uParam1[iVar0 /*13*/])))
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

void func_126(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_127(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1841018.f_206 = 0;
}

void func_127(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_128(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		if (!func_130(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_129(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_129(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_109(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (MISC::IS_DURANGO_VERSION())
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

int func_130(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_127(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_109((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = NETWORK::_0xD66C9E72B3CC4982(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_109((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835390.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_131(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_DURANGO_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_133(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_132(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
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
			if (func_109(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
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

int func_133(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!MISC::IS_DURANGO_VERSION())
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
			if (func_109(Var1[0 /*13*/]))
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
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_134(var uParam0)
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
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_55(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1835390.f_2775[iVar9] = -1;
			Global_1835390.f_2704[iVar9] = 0;
			Global_1835013.f_374 = -1;
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
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
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_146(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_147(), 0, 0, 0))
			{
				func_145(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_147())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (MISC::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_144(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar9] < 12)
							{
								if (func_147() && iVar5 == 0)
								{
									func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar9] = 0;
									Global_1835390.f_2704[iVar9]++;
								}
								if (func_147() && (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_108(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835390.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_142(uParam0->f_44))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_157(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835390.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1835390.f_2704[iVar9]++;
						}
						if (!func_147())
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
						func_144(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
							if (Global_1835390.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_147() && iVar5 == iVar7)
								{
									if (!func_108(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
										Global_1835390.f_2704[iVar9]++;
									}
								}
								if (func_147() && (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar9] < 12)
								{
									if (func_109(Var0) && !func_108(&Var0, &(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_108(&Var0, &Var12))
										{
											if (Global_1835390.f_2775[iVar9] < 0)
											{
												Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_142(uParam0->f_44))
										{
											iVar4 = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1835390.f_2709);
											if (iVar4 == 1)
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_157(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1835390.f_2708)
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1835390.f_2710[iVar2]);
											}
											else
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar2] = STATS::_0x38491439B6BA7F7D(iVar7, Global_1835390.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835390.f_2704[iVar9]++;
									}
								}
							}
							func_144(&Var0);
							iVar7++;
						}
						STATS::_0x71B008056E5692D6();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835390.f_2775[iVar9] == -1 && func_147())
							{
								if (Global_1835390.f_2704[iVar9] >= 1)
								{
									func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
								Global_1835390.f_2704[iVar9]++;
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
							Global_1835390.f_2704[iVar9]++;
						}
						STATS::_0x71B008056E5692D6();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					MISC::SET_BIT(&(Global_1835390.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_136(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_145(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar2, &Var0);
							bVar10 = false;
							if (Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_1835390.f_2704[iVar9] < 12 || bVar10)
							{
								if (func_147() && (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835390[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_142(uParam0->f_44))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_157(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_1835390.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar9] < 12)
								{
									MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_142(uParam0->f_44))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_157(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar3] = STATS::_0x38491439B6BA7F7D(iVar2, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1835390.f_2704[iVar9]++;
									}
								}
							}
							func_144(&Var0);
							iVar2++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					MISC::SET_BIT(&(Global_1835390.f_2832), iVar9);
					Global_1835390.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835390.f_2775[iVar9] == -1 && func_147())
				{
					if (Global_1835390.f_2704[iVar9] >= 1)
					{
						func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
					Global_1835390.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_135(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_147() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_147())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_136(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
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

void func_137(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1835008 = 1;
	func_168(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_138()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_160())
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (STATS::_0xA31FD15197B192BD() || Global_1835008)
	{
		func_140();
		return 1;
	}
	return 0;
}

void func_140()
{
	if (func_76(&(Global_1835008.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_87(&(Global_1835008.f_1));
	}
}

void func_141(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_87(&(Global_1835008.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_142(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_157(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { func_55(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_142(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (MISC::IS_BIT_SET(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_144(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_145(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_146(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
				if (bParam5)
				{
					if (MISC::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
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
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
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

int func_147()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0)
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
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_55(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_147())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_149(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar8, 0, 100))
				{
					func_145(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
					{
						if (func_147())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
									if (func_157(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_108(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (MISC::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_144(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_147() && iVar4 == 0)
						{
							if (Global_1835390.f_2704[iVar9] < 12)
							{
								func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								Global_1835390.f_2775[iVar9] = 0;
								Global_1835390.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_147() && (func_108(&Var0, &Var10) || func_108(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_109(Var0) && Global_1835390.f_2704[iVar9] < 12)
							{
								if (func_108(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_142(uParam0->f_44))
								{
									iVar7 = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
									if (iVar7 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_157(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_1835390.f_2708)
								{
									if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar2] = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar2]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar2] = STATS::_0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_144(&Var0);
								STATS::_0x71B008056E5692D6();
								func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar9] == -1 && func_147())
								{
									if (Global_1835390.f_2704[iVar9] >= 1)
									{
										func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
									Global_1835390.f_2704[iVar9]++;
								}
								return 0;
							}
							func_144(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_144(&Var0);
							STATS::_0x71B008056E5692D6();
							func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar9] == -1 && func_147())
							{
								if (Global_1835390.f_2704[iVar9] >= 1)
								{
									func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
								Global_1835390.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_147())
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
							if (Global_1835390.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_147() && iVar4 == iVar6)
								{
									if (!func_108(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
										Global_1835390.f_2704[iVar9]++;
									}
								}
								if (func_147() && (func_108(&Var0, &Var10) || func_108(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_109(Var0) && !func_108(&Var0, &(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_108(&Var0, &Var10))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_142(uParam0->f_44))
										{
											iVar7 = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1835390.f_2709);
											if (iVar7 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_157(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1835390.f_2708)
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1835390.f_2710[iVar2]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar2] = STATS::_0x38491439B6BA7F7D(iVar6, Global_1835390.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_144(&Var0);
							iVar6++;
						}
						STATS::_0x71B008056E5692D6();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar9] == -1 && func_147())
						{
							if (Global_1835390.f_2704[iVar9] >= 1)
							{
								func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_143(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
							Global_1835390.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_135(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
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

int func_150(var uParam0)
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
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_55(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835390.f_2775[iVar10] = -1;
			Global_1835390.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_151(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_146(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_147(), 0, 0, 0))
			{
				func_145(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_147())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (MISC::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_144(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar10] < 12)
							{
								if (func_147() && iVar6 == 0)
								{
									func_143(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835390.f_2775[iVar10] = 0;
									Global_1835390.f_2704[iVar10]++;
								}
								if (func_147() && (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_108(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835390.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_142(uParam0->f_44))
									{
										iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
										if (iVar5 == 1)
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_157(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835390.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1835390.f_2704[iVar10]++;
						}
						if (!func_147())
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
						func_144(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
							if (Global_1835390.f_2704[iVar10] < 12 && Var1.f_96 > 1)
							{
								if (func_147() && iVar6 == iVar8)
								{
									if (!func_108(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_143(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
										Global_1835390.f_2704[iVar10]++;
									}
								}
								if (func_147() && (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar10] < 12)
								{
									if (func_109(Var1) && !func_108(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_108(&Var1, &Var0))
										{
											if (Global_1835390.f_2775[iVar10] < 0)
											{
												Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_142(uParam0->f_44))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_157(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1835390.f_2708)
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1835390.f_2710[iVar3]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar3] = STATS::_0x38491439B6BA7F7D(iVar8, Global_1835390.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_1835390.f_2704[iVar10]++;
									}
								}
							}
							func_144(&Var1);
							iVar8++;
						}
						STATS::_0x71B008056E5692D6();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835390.f_2775[iVar10] == -1 && func_147())
							{
								if (Global_1835390.f_2704[iVar10] >= 1)
								{
									func_143(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Global_1835390[iVar10 /*901*/][(Global_1835390.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_143(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
								Global_1835390.f_2704[iVar10]++;
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
							Global_1835390.f_2704[iVar10]++;
						}
						STATS::_0x71B008056E5692D6();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					MISC::SET_BIT(&(Global_1835390.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_136(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_145(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar3, &Var1);
							if (func_147() && (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_1835390.f_2704[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_142(uParam0->f_44))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_157(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835390.f_2708)
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar4]))
											{
												Global_1835390[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1835390.f_2710[iVar4]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1835390.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_1835390.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar10]++;
											}
										}
										else if (Global_1835390.f_2704[iVar10] == 1 && Global_1835390.f_2775[iVar10] == -1)
										{
											Global_1835390.f_2704[iVar10]++;
										}
									}
									else if (Global_1835390.f_2704[iVar10] < 12)
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_142(uParam0->f_44))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_157(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835390.f_2708)
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar4]))
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1835390.f_2710[iVar4]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1835390.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1835390.f_2704[iVar10]++;
										}
									}
								}
							}
							func_144(&Var1);
							iVar3++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_1835390.f_2832), iVar10);
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar10] == -1 && func_147())
			{
				if (Global_1835390.f_2704[iVar10] >= 1)
				{
					func_143(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Global_1835390[iVar10 /*901*/][(Global_1835390.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_143(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
				Global_1835390.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_135(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_151(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_152(var uParam0)
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835390.f_2826))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_42), 5);
			func_120(Global_1835390.f_2826, -1);
		}
	}
}

void func_153(int iParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (MISC::IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (MISC::IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (MISC::IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
		{
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_55(PLAYER::PLAYER_ID()) };
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
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(*iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(*iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (MISC::IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (MISC::IS_BIT_SET(iParam2, 5))
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
		else if (MISC::IS_BIT_SET(iParam2, 6))
		{
			if (NETWORK::_0x67A5589628E0CFF6())
			{
				if (NETWORK::_0xBA9775570DB788CF())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
					{
						if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_55(PLAYER::PLAYER_ID()) };
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
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(*iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
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
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		*iParam1++;
	}
}

void func_155(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_156(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == -1)
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
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_157(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0, int iParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_159()
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}

bool func_160()
{
	return func_161(PLAYER::PLAYER_ID());
}

int func_161(int iParam0)
{
	switch (func_162(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_162(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_196;
}

void func_163(int iParam0)
{
	Global_1315692 = iParam0;
}

void func_164(int iParam0)
{
	Global_1359035.f_1079 = iParam0;
}

void func_165()
{
	func_167();
	func_166(4, -1);
	func_166(6, -1);
	func_166(7, -1);
	func_166(3, -1);
	func_166(1, -1);
	func_166(2, -1);
	func_166(11, -1);
	func_166(13, -1);
	func_166(14, -1);
	func_166(16, -1);
}

void func_166(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1357530.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357530.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_167()
{
	Global_2512808.f_4500 = 0;
}

void func_168(var uParam0, bool bParam1, bool bParam2)
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

int func_169(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_172(uParam0);
	func_171(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
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
		if (uParam0->f_562 || uParam0->f_567)
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
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_170(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_45(uParam0, 1);
		}
		else
		{
			func_45(uParam0, 0);
		}
	}
	Global_71117 = 1;
	return 1;
}

void func_170(var uParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_14("ES_HELP_TU");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_14("ES_HELP_TD");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_14("ES_HELP_AB");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_171(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_59(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(uParam0->f_13));
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
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
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

void func_172(var uParam0)
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

void func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_247(iParam0, 4))
	{
		return;
	}
	else
	{
		func_176(&(iParam0->f_26));
		func_175(&(iParam0->f_26), "BJ_SC_PASS", sParam1, 0);
		func_207(iParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_174(&(iParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_174(&(iParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_174(&(iParam0->f_26), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_174(&(iParam0->f_26), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_174(&(iParam0->f_26), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_174(&(iParam0->f_26), 3, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_174(&(iParam0->f_26), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_174(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_175(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_176(var uParam0)
{
	func_172(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

char* func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		
		case 1:
			return "BJ_JUMP_02";
		
		case 2:
			return "BJ_JUMP_03";
		
		case 3:
			return "BJ_JUMP_04";
		
		case 4:
			return "BJ_JUMP_05";
		
		case 5:
			return "BJ_JUMP_06";
		
		case 6:
			return "BJ_JUMP_07";
		
		case 7:
			return "BJ_JUMP_08";
		
		case 8:
			return "BJ_JUMP_09";
		
		case 9:
			return "BJ_JUMP_10";
		
		case 10:
			return "BJ_JUMP_11";
		
		case 11:
			return "BJ_JUMP_12";
		
		case 12:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_178(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_187(iParam0, iParam1, fParam2, iParam3);
		Global_1835013.f_2 = 1;
	}
	if (func_179(&uLocal_105))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_179(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_157(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_55(PLAYER::PLAYER_ID()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_145(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_185(uParam0->f_44, iVar4))
					{
						if (func_184(uParam0->f_44, 4, iVar4))
						{
							MISC::SET_BIT(&(Global_1835013.f_142.f_2), iVar4);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_109(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_185(uParam0->f_44, iVar4))
								{
									if (func_184(uParam0->f_44, 4, iVar4))
									{
										Global_1835013.f_73.f_36[iVar4] = STATS::_0x88578F6EC36B4A3A(0, iVar4);
										if (Global_1835013.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar4] = STATS::_0x38491439B6BA7F7D(0, iVar4);
										if (Global_1835013.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar4] = 0f;
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
						Global_1835013.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_183();
				if (Global_1835013.f_4)
				{
					if (func_182(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			STATS::_0xC38DC1E90D22547C(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_181())
			{
				if (func_180())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_182(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var2 = Global_1835013.f_142;
				Var2.f_1 = Global_1835013.f_142.f_1;
				Var2.f_2 = Global_1835013.f_142.f_2;
				STATS::_0xC38DC1E90D22547C(&Var2, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_146(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_145(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_13), ""))
						{
							Global_979643.f_1 = -1;
						}
						else
						{
							Global_979643.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979643.f_1 = -1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_979643.f_1 = -1;
				}
				Global_1835013 = 999;
				func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_180()
{
	return MISC::IS_BIT_SET(Global_971064.f_8, 1);
}

var func_181()
{
	return Global_2455152.f_3;
}

int func_182(int iParam0)
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

void func_183()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_184(int iParam0, int iParam1, int iParam2)
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

int func_185(int iParam0, int iParam1)
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

int func_186(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
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

void func_187(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	StringCopy(&(Var1[0 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_189(274, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_188(274, 131, iParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_188(274, 98, 1, 0f, 0);
		}
		else
		{
			func_188(274, 98, 0, 0f, 0);
		}
		func_188(274, 109, 1, 0f, 0);
		func_188(274, 8, iParam3, 0f, 0);
		func_188(274, 93, 0, fParam2, 0);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_184(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
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
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		MISC::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_189(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				Var2 = { func_55(PLAYER::PLAYER_ID()) };
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
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2455152.f_3)
			{
				STATS::_0xC980E62E33DF1D5C(&Var0, &(Global_1655819.f_10));
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

void func_190(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&vVar0, "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&vVar0, "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&vVar0, "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&vVar0, "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&vVar0, "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&vVar0, "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&vVar0, "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&vVar0, "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&vVar0, "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&vVar0, "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&vVar0, "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&vVar0, "BJUMP_13", 24);
			break;
	}
	func_191(&uLocal_105, 85, &vVar0, func_177(iParam0), iParam0, -1, 0, 0);
}

void func_191(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_198())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_198())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_198())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_198())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_198())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_198())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_198())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
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
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_197(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_55 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_196(Global_4456448.f_143970) || func_193(Global_4456448.f_143970))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			MISC::SET_BIT(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
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
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				MISC::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1835390.f_2708)
	{
		if (MISC::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
		{
			MISC::SET_BIT(&(Global_1835390.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_1835390.f_2826 = func_192(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_192(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_157(iParam1))
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

var func_193(int iParam0)
{
	return (func_195(iParam0) || func_194(iParam0));
}

bool func_194(int iParam0)
{
	return iParam0 == 44;
}

bool func_195(int iParam0)
{
	return iParam0 == 45;
}

bool func_196(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_197(int iParam0)
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

int func_198()
{
	if ((((((((Global_4456448.f_50256 == 1 || Global_4456448.f_50256 == 3) || Global_4456448.f_50256 == 5) || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 19) || Global_4456448.f_50256 == 8) || Global_4456448.f_50256 == 9) || Global_4456448.f_50256 == 11) || Global_4456448.f_50256 == 13)
	{
		return 1;
	}
	return 0;
}

bool func_199()
{
	return NETWORK::NETWORK_IS_SIGNED_ONLINE();
}

void func_200(int iParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	iParam0->f_1 = 0;
	iParam0->f_3[0] = iParam2;
	iParam0->f_3[1] = iParam4;
	iParam0->f_3[2] = iParam6;
	iParam0->f_3[3] = iParam8;
	iParam0->f_3[4] = 358;
	iParam0->f_3[5] = 358;
	iParam0->f_3[6] = 358;
	iParam0->f_3[7] = 358;
	iParam0->f_12[0] = func_201(iParam2 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam2, true), "");
	iParam0->f_12[1] = func_201(iParam4 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam4, true), "");
	iParam0->f_12[2] = func_201(iParam6 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam6, true), "");
	iParam0->f_12[3] = func_201(iParam8 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam8, true), "");
	iParam0->f_12[4] = 0;
	iParam0->f_12[5] = 0;
	iParam0->f_12[6] = 0;
	iParam0->f_12[7] = 0;
	iParam0->f_21[0] = sParam3;
	iParam0->f_21[1] = sParam5;
	iParam0->f_21[2] = iParam7;
	iParam0->f_21[3] = iParam9;
	if (bParam1)
	{
		iParam0->f_2 = 1;
	}
	else
	{
		iParam0->f_2 = 0;
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		func_21(&(iParam0->f_1), 1);
	}
}

char* func_201(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_202()
{
	func_203(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_MED", 24);
}

void func_203(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_204(iParam2), 1);
}

int func_204(int iParam0)
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

int func_205()
{
	if (func_43(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

void func_206(int iParam0, int iParam1)
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_207(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(iParam0->f_603), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_603), iParam1);
	}
}

int func_208(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	int iVar0;
	
	if (iParam1 > 1 && *uParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*uParam3 = 0;
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*uParam2))));
	func_209(func_407(), 1, *uParam3, 0, 0);
	return 1;
}

void func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_210(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_240();
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
					func_347(99, 1);
					func_239(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_239(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_239(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_223(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_219(5))
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
							func_239(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_219(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_239(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_239(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_239(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_property"), iParam3);
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
									func_239(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_239(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_219(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_239(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_239(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_218(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_347(95, iParam3);
					break;
				
				case 1:
					func_347(97, iParam3);
					break;
				
				case 2:
					func_347(96, iParam3);
					break;
			}
			func_347(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_213(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_213(iVar1);
	}
	iVar5 = (Global_53077[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53077[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53077[iVar2] = 2147483647;
				}
				else
				{
					Global_53077[iVar2] = (Global_53077[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_239(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_239(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_239(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53077[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53077[iVar2];
			Global_53077[iVar2] = (Global_53077[iVar2] - iParam3);
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
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104555.f_20534.f_233[iVar2 /*69*/]++;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_212(iParam0);
	if (Global_35861 == 15)
	{
		func_211(0);
	}
	return 1;
}

void func_211(bool bParam0)
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
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53077[iParam0];
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

void func_213(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_216(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_104555.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_104555.f_20534.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_104555.f_20534.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_215() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_104555.f_20534.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_215() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_214(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_214(int iParam0)
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
		
		default:
	}
	return "";
}

int func_215()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_216(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_217();
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
	return iVar0;
}

int func_217()
{
	return Global_1312736;
}

void func_218(int iParam0)
{
	func_347(93, iParam0);
	func_347(29, iParam0);
	func_347(30, iParam0);
}

bool func_219(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_220(129, -1, -1);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_104555.f_20534.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_215() /*12130*/].f_7676.f_10, iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_217();
	}
	iVar1 = func_222(iParam0, iParam1);
	uVar2 = func_221(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_221(int iParam0)
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

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_217();
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

int func_223(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_238(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_224(27, 1);
	return 1;
}

int func_224(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_225(iParam0, iParam1);
}

int func_225(int iParam0, int iParam1)
{
	if (func_237(14) && !func_236(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25480 != 0 && !Global_70856)
	{
		return 0;
	}
	if (func_235(&Global_4267379))
	{
		if (func_233(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_226(&Global_4267379, iParam0))
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

int func_226(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_237(14) && !func_236(iParam1))
	{
		return 0;
	}
	if (func_233(uParam0, iParam1))
	{
		return 0;
	}
	if (func_232(uParam0) < 0f)
	{
		func_231(uParam0, 0);
	}
	func_229(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_227(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_227(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_237(14) && !func_236(iParam1))
	{
		return 0;
	}
	if (func_233(uParam0, iParam1))
	{
		return 0;
	}
	if (func_232(uParam0) < 0f)
	{
		func_231(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_228(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_228(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_229(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_230(uParam0, iVar0);
		iVar0++;
	}
	func_231(uParam0, (Global_4267378 - 0.5f));
}

void func_230(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_231(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_232(var uParam0)
{
	return uParam0->f_80;
}

bool func_233(var uParam0, int iParam1)
{
	return func_234(uParam0, iParam1) != -1;
}

int func_234(var uParam0, int iParam1)
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
	return -1;
}

bool func_235(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_236(int iParam0)
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

bool func_237(int iParam0)
{
	return Global_35861 == iParam0;
}

int func_238(int iParam0, int iParam1)
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
	iVar0 = PLAYER::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_240()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53077[0] == iVar0)
		{
			Global_53077[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53077[1] == iVar0)
		{
			Global_53077[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53077[2] == iVar0)
		{
			Global_53077[2] = iVar0;
		}
	}
}

void func_241(int iParam0, int iParam1, int iParam2)
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
		func_216((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = iParam2;
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
		func_242();
	}
}

void func_242()
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
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!MISC::IS_BIT_SET(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_104278, 0);
					MISC::SET_BIT(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_104291, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_104274, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_104292, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_104275, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_104293, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_104276, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_104294, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_104277, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_104281, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_104298, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_104299, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_104555.f_10164.f_3853))
	{
		func_238(13, SYSTEM::FLOOR(Global_104555.f_10164.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_70856)
		{
			if (func_243() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_205();
				}
			}
		}
	}
}

int func_243()
{
	return Global_25233;
}

void func_244(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_104555.f_9055.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_104555.f_9055.f_99.f_58[iParam0] = iParam1;
}

int func_245(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_246(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_25578[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_25578[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_25578[iVar0 /*23*/].f_11), 20);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	MISC::SET_BIT(&(Global_25578[iVar0 /*23*/].f_11), 20);
}

bool func_247(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_603, iParam1);
}

int func_248()
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_249(vector3 vParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar18;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = 0;
	bVar2 = PED::IS_PED_INJURED(iVar0);
	if (bVar2)
	{
		*iParam3 = 2;
		return;
	}
	iVar3 = PED::GET_PED_PARACHUTE_STATE(iVar0);
	iVar4 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
	bVar5 = ENTITY::IS_ENTITY_IN_AIR(iVar0);
	bVar6 = PED::IS_PED_RAGDOLL(iVar0);
	bVar7 = ENTITY::DOES_ENTITY_EXIST(iParam1);
	bVar8 = (bVar7 && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, iParam1));
	bVar9 = ((bVar7 && !PED::IS_PED_INJURED(iParam2)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam2));
	bVar10 = (bVar7 && VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1));
	bVar11 = ((bVar10 && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_410(vParam0));
	if (bVar12)
	{
		vVar13 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		vVar14 = { vVar13 - vParam0 };
		fVar15 = SYSTEM::SQRT(((vVar14.x * vVar14.x) + (vVar14.y * vVar14.y)));
		*fParam5 = fVar15;
		if ((vVar14.z < 5f && vVar14.z > -2f) && fVar15 < 15f)
		{
			*uParam4 = func_252(SYSTEM::CEIL(((100f * (15f - fVar15)) / 15f)) + 4, 0, 100);
			*iParam3 = 1;
		}
		else
		{
			*iParam3 = 3;
		}
	}
	if (bVar7)
	{
		if (func_250(iParam1, iParam2))
		{
			*fParam5 = 0f;
			*uParam4 = 100;
			*iParam3 = 1;
		}
		else
		{
			*uParam4 = 0;
			*iParam3 = 3;
		}
	}
	if (bVar10)
	{
		VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar16);
		vVar17 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		vVar18 = { ENTITY::GET_ENTITY_COORDS(iVar16, 1) };
	}
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (func_351(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar4);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, &iVar0);
			if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0)) || ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1)))
			{
				if (vVar2.z < vVar3.z)
				{
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
				{
					return 1;
				}
				else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0))
				{
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
					vVar5.x = func_251((MISC::ABSF(vVar5.x) - 1.305f), 0f);
					if (vVar5.y >= 0f)
					{
						vVar5.y = func_251((vVar5.y - 5.98f), 0f);
					}
					else
					{
						vVar5.y = func_251((-vVar5.y - 6.21f), 0f);
					}
					if (vVar5.y == 0f && vVar5.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_251(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_252(int iParam0, int iParam1, int iParam2)
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

void func_253(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;
	
	if (!func_441(&iParam1))
	{
		return;
	}
	fVar0 = func_440(&iParam1);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	GRAPHICS::DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
}

void func_254(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_352(uParam1);
	if (func_444(func_445(iParam2)))
	{
		if (!func_247(iParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_324("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_351(iVar0))
				{
					func_324("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_324("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_324("BJ_MG_STOBJ", 7500, 1);
			}
			func_207(iParam0, 0, 1);
		}
	}
	if (func_321("BJ_FALLHLP") && Global_17162.f_135)
	{
		HUD::CLEAR_HELP(1);
		func_207(iParam0, 1, 0);
	}
	if (!func_247(iParam0, 1) && !Global_17162.f_135)
	{
		HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
		HUD::CLEAR_HELP(1);
		func_322("BJ_FALLHLP", -1);
		func_207(iParam0, 1, 1);
	}
	else if (!func_247(iParam0, 2))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
		{
			HUD::CLEAR_HELP(1);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				func_322("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_322("BJ_PARAHLP", 10000);
			}
			func_207(iParam0, 2, 1);
		}
	}
	else if (!func_247(iParam0, 3))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3)
		{
			HUD::CLEAR_HELP(1);
			func_207(iParam0, 3, 1);
		}
	}
}

void func_255(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID())))
		{
			vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0) };
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PLAYER::PLAYER_PED_ID(), 1) };
		}
		fVar7 = vVar0.y;
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		vVar1.z = 0f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
		vVar2.z = 0f;
		vVar6 = { ENTITY::GET_ENTITY_VELOCITY(*iParam0) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		ENTITY::GET_ENTITY_MATRIX(*iParam0, &vVar3, &uVar5, &uVar5, &uVar5);
		vVar3.z = 0f;
	}
	vVar4 = { vVar1 - vVar2 };
	vVar4.z = 0f;
	fVar9 = MISC::ABSF(func_259(vVar4, vVar3));
	if (func_258(*iParam0))
	{
		fVar8 = func_46((fVar7 - (fVar9 / fVar7)), 2f, 3f);
	}
	else
	{
		fVar8 = func_46((fVar7 + (fVar9 / fVar7)), 3f, 10f);
	}
	fVar10 = func_46(func_256(vVar6.y, fVar8, 0.5f), vVar6.y, fVar7);
	vVar6.y = func_256(vVar6.y, fVar8, 0.5f);
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)) && vVar6.y > 2f) && vVar6.y < VEHICLE::_0x53AF99BAA671CA47(*iParam0))
	{
		BRAIN::SET_DRIVE_TASK_MAX_CRUISE_SPEED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, 0), fVar10);
	}
}

float func_256(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_257((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_257(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_258(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
	}
	vVar3 = { vVar0 - vVar1 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_259(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_259(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_260(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

Vector3 func_261(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_262(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_262(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_263(int iParam0, var uParam1)
{
	var uVar0[6];
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	if (!func_441(iParam0))
	{
		func_465(iParam0);
	}
	if (func_440(iParam0) < 1f)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar4 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0)) && !PED::IS_PED_INJURED((*uParam1)[iVar5]))
		{
			if (func_265((*uParam1)[iVar5], &uVar0) == -1)
			{
				func_264(uParam1[iVar5]);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5], 1) };
				fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
				if (vVar2.z * vVar2.z) < (3f * fVar3)
				{
					func_264(uParam1[iVar5]);
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if ((((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar5]) && !ENTITY::IS_ENTITY_DEAD(uVar0[iVar5], 0)) && !PED::IS_PED_INJURED(uVar0[iVar5])) && PED::IS_PED_HUMAN(uVar0[iVar5])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar5], 1))
			{
				if (func_265(uVar0[iVar5], uParam1) == -1)
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uVar0[iVar5], 1) };
					fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
					if (vVar2.z * vVar2.z) > (3f * fVar3)
					{
						bVar7 = false;
						iVar6 = 0;
						while (iVar6 < *uParam1)
						{
							if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar6]) || PED::IS_PED_INJURED((*uParam1)[iVar6]))
							{
								(*uParam1)[iVar6] = uVar0[iVar5];
								BRAIN::OPEN_SEQUENCE_TASK(&iVar1);
								BRAIN::TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
								BRAIN::TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
								BRAIN::CLOSE_SEQUENCE_TASK(iVar1);
								BRAIN::TASK_PERFORM_SEQUENCE(uVar0[iVar5], iVar1);
								BRAIN::CLEAR_SEQUENCE_TASK(&iVar1);
								iVar6 = *uParam1;
								bVar7 = true;
							}
							iVar6++;
						}
						if (!bVar7)
						{
							return;
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_264(var uParam0)
{
	BRAIN::CLEAR_PED_TASKS(*uParam0);
	BRAIN::TASK_PLAY_ANIM(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_265(int iParam0, var uParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_266(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	VEHICLE::_0xE30524E1871F481D(*uParam36);
	func_360();
	func_359();
	func_475();
	func_41(&(iParam2->f_26));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = -1;
	*uParam29 = 0;
	*bParam30 = 0;
	func_311(iParam2);
	if (func_441(iParam24))
	{
		func_437(iParam24);
	}
	if (func_441(iParam23))
	{
		func_437(iParam23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
	{
		if (func_351(func_352(uParam0)))
		{
			VEHICLE::DELETE_MISSION_TRAIN(iParam7);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam7, 0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::DELETE_PED(&iVar1);
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam5)[iVar2]) && !ENTITY::IS_ENTITY_DEAD((*iParam5)[iVar2], 0))
		{
			BRAIN::CLEAR_PED_TASKS((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam8))
	{
		VEHICLE::DELETE_VEHICLE(iParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam9))
	{
		if (!func_310(*iParam9) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam9, -1, 0)))
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam9, -1, 0);
			PED::DELETE_PED(&iVar3);
		}
		VEHICLE::DELETE_VEHICLE(iParam9);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam4);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1) + Vector(0f, 0f, 2f), 1, false, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam6) && iVar0 == *iParam6)
			{
				VEHICLE::SET_PLAYERS_LAST_VEHICLE(*iParam6);
				func_270(*iParam6, func_309(iParam20), func_308(iParam20), 24, 0);
				ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
				ENTITY::SET_ENTITY_COORDS(iVar0, func_309(iParam20), 1, false, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				ENTITY::SET_ENTITY_HEADING(iVar0, func_308(iParam20));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
				}
				VEHICLE::DELETE_VEHICLE(&iVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > -1)
	{
		GRAPHICS::DELETE_CHECKPOINT(*iParam11);
		GRAPHICS::DELETE_CHECKPOINT(*iParam12);
		*iParam16 = -1;
	}
	if (HUD::DOES_BLIP_EXIST(iParam13))
	{
		HUD::REMOVE_BLIP(&iParam13);
	}
	if (HUD::DOES_BLIP_EXIST(iParam14))
	{
		HUD::REMOVE_BLIP(&iParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam10)[iVar4]) && !ENTITY::IS_ENTITY_DEAD((*iParam10)[iVar4], 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER((*iParam10)[iVar4], 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*iParam10)[iVar4], false, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_269(iParam2);
	*iParam3 = 0;
	func_268();
	func_267();
	CAM::DO_SCREEN_FADE_OUT(800);
}

void func_267()
{
	Global_25377 = 1;
}

void func_268()
{
	int iVar0;
	
	Local_98.f_66 = -1;
	Local_98.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_98.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_5 = 0;
		Local_98.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_98.f_5 = 0;
	Local_98.f_5.f_1 = -1f;
	Local_98.f_5.f_2 = 0;
	Local_98 = 0;
	Local_98.f_1 = 0;
}

void func_269(int iParam0)
{
	iParam0->f_603 = 0;
}

void func_270(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_69678.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_307(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_302(iParam0, &Var0);
		if (func_301(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_294(iParam3, &Var0, vParam1, fParam2, func_300(iParam0));
		func_271(iParam3, iParam0, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_291(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_499();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_290(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_272(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_273(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
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
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_302(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_273(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_288(iParam0, 0, 0)) || func_288(iParam0, 1, 0)) || func_288(iParam0, 2, 0)) || func_300(iParam0) != 145) || func_287(iParam0)) || func_286(iParam0)) || func_285(iParam0)) || func_284(iParam0)) || !func_274(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_286(iParam0))
		{
		}
		if (func_286(iParam0))
		{
		}
		if (func_288(iParam0, 0, 0))
		{
		}
		if (func_288(iParam0, 1, 0))
		{
		}
		if (func_288(iParam0, 2, 0))
		{
		}
		if (func_300(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_274(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_275(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_275(int iParam0, bool bParam1)
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
	if ((((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blista3"))
	{
		if (!func_283())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_282() && !func_281()) && !func_280()) && !func_279()) && !func_283())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_280())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_278(iParam0))
		{
			return 0;
		}
	}
	if (!func_276(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_277())
	{
		return 1;
	}
	NETSHOP::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_277()
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_279()
{
	return 0;
}

int func_280()
{
	return 1;
}

int func_281()
{
	return 1;
}

int func_282()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_283()
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

int func_284(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_275(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_90309[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_90309[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_288(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_289(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_104555.f_7199[iVar2], 0))
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

int func_289(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_290(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

int func_291(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_292(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_292(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_292(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_292(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_292(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_292(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
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
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
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
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
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
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
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
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
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
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
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
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
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
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
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
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
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
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
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
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
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
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
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
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
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
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
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
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
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
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_283())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
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
			if (func_283())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
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
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
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
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_301(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_301(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_301(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_292(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_293(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_293(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_294(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_291(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_299(iParam0);
			func_298(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
			if (MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 11))
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_295(iParam0, 1);
		}
	}
}

void func_295(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_297(iParam0, 0))
		{
			func_296(iParam0, 1, 0);
			func_296(iParam0, 2, 0);
			func_296(iParam0, 3, 0);
			func_296(iParam0, 4, 0);
			func_296(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_296(iParam0, 0, 0);
	}
}

void func_296(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

bool func_297(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_104555.f_32429[iParam0], iParam1);
}

void func_298(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_299(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_291(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_69678.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_69678.f_139[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_295(iParam0, 0);
		}
	}
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_301(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_302(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_306(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_305(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_304(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_303(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_303(int iParam0)
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

int func_304(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
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
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
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

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_306(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
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
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_307(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_299(iParam0);
	func_295(iParam0, 0);
}

float func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 192.1528f;
		
		case 1:
			return 144.2205f;
		
		case 2:
			return 82.0341f;
		
		case 3:
			return 134.9389f;
		
		case 4:
			return 241.8704f;
		
		case 5:
			return 342.318f;
		
		case 6:
			return 174.9318f;
		
		case 7:
			return 186.4915f;
		
		case 8:
			return 93.0806f;
		
		case 9:
			return 213.7284f;
		
		case 10:
			return 55.5964f;
		
		case 11:
			return 61.2421f;
		
		case 12:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_310(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
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

void func_311(int iParam0)
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_12[0] = 0;
	iParam0->f_12[1] = 0;
	iParam0->f_12[2] = 0;
	iParam0->f_12[3] = 0;
	iParam0->f_12[4] = 0;
	iParam0->f_12[5] = 0;
	iParam0->f_12[6] = 0;
	iParam0->f_12[7] = 0;
	iParam0->f_3[0] = 358;
	iParam0->f_3[1] = 358;
	iParam0->f_3[2] = 358;
	iParam0->f_3[3] = 358;
	iParam0->f_3[4] = 358;
	iParam0->f_3[5] = 358;
	iParam0->f_3[6] = 358;
	iParam0->f_3[7] = 358;
	iParam0->f_21[0] = 0;
	iParam0->f_21[1] = 0;
	iParam0->f_21[2] = 0;
	iParam0->f_21[3] = 0;
}

int func_312(var uParam0, int iParam1, int iParam2)
{
	if ((MISC::GET_GAME_TIMER() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_5 = MISC::GET_GAME_TIMER();
	if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > iParam2)
	{
		if (MISC::IS_BIT_SET(uParam0->f_2, iParam1) && !MISC::IS_BIT_SET(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

int func_313(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0:
			if (func_440(iParam1) >= 0f)
			{
				vParam4.z = func_46(vParam4.z, -8.909f, 8.909f);
				uParam5->f_2 = (uParam5->f_2 + vParam4.z);
				vVar0 = { func_442(vParam3, vParam4.z) };
				CAM::SET_CAM_PARAMS(func_412(uParam0, 0), vParam2 + vVar0, *uParam5, *uParam6, 300, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(func_412(uParam0, 1), func_412(uParam0, 0), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_440(iParam1) >= 0f)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(false, true, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_440(iParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_314(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = func_412(uParam1, 0);
	iVar2 = func_412(uParam1, 1);
	CAM::SET_CAM_NEAR_CLIP(iVar2, func_315());
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, -0.3f, -7.7824f) };
	CAM::SET_CAM_COORD(iVar2, vVar3);
	vVar0 = { CAM::GET_CAM_ROT(iVar1, 2) };
	vVar0.x = 0f;
	CAM::SET_CAM_ROT(iVar2, vVar0, 2);
	CAM::SET_CAM_FOV(iVar2, CAM::GET_CAM_FOV(iVar1));
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_355(iParam2);
}

float func_315()
{
	if (MISC::IS_PC_VERSION())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_316(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = func_412(uParam1, 0);
	vVar1 = { func_319(uParam2) };
	if (PAD::IS_LOOK_INVERTED())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * MISC::GET_FRAME_TIME()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * MISC::GET_FRAME_TIME()) * 100f));
		if (MISC::ABSF(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * MISC::GET_FRAME_TIME()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (MISC::ABSF(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * MISC::GET_FRAME_TIME()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * MISC::GET_FRAME_TIME()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * MISC::GET_FRAME_TIME()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar2 = { func_442(vParam7, uParam4->f_2) };
	CAM::SET_CAM_COORD(iVar0, vParam6 + vVar2);
	CAM::SET_CAM_ROT(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_443(uParam0)) + uParam4->f_2), 2);
	CAM::SET_CAM_NEAR_CLIP(iVar0, func_315());
	if (!CAM::IS_SCREEN_FADED_IN() || !func_441(iParam3))
	{
		func_355(iParam3);
	}
	else
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			func_318("BJ_VLOOKHLP");
		}
		if (func_441(iParam3) && func_440(iParam3) > 0.5f)
		{
			if (func_317(uParam2, 1))
			{
				func_437(iParam3);
				CAM::DETACH_CAM(iVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_317(var uParam0, int iParam1)
{
	return (MISC::IS_BIT_SET(uParam0->f_2, iParam1) && !MISC::IS_BIT_SET(uParam0->f_3, iParam1));
}

void func_318(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

Vector3 func_319(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_320(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, false, 0, 1);
	}
}

int func_321(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_322(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_323(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_207(uParam0, 20, 0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_207(uParam0, 20, 0);
	}
}

void func_324(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

struct<4> func_325(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_326(int iParam0, float fParam1)
{
	if (!func_441(iParam0))
	{
		func_39(iParam0, fParam1);
	}
}

void func_327(int iParam0, int iParam1)
{
	if (func_441(iParam0))
	{
		if (func_329(iParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_203(PLAYER::PLAYER_PED_ID(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_328())
	{
		func_326(iParam0, 0f);
	}
}

int func_328()
{
	if (Global_15756 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, float fParam1)
{
	if (func_330(iParam0, fParam1))
	{
		func_437(iParam0);
		return 1;
	}
	return 0;
}

int func_330(int iParam0, float fParam1)
{
	if (func_441(iParam0))
	{
		if (func_440(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_331(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), -1, false, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 66, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 67, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	}
}

int func_332(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	vVar4 = { func_353(uParam0, *iParam6) };
	bVar15 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &vVar0, &uVar1, &uVar2, &vVar3);
	}
	if (bVar15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, func_354(uParam0)) };
			fVar14 = (vVar9.z - vVar4.z);
			if (bParam20)
			{
				if (HUD::DOES_BLIP_EXIST(*iParam11))
				{
					HUD::SET_BLIP_COORDS(*iParam11, vVar9);
				}
				else
				{
					*iParam11 = HUD::ADD_BLIP_FOR_COORD(vVar9);
					HUD::SET_BLIP_COLOUR(*iParam11, 5);
					HUD::SET_BLIP_SCALE(*iParam11, 1.2f);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam11, "BJ_BLIP_TGT");
				}
			}
			vVar10 = { func_353(uParam0, 0) };
			vVar9.z = (vVar10.z + fVar14);
			vVar4 = { vVar9 };
		}
		else if (func_352(uParam0) != 0)
		{
			vVar9 = { func_353(uParam0, 0) };
			vVar4 = { vVar9 };
		}
		else
		{
			vVar9 = { vVar4 };
		}
		vVar6 = { vVar3 - vVar4 };
		if (func_352(uParam0) == 0)
		{
			GRAPHICS::DRAW_MARKER(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_341(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, false);
			GRAPHICS::DRAW_MARKER(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_341(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, false);
			GRAPHICS::DRAW_MARKER(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_341(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, false);
		}
		if (*iParam7 != -1)
		{
			GRAPHICS::DELETE_CHECKPOINT(*iParam4);
			*iParam7 = -1;
		}
	}
	else
	{
		HUD::GET_HUD_COLOUR(134, &iVar17, &iVar18, &iVar19, &uVar20);
		vVar6 = { vVar3 - vVar4 };
		vVar5 = { func_353(uParam0, *iParam6 + 1) };
		GRAPHICS::DRAW_MARKER(6, vVar4, func_454(vVar6), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_341(vVar4, 25, 200), 0, 0, 2, 0, 0, 0, false);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(*iParam4);
				*iParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					GRAPHICS::DELETE_CHECKPOINT(*iParam5);
					*iParam4 = 0;
				}
			}
			*iParam4 = GRAPHICS::CREATE_CHECKPOINT(15, vVar4, vVar5, 9f, iVar17, iVar18, iVar19, func_341(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*iParam5 = GRAPHICS::CREATE_CHECKPOINT(15, vVar5, func_353(uParam0, *iParam6 + 2), (9f * 0.5f), iVar17, iVar18, iVar19, func_341(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			GRAPHICS::DRAW_MARKER(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_341(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, false);
			GRAPHICS::DRAW_MARKER(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_341(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, false);
			GRAPHICS::DRAW_MARKER(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_341(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, false);
		}
		else
		{
			GRAPHICS::DRAW_MARKER(6, vVar5, func_454(vVar3 - vVar5), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_341(vVar5, 25, 200), 0, 0, 2, 0, 0, 0, false);
		}
		if (*iParam4 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(*iParam4, iVar17, iVar18, iVar19, func_341(vVar4, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
		if (*iParam5 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(*iParam5, iVar17, iVar18, iVar19, func_341(vVar5, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1) || (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2 && !PAD::IS_CONTROL_PRESSED(0, 80)))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &uVar21, &uVar22))
		{
			if (iLocal_543)
			{
				func_339(vVar4, uParam15, uParam16, uParam17);
				if (func_441(&iLocal_545))
				{
					func_437(&iLocal_545);
				}
			}
			else if (func_441(&iLocal_545))
			{
				if (func_337(&iLocal_545) > 0.5f)
				{
					func_437(&iLocal_545);
					iLocal_543 = 1;
				}
			}
			else
			{
				func_465(&iLocal_545);
			}
		}
		else if (iLocal_543)
		{
			func_339(vVar4, uParam15, uParam16, uParam17);
			if (func_441(&iLocal_545))
			{
				if (func_337(&iLocal_545) > 0.5f)
				{
					func_437(&iLocal_545);
					iLocal_543 = 0;
				}
			}
			else
			{
				func_465(&iLocal_545);
			}
		}
		else if (func_441(&iLocal_545))
		{
			func_437(&iLocal_545);
		}
	}
	else
	{
		iLocal_543 = 0;
	}
	if (func_336(iParam14, uParam18, &iParam1))
	{
		if (HUD::DOES_BLIP_EXIST(*iParam11))
		{
			HUD::REMOVE_BLIP(iParam11);
		}
		if (HUD::DOES_BLIP_EXIST(*iParam12))
		{
			HUD::REMOVE_BLIP(iParam12);
		}
		if (!bVar15)
		{
			return 2;
		}
		fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
		if (((vVar6.z < 5f && vVar6.z > -2f) && fVar12 < 15f) || func_250(iParam1, iParam2))
		{
			*uParam10 = func_252(SYSTEM::CEIL(((100f * (15f - fVar12)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_335())
	{
		if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
		}
	}
	else if (!bVar15)
	{
		fVar11 = SYSTEM::VMAG2(vVar6);
		if (fVar11 < (22f * 22f))
		{
			if (fVar11 < (10f * 10f))
			{
				bVar16 = true;
			}
			else if (func_259(vVar0, -vVar6 / FtoV(SYSTEM::SQRT(fVar11))) < 0.08f)
			{
				bVar16 = true;
			}
			if (bVar16)
			{
				*uParam8++;
				func_334(iParam13, 1);
				func_209(func_407(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				iLocal_544 = 0;
			}
			if (!bVar16 && !iLocal_544)
			{
				iLocal_544 = 1;
			}
		}
		else if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
		{
			if (vVar6.z < -22f)
			{
				func_334(iParam13, 0);
				bVar16 = true;
			}
		}
		else
		{
			vVar8 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
			vVar8.z = 0f;
			vVar8 = { func_454(vVar8) };
			vVar7 = { -vVar6.x, -vVar6.y, 0f };
			vVar7 = { func_454(vVar7) };
			fVar13 = ((vVar3.z - 32f) + (32f * func_333(vVar8, vVar7)));
			fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
			if ((vVar3.z - fVar13) < fVar12)
			{
				fVar13 = (fVar13 - (0.05f * ((fVar13 - vVar3.z) + fVar12)));
				if (fVar13 < (vVar4.z - 22f))
				{
					func_334(iParam13, 0);
					bVar16 = true;
				}
			}
		}
		if (iLocal_544)
		{
			if (SYSTEM::VMAG2(vVar6) >= (22f * 22f))
			{
				*uParam8++;
				func_334(iParam13, 1);
				func_209(func_407(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bVar16 = true;
				iLocal_544 = 0;
			}
		}
		if (bVar16)
		{
			*iParam6++;
			if (HUD::DOES_BLIP_EXIST(*iParam11))
			{
				HUD::REMOVE_BLIP(iParam11);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam12))
			{
				*iParam11 = *iParam12;
				*iParam12 = 0;
				HUD::SET_BLIP_SCALE(*iParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam11, "BJ_BLIP_TGT");
				}
				else
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam12))
				{
					*iParam12 = HUD::ADD_BLIP_FOR_COORD(func_353(uParam0, *iParam6 + 1));
					HUD::SET_BLIP_COLOUR(*iParam12, 5);
					HUD::SET_BLIP_SCALE(*iParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam12, "BJ_BLIP_TGT");
					}
					else
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*iParam12 = 0;
			}
			BRAIN::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), func_353(uParam0, *iParam6), -1, 0, 2);
		}
	}
	return 0;
}

float func_333(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

void func_334(var uParam0, bool bParam1)
{
	*uParam0 = AUDIO::GET_SOUND_ID();
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", true);
	}
	else
	{
		func_324("BJ_MISSED", 7500, 1);
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", true);
	}
}

int func_335()
{
	if (((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 50f) && !PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_336(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!*uParam1)
	{
		iVar1 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
		if (iVar1 != -1 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == 3 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == -1 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (((ENTITY::DOES_ENTITY_EXIST(*iParam2) && !PED::IS_PED_INJURED(iVar0)) && !ENTITY::IS_ENTITY_DEAD(*iParam2, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, *iParam2)));
}

float func_337(int iParam0)
{
	if (func_441(iParam0))
	{
		if (func_338(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_40(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

bool func_338(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_339(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_340(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam3 || (*uParam1 == 0f && *uParam2 == 0f)) || (MISC::ABSF((fVar2 - *uParam1)) < 0.04f && MISC::ABSF((fVar3 - *uParam2)) < 0.04f))
		{
			GRAPHICS::DRAW_SPRITE("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam3 = fVar4;
	}
	*uParam1 = fVar2;
	*uParam2 = fVar3;
}

void func_340(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_301(vParam0, 0f, 0f, 0f, 0))
	{
		HUD::_GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.y = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.y = (0.5f - fVar1);
	}
	vVar2.z = 0f;
	func_454(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.y = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*uParam1 = fVar0;
	*uParam2 = fVar1;
}

int func_341(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

void func_342(int iParam0)
{
	if (func_441(iParam0) && func_440(iParam0) > 7.5f)
	{
		func_437(iParam0);
	}
}

int func_343(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		*uParam2 = 1;
		return 1;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			return 0;
		}
		else if (!MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iVar0, 1), &fVar3, 0, 0))
		{
			return 0;
		}
		else if (vVar1.z >= (fVar3 + 1.5f))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar3, 0, 0))
	{
		return 0;
	}
	else if (vVar1.z >= (fVar3 + 1.5f))
	{
		return 0;
	}
	vVar2 = { func_353(uParam0, 0) };
	if (vVar1.z < (vVar2.z + 5f))
	{
		*uParam2 = 1;
		return 1;
	}
	if (iParam1 == 5)
	{
		if (vVar1.z < 288f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (vVar1.z < 305f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 8)
	{
		if (vVar1.z < 227f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 6 || iParam1 == 12)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_452(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_344()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_345(var uParam0)
{
	return uParam0->f_84;
}

void func_346(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
	fVar4 = VEHICLE::_0x53AF99BAA671CA47(*iParam0);
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
	BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
	if (!bParam1)
	{
		BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 4, 0f, 786469, 2f, 0f, 1);
	}
	BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, vVar2 + Vector(5f, 5f, 5f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar4), 786469, 5f, 10f, 1);
	vVar3 = { Vector(1000f, 1000f, 1000f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar3.z = 200f;
	BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, vVar2 + vVar3, 4, fVar4, 262144, 15f, 10f, 1);
	BRAIN::CLOSE_SEQUENCE_TASK(iVar0);
	BRAIN::CLEAR_PED_TASKS(iVar1);
	BRAIN::TASK_PERFORM_SEQUENCE(iVar1, iVar0);
	BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_347(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_348(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_397(0, 1, iParam2, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_537(23, 0);
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("ruffian"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("cruiser"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("pcj"):
		case joaat("policeb"):
			return 1;
		
		default:
	}
	return 0;
}

int func_350(var uParam0)
{
	return *uParam0;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case joaat("freight"):
		case joaat("metrotrain"):
			return 1;
		
		default:
	}
	return 0;
}

int func_352(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_353(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_12[iParam1 /*3*/];
}

Vector3 func_354(var uParam0)
{
	return uParam0->f_6;
}

void func_355(int iParam0)
{
	func_39(iParam0, 0f);
}

int func_356(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_357(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_358(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_359()
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_360()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_361(&(Global_1835013.f_73));
	func_361(&(Global_1835013.f_142));
	func_361(&(Global_1835013.f_211));
	func_361(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_127(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_361(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

bool func_362(var uParam0)
{
	return uParam0->f_83;
}

int func_363(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11, var uParam12)
{
	if (CAM::IS_CAM_INTERPOLATING(func_412(uParam3, 1)))
	{
		func_355(iParam5);
	}
	if (!*uParam10)
	{
		if (func_441(iParam7) && func_440(iParam7) >= func_384(uParam0))
		{
			func_346(iParam2, 0);
			func_437(iParam7);
			*uParam10 = 1;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
	{
		VEHICLE::SET_HELI_BLADES_SPEED(*iParam2, 0.7f);
	}
	if (func_441(iParam5) && func_440(iParam5) > 0.2f)
	{
		func_437(iParam5);
		func_437(iParam6);
		return 1;
	}
	if (!func_441(iParam6))
	{
		func_465(iParam6);
	}
	else if ((uParam12 && CAM::IS_SCREEN_FADED_IN()) || (func_440(iParam6) > 0.5f && func_317(uParam4, 2)))
	{
		*uParam11 = 1;
		func_437(iParam5);
		func_437(iParam6);
		return 1;
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (func_441(iParam8))
	{
		if (func_445(iParam1) != 0)
		{
			func_437(iParam8);
		}
		else if (func_440(iParam8) > func_405(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, -1, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, -1, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "playidles_cold", "blow_hands", 8f, -1.4f, -1, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_437(iParam8);
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_364();
	}
	else
	{
		func_355(iParam6);
	}
	return 0;
}

void func_364()
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_104555.f_18937;
	func_365(Var0, 0, 0, 0, 0, iVar1);
}

void func_365(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_71110 != 6)
	{
		if (Global_71112 == -1)
		{
			if (func_379(1, Param0))
			{
				if (Global_71113 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_71112 = MISC::GET_GAME_TIMER();
					vLocal_22 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_379(0, Param0))
			{
				Global_71112 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_71112);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_71110)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = func_407();
				if (Global_71113 == 1 && Global_71111 == 62)
				{
					iVar11 = Global_104555.f_2353.f_539.f_4302;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { func_368(Global_71111, Global_71113, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_367(&Var4) > fLocal_24)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_71115 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::_SCREEN_DRAW_POSITION_END();
				if (Global_71114 == 1)
				{
					func_366();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_366();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_366()
{
	if (Global_71110 != 6)
	{
	}
	if (Global_71115)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_71115 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71110 = 6;
	Global_71112 = -1;
	Global_71111 = -1;
}

float func_367(char* sParam0)
{
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

struct<2> func_368(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_378(iParam0) };
			break;
		
		case 7:
			Var0 = { func_376(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_375(iParam2) };
					break;
				
				case 8:
					Var0 = { func_374(iParam2) };
					break;
				
				case 7:
					Var0 = { func_373(iParam2) };
					break;
				
				case 10:
					Var0 = { func_372(iParam2) };
					break;
				
				case 5:
					Var0 = { func_371(iParam2) };
					break;
				
				case 4:
					Var0 = { func_370(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_369(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_370(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_371(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_372(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_373(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_374(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_375(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_376(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_377(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_377(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_378(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83766[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104555.f_9055.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_379(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_381(0) || Global_71125) || Global_71114 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_71110)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_71110 = 3;
			}
			else
			{
				Global_71110 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_71110 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_71110 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_71110 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_71110 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71110 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_30(0)) || func_380(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_380(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_381(int iParam0)
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_382(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_382(int iParam0)
{
	return func_383(iParam0, Global_35861);
}

int func_383(int iParam0, int iParam1)
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

float func_384(var uParam0)
{
	return uParam0->f_80;
}

int func_385(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_394(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_386(sParam2, iParam3, 0);
}

int func_386(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_393();
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
		if (func_392(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_391();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			MISC::CLEAR_BIT(&Global_2323, 20);
			MISC::CLEAR_BIT(&Global_2324, 17);
			MISC::CLEAR_BIT(&Global_2325, 0);
			if (bParam2)
			{
				func_390();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_389())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (MISC::IS_BIT_SET(Global_2323, 9))
				{
					return 0;
				}
			}
			func_388();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_387();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_393();
	}
	return 0;
}

void func_387()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15756 = 1;
}

void func_388()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	MISC::CLEAR_BIT(&Global_2324, 16);
}

int func_389()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
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
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_390()
{
	if (func_237(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_407();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_391()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_392(int iParam0, int iParam1)
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

void func_393()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16767 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15756 = 6;
		return;
	}
}

void func_394(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

var func_395(var uParam0)
{
	return uParam0->f_4;
}

void func_396(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = func_412(uParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !ENTITY::IS_ENTITY_DEAD(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_443(uParam1))), SYSTEM::SIN((-97.4239f + func_443(uParam1)))) };
		*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_442(*uParam4, uParam2->f_2) };
		vVar3 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_443(uParam1)) };
		*uParam7 = 26f;
		vVar2 = { *uParam6 };
		vVar2.z = (vVar2.z + uParam2->f_2);
		CAM::SET_CAM_COORD(iVar0, vVar3);
		CAM::SET_CAM_ROT(iVar0, vVar2, 2);
		CAM::SET_CAM_FOV(iVar0, *uParam7);
		CAM::SET_CAM_NEAR_CLIP(iVar0, func_315());
	}
	CAM::SET_CAM_ACTIVE(iVar0, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
}

void func_397(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_404(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_14453.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_28())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_403(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_404(0);
		HUD::_0xE1CD1E48E025E661();
		Global_55909 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_403(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_401(PLAYER::PLAYER_ID())) && !func_399(PLAYER::PLAYER_ID(), 0)) && !func_398())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_401(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_70854 = 0;
	}
}

bool func_398()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_39.f_18, 14);
}

bool func_399(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_400(-1, 0) == 8;
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

int func_400(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_217();
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

int func_401(int iParam0)
{
	if (func_399(iParam0, 0))
	{
		return 1;
	}
	if (func_402())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_402()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_403(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_404(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2323, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2323, 13);
	}
}

float func_405(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				
				case 1:
					return 7.3f;
				
				case 2:
					return 6.8f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				
				case 1:
					return 5.5f;
				
				case 2:
					return 5f;
				
				default:
			}
			break;
		
		case 5:
			return 0f;
		
		case 6:
			return 0f;
		
		case 12:
			return 0f;
	}
	return 0f;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 3000;
		
		case 6:
			return 1500;
		
		case 12:
			return 2000;
		
		default:
	}
	return 0;
}

int func_407()
{
	func_408();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_408()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_104555.f_2353.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_36(iVar0) && (!func_237(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_36(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

float func_409(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_410(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_411(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_412(var uParam0, int iParam1)
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_413(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_27(0);
	func_397(1, 1, iParam2, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_537(23, 1);
}

void func_414(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (func_410(func_436(uParam0)))
	{
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(func_436(uParam0), func_435(uParam0), false, 1);
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (!func_410(func_353(uParam0, iVar3)))
		{
			*uParam2 = iVar3 + 1;
		}
		else
		{
			iVar3 = 999999;
		}
		iVar3++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	if (iParam13 == 4)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -89.794f, -742.6727f, 43.7472f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, -109.33f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -215.2838f, 6543.57f, 10.0967f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 145.5732f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -118.1021f, -947.3954f, 27.3296f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 341.9614f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -1237.022f, 4559.404f, 185.9418f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 172.2123f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -1351.805f, 133.95f, 55.2558f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 0.8373f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -765.8775f, 4294.807f, 145.6581f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 349.2306f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, false);
	}
	iVar0 = func_445(iParam13);
	if (iVar0 != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam3, 0) || ENTITY::DOES_ENTITY_EXIST(*iParam3))
		{
			VEHICLE::SET_VEHICLE_FIXED(*iParam3);
			ENTITY::SET_ENTITY_COORDS(*iParam3, func_452(iParam13), 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam3, func_443(uParam0));
		}
		else
		{
			*iParam3 = VEHICLE::CREATE_VEHICLE(iVar0, func_452(iParam13), func_443(uParam0), true, true, false);
		}
		if (func_444(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam8) || ENTITY::IS_ENTITY_DEAD(*iParam8, 0))
			{
				*iParam8 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam3, 26, iParam10, -1, 1, true);
				PED::SET_PED_HELMET(*iParam8, 0);
				func_434(*iParam8, iParam13);
				ENTITY::SET_ENTITY_INVINCIBLE(*iParam8, true);
			}
			CAM::_0xF4C8CF9E353AFECA("SKY_DIVING_SHAKE", 0.15f);
			func_432(uParam1, *iParam8, func_433(iParam13));
			func_429(uParam1, PLAYER::PLAYER_PED_ID(), func_431());
			VEHICLE::SET_HELI_BLADES_SPEED(*iParam3, 0.7f);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam3, true);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, 0))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, true);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, 2);
				}
				else if (func_428(PLAYER::PLAYER_PED_ID(), *iParam3) == 1)
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, 2);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam3, 0))
			{
				*iParam14 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*iParam14, *iParam3, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(*iParam3, "Chassis"));
				BRAIN::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam14, true);
			}
			func_465(iParam12);
		}
		else if (func_349(iVar0))
		{
			func_429(uParam1, PLAYER::PLAYER_PED_ID(), func_431());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, -1);
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
			func_465(iParam12);
		}
	}
	else
	{
		func_429(uParam1, PLAYER::PLAYER_PED_ID(), func_431());
		if (func_362(uParam0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_452(iParam13), 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_443(uParam0));
			BRAIN::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
			{
				iVar4 = -1;
				while (iVar4 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam3) - 1))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam3, iVar4, 0))
					{
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam3, iVar4, 0);
						PED::DELETE_PED(&iVar5);
					}
					iVar4++;
				}
				VEHICLE::DELETE_VEHICLE(iParam3);
			}
		}
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, true);
	if (func_510(uParam0) != 0)
	{
		func_424(uParam0, iParam5, iParam13);
	}
	if (func_423(uParam0) != 0)
	{
		func_420(uParam0, iParam7);
	}
	iVar0 = func_352(uParam0);
	if (func_351(iVar0))
	{
		VEHICLE::DELETE_ALL_TRAINS();
		VEHICLE::SET_RANDOM_TRAINS(0);
	}
	else if (iVar0 != 0)
	{
		MISC::CLEAR_AREA(func_353(uParam0, 0), 100f, 1, 0, 0, false);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam4) && ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
		{
			VEHICLE::DELETE_VEHICLE(iParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
		{
			*iParam4 = VEHICLE::CREATE_VEHICLE(iVar0, func_353(uParam0, 0), func_419(uParam0), true, true, false);
			if (func_418(func_352(uParam0)))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam4, 11);
			}
			else if (func_417(func_352(uParam0)))
			{
				VEHICLE::SET_VEHICLE_EXTRA(*iParam4, 1, true);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam4, 6);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam4, 2);
				VEHICLE::_0xBC3CCA5844452B06(200f);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam4, 1000);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam4, true, 1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
		{
			VEHICLE::SET_VEHICLE_FIXED(*iParam4);
			ENTITY::SET_ENTITY_COORDS(*iParam4, func_353(uParam0, 0), 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam4, func_419(uParam0));
		}
		if (func_418(func_352(uParam0)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam6) && ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
			{
				VEHICLE::DELETE_VEHICLE(iParam6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam6))
			{
				*iParam6 = VEHICLE::CREATE_VEHICLE(joaat("trflat"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam4, 0f, -10f, 0f), func_419(uParam0), true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam6, true, 1);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam6, 2000);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
			{
				VEHICLE::SET_VEHICLE_FIXED(*iParam6);
			}
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(*iParam4))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*iParam4, *iParam6, 1065353216);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam9) && ENTITY::IS_ENTITY_DEAD(*iParam9, 0))
		{
			PED::DELETE_PED(iParam9);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam9))
		{
			*iParam9 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam4, 26, iParam11, -1, 1, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam9, true, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam9, true);
			func_416(*iParam9, iParam13);
			if (iParam13 == 0)
			{
				func_415(uParam1, 2, *iParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_HEALTH(*iParam9, ENTITY::GET_ENTITY_MAX_HEALTH(*iParam9), 0);
			PED::RESET_PED_VISIBLE_DAMAGE(*iParam9);
			BRAIN::CLEAR_PED_TASKS(*iParam9);
			if (!PED::IS_PED_IN_VEHICLE(*iParam9, *iParam4, 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam4, -1, 0) != *iParam9)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam9, 1))
				{
					PED::_0xF9ACF4A08098EA25(*iParam9, 1);
				}
				PED::SET_PED_INTO_VEHICLE(*iParam9, *iParam4, -1);
			}
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam9, true, 1);
	}
	if (func_407() == 0)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
	}
	else if (func_407() == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
	}
	else if (func_407() == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
	}
}

void func_415(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
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

void func_416(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::CLEAR_PED_PROP(iParam0, 1);
			break;
		
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 1, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 2, false);
			break;
	}
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("dinghy"):
		case joaat("jetmax"):
		case joaat("marquis"):
		case joaat("squalo"):
		case joaat("suntrap"):
		case joaat("tropic"):
		case joaat("predator"):
			return 1;
		
		default:
	}
	return 0;
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hauler"):
		case joaat("biff"):
		case joaat("packer"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("phantom"):
		case joaat("pounder"):
			return 1;
		
		default:
	}
	return 0;
}

var func_419(var uParam0)
{
	return uParam0->f_77;
}

void func_420(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = VEHICLE::CREATE_VEHICLE(func_423(uParam0), func_422(uParam0), func_421(uParam0), true, true, false);
	}
	else if (ENTITY::IS_ENTITY_DEAD(*iParam1, 0))
	{
		VEHICLE::DELETE_VEHICLE(iParam1);
		*iParam1 = VEHICLE::CREATE_VEHICLE(func_423(uParam0), func_422(uParam0), func_421(uParam0), true, true, false);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(*iParam1);
	}
}

var func_421(var uParam0)
{
	return uParam0->f_79;
}

Vector3 func_422(var uParam0)
{
	return uParam0->f_9;
}

int func_423(var uParam0)
{
	return uParam0->f_3;
}

void func_424(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!func_310(*uParam1) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0)))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_427(iParam2);
	if (iVar0 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar2 = VEHICLE::CREATE_VEHICLE(func_510(uParam0), func_426(uParam0), func_425(uParam0), true, true, false);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_426(uParam0), 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar2, func_425(uParam0));
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar2, 26, iVar0, -1, 1, true);
		}
		PED::SET_PED_HELMET(iVar1, 0);
		func_434(iVar1, iParam2);
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar2 = VEHICLE::CREATE_VEHICLE(func_510(uParam0), func_426(uParam0), func_425(uParam0), true, true, false);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_426(uParam0), 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar2, func_425(uParam0));
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar2, 26, joaat("s_m_y_pilot_01"), -1, 1, true);
		}
		PED::SET_PED_HELMET(iVar1, 0);
		PED::SET_PED_PROP_INDEX(iVar1, 0, 2, 0, false);
		PED::SET_PED_PROP_INDEX(iVar1, 1, 0, 0, false);
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, 0);
	VEHICLE::SET_HELI_BLADES_SPEED(iVar2, 0.7f);
	BRAIN::CLEAR_PED_TASKS(iVar1);
	BRAIN::TASK_STAND_STILL(iVar1, -1);
	*uParam1 = iVar2;
}

var func_425(var uParam0)
{
	return uParam0->f_78;
}

Vector3 func_426(var uParam0)
{
	return uParam0->f_70;
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
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
	return -2;
}

void func_429(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_430();
	if (!PED::IS_PED_INJURED(iParam1))
	{
		func_415(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_415(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_430()
{
	if (func_407() == 1)
	{
		return 2;
	}
	if (func_407() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_431()
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		
		case 2:
			return "TREVOR";
		
		case 1:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_432(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		func_415(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_415(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_433(int iParam0)
{
	return "EXT1HELIPILOT";
}

void func_434(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 1, 2, false);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
			break;
	}
}

Vector3 func_435(var uParam0)
{
	return uParam0->f_67;
}

Vector3 func_436(var uParam0)
{
	return uParam0->f_64;
}

void func_437(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_438(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	if (!func_444(func_445(iParam3)))
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_452(iParam3));
	}
	if (func_441(iParam1))
	{
		if (func_440(iParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_326(iParam1, 0f);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 0;
		}
	}
	if (func_444(func_445(iParam3)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_405(iParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar0))
		{
			return 0;
		}
	}
	if (func_439(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam2))
		{
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("basejumping"))
				{
					if (((STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@") && STREAMING::HAS_ANIM_DICT_LOADED("skydive@freefall")) && STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@chute")) && STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@"))
					{
						if (PED::CAN_CREATE_RANDOM_PED(0))
						{
							if (!bParam5 || CAM::IS_SCREEN_FADED_OUT())
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_439(var uParam0)
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

float func_440(int iParam0)
{
	if (func_441(iParam0))
	{
		if (func_338(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_40(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_441(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

Vector3 func_442(vector3 vParam0, float fParam1)
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

float func_443(var uParam0)
{
	return uParam0->f_76;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case joaat("annihilator"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("skylift"):
			return 1;
		
		default:
	}
	return 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

void func_446(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	func_26(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_LOD_MULTIPLIER(PLAYER::PLAYER_PED_ID(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			PED::ADD_SCENARIO_BLOCKING_AREA(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			func_451(1, 1);
			break;
		
		case 9:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		MISC::CLEAR_AREA(func_452(iParam1), 5000f, 1, 0, 0, false);
	}
	HUD::REQUEST_ADDITIONAL_TEXT("BJUMP", 2);
	iVar0 = func_445(iParam1);
	if (iVar0 != 0)
	{
		if (func_444(iVar0))
		{
			STREAMING::REQUEST_ANIM_DICT("veh@helicopter@rps@base");
			*uParam3 = func_427(iParam1);
			func_449(uParam2, *uParam3);
		}
		func_449(uParam2, iVar0);
	}
	if (func_510(uParam0) != 0)
	{
		func_449(uParam2, func_510(uParam0));
		if (func_427(iParam1) != 0)
		{
			func_449(uParam2, func_427(iParam1));
		}
		else
		{
			func_449(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_352(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_448(iParam1);
		func_449(uParam2, *uParam4);
		func_449(uParam2, iVar1);
		func_449(uParam2, joaat("trflat"));
	}
	if (func_351(iVar1))
	{
		func_449(uParam2, joaat("freight"));
		func_449(uParam2, joaat("freightcar"));
		func_449(uParam2, joaat("freightgrain"));
		func_449(uParam2, joaat("freightcont1"));
		func_449(uParam2, joaat("freightcont2"));
		func_449(uParam2, joaat("tankercar"));
		func_449(uParam2, joaat("metrotrain"));
	}
	if (func_423(uParam0) != 0)
	{
		func_449(uParam2, func_423(uParam0));
	}
	*uParam5 = func_159();
	func_447(uParam2);
	STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@");
	STREAMING::REQUEST_ANIM_DICT("skydive@freefall");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@chute");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("basejumping", false);
	if (func_405(iParam1, 0) > 0f)
	{
		*uParam6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		switch (*uParam6)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_445(iParam1) == 0)
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_452(iParam1));
	}
}

void func_447(var uParam0)
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

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_m_y_beach_01");
		
		case 5:
			return joaat("s_m_m_trucker_01");
		
		case 7:
			return joaat("a_m_y_beach_01");
		
		default:
	}
	return 0;
}

int func_449(var uParam0, int iParam1)
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
	iVar1 = func_450(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_450(var uParam0)
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
	return -1;
}

void func_451(int iParam0, int iParam1)
{
	MISC::SET_BIT(&Global_25391, iParam0);
	StringCopy(&(Global_25392[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_25447[iParam0] = iParam1;
}

Vector3 func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 1:
			return 885.114f, -437.352f, 529.867f;
		
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 5:
			return -117.6998f, -975.571f, 295f;
		
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_453(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_452(iParam0), 15f, 15f, 15f, false, true, 0))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_452(iParam0), 0, false, 0, 1);
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_452(iParam0), 15f, 15f, 15f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_454(vector3 vParam0)
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

Vector3 func_455(int iParam0)
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

void func_456(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar0 = { func_464(uParam1) };
	vVar1 = { func_463(uParam1) };
	fVar2 = func_462(uParam1);
	if (!CAM::DOES_CAM_EXIST(func_412(uParam0, 0)))
	{
		func_461(uParam0, 0, CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		CAM::SET_CAM_COORD(func_412(uParam0, 0), vVar0);
		CAM::SET_CAM_ROT(func_412(uParam0, 0), vVar1, 2);
	}
	CAM::SET_CAM_FOV(func_412(uParam0, 0), fVar2);
	CAM::SET_CAM_ACTIVE(func_412(uParam0, 0), true);
	if (bParam3)
	{
		vVar3 = { vVar0 };
		vVar3.z = (vVar3.z + 8f);
		CAM::SET_CAM_PARAMS(func_412(uParam0, 0), vVar3, vVar1, fVar2, func_460(iParam2), 1, 1, 2);
	}
	vVar0 = { func_459(uParam1) };
	vVar1 = { func_458(uParam1) };
	fVar2 = func_457(uParam1);
	if (!CAM::DOES_CAM_EXIST(func_412(uParam0, 1)))
	{
		func_461(uParam0, 1, CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		CAM::SET_CAM_COORD(func_412(uParam0, 1), vVar0);
		CAM::SET_CAM_ROT(func_412(uParam0, 1), vVar1, 2);
	}
	CAM::SET_CAM_FOV(func_412(uParam0, 1), fVar2);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(func_412(uParam0, 1), func_412(uParam0, 0), func_460(iParam2), 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	CAM::_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
}

float func_457(var uParam0)
{
	return uParam0->f_82;
}

Vector3 func_458(var uParam0)
{
	return uParam0->f_58;
}

Vector3 func_459(var uParam0)
{
	return uParam0->f_55;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
			break;
	}
	return 10000;
}

void func_461(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !CAM::DOES_CAM_EXIST(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

var func_462(var uParam0)
{
	return uParam0->f_81;
}

Vector3 func_463(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_464(var uParam0)
{
	return uParam0->f_49;
}

void func_465(int iParam0)
{
	if (!func_441(iParam0))
	{
		func_355(iParam0);
	}
}

void func_466(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_291(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_69678.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_467(iVar0);
			}
		}
		iVar0++;
	}
}

void func_467(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_291(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_69678.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_69678.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_69678.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_69678.f_139[iParam0], true, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_69678.f_139[iParam0]));
			}
		}
		Global_69678[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_297(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_468(0, Global_69678.f_555[0 /*21*/].f_12) || !func_468(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_298(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_295(iParam0, 0);
		}
	}
}

int func_468(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_469(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_275(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_469(var uParam0)
{
	return *uParam0;
}

void func_470(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_103195 && iParam1)
	{
		if (func_321(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_104555.f_20380.f_145 - 2))
			{
				func_473(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_472((Global_104555.f_20380.f_145 - 1));
			Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
			func_471();
			return;
		}
		iVar0++;
	}
}

void func_471()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (MISC::IS_BIT_SET(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_472(int iParam0)
{
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104555.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_473(int iParam0, int iParam1)
{
	Global_104555.f_20380[iParam0 /*16*/] = { Global_104555.f_20380[iParam1 /*16*/] };
	Global_104555.f_20380[iParam0 /*16*/].f_4 = { Global_104555.f_20380[iParam1 /*16*/].f_4 };
	Global_104555.f_20380[iParam0 /*16*/].f_8 = Global_104555.f_20380[iParam1 /*16*/].f_8;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = Global_104555.f_20380[iParam1 /*16*/].f_10;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = Global_104555.f_20380[iParam1 /*16*/].f_9;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = Global_104555.f_20380[iParam1 /*16*/].f_11;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = Global_104555.f_20380[iParam1 /*16*/].f_12;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = Global_104555.f_20380[iParam1 /*16*/].f_13;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = Global_104555.f_20380[iParam1 /*16*/].f_14;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = Global_104555.f_20380[iParam1 /*16*/].f_15;
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		MISC::_DISABLE_AUTOMATIC_RESPAWN(1);
		MISC::SET_FADE_OUT_AFTER_DEATH(0);
		func_17(1);
		Global_88236 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		MISC::_DISABLE_AUTOMATIC_RESPAWN(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		func_17(0);
		Global_88236 = 0;
	}
}

void func_475()
{
	func_476(&uLocal_105);
}

void func_476(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_480(uParam0);
		func_479(uParam0);
		func_115(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_477();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_87(&(Global_1840922.f_49));
	}
	Global_2512808.f_3935 = 0;
}

void func_477()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_478(&(Global_1835390.f_2780));
	func_87(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_87(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_87(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_478(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_479(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_87(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_480(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_481()
{
	Global_17162.f_5 = 1;
}

void func_482(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 < 11)
	{
		if (!func_247(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				if (func_484(func_485(iParam2, 19), "", &(uParam0->f_603), 19))
				{
				}
			}
		}
		if (!func_247(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_484(func_485(iParam2, 20), func_485(iParam2, 19), &(uParam0->f_603), 20))
				{
				}
			}
		}
		else if (!func_247(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_484(func_485(iParam2, 21), func_485(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_484(func_485(iParam2, 21), func_485(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
		}
		else if (!func_247(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_484(func_485(iParam2, 22), func_485(iParam2, 21), &(uParam0->f_603), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_247(uParam0, 23))
		{
			func_483(func_485(iParam2, 22), &(uParam0->f_603), 23);
		}
		else if (!func_247(uParam0, 23) && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			AUDIO::STOP_AUDIO_SCENES();
		}
	}
}

void func_483(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(*iParam1, iParam2))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
		MISC::SET_BIT(iParam1, iParam2);
	}
}

int func_484(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
		{
			AUDIO::STOP_AUDIO_SCENE(sParam1);
		}
	}
	if (!MISC::IS_BIT_SET(*iParam2, iParam3))
	{
		if (AUDIO::START_AUDIO_SCENE(sParam0))
		{
			MISC::SET_BIT(iParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_485(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_444(func_445(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_349(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 21:
			return "BASEJUMPS_SKYDIVE";
		
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_486(var uParam0, int iParam1)
{
	if (iParam1 < 11)
	{
		if (!func_247(uParam0, 15))
		{
			if (iParam1 >= 4 && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				if (func_488(func_489(11), &(uParam0->f_603), 11))
				{
					func_487(func_489(15), &(uParam0->f_603), 15);
				}
			}
		}
		else if (!func_247(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_488(func_489(12), &(uParam0->f_603), 12))
				{
					func_487(func_489(16), &(uParam0->f_603), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_488(func_489(12), &(uParam0->f_603), 12))
				{
					func_487(func_489(16), &(uParam0->f_603), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_247(uParam0, 17))
		{
			if (func_488(func_489(13), &(uParam0->f_603), 13))
			{
				func_487(func_489(17), &(uParam0->f_603), 17);
			}
		}
	}
}

int func_487(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(*iParam1, iParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
			{
				MISC::SET_BIT(iParam1, iParam2);
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

int func_488(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(*iParam1, iParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			MISC::SET_BIT(iParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_489(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		
		case 17:
		case 13:
			return "OJBJ_LANDED";
		
		case 18:
		case 14:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_490(var uParam0)
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	PAD::_DISABLE_INPUT_GROUP(0);
	PAD::_DISABLE_INPUT_GROUP(2);
	func_497(&uVar1, &uVar2, &iVar3, &iVar4, PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), PAD::_IS_INPUT_DISABLED(2));
	Var0 = (SYSTEM::TO_FLOAT(iVar3) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar4) / -128f);
	func_494(uParam0, Var0, Var0.f_1);
	func_493(uParam0);
	if (PAD::IS_CONTROL_PRESSED(2, 224))
	{
		func_492(uParam0, 0, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(0, 22) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 22))
	{
		func_492(uParam0, 1, 1);
	}
	if (func_491())
	{
		func_492(uParam0, 2, 1);
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 22))
	{
		func_492(uParam0, 3, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 216))
	{
		func_492(uParam0, 4, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 200))
	{
		func_492(uParam0, 5, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 201))
	{
		func_492(uParam0, 6, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 202))
	{
		func_492(uParam0, 7, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 211))
	{
		func_492(uParam0, 8, 1);
	}
}

int func_491()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_492(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_2), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_2), iParam1);
	}
}

void func_493(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_494(var uParam0, var uParam1, var uParam2)
{
	func_496(uParam0, uParam1);
	func_495(uParam0, uParam2);
}

void func_495(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_496(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_497(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_CONTROL_NORMAL(0, 221);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::_0x5B84D09CEC5209C5(0, 218);
		fVar1 = PAD::_0x5B84D09CEC5209C5(0, 219);
		fVar2 = PAD::_0x5B84D09CEC5209C5(0, 220);
		fVar3 = PAD::_0x5B84D09CEC5209C5(0, 221);
	}
	else
	{
		fVar0 = PAD::_0x4F8A26A890FD62FB(0, 218);
		fVar1 = PAD::_0x4F8A26A890FD62FB(0, 219);
		fVar2 = PAD::_0x4F8A26A890FD62FB(0, 220);
		fVar3 = PAD::_0x4F8A26A890FD62FB(0, 221);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_498()
{
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 50, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

var func_499()
{
	var uVar0;
	
	func_509(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_508(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_507(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_502(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_501(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_500(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_500(var uParam0, int iParam1)
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
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_501(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_502(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_506(*uParam0);
	iVar1 = func_504(*uParam0);
	if (iParam1 < 1 || iParam1 > func_503(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_503(int iParam0, int iParam1)
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

var func_504(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_505(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_505(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_506(var uParam0)
{
	return uParam0 & 15;
}

void func_507(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_508(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_509(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_510(var uParam0)
{
	return uParam0->f_2;
}

void func_511(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_PED_ID());
	switch (iParam1)
	{
		case 0:
			func_536(uParam0, 125);
			func_535(uParam0, joaat("squalo"));
			func_534(uParam0, 41.0737f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_525(uParam0, 317.8872f);
			func_524(uParam0, 0f, -2f, 0f);
			func_523(uParam0, "BJ_01P");
			func_521(uParam0, func_522(0));
			func_520(uParam0, func_455(0));
			func_519(uParam0, 53.4142f);
			func_518(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_517(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_516(uParam0, 39.6124f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_536(uParam0, 126);
			func_535(uParam0, 0);
			func_534(uParam0, 10.5f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_526(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_526(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_526(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_02P");
			func_521(uParam0, func_522(1));
			func_520(uParam0, func_455(1));
			func_519(uParam0, 52.5984f);
			func_518(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_517(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_516(uParam0, 41.3305f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_536(uParam0, 127);
			func_535(uParam0, 0);
			func_534(uParam0, 289.2623f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_526(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_526(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_526(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_526(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_03P");
			func_521(uParam0, func_522(2));
			func_520(uParam0, func_455(2));
			func_519(uParam0, 31.9702f);
			func_518(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_517(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_516(uParam0, 50.8804f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_536(uParam0, 128);
			func_535(uParam0, 0);
			func_534(uParam0, 60.1427f);
			func_533(uParam0, joaat("frogger"));
			func_532(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_531(uParam0, 119.8889f);
			func_530(uParam0, 5f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_526(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_526(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_526(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_526(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_04F");
			}
			else
			{
				func_523(uParam0, "BJ_04T");
			}
			func_521(uParam0, func_522(3));
			func_520(uParam0, func_455(3));
			func_519(uParam0, 44.3626f);
			func_518(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_517(uParam0, -5.0705f, 0f, 20.8267f);
			func_516(uParam0, 43.8549f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_536(uParam0, 129);
			func_535(uParam0, 0);
			func_534(uParam0, 1.8891f);
			func_533(uParam0, joaat("skylift"));
			func_532(uParam0, -75.3f, -823.9f, 329.2f);
			func_531(uParam0, 150f);
			func_530(uParam0, 4f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_05F");
			}
			else
			{
				func_523(uParam0, "BJ_05T");
			}
			func_521(uParam0, func_522(4));
			func_520(uParam0, func_455(4));
			func_519(uParam0, 26.7726f);
			func_518(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_517(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_516(uParam0, 30.0131f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_536(uParam0, 130);
			func_535(uParam0, joaat("hauler"));
			func_534(uParam0, 358.9586f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_525(uParam0, -18.6f);
			func_524(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_06F");
			}
			else
			{
				func_523(uParam0, "BJ_06T");
			}
			func_521(uParam0, func_522(5));
			func_520(uParam0, func_455(5));
			func_519(uParam0, 55.7667f);
			func_518(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_517(uParam0, -7.6574f, 0f, 0.8528f);
			func_516(uParam0, 60f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_536(uParam0, 131);
			func_535(uParam0, 0);
			func_534(uParam0, 164.6178f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("blazer"));
			func_528(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_527(uParam0, 87.84f);
			func_526(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_526(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_526(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_07F");
			}
			else
			{
				func_523(uParam0, "BJ_07T");
			}
			func_521(uParam0, func_522(6));
			func_520(uParam0, func_455(6));
			func_519(uParam0, 47.1789f);
			func_518(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_517(uParam0, -13.6409f, 0f, 172.0553f);
			func_516(uParam0, 47.1789f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_536(uParam0, 132);
			func_535(uParam0, joaat("freight"));
			func_534(uParam0, 112.6f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_525(uParam0, 10.8894f);
			func_524(uParam0, 0f, -20f, 4f);
			func_523(uParam0, "BJ_08P");
			func_521(uParam0, func_522(7));
			func_520(uParam0, func_455(7));
			func_519(uParam0, 24.3623f);
			func_518(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_517(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_516(uParam0, 37.0424f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_536(uParam0, 133);
			func_535(uParam0, 0);
			func_534(uParam0, 104.207f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_09F");
			}
			else
			{
				func_523(uParam0, "BJ_09T");
			}
			func_521(uParam0, func_522(8));
			func_520(uParam0, func_455(8));
			func_519(uParam0, 50f);
			func_518(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_517(uParam0, -19.7458f, 0f, 116.6405f);
			func_516(uParam0, 55.2882f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_536(uParam0, 134);
			func_535(uParam0, 0);
			func_534(uParam0, 329.4791f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("blazer"));
			func_528(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_527(uParam0, -89.36f);
			func_526(uParam0, 0, -1200f, 3616f, 964f);
			func_526(uParam0, 1, -1240f, 3307f, 854f);
			func_526(uParam0, 2, -1552f, 3456f, 655f);
			func_526(uParam0, 3, -1616f, 3808f, 505f);
			func_526(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_526(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_526(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_526(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_10P");
			func_521(uParam0, func_522(9));
			func_520(uParam0, func_455(9));
			func_519(uParam0, 31.7648f);
			func_518(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_517(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_516(uParam0, 39.6786f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_536(uParam0, 135);
			func_535(uParam0, 0);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_526(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_526(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_526(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_526(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_526(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_526(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_526(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_526(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_526(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_11P");
			func_521(uParam0, func_522(10));
			func_520(uParam0, func_455(10));
			func_519(uParam0, 27.2187f);
			func_518(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_517(uParam0, -54.7868f, 0f, -90.128f);
			func_516(uParam0, 35.5634f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_536(uParam0, 136);
			func_535(uParam0, 0);
			func_534(uParam0, 24.92f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("sanchez"));
			func_528(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_527(uParam0, 130.39f);
			func_526(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_526(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_526(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_526(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_526(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_526(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_526(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_526(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_526(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_526(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_526(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_12P");
			func_521(uParam0, func_522(11));
			func_520(uParam0, func_455(11));
			func_519(uParam0, 18.9374f);
			func_518(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_517(uParam0, -54.5827f, 0f, -2.0463f);
			func_516(uParam0, 56.4495f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_536(uParam0, 137);
			func_535(uParam0, 0);
			func_534(uParam0, 359.2885f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("sanchez"));
			func_528(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_527(uParam0, 104.35f);
			func_526(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_526(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_13F");
			}
			else
			{
				func_523(uParam0, "BJ_13T");
			}
			func_521(uParam0, func_522(12));
			func_520(uParam0, func_455(12));
			func_519(uParam0, 48.3921f);
			func_518(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_517(uParam0, -18.0357f, 0f, 6.0212f);
			func_516(uParam0, 48.3921f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_512(var uParam0, vector3 vParam1)
{
	uParam0->f_67 = { vParam1 };
}

void func_513(var uParam0, vector3 vParam1)
{
	uParam0->f_64 = { vParam1 };
}

void func_514(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

void func_515(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_516(var uParam0, float fParam1)
{
	uParam0->f_82 = fParam1;
}

void func_517(var uParam0, vector3 vParam1)
{
	uParam0->f_58 = { vParam1 };
}

void func_518(var uParam0, vector3 vParam1)
{
	uParam0->f_55 = { vParam1 };
}

void func_519(var uParam0, float fParam1)
{
	uParam0->f_81 = fParam1;
}

void func_520(var uParam0, vector3 vParam1)
{
	uParam0->f_52 = { vParam1 };
}

void func_521(var uParam0, vector3 vParam1)
{
	uParam0->f_49 = { vParam1 };
}

Vector3 func_522(int iParam0)
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

void func_523(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_524(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = { vParam1 };
}

void func_525(var uParam0, float fParam1)
{
	uParam0->f_77 = fParam1;
}

void func_526(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_12[iParam1 /*3*/] = { vParam2 };
}

void func_527(var uParam0, float fParam1)
{
	uParam0->f_79 = fParam1;
}

void func_528(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_529(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_530(var uParam0, float fParam1)
{
	uParam0->f_80 = fParam1;
}

void func_531(var uParam0, float fParam1)
{
	uParam0->f_78 = fParam1;
}

void func_532(var uParam0, vector3 vParam1)
{
	uParam0->f_70 = { vParam1 };
}

void func_533(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_76 = fParam1;
}

void func_535(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_536(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_537(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_25478, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_25478, iParam0);
	}
}

void func_538(int iParam0)
{
	func_366();
	Global_71111 = iParam0;
	Global_71110 = 0;
	Global_71113 = 3;
}

void func_539(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_360();
	func_359();
	func_475();
	func_545(uParam1);
	func_537(23, 0);
	func_544(*uParam1);
	VEHICLE::_0xE30524E1871F481D(*uParam16);
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_START");
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_LANDED");
	AUDIO::TRIGGER_MUSIC_EVENT("OJBJ_STOP");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_SKYDIVE");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	AUDIO::STOP_AUDIO_SCENES();
	uParam11 = uParam11;
	Global_88235 = 0;
	Global_88236 = 0;
	Global_88237 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(1);
	MISC::_DISABLE_AUTOMATIC_RESPAWN(0);
	MISC::IGNORE_NEXT_RESTART(0);
	while (CAM::IS_SCREEN_FADING_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	}
	if (HUD::DOES_BLIP_EXIST(iParam13))
	{
		HUD::REMOVE_BLIP(&iParam13);
	}
	if (HUD::DOES_BLIP_EXIST(iParam14))
	{
		HUD::REMOVE_BLIP(&iParam14);
	}
	func_366();
	func_26(0);
	PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), false);
	func_543(1, 1);
	if (func_410(func_436(uParam0)))
	{
	}
	else
	{
		VEHICLE::_0x0A436B8643716D14();
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	func_541(uParam7);
	func_267();
	HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	GRAPHICS::_0x6DDBF9DFFC4AC080(0);
	func_206(0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (iParam15 == 5)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, false);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		if (!bParam17)
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
		}
		PED::SET_PED_LOD_MULTIPLIER(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam10)[iVar1]) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[iVar1], 0))
		{
			BRAIN::CLEAR_PED_TASKS((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(*iParam6) && *iParam6 != PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
	{
		VEHICLE::SET_PLAYERS_LAST_VEHICLE(*iParam6);
		func_270(*iParam6, func_309(iParam15), func_308(iParam15), 24, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam8))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam8))
		{
			PED::DELETE_PED(iParam8);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam8);
		}
	}
	if (!PED::IS_PED_INJURED(*uParam9))
	{
		BRAIN::CLEAR_PED_TASKS(*uParam9);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam9, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (func_444(func_445(iParam15)))
		{
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam2, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam2, 0))
			{
				PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam2))
			{
				VEHICLE::DELETE_VEHICLE(iParam2);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		if (func_351(func_352(uParam0)))
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(uParam3, 0);
			VEHICLE::SET_RANDOM_TRAINS(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4) && !ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam4, -1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		VEHICLE::DELETE_VEHICLE(iParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam5)[iVar2]) && !ENTITY::IS_ENTITY_DEAD((*uParam5)[iVar2], 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER((*uParam5)[iVar2], 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam5)[iVar2], false, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	HUD::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	func_540();
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	Global_104555.f_18937 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_540()
{
	Global_17162.f_5 = 0;
}

void func_541(var uParam0)
{
	func_542(uParam0, 0);
	func_542(uParam0, 1);
	func_542(uParam0, 2);
}

void func_542(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_543(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(Global_25391, iParam0))
	{
		if (!bParam1)
		{
			MISC::CLEAR_BIT(&Global_25391, iParam0);
			StringCopy(&(Global_25392[iParam0 /*6*/]), "NULL", 24);
			Global_25447[iParam0] = bParam1;
		}
	}
}

void func_544(var uParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_545(var uParam0)
{
	func_544(*uParam0);
}

