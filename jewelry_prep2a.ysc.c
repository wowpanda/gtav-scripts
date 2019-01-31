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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_245 = 10;
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
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
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
	var uLocal_675 = 0;
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
	var uLocal_717 = 0;
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
	var uLocal_750 = 5;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
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
	var uLocal_781 = 7;
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
	var uLocal_801 = 0;
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
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 5;
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
	var uLocal_857 = 3;
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
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 16;
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
	var uLocal_927 = 0;
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
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 10;
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
	var uLocal_1011 = 0;
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
	var uLocal_1024 = 5;
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
	var uLocal_1050 = 5;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
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
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	struct<8> Local_1079[2];
	int iLocal_1080 = 0;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 16;
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
	var uLocal_1137 = 0;
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
	var uLocal_1179 = 0;
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
	var uLocal_1221 = 0;
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
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 1000;
	var uLocal_1280 = 1000;
	var uLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	int iLocal_1284 = 0;
	vector3 vLocal_1285 = { 0f, 0f, 0f };
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	var uLocal_1294 = 0;
	struct<2> Local_1295 = { 0, 0 } ;
	int iLocal_1296 = 0;
	var uLocal_1297 = 0;
	struct<2> Local_1298[3];
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	float fLocal_1303 = 0f;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	vector3 vLocal_1309[24] = "";
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	bool bLocal_1320 = 0;
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
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("BOXVILLE3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	vLocal_86 = { 0f, 0.175f, 0f };
	vLocal_87 = { 0f, -3.6f, 0f };
	iLocal_88 = 0;
	fLocal_1303 = 0f;
	iLocal_1318 = 4294967295;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_301(5);
	}
	MISC::SET_MISSION_FLAG(1);
	func_280();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_278();
		}
		func_276(&uLocal_94);
		func_201();
		func_199();
		if (!bLocal_91)
		{
			func_195();
			func_194(&Local_1079);
			func_1();
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x105
{
	switch (iLocal_88)
	{
		case 0:
			if (func_22())
			{
				func_21(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x136
{
	AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_STOP");
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_3(bool bParam0, int iParam1)//Position - 0x173
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_DB77)
	{
		Global_DB77 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_1171B.f_1 == 1) && func_5(Global_1171B))
		{
		}
		else
		{
			Global_DB75 = 1;
		}
	}
	if (Global_19E56.f_2361 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_1486F[iVar0 /*5*/];
		uVar2 = Global_11732.f_6D[iVar1 /*4*/];
		if (iVar0 == 4294967295)
		{
			if (Global_19E56.f_2361)
			{
			}
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_1171D, 1);
		Global_1172D = uVar2;
		Global_1172E = MISC::GET_GAME_TIMER();
	}
}

int func_4()//Position - 0x249
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

int func_5(int iParam0)//Position - 0x27E
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_6(bool bParam0)//Position - 0x2BC
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_7(int iParam0)//Position - 0x2E7
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

void func_8(bool bParam0)//Position - 0x313
{
	int iVar0;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("BOXVILLE3"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), false);
	if (func_20())
	{
		func_13(0);
	}
	iLocal_1305 = 0;
	Global_10BFC = 0;
	if (bParam0)
	{
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
		Global_10BFC = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1293))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_1293);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1293);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&vLocal_1285);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vLocal_1285);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1295))
	{
		if (bParam0 && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			VEHICLE::DELETE_VEHICLE(&Local_1295);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1295);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1298)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1298[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(Local_1298[iVar0 /*2*/]));
			}
			else
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_1298[iVar0 /*2*/]))
				{
					ENTITY::DETACH_ENTITY(Local_1298[iVar0 /*2*/], 1, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1298[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1299))
	{
		if (bParam0)
		{
			OBJECT::DELETE_OBJECT(&iLocal_1299);
		}
		else
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1299))
			{
				ENTITY::DETACH_ENTITY(iLocal_1299, 1, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1299);
		}
	}
	if (iLocal_1300 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1300, 0);
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1270, 0, 0);
	func_10();
	if (WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)//Position - 0x4CB
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

void func_10()//Position - 0x4ED
{
	Global_15C5E = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)//Position - 0x4FA
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
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
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
		if (func_12(uParam0->f_3))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_12(sVar0))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
}

int func_12(char* sParam0)//Position - 0x5D0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13(bool bParam0)//Position - 0x5E3
{
	if (bParam0)
	{
		func_19();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_18(0))
		{
			func_14(0);
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

void func_14(int iParam0)//Position - 0x646
{
	if (func_17())
	{
		return;
	}
	if (Global_3959)
	{
		func_16(0, 0);
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
	if (!func_15())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_15()//Position - 0x6C0
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)//Position - 0x6E7
{
	if (bParam0)
	{
		if (func_18(0))
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

bool func_17()//Position - 0x75B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_18(int iParam0)//Position - 0x76D
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

void func_19()//Position - 0x7C7
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

int func_20()//Position - 0x7F0
{
	if (Global_38B1.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)//Position - 0x809
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_22()//Position - 0x824
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	vVar0 = { 692.8256f, -1012.544f, 21.722f };
	vVar1 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_90)
	{
		if (func_193(Local_1295))
		{
			if (HUD::GET_BLIP_FROM_ENTITY(Local_1295) != 0)
			{
				Local_1295.f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_1295);
			}
			else
			{
				Local_1295.f_1 = func_192(Local_1295, 0, 0);
			}
			func_191("JHP2A_STEAL", 7500, 1);
			func_190("JHP2A_HLP2", 15000);
		}
		else if (HUD::GET_BLIP_FROM_ENTITY(Local_1295) != 0)
		{
			unk_0xB5AD2E78802711D6(1);
			iVar3 = HUD::GET_BLIP_FROM_ENTITY(Local_1295);
			HUD::REMOVE_BLIP(&iVar3);
			unk_0xB5AD2E78802711D6(0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_START");
		func_133(0f, 0f, 0f, 0f, 1, func_186());
		RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
		iLocal_1313 = 0;
		iLocal_90 = 1;
		bLocal_1320 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_132();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1282 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_1295)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0)) && ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x)) && !PED::IS_PED_INJURED(vLocal_1285.x)) && PED::IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0)) && func_129(&(Local_1079[0 /*8*/])))
				{
					func_100(&uLocal_1270, Local_1295, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1270, 0, 0);
				}
				if (iLocal_1282 == 3 || iLocal_1282 == 2)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					func_97(&iLocal_1080, 1, 0);
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_12("JHP2A_HLP2"))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
					if (!iLocal_1313)
					{
						func_191("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1296) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_1296, 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1296, Local_1295))
				{
					if (HUD::DOES_BLIP_EXIST(Local_1295.f_1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						unk_0xB5AD2E78802711D6(1);
						HUD::REMOVE_BLIP(&(Local_1295.f_1));
						unk_0xB5AD2E78802711D6(0);
						func_96(705, 0);
					}
					func_95(&iLocal_1080, vVar0, 0.1f, 0.1f, 0.1f, 1, iLocal_1296, "JHP2A_RTNVAN", "", "", 1, 0, 1, 4294967295);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1295, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						VEHICLE::_SET_VEHICLE_HALT(iLocal_1296, 5f, 4294967295, 0);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1282 == 1)
				{
					func_97(&iLocal_1080, 1, 0);
					if (!HUD::DOES_BLIP_EXIST(Local_1298[0 /*2*/].f_1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						Local_1298[0 /*2*/].f_1 = func_94(Local_1298[0 /*2*/]);
						func_191("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1313 = 1;
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
					}
				}
				else if (iLocal_1282 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_1295.f_1))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						unk_0xB5AD2E78802711D6(1);
						HUD::REMOVE_BLIP(&(Local_1295.f_1));
						unk_0xB5AD2E78802711D6(0);
						func_96(705, 0);
					}
					if (func_92(&iLocal_1080, vVar0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1295, "JHP2A_RTNVAN", "", "", PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_1295, 0), 0, 1, 4294967295))
					{
						iLocal_89 = 101;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_1080) && HUD::_0xDD2238F57B977751(iLocal_1080))
					{
						HUD::SET_BLIP_ROUTE(iLocal_1080, false);
					}
				}
				break;
			
			case 101:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_1295, 0))
				{
					iVar4 = Local_1295;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1296) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1296, Local_1295))
				{
					iVar4 = iLocal_1296;
				}
				if (func_90(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						BRAIN::TASK_LEAVE_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0, 0);
						iLocal_89++;
					}
				}
				break;
			
			case 102:
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
				{
					HUD::CLEAR_PRINTS();
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
					VEHICLE::_0x2B6747FAA9DB9D6B(Local_1295, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1296))
					{
						VEHICLE::_SET_VEHICLE_HALT(iLocal_1296, 5f, 1, 0);
					}
					func_89(0, 4294967295);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1298[0 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1298[0 /*2*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1298[1 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1298[1 /*2*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1298[2 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1298[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
				{
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1298[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1298[iVar2 /*2*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_1295.f_1))
							{
								unk_0xB5AD2E78802711D6(1);
								HUD::REMOVE_BLIP(&(Local_1295.f_1));
								unk_0xB5AD2E78802711D6(0);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_1298[iVar2 /*2*/].f_1))
							{
								Local_1298[iVar2 /*2*/].f_1 = func_94(Local_1298[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1298[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1298[iVar2 /*2*/]))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
							{
								bVar5 = func_88(Local_1298[iVar2 /*2*/]);
								if ((bVar5 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, 0f, -3f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, 0f, -4.5f, 1f), 1.68f, 0, true, 1)) || (!bVar5 && ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(Local_1298[iVar2 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 1, false, false);
									OBJECT::DELETE_OBJECT(&(Local_1298[iVar2 /*2*/]));
									HUD::CLEAR_PRINTS();
									unk_0x1190AB7024CBD8CB(4294967295, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					func_96(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (HUD::DOES_BLIP_EXIST(Local_1298[iVar2 /*2*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1298[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					func_42(&iLocal_1080, vVar1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, 4294967295, 1);
					WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar6, 1);
					if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, false, true, 0))
					{
						iVar8 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) && bLocal_1320))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
						if (!func_20())
						{
							func_13(1);
						}
						if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(AUDIO::_0x0626A247D2405330()))
						{
							if (!PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0) && !func_18(0))
							{
								if (iVar6 != joaat("weapon_briefcase"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_41("JHP2A_HLP1");
							}
						}
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) && iVar6 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							iVar9 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(AUDIO::_0x0626A247D2405330(), 1);
							PHYSICS::ACTIVATE_PHYSICS(iVar9);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", 0, 0);
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar9);
							WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
							WEAPON::REMOVE_WEAPON_FROM_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"));
							func_89(0, 4294967295);
							func_40(706);
							func_97(&iLocal_1080, 1, 0);
							if (func_7(87))
							{
								if (func_20())
								{
									func_13(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_20())
						{
							func_13(0);
						}
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (func_12("JHP2A_HLP1"))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
						}
					}
					bLocal_1320 = PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1);
				}
				break;
			
			case 1000:
				BRAIN::TASK_LEAVE_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
				VEHICLE::_0x2B6747FAA9DB9D6B(Local_1295, 1);
				func_39(1);
				func_38(1, 0);
				if (func_36())
				{
					if (func_25(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			
			case 1001:
				func_38(1, 0);
				if (func_24())
				{
					iLocal_89++;
				}
				break;
			
			case 1002:
				func_38(1, 0);
				if (!func_24())
				{
					func_23();
					return 1;
				}
				break;
			
			case 2000:
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), true);
				Global_10BFC = 1;
				func_39(1);
				func_38(1, 0);
				iLocal_89++;
				break;
			
			case 2001:
				func_38(1, 0);
				if (func_36())
				{
					if (func_25(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			
			case 2002:
				func_38(1, 0);
				if (func_24())
				{
					iLocal_89++;
				}
				break;
			
			case 2003:
				func_38(1, 0);
				if (!func_24())
				{
					func_23();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_23()//Position - 0x11A3
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), false, false, false, false, false, false, 0, false);
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 157, true);
		ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16248[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_16248[iVar0], 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_16248[iVar0], false, false, false, false, false, false, 0, false);
				ENTITY::FREEZE_ENTITY_POSITION(Global_16248[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_8D15 != 0 && Global_8D15 != 3) && Global_8D15 != 2)
	{
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
	}
}

int func_24()//Position - 0x1256
{
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x127F
{
	func_35(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	if (iParam5 == 1)
	{
		Global_3DDA = 1;
	}
	else
	{
		Global_3DDA = 0;
	}
	Global_280001 = 0;
	return func_26(sParam3, iParam4, bParam8);
}

int func_26(char* sParam0, int iParam1, bool bParam2)//Position - 0x12DE
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
					func_34();
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
		if (func_33(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_32();
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
				func_30();
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
				if (func_29())
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
			if (func_15())
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
			func_28();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_27();
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
		func_34();
	}
	return 0;
}

void func_27()//Position - 0x15AA
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

void func_28()//Position - 0x15DB
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

int func_29()//Position - 0x1670
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

void func_30()//Position - 0x1709
{
	if (func_31(14))
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
		Global_38B1 = func_186();
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

bool func_31(int iParam0)//Position - 0x17AB
{
	return Global_8D15 == iParam0;
}

void func_32()//Position - 0x17B9
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

bool func_33(int iParam0, int iParam1)//Position - 0x1810
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

void func_34()//Position - 0x184B
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

void func_35(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x18A2
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

int func_36()//Position - 0x18F8
{
	if (func_37())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_37()//Position - 0x191E
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)//Position - 0x1940
{
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (bParam1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(AUDIO::_0x0626A247D2405330(), 2f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(AUDIO::_0x0626A247D2405330(), 1f);
		}
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 102, true);
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
	}
}

void func_39(bool bParam0)//Position - 0x19FA
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), true, true, true, true, true, false, 0, false);
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 157, false);
		ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), true);
		PED::SET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330(), 0, 0);
		if (bParam0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), false);
		}
		PED::REMOVE_PED_HELMET(AUDIO::_0x0626A247D2405330(), 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
	}
	HUD::_0x14621BB1DF14E2B2(0);
	GRAPHICS::_0x54E22EA2C1956A8D(0f);
}

void func_40(int iParam0)//Position - 0x1A76
{
	bool bVar0;
	int iVar1;
	
	Global_DB76 = 0;
	if (!Global_DC56[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_10AB4)
	{
		if (Global_10AB5[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_10AB5[iVar1 /*9*/].f_1 = 1;
			Global_10AB5[iVar1 /*9*/].f_2 = 0f;
			if (Global_10AB5[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_41(char* sParam0)//Position - 0x1AE7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_42(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1AFD
{
	return func_43(iParam0, vParam1, vParam2, func_87(), func_87(), bParam3, 3, 0, 0, 0, 0, sParam4, func_86(), func_86(), func_86(), func_86(), func_86(), 0, bParam5, func_86(), 0, 0, bParam6, iParam7, func_86(), func_86(), func_86(), bParam8, 1065353216);
}

int func_43(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1B58
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0] = iParam7;
	iParam0->f_11[1] = iParam8;
	iParam0->f_11[2] = iParam9;
	iParam0->f_10 = iParam7;
	func_85(iParam0);
	func_84(iParam0);
	func_83();
	if (func_66(iParam0, iParam0->f_11[0], iParam0->f_11[1], iParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_65(sParam12);
		func_65(sParam13);
		func_65(sParam14);
		func_65(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0))
				{
					MISC::SET_BIT(&(iParam0->f_D), 3);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 23))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 23);
					}
					MISC::SET_BIT(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_63(iParam0, iParam21))
				{
					MISC::SET_BIT(&(iParam0->f_D), 3);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
					}
					MISC::SET_BIT(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_65(sParam16);
				func_65(sParam19);
				func_65("MORE_SEATS");
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						func_65(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!func_60(iParam0, 1) && !func_59(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_58(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_56(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_D), 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						func_65("LOSE_WANTED");
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 0);
						MISC::SET_BIT(&(iParam0->f_D), 1);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 1))
					{
						if (!func_60(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_56(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_55(vVar3, 0);
						if (!iParam23 == 4294967295)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_54(iParam0->f_5, iParam0);
						}
					}
					else if (!func_53(vVar3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_54(iParam0->f_5, iParam0);
						}
					}
					if (!func_60(iParam0, 2))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 2))
						{
							func_58(iParam0, sParam11, 0);
							MISC::SET_BIT(&(iParam0->f_D), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_11[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_11[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_11[iVar2], func_52()) || !func_50(iParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_47(iParam0))
							{
								func_65(sParam11);
								func_65(sParam16);
								func_65(sParam12);
								func_65(sParam13);
								func_65(sParam14);
								func_65(sParam15);
								func_65("LOSE_WANTED");
								func_65("MORE_SEATS");
								func_65(sParam19);
								func_97(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) && (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 22)))
				{
					func_65(sParam16);
					func_65(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						func_65(sParam11);
					}
					if ((!func_60(iParam0, 1) && !func_59(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_58(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_56(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_D), 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						func_65("LOSE_WANTED");
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 0);
						MISC::SET_BIT(&(iParam0->f_D), 1);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 1))
					{
						if (!func_60(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_56(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
						}
					}
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								func_65(sParam11);
							}
							*iParam0 = func_44(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
							{
								func_54(*iParam0, iParam0);
							}
						}
						if (!func_60(iParam0, 2))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 3))
							{
								func_58(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_D), 3);
								GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
									{
										func_58(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_D), 4);
									}
								}
								else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
								{
									func_58(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_D), 4);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
									{
										func_56(iParam0->f_11[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_D), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					func_65(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_60(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_11[iVar7]))
									{
										func_56(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_58(iParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(iParam0->f_D), 13);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 3))
							{
								func_58(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_D), 3);
								GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
								{
									func_58(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_60(iParam0, 2))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 3))
						{
							func_58(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_D), 3);
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
						}
						else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
								{
									func_58(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_D), 4);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
							{
								func_58(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_D), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 0);
		}
		func_65(sParam11);
		func_65(sParam16);
		func_65(sParam19);
		func_65(sParam16);
		func_65("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 11);
	GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 12);
	return 0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x24C0
{
	return func_45(iParam0, !bParam1, bParam2);
}

int func_45(int iParam0, bool bParam1, bool bParam2)//Position - 0x24D3
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_46(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_46(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_46(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_46(bool bParam0, float fParam1, float fParam2)//Position - 0x2577
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_47(int iParam0)//Position - 0x258E
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 12))
	{
		if (func_49(AUDIO::_0x0626A247D2405330()))
		{
			if (func_48(1, 0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_48(1, 0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_48(bool bParam0, bool bParam1, bool bParam2)//Position - 0x25EC
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

int func_49(int iParam0)//Position - 0x26D1
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x2708
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()) && iParam1)
		{
			if (func_51(AUDIO::_0x0626A247D2405330(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_52(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_52()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_52(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x2773
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_52()//Position - 0x27BB
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_53(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x27CB
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

void func_54(int iParam0, int iParam1)//Position - 0x2846
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		HUD::_0x3DDA37128DD1ACA8(0);
		HUD::_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		HUD::SET_BLIP_ROUTE(iParam0, true);
	}
}

int func_55(vector3 vParam0, bool bParam1)//Position - 0x2881
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_46(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_56(int iParam0, char* sParam1, int iParam2)//Position - 0x28AD
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_57(iParam2), 1);
}

int func_57(int iParam0)//Position - 0x28C4
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

void func_58(int iParam0, char* sParam1, bool bParam2)//Position - 0x2AB9
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_191(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = MISC::GET_GAME_TIMER();
}

int func_59(int iParam0)//Position - 0x2AF0
{
	if (!PED::IS_PED_INJURED(iParam0->f_10))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_10))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)//Position - 0x2B14
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_62(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_37() && !func_61())
		{
			return 1;
		}
	}
	return 0;
}

int func_61()//Position - 0x2B6C
{
	if (Global_41C1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0)//Position - 0x2B83
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_63(var uParam0, int iParam1)//Position - 0x2BA6
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_64(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, var uParam1, int iParam2)//Position - 0x2BD7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::_0xF7F203E31F96F6A1(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::_0xF7F203E31F96F6A1(iParam0, 1))
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
	return 0;
}

void func_65(char* sParam0)//Position - 0x2C6B
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2C83
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_11[0] = uParam1;
	uParam0->f_11[1] = uParam2;
	uParam0->f_11[2] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 29) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], true, 4294967295, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_D), 28);
				}
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 29) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], false, 4294967295, 0);
			}
			if (iVar0 == 2)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 26))
	{
		bVar14 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = VEHICLE::GET_CLOSEST_VEHICLE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 50f, 0, iVar16);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar15, 0))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_15, 0))
		{
			if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(uParam0->f_15, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) || !bParam17)
					{
						if (func_64(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_11[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
									}
									if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826) == 7 && !func_82(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0]))
										{
											ENTITY::SET_ENTITY_HEALTH(uParam0->f_11[iVar0], true);
											BRAIN::TASK_ENTER_VEHICLE(uParam0->f_11[iVar0], uParam0->f_15, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_11[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
					{
						if (func_80(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_52());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 26))
	{
		if ((!func_79(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar10 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar10, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_60(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar17);
						if (!PED::IS_PED_INJURED(uParam0->f_11[iVar18]))
						{
							func_56(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_58(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_D), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 13);
			func_65("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_11[0]) || !PED::IS_PED_INJURED(uParam0->f_11[1])) || !PED::IS_PED_INJURED(uParam0->f_11[2]))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()) && !func_60(uParam0, 2))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						if (func_78(iVar10, uParam0))
						{
							func_58(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 31);
					func_65("CMN_VEHSUIT");
				}
			}
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_D), 21);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 21))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_11[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_11[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar10, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
							{
								if (!func_79(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
								{
									if (!func_77(uParam0->f_11[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_11[iVar0], iVar10))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10))
								{
									vVar19 = { unk_0x8000C77B5F336760(iVar10, true) };
									if (vVar19.z < -1f)
									{
										BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_11[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar10, 0))
							{
								if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar10))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
									{
										iVar20 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
									}
									if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
						if (ENTITY::DOES_ENTITY_EXIST(iVar21))
						{
							if (func_64(iVar21, uParam0, 0))
							{
								if (func_76(iVar0, uParam0) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], iVar0);
									func_75(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_76(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar21) == joaat("SENTINEL2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], 2);
								}
								func_74(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()) && !func_73(uParam0->f_11[iVar0], iParam10)) && !func_72(uParam0->f_11[iVar0], iParam10))
					{
						if (func_80(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0]))
								{
									iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826);
									if (iVar11 == 7)
									{
										NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_11[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_52());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_44(uParam0->f_11[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_54(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_50(uParam0->f_11[iVar0], 1) || func_73(uParam0->f_11[iVar0], iParam10)) || iParam12) || (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_65(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_54(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_11[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_11[iVar0], iParam10, 0))
									{
										if (!func_50(uParam0->f_11[iVar0], 1))
										{
											if (func_49(uParam0->f_11[iVar0]))
											{
												iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 451360105);
												if (iVar11 == 7)
												{
													BRAIN::TASK_LEAVE_ANY_VEHICLE(uParam0->f_11[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0])) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826);
									if (iVar11 == 7 && !func_82(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0xBF3C2E756849EEF4(AUDIO::_0x0626A247D2405330())) && !func_71(uParam0->f_11[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0])) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											ENTITY::SET_ENTITY_HEALTH(uParam0->f_11[iVar0], true);
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_11[iVar0], 1f);
											}
											BRAIN::TASK_ENTER_VEHICLE(uParam0->f_11[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_11[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_44(uParam0->f_11[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
							{
								if (func_80(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0]))
									{
										iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826);
										if (iVar11 == 7)
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_11[iVar0]);
										}
										ENTITY::SET_ENTITY_HEALTH(uParam0->f_11[iVar0], false);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_52());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_52());
								}
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
								MISC::SET_BIT(&(uParam0->f_D), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_52()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_65(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_60(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
						{
							if (func_77(uParam0->f_11[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], AUDIO::_0x0626A247D2405330(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], AUDIO::_0x0626A247D2405330(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_77(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_B) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 5))
							{
								func_58(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_D), 5);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_70(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_68(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_67(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_70(iVar0, uParam0))
										{
											func_58(uParam0, uVar12[iVar0], 0);
											func_67(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0;
				}
			}
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_65(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_65("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1)//Position - 0x3CF7
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_D), 14);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_D), 15);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_D), 16);
			break;
	}
}

void func_68(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3D3F
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_69(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = MISC::GET_GAME_TIMER();
}

void func_69(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3D78
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_70(int iParam0, var uParam1)//Position - 0x3D97
{
	switch (iParam0)
	{
		case 0:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 14);
		
		case 1:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 15);
		
		case 2:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 16);
		
		default:
	}
	return 0;
}

int func_71(int iParam0, float fParam1)//Position - 0x3DE0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)//Position - 0x3E17
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_52()))
		{
			iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1)//Position - 0x3E7E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_74(int iParam0, var uParam1)//Position - 0x3EB3
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_D), 17);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_D), 18);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_D), 19);
			break;
	}
}

void func_75(int iParam0, var uParam1)//Position - 0x3EFB
{
	switch (iParam0)
	{
		case 0:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 17);
			break;
		
		case 1:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 18);
			break;
		
		case 2:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 19);
			break;
	}
}

int func_76(int iParam0, var uParam1)//Position - 0x3F43
{
	switch (iParam0)
	{
		case 0:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 17);
		
		case 1:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 18);
		
		case 2:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 19);
		
		default:
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x3F8C
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_78(int iParam0, var uParam1)//Position - 0x401D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0] || iVar3 == uParam1->f_11[1]) || iVar3 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0] || iVar4 == uParam1->f_11[1]) || iVar4 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0] || iVar5 == uParam1->f_11[1]) || iVar5 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79(var uParam0)//Position - 0x417D
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_64(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x41AC
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar0))
					{
						if (func_79(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_64(iVar0, uParam0, 0))
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
						{
							if (func_81(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_81(int iParam0)//Position - 0x428A
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1)//Position - 0x42C2
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_83()//Position - 0x42F2
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330());
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != AUDIO::_0x0626A247D2405330())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, AUDIO::_0x0626A247D2405330()))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iVar1, AUDIO::_0x0626A247D2405330(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_84(var uParam0)//Position - 0x435F
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_11[iVar0], 0);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_D), 25);
	}
}

void func_85(var uParam0)//Position - 0x4402
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_11[iVar0], 0);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_11[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(AUDIO::_0x0626A247D2405330(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(AUDIO::_0x0626A247D2405330(), 0);
			}
		}
	}
}

int func_86()//Position - 0x4498
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_87()//Position - 0x44A2
{
	vector3 vVar0;
	
	return vVar0;
}

int func_88(int iParam0)//Position - 0x44AE
{
	vector3 vVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
	{
		return 0;
	}
	vVar0 = { MISC::_0x21C235BC64831E5A(unk_0x8000C77B5F336760(iParam0, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_86), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_87), 0) };
	if (SYSTEM::VDIST2(vVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_86)) <= SYSTEM::VDIST2(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_87), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, vLocal_86)))
	{
		return 1;
	}
	return 0;
}

void func_89(bool bParam0, int iParam1)//Position - 0x4524
{
	int iVar0;
	
	if (Global_DB7D)
	{
	}
	Global_DB7D = 0;
	if (bParam0)
	{
		Global_DB7E = 1;
	}
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_DC56[Global_10AB5[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_10AB5[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_10AB5[iVar0 /*9*/] > 0)
			{
				if (Global_10AB5[iVar0 /*9*/] == iParam1)
				{
					Global_10AB5[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_90(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x45BE
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
	func_91(iParam0);
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

void func_91(int iParam0)//Position - 0x474D
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

bool func_92(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x4779
{
	return func_43(iParam0, vParam1, func_93(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_86(), func_86(), func_86(), func_86(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_86(), func_86(), func_86(), 1, fParam4);
}

Vector3 func_93()//Position - 0x47CE
{
	return 0f, 0f, 2f;
}

int func_94(int iParam0)//Position - 0x47D9
{
	return func_45(iParam0, 1, 0);
}

int func_95(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x47E9
{
	return func_43(iParam0, vParam1, vParam2, func_87(), func_87(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_86(), func_86(), func_86(), func_86(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

void func_96(int iParam0, bool bParam1)//Position - 0x4838
{
	int iVar0;
	
	Global_DB7F = iParam0;
	if (!Global_DB7D)
	{
		Global_DB7D = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_10AB5[iVar0 /*9*/] == iParam0)
			{
				Global_10AB5[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_97(int iParam0, bool bParam1, bool bParam2)//Position - 0x4882
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_99(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_98(iVar0, iParam0);
		func_75(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), iVar0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_C = 0;
	iParam0->f_F = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_11[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_11[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_11[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_11[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_11[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_11[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_11[iVar0], func_52()) && iParam0->f_11[iVar0] != AUDIO::_0x0626A247D2405330())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_11[iVar0]);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_11[iVar0], false, 4294967295, 0);
			}
			iParam0->f_11[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(AUDIO::_0x0626A247D2405330(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(AUDIO::_0x0626A247D2405330(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, true);
		}
	}
	iParam0->f_15 = 0;
}

void func_98(int iParam0, var uParam1)//Position - 0x4A33
{
	switch (iParam0)
	{
		case 0:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 14);
			break;
		
		case 1:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 15);
			break;
		
		case 2:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 16);
			break;
	}
}

void func_99(var uParam0)//Position - 0x4A7B
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4A96
{
	func_101(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_101(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AB3
{
	func_102(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_102(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AD1
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_103(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_103(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4B09
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
	if (func_12(iVar0))
	{
		func_128();
	}
	if (func_127(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_122(uParam0, bParam5, bParam7, 0))
			{
				func_118(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_107(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_12(iVar0))
							{
								func_190(iVar0, 4294967295);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_106(1);
								}
							}
						}
					}
				}
			}
			else if (func_107(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_12(iVar0))
						{
							func_190(iVar0, 4294967295);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_106(1);
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
				if (func_12(sParam3))
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
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_105(uParam0))
				{
					func_104(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_104(var uParam0)//Position - 0x4E72
{
	if (func_127(AUDIO::_0x0626A247D2405330()))
	{
		BRAIN::TASK_CLEAR_LOOK_AT(AUDIO::_0x0626A247D2405330());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
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

int func_105(var uParam0)//Position - 0x4ED6
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

int func_106(bool bParam0)//Position - 0x4F01
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

int func_107(char* sParam0)//Position - 0x4FAB
{
	if (!func_108(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return 0;
	}
	switch (Global_8D15)
	{
		case 0:
		case 3:
			if (func_106(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_106(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_106(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_108(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5043
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
	if (func_18(0))
	{
		return 0;
	}
	if (func_117())
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
	if ((func_116() || func_115(Global_440000.f_2559E)) || func_114())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			iVar1 = func_113(AUDIO::_0x0626A247D2405330(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("APC") && iVar1 != 4294967295)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("AKULA") && iVar1 != 4294967295)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("RIOT2") && iVar1 == 0) && func_112(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != 4294967295))
			{
				return 0;
			}
		}
	}
	if (func_109(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_109(int iParam0)//Position - 0x5291
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
		else if ((Global_140859 && iParam0 == CAM::_0xDC9DA9E8789F5246()) && func_110(iParam0, 1, 0))
		{
			return Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295;
		}
	}
	return 0;
}

int func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x52F7
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

int func_111()//Position - 0x5341
{
	return 4294967295;
}

int func_112(int iParam0, int iParam1)//Position - 0x534A
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

int func_113(int iParam0, int iParam1)//Position - 0x53AC
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

var func_114()//Position - 0x5431
{
	return Global_255C02.f_10;
}

bool func_115(int iParam0)//Position - 0x543F
{
	return iParam0 == 51;
}

var func_116()//Position - 0x544C
{
	return Global_255C02.f_F;
}

bool func_117()//Position - 0x545A
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

void func_118(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x546F
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
		func_11(uParam0, 0, 0);
	}
	if (func_121(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_119())
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
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
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

bool func_119()//Position - 0x557B
{
	return func_120(CAM::_0xDC9DA9E8789F5246());
}

int func_120(int iParam0)//Position - 0x558B
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_121(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x55AA
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x55F1
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_105(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
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
				else if (!func_126(bParam1, bParam2, bParam3))
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
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || func_123(bParam1, bParam2, bParam3))
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
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_105(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_108(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_128();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)//Position - 0x595D
{
	if (!func_108(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)//Position - 0x59AF
{
	if (!func_108(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)//Position - 0x59F8
{
	if (!func_108(bParam0, bParam1, bParam2))
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

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5A57
{
	if (!func_108(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x5AAD
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

void func_128()//Position - 0x5B08
{
	MISC::SET_BIT(&Global_950, 4);
}

int func_129(var uParam0)//Position - 0x5B18
{
	if (func_131(uParam0) && !func_130(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0)//Position - 0x5B3D
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0)//Position - 0x5B54
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_132()//Position - 0x5B82
{
	int iVar0;
	
	if (iLocal_1282 == 0 || iLocal_1282 == 1)
	{
		if (((ENTITY::IS_ENTITY_DEAD(Local_1295, 0) || (ENTITY::DOES_ENTITY_EXIST(Local_1298[0 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1298[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1298[1 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1298[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1298[2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 2;
		}
	}
	if (iLocal_1282 == 2)
	{
		if ((((!ENTITY::DOES_ENTITY_EXIST(Local_1295) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1298[0 /*2*/]) && !func_88(Local_1298[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1298[1 /*2*/]) && !func_88(Local_1298[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1298[2 /*2*/]) && !func_88(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 3;
		}
	}
	if (iLocal_1282 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TOWTRUCK") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TOWTRUCK2"))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_1295))
					{
						iLocal_1296 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1282 == 0)
	{
		if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0))
		{
			iLocal_1282 = 1;
		}
	}
	if (iLocal_1282 == 1 && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_1295, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_133(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x5D2A
{
	vector3 vVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_17998.f_4))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_17998.f_4, 0))
		{
			if (func_185(24) != Global_17998.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_182(unk_0x8000C77B5F336760(Global_17998.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_134(Global_17998.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_134(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x5DA5
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[25]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[25], 0))
			{
				if (Global_11188.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_181(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_176(iParam0, &Var0);
		if (func_121(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x8000C77B5F336760(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_11564 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_169(iParam3, &Var0, vParam1, fParam2, func_175(iParam0));
		func_135(iParam3, iParam0, 0);
	}
}

void func_135(int iParam0, int iParam1, int iParam2)//Position - 0x5ECE
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (!func_165(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 12) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_11188.f_22B[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_11513 != 4294967295 && Global_11513 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19E56.f_7F5D.f_12C1 = func_154();
			}
			if (iParam1 != Global_11188.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_185(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0)) && iParam1 != iVar0)
					{
						func_136(iVar0, 145);
					}
				}
				Global_11512 = iParam1;
				Global_11513 = iParam0;
				Global_11514 = iParam2;
			}
		}
	}
}

void func_136(int iParam0, int iParam1)//Position - 0x5FEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_137(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, 4294967295);
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
			iParam1 = Global_19E56.f_933.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19E56.f_7F5D.f_15D8[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19E56.f_7F5D.f_15D6 = iParam1;
	Global_11511 = iParam0;
	Global_19E56.f_7F5D.f_15D4 = 1;
	func_176(iParam0, &(Global_19E56.f_7F5D.f_1586));
}

int func_137(int iParam0)//Position - 0x61ED
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || func_152(iParam0, 0, 0)) || func_152(iParam0, 1, 0)) || func_152(iParam0, 2, 0)) || func_175(iParam0) != 145) || func_151(iParam0)) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || !func_138(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_150(iParam0))
		{
		}
		if (func_150(iParam0))
		{
		}
		if (func_152(iParam0, 0, 0))
		{
		}
		if (func_152(iParam0, 1, 0))
		{
		}
		if (func_152(iParam0, 2, 0))
		{
		}
		if (func_175(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_138(int iParam0)//Position - 0x62CA
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_139(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return 0;
			break;
	}
	return 1;
}

int func_139(int iParam0, bool bParam1)//Position - 0x647B
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
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_147())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILE::GET_NUM_DLC_VEHICLES())
		{
			if (FILE::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILE::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_146() && !func_145()) && !func_144()) && !func_143()) && !func_147())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_144())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_142(iParam0))
		{
			return 0;
		}
	}
	if (!func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0)//Position - 0x65FB
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_141())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_141()//Position - 0x66C7
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x66DE
{
	int iVar0;
	int iVar1;
	
	if (Global_263409)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_40001.f_1958 && !Global_40001.f_31FD) && iVar1 < Global_40001.f_31FE)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_40001.f_370F && iVar1 < Global_40001.f_371B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_40001.f_370B && iVar1 < Global_40001.f_3717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_40001.f_370C && iVar1 < Global_40001.f_3718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_40001.f_370D && iVar1 < Global_40001.f_3719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_40001.f_370E && iVar1 < Global_40001.f_371A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_40001.f_3710 && iVar1 < Global_40001.f_371C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_40001.f_3711 && iVar1 < Global_40001.f_3714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_40001.f_3712 && iVar1 < Global_40001.f_3715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_40001.f_3713 && iVar1 < Global_40001.f_3716)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_40001.f_4157 && iVar1 < Global_40001.f_4133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_40001.f_4152 && iVar1 < Global_40001.f_412E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_40001.f_4156 && iVar1 < Global_40001.f_4132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_40001.f_4155 && iVar1 < Global_40001.f_4131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_40001.f_414F && iVar1 < Global_40001.f_412B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_40001.f_4150 && iVar1 < Global_40001.f_412C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_40001.f_4153 && iVar1 < Global_40001.f_412F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_40001.f_4154 && iVar1 < Global_40001.f_4130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_40001.f_4151 && iVar1 < Global_40001.f_412D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_40001.f_4159 && iVar1 < Global_40001.f_4135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_40001.f_415A && iVar1 < Global_40001.f_4136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_40001.f_414E && iVar1 < Global_40001.f_412A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_40001.f_414D && iVar1 < Global_40001.f_4129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_40001.f_414C && iVar1 < Global_40001.f_4128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_40001.f_4158 && iVar1 < Global_40001.f_4134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_40001.f_415B && iVar1 < Global_40001.f_4137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_40001.f_415C && iVar1 < Global_40001.f_4138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_40001.f_415D && iVar1 < Global_40001.f_4139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_40001.f_415E && iVar1 < Global_40001.f_413A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_40001.f_41EF && iVar1 < Global_40001.f_4205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_40001.f_41F0 && iVar1 < Global_40001.f_4206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_40001.f_41F1 && iVar1 < Global_40001.f_4207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_40001.f_41F2 && iVar1 < Global_40001.f_4208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_40001.f_41F3 && iVar1 < Global_40001.f_4209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_40001.f_41F4 && iVar1 < Global_40001.f_420A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_40001.f_41F6 && iVar1 < Global_40001.f_420B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_40001.f_41F7 && iVar1 < Global_40001.f_420C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_40001.f_41F8 && iVar1 < Global_40001.f_420D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_40001.f_41F9 && iVar1 < Global_40001.f_420E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_40001.f_41FA && iVar1 < Global_40001.f_420F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_40001.f_41FB && iVar1 < Global_40001.f_4210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_40001.f_41FC && iVar1 < Global_40001.f_4211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_40001.f_4202 && iVar1 < Global_40001.f_4218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_40001.f_41FF && iVar1 < Global_40001.f_4214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_40001.f_4200 && iVar1 < Global_40001.f_4215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_40001.f_4201 && iVar1 < Global_40001.f_4216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_40001.f_41F5 && iVar1 < Global_40001.f_4217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_40001.f_4203 && iVar1 < Global_40001.f_4219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_40001.f_41FD && iVar1 < Global_40001.f_4212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_40001.f_41FE && iVar1 < Global_40001.f_4213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_40001.f_4204 && iVar1 < Global_40001.f_421A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_40001.f_4860 && iVar1 < Global_40001.f_48C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_40001.f_4861 && iVar1 < Global_40001.f_48C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_40001.f_4862 && iVar1 < Global_40001.f_48C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_40001.f_4863 && iVar1 < Global_40001.f_48C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_40001.f_4864 && iVar1 < Global_40001.f_48C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_40001.f_4865 && iVar1 < Global_40001.f_48C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_40001.f_4866 && iVar1 < Global_40001.f_48C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_40001.f_4867 && iVar1 < Global_40001.f_48C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_40001.f_4868 && iVar1 < Global_40001.f_48C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_40001.f_4869 && iVar1 < Global_40001.f_48CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_40001.f_486A && iVar1 < Global_40001.f_48CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_40001.f_486B && iVar1 < Global_40001.f_48CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_40001.f_486C && iVar1 < Global_40001.f_48CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_40001.f_486D && iVar1 < Global_40001.f_48CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_40001.f_486E && iVar1 < Global_40001.f_48CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_40001.f_486F && iVar1 < Global_40001.f_48D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_40001.f_4870 && iVar1 < Global_40001.f_48D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_40001.f_4871 && iVar1 < Global_40001.f_48D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_40001.f_4872 && iVar1 < Global_40001.f_48D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_40001.f_4873 && iVar1 < Global_40001.f_48D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_40001.f_4874 && iVar1 < Global_40001.f_48D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_40001.f_4875 && iVar1 < Global_40001.f_48D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_40001.f_4876 && iVar1 < Global_40001.f_48D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_40001.f_4877 && iVar1 < Global_40001.f_48D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_40001.f_4878 && iVar1 < Global_40001.f_48D9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_40001.f_4C98 && iVar1 < Global_40001.f_4C94)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_40001.f_4C99 && iVar1 < Global_40001.f_4C95)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_40001.f_4C9A && iVar1 < Global_40001.f_4C96)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_40001.f_4C9B && iVar1 < Global_40001.f_4C97)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_40001.f_5007 && iVar1 < Global_40001.f_500F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_40001.f_5008 && iVar1 < Global_40001.f_5010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_40001.f_5009 && iVar1 < Global_40001.f_5011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_40001.f_500A && iVar1 < Global_40001.f_5012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_40001.f_500B && iVar1 < Global_40001.f_5013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_40001.f_500C && iVar1 < Global_40001.f_5014)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_40001.f_5310 && iVar1 < Global_40001.f_5324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_40001.f_531C && iVar1 < Global_40001.f_5330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_40001.f_5313 && iVar1 < Global_40001.f_5327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_40001.f_531D && iVar1 < Global_40001.f_5331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_40001.f_5311 && iVar1 < Global_40001.f_5325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_40001.f_5321 && iVar1 < Global_40001.f_5335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_40001.f_531F && iVar1 < Global_40001.f_5333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_40001.f_5320 && iVar1 < Global_40001.f_5334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_40001.f_531B && iVar1 < Global_40001.f_532F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_40001.f_5322 && iVar1 < Global_40001.f_5336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_40001.f_531E && iVar1 < Global_40001.f_5332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_40001.f_531A && iVar1 < Global_40001.f_532E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_40001.f_5312 && iVar1 < Global_40001.f_5326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_40001.f_5314 && iVar1 < Global_40001.f_5328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_40001.f_5315 && iVar1 < Global_40001.f_5329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_40001.f_5316 && iVar1 < Global_40001.f_532A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_40001.f_5317 && iVar1 < Global_40001.f_532B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_40001.f_5318 && iVar1 < Global_40001.f_532C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_40001.f_5319 && iVar1 < Global_40001.f_532D)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_40001.f_56D1 && iVar1 < Global_40001.f_56ED)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_40001.f_56D2 && iVar1 < Global_40001.f_56EE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_40001.f_56D3 && iVar1 < Global_40001.f_56EF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_40001.f_56D4 && iVar1 < Global_40001.f_56F0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_40001.f_56D5 && iVar1 < Global_40001.f_56F1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_40001.f_56D6 && iVar1 < Global_40001.f_56F2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_40001.f_56D7 && iVar1 < Global_40001.f_56F3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_40001.f_56D8 && iVar1 < Global_40001.f_56F4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_40001.f_56D9 && iVar1 < Global_40001.f_56F5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_40001.f_56DA && iVar1 < Global_40001.f_56F6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_56DB && iVar1 < Global_40001.f_56F7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_56DC && iVar1 < Global_40001.f_56F8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_40001.f_56DD && iVar1 < Global_40001.f_56F9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_40001.f_56DE && iVar1 < Global_40001.f_56FA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_40001.f_56DF && iVar1 < Global_40001.f_56FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_40001.f_56E0 && iVar1 < Global_40001.f_56FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_40001.f_56E1 && iVar1 < Global_40001.f_56FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_40001.f_56E2 && iVar1 < Global_40001.f_56FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_40001.f_56E3 && iVar1 < Global_40001.f_56FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_40001.f_56E4 && iVar1 < Global_40001.f_5700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_40001.f_56E5 && iVar1 < Global_40001.f_5701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_40001.f_56E6 && iVar1 < Global_40001.f_5702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_40001.f_56E7 && iVar1 < Global_40001.f_5703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_40001.f_56E8 && iVar1 < Global_40001.f_5704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_40001.f_56E9 && iVar1 < Global_40001.f_5705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_40001.f_56EA && iVar1 < Global_40001.f_5706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_40001.f_56EB && iVar1 < Global_40001.f_5707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_40001.f_56EC && iVar1 < Global_40001.f_5708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_40001.f_5B88 && iVar1 < Global_40001.f_5B98)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_40001.f_5B89 && iVar1 < Global_40001.f_5B99)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_40001.f_5B8D && iVar1 < Global_40001.f_5B9D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_40001.f_5B90 && iVar1 < Global_40001.f_5BA0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_40001.f_5B95 && iVar1 < Global_40001.f_5BA5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_40001.f_5B8F && iVar1 < Global_40001.f_5B9F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_40001.f_5B87 && iVar1 < Global_40001.f_5B97)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_40001.f_5B8E && iVar1 < Global_40001.f_5B9E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_40001.f_5B94 && iVar1 < Global_40001.f_5BA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_40001.f_5B93 && iVar1 < Global_40001.f_5BA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_40001.f_5B8A && iVar1 < Global_40001.f_5B9A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_40001.f_5B8C && iVar1 < Global_40001.f_5B9C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_40001.f_5B96 && iVar1 < Global_40001.f_5BA6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_40001.f_5B92 && iVar1 < Global_40001.f_5BA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_40001.f_5B8B && iVar1 < Global_40001.f_5B9B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_40001.f_5B91 && iVar1 < Global_40001.f_5BA1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_40001.f_5BE2 && iVar1 < Global_40001.f_5BD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_40001.f_5BE3 && iVar1 < Global_40001.f_5BD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_40001.f_5BE8 && iVar1 < Global_40001.f_5BDB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_40001.f_5BE7 && iVar1 < Global_40001.f_5BDA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_40001.f_5BE5 && iVar1 < Global_40001.f_5BD8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_40001.f_5BEB && iVar1 < Global_40001.f_5BDE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_40001.f_5BED && iVar1 < Global_40001.f_5BE0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_40001.f_5BEE && iVar1 < Global_40001.f_5BE1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_40001.f_5BEC && iVar1 < Global_40001.f_5BDF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_40001.f_5BE4 && iVar1 < Global_40001.f_5BD7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_40001.f_5BE6 && iVar1 < Global_40001.f_5BD9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_40001.f_5BEA && iVar1 < Global_40001.f_5BDD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_40001.f_5BE9 && iVar1 < Global_40001.f_5BDC)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_40001.f_641C && iVar1 < Global_40001.f_641E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_40001.f_606B && iVar1 < Global_40001.f_6064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_40001.f_606C && iVar1 < Global_40001.f_6065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_40001.f_606D && iVar1 < Global_40001.f_6066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_40001.f_606E && iVar1 < Global_40001.f_6067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_40001.f_641D && iVar1 < Global_40001.f_641F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_40001.f_606F && iVar1 < Global_40001.f_6068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_40001.f_6070 && iVar1 < Global_40001.f_6069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_40001.f_6071 && iVar1 < Global_40001.f_606A)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_143()//Position - 0x83DA
{
	return 0;
}

int func_144()//Position - 0x83E3
{
	return 1;
}

int func_145()//Position - 0x83EC
{
	return 1;
}

int func_146()//Position - 0x83F5
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_147()//Position - 0x840E
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

int func_148(int iParam0)//Position - 0x84C9
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_139(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x850F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16240[iVar0]))
		{
			if (Global_16240[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x854A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0))
			{
				if (Global_16222[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_16222[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x85C6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[24]))
	{
		if (iParam0 == Global_11188.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_11188.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, bool bParam2)//Position - 0x86AE
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_153(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iVar2], 0))
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

int func_153(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x871F
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

var func_154()//Position - 0x87F7
{
	var uVar0;
	
	func_164(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_163(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_162(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_157(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_156(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_155(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_155(var uParam0, int iParam1)//Position - 0x883D
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

void func_156(var uParam0, int iParam1)//Position - 0x88C3
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_157(var uParam0, int iParam1)//Position - 0x88F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_161(*uParam0);
	iVar1 = func_159(*uParam0);
	if (iParam1 < 1 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_158(int iParam0, int iParam1)//Position - 0x8947
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

var func_159(int iParam0)//Position - 0x89E9
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_160(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_160(bool bParam0, int iParam1, int iParam2)//Position - 0x8A0E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161(var uParam0)//Position - 0x8A25
{
	return uParam0 & 15;
}

void func_162(var uParam0, int iParam1)//Position - 0x8A32
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_163(var uParam0, int iParam1)//Position - 0x8A6C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_164(var uParam0, int iParam1)//Position - 0x8AA7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_165(var uParam0, int iParam1)//Position - 0x8AE3
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = 4294967295;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_166(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_166(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_166(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_166(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_166(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_166(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_166(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_166(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_166(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
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
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
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
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
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
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
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
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
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
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
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
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
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
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
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
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
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
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
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
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
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
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
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
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
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
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
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
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
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
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_147())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
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
			if (func_147())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
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
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_D = 308;
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
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19E56.f_7F5D.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_121(Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19E56.f_7F5D.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19E56.f_7F5D.f_78E[uParam0->f_E];
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 19))
	{
		if (!func_121(Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 20))
	{
		if (!func_121(Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1)//Position - 0xA1DA
{
	struct<82> Var0;
	
	if (func_168(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_167(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_167(int iParam0, var uParam1, int iParam2)//Position - 0xA21C
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_19E56.f_2361.f_63.f_3A[128] && !Global_19E56.f_2361.f_63.f_3A[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19E56.f_2361.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_19E56.f_2361.f_63.f_3A[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_168(int iParam0)//Position - 0xA478
{
	return iParam0 < 3;
}

void func_169(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xA484
{
	if (func_165(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
		{
			func_174(iParam0);
			func_173(uParam1, &(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]));
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_170(iParam0, 1);
		}
	}
}

void func_170(int iParam0, bool bParam1)//Position - 0xA583
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_172(iParam0, 0))
		{
			func_171(iParam0, 1, 0);
			func_171(iParam0, 2, 0);
			func_171(iParam0, 3, 0);
			func_171(iParam0, 4, 0);
			func_171(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_171(iParam0, 0, 0);
	}
}

void func_171(int iParam0, int iParam1, bool bParam2)//Position - 0xA5E0
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
}

bool func_172(int iParam0, int iParam1)//Position - 0xA61B
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_173(var uParam0, var uParam1)//Position - 0xA63E
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_174(int iParam0)//Position - 0xA70A
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_165(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
			Global_11188.f_8B[iParam0] = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 13))
		{
			func_170(iParam0, 0);
		}
	}
}

int func_175(int iParam0)//Position - 0xA784
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			if (Global_16222[iVar0] == iParam0)
			{
				return Global_1622C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_176(int iParam0, var uParam1)//Position - 0xA7E7
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_180(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == 4294967295 && !func_179(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						MISC::SET_BIT(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 12);
		}
		func_178(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_177(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 11);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 27);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 27);
		}
	}
}

int func_177(int iParam0)//Position - 0xAA92
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

int func_178(int iParam0, var uParam1, var uParam2)//Position - 0xAB42
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
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
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
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

int func_179(int iParam0)//Position - 0xAD35
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		
		default:
	}
	return 0;
}

void func_180(var uParam0)//Position - 0xAD55
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
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
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

void func_181(int iParam0)//Position - 0xAE05
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_174(iParam0);
	func_170(iParam0, 0);
}

int func_182(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0xAE2C
{
	int iVar0;
	
	iVar0 = func_183(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_183(vector3 vParam0, int iParam1, int iParam2)//Position - 0xAF42
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_1592D[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_1592D[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_184(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_1592D[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_184(int iParam0)//Position - 0xAFD1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iParam0], 0);
}

int func_185(int iParam0)//Position - 0xAFE9
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_11188.f_8B[iParam0];
}

int func_186()//Position - 0xB005
{
	func_187();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_187()//Position - 0xB01E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_189(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_188(AUDIO::_0x0626A247D2405330());
			if (func_168(iVar0) && (!func_31(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_168(Global_19E56.f_933.f_21B.f_10CD))
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

int func_188(int iParam0)//Position - 0xB11B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_189(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_189(int iParam0)//Position - 0xB158
{
	if (func_168(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_190(char* sParam0, int iParam1)//Position - 0xB182
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_191(char* sParam0, int iParam1, int iParam2)//Position - 0xB199
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_192(int iParam0, bool bParam1, bool bParam2)//Position - 0xB1B2
{
	return func_45(iParam0, !bParam1, bParam2);
}

int func_193(int iParam0)//Position - 0xB1C5
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_194(var uParam0)//Position - 0xB22A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_195()//Position - 0xB29A
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!iLocal_1319)
		{
			func_198(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 4294967295);
			func_197(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 4294967295);
			iLocal_1319 = 1;
		}
	}
	else if (iLocal_1319)
	{
		func_197(0, 4294967295);
		func_198(0, 4294967295);
		iLocal_1319 = 0;
	}
	if (!iLocal_1317)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_1295, 1))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1317 = 1;
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1317 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1282)
		{
			case 0:
				if ((ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x) && !PED::IS_PED_INJURED(vLocal_1285.x)) && func_129(&(Local_1079[0 /*8*/])))
				{
					if (Local_1079[0 /*8*/].f_1 == 1)
					{
						if (func_196(AUDIO::_0x0626A247D2405330(), Local_1295, 1) > 500f)
						{
							func_301(1);
						}
					}
					else if (Local_1079[0 /*8*/].f_1 == 4)
					{
						if (func_196(AUDIO::_0x0626A247D2405330(), Local_1295, 1) > 250f)
						{
							func_301(1);
						}
					}
					else if (func_196(AUDIO::_0x0626A247D2405330(), Local_1295, 1) > 250f)
					{
						func_301(2);
					}
				}
				else if (func_196(AUDIO::_0x0626A247D2405330(), Local_1295, 1) > 250f)
				{
					func_301(2);
				}
				break;
			
			case 1:
				if (func_196(AUDIO::_0x0626A247D2405330(), Local_1295, 1) > 250f)
				{
					func_301(2);
				}
				break;
			
			case 3:
			case 2:
				if (!WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(Local_1298[0 /*2*/]) && func_196(AUDIO::_0x0626A247D2405330(), Local_1298[0 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1298[1 /*2*/])) && func_196(AUDIO::_0x0626A247D2405330(), Local_1298[1 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1298[2 /*2*/])) && func_196(AUDIO::_0x0626A247D2405330(), Local_1298[2 /*2*/], 1) > 250f)
					{
						func_301(3);
					}
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1295))
	{
		if ((ENTITY::IS_ENTITY_IN_WATER(Local_1295) && !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0)) && !WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
		{
			func_301(4);
		}
	}
}

float func_196(int iParam0, int iParam1, bool bParam2)//Position - 0xB503
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

void func_197(int iParam0, int iParam1)//Position - 0xB561
{
	Global_DB80 = iParam0;
	Global_DB81 = iParam1;
}

void func_198(int iParam0, int iParam1)//Position - 0xB573
{
	int iVar0;
	
	Global_DB82 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_10AB4)
	{
		if (iParam1 == 4294967295 || Global_10AB5[iVar0 /*9*/] == iParam1)
		{
			if (Global_10AB5[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_10AB5[iVar0 /*9*/].f_6 = iParam0;
				Global_10AB5[iVar0 /*9*/].f_7 = 1;
				Global_10AB5[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_199()//Position - 0xB5DE
{
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(vLocal_1285.x, 0))
		{
			func_200(vLocal_1285.x, &(vLocal_1285.f_2), 4294967295, 0, 0, 0, 3212836864, 0, 4294967295, 4294967295, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1295))
	{
		if (((!func_193(Local_1295) && ENTITY::IS_ENTITY_DEAD(Local_1295, 0)) && iLocal_1314) && func_196(Local_1295, AUDIO::_0x0626A247D2405330(), 1) > 200f)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1295);
		}
	}
}

int func_200(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xB65E
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

void func_201()//Position - 0xB835
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_91 == 1)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(0);
				CUTSCENE::REMOVE_CUTSCENE();
			}
			iLocal_88 = iLocal_92;
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			HUD::CLEAR_PRINTS();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			func_8(1);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (!func_275())
			{
				func_274(iLocal_88, &vVar0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fVar1);
				unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
				func_272(&uLocal_94, vVar0, 50f, 0);
			}
			func_271(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					func_270(&uLocal_94, iLocal_82);
					func_270(&uLocal_94, iLocal_83);
					func_270(&uLocal_94, iLocal_84);
					func_269(&uLocal_94, &Global_1604D);
					break;
				
				case 1:
					func_270(&uLocal_94, joaat("BURRITO2"));
					break;
			}
			while (!func_268(&uLocal_94))
			{
				SYSTEM::WAIT(0);
				func_199();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_261(0))
					{
						SYSTEM::WAIT(0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Global_1604D, "jhp2a_main"))
					{
						while (!func_205(&iLocal_1293, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							SYSTEM::WAIT(0);
							MISC::CLEAR_AREA_OF_VEHICLES(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					else
					{
						while (!func_205(&iLocal_1293, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							SYSTEM::WAIT(0);
							MISC::CLEAR_AREA_OF_VEHICLES(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1293, 0);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1293, 1, false);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1293, 2, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1293, 1084227584);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1293, true, true, 0);
					if (func_275())
					{
						func_202(iLocal_1293, 4294967295, 1);
					}
					else
					{
						unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
						PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_1293, 4294967295);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1295 = VEHICLE::CREATE_VEHICLE(joaat("BOXVILLE3"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1295, 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1295, 1084227584);
					}
					if (func_275())
					{
						func_202(0, 4294967295, 1);
					}
					else
					{
						unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
					}
					ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), 692.067f, -1004.812f, 21.9059f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), 359.5735f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
			}
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			bLocal_91 = false;
		}
	}
}

void func_202(int iParam0, int iParam1, int iParam2)//Position - 0xBB22
{
	if (func_204() && func_275())
	{
		while (Global_16C2B != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PED::CLEAR_PED_WETNESS(AUDIO::_0x0626A247D2405330());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			}
		}
		GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
		func_203(0);
	}
}

void func_203(int iParam0)//Position - 0xBBE6
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_16C30.f_14), 13);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 13);
	}
}

int func_204()//Position - 0xBC0F
{
	if (Global_16C30 == 10 || Global_16C30 == 9)
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xBC33
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_3B = 2;
	if (func_204())
	{
		if (func_260())
		{
			func_173(&(Global_18531.f_B3B.f_C), &Var0);
		}
	}
	else if (func_258())
	{
		func_173(&(Global_17998.f_B3B.f_C), &Var0);
	}
	if (Var0.f_42 != 0)
	{
		if (!func_257(0, &Var0))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Var0.f_42) || VEHICLE::IS_THIS_MODEL_A_BIKE(Var0.f_42))
			{
				STREAMING::REQUEST_MODEL(Var0.f_42);
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_42))
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_42, vParam1, fParam2, true, true, false);
					func_246(*iParam0, &Var0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_42);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (func_206(iParam0, 0, vParam1, fParam2, 1, 0))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_166(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_206(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0xBD3E
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_168(iParam1))
	{
		Var2.f_B = 12;
		Var2.f_1F = 49;
		Var2.f_51 = 2;
		func_167(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_19E56.f_933.f_21B.f_10C8) && Global_19E56.f_2361.f_63.f_3A[131])
		{
			Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_7, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_245(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_54, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_55, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_56);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_58);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_57);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5D, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5E, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A > 4294967295)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_241(iParam0, &(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1F), &(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_51));
				GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BODHI2"))
					{
						func_239(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
				}
				func_238(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_7, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_245(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_54, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_55, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_56);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_58);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_57);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5D, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5E, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A > 4294967295)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_241(iParam0, &(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1F), &(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_51));
				GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BODHI2"))
					{
						func_239(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
				}
				func_238(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2);
			if (STREAMING::HAS_MODEL_LOADED(Var2))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2, vParam2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_18);
				}
				if (func_245(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0 && Var2.f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_54, Var2.f_55, Var2.f_56);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_58);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_57);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var2.f_5D, Var2.f_5E, Var2.f_5F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Var2.f_59 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_59);
				}
				if (Var2.f_5A > 4294967295)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_5A == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_5A);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_5A);
						}
					}
				}
				func_241(iParam0, &(Var2.f_1F), &(Var2.f_51));
				GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*iParam0, Var2.f_60);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BAGGER") && !Global_19E56.f_2361.f_63.f_3A[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BODHI2"))
					{
						func_239(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_19E56.f_933.f_21B.f_10C8) && Global_19E56.f_2361.f_63.f_3A[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("TAILGATER"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_19E56.f_933.f_21B.f_10C8 = 1;
					func_207(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2);
				}
				if (bVar5)
				{
					func_238(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xCB83
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_168(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam1, 0))
	{
		if (iParam2 > Global_19E56.f_933.f_21B.f_953)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_136(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 1;
			}
			else
			{
				Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
			}
		}
		else
		{
			Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
		}
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_19 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56));
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_59 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5D), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5E), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5F));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		Global_19E56.f_933.f_21B.f_10C9[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_211(*iParam1, 0, &uVar0))
		{
			func_178(iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_51));
			if (bParam3)
			{
				Global_19E56.f_4E7A[iParam0 /*43*/].f_28 = 1;
				Global_19E56.f_4E7A[iParam0 /*43*/] = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_3 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_4 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_5 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_6 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_A = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_10 = !Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_13 = { Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B };
				Global_19E56.f_4E7A[iParam0 /*43*/].f_17 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_7 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[11];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_8 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[12];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_9 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[23];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_B = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[4];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_C = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[15];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_D = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[16];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_E = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[14];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_F = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[22];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_12 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[20];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_11 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[18];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_18 = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 11) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_19 = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 12) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1A = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 4) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1B = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 23) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1C = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 14) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1D = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 16) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1E = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 15) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_20 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[0] = unk_0xC28362974F1C5F02(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_27 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1F = func_210(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[0] = AUDIO::_GET_VEHICLE_HORN_HASH(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = 4294967295;
				}
				func_208(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_19E56.f_4E7A[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = 4294967295;
				}
				func_208(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6, 4294967295, iVar3, 0, &(Global_19E56.f_4E7A[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0xD797
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_209(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == 4294967295) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = 4294967295;
	iParam1 = 4294967295;
	*uParam4 = 4294967295;
	return 0;
}

bool func_209(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xD80A
{
	*uParam2 = 4294967295;
	*uParam3 = 4294967295;
	*uParam4 = 4294967295;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != 4294967295;
}

float func_210(int iParam0)//Position - 0xECFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_211(int iParam0, bool bParam1, var uParam2)//Position - 0xEDAC
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_236(iVar0, bParam1, uParam2) && !func_235(CAM::_0xDC9DA9E8789F5246())) && !func_219(iParam0))
	{
		return 0;
	}
	if (func_235(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_218(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_217(CAM::_0xDC9DA9E8789F5246()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_215(iParam0)) && !bVar1) && !(func_214(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_212(CAM::_0xDC9DA9E8789F5246())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_149(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("SENTINEL2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_212(int iParam0)//Position - 0xEF1A
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_213(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xEF61
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

int func_214(int iParam0)//Position - 0xF2BB
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xF2FD
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return 1;
			break;
		
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_216(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xF390
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_213(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)//Position - 0xF3D7
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_213(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xF41D
{
	switch (iParam0)
	{
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
			return 1;
			break;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xF452
{
	if (func_234(CAM::_0xDC9DA9E8789F5246()) || func_233(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xF481
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_223(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_HASH_FROM_PLAYER_HANDLE(CAM::_0xDC9DA9E8789F5246()))
		{
			if (func_221(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0xF538
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (func_222(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xF56E
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return 1;
			break;
	}
	return 0;
}

int func_223(int iParam0, bool bParam1)//Position - 0xF5C7
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_225(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_26862F.f_122 == iParam0)
				{
					return 1;
				}
				else if (func_224(iParam0) != 4294967295 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0xF622
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_252F9E.f_26F[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_225(int iParam0, int iParam1)//Position - 0xF65C
{
	if (iParam1 == 0)
	{
		if (func_232(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_231();
			break;
		
		case joaat("SABREGT"):
			if (Global_40001.f_370C)
			{
				return func_230();
			}
			break;
		
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_40001.f_370D)
			{
				return func_230();
			}
			break;
		
		case joaat("VIRGO3"):
			if (Global_40001.f_370B)
			{
				return func_230();
			}
			break;
		
		case joaat("MINIVAN"):
			if (Global_40001.f_370E)
			{
				return func_230();
			}
			break;
		
		case joaat("SLAMVAN"):
			if (Global_40001.f_3710)
			{
				return func_230();
			}
			break;
		
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_229();
			break;
		
		case joaat("COMET2"):
			if (Global_40001.f_486A)
			{
				return func_228();
			}
			break;
		
		case joaat("DIABLOUS"):
			if (Global_40001.f_486C)
			{
				return func_228();
			}
			break;
		
		case joaat("FCR"):
			if (Global_40001.f_4870)
			{
				return func_228();
			}
			break;
		
		case joaat("ELEGY2"):
			if (Global_40001.f_486D)
			{
				return func_228();
			}
			break;
		
		case joaat("NERO"):
			if (Global_40001.f_4874)
			{
				return func_228();
			}
			break;
		
		case joaat("ITALIGTB"):
			if (Global_40001.f_4872)
			{
				return func_228();
			}
			break;
		
		case joaat("SPECTER"):
			if (Global_40001.f_4877)
			{
				return func_228();
			}
			break;
		
		case joaat("TECHNICAL"):
			if (Global_40001.f_500D)
			{
				return func_227();
			}
			break;
		
		case joaat("INSURGENT"):
			if (Global_40001.f_500E)
			{
				return func_227();
			}
			break;
		
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_226();
			break;
		
		case joaat("GLENDALE"):
			return func_226();
			break;
		
		case joaat("IMPALER"):
			return func_226();
			break;
		
		case joaat("ISSI3"):
			return func_226();
			break;
		
		case joaat("GARGOYLE"):
			return func_226();
			break;
		
		case joaat("DOMINATOR"):
			return func_226();
			break;
		
		case joaat("DOMINATOR2"):
			return func_226();
			break;
		
		case joaat("IMPERATOR"):
			return func_226();
			break;
		
		case joaat("IMPERATOR2"):
			return func_226();
			break;
		
		case joaat("IMPERATOR3"):
			return func_226();
			break;
		
		case joaat("DEATHBIKE"):
			return func_226();
			break;
		
		case joaat("DEATHBIKE2"):
			return func_226();
			break;
		
		case joaat("DEATHBIKE3"):
			return func_226();
			break;
		
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_226();
			break;
	}
	return 0;
}

bool func_226()//Position - 0xF9D0
{
	return DLC::IS_DLC_PRESENT(1927191088);
}

bool func_227()//Position - 0xF9E1
{
	return DLC::IS_DLC_PRESENT(2067165443);
}

bool func_228()//Position - 0xF9F2
{
	return DLC::IS_DLC_PRESENT(3337689893);
}

bool func_229()//Position - 0xFA03
{
	return DLC::IS_DLC_PRESENT(210122941);
}

bool func_230()//Position - 0xFA14
{
	return DLC::IS_DLC_PRESENT(2400444888);
}

bool func_231()//Position - 0xFA25
{
	return DLC::IS_DLC_PRESENT(1630677557);
}

int func_232(int iParam0, int iParam1)//Position - 0xFA36
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 1;
			break;
		
		case joaat("SABREGT2"):
			if (!Global_40001.f_370C)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("TORNADO5"):
			if (!Global_40001.f_370D)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("VIRGO2"):
			if (!Global_40001.f_370B)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("MINIVAN2"):
			if (!Global_40001.f_370E)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SLAMVAN3"):
			if (!Global_40001.f_3710)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("FACTION3"):
			if (!Global_40001.f_370F)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("COMET3"):
			if (Global_40001.f_486A)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("DIABLOUS2"):
			if (Global_40001.f_486C)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("FCR2"):
			if (Global_40001.f_4870)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ELEGY"):
			if (Global_40001.f_486D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("NERO2"):
			if (Global_40001.f_4874)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ITALIGTB2"):
			if (Global_40001.f_4872)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SPECTER2"):
			if (Global_40001.f_4877)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("TECHNICAL3"):
			if (Global_40001.f_500D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("INSURGENT3"):
			if (Global_40001.f_500E)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0xFDAC
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_111())
			{
				return func_213(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)//Position - 0xFE0B
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_111())
			{
				return func_213(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_235(int iParam0)//Position - 0xFE6B
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_213(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_236(int iParam0, bool bParam1, var uParam2)//Position - 0xFEB2
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICEOLD1")) || iParam0 == joaat("POLICEOLD2")) || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("POLMAV")) || iParam0 == joaat("POLICEB")) || iParam0 == joaat("POLICET")) || iParam0 == joaat("RIOT")) || iParam0 == joaat("SHERIFF")) || iParam0 == joaat("PRANGER")) || iParam0 == joaat("SHERIFF2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("AMBULANCE") || iParam0 == joaat("FIRETRUK")) || iParam0 == joaat("TAXI")) || iParam0 == joaat("LGUARD")) || iParam0 == joaat("RIPLEY")) || iParam0 == joaat("DILETTANTE2")) || iParam0 == joaat("AIRBUS")) || iParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("BURRITO") || iParam0 == joaat("RUMPO2")) || iParam0 == joaat("SPEEDO")) || iParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("SCORCHER") || iParam0 == joaat("BMX")) || iParam0 == joaat("CRUISER")) || iParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("CADDY") || iParam0 == joaat("FORKLIFT")) || iParam0 == joaat("CADDY2")) || iParam0 == joaat("CRUSADER")) || iParam0 == joaat("TRIBIKE")) || iParam0 == joaat("TRIBIKE2")) || iParam0 == joaat("TRIBIKE3")) || iParam0 == joaat("TRACTOR")) || iParam0 == joaat("TRACTOR2")) || iParam0 == joaat("MOWER")) || iParam0 == joaat("TORNADO4")) || iParam0 == joaat("DOCKTUG")) || iParam0 == joaat("STRETCH")) || iParam0 == joaat("BISON2")) || iParam0 == joaat("BISON3")) || iParam0 == joaat("BENSON")) || iParam0 == joaat("POUNDER")) || iParam0 == joaat("SUBMERSIBLE")) || iParam0 == joaat("EMPEROR3")) || iParam0 == joaat("DUNE2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_217(CAM::_0xDC9DA9E8789F5246()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("BLAZER")) && iParam0 != joaat("BLAZER3")) && iParam0 != joaat("BLAZER4")) && iParam0 != joaat("BLAZER5")) && iParam0 != joaat("CHIMERA")) && iParam0 != joaat("TRAILERLARGE")) && iParam0 != joaat("TRAILERSMALL2")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("INSURGENT") || iParam0 == joaat("TECHNICAL")) || iParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_237(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("INSURGENT") || iParam0 == joaat("INSURGENT2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_237(int iParam0)//Position - 0x102CC
{
	switch (iParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
			return 1;
			break;
	}
	return 0;
}

void func_238(int iParam0, int iParam1)//Position - 0x102F5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			Global_16222[iVar0] = iParam0;
			Global_1622C[iVar0] = iParam1;
			Global_16236[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_16236[iVar0]))
			{
				Global_16252[iParam1 /*3*/][0] = 4294967295;
			}
			else
			{
				Global_16252[iParam1 /*3*/][1] = 4294967295;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_239(int iParam0)//Position - 0x10377
{
	if (!func_240(*iParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 5, !Global_19E56.f_2361.f_63.f_3A[119]);
	}
}

bool func_240(int iParam0)//Position - 0x103A2
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_241(int iParam0, var uParam1, var uParam2)//Position - 0x103B1
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_232(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_244(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_244(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_243(iParam0);
	if (func_242(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_242(int iParam0)//Position - 0x10574
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != 4294967295)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_243(var uParam0)//Position - 0x10650
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_244(int iParam0, int iParam1)//Position - 0x10690
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("FACTION3"):
				return 3;
				break;
		}
		iVar0 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0, 38);
		iVar1 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_245(var uParam0, int iParam1)//Position - 0x10775
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_19E56.f_4E7A.f_105)
	{
		*uParam0 = { Global_19E56.f_4E7A.f_10B };
		*iParam1 = Global_19E56.f_4E7A.f_10F;
		return 1;
	}
	return 0;
}

void func_246(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x107B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (!func_250(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_42 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, func_177(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_177(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("SANDKING") || uParam1->f_42 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, func_177(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_177(iVar1 + 1));
			}
		}
		if (uParam1->f_42 == joaat("NIGHTSHARK"))
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != 4294967295)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 15) || func_249(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_248())
		{
			uParam1->f_3E = 0;
			uParam1->f_3F = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_3E = 255;
			uParam1->f_3F = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == 4294967295 && !func_179(uParam1->f_42))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > 4294967295 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						func_247(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_247(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_241(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, func_177(iVar2 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SHEAVA") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("OMNIS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("LE7B"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == 4294967295)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42) && unk_0x86AFA41F8E0E6D36(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("AVENGER"))) && !((((Global_440000.f_CFE4 == 6 || Global_440000.f_CFE4 == 7) || Global_440000.f_CFE4 == 18) || Global_440000.f_CFE4 == 19) && Global_440000.f_2 == 20))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 23))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_247(int iParam0, int iParam1)//Position - 0x10D06
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TORNADO6"))
		{
			return;
		}
		if (iVar0 == 4294967295)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_248()//Position - 0x10D6B
{
	return DLC::IS_DLC_PRESENT(2603778600);
}

int func_249(int iParam0)//Position - 0x10D7C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x10DC7
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!func_256(CAM::_0xDC9DA9E8789F5246(), 4294967295))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (func_252(CAM::_0xDC9DA9E8789F5246()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (func_251(iParam0) != 4294967295)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x10E4E
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return 4294967295;
}

int func_252(int iParam0)//Position - 0x10E7D
{
	if (func_255(iParam0) == 233)
	{
		return func_253(iParam0);
	}
	return 4294967295;
}

int func_253(int iParam0)//Position - 0x10E9A
{
	if (func_254(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_254(int iParam0, int iParam1)//Position - 0x10EBD
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)//Position - 0x10EF8
{
	if (func_254(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_256(int iParam0, int iParam1)//Position - 0x10F1B
{
	int iVar0;
	
	if (func_110(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (AUDIO::_0x0626A247D2405330() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_257(int iParam0, var uParam1)//Position - 0x10F68
{
	struct<82> Var0;
	
	if (!func_168(iParam0))
	{
		return 0;
	}
	if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam0 /*98*/] == uParam1->f_42 && MISC::GET_HASH_KEY(&(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam0 /*98*/].f_1B)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam0 /*98*/] == uParam1->f_42 && MISC::GET_HASH_KEY(&(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam0 /*98*/].f_1B)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_B = 12;
	Var0.f_1F = 49;
	Var0.f_51 = 2;
	func_167(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_42 && MISC::GET_HASH_KEY(&(Var0.f_1B)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_167(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_42 && MISC::GET_HASH_KEY(&(Var0.f_1B)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_258()//Position - 0x110C2
{
	return func_259(&(Global_17998.f_B3B));
}

int func_259(var uParam0)//Position - 0x110D5
{
	if (uParam0->f_C.f_42 == 0)
	{
		return 0;
	}
	if (!func_139(uParam0->f_C.f_42, 0))
	{
		return 0;
	}
	if (uParam0->f_C.f_42 == joaat("STUNT") && func_53(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_260()//Position - 0x11134
{
	return func_259(&(Global_18531.f_B3B));
}

int func_261(bool bParam0)//Position - 0x11147
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	func_269(&uLocal_94, &Global_1604D);
	func_270(&uLocal_94, joaat("s_m_m_armoured_01"));
	func_270(&uLocal_94, iLocal_84);
	func_270(&uLocal_94, iLocal_85);
	if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && STREAMING::HAS_MODEL_LOADED(iLocal_85))
	{
		if (bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1295))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_15EE0[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15EE0[0], true, 1);
					Local_1295 = Global_15EE0[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_15EE0.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15EE0.f_9[0], true, 1);
					vLocal_1285.x = Global_15EE0.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_270(&uLocal_94, iLocal_83);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_83) && BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_1604D))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_1604D, "jhp2a_main"))
				{
					BRAIN::WAYPOINT_RECORDING_GET_COORD(&Global_1604D, 23, &vVar1);
					MISC::CLEAR_AREA_OF_VEHICLES(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = VEHICLE::CREATE_VEHICLE(iLocal_83, vVar1, 119.4988f, true, true, false);
					vLocal_1285.x = PED::CREATE_PED_INSIDE_VEHICLE(Local_1295, 26, iLocal_82, 4294967295, 1, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1295, 1084227584);
					BRAIN::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, &Global_1604D, 786475, 23, 16, 4294967295, 12f, 0, 1073741824);
				}
				else
				{
					BRAIN::WAYPOINT_RECORDING_GET_COORD(&Global_1604D, 29, &vVar1);
					MISC::CLEAR_AREA_OF_VEHICLES(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = VEHICLE::CREATE_VEHICLE(iLocal_83, vVar1, 134.0011f, true, true, false);
					vLocal_1285.x = PED::CREATE_PED_INSIDE_VEHICLE(Local_1295, 26, iLocal_82, 4294967295, 1, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1295, 1084227584);
					BRAIN::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, &Global_1604D, 786475, 29, 16, 4294967295, 12f, 0, 1073741824);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1295))
		{
			func_267(Local_1295, 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1295, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1295, true, 1);
				VEHICLE::_0x192547247864DFDD(Local_1295, true);
				VEHICLE::_0x2B6747FAA9DB9D6B(Local_1295, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x))
		{
			if (!PED::IS_PED_INJURED(vLocal_1285.x))
			{
				ENTITY::SET_ENTITY_HEALTH(vLocal_1285.x, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_1285.x, iLocal_1284);
				PED::SET_PED_ACCURACY(vLocal_1285.x, 5);
				PED::SET_PED_CAN_BE_TARGETTED(vLocal_1285.x, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(vLocal_1285.x, 1, false);
				WEAPON::GIVE_WEAPON_TO_PED(vLocal_1285.x, joaat("weapon_pistol"), 15, false, true);
				func_266(&uLocal_1105, 3, vLocal_1285.x, "JHP2A_Driver", 0, 1);
				func_265(&(Local_1079[0 /*8*/]), 0, 0, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x))
		{
			func_264();
			func_265(&(Local_1079[1 /*8*/]), 0, 0, 1);
			func_262(&uLocal_94, joaat("BOXVILLE3"));
			func_262(&uLocal_94, joaat("s_m_m_armoured_01"));
			func_262(&uLocal_94, iLocal_84);
			func_262(&uLocal_94, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_262(var uParam0, int iParam1)//Position - 0x1143E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					func_263(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_263(var uParam0)//Position - 0x114A3
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 4294967295;
}

void func_264()//Position - 0x114BE
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1295))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1295, 0) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1299))
		{
			iLocal_1299 = OBJECT::CREATE_OBJECT(iLocal_85, unk_0x8000C77B5F336760(Local_1295, true), true, true, false);
			OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1299, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1299, Local_1295, 4294967295, 4294967295, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1295, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1295, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1299, false, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1298[0 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[0 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[0 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, unk_0x8000C77B5F336760(Local_1295, true), true, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1298[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1298[0 /*2*/], Local_1295, 4294967295, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_SOMETHING(Local_1298[0 /*2*/], true);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1298[1 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[1 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[1 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, unk_0x8000C77B5F336760(Local_1295, true), true, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1298[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1298[1 /*2*/], Local_1295, 4294967295, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_SOMETHING(Local_1298[1 /*2*/], true);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1298[2 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[2 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[2 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, unk_0x8000C77B5F336760(Local_1295, true), true, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1298[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1298[2 /*2*/], Local_1295, 4294967295, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_SOMETHING(Local_1298[2 /*2*/], true);
			}
		}
	}
}

int func_265(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11799
{
	if (*uParam0 == 4294967295)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_266(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x11819
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

void func_267(int iParam0, int iParam1)//Position - 0x118B4
{
	Global_16C30.f_16[iParam1] = iParam0;
}

int func_268(var uParam0)//Position - 0x118C8
{
	if (func_276(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_269(var uParam0, char* sParam1)//Position - 0x118E1
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 < uParam0->f_176)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_176[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_176[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_176[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == 4294967295)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		BRAIN::REQUEST_WAYPOINT_RECORDING(sParam1);
		uParam0->f_176[iVar1 /*5*/] = 1;
		uParam0->f_176[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_176[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_270(var uParam0, int iParam1)//Position - 0x119A8
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == 4294967295)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_MODEL(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = MISC::GET_GAME_TIMER();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

void func_271(var uParam0)//Position - 0x11A51
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_97[iVar0 /*5*/])
		{
			uParam0->f_97[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_CA[iVar0 /*7*/])
		{
			uParam0->f_CA[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			uParam0->f_111[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			uParam0->f_176[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_1DB[iVar0 /*6*/])
		{
			uParam0->f_1DB[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_290[iVar0 /*6*/])
		{
			uParam0->f_290[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_2AF[iVar0 /*7*/])
		{
			uParam0->f_2AF[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			uParam0->f_2E1[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			uParam0->f_2FB[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_36F[iVar0 /*5*/])
		{
			uParam0->f_36F[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_3A2[iVar0 /*5*/])
		{
			uParam0->f_3A2[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_30B[iVar0 /*5*/])
		{
			uParam0->f_30B[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_364)
	{
		uParam0->f_364.f_2 = 1;
	}
	if (uParam0->f_35C)
	{
		uParam0->f_35C.f_2 = 1;
	}
	if (uParam0->f_360)
	{
		uParam0->f_360.f_2 = 1;
	}
}

int func_272(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x11CA9
{
	if (func_273(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_364)
	{
		if (func_121(uParam0->f_364.f_4, vParam1, 0) && uParam0->f_364.f_A == fParam2)
		{
			uParam0->f_364.f_2 = 0;
			if (!uParam0->f_364.f_1)
			{
				uParam0->f_3D6 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam1, fParam2, iParam3);
	uParam0->f_364 = 1;
	uParam0->f_364.f_3 = MISC::GET_GAME_TIMER();
	uParam0->f_364.f_4 = { vParam1 };
	uParam0->f_364.f_7 = { 0f, 0f, 0f };
	uParam0->f_364.f_A = fParam2;
	uParam0->f_3D6 = 1;
	return 1;
}

int func_273(vector3 vParam0)//Position - 0x11D61
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0, var uParam1, var uParam2)//Position - 0x11D8B
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_275()//Position - 0x11DE2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 13);
}

int func_276(var uParam0)//Position - 0x11DF6
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_3D6)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
						func_263(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_111[iVar1 /*5*/])
			{
				if (!uParam0->f_111[iVar1 /*5*/].f_1)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_111[iVar1 /*5*/].f_4))
					{
						uParam0->f_111[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_111[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_111[iVar1 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(uParam0->f_111[iVar1 /*5*/].f_4);
						func_263(&(uParam0->f_111[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_176[iVar1 /*5*/])
			{
				if (!uParam0->f_176[iVar1 /*5*/].f_1)
				{
					if (BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_176[iVar1 /*5*/].f_4))
					{
						uParam0->f_176[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_176[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_176[iVar1 /*5*/].f_1)
					{
						BRAIN::REMOVE_WAYPOINT_RECORDING(uParam0->f_176[iVar1 /*5*/].f_4);
						func_263(&(uParam0->f_176[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_290[iVar1 /*6*/])
			{
				if (!uParam0->f_290[iVar1 /*6*/].f_1)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_290[iVar1 /*6*/].f_5))
					{
						uParam0->f_290[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_290[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_290[iVar1 /*6*/].f_1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_290[iVar1 /*6*/].f_5));
						func_263(&(uParam0->f_290[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_1DB[iVar1 /*6*/])
			{
				if (!uParam0->f_1DB[iVar1 /*6*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4))
					{
						uParam0->f_1DB[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_1DB[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_1DB[iVar1 /*6*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4);
						func_263(&(uParam0->f_1DB[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_CA[iVar1 /*7*/])
			{
				if (!uParam0->f_CA[iVar1 /*7*/].f_1)
				{
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_CA[iVar1 /*7*/].f_4))
					{
						uParam0->f_CA[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_CA[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_CA[iVar1 /*7*/].f_1)
					{
						WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_CA[iVar1 /*7*/].f_4);
						func_263(&(uParam0->f_CA[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_97[iVar1 /*5*/])
			{
				if (!uParam0->f_97[iVar1 /*5*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_97[iVar1 /*5*/].f_4))
					{
						uParam0->f_97[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_97[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_97[iVar1 /*5*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_97[iVar1 /*5*/].f_4);
						func_263(&(uParam0->f_97[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_2E1[iVar1 /*5*/])
			{
				if (!uParam0->f_2E1[iVar1 /*5*/].f_1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_2E1[iVar1 /*5*/].f_4, false, 4294967295))
					{
						uParam0->f_2E1[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_2E1[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2E1[iVar1 /*5*/].f_1)
					{
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_2E1[iVar1 /*5*/].f_4);
						func_263(&(uParam0->f_2E1[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_2FB[iVar1 /*5*/])
			{
				if (!uParam0->f_2FB[iVar1 /*5*/].f_1)
				{
					if (INTERIOR::IS_INTERIOR_READY(uParam0->f_2FB[iVar1 /*5*/].f_4))
					{
						uParam0->f_2FB[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_2FB[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2FB[iVar1 /*5*/].f_1)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_2FB[iVar1 /*5*/].f_4);
						func_263(&(uParam0->f_2FB[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2AF[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_2AF[iVar1 /*7*/])
				{
					iVar2 = GRAPHICS::_0x9B6E70C5CEEF4EEB(uParam0->f_2AF[iVar1 /*7*/].f_5);
					if (!uParam0->f_2AF[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								func_263(&(uParam0->f_2AF[iVar1 /*7*/]));
								break;
							
							case 4294967295:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_2AF[iVar1 /*7*/].f_5);
								uParam0->f_2AF[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (INTERIOR::IS_INTERIOR_READY(uParam0->f_2AF[iVar1 /*7*/].f_6))
				{
					uParam0->f_2AF[iVar1 /*7*/].f_5 = GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_2AF[iVar1 /*7*/].f_4);
					uParam0->f_2AF[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
					uParam0->f_2AF[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_2AF[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_2AF[iVar1 /*7*/])
					{
						if (uParam0->f_2AF[iVar1 /*7*/].f_1)
						{
							GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_2AF[iVar1 /*7*/].f_5);
							func_263(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_263(&(uParam0->f_2AF[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_36F[iVar1 /*5*/])
			{
				if (!uParam0->f_36F[iVar1 /*5*/].f_1)
				{
					if (unk_0x78415861AA85912D(uParam0->f_36F[iVar1 /*5*/].f_4))
					{
						uParam0->f_36F[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_36F[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_36F[iVar1 /*5*/].f_1)
					{
						BRAIN::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_36F[iVar1 /*5*/].f_4);
						func_263(&(uParam0->f_36F[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_3A2[iVar1 /*5*/])
			{
				if (!uParam0->f_3A2[iVar1 /*5*/].f_1)
				{
					if (AUDIO::PREPARE_ALARM(uParam0->f_3A2[iVar1 /*5*/].f_4))
					{
						uParam0->f_3A2[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_3A2[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3A2[iVar1 /*5*/].f_1)
					{
						func_263(&(uParam0->f_3A2[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_30B)
		{
			if (uParam0->f_30B[iVar1 /*5*/])
			{
				if (!uParam0->f_30B[iVar1 /*5*/].f_1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1))
					{
						uParam0->f_30B[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_30B[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_30B[iVar1 /*5*/].f_1)
					{
						HUD::CLEAR_ADDITIONAL_TEXT(iVar1, true);
						func_263(&(uParam0->f_30B[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_35C)
		{
			if (!uParam0->f_35C.f_1)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_35C.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_35C.f_2)
			{
				if (uParam0->f_35C.f_1)
				{
					STREAMING::REMOVE_PTFX_ASSET();
					func_263(&(uParam0->f_35C));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_360)
		{
			if (!uParam0->f_360.f_1)
			{
				if (unk_0xC97ADB25127C0F86())
				{
					uParam0->f_360.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_360.f_2)
			{
				if (uParam0->f_360.f_1)
				{
					PHYSICS::ROPE_UNLOAD_TEXTURES();
					func_263(&(uParam0->f_360));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_364 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_364.f_1)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_364.f_1 = 1;
					if (uParam0->f_3D7)
					{
						unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
						func_277(uParam0);
						uParam0->f_3D7 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_364.f_2)
			{
				BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				func_263(&(uParam0->f_364));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_3BC[iVar1 /*5*/])
			{
				if (!uParam0->f_3BC[iVar1 /*5*/].f_1)
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_3BC[iVar1 /*5*/].f_4))
					{
						uParam0->f_3BC[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_3BC[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3BC[iVar1 /*5*/].f_1)
					{
						func_263(&(uParam0->f_3BC[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_3D6 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_277(var uParam0)//Position - 0x127C6
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		BRAIN::ENABLE_SCRIPT_BRAIN_SET();
		func_263(&(uParam0->f_364));
	}
}

void func_278()//Position - 0x127E2
{
	if (bLocal_93 && (func_279() || CAM::IS_SCREEN_FADED_OUT()))
	{
		func_8(1);
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
}

int func_279()//Position - 0x1280B
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_16C30 == 7 || Global_16C30 == 8)
	{
		return 1;
	}
	return 0;
}

void func_280()//Position - 0x12838
{
	vector3 vVar0;
	var uVar1;
	
	func_287();
	PED::ADD_RELATIONSHIP_GROUP("SECDRIVER", &iLocal_1284);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1284, 2761840924);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1284, 4111159735);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2761840924, iLocal_1284);
	if (func_6(0) || func_204())
	{
		iLocal_92 = 0;
		if (func_204())
		{
			if (Global_155D0)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_1604D, "jhp2a_alt", 64);
		if (func_204())
		{
			func_274(iLocal_92, &vVar0, &uVar1);
			func_286(vVar0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_261(1))
		{
			SYSTEM::WAIT(0);
			func_285(&uLocal_94);
		}
	}
	func_284(&uLocal_94, "JHP2A", 0);
	GRAPHICS::_0x54E22EA2C1956A8D(0.1f);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
	func_282(88);
	func_266(&uLocal_1105, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
	func_266(&uLocal_1105, 3, 0, "Lester", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("BOXVILLE3"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), true);
	if (WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"), 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_briefcase"));
	}
	func_281();
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1604D))
	{
	}
	iLocal_1300 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	Global_10BFC = 1;
}

void func_281()//Position - 0x129AC
{
	Global_155D1 = 1;
}

void func_282(int iParam0)//Position - 0x129B9
{
	Global_15C5E = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		
		case 68:
			func_283(11);
			break;
		
		case 78:
			func_283(14);
			break;
		
		case 79:
			func_283(3);
			break;
		
		default:
			break;
	}
}

void func_283(int iParam0)//Position - 0x12A47
{
	MISC::SET_BIT(&Global_15C5E, iParam0);
}

int func_284(var uParam0, char* sParam1, int iParam2)//Position - 0x12A59
{
	if (uParam0->f_30B[iParam2 /*5*/].f_1 || uParam0->f_30B[iParam2 /*5*/])
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_30B[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_30B[iParam2 /*5*/].f_2 = 0;
			uParam0->f_3D6 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			HUD::_REQUEST_ADDITIONAL_TEXT_2(sParam1, iParam2);
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
		}
		uParam0->f_30B[iParam2 /*5*/] = 1;
		uParam0->f_30B[iParam2 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_30B[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

void func_285(var uParam0)//Position - 0x12AFD
{
	func_276(uParam0);
}

void func_286(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x12B0C
{
	if (func_204())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
		}
		Global_16C2C = { vParam0 };
		Global_16C2F = uParam1;
		Global_16C2B = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_16C30.f_14), 14);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_16C30.f_14), 24);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 24);
		}
		func_203(1);
	}
}

void func_287()//Position - 0x12BA1
{
	func_295(&(Local_1079[0 /*8*/]), 78104/*func_296*/, "Van Driver Manager");
	func_295(&(Local_1079[1 /*8*/]), 76751/*func_288*/, "Cargo Manager");
}

void func_288(var uParam0)//Position - 0x12BCF
{
	if (!func_130(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
		{
			func_293(Local_1298[0 /*2*/], 1);
			func_293(Local_1298[1 /*2*/], 1);
			func_293(Local_1298[2 /*2*/], 1);
			iLocal_1314 = 1;
			func_292(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_291(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, 4294967295))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1306) > 150)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1299, AUDIO::_0x0626A247D2405330(), 0))
							{
								if ((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_molotov"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_bzgas"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_knife"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_unarmed"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1299, joaat("weapon_hit_by_water_cannon"), 0))
								{
									WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1299);
								}
								else
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1299);
									iLocal_1306 = MISC::GET_GAME_TIMER();
									iLocal_1305++;
									if (iLocal_1305 >= 3)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "Lock_Destroyed", iLocal_1299, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(4294967295, "Lock_Damage", iLocal_1299, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1299);
						}
					}
					if (((((iLocal_1305 >= 3 || ENTITY::IS_ENTITY_DEAD(iLocal_1299, 0)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1295, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1295, 3)) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1295, 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1295, 3) > 0f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1299))
						{
							OBJECT::DELETE_OBJECT(&iLocal_1299);
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1295, 2))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1295, 2, 0, 0);
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1295, 3))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1295, 3, 0, 0);
						}
						iLocal_1315 = 0;
						iLocal_1316 = 0;
						func_293(Local_1298[0 /*2*/], 0);
						func_293(Local_1298[1 /*2*/], 0);
						func_293(Local_1298[2 /*2*/], 0);
						func_290(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_289(Local_1295))
					{
						if (MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1295, 2)) > 0.5f && MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1295, 3)) > 0.5f)
						{
							func_290(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_289(Local_1295))
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1295, 2))
						{
							if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1295, 2))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1295, 2, 1, 0);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1295, 2, 0, 0, 1);
								iLocal_1315 = 1;
							}
						}
						else
						{
							iLocal_1315 = 1;
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1295, 3))
						{
							if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1295, 3))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1295, 3, 1, 0);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1295, 3, 0, 0, 1);
								iLocal_1316 = 1;
							}
						}
						else
						{
							iLocal_1316 = 1;
						}
						if (iLocal_1315 && iLocal_1316)
						{
							iLocal_1314 = 1;
							func_290(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_130(uParam0))
	{
	}
}

int func_289(int iParam0)//Position - 0x12EBF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_290(var uParam0, int iParam1, int iParam2)//Position - 0x12EE0
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_291(var uParam0, char* sParam1)//Position - 0x12F06
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_2E1[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == 4294967295)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, 4294967295);
		uParam0->f_2E1[iVar1 /*5*/] = 1;
		uParam0->f_2E1[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_2E1[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

void func_292(var uParam0)//Position - 0x12FD0
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = 0;
		uParam0->f_1 = 4294967295;
	}
}

void func_293(int iParam0, bool bParam1)//Position - 0x12FF5
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, 1, bParam1);
			ENTITY::SET_ENTITY_COLLISION(iParam0, true, 0);
			PHYSICS::ACTIVATE_PHYSICS(iParam0);
		}
		if (bParam1)
		{
			vVar0 = { func_294(unk_0x8000C77B5F336760(iParam0, true) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f), IntToFloat(-MISC::GET_RANDOM_INT_IN_RANGE(3, 6)), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f))) };
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 1, vVar0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f)), 0, 1, 1, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 5, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), 0, 1, 1, 0);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Local_1295, true);
		}
	}
}

Vector3 func_294(vector3 vParam0)//Position - 0x130B2
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

int func_295(var uParam0, int iParam1, char* sParam2)//Position - 0x130F1
{
	if (*uParam0 != 4294967295)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_296(var uParam0)//Position - 0x13118
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	float fVar4;
	
	if (!func_130(uParam0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x) || PED::IS_PED_INJURED(vLocal_1285.x)) || (ENTITY::DOES_ENTITY_EXIST(Local_1295) && func_196(Local_1295, vLocal_1285.x, 1) > 200f)) || (!PED::IS_PED_IN_ANY_VEHICLE(vLocal_1285.x, 0) && func_196(Local_1295, vLocal_1285.x, 1) > 200f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0))
			{
				VEHICLE::_0x2B6747FAA9DB9D6B(Local_1295, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vLocal_1285);
			func_292(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!ENTITY::DOES_ENTITY_EXIST(Local_1295) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0)) || !PED::IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0)))
			{
				iLocal_1307 = 0;
				iLocal_1308 = 0;
				StringCopy(&cLocal_1309, "", 24);
				func_290(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1295))
					{
						if ((!iLocal_1302 && (MISC::GET_GAME_TIMER() - iLocal_1304) > 500) && fLocal_1303 >= 4f)
						{
							iLocal_1302 = 1;
							iLocal_1301++;
						}
					}
					else if (iLocal_1302)
					{
						iLocal_1304 = MISC::GET_GAME_TIMER();
						iLocal_1302 = 0;
					}
					vVar1 = { func_294(unk_0x8000C77B5F336760(iVar0, true) - unk_0x8000C77B5F336760(Local_1295, true)) };
					vVar2 = { ENTITY::GET_ENTITY_VELOCITY(Local_1295) - ENTITY::GET_ENTITY_VELOCITY(iVar0) };
					fLocal_1303 = func_300(vVar2, vVar1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295, AUDIO::_0x0626A247D2405330(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, AUDIO::_0x0626A247D2405330(), 1)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 124)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 29)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 116)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 121)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 22)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 24)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 46)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 136)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 86)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 87)) || PED::IS_PED_BEING_JACKED(vLocal_1285.x)) || FIRE::IS_ENTITY_ON_FIRE(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 4, 0);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0))
						{
							if ((ENTITY::IS_ENTITY_STATIC(AUDIO::_0x0626A247D2405330()) || fLocal_1303 > 0.5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, 0f, 2f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1295, 0f, 10f, 2f), 4.5f, 0, true, 0))
							{
								if (!AUDIO::IS_HORN_ACTIVE(Local_1295))
								{
									if (iLocal_1318 == 4294967295)
									{
										iLocal_1318 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1318) > 5000)
									{
										VEHICLE::START_VEHICLE_HORN(Local_1295, 2000, 1330140418, 0);
									}
								}
								else
								{
									iLocal_1318 = 4294967295;
								}
							}
						}
						if (func_299(Local_1295, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_269(&uLocal_94, "jhp2a_airport");
						}
						if (!func_298(vLocal_1285.x, 4059134695, 1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1295, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, true, 0))
							{
								if (BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED("jhp2a_airport"))
								{
									iLocal_1307 = 0;
									iLocal_1308 = 0;
									StringCopy(&cLocal_1309, "", 24);
									func_290(uParam0, 2, 0);
								}
							}
							else
							{
								BRAIN::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, &Global_1604D, 786475, 4294967295, 24, 4294967295, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295, AUDIO::_0x0626A247D2405330(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, AUDIO::_0x0626A247D2405330(), 1)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 124)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 29)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 116)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 121)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 22)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 24)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 46)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 136)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 86)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 87)) || PED::IS_PED_BEING_JACKED(vLocal_1285.x)) || FIRE::IS_ENTITY_ON_FIRE(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 5, 0);
					}
					else if (!func_298(vLocal_1285.x, 4059134695, 1))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1295, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, true, 0))
						{
							iLocal_1307 = 0;
							iLocal_1308 = 0;
							StringCopy(&cLocal_1309, "", 24);
							func_290(uParam0, 3, 0);
						}
						else
						{
							BRAIN::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(vLocal_1285.x, Local_1295, "jhp2a_airport", 786475, 4294967295, 24, 4294967295, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1295, AUDIO::_0x0626A247D2405330(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_1285.x, AUDIO::_0x0626A247D2405330(), 1)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 124)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 29)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 116)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 121)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 22)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 24)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 46)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 61)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 136)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 86)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 87)) || PED::IS_PED_BEING_JACKED(vLocal_1285.x)) || FIRE::IS_ENTITY_ON_FIRE(Local_1295)) || PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_1295, 1)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 5, 0);
					}
					else if (PED::IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 1))
					{
						if (!func_298(vLocal_1285.x, 451360105, 1))
						{
							BRAIN::TASK_LEAVE_VEHICLE(vLocal_1285.x, Local_1295, 0);
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1295, 2);
						if (!func_298(vLocal_1285.x, 242628503, 1))
						{
							BRAIN::OPEN_SEQUENCE_TASK(&iLocal_1283);
							BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1093.486f, -2471.669f, 13.0716f, 1f, 4294967295, 1048576000, 0, 1193033728);
							BRAIN::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 4294967295, 1);
							CUTSCENE::_0x8D9DF6ECA8768583(iLocal_1283);
							BRAIN::TASK_PERFORM_SEQUENCE(vLocal_1285.x, iLocal_1283);
							BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_1283);
						}
					}
					break;
				
				case 4:
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1295, 0, 1))
					{
						iVar3++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1295, 1, 1))
					{
						iVar3++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1295, 4, 1))
					{
						iVar3++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1295, 5, 1))
					{
						iVar3++;
					}
					if (((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_1295)) <= 0f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1295) <= 250f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1295) <= 400f) || PED::IS_PED_INJURED(vLocal_1285.x)) || iVar3 >= 2) || iLocal_1301 > 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_1295, 0))
						{
							VEHICLE::_0x2B6747FAA9DB9D6B(Local_1295, 0);
						}
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 5, 0);
					}
					else if (!func_298(vLocal_1285.x, 3021937204, 1))
					{
						BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(vLocal_1285.x, Local_1295, AUDIO::_0x0626A247D2405330(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && !ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0))
						{
							if (!func_81(Local_1295))
							{
								if (!func_298(vLocal_1285.x, 2176111930, 1))
								{
									NETWORK::_0x5E3AA4CA2B6FB0EE(vLocal_1285.x);
									BRAIN::TASK_VEHICLE_TEMP_ACTION(vLocal_1285.x, Local_1295, 5, 4294967295);
								}
							}
							else if (!func_298(vLocal_1285.x, 451360105, 1))
							{
								BRAIN::TASK_LEAVE_VEHICLE(vLocal_1285.x, Local_1295, 256);
							}
						}
						else if (!func_298(vLocal_1285.x, 780511057, 1))
						{
							PED::SET_PED_CAN_BE_TARGETTED(vLocal_1285.x, true);
							BRAIN::TASK_COMBAT_PED(vLocal_1285.x, AUDIO::_0x0626A247D2405330(), 0, 16);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1295) && !ENTITY::IS_ENTITY_DEAD(Local_1295, 0))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_1295, 2, true);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_1295, 3, true);
					}
					break;
				}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(vLocal_1285.x) && !PED::IS_PED_INJURED(vLocal_1285.x)) && !PED::IS_CONVERSATION_PED_DEAD(vLocal_1285.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1307)
					{
						case 0:
							if (func_36() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (PED::IS_PED_BEING_JACKED(vLocal_1285.x))
								{
									func_56(vLocal_1285.x, "JACKED_GENERIC", 10);
								}
								else
								{
									func_56(vLocal_1285.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1307++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0) || iLocal_1282 == 3)
							{
								if (!PED::IS_PED_IN_VEHICLE(vLocal_1285.x, Local_1295, 0))
								{
									iLocal_1307 = 4;
								}
								else
								{
									iLocal_1307++;
								}
							}
							else if (func_36() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (func_297(&uLocal_1105, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1307++;
								}
							}
							break;
						
						case 2:
							if (func_36() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									fVar4 = SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(vLocal_1285.x, true));
									if ((((((iLocal_1302 || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 122)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 123)) || PED::HAS_PED_RECEIVED_EVENT(vLocal_1285.x, 124)) || fVar4 < 49f) && (MISC::GET_GAME_TIMER() - iLocal_1308) > 5000) && fVar4 < 225f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_ATT_M", 24);
										}
									}
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									if (MISC::ARE_STRINGS_EQUAL(&cLocal_1309, "GENERIC_CURSE_HIGH"))
									{
										func_56(vLocal_1285.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1307++;
									}
									else
									{
										if (func_297(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
										{
											iLocal_1307++;
										}
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_37() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								iLocal_1308 = MISC::GET_GAME_TIMER();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1307)
					{
						case 0:
							if (func_36() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_1308) > 5000 && SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(vLocal_1285.x, true)) < 400f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_COMB_M", 24);
										}
									}
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1309))
								{
									if (MISC::ARE_STRINGS_EQUAL(&cLocal_1309, "GENERIC_INSULT_HIGH"))
									{
										func_56(vLocal_1285.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1307++;
									}
									else if (func_297(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
									{
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_37() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(vLocal_1285.x))
							{
								iLocal_1308 = MISC::GET_GAME_TIMER();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_130(uParam0))
	{
	}
}

bool func_297(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13E46
{
	func_35(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_26(sParam2, iParam3, 0);
}

int func_298(int iParam0, int iParam1, bool bParam2)//Position - 0x13E94
{
	int iVar0;
	
	iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
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

float func_299(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x13EDA
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

float func_300(vector3 vParam0, vector3 vParam1)//Position - 0x13F14
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_301(int iParam0)//Position - 0x13F35
{
	struct<2> Var0;
	char[] cVar1[8];
	
	AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_313();
		func_8(0);
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_311(&Var0);
		}
		else
		{
			func_302(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_302(char* sParam0, char* sParam1)//Position - 0x13FDB
{
	func_310(sParam0, sParam1);
	func_303(0);
}

void func_303(int iParam0)//Position - 0x13FF0
{
	int iVar0;
	
	if (Global_19E56.f_2361 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_304(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 5);
		Global_16C54 = iParam0;
	}
}

int func_304(int iParam0)//Position - 0x14037
{
	int iVar0;
	int iVar1;
	
	func_309();
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_1486F[iParam0 /*5*/];
	iVar1 = Global_11732.f_6D[iVar0 /*4*/];
	func_308(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(CAM::_0xDC9DA9E8789F5246());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
	func_305(&(Global_19E56.f_933.f_21B), iVar1);
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

void func_305(var uParam0, int iParam1)//Position - 0x1414E
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
			if (!func_307(Global_19E56.f_4849[iVar0], &vVar2, &fVar3))
			{
				Global_19E56.f_4849[iVar0] = 318;
				func_306(&(uParam0->f_8E4[iVar0]));
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

void func_306(var uParam0)//Position - 0x14317
{
	*uParam0 = 4294967281;
}

int func_307(int iParam0, var uParam1, float fParam2)//Position - 0x14325
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
			return func_307(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_307(8, uParam1, fParam2);
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

void func_308(int iParam0, bool bParam1)//Position - 0x14C94
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

void func_309()//Position - 0x14CD2
{
	Global_16C53 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1170D))
		{
			switch (func_186())
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
			switch (func_186())
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

void func_310(char* sParam0, char* sParam1)//Position - 0x14DBF
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <= 16)
			{
				StringCopy(&Global_1170D, sParam0, 16);
				StringCopy(&Global_11711, sParam1, 16);
			}
		}
	}
}

void func_311(char* sParam0)//Position - 0x14DFD
{
	func_312(sParam0);
	func_303(0);
}

void func_312(char* sParam0)//Position - 0x14E10
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_1170D, sParam0, 16);
			StringCopy(&Global_11711, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_313()//Position - 0x14E4F
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19E56.f_2361 || func_6(0))
	{
		if (!func_314())
		{
			iVar0 = func_4();
			if (iVar0 != 4294967295)
			{
				if (!func_304(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_309();
		}
	}
}

int func_314()//Position - 0x14EC0
{
	if (((Global_16C30 == 13 || Global_16C30 == 10) || Global_16C30 == 11) || Global_16C30 == 12)
	{
		return 0;
	}
	return 1;
}

