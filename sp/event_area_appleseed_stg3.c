void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_210 = 15f;
	Local_1614.f_136 = 0;
	Local_1614.f_137 = uVar2271;
	Local_1614.f_138 = 807;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_1614.f_136);
		return;
	}
	iLocal_98 = func_4(Local_1614.f_136);
	if (func_5(Local_1614.f_136, 536870912))
	{
		func_8(&(Global_40.f_9096[Local_1614.f_136]->f_6), func_7(func_6()));
	}
	if (!func_9(Local_1614.f_136, 2097152))
	{
		func_10(Local_1614.f_136, 2097152);
	}
	func_11();
	func_13(128, func_12(Local_1614.f_136));
	if (func_9(Local_1614.f_136, 33554432))
	{
		func_14(128);
		func_15(Local_1614.f_136, 33554432);
	}
	func_14(1);
	func_13(262144, func_5(Local_1614.f_136, 128));
	func_13(131072, func_5(Local_1614.f_136, 4));
	func_13(2097152, func_9(Local_1614.f_136, 1024));
	func_13(-2147483648, func_9(Local_1614.f_136, 16384));
	func_13(1048576, func_16(Local_1614.f_136));
	func_13(16, func_17(Local_1614.f_136));
	func_18(0, &Local_1614, 0);
	_0x012701ed938b85de(1f, 5f);
	if (func_5(Local_1614.f_136, 128) || (iLocal_98 == 2 && (func_19(-2147483648) || !func_9(1, 2))))
	{
		func_14(262144);
	}
	func_21(&Local_1614, 32, func_20());
	if (func_22(&Local_1614, 32))
	{
		if (!func_23(Local_1614.f_138, 32))
		{
			func_24(Local_1614.f_138, 32);
		}
		if (!func_19(1048576))
		{
			iVar0 = 16;
			func_25((*Global_1392194)[Local_1614.f_136]->f_6, iVar0);
		}
	}
	else
	{
		func_26((*Global_1392194)[Local_1614.f_136]->f_6);
	}
	func_27(Local_1614.f_136, Local_1614.f_137, &Local_611, &Local_1614, 1, 1);
	func_13(64, func_28());
	func_13(16384, func_29());
	func_13(32768, func_30());
	func_13(65536, func_31());
	func_13(256, func_32());
	func_33();
	Local_611.f_13 = 925190986;
	func_34();
	if (!func_22(&Local_1614, 32))
	{
		iLocal_75[0] = _create_volume_box_with_custom_name(-1400.323f, -207.0721f, 103.6361f, 0f, 0f, 18.49513f, 5.458226f, 7.343121f, 3.461949f, "Appleseed - volOffice");
		_0x18262cafebb5fbe1(&(iLocal_75[0]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_75[0]), 0, 0, 0, -1, -1, 2);
	}
	if (iLocal_98 != 1)
	{
	}
	else
	{
		iLocal_75[8] = _create_volume_box_with_custom_name(-1342.603f, -191.78f, 101.3216f, 0f, 0f, 26.31277f, 4.493421f, 15.76546f, 2.950686f, "Appleseed - volFlatbed");
		_0x18262cafebb5fbe1(&(iLocal_75[8]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_75[8]), 0, 0, 0, -1, -1, 2);
	}
	func_3(Local_1614.f_136);
	uScriptParam_0 = uVar2271;
	Local_611.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_611.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_611.f_10 = { -1326.326f, -116.0771f, 150f };
	if (func_19(16))
	{
		Local_362.f_3 = 1;
	}
	if (func_22(&Local_1614, 32))
	{
		_0x74c2b3dc0b294102((*Global_1392194)[Local_1614.f_136]->f_5);
		_0xa1cfb35069d23c23((*Global_1392194)[Local_1614.f_136]->f_5);
		func_35(512);
	}
	else if (iLocal_98 != 3)
	{
	}
	else
	{
		iLocal_75[18] = _create_volume_aggregate_with_custom_name("EA LCMP - volOnMission");
		_0xbce668aaf83608be(&(iLocal_75[18]), -1414.369f, -264.0309f, 134.2139f, 0f, 0f, 18.97237f, 103.6197f, 144.6739f, 41.18933f);
		_0xbce668aaf83608be(&(iLocal_75[18]), -1470.38f, -391.851f, 142.0586f, 0f, 0f, -62.46322f, 62.55141f, 51.09426f, 31.34803f);
	}
	func_36();
	func_37();
	if (iLocal_98 > 3)
	{
		func_35(512);
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_35(512);
	}
	func_13(8192, func_38());
	func_39(&Local_1614);
	func_40(&Local_1614, 1);
	if (func_19(1048576) || func_22(&Local_1614, 32))
	{
		func_41(&Local_1614, 1);
	}
	if (func_19(262144) && !func_5(Local_1614.f_136, 16777216))
	{
		func_42(Local_1614.f_136, 16777216);
	}
	func_43(&Local_1614, 128);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_2272 = 1;
	}
	while (true)
	{
		func_45(bVar2270, 9323, 0);
		func_46();
		if (!bVar2270)
		{
			switch (iVar2267)
			{
				case 0:
					if (!func_5(Local_1614.f_136, 524288) && Local_611.f_3 < (15 + ((2 + (iVar609 + Local_611.f_1)) + iLocal_14)))
					{
						func_47((15 + ((2 + (iVar609 + Local_611.f_1)) + iLocal_14)), &Local_611);
						func_48(vLocal_557[4]);
					}
					else if (func_49())
					{
						iLocal_2269 = 1;
					}
					break;
				case 1:
					func_50(16);
					if (!func_51(1) && func_52())
					{
						bVar1 = func_51(16);
						func_54(1, func_53(&Local_611, &Local_1614, &uLocal_2077, &iLocal_2100, &bVar1, &iLocal_194));
						func_54(16, bVar1);
						if (func_51(1))
						{
							iLocal_194 = 0;
						}
					}
					if (!func_51(131072))
					{
						if (func_19(256))
						{
							if (func_55())
							{
								func_57(func_56(), 10f, 1);
								if (!_does_volume_exist(&(iLocal_75[21])))
								{
									iLocal_75[21] = _create_volume_box_with_custom_name(-1336.432f, -204.9798f, 102.1644f, 0f, 0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									_0x18262cafebb5fbe1(&(iLocal_75[21]), 10208, 0, 0, -1, -1, 0);
								}
								if (!does_entity_exist(&(iLocal_2100[1])))
								{
									iLocal_2100[1] = _create_mission_train(-1901305252, func_56(), false, false, true, false);
								}
								if (does_entity_exist(&(iLocal_2100[1])) && is_vehicle_driveable(&(iLocal_2100[1]), false, false))
								{
									set_train_speed(&(iLocal_2100[1]), 0f);
									set_train_cruise_speed(&(iLocal_2100[1]), 0f);
									_0x3660bcab3a6bb734(&(iLocal_2100[1]));
									set_vehicle_is_considered_by_player(&(iLocal_2100[1]), false);
									_0xa72b1bf3857b94d7(&(iLocal_2100[1]), 1);
									func_58(131072);
								}
							}
						}
						else
						{
							func_58(131072);
						}
					}
					if (!func_51(2) && func_52())
					{
						if (!func_22(&Local_1614, 32))
						{
							bVar2 = func_51(16);
							func_54(2, func_60(&bVar2, &iLocal_194, 0, func_59((iLocal_98 == 3 && !func_19(262144)), 0, -1)));
							func_54(16, bVar2);
							if (func_51(2))
							{
								iLocal_194 = 0;
							}
						}
						else
						{
							func_58(2);
						}
					}
					if (!func_51(4) && !func_51(16))
					{
						if (!func_22(&Local_1614, 32))
						{
							func_61(Local_1614.f_138, 0, 0, 0, 0, 0);
							func_58(16);
							func_54(4, func_62(Local_1614.f_138, 1, 1));
							if (!is_entity_dead(func_63(Local_1614.f_138)))
							{
								set_ped_config_flag(func_63(Local_1614.f_138), 146, true);
							}
						}
						else
						{
							func_58(4);
						}
					}
					if (!func_51(8))
					{
						if (!func_22(&Local_1614, 32) && !func_22(&Local_1614, 2))
						{
							if (func_64(&Local_611) && func_66(func_65(), &Local_1765, 0, 0, 0, -1, 1))
							{
								if (!func_22(&Local_1614, 32) && func_19(64))
								{
									func_67(&(Local_1614.f_35), &(uLocal_2077[0]), "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = func_63(iVar3);
									func_67(&(Local_1614.f_35), iVar4, "LOGGING_WORKER", 0);
								}
								func_58(8);
							}
						}
						else
						{
							func_58(8);
						}
					}
					if (!func_51(524288) && func_68())
					{
						if (func_19(65536) && !is_entity_dead(&(uLocal_2077[5])))
						{
							func_69(uLocal_72[1], uLocal_2077[5], Local_15[1], 1112014848, 0, 0, 0);
						}
						if (func_19(32768) && !is_entity_dead(&(uLocal_2077[4])))
						{
							func_69(uLocal_72[0], uLocal_2077[4], Local_15[0], 1112014848, 0, iLocal_204, 0);
							if (!func_70(128) && does_entity_exist(&(uLocal_72[0])))
							{
								set_vehicle_extra(&(uLocal_72[0]), 1, true);
								set_vehicle_extra(&(uLocal_72[0]), 2, true);
								func_71(128);
							}
						}
						func_58(524288);
					}
					func_72(Local_1614.f_136, 1);
					if (((((((((!is_screen_faded_out() && func_51(1)) && func_51(2)) && func_51(4)) && func_51(8)) && func_51(131072)) && func_51(524288)) && func_73()) && func_74()) || func_22(&Local_1614, 32))
					{
						if (!func_22(&Local_1614, 32) && (func_19(128) || !func_75()))
						{
							func_67(&(Local_1614.f_35), Global_35, "ARTHUR", 0);
							func_67(&(Local_1614.f_35), func_63(Local_1614.f_138), "EA_LCMP_Foreman", 0);
							func_76();
						}
						else
						{
							func_67(&(Local_1614.f_35), Global_35, "ARTHUR", 0);
							func_67(&(Local_1614.f_35), func_63(Local_1614.f_138), "EA_LCMP_Foreman", 0);
							func_77(Local_1614.f_138, 1);
							func_78(Local_213[0], 0);
						}
						func_79();
						iLocal_2269 = 2;
					}
					break;
				case 2:
					if (func_22(&Local_1614, 128) && func_80(Local_1614.f_136, func_19(128)))
					{
						func_81(0);
						func_82(&Local_1614, 128);
					}
					func_83();
					if (!func_19(16777216))
					{
						func_13(16777216, func_84(&Local_1614, &Local_611));
					}
					if (!func_22(&Local_1614, 32))
					{
						if (func_18(iLocal_206, &Local_1614, 5))
						{
							func_85();
							func_86();
						}
						if (!func_22(&Local_1614, 2))
						{
							func_87(&iLocal_1918, &uLocal_1980, &Local_1614, 808, 833, &iLocal_190, &iLocal_206, 10, -1082130432, 1);
							func_88(&iLocal_1918);
							func_88(&uLocal_2077);
							func_88(&iLocal_2103);
							func_89();
							func_90();
							if ((!func_22(&Local_1614, 32) && !func_19(32)) && func_19(128))
							{
								func_93(&Local_1614, 0, func_91(), func_92());
								func_94();
							}
							if (func_95())
							{
								if (func_70(8192))
								{
									set_anim_rate(Local_611.f_690[12]->f_8, 0f, 0, false);
									set_anim_rate(Local_611.f_690[13]->f_8, 0f, 0, false);
								}
								func_96(&Local_362, &Local_1614, 0);
								func_97(&Local_1614);
								func_15(Local_1614.f_136, 16384);
								func_98(&iLocal_2011);
								func_99();
								if (func_100(iLocal_154) && func_101(iLocal_154))
								{
									func_102(iLocal_154, 0, 2);
								}
								func_103(1);
								_0x710448d44a64c213(1);
								iVar5 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
								display_radar(true);
								display_hud(true);
								if (func_104(1))
								{
									func_43(&Local_1614, 4096);
									func_43(&Local_1614, 16384);
								}
								else
								{
									func_10(Local_1614.f_136, 1024);
								}
								func_105();
								func_106();
								func_107();
								func_108(1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									func_109(Local_256[iVar6], 1, 1, 1, 0);
									iVar6++;
								}
								func_110(0);
								func_111(&(iLocal_75[1]));
								func_112();
								if (!is_entity_dead(&(iLocal_2103[0])))
								{
									freeze_entity_position(&(iLocal_2103[0]), false);
								}
								if (does_entity_exist(Local_611.f_690[23]->f_8))
								{
									detach_entity(Local_611.f_690[23]->f_8, false, true);
								}
								if (iLocal_98 == 3 && iVar582 < 15)
								{
									func_98(&iLocal_2011);
								}
								func_113(&uLocal_2087);
								func_113(&uLocal_2114);
								func_113(&uLocal_2097);
								func_114(Local_1614.f_136, 3);
								func_115(&Local_1614);
								iLocal_2271 = 4;
								iVar7 = func_59(!is_entity_dead(func_63(Local_1614.f_138)), 1, 0);
								if (!func_22(&Local_1614, 4096))
								{
									func_116(func_63(Local_1614.f_138), Global_35, "LOG_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (func_51(32768))
								{
									iVar8 = 1135209633;
								}
								else if (func_117(268435456))
								{
									iVar8 = -1103472584;
								}
								else
								{
									iVar8 = func_118(&Local_1614, Local_1614.f_28);
								}
								func_43(&Local_1614, 2);
								func_119();
								if (!func_19(1024))
								{
									func_121(&Local_1614, func_63(Local_1614.f_138), uLocal_2097[0], 0, func_120(268435456, 1056964608, 1065353216), 0);
								}
								if (!(func_19(32) && func_19(1024)))
								{
									iLocal_2271 = func_59(iVar2269 > iVar7, (iVar2269 - iVar7), 0);
									iVar7 = func_122(&Local_1614, &uLocal_2077, &uLocal_2087, func_120(268435456, 1056964608, 1065353216), iVar5, iVar2269, 0, 0, 0, iVar8, 1051260355);
									iLocal_2271 = func_59(iVar2269 > iVar7, (iVar2269 - iVar7), 0);
								}
								iLocal_2271 = func_59(iVar2269 > iVar7, (iVar2269 - iVar7), 0);
								func_47(iLocal_190, &Local_611);
								iVar7 = func_123(&Local_1614, &iLocal_1918, &uLocal_1949, iVar2269, func_120(268435456, 1056964608, 1065353216), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355);
								iLocal_2271 = func_59(iVar2269 > iVar7, (iVar2269 - iVar7), 0);
								func_33();
								func_43(&Local_1614, 128);
							}
						}
						else
						{
							func_124(&iLocal_1918, &Local_1614);
							func_125();
							if (func_19(1024))
							{
								if (func_126(&Local_1614, func_63(Local_1614.f_138), uLocal_2097[0], 0))
								{
									if (func_19(32))
									{
										if (func_127())
										{
											iVar10 = 0;
											iVar9 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_2271 = func_59(iVar2269 > iVar10, (iVar2269 - iVar10), 0);
											iVar10 = (func_122(&Local_1614, &uLocal_2077, &uLocal_2087, func_120(268435456, 1056964608, 1065353216), iVar9, iVar2269, 0, 0, 0, func_118(&Local_1614, Local_1614.f_28), 1051260355) + iVar10);
											iLocal_2271 = func_59(iVar2269 > iVar10, (iVar2269 - iVar10), 0);
											func_128(1024);
										}
									}
									else
									{
										func_128(1024);
									}
								}
							}
							if (func_19(32))
							{
								if (func_129())
								{
									if (!func_19(1024))
									{
										func_128(32);
									}
								}
							}
							if (func_19(64))
							{
								if (func_70(131072))
								{
									if (!is_entity_dead(&(uLocal_2077[0])))
									{
										if ((_get_lassoed_entity(Global_35) == &uLocal_2077[0] || _is_ped_lassoed(&(uLocal_2077[0]))) || !get_is_task_active(&(uLocal_2077[0]), 3))
										{
											func_130(&(uLocal_2077[0]), 0, 0);
										}
									}
								}
								else if (!func_131(&(uLocal_2077[0]), 518218985) && !get_is_task_active(&(uLocal_2077[0]), 3))
								{
									freeze_entity_position(&(uLocal_2077[0]), false);
									_0x89f5e7adecccb49c(&(uLocal_2077[0]), "INJURED_LEFT_LEG");
									_task_smart_flee_style_ped(&(uLocal_2077[0]), Global_35, 3, 0, -1082130432, -1, 0);
								}
							}
							if (!func_22(&Local_1614, 4) && func_132(&Local_1614, &uLocal_2077, &iLocal_2103, &(Local_1614.f_139), 5, func_63(Local_1614.f_138)))
							{
								func_43(&Local_1614, 4);
							}
						}
						if (!func_22(&Local_1614, 2))
						{
							if (func_19(65536) && !is_entity_dead(&(uLocal_2077[5])))
							{
								func_69(uLocal_72[1], uLocal_2077[5], Local_15[1], 1112014848, func_19(4096), 0, 0);
								if (!func_70(128) && does_entity_exist(&(uLocal_72[1])))
								{
									_0xd80faf919a2e56ea(&(uLocal_72[1]), 1242644044);
									func_71(128);
								}
							}
							if (func_19(32768) && !is_entity_dead(&(uLocal_2077[4])))
							{
								func_69(uLocal_72[0], uLocal_2077[4], Local_15[0], 1112014848, func_19(4096), iLocal_204, 0);
								if (!func_70(128) && does_entity_exist(&(uLocal_72[0])))
								{
									func_71(128);
								}
							}
						}
					}
					if (!func_22(&Local_1614, 2))
					{
						if (!func_22(&Local_1614, 32))
						{
							func_133(&Local_362);
							if (func_134(&Local_362, 1))
							{
								func_135(&Local_1614, &Local_362, Local_213[1], Local_256[1]);
							}
							else
							{
								func_136(&Local_362, 4);
							}
						}
						if (func_137())
						{
							iLocal_2272 = 1;
						}
					}
					else if (!func_22(&Local_1614, 32))
					{
						func_138();
					}
					break;
			}
		}
		if (func_139())
		{
			iLocal_2272 = 1;
		}
		wait(Local_1614.f_30);
	}
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	_set_scenario_group_enabled_hash(529482239, false);
	_set_scenario_group_enabled_hash(515502019, false);
	_set_scenario_group_enabled_hash(223107846, false);
	_set_scenario_group_enabled_hash(-1428772759, false);
	_set_scenario_group_enabled_hash(-1173617900, false);
	_set_scenario_group_enabled_hash(1480157862, false);
	_set_scenario_group_enabled_hash(-2061234582, false);
	_set_scenario_group_enabled_hash(1033154098, false);
	_set_scenario_group_enabled_hash(-1619191432, false);
	_set_scenario_group_enabled_hash(1254150069, false);
	_set_scenario_group_enabled_hash(-1668640329, false);
	_set_scenario_group_enabled_hash(-92203186, false);
	_set_scenario_group_enabled_hash(378017637, false);
	_set_scenario_group_enabled_hash(874422897, false);
	_set_scenario_group_enabled_hash(-508527824, false);
	_set_scenario_group_enabled_hash(2077381882, false);
	_set_scenario_group_enabled_hash(-681889807, false);
	_set_scenario_group_enabled_hash(-595414142, false);
	_set_scenario_group_enabled_hash(1991616213, false);
	_set_scenario_group_enabled_hash(1368197280, false);
	_set_scenario_group_enabled_hash(-1712141152, false);
	_set_scenario_group_enabled_hash(1887892244, false);
	_set_scenario_group_enabled_hash(638507460, false);
	_set_scenario_group_enabled_hash(1610796463, false);
	_set_scenario_group_enabled_hash(-614511582, false);
	_set_scenario_group_enabled_hash(-1254654001, false);
	_set_scenario_group_enabled_hash(-419045977, false);
	_set_scenario_group_enabled_hash(2146274232, false);
	_set_scenario_group_enabled_hash(-1850986699, false);
	_set_scenario_group_enabled_hash(-465906603, false);
	_set_scenario_group_enabled_hash(1498945676, false);
}

void func_3(int iParam0)
{
	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!func_142(iVar0, 8))
	{
		func_143(iVar0, 8);
	}
	_0x4161648394262fdf(func_144(iParam0, func_4(iParam0)), 100f);
	func_145(&((*Global_1392194)[iParam0]->f_1), 1);
}

int func_4(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_4 && iParam1) != 0;
}

int func_6()
{
	switch (iLocal_98)
	{
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_7(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_9(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_10(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 || iParam1);
}

void func_11()
{
	iLocal_99 = 0;
}

bool func_12(var uParam0)
{
	if (func_146(30336, 1, 1) && !func_147())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_148(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_149() && func_150() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_14(iParam0);
	}
	else
	{
		func_128(iParam0);
	}
}

void func_14(int iParam0)
{
	iLocal_99 = (iLocal_99 || iParam0);
}

void func_15(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 - (Global_40.f_9096[iParam0]->f_5 && iParam1));
}

bool func_16(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, 4194304))
	{
		return false;
	}
	func_151(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

bool func_17(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, 524288))
	{
		return false;
	}
	if (!func_9(iParam0, 16777216))
	{
		func_114(iParam0, 2);
		return true;
	}
	iVar0 = (&Global_40.f_9096[iParam0] - Global_40.f_9096[iParam0]->f_9);
	if (iVar0 >= 2)
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_152(iParam0))
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_9(iParam0, 32768))
	{
		func_15(iParam0, 32768);
	}
	return true;
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = _get_prev_weather_type_hash_name();
		iVar8 = _get_next_weather_type_hash_name();
		_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_153(iVar7) || func_154(iVar7));
		bVar5 = (func_153(iVar8) || func_154(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_43(iParam1, 256);
		}
		else if (bVar4)
		{
			if (func_155(iVar7) || func_156(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_82(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_155(iVar8) || func_156(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_43(iParam1, 256);
			}
		}
		else
		{
			if (func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_82(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iLocal_99 && iParam0) != 0;
}

bool func_20()
{
	if (((func_5(Local_1614.f_136, 524288) || func_5(Local_1614.f_136, 2097152)) || func_5(Local_1614.f_136, 1048576)) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_43(iParam0, iParam1);
	}
	else
	{
		func_82(iParam0, iParam1);
	}
}

bool func_22(int iParam0, int iParam1)
{
	return (iParam0->f_29 && iParam1) != 0;
}

bool func_23(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

void func_24(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

int func_25(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1935475[iVar0]) && Global_1935475[iVar0] == iParam0)
		{
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_does_volume_exist(Global_1935475[iVar0]))
		{
			(*Global_1935475)[iVar0] = iParam0;
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_26(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1935475[iVar0]) && Global_1935475[iVar0] == iParam0)
		{
			(*Global_1935475)[iVar0] = 0;
			(*Global_1935475)[iVar0]->f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	func_43(iParam3, 128);
	func_158(iParam1, 1);
	if (bParam5)
	{
		func_159((*Global_1392194)[iParam3->f_136]->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_160((*Global_1392194)[iParam3->f_136]->f_6, 0);
		func_161((*Global_1392194)[iParam3->f_136]->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_162(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_157(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_164(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_165(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(iParam3, 32))
	{
		_0xb173599d61faeb31();
	}
}

bool func_28()
{
	if (!func_166(64))
	{
		return false;
	}
	if (func_19(1048576))
	{
		return false;
	}
	if (!func_9(Local_1614.f_136, 512))
	{
		if (iLocal_98 == 2 && !func_5(Local_1614.f_136, 64))
		{
			if (func_5(Local_1614.f_136, 128))
			{
				return true;
			}
			else
			{
				fVar0 = get_random_float_in_range(0f, 1f);
				if (fVar0 < 1f)
				{
					return true;
				}
			}
		}
		if (iLocal_98 == 1 && func_5(Local_1614.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !func_9(Local_1614.f_136, 1024))
	{
		return true;
	}
	return false;
}

bool func_30()
{
	if (func_166(16))
	{
		return false;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	if (iLocal_98 > 3)
	{
		return false;
	}
	if (iLocal_98 == 1)
	{
		return true;
	}
	fVar0 = get_random_float_in_range(0f, 1f);
	return fVar0 < 0.4f;
}

bool func_31()
{
	if (func_166(16))
	{
		return false;
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	else if (iLocal_98 > 3)
	{
		return false;
	}
	else if (iLocal_98 == 2 && !func_19(131072))
	{
		return true;
	}
	else if (iLocal_98 >= 2)
	{
		fVar0 = get_random_float_in_range(0f, 1f);
		return fVar0 < 0.33f;
	}
	return false;
}

bool func_32()
{
	if (func_19(64))
	{
		return false;
	}
	else if (func_166(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144))))
	{
		iVar0 = func_167(func_56(), 0);
		if (func_168(iVar0) && get_distance_between_coords(_0x1e8a921112891651((*Global_1425371)[iVar0]->f_1), func_56(), true) < 350f)
		{
			return false;
		}
		fVar1 = get_random_float_in_range(0f, 1f);
		bVar2 = fVar1 < 1f;
		if (bVar2)
		{
			return true;
		}
	}
	return false;
}

void func_33()
{
	func_2();
	if (iLocal_98 < 4 && !func_19(256))
	{
		_set_scenario_group_enabled_hash(1498945676, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_22(&Local_1614, 32))
			{
				if (!func_22(&Local_1614, 2))
				{
					iLocal_203 = 1480157862;
					iLocal_204 = -1619191432;
					_set_scenario_group_enabled_hash(-1173617900, true);
					_set_scenario_group_enabled_hash(1480157862, true);
					_set_scenario_group_enabled_hash(638507460, true);
					_set_scenario_group_enabled_hash(529482239, true);
					_set_scenario_group_enabled_hash(-2061234582, true);
					_set_scenario_group_enabled_hash(-1619191432, true);
					if (func_19(262144))
					{
						_set_scenario_group_enabled_hash(-1428772759, true);
					}
				}
			}
			_set_scenario_group_enabled_hash(1033154098, true);
			_set_scenario_group_enabled_hash(2146274232, true);
			break;
		case 2:
			if (!func_22(&Local_1614, 32))
			{
				if (!func_22(&Local_1614, 2))
				{
					iLocal_203 = 1254150069;
					iLocal_204 = 378017637;
					_set_scenario_group_enabled_hash(-1173617900, true);
					_set_scenario_group_enabled_hash(1254150069, true);
					_set_scenario_group_enabled_hash(1991616213, true);
					_set_scenario_group_enabled_hash(1368197280, true);
					_set_scenario_group_enabled_hash(-614511582, true);
					_set_scenario_group_enabled_hash(515502019, true);
					_set_scenario_group_enabled_hash(-1668640329, true);
					_set_scenario_group_enabled_hash(378017637, true);
				}
			}
			_set_scenario_group_enabled_hash(-92203186, true);
			_set_scenario_group_enabled_hash(-1850986699, true);
			break;
		case 3:
			if (!func_22(&Local_1614, 32))
			{
				if (!func_22(&Local_1614, 2))
				{
					if (func_19(262144))
					{
						iLocal_203 = 874422897;
						iLocal_204 = 1663347996;
						_set_scenario_group_enabled_hash(-1173617900, true);
						_set_scenario_group_enabled_hash(874422897, true);
						_set_scenario_group_enabled_hash(1991616213, true);
						_set_scenario_group_enabled_hash(-419045977, true);
						_set_scenario_group_enabled_hash(515502019, true);
						_set_scenario_group_enabled_hash(-508527824, true);
					}
					else
					{
						_set_scenario_group_enabled_hash(2077381882, true);
						_set_scenario_group_enabled_hash(-681889807, true);
						iLocal_203 = 2077381882;
						iLocal_204 = 1663347996;
					}
					_set_scenario_group_enabled_hash(223107846, true);
					_set_scenario_group_enabled_hash(1368197280, true);
				}
			}
			_set_scenario_group_enabled_hash(-595414142, true);
			_set_scenario_group_enabled_hash(-465906603, true);
			break;
		case 4:
			_set_scenario_group_enabled_hash(-1712141152, true);
			break;
		case 5:
			_set_scenario_group_enabled_hash(1887892244, true);
			break;
	}
	_0x9c8f42a5d1859dc1((*Global_1392194)[Local_1614.f_136]->f_5);
}

void func_34()
{
	switch (iLocal_98)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 22;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (func_22(&Local_1614, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (_0x800df3fc913355f3(func_169(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_169(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_1614, 32))
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (_0x800df3fc913355f3(func_169(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_169(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_1614, 32))
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (_0x800df3fc913355f3(func_169(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_169(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_86();
}

void func_35(int iParam0)
{
	iLocal_102 = (iLocal_102 || iParam0);
}

void func_36()
{
	if (func_22(&Local_1614, 32))
	{
		iLocal_75[0] = _create_volume_box(-1398.447f, -246.3103f, 99.12786f, 0f, 0f, 0f, 5.212102f, 3.640974f, 2.867354f);
		_0x18262cafebb5fbe1(&(iLocal_75[0]), 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = _create_volume_aggregate_with_custom_name("Appleseed - volHorseCorral");
		_0x39816f6f94f385ad(&(iLocal_75[5]), -1421.619f, -210.3775f, 102.9679f, 0f, 0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		_0xbce668aaf83608be(&(iLocal_75[5]), -1412.1f, -211.0359f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		_0xbce668aaf83608be(&(iLocal_75[5]), -1430.657f, -209.2033f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = _create_volume_box_with_custom_name(-1416.509f, -217.112f, 102.5954f, 0f, 0f, 0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		_0xb56d41a694e42e86(&(iLocal_75[11]), 256, 0, -1190799868, -1, -1, 2);
	}
}

int func_37()
{
	func_172(1024);
	func_173();
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_58(8388608);
		func_174();
	}
	if (func_22(&Local_1614, 32) && !(iLocal_98 == 4 && !func_19(262144)))
	{
		func_175(&Local_611);
		return 1;
	}
	else
	{
		func_85();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_611 = 5;
			func_176(&Local_611);
			break;
		case 2:
			Local_611 = 5;
			func_177(&Local_611);
			iLocal_14 += 2;
			break;
		case 3:
			func_178();
			Local_611 = 5;
			func_179(&Local_611, func_9(Local_1614.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!func_22(&Local_1614, 32))
	{
		if (iLocal_98 < 4)
		{
			func_180();
			func_181();
			func_182();
		}
		if (func_19(16384))
		{
			Local_611.f_369[0]->f_1 = 36009259;
			Local_611.f_369[0] = 28;
			Local_611.f_369[0]->f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_611.f_369[0]->f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iVar600 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !func_5(Local_1614.f_136, 4))
	{
		return true;
	}
	if (!func_166(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !func_5(Local_1614.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_39(int iParam0)
{
	func_183(iParam0);
	func_184(iParam0, 10f, 1);
	func_185(iParam0, 1);
	func_186(iParam0, 1);
	func_187(iParam0, 1);
	func_188(iParam0, 1);
	func_189(iParam0, 0);
	func_40(iParam0, 0);
	func_190(iParam0, 1);
	func_191(iParam0, 1);
	func_192(iParam0, 1);
	func_193(iParam0, 1);
	func_194(iParam0, 1);
	func_195(iParam0, 1);
	func_196(iParam0, 1.25f);
	func_197(iParam0, 1);
	func_198(iParam0, 1);
	func_199(iParam0, 1);
	func_200(iParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 1024);
	}
	else
	{
		func_145(&(iParam0->f_1), 1024);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 131072);
	}
	else
	{
		func_145(&(iParam0->f_1), 131072);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 || iParam1);
}

void func_43(int iParam0, int iParam1)
{
	if (func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 || iParam1);
}

void func_44()
{
	switch (iLocal_189)
	{
		case 0:
			func_202();
			if (func_19(128))
			{
				func_203();
			}
			if (func_22(&Local_1614, 16384))
			{
				if (!func_22(&Local_1614, 32768))
				{
					func_204(Local_1614.f_136);
				}
				else
				{
					func_10(Local_1614.f_136, 1024);
				}
			}
			if (func_5(Local_1614.f_136, 128))
			{
				iVar0 = func_63(Local_1614.f_138);
				func_205(&iVar0);
			}
			func_96(&Local_362, &Local_1614, 0);
			func_206(Local_1614.f_136, 1073741824);
			func_206(Local_1614.f_136, 536870912);
			release_script_audio_bank();
			break;
		case 1:
			if (func_100(iLocal_154) && !((func_207(iLocal_154) || func_208(iLocal_154, 1)) || func_209(iLocal_154)))
			{
				func_102(iLocal_154, 0, 2);
			}
			if ((func_9(Local_1614.f_136, 16384) && does_entity_exist(&(iLocal_2100[0]))) && (is_entity_dead(Global_35) || is_ped_in_vehicle(Global_35, &(iLocal_2100[0]), false)))
			{
				func_15(Local_1614.f_136, 16384);
			}
			if (func_210(&uLocal_1911))
			{
				func_211(&uLocal_1911, 1);
			}
			if (_does_volume_exist(iVar1908))
			{
				if (_0xde0ea444735c1368(iVar1908))
				{
					_0x2c87c3e1c7b96ee2(iVar1908);
				}
				_delete_volume(iVar1908);
			}
			if (get_ped_config_flag(Global_35, 514, true))
			{
				set_ped_config_flag(Global_35, 514, false);
			}
			func_212(1024);
			func_213();
			break;
		case 2:
			if (_0x91a5f9cbebb9d936(uVar474))
			{
				remove_scenario_blocking_area(uVar474, false);
			}
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 5, false);
				set_ped_reset_flag(Global_35, 129, false);
			}
			func_214();
			func_215(1);
			func_216(1);
			if (!is_entity_dead(&(uLocal_2077[5])) && !func_217(&(uLocal_2077[5]), (*Global_1392194)[Local_1614.f_136]->f_5, 1, 0))
			{
				uLocal_2199[0] = &uLocal_2077[5];
			}
			_0x8379e05871ad24e0();
			if (func_9(Local_1614.f_136, 256) && !func_9(Local_1614.f_136, 32))
			{
				func_218("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (func_19(32))
			{
				func_218("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			break;
		case 3:
			func_107();
			if (_does_volume_exist((*Global_1392194)[Local_1614.f_136]->f_5))
			{
				iVar1 = 0;
				while (iVar1 < iVar2075)
				{
					if (!is_entity_dead(&(uLocal_2077[iVar1])))
					{
						if (func_217(&(uLocal_2077[iVar1]), (*Global_1392194)[Local_1614.f_136]->f_5, 1, 0))
						{
							if (!is_entity_a_mission_entity(&(uLocal_2077[iVar1])))
							{
								set_entity_as_mission_entity(&(uLocal_2077[iVar1]), true, false);
							}
							delete_ped(uLocal_2077[iVar1]);
						}
						else
						{
							set_blocking_of_non_temporary_events(&(uLocal_2077[iVar1]), false);
							set_ped_keep_task(&(uLocal_2077[iVar1]), true);
							set_ped_as_no_longer_needed(uLocal_2077[iVar1]);
						}
					}
					iVar1++;
				}
			}
			if (_does_volume_exist(&(iLocal_75[4])))
			{
				_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
			}
			iVar1 = 0;
			while (iVar1 < 22)
			{
				func_111(&(iLocal_75[iVar1]));
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (_does_anim_scene_exist(&(Local_479[iVar1])))
				{
					func_219(Local_479[iVar1]);
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if (does_entity_exist(Local_1765[iVar1]->f_8))
				{
					delete_object(&(Local_1765[iVar1]->f_8));
				}
				iVar1++;
			}
			break;
		case 4:
			func_99();
			func_108(1);
			func_2();
			if (_does_volume_exist((*Global_1392194)[Local_1614.f_136]->f_5))
			{
				if (!func_22(&Local_1614, 4) && !func_22(&Local_1614, 32))
				{
					if (!is_entity_dead(&(uLocal_72[0])) && is_entity_in_volume(&(uLocal_72[0]), (*Global_1392194)[Local_1614.f_136]->f_5, true, 0))
					{
						delete_vehicle(uLocal_72[0]);
					}
					if (!is_entity_dead(&(uLocal_72[1])) && is_entity_in_volume(&(uLocal_72[1]), (*Global_1392194)[Local_1614.f_136]->f_5, true, 0))
					{
						delete_vehicle(uLocal_72[1]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!is_entity_dead(&(iLocal_2100[iVar1])))
					{
						if (iVar1 == 1)
						{
							delete_mission_train(iLocal_2100[iVar1]);
						}
						else if (is_entity_in_volume(&(iLocal_2100[iVar1]), (*Global_1392194)[Local_1614.f_136]->f_5, true, 0))
						{
							delete_vehicle(iLocal_2100[iVar1]);
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			func_10(Local_1614.f_136, 1073741824);
			func_220(Local_1614.f_136, &Local_611, &Local_1614);
			func_221(&Local_611);
			_text_database_delete(func_222());
			_text_database_delete(func_223());
			break;
		default:
			terminate_this_thread();
			break;
	}
	iLocal_189++;
}

void func_45(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_224(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_46()
{
	func_54(65536, func_217(Global_35, (*Global_1392194)[Local_1614.f_136]->f_6, 1, 0));
}

void func_47(int iParam0, int iParam1)
{
	_0xf008e0ba1fe1d644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

void func_48(float fParam0)
{
	func_225(fParam0, 0f);
}

bool func_49()
{
	if (func_226(vLocal_557[4], 30f))
	{
	}
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	switch (iVar2268)
	{
		case 0:
			func_227(&(Local_611.f_15));
			func_227(&(Local_611.f_369));
			func_228(&(Local_15[0]->f_11));
			func_228(&(Local_15[1]->f_11));
			if (func_19(128) && iLocal_98 == 3)
			{
				func_227(&(Local_611.f_369));
			}
			func_229();
			func_230();
			func_231(&(Local_611.f_690));
			func_231(&Local_1765);
			func_232();
			func_227(&(Local_611.f_304));
			if (func_19(256))
			{
				func_233(-1901305252);
			}
			func_234();
			_text_database_request(func_222());
			_text_database_request(func_223());
			if (iLocal_98 == 3 && !func_19(262144))
			{
				func_235();
			}
			iLocal_2270 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!func_68())
			{
			}
			if (!func_55())
			{
			}
			if (!func_236())
			{
			}
			if (!func_73())
			{
			}
			if (!func_74())
			{
			}
			if (!func_237())
			{
				func_235();
				return false;
			}
			if (!request_script_audio_bank("Appleseed_01"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_50(int iParam0)
{
	iLocal_101 = (iLocal_101 - (iLocal_101 && iParam0));
}

bool func_51(int iParam0)
{
	return (iLocal_101 && iParam0) != 0;
}

bool func_52()
{
	if (!func_238(&(Local_611.f_15)) || !func_238(&(Local_611.f_369)))
	{
		return false;
	}
	if (!func_238(&(Local_611.f_304)))
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_22(iParam1, 32))
	{
		return false;
	}
	if (*bParam4)
	{
		return false;
	}
	if (_0x5c16855277819bbf() >= *iParam0)
	{
		if (*iParam5 < *iParam0)
		{
			if (iParam0->f_15[*iParam5]->f_1 != 0)
			{
				(*uParam2)[*iParam5] = func_239(iParam0->f_15[*iParam5]->f_1, iParam0->f_15[*iParam5], iParam0->f_15[*iParam5]->f_6, iParam0->f_15[*iParam5]->f_9, 1, 0, 1, 0, 1);
			}
			*iParam5++;
			*bParam4 = 1;
			return false;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_2)
	{
		if (iParam0->f_304[iVar0]->f_1 != 0)
		{
			(*iParam3)[iVar0] = create_vehicle(iParam0->f_304[iVar0]->f_1, iParam0->f_304[iVar0]->f_6, iParam0->f_304[iVar0]->f_9, true, true, false, false);
			(*iParam3)[0] = iParam3[0];
		}
		iVar0++;
	}
	return true;
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0);
	}
	else
	{
		func_50(iParam0);
	}
}

bool func_55()
{
	if (func_19(256))
	{
		if (!func_233(-1901305252))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_56()
{
	return -1326.96f, -232.96f, 99.72f;
}

void func_57(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_58(int iParam0)
{
	iLocal_101 = (iLocal_101 || iParam0);
}

int func_59(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Local_611.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (_0x5c16855277819bbf() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_611.f_369[*iParam1]->f_1 != 0)
			{
				if (iLocal_98 != 3 || func_19(262144))
				{
					iLocal_2103[*iParam1] = func_239(Local_611.f_369[*iParam1]->f_1, Local_611.f_369[*iParam1], Local_611.f_369[*iParam1]->f_6, Local_611.f_369[*iParam1]->f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					decor_set_bool(&(iLocal_2103[*iParam1]), "bNoticePlayer", false);
					set_blocking_of_non_temporary_events(&(iLocal_2103[*iParam1]), true);
				}
				else
				{
					iLocal_2125[*iParam1] = func_239(Local_611.f_369[*iParam1]->f_1, Local_611.f_369[*iParam1], Local_611.f_369[*iParam1]->f_6, Local_611.f_369[*iParam1]->f_9, 1, 0, 1, 0, 1);
					set_blocking_of_non_temporary_events(&(iLocal_2125[*iParam1]), true);
				}
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_241(func_240(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		func_242(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_243(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_244(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_245(vVar0))
	{
		_0x59c7ad6fea2ac449(func_169(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_169(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_169(iParam0), 0);
	}
	if (!func_245(vVar0))
	{
		_0xbb68908cd11aebdc(func_169(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, bool bParam1, bool bParam2)
{
	func_246(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_63(iParam0);
	if (!is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 178, !bParam1);
		set_ped_config_flag(iVar0, 168, false);
		set_ped_config_flag(iVar0, 259, true);
		set_ped_config_flag(iVar0, 297, bParam2);
		_0x6759bee6762e140b(func_169(iParam0));
		if (!bParam1)
		{
			func_247(iVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_63(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_241(func_240(iParam0)))
	{
		return func_248(iParam0);
	}
	return _0xe76687023d8c8505(func_249(iParam0), 0);
}

int func_64(int iParam0)
{
	return func_66(func_65(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

Vector3 func_65()
{
	return 0f, 0f, 0f;
}

int func_66(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*iParam3)[iVar0]->f_8))
		{
		}
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_250((*iParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*iParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*iParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*iParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*iParam3)[iVar8]->f_8, *(*iParam3)[iVar0]) };
					if (func_250((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*iParam3)[iVar0]->f_8, (*iParam3)[iVar8]->f_8, 0, *(*iParam3)[iVar0], (*iParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_250((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_250((*iParam3)[iVar0]->f_11, 128))
					{
						func_251(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_250((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_245((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_250((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_252((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_250((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_250((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_250((*iParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*iParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*iParam3)[iVar0]->f_8, 1);
					activate_physics((*iParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*iParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*iParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_67(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_253(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

bool func_68()
{
	if (!func_254(Local_15[0]->f_11) || !func_254(Local_15[1]->f_11))
	{
		return false;
	}
	return true;
}

int func_69(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((is_vehicle_driveable(*uParam0, false, false) && !is_vehicle_stopped(*uParam0)) && !is_entity_dead(*uParam1))
			{
				bring_vehicle_to_halt(*uParam0, 2f, -1, false);
			}
			if (!is_entity_dead(*uParam1))
			{
				clear_ped_tasks(*uParam1, 1, 0);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (is_vehicle_driveable(*uParam0, false, false))
		{
			task_vehicle_drive_to_coord(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 10f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (is_entity_dead(*uParam0))
			{
				if (func_255(uParam2))
				{
					*uParam0 = create_vehicle(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (func_256(*uParam1, 0, 1))
					{
						set_ped_into_vehicle(*uParam1, *uParam0, -1);
						decor_set_bool(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (func_257(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, bParam3, 20f, 0, 1092616192, 1) || !uParam2->f_22))
			{
				if (is_vehicle_driveable(*uParam0, false, false))
				{
					task_vehicle_drive_to_coord(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_258(0, 0, 0, 0)) && !is_string_null_or_empty(uParam2->f_12))
					{
						func_116(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!is_entity_dead(*uParam1) && get_script_task_status(*uParam1, -1817882002, true) == 8)
			{
				if (uParam2->f_23)
				{
					if (is_vehicle_driveable(*uParam0, false, false))
					{
						task_vehicle_drive_wander(*uParam1, *uParam0, 5f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (is_vehicle_driveable(*uParam0, false, false))
				{
					if (!is_vehicle_stopped(*uParam0))
					{
						bring_vehicle_to_halt(*uParam0, 2f, 2, false);
					}
					open_sequence_task(&iVar0);
					task_stand_still(0, 2000);
					task_leave_any_vehicle(0, 0, 0);
					task_go_to_coord_any_means(0, uParam2->f_7, 1f, 0, false, 524419, -1f);
					task_stand_still(0, 2000);
					close_sequence_task(iVar0);
					task_perform_sequence(*uParam1, iVar0);
					clear_sequence_task(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && get_script_task_status(*uParam1, 242628503, true) == 8)
			{
				if ((!uParam2->f_26 && func_258(0, 0, 0, 0)) && !is_string_null_or_empty(uParam2->f_12))
				{
					func_116(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
					uParam2->f_26 = 1;
				}
				open_sequence_task(&iVar0);
				task_stand_still(0, 2000);
				if (!is_string_null(uParam2->f_13))
				{
					task_play_anim(0, uParam2->f_13, uParam2->f_14, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				}
				else if (iParam5 != 0)
				{
					task_use_random_scenario_in_group(0, iParam5, 0, 0, 0);
				}
				else
				{
					task_wander_in_area(0, get_entity_coords(*uParam1, true, false), 20f, 10f, 60f, 1);
				}
				close_sequence_task(iVar0);
				task_perform_sequence(*uParam1, iVar0);
				clear_sequence_task(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_70(int iParam0)
{
	return (iLocal_100 && iParam0) != 0;
}

void func_71(int iParam0)
{
	iLocal_100 = (iLocal_100 || iParam0);
}

void func_72(int iParam0, bool bParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (bParam1)
	{
		func_143(iVar0, 8);
		func_145(&((*Global_1392194)[iParam0]->f_1), 1);
	}
	else
	{
		func_259(iVar0, 8);
		func_201(&((*Global_1392194)[iParam0]->f_1), 1);
	}
}

bool func_73()
{
	if (!func_260(&uLocal_2012))
	{
		return false;
	}
	if (!func_261())
	{
		return false;
	}
	return true;
}

bool func_74()
{
	if (!_text_database_has_loaded(func_222()))
	{
		return false;
	}
	if (!_text_database_has_loaded(func_223()))
	{
		return false;
	}
	return true;
}

bool func_75()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_9(Local_1614.f_136, 256) && !func_5(Local_1614.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_76()
{
	iVar0 = func_63(Local_1614.f_138);
	if (!is_entity_dead(iVar0))
	{
		clear_ped_tasks_immediately(iVar0, false, true);
		if (!func_262(iVar0, 1))
		{
			func_263(iVar0, "EA_LCMP_Foreman", 0);
		}
		set_ped_config_flag(iVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_5(Local_1614.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					iVar1 = _find_closest_active_scenario_point_of_type(-1400.66f, -213.44f, 101.9f, func_264(), 1.5f, 0, false);
					if (_does_scenario_point_exist(iVar1))
					{
						_task_use_scenario_point(iVar0, iVar1, func_265(), -1, false, true, 0, false, -1f, false);
					}
					else
					{
						task_use_nearest_scenario_to_coord_warp(iVar0, -1400.66f, -213.44f, 101.9f, 1.5f, 0, false, false, false, false);
					}
				}
			}
			else if (!is_entity_dead(iVar0))
			{
			}
			break;
		case 2:
			if (!func_5(Local_1614.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
				}
			}
			else if (!is_entity_dead(iVar0))
			{
			}
			break;
		case 3:
			if (!func_5(Local_1614.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					if (func_9(Local_1614.f_136, 256) || func_9(Local_1614.f_136, 262144))
					{
						task_use_nearest_scenario_to_coord_warp(iVar0, func_266(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_267(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824);
					}
				}
			}
			else if (!is_entity_dead(func_63(Local_1614.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

void func_77(int iParam0, bool bParam1)
{
	if (func_268(iParam0, 0))
	{
		iVar0 = func_63(iParam0);
		if (!is_entity_dead(iVar0))
		{
			set_ped_config_flag(iVar0, 234, true);
			set_ped_config_flag(iVar0, 259, true);
		}
		func_269(iParam0, 0, 1, 0, 0);
		_0x6759bee6762e140b(func_169(iParam0));
		if (bParam1)
		{
			func_247(iVar0, 1, 1);
		}
	}
}

void func_78(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_270(&(iParam0->f_18));
}

int func_79()
{
	func_271();
	if (iLocal_98 == 3 && !func_5(Local_1614.f_136, 128))
	{
		if (!is_entity_dead(&(uLocal_2077[0])))
		{
			func_273(&(uLocal_2077[0]), func_272(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			task_guard_current_position(&(uLocal_2077[0]), 10f, 50f, true);
			set_ped_config_flag(&(uLocal_2077[0]), 146, false);
			func_263(&(uLocal_2077[0]), func_274(Local_1614.f_136, -1), 0);
			decor_set_bool(&(uLocal_2077[0]), "HAS_VOICE", true);
			func_247(&(uLocal_2077[0]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2077[1])))
		{
			func_273(&(uLocal_2077[1]), func_272(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			task_guard_current_position(&(uLocal_2077[1]), 10f, 50f, true);
			set_ped_config_flag(&(uLocal_2077[1]), 146, false);
			func_263(&(uLocal_2077[1]), func_274(Local_1614.f_136, -1), 0);
			decor_set_bool(&(uLocal_2077[1]), "HAS_VOICE", true);
			func_247(&(uLocal_2077[1]), 1, 1);
		}
		if (does_entity_exist(&(uLocal_2077[2])))
		{
			set_entity_load_collision_flag(&(uLocal_2077[2]), 1);
			_set_entity_something(&(uLocal_2077[2]), true);
		}
		if (does_entity_exist(&(uLocal_2077[3])))
		{
			set_entity_load_collision_flag(&(uLocal_2077[3]), 1);
			_set_entity_something(&(uLocal_2077[3]), true);
		}
	}
	else
	{
		if (func_19(64))
		{
			if (!is_entity_dead(&(uLocal_2077[0])))
			{
				open_sequence_task(&iLocal_196);
				task_follow_nav_mesh_to_coord(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				task_follow_nav_mesh_to_coord(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				task_follow_nav_mesh_to_coord(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				_task_use_nearest_scenario_to_coord(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				close_sequence_task(iLocal_196);
				task_perform_sequence(&(uLocal_2077[0]), iLocal_196);
				clear_sequence_task(&iLocal_196);
				set_ped_config_flag(&(uLocal_2077[0]), 146, false);
				func_247(&(uLocal_2077[0]), 1, 1);
			}
		}
		else if (!is_entity_dead(&(uLocal_2077[0])))
		{
			task_use_random_scenario_in_group(&(uLocal_2077[0]), func_275(), 0, 0, 0);
			set_ped_config_flag(&(uLocal_2077[0]), 146, false);
			func_247(&(uLocal_2077[0]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2077[1])))
		{
			task_use_random_scenario_in_group(&(uLocal_2077[1]), func_275(), 0, 0, 0);
			set_ped_config_flag(&(uLocal_2077[1]), 146, false);
			func_247(&(uLocal_2077[1]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2077[2])))
		{
			if (!func_19(64))
			{
				task_use_random_scenario_in_group(&(uLocal_2077[2]), func_275(), 0, 0, 0);
				set_ped_config_flag(&(uLocal_2077[2]), 146, false);
				func_247(&(uLocal_2077[2]), 1, 1);
			}
		}
		if (!is_entity_dead(&(uLocal_2077[3])))
		{
			if (!func_19(64))
			{
				task_use_random_scenario_in_group(&(uLocal_2077[3]), func_275(), 0, 0, 0);
				set_ped_config_flag(&(uLocal_2077[3]), 146, false);
				func_247(&(uLocal_2077[3]), 1, 1);
			}
		}
	}
	if (!is_entity_dead(&(uLocal_2077[4])))
	{
		func_247(&(uLocal_2077[4]), 1, 1);
	}
	if (!is_entity_dead(&(uLocal_2077[5])))
	{
		func_247(&(uLocal_2077[5]), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar609)
	{
		if (!is_entity_dead(&(uLocal_2077[iVar0])))
		{
			set_ped_config_flag(&(uLocal_2077[iVar0]), 178, true);
			_0xa3db37edf9a74635(get_player_index(), &(uLocal_2077[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_611.f_1)
	{
		if (!is_entity_dead(&(iLocal_2103[iVar0])))
		{
			set_ped_config_flag(&(iLocal_2103[iVar0]), 178, true);
			_0xa3db37edf9a74635(get_player_index(), &(iLocal_2103[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	func_48(vLocal_557[0]);
	return 1;
}

bool func_80(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return _0x1b065a2bf7953815(0) != 1;
}

void func_81(bool bParam0)
{
	iVar0 = func_4(0);
	if (func_5(0, 128))
	{
		if (iVar0 != 1 || func_5(0, 16777216))
		{
			func_276(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			func_276(0, 0);
		}
		if (func_9(0, 32768))
		{
			func_276(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_9(0, 4) && func_5(0, 16777216))
					{
						func_276(0, 0);
					}
					else if (func_9(0, 1024))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_277(0);
							func_278(0, 0, "LOG_JOURN01", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_276(0, 0);
					}
					break;
				case 2:
					func_276(0, 0);
					break;
				case 3:
					if (func_9(0, 8))
					{
						func_276(0, 0);
					}
					else if (func_9(0, 256))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_277(0);
							func_278(0, 0, "LOG_JOURN02", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_276(0, 0);
					}
					break;
				default:
					func_276(0, 0);
					break;
			}
		}
	}
}

void func_82(int iParam0, int iParam1)
{
	if (!func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

void func_83()
{
	if (func_51(8388608))
	{
		if (func_279(1024))
		{
			func_174();
		}
		else
		{
			func_213();
		}
	}
}

bool func_84(int iParam0, int iParam1)
{
	if (!Global_1935630->f_12 && func_217(Global_35, (*Global_1392194)[iParam0->f_136]->f_5, 1, 0))
	{
		if (!func_22(iParam0, 64))
		{
			func_43(iParam0, 64);
			func_280(iParam0->f_136, 1);
			return true;
		}
	}
	return false;
}

void func_85()
{
	Local_2164.f_24 = 0;
	Local_2164.f_23 = 0;
	Local_2164.f_17 = 0;
	func_145(&(Local_2164.f_34), 1);
	if (!func_19(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((func_19(128) && !func_19(2)) && !func_5(Local_1614.f_136, 4))
				{
					if (func_281(1) > 0)
					{
						sVar1[0] = "LOG_WRK01A_P";
					}
					else
					{
						sVar1[0] = "LOG_WRK01A";
					}
				}
				else
				{
					sVar1[0] = "LOG_WRK01A_M";
					iVar6[0] = 1;
				}
				sVar1[1] = "LOG_WRK02A";
				if (func_22(&Local_1614, 256))
				{
					sVar1[2] = "LOG_WRK03A_R";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A_R";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[2] = "LOG_WRK03A";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A";
					iVar6[3] = 1;
				}
				if (func_19(128) && !func_19(2))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (func_5(Local_1614.f_136, 64))
				{
					sVar1[0] = "LOG_WRK01BA";
					iVar6[0] = 1;
					sVar1[1] = "LOG_WRK02BA";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03BA";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04BA";
					iVar6[3] = 1;
				}
				else
				{
					if (func_19(128) && !func_19(2))
					{
						if (func_281(1) > 0)
						{
							sVar1[0] = "LOG_WRK01B_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01B";
						}
					}
					else
					{
						sVar1[0] = "LOG_WRK01B_M";
						iVar6[0] = 1;
					}
					if (func_22(&Local_1614, 256))
					{
						sVar1[1] = "LOG_WRK02B_R";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B_R";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B_R";
						iVar6[3] = 1;
					}
					else
					{
						sVar1[1] = "LOG_WRK02B";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B";
						iVar6[3] = 1;
					}
					if (func_19(128) && !func_19(2))
					{
						bVar0 = true;
					}
				}
				break;
			case 3:
				if (!func_5(Local_1614.f_136, 128))
				{
					if (func_9(Local_1614.f_136, 8))
					{
						if (func_281(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (func_22(&Local_1614, 256))
						{
							sVar1[1] = "LOG_WRK02CH_R";
						}
						else
						{
							sVar1[1] = "LOG_WRK02CH";
						}
						sVar1[2] = "LOG_WRK03CH";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04CH";
						iVar6[3] = 1;
					}
					else if (func_9(Local_1614.f_136, 32))
					{
						if (func_70(128))
						{
							iVar11 = func_282();
							if (is_ped_human(iVar11))
							{
								sVar1[0] = "LOG_WRK01CC";
								sVar1[1] = "LOG_WRK02CC";
								sVar1[2] = "LOG_WRK03CC";
								sVar1[3] = "LOG_WRK04CC";
							}
							else
							{
								sVar1[0] = "LOG_WRK01CW";
								sVar1[1] = "LOG_WRK02CW";
								sVar1[2] = "LOG_WRK03CW";
								sVar1[3] = "LOG_WRK04CW";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01CB";
							sVar1[1] = "LOG_WRK02CB";
							if (func_281(1) > 0)
							{
								sVar1[2] = "LOG_WRK03CB_P";
							}
							else
							{
								sVar1[2] = "LOG_WRK03CB";
							}
							sVar1[3] = "LOG_WRK04CB";
						}
					}
					else if (func_9(Local_1614.f_136, 256))
					{
						sVar1[0] = "LOG_WRK01CA";
						sVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (func_281(1) > 0)
						{
							sVar1[3] = "LOG_WRK04CA_P";
						}
						else
						{
							sVar1[3] = "LOG_WRK04CA";
						}
					}
					else
					{
						if (func_19(128) && !func_19(2))
						{
							if (func_281(1) > 0)
							{
								sVar1[0] = "LOG_WRK01C_P";
							}
							else
							{
								sVar1[0] = "LOG_WRK01C";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01C_M";
							iVar6[0] = 1;
						}
						if (func_22(&Local_1614, 256))
						{
							sVar1[1] = "LOG_WRK02C_R";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C_R";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C_R";
							iVar6[3] = 1;
						}
						else
						{
							sVar1[1] = "LOG_WRK02C";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C";
							iVar6[3] = 1;
						}
						if (func_19(128) && !func_19(2))
						{
							bVar0 = true;
						}
					}
				}
				else if (func_9(Local_1614.f_136, 8))
				{
					sVar1[0] = "LOG_WRK01CH";
					sVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (func_281(1) > 0)
				{
					sVar1[0] = "LOG_WRK01CN_P";
					sVar1[1] = "LOG_WRK02CN_P";
					sVar1[2] = "LOG_WRK03CN_P";
					sVar1[3] = "LOG_WRK04CN_P";
				}
				else
				{
					sVar1[0] = "LOG_WRK01CN";
					sVar1[1] = "LOG_WRK02CN";
					sVar1[2] = "LOG_WRK03CN";
					sVar1[3] = "LOG_WRK04CN";
				}
				break;
		}
	}
	else if (func_281(1) > 0)
	{
		sVar1[0] = "EA_WRKMD01_P";
		sVar1[1] = "EA_WRKMD02_P";
		sVar1[2] = "EA_WRKMD03_P";
		sVar1[3] = "EA_WRKMD04_P";
	}
	else
	{
		sVar1[0] = "EA_WRKMD01";
		sVar1[1] = "EA_WRKMD02";
		sVar1[2] = "EA_WRKMD03";
		sVar1[3] = "EA_WRKMD04";
	}
	Local_2164.f_33 = 15f;
	func_283(&sVar1, &iVar6, &Local_2164, bVar0);
}

void func_86()
{
	if (func_22(&Local_1614, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)) && !are_strings_equal(_0xceb40b678e403759(func_240(iVar2)), sVar0))
		{
			_0x187d65f3aec5d679(func_240(iVar2), sVar0);
			iVar3 = func_63(iVar2);
			if ((does_entity_exist(iVar3) && !is_ped_active_in_scenario(iVar3, 1)) && !is_entity_a_mission_entity(iVar3))
			{
				task_persistent_character(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_1614.f_138;
	if (_0x800df3fc913355f3(func_169(iVar2)) && !are_strings_equal(_0xceb40b678e403759(func_240(iVar2)), sVar0))
	{
		_0x187d65f3aec5d679(func_240(iVar2), sVar1);
	}
}

void func_87(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_23(iVar0, 32))
			{
				iVar1 = func_63(iVar0);
				if (!is_entity_dead(iVar1))
				{
					if (is_ped_human(iVar1))
					{
						(*iParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = func_284(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							set_blocking_of_non_temporary_events(iVar1, true);
							set_ped_config_flag(iVar1, 288, true);
						}
						else
						{
							set_ped_config_flag(iVar1, 288, false);
						}
						if (!decor_exist_on(iVar1, "bScriptedILO"))
						{
							set_ped_config_flag(iVar1, 130, false);
						}
						set_ped_config_flag(iVar1, 374, true);
						set_ped_config_flag(iVar1, 178, true);
						set_ped_config_flag(iVar1, 146, true);
						set_ped_config_flag(iVar1, 246, true);
						set_ped_config_flag(iVar1, 297, true);
						set_ped_config_flag(iVar1, 171, true);
						_0xa3db37edf9a74635(get_player_index(), iVar1, 7, 0, 1);
						func_285(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							set_ped_seeing_range(iVar1, fParam8);
						}
					}
					else
					{
						func_286(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*iParam0 - 1))
		{
			(*iParam0)[iVar2] = 0;
			iVar3++;
		}
		*iParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_88(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			set_ped_reset_flag(iParam0[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_89()
{
	if ((iLocal_206 % 10) == 0 && iVar607 < 4)
	{
		if (_does_volume_exist(&(iLocal_75[5])))
		{
			iVar5 = func_287(&uVar0, &uLocal_2199, 4, &(iLocal_75[5]), 0, 0, 0, -555162361, 1, 0, 1, 0);
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if ((((!func_288(&(uVar0[iVar6]), &uLocal_604) && _get_last_mount(Global_35) != &uVar0[iVar6]) && func_289(0) != &uVar0[iVar6]) && func_289(1) != &uVar0[iVar6]) && !func_290(&(uVar0[iVar6])))
				{
					uLocal_604[iVar607] = &uVar0[iVar6];
					uLocal_609 = iVar607 + 1;
					if (iVar607 >= 4)
					{
					}
					else
					{
						iVar6++;
					}
					iVar7 = (iLocal_206 % 4);
					if (iVar7 < 4 && !is_entity_dead(&(uLocal_604[iVar7])))
					{
						if (!is_entity_a_mission_entity(&(uLocal_604[iVar7])))
						{
							set_entity_as_mission_entity(&(uLocal_604[iVar7]), true, false);
						}
						func_291(&(uLocal_604[iVar7]), &(iLocal_75[5]), 1, 0);
						set_ped_combat_attributes(&(uLocal_604[iVar7]), 45, false);
						set_ped_combat_attributes(&(uLocal_604[iVar7]), 51, false);
						set_ped_combat_attributes(&(uLocal_604[iVar7]), 71, false);
						func_286(&Local_1614, &(uLocal_604[iVar7]), 0);
						if (!does_entity_exist(_get_rider_of_mount(&(uLocal_604[iVar7]), false)))
						{
							if (!func_131(&(uLocal_604[iVar7]), 1351865802))
							{
								if (_is_scenario_group_enabled_hash(1368197280))
								{
									task_use_random_scenario_in_group(&(uLocal_604[iVar7]), 1368197280, 0, 0, 1);
								}
							}
						}
						else if (func_131(&(uLocal_604[iVar7]), 1435919172))
						{
							clear_ped_tasks(&(uLocal_604[iVar7]), 1, 0);
						}
					}
				}
			}
		}
	}
}

void func_90()
{
	if (!func_70(268435456))
	{
		if (func_70(134217728) || (get_frame_count() % 9) == 0)
		{
			func_71(134217728);
			iVar0 = (get_frame_count() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_292(&Var1, iVar31);
				if (!is_string_null_or_empty(sVar30))
				{
					_0xef51242e35242b47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_71(268435456);
			}
		}
	}
}

float func_91()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 2f;
}

float func_92()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 1.75f;
}

void func_93(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_293(get_player_index(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = (*Global_1392194)[uParam0->f_136]->f_6;
	}
	if (func_217(Global_35, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, fParam2);
	}
	iVar0 = _get_last_mount(Global_35);
	if (func_217(iVar0, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(iVar0, fParam3);
	}
}

void func_94()
{
	if ((_does_volume_exist(&(iLocal_75[0])) && func_217(Global_35, &(iLocal_75[0]), 1, 0)) && !is_ped_on_mount(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1.5f);
	}
}

int func_95()
{
	if (func_51(16384))
	{
		return 0;
	}
	iVar0 = iLocal_209;
	if ((((func_134(&Local_362, 2) || func_294(&Local_1614, &(Local_1614.f_28))) || func_295()) || func_296()) || func_297(func_63(Local_1614.f_138), 0, &Local_1614, &(Local_1614.f_28), 0, 0))
	{
		if (func_134(&Local_362, 2))
		{
		}
		else if (Local_1614.f_28 == 65536)
		{
			func_298(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		else if (Local_1614.f_28 == 32)
		{
			return func_299();
		}
		else if (Local_1614.f_28 == 8192 && func_300())
		{
			func_298(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		if (func_301(&(Local_1614.f_28)) && !func_70(67108864))
		{
			if (!func_134(&Local_362, 1))
			{
				Local_362 = func_63(Local_1614.f_138);
				func_303(&Local_362, &Local_1614, Local_1614.f_28, 55961, 0, 0);
				if (!is_string_null_or_empty(func_292(&Local_362, 0)))
				{
					StringCopy(Local_362.f_20[0], func_292(&Local_362, 0), 32);
					StringCopy(Local_362.f_20[1], func_292(&Local_362, 1), 32);
					func_304(&Local_362, 32);
				}
			}
			else if (Local_362.f_13 > 2)
			{
				func_304(&Local_362, 512);
			}
			func_298(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		return 1;
	}
	else if (((func_305(&iLocal_1918, &Local_1614, &(Local_1614.f_28), &iLocal_209, 0, (iLocal_190 - 1), 4) || func_305(&uLocal_2077, &Local_1614, &(Local_1614.f_28), &uLocal_207, 0, (iVar609 - 1), 1)) || func_305(&iLocal_2103, &Local_1614, &(Local_1614.f_28), &uLocal_208, 0, func_59(func_19(16384), Local_611.f_1 + 1, (Local_611.f_1 - 1)), 1)) || func_305(&uLocal_604, &Local_1614, &(Local_1614.f_28), &uLocal_610, 0, (iVar607 - 1), 3))
	{
		if (func_70(131072))
		{
			if ((_get_lassoed_entity(Global_35) == &uLocal_2077[0] || _is_ped_lassoed(&(uLocal_2077[0]))) || !get_is_task_active(&(uLocal_2077[0]), 3))
			{
				func_130(&(uLocal_2077[0]), 0, 0);
			}
		}
		if (func_301(&(Local_1614.f_28)))
		{
			if (Local_1614.f_28 == 8192 && func_300())
			{
				return 0;
			}
			if (!func_134(&Local_362, 1) && !func_19(32))
			{
				if (Local_1614.f_28 == 8 && func_306())
				{
					return 1;
				}
				if (func_19(64) && Local_1614.f_10 == &uLocal_2077[0])
				{
					if (Local_1614.f_28 != 65536)
					{
						func_303(&Local_362, &Local_1614, Local_1614.f_28, 55961, 0, 0);
						func_304(&Local_362, 64);
						StringCopy(Local_362.f_20[0], "LCMPF_IG_TFAIM", 32);
						func_304(&Local_362, 32);
					}
				}
				else
				{
					func_303(&Local_362, &Local_1614, Local_1614.f_28, 55961, 0, 0);
				}
			}
			func_298(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		else if (Local_1614.f_28 == 32)
		{
			return func_299();
		}
		return 1;
	}
	else if (func_307(&Local_1614, &Local_362, 55961))
	{
		if (!func_134(&Local_362, 1))
		{
			func_303(&Local_362, &Local_1614, 1024, 55961, 0, 0);
			if (iVar360 == func_63(Local_1614.f_138) && !is_string_null_or_empty(func_292(&Local_362, 0)))
			{
				StringCopy(Local_362.f_20[0], func_292(&Local_362, 0), 32);
				StringCopy(Local_362.f_20[1], func_292(&Local_362, 1), 32);
				func_304(&Local_362, 32);
			}
			func_298(&Local_1614, &(Local_1614.f_28));
			return 0;
		}
		else
		{
			func_304(&Local_362, 512);
		}
	}
	else if (func_308())
	{
		Local_1614.f_28 = 2;
		return 1;
	}
	iVar1 = func_309(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (&uLocal_1980[iVar0] < Local_1614.f_19 && func_310(&(iLocal_1918[iVar0]), &Local_1614, 0, &(uLocal_1980[iVar0])))
		{
			func_48(vLocal_557[6]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_226(vLocal_557[6], 10f))
	{
		func_311(&Local_1614, &(Local_1614.f_28));
	}
	return 0;
}

void func_96(int* iParam0, var uParam1, bool bParam2)
{
	func_270(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_136(iParam0, 1);
	func_136(iParam0, 4);
	func_136(iParam0, 32);
	func_136(iParam0, 128);
	func_136(iParam0, 64);
	func_136(iParam0, 8);
	func_136(iParam0, 256);
	func_136(iParam0, 512);
	iParam0->f_13 = 0;
	iParam0->f_18 = 0;
	if (!bParam2)
	{
		*iParam0 = 0;
		StringCopy(iParam0->f_20[0], "", 32);
		StringCopy(iParam0->f_20[1], "", 32);
		iParam0->f_16 = -1;
	}
	if (iParam0->f_19 != 0)
	{
		remove_shocking_event(iParam0->f_19);
	}
	iParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_97(var uParam0)
{
	if (func_312(uParam0->f_32))
	{
		func_313(&(uParam0->f_32), 1, 1);
	}
	if (func_312(uParam0->f_33))
	{
		func_313(&(uParam0->f_33), 1, 1);
	}
	if (func_312(uParam0->f_34))
	{
		func_313(&(uParam0->f_34), 1, 1);
	}
}

void func_98(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_99()
{
	if (func_51(32))
	{
		func_314(0);
		func_315(11, 128);
		func_50(32);
	}
}

bool func_100(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_101(int iParam0)
{
	iVar0 = func_316(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	if (!func_100(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_101(iParam0) && !func_317(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_318(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_101(iParam0))
	{
		iParam2 = -1;
	}
	if (func_319(iParam0) == 3 || (func_319(iParam0) == 1 && _0x01f4d242765c6b24(func_318(iParam0))))
	{
		func_321(func_320(iParam0), func_318(iParam0), iParam2);
		if ((!func_100(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_322(&Global_1935630, 32768))
		{
			iVar0 = func_323(iParam0);
			if (iVar0 != -1)
			{
				func_324(0);
			}
			else if (func_320(iParam0) == 8)
			{
				iVar0 = func_325();
				if (iVar0 != -1)
				{
					func_324(0);
				}
			}
		}
	}
	func_326(iParam0, 0);
	if (func_327(0) == iParam0)
	{
		func_103(1);
		func_328(0);
		func_329(1);
	}
	func_330(iParam0, 1);
	func_331(iParam0);
}

void func_103(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_332(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_333(Global_1935630, 4194304);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

bool func_104(int iParam0)
{
	iVar0 = _0x5407b7288d0478b7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_105()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_334(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (func_19(262144) && !func_335())
				{
					func_219(Local_479[iVar0]);
				}
				break;
			case 6:
				if (func_336(Local_479[6]))
				{
					freeze_entity_position(Local_611.f_690[14]->f_8, false);
					activate_physics(Local_611.f_690[14]->f_8);
					func_338(Local_479[6], func_63(func_337(6, 0, 0)), "PED1");
					func_338(Local_479[6], func_63(func_337(6, 1, 0)), "PED2");
					func_219(Local_479[6]);
				}
				break;
			default:
				func_219(Local_479[iVar0]);
				break;
		}
		iVar0++;
	}
}

void func_106()
{
	if (!is_entity_dead(&(iLocal_2103[0])))
	{
		func_339(iLocal_2103[0]);
		set_ped_config_flag(&(iLocal_2103[0]), 136, false);
		_task_smart_flee_style_ped(&(iLocal_2103[0]), Global_35, 4, 0, -1082130432, -1, 0);
	}
}

void func_107()
{
	_0xc6366a585659d15c(get_player_index(), "");
	_0x98cd760de43b612e(get_player_index(), "");
	_0x8af46e5159a5b620(Global_35, 0);
}

void func_108(bool bParam0)
{
	if (func_70(512) || bParam0)
	{
		if (func_256(iVar600, 0, 1))
		{
			set_ped_config_flag(iVar600, 136, false);
			func_340(iVar600, 0);
		}
		func_341(512);
	}
}

void func_109(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_312((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_313(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_110(int iParam0)
{
	func_270(&uLocal_0);
	func_342(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_343();
}

void func_111(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_112()
{
	if (_does_volume_exist(&(iLocal_75[4])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
		_0x74c2b3dc0b294102(&(iLocal_75[4]));
		_0xa1cfb35069d23c23(&(iLocal_75[4]));
	}
	func_111(&(iLocal_75[4]));
	func_111(&(iLocal_75[9]));
	func_111(&(iLocal_75[10]));
	func_111(&(iLocal_75[20]));
}

void func_113(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_98((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_114(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0]->f_9 = &Global_40.f_9096[iParam0];
	Global_40.f_9096[iParam0]->f_10 = Global_40.f_9096[iParam0]->f_3;
	func_344(iParam0, iParam1, 0, 0, 0, 1);
	func_10(iParam0, 32768);
	func_15(iParam0, 16777216);
	func_206(iParam0, 4194304);
}

void func_115(int iParam0)
{
	func_298(iParam0, &(iParam0->f_28));
	func_345(iParam0, 1);
	func_191(iParam0, 0);
	func_346(iParam0, 0);
	func_347(iParam0, 0);
	func_41(iParam0, 0);
}

bool func_116(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_348(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_117(int iParam0)
{
	return (iLocal_102 && iParam0) != 0;
}

int func_118(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return -1361146315;
		case 1024:
			return 1923998736;
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return -1810065318;
		case 512:
			return -1547772340;
		case 2:
		case 32:
		case 2048:
			if (!_0x3ec28da1ffac9ddd(uParam0->f_10, Global_35, 0, 0) || !does_entity_exist(&(Global_1935630->f_34[0])))
			{
				return -16106300;
			}
			else if (_0xcb690f680a3ea971(Global_35, 6))
			{
				return 195938434;
			}
			else
			{
				return 1352191066;
			}
			break;
		case 4096:
			return -2130852007;
		case 1:
		case 128:
			return -493957506;
		case 16384:
			return 0;
	}
	return -1361146315;
}

void func_119()
{
	if (func_19(64))
	{
		func_349();
	}
	func_350(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144)))
	{
		func_9(1, 2);
		func_351();
	}
	if (iLocal_98 == 3)
	{
		func_352();
	}
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	if ((func_353(iParam0, 16777216) && func_353(iParam0, 33554432)) && func_353(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_353(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_353(iParam0, 16777216))
	{
		if (!func_354(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_353(iParam0, 268435456) && func_355(iVar2))
	{
		if (!func_354(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_354(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

void func_121(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = 831283580;
	}
	bParam3 = (bParam3 || func_22(iParam0, 4096));
	if (_0xcb690f680a3ea971(iParam1, 4))
	{
		bParam3 = false;
	}
	func_356(iParam1);
	func_98(iParam2);
	if (!is_entity_dead(iParam1))
	{
		_0xfc3db99c8144cd81(iParam1, (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
		set_ped_config_flag(iParam1, 146, false);
		set_ped_config_flag(iParam1, 246, true);
		set_ped_config_flag(iParam1, 178, true);
		set_ped_can_be_targetted(iParam1, true);
		if (bParam3)
		{
			_0xeeed8fafec331a70(iParam1, get_entity_coords(iParam5, true, false), 1);
			set_ped_relationship_group_hash(iParam1, -401180987);
			open_sequence_task(&iVar1);
			_task_smart_flee_style_ped(0, iParam5, 4, 0, -1082130432, -1, 0);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iParam1, iVar1, 0.1f, 0.75f);
			clear_sequence_task(&iVar1);
			set_ped_keep_task(iParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				set_ped_relationship_group_hash(iParam1, 1269650476);
			}
			_0x802092b07e3b1eea(iParam1, get_entity_coords(iParam5, true, false), 3);
			set_ped_combat_attributes(iParam1, 58, true);
			set_ped_combat_attributes(iParam1, 5, true);
			set_ped_combat_attributes(iParam1, 71, true);
			set_ped_combat_attributes(iParam1, 31, true);
			set_ped_combat_attributes(iParam1, 46, true);
			func_357(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_358(iParam1))
			{
				iParam4 = func_359(iParam1);
			}
			if (is_ped_human(iParam1))
			{
				bVar2 = func_360(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					_give_weapon_to_ped_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_354(iParam4))
			{
				set_current_ped_weapon(iParam1, iParam4, true, 0, false, false);
			}
			open_sequence_task(&iVar1);
			if (is_ped_human(iParam1))
			{
				if (func_354(iParam4))
				{
					task_swap_weapon(0, 1, 0, 0, 0);
				}
				if (!is_ped_using_any_scenario(iParam1) && bVar2)
				{
					task_react(0, Global_35, 0f, 0f, 0f, func_361(), 0.5f, 0, 4);
				}
				if (!bVar2 && get_ped_config_flag(iParam1, 12, true))
				{
					_0x2416ec2f31f75266(0, iParam5, 0, 0, 0);
				}
			}
			task_combat_ped(0, iParam5, 0, 0);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iParam1, iVar1, 0.1f, 0.75f);
			clear_sequence_task(&iVar1);
		}
	}
}

int func_122(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	bParam7 = (bParam7 || func_22(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar2]))
		{
			if (!func_288(uParam1[iVar2], &(iParam0->f_140)))
			{
				set_ped_config_flag(uParam1[iVar2], 146, false);
				set_ped_config_flag(uParam1[iVar2], 277, false);
				set_ped_config_flag(uParam1[iVar2], 178, true);
				set_ped_can_be_targetted(uParam1[iVar2], true);
				iVar3 = func_362(uParam1[iVar2], 0);
				if (func_157(iVar3))
				{
					func_62(iVar3, 1, 1);
				}
				_0xfc3db99c8144cd81(uParam1[iVar2], (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
				if (func_363(uParam1[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
						clear_ped_tasks(uParam1[iVar2], 1, 0);
					}
					_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
					set_ped_relationship_group_hash(uParam1[iVar2], 1269650476);
					func_357(uParam1[iVar2], (*uParam2)[iVar2], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(uParam1[iVar2], 58, true);
					set_ped_combat_attributes(uParam1[iVar2], 5, true);
					set_ped_combat_attributes(uParam1[iVar2], 71, true);
					set_ped_combat_attributes(uParam1[iVar2], 31, true);
					if (func_358(uParam1[iVar2]))
					{
						iVar4 = func_359(uParam1[iVar2]);
					}
					if (is_ped_human(uParam1[iVar2]))
					{
						if (func_364((*uParam1)[iVar2], iVar4, (bParam8 || bParam7)))
						{
							_give_weapon_to_ped_2(uParam1[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_354(iVar4))
							{
								set_current_ped_weapon(uParam1[iVar2], iVar4, true, 0, false, false);
							}
						}
						set_ped_combat_attributes(uParam1[iVar2], 46, false);
					}
					else
					{
						set_ped_combat_attributes(uParam1[iVar2], 46, true);
					}
					open_sequence_task(&iVar0);
					if (is_ped_human(uParam1[iVar2]))
					{
						if (func_354(iVar4))
						{
							task_swap_weapon(0, 1, 0, 0, 0);
						}
						if (is_ped_in_any_vehicle(uParam1[iVar2], true))
						{
							task_leave_any_vehicle(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!func_358(uParam1[iVar2]))
						{
							task_react(0, Global_35, 0f, 0f, 0f, func_361(), 0.5f, 0, 4);
						}
					}
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(uParam1[iVar2], iVar0);
					clear_sequence_task(&iVar0);
					iVar1++;
				}
				else
				{
					set_ped_relationship_group_hash(uParam1[iVar2], -401180987);
					if (bParam6)
					{
						_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
						clear_ped_tasks(uParam1[iVar2], 1, 0);
					}
					else
					{
						_0xeeed8fafec331a70(uParam1[iVar2], Global_36, 1);
					}
					set_ped_flee_attributes(uParam1[iVar2], 2, false);
					set_ped_flee_attributes(uParam1[iVar2], 1048576, false);
					set_ped_flee_attributes(uParam1[iVar2], 65536, false);
					open_sequence_task(&iVar0);
					if (is_ped_in_any_vehicle(uParam1[iVar2], true))
					{
						task_leave_any_vehicle(0, 0, 4160);
						_task_smart_flee_style_ped(0, Global_35, 4, 1, -1082130432, -1, 0);
					}
					else
					{
						_task_smart_flee_style_ped(0, Global_35, 4, 0, -1082130432, -1, 0);
					}
					close_sequence_task(iVar0);
					task_perform_sequence(uParam1[iVar2], iVar0);
					clear_sequence_task(&iVar0);
					set_ped_keep_task(uParam1[iVar2], true);
					func_365((*uParam1)[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				set_blocking_of_non_temporary_events(uParam1[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_123(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	if (iParam5 > 0)
	{
		_0xf008e0ba1fe1d644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_22(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		func_162(&iVar4, &iVar5, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_157(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (func_23(iVar3, 32))
		{
		}
		else
		{
			iVar6 = func_63(iVar3);
			if (!is_entity_dead(iVar6) && !func_288(iVar6, &(iParam0->f_140)))
			{
				(*iParam1)[iVar0] = iVar6;
				if (!is_entity_a_mission_entity(iVar6))
				{
					set_entity_as_mission_entity(iVar6, true, false);
				}
				set_ped_config_flag(iVar6, 146, false);
				set_ped_config_flag(iVar6, 246, true);
				set_ped_config_flag(iVar6, 178, true);
				set_ped_can_be_targetted(iVar6, true);
				func_62(iVar3, 1, 1);
				set_ped_config_flag(iVar6, 277, false);
				_0xfc3db99c8144cd81(iVar6, (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
				if ((func_363(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					_0x802092b07e3b1eea(iVar6, Global_36, 3);
					set_ped_relationship_group_hash(iVar6, 1269650476);
					func_357(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(iVar6, 58, true);
					set_ped_combat_attributes(iVar6, 5, true);
					set_ped_combat_attributes(iVar6, 71, true);
					set_ped_combat_attributes(iVar6, 31, true);
					if (func_358(iVar6))
					{
						iVar7 = func_359(iVar6);
					}
					if (is_ped_human(iVar6))
					{
						if (func_364(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							_give_weapon_to_ped_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_354(iVar7))
							{
								set_current_ped_weapon(iVar6, iVar7, true, 0, false, false);
							}
						}
						set_ped_combat_attributes(iVar6, 46, false);
					}
					else
					{
						set_ped_combat_attributes(iVar6, 46, true);
					}
					open_sequence_task(&iVar2);
					if (func_354(iVar7))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (is_ped_human(iVar6) && !func_358(iVar6))
					{
						task_react(0, Global_35, 0f, 0f, 0f, func_361(), 0.5f, 0, 4);
					}
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iVar2);
					task_perform_sequence(iVar6, iVar2);
					clear_sequence_task(&iVar2);
					iVar1++;
				}
				else
				{
					_0xeeed8fafec331a70(iVar6, Global_36, 1);
					set_ped_relationship_group_hash(iVar6, -401180987);
					if ((bParam7 || func_284(iVar6, 1, 1) < 15f) || func_366())
					{
						clear_ped_tasks(iVar6, 1, 0);
						set_ped_config_flag(iVar6, 178, false);
						_task_smart_flee_style_ped(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iVar6, true);
						func_365(&iVar6, iParam10, fParam11);
					}
					else
					{
						open_sequence_task(&iVar2);
						task_react(0, Global_35, 0f, 0f, 0f, func_361(), 0.5f, 0, 4);
						task_seek_cover_from_ped(0, Global_35, 1500, 0, 1, 1);
						task_cower(0, -1, 0, 0);
						close_sequence_task(iVar2);
						task_perform_sequence(iVar6, iVar2);
						clear_sequence_task(&iVar2);
						decor_set_bool(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

int func_124(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_256(iParam0[iVar0], 0, 1))
		{
			if (decor_exist_on(iParam0[iVar0], "bCowering"))
			{
				if ((func_297(iParam0[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_367(iParam0[iVar0], iParam1, &(iParam1->f_28), 0)) || func_368(iParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || func_369((*iParam0)[iVar0], iParam1, 1097859072))
					{
						set_ped_relationship_group_hash(iParam0[iVar0], -401180987);
						_task_smart_flee_style_ped(iParam0[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iParam0[iVar0], true);
						decor_remove(iParam0[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_125()
{
	iVar0 = 0;
	while (iVar0 < iLocal_205)
	{
		if ((!is_entity_dead(&(Local_1614.f_140[iVar0])) && !func_131(&(Local_1614.f_140[iVar0]), 518218985)) && !get_is_task_active(&(Local_1614.f_140[iVar0]), 3))
		{
			_task_smart_flee_style_ped(&(Local_1614.f_140[iVar0]), Global_35, 4, 0, -1082130432, -1, 0);
		}
		iVar0++;
	}
}

bool func_126(int iParam0, int iParam1, int* iParam2, bool bParam3)
{
	switch (iParam0->f_31)
	{
		case 0:
			if (is_entity_dead(iParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if (get_is_task_active(iParam1, 3))
			{
				iParam0->f_31 = 1;
			}
			break;
		case 1:
			if (is_entity_dead(iParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if ((!get_is_task_active(iParam1, 3) || has_anim_event_fired(iParam1, 277966886)) || is_ped_using_any_scenario(iParam1))
			{
				if (is_ped_using_any_scenario(iParam1))
				{
					_0x62fdad5e01d2dd47(iParam1, Global_36, 3, 0);
					clear_ped_tasks(iParam1, 1, 0);
				}
				func_121(iParam0, iParam1, iParam2, bParam3, 379542007, 0);
				iParam0->f_31 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_127()
{
	if (((!_does_anim_scene_exist(&(Local_479[2])) || func_370(Local_479[2])) || func_371(Local_479[2], "COWER_R_LOOP")) || func_371(Local_479[2], "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

void func_128(int iParam0)
{
	iLocal_99 = (iLocal_99 - (iLocal_99 && iParam0));
}

bool func_129()
{
	if (!does_rayfire_map_object_exist(&(iLocal_450[0])))
	{
		if (!is_entity_visible(Local_611.f_690[24]->f_8))
		{
			set_entity_visible(Local_611.f_690[24]->f_8, true);
		}
		if (get_entity_collision_disabled(Local_611.f_690[24]->f_8))
		{
			set_entity_collision(Local_611.f_690[24]->f_8, true, false);
		}
		return false;
	}
	if (!is_entity_visible(Local_611.f_690[24]->f_8))
	{
		fVar0 = get_rayfire_map_object_anim_phase(&(iLocal_450[0]));
		if (fVar0 > 0.9625f || get_state_of_rayfire_map_object(&(iLocal_450[0])) == 10)
		{
			set_entity_visible(Local_611.f_690[24]->f_8, true);
			set_entity_collision(Local_611.f_690[24]->f_8, true, false);
			func_372(991016631);
		}
	}
	else if (get_entity_collision_disabled(Local_611.f_690[24]->f_8))
	{
		fVar0 = get_rayfire_map_object_anim_phase(&(iLocal_450[0]));
		if (fVar0 > 0.997f)
		{
			set_entity_collision(Local_611.f_690[24]->f_8, true, false);
			func_373(-926795318);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_130(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

bool func_131(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_132(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	if (iParam0->f_136 == 1)
	{
		func_162(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_157(iVar0))
		{
		}
		else if (func_23(iVar0, 32))
		{
		}
		else
		{
			iVar3 = func_63(iVar0);
			if (!does_entity_exist(iVar3))
			{
			}
			else if (!decor_exist_on(iVar3, "bPedAlreadyCounted"))
			{
				if (is_entity_dead(iVar3))
				{
					if (func_374(iParam0, iVar3))
					{
						decor_set_bool(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_22(iParam0, 32768))
						{
							func_43(iParam0, 32768);
						}
					}
				}
				else if (!func_22(iParam0, 32768))
				{
					if (has_entity_been_damaged_by_entity(iVar3, Global_35, 1, 1))
					{
						func_43(iParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (does_entity_exist(iParam5) && !decor_exist_on(iParam5, "bPedAlreadyCounted"))
	{
		if (is_entity_dead(iParam5))
		{
			if (func_374(iParam0, iParam5))
			{
				decor_set_bool(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_22(iParam0, 32768))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		else if (!func_22(iParam0, 32768))
		{
			if (has_entity_been_damaged_by_entity(iParam5, Global_35, 1, 1))
			{
				func_43(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *uParam1)
	{
		if (does_entity_exist(uParam1[iVar4]) && !decor_exist_on(uParam1[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(uParam1[iVar4]))
			{
				if (func_374(iParam0, uParam1[iVar4]))
				{
					decor_set_bool(uParam1[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_43(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(uParam1[iVar4], Global_35, 1, 1))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *iParam2)
	{
		if (does_entity_exist(iParam2[iVar4]) && !decor_exist_on(iParam2[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(iParam2[iVar4]))
			{
				if (func_374(iParam0, iParam2[iVar4]))
				{
					decor_set_bool(iParam2[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_43(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(iParam2[iVar4], Global_35, 1, 1))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
}

void func_133(int iParam0)
{
	if (!func_375(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_376(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_377(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iVar0 < (iParam0->f_3 - 1))
			{
				iParam0->f_9[iVar0] = &iParam0->f_9[iVar0 + 1];
			}
			else
			{
				iParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		iParam0->f_1 = (iParam0->f_1 - 1);
		if (iParam0->f_1 <= 0)
		{
			iParam0->f_1 = 0;
			func_136(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_134(int iParam0, int iParam1)
{
	return func_378(iParam0->f_17, iParam1);
}

void func_135(var uParam0, int* iParam1, int* iParam2, var uParam3)
{
	if (is_entity_dead(*iParam1))
	{
		func_96(iParam1, uParam0, 0);
		return;
	}
	func_379(iParam1);
	if (func_134(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_380(iParam1, 7);
		}
		func_136(iParam1, 4);
	}
	if (func_134(iParam1, 256))
	{
		func_381(iParam1, iParam2, uParam3, 0);
	}
	if (func_134(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_48(&(iParam1->f_6));
			func_380(iParam1, 2);
		}
		iParam1->f_2++;
		func_136(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_48(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_380(iParam1, 9);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_380(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_362(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if (iParam1->f_5 == -1 && !is_entity_a_mission_entity(*iParam1))
			{
				set_entity_as_mission_entity(*iParam1, true, false);
			}
			stop_current_playing_speech(*iParam1, 250);
			stop_ped_speaking(*iParam1, true);
			_0xa7dc9266ed6a4e51(*iParam1);
			_0x6b9c5c38838fb6e6(*iParam1);
			if (is_ped_ragdoll(*iParam1))
			{
				func_304(iParam1, 8);
			}
			if (!func_262(*iParam1, 1))
			{
				sVar1 = func_383(uParam0->f_136, -1);
				if (!is_string_null_or_empty(sVar1))
				{
					func_263(*iParam1, sVar1, 0);
				}
			}
			if (func_134(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_384(*iParam1))
			{
				task_dismount_animal(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (is_ped_in_any_vehicle(*iParam1, true))
			{
				task_leave_any_vehicle(*iParam1, 0, 0);
			}
			func_380(iParam1, 1);
			break;
		case 1:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if (func_385(&(iParam1->f_6)) < 5f && ((func_131(*iParam1, 501393341) || func_131(*iParam1, -828834893)) || func_131(*iParam1, 451360105)))
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_380(iParam1, 3);
				set_blocking_of_non_temporary_events(*iParam1, false);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_380(iParam1, 9);
				return;
			}
			if (!func_134(iParam1, 64))
			{
				_0x62fdad5e01d2dd47(*iParam1, Global_36, 3, 0);
				clear_ped_tasks(*iParam1, 1, 0);
				open_sequence_task(&iVar0);
				if (func_386(iParam1) && (func_387(*iParam1, Global_35, 1) > 9f || _0xcb690f680a3ea971(*iParam1, 4)))
				{
					task_go_to_entity(0, Global_35, -1, 5f, 2f, 2f, 0);
					task_stand_still(0, 500);
				}
				else
				{
					task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					task_stand_still(0, 500);
				}
				close_sequence_task(iVar0);
				task_perform_sequence(*iParam1, iVar0);
				clear_sequence_task(&iVar0);
			}
			func_388(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[0]))
			{
				if (func_134(iParam1, 32))
				{
					func_389(&(uParam0->f_35), iParam1->f_20[0], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_116(*iParam1, Global_35, iParam1->f_20[0], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_116(*iParam1, Global_35, func_390(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_380(iParam1, 3);
			}
			else
			{
				func_380(iParam1, 2);
			}
			break;
		case 3:
			if ((is_any_speech_playing(*iParam1) || !func_258(0, 1, *iParam1, 1)) || func_391(iParam1->f_20[0]))
			{
				return;
			}
			if (func_392(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_385(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_304(iParam1, 2);
					func_380(iParam1, 9);
					return;
				}
			}
			func_380(iParam1, 5);
			break;
		case 4:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_258(0, 1, *iParam1, 1)) || func_391(iParam1->f_20[0]))
			{
				return;
			}
			if (func_392(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_385(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_304(iParam1, 2);
					func_380(iParam1, 9);
					return;
				}
			}
			func_380(iParam1, 5);
			break;
		case 5:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_258(0, 1, *iParam1, 1)) || func_391(iParam1->f_20[0]))
			{
				return;
			}
			if (func_392(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_385(&(iParam1->f_6)) < 10f)
				{
					func_380(iParam1, 3);
					return;
				}
				else
				{
					func_304(iParam1, 2);
					func_380(iParam1, 9);
					return;
				}
			}
			func_48(&(iParam1->f_6));
			func_380(iParam1, 7);
			break;
		case 2:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_258(0, 1, *iParam1, 1)) || func_391(iParam1->f_20[0]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_385(&(iParam1->f_6)) < 25f) && func_131(*iParam1, 242628503)) && func_387(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_380(iParam1, 9);
				return;
			}
			if (!func_134(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						clear_ped_tasks(*iParam1, 1, 0);
						if (!func_134(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
						{
							task_confront(*iParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (func_134(iParam1, 16))
						{
							clear_ped_tasks(*iParam1, 1, 0);
							if (!func_134(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
							{
								task_confront(*iParam1, Global_35, 2);
							}
						}
						else
						{
							switch (iParam1->f_1)
							{
								case 1:
									clear_ped_tasks(*iParam1, 1, 0);
									break;
								case 2:
									clear_ped_tasks(*iParam1, 1, 0);
									if (!func_134(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
									{
										task_confront(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						clear_ped_tasks(*iParam1, 1, 0);
						if (func_134(iParam1, 16))
						{
							task_aim_at_entity(*iParam1, Global_35, -1, 0, 0);
						}
						else
						{
							task_turn_ped_to_face_entity(*iParam1, Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						break;
				}
			}
			func_48(&(iParam1->f_6));
			func_388(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[1]))
			{
				if (func_134(iParam1, 32))
				{
					func_389(&(uParam0->f_35), iParam1->f_20[1], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_116(*iParam1, Global_35, iParam1->f_20[1], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_116(*iParam1, Global_35, func_390(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_380(iParam1, 6);
					break;
				default:
					func_380(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_258(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_134(iParam1, 4) && func_131(*iParam1, -1942934348)) && func_385(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_385(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_380(iParam1, 9);
				return;
			}
			func_380(iParam1, 7);
			break;
		case 7:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_258(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_134(iParam1, 4) && func_131(*iParam1, -1942934348)) && func_385(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && does_entity_exist(func_393(Global_35)))
			{
				func_304(iParam1, 2);
			}
			func_48(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_380(iParam1, 9);
				return;
			}
			if (!func_134(iParam1, 64))
			{
				clear_ped_tasks(*iParam1, 1, 0);
			}
			func_380(iParam1, 8);
			break;
		case 8:
			if (func_157(iParam1->f_5))
			{
				if (!func_268(iParam1->f_5, 0))
				{
					func_382(iParam1->f_5);
				}
			}
			if (func_395(&(iParam1->f_6), func_394(iParam1)))
			{
				stop_ped_speaking(*iParam1, false);
				if (!func_134(iParam1, 64) && !func_134(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_77(iParam1->f_5, 1);
					}
					else
					{
						set_ped_as_no_longer_needed(iParam1);
					}
				}
				func_380(iParam1, 9);
			}
			break;
		case 9:
			func_396(iParam1, iParam2, uParam3);
			func_96(iParam1, uParam0, 0);
			break;
	}
}

void func_136(int iParam0, int iParam1)
{
	func_201(&(iParam0->f_17), iParam1);
}

int func_137()
{
	if (iLocal_98 >= 4)
	{
		return func_397();
	}
	if (func_22(&Local_1614, 32))
	{
		if (iLocal_98 == 3 && !func_9(Local_1614.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				func_398(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	func_399(&uLocal_195, 2);
	if (func_19(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = func_400(iVar600, func_7(iVar1));
			if (bVar3)
			{
				func_401(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!func_117(512))
	{
		func_402();
		func_403();
	}
	if (!func_51(67108864))
	{
		func_404(0);
		func_405(0, 1, 1);
		func_58(67108864);
	}
	iVar4 = func_63(Local_1614.f_138);
	if (!is_entity_dead(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			func_78(Local_213[0], 0);
		}
		func_67(&(Local_1614.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_406(&iVar4);
		set_ped_reset_flag(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && func_5(Local_1614.f_136, 128)))
	{
		func_407(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		func_408();
	}
	func_409();
	func_410(&iVar4);
	if (!func_19(128))
	{
		if (iLocal_98 == 3 && !func_5(Local_1614.f_136, 128))
		{
			func_411();
		}
		func_412();
		return 0;
	}
	func_413();
	if (func_19(16384))
	{
		func_414(iLocal_2103[0]);
	}
	if (!func_19(16) && !func_19(64))
	{
		bVar5 = func_19(1);
		func_416(iVar4, uLocal_2097[0], &Local_1614, func_19(262144), &bVar5, 1, func_415());
		func_13(1, bVar5);
	}
	if (does_entity_exist(&(iLocal_2100[0])) && !_0x53784cea0159439b(&(iLocal_2100[0])))
	{
		_0xd80faf919a2e56ea(&(iLocal_2100[0]), 1242644044);
	}
	func_417();
	if (func_19(64) && !func_19(4))
	{
		func_13(4, func_418(&iVar4, uLocal_2077[0]));
		return 0;
	}
	if (iLocal_98 == 1)
	{
		if (does_entity_exist(&(iLocal_2100[0])) && !_0x083d497d57b7400f(&(iLocal_2100[0])))
		{
			set_entity_coords(&(iLocal_2100[0]), Local_611.f_304[0]->f_6, true, false, true, true);
			freeze_entity_position(&(iLocal_2100[0]), true);
			_0xba8818212633500a(&(iLocal_2100[0]), 0, 1);
		}
	}
	if (!func_19(32))
	{
		if (func_19(262144))
		{
			Local_2164.f_2[0] = "LOG_WRK02";
			if (!func_19(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_419(&iVar4);
						}
						else
						{
							return func_420(&iVar4);
						}
						break;
					default:
						return func_420(&iVar4);
				}
			}
			else
			{
				return func_421(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!func_19(16))
					{
						return func_422(&iVar4);
					}
					else
					{
						return func_421(&iVar4);
					}
					break;
				case 2:
					if (!func_19(16))
					{
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_419(&iVar4);
						}
						else
						{
							return func_420(&iVar4);
						}
					}
					else
					{
						return func_421(&iVar4);
					}
					break;
				case 3:
					func_423(uLocal_2077[0], 0);
					func_423(uLocal_2077[1], 1);
					func_424();
					func_425();
					if (func_9(Local_1614.f_136, 256) || func_426(&iVar4))
					{
						return func_427(&iVar4);
					}
					break;
				case 4:
				case 5:
					return func_397();
			}
		}
	}
	return 0;
}

void func_138()
{
	func_428();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_429(iVar0) && !func_430(iVar0))
		{
			if (!does_rayfire_map_object_exist(&(iLocal_450[iVar0])))
			{
				if (!(iVar0 == 0 && func_19(512)))
				{
				}
			}
			else
			{
				fVar1 = get_rayfire_map_object_anim_phase(&(iLocal_450[iVar0]));
				if (fVar1 >= (func_431(iVar0) - 0.007544f) && fVar1 <= func_432(iVar0))
				{
					func_433();
				}
				switch (iVar598)
				{
					case 0:
						if (fVar1 >= func_431(iVar0) && fVar1 < func_432(iVar0))
						{
							set_pad_shake(0, 400, func_434(iVar0));
							func_435(iVar0);
							_0x017492b2201e3428("SHOCKWAVE_TREE_FALL", func_436(iVar0));
							iVar2 = _get_last_mount(Global_35);
							if (!is_entity_dead(iVar2) && func_438(iVar2, func_437(iVar0), 1) < 10f)
							{
								_0xbae08f00021bffb2(iVar2, func_366());
							}
							iLocal_600 = 1;
						}
						break;
					case 1:
						if (fVar1 >= func_432(iVar0))
						{
							add_shocking_event_at_position(-1905235087, func_436(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							func_58(8192);
							set_pad_shake(0, 300, (func_434(iVar0) / 2));
							iLocal_600 = 2;
						}
						break;
					case 2:
						func_111(&(iLocal_75[2]));
						func_111(&(iLocal_75[3]));
						iLocal_600 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_139()
{
	if (func_22(&Local_1614, 1024))
	{
		return true;
	}
	if (bVar2270)
	{
		return true;
	}
	if (iVar2267 == 1)
	{
		if (is_screen_faded_out())
		{
			return false;
		}
	}
	if (_0xcf45df50c7775f2a())
	{
		return false;
	}
	if (func_439(bVar2270))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_141(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_142(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_143(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

Vector3 func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_145(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_146(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_440())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_441(&(Global_1898164->f_1[0]));
		if (func_442(iVar0) && func_443((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_100(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_147()
{
	return func_444(64);
}

bool func_148(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_445(iVar0) || func_446(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_149()
{
	return Global_1310750->f_16077 != 0;
}

int func_150()
{
	return Global_1310750->f_16071;
}

void func_151(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_140(iParam0))
	{
		return;
	}
	func_447(iParam0, Global_40.f_9096[iParam0]->f_10, iParam1, iParam2, uParam3, uParam4);
}

bool func_152(int iParam0)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0]->f_3 > Global_40.f_9096[iParam0]->f_10;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_158(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_159(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_201(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_160(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_161(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_162(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*iParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*iParam0 = 67;
		*iParam1 = 68;
	}
}

bool func_163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_1() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_164(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_241(func_240(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_169(iParam0));
	return 1;
}

int func_165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_448(iParam0))
	{
		return 1;
	}
	if (func_142(iParam0, 16))
	{
		return 1;
	}
	if (func_449(iParam0) && !func_450(iParam0))
	{
	}
	if (func_163(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_157(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_157(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_449(iParam0) || func_450(iParam0)) || func_451(&Global_1897950))
			{
				func_242(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_166(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_453(func_452());
	if (func_378(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_378(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_378(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_378(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_378(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_378(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_378(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_378(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_378(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_378(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_378(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_378(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_378(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_378(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_378(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_378(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_378(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_167(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_454(iVar0))
		{
			fVar3 = func_455(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_168(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_169(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_170(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	iVar0 = func_169(iParam0);
	func_456(iParam0);
	_0x7b204f88f6c3d287(iVar0);
	_0xfc77c5b44d5ff7c0(iVar0);
}

void func_171(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_172(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

void func_173()
{
	if (!_does_volume_exist(&(iLocal_75[16])))
	{
		if (func_19(64))
		{
			iLocal_75[16] = _create_volume_cylinder_with_custom_name(-1390.451f, -274.8033f, 102.3449f, 0f, 0f, 0f, 4.622575f, 4.933644f, 4.047438f, "Appleseed - volRoadBlocking");
		}
		else if (iLocal_98 == 3 && !func_19(262144))
		{
			iLocal_75[16] = _create_volume_cylinder_with_custom_name(-1430.557f, -357.1499f, 111.7085f, 0f, 0f, 0f, 7.102352f, 6.564137f, 4.575559f, "Appleseed - volRoadBlocking");
		}
	}
}

void func_174()
{
	if (_does_volume_exist(&(iLocal_75[16])))
	{
		if (!func_51(4194304) && !func_279(2048))
		{
			vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_75[16])) };
			func_458(_0xf70f00013a62f866(&(iLocal_75[16])), func_457(vVar0.x, vVar0.y), 0, 0, 4);
			_0xb03944057fd735ba(&(iLocal_75[16]), 4, 0);
			func_58(4194304);
		}
	}
}

void func_175(int iParam0)
{
	if (iLocal_98 == 3)
	{
		iParam0->f_1 = 2;
		iParam0->f_369[0]->f_6 = { -1403.06f, -269.28f, 98.71f };
		iParam0->f_369[0]->f_9 = -49f;
		iParam0->f_369[0]->f_1 = -1143398950;
		iParam0->f_369[1]->f_6 = { -1414.56f, -182f, 99.63f };
		iParam0->f_369[1]->f_9 = 40.7f;
		iParam0->f_369[1]->f_1 = -1143398950;
	}
}

void func_176(int iParam0)
{
	*iParam0 = 4;
	if (func_19(64))
	{
		iParam0->f_15[0]->f_6 = { -1413.793f, -240.7767f, 98.87817f };
		iParam0->f_15[0]->f_9 = 251.3227f;
		iParam0->f_15[0]->f_1 = func_459();
		iParam0->f_15[0]->f_3 = 1842387010;
		iParam0->f_15[1]->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1]->f_9 = 214.3414f;
		iParam0->f_15[1]->f_1 = func_459();
		iParam0->f_15[2]->f_6 = { -1407.91f, -252.1218f, 99.3026f };
		iParam0->f_15[2]->f_9 = 354.953f;
		iParam0->f_15[2]->f_21 = 0;
		iParam0->f_15[2]->f_1 = func_459();
		iParam0->f_15[3]->f_6 = { -1415.464f, -251.052f, 100.0263f };
		iParam0->f_15[3]->f_9 = 323.5956f;
		iParam0->f_15[3]->f_21 = 1;
		iParam0->f_15[3]->f_1 = func_459();
	}
	iParam0->f_1 = 0;
	if (func_19(16384))
	{
		iParam0->f_1++;
	}
	if (iLocal_98 == 1 && func_19(131072))
	{
		Local_15[0]->f_4 = { -1376.811f, -220.7483f, 100.515f };
		Local_15[0]->f_10 = -22.2f;
	}
	else
	{
		Local_15[0]->f_4 = { -1261.942f, -304.2063f, 97.9132f };
		Local_15[0]->f_10 = 59.8051f;
	}
	if (func_19(32768))
	{
		Local_15[0]->f_11 = -1708097161;
		if (iLocal_98 == 1 && !func_19(131072))
		{
			Local_15[0]->f_12 = "LOG_WAGON01A";
		}
		iLocal_14 += 2;
	}
	*Local_15[0] = { -1372.528f, -209.3416f, 100.5443f };
	Local_15[0]->f_3 = 349.7721f;
	Local_15[0]->f_23 = 0;
	Local_15[0]->f_22 = 0;
	Local_15[0]->f_7 = { -1381.927f, -210.7938f, 102.3367f };
	iParam0->f_15[4]->f_6 = { -1416.878f, -211.8701f, 104.7347f };
	iParam0->f_15[4]->f_9 = 309.938f;
	if (func_19(32768))
	{
		*iParam0++;
		iParam0->f_15[4]->f_1 = func_459();
	}
	else
	{
		iParam0->f_15[4]->f_1 = 0;
	}
}

void func_177(int iParam0)
{
	func_176(iParam0);
	if (func_19(64))
	{
		iParam0->f_15[1]->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1]->f_9 = 214.3414f;
		iParam0->f_15[1]->f_1 = func_459();
	}
	Local_15[1]->f_4 = { -1377.5f, -200.4f, 102.6f };
	Local_15[1]->f_10 = 77.9f;
	if (func_19(65536))
	{
		Local_15[1]->f_11 = -1708097161;
		iLocal_14 += 2;
	}
	*Local_15[1] = { -1400.617f, -124.2774f, 96.3551f };
	Local_15[1]->f_3 = 89f;
	Local_15[1]->f_23 = 1;
	Local_15[1]->f_25 = 1;
	if (func_19(65536))
	{
		Local_15[1]->f_12 = "LOG_WAGON02C";
	}
	if (func_19(32768))
	{
		Local_15[0]->f_12 = "LOG_WAGON01B";
	}
	*Local_15[0] = { -1373.148f, -219.672f, 99.51241f };
	iParam0->f_15[5]->f_6 = { -1376f, -197.6f, 102.1f };
	iParam0->f_15[5]->f_9 = 55.8f;
	if (func_19(65536))
	{
		*iParam0++;
		iParam0->f_15[5]->f_1 = func_459();
	}
	else
	{
		iParam0->f_15[5]->f_1 = 0;
	}
}

void func_178()
{
	uVar5 = 4;
	if (func_9(Local_1614.f_136, 32))
	{
		sVar0[0] = "";
		sVar0[1] = "";
		sVar0[2] = "";
		sVar0[3] = "";
	}
	else if (func_281(1) > 0)
	{
		sVar0[0] = "LOG_GUARD01_P";
		sVar0[1] = "LOG_GUARD02_P";
	}
	else
	{
		sVar0[0] = "LOG_GUARD01";
		sVar0[1] = "LOG_GUARD02";
	}
	func_283(&sVar0, &uVar5, &Local_2201, 1);
}

void func_179(int iParam0, bool bParam1)
{
	func_176(iParam0);
	func_177(iParam0);
	if (func_5(0, 128))
	{
		if (func_19(65536))
		{
			Local_15[1]->f_12 = "LOG_WAGON02C";
		}
		if (func_19(32768))
		{
			Local_15[0]->f_12 = "LOG_WAGON01C";
		}
	}
	else
	{
		iParam0->f_15[0]->f_6 = { -1389.931f, -265.0812f, 98.29932f };
		iParam0->f_15[0]->f_9 = -161.23f;
		iParam0->f_15[0]->f_1 = func_459();
		iParam0->f_15[1]->f_6 = { -1431.474f, -269.5809f, 102.2202f };
		iParam0->f_15[1]->f_9 = -148.66f;
		iParam0->f_15[1]->f_1 = func_459();
		if (!bParam1)
		{
			iParam0->f_15[2]->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[2]->f_9 = 49.7f;
			iParam0->f_15[2]->f_21 = 1;
			iParam0->f_15[2]->f_1 = func_459();
			iParam0->f_15[2]->f_3 = -1149853461;
			func_460(&(iParam0->f_15[2]->f_22));
			func_461(&(iParam0->f_15[2]->f_22));
			func_462(&(iParam0->f_15[2]->f_22));
			func_463(&(iParam0->f_15[2]->f_22));
			func_464(&(iParam0->f_15[2]->f_22));
			iParam0->f_15[3]->f_6 = { -1444.485f, -357.8756f, 114.8794f };
			iParam0->f_15[3]->f_9 = -145.8f;
			iParam0->f_15[3]->f_21 = 1;
			iParam0->f_15[3]->f_1 = func_459();
			iParam0->f_15[3]->f_3 = 307318431;
			func_460(&(iParam0->f_15[3]->f_22));
			func_461(&(iParam0->f_15[3]->f_22));
			func_462(&(iParam0->f_15[3]->f_22));
			func_463(&(iParam0->f_15[3]->f_22));
			func_464(&(iParam0->f_15[3]->f_22));
		}
		else
		{
			iParam0->f_15[2]->f_1 = 0;
			iParam0->f_15[2]->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[3]->f_1 = 0;
			iParam0->f_15[3]->f_6 = { -1444.485f, -357.8756f, 114.8794f };
		}
		iParam0->f_369[0]->f_6 = { -1468.629f, -379.8213f, 125.2618f };
		iParam0->f_369[0]->f_9 = -45.42f;
		iParam0->f_369[0]->f_1 = -1143398950;
		iParam0->f_369[1]->f_6 = { -1459.213f, -380.2958f, 122.0884f };
		iParam0->f_369[1]->f_9 = -6.39f;
		iParam0->f_369[1]->f_1 = -1143398950;
		iParam0->f_369[2]->f_6 = { -1449.054f, -341.1028f, 118.9559f };
		iParam0->f_369[2]->f_9 = -124.44f;
		iParam0->f_369[2]->f_1 = -1143398950;
		*iParam0 = 4;
		iParam0->f_1 = 3;
		Local_15[1]->f_11 = 0;
		Local_15[0]->f_11 = 0;
		iParam0->f_15[5]->f_1 = 0;
		iParam0->f_15[4]->f_1 = 0;
	}
}

void func_180()
{
	if (!iLocal_98 == 3 || func_5(Local_1614.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((func_9(Local_1614.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_465(iVar0);
			}
			if (func_19(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_466(iVar0))
			{
				func_467(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_181()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_182()
{
	bVar0 = func_366();
	iVar1 = get_random_int_in_range(0, 3);
	if (iVar1 == 0 && get_random_float_in_range(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !func_5(Local_1614.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		func_469(&uLocal_602, func_7(iVar3));
		iVar3 += 2;
	}
}

void func_183(int iParam0)
{
	func_347(iParam0, 0);
	func_190(iParam0, 0);
	func_188(iParam0, 1);
	func_193(iParam0, 1);
	func_189(iParam0, 0);
	func_198(iParam0, 1);
	func_470(iParam0, 1, 1, 1);
}

void func_184(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_471(iParam0, fParam1);
	}
}

void func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 4);
	}
	else
	{
		func_145(&(iParam0->f_1), 4);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 2);
	}
	else
	{
		func_145(&(iParam0->f_1), 2);
	}
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 1);
	}
	else
	{
		func_145(&(iParam0->f_1), 1);
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 256);
	}
	else
	{
		func_145(&(iParam0->f_1), 256);
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 128);
	}
	else
	{
		func_145(&(iParam0->f_1), 128);
	}
}

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 2048);
	}
	else
	{
		func_145(&(iParam0->f_1), 2048);
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 32);
	}
	else
	{
		func_201(iParam0, 32);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 8);
	}
	else
	{
		func_145(&(iParam0->f_1), 8);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 16);
	}
	else
	{
		func_201(iParam0, 67108864);
		func_201(iParam0, 16);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 8);
	}
	else
	{
		func_201(iParam0, 8);
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 1024);
	}
	else
	{
		func_201(iParam0, 1024);
	}
}

void func_196(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_197(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 128);
	}
	else
	{
		func_201(iParam0, 128);
	}
}

void func_198(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 256);
	}
	else
	{
		func_201(iParam0, 256);
	}
}

void func_199(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 2);
	}
	else
	{
		func_201(iParam0, 2);
	}
}

void func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 131072);
	}
	else
	{
		func_201(iParam0, 131072);
	}
}

void func_201(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_202()
{
	if (func_117(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_0x1ff441d7954f8709(&(uLocal_456[iVar0])))
		{
			_0xd2b9c78537ed5759(&(uLocal_456[iVar0]));
		}
		iVar0++;
	}
}

void func_203()
{
	_uilog_clear_cached_objective();
}

void func_204(int iParam0)
{
	Global_40.f_9096[iParam0]->f_9 = -1;
	Global_40.f_9096[iParam0]->f_10 = -1;
	func_15(iParam0, 32768);
}

void func_205(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		iVar0 = _0x0139637a3bff8b6d(*iParam0, &iVar1);
		_0x946d46cd6dfb9742(get_player_index(), iVar1, iVar0);
	}
}

void func_206(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 - (Global_40.f_9096[iParam0]->f_4 && iParam1));
}

bool func_207(int iParam0)
{
	return func_316(iParam0) == 0;
}

bool func_208(int iParam0, bool bParam1)
{
	switch (func_316(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_209(int iParam0)
{
	return func_316(iParam0) == 7;
}

bool func_210(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_211(var uParam0, int iParam1)
{
	if (func_210(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_212(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 - (Global_1898092->f_1 && iParam0));
}

void func_213()
{
	if (_does_volume_exist(&(iLocal_75[16])))
	{
		if (func_51(4194304))
		{
			vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_75[16])) };
			func_472(_0xf70f00013a62f866(&(iLocal_75[16])), func_457(vVar0.x, vVar0.y), 4);
			_0x5a4e1a41e3a02ad0(&(iLocal_75[16]), 4, 0);
		}
	}
}

void func_214()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_473(func_436(iVar0), 0);
		iLocal_450[iVar0] = 0;
		iVar0++;
	}
}

void func_215(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_474(iVar0, bParam0);
		iVar0++;
	}
}

void func_216(bool bParam0)
{
	set_ped_reset_flag(Global_35, 5, !bParam0);
	func_185(&Local_1614, bParam0);
	func_188(&Local_1614, bParam0);
}

bool func_217(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

int func_218(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!prepare_music_event(sParam0))
		{
			return 0;
		}
	}
	if (trigger_music_event(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_219(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_delete_anim_scene(*uParam0);
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam2, 128);
	func_72(iParam0, 0);
	func_158(iParam2->f_137, 0);
	func_475(iParam2);
	func_42(iParam0, 2048);
	func_82(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_162(&iVar0, &iVar1, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		set_ped_keep_task(func_63(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = iVar0;
	Global_1898092->f_26.f_8 = iParam2->f_29;
	Global_1898092->f_26.f_2 = iParam2->f_136;
	Global_1898092->f_26.f_1 = iParam2->f_137;
	func_172(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (does_entity_exist(iParam1->f_690[iVar3]->f_8))
		{
			delete_object(&(iParam1->f_690[iVar3]->f_8));
		}
		iVar3++;
	}
	if (func_312(iParam2->f_32))
	{
		func_313(&(iParam2->f_32), 1, 1);
	}
	if (func_312(iParam2->f_33))
	{
		func_313(&(iParam2->f_33), 1, 1);
	}
	if (func_312(iParam2->f_34))
	{
		func_313(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		_0x7d4e70a67a651c71((*iParam1 + iParam1->f_1));
	}
	if (func_400(get_cause_of_most_recent_force_cleanup(), 1))
	{
		func_42(iParam2->f_136, 4194304);
	}
	func_476();
	if (func_22(iParam2, 65536))
	{
		set_player_control(get_player_index(), true, 0, false);
		display_radar(true);
		display_hud(true);
	}
}

void func_221(int iParam0)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0->f_3);
	iParam0->f_3 = 0;
}

char* func_222()
{
	return "LOGCMP";
}

char* func_223()
{
	return "LCMPAUD";
}

bool func_224(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_477(iVar0))
	{
		return false;
	}
	if (func_478(iVar0, 1) || func_478(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_225(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_479() - fParam1);
	func_480(fParam0, 1);
	func_481(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_226(var uParam0, float fParam1)
{
	if (func_395(uParam0, fParam1))
	{
		func_270(uParam0);
		return true;
	}
	return false;
}

void func_227(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_228(&((*uParam0)[iVar0]->f_1));
		func_228(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_228(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_229()
{
	if (func_19(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_483(Local_479[(9 + iVar0)], "script@proc@eventareas@appleseed@Tree_Saw", func_482(9), 0);
			iVar0++;
		}
	}
	if (func_19(16384))
	{
		func_483(Local_479[6], "script@proc@eventareas@appleseed@Log_Drag", func_482(6), 0);
	}
	if (func_19(256))
	{
		func_483(Local_479[7], "script@proc@eventareas@appleseed@Boom_Operator", func_482(7), 0);
		func_483(Local_479[8], "script@proc@eventareas@appleseed@Boom_Spotter", func_482(8), 0);
	}
	if (func_19(64))
	{
		func_483(Local_479[2], "script@proc@eventareas@appleseed@Tree_Fall", func_482(2), 0);
		func_483(Local_479[3], "script@proc@eventareas@appleseed@Player_Help_A", func_482(3), 0);
		func_483(Local_479[4], "script@proc@eventareas@appleseed@Player_Help_B", func_482(4), 0);
	}
	if (func_19(262144))
	{
		if (func_19(16))
		{
			func_484();
		}
		else if (func_9(1, 2) && !func_9(Local_1614.f_136, 16384))
		{
			func_483(Local_479[0], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
			func_483(Local_479[5], "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
		}
		else
		{
			func_484();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (func_19(16))
				{
					func_484();
				}
				else
				{
					func_483(Local_479[5], "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_482(5), 0);
					func_483(Local_479[0], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(0), 0);
					func_483(Local_479[1], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(1), 0);
				}
				break;
			case 2:
				if (func_19(16))
				{
					func_484();
				}
				else if (func_9(1, 2) && !func_9(Local_1614.f_136, 16384))
				{
					func_483(Local_479[0], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
					func_483(Local_479[5], "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
				}
				else
				{
					func_484();
				}
				break;
			case 3:
				func_483(Local_479[0], "script@proc@eventareas@appleseed@Foreman_Orders", func_482(0), 0);
				func_483(Local_479[1], "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_482(1), 0);
				func_483(Local_479[2], "script@proc@eventareas@appleseed@Player_Grab_Money", func_482(2), 0);
				func_483(Local_479[3], "script@proc@eventareas@appleseed@Worker_Convo", func_482(3), 0);
				break;
		}
	}
}

void func_230()
{
	if (func_19(256))
	{
		iVar0 = get_random_int_in_range(12, 12);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (iVar1 <= iVar0)
			{
				Local_1765[iVar1]->f_7 = func_485();
			}
			else
			{
				Local_1765[iVar1]->f_7 = 0;
			}
			*Local_1765[iVar1] = { func_486(iVar1) };
			if (func_366())
			{
				Local_1765[iVar1]->f_3 = 25f;
			}
			else
			{
				Local_1765[iVar1]->f_3 = (180f + 25f);
			}
			Local_1765[iVar1]->f_10 = 0;
			func_487(&(Local_1765[iVar1]->f_11), 67);
			iVar1++;
		}
	}
	if (func_19(128))
	{
		if (func_19(64))
		{
			Local_611.f_690[7]->f_7 = 799179000;
		}
		else
		{
			Local_611.f_690[7]->f_7 = 0;
		}
		*Local_611.f_690[7] = { func_488() };
		Local_611.f_690[7]->f_3 = 89f;
		Local_611.f_690[7]->f_10 = 0;
		if (func_19(64))
		{
			Local_611.f_690[8]->f_7 = 799179000;
		}
		else
		{
			Local_611.f_690[8]->f_7 = 0;
		}
		*Local_611.f_690[8] = { func_488() };
		Local_611.f_690[8]->f_3 = 89f;
		Local_611.f_690[8]->f_10 = 0;
		if (func_19(64))
		{
			Local_611.f_690[9]->f_7 = 799179000;
		}
		else
		{
			Local_611.f_690[9]->f_7 = 0;
		}
		*Local_611.f_690[9] = { func_488() };
		Local_611.f_690[9]->f_3 = 89f;
		Local_611.f_690[9]->f_10 = 0;
		if (func_19(64))
		{
			Local_611.f_690[10]->f_7 = 927991752;
		}
		else
		{
			Local_611.f_690[10]->f_7 = 0;
		}
		*Local_611.f_690[10] = { func_488() };
		Local_611.f_690[10]->f_3 = 89f;
		Local_611.f_690[10]->f_10 = 0;
		if (func_19(64))
		{
			Local_611.f_690[24]->f_7 = 581435710;
		}
		else
		{
			Local_611.f_690[24]->f_7 = 0;
		}
		*Local_611.f_690[24] = { -1402.82f, -270.8668f, 98.5585f };
		Local_611.f_690[24]->f_3 = 74.57f;
		Local_611.f_690[24]->f_10 = 0;
		func_487(&(Local_611.f_690[24]->f_11), 64);
		if (func_19(64))
		{
			Local_611.f_690[6]->f_7 = -770982987;
			*Local_611.f_690[6] = { func_489() };
			Local_611.f_690[6]->f_3 = 89f;
			Local_611.f_690[6]->f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_611.f_690[12]->f_7 = 1246532592;
			*Local_611.f_690[12] = { -1341.215f, -194.8321f, 102.4812f };
			Local_611.f_690[12]->f_3 = 27f;
			Local_611.f_690[12]->f_10 = 0;
			func_487(&(Local_611.f_690[12]->f_11), 75);
			if (func_19(128))
			{
				Local_611.f_690[0]->f_7 = 0;
				*Local_611.f_690[0] = { func_488() };
				Local_611.f_690[0]->f_3 = 89f;
				Local_611.f_690[0]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[4]->f_7 = -1419711042;
				}
				else
				{
					Local_611.f_690[4]->f_7 = 0;
				}
				*Local_611.f_690[4] = { func_488() };
				Local_611.f_690[4]->f_3 = 89f;
				Local_611.f_690[4]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[3]->f_7 = 1547859810;
				}
				else
				{
					Local_611.f_690[3]->f_7 = 0;
				}
				*Local_611.f_690[3] = { func_488() };
				Local_611.f_690[3]->f_3 = 89f;
				Local_611.f_690[3]->f_10 = 0;
			}
			break;
		case 2:
			Local_611.f_690[13]->f_7 = 343412282;
			*Local_611.f_690[13] = { -1349.263f, -189.6734f, 99.9598f };
			Local_611.f_690[13]->f_3 = 24f;
			Local_611.f_690[13]->f_10 = 0;
			func_487(&(Local_611.f_690[13]->f_11), 75);
			Local_611.f_690[12]->f_7 = 2117892179;
			*Local_611.f_690[12] = { -1342.864f, -201.941f, 101.154f };
			Local_611.f_690[12]->f_3 = 25f;
			Local_611.f_690[12]->f_10 = 0;
			func_487(&(Local_611.f_690[12]->f_11), 75);
			Local_611.f_690[25]->f_7 = -1443906703;
			*Local_611.f_690[25] = { -1400.832f, -205.2252f, 101.8838f };
			Local_611.f_690[25]->f_3 = 19.95f;
			Local_611.f_690[25]->f_10 = 0;
			if (func_19(128))
			{
				if (func_9(1, 2))
				{
					Local_611.f_690[3]->f_7 = -1473388640;
				}
				else
				{
					Local_611.f_690[3]->f_7 = 0;
				}
				*Local_611.f_690[3] = { func_488() };
				Local_611.f_690[3]->f_4 = { 90f, 0f, -5.99f };
				Local_611.f_690[3]->f_10 = 0;
				if (func_9(1, 2))
				{
					Local_611.f_690[4]->f_7 = -1698780291;
				}
				else
				{
					Local_611.f_690[4]->f_7 = 0;
				}
				*Local_611.f_690[4] = { -1400.53f, -206.6157f, 102.7172f };
				Local_611.f_690[4]->f_3 = -153.92f;
				Local_611.f_690[4]->f_10 = 0;
				func_487(&(Local_611.f_690[4]->f_11), 2);
				if (func_9(1, 2) || func_19(64))
				{
					Local_611.f_690[6]->f_7 = -770982987;
					*Local_611.f_690[6] = { func_489() };
					Local_611.f_690[6]->f_3 = 89f;
					Local_611.f_690[6]->f_10 = 0;
				}
			}
			break;
		case 3:
			Local_611.f_690[13]->f_7 = 343412282;
			*Local_611.f_690[13] = { -1349.263f, -189.6734f, 99.9598f };
			Local_611.f_690[13]->f_3 = 24f;
			Local_611.f_690[13]->f_10 = 0;
			func_487(&(Local_611.f_690[13]->f_11), 75);
			Local_611.f_690[12]->f_7 = 2117892179;
			*Local_611.f_690[12] = { -1342.864f, -201.941f, 101.154f };
			Local_611.f_690[12]->f_3 = 25f;
			Local_611.f_690[12]->f_10 = 0;
			func_487(&(Local_611.f_690[12]->f_11), 75);
			Local_611.f_690[25]->f_7 = -1443906703;
			*Local_611.f_690[25] = { -1400.832f, -205.2252f, 101.8838f };
			Local_611.f_690[25]->f_3 = 19.95f;
			Local_611.f_690[25]->f_10 = 0;
			if (func_19(128))
			{
				if (!func_5(Local_1614.f_136, 128) || (func_5(Local_1614.f_136, 128) && func_9(1, 2)))
				{
					Local_611.f_690[3]->f_7 = -1473388640;
				}
				else
				{
					Local_611.f_690[3]->f_7 = 0;
				}
				*Local_611.f_690[3] = { func_488() };
				Local_611.f_690[3]->f_3 = 89f;
				Local_611.f_690[3]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128) || (func_5(Local_1614.f_136, 128) && func_9(1, 2)))
				{
					Local_611.f_690[4]->f_7 = -1698780291;
				}
				else
				{
					Local_611.f_690[4]->f_7 = 0;
				}
				*Local_611.f_690[4] = { -1400.53f, -206.6157f, 102.7172f };
				Local_611.f_690[4]->f_3 = -153.92f;
				Local_611.f_690[4]->f_10 = 0;
				func_487(&(Local_611.f_690[4]->f_11), 2);
				if (!func_5(Local_1614.f_136, 128) || func_9(1, 2))
				{
					Local_611.f_690[6]->f_7 = -770982987;
				}
				else
				{
					Local_611.f_690[6]->f_7 = 0;
				}
				*Local_611.f_690[6] = { func_488() };
				Local_611.f_690[6]->f_3 = 89f;
				Local_611.f_690[6]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[7]->f_7 = -1971689092;
				}
				else
				{
					Local_611.f_690[7]->f_7 = 0;
				}
				*Local_611.f_690[7] = { func_488() };
				Local_611.f_690[7]->f_3 = 89f;
				Local_611.f_690[7]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[8]->f_7 = -1914893189;
				}
				else
				{
					Local_611.f_690[8]->f_7 = 0;
				}
				*Local_611.f_690[8] = { func_488() };
				Local_611.f_690[8]->f_3 = 89f;
				Local_611.f_690[8]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[9]->f_7 = -1914893189;
				}
				else
				{
					Local_611.f_690[9]->f_7 = 0;
				}
				*Local_611.f_690[9] = { func_488() };
				Local_611.f_690[9]->f_3 = 89f;
				Local_611.f_690[9]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[10]->f_7 = -1914893189;
				}
				else
				{
					Local_611.f_690[10]->f_7 = 0;
				}
				*Local_611.f_690[10] = { func_488() };
				Local_611.f_690[10]->f_3 = 89f;
				Local_611.f_690[10]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[11]->f_7 = -1914893189;
				}
				else
				{
					Local_611.f_690[11]->f_7 = 0;
				}
				*Local_611.f_690[11] = { func_488() };
				Local_611.f_690[11]->f_3 = 89f;
				Local_611.f_690[11]->f_10 = 0;
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[0]->f_7 = 171105065;
				}
				else
				{
					Local_611.f_690[0]->f_7 = 0;
				}
				*Local_611.f_690[0] = { func_490(0, 2) };
				Local_611.f_690[0]->f_2 = (Local_611.f_690[0]->f_2 - 5f);
				Local_611.f_690[0]->f_3 = 89f;
				Local_611.f_690[0]->f_10 = 0;
				func_487(&(Local_611.f_690[0]->f_11), 67);
				if (!func_5(Local_1614.f_136, 128))
				{
					Local_611.f_690[1]->f_7 = -1700886102;
				}
				else
				{
					Local_611.f_690[1]->f_7 = 0;
				}
				*Local_611.f_690[1] = { func_490(0, 3) };
				Local_611.f_690[1]->f_2 = (Local_611.f_690[1]->f_2 - 5f);
				Local_611.f_690[1]->f_3 = 89f;
				Local_611.f_690[1]->f_10 = 0;
				func_487(&(Local_611.f_690[1]->f_11), 67);
			}
			break;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		bVar7 = func_400(iVar600, func_7(iVar5));
		if (bVar7)
		{
			iVar2[iVar6] = iVar5;
			iVar6++;
		}
		if (iVar6 >= 2)
		{
		}
		else
		{
			iVar5++;
		}
	}
	iVar8 = 0;
	while (iVar8 < iVar6)
	{
		iVar9 = iVar8 * 4;
		if (iVar9 + 18 >= Local_611.f_690 || iVar9 < 0)
		{
		}
		else
		{
			iVar5 = &iVar2[iVar8];
			if (func_19(8192))
			{
				(Local_611.f_690[(15 + iVar9)])->f_7 = -396933308;
				(Local_611.f_690[(16 + iVar9)])->f_7 = 622277464;
				(Local_611.f_690[(17 + iVar9)])->f_7 = 2125915446;
				(Local_611.f_690[(18 + iVar9)])->f_7 = 861227228;
			}
			else
			{
				(Local_611.f_690[(15 + iVar9)])->f_7 = 0;
				(Local_611.f_690[(16 + iVar9)])->f_7 = 0;
				(Local_611.f_690[(17 + iVar9)])->f_7 = 0;
				(Local_611.f_690[(18 + iVar9)])->f_7 = 0;
			}
			*(Local_611.f_690[(15 + iVar9)]) = { func_491(iVar5) };
			(Local_611.f_690[(15 + iVar9)])->f_3 = func_492(iVar5);
			(Local_611.f_690[(15 + iVar9)])->f_10 = 0;
			*(Local_611.f_690[(16 + iVar9)]) = { func_493(iVar5) };
			(Local_611.f_690[(16 + iVar9)])->f_4 = { func_494(iVar5) };
			(Local_611.f_690[(16 + iVar9)])->f_10 = 0;
			func_487(&((Local_611.f_690[(16 + iVar9)])->f_11), 2);
			vVar10 = { _get_object_offset_from_coords(*(Local_611.f_690[(16 + iVar9)]), (Local_611.f_690[(16 + iVar9)])->f_3, 0.025f, -4.4039f, 0.041f) };
			*(Local_611.f_690[(17 + iVar9)]) = { vVar10 };
			(Local_611.f_690[(17 + iVar9)])->f_3 = (Local_611.f_690[(16 + iVar9)])->f_3;
			(Local_611.f_690[(17 + iVar9)])->f_10 = 0;
			vVar10 = { _get_object_offset_from_coords(*(Local_611.f_690[(16 + iVar9)]), (Local_611.f_690[(16 + iVar9)])->f_3, 0f, 6.3529f, -0.077f) };
			*(Local_611.f_690[(18 + iVar9)]) = { vVar10 };
			(Local_611.f_690[(18 + iVar9)])->f_3 = (Local_611.f_690[(16 + iVar9)])->f_3;
			(Local_611.f_690[(18 + iVar9)])->f_10 = 0;
			iVar8++;
		}
	}
	if (func_19(128))
	{
		if (func_19(16384))
		{
			Local_611.f_690[2]->f_7 = -1035439448;
		}
		else
		{
			Local_611.f_690[2]->f_7 = 0;
		}
		*Local_611.f_690[2] = { -1410.311f, -227.9941f, 99.4013f };
		Local_611.f_690[2]->f_3 = 100.36f;
		Local_611.f_690[2]->f_10 = 0;
		if (func_19(16384))
		{
			Local_611.f_690[14]->f_7 = 1410968406;
		}
		else
		{
			Local_611.f_690[14]->f_7 = 0;
		}
		*Local_611.f_690[14] = { -1404.688f, -227.0209f, 99.4983f };
		Local_611.f_690[14]->f_3 = 94.76f;
		Local_611.f_690[14]->f_10 = 0;
		if (func_19(16384))
		{
			Local_611.f_690[23]->f_7 = 1481263968;
		}
		else
		{
			Local_611.f_690[23]->f_7 = 0;
		}
		*Local_611.f_690[23] = { -1412.52f, -227.139f, 99.815f };
		Local_611.f_690[23]->f_3 = 129.6f;
		Local_611.f_690[23]->f_10 = 1;
	}
	if ((func_19(262144) || func_19(16)) && func_335())
	{
		if (iLocal_98 != 3)
		{
			Local_611.f_690[5]->f_7 = -1443906703;
		}
		else
		{
			Local_611.f_690[5]->f_7 = 0;
		}
		iLocal_75[1] = _create_volume_box_with_custom_name(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		_0x18262cafebb5fbe1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
		Local_611.f_690[11]->f_7 = 1566690690;
		switch (iLocal_98)
		{
			case 1:
				Local_611.f_690[11]->f_7 = 0;
				*Local_611.f_690[11] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				*Local_611.f_690[11] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				*Local_611.f_690[11] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_611.f_690[11]->f_3 = 5f;
		Local_611.f_690[11]->f_10 = 0;
		func_487(&(Local_611.f_690[11]->f_11), 66);
	}
	else
	{
		Local_611.f_690[5]->f_7 = 0;
	}
	*Local_611.f_690[5] = { -1400.098f, -211.239f, 101.889f };
	Local_611.f_690[5]->f_3 = 22f;
	Local_611.f_690[5]->f_10 = 0;
	func_487(&(Local_611.f_690[5]->f_11), 2);
}

void func_231(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			request_model((*uParam0)[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

void func_232()
{
	Local_611.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_611.f_304[0]->f_1 = -1710614406;
			Local_611.f_304[0]->f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_611.f_304[0]->f_9 = 27f;
			func_487(&(Local_611.f_304[0]->f_22), 129);
			Local_611.f_2 = 1;
			break;
		case 2:
			if (!func_22(&Local_1614, 32))
			{
				if (func_19(256))
				{
					Local_611.f_2++;
				}
			}
			if (func_9(1, 2) || func_9(Local_1614.f_136, 16384))
			{
				Local_611.f_304[0]->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_611.f_304[0]->f_9 = 298.1611f;
				Local_611.f_304[0]->f_1 = -1708097161;
				iLocal_14 += 2;
				Local_611.f_2++;
				if (func_19(262144))
				{
					Local_2164.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((func_19(262144) && func_9(1, 2)) || func_9(Local_1614.f_136, 16384))
			{
				Local_611.f_304[0]->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_611.f_304[0]->f_9 = 298.1611f;
				Local_611.f_304[0]->f_1 = -1708097161;
				iLocal_14 += 2;
				Local_611.f_2++;
				if (func_19(262144))
				{
					Local_2164.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!func_22(&Local_1614, 32))
			{
				if (func_19(256))
				{
					Local_611.f_2++;
				}
			}
			break;
	}
}

bool func_233(int iParam0)
{
	iVar0 = _0x635423d55ca84fc8(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = _0x8df5f6a19f99f0d5(iParam0, iVar1);
		request_model(iVar3, false);
		if (!has_model_loaded(iVar3))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_234()
{
	if (func_19(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		func_495(sVar0, &uLocal_2012);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		func_495(sVar0, &uLocal_2012);
	}
	if (func_19(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		func_495(sVar0, &uLocal_2012);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		func_495(sVar0, &uLocal_2012);
	}
	if (func_19(262144))
	{
		sVar0 = func_496();
		func_495(sVar0, &uLocal_2012);
		if (func_9(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			func_495(sVar0, &uLocal_2012);
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				break;
			case 2:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
				func_495(sVar0, &uLocal_2012);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				func_495(sVar0, &uLocal_2012);
				break;
		}
	}
}

void func_235()
{
	request_collision_at_coord(func_497());
}

bool func_236()
{
	if (!func_498(&(Local_611.f_690)))
	{
		return false;
	}
	return true;
}

bool func_237()
{
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return _0x6bfbdc46139c45ab(func_497());
	}
	return true;
}

bool func_238(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_499((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_239(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_500(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_501(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_502(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_502(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_503(iVar0))
		{
			func_263(iVar0, &(uParam1->f_23), 0);
		}
		if (func_503(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_504(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_505(&(uParam1->f_22)));
			func_130(iVar0, func_506(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_507(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_508(&(uParam1->f_22)))
		{
			func_509(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_510(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_250(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_503(iVar0))
		{
			func_512(iVar0, !func_511(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_513(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_514(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_514(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_240(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_241(int iParam0)
{
	return iParam0 != 0;
}

int func_242(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_515(iParam0, _create_persistent_character(func_240(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_169(iParam0));
				func_171(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_169(iParam0));
		}
		return 0;
	}
	if (!func_516(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_169(iParam0)))
	{
		func_171(iParam0, 128);
		return 1;
	}
	func_515(iParam0, _create_persistent_character(func_240(iParam0)));
	_0x4f81ead1de8fa19b(func_169(iParam0));
	if (func_23(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_169(iParam0));
		func_171(iParam0, 2048);
	}
	return 1;
}

bool func_243(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_248(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_169(iParam0));
}

bool func_244(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_169(iParam0)))
	{
		_0x49a8c2cd97815215(func_169(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_169(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_245(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_246(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_517(iParam0, 1))
	{
		return 0;
	}
	if (func_241(func_240(iParam0)))
	{
		iVar1 = func_169(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_518(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_519(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_247(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_248(int iParam0)
{
	iVar0 = func_169(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_249(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

bool func_250(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_251(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_520(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_252(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_253(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_254(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_255(var uParam0)
{
	iVar0 = 0;
	if (func_521(uParam0->f_4, 1) > 120f)
	{
		iVar0 = 1;
	}
	else if (func_521(uParam0->f_4, 1) > 65f && !is_sphere_visible(uParam0->f_4, 4f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_256(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_522(iParam0, iParam1);
}

bool func_257(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, bool bParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_387(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (get_entity_speed(player_ped_id()) > fParam6)
		{
			return false;
		}
	}
	if (func_523(iParam0, bParam5))
	{
		if (func_524(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, bParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

bool func_258(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_525(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_526(fParam0))
	{
		return false;
	}
	return true;
}

void func_259(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_260(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iVar1]))
		{
			if (!has_anim_dict_loaded((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_261()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (_does_anim_scene_exist(&(Local_479[iVar1])))
		{
			if (!func_527(Local_479[iVar1]))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

bool func_262(int iParam0, int iParam1)
{
	if (decor_exist_on(iParam0, "HAS_VOICE") && decor_get_bool(iParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (iParam1 && _0xf0ee69f500952fa5(iParam0))
	{
		return true;
	}
	return false;
}

void func_263(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_256(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_264()
{
	return 953851965;
}

char* func_265()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_266()
{
	return -1400.832f, -205.7252f, 101.8838f;
}

void func_267(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_528(Global_35) && is_player_teleport_active())
	{
	}
	if (func_503(iParam0))
	{
		if (func_529(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_250(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_267(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_267(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_250(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_250(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_250(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_250(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_250(iParam5, 129))
	{
		if (func_250(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_250(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_250(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_250(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_503(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_250(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_250(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_268(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_518(iParam0) && bParam1)
	{
		return false;
	}
	return func_23(iParam0, 1);
}

void func_269(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_157(iParam0))
	{
		return;
	}
	if (!func_23(iParam0, 1))
	{
		return;
	}
	if (!func_23(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_518(iParam0)) && func_530(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_531(iParam0);
	if (func_241(func_240(iParam0)))
	{
		iVar0 = func_169(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_171(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_532(iParam0, 0);
	}
}

void func_270(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_271()
{
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	if (((func_353(iParam0, 8388608) && func_353(iParam0, 1048576)) && func_353(iParam0, 2097152)) && func_353(iParam0, 4194304))
	{
		return -183018591;
	}
	iVar0 = _0xf8204ef17410bf43(-594562071, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(970310034, iParam1, iParam2, 0);
	iVar2 = _0xf8204ef17410bf43(-1212426201, iParam1, iParam2, 0);
	iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
	while (func_533(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = 1845102363;
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_355(iVar3))
	{
		iVar3 = -183018591;
	}
	iVar5 = 0;
	if (!func_353(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_353(iParam0, 1048576))
	{
		if (!func_354(iVar5) || _0xf2f585411e748b9c(iVar1, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_353(iParam0, 2097152))
	{
		if (!func_354(iVar5) || _0xf2f585411e748b9c(iVar3, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_353(iParam0, 4194304))
	{
		if (!func_354(iVar5) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_354(iVar5))
	{
		return -183018591;
	}
	return iVar5;
}

int func_273(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_354(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_354(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_1() == -1 && !func_355(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_355(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_354(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_534(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_535(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_536(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

char* func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 3;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0957_A_M_M_Rancher_White_02";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0807_S_M_M_Army_01_WHITE_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 4;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
				case 1:
					return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
				case 2:
					return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
				case 3:
					return "0708_S_M_M_RaCRailGuards_01_WHITE_01";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_275()
{
	if (func_166(64))
	{
		return iLocal_203;
	}
	return iLocal_204;
}

void func_276(int iParam0, bool bParam1)
{
	if (bParam1 || func_5(iParam0, 8192))
	{
		if (!_uilog_is_entry_registered(3, func_537(iParam0)))
		{
			return;
		}
		_uilog_remove_entry(3, func_537(iParam0));
		func_206(iParam0, 8192);
	}
}

void func_277(int iParam0)
{
	if (!func_5(iParam0, 8192))
	{
		_uilog_add_entry_hash(3, func_537(iParam0), func_144(iParam0, func_4(iParam0)), func_538(iParam0), func_539(iParam0), 0);
		_uilog_set_entry_icon_texture(3, func_537(iParam0), func_540(iParam0), func_541());
		_uilog_set_entry_brief_texture(3, func_537(iParam0), func_542(iParam0), func_543());
		func_42(iParam0, 8192);
	}
}

void func_278(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	_uilog_add_or_update_objective(3, func_537(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_545(func_544(iParam0), sParam2, func_541(), func_540(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

bool func_279(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

void func_280(int iParam0, bool bParam1)
{
	if (!func_546(iParam0))
	{
		iVar0 = func_141(iParam0);
		func_10(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_547(iVar0, 0);
				break;
			case 1:
				_0xd8c7162ab2e2af45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_548(iParam0, 0);
		}
	}
}

int func_281(bool bParam0)
{
	if (bParam0)
	{
		return func_549(Global_1359489->f_4);
	}
	get_group_size(func_550(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_550(), iVar3);
		if (func_551(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_282()
{
	iVar1 = _get_first_entity_ped_is_carrying(Global_35);
	if (!does_entity_exist(iVar1))
	{
		if (func_552(Global_35))
		{
			iVar1 = func_553(Global_35);
		}
		else if (func_554(Global_35))
		{
			iVar1 = func_555(Global_35);
		}
		else if (func_556(Global_35))
		{
			iVar1 = func_557(Global_35);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		return iVar0;
	}
	if (!is_entity_a_ped(iVar1))
	{
		return iVar0;
	}
	iVar0 = get_ped_index_from_entity_index(iVar1);
	return iVar0;
}

void func_283(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_558(&uVar1, iVar0, 1);
	if (bParam3)
	{
		uVar11 = &uVar1[0];
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (&uVar1[iVar10] == 0)
			{
				uVar1[0] = &uVar1[iVar10];
				uVar1[iVar10] = uVar11;
			}
			iVar10++;
		}
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar12 = &uVar1[iVar10];
		uParam2->f_2[iVar10] = sParam0[iVar12];
		uParam2->f_7[iVar10] = iParam1[iVar12];
		iVar10++;
	}
}

float func_284(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_368(Global_35, iParam0, bParam1, bParam2);
}

void func_285(var uParam0, int iParam1, int iParam2)
{
	if (!is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_286(var uParam0, int iParam1, int iParam2)
{
	if (is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseTeamA", true);
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	decor_set_int(iParam1, "HorseScriptCreator", get_hash_of_this_script_name());
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_559(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_288(iVar2, iParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

bool func_288(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == iParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_289(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

bool func_290(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(1268180497, iVar0))
	{
		return false;
	}
	iVar1 = 1268180497;
	if (_0x98082246107a6acf(iParam0, iVar1))
	{
		return true;
	}
	return false;
}

void func_291(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, bParam3);
		_0xfc3db99c8144cd81(iParam0, uParam1, iParam2, bParam3, 0);
	}
}

char* func_292(int iParam0, int iParam1)
{
	if (func_134(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO1";
					case 1:
						return "LCMP_AGGRO2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO3";
					case 1:
						return "LCMP_AGGRO4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return "LCMP_BODY1";
					case 1:
						return "LCMP_BODY2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
					case 1:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL1";
							case 1:
								return "LCMP_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL3";
							case 1:
								return "LCMP_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "";
}

int func_293(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_561(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_294(int iParam0, var uParam1)
{
	if (func_19(1048576))
	{
		if (((((func_367(func_63(Local_1614.f_138), iParam0, uParam1, 0) || ((iLocal_206 % 3) == 1 && func_562(&iLocal_1918, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_206 % 3) == 2 && func_562(&iLocal_1918, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_206 % 3) == 0 && func_562(&iLocal_1918, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || func_562(&uLocal_2077, iParam0, uParam1, 0, -1)) || func_562(&iLocal_2103, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_295()
{
	if (func_9(1, 2) || func_9(Local_1614.f_136, 16384))
	{
		if (does_entity_exist(&(iLocal_2100[0])) && func_563(Global_35, &(iLocal_2100[0]), 0))
		{
			if (func_9(Local_1614.f_136, 16384))
			{
				func_98(uLocal_2097[1]);
				return false;
			}
			else
			{
				func_565(3, 0, 0, func_564(), func_63(Local_1614.f_138), 0, 1065353216, 0);
				func_58(32768);
				return true;
			}
		}
	}
	if (func_19(65536))
	{
		if (does_entity_exist(&(uLocal_72[1])) && func_563(Global_35, &(uLocal_72[1]), 1))
		{
			func_565(3, 0, 0, func_564(), func_63(Local_1614.f_138), 0, 1065353216, 0);
			func_58(32768);
			return true;
		}
	}
	if (func_19(32768))
	{
		if (does_entity_exist(&(uLocal_72[0])) && func_563(Global_35, &(uLocal_72[0]), 1))
		{
			func_565(3, 0, 0, func_564(), func_63(Local_1614.f_138), 0, 1065353216, 0);
			func_58(32768);
			return true;
		}
	}
	return false;
}

bool func_296()
{
	iVar0 = (iLocal_206 % iVar607);
	if (iVar0 < 4)
	{
		if (!func_217(&(uLocal_604[iVar0]), &(iLocal_75[5]), 1, 0) && _get_rider_of_mount(&(uLocal_604[iVar0]), false) == Global_35)
		{
			func_35(268435456);
			return true;
		}
	}
	return false;
}

bool func_297(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_566(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_567(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_569(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_570(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_571(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_293(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_572(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_573(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_574(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_575(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_575(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_576(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_577(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_578(iParam2, 4000))
				{
					if ((func_579(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_580(iParam2, iParam0)) && func_581(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_579(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_580(iParam2, iParam0)) && func_581(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_582(iParam0, Global_1935630->f_41))
							{
								func_583();
								*uParam3 = 2;
								func_568(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_582(iParam0, Global_1935630->f_41))
						{
							func_583();
							*uParam3 = 2;
							func_568(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_584(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_585() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_583();
						*uParam3 = 2;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_586())
					{
						if (func_582(iParam0, Global_1935630->f_42))
						{
							func_583();
							*uParam3 = 2;
							func_568(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_587(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_588(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_589(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_590(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_591(iParam2, 4000))
				{
					if (func_592(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_593(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_374(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_298(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_585();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_594(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_299()
{
	if (!func_595(&Local_1614))
	{
		if (!func_596(Global_1935630->f_34[0]))
		{
			return 0;
		}
		func_43(&Local_1614, 4096);
	}
	return 1;
}

bool func_300()
{
	if (iLocal_98 != 3)
	{
		return false;
	}
	if (func_19(262144))
	{
		return false;
	}
	iVar0 = func_282();
	if ((func_288(iVar0, &iLocal_2125) || iVar0 == &uLocal_2077[2]) || iVar0 == &uLocal_2077[3])
	{
		return true;
	}
	return false;
}

bool func_301(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return true;
		default:
			break;
	}
	return false;
}

int func_302(int iParam0)
{
	if (!is_entity_dead(func_63(Local_1614.f_138)))
	{
		if (func_597())
		{
			(*iParam0)[iVar0] = func_63(Local_1614.f_138);
			iVar0++;
		}
	}
	if (func_19(64))
	{
		if (!is_entity_dead(&(uLocal_2077[0])))
		{
			(*iParam0)[iVar0] = &uLocal_2077[0];
			iVar0++;
		}
		if (!is_entity_dead(&(iLocal_2103[0])))
		{
			(*iParam0)[iVar0] = &iLocal_2103[0];
			iVar0++;
		}
	}
	if (func_19(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = func_400(iVar599, func_7(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = func_337(9, iVar1, iVar6);
					iVar4 = func_63(iVar3);
					if (!is_entity_dead(iVar4))
					{
						(*iParam0)[iVar0] = iVar4;
						iVar0++;
					}
					iVar1++;
				}
				iVar6++;
			}
			iVar2++;
		}
	}
	if (iLocal_98 == 1 && !func_5(Local_1614.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_337(6, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_19(256))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_337(7, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_5(Local_1614.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = func_337(0, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_9(Local_1614.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = func_337(3, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2100)
	{
		if (!is_entity_dead(&(iLocal_2103[iVar1])))
		{
			(*iParam0)[iVar0] = &iLocal_2103[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		(*iParam0)[iVar0] = &uLocal_2077[2];
		iVar0++;
		(*iParam0)[iVar0] = &uLocal_2077[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_304(iParam0, 1);
	iVar0 = _get_lassoed_entity(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			func_304(iParam0, 16);
			iParam0->f_4 = 45;
		}
		if (iParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					iParam0->f_16 = 0;
					break;
				case 8:
					if (_0x268b3aebf032a88d(uParam1->f_10))
					{
						func_304(iParam0, 2);
						return;
					}
					if (func_598(iParam0, &(uParam1->f_10)))
					{
						func_304(iParam0, 2);
					}
					else
					{
						func_136(iParam0, 1);
					}
					return;
				case 64:
					if (func_598(iParam0, &(uParam1->f_10)))
					{
						func_304(iParam0, 2);
					}
					else
					{
						func_136(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (does_entity_exist(func_393(Global_35)))
					{
						iParam0->f_16 = 1;
					}
					else if (does_entity_exist(iVar0))
					{
						if (is_ped_male(iVar0))
						{
							iParam0->f_18 = 1;
						}
						else
						{
							iParam0->f_18 = 2;
						}
						iParam0->f_16 = 2;
					}
					else if (is_ped_planting_bomb(Global_35))
					{
						iParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					iParam0->f_16 = 7;
					break;
			}
		}
		if (*iParam0 != 0)
		{
		}
		else if (iParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*iParam0 = uParam1->f_10;
		}
		else if (!func_601(iParam0, iParam3, Global_36, 50f, func_599(iParam0), func_600(iParam0)))
		{
		}
		if (!does_entity_exist(*iParam0) || !is_ped_human(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = func_452();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		func_304(iParam0, 2);
	}
}

void func_304(int iParam0, int iParam1)
{
	func_145(&(iParam0->f_17), iParam1);
}

int func_305(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_309(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_297(iParam0[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

bool func_306()
{
	if (func_336(Local_479[6]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(6))
		{
			iVar1 = func_63(func_337(6, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_336(Local_479[3]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(3))
		{
			iVar1 = func_63(func_337(3, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_336(Local_479[7]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(7))
		{
			iVar1 = func_63(func_337(7, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_336(Local_479[8]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(8))
		{
			iVar1 = func_63(func_337(8, iVar0, 0));
			if (iVar1 == Local_1614.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (func_336(Local_479[iVar3]))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < func_602(9))
			{
				iVar1 = func_63(func_337(9, iVar0, iVar4));
				if (iVar1 == Local_1614.f_10)
				{
					return true;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_307(var uParam0, int iParam1, int iParam2)
{
	if (func_134(iParam1, 1))
	{
		return false;
	}
	if (!func_217(Global_35, (*Global_1392194)[uParam0->f_136]->f_6, 1, 0))
	{
		return false;
	}
	if ((func_603(Global_35, &iVar0, 4) && !is_model_a_ped(iVar0)) || _0xd04241bbf6d03a5e(Global_35) != 0)
	{
		if (func_601(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_308()
{
	bVar0 = false;
	bVar1 = false;
	if (_0x5407b7288d0478b7(Global_35, 512) > 0)
	{
		iVar2 = create_itemset(true);
		iVar3 = _0x7be607daff382fd2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				bVar0 = false;
				bVar1 = false;
				iVar5 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar2));
				if (is_entity_a_ped(iVar5))
				{
					iVar6 = get_ped_index_from_entity_index(iVar5);
					if (func_217(iVar6, (*Global_1392194)[Local_1614.f_136]->f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == func_63(Local_1614.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_288(iVar6, &iLocal_1918))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_288(iVar6, &uLocal_2077))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						if (bVar0 && !bVar1)
						{
							if (!func_596(&iVar6))
							{
								bVar0 = false;
							}
						}
						iVar4++;
					}
					destroy_itemset(iVar2);
					if (bVar0 && !bVar1)
					{
						func_43(&Local_1614, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

int func_309(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_310(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return false;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_311(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_312(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_313(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_312(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_604(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_605(iVar0);
	*uParam0 = 0;
}

void func_314(bool bParam0)
{
	iVar0 = 11;
	if (!func_606())
	{
		return;
	}
	if (_does_volume_exist(Global_1914319->f_3[iVar0]->f_25))
	{
		if (bParam0)
		{
			_delete_volume(Global_1914319->f_3[iVar0]->f_25);
		}
		else
		{
			Global_1914319->f_3[iVar0]->f_25 = 0;
		}
	}
	Global_1914319->f_3[iVar0]->f_23 = 0;
	func_607(11);
	func_608(101, 0);
	func_315(11, 4);
}

void func_315(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

int func_316(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_319(iParam0);
}

bool func_317(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_319(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_318(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_319(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_320(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return func_612(func_611(iParam0));
}

void func_321(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_1() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_322(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_323(int iParam0)
{
	switch (func_320(iParam0))
	{
		case 1:
			iVar0 = func_441(iParam0);
			return func_613(iVar0);
		case 8:
			iVar1 = func_441(iParam0);
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_614(iVar1);
			}
			break;
	}
	return -1;
}

void func_324(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_615(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_616();
		Global_1898077->f_9 = func_617(Global_1894899->f_2);
		func_618(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_325()
{
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_208((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_208((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_208((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_208((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_208((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_208((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_326(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_619(iParam0, iParam1);
}

int func_327(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_328(bool bParam0)
{
	if (!bParam0 && func_620(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_329(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_330(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_327(0) != iParam0)
	{
		return;
	}
	if (func_621(iParam0))
	{
		if (bParam1)
		{
			func_622(-525676072);
		}
		else
		{
			func_623(-525676072);
		}
	}
}

int func_331(int iParam0)
{
	return func_625(func_624(iParam0));
}

void func_332(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_333(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_98 == 2)
			{
				return 0;
			}
			else if (iLocal_98 == 3)
			{
				return 0;
			}
			break;
		case 2:
			if (func_19(64))
			{
				return 2;
			}
			else if (iLocal_98 == 3)
			{
				return 2;
			}
			break;
		case 3:
			if (func_19(64))
			{
				return 3;
			}
			else if (iLocal_98 == 3)
			{
				return 3;
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return iParam0;
	}
	return -1;
}

bool func_335()
{
	return (iVar584 == 0 || iVar584 == 1);
}

bool func_336(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_started(*uParam0, false);
}

int func_337(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 6:
			iVar0 = 814;
			break;
		case 9:
			iVar0 = 816;
			break;
		case 7:
			iVar0 = 820;
			break;
		case 0:
			iVar0 = 814;
			break;
		case 3:
			iVar0 = 817;
			break;
	}
	iVar0 = (iVar0 + (iParam1 + iParam2));
	return iVar0;
}

void func_338(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	remove_anim_scene_entity(*uParam0, sParam2, iParam1);
}

void func_339(int iParam0)
{
	if (iLocal_205 < 10)
	{
		if (!func_288(*iParam0, &(Local_1614.f_140)))
		{
			Local_1614.f_140[iLocal_205] = *iParam0;
			iLocal_205++;
		}
	}
}

void func_340(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_627(iParam0))
	{
		return;
	}
	iVar0 = func_628(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_629(iVar0);
	func_630(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_631(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_632(iVar0))
		{
			return;
		}
	}
	func_633(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_341(int iParam0)
{
	iLocal_100 = (iLocal_100 - (iLocal_100 && iParam0));
}

void func_342(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_343()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_140(iParam0))
	{
		return;
	}
	func_634(iParam0, &(Global_40.f_9096[iParam0]->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_345(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_346(iParam0, 1);
		func_194(iParam0, 1);
		func_193(iParam0, 1);
		func_191(iParam0, 1);
		func_635(iParam0, 1);
		func_195(iParam0, 1);
		func_636(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_346(iParam0, 0);
		func_194(iParam0, 0);
		func_193(iParam0, 0);
		func_191(iParam0, 0);
		func_635(iParam0, 0);
		func_195(iParam0, 0);
		func_636(iParam0, 0);
	}
}

void func_346(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 4);
	}
	else
	{
		func_201(iParam0, 4);
	}
}

void func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 16384);
	}
	else
	{
		func_145(&(iParam0->f_1), 16384);
	}
}

int func_348(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_637())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_284(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_368(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_48(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_638(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_59(func_639(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_349()
{
	if (func_336(Local_479[2]))
	{
		fVar0 = func_640(Local_479[2]);
		func_641(Local_479[2], &fVar1, &vVar4);
		if (!is_entity_dead(&(uLocal_2077[0])) && has_anim_event_fired(&(uLocal_2077[0]), -615221946))
		{
			freeze_entity_position(&(uLocal_2077[0]), false);
			func_642(Local_479[2], "PB_VIC_BRKOUT", 1);
			func_643(Local_479[2], "RECOVERY_BOOL");
		}
		else if ((func_644(Local_479[2], "PBL_IMPATIENT") || (func_644(Local_479[2], "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (func_644(Local_479[2], "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				func_642(Local_479[2], "PBL_COMBAT_L", 1);
				func_643(Local_479[2], "bBreakInternalLoop");
			}
			else
			{
				func_642(Local_479[2], "PBL_COMBAT_R", 1);
				func_643(Local_479[2], "bBreakInternalLoop");
			}
			func_14(1024);
		}
		else
		{
			if (!is_entity_dead(func_63(Local_1614.f_138)))
			{
				func_338(Local_479[2], func_63(Local_1614.f_138), "FOREMAN");
			}
			if (!is_entity_dead(func_63(810)))
			{
				func_338(Local_479[2], func_63(810), "PED1");
			}
			if (!is_entity_dead(&(uLocal_2077[2])))
			{
				func_338(Local_479[2], &(uLocal_2077[2]), "PED2");
			}
			if (!is_entity_dead(&(uLocal_2077[3])))
			{
				func_338(Local_479[2], &(uLocal_2077[3]), "PED3");
			}
			if (!is_entity_dead(Local_611.f_690[7]->f_8))
			{
				func_338(Local_479[2], Local_611.f_690[7]->f_8, "AXE1");
			}
			if (!is_entity_dead(Local_611.f_690[8]->f_8))
			{
				func_338(Local_479[2], Local_611.f_690[8]->f_8, "AXE2");
			}
			if (!is_entity_dead(Local_611.f_690[9]->f_8))
			{
				func_338(Local_479[2], Local_611.f_690[9]->f_8, "AXE3");
			}
			if (!is_entity_dead(Local_611.f_690[10]->f_8))
			{
				func_338(Local_479[2], Local_611.f_690[10]->f_8, "CIGARETTE");
			}
			if (func_19(512))
			{
				if (Global_36 < fVar1)
				{
					func_642(Local_479[2], "PBL_COMBAT_L", 1);
					func_643(Local_479[2], "bBreakInternalLoop");
				}
				else
				{
					func_642(Local_479[2], "PBL_COMBAT_R", 1);
					func_643(Local_479[2], "bBreakInternalLoop");
				}
			}
			func_128(1024);
		}
	}
}

void func_350(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (func_336(Local_479[(9 + iVar0)]))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			iVar3 = func_63(func_337(9, 0, iVar2));
			iVar4 = func_63(func_337(9, 1, iVar2));
			if (!is_entity_dead(iVar4))
			{
				iVar5 = iVar4;
			}
			else if (!is_entity_dead(iVar3))
			{
				iVar5 = iVar3;
				bVar6 = true;
			}
			else
			{
				func_338(Local_479[(9 + iVar0)], (Local_611.f_690[(15 + iVar1)])->f_8, "SAW");
				if (has_anim_event_fired((Local_611.f_690[(15 + iVar1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_611.f_690[(15 + iVar1)])->f_8, true);
				}
				func_219(Local_479[(9 + iVar0)]);
			}
			else
			{
				if (!is_entity_dead(iVar3))
				{
					func_339(&iVar3);
				}
				if (!is_entity_dead(iVar4))
				{
					func_339(&iVar4);
				}
				iVar7 = func_645(iVar5, Global_35, 1060437492);
				if (bVar6)
				{
					switch (iVar7)
					{
						case 1:
							iVar7 = 0;
							break;
						case 0:
							iVar7 = 1;
							break;
						case 3:
							iVar7 = 2;
							break;
						case 2:
							iVar7 = 3;
							break;
					}
				}
				if (has_anim_event_fired(iVar5, -137640087))
				{
					iVar8 = 0;
				}
				else if (has_anim_event_fired(iVar5, -1300850144))
				{
					iVar8 = 1;
				}
				else if (has_anim_event_fired(iVar5, -1011860333))
				{
					iVar8 = 2;
				}
				else
				{
					if (!is_entity_dead(iVar3))
					{
						func_338(Local_479[(9 + iVar0)], iVar3, "PED1");
					}
					if (!is_entity_dead(iVar4))
					{
						func_338(Local_479[(9 + iVar0)], iVar4, "PED2");
					}
				}
				if (!is_string_null_or_empty(func_646(iVar8, iVar7)))
				{
					func_642(Local_479[(9 + iVar0)], func_646(iVar8, iVar7), 1);
					func_643(Local_479[(9 + iVar0)], "bBreakInternalLoop");
				}
				func_338(Local_479[(9 + iVar0)], (Local_611.f_690[(15 + iVar1)])->f_8, "SAW");
				if (has_anim_event_fired((Local_611.f_690[(15 + iVar1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_611.f_690[(15 + iVar1)])->f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_351()
{
	if (is_entity_dead(func_63(Local_1614.f_138)))
	{
		return;
	}
	if (!func_336(Local_479[0]))
	{
		return;
	}
	if (has_anim_event_fired(func_63(Local_1614.f_138), 465284456))
	{
		return;
	}
	set_entity_no_collision_entity(func_63(Local_1614.f_138), Local_611.f_690[25]->f_8, false);
	func_642(Local_479[0], "PBL_FOREMAN_STAGE2_COMBAT", 1);
	func_643(Local_479[0], "bBreakInternalLoop");
	func_14(1024);
}

void func_352()
{
	if (!is_entity_dead(func_63(Local_1614.f_138)) && func_336(Local_479[1]))
	{
		if (!has_anim_event_fired(func_63(Local_1614.f_138), 465284456))
		{
			set_entity_no_collision_entity(func_63(Local_1614.f_138), Local_611.f_690[25]->f_8, false);
			func_642(Local_479[1], "PBL_COMBAT", 1);
			func_643(Local_479[1], "bBreakInternalLoop");
			func_14(1024);
		}
		else
		{
			set_entity_no_collision_entity(func_63(Local_1614.f_138), Local_611.f_690[5]->f_8, false);
			func_219(Local_479[1]);
		}
	}
	if (func_336(Local_479[3]))
	{
		func_219(Local_479[3]);
		activate_physics(Local_611.f_690[7]->f_8);
	}
	if (func_336(Local_479[0]))
	{
		func_219(Local_479[0]);
	}
}

bool func_353(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_354(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_355(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

void func_356(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_98(&iVar0);
}

void func_357(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

bool func_358(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_359(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_360(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_361()
{
	return "Default_Shocked";
}

int func_362(int iParam0, bool bParam1)
{
	return func_647(iParam0, Global_1894899->f_2, bParam1);
}

bool func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (func_358(iParam0))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (!is_ped_male(iParam0))
	{
		return false;
	}
	fVar1 = func_284(iParam0, 1, 1);
	if (fVar1 < 30f)
	{
		fVar0 = 1f;
	}
	else if (fVar1 < 75f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = get_random_float_in_range(0f, 1f);
	if (fVar2 <= fVar0)
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0, int iParam1, bool bParam2)
{
	if (func_354(iParam1))
	{
		return true;
	}
	if (bParam2 && is_ped_in_combat(*iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_365(int iParam0, int iParam1, float fParam2)
{
	if (is_ped_human(*iParam0))
	{
		fVar0 = get_random_float_in_range(0f, 1f);
		if (fVar0 < fParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
			set_ped_config_flag(*iParam0, 146, false);
			set_ped_config_flag(*iParam0, 148, false);
			_0xc6c4e15cf7d52fea(*iParam0, 1000f);
			_0xf0b67bad53c35bd9(*iParam0, Global_35, *iParam0, Global_36, iParam1);
		}
	}
}

bool func_366()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_367(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_566(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_578(iParam1, 4000))
				{
					if ((func_579(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_580(iParam1, iParam0)) && func_581(iParam1, iParam0))
					{
						func_583();
						*uParam2 = 2;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_578(iParam1, 4000))
				{
					if ((func_579(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_580(iParam1, iParam0)) && func_581(iParam1, iParam0))
					{
						func_583();
						*uParam2 = 2;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_582(iParam0, Global_1935630->f_41))
							{
								func_583();
								*uParam2 = 2;
								func_568(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_582(iParam0, Global_1935630->f_41))
						{
							func_583();
							*uParam2 = 2;
							func_568(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_586())
					{
						if (func_582(iParam0, Global_1935630->f_42))
						{
							func_583();
							*uParam2 = 2;
							func_568(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_572(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_573(Global_35, iParam0, iParam1))
					{
						func_583();
						*uParam2 = 4;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_574(Global_35, iParam0, iParam1))
					{
						func_583();
						*uParam2 = 256;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_648(iParam0, iParam1))
			{
				func_583();
				*uParam2 = 131072;
				func_568(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_649(iParam0, iParam1))
			{
				func_583();
				*uParam2 = 262144;
				func_568(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

float func_368(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_369(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
		{
			if (func_368(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_370(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	return _is_anim_scene_finished(*uParam0, false);
}

bool func_371(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(*uParam0, sParam1, 1);
}

void func_372(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_373(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_374(int iParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_375(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_651(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_453(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_652(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_653(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_654(iParam0);
	if (iVar5 < 1 || iVar5 > func_655(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_652(*iParam0);
	iVar1 = func_653(*iParam0);
	iVar2 = func_654(*iParam0);
	iVar3 = func_453(*iParam0);
	iVar4 = func_651(*iParam0);
	iVar5 = func_650(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_655(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_655(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_656(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_377(int iParam0, bool bParam1)
{
	return func_657(func_452(), iParam0, bParam1);
}

bool func_378(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_379(int* iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (does_entity_exist(func_393(Global_35)))
		{
			iParam0->f_19 = add_shocking_event_for_entity(67779789, Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!does_entity_exist(func_393(Global_35)))
	{
		remove_shocking_event(iParam0->f_19);
	}
}

void func_380(int* iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_381(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_659(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_658(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		if (iVar1 != -1)
		{
			iParam0->f_15 = iVar1;
		}
	}
	switch (iParam0->f_14)
	{
		case 0:
			if (bParam3 || iParam0->f_13 > 0)
			{
				if (!decor_exist_on(*iParam0, "bScriptedILO"))
				{
					decor_set_bool(*iParam0, "bScriptedILO", true);
				}
				func_661((*uParam2)[0], func_660(8), "", -163964935, 0, 0, 0, 1, 0);
				func_662((*uParam2)[0], 1, 0);
				func_663((*uParam2)[0], 0);
				func_661((*uParam2)[1], func_660(10), "", 648122183, 0, 0, 0, 1, 0);
				func_662((*uParam2)[1], 1, 0);
				func_663((*uParam2)[1], 0);
				func_661((*uParam2)[2], func_660(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_662((*uParam2)[2], 0, 0);
				func_663((*uParam2)[2], 1);
				func_664(iParam0, 1);
			}
			break;
		case 1:
			if (!func_258(0, 1, Global_35, 1) || !func_258(0, 1, *iParam0, 1))
			{
				func_665(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_78(iParam1, 0);
				func_662((*uParam2)[0], 0, 0);
				func_662((*uParam2)[1], 0, 0);
				if (!is_string_null_or_empty(func_666(iParam0)))
				{
					func_116(Global_35, *iParam0, func_666(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_664(iParam0, 2);
			}
			break;
		case 2:
			if (func_258(0, 1, Global_35, 1) && func_258(0, 1, *iParam0, 1))
			{
				if (!is_string_null_or_empty(func_667(iParam0)))
				{
					func_116(*iParam0, Global_35, func_667(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_664(iParam0, 3);
			}
			break;
		case 3:
			if (func_258(0, 1, Global_35, 1) && func_258(0, 1, *iParam0, 1))
			{
				func_664(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_382(int iParam0)
{
	return func_62(iParam0, 0, 1);
}

char* func_383(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_384(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

float func_385(float fParam0)
{
	if (!func_668(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_669(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_479() - fParam0->f_1);
}

bool func_386(int* iParam0)
{
	return true;
}

float func_387(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_670(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_388(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

int func_389(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_368(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_368(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_48(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_671(sParam1))
			{
				return 1;
			}
		}
		else if (func_672(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_390(int* iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_366())
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (func_134(iParam0, 16))
	{
		StringCopy(&cVar0, "GET_LOST", 32);
	}
	else
	{
		switch (iParam0->f_16)
		{
			case -1:
			case default:
				StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
				break;
			case 1:
				StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
				break;
			case 2:
				StringCopy(&cVar0, "PLEAD_HOGTIED", 32);
				break;
			case 3:
				switch (iParam0->f_1)
				{
					case 1:
						StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
						break;
					case 2:
					default:
						StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
						break;
				}
				break;
			case 4:
				StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
				break;
			case 6:
				StringCopy(&cVar0, "PLAYER_AIMING_NOBODY", 32);
				break;
			case 5:
				StringCopy(&cVar0, "GUN", 32);
				break;
			case 8:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						switch (get_random_int_in_range(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
								break;
							case 1:
								StringCopy(&cVar0, "STOP_THAT", 32);
								break;
						}
						break;
					case 2:
						switch (get_random_int_in_range(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "CUT_THAT_OUT", 32);
								break;
							case 1:
								StringCopy(&cVar0, "SHAME_ON_YOU", 32);
								break;
							case 2:
								StringCopy(&cVar0, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT", 32);
								break;
						}
						break;
					case 3:
						switch (get_random_int_in_range(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "FINAL_WARNING", 32);
								break;
							case 1:
								StringCopy(&cVar0, "GUARD_FINAL_WARNING", 32);
								break;
							case 2:
								StringCopy(&cVar0, "WARNED_ALREADY", 32);
								break;
							case 3:
								StringCopy(&cVar0, "GUARD_WARNED_ALREADY", 32);
								break;
							case 4:
								StringCopy(&cVar0, "GUARD_WARNING", 32);
								break;
						}
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						StringCopy(&cVar0, "STOP_THAT", 32);
						break;
					case 2:
						StringCopy(&cVar0, "CUT_THAT_OUT", 32);
						break;
					case 3:
						StringCopy(&cVar0, "CHALLENGE_THREATEN", 32);
						break;
				}
				break;
		}
	}
	return func_673(cVar0);
}

bool func_391(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_368(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_674(iVar0, 0)))
		{
			if (func_675(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_393(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_394(int* iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 2:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

bool func_395(float fParam0, float fParam1)
{
	if (!func_668(fParam0))
	{
		return false;
	}
	if (func_385(fParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_396(int* iParam0, int* iParam1, var uParam2)
{
	func_676(iParam0, iParam1, uParam2, 1, 1);
	func_109(uParam2, 0, 1, 1, 1);
	if (decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_remove(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

int func_397()
{
	return 0;
}

int func_398(int iParam0)
{
	switch (&iLocal_596[*iParam0])
	{
		case 0:
			if (_0x5e420ff293ee5472())
			{
				iLocal_1918[*iParam0] = func_239(Local_611.f_369[*iParam0]->f_1, Local_611.f_369[*iParam0], Local_611.f_369[*iParam0]->f_6, Local_611.f_369[*iParam0]->f_9, 1, 0, 1, 0, 1);
				if (!is_entity_dead(&(iLocal_1918[*iParam0])))
				{
					task_wander_in_volume(&(iLocal_1918[*iParam0]), (*Global_1392194)[Local_1614.f_136]->f_6, 1077936128, 1086324736, 0);
					func_48(vLocal_557[(0 + *iParam0)]);
					func_677(&Local_1614, 24f);
					func_678(&Local_1614, 20f);
					iLocal_596[*iParam0] = 1;
				}
			}
			break;
		case 1:
			if (func_562(&iLocal_1918, &Local_1614, &(Local_1614.f_28), 0, -1))
			{
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!is_entity_dead(&(iLocal_1918[iVar0])))
					{
						clear_ped_tasks(&(iLocal_1918[iVar0]), 1, 0);
						task_combat_ped(&(iLocal_1918[iVar0]), Global_35, 0, 0);
						func_357(&(iLocal_1918[iVar0]), uLocal_1949[iVar0], 831283580, 580546400, 0, 0);
					}
					iLocal_596[iVar0] = 4;
					iVar0++;
				}
			}
			if (func_226(vLocal_557[(0 + *iParam0)], 15f))
			{
				if (!is_entity_dead(&(iLocal_1918[*iParam0])))
				{
					iVar1 = _0x244430c13ba5258e(&(iLocal_1918[*iParam0]), 0, 1, 0);
					if (does_entity_exist(iVar1))
					{
						open_sequence_task(&iLocal_196);
						task_follow_nav_mesh_to_coord(0, get_entity_coords(iVar1, true, false), 2f, 20000, 0.25f, 0, 40000f);
						task_eat(0, iVar1, 0);
						close_sequence_task(iLocal_196);
						task_perform_sequence(&(iLocal_1918[*iParam0]), iLocal_196);
						clear_sequence_task(&iLocal_196);
						iLocal_596[*iParam0] = 2;
					}
				}
				else
				{
					iLocal_596[*iParam0] = 4;
				}
			}
			break;
		case 2:
			if (func_562(&iLocal_1918, &Local_1614, &(Local_1614.f_28), 0, -1))
			{
				iVar2 = 0;
				while (iVar2 < Local_611.f_1)
				{
					if (!is_entity_dead(&(iLocal_1918[iVar2])))
					{
						clear_ped_tasks(&(iLocal_1918[iVar2]), 1, 0);
						task_combat_ped(&(iLocal_1918[iVar2]), Global_35, 0, 0);
						func_357(&(iLocal_1918[iVar2]), uLocal_1949[iVar2], 831283580, 580546400, 0, 0);
					}
					iLocal_596[iVar2] = 4;
					iVar2++;
				}
			}
			if (!is_entity_dead(&(iLocal_1918[*iParam0])))
			{
				if (!func_131(&(iLocal_1918[*iParam0]), 1435919172))
				{
					task_wander_in_volume(&(iLocal_1918[*iParam0]), (*Global_1392194)[Local_1614.f_136]->f_6, 1077936128, 1086324736, 0);
					func_48(vLocal_557[(0 + *iParam0)]);
					iLocal_596[*iParam0] = 1;
				}
			}
			else
			{
				iLocal_596[*iParam0] = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_399(var uParam0, int iParam1)
{
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, true, true))
	{
		if (!is_entity_dead(iVar0) && is_entity_a_ped(iVar0))
		{
			if (is_control_just_pressed(0, 648122183))
			{
				iVar1 = get_ped_index_from_entity_index(iVar0);
				if (decor_exist_on(iVar1, "interactNeg"))
				{
					iVar2 = decor_get_int(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				decor_set_int(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					set_ped_config_flag(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_400(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_401(int iParam0, int iParam1)
{
	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= Local_611.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = func_63(func_337(9, 0, iVar1));
	iVar4 = func_63(func_337(9, 1, iVar1));
	if (&iLocal_588[iParam1] < 11)
	{
		func_679(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_680(iParam1, &iVar3);
		func_681(&iVar3, &iVar4, iParam1);
	}
	switch (&iLocal_588[iParam1])
	{
		case 0:
			if ((does_entity_exist((Local_611.f_690[(16 + iVar0)])->f_8) && does_entity_exist((Local_611.f_690[(17 + iVar0)])->f_8)) && does_entity_exist((Local_611.f_690[(18 + iVar0)])->f_8))
			{
				set_object_physics_params((Local_611.f_690[(16 + iVar0)])->f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				set_object_physics_params((Local_611.f_690[(17 + iVar0)])->f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				set_object_physics_params((Local_611.f_690[(18 + iVar0)])->f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				freeze_entity_position((Local_611.f_690[(16 + iVar0)])->f_8, true);
				freeze_entity_position((Local_611.f_690[(17 + iVar0)])->f_8, true);
				freeze_entity_position((Local_611.f_690[(18 + iVar0)])->f_8, true);
				iLocal_75[(12 + iVar2)] = _create_volume_box(*(Local_611.f_690[(17 + iVar0)]), 0f, 0f, (Local_611.f_690[(17 + iVar0)])->f_3, 0.613833f, 3.325524f, 5.714088f);
				_0x7c00cfc48a782dc0(&(iLocal_75[(12 + iVar2)]), (Local_611.f_690[(17 + iVar0)])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(&(iLocal_75[(12 + iVar2)]), 7);
				iLocal_75[(13 + iVar2)] = _create_volume_box(*(Local_611.f_690[(18 + iVar0)]), 0f, 0f, (Local_611.f_690[(18 + iVar0)])->f_3, 1f, 7.3475f, 5f);
				_0x7c00cfc48a782dc0(&(iLocal_75[(13 + iVar2)]), (Local_611.f_690[(18 + iVar0)])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(&(iLocal_75[(13 + iVar2)]), 7);
				func_47(func_602(9), &Local_611);
				iLocal_588[iParam1] = 1;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar5 = func_682(9, iVar1);
				if (iVar5 == func_602(9))
				{
					if (!is_entity_dead(iVar3) && !is_entity_dead(iVar4))
					{
						clear_ped_tasks_immediately(iVar3, false, true);
						clear_ped_tasks_immediately(iVar4, false, true);
						iLocal_588[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (is_entity_dead(iVar3) || is_entity_dead(iVar4))
			{
				iLocal_588[iParam1] = 1;
			}
			else if (does_entity_exist((Local_611.f_690[(15 + iVar0)])->f_8))
			{
				_set_entity_coords_and_heading((Local_611.f_690[(15 + iVar0)])->f_8, func_491(iParam0), func_492(iParam0), true, false, true);
				func_685(Local_479[(9 + iParam1)], func_683(iParam0), func_684(iParam0));
				func_686(Local_479[(9 + iParam1)], iVar3, "PED1", 1);
				func_686(Local_479[(9 + iParam1)], iVar4, "PED2", 1);
				StringCopy(&((Local_479[(9 + iParam1)])->f_4), "bBreakInternalLoop", 24);
				func_687(Local_479[(9 + iParam1)], (Local_611.f_690[(15 + iVar0)])->f_8, "SAW");
				func_687(Local_479[(9 + iParam1)], (Local_611.f_690[(16 + iVar0)])->f_8, "LOG_01");
				func_687(Local_479[(9 + iParam1)], (Local_611.f_690[(17 + iVar0)])->f_8, "LOG_03");
				func_687(Local_479[(9 + iParam1)], (Local_611.f_690[(18 + iVar0)])->f_8, "LOG_02");
				iLocal_588[iParam1] = 3;
			}
			break;
		case 3:
			if (func_527(Local_479[(9 + iParam1)]))
			{
				func_688(Local_479[(9 + iParam1)]);
				iLocal_588[iParam1] = 4;
			}
			break;
		case 4:
			if ((!is_entity_dead(iVar3) && func_689(iVar3, 40f, -1082130432, -1082130432, -1082130432)) || (!is_entity_dead(iVar4) && func_689(iVar4, 40f, -1082130432, -1082130432, -1082130432)))
			{
				func_643(Local_479[(9 + iParam1)], "bBreakInternalLoop");
				iLocal_588[iParam1] = 5;
			}
			break;
		case 5:
			if (!is_entity_dead(iVar3))
			{
				if (has_anim_event_fired(iVar3, 545488006))
				{
					_play_sound_from_position("Wood_Tear", get_entity_coords((Local_611.f_690[(15 + iVar0)])->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (has_anim_event_fired(iVar3, -1817629992))
				{
					func_111(&(iLocal_75[(13 + iVar2)]));
					iLocal_588[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!is_entity_dead(iVar3))
			{
				if (has_anim_event_fired(iVar3, 545488006))
				{
					_play_sound_from_position("Wood_Tear", get_entity_coords((Local_611.f_690[(15 + iVar0)])->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (has_anim_event_fired(iVar3, -1817629992))
				{
					func_111(&(iLocal_75[(12 + iVar2)]));
					iLocal_588[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!is_entity_dead(iVar3) && has_anim_event_fired(iVar3, -1202392137))
			{
				iLocal_588[iParam1] = 8;
			}
			break;
		case 8:
			if (func_690(iVar4, &(Local_479[(9 + iParam1)]), "PED2", 0, 0, 1, 0))
			{
				set_ped_config_flag(iVar4, 330, false);
				if (iVar358 != iVar4)
				{
					func_691(9, 1, iVar1, 0);
				}
				iLocal_588[iParam1] = 9;
			}
			break;
		case 9:
			if (func_690(iVar3, &(Local_479[(9 + iParam1)]), "PED1", 0, 0, 1, 0))
			{
				set_ped_config_flag(iVar3, 330, false);
				if (iVar358 != iVar3)
				{
					func_691(9, 0, iVar1, 0);
				}
				iLocal_588[iParam1] = 10;
			}
			break;
		case 10:
			if (!_does_anim_scene_exist(&(Local_479[(9 + iParam1)])) || func_370(Local_479[(9 + iParam1)]))
			{
				func_219(Local_479[(9 + iParam1)]);
				set_object_physics_params((Local_611.f_690[(16 + iVar0)])->f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				set_object_physics_params((Local_611.f_690[(17 + iVar0)])->f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				set_object_physics_params((Local_611.f_690[(18 + iVar0)])->f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_588[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_402()
{
	if (iVar599 > 0)
	{
		func_692();
	}
	switch (iVar599)
	{
		case 0:
			_request_scenario_type(-1939316457, 262148, func_459(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_693(iVar0);
				iVar2 = (810 + iVar0);
				if (!func_268(iVar2, 0))
				{
					func_62(iVar2, 1, 1);
				}
				else
				{
					iVar3 = func_63(iVar2);
					if ((!is_entity_dead(iVar3) && func_256(iVar3, 0, 1)) && !func_117(func_694(iVar0)))
					{
						func_263(iVar3, func_383(Local_1614.f_136, 4), 0);
						if (func_166(64))
						{
							if (_0x6eead6af637da752(func_437(iVar1), func_695(), 4f, 0) && !func_430(iVar1))
							{
								vVar4 = { func_437(iVar1) };
								clear_ped_tasks_immediately(iVar3, false, true);
								open_sequence_task(&iLocal_196);
								if (_does_scenario_point_exist(&(uLocal_462[iVar1])))
								{
									_task_use_scenario_point(0, &(uLocal_462[iVar1]), 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									_task_use_nearest_scenario_to_coord(0, vVar4, 5f, 0, false, false, false, false);
								}
								close_sequence_task(iLocal_196);
								_task_perform_sequence_2(iVar3, iLocal_196, 0f, 2f);
								clear_sequence_task(&iLocal_196);
								set_ped_config_flag(iVar3, 146, false);
							}
							else
							{
								func_77(iVar2, 1);
								set_ped_config_flag(iVar3, 146, false);
							}
						}
						else
						{
							func_77(iVar2, 1);
							set_ped_config_flag(iVar3, 146, false);
						}
						func_35(func_694(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_696(func_694(iVar0));
						iVar0++;
					}
					iLocal_601 = 2;
					Jump @719; //curOff = 426
					func_697();
					func_138();
					iVar0 = (iLocal_206 % 4);
					iVar1 = func_693(iVar0);
					if (!func_466(iVar1) && !func_117(func_698(iVar0)))
					{
						func_699(iVar0);
						iVar2 = (810 + iVar0);
						if (!func_268(iVar2, 0))
						{
							func_62(iVar2, 1, 1);
						}
						iVar3 = func_63(iVar2);
						func_700(&iVar3);
						func_701(iVar0);
						func_702(&iVar3, iVar0);
						if (func_256(iVar3, 0, 1))
						{
							if (!func_19(4096) && func_703(&iVar3, Local_2236[iVar0], uLocal_2262[iVar0], iVar0))
							{
								func_704(&iVar3, iVar0);
								iLocal_601 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_206 % 10) == 1 && !func_166(64)) && !func_19(4096)) && !func_19(512))
					{
						func_705();
						iLocal_601 = 1;
						return 0;
					}
					Jump @719; //curOff = 664
					if ((iLocal_206 % 10) == 1 && func_166(64))
					{
						func_705();
						iLocal_601 = 2;
					}
					Jump @719; //curOff = 696
					func_48(vLocal_557[0]);
					iLocal_601 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_403()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		iVar3 = func_63(iVar2);
		iVar1 = func_693(iVar0);
		if (((does_rayfire_map_object_exist(&(iLocal_450[iVar1])) && get_state_of_rayfire_map_object(&(iLocal_450[iVar1])) == 10) && (is_entity_dead(iVar3) || !is_ped_using_any_scenario(iVar3))) && !func_430(iVar1))
		{
			func_706(iVar1);
			func_474(iVar1, 0);
			if (!func_19(64) || iVar1 != 0)
			{
				func_269(iVar2, 0, 1, 0, 0);
			}
			func_707();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_404(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_661((*Local_256[iParam0])[0], func_660(7), "", -163964935, 0, 0, 0, 1, 0);
	func_661((*Local_256[iParam0])[1], func_660(10), "", 648122183, 0, 0, 0, 1, 0);
	func_661((*Local_256[iParam0])[2], func_660(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_405(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_78(Local_213[iParam0], 0);
	func_708(iParam0, 0);
	if (!bParam2)
	{
		func_50(268435456);
	}
	if (bParam1)
	{
		iLocal_361 = -1;
	}
}

void func_406(int iParam0)
{
	if (!func_51(67108864))
	{
		return;
	}
	if (func_70(536870912))
	{
		if (decor_exist_on(*iParam0, "bScriptedILO"))
		{
			decor_remove(*iParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = func_658(1, 0, 0);
	if (func_51(134217728))
	{
		iVar0 = 1;
	}
	if (!is_entity_dead(*iParam0))
	{
		if (func_19(4096))
		{
			set_ped_reset_flag(*iParam0, 49, true);
			if (!get_ped_config_flag(Global_35, 514, true))
			{
				set_ped_config_flag(Global_35, 514, true);
			}
		}
		else if (get_ped_config_flag(Global_35, 514, true))
		{
			set_ped_config_flag(Global_35, 514, false);
		}
		set_ped_reset_flag(*iParam0, 49, true);
	}
	if (iLocal_98 == 1 && !func_5(Local_1614.f_136, 128))
	{
		fLocal_210 = 8f;
	}
	iVar1 = 1;
	if (!decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_set_bool(*iParam0, "bScriptedILO", true);
	}
	if (((((is_control_pressed(0, 1287709438) || is_control_pressed(0, 1499911466)) || is_control_pressed(0, -209515122)) || func_709()) || func_710()) || func_711())
	{
		func_48(vLocal_557[7]);
	}
	if (func_668(vLocal_557[7]) && !func_395(vLocal_557[7], 0.25f))
	{
		func_665(Local_256[0]);
	}
	iVar2 = func_659(iParam0, Local_213[0], fLocal_210, Local_256[0], &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	if (iVar358 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_361 = iVar2;
	}
	if (!func_51(-2147483648))
	{
		if (!func_51(268435456))
		{
			if (func_258(-3.5f, 1, 0, 0))
			{
				if (iVar358 == 1 && !func_51(536870912))
				{
					func_116(*iParam0, Global_35, func_712(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_58(1048576);
				}
				func_405(0, 1, 0);
				func_58(268435456);
			}
		}
		else
		{
			switch (iVar358)
			{
				case 0:
					func_389(&(Local_1614.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					func_58(1073741824);
					func_405(0, 1, 0);
					break;
				case 1:
					if (func_51(536870912))
					{
						func_50(536870912);
						func_389(&(Local_1614.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						func_58(64);
						func_10(Local_1614.f_136, 262144);
						func_15(Local_1614.f_136, 256);
						func_405(0, 1, 0);
					}
					else
					{
						sVar3 = func_713();
						func_116(Global_35, *iParam0, sVar3, 0, -1082130432, get_random_int_in_range(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_405(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_407(int iParam0)
{
	switch (iVar584)
	{
		case 0:
			if (iLocal_98 == 1 || does_entity_exist(Local_611.f_690[12]->f_8))
			{
				if (func_166(64))
				{
					iLocal_587 = 2;
				}
				else
				{
					iLocal_587 = 1;
				}
			}
			break;
		case 1:
			if (func_166(64))
			{
				if (iLocal_98 != 1)
				{
					_play_sound_from_position("Whistle_Long", get_entity_coords(Local_611.f_690[12]->f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_587 = 2;
			}
			break;
		case 2:
			if (!func_166(64))
			{
				if (iLocal_98 == 1)
				{
					func_389(&(Local_1614.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					_play_sound_from_position("Whistle_Harmonic", get_entity_coords(Local_611.f_690[12]->f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_587 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_408()
{
	if (!_does_scenario_point_exist(iVar467))
	{
		iVar0 = _find_closest_active_scenario_point_of_type(func_266(), -1426662425, 1f, 0, false);
		uLocal_469 = create_scenario_point_attached_to_entity(Local_611.f_690[25]->f_8, 1271499410, _get_scenario_point_coords(iVar0, true), _get_scenario_point_heading(iVar0, true), 0, 0, 0);
		if (_does_scenario_point_exist(iVar467))
		{
		}
	}
}

void func_409()
{
	iVar0 = func_63(func_337(7, 0, 0));
	iVar1 = func_63(func_337(7, 1, 0));
	if (iVar589 > 0 && iVar589 < 15)
	{
		func_714();
	}
	switch (iVar589)
	{
		case 0:
			if (!_does_volume_exist(iVar1908))
			{
				iLocal_1910 = _create_volume_box_with_custom_name(-1357.609f, -184.4249f, 102.2077f, 0f, 0f, -25f, 18.26119f, 3.749432f, 8f, "volLoaderLogBlocker");
				_0x19c7567d2f2287d6(iVar1908, 7);
			}
			if (iLocal_98 == 2 || iLocal_98 == 3)
			{
				bVar2 = true;
				if (does_entity_exist(Local_611.f_690[13]->f_8))
				{
					freeze_entity_position(Local_611.f_690[13]->f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (does_entity_exist(Local_611.f_690[12]->f_8))
				{
					freeze_entity_position(Local_611.f_690[12]->f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if (does_entity_exist(&(iLocal_2100[1])))
					{
						iVar3 = _0x2963b5c1637e8a27(&(iLocal_2100[1]));
						func_715(&iVar3);
						_0x2bb2b5bcf0df8008(&(iLocal_2100[1]), 1);
						_0xa72b1bf3857b94d7(&(iLocal_2100[1]), 1);
					}
					if (func_19(256))
					{
						func_47(func_602(7), &Local_611);
						iLocal_591 = 1;
					}
					else
					{
						iLocal_591 = 15;
					}
				}
			}
			else
			{
				iLocal_591 = 15;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar4 = func_682(7, 0);
				if (iVar4 == func_602(7))
				{
					if (!is_entity_dead(iVar0) && !is_entity_dead(iVar1))
					{
						clear_ped_tasks_immediately(iVar0, false, true);
						clear_ped_tasks_immediately(iVar1, false, true);
						func_247(iVar0, 1, 1);
						func_247(iVar1, 1, 1);
						func_686(Local_479[7], iVar0, "OPERATOR", 1);
						func_686(Local_479[8], iVar1, "SPOTTER", 1);
						func_688(Local_479[7]);
						func_688(Local_479[8]);
						func_643(Local_479[7], "bBreakInternalLoop");
						func_643(Local_479[8], "bBreakInternalLoop");
						iLocal_591 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_371(Local_479[7], "IDLE_LOOP"))
			{
				func_643(Local_479[7], "bBreakInternalLoop");
				func_643(Local_479[8], "bBreakInternalLoop");
			}
			else if (func_716(Local_479[7], "bBreakInternalLoop"))
			{
				func_717(Local_479[7], "bBreakInternalLoop");
				func_717(Local_479[8], "bBreakInternalLoop");
			}
			if (!is_entity_dead(iVar0) && has_anim_event_fired(iVar0, 1381571371))
			{
				if (!func_19(268435456))
				{
					if (!is_entity_dead(Local_611.f_690[13]->f_8))
					{
						play_entity_anim(Local_611.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 8f, false, true, false, 0f, 0);
						set_anim_rate(Local_611.f_690[13]->f_8, 0.4f, 0, false);
						func_14(268435456);
					}
				}
				iLocal_591 = 3;
			}
			break;
		case 3:
			func_718(&iVar0, &iVar1);
			break;
		case 14:
			if (!func_51(256))
			{
				if (func_690(iVar0, &(Local_479[7]), "OPERATOR", 0, 0, 1, 0) || !_0x0b7cb1300cbfe19c(iVar0, 1))
				{
					if (!is_entity_dead(iVar0))
					{
						set_ped_config_flag(iVar0, 330, false);
						func_338(Local_479[7], iVar0, "OPERATOR");
						task_go_straight_to_coord(iVar0, -1349.967f, -202.9536f, 100.4027f, 1f, 20000, 1193033728, 1056964608, 0);
						func_691(7, 0, 0, 0);
					}
					func_219(Local_479[7]);
					func_58(256);
				}
			}
			if (!func_51(512))
			{
				if (func_690(iVar1, &(Local_479[8]), "SPOTTER", 0, 0, 1, 0) || !_0x0b7cb1300cbfe19c(iVar1, 1))
				{
					if (!is_entity_dead(iVar1))
					{
						set_ped_config_flag(iVar1, 330, false);
						func_338(Local_479[8], iVar1, "SPOTTER");
						func_691(7, 1, 0, 0);
					}
					func_219(Local_479[8]);
					func_58(512);
				}
			}
			if (func_51(256) && func_51(512))
			{
				iLocal_591 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_410(int iParam0)
{
	if (is_player_riding_train(get_player_index()))
	{
		return 0;
	}
	if (func_134(&Local_362, 1))
	{
		return 0;
	}
	if (func_19(32))
	{
		return 0;
	}
	if ((iLocal_206 % 5) != 0)
	{
		return 0;
	}
	if (!func_217(Global_35, (*Global_1392194)[Local_1614.f_136]->f_5, 1, 0))
	{
		return 0;
	}
	if (func_284(*iParam0, 1, 1) < (15f + 10f))
	{
		func_14(33554432);
		return 1;
	}
	if (func_19(4096))
	{
		return 0;
	}
	uVar24 = 30;
	func_302(&uVar24);
	iVar22 = func_719(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_611.f_13, 1, 0, -1082130432, 0, 0);
	iVar21 = 0;
	while (iVar21 < iVar22)
	{
		if (iVar23 < 9)
		{
			iVar20 = &uVar10[iVar21];
			if (!is_entity_dead(iVar20) && is_ped_human(iVar20))
			{
				if (!decor_exist_on(iVar20, "HAS_VOICE") || !decor_get_bool(iVar20, "HAS_VOICE"))
				{
					func_263(iVar20, func_383(Local_1614.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_720(&Local_2164, &iVar0, &uLocal_2199, 1, func_19(2)))
	{
		func_201(&(Local_2164.f_34), 1);
		func_14(2);
		func_14(33554432);
		return 1;
	}
	return 0;
}

void func_411()
{
	uVar0[0] = &uLocal_2077[0];
	uVar0[1] = &uLocal_2077[1];
	if (!func_70(64))
	{
		if (func_720(&Local_2201, &uVar0, &uLocal_2199, 0, func_19(2)))
		{
			if (!func_131(Local_2201.f_31, -1931174604))
			{
				task_guard_current_position(Local_2201.f_31, 10f, 50f, true);
			}
		}
	}
}

void func_412()
{
	if (func_721() && (get_frame_count() % 30) == 0)
	{
		if (func_12(Local_1614.f_136))
		{
			func_14(128);
		}
	}
}

void func_413()
{
	if (!func_5(Local_1614.f_136, 4))
	{
		if (func_51(65536))
		{
			func_42(Local_1614.f_136, 4);
		}
	}
}

void func_414(var uParam0)
{
}

char* func_415()
{
	return "LOG_BLIP_FM";
}

void func_416(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_217(Global_35, (*Global_1392194)[uParam2->f_136]->f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!is_entity_dead(iParam0))
			{
				if (bParam5)
				{
					iVar0 = 580546400;
				}
				else
				{
					iVar0 = 0;
				}
				func_357(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_417()
{
	if (func_19(64))
	{
		set_force_object_this_frame(func_722(), 10f);
	}
}

bool func_418(int iParam0, var uParam1)
{
	func_723();
	func_724();
	return false;
}

int func_419(int iParam0)
{
	switch (iVar580)
	{
		case 0:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_98(uLocal_2097[0]);
			func_686(Local_479[0], *iParam0, "FOREMAN", 1);
			func_687(Local_479[0], Local_611.f_690[3]->f_8, "PEN");
			func_687(Local_479[0], Local_611.f_690[4]->f_8, "BOOK");
			func_725(Local_479[0], "PBL_FOREMAN_STAGE2_COMBAT");
			func_641(Local_479[0], &vVar0, &vVar3);
			func_687(Local_479[0], Local_611.f_690[25]->f_8, "p_chair04x");
			if (func_19(64) || func_51(2097152))
			{
				play_entity_anim(Local_611.f_690[4]->f_8, func_726(), func_727(), 0.3f, true, true, false, 0f, 0);
				func_728(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { func_729() };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 2f;
				func_145(&(Local_156.f_23), 128);
				func_730(&Local_156, 129);
				iLocal_583 = 1;
			}
			else
			{
				func_405(0, 1, 1);
				func_688(Local_479[0]);
				iLocal_583 = 4;
			}
			break;
		case 1:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			set_force_object_this_frame(func_731(), 5f);
			if (func_730(&Local_156, 129))
			{
				func_728(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { func_732(Local_479[0], "FOREMAN", "PB_L_ENTER") };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 0.25f;
				Local_156.f_17 = 0.2f;
				func_145(&(Local_156.f_23), 1152);
				func_730(&Local_156, 129);
				iLocal_583 = 2;
			}
			break;
		case 2:
			set_force_object_this_frame(func_731(), 5f);
			if (func_730(&Local_156, 129))
			{
				iLocal_583 = 3;
			}
			break;
		case 3:
			func_14(1);
			func_688(Local_479[0]);
			iLocal_583 = 4;
			break;
		case 4:
			if (func_19(33554432))
			{
				func_71(67108864);
				if (func_19(2))
				{
					iLocal_583 = 6;
				}
				else
				{
					iLocal_583 = 7;
				}
			}
			break;
		case 6:
			if (!func_733(-1f))
			{
				func_734("LOG_OBJ01", 1);
				func_357(*iParam0, uLocal_2097[0], -89429847, 580546400, 0, func_415());
				iLocal_583 = 7;
			}
			break;
		case 7:
			if (func_735(iParam0, 0, 0))
			{
				func_736(1048576000, 1028443341, 0, 106);
				func_203();
				func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
				func_14(4096);
				func_643(Local_479[0], "bBreakInternalLoop");
				func_338(Local_479[0], Local_611.f_690[4]->f_8, "BOOK");
				play_entity_anim(Local_611.f_690[4]->f_8, func_726(), func_727(), 0.3f, true, true, false, 0f, 0);
				if (func_19(64))
				{
					if (func_9(Local_1614.f_136, 64))
					{
						func_389(&(Local_1614.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_389(&(Local_1614.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (func_9(Local_1614.f_136, 2))
				{
					func_389(&(Local_1614.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_389(&(Local_1614.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					func_10(Local_1614.f_136, 2);
				}
				func_71(65536);
				iLocal_583 = 8;
			}
			break;
		case 8:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_690(*iParam0, &(Local_479[0]), "FOREMAN", 0, 0, 1, 0) && func_258(-3.5f, 1, 0, 0))
			{
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				func_389(&(Local_1614.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				func_48(vLocal_557[3]);
				func_405(0, 1, 0);
				func_738(1, 0);
				iLocal_583 = 9;
			}
			if (!func_735(iParam0, 0, 0))
			{
				func_405(0, 1, 0);
				func_738(0, 0);
				func_739(0, 0, 1);
				iLocal_583 = 13;
			}
			break;
		case 9:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (!get_is_task_active(*iParam0, 3))
			{
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (func_668(vLocal_557[3]) && func_740(vLocal_557[3]) > 30000)
			{
				iLocal_583 = 10;
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_258(0, 1, 0, 0))
			{
				if (!func_51(268435456))
				{
					func_738(1, 1);
					func_405(0, 1, 0);
					func_741(0);
					func_58(268435456);
				}
				switch (iVar358)
				{
					case 0:
						func_405(0, 1, 0);
						func_738(0, 0);
						func_739(0, 0, 1);
						func_14(2048);
						func_10(Local_1614.f_136, 16384);
						func_742(&Local_1614);
						func_728(&Local_156);
						Local_156.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_156.f_14 = { func_743() };
						Local_156.f_1 = Global_35;
						Local_156.f_17 = 0.2f;
						Local_156.f_18 = 0.2f;
						Local_156.f_19 = 20.6f;
						Local_156.f_25 = &Local_479[5];
						StringCopy(&(Local_156.f_30), "ARTHUR", 24);
						StringCopy(&(Local_156.f_26), func_482(5), 32);
						func_145(&(Local_156.f_23), 26624);
						func_43(&Local_1614, 65536);
						func_730(&Local_156, 129);
						iLocal_583 = 11;
						break;
					case 1:
						func_405(0, 1, 1);
						func_738(0, 0);
						func_128(2048);
						iLocal_583 = 13;
						break;
				}
			}
			if (!func_735(iParam0, 0, 0))
			{
				func_405(0, 1, 0);
				func_738(0, 0);
				func_739(0, 0, 1);
				func_128(2048);
				iLocal_583 = 13;
			}
			break;
		case 10:
			func_736(1048576000, 1028443341, 0, 106);
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
			func_270(vLocal_557[3]);
			task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			func_389(&(Local_1614.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_583 = 9;
			break;
		case 11:
			if (func_730(&Local_156, 129))
			{
				func_389(&(Local_1614.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				func_686(Local_479[5], Global_35, "ARTHUR", 1);
				func_687(Local_479[5], Local_611.f_690[6]->f_8, "MONEY");
				func_688(Local_479[5]);
				iLocal_583 = 12;
			}
			break;
		case 12:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!is_entity_dead(Global_35))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					func_745(func_744(), 0, 0, 1, 1);
				}
				if (has_anim_event_fired(Global_35, 810372829))
				{
					func_98(uLocal_2097[0]);
					func_389(&(Local_1614.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					func_357(&(iLocal_2100[0]), uLocal_2097[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
					if (func_9(1, 2))
					{
						func_43(&Local_1614, 128);
					}
					iLocal_583 = 15;
				}
			}
			break;
		case 13:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_258(-3.5f, 1, *iParam0, 1))
			{
				func_98(uLocal_2097[0]);
				if (func_217(Global_35, &(iLocal_75[0]), 1, 0))
				{
					if (func_360(Global_35, 0, 1, 0) == -1569615261 && func_360(Global_35, 1, 1, 0) == -1569615261)
					{
						task_play_anim(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					func_389(&(Local_1614.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_583 = 14;
			}
			break;
		case 14:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!func_391("LCMP_IG_S2OT"))
			{
				func_389(&(Local_1614.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_583 = 15;
			}
			break;
		case 15:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			bVar6 = true;
			if (func_19(2048) && !func_370(Local_479[5]))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!is_player_control_on(get_player_index()))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_82(&Local_1614, 65536);
				}
				func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!get_is_task_active(*iParam0, 3) && func_258(-3.5f, 1, *iParam0, 1))
				{
					func_128(4096);
					_0x74c2b3dc0b294102(&(iLocal_75[0]));
					_0xa1cfb35069d23c23(&(iLocal_75[0]));
					func_405(0, 1, 0);
					func_128(4096);
					_task_use_nearest_scenario_to_coord(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					func_746(iParam0);
					func_341(67108864);
					iLocal_583 = 17;
				}
			}
			break;
		case 17:
			if (func_268(Local_1614.f_138, 0))
			{
				if (func_747(Local_1614.f_138, &Local_1614, 60000, 1))
				{
					func_78(Local_213[0], 0);
				}
			}
			break;
	}
	return 0;
}

int func_420(int iParam0)
{
	if (func_134(&Local_362, 1) && iVar359 == *iParam0)
	{
		if (iVar580 < 17)
		{
			func_748();
			iLocal_583 = 17;
		}
	}
	func_724();
	switch (iVar580)
	{
		case 0:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_9(Local_1614.f_136, 131072))
			{
				iVar0 = iVar583;
				iLocal_586 = iVar0 + 1;
				func_15(Local_1614.f_136, 131072);
			}
			else
			{
				func_10(Local_1614.f_136, 131072);
			}
			if (func_9(Local_1614.f_136, 16384))
			{
				func_357(&(iLocal_2100[0]), uLocal_2097[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_335())
			{
				_request_scenario_type(func_749(), 262209, func_750(), func_751());
				iLocal_468 = _find_closest_active_scenario_point_of_type(func_752(), func_749(), 1f, 0, false);
			}
			else
			{
				_request_scenario_type(func_753(), 262209, func_750(), func_754());
				iLocal_468 = _find_closest_active_scenario_point_of_type(func_755(), func_753(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_728(&Local_156);
				Local_156.f_8 = { func_729() };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				func_145(&(Local_156.f_23), 128);
				func_730(&Local_156, 129);
				iLocal_583 = 1;
			}
			else
			{
				func_404(0);
				func_405(0, 1, 1);
				clear_ped_tasks_immediately(*iParam0, false, true);
				if (_does_scenario_point_exist(iVar465))
				{
					_task_use_scenario_point(*iParam0, iVar465, func_758(func_335(), func_756(), func_757()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_759(func_335(), func_752(), func_755()), 1.5f, -1, false, false, false, false);
				}
				iLocal_583 = 4;
			}
			break;
		case 1:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_730(&Local_156, 129))
			{
				func_404(0);
				func_405(0, 1, 1);
				func_14(1);
				if (_does_scenario_point_exist(iVar465))
				{
					_task_use_scenario_point(*iParam0, iVar465, func_758(func_335(), func_756(), func_757()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_nearest_scenario_to_coord(*iParam0, func_759(func_335(), func_752(), func_755()), 1.5f, -1, false, false, false, false);
				}
				iLocal_583 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				iVar1 = func_4(1);
				if (iVar1 > 3 || (iVar1 == 3 && func_5(1, 128)))
				{
					func_42(Local_1614.f_136, 4096);
				}
				func_405(0, 1, 1);
				func_738(1, 0);
				if (func_19(2))
				{
					iLocal_583 = 6;
				}
				else
				{
					iLocal_583 = 7;
				}
			}
			break;
		case 6:
			if (!func_733(-1f))
			{
				func_98(uLocal_2097[0]);
				iLocal_583 = 7;
			}
			break;
		case 7:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_735(iParam0, 0, func_335()) && func_762(iParam0, func_760(), 10f, 0, func_761(), 1, -1243035987))
			{
				func_736(1048576000, 1028443341, 0, 106);
				func_14(4096);
				func_737(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
				switch (iVar583)
				{
					case 2:
						StringCopy(&cVar2, "LCMP_IG_NIACT1", 24);
						break;
					case 3:
						StringCopy(&cVar2, "LCMP_IG_NIBA", 24);
						break;
					case 0:
						StringCopy(&cVar2, "LCMP_IG_NOG", 24);
						break;
					case 1:
						StringCopy(&cVar2, "LCMP_IG_NOTI", 24);
						break;
				}
				func_389(&(Local_1614.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_583 = 8;
			}
			break;
		case 8:
			func_736(1048576000, 1028443341, 0, 106);
			func_737(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
			if (func_335())
			{
				func_405(0, 1, 1);
				func_738(0, 0);
				iLocal_583 = 5;
			}
			else if ((!is_entity_dead(*iParam0) && func_258(-3.5f, 1, 0, 0)) && (has_anim_event_fired(*iParam0, -1376584066) || _0x02ebbb3989b7e695(*iParam0)))
			{
				clear_ped_tasks(*iParam0, 1, 0);
				task_turn_ped_to_face_entity(*iParam0, Global_35, 0, -1082130432, -1082130432, -1082130432);
				iLocal_583 = 2;
			}
			break;
		case 2:
			func_736(1048576000, 1028443341, 0, 106);
			if (!is_ped_using_any_scenario(*iParam0))
			{
				if (iVar583 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iVar583)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				func_389(&(Local_1614.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				clear_ped_tasks(*iParam0, 1, 0);
				open_sequence_task(&iLocal_196);
				task_play_upper_anim_facing_entity(0, func_496(), func_763(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iLocal_196);
				task_perform_sequence(*iParam0, iLocal_196);
				clear_sequence_task(&iLocal_196);
				func_405(0, 1, 1);
				func_738(0, 0);
				iLocal_583 = 5;
			}
			break;
		case 5:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
			if (func_764(iParam0))
			{
				func_738(1, 0);
				func_405(0, 1, 1);
				func_739(0, 0, 1);
				func_48(vLocal_557[3]);
			}
			if (func_51(-2147483648))
			{
				switch (iVar358)
				{
					case 0:
						switch (iVar583)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NIACT2", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFM", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NOSEE", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NOAIN", 24);
								break;
						}
						func_389(&(Local_1614.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_405(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iVar583)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
						}
						func_389(&(Local_1614.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_405(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_226(vLocal_557[3], 12.5f))
				{
					func_405(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					func_738(0, 0);
					if (!func_335())
					{
						clear_ped_tasks(*iParam0, 1, 0);
						_0x9c8f42a5d1859dc1(&(iLocal_75[0]));
						_task_use_nearest_scenario_to_coord(*iParam0, get_entity_coords(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					func_128(4096);
					func_98(uLocal_2097[0]);
					func_48(vLocal_557[3]);
					iLocal_583 = 16;
				}
			}
			break;
		case 16:
			if (func_226(vLocal_557[3], 60f))
			{
				if (func_335())
				{
				}
				else
				{
					clear_ped_tasks(*iParam0, 1, 0);
				}
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
				func_405(0, 1, 0);
				func_739(0, 0, 1);
				func_746(iParam0);
				iLocal_583 = 17;
			}
			break;
		case 17:
			if (!(func_134(&Local_362, 1) && iVar359 == *iParam0))
			{
				if (func_268(Local_1614.f_138, 0))
				{
					func_77(Local_1614.f_138, 1);
					func_78(Local_213[0], 0);
				}
			}
			break;
	}
	return 0;
}

int func_421(int iParam0)
{
	func_724();
	switch (iVar580)
	{
		case 0:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_58(1073741824);
			if (!func_9(Local_1614.f_136, 131072))
			{
				func_10(Local_1614.f_136, 131072);
			}
			else
			{
				func_15(Local_1614.f_136, 131072);
			}
			if (func_335())
			{
				_request_scenario_type(func_749(), 262209, func_750(), func_751());
				iLocal_468 = _find_closest_active_scenario_point_of_type(func_752(), func_749(), 1f, 0, false);
			}
			else
			{
				_request_scenario_type(func_753(), 262209, func_750(), func_754());
				iLocal_468 = _find_closest_active_scenario_point_of_type(func_755(), func_753(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_728(&Local_156);
				Local_156.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				func_145(&(Local_156.f_23), 128);
				func_730(&Local_156, 129);
				iLocal_583 = 1;
			}
			else
			{
				clear_ped_tasks_immediately(*iParam0, false, true);
				if (_does_scenario_point_exist(iVar465))
				{
					_task_use_scenario_point(*iParam0, iVar465, func_758(func_335(), func_756(), func_757()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_759(func_335(), func_752(), func_755()), 1.5f, -1, false, false, false, false);
				}
				if (func_335())
				{
				}
				iLocal_583 = 4;
			}
			break;
		case 1:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_730(&Local_156, 129))
			{
				func_14(1);
				if (_does_scenario_point_exist(iVar465))
				{
					_task_use_scenario_point(*iParam0, iVar465, func_758(func_335(), func_756(), func_757()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_759(func_335(), func_752(), func_755()), 1.5f, -1, false, false, false, false);
				}
				iLocal_583 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				func_42(Local_1614.f_136, 4096);
				func_405(0, 1, 1);
				if (func_19(2))
				{
					iLocal_583 = 6;
				}
				else
				{
					iLocal_583 = 7;
				}
			}
			break;
		case 6:
			if (!func_733(-1f))
			{
				func_98(uLocal_2097[0]);
				iLocal_583 = 7;
			}
			break;
		case 7:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_735(iParam0, 1, func_335()))
			{
				if (func_762(iParam0, func_765(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					clear_ped_tasks(*iParam0, 1, 0);
					func_14(4096);
					func_766(iParam0, 0, 0);
					func_10(Local_1614.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = (*Global_1392194)[Local_1614.f_136]->f_6;
					if (func_335())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					func_389(&(Local_1614.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_583 = 5;
				}
			}
			break;
		case 5:
			func_767(iParam0);
			func_737(iParam0, 0, 0, 1, 0, 0, 0, !func_335());
			if (func_764(iParam0))
			{
				func_405(0, 1, 1);
				func_768(0, 0);
				func_738(1, 0);
				func_48(vLocal_557[3]);
			}
			if (func_51(-2147483648))
			{
				switch (iVar358)
				{
					case 1:
						if (func_335())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						func_389(&(Local_1614.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_405(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_226(vLocal_557[3], 12.5f))
				{
					func_405(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_738(0, 0);
					iLocal_583 = 8;
				}
			}
			break;
		case 8:
			func_767(iParam0);
			func_766(iParam0, 0, 0);
			if (func_258(-3.5f, 1, 0, 0))
			{
				if (func_335())
				{
					func_77(Local_1614.f_138, 1);
					func_78(Local_213[0], 0);
					func_746(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_583 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_583 = 16;
				}
				func_389(&(Local_1614.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				func_128(4096);
				func_98(uLocal_2097[0]);
			}
			break;
		case 16:
			func_767(iParam0);
			if (func_226(vLocal_557[3], 60f))
			{
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
				func_77(Local_1614.f_138, 1);
				func_78(Local_213[0], 0);
				clear_ped_tasks(*iParam0, 1, 0);
				func_746(iParam0);
				iLocal_583 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_422(int iParam0)
{
	func_769();
	switch (iVar579)
	{
		case 0:
			if (!_does_volume_exist(&(iLocal_75[4])))
			{
				iLocal_75[4] = _create_volume_box_with_custom_name(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (func_9(Local_1614.f_136, 1024))
			{
				if (func_770(iParam0))
				{
					func_738(0, 1);
					func_405(0, 1, 0);
					func_739(0, 0, 1);
					func_71(256);
					func_746(iParam0);
					func_219(Local_479[1]);
					func_483(Local_479[1], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					_0x74c2b3dc0b294102(&(iLocal_75[0]));
					_0xa1cfb35069d23c23(&(iLocal_75[0]));
					clear_ped_tasks(*iParam0, 1, 0);
					_task_use_nearest_scenario_to_coord(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					func_42(Local_1614.f_136, 4096);
					iLocal_582 = 15;
				}
			}
			else if (func_771() && func_772(iParam0))
			{
				func_71(67108864);
				func_405(0, 1, 0);
				func_738(1, 1);
				func_773(0);
				iLocal_75[1] = _create_volume_box_with_custom_name(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = _create_volume_cylinder_with_custom_name(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				_0xb56d41a694e42e86(&(iLocal_75[1]), 0, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
				iLocal_582 = 1;
			}
			break;
		case 1:
			if (func_19(33554432))
			{
				if (func_9(1, 2))
				{
					func_42(0, 16);
				}
				if (func_19(2))
				{
					iLocal_582 = 6;
				}
				else
				{
					iLocal_582 = 2;
				}
			}
			break;
		case 6:
			if (!func_733(0))
			{
				func_734("LOG_OBJ01", 1);
				func_357(*iParam0, uLocal_2097[0], -89429847, 580546400, 0, func_415());
				if (!func_9(Local_1614.f_136, 1024))
				{
					iLocal_582 = 2;
				}
				else if (func_770(iParam0))
				{
					iLocal_582 = 8;
				}
			}
			break;
		case 2:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_774(0))
			{
				if (!is_ped_using_any_scenario(*iParam0))
				{
					if (does_entity_exist(Local_611.f_690[8]->f_8))
					{
						delete_object(&(Local_611.f_690[8]->f_8));
					}
					if (does_entity_exist(Local_611.f_690[7]->f_8))
					{
						delete_object(&(Local_611.f_690[7]->f_8));
					}
				}
				if (((func_131(Global_35, 242628503) || func_131(Global_35, 501393341)) || func_131(Global_35, 1553520516)) || func_131(Global_35, 1920417248))
				{
					display_radar(false);
				}
			}
			break;
		case 3:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			break;
		case 4:
			func_736(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_775();
			break;
		case 5:
			func_736(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_775();
			break;
		case 7:
			func_775();
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (!func_19(4096))
			{
				func_128(512);
				func_203();
				func_14(4096);
				func_304(&Local_362, 4);
			}
			break;
		case 8:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_776(11, 2);
			if (func_312(Local_1614.f_32) && !func_777(101))
			{
				func_778(Local_1614.f_32, 0, 1);
			}
			if (bVar0)
			{
				_0x74c2b3dc0b294102(&(iLocal_75[1]));
				_0xa1cfb35069d23c23(&(iLocal_75[1]));
				func_111(&(iLocal_75[1]));
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
			}
			break;
		case 9:
			if (func_716(Local_479[0], "Internal_Loop"))
			{
				func_717(Local_479[0], "Internal_Loop");
			}
			if (func_19(1073741824) && !func_779(11))
			{
				set_player_control(get_player_index(), false, 0, false);
				func_43(&Local_1614, 65536);
				func_776(11, 2);
				if (func_9(Local_1614.f_136, 4))
				{
					func_780(11, 128);
					iLocal_582 = 11;
				}
				else
				{
					func_389(&(Local_1614.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_582 = 13;
				}
			}
			break;
		case 10:
			if (func_730(&Local_156, 129))
			{
				iLocal_582 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (does_entity_exist(Local_611.f_690[0]->f_8))
			{
				if (!func_70(256))
				{
					func_686(Local_479[1], Global_35, "arthur", 1);
					func_687(Local_479[1], Local_611.f_690[3]->f_8, "p_knife02x");
					func_687(Local_479[1], Local_611.f_690[4]->f_8, "p_woodWittle01x");
					func_687(Local_479[1], Local_611.f_690[6]->f_8, "p_foldedBill01x");
					func_686(Local_479[1], *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					func_687(Local_479[1], Local_611.f_690[0]->f_8, "ITEM");
					func_642(Local_479[1], "pbl_AgreeToSell", 1);
				}
				else
				{
					func_686(Local_479[1], Global_35, "player", 1);
					func_687(Local_479[1], Local_611.f_690[6]->f_8, "MONEY");
					func_687(Local_479[1], Local_611.f_690[0]->f_8, "Item");
					func_686(Local_479[1], *iParam0, "male", 1);
				}
				iLocal_582 = 13;
			}
			break;
		case 13:
			func_98(uLocal_2097[0]);
			if (func_9(Local_1614.f_136, 4))
			{
				if (!func_19(4096))
				{
					func_389(&(Local_1614.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_688(Local_479[1]);
				func_219(Local_479[0]);
				if (!func_70(256))
				{
					func_643(Local_479[1], "Internal_Loop");
				}
				iLocal_582 = 14;
			}
			else if (!func_391("LOG_LCMP_INT_b0"))
			{
				func_642(Local_479[0], "pbl_RefuseToSell", 1);
				func_643(Local_479[0], "Internal_Loop");
				func_71(16384);
				iLocal_582 = 14;
			}
			break;
		case 14:
			if ((!is_entity_dead(*iParam0) && has_anim_event_fired(*iParam0, -1898385492)) && does_entity_exist(Local_611.f_690[0]->f_8))
			{
				delete_object(&(Local_611.f_690[0]->f_8));
			}
			if (!is_entity_dead(Global_35))
			{
				if (has_anim_event_fired(Global_35, -1898385492) && does_entity_exist(Local_611.f_690[6]->f_8))
				{
					delete_object(&(Local_611.f_690[6]->f_8));
				}
				if (!is_player_control_on(get_player_index()) && has_anim_event_fired(Global_35, -1376584066))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_82(&Local_1614, 65536);
				}
			}
			if (!get_is_task_active(Global_35, 3))
			{
				display_radar(true);
				display_hud(true);
			}
			if (func_370(Local_479[0]) && (func_70(16384) || func_370(Local_479[1])))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_82(&Local_1614, 65536);
				display_radar(true);
				display_hud(true);
				func_43(&Local_1614, 128);
				func_315(11, 128);
				func_483(Local_479[1], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				func_128(2048);
				func_341(16384);
				func_781(11);
				func_71(256);
				func_128(536870912);
				func_128(4096);
				func_108(1);
				func_341(67108864);
				func_738(0, 1);
				func_405(0, 1, 0);
				func_739(0, 0, 1);
				func_782(11, 2);
				clear_ped_tasks(*iParam0, 1, 0);
				_task_use_nearest_scenario_to_coord(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				func_746(iParam0);
				iLocal_582 = 15;
			}
			break;
		case 15:
			func_776(11, 1);
			if (func_19(4096))
			{
				func_128(4096);
			}
			break;
	}
	return 0;
}

void func_423(var uParam0, int iParam1)
{
	if ((iLocal_206 % 5) != 0)
	{
		return;
	}
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	switch (&iLocal_596[iParam1])
	{
		case 0:
			if (!func_70(2048))
			{
				if (add_relationship_group("REL_LOGGING", &uLocal_477) && iVar473 != 0)
				{
					func_71(2048);
				}
			}
			if (iVar474 == 0)
			{
				add_relationship_group("REL_LOGGING_WOLF", &uLocal_478);
			}
			if (iVar473 != 0 && iVar474 != 0)
			{
				set_ped_relationship_group_hash(*uParam0, iVar473);
				set_relationship_between_groups(1, iVar473, 1862763509);
				set_relationship_between_groups(6, iVar473, iVar474);
			}
			clear_ped_tasks(*uParam0, 1, 0);
			task_guard_current_position(*uParam0, 10f, 50f, true);
			iLocal_596[iParam1] = 1;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				if (!is_entity_dead(&(iLocal_2125[iVar0])) && func_368(*uParam0, &(iLocal_2125[iVar0]), 1, 1) < 45f)
				{
					bVar1 = true;
				}
				else
				{
					iVar0++;
				}
			}
			if (bVar1)
			{
				func_71(64);
				clear_ped_tasks(*uParam0, 1, 0);
				func_110(0);
				_0xfc3db99c8144cd81(*uParam0, (*Global_1392194)[Local_1614.f_136]->f_6, 0, true, 0);
				task_combat_hated_targets_in_area(*uParam0, (Local_611.f_15[(0 + iParam1)])->f_6, 40f, 16384, 4);
				iLocal_596[iParam1] = 2;
			}
			if (_0xa454d234e45bb6e5(*uParam0, get_player_index()) || _0x9337183fda2e9035(*uParam0, get_player_index()))
			{
				clear_ped_tasks(*uParam0, 1, 0);
				task_turn_ped_to_face_entity(*uParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				iLocal_596[iParam1] = 3;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				if (!is_entity_dead(&(iLocal_2125[iVar0])) && func_368(*uParam0, &(iLocal_2125[iVar0]), 1, 1) < 50f)
				{
					bVar2 = true;
				}
				else
				{
					iVar0++;
				}
			}
			if (!bVar2)
			{
				func_341(64);
				clear_ped_tasks(*uParam0, 1, 0);
				task_guard_current_position(*uParam0, 10f, 50f, true);
				iLocal_596[iParam1] = 1;
			}
			break;
		case 3:
			if (!_0xa454d234e45bb6e5(*uParam0, get_player_index()) && !_0x9337183fda2e9035(*uParam0, get_player_index()))
			{
				clear_ped_tasks(*uParam0, 1, 0);
				task_guard_current_position(*uParam0, 10f, 50f, true);
				func_58(262144);
				iLocal_596[iParam1] = 1;
			}
			break;
		case 4:
			break;
	}
}

bool func_424()
{
	if (!func_19(268435456))
	{
		switch (iVar597)
		{
			case 0:
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!is_entity_dead(&(iLocal_2125[iVar0])))
					{
						_0xfc3db99c8144cd81(&(iLocal_2125[iVar0]), &(iLocal_75[3]), 1, false, 0);
					}
					iVar0++;
				}
				iLocal_599 = 2;
				break;
			case 2:
				if (!is_entity_dead(Global_35))
				{
					if (!func_217(Global_35, &(iLocal_75[3]), 1, 0))
					{
						func_48(vLocal_557[1]);
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!is_entity_dead(&(iLocal_2125[iVar0])))
							{
								set_ped_config_flag(&(iLocal_2125[iVar0]), 215, true);
							}
							iVar0++;
						}
						iLocal_599 = 1;
					}
				}
				break;
			case 1:
				if (!is_entity_dead(Global_35))
				{
					if (func_217(Global_35, &(iLocal_75[3]), 1, 0))
					{
						func_270(vLocal_557[1]);
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!is_entity_dead(&(iLocal_2125[iVar0])))
							{
								if (is_entity_visible(&(iLocal_2125[iVar0])))
								{
									clear_ped_tasks(&(iLocal_2125[iVar0]), 1, 0);
									func_783(iLocal_2125[iVar0]);
									task_combat_ped(&(iLocal_2125[iVar0]), Global_35, 1048576, 16);
								}
							}
							iVar0++;
						}
						iLocal_599 = 2;
					}
					else if (func_226(vLocal_557[1], 6f))
					{
						func_71(32);
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!is_entity_dead(&(iLocal_2125[iVar0])))
							{
								clear_ped_tasks(&(iLocal_2125[iVar0]), 1, 0);
								open_sequence_task(&iLocal_196);
								task_follow_nav_mesh_to_coord(0, func_784(), 3f, -1, 5f, 0, 40000f);
								task_guard_assigned_defensive_area(0, func_784(), -78.08f, 20f, -1);
								close_sequence_task(iLocal_196);
								_task_perform_sequence_2(&(iLocal_2125[iVar0]), iLocal_196, 0.5f, 2f);
								clear_sequence_task(&iLocal_196);
							}
							iVar0++;
						}
						iLocal_599 = 3;
						return true;
					}
				}
				break;
			case 3:
				if (!is_entity_dead(Global_35))
				{
					if (func_217(Global_35, &(iLocal_75[3]), 1, 0))
					{
						func_270(vLocal_557[1]);
						iVar0 = 0;
						while (iVar0 < Local_611.f_1)
						{
							if (!is_entity_dead(&(iLocal_2125[iVar0])))
							{
								if (is_entity_visible(&(iLocal_2125[iVar0])))
								{
									clear_ped_tasks(&(iLocal_2125[iVar0]), 1, 0);
									func_783(iLocal_2125[iVar0]);
									task_combat_ped(&(iLocal_2125[iVar0]), Global_35, 1048576, 16);
								}
							}
							iVar0++;
						}
						iLocal_599 = 2;
					}
				}
				break;
			case 4:
				break;
		}
	}
	return false;
}

int func_425()
{
	func_785();
	func_786();
	switch (iVar593)
	{
		case 0:
			if (!func_9(Local_1614.f_136, 16))
			{
				func_47(func_602(3), &Local_611);
				iLocal_595 = 1;
			}
			else
			{
				iLocal_595 = 7;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar0 = func_682(3, 0);
				if (iVar0 == func_602(3))
				{
					if (((!is_entity_dead(func_63(func_337(3, 0, 0))) && !is_entity_dead(func_63(func_337(3, 1, 0)))) && !is_entity_dead(func_63(func_337(3, 2, 0)))) && !is_entity_dead(func_63(func_337(3, 3, 0))))
					{
						if (!_does_volume_exist(&(iLocal_75[1])))
						{
							iLocal_75[1] = _0x0eb78c2b156635b1(665633627, -1394.656f, -243.9225f, 98.72907f, 0f, 0f, 0f, 1.025417f, 1.034337f, 1.10476f);
						}
						clear_ped_tasks_immediately(func_63(func_337(3, 0, 0)), false, true);
						clear_ped_tasks_immediately(func_63(func_337(3, 1, 0)), false, true);
						clear_ped_tasks_immediately(func_63(func_337(3, 2, 0)), false, true);
						clear_ped_tasks_immediately(func_63(func_337(3, 3, 0)), false, true);
						func_67(&(Local_1614.f_35), func_63(func_337(3, 0, 0)), "LOG_WORKER_4", 0);
						func_67(&(Local_1614.f_35), func_63(func_337(3, 1, 0)), "LOG_WORKER_5", 0);
						func_67(&(Local_1614.f_35), func_63(func_337(3, 2, 0)), "LOG_WORKER_6", 0);
						func_67(&(Local_1614.f_35), func_63(func_337(3, 3, 0)), "LOG_WORKER_7", 0);
						iLocal_595 = 2;
					}
				}
			}
			break;
		case 2:
			func_686(Local_479[3], func_63(func_337(3, 0, 0)), "PED1", 1);
			func_686(Local_479[3], func_63(func_337(3, 1, 0)), "PED2", 1);
			func_686(Local_479[3], func_63(func_337(3, 2, 0)), "PED3", 1);
			func_686(Local_479[3], func_63(func_337(3, 3, 0)), "PED4", 1);
			func_687(Local_479[3], Local_611.f_690[8]->f_8, "CUP1");
			func_687(Local_479[3], Local_611.f_690[9]->f_8, "CUP2");
			func_687(Local_479[3], Local_611.f_690[10]->f_8, "CUP3");
			func_687(Local_479[3], Local_611.f_690[11]->f_8, "CUP4");
			func_687(Local_479[3], Local_611.f_690[7]->f_8, "BOTTLE");
			func_688(Local_479[3]);
			func_10(Local_1614.f_136, 16);
			iLocal_595 = 3;
			break;
		case 3:
			if (func_9(Local_1614.f_136, 256) && func_9(Local_1614.f_136, 32))
			{
				iLocal_595 = 5;
			}
			if (((func_9(Local_1614.f_136, 256) && func_395(vLocal_557[4], 10f)) && (is_entity_dead(func_63(func_337(3, 0, 0))) || func_368(Global_35, func_63(func_337(3, 0, 0)), 1, 1) < 30f)) && func_258(0, 1, 0, 0))
			{
				func_643(Local_479[3], "bBreakInternalLoop");
				iLocal_595 = 4;
			}
			break;
		case 4:
			func_717(Local_479[3], "bBreakInternalLoop");
			iLocal_595 = 5;
			break;
		case 5:
			if ((func_9(Local_1614.f_136, 32) || is_entity_dead(func_63(func_337(3, 0, 0)))) || func_368(Global_35, func_63(func_337(3, 0, 0)), 1, 1) > 50f)
			{
				func_219(Local_479[3]);
				iLocal_595 = 6;
			}
			break;
		case 6:
			if (!_does_anim_scene_exist(&(Local_479[3])))
			{
				func_787(3, 0);
				func_111(&(iLocal_75[1]));
				delete_object(&(Local_611.f_690[8]->f_8));
				delete_object(&(Local_611.f_690[9]->f_8));
				delete_object(&(Local_611.f_690[10]->f_8));
				delete_object(&(Local_611.f_690[11]->f_8));
				delete_object(&(Local_611.f_690[7]->f_8));
				iLocal_595 = 7;
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

bool func_426(int iParam0)
{
	func_785();
	func_788();
	vVar0 = { func_789(Global_35, 1f) };
	if (!func_19(512) && is_any_speech_playing(*iParam0))
	{
		_trigger_sonar_blip_2(1515458263, *iParam0);
		func_14(512);
	}
	switch (iVar591)
	{
		case 0:
			func_739(0, 0, 1);
			func_405(0, 1, 1);
			func_725(Local_479[0], func_790(0));
			func_725(Local_479[0], func_790(1));
			func_725(Local_479[0], func_790(2));
			if (func_9(Local_1614.f_136, 16384))
			{
				func_357(&(iLocal_2100[0]), uLocal_2097[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
			}
			if (!_does_volume_exist(&(iLocal_75[3])))
			{
				iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1447.355f, -365.6499f, 125.5605f, 0f, 0f, 11.99992f, 95.91602f, 34.7993f, 24.21251f, "Appleseed - volWolf");
				if (does_entity_exist(&(iLocal_2125[0])))
				{
					if (iVar475 == 0)
					{
						add_relationship_group("REL_LOGGING_WOLF", &uLocal_478);
					}
					if (iVar475 != 0)
					{
						set_ped_relationship_group_hash(&(iLocal_2125[0]), iVar475);
						set_relationship_between_groups(6, iVar475, 1862763509);
					}
					_0xfc3db99c8144cd81(&(iLocal_2125[0]), &(iLocal_75[3]), 0, false, 0);
					set_ped_combat_attributes(&(iLocal_2125[0]), 71, false);
					set_ped_combat_attributes(&(iLocal_2125[0]), 62, false);
					set_ped_combat_attributes(&(iLocal_2125[0]), 45, false);
					set_ped_combat_attributes(&(iLocal_2125[0]), 51, false);
					set_ped_combat_attributes(&(iLocal_2125[0]), 31, false);
					set_ped_combat_attributes(&(iLocal_2125[0]), 37, false);
					_task_guard_assigned_defensive_area_2(&(iLocal_2125[0]), &(iLocal_75[3]), _0xf70f00013a62f866(&(iLocal_75[3])), 0f, func_791(&(iLocal_75[3])), -1);
				}
			}
			if (does_entity_exist(&(uLocal_2077[2])))
			{
				freeze_entity_position(&(uLocal_2077[2]), false);
				_set_entity_something(&(uLocal_2077[2]), true);
			}
			if (does_entity_exist(&(uLocal_2077[3])))
			{
				freeze_entity_position(&(uLocal_2077[3]), false);
				_set_entity_something(&(uLocal_2077[3]), true);
			}
			if (func_9(Local_1614.f_136, 256) || func_5(Local_1614.f_136, 64))
			{
				func_71(4194304);
				iLocal_594 = 8;
			}
			else
			{
				func_47(func_602(0), &Local_611);
				func_71(67108864);
				iLocal_594 = 1;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar3 = func_682(0, 0);
				if (iVar3 == func_602(0))
				{
					if ((!is_entity_dead(func_63(func_337(0, 0, 0))) && !is_entity_dead(func_63(func_337(0, 1, 0)))) && !is_entity_dead(func_63(func_337(0, 2, 0))))
					{
						if (!_does_volume_exist(&(iLocal_75[4])))
						{
							iLocal_75[4] = _0x0eb78c2b156635b1(665633627, -1398.927f, -213.5499f, 102.4407f, 0f, 0f, 0f, 3.522115f, 3.82233f, 1.396173f);
						}
						func_792();
						iVar4 = 0;
						while (iVar4 < func_602(0))
						{
							clear_ped_tasks_immediately(func_63(func_337(0, iVar4, 0)), false, true);
							func_793(func_63(func_337(0, iVar4, 0)), 1);
							iVar4++;
						}
						func_67(&(Local_1614.f_35), func_63(func_337(0, 0, 0)), "LOGGING_WORKER", 0);
						func_67(&(Local_1614.f_35), func_63(func_337(0, 1, 0)), "LOG_WORKER_2", 0);
						func_67(&(Local_1614.f_35), func_63(func_337(0, 2, 0)), "LOG_WORKER_3", 0);
						func_686(Local_479[0], *iParam0, "FOREMAN", 1);
						func_686(Local_479[0], func_63(func_337(0, 0, 0)), "PED1", 1);
						func_686(Local_479[0], func_63(func_337(0, 1, 0)), "PED2", 1);
						func_686(Local_479[0], func_63(func_337(0, 2, 0)), "PED3", 1);
						func_686(Local_479[0], Global_35, "Arthur", 1);
						func_725(Local_479[0], "PBL_EXIT_1");
						func_725(Local_479[0], "PBL_EXIT_2");
						func_794(&(Local_1614.f_35), "LOG_FMN_ORD_1", 0);
						func_794(&(Local_1614.f_35), "LOG_FMN_ORD_4", 0);
						func_688(Local_479[0]);
						iLocal_594 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_438(*iParam0, vVar0, 1) < 50f)
			{
				func_14(4096);
				func_643(Local_479[0], "bBreakInternalLoop");
				func_389(&(Local_1614.f_35), "LOG_FMN_ORD_1", *iParam0, func_63(func_337(0, 0, 0)), 0, 0, 1, 1);
				func_794(&(Local_1614.f_35), "LOG_FMN_ORD_2", 0);
				iLocal_594 = 3;
			}
			break;
		case 3:
			if (!func_217(*iParam0, &(iLocal_75[0]), 1, 0))
			{
				func_42(Local_1614.f_136, 64);
				func_717(Local_479[0], "bBreakInternalLoop");
				iLocal_594 = 4;
			}
			break;
		case 4:
			if (func_438(*iParam0, vVar0, 1) < 16f)
			{
				func_642(Local_479[0], "PBL_EXIT_1", 1);
				iLocal_594 = 6;
			}
			else if (has_anim_event_fired(*iParam0, -167507638))
			{
				func_389(&(Local_1614.f_35), "LOG_FMN_ORD_2", *iParam0, func_63(func_337(0, 0, 0)), 0, 0, 1, 1);
				func_794(&(Local_1614.f_35), "LOG_FMN_ORD_3", 0);
				iLocal_594 = 5;
			}
			break;
		case 5:
			if (func_438(*iParam0, vVar0, 1) < 16f)
			{
				func_642(Local_479[0], "PBL_EXIT_2", 1);
				iLocal_594 = 6;
			}
			else if (has_anim_event_fired(*iParam0, -606415624))
			{
				func_389(&(Local_1614.f_35), "LOG_FMN_ORD_3", *iParam0, func_63(func_337(0, 0, 0)), 0, 0, 1, 1);
				func_794(&(Local_1614.f_35), "LOG_FMN_ORD_4", 0);
				iLocal_594 = 6;
			}
			break;
		case 6:
			if (has_anim_event_fired(*iParam0, -269436386))
			{
				func_389(&(Local_1614.f_35), "LOG_FMN_ORD_4", *iParam0, func_63(func_337(0, 0, 0)), 0, 0, 1, 1);
				iLocal_594 = 7;
			}
			func_795();
			break;
		case 7:
			func_795();
			if (func_258(-3.5f, 1, 0, 0))
			{
				if (!_0xd89504d9d7d5057d("LOG_FMN_ORD_4") && has_anim_event_fired(*iParam0, -269436386))
				{
					func_389(&(Local_1614.f_35), "LOG_FMN_ORD_4", *iParam0, func_63(func_337(0, 0, 0)), 0, 0, 1, 1);
				}
			}
			if (func_796(get_entity_coords(*iParam0, true, false), -1399.772f, -209.4336f, 102.8641f, 1056964608, 0))
			{
				func_725(Local_479[0], func_790(0));
				func_725(Local_479[0], func_790(1));
				func_725(Local_479[0], func_790(2));
				func_111(&(iLocal_75[4]));
				iLocal_594 = 8;
			}
			break;
		case 8:
			func_795();
			return true;
	}
	return false;
}

int func_427(int iParam0)
{
	func_797();
	if (func_70(33554432))
	{
		func_798(iParam0);
	}
	if (!func_70(4194304))
	{
		if (func_795())
		{
			func_71(4194304);
		}
	}
	if (func_70(8388608))
	{
		func_799(iParam0);
	}
	func_788();
	func_800();
	if (func_51(64))
	{
		func_746(iParam0);
		iLocal_584 = 23;
		func_50(64);
		func_111(&(iLocal_75[2]));
		func_219(Local_479[1]);
		func_113(&uLocal_2097);
		func_113(&uLocal_2136);
		func_113(&uLocal_2114);
		func_113(&uLocal_1949);
		iVar0 = 0;
		while (iVar0 < Local_611.f_1)
		{
			func_715(iLocal_2125[iVar0]);
			iVar0++;
		}
	}
	switch (iVar581)
	{
		case 0:
			if (func_801())
			{
				return 0;
			}
			if (func_9(Local_1614.f_136, 16384) && !does_blip_exist(&(uLocal_2097[1])))
			{
				func_357(&(iLocal_2100[0]), uLocal_2097[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
			}
			if (!func_100(iLocal_154))
			{
				iLocal_154 = func_802(11, 3, 3, -1454557023);
			}
			if (func_207(iLocal_154))
			{
				func_803(iLocal_154, 1);
			}
			func_111(&(iLocal_75[4]));
			if (iVar475 != 0)
			{
				set_relationship_between_groups(6, -1976316465, iVar475);
			}
			request_model(-1443906703, false);
			set_ped_config_flag(&(uLocal_2077[0]), 249, true);
			set_ped_config_flag(&(uLocal_2077[1]), 249, true);
			if (func_9(Local_1614.f_136, 32))
			{
				func_804(iLocal_154, 1, 0);
				func_85();
				func_178();
				func_357(*iParam0, &iLocal_2011, -89429847, -981020806, 0, func_415());
				func_734("LOG_OBJ04", 1);
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				func_14(2);
				if (Local_362.f_3 < 3)
				{
					Local_362.f_3++;
				}
				iLocal_584 = 20;
			}
			else if (func_9(Local_1614.f_136, 256))
			{
				func_71(33554432);
				func_804(iLocal_154, 1, 0);
				func_805(0);
				func_58(536870912);
				func_128(1);
				func_14(2);
				if (Local_362.f_3 < 3)
				{
					Local_362.f_3++;
				}
				iLocal_584 = 9;
			}
			else if (func_9(Local_1614.f_136, 262144))
			{
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				iLocal_584 = 5;
			}
			else
			{
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				iLocal_584 = 1;
			}
			break;
		case 1:
			func_411();
			if (func_19(33554432))
			{
				if (func_19(2))
				{
					iLocal_584 = 3;
				}
				else
				{
					iLocal_584 = 4;
				}
			}
			break;
		case 3:
			func_411();
			if (!func_733(-1f))
			{
				func_734("LOG_OBJ01", 1);
				func_357(*iParam0, uLocal_2097[0], -89429847, 580546400, 0, func_415());
				iLocal_584 = 4;
			}
			break;
		case 4:
			func_411();
			if (func_806(iParam0))
			{
				func_14(2);
				set_ped_max_move_blend_ratio(*iParam0, 0f);
				func_206(Local_1614.f_136, 8388608);
				iLocal_584 = 6;
			}
			break;
		case 5:
			set_ped_reset_flag(Global_35, 129, true);
			func_411();
			if (func_735(iParam0, 0, 0))
			{
				func_736(1048576000, 1028443341, 0, 106);
				func_14(2);
				func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
				_0xec6935ebe0847b90(*iParam0, Global_36);
				_0xe7fa07624574b79a(*iParam0, Global_35, 1, 1, 999f, 1, 0, 0, 0);
				func_389(&(Local_1614.f_35), "LCMP_REASK", *iParam0, Global_35, 0, 0, 1, 1);
				func_206(Local_1614.f_136, 8388608);
				iLocal_584 = 6;
			}
			break;
		case 6:
			func_736(1048576000, 1028443341, 0, 106);
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_max_move_blend_ratio(*iParam0, 0f);
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			if (func_258(0, 1, 0, 0))
			{
				display_radar(true);
				display_hud(true);
				func_738(1, 1);
				func_405(0, 1, 0);
				func_807(0);
				func_108(0);
				iLocal_584 = 7;
			}
			break;
		case 7:
			func_736(1048576000, 1028443341, 0, 106);
			set_ped_reset_flag(Global_35, 129, true);
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (iVar358 == 0)
			{
				func_389(&(Local_1614.f_35), "LCMP_IG_S3_PR", Global_35, *iParam0, 0, 0, 1, 1);
				func_58(536870912);
				func_48(vLocal_557[4]);
				if (is_ped_using_any_scenario(*iParam0))
				{
					_0x541e5b41dca45828(*iParam0, 3, 0);
				}
				else
				{
					task_play_anim(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "positive_react_player", 2f, -2f, -1, 67108880, 0f, false, 0, false, 0, false);
					task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "positive_react_fm", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				}
				func_15(Local_1614.f_136, 262144);
				func_804(iLocal_154, 1, 0);
				func_405(0, 1, 0);
				func_738(0, 0);
				if (Local_362.f_3 < 3)
				{
					Local_362.f_3++;
				}
				iLocal_584 = 9;
			}
			else if (iVar358 == 1 || (!is_entity_dead(*iParam0) && func_284(*iParam0, 0, 1) > 5f))
			{
				if (func_284(*iParam0, 0, 1) <= 5f)
				{
					func_389(&(Local_1614.f_35), "LCMP_IG_S3_PLNR", Global_35, *iParam0, 0, 0, 1, 1);
				}
				func_10(Local_1614.f_136, 262144);
				func_128(2048);
				func_98(uLocal_2097[0]);
				func_405(0, 1, 0);
				func_738(0, 0);
				iLocal_584 = 8;
			}
			break;
		case 8:
			if (func_258(-3.5f, 1, 0, 0))
			{
				set_ped_reset_flag(Global_35, 129, false);
				func_739(0, 0, 1);
				func_389(&(Local_1614.f_35), "LCMP_IG_S3_NR", *iParam0, Global_35, 0, 0, 1, 1);
				if (is_ped_using_any_scenario(*iParam0))
				{
					_0x541e5b41dca45828(*iParam0, 2, 0);
				}
				else
				{
					task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "negative_react_fm", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				}
				func_808(Local_479[1], "PBL_EXIT");
				func_111(&(iLocal_75[2]));
				func_746(iParam0);
				iLocal_584 = 23;
			}
			break;
		case 9:
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			if (!get_is_task_active(*iParam0, 3) || is_ped_using_any_scenario(*iParam0))
			{
				set_ped_reset_flag(Global_35, 129, false);
				if (is_ped_using_any_scenario(*iParam0))
				{
					_0x541e5b41dca45828(*iParam0, 3, 0);
				}
				func_805(0);
				func_111(&(iLocal_75[2]));
				clear_ped_tasks(Global_35, 1, 0);
				set_player_control(get_player_index(), true, 0, false);
				func_82(&Local_1614, 65536);
				if (!is_ped_using_any_scenario(*iParam0))
				{
					_task_use_nearest_scenario_to_coord(*iParam0, func_266(), 5f, -1, false, false, false, false);
				}
				set_entity_visible(&(uLocal_2077[2]), true);
				set_entity_visible(&(uLocal_2077[3]), true);
				func_85();
				iLocal_194 = 0;
				if (!_does_volume_exist(&(iLocal_75[3])))
				{
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1447.355f, -365.6499f, 125.5605f, 0f, 0f, 11.99992f, 95.91602f, 34.7993f, 24.21251f, "Appleseed - volWolf");
				}
				_0xb56d41a694e42e86(&(iLocal_75[3]), 0, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[3]), 0, 0, 0, -1, -1, 0);
				if (iVar475 == 0)
				{
					add_relationship_group("REL_LOGGING_WOLF", &uLocal_478);
				}
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!is_entity_dead(&(iLocal_2125[iVar0])))
					{
						if (iVar475 != 0)
						{
							set_ped_relationship_group_hash(&(iLocal_2125[iVar0]), iVar475);
						}
						func_809(&(iLocal_2125[iVar0]), (*Global_1392194)[Local_1614.f_136]->f_6);
						_0xfc3db99c8144cd81(&(iLocal_2125[iVar0]), &(iLocal_75[3]), 0, false, 0);
					}
					iVar0++;
				}
				if (iVar475 != 0)
				{
					set_relationship_between_groups(6, iVar475, 1862763509);
				}
				func_98(uLocal_2097[0]);
				func_734("LOG_OBJ02", 1);
				func_14(2048);
				func_10(Local_1614.f_136, 256);
				func_43(&Local_1614, 128);
				iLocal_75[6] = _create_volume_cylinder_with_custom_name(-1365.049f, -304.6269f, 110.6167f, 0f, 0f, 10.25222f, 52.48819f, 35.56052f, 13.17437f, "Appleseed - volWolfSearch");
				_0xb56d41a694e42e86(&(iLocal_75[6]), 0, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[6]), 0, 0, 0, -1, -1, 0);
				if (!func_9(Local_1614.f_136, 2048))
				{
					func_810(&iLocal_2011, &(iLocal_75[6]), 1247852480);
				}
				request_waypoint_recording(func_811());
				if (!_0x5e420ff293ee5472())
				{
					_0xf008e0ba1fe1d644(Local_611.f_1);
				}
				iLocal_584 = 10;
			}
			break;
		case 10:
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_411();
			func_812();
			func_50(16);
			bVar1 = func_51(16);
			if (func_60(&bVar1, &iLocal_194, 0, -1))
			{
				func_813();
				func_14(268435456);
				iVar0 = 0;
				while (iVar0 < Local_611.f_1)
				{
					if (!is_entity_dead(&(iLocal_2125[iVar0])))
					{
						clear_ped_tasks_immediately(&(iLocal_2125[iVar0]), false, true);
						set_entity_load_collision_flag(&(iLocal_2125[iVar0]), 1);
						set_ped_config_flag(&(iLocal_2125[iVar0]), 186, false);
						vVar2 = { Local_611.f_369[iVar0]->f_6 };
						vVar2.f_2 = (vVar2.z - 15f);
						func_267(&(iLocal_2125[iVar0]), vVar2, Local_611.f_369[iVar0]->f_9, 2, 1073741824);
						freeze_entity_position(&(iLocal_2125[iVar0]), true);
					}
					iVar0++;
				}
				set_ped_config_flag(&(uLocal_2077[2]), 6, true);
				set_ped_config_flag(&(uLocal_2077[2]), 4, true);
				set_ped_config_flag(&(uLocal_2077[2]), 186, false);
				func_814(&(uLocal_2077[2]), 0);
				set_ped_config_flag(&(uLocal_2077[3]), 6, true);
				set_ped_config_flag(&(uLocal_2077[3]), 4, true);
				set_ped_config_flag(&(uLocal_2077[3]), 186, false);
				func_814(&(uLocal_2077[3]), 0);
				iLocal_584 = 11;
			}
			break;
		case 11:
			func_813();
			func_411();
			func_812();
			if (!is_entity_dead(&(iLocal_2125[0])))
			{
				if (func_217(Global_35, &(iLocal_75[3]), 1, 0))
				{
					if (does_entity_exist(&(uLocal_2077[2])))
					{
					}
					if (does_entity_exist(&(uLocal_2077[3])))
					{
					}
					if (func_521(Local_611.f_15[2]->f_6, 1) < 50f || func_521(Local_611.f_15[3]->f_6, 1) < 50f)
					{
						func_815(&uLocal_391);
						play_animal_vocalization(&(iLocal_2125[0]), "HOWL_LONG", false);
						iLocal_584 = 13;
					}
				}
			}
			if (func_816(&iLocal_2125))
			{
				func_71(33554432);
				iLocal_584 = 15;
			}
			break;
		case 12:
			func_411();
			func_812();
			func_813();
			func_216(0);
			bVar6 = true;
			iVar0 = 0;
			while (iVar0 < Local_611.f_1)
			{
				if (!is_entity_dead(&(iLocal_2125[iVar0])))
				{
					bVar5 = true;
					if (func_284(&(iLocal_2125[iVar0]), 1, 1) < 20f)
					{
						bVar6 = false;
					}
					else
					{
						func_98(uLocal_2136[iVar0]);
					}
				}
				iVar0++;
			}
			if (bVar6 || func_217(Global_35, &(iLocal_75[3]), 1, 0))
			{
				func_815(&uLocal_391);
				iLocal_584 = 13;
			}
			if (!bVar5)
			{
				iLocal_584 = 18;
			}
			break;
		case 13:
			func_411();
			func_216(0);
			func_817();
			func_812();
			func_813();
			if (does_entity_exist(&(uLocal_2077[2])))
			{
				func_818(&(uLocal_2077[2]), &uLocal_391, 0f, 0f, 0f, 0, 1106247680, 1092616192, 2000, 4000, 1000, 1075838976, 0, 0, 1084227584);
			}
			if ((func_819() || func_820(&uLocal_391)) || (((!func_70(32) && func_816(&iLocal_2125)) || func_821()) || (!func_822(Global_35) && ((does_entity_exist(&(uLocal_2077[2])) && _0x8de41e9902e85756(&(uLocal_2077[2]))) || (does_entity_exist(&(uLocal_2077[3])) && _0x8de41e9902e85756(&(uLocal_2077[3])))))))
			{
				func_476();
				func_203();
				func_815(&uLocal_391);
				func_128(268435456);
				func_341(32);
				iLocal_599 = 0;
				if (func_70(32))
				{
					func_71(33554432);
					iLocal_584 = 15;
				}
				else
				{
					iLocal_584 = 14;
				}
			}
			break;
		case 14:
			func_812();
			func_813();
			func_98(&iLocal_2011);
			if (func_424())
			{
				iLocal_584 = 12;
			}
			else
			{
				func_411();
				func_216(0);
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!is_entity_dead(&(iLocal_2125[iVar0])))
					{
						func_267(&(iLocal_2125[iVar0]), Local_611.f_369[iVar0]->f_6, Local_611.f_369[iVar0]->f_9, 2, 1073741824);
						freeze_entity_position(&(iLocal_2125[iVar0]), false);
						open_sequence_task(&iLocal_196);
						task_follow_nav_mesh_to_coord(0, func_823(iVar0, 0), 1.5f, 20000, 0.25f, 262144, func_824(func_823(iVar0, 0), Global_36));
						func_825(0, Global_35, -1);
						close_sequence_task(iLocal_196);
						_task_perform_sequence_2(&(iLocal_2125[iVar0]), iLocal_196, to_float(iVar0), to_float(iVar0));
						clear_sequence_task(&iLocal_196);
					}
					iVar0++;
				}
				func_734("LOG_OBJ03", 1);
				func_818(&(iLocal_2125[0]), &uLocal_391, 0f, 0f, 0f, 0, 1106247680, 50f, 1000, 4000, 1000, 1075838976, 0, 1, 1084227584);
				play_animal_vocalization(&(iLocal_2125[0]), "HOWL_SHORT", false);
				func_218("SP_EVENT_AREA_APPLESEED_3_WOLVES", 0);
				func_10(Local_1614.f_136, 2048);
				func_48(vLocal_557[2]);
				open_sequence_task(&iLocal_196);
				task_follow_nav_mesh_to_coord(0, -1391.11f, -259.1418f, 98.30546f, 1f, 20000, 0.25f, 0, 174.81f);
				task_look_at_entity(0, Global_35, -1, 0, 51, 1);
				close_sequence_task(iLocal_196);
				task_perform_sequence(&(uLocal_2077[0]), iLocal_196);
				clear_sequence_task(&iLocal_196);
				iLocal_584 = 15;
				Jump @4521; //curOff = 3652
				func_98(&iLocal_2011);
				func_812();
				func_813();
				if (func_424())
				{
					iLocal_584 = 12;
				}
				else
				{
					func_411();
					func_216(0);
					func_818(&(iLocal_2125[0]), &uLocal_391, 0f, 0f, 0f, 0, 1106247680, 50f, 1000, 4000, 1000, 1075838976, 0, 1, 1084227584);
					if (func_826(4f, 0, 3) || (func_217(Global_35, &(iLocal_75[3]), 1, 0) && func_816(&iLocal_2125)))
					{
						func_827(0, 1, 1);
						func_48(vLocal_557[2]);
						iLocal_584 = 16;
					}
					Jump @4521; //curOff = 3806
					func_812();
					func_818(&(iLocal_2125[0]), &uLocal_391, 0f, 0f, 0f, 0, 1106247680, 50f, 1000, 4000, 1000, 1075838976, 0, 1, 1084227584);
					if (func_424())
					{
						iLocal_584 = 12;
					}
					else
					{
						func_411();
						func_216(0);
						if (func_826(0f, 0, 1))
						{
							func_827(2, 1, 2);
							func_48(vLocal_557[2]);
							iLocal_584 = 17;
						}
						Jump @4521; //curOff = 3917
						func_812();
						if (func_424())
						{
							iLocal_584 = 12;
						}
						else
						{
							func_411();
							func_216(0);
							if (func_826(20f, 0, 1))
							{
								func_827(2, 2, 3);
								func_48(vLocal_557[2]);
								iLocal_584 = 18;
							}
							Jump @4521; //curOff = 3984
							if (func_424())
							{
								iLocal_584 = 12;
							}
							func_411();
							func_216(0);
							if (func_828(&iLocal_2125, 0))
							{
								func_218("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
								func_50(536870912);
								func_48(vLocal_557[3]);
								iLocal_584 = 19;
							}
							Jump @4521; //curOff = 4052
							if (func_226(vLocal_557[3], 2f))
							{
								func_10(Local_1614.f_136, 32);
								func_43(&Local_1614, 128);
								func_85();
								func_178();
								func_357(*iParam0, &iLocal_2011, -89429847, -981020806, 0, func_415());
								func_734("LOG_OBJ04", 1);
								func_216(1);
								func_341(33554432);
								func_739(0, 0, 1);
								func_405(0, 1, 1);
								iLocal_584 = 20;
							}
							Jump @4521; //curOff = 4164
							func_411();
							if (func_829(iParam0))
							{
								func_98(uLocal_2097[0]);
								if (func_19(16))
								{
									func_204(Local_1614.f_136);
									func_13(16, func_17(Local_1614.f_136));
								}
								iLocal_584 = 22;
							}
							Jump @4521; //curOff = 4228
							if (func_258(0, 1, 0, 0))
							{
								func_85();
								func_738(0, 0);
								func_405(0, 1, 0);
								func_739(0, 0, 1);
								_set_scenario_group_enabled_hash(874422897, true);
								iLocal_203 = 874422897;
								func_830(get_entity_coords(*iParam0, true, false), 40f, *iParam0);
								_0x74c2b3dc0b294102(&(iLocal_75[0]));
								_0xa1cfb35069d23c23(&(iLocal_75[0]));
								func_808(Local_479[1], "PBL_EXIT");
								func_746(iParam0);
								func_48(vLocal_557[3]);
								iLocal_584 = 21;
							}
							Jump @4521; //curOff = 4358
							if (func_831(Local_479[1]) && func_226(vLocal_557[3], 60f))
							{
								func_832(Local_479[1], 1, 1);
								iLocal_584 = 23;
							}
							Jump @4521; //curOff = 4411
							if (func_268(Local_1614.f_138, 0))
							{
								if (func_9(Local_1614.f_136, 256))
								{
									if (func_690(*iParam0, &(Local_479[1]), "FOREMAN", 0, 0, 1, 0))
									{
										func_77(Local_1614.f_138, 0);
										func_78(Local_213[0], 0);
									}
								}
								else if (func_747(Local_1614.f_138, &Local_1614, 7500, 0))
								{
									func_78(Local_213[0], 0);
								}
							}
						}
					}
				}
			}
			return 0;
			default:
				break;
	}
}

void func_428()
{
	if (func_51(8192))
	{
		iVar1 = iVar2266;
		iVar2 = iVar2266 + 4;
		if (iVar2 >= iVar2161)
		{
			iVar2 = (iVar2161 - 1);
		}
		iLocal_2268 = iVar1;
		while (iVar2266 <= iVar2)
		{
			if (!func_157(&(iLocal_2147[iVar2266])))
			{
			}
			else
			{
				iVar0 = func_63(&(iLocal_2147[iVar2266]));
				if (!is_entity_dead(iVar0))
				{
					func_246(&(iLocal_2147[iVar2266]), 0, 1, 0, 1, 1);
					func_247(iVar0, 1, 1);
					if (!func_131(iVar0, 518218985))
					{
						if (!func_19(32))
						{
							func_833(&iLocal_2268);
						}
						else
						{
							vVar3 = { func_834(&(iLocal_75[4]), 100, 1, 0) };
							open_sequence_task(&iLocal_196);
							if (!func_245(vVar3))
							{
								task_follow_nav_mesh_to_coord(0, vVar3, 2f, -1, get_random_float_in_range((30f / 2f), 30f), 0, 40000f);
							}
							func_825(0, &(uLocal_2077[0]), -1);
							task_stand_still(0, -1);
							close_sequence_task(iLocal_196);
							task_perform_sequence(iVar0, iLocal_196);
							clear_sequence_task(&iLocal_196);
						}
					}
					if (!func_19(32))
					{
						iLocal_2147[iVar2266] = -1;
					}
				}
			}
			iLocal_2268 = iVar2266 + 1;
		}
		if (iVar2266 >= (iVar2161 - 1))
		{
			func_50(8192);
			if (!func_19(32))
			{
				iLocal_2163 = 0;
			}
		}
	}
}

bool func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117(1024);
		case 1:
			return func_117(2048);
		case 2:
			return func_117(4096);
		case 3:
			return func_117(8192);
		case 4:
			return func_117(16384);
		default:
			break;
	}
	return false;
}

bool func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117(32768);
		case 1:
			return func_117(65536);
		case 2:
			return func_117(131072);
		case 3:
			return func_117(262144);
		case 4:
			return func_117(524288);
		default:
			break;
	}
	return false;
}

float func_431(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.592049f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.705277f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.592049f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.705277f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.705277f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.705277f;
				case 2:
					return 0.555339f;
				case 3:
					return 0.592049f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

float func_432(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.696462f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.792988f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.696462f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.792988f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.792988f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.792988f;
				case 2:
					return 0.674548f;
				case 3:
					return 0.696462f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

void func_433()
{
	iVar1 = create_itemset(false);
	if (is_itemset_valid(iVar1))
	{
		iVar2 = _0x886171a12f400b89(&(iLocal_75[3]), iVar1, 1);
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = get_indexed_item_in_itemset(iVar0, iVar1);
			if (_get_item_type(iVar3) == 9)
			{
				iVar4 = _0x3ffb15534067dcd4(iVar3);
				if ((func_19(32) && !func_22(&Local_1614, 2)) && iVar4 == &uLocal_2077[0])
				{
				}
				else
				{
					func_130(iVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	destroy_itemset(iVar1);
}

int func_434(int iParam0)
{
	fVar0 = func_521(func_436(iParam0), 1);
	if (fVar0 <= 15f)
	{
		return 255;
	}
	iVar1 = ceil(((-4.25f * (fVar0 - 15f)) + 255f));
	return iVar1;
}

void func_435(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < iVar2160)
	{
		if (!func_157(&(iLocal_2147[iVar1])))
		{
		}
		else
		{
			iVar0 = func_63(&(iLocal_2147[iVar1]));
			if (!is_entity_dead(iVar0))
			{
				func_246(&(iLocal_2147[iVar1]), 0, 1, 0, 1, 1);
				func_247(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

Vector3 func_436(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1387.583f, -272.6812f, 98.8f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1458.54f, -256.597f, 105.987f;
				case 1:
					return -1415.835f, -186.908f, 99.722f;
				case 2:
					return -1456.845f, -196.8082f, 104.6f;
				case 3:
					return -1468.877f, -228.5962f, 106.9087f;
				case 4:
					return -1419.583f, -199.3359f, 100.7483f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1387.583f, -272.6812f, 98.8f;
				case 1:
					return -1450.445f, -165.3257f, 106.4f;
				case 2:
					return -1472.47f, -253.4789f, 109.4271f;
				case 3:
					return -1424.774f, -283.7422f, 105.2652f;
				case 4:
					return -1424.774f, -283.7422f, 105.2652f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1402.2f, -292.7f, 102.7f;
				case 1:
					return -1514.524f, -243.7657f, 118.7613f;
				case 2:
					return -1453.848f, -127.2335f, 107.7073f;
				case 3:
					return -1502.6f, -203.7f, 111f;
				case 4:
					return -1402.2f, -292.7f, 102.7f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_437(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1402.82f, -270.8668f, 98.5505f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1446.31f, -249.5183f, 101.6165f;
				case 1:
					return -1421.7f, -190.4f, 99.7097f;
				case 2:
					return -1467.4f, -185.8f, 104.3577f;
				case 3:
					return -1454.5f, -226.7f, 102.8009f;
				case 4:
					return -1429.321f, -195.9762f, 100.5673f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1402.82f, -270.8668f, 98.5505f;
				case 1:
					return -1463.685f, -173.1668f, 106.0101f;
				case 2:
					return -1457.906f, -252.8943f, 104.7849f;
				case 3:
					return -1410.153f, -285.7408f, 100.6772f;
				case 4:
					return -1410.153f, -285.7408f, 100.6772f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.484f, -292.4594f, 101.7033f;
				case 1:
					return -1517.31f, -234.5498f, 115.9662f;
				case 2:
					return -1470f, -127f, 118f;
				case 3:
					return -1514.101f, -202.0088f, 110.2915f;
				case 4:
					return -1413.484f, -292.4594f, 101.7033f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_438(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_439(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (!func_217(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_140(Global_1898092->f_26.f_2) && func_9(Global_1898092->f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

bool func_440()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_441(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_835(func_611(iParam0));
}

bool func_442(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_443(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_444(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_445(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - Global_40.f_9096[iParam0]->f_3);
	*iParam2 = (iVar0 / 86400);
	iVar0 = (iVar0 - (*iParam2 * 86400));
	*iParam3 = (iVar0 / 3600);
	iVar0 = (iVar0 - *iParam3 * 3600);
	*uParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *uParam4 * 60);
	*uParam5 = iVar0;
}

bool func_448(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_449(int iParam0)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	return func_142(iParam0, 33554432);
}

bool func_450(int iParam0)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_451(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_452()
{
	return &Global_1899515;
}

int func_453(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_455(int iParam0, vector3 vParam1)
{
	if (func_836(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

void func_456(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0]->f_1 = func_452();
	if (_0x800df3fc913355f3(func_169(iParam0)))
	{
		_0x0b3a99ab6713aa52(func_169(iParam0));
	}
}

float func_457(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_458(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_837(vVar0, vVar3, 0f) };
	vVar9 = { func_838(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

int func_459()
{
	return -1820002752;
}

void func_460(var uParam0)
{
	func_487(uParam0, 4);
}

void func_461(var uParam0)
{
	func_487(uParam0, 64);
}

void func_462(var uParam0)
{
	func_487(uParam0, 8);
}

void func_463(var uParam0)
{
	func_487(uParam0, 128);
}

void func_464(var uParam0)
{
	func_487(uParam0, 1);
}

void func_465(int iParam0)
{
	func_469(&(Global_40.f_9096[Local_1614.f_136]->f_6), func_7(iParam0));
}

bool func_466(int iParam0)
{
	return func_400(Global_40.f_9096[Local_1614.f_136]->f_6, func_7(iParam0));
}

void func_467(int iParam0)
{
	vVar0 = { func_839(*iParam0) };
	fVar3 = func_840(*iParam0);
	uLocal_462[*iParam0] = create_scenario_point(func_695(), vVar0, fVar3, 0, 0, 0);
	_0xe69fda40aac3efc0(&(uLocal_462[*iParam0]), 0);
	_0xa7479fb665361edb(&(uLocal_462[*iParam0]), 0);
	_set_scenario_point_flag(&(uLocal_462[*iParam0]), 19, true);
	iLocal_197[*iParam0] = _create_volume_cylinder_with_custom_name(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	_0x18262cafebb5fbe1(&(iLocal_197[*iParam0]), 534496, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(&(iLocal_197[*iParam0]), 534496, 0, 0, -1, -1, 0);
	if (!func_210(uLocal_1912[*iParam0]))
	{
		uLocal_1912[*iParam0] = _0xfa50f79257745e74(vVar0, 3f, 1, 36, 0);
	}
}

int func_468(int iParam0)
{
	iVar0 = 0;
	if (!does_rayfire_map_object_exist(&(iLocal_450[iParam0])))
	{
		uLocal_456[iParam0] = _0x6f3068258a499e52(func_841(iParam0), func_437(iParam0), 9);
		iLocal_450[iParam0] = get_rayfire_map_object(func_437(iParam0), 5f, func_842(iParam0));
	}
	if (does_rayfire_map_object_exist(&(iLocal_450[iParam0])))
	{
		uLocal_456[iParam0] = &uLocal_456[iParam0];
		if (((!func_843(iParam0) && get_state_of_rayfire_map_object(&(iLocal_450[iParam0])) != 4) && !func_429(iParam0)) && !func_466(iParam0))
		{
			set_state_of_rayfire_map_object(&(iLocal_450[iParam0]), 4);
		}
		else if (func_19(64))
		{
			set_state_of_rayfire_map_object(&(iLocal_450[iParam0]), 4);
		}
		else if (func_466(iParam0))
		{
			set_state_of_rayfire_map_object(&(iLocal_450[iParam0]), 9);
			func_844(iParam0);
			func_706(iParam0);
		}
		if (func_843(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_470(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_145(iParam0, 268435456);
	}
	else
	{
		func_201(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_145(iParam0, 1073741824);
	}
	else
	{
		func_201(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_145(iParam0, 536870912);
	}
	else
	{
		func_201(iParam0, 536870912);
	}
}

void func_471(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_472(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_837(vVar0, vVar3, 0f) };
	vVar9 = { func_838(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_473(vector3 vParam0, int iParam3)
{
	if (func_245(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(uVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(uVar1) };
			if (func_796(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(uVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_474(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (_does_scenario_point_exist(&(uLocal_462[iParam0])))
	{
		_delete_scenario_point(&(uLocal_462[iParam0]));
		func_111(&(iLocal_197[iParam0]));
	}
	if (bParam1)
	{
		func_211(uLocal_1912[iParam0], 1);
	}
}

void func_475(int iParam0)
{
	if (_does_volume_exist((*Global_1392194)[iParam0->f_136]->f_6))
	{
		_0x6d5f9e69ba1be783((*Global_1392194)[iParam0->f_136]->f_6);
	}
	if (_does_volume_exist((*Global_1392194)[iParam0->f_136]->f_5))
	{
		_0x6d5f9e69ba1be783((*Global_1392194)[iParam0->f_136]->f_5);
	}
}

void func_476()
{
	_0x88544c0e3291dcae(1);
	func_845();
}

bool func_477(int iParam0)
{
	if (((func_478(iParam0, 1) && func_478(iParam0, 2)) && func_478(iParam0, 8)) && func_478(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_478(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_479()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_480(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_481(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

char* func_482(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (func_19(64))
			{
				return "PBL_ENTER";
			}
			else
			{
				return "";
			}
			break;
		case 3:
			if (iLocal_98 == 3)
			{
				return "PBL_MAIN";
			}
			else
			{
				return "PBL_MAIN";
			}
			break;
		case 0:
			if (func_19(64))
			{
				return "PB_L_ENTER";
			}
			else if (func_19(262144))
			{
				if ((iLocal_98 > 1 && func_9(1, 2)) && !func_9(Local_1614.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_335())
				{
					return "PBL_ENTER_LOOPS";
				}
				else
				{
					return "PBL_ENTER_LOOPS";
				}
			}
			else
			{
				switch (iLocal_98)
				{
					case 1:
						if (func_19(16))
						{
							if (func_335())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "pbl_LeadoutToDecision";
						}
						break;
					case 2:
						if (func_19(16))
						{
							if (func_335())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "PBL_FOREMAN_STAGE2_TALK_INTRO";
						}
						break;
					case 3:
						if (!func_5(Local_1614.f_136, 64))
						{
							return "PBL_FOREMAN_ORDERS_LOOPS";
						}
						else
						{
							return "PB_ENTER_N_OFFER";
						}
						break;
				}
			}
			break;
		case 1:
			switch (iLocal_98)
			{
				case 1:
					return "pbl_AgreeToSell";
				case 3:
					return "PBL_ENTER";
				default:
					break;
			}
			break;
		case 4:
			return "PBL_MAIN";
		case 5:
			switch (iLocal_98)
			{
				case 1:
					return "pl_Callover_Look_Greet";
				default:
					break;
			}
			return "";
		case 6:
			return "PBL_HOOKUP";
		case 7:
			return "PBL_LIFT";
		case 8:
			return "PBL_LIFT";
		case 9:
			return "PBL_MAIN";
		case 10:
			return "PBL_MAIN";
	}
	return "";
}

void func_483(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_846(uParam0, sParam1, sParam2, iParam3);
	func_847(uParam0);
}

void func_484()
{
	func_18(5, &Local_1614, 5);
	if (func_19(64))
	{
		iLocal_586 = 2;
	}
	else if (func_22(&Local_1614, 256))
	{
		iLocal_586 = 2;
	}
	else if (func_366())
	{
		iLocal_586 = 0;
	}
	else
	{
		iLocal_586 = 2;
	}
}

int func_485()
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iVar0)
	{
		case 0:
			return 622277464;
		case 1:
			return 861227228;
		default:
			break;
	}
	return 861227228;
}

Vector3 func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1330.243f, -215.0619f, 101.4806f;
		case 1:
			return -1331.525f, -215.6111f, 101.4806f;
		case 2:
			return -1332.405f, -216.0306f, 101.4806f;
		case 3:
			return -1333.802f, -208.2314f, 101.4832f;
		case 4:
			return -1334.693f, -208.649f, 101.4832f;
		case 5:
			return -1335.645f, -209.0838f, 101.4832f;
		case 6:
			return -1337.773f, -199.2836f, 101.4557f;
		case 7:
			return -1338.676f, -199.7524f, 101.4558f;
		case 8:
			return -1339.435f, -200.1282f, 101.4558f;
		case 9:
			return -1341.268f, -192.0703f, 101.4249f;
		case 10:
			return -1342.342f, -192.6443f, 101.425f;
		case 11:
			return -1343.02f, -192.9443f, 101.4249f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_487(var uParam0, int iParam1)
{
	func_469(uParam0, iParam1);
}

Vector3 func_488()
{
	return -1400.29f, -207.08f, 100.64f;
}

Vector3 func_489()
{
	return -1392.202f, -270.137f, 96.51328f;
}

Vector3 func_490(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case default:
			switch (iParam0)
			{
				case 0:
				case default:
					return -1375.342f, -317.4534f, 100.8851f;
				case 1:
					return -1378.65f, -317.2836f, 100.986f;
				case 2:
					return -1381.161f, -321.5669f, 101.6531f;
				case 3:
					return -1392.285f, -331.5669f, 104.1264f;
				case 4:
					return -1401.689f, -338.5281f, 104.3909f;
				case 5:
					return -1411.78f, -346.1456f, 105.0925f;
				case 6:
					return -1420.203f, -351.6165f, 106.4329f;
				case 7:
					return -1426.14f, -354.4086f, 107.5771f;
				case 8:
					return -1437.277f, -359.1299f, 110.5854f;
				case 9:
					return -1441.922f, -360.4134f, 111.6311f;
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case default:
							return -1374.965f, -314.8146f, 100.6431f;
						case 1:
							return -1376.802f, -320.7141f, 101.263f;
						case 2:
							return -1380.237f, -322.0409f, 101.6534f;
						case 3:
							return -1393.833f, -333.3949f, 104.4031f;
						case 4:
							return -1402.033f, -337.2408f, 104.2141f;
						case 5:
							return -1414.284f, -346.9185f, 105.2396f;
						case 6:
							return -1419.447f, -350.5371f, 106.1471f;
						case 7:
							return -1430.102f, -356.533f, 108.7939f;
						case 8:
							return -1436.11f, -357.8445f, 110.1643f;
						case 9:
							return -1441.878f, -360.5837f, 111.6306f;
							break;
					}
					return 0f, 0f, 0f;
				}

Vector3 func_491(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.283f, -204.5069f, 101.8864f;
				case 1:
					return -1437.858f, -232.6483f, 101.4767f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_492(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 179.55f;
				case 1:
					return 51.9f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_493(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.44f, -207.25f, 101.2044f;
				case 1:
					return -1440.13f, -230.94f, 101.25f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_494(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, 0f;
				case 1:
					return 0f, 0f, -128.1f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_495(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

char* func_496()
{
	if (func_335())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

Vector3 func_497()
{
	return -1442.024f, -359.4506f, 111.622f;
}

bool func_498(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_499(var uParam0)
{
	if (!func_254(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_254(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

int func_500(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_848(&uParam1))
	{
		return 1;
	}
	if (!func_520(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_501(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_502(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_849(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_503(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_504(var uParam0)
{
	return func_250(*uParam0, 4);
}

bool func_505(var uParam0)
{
	return func_250(*uParam0, 64);
}

bool func_506(var uParam0)
{
	return func_250(*uParam0, 8);
}

bool func_507(var uParam0)
{
	return func_250(*uParam0, 128);
}

bool func_508(var uParam0)
{
	return func_250(*uParam0, 2048);
}

void func_509(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_510(var uParam0)
{
	return func_250(*uParam0, 1024);
}

bool func_511(var uParam0)
{
	return func_250(*uParam0, 256);
}

void func_512(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_513(var uParam0)
{
	return func_250(*uParam0, 512);
}

bool func_514(var uParam0)
{
	return func_250(*uParam0, 4096);
}

void func_515(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_516(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if ((func_23(iParam0, 1) && !func_518(iParam0)) && func_530(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_243(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_518(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_519(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_520(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_850(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

float func_521(vector3 vParam0, int iParam3)
{
	return func_438(Global_35, vParam0, iParam3);
}

bool func_522(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_250(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_250(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_250(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_250(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_250(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_250(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_250(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_250(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_523(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_387(player_ped_id(), iParam0, 1) < (bParam1 * bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_524(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (does_entity_exist(iParam3))
	{
		if (is_entity_a_ped(iParam3))
		{
			iVar1 = get_ped_index_from_entity_index(iParam3);
			if (!_0x5102307ce88798eb(iVar1))
			{
				request_ped_visibility_tracking(iVar1);
			}
			if (is_gameplay_cam_rendering())
			{
				fVar2 = func_851(iParam10);
				if (fVar2 < 0f)
				{
					if (is_tracked_ped_visible(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (_0x164cecc59e70df86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_852(bParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_853(bParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_479();
		}
		else if ((func_479() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

bool func_525(int iParam0, bool bParam1)
{
	if (func_256(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_526(float fParam0)
{
	if (func_854(1))
	{
		return true;
	}
	if (func_668(&uLocal_0) && !func_226(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_527(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_loaded(*uParam0, true, false);
}

int func_528(var uParam0)
{
	return uParam0;
}

bool func_529(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_530(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_531(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_532(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_240(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_171(iParam0, 129);
	func_531(iParam0);
	_0xfc77c5b44d5ff7c0(func_169(iParam0));
	func_515(iParam0, 0);
	return 1;
}

bool func_533(int iParam0)
{
	switch (iParam0)
	{
		case -1098045850:
		case 392538360:
			return true;
		default:
			break;
	}
	return false;
}

bool func_534(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_855(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_856((386 + iVar28), 1);
			if (func_857(iParam0, &Var0, iVar5, 0))
			{
				if (func_858(iParam0, &Var6, iVar5))
				{
					Var29 = { func_859(iParam0, Var0, iVar5, 0) };
					func_860(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_861(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_862(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_863(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

void func_535(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_536(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1077541120;
		case 1:
			return -1514157174;
		case 2:
			return -1379967731;
		default:
			break;
	}
	return 0;
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076;
		case 1:
			return 1776245965;
		case 2:
			return -228594924;
		default:
			break;
	}
	return 0;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063;
		case 1:
			return 111316232;
		case 2:
			return -96966750;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1904459580;
		case 1:
			return -1989725258;
		case 2:
			return -487631996;
		default:
			break;
	}
	return 0;
}

int func_541()
{
	return 676312963;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_543()
{
	return -886879462;
}

char* func_544(int iParam0)
{
	if (!func_140(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

var func_545(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (is_string_null_or_empty(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = -1234289408;
	}
	if (iParam3 == -1)
	{
		iParam3 = 1531758713;
	}
	if (is_string_null_or_empty(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = 138119161;
	}
	if (!bParam14)
	{
		return func_864(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_865(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_546(int iParam0)
{
	return func_9(iParam0, 1);
}

void func_547(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_866(128))
	{
		return;
	}
	if (!func_867(iParam0))
	{
		return;
	}
	if (func_142(iParam0, 32))
	{
		return;
	}
	func_143(iParam0, 32);
	func_333(Global_1935630, 8192);
	func_869(func_868(-1532769513, -36357794), 1);
	switch (func_870(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_869(func_868(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_869(func_868(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_869(func_868(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_869(func_868(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_869(func_868(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_869(func_868(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_143(iParam0, 64);
	}
}

void func_548(int iParam0, int iParam1)
{
	iVar0 = func_871(iParam0);
	if (iVar0 != 0 && func_9(iParam0, 1))
	{
		vVar1 = { func_872(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_873(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_9(iParam0, 67108864))
		{
			_0xe057fea9a22eb3ee(iVar0);
		}
		_0x1392105da88bbffb(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_10(iParam0, 67108864);
	}
}

int func_549(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_8(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_550()
{
	return get_player_group(get_player_index());
}

bool func_551(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_552(int iParam0)
{
	return func_874(iParam0, 6);
}

int func_553(int iParam0)
{
	iVar0 = func_875(iParam0, 6);
	return iVar0;
}

bool func_554(int iParam0)
{
	return func_874(iParam0, 7);
}

int func_555(int iParam0)
{
	iVar0 = func_875(iParam0, 7);
	return iVar0;
}

bool func_556(int iParam0)
{
	return (func_874(iParam0, 4) || func_874(iParam0, 5));
}

int func_557(int iParam0)
{
	iVar0 = func_875(iParam0, 4);
	if (!does_entity_exist(iVar0))
	{
		iVar1 = func_875(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_558(var uParam0, int iParam1, bool bParam2)
{
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = get_random_int_in_range(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_559(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_876(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_362(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

int func_560(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_561(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_562(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_367(iParam0[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_563(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

char* func_564()
{
	return "LOG_HONOR_WAGON_STEAL";
}

void func_565(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_877(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_878(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_879(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_880(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_879(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_566(int iParam0, bool bParam1, int iParam2)
{
	func_881(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_882(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_145(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_883(1))
						{
							func_145(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_883(1) || *iParam0 & 8192 != 0))
				{
					func_201(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_884(iParam0))
			{
				iParam0->f_15 = func_585();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_585() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_885(iParam0);
}

bool func_567(int iParam0, int iParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_886(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_887(iParam0, iVar2) <= func_888(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_568(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_889(iParam2, 1, 1, 1, 0))
	{
		func_145(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_594(iParam1, 1);
	func_845();
}

bool func_569(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_392(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_890(iParam1);
			if (func_891(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_892(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_594(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_594(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_570(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_893(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_890(iParam2);
		if (func_891(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_892(iParam2)
				{
					func_594(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_571(int iParam0, int iParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_886(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_892(iParam1)
		{
			fVar3 = func_890(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_572(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_573(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_894(iParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_581(iParam2, iParam1))
			{
				func_594(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_574(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_895(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_581(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_594(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_575(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_896(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_897(iParam1, vVar0, vVar4))
					{
						func_594(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_897(iParam1, vVar0, vVar7))
					{
						func_594(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_576(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_886(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_898(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_899(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_900(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_901(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_902(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_577(int iParam0, int iParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_578(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_579(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_903(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_904(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_580(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_581(int iParam0, int iParam1)
{
	if (func_905(iParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_582(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_368(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_583()
{
}

bool func_584(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_906(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_585();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_438(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_585();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_585()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_586()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_585() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_888(iParam0);
	if (iParam0->f_12 > func_907(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_908(iParam1);
	iVar1 = func_909(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_588(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_910(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_589(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_911(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_912(iParam1, iParam0))
					{
						if (func_438(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_590(int iParam0, int iParam1)
{
	if (!func_913(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_591(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_592(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_593(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_585();
	}
	else if (func_585() - iParam1->f_4) > func_914(iParam1)
	{
		return func_310(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

void func_594(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 134217728);
	}
	else
	{
		func_201(iParam0, 134217728);
	}
}

bool func_595(var uParam0)
{
	if (!does_entity_exist(&(Global_1935630->f_34[0])))
	{
		return false;
	}
	if (is_entity_a_mission_entity(&(Global_1935630->f_34[0])) && does_entity_belong_to_this_script(&(Global_1935630->f_34[0]), true))
	{
		return true;
	}
	iVar0 = func_362(&(Global_1935630->f_34[0]), 0);
	if (func_157(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_162(&iVar1, &iVar2, 0);
		}
		else
		{
			func_163(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_596(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (!has_entity_been_damaged_by_entity(*iParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!_0x3ec28da1ffac9ddd(*iParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!func_522(*iParam0, 75))
	{
		return true;
	}
	iVar0 = func_360(Global_35, 0, 1, 0);
	if (func_354(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = func_360(Global_35, 1, 1, 0);
	if (func_354(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_597()
{
	if (func_19(32))
	{
		return true;
	}
	if (func_9(1, 2))
	{
		return true;
	}
	if (!func_19(262144))
	{
		return true;
	}
	if (func_19(4096))
	{
		return true;
	}
	if (func_268(Local_1614.f_138, 0))
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0, var uParam1)
{
	if (!is_ped_fleeing(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_599(int iParam0)
{
	if (((iParam0->f_16 == 3 || iParam0->f_16 == 1) || iParam0->f_16 == 6) || iParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_600(int iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 3:
			return 180f;
		case 5:
		case 6:
			return 120f;
		default:
			break;
	}
	return 90f;
}

bool func_601(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_719(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_915(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return false;
	}
	*iParam0 = &iVar0[iVar42];
	if (bParam6)
	{
		while (!is_ped_facing_ped(&(iVar0[iVar42]), Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = func_915(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return true;
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 2;
		case 9:
			return 2;
		case 7:
			return 2;
		case 0:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_603(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = func_916(iParam0, 4, iParam2);
	if (does_entity_exist(iVar0))
	{
		*iParam1 = get_entity_model(iVar0);
		return true;
	}
	iVar1 = func_916(iParam0, 5, iParam2);
	if (does_entity_exist(iVar1))
	{
		*iParam1 = get_entity_model(iVar1);
		return true;
	}
	return false;
}

int func_604(int iParam0)
{
	return iParam0;
}

void func_605(int iParam0)
{
	if (!func_917(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

bool func_606()
{
	return _does_volume_exist(Global_1914319->f_3[11]->f_25);
}

void func_607(int iParam0)
{
	if (func_157(Global_1914319->f_3[iParam0]->f_21) && func_518(Global_1914319->f_3[iParam0]->f_21))
	{
		func_269(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1914319->f_3[iParam0]->f_11 = { 0f, 0f, 0f };
	Global_1914319->f_3[iParam0]->f_21 = -1;
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_17 = 0;
	Global_1914319->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1914319->f_3[iParam0]->f_34))
	{
		remove_scenario_blocking_area(Global_1914319->f_3[iParam0]->f_34, false);
	}
	func_918(Global_1914319->f_3[iParam0]->f_10, 0);
	func_315(iParam0, 536870912);
	iVar1 = func_919(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_920(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
			Global_1914319->f_3[iParam0]->f_317[iVar0] = 0;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 = 0f;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	if (Global_1914319->f_3[iParam0]->f_440 != 0)
	{
		_0x2f901291ef177b02(Global_1914319->f_3[iParam0]->f_440, 0);
	}
	Global_1914319->f_3[iParam0]->f_23 = 0;
	func_921(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_922(iParam0, 0);
}

void func_608(int iParam0, bool bParam1)
{
	if (!func_923(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_924(iParam0, 1);
	}
	else
	{
		func_925(iParam0, 1);
	}
	func_927(func_926(iParam0), bParam1);
}

bool func_609(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_610(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_611(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_612(int iParam0)
{
	return iParam0 & 31;
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_615(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_616()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_617(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_618(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_619(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_928(iParam0);
	}
	else
	{
		func_929(iParam0, iParam1);
	}
	func_930();
}

bool func_620(int iParam0)
{
	iVar0 = func_931(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_621(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	switch (func_320(iParam0))
	{
		case 1:
			switch (func_441(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_441(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_622(int iParam0)
{
	iVar2 = func_932(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_933(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_935(func_934(iParam0), 6);
}

void func_623(int iParam0)
{
	iVar2 = func_932(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_933(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_936(func_934(iParam0), 6);
}

int func_624(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_625(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_937(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_626(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x6f1f0b17109309da(*uParam0, sParam1);
}

bool func_627(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_628(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_628(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_629(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_938(iParam0, 32);
	func_939();
}

void func_630(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_631(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_633(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_633(iParam0);
	}
}

int func_631(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

bool func_632(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_633(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

void func_634(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = Global_40.f_9096[iParam0]->f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = (*uParam1 + iVar0);
	}
}

void func_635(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 64);
	}
	else
	{
		func_201(iParam0, 64);
	}
}

void func_636(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 1048576);
	}
	else
	{
		func_201(iParam0, 1048576);
	}
}

bool func_637()
{
	return (Global_1894899 & 1 != 0 && func_940() != -1);
}

bool func_638(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_639(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_941(iParam0, &Var0);
}

float func_640(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f;
	}
	return _get_anim_scene_progress(*uParam0);
}

void func_641(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_get_anim_scene_origin(*uParam0, vParam1, vParam2, 2);
}

void func_642(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_942(uParam0, sParam1))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(*uParam0, sParam1, bParam2);
}

void func_643(var uParam0, char* sParam1)
{
	func_943(uParam0, sParam1, 1);
}

bool func_644(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x1f0e401031e20146(*uParam0, sParam1);
}

int func_645(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_944(iParam0, vVar0, iParam2);
}

char* func_646(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "PB_PRE_BRKOUT_BACK";
				case 0:
					return "PB_PRE_BRKOUT_N";
				case 3:
					return "PB_PRE_BRKOUT_L";
				case 2:
					return "PB_PRE_BRKOUT_R";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_BRKOUT_A_BACK";
				case 0:
					return "PB_SAW_BRKOUT_A_N";
				case 3:
					return "PB_SAW_BRKOUT_A_L";
				case 2:
					return "PB_SAW_BRKOUT_A_R";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_B_BRKOUT_BACK";
				case 0:
					return "PB_SAW_B_BRKOUT_N";
				case 3:
					return "PB_SAW_B_BRKOUT_L";
				case 2:
					return "PB_SAW_B_BRKOUT_R";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_647(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_163(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_945(iParam0, uVar0, iVar1, bParam2);
}

bool func_648(int iParam0, int iParam1)
{
	fVar0 = func_946(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (iParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_947(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_948())
					{
						if (is_ped_facing_ped(Global_35, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_649(int iParam0, int iParam1)
{
	if (func_949(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_650(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_651(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_652(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_59(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_653(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_654(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_655(int iParam0, int iParam1)
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
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
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
		default:
			break;
	}
	return 30;
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_950(iParam0, iParam6);
	func_951(iParam0, iParam5);
	func_952(iParam0, iParam4);
	func_953(iParam0, iParam3);
	func_954(iParam0, iParam2);
	func_955(iParam0, iParam1);
}

bool func_657(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_375(iParam1) || !func_375(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_658(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_659(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_956(&iVar0);
	if (func_378(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_957(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_378(iVar0, 134217728))
	{
		func_958(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_959(558))
				{
					func_960(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_660(int iParam0)
{
	if (func_961(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_661(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_312(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_962(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_963(iParam0->f_6, iParam0->f_5, 0);
			}
			func_778(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_964(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_662(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_965(iParam0, 13))
	{
		func_966(iParam0, 0);
	}
	else
	{
		func_967(iParam0, 0);
	}
	if (func_312(iParam0->f_6))
	{
		if (bParam2)
		{
			func_313(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_663(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_965(iParam0, 4))
		{
			func_313(&(iParam0->f_6), 1, 1);
			func_966(iParam0, 4);
		}
	}
	else if (func_965(iParam0, 4))
	{
		func_967(iParam0, 4);
		func_966(iParam0, 14);
	}
}

void func_664(int* iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_665(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_966((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

char* func_666(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_134(iParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (func_134(iParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (iParam0->f_16)
			{
				case 0:
					StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
					StringConCat(&cVar4, "_PART", 32);
					_int_to_string(1, "%d", &cVar0);
					StringConCat(&cVar4, &cVar0, 32);
					return func_673(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_667(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_134(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (func_134(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

bool func_668(float fParam0)
{
	return func_968(*fParam0, 1);
}

bool func_669(float fParam0)
{
	return func_968(*fParam0, 2);
}

float func_670(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_671(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_672(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_969(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

char* func_673(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

var func_674(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_675(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_970(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_676(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_971(iParam0);
		func_972(iParam1, uParam2);
	}
	func_247(*iParam0, 1, bParam4);
}

void func_677(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_678(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_679(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (&iLocal_588[iParam4] > 3 && &iLocal_588[iParam4] < 8)
	{
		if ((!is_entity_dead(*iParam2) && !get_is_task_active(*iParam2, 3)) || (!is_entity_dead(*iParam3) && !get_is_task_active(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!func_134(&Local_362, 1))
			{
				if (!is_entity_dead(*iParam2) && !get_is_task_active(*iParam2, 3))
				{
					Local_362 = func_63(func_337(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!is_entity_dead(*iParam2) && !get_is_task_active(*iParam3, 3))
				{
					Local_362 = *iParam3;
					iVar0 = 1;
				}
				if (func_973(func_63(func_337(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					func_303(&Local_362, &Local_1614, 2048, 55961, 0, 0);
				}
			}
			func_338(Local_479[(9 + iParam4)], *iParam2, "PED1");
			func_691(9, 0, *iParam0, 0 == iVar0);
			func_338(Local_479[(9 + iParam4)], *iParam3, "PED2");
			func_691(9, 1, *iParam0, 1 == iVar0);
			if (does_entity_exist((Local_611.f_690[(15 + *iParam1)])->f_8))
			{
				if (has_anim_event_fired((Local_611.f_690[(15 + *iParam1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_611.f_690[(15 + *iParam1)])->f_8, true);
				}
				else
				{
					func_338(Local_479[(9 + iParam4)], (Local_611.f_690[(15 + *iParam1)])->f_8, "SAW");
					freeze_entity_position((Local_611.f_690[(15 + *iParam1)])->f_8, false);
					activate_physics((Local_611.f_690[(15 + *iParam1)])->f_8);
				}
			}
			func_219(Local_479[(9 + iParam4)]);
			iLocal_588[iParam4] = 10;
		}
	}
}

void func_680(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (has_anim_event_fired(*iParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (has_anim_event_fired(*iParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (has_anim_event_fired(*iParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!func_942(Local_479[(9 + iParam0)], func_646(iVar1, iVar2)) && !func_974(Local_479[(9 + iParam0)], func_646(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					func_725(Local_479[(9 + iParam0)], func_646(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (func_942(Local_479[(9 + iParam0)], func_646(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				func_975(Local_479[(9 + iParam0)], func_646(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_681(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(*iParam0) || is_entity_dead(*iParam1))
	{
		return;
	}
	if (func_336(Local_479[(9 + iParam2)]))
	{
		func_976(iParam0, iParam1, iParam2);
		if (_0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			iVar0 = *iParam0;
			bVar1 = true;
			set_ped_config_flag(*iParam0, 330, true);
		}
		else if (_0x9337183fda2e9035(*iParam0, get_player_index()))
		{
			iVar0 = *iParam0;
		}
		else if (_0xa454d234e45bb6e5(*iParam1, get_player_index()))
		{
			iVar0 = *iParam1;
			bVar1 = true;
			set_ped_config_flag(*iParam1, 330, true);
		}
		else if (_0x9337183fda2e9035(*iParam1, get_player_index()))
		{
			iVar0 = *iParam1;
		}
		if (iVar357 == *iParam0 || iVar357 == *iParam1)
		{
			func_350(iParam2);
			iLocal_588[iParam2] = 8;
			return;
		}
		if (func_70(func_977(iParam2)))
		{
			if (!is_string_null_or_empty(&((Local_479[(9 + iParam2)])->f_1)) && func_831(Local_479[(9 + iParam2)]))
			{
				func_832(Local_479[(9 + iParam2)], 1, 1);
				StringCopy(&((Local_479[(9 + iParam2)])->f_1), "", 24);
			}
			if (!does_entity_exist(iVar0))
			{
				func_341(func_977(iParam2));
			}
		}
		else
		{
			if (does_entity_exist(iVar0))
			{
				func_71(func_977(iParam2));
			}
			if (func_70(func_977(iParam2)))
			{
				vVar2 = { func_978(iParam0, &(iLocal_473[iParam2]), bVar1) };
				if (!is_string_null_or_empty(&vVar2))
				{
					func_808(Local_479[(9 + iParam2)], &vVar2);
				}
			}
		}
	}
}

int func_682(int iParam0, int iParam1)
{
	iVar2 = func_602(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = func_337(iParam0, iVar0, iParam1);
		func_62(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

Vector3 func_683(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1420.942f, -208.586f, 101.032f;
				case 1:
					return -1438.671f, -232.235f, 100.8f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_684(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1.325f, 0.462f, 0.828f;
				case 1:
					return -3.665f, -3.93f, -126.538f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_685(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_origin(*uParam0, vParam1, vParam4, 2);
}

void func_686(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (bParam3 && is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_687(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_688(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	start_anim_scene(*uParam0);
}

bool func_689(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_438(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_690(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_979(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_691(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_337(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		func_77(iVar0, 1);
		func_980(1, &Local_611);
	}
}

void func_692()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_117(func_694(iVar0)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 4)
	{
		return;
	}
	iVar1 = (810 + iVar0);
	iVar2 = func_63(iVar1);
	if (func_981(&iVar2, iVar1))
	{
		func_77(iVar1, 1);
		func_474(func_693(iVar0), 0);
		func_696(func_694(iVar0));
	}
}

int func_693(int iParam0)
{
	if ((!func_19(64) && func_5(Local_1614.f_136, 536870912)) && iParam0 == func_6())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && func_19(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 32;
		case 2:
			return 64;
		case 3:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_695()
{
	return -1939316457;
}

void func_696(int iParam0)
{
	iLocal_102 = (iLocal_102 - (iLocal_102 && iParam0));
}

void func_697()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_693(iVar0);
		if (func_429(iVar1) && (!func_19(64) || iVar1 != 0))
		{
			func_982(iVar0);
		}
		iVar0++;
	}
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16777216;
		case 1:
			return 33554432;
		case 2:
			return 67108864;
		case 3:
			return 134217728;
		default:
			break;
	}
	return 0;
}

void func_699(int iParam0)
{
	iVar0 = (810 + iParam0);
	iVar1 = func_63(iVar0);
	iVar2 = func_693(iParam0);
	if (func_983(iVar2, &iVar1))
	{
		if (func_843(iVar2))
		{
			bVar3 = true;
		}
		else if (get_state_of_rayfire_map_object(&(iLocal_450[iVar2])) == 4)
		{
		}
		else
		{
			func_468(iVar2);
			return;
		}
	}
	if (!does_rayfire_map_object_exist(&(iLocal_450[iVar2])))
	{
		func_468(iVar2);
		return;
	}
	if (func_984(iParam0, bVar3))
	{
		set_state_of_rayfire_map_object(&(iLocal_450[iVar2]), 6);
		if (!func_429(iVar2))
		{
			func_844(iVar2);
		}
		if (!(func_19(64) && iVar2 == 0))
		{
			func_116(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_696(func_694(iParam0));
		}
		force_sonar_blips_this_frame();
		trigger_sonar_blip(348490638, func_437(iVar2));
		if (!((iLocal_98 == 1 && func_19(64)) && iParam0 == 0))
		{
			func_465(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_700(int iParam0)
{
	if (decor_exist_on(*iParam0, "interactNeg"))
	{
		iVar0 = decor_get_int(*iParam0, "interactNeg");
	}
	if (iVar0 > 0)
	{
		set_ped_config_flag(*iParam0, 330, true);
	}
}

void func_701(int iParam0)
{
	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!func_157(iVar0))
	{
		return;
	}
	iVar1 = func_63(iVar0);
	if (is_entity_dead(iVar1))
	{
		return;
	}
	iVar2 = func_693(iParam0);
	if (func_430(iVar2))
	{
		return;
	}
	if (func_429(iVar2))
	{
		return;
	}
	if (!_does_scenario_point_exist(&(uLocal_462[iVar2])))
	{
		return;
	}
	if (!func_131(iVar1, 1435919172))
	{
		_task_use_scenario_point(iVar1, &(uLocal_462[iVar2]), 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_702(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (!func_117(func_985(iParam1)))
	{
		if (_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			func_35(func_985(iParam1));
		}
	}
	else if (!(_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index())))
	{
		fVar0 = func_385(vLocal_557[0]);
		if ((60f - fVar0) < 15f)
		{
			if (fVar0 >= 60f)
			{
				fVar0 = (60f - 15f);
			}
			else
			{
				fVar0 = (fVar0 - 15f);
			}
			func_225(vLocal_557[0], fVar0);
		}
		func_696(func_985(iParam1));
	}
}

bool func_703(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!is_entity_dead(*iParam0) && !decor_exist_on(*iParam0, "bChopDown"))
	{
		if (_get_scenario_point_type_ped_is_using(*iParam0) != func_695())
		{
			return false;
		}
		if (!is_ped_active_in_scenario(*iParam0, 0))
		{
			return false;
		}
		bVar0 = func_19(524288);
		if (iParam3 == func_6() && func_5(Local_1614.f_136, 1073741824))
		{
			func_13(524288, bVar0);
			func_696(256);
			return true;
		}
		if (func_19(64) && !func_430(0))
		{
			return false;
		}
		if (func_117(func_985(iParam3)))
		{
			return false;
		}
		if (func_668(vLocal_557[0]))
		{
			fVar1 = func_385(vLocal_557[0]);
			if (func_117(256))
			{
				fVar2 = 90f;
			}
			else if (func_284(*iParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!func_986())
			{
				fVar2 = 15f;
			}
			else
			{
				fVar2 = 60f;
			}
			if (fVar1 < fVar2)
			{
				return false;
			}
		}
		if (func_19(32))
		{
			return false;
		}
		else if (func_19(64) && iParam3 == 0)
		{
			return false;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !func_51(4096)) && !func_19(262144))
		{
			return false;
		}
		if (func_5(Local_1614.f_136, 536870912) && iParam3 == func_6())
		{
			return false;
		}
		if (func_257(*iParam0, uParam1, iParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			func_13(524288, bVar0);
			func_696(256);
			return true;
		}
		func_13(524288, bVar0);
	}
	return false;
}

void func_704(int iParam0, int iParam1)
{
	if (func_256(*iParam0, 0, 1) && !decor_exist_on(*iParam0, "bChopDown"))
	{
		force_sonar_blips_this_frame();
		_trigger_sonar_blip_2(1515458263, *iParam0);
		if (!(func_19(64) && iParam1 == 0))
		{
			func_116(*iParam0, Global_35, func_987(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = func_693(iParam1);
		func_988(iParam1);
		iLocal_75[2] = _create_volume_box_with_custom_name(func_436(iVar0), func_989(iVar0), 5f, 30f, 5f, "volTreeFall");
		_0xb56d41a694e42e86(&(iLocal_75[2]), 534496, 0, 0, -1, -1, 2);
		func_990(iVar0);
		_0xb56d41a694e42e86(&(iLocal_75[2]), 0, 0, 0, -1, -1, 2);
		decor_set_bool(*iParam0, "bChopDown", true);
		set_ped_config_flag(*iParam0, 178, false);
		set_ped_config_flag(*iParam0, 389, true);
		vVar1 = { get_entity_coords(*iParam0, true, false) };
	}
}

void func_705()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_991(iVar1);
		iVar0++;
	}
}

void func_706(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(32768);
			return;
		case 1:
			func_35(65536);
			return;
		case 2:
			func_35(131072);
			return;
		case 3:
			func_35(262144);
			return;
		case 4:
			func_35(524288);
			return;
	}
}

void func_707()
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_430(iVar0))
		{
			bVar1 = false;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_35(512);
	}
}

void func_708(int iParam0, bool bParam1)
{
	func_992(iParam0, 0, bParam1);
	func_992(iParam0, 1, bParam1);
	func_992(iParam0, 2, bParam1);
}

bool func_709()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_710()
{
	return Global_1935689->f_1;
}

bool func_711()
{
	return &Global_1357517;
}

char* func_712()
{
	return "INSULT_RESPONSE";
}

char* func_713()
{
	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	_int_to_string(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_673(cVar4);
}

void func_714()
{
	if (is_entity_dead(Local_611.f_690[12]->f_8))
	{
		return;
	}
	if (!_0xb6cbd40f8ea69e8a(Local_611.f_690[13]->f_8))
	{
		return;
	}
	if (!func_70(8192))
	{
		if (has_anim_event_fired(Local_611.f_690[13]->f_8, 1656474583) && !has_anim_event_fired(Local_611.f_690[13]->f_8, -1064143891))
		{
			if (!is_entity_playing_anim(Local_611.f_690[12]->f_8, "pickup_steamd", "props_misc@appleseed_loader", 1))
			{
				play_entity_anim(Local_611.f_690[12]->f_8, "pickup_steamd", "props_misc@appleseed_loader", 8f, false, false, false, 0f, 1);
			}
			func_71(8192);
			set_anim_rate(Local_611.f_690[12]->f_8, 1f, 0, false);
		}
	}
	else if (!has_anim_event_fired(Local_611.f_690[13]->f_8, 1656474583) || has_anim_event_fired(Local_611.f_690[13]->f_8, -1064143891))
	{
		func_341(8192);
		set_anim_rate(Local_611.f_690[12]->f_8, 0f, 0, false);
	}
}

void func_715(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

bool func_716(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (!is_string_null_or_empty(sParam1))
	{
		return get_anim_scene_bool(*uParam0, sParam1);
	}
	return false;
}

void func_717(var uParam0, char* sParam1)
{
	func_943(uParam0, sParam1, 0);
}

void func_718(int iParam0, int iParam1)
{
	func_993(iParam0, 0);
	func_993(iParam1, 1);
}

int func_719(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_287(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_111(iVar0);
	return iVar1;
}

bool func_720(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *iParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23])))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (func_994(uParam0, iParam1[uParam0->f_25], iParam2))
				{
					if ((is_entity_on_screen(iParam1[uParam0->f_25]) && !is_entity_occluded(iParam1[uParam0->f_25])) && _0x7f9b9791d4cb71f6(Global_35, iParam1[uParam0->f_25], false, 0) == 1)
					{
						uParam0->f_31 = iParam1[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1215; //curOff = 254
						if (!is_entity_dead(uParam0->f_31) && func_973(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_995(&(uParam0->f_18));
							vVar1 = { get_entity_coords(uParam0->f_31, true, false) };
							if (!&uParam0->f_7[uParam0->f_24])
							{
								task_look_at_entity(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_378(uParam0->f_34, 8))
								{
									_0xe7fa07624574b79a(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									func_145(&(uParam0->f_34), 16);
								}
								else if (!func_378(uParam0->f_34, 4) && !_0x84d0bf2b21862059(uParam0->f_31))
								{
									if (!is_string_null_or_empty(*uParam0))
									{
										open_sequence_task(&iVar0);
										task_turn_ped_to_face_entity(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										task_achieve_heading(0, 90f, 0);
										task_play_anim(0, *uParam0, uParam0->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_31, iVar0);
										clear_sequence_task(&iVar0);
									}
									else if (!is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23])))
									{
										uParam0->f_30 = _get_scenario_point_ped_is_using(uParam0->f_31, false);
										open_sequence_task(&iVar0);
										if (func_438(uParam0->f_31, Global_36, 0) > 12f)
										{
											task_follow_to_offset_of_entity(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1);
										}
										task_turn_ped_to_face_entity(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										if (bParam3)
										{
											if (_does_scenario_point_exist(uParam0->f_30))
											{
												_task_use_scenario_point(0, uParam0->f_30, 0, 0, true, false, 0, false, -1f, false);
											}
											else
											{
												_task_use_nearest_scenario_to_coord(0, vVar1, 30f, 0, false, false, false, false);
											}
										}
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_31, iVar0);
										clear_sequence_task(&iVar0);
									}
									else
									{
										open_sequence_task(&iVar0);
										task_turn_ped_to_face_entity(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										if (bParam3)
										{
											_task_use_nearest_scenario_to_coord(0, vVar1, 30f, 0, false, false, false, false);
										}
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_31, iVar0);
										clear_sequence_task(&iVar0);
									}
								}
							}
							decor_set_bool(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							func_995(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*iParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1215; //curOff = 885
						if (func_378(uParam0->f_34, 1))
						{
							func_110(0);
						}
						func_737(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_996() && !is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23]))) && func_258(0, 1, uParam0->f_31, 1))
						{
							if (func_378(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_116(uParam0->f_31, Global_35, &(uParam0->f_2[uParam0->f_23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_48(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((func_378(uParam0->f_34, 16) && !is_entity_dead(uParam0->f_31)) && !is_any_speech_playing(uParam0->f_31))
						{
							_0x541e5b41dca45828(uParam0->f_31, 1, 0);
							func_201(&(uParam0->f_34), 16);
						}
						if (func_395(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_362(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_268(iVar4, 0))
							{
								func_269(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_721()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_997())
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_722()
{
	return -1402.82f, -270.8668f, 98.5585f;
}

void func_723()
{
	if (!func_51(8388608) && _does_volume_exist(&(iLocal_75[4])))
	{
		iVar0 = create_itemset(false);
		_0x20a4bf0e09bee146(iVar0);
		iVar1 = _0x886171a12f400b89(&(iLocal_75[4]), iVar0, 2);
		if (iVar1 > 0)
		{
			destroy_itemset(iVar0);
			return;
		}
		_0x20a4bf0e09bee146(iVar0);
		iVar1 = _0x886171a12f400b89(&(iLocal_75[4]), iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
			if (func_503(iVar3))
			{
				destroy_itemset(iVar0);
				return;
			}
			iVar2++;
		}
		func_58(8388608);
		func_174();
		destroy_itemset(iVar0);
	}
}

void func_724()
{
	if (does_entity_exist(Local_611.f_690[5]->f_8))
	{
		if (!_0x083d497d57b7400f(Local_611.f_690[5]->f_8))
		{
			if (!func_51(65536))
			{
				freeze_entity_position(Local_611.f_690[5]->f_8, true);
			}
		}
		else if (func_51(65536))
		{
			freeze_entity_position(Local_611.f_690[5]->f_8, false);
			activate_physics(Local_611.f_690[5]->f_8);
		}
	}
}

int func_725(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xdf7b5144e25cd3fe(*uParam0, sParam1);
}

char* func_726()
{
	return "desk_loop_book";
}

char* func_727()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

void func_728(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_270(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

Vector3 func_729()
{
	return -1397.791f, -214.2272f, 101.3653f;
}

bool func_730(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_378(uParam0->f_23, 4))
	{
		set_ped_reset_flag(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!is_entity_dead(uParam0->f_1))
			{
				func_48(&(uParam0->f_5));
				if (is_ped_a_player(uParam0->f_1))
				{
					set_player_control(get_player_index(), false, uParam0->f_3, false);
					if (func_378(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_378(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_378(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_384(uParam0->f_1))
					{
						func_998(uParam0->f_1);
						iVar0 = func_944(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						task_dismount_animal(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (is_ped_in_any_vehicle(uParam0->f_1, true))
					{
						iVar2 = get_vehicle_ped_is_in(uParam0->f_1, true);
						bring_vehicle_to_halt(iVar2, 5f, -1, false);
						iVar3 = func_944(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						task_leave_any_vehicle(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_145(&(uParam0->f_23), 2);
					}
				}
				if (func_245(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_999(uParam0, 1, iParam1);
			}
			else
			{
				func_999(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1000(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_1001(uParam0, iParam1))
				{
					func_1002();
				}
				func_999(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1001(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_378(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_378(uParam0->f_23, 512), 0, 0);
				}
				func_999(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1003(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_145(&(uParam0->f_23), 256);
				}
				if (func_378(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_145(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_368(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_1004(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_378(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_999(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1005(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (func_378(uParam0->f_23, 8192))
				{
					if (func_378(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					task_enter_anim_scene(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_245(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_378(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_245(uParam0->f_11))
					{
						if (func_378(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_59(!func_378(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_59(!func_378(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_378(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_59(!func_378(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_59(!func_378(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_378(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_1006(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_999(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_378(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_378(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_378(uParam0->f_23, 128) && func_226(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_378(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_245(uParam0->f_11) || !func_131(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_1007(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_378(uParam0->f_23, 8)) && (!func_378(uParam0->f_23, 64) || absf(func_1008(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_378(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_270(&(uParam0->f_5));
				func_999(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

Vector3 func_731()
{
	return -1406.475f, -213.2691f, 101.3333f;
}

Vector3 func_732(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_733(float fParam0)
{
	return !func_258(fParam0, 1, 0, 0);
}

void func_734(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_446, sParam0, 32);
	if (bParam1)
	{
		if (!is_string_null_or_empty(&cLocal_446))
		{
			func_1009(&cLocal_446, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_735(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	bVar0 = true;
	if (bParam1 && iLocal_98 == 1)
	{
		bVar0 = false;
	}
	if (bVar0 && func_217(*iParam0, &(iLocal_75[0]), 1, 0))
	{
		if (func_217(Global_35, &(iLocal_75[0]), 1, 0))
		{
			return true;
		}
	}
	else if (func_368(Global_35, *iParam0, 1, 1) < func_1010(bParam1, 18f, 12.5f) && (!bParam2 || is_ped_facing_ped(*iParam0, Global_35, 165f)))
	{
		return true;
	}
	return false;
}

int func_736(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!_0x50f124e6ef188b22(Global_35))
	{
		return 1;
	}
	fVar0 = func_1011();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_1012(0);
		}
		else
		{
			func_1012(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_1012(0);
	}
	else
	{
		func_1012(1);
	}
	return 0;
}

void func_737(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_487(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1013(&(Var0.f_5), 1);
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_738(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_58(-2147483648);
		func_54(134217728, bParam1);
	}
	else
	{
		func_50(-2147483648);
		func_54(134217728, bParam1);
	}
}

void func_739(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, func_660(7));
	(*Local_256[iParam0])[0]->f_14 = 0;
	func_967((*Local_256[iParam0])[0], 1);
	func_992(iParam0, 0, !func_51(1073741824));
	func_1014(iParam0, 1, func_660(10));
	func_992(iParam0, 1, bParam2);
	func_992(iParam0, 2, bParam1);
	func_1015(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
}

int func_740(float fParam0)
{
	if (!func_668(fParam0))
	{
		return round((fParam0->f_1 * 1000f));
	}
	if (func_669(fParam0))
	{
		return round((fParam0->f_2 * 1000f));
	}
	return (func_585() - round((fParam0->f_1 * 1000f)));
}

void func_741(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, "LOG_CTXTBUY");
	(*Local_256[0])[0]->f_14 = func_744();
	func_966((*Local_256[iParam0])[0], 1);
	func_962((*Local_256[iParam0])[0]->f_6, "LOG_CTXTBUY", (*Local_256[iParam0])[0]->f_14, 0);
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, func_660(1));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	func_58(268435456);
	func_341(536870912);
}

void func_742(int iParam0)
{
	if (!func_140(iParam0->f_136))
	{
		return;
	}
	func_42(iParam0->f_136, 128);
	func_10(iParam0->f_136, 65536);
	func_43(iParam0, 128);
	func_1016(30, 0, 1);
}

Vector3 func_743()
{
	return -1398.998f, -208.266f, 101.8822f;
}

int func_744()
{
	if (func_9(1, 2) && iLocal_98 > 1)
	{
		iVar0 = func_1017(1795814421);
	}
	else if (iLocal_98 == 1)
	{
		iVar0 = func_1017(1121724679);
	}
	return iVar0;
}

void func_745(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1018(iParam0);
	if (bParam3)
	{
		func_1019(iParam0, sParam1, iParam2);
	}
}

void func_746(int iParam0)
{
	uVar0[0] = Global_35;
	_0x34eddd59364ad74a(*iParam0, &uVar0);
}

bool func_747(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_668(&(uParam1->f_133)))
	{
		func_48(&(uParam1->f_133));
	}
	else if (func_740(&(uParam1->f_133)) > iParam2)
	{
		func_270(&(uParam1->f_133));
		if (func_268(iParam0, 0))
		{
			func_77(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

void func_748()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		vVar1 = { func_1020(iVar0) };
		func_1021(&vVar1, 0);
		iVar0++;
	}
}

int func_749()
{
	return -1426662425;
}

int func_750()
{
	return -1206299098;
}

int func_751()
{
	return -1597025878;
}

Vector3 func_752()
{
	return -1399.903f, -211.2283f, 102.3423f;
}

int func_753()
{
	return 752173188;
}

int func_754()
{
	return -538947018;
}

Vector3 func_755()
{
	return -1402.626f, -207.791f, 101.897f;
}

char* func_756()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

char* func_757()
{
	return "WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B";
}

char* func_758(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

Vector3 func_759(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_760()
{
	switch (iVar584)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
			return 1550315122;
		case 1:
			return -1006870375;
	}
	return 0;
}

char* func_761()
{
	switch (iVar584)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

bool func_762(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_1022(*iParam0, iParam1, fParam2, iParam3, sParam4, bParam5, 106) && (iParam6 == 0 || has_anim_event_fired(*iParam0, iParam6)))
	{
		return true;
	}
	return false;
}

char* func_763(bool bParam0)
{
	if (iVar583 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iVar583 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

bool func_764(int iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (func_51(-2147483648))
	{
		return false;
	}
	if (func_854(1))
	{
		return false;
	}
	if (!func_258(-3.5f, 1, *iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_765(int iParam0)
{
	switch (iVar583)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
		case 1:
			vVar1 = { func_789(Global_35, 2f) };
			iVar0 = func_944(*iParam0, vVar1, 1060437492);
			switch (iVar0)
			{
				case 0:
					return -1619253850;
				case 2:
					return 1888479052;
				case 3:
					return -925583064;
			}
			break;
	}
	return 0;
}

void func_766(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	func_487(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_767(int iParam0)
{
	if (func_51(65536))
	{
		if (!func_268(Local_1614.f_138, 0))
		{
			func_62(Local_1614.f_138, 1, 1);
		}
		if (!func_70(2097152))
		{
			func_71(2097152);
			_0xaab050da48b57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				func_71(1048576);
			}
		}
		if (func_668(vLocal_557[3]))
		{
			func_270(vLocal_557[3]);
		}
		if (func_258(-3.5f, 1, 0, 0) && !func_668(vLocal_557[5]))
		{
			func_48(vLocal_557[5]);
		}
		if (func_226(vLocal_557[5], 10f))
		{
			func_389(&(Local_1614.f_35), func_1023(), *iParam0, Global_35, 0, 0, 1, 1);
			clear_ped_tasks(*iParam0, 1, 0);
			switch (iLocal_103)
			{
				case 1:
					open_sequence_task(&iLocal_196);
					task_confront(0, Global_35, 2);
					task_turn_ped_to_face_entity(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_196);
					_task_perform_sequence_2(*iParam0, iLocal_196, 2f, 7.5f);
					clear_sequence_task(&iLocal_196);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = func_120(268435456, 1056964608, 1065353216);
					_give_weapon_to_ped_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					set_current_ped_weapon(*iParam0, iVar0, false, 0, false, false);
					open_sequence_task(&iLocal_196);
					task_swap_weapon(0, 1, 0, 0, 0);
					task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
					close_sequence_task(iLocal_196);
					task_perform_sequence(*iParam0, iLocal_196);
					clear_sequence_task(&iLocal_196);
					Local_104 = 0;
					break;
				case 3:
					func_71(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (func_668(vLocal_557[5]))
		{
			func_270(vLocal_557[5]);
		}
		if (func_70(2097152))
		{
			if (!func_668(vLocal_557[3]))
			{
				func_48(vLocal_557[3]);
			}
			if (func_226(vLocal_557[3], 15f))
			{
				if (iLocal_103 == 3)
				{
					clear_ped_tasks(*iParam0, 1, 0);
					_0x935cf6e42baf7f4d(*iParam0);
					func_77(Local_1614.f_138, 1);
					func_78(Local_213[0], 0);
				}
				func_341(2097152);
			}
		}
	}
	if (func_70(2097152))
	{
		if (!func_131(*iParam0, 242628503))
		{
			func_1024(&Local_104, 0);
		}
	}
}

void func_768(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, func_660(7));
	(*Local_256[iParam0])[0]->f_14 = 0;
	func_967((*Local_256[iParam0])[0], 1);
	func_992(iParam0, 0, 0);
	func_1014(iParam0, 1, func_660(10));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, bParam1);
	func_1015(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
}

void func_769()
{
}

bool func_770(int iParam0)
{
	return true;
}

int func_771()
{
	return 0;
}

int func_772(int iParam0)
{
	if (!func_70(4096))
	{
		func_1026(4096, _request_scenario_type(func_264(), 15, func_249(Local_1614.f_138), func_1025()));
	}
	return 1;
}

void func_773(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1014(iParam0, 0, func_660(7));
	(*Local_256[iParam0])[0]->f_14 = 0;
	func_967((*Local_256[iParam0])[0], 1);
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, func_660(10));
	func_992(iParam0, 1, 0);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	func_58(268435456);
}

bool func_774(int iParam0)
{
	return true;
}

void func_775()
{
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1499911466, false);
	disable_control_action(0, -209515122, false);
}

void func_776(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = func_1027(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_201(&(Global_1914319->f_3[iParam0]->f_8), iVar0);
}

bool func_777(int iParam0)
{
	if (func_926(iParam0) == 4 && func_1028(iParam0, -1162387149))
	{
		return true;
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar2 = create_itemset(false);
		find_all_attached_carriable_entities(Global_35, iVar2);
		if (is_itemset_valid(iVar2))
		{
			iVar3 = get_itemset_size(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar2));
				if (!does_entity_exist(iVar0))
				{
				}
				else
				{
					iVar1 = func_1029(iVar0);
					if (func_1030(iVar1, iParam0))
					{
						destroy_itemset(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			destroy_itemset(iVar2);
		}
	}
	return func_1028(iParam0, 1084182731);
}

void func_778(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_312(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (bParam1)
	{
		func_1031(iParam0, 4);
		func_1032(iVar0, 1);
		func_1033(iVar0, 1);
	}
	else
	{
		func_1034(iParam0, 4);
		func_1033(iVar0, 0);
	}
}

bool func_779(int iParam0)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	return func_1035(iParam0, 8388608);
}

void func_780(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_781(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0]->f_1 = 0;
}

void func_782(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = func_1027(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_145(&(Global_1914319->f_3[iParam0]->f_8), iVar0);
}

void func_783(var uParam0)
{
	set_ped_flee_attributes(*uParam0, 512, true);
	set_ped_combat_attributes(*uParam0, 17, false);
	set_ped_combat_attributes(*uParam0, 58, true);
	set_ped_combat_attributes(*uParam0, 46, true);
	set_ped_combat_attributes(*uParam0, 42, true);
	set_ped_combat_attributes(*uParam0, 50, true);
	set_ped_combat_movement(*uParam0, 2);
	set_animal_tuning_bool_param(*uParam0, 9, true);
	set_animal_tuning_bool_param(*uParam0, 51, true);
	set_animal_tuning_bool_param(*uParam0, 33, true);
	set_animal_tuning_bool_param(*uParam0, 29, false);
	set_animal_tuning_bool_param(*uParam0, 11, false);
	set_animal_tuning_bool_param(*uParam0, 17, false);
	set_animal_tuning_bool_param(*uParam0, 60, false);
	set_animal_tuning_bool_param(*uParam0, 31, true);
	set_animal_tuning_float_param(*uParam0, 112, 0f);
	set_ped_config_flag(*uParam0, 215, false);
}

Vector3 func_784()
{
	return -1444.57f, -360.9441f, 112.1895f;
}

void func_785()
{
	if (iVar593 > 1 && iVar593 < 6)
	{
		iVar0[iVar8] = func_63(func_337(3, 0, 0));
		iVar8++;
		iVar0[iVar8] = func_63(func_337(3, 1, 0));
		iVar8++;
		iVar0[iVar8] = func_63(func_337(3, 2, 0));
		iVar8++;
		iVar0[iVar8] = func_63(func_337(3, 3, 0));
		iVar8++;
	}
	if (iVar592 > 1 && !func_70(4194304))
	{
		iVar0[iVar8] = func_63(func_337(0, 0, 0));
		iVar8++;
		iVar0[iVar8] = func_63(func_337(0, 1, 0));
		iVar8++;
		iVar0[iVar8] = func_63(func_337(0, 2, 0));
		iVar8++;
	}
	func_1036(&iVar0, 0, (iVar8 - 1), 1, 1, 1, 1);
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (!is_entity_dead(&(iVar0[iVar8])))
		{
		}
		iVar8++;
	}
}

void func_786()
{
	if (iVar593 > 2 && iVar593 <= 5)
	{
		iVar1 = 0;
		while (iVar1 < func_602(3))
		{
			iVar0 = func_63(func_337(3, iVar1, 0));
			if (!is_entity_dead(iVar0) && !get_is_task_active(iVar0, 3))
			{
				if (!func_134(&Local_362, 1))
				{
					if (!is_entity_dead(iVar0) && !get_is_task_active(iVar0, 3))
					{
						Local_362 = iVar0;
					}
					if (func_973(iVar0, Global_35, 0, 5f, 0))
					{
						func_303(&Local_362, &Local_1614, 2048, 55961, 0, 0);
					}
				}
				bVar2 = true;
			}
			iVar1++;
		}
		if (bVar2)
		{
			func_219(Local_479[3]);
			iLocal_595 = 6;
		}
	}
}

void func_787(int iParam0, int iParam1)
{
	iVar1 = func_602(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_691(iParam0, iVar0, iParam1, 0);
		iVar0++;
	}
}

void func_788()
{
	if (iVar582 < 7)
	{
		if (func_217(Global_35, &(iLocal_75[2]), 1, 0))
		{
			func_1037(0);
			if (!func_70(512))
			{
				if (func_384(Global_35))
				{
					if (!func_70(1024))
					{
						func_71(1024);
						func_998(Global_35);
						task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_341(1024);
					func_1026(512, func_1038(Global_35, &uLocal_603, func_65(), &(iLocal_75[2]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
					if (does_entity_exist(iVar601))
					{
						set_ped_config_flag(iVar601, 136, true);
					}
				}
			}
		}
		else
		{
			func_108(0);
		}
	}
}

Vector3 func_789(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	if (is_entity_dead(iParam0))
	{
		return vVar0;
	}
	vVar6 = { get_entity_forward_vector(iParam0) };
	func_1039(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

char* func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return "PB_ENTER_N_OFFER";
		case 1:
			return "PB_ENTER_L_OFFER";
		case 2:
			return "PB_ENTER_R_OFFER";
			default:
				break;
	}
}

float func_791(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return -1f;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	if (absf((vVar0.x - vVar0.y)) > 0.01f)
	{
		return vVar0.x;
	}
	return vVar0.x;
}

void func_792()
{
	iLocal_75[2] = _create_volume_aggregate_with_custom_name("Appleseed - volWolfJob");
	iLocal_75[7] = _create_volume_box_with_custom_name(-1398.369f, -212.342f, 103.0057f, 0f, 0f, 18.00427f, 2.255326f, 3.819071f, 3.313949f, "Appleseed - volPorchStairs");
	_0x6e0d3c3f828da773(&(iLocal_75[2]), &(iLocal_75[7]));
	iLocal_75[8] = _create_volume_box_with_custom_name(-1400.936f, -212.4042f, 103.2606f, 0f, 0f, 18.49427f, 2.66775f, 2.36468f, 2.775306f, "Appleseed - volPorchLeft");
	_0x6e0d3c3f828da773(&(iLocal_75[2]), &(iLocal_75[8]));
	iLocal_75[9] = _create_volume_box_with_custom_name(-1396.622f, -210.9611f, 103.2606f, 0f, 0f, 18.49427f, 1.940092f, 2.36468f, 2.775306f, "Appleseed - volPorchRight");
	_0x6e0d3c3f828da773(&(iLocal_75[2]), &(iLocal_75[9]));
	_0xb56d41a694e42e86(&(iLocal_75[2]), 0, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(&(iLocal_75[2]), 0, 0, 0, -1, -1, 0);
	if (!_0x91a5f9cbebb9d936(uVar474))
	{
		uLocal_476 = _0x4c39c95ae5db1329(&(iLocal_75[2]), 0, 15);
	}
}

void func_793(int iParam0, bool bParam1)
{
	func_1040(&iParam0, !bParam1);
	set_blocking_of_non_temporary_events(iParam0, bParam1);
	stop_ped_speaking(iParam0, bParam1);
}

int func_794(char[4] cParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (iParam2 > 0)
	{
		iVar3 = 1;
	}
	if (_0xd89504d9d7d5057d(sParam1))
	{
		return 1;
	}
	else if (func_672(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_795()
{
	iVar0 = 1;
	if (func_268(func_337(0, 0, 0), 0))
	{
		iVar0 = 0;
		if (!func_70(2))
		{
			if (func_690(func_63(func_337(0, 0, 0)), &(Local_479[0]), "PED1", -1795669989, 0, 1, 0))
			{
				task_follow_nav_mesh_to_coord(func_63(func_337(0, 0, 0)), func_1041(0), 1f, -1, 0.25f, 0, 40000f);
				func_338(Local_479[0], func_63(func_337(0, 0, 0)), "PED1");
				if (_0x91a5f9cbebb9d936(uVar474))
				{
					remove_scenario_blocking_area(uVar474, false);
				}
				func_71(2);
				func_111(&(iLocal_75[4]));
				func_793(func_63(func_337(0, 0, 0)), 0);
				if (!_does_volume_exist(&(iLocal_75[4])))
				{
					iLocal_75[4] = _0x0eb78c2b156635b1(665633627, -1398.9f, -211.1529f, 102.8692f, 0f, 0f, 23.92187f, 3.586092f, 3.967105f, 1.636492f);
				}
			}
		}
		else if (func_131(func_63(func_337(0, 0, 0)), 713668775))
		{
			if (func_438(func_63(func_337(0, 0, 0)), func_1041(0), 1) < 10f)
			{
				func_691(0, 0, 0, 0);
			}
		}
		else
		{
			func_691(0, 0, 0, 0);
		}
	}
	if (func_268(func_337(0, 1, 0), 0))
	{
		iVar0 = 0;
		if (!func_70(4))
		{
			if (func_690(func_63(func_337(0, 1, 0)), &(Local_479[0]), "PED2", -1795669989, 0, 1, 0))
			{
				task_follow_nav_mesh_to_coord(func_63(func_337(0, 1, 0)), func_1041(1), 1f, -1, 0.25f, 0, 40000f);
				func_338(Local_479[0], func_63(func_337(0, 1, 0)), "PED2");
				if (_0x91a5f9cbebb9d936(uVar474))
				{
					remove_scenario_blocking_area(uVar474, false);
				}
				func_71(4);
				func_111(&(iLocal_75[4]));
				func_793(func_63(func_337(0, 1, 0)), 0);
				if (!_does_volume_exist(&(iLocal_75[4])))
				{
					iLocal_75[4] = _0x0eb78c2b156635b1(665633627, -1398.9f, -211.1529f, 102.8692f, 0f, 0f, 23.92187f, 3.586092f, 3.967105f, 1.636492f);
				}
			}
		}
		else if (func_131(func_63(func_337(0, 1, 0)), 713668775))
		{
			if (func_438(func_63(func_337(0, 1, 0)), func_1041(1), 1) < 10f)
			{
				func_691(0, 1, 0, 0);
			}
		}
		else
		{
			func_691(0, 1, 0, 0);
		}
	}
	if (func_268(func_337(0, 2, 0), 0))
	{
		iVar0 = 0;
		if (!func_70(8))
		{
			if (func_690(func_63(func_337(0, 2, 0)), &(Local_479[0]), "PED3", -1795669989, 0, 1, 0))
			{
				task_follow_nav_mesh_to_coord(func_63(func_337(0, 2, 0)), func_1041(2), 1f, -1, 0.25f, 0, 40000f);
				func_338(Local_479[0], func_63(func_337(0, 2, 0)), "PED3");
				if (_0x91a5f9cbebb9d936(uVar474))
				{
					remove_scenario_blocking_area(uVar474, false);
				}
				func_71(8);
				func_111(&(iLocal_75[4]));
				func_793(func_63(func_337(0, 2, 0)), 0);
				if (!_does_volume_exist(&(iLocal_75[4])))
				{
					iLocal_75[4] = _0x0eb78c2b156635b1(665633627, -1398.9f, -211.1529f, 102.8692f, 0f, 0f, 23.92187f, 3.586092f, 3.967105f, 1.636492f);
				}
			}
		}
		else if (func_131(func_63(func_337(0, 2, 0)), 713668775))
		{
			if (func_438(func_63(func_337(0, 1, 0)), func_1041(1), 1) < 10f)
			{
				func_691(0, 2, 0, 0);
			}
		}
		else
		{
			func_691(0, 2, 0, 0);
		}
	}
	return iVar0;
}

bool func_796(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_797()
{
	if (bVar2270)
	{
		return;
	}
	if (func_801())
	{
		return;
	}
	if (!func_100(iLocal_154))
	{
		iLocal_154 = func_802(11, 3, 3, -1454557023);
		if (func_100(iLocal_154))
		{
			func_803(iLocal_154, 1);
		}
	}
	if (func_100(iLocal_154))
	{
		if (!func_51(16777216))
		{
			if (func_997())
			{
				if (!is_string_null_or_empty(&cLocal_446))
				{
					func_1009(&cLocal_446, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				func_1042(iVar2009, 0);
				if (!func_101(iLocal_154))
				{
					func_804(iLocal_154, 1, 1);
				}
				func_58(16777216);
			}
		}
		else if (!func_997())
		{
			func_1042(iVar2009, 1);
			func_203();
			if (func_101(iLocal_154))
			{
				func_102(iLocal_154, 0, 2);
				func_803(iLocal_154, 1);
			}
			func_50(16777216);
		}
	}
}

void func_798(int iParam0)
{
	switch (iVar582)
	{
		case 0:
			func_1043(0);
			func_405(0, 1, 1);
			iLocal_585 = 4;
			break;
		case 4:
			if (func_735(iParam0, 0, 0))
			{
				if (is_ped_using_any_scenario(*iParam0))
				{
					_0xe7fa07624574b79a(*iParam0, Global_35, 1, 1, 9999f, 1, 0, 0, 0);
				}
				func_389(&(Local_1614.f_35), "LCMP_REASK", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_585 = 5;
			}
			break;
		case 5:
			if (func_258(-3.5f, 1, *iParam0, 0))
			{
				func_738(1, 0);
				func_1043(0);
				iLocal_585 = 7;
			}
			break;
		case 7:
			if (!func_735(iParam0, 0, 0))
			{
				iLocal_585 = 8;
			}
			switch (iVar358)
			{
				case 0:
					func_389(&(Local_1614.f_35), "LCMP_REASK_RESP", Global_35, *iParam0, 0, 0, 1, 1);
					func_405(0, 1, 1);
					iLocal_585 = 8;
					break;
				case 1:
					func_50(536870912);
					func_389(&(Local_1614.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
					func_58(64);
					func_10(Local_1614.f_136, 262144);
					func_15(Local_1614.f_136, 256);
					func_405(0, 1, 1);
					iLocal_585 = 8;
					break;
			}
			break;
		case 8:
			if (func_258(-3.5f, 1, Global_35, 0))
			{
				if (is_ped_using_any_scenario(*iParam0))
				{
					_0x541e5b41dca45828(*iParam0, 1, 0);
				}
				func_738(0, 0);
				func_405(0, 1, 0);
				func_805(0);
				iLocal_585 = 17;
			}
			break;
		case 17:
			break;
	}
}

void func_799(int iParam0)
{
	switch (iLocal_212)
	{
		case 0:
			if (func_1044(&(Local_1614.f_34), "INPUT_TAKE_GENERIC", 0f, 0f, 0f, 0, -473983589, 2.5f, 0, 0, 1, 0, 1, &(iLocal_75[4]), 0, 0, 1, 1, 1704213876, 0))
			{
				func_728(&Local_156);
				Local_156.f_1 = Global_35;
				Local_156.f_8 = { func_732(Local_479[2], "ARTHUR", 0) };
				Local_156.f_19 = func_1045(Local_479[2], "ARTHUR", 0);
				Local_156.f_17 = 0.15f;
				Local_156.f_18 = 0.2f;
				Local_156.f_14 = { func_743() };
				Local_156.f_25 = &Local_479[2];
				StringCopy(&(Local_156.f_30), "ARTHUR", 24);
				StringCopy(&(Local_156.f_26), func_482(2), 32);
				func_145(&(Local_156.f_23), 26640);
				func_43(&Local_1614, 65536);
				func_730(&Local_156, 106);
				func_71(16777216);
				func_304(&Local_362, 4);
				if (iVar590 == 3)
				{
					func_389(&(Local_1614.f_35), "LCMP_FP_FPART", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_212 = 1;
			}
			break;
		case 1:
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_730(&Local_156, 106))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_82(&Local_1614, 65536);
				func_686(Local_479[2], Global_35, "ARTHUR", 1);
				func_687(Local_479[2], Local_611.f_690[6]->f_8, "MONEY");
				func_688(Local_479[2]);
				iLocal_212 = 2;
			}
			break;
		case 2:
			if (has_anim_event_fired(Global_35, -1898385492))
			{
				func_98(uLocal_2097[0]);
				func_1046(668131102, 0, 1065353216, 1, 0, 0, 0, -1);
				iLocal_212 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_800()
{
	if (!func_70(128))
	{
		if (does_entity_exist(func_282()))
		{
			func_71(128);
			func_85();
			func_178();
		}
	}
	else if (!does_entity_exist(func_282()))
	{
		func_341(128);
		func_85();
		func_178();
	}
}

bool func_801()
{
	return (func_322(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_802(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_1047())
	{
		iVar2 = func_1047();
	}
	iVar5 = func_1048(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_611(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_611(iVar6) == 0)
			{
				return func_1049(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_611(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_611(iVar6) == 0)
			{
				return func_1049(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_1049(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_803(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_207(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_318(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_318(iParam0)))
		{
			_0xca41e86545413b5b(func_320(iParam0), func_441(iParam0), func_1050(iParam0), func_318(iParam0), Global_36);
		}
	}
	func_326(iParam0, 1);
	bParam1 = bParam1;
}

void func_804(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_317(iParam0))
	{
		return;
	}
	iVar0 = func_320(iParam0);
	if (bParam1)
	{
		if (func_318(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_318(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_1051(func_441(iParam0));
			}
			if (func_1() != 0)
			{
				_0xb2a38826e5886e83(func_318(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_318(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_1052(iParam0);
	if (!func_100(func_327(0)))
	{
		func_326(iParam0, 3);
		func_103(bParam2);
		if (func_1() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_328(1);
		}
		func_1053(iParam0, -1);
		if (bParam1 && !func_866(2))
		{
			func_1054(&Global_0, 1024);
		}
		if (func_1() == -1)
		{
			func_1055(&(Global_1347343->f_11), 536870912);
			func_1056(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_1057(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_1058(0);
			}
		}
		if (func_1() == -1)
		{
			iVar1 = func_323(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_325();
				switch (iVar1)
				{
					case 0:
						func_1059(0);
						break;
					case 1:
						func_1059(1);
						break;
					case 2:
						func_1059(2);
						break;
					case 3:
						func_1059(3);
						break;
					case 4:
						func_1059(4);
						break;
					case 5:
						func_1059(5);
						break;
					case 6:
						func_1059(5);
						break;
					case 7:
						func_1059(7);
						break;
					case 8:
						func_1059(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_441(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_1059(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_441(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_1059(11);
						break;
					default:
						iVar1 = func_325();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_1060(0);
									break;
								case 1:
									func_1060(1);
									break;
								case 2:
									func_1060(2);
									break;
								case 3:
									func_1060(3);
									break;
								case 4:
									func_1060(4);
									break;
								case 5:
									func_1060(5);
									break;
								case 6:
									func_1060(5);
									break;
								case 7:
									func_1060(7);
									break;
								case 8:
									func_1060(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_329(1);
	}
	else
	{
		func_1053(iParam0, -1);
		func_326(iParam0, 4);
	}
	func_330(iParam0, 0);
}

void func_805(int iParam0)
{
	func_58(536870912);
	func_1014(iParam0, 0, func_660(7));
	func_992(iParam0, 0, 0);
	func_1014(iParam0, 1, func_660(30));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	func_58(268435456);
	func_341(536870912);
}

bool func_806(int iParam0)
{
	switch (iVar589)
	{
		case 0:
			func_111(&(iLocal_75[4]));
			StringCopy(&(Local_479[0]->f_4), "bBreakInternalLoop", 24);
			func_794(&(Local_1614.f_35), "LCMP_IG_S3HELP", 0);
			func_794(&(Local_1614.f_35), "LCMP_IG_S3MAN", 0);
			if (!_does_volume_exist(&(iLocal_75[2])))
			{
				func_792();
				func_686(Local_479[0], *iParam0, "FOREMAN", 1);
				func_686(Local_479[0], Global_35, "Arthur", 1);
				func_688(Local_479[0]);
			}
			func_1061(0, 8f);
			func_405(0, 1, 0);
			func_738(1, 1);
			func_773(0);
			func_808(Local_479[0], func_790(iVar397));
			func_728(&Local_156);
			Local_156.f_1 = Global_35;
			Local_156.f_17 = 0.15f;
			Local_156.f_18 = 0.2f;
			StringCopy(&(Local_156.f_30), "Arthur", 24);
			Local_156.f_25 = &Local_479[0];
			func_145(&(Local_156.f_23), 24576);
			iLocal_592 = 1;
			break;
		case 1:
			if (iVar358 == 0 || func_217(Global_35, &(iLocal_75[2]), 1, 0))
			{
				func_736(1048576000, 1028443341, 0, 106);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				if ((!func_19(8388608) && iVar358 == 0) && func_217(Global_35, &(iLocal_75[2]), 1, 0))
				{
					func_116(Global_35, *iParam0, "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_14(8388608);
				}
				if (!func_51(128))
				{
					func_405(0, 0, 1);
					func_738(1, 0);
					if (func_217(Global_35, &(iLocal_75[8]), 1, 0))
					{
						iLocal_400 = 1;
					}
					else if (func_217(Global_35, &(iLocal_75[9]), 1, 0))
					{
						iLocal_400 = 2;
					}
					else
					{
						iLocal_400 = 0;
					}
					Local_156.f_8 = { func_1062(iVar397) };
					Local_156.f_19 = func_1063(iVar397);
					func_808(Local_479[0], func_790(iVar397));
					StringCopy(&(Local_156.f_26), func_790(iVar397), 32);
					func_58(128);
				}
				func_14(4096);
				func_14(2);
				set_ped_reset_flag(Global_35, 129, true);
				display_radar(false);
				func_43(&Local_1614, 65536);
				if (func_730(&Local_156, 129))
				{
					func_203();
					func_1061(0, -1082130432);
					func_738(0, 0);
					func_405(0, 1, 1);
					iLocal_592 = 4;
				}
			}
			break;
		case 4:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_51(128))
			{
				func_58(128);
			}
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			set_ped_reset_flag(Global_35, 129, true);
			if (func_831(Local_479[0]) || func_644(Local_479[0], func_790(iVar397)))
			{
				if (func_19(16))
				{
					func_1021("LCMP_IG_S3MAN", 0);
					cVar0 = "LCMP_IG_S3HELP";
				}
				else
				{
					func_1021("LCMP_IG_S3HELP", 0);
					cVar0 = "LCMP_IG_S3MAN";
				}
				func_389(&(Local_1614.f_35), cVar0, *iParam0, Global_35, 0, 0, 1, 1);
				if (!func_644(Local_479[0], func_790(iVar397)))
				{
					func_832(Local_479[0], 1, 1);
				}
				else
				{
					func_643(Local_479[0], &(Local_479[0]->f_4));
				}
				iLocal_592 = 5;
			}
			break;
		case 5:
			func_736(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_max_move_blend_ratio(*iParam0, 0f);
			if (func_690(*iParam0, &(Local_479[0]), "FOREMAN", 0, 0, 1, 0))
			{
				task_turn_ped_to_face_entity(Global_35, *iParam0, 0, -1082130432, -1082130432, -1082130432);
				func_341(67108864);
				func_476();
				display_radar(true);
				display_hud(true);
				set_player_control(get_player_index(), true, 0, false);
				func_82(&Local_1614, 65536);
				force_ped_motion_state(*iParam0, -1871534317, false, 0, false);
				func_219(Local_479[0]);
				iLocal_592 = 6;
			}
			break;
		case 6:
			func_736(1048576000, 1028443341, 0, 106);
			if (func_258(-3.5f, 1, *iParam0, 1))
			{
				func_128(4096);
				func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF", "ATTACKING_WORKERS_FM", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				func_389(&(Local_1614.f_35), "LCMP_IG_S3_AW", *iParam0, Global_35, 0, 0, 1, 1);
				func_108(1);
				iLocal_592 = 7;
			}
			break;
		case 7:
			func_736(1048576000, 1028443341, 0, 106);
			set_ped_reset_flag(Global_35, 129, true);
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 1);
			set_ped_max_move_blend_ratio(*iParam0, 0f);
			if (!get_is_task_active(*iParam0, 3))
			{
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				return true;
			}
			break;
	}
	return false;
}

void func_807(int iParam0)
{
	func_1014(iParam0, 0, func_660(0));
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, func_660(1));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	func_58(268435456);
	func_341(536870912);
}

int func_808(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_725(uParam0, &(uParam0->f_1));
}

int func_809(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!_0xde0ea444735c1368(iParam1))
	{
		_0x19c7567d2f2287d6(iParam1, 15);
	}
	if (_0xe9b168527b337bf0(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_810(int* iParam0, var uParam1, int iParam2)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	*iParam0 = _0xa6ef0c54a3443e70(iParam2, uParam1);
}

char* func_811()
{
	return "lcmp_WolfTrail";
}

void func_812()
{
	if (!func_70(262144) && func_217(Global_35, &(iLocal_75[6]), 1, 0))
	{
		func_218("SP_EVENT_AREA_APPLESEED_3_START", 0);
		func_71(262144);
	}
	if (func_19(536870912) && !is_entity_dead(&(iLocal_2125[0])))
	{
		set_ped_reset_flag(&(iLocal_2125[0]), 170, true);
	}
	if (!func_19(536870912) && get_is_waypoint_recording_loaded(func_811()))
	{
		_0xe5d3eb37abc1eb03(get_player_index());
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!is_entity_dead(&(iLocal_2125[iVar1])))
			{
				iVar0 = &iLocal_2125[iVar1];
			}
			else
			{
				iVar1++;
			}
		}
		if (!is_entity_dead(iVar0))
		{
			set_ped_reset_flag(iVar0, 170, true);
			_0x543dfe14be720027(get_player_index(), iVar0, 0);
			func_1064(iVar0, func_811(), 1, 1061360239, 1053609165, 0, 0, 1);
		}
		_0xa22712e8471aa08e(Local_611.f_690[0]->f_8, 1, 0);
		_0xa22712e8471aa08e(Local_611.f_690[1]->f_8, 1, 0);
		_0x543dfe14be720027(get_player_index(), Local_611.f_690[0]->f_8, 0);
		_0x543dfe14be720027(get_player_index(), Local_611.f_690[1]->f_8, 0);
		_0x6ecfc621a168424c(Local_611.f_690[0]->f_8, Local_611.f_690[0]->f_8, 0, 0);
		_0x6ecfc621a168424c(Local_611.f_690[1]->f_8, Local_611.f_690[1]->f_8, 0, 0);
		_0x870708a6e147a9ad(Local_611.f_690[0]->f_8, "", 15f, 15f, 0, 0, 0, 0, 0, -1);
		_0x870708a6e147a9ad(Local_611.f_690[1]->f_8, "", 15f, 15f, 0, 0, 0, 0, 0, -1);
		func_14(536870912);
	}
	if (((func_9(Local_1614.f_136, 2048) || does_blip_exist(iVar2009)) && !func_19(1073741824)) && (((func_9(Local_1614.f_136, 2048) || func_521(func_490(0, 2), 1) < 10f) || func_1065(&(uLocal_2077[2]), 45f)) || (func_1066(Global_35, func_811(), 4f, 0f, 0) && _0x45ab66d02b601fa7(get_player_index()))))
	{
		func_476();
		func_815(&uLocal_391);
		if (!func_9(Local_1614.f_136, 2048))
		{
			func_1067(func_490(0, 2), &uLocal_391, 0f, 0f, 0f, 1106247680, 1092616192, 2000, 4000, 1000, 1);
			func_734("LOG_OBJ02B", 1);
			func_98(&iLocal_2011);
		}
		func_71(33554432);
		func_218("SP_EVENT_AREA_APPLESEED_3_TRAIL", 0);
		func_14(1073741824);
	}
	if ((func_9(Local_1614.f_136, 2048) || func_19(1073741824)) && !func_70(16384))
	{
		if (func_1068(&uLocal_391))
		{
			if (!func_668(vLocal_557[4]))
			{
				func_48(vLocal_557[4]);
			}
			if (func_395(vLocal_557[4], 0.5f))
			{
				if (!func_51(2048))
				{
					func_815(&uLocal_391);
					func_58(2048);
				}
				iVar2 = 2;
			}
			else if (func_395(vLocal_557[4], 0.25f))
			{
				if (!func_51(1024))
				{
					func_815(&uLocal_391);
					func_58(1024);
				}
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		func_1067(func_490(iVar2, 2), &uLocal_391, 0f, 0f, 0f, 1106247680, 1092616192, 2000, 4000, 1000, 1);
		if (!does_blip_exist(iVar2009) && (func_9(Local_1614.f_136, 2048) || func_1065(&(uLocal_2077[2]), 45f)))
		{
			func_10(Local_1614.f_136, 2048);
			func_71(33554432);
			func_1069(func_497(), 20f, &iLocal_2011, -308585968);
			func_71(16384);
		}
	}
}

void func_813()
{
	if (!func_210(&uLocal_1911))
	{
		func_1070(&uLocal_1911, func_490(0, 2), 10f, 2, 30, 0);
	}
	func_1071(2, 0);
	func_1071(3, 1);
	if (iLocal_211 <= 10)
	{
		iLocal_211++;
	}
}

void func_814(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_877(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_815(var uParam0)
{
	func_270(uParam0);
	func_1072(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

bool func_816(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (does_entity_exist(iParam0[iVar0]))
		{
			if (has_entity_been_damaged_by_entity(iParam0[iVar0], Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_817()
{
	if (!func_19(67108864) && func_521(func_497(), 1) < 5f)
	{
		func_14(67108864);
	}
}

void func_818(int iParam0, float fParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_1073(&(fParam1->f_3), 1))
	{
		func_1074(fParam1);
		if (func_1075(iParam0, iParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_476();
		}
	}
	if (func_1076(get_entity_coords(iParam0, true, false), fParam1, iParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_1077(fParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

int func_819()
{
	if (func_19(67108864) && func_1078(&iLocal_2125, 20f))
	{
		return 1;
	}
	return 0;
}

int func_820(var uParam0)
{
	if (func_378(uParam0->f_3, 1) && !is_gameplay_hint_active())
	{
		return 1;
	}
	return 0;
}

bool func_821()
{
	fVar0 = func_284(&(uLocal_2077[2]), 1, 0);
	fVar1 = func_284(&(iLocal_2125[0]), 1, 0);
	if (fVar1 < fVar0 && fVar0 > 4f)
	{
		return true;
	}
	return false;
}

bool func_822(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

Vector3 func_823(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1466.726f, -369.6495f, 127.248f;
				case 1:
					return -1480.629f, -364.9494f, 128.4468f;
				case 2:
					return -1413.718f, -331.6883f, 110.3775f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1470.81f, -361.7202f, 122.9849f;
				case 1:
					return -1471.584f, -361.9453f, 123.5429f;
				case 2:
					return -1472.441f, -362.3824f, 124.1044f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1413.718f, -331.6883f, 110.3775f;
				case 1:
					return -1413.718f, -331.6883f, 110.3775f;
				case 2:
					return -1413.718f, -331.6883f, 110.3775f;
				default:
					break;
			}
			break;
	}
	return func_497();
}

float func_824(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

int func_825(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_826(float fParam0, int iParam1, int iParam2)
{
	if (!func_217(Global_35, &(iLocal_75[3]), 1, 0))
	{
		return false;
	}
	if (func_70(32))
	{
		return true;
	}
	if (func_226(vLocal_557[2], fParam0))
	{
		return true;
	}
	iVar0 = func_1079(&iLocal_2125, iParam1, iParam2, 0);
	if (iVar0 <= 1)
	{
		return true;
	}
	return false;
}

void func_827(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!is_entity_dead(&(iLocal_2125[iVar0])))
		{
			if (!is_entity_on_screen(&(iLocal_2125[iVar0])) || _0x083d497d57b7400f(&(iLocal_2125[iVar0])))
			{
				func_267(&(iLocal_2125[iVar0]), Local_611.f_369[iVar0]->f_6, Local_611.f_369[iVar0]->f_9, 2, 1073741824);
				freeze_entity_position(&(iLocal_2125[iVar0]), false);
			}
			func_783(iLocal_2125[iVar0]);
			open_sequence_task(&iLocal_196);
			task_combat_ped(0, Global_35, 1048576, 16);
			close_sequence_task(iLocal_196);
			task_perform_sequence(&(iLocal_2125[iVar0]), iLocal_196);
			clear_sequence_task(&iLocal_196);
			if (!does_blip_exist(&(uLocal_2136[iVar0])))
			{
				func_357(&(iLocal_2125[iVar0]), uLocal_2136[iVar0], 831283580, 580546400, 0, 0);
			}
			play_animal_vocalization(&(iLocal_2125[iVar0]), "HOWL_SHORT", false);
		}
		iVar0++;
	}
	_0xa881f5c77a560906(10f);
	_0x706b434fefad6a24(1f);
}

bool func_828(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return true;
}

bool func_829(int iParam0)
{
	switch (iVar590)
	{
		case 0:
			if (has_model_loaded(-1443906703))
			{
				if (!func_268(Local_1614.f_138, 0))
				{
					func_62(Local_1614.f_138, 1, 1);
				}
				func_686(Local_479[1], *iParam0, "FOREMAN", 1);
				func_687(Local_479[1], Local_611.f_690[4]->f_8, "BOOK");
				set_entity_no_collision_entity(*iParam0, Local_611.f_690[25]->f_8, false);
				func_739(0, 0, 1);
				func_405(0, 1, 1);
				func_687(Local_479[1], Local_611.f_690[25]->f_8, "CHAIR");
				func_687(Local_479[1], Local_611.f_690[3]->f_8, "PEN");
				func_687(Local_479[1], Local_611.f_690[6]->f_8, "MONEY");
				StringCopy(&(Local_479[1]->f_4), "bBreakInternalLoop", 24);
				func_725(Local_479[1], "PBL_COMBAT");
				func_688(Local_479[1]);
				iLocal_593 = 1;
			}
			break;
		case 1:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_217(Global_35, &(iLocal_75[0]), 1, 0))
			{
				func_736(1048576000, 1028443341, 0, 106);
				func_203();
				func_14(4096);
				func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
				func_643(Local_479[1], "bBreakInternalLoop");
				if (_is_ped_carrying(Global_35))
				{
					iVar0 = _get_first_entity_ped_is_carrying(Global_35);
					if (is_entity_a_ped(iVar0))
					{
						iVar1 = get_ped_index_from_entity_index(iVar0);
						if (func_288(iVar1, &iLocal_2125))
						{
							func_389(&(Local_1614.f_35), "LCMP_IG_FPGNB", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else if (iVar1 == &uLocal_2077[2] || iVar1 == &uLocal_2077[3])
						{
							func_389(&(Local_1614.f_35), "LCMP_IG_FPGNC", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_389(&(Local_1614.f_35), "LCMP_IG_FPGN", *iParam0, Global_35, 0, 0, 1, 1);
						}
					}
					else
					{
						iVar2 = func_1080(iVar0);
						if ((iVar2 == 1145777975 || iVar2 == 85441452) || iVar2 == 653400939)
						{
							func_389(&(Local_1614.f_35), "LCMP_IG_FPGND", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_389(&(Local_1614.f_35), "LCMP_IG_FPGN", *iParam0, Global_35, 0, 0, 1, 1);
						}
					}
				}
				else
				{
					func_389(&(Local_1614.f_35), "LCMP_IG_FPGN", *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_48(vLocal_557[3]);
				iLocal_593 = 2;
			}
			break;
		case 2:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (has_anim_event_fired(*iParam0, -885630237))
			{
				func_389(&(Local_1614.f_35), "LCMP_IG_FPMT", *iParam0, Global_35, 0, 0, 1, 1);
				func_794(&(Local_1614.f_35), "LCMP_FP_FPART", 0);
				func_98(uLocal_2097[0]);
				func_357(Local_611.f_690[6]->f_8, uLocal_2097[0], 2098831270, 580546400, 0, "LOG_BLIP_MONEY");
				iLocal_75[4] = _create_volume_box_with_custom_name(-1399.851f, -208.337f, 103.0584f, 0f, 0f, 20.63401f, 2.916667f, 1.934417f, 2.383611f, "EA Appleseed - volMoney");
				func_50(536870912);
				func_405(0, 1, 1);
				func_739(0, 0, 1);
				iLocal_593 = 3;
			}
			break;
		case 3:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_716(Local_479[1], "bBreakInternalLoop"))
			{
				func_717(Local_479[1], "bBreakInternalLoop");
				func_725(Local_479[1], "PBL_IMPATIENT");
			}
			if (func_668(vLocal_557[3]) && func_740(vLocal_557[3]) > 30000)
			{
				iLocal_593 = 5;
			}
			if (!func_391("LCMP_IG_FPMT"))
			{
				func_71(8388608);
			}
			if (func_70(16777216))
			{
				func_808(Local_479[1], "PBL_YELL");
				func_10(Local_1614.f_136, 8);
				func_43(&Local_1614, 128);
				func_42(Local_1614.f_136, 8);
				func_742(&Local_1614);
				func_206(Local_1614.f_136, 1);
				func_1081(iLocal_154, 1, 1, 0, 1);
				func_1082(60, 1);
				iLocal_593 = 6;
			}
			if (!func_391("LCMP_IG_FPMT") && !func_217(Global_35, &(iLocal_75[0]), 1, 0))
			{
				func_808(Local_479[1], "PBL_YELL");
				func_10(Local_1614.f_136, 8);
				func_43(&Local_1614, 128);
				func_42(Local_1614.f_136, 8);
				func_742(&Local_1614);
				func_206(Local_1614.f_136, 1);
				func_1081(iLocal_154, 1, 1, 0, 1);
				func_1082(60, 1);
				iLocal_593 = 6;
			}
			break;
		case 5:
			func_736(1048576000, 1028443341, 0, 106);
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			func_642(Local_479[1], "PBL_IMPATIENT", 1);
			func_643(Local_479[1], "bBreakInternalLoop");
			func_389(&(Local_1614.f_35), "LCMP_IG_FPDW", *iParam0, Global_35, 0, 0, 1, 1);
			func_270(vLocal_557[3]);
			iLocal_593 = 3;
			break;
		case 6:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			func_737(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (!func_217(Global_35, &(iLocal_75[0]), 1, 0))
			{
				if (func_9(1, 2) && func_258(-3.5f, 1, Global_35, 1))
				{
					func_389(&(Local_1614.f_35), "LCMP_FP_LATER", *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_128(4096);
				iLocal_593 = 7;
			}
			break;
		case 7:
			if (!func_268(Local_1614.f_138, 0))
			{
				func_62(Local_1614.f_138, 1, 1);
			}
			if (func_831(Local_479[1]))
			{
				func_832(Local_479[1], 1, 1);
				if (func_166(64))
				{
					func_794(&(Local_1614.f_35), "LCMP_IG_FPACT2", 0);
				}
				else
				{
					func_794(&(Local_1614.f_35), "LCMP_IG_FPACT2A", 0);
				}
				iLocal_593 = 8;
			}
			break;
		case 8:
			if (func_716(Local_479[1], "bBreakInternalLoop"))
			{
				func_717(Local_479[1], "bBreakInternalLoop");
			}
			if (func_796(get_entity_coords(*iParam0, true, false), -1398.91f, -210.66f, 101.88f, 5f, 0))
			{
				if (func_166(64))
				{
					func_389(&(Local_1614.f_35), "LCMP_IG_FPACT2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_389(&(Local_1614.f_35), "LCMP_IG_FPACT2A", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_593 = 9;
			}
			break;
		case 9:
			if (has_anim_event_fired(*iParam0, 752883333))
			{
				func_388(2001176446, *iParam0, 1);
			}
			if (func_258(0, 1, 0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_830(vector3 vParam0, float fParam3, int iParam4)
{
	func_163(11, &iVar0, &iVar1, 0, 0);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if ((func_157(iVar2) && func_243(iVar2, 0)) && iVar2 != 807)
		{
			iVar3 = func_63(iVar2);
			if ((!is_entity_dead(iVar3) && iVar3 != iParam4) && func_438(iVar3, vParam0, 1) < fParam3)
			{
				_0x187d65f3aec5d679(func_240(iVar2), "EventAreas/Appleseed/LCMP_Workers");
			}
		}
		iVar2++;
	}
	func_14(8);
}

bool func_831(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(&(uParam0->f_1)))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_832(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (func_942(uParam0, &(uParam0->f_1)))
	{
		func_642(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_643(uParam0, &(uParam0->f_4));
		}
	}
}

void func_833(int iParam0)
{
	if (!is_entity_dead(func_63(&(iLocal_2147[*iParam0]))))
	{
		iVar0 = func_63(&(iLocal_2147[*iParam0]));
	}
	else
	{
		return;
	}
	_0x935cf6e42baf7f4d(iVar0);
	func_1083(&iVar0, 0);
	if (is_ped_using_any_scenario(iVar0))
	{
		_0x541e5b41dca45828(iVar0, 1, 0);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
		if (func_1084(&(iLocal_2147[*iParam0])))
		{
			func_991(&(iLocal_2147[*iParam0]));
		}
		else
		{
			func_269(&(iLocal_2147[*iParam0]), 0, 1, 0, 0);
			set_ped_config_flag(iVar0, 178, true);
			set_ped_config_flag(iVar0, 130, false);
		}
	}
	func_247(iVar0, 1, 1);
}

Vector3 func_834(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	fVar6 = (func_457(vVar3.x, func_457(vVar3.y, vVar3.z)) / 2f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { func_1085(vVar0, fVar6) };
		}
		else
		{
			vVar8 = { func_1086(vVar0, fVar6, iParam3) };
		}
		if (_0xf256a75210c5c0eb(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

int func_835(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_836(int iParam0)
{
	if (func_168(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

Vector3 func_837(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_838(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

Vector3 func_839(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1447.046f, -248.2112f, 101.8532f;
				case 1:
					return -1421.375f, -191.8643f, 100.0484f;
				case 2:
					return -1468.509f, -186.8103f, 104.7422f;
				case 3:
					return -1454.64f, -225.2065f, 103.411f;
				case 4:
					return -1428.337f, -197.121f, 100.9558f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -1462.903f, -174.4467f, 105.4205f;
				case 2:
					return -1457.676f, -251.4121f, 104.5611f;
				case 3:
					return -1409.899f, -284.2626f, 100.9278f;
				case 4:
					return -1409.899f, -284.2626f, 100.9278f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.63f, -293.9522f, 102.1136f;
				case 1:
					return -1518.762f, -234.9279f, 116.6115f;
				case 2:
					return -1468.601f, -126.4598f, 117.0678f;
				case 3:
					return -1514.415f, -203.4755f, 110.9043f;
				case 4:
					return -1413.63f, -293.9522f, 102.1136f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_840(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 203.3771f;
				case 1:
					return 6.516163f;
				case 2:
					return 306.3405f;
				case 3:
					return 179.3372f;
				case 4:
					return 33.71f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 25.43246f;
				case 2:
					return 165.157f;
				case 3:
					return 164.2261f;
				case 4:
					return 164.2261f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 348.4004f;
				case 1:
					return 278.6f;
				case 2:
					return 105.1105f;
				case 3:
					return 341.899f;
				case 4:
					return 348.4004f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_841(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		iVar0 = -926795318;
		return iVar0;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar0 = -408717222;
					break;
				case 1:
					iVar0 = -1839091952;
					break;
				case 2:
					iVar0 = -1839091952;
					break;
				case 3:
					iVar0 = -408717222;
					break;
				case 4:
					iVar0 = -1839091952;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar0 = -926795318;
					break;
				case 1:
					iVar0 = -1839091952;
					break;
				case 2:
					iVar0 = -408717222;
					break;
				case 3:
					iVar0 = -408717222;
					break;
				case 4:
					iVar0 = -408717222;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar0 = -1839091952;
					break;
				case 1:
					iVar0 = -408717222;
					break;
				case 2:
					iVar0 = -679945893;
					break;
				case 3:
					iVar0 = -1839091952;
					break;
				case 4:
					iVar0 = -1839091952;
					break;
			}
			break;
	}
	return iVar0;
}

char* func_842(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return "DES_treefall_accident";
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_up15";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_flat";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_accident";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_up15";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_up15";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_flat";
				case 1:
					return "DES_treefall_up15";
				case 2:
					return "DES_treefall_down15";
				case 3:
					return "DES_treefall_flat";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_843(int iParam0)
{
	if (!does_rayfire_map_object_exist(&(iLocal_450[iParam0])))
	{
		return false;
	}
	return get_state_of_rayfire_map_object(&(iLocal_450[iParam0])) == 5;
}

void func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(1024);
			return;
		case 1:
			func_35(2048);
			return;
		case 2:
			func_35(4096);
			return;
		case 3:
			func_35(8192);
			return;
		case 4:
			func_35(16384);
			return;
	}
}

void func_845()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_846(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = _create_anim_scene(sParam1, iParam3, sParam2, false, true);
}

void func_847(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	load_anim_scene(*uParam0);
}

bool func_848(var uParam0)
{
	return func_250(*uParam0, 1);
}

void func_849(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1087(iParam1))
		{
			func_1088(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_1089(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1090(iParam0, 0);
			bVar0 = true;
		}
		func_1091(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_850(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_851(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_852(bool bParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1092(iParam1) };
	vVar3 = { func_1092(iParam2) };
	return func_1093(bParam0, vVar0, vVar3, iParam2);
}

int func_853(bool bParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1092(iParam1) };
	return func_1093(bParam0, vVar0, vParam2, 0);
}

bool func_854(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

struct<5> func_855(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1094(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1095(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_859(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1096(bParam1) };
			if (bParam2 && func_1097(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_857(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_857(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_858(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1098(bParam1) };
			switch (func_933(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_1099(iParam0, -1823706425))
			{
				Var0 = { func_859(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1099(iParam0, -1483207246))
			{
				Var0 = { func_859(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1100(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_856(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_857(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1101(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_858(int iParam0, var uParam1, int iParam2)
{
	if (func_1102(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_859(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_1103(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_932(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_860(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1104(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1100(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_861(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_932(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_861(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_932(bParam0));
}

bool func_862(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1105(iParam0))
	{
		return false;
	}
	if (!func_861(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_863(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_309(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

var func_864(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_865(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _0x18d6869fbffec0f8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_866(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_867(int iParam0)
{
	if (func_1106(iParam0))
	{
		if (!func_1107(45))
		{
			return false;
		}
	}
	iVar0 = func_870(iParam0);
	if (func_1108())
	{
		if (!func_208((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> func_868(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_869(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_870(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1439010767;
		case 1:
			return -888900898;
		case 2:
			return 1252459247;
		default:
			break;
	}
	return 0;
}

Vector3 func_872(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_873(int iParam0, int iParam1)
{
	func_1109(iParam0);
	iVar0 = func_1110(iParam0, iParam1);
	if (iVar0 != 0 && !_map_is_discovery_active(iVar0))
	{
		_0xd8c7162ab2e2af45(iVar0);
	}
}

int func_874(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_875(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_876(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_550(), 1))
	{
		return true;
	}
	return false;
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_879(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1111();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1112(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_1107(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1113())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_1114(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1111();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1115(iVar1);
		func_1117(func_1116(), 0, 4000);
		func_1118(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1119(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_869(func_1120(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_878(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_1121(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1122(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1122(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_869(func_1120(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_878(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_1121(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1122(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1122(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1120(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1123(10, 1);
	}
}

void func_880(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_881(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1124();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_1125(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_882(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_883(bool bParam0)
{
	if (func_1126(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_884(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1127(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1127(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_909(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_885(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1128(iParam0);
	}
}

bool func_886(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_909(iParam2);
	}
	else
	{
		iVar1 = func_908(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_909(iParam0);
	}
	else
	{
		iVar0 = func_908(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_378(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_887(int iParam0, int iParam1)
{
	return func_368(iParam0, iParam1, 1, 1);
}

float func_888(int iParam0)
{
	return iParam0->f_26;
}

bool func_889(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

float func_890(int iParam0)
{
	return iParam0->f_17;
}

bool func_891(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_378(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_892(int iParam0)
{
	return iParam0->f_18;
}

bool func_893(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_674(iVar0, 0)))
		{
			if (func_970(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_894(int iParam0)
{
	return iParam0->f_23;
}

int func_895(int iParam0)
{
	return iParam0->f_21;
}

int func_896(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_897(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1129(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_898(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_1130(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_899(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_900(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_949(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_901(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_949(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_902(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_949(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_903(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_904(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1131(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_905(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_906(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_438(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_907(int iParam0)
{
	return iParam0->f_24;
}

int func_908(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_909(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_910(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_903(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_368(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_368(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_911(int iParam0, int iParam1, bool bParam2)
{
	func_1126(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_912(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_912(iParam1, iVar1))
				{
					if (func_438(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_912(int iParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

bool func_913(int iParam0)
{
	if (func_1113())
	{
		return false;
	}
	return func_208((*Global_1347702)[58]->f_15, 1);
}

int func_914(int iParam0)
{
	return iParam0->f_20;
}

int func_915(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != iParam0[iVar0] && (!bParam5 || (!is_entity_dead(iParam0[iVar0]) && !is_entity_on_fire(iParam0[iVar0]))))
		{
			fVar3 = vdist2(get_entity_coords(iParam0[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

int func_916(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

bool func_917(int iParam0)
{
	return func_1132(iParam0, 2);
}

void func_918(int iParam0, bool bParam1)
{
	if (!func_923(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_1133(iParam0, 1024))
		{
			func_925(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_1133(iParam0, 1024))
	{
		func_924(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_1134(iParam0);
}

int func_919(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_920(int iParam0)
{
	if (func_1135(iParam0) && func_1136())
	{
		remove_door_from_system(iParam0);
	}
}

void func_921(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_922(int iParam0, bool bParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		set_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		clear_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_923(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_924(int iParam0, int iParam1)
{
	if (!func_923(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_925(int iParam0, int iParam1)
{
	if (!func_923(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_926(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_927(int iParam0, bool bParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1035(iParam0, 512)) || (!bParam1 && !func_1035(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_780(iParam0, 512);
	}
	else
	{
		func_315(iParam0, 512);
	}
	if (func_1137(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

int func_928(int iParam0)
{
	iVar0 = func_610(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1138(iVar0);
}

int func_929(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_1139(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_930()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_931(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_932(bool bParam0)
{
	if (func_1() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_933(int iParam0)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_935(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_936(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_937(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1140((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1140(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_100(&(Global_1898164->f_1[0])))
	{
		func_326(&(Global_1898164->f_1[0]), 3);
	}
}

void func_938(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_939()
{
	if (func_1141(0))
	{
		func_1142(0);
	}
	if (func_1141(1))
	{
		func_1142(1);
	}
	if (func_1141(5))
	{
		func_1142(5);
	}
	if (func_1141(6))
	{
		func_1143(6);
	}
}

int func_940()
{
	return Global_1894899->f_2;
}

bool func_941(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_942(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (_0x23e33cb9f4a3f547(*uParam0, sParam1))
	{
		return true;
	}
	return false;
}

void func_943(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
}

int func_944(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1144(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_1145(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_945(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_240(iVar2) != 0 && _0x800df3fc913355f3(func_169(iVar2)))
		{
			if (func_169(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

float func_946(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_907(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1146(iParam0);
	}
	return func_907(iParam0);
}

float func_947(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_948()
{
	iVar0 = func_453(func_452());
	iVar1 = func_651(func_452());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_949(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

void func_950(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_951(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_952(int iParam0, int iParam1)
{
	iVar0 = func_653(*iParam0);
	iVar1 = func_652(*iParam0);
	if (iParam1 < 1 || iParam1 > func_655(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_953(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_954(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_955(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_956(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_957(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_956(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_1010(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_48(&(iParam1->f_13));
		}
		if (func_1147(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1148(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_957(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_971(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_1149(*iParam0, 1, 1);
						}
					}
					else if (func_1150(iParam1, 22))
					{
						func_1149(*iParam0, 0, 1);
					}
				}
				if (func_1151(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1152(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1153(iParam8);
					if (func_1154(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1155(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_1156(iParam1, uParam3, fVar8);
					if (func_1157(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_109(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1158(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1151(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1159(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1154(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1152(iParam0, func_1151(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1153(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_109(uParam3, 0, 0, 1, 1);
					}
					func_1160(iParam1, 1);
				}
				func_1156(iParam1, uParam3, fVar8);
				if (func_1158(iParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_972(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_958(int* iParam0, var uParam1, int* iParam2)
{
	iVar0 = func_1161(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_116(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_959(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_960(int iParam0, bool bParam1)
{
	func_1162(iParam0, &iVar0, &iVar1);
	if (!func_1163(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1164(iVar0, iVar1);
}

bool func_961(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_962(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_312(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_963(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_312(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_964(int* iParam0, char* sParam1)
{
	if (func_312(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_963(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_967(iParam0, 1);
}

bool func_965(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_966(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_967(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_968(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_969(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_970(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_971(int* iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_972(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_1165(iParam0, uParam1, 1);
	func_109(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_973(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1166(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_1167(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_974(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x0df57f86fe71dbe5(*uParam0, sParam1);
}

int func_975(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xae6ada8fe7e84acc(*uParam0, sParam1);
}

void func_976(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(*iParam0))
	{
		iVar0 = *iParam0;
	}
	else if (!is_entity_dead(*iParam1))
	{
		iVar0 = *iParam1;
	}
	else
	{
		return;
	}
	if (has_anim_event_fired(iVar0, -137640087))
	{
		iLocal_473[iParam2] = 0;
	}
	else if (has_anim_event_fired(iVar0, -1300850144))
	{
		iLocal_473[iParam2] = 1;
	}
	else if (has_anim_event_fired(iVar0, -1011860333))
	{
		iLocal_473[iParam2] = 2;
	}
	else
	{
		iLocal_473[iParam2] = -1;
	}
}

int func_977(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1073741824;
		case 1:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

Vector3 func_978(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "PB_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(&cVar0, "PRE_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "SAW_A_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "SAW_B_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	StringConCat(&cVar0, "ILO_", 24);
	if (bParam2)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = func_645(*iParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R", 24);
			break;
		case 1:
			StringConCat(&cVar0, "BACK", 24);
			break;
	}
	return cVar0;
}

bool func_979(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (is_entity_dead(iParam0) && bParam5)
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return true;
	}
	if (_is_anim_scene_finished(iParam1, false))
	{
		return true;
	}
	if (!_is_anim_scene_metadata_loaded(iParam1, false))
	{
		return true;
	}
	if (!is_string_null_or_empty(sParam2))
	{
		if (bParam6)
		{
			if (_0x73616e64696c616e(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (_0x005e6f28dd7ed58d(iParam1, sParam2) || _0xb89fcff19dafff28(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && has_anim_event_fired(iParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0f && _get_anim_scene_progress(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

void func_980(int iParam0, int iParam1)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0);
	iParam1->f_3 = (iParam1->f_3 - iParam0);
}

bool func_981(int iParam0, int iParam1)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (is_ped_active_in_scenario(*iParam0, 1))
	{
		return false;
	}
	if (has_anim_event_fired(*iParam0, 1407243653))
	{
		return false;
	}
	if (func_1168(iParam1))
	{
		return false;
	}
	return true;
}

void func_982(int iParam0)
{
	iVar0 = func_693(iParam0);
	if (!func_117(func_1169(iParam0)) && !func_430(iVar0))
	{
		iVar1 = (810 + iParam0);
		iVar2 = func_63(iVar1);
		if (!is_entity_dead(iVar2))
		{
			if (!func_117(func_698(iParam0)) && has_anim_event_fired(iVar2, 2009491632))
			{
				func_1022(iVar2, 31267307, 10f, 0, "EXIT_TREE_FALL", 1, 129);
				clear_ped_tasks(iVar2, 1, 0);
				_0x2208438012482a1a(iVar2, false, false);
				func_35(func_698(iParam0));
			}
			if (has_anim_event_fired(iVar2, 1407243653))
			{
				set_ped_config_flag(iVar2, 146, false);
				set_ped_config_flag(iVar2, 234, true);
				set_ped_config_flag(iVar2, 178, true);
				set_ped_config_flag(iVar2, 389, false);
				func_35(func_1169(iParam0));
				func_35(func_694(iParam0));
			}
		}
	}
}

bool func_983(int iParam0, int iParam1)
{
	if (func_429(iParam0))
	{
		return false;
	}
	if (!func_256(*iParam1, 0, 1))
	{
		return false;
	}
	if (!decor_exist_on(*iParam1, "bChopDown"))
	{
		return false;
	}
	return true;
}

bool func_984(int iParam0, bool bParam1)
{
	if (!does_rayfire_map_object_exist(&(iLocal_450[iParam0])))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (func_19(64))
	{
		return true;
	}
	if (!func_668(vLocal_557[0]))
	{
		return false;
	}
	if (func_740(vLocal_557[0]) <= 5000)
	{
		return false;
	}
	return true;
}

int func_985(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1048576;
		case 1:
			return 2097152;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		default:
			break;
	}
	return 0;
}

bool func_986()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_429(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_987()
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iVar0)
	{
		case 0:
			return "LOG_WARN01";
		case 1:
			return "LOG_WARN02";
		case 2:
			return "LOG_WARN03";
		case 3:
			return "LOG_WARN04";
		default:
			break;
	}
	return "LOG_WARN01";
}

void func_988(int iParam0)
{
	iVar31 = 0;
	iVar31 = func_302(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = func_63(iVar32);
	if (!is_entity_dead(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!func_19(32))
	{
		func_1170(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1171(&(uLocal_2077[0]), &iVar0);
	}
}

Vector3 func_989(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0f, 0f, 79.04118f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -15f, 0f, -60.62425f;
				case 1:
					return 0f, 0f, 102.5155f;
				case 2:
					return 0f, 0f, 42.34158f;
				case 3:
					return -15f, 0f, -84.66344f;
				case 4:
					return 0f, 0f, 60.87f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 79.04118f;
				case 1:
					return 0f, 0f, 121.4344f;
				case 2:
					return -15f, 0f, -98.84385f;
				case 3:
					return -15f, 0f, -99.77609f;
				case 4:
					return -15f, 0f, -99.77609f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 84.4f;
				case 1:
					return -15f, 0f, 14.6f;
				case 2:
					return 15f, 0f, -158.89f;
				case 3:
					return 0f, 0f, 77.9f;
				case 4:
					return 0f, 0f, 84.4f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_990(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_19(64))
					{
						iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					}
					else
					{
						iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1455.782f, -255.1657f, 106.2708f, 176.1422f, 74.22754f, -157.1033f, 1.284743f, 0.828f, 11.23116f, "volTreeKill 0");
					}
					break;
				case 1:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1408.708f, -186.5688f, 101.067f, 76.65434f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 12.79663f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1458.914f, -194.3228f, 105.2989f, -89.76711f, 89.07716f, -136.2797f, 1.284743f, 0.828f, 11.93199f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1465.396f, -227.6279f, 107.1113f, -173.9405f, 77.34332f, -173.0002f, 1.284743f, 0.828f, 10.89174f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1417.96f, -200.7522f, 101.8687f, 116.2321f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 10.74282f, "volTreeKill 1");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1453.148f, -166.5273f, 107.2447f, 77.26909f, 87.1385f, -72.74516f, 1.284743f, 0.828f, 11.9518f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1468.958f, -251.1458f, 108.5803f, -163.4203f, 76.80013f, -175.8395f, 1.284743f, 0.828f, 11.48762f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1513.435f, -244.4112f, 120.048f, 76.4277f, 4.506001f, 14.70511f, 1.139303f, 2.028264f, 10.8445f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1473.797f, -116.0985f, 116.5509f, 78.37471f, 4.515922f, 12.70869f, 2.082363f, 2.176558f, 10.8445f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1503.689f, -203.0762f, 110.4443f, 173.4138f, -89.01738f, -180f, 2.334879f, 1f, 10.34734f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
			}
			break;
	}
}

void func_991(int iParam0)
{
	iVar0 = func_63(iParam0);
	iVar1 = func_1172(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = func_693(iVar1);
	if (!is_entity_dead(iVar0))
	{
		if ((func_166(64) && !_is_ped_using_scenario_hash(iVar0, func_695())) && !func_466(iVar2))
		{
			if (!func_268(iParam0, 0))
			{
				func_62(iParam0, 1, 1);
			}
			func_467(&iVar2);
			clear_ped_tasks(iVar0, 1, 0);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			open_sequence_task(&iLocal_196);
			task_swap_weapon(0, 1, 0, 0, 0);
			if (_does_scenario_point_exist(&(uLocal_462[iVar1])))
			{
				_task_use_scenario_point(0, &(uLocal_462[iVar1]), 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				_task_use_nearest_scenario_to_coord(0, func_1173(iVar1), 5f, 0, false, false, false, false);
			}
			close_sequence_task(iLocal_196);
			_task_perform_sequence_2(iVar0, iLocal_196, 1f, 3f);
			clear_sequence_task(&iLocal_196);
		}
		else
		{
			clear_ped_tasks(iVar0, 1, 0);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			func_77(iParam0, 1);
			func_474(iVar2, 0);
		}
	}
}

void func_992(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_662((*Local_256[iParam0])[iParam1], bParam2, 0);
}

void func_993(int iParam0, int iParam1)
{
	if (func_716(Local_479[func_1174(iParam1)], "bBreakInternalLoop"))
	{
		func_717(Local_479[func_1174(iParam1)], "bBreakInternalLoop");
	}
	func_1175(iParam0, iParam1);
	if (&iLocal_191[iParam1] < 3)
	{
		if (_0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			set_ped_config_flag(*iParam0, 330, true);
			vVar0 = { func_1178(iParam0, func_1176(iParam1), func_1177(iParam1), &(iLocal_470[iParam1]), 1) };
			if (!is_string_null_or_empty(&vVar0))
			{
				task_play_anim(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
		else if (_0x9337183fda2e9035(*iParam0, get_player_index()))
		{
			vVar0 = { func_1178(iParam0, func_1176(iParam1), func_1177(iParam1), &(iLocal_470[iParam1]), 0) };
			if (!is_string_null_or_empty(&vVar0))
			{
				task_play_anim(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
	}
	switch (&iLocal_191[iParam1])
	{
		case 0:
			iLocal_191[iParam1] = 1;
			break;
		case 1:
			if (has_entity_anim_finished(Local_611.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || has_anim_event_fired(Local_611.f_690[13]->f_8, -1064143891))
			{
				set_anim_scene_rate(&(Local_479[func_1174(iParam1)]), 1f);
				func_643(Local_479[func_1174(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (_0x8d81e7824b7753f7(&(Local_479[func_1174(iParam1)]), func_1179(iParam1), 1))
			{
				set_anim_scene_rate(&(Local_479[func_1174(iParam1)]), -1f);
				func_643(Local_479[func_1174(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 2;
			}
			break;
		case 2:
			if (has_entity_anim_finished(Local_611.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || has_anim_event_fired(Local_611.f_690[13]->f_8, -1064143891))
			{
				set_anim_scene_rate(&(Local_479[func_1174(iParam1)]), 1f);
				func_643(Local_479[func_1174(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (_0x8d81e7824b7753f7(&(Local_479[func_1174(iParam1)]), func_1180(iParam1), 1))
			{
				set_anim_scene_rate(&(Local_479[func_1174(iParam1)]), 1f);
				func_643(Local_479[func_1174(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 1;
			}
			break;
		case 3:
			if (!_0xa454d234e45bb6e5(*iParam0, get_player_index()) && !_0x9337183fda2e9035(*iParam0, get_player_index()))
			{
				if (has_entity_anim_finished(Local_611.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || has_anim_event_fired(Local_611.f_690[13]->f_8, -1064143891))
				{
					iLocal_191[iParam1] = 4;
				}
				else if (_get_anim_scene_rate(&(Local_479[func_1174(iParam1)])) > 0f)
				{
					iLocal_191[iParam1] = 1;
				}
				else
				{
					iLocal_191[iParam1] = 2;
				}
			}
			break;
		case 4:
			iLocal_191[iParam1] = 5;
			if (iVar587 < 14)
			{
				iLocal_591 = 14;
			}
			break;
		case 5:
			break;
	}
}

bool func_994(var uParam0, int iParam1, int iParam2)
{
	if (!func_256(iParam1, 0, 1))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!func_1181(iParam1))
	{
		return false;
	}
	if (func_368(iParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (func_288(iParam1, iParam2))
	{
		return false;
	}
	if (func_1182(iParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

void func_995(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

bool func_996()
{
	return func_1183(_0xc17f69e1418cd11f(3));
}

bool func_997()
{
	if (!func_217(Global_35, &(iLocal_75[18]), 1, 0))
	{
		return false;
	}
	if (!func_9(Local_1614.f_136, 256))
	{
		return false;
	}
	if (func_9(Local_1614.f_136, 8))
	{
		return false;
	}
	return true;
}

void func_998(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!is_ped_on_mount(iParam0))
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	clear_ped_tasks(iVar0, 1, 0);
	task_stand_still(iVar0, -1);
}

void func_999(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_1000(var uParam0, int iParam1)
{
	if (func_226(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_378(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_384(uParam0->f_1) && !func_131(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_131(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_1001(var uParam0, int iParam1)
{
	if (func_226(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_378(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1184(&uVar0))
	{
		return true;
	}
	return false;
}

int func_1002()
{
	if (!func_1185())
	{
		return 0;
	}
	if (!func_1186(&iVar0))
	{
		return 0;
	}
	if (!func_1187(iVar0))
	{
		return 0;
	}
	return func_1188(iVar0, 0);
}

bool func_1003(var uParam0, int iParam1)
{
	if (func_226(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_378(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_378(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_1004(int iParam0)
{
	iVar0 = func_393(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (_is_ped_hogtied(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_1005(var uParam0, int iParam1)
{
	if (func_226(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_378(uParam0->f_23, 4096) && func_131(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_378(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_1006(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

bool func_1007(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_252(get_entity_heading(iParam0));
	fParam4 = func_252(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_1008(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

var func_1009(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1189(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1190(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1189(sVar0, iParam1, 0, 0, 1, 1);
}

float func_1010(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_1011()
{
	return Global_1935436->f_9;
}

void func_1012(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_1013(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

void func_1014(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_963((*Local_256[iParam0])[iParam1]->f_6, sParam2, 0);
	(*Local_256[iParam0])[iParam1]->f_5 = sParam2;
}

void func_1015(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_663((*Local_256[iParam0])[iParam1], bParam2);
}

void func_1016(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_1191(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

int func_1017(int iParam0)
{
	if (func_1192())
	{
		return 0;
	}
	if (!func_1193(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (_datafile_get_int(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_1018(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1194(1) < iParam0)
	{
		iParam0 = func_1194(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_1120(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1019(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1122(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

Vector3 func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "LCMP_IG_NIACT1", 24);
			break;
		case 1:
			StringCopy(&cVar0, "LCMP_IG_NIBA", 24);
			break;
		case 2:
			StringCopy(&cVar0, "LCMP_IG_NOG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "LCMP_IG_NOTI", 24);
			break;
		case 4:
			StringCopy(&cVar0, "LCMP_IG_NIACTB", 24);
			break;
		case 5:
			StringCopy(&cVar0, "LCMP_IG_NICL", 24);
			break;
		case 6:
			StringCopy(&cVar0, "LCMP_IG_NIACT2", 24);
			break;
		case 7:
			StringCopy(&cVar0, "LCMP_IG_NIFM", 24);
			break;
		case 8:
			StringCopy(&cVar0, "LCMP_IG_NOSEE", 24);
			break;
		case 9:
			StringCopy(&cVar0, "LCMP_IG_NOAIN", 24);
			break;
		case 10:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 11:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
		case 12:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 13:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
	}
	return cVar0;
}

void func_1021(char* sParam0, bool bParam1)
{
	func_1195(sParam0, bParam1, 0);
}

bool func_1022(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_256(iParam0, 0, 1))
	{
		_0xd65fdc686a031c83(iParam0, iParam1, fParam2);
		if (!is_string_null_or_empty(sParam4))
		{
		}
		if ((_0x68821369a2ceadd5(iParam0, iParam1) && (bParam5 || !_0x02ebbb3989b7e695(iParam0))) && (iParam3 == 0 || _0x569f1e1237508deb(iParam0) == iParam3))
		{
			return true;
		}
	}
	return false;
}

char* func_1023()
{
	switch (iLocal_103)
	{
		case 0:
			return "LCMPF_IG1_R";
		case 1:
			return "LCMPF_IG1_ALTR";
		case 2:
			return "LCMP_ANGR_2";
		default:
			break;
	}
	return "";
}

void func_1024(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_256(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1196(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!_does_volume_exist(iParam0->f_39))
			{
				iParam0->f_39 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1197(iParam0))
			{
				if (bParam1)
				{
					clear_ped_tasks(iParam0->f_40, 1, 0);
				}
				func_1196(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1198(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1198(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1197(iParam0))
			{
				task_turn_ped_to_face_entity(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_1025()
{
	return 370405588;
}

void func_1026(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(iParam0);
	}
	else
	{
		func_341(iParam0);
	}
}

int func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 10:
			return 32768;
		case 11:
			return 65536;
		case 12:
			return 131072;
		case 13:
			return 262144;
	}
	return 0;
}

bool func_1028(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (!func_1199("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return false;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (func_1200(&Var0, iVar16, iVar14, iVar15))
		{
			if (Var0.f_4 != 0)
			{
				if (func_1030(Var0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				func_1201(iVar14);
				return iVar17;
			}
		}
	}
}

int func_1029(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_1202(iParam0);
		if (!func_1103(iVar0, 0))
		{
			iVar0 = func_1080(iParam0);
		}
	}
	else
	{
		iVar0 = func_1080(iParam0);
	}
	return iVar0;
}

bool func_1030(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_1203(iParam0);
	}
	if (func_1204(iParam0, iParam1))
	{
		return false;
	}
	return func_1205(iParam0, iParam1);
}

void func_1031(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1032(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1132(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1033(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1034(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_1035(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_1036(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (iParam1 >= *iParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *iParam0 || iParam2 < iParam1)
	{
		iParam2 = (*iParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (func_1206((*iParam0)[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_1207();
	}
}

void func_1037(bool bParam0)
{
	if (bParam0)
	{
		func_1208(4);
	}
	func_1208(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1038(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_384(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_289(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_522(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_217(iVar0, iParam5, 1, 0)) && func_368(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_627(iVar0) && func_628(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_1209(&uVar1, &Var2);
				if (!does_entity_exist(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!does_entity_exist(*uParam1))
		{
			return true;
		}
		if (func_522(*uParam1, 1))
		{
			if (!(func_131(*uParam1, 518218985) || func_131(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_245(vParam2))
				{
					bParam8 = false;
					task_follow_nav_mesh_to_coord(*uParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (_does_volume_exist(iParam5))
				{
					_0xb56d41a694e42e86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						_task_smart_flee_style_coord(*uParam1, _0xf70f00013a62f866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_245(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

Vector3 func_1039(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_1040(int iParam0, bool bParam1)
{
	set_ped_config_flag(*iParam0, 301, !bParam1);
	set_ped_config_flag(*iParam0, 315, !bParam1);
	set_ped_config_flag(*iParam0, 130, !bParam1);
	set_ped_config_flag(*iParam0, 178, bParam1);
}

Vector3 func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1403.075f, -238.4616f, 98.94506f;
		case 1:
			return -1412.607f, -248.3197f, 99.1035f;
		case 2:
			return -1426.356f, -251.0305f, 99.57942f;
		default:
			break;
	}
	return func_65();
}

bool func_1042(int iParam0, bool bParam1)
{
	if (!does_blip_exist(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return _blip_set_modifier(iParam0, -1186550032);
	}
	return _set_blip_flash_style(iParam0, -1186550032);
}

void func_1043(int iParam0)
{
	func_58(536870912);
	func_1014(iParam0, 0, func_660(7));
	func_992(iParam0, 0, 1);
	func_1014(iParam0, 1, func_660(30));
	func_992(iParam0, 1, 1);
	func_992(iParam0, 2, 0);
	func_1015(iParam0, 2, 1);
	func_58(268435456);
	func_341(536870912);
}

bool func_1044(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_312(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_1210(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_1211(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_1212(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_245(vParam2))
			{
				return false;
			}
			*uParam0 = func_1213(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_962(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_1194(1))
			{
				func_778(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_1214(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_1215(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_778(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_778(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_1194(1))
		{
			func_778(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_312(*uParam0))
			{
				func_313(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_1216(*uParam0, 1)) || (bParam17 && func_1217(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_745(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_1218(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_313(uParam0, 1, 1);
		return true;
	}
	return false;
}

float func_1045(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { func_1219(uParam0, sParam1, sParam2) };
	if (!func_245(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

int func_1046(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_1220(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1221(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1222(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

int func_1047()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1048(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_1049(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1223(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_1047())
	{
		return -1;
	}
	iVar0 = func_1048(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_619(iVar1, 0);
	func_1224(iVar1, 0);
	func_1225(iVar1, 0);
	func_1226(iVar1, 0);
	func_1227(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1228(iVar1, iParam4);
	}
	return iVar1;
}

int func_1050(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_1229(func_611(iParam0));
}

void func_1051(int iParam0)
{
	if (!func_1230(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), iVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_1052(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_1224(iParam0, func_1231(iParam0) + 1);
}

int func_1053(int iParam0, int iParam1)
{
	iVar0 = func_624(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_1232(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_937(iVar0, iParam1);
	return iParam1;
}

void func_1054(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1055(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1056(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_1057(bool bParam0)
{
	func_1233(bParam0);
	func_1234(bParam0);
	func_1235(bParam0);
	func_1236(bParam0);
	func_1237(bParam0);
	func_1238(bParam0);
	func_1239(bParam0);
	func_1240(bParam0);
}

void func_1058(bool bParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_960(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_960(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_1241(1, bParam0, 1);
	func_1242();
	Global_40.f_11095.f_43 = bParam0;
}

void func_1059(int iParam0)
{
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1243(Global_1898077->f_7, Global_1898077->f_3);
}

void func_1060(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1244(Global_1898077->f_7, Global_1898077->f_4);
}

void func_1061(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		func_1245((*Local_256[iParam0])[0], 0);
		func_1245((*Local_256[iParam0])[1], 0);
		func_1245((*Local_256[iParam0])[2], 0);
	}
	else
	{
		func_1246((*Local_256[iParam0])[0], fParam1);
		func_1246((*Local_256[iParam0])[1], fParam1);
		func_1246((*Local_256[iParam0])[2], fParam1);
	}
}

Vector3 func_1062(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return -1398.377f, -212.7954f, 102.8864f;
		case 1:
			return -1399.682f, -212.1699f, 102.8864f;
		case 2:
			return -1396.998f, -211.1999f, 102.8864f;
			default:
				break;
	}
}

float func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return 7.28f;
		case 1:
			return -53.73f;
		case 2:
			return 83.99f;
			default:
				break;
	}
}

int func_1064(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return 0;
	}
	if (!waypoint_recording_get_num_points(sParam1, &iVar0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (_0x29ba9f78321e5a6c(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

bool func_1065(int iParam0, float fParam1)
{
	if (is_entity_on_screen(iParam0) && func_973(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

int func_1066(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4)
{
	iParam4 = iParam4;
	fParam3 = fParam3;
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return 0;
	}
	if (!waypoint_recording_get_closest_waypoint(sParam1, get_entity_coords(iParam0, true, false), &iVar0))
	{
		return 0;
	}
	if (iVar0 > -1)
	{
		if (waypoint_recording_get_coord(sParam1, iVar0, &vVar1))
		{
			if (func_1247(iParam0, vVar1, fParam2, 1, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1067(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (func_1073(&(fParam3->f_3), 1))
	{
		func_1074(fParam3);
		if (func_1248(vParam0, iParam8, 2.5f, fParam12, 1084227584))
		{
			func_476();
		}
	}
	if (func_1076(vParam0, fParam3, iParam8))
	{
		if (func_1073(&(fParam3->f_3), 128))
		{
			func_1077(fParam3, vParam0, iParam7, iParam10);
		}
		set_gameplay_coord_hint(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!func_1073(&(fParam3->f_3), 128))
		{
			func_1077(fParam3, vParam0, iParam7, iParam10);
		}
	}
}

bool func_1068(float fParam0)
{
	if (!func_1249(*fParam0, fParam0->f_4))
	{
		return false;
	}
	return true;
}

void func_1069(vector3 vParam0, float fParam3, int* iParam4, int iParam5)
{
	if (does_blip_exist(*iParam4))
	{
		remove_blip(iParam4);
	}
	*iParam4 = _blip_add_for_radius(iParam5, vParam0, fParam3);
}

void func_1070(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_210(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_210(uParam0))
		{
		}
	}
}

void func_1071(int iParam0, int iParam1)
{
	iVar0 = func_59(iParam0 == 2, 0, 1);
	if (iLocal_211 == 0)
	{
		apply_ped_damage_pack(&(uLocal_2077[iParam0]), "PD_Animal_melee_kill", 1f, 1f);
		apply_ped_damage_pack(&(uLocal_2077[iParam0]), "PD_Animal_melee_head", 1f, 1f);
		apply_ped_damage_pack(&(uLocal_2077[iParam0]), "PD_Animal_melee_body", 1f, 1f);
		apply_ped_damage_pack(&(uLocal_2077[iParam0]), "PD_Animal_attack_left", 1f, 1f);
		apply_ped_damage_pack(&(uLocal_2077[iParam0]), "PD_Animal_attack_right", 1f, 1f);
		_add_blood_pool(get_entity_coords(&(uLocal_2077[iParam0]), true, false), false);
		func_1250(Local_401[iVar0], 0.175f, 1048576000);
		func_1251(Local_401[iVar0], 0.15f, 0f, 0f, 0.2f, 0.5f, 1048576000, 1065353216, 1065353216);
		func_1252(Local_401[iVar0], "VFXBLOODINFO_PISTOL_LARGE", 0.75f, 0.1f);
	}
	else if (iLocal_211 < 10)
	{
		fVar1 = func_1010((iLocal_211 % 2) == 0, 0.5f, -0.5f);
		func_1253(Local_401[iVar0], func_490((iLocal_211 - 1), iParam0), func_490(iLocal_211, iParam0), 0.5f, fVar1);
		func_1254(Local_401[iVar0], 0f, 0f, 0f, 0f, 16);
	}
	else if (iLocal_211 == 10)
	{
		func_1253(Local_401[iVar0], func_490(9, iParam0), Local_611.f_15[iParam0]->f_6, 1056964608, 1065353216);
		func_1254(Local_401[iVar0], 0f, 0f, 0f, 0f, 16);
		vVar2 = { func_490(0, iParam0) };
		vVar2.f_2 = (vVar2.z - 0.03f);
		set_entity_coords(Local_611.f_690[iParam1]->f_8, vVar2, true, false, true, true);
		set_entity_collision(Local_611.f_690[iParam1]->f_8, false, false);
	}
}

void func_1072(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1073(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1074(float fParam0)
{
	if (func_1073(&(fParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_1068(fParam0) || func_1073(&(fParam0->f_3), 4)) && !func_1073(&(fParam0->f_3), 256))
		{
			disable_control_action(0, -1450761377, false);
			disable_control_action(0, -771458680, false);
			disable_control_action(0, -1722177808, false);
			disable_control_action(1, -1450761377, false);
			disable_control_action(1, -771458680, false);
			disable_control_action(1, -1722177808, false);
			disable_control_action(2, -1450761377, false);
			disable_control_action(2, -771458680, false);
			disable_control_action(2, -1722177808, false);
		}
		disable_control_action(2, 2139949496, false);
	}
	if (func_1255(fParam0))
	{
		func_476();
	}
	if (!func_1073(&(fParam0->f_3), 16))
	{
		if (func_668(fParam0))
		{
			if (func_740(fParam0) < fParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_1075(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_1256(iParam0, iParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1076(vector3 vParam0, float fParam3, float fParam4)
{
	if (!func_1257(fParam3->f_7, fParam3->f_8))
	{
		return false;
	}
	if (func_1073(&(fParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_438(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_1258(vParam0, fParam3))
	{
		return false;
	}
	if (!func_1073(&(fParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_1259(vParam0, fParam3))
		{
			return false;
		}
	}
	return true;
}

void func_1077(float fParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_1260(vParam1, 1);
	if (!func_1073(&(fParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			fParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			fParam0->f_4 = iVar2;
		}
		else
		{
			fParam0->f_4 = iParam5;
		}
		_0x1f6ebd94680252ce(iVar1, -1082130432);
		_0xf48664e9c83825e3(iVar2, -1082130432);
	}
	else
	{
		fParam0->f_4 = iParam5;
	}
	func_48(fParam0);
	func_1261(&(fParam0->f_3), 1);
}

bool func_1078(int iParam0, float fParam1)
{
	if (func_1262(Global_35, iParam0, &uVar0, fParam1))
	{
		return true;
	}
	return false;
}

int func_1079(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar1 = *iParam0;
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam1 >= iVar1)
	{
		iParam1 = (iVar1 - 1);
	}
	if (iParam2 < 0 || iParam2 >= iVar1)
	{
		iParam2 = (iVar1 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			iVar2++;
		}
		iVar0++;
	}
	if (bParam3)
	{
	}
	return iVar2;
}

int func_1080(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_1263(iVar1);
		}
	}
	return iVar0;
}

void func_1081(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (func_316(iParam0) == 4)
	{
		func_1264(iParam0, func_452());
		if (!func_319(iParam0) == 5 && !func_319(iParam0) == 6)
		{
			if (bParam3)
			{
				func_326(iParam0, 6);
			}
			else
			{
				func_326(iParam0, 5);
			}
			func_331(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_103(1);
	}
	iVar0 = func_320(iParam0);
	bVar1 = func_1() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_1265(0, 2);
		if (!bVar1 && bParam1)
		{
			func_1266();
		}
	}
	else
	{
		func_328(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_1267(iParam0);
	}
	else
	{
		Var2 = { func_1120(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_866(32768))
		{
			Var4 = { func_1120(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_319(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_441(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_441(iParam0)]->f_8), true);
						}
					}
					else if ((func_441(iParam0) != 95 && func_441(iParam0) != 82) && !func_443((*Global_1347702)[func_441(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_441(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_441(iParam0)]->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_1269(func_441(iParam0), iVar6, func_1268());
	}
	else if (iVar0 == 8)
	{
		func_1271(func_441(iParam0), iVar6, func_1268(), func_1270());
	}
	if (!func_319(iParam0) == 5 && !func_319(iParam0) == 6)
	{
		iVar9 = func_1272(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_1273(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_1274(func_441(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1114((iVar10 - 20), 0, iVar10);
					iVar11 = func_1114((iVar11 - 10), 0, iVar11);
				}
				func_1275(1);
				func_1016(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_1016(45, 0, 1);
				break;
			case 8:
				iVar10 = func_1276(func_441(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1114((iVar10 - 20), 0, iVar10);
					iVar11 = func_1114((iVar11 - 10), 0, iVar11);
				}
				func_1016(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_1277(func_441(iParam0)))
				{
					func_565(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_1016(120, 0, 1);
				break;
			case 2:
				func_1016(120, 0, 1);
				break;
			case 6:
				func_1016(func_1278(func_1050(iParam0)), 0, 1);
				break;
			case 5:
				func_1016(120, 0, 1);
				break;
		}
	}
	func_330(iParam0, 1);
	func_1264(iParam0, func_452());
	func_331(iParam0);
	if ((!func_319(iParam0) == 0 && bParam1) && func_1() == -1)
	{
		iVar12 = func_323(iParam0);
		if (iVar12 != -1)
		{
			func_324(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_325();
			if (iVar12 != -1)
			{
				func_324(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = get_game_timer();
				break;
			case 6:
				switch (func_441(iParam0))
				{
					case 0:
						Global_1898438 = (get_game_timer() - 5000);
						break;
					case 1:
						Global_1898438 = get_game_timer();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = get_game_timer();
				break;
			case 8:
				if (func_442(func_441(iParam0)) && func_443((*Global_1347702)[func_441(iParam0)]->f_12, 4))
				{
					Global_1898438 = get_game_timer();
				}
				else
				{
					Global_1898438 = (get_game_timer() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_441(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_1279();
				}
				break;
			case 8:
				if (func_441(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_1279();
				}
				break;
		}
	}
	if (!func_319(iParam0) == 5 && !func_319(iParam0) == 6)
	{
		if (bParam3)
		{
			func_326(iParam0, 6);
		}
		else
		{
			func_326(iParam0, 5);
		}
		func_331(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_441(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_1280();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_1281(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(-1267972061);
						func_1281(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(1619534881);
						func_1281(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(-755457379);
						func_1281(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(1015404643);
						func_1281(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(-1724192342);
						func_1281(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(1310680212);
						func_1281(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(-566881549);
						func_1281(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(-1753730528);
						func_1281(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(147796381);
						func_1281(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(-378547623);
						func_1281(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(829545206);
						func_1281(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1282(891318243);
						func_1281(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1283();
						func_1284(967523420);
						func_1285();
						func_1286();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_1287(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_1281(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_960(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_960(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_1288(304805134, 1, 1);
						if (!func_208((*Global_1347702)[21]->f_15, 1))
						{
							func_1081((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[21]->f_3)), iVar14);
						}
						break;
					case 20:
						func_1289();
						break;
					case 26:
						func_1290();
						break;
					case 17:
						func_1291(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_1292())
						{
							func_1293(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_1294(-514575035, -1))
						{
							iVar15 = func_452();
							func_376(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_1295(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_1292())
						{
							func_1293(1529685685);
						}
						break;
					case 34:
						if (func_1292())
						{
							func_1293(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_1296();
						break;
					case 37:
						func_1297();
						if (func_1298())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(2116153146, iVar14);
						}
						break;
					case 38:
						func_1299();
						break;
					case 43:
						func_1300();
						break;
					case 44:
						if (!func_208((*Global_1347702)[82]->f_15, 1))
						{
							func_1081((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[82]->f_3)), iVar14);
						}
						if (!func_208((*Global_1347702)[83]->f_15, 1))
						{
							func_1081((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[83]->f_3)), iVar14);
						}
						break;
					case 45:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_MONROE"));
						break;
					case 49:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLEET_GOON"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_1301();
						break;
					case 59:
						func_1302();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_1303();
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DAVID_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_1304();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_960(451, 0);
						}
						if (!func_1305(-1992824800))
						{
							if (func_1305(1520110311))
							{
								iVar16 = func_452();
								func_376(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_1295(1937177603, iVar16, 1);
							}
						}
						if (func_1306(4))
						{
							if (!func_1307(684296857, 1, 0))
							{
								iVar17 = func_452();
								func_376(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_1295(-1439688706, iVar17, 1);
							}
						}
						func_1281(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1281(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_1308(89200);
						func_1308(2300);
						func_1308(2300);
						break;
					case 68:
						func_1309();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[108]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[69]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[70]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[7]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[22]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[23]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[65]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[7]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[8]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[36]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[48]->f_8)), iVar14);
						func_1310();
						func_1308(-139100);
						break;
					case 69:
						if (func_208((*Global_1347702)[9]->f_15, 1))
						{
							func_1308(-6000);
						}
						break;
					case 70:
						func_1308(23400);
						func_1308(1900);
						func_1308(-15000);
						break;
					case 71:
						func_1308(-5500);
						break;
				}
				break;
			case 8:
				switch (func_441(iParam0))
				{
					case 0:
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON"));
						}
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
						_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
						_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
						break;
					case 22:
						_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
						break;
					case 24:
						_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
						break;
					case 26:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
						_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
						_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
						_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
						break;
					case 30:
						_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
						_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
						break;
					case 37:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
						break;
					case 56:
						_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
						break;
					case 57:
						_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
						break;
					case 58:
						func_1311();
						break;
					case 59:
						_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
						_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
						break;
					case 61:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_1312();
						break;
					case 66:
						func_1313();
						func_1314();
						break;
					case 67:
						if (!func_1315(6))
						{
							func_1316(6);
						}
						if (!func_1315(3))
						{
							func_1316(3);
						}
						if (func_1292())
						{
							func_1293(1534638301);
						}
						break;
					case 68:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
						break;
					case 91:
						_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
						break;
					case 98:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
						break;
					case 101:
						_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
						break;
					case 115:
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
						break;
					case 120:
						_0xd8c7162ab2e2af45(1720279629);
						break;
					case 138:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						break;
					case 139:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						break;
					case 140:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						break;
					case 143:
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						break;
					case 147:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						break;
					case 9:
						if (func_208((*Global_1835011)[69]->f_1, 1))
						{
							func_1317(0);
							func_1308(40500);
						}
						else
						{
							func_1317(0);
							func_1308(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_441(iParam0))
				{
					case 0:
						switch (func_1050(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_1318(iParam0);
		func_1319();
		switch (iVar0)
		{
			case 1:
				switch (func_441(iParam0))
				{
					case 4:
						func_1320(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_1320(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_1320(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_1320(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_1320(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_1320(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_1320(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_1321(iParam0);
						func_1320(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_1320(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_1320(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_1307(-2046502963, 1, 0))
						{
							func_1281(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_1320(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_1320(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_1320(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_1321(iParam0) == 0)
						{
							func_1320(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_1320(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_443((*Global_1347702)[func_441(iParam0)]->f_12, 536870912))
				{
					func_1123(11, 1);
				}
				switch (func_441(iParam0))
				{
					case 109:
						func_1320(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_1123(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_1320(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_1320(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_1320(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_1320(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_802(0, 10, 11, 2116153146))
				{
					func_1320(iParam0, func_1321(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_802(0, 7, 11, -379687487))
				{
					func_1320(iParam0, func_1322(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_802(0, 8, 11, -1386089015))
				{
					func_1320(iParam0, func_1322(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_802(0, 11, 11, -1952009645))
				{
					func_1320(iParam0, func_1322(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_802(0, 12, 11, 2065895756))
				{
					func_1320(iParam0, func_1322(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_319(iParam0) == 0)
			{
				if (func_318(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_318(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_321(func_320(iParam0), func_318(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_441(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_1324(func_1323(Global_1879514->f_1));
						if (iVar0 == 8 && func_441(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_442(func_441(iParam0)) && func_443((*Global_1347702)[func_441(iParam0)]->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_1325(bParam2, iVar20);
		}
	}
	func_329(1);
	if ((bVar13 || func_1279()) && (func_320(iParam0) == 1 || func_320(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_1082(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_1184(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_1326())
	{
		iVar1 = 0;
	}
	func_1327(iParam0, iVar1);
}

void func_1083(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		set_ped_config_flag(*iParam0, 178, false);
		_0x20c5459379d75c1c(*iParam0, "LOG_WRK_ACC_OBS");
		_0xa3c53cde922bc78b(*iParam0, "LOG_WRK_ACC_OBS");
	}
	else
	{
		set_ped_config_flag(*iParam0, 178, true);
		_0x20c5459379d75c1c(*iParam0, "");
		_0xa3c53cde922bc78b(*iParam0, "");
	}
	_0x8af46e5159a5b620(*iParam0, 291934926);
	func_247(*iParam0, 1, 1);
}

bool func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 810:
		case 811:
		case 812:
		case 813:
			return true;
	}
	return false;
}

Vector3 func_1085(vector3 vParam0, float fParam3)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f) };
	return vParam0 + func_1328(vVar0, get_random_float_in_range(0f, fParam3));
}

Vector3 func_1086(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		fVar0 = get_random_float_in_range(-1f, 1f);
	}
	else
	{
		fVar0 = 0f;
	}
	vVar1 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), fVar0 };
	return vParam0 + func_1328(vVar1, fParam3);
}

bool func_1087(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_1088(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1329(iParam0, iParam1))
		{
			if (func_1330(iParam0, iParam1))
			{
				if (func_1331(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1332(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_1089(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1090(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1091(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

Vector3 func_1092(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar9 = get_ped_index_from_entity_index(iParam0);
			vVar0 = { get_ped_bone_coords(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = get_entity_model(iParam0);
			get_model_dimensions(iVar10, &vVar3, &vVar6);
			vVar3 = { get_offset_from_entity_in_world_coords(iParam0, vVar3) };
			vVar6 = { get_offset_from_entity_in_world_coords(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_1333(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_245(vVar0))
	{
	}
	return vVar0;
}

int func_1093(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_995(bParam0);
			bParam0->f_1 = start_shape_test_los_probe(vParam1, vParam4, 83, iParam7, 7);
			_0x04aa59ca40571c2e(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (get_shape_test_result(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (get_shape_test_result(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

struct<4> func_1094(bool bParam0)
{
	return func_859(1328661203, func_1334(), -1591664384, bParam0);
}

int func_1095(int iParam0)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1096(bool bParam0)
{
	iVar0 = func_932(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_859(923904168, func_1094(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_859(923904168, func_1094(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_859(923904168, func_1094(bParam0), -740156546, 0);
}

bool func_1097(int iParam0, bool bParam1)
{
	if (func_933(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1107(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1098(bool bParam0)
{
	iVar0 = func_932(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_859(271701509, func_1094(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_859(271701509, func_1094(bParam0), 12999093, 0);
}

bool func_1099(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_933(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1100(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_932(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1101(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_859(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_932(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1102(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_932(0);
	*uParam1 = { func_859(iParam0, func_1096(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_1103(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_1104(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1105(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1106(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_1107(int iParam0)
{
	if (!func_1335(iParam0))
	{
		return false;
	}
	return func_1336(iParam0);
}

bool func_1108()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_1109(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_1337(iParam0))
	{
		iVar1 = func_1110(iParam0, iVar0);
		if (iVar1 != 0 && _map_is_discovery_active(iVar1))
		{
			_map_discovery_set_enabled(iVar1);
		}
		iVar0++;
	}
}

int func_1110(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_1111()
{
	iVar0 = func_1338();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1112(int iParam0)
{
	if (func_1() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_1010(absf(fVar1) < 1f, func_1010(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1113()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1114(int iParam0, int iParam1, int iParam2)
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

int func_1115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1116()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1117(int iParam0, bool bParam1, int iParam2)
{
	func_1339((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1340(iParam0);
}

void func_1118(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1341(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1119(bool bParam0)
{
	bVar3 = false;
	if (func_1342(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1343(iVar5, &iVar2, &iVar0))
			{
				if (!func_1103(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1344(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_1095(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1111() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1111() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1345();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_1120(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1121(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_1122(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_1346(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1123(int iParam0, int iParam1)
{
	if (!func_1347(iParam0))
	{
		return 0;
	}
	if (!func_1108())
	{
		return 0;
	}
	if (!func_1348(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

bool func_1124()
{
	if (func_1349())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_1125(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_1126(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_1127(int iParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_1128(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_201(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_145(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1129(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_1130(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_1131(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_1132(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_1133(int iParam0, int iParam1)
{
	if (!func_923(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_1134(int iParam0)
{
	func_1350(func_926(iParam0));
}

bool func_1135(int iParam0)
{
	if (func_1351(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_1136()
{
	return true;
}

bool func_1137(int iParam0)
{
	if (func_1352())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1138(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1139(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1140(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_1141(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

void func_1142(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_289(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_1353(iParam0, 64))
	{
		func_1143(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_1107(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1354(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_1143(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1355(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1356(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1353(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1357(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_1358(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1359(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1360((*Global_1900383)[iParam0]->f_26);
		func_1361((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_529(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_1355(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

void func_1143(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

float func_1144(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_1145(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

var func_1146(int iParam0)
{
	return iParam0->f_25;
}

bool func_1147(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1362(iParam0, iParam1))
		{
			if (!func_378(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_109(uParam2, 0, 0, 1, 0);
				func_145(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_378(iParam1->f_10, 1))
		{
			func_1363(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_201(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1148(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_378(iParam4, 32);
		func_1165(iParam1, uParam2, 0);
		iVar5 = func_1364(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_109(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_378(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_378(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_378(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_378(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_378(iParam4, 8388608) || func_378(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_378(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_378(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1150(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_1150(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_378(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1365(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
			}
			set_ped_config_flag(*iParam0, 130, true);
			set_ped_config_flag(*iParam0, 178, false);
			set_ped_config_flag(*iParam0, 297, true);
			set_ped_config_flag(*iParam0, 301, false);
			if (func_378(iParam4, 268435456))
			{
				iVar8 = func_1366(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1367(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_1150(iParam1, 23))
			{
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam0, 331, false);
				set_ped_config_flag(*iParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*iParam0, 315, true);
				set_ped_config_flag(*iParam0, 493, false);
			}
			if (func_378(iParam4, 2) || func_378(iParam4, 16))
			{
				func_1149(*iParam0, 1, 1);
			}
			else
			{
				func_1149(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1149(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1150(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_1151(int* iParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_1368(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1152(int* iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_1369(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_378(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1153(int iParam0)
{
	if (func_378(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_378(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_378(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_1154(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1194(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_556(Global_35)) || func_554(Global_35)) || func_552(Global_35));
	fVar12 = -1f;
	if (func_668(&(iParam1->f_13)))
	{
		fVar12 = func_385(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_312((*uParam4)[iVar0]->f_6);
		func_1370(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1371(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1372(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_109(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1373(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1165(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_1374(iParam1, fParam6, iParam1->f_9))
					{
						func_48(&(iParam1->f_18));
						if (bVar6)
						{
							func_1373(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_1375(iParam1, fParam2);
	}
	return bVar5;
}

void func_1155(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_1156(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1376((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1375(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1157(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1377(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1378(iParam1, 0);
				func_1165(iParam1, uParam2, func_1150(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1158(int* iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_48(&(iParam1->f_18));
			return false;
		}
		else if (func_668(&(iParam1->f_18)))
		{
			func_270(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_668(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_226(&(iParam1->f_18), fParam2);
	return true;
}

void func_1159(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1370(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1160(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_1161(int* iParam0)
{
	if (func_1150(iParam0, 0))
	{
		if (func_1379(iParam0))
		{
			func_1160(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1162(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1380(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1381(iParam0))
	{
		return false;
	}
	if (func_1382(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1383(iParam0, 1)) || func_866(32768))
	{
		if (!func_1383(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1384())
	{
		return false;
	}
	return true;
}

void func_1164(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1165(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_313(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_78(iParam0, 0);
		}
	}
}

bool func_1166(int iParam0, int iParam1, float fParam2)
{
	return func_1129(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_1167(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_1168(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2160)
	{
		if (iParam0 == &iLocal_2147[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

void func_1170(int iParam0, int iParam1, bool bParam2)
{
	func_163(Local_1614.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	iVar8 = func_63(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	add_shocking_event_at_position(-23350179, func_437(*iParam1), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
	if (is_entity_dead(iVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_157(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			iVar7 = func_63(iVar3);
			if (func_288(iVar7, iParam0))
			{
			}
			else
			{
				if ((func_243(iVar3, 0) && !is_entity_dead(iVar7)) && is_ped_human(iVar7))
				{
					func_246(iVar3, 0, 1, 0, 1, 1);
					func_247(iVar7, 1, 1);
					if ((bParam2 && func_217(iVar7, &(iLocal_75[2]), 1, 0)) && func_256(iVar7, 0, 1))
					{
						set_ped_config_flag(iVar7, 168, true);
						func_1385(iVar3, -1);
						clear_ped_tasks_immediately(iVar7, false, true);
						_0xeeed8fafec331a70(iVar7, func_436(*iParam1), 1);
						open_sequence_task(&iLocal_196);
						_task_smart_flee_style_coord(0, func_436(*iParam1), 4, 1, 30f, 8000, 0);
						task_turn_ped_to_face_coord(0, func_437(*iParam1), 0);
						task_stand_still(0, -1);
						close_sequence_task(iLocal_196);
						task_perform_sequence(iVar7, iLocal_196);
						clear_sequence_task(&iLocal_196);
					}
					else
					{
						fVar0 = get_random_float_in_range(0f, 1f);
						fVar2 = func_368(iVar7, iVar8, 1, 1);
						if (func_384(iVar7))
						{
							fVar1 = 0f;
						}
						else if (fVar2 < 35f)
						{
							fVar1 = 1f;
						}
						else if (fVar2 < 65f)
						{
							fVar1 = 0.5f;
						}
						else if (fVar2 < 120f)
						{
							fVar1 = 0.1f;
						}
						else
						{
							fVar1 = 0f;
						}
						if (fVar0 < fVar1 && func_256(iVar7, 0, 1))
						{
							set_ped_config_flag(iVar7, 168, true);
							func_1385(iVar3, -1);
							if (is_ped_using_any_scenario(iVar7))
							{
								_0xe7fa07624574b79a(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								_0xeeed8fafec331a70(iVar7, func_436(*iParam1), 1);
								open_sequence_task(&iLocal_196);
								task_turn_ped_to_face_coord(0, func_437(*iParam1), 0);
								task_stand_still(0, -1);
								close_sequence_task(iLocal_196);
								task_perform_sequence(iVar7, iLocal_196);
								clear_sequence_task(&iLocal_196);
							}
							_0xaab050da48b57978(iVar7, func_1386(), iVar7, -1, 4);
						}
					}
				}
				if (iVar2158 >= 15)
				{
				}
				else
				{
					iVar10++;
					if (iVar10 > iVar9)
					{
					}
					else
					{
						iVar3++;
					}
				}
			}
		}
	}
}

void func_1171(int iParam0, int iParam1)
{
	func_163(Local_1614.f_137, &iVar3, &iVar4, 0, 0);
	iVar5 = 810;
	iVar6 = func_63(iVar5);
	if (is_entity_dead(iVar6))
	{
		return;
	}
	if (iVar3 == -1 || iVar4 == -1)
	{
		return;
	}
	iVar24 = (iVar4 - iVar3);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (!func_157(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			iVar27 = func_63(iVar2);
			if (func_288(iVar27, iParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((func_243(iVar2, 0) && !is_entity_dead(iVar27)) && is_ped_human(iVar27))
				{
					func_246(iVar2, 0, 1, 0, 1, 1);
					func_247(iVar27, 1, 1);
					fVar23 = func_368(iVar27, iVar6, 1, 1);
					fVar0 = get_random_float_in_range(0f, 1f);
					if (func_384(iVar27))
					{
						fVar1 = 0f;
					}
					else if (fVar23 < 35f)
					{
						fVar1 = 1f;
					}
					else if (fVar23 < 65f)
					{
						fVar1 = 0.75f;
					}
					else if (fVar23 < 120f)
					{
						fVar1 = 0.3f;
					}
					else if (fVar23 < 200f)
					{
						fVar1 = 0.1f;
					}
					else
					{
						fVar1 = 0f;
					}
					if (iVar2159 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1387(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !is_entity_dead(iVar27))
					{
						func_1385(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iVar2159] = fVar23;
						}
					}
				}
				iVar25++;
				if (iVar25 > iVar24)
				{
				}
				else
				{
					iVar2++;
				}
				if (iLocal_98 == 2 && !func_1388(813))
				{
					iVar26 = func_1387(&fVar7);
					func_1385(813, iVar26);
					func_474(func_693(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iVar2159)
				{
					iVar27 = func_63(&(iLocal_2147[iVar28]));
					_0x62fdad5e01d2dd47(iVar27, get_entity_coords(iParam0, true, false), 2, 0);
					clear_ped_tasks(iVar27, 1, 0);
					open_sequence_task(&iLocal_196);
					task_turn_ped_to_face_entity(0, iParam0, -1, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_196);
					_task_perform_sequence_2(iVar27, iLocal_196, 0f, 2.5f);
					clear_sequence_task(&iLocal_196);
					_0xaab050da48b57978(iVar27, func_1386(), iParam0, -1, 4);
					set_ped_config_flag(iVar27, 178, false);
					set_ped_config_flag(iVar27, 130, true);
					func_1083(&iVar27, 1);
					iVar28++;
				}
			}
		}
	}
}

int func_1172(int iParam0)
{
	switch (iParam0)
	{
		case 810:
			return 0;
		case 811:
			return 1;
		case 812:
			return 2;
		case 813:
			return 3;
		default:
			break;
	}
	return -1;
}

Vector3 func_1173(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1420.47f, -237.82f, 99.06f;
	}
	if (iParam0 == 1)
	{
		return -1419.73f, -237.87f, 99.02f;
	}
	if (iParam0 == 2)
	{
		return -1419.2f, -237.95f, 98.99f;
	}
	if (iParam0 == 3)
	{
		return -1418.34f, -238.03f, 98.95f;
	}
	return 0f, 0f, 0f;
}

int func_1174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_1175(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1389(iParam0);
			break;
		case 1:
			func_1390(iParam0);
			break;
	}
}

char* func_1176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POSE_";
		case 1:
			return "FOREMAN_";
		default:
			break;
	}
	return "";
}

char* func_1177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PED01";
		case 1:
			return "PED02";
		default:
			break;
	}
	return "";
}

Vector3 func_1178(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	StringCopy(&cVar0, sParam1, 24);
	switch (iParam3)
	{
		case 0:
			StringConCat(&cVar0, "A_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "B_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "C_", 24);
			break;
		case 3:
			StringConCat(&cVar0, "D_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	if (bParam4)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = func_645(*iParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N_", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R_", 24);
			break;
		case 1:
			iVar3 = func_645(*iParam0, Global_35, 1f);
			switch (iVar3)
			{
				case 3:
					StringConCat(&cVar0, "L_", 24);
					break;
				case 2:
					StringConCat(&cVar0, "R_", 24);
					break;
			}
			break;
	}
	StringConCat(&cVar0, sParam2, 24);
	return cVar0;
}

char* func_1179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DROP_LOOP";
		case 1:
			return "DROP_LOOP";
		default:
			break;
	}
	return "";
}

char* func_1180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LIFT_LOOP";
		case 1:
			return "idle_loop";
		default:
			break;
	}
	return "";
}

bool func_1181(int iParam0)
{
	if (func_949(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1182(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar0]))
		{
			if (func_387(uParam1[iVar0], iParam0, 1) < 225f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1183(int iParam0)
{
	return iParam0 != 0;
}

bool func_1184(int iParam0)
{
	if (-1829635046 == func_1391(81053684))
	{
		if (func_1186(iParam0))
		{
			return true;
		}
	}
	else if (func_1392(-525676072, iParam0))
	{
		if (func_1186(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1185()
{
	return Global_1946804->f_2792;
}

bool func_1186(int iParam0)
{
	if (func_1392(81053684, iParam0))
	{
		return true;
	}
	if (func_1392(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1187(int iParam0)
{
	if (func_1393())
	{
		return false;
	}
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	if (!func_1307(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_1188(int iParam0, int iParam1)
{
	bVar3 = func_1394(iParam0);
	if (func_1395(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1184(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1396();
			}
			else
			{
				iVar0 = func_1397();
			}
		}
		else if (func_250(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1398();
		}
		else
		{
			iVar0 = func_1399();
		}
	}
	else if (func_1186(&iVar2))
	{
		if (func_1395(iVar2, -1303648999))
		{
			iVar0 = func_1396();
		}
		else
		{
			iVar0 = func_1397();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1398();
	}
	else
	{
		iVar0 = func_1399();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

var func_1189(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_1190(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_1400(sParam1));
}

void func_1191(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1401(iParam0, iParam1, bParam2);
}

bool func_1192()
{
	return false;
}

bool func_1193(int iParam0, var uParam1)
{
	if (!func_1402(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_1194(int iParam0)
{
	return _money_get_cash_balance();
}

void func_1195(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_1196(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, uParam6, uParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1403(iParam0, iParam1, iParam18);
	}
}

bool func_1197(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_39))
	{
		return true;
	}
	if (func_284(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_217(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_217(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1198(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_1404(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

bool func_1199(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_932(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1200(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_1201(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1202(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1405(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1406(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1203(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_1204(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_1395(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1205(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_926(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1193(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_1407(iVar5);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1206(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (((_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, bParam6, bParam7) && (!bParam5 || !is_entity_dead(iVar0))) && is_entity_a_ped(iVar0)) && get_ped_index_from_entity_index(iVar0) == *uParam0)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, iParam1);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, iParam2);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, iParam3);
		return true;
	}
	if (bParam4)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, 0);
	}
	return false;
}

void func_1207()
{
	_0x93624b36e8851b42(get_player_index());
}

void func_1208(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1209(var uParam0, var uParam1)
{
	uParam1->f_10 = func_560(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_245(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1108();
	if (*uParam1)
	{
		if (bVar0 && !func_208((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1408(5))
			{
				func_1409(5);
				func_1410(5);
				func_1411(0);
				func_1412(0);
			}
		}
	}
	if (func_1413(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_208((*Global_1835011)[37]->f_1, 1)) && !func_208((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_208((*Global_1835011)[43]->f_1, 1)) && !func_208((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_289(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1141(iVar1))
	{
		bVar3 = true;
		if (func_1414(iVar1))
		{
			bVar4 = true;
		}
		if (func_1415(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_1416(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1408(0) && func_1408(1))
			{
				func_1417(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1418())
			{
				func_1419();
			}
			func_1411(0);
			func_1412(0);
			func_1420(uParam1->f_6);
		}
	}
	if (!func_1141(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1421(uParam1->f_10) == 0 || func_1422(uParam1->f_10) == 0) || func_1423(uParam1->f_10) == 0)
			{
				func_1424(uParam1->f_10);
			}
			func_1425(uParam1->f_10);
			func_1426(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_289(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1141(iVar1))
	{
		bVar3 = true;
		if (func_1414(iVar1))
		{
			bVar4 = true;
		}
		if (func_1415(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_245(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1427(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1428(uParam1->f_10) };
			Var10 = { func_1429() };
			func_1430(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_632(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1431(uParam1->f_10);
		if (uParam1->f_2 && !func_245(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_630(uParam1->f_10);
	if (func_632(uParam1->f_10))
	{
		iVar16 = func_631(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

int func_1210(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1132(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_1432(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1211(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_312(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_1212(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1132(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1432(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1213(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_245(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1132(iVar0, 2))
		{
			if (func_796(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1432(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_1214(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_312(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	func_1032(iVar0, bParam1);
}

bool func_1215(int iParam0, bool bParam1)
{
	if (bParam1 && !func_312(iParam0))
	{
		return false;
	}
	return !func_1132(iParam0, 4);
}

bool func_1216(int iParam0, bool bParam1)
{
	if (bParam1 && !func_312(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_1217(int iParam0, bool bParam1)
{
	if (bParam1 && !func_312(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_1218(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1221(iParam0, sParam4, iParam5);
	}
	func_1222(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_1219(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3;
	}
	return 0f, 0f, 0f;
}

int func_1220(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1307(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_1103(iVar25, 0) && func_1395(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1221(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1122(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1222(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1433())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1122(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1434(iVar0);
			func_1435(iVar0, 0, 0);
		}
		func_1122(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_869(func_1120(1644987397), iVar1);
	}
}

bool func_1223(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1224(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_1225(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1226(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1227(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1228(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1229(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_1230(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_1231(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_1232(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_611(iParam0);
		func_1436(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_1233(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_1437(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_1234(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1437(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_1235(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1437(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_1236(bool bParam0)
{
	func_1437(Global_1956614, bParam0);
}

void func_1237(bool bParam0)
{
	func_1437(&(Global_1415412->f_3), bParam0);
}

void func_1238(bool bParam0)
{
	if (func_1438(Global_1934051->f_33))
	{
		func_1439(Global_1934051->f_33, 7148155);
	}
	func_1437(&(Global_1934051->f_33), bParam0);
}

void func_1239(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1441(func_1440(iVar0));
		if (iVar1 != 0)
		{
			func_1439(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_1437((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_1240(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_1442(iVar0, -1);
		func_1443(iVar0, 0);
		func_1444(iVar0, 0);
		if (does_blip_exist(&(Global_36308[iVar0])))
		{
			if (bParam0)
			{
				set_radar_zoom(&(Global_36308[iVar0]));
			}
			remove_blip(Global_36308[iVar0]);
		}
		iVar0++;
	}
}

void func_1241(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_1242()
{
	func_1445();
	func_1446();
	func_1447();
}

void func_1243(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_1244(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

void func_1245(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_967(iParam0, 7);
}

void func_1246(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_966(iParam0, 7);
}

bool func_1247(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_670(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1248(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_438(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

bool func_1249(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_668(&uParam0))
	{
		return false;
	}
	if (func_740(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

void func_1250(int iParam0, float fParam1, int iParam2)
{
	func_145(iParam0, 1);
	iParam0->f_9 = fParam1;
	iParam0->f_10 = iParam2;
}

void func_1251(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	func_145(iParam0, 4);
	iParam0->f_14 = fParam1;
	iParam0->f_15 = fParam2;
	iParam0->f_16 = fParam3;
	iParam0->f_17 = fParam4;
	iParam0->f_18 = fParam5;
	iParam0->f_19 = iParam7;
	iParam0->f_20 = iParam8;
	iParam0->f_21 = iParam6;
}

void func_1252(int iParam0, char* sParam1, float fParam2, float fParam3)
{
	if (!is_string_null_or_empty(sParam1))
	{
		func_145(iParam0, 2);
		iParam0->f_11 = sParam1;
		iParam0->f_12 = fParam2;
		iParam0->f_13 = fParam3;
	}
}

void func_1253(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_8 = fParam8;
}

void func_1254(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { _get_object_offset_from_coords(vParam1, fParam4, uParam0->f_1) };
	vVar7 = { _get_object_offset_from_coords(vParam1, fParam4, uParam0->f_4) };
	vVar10 = { func_1039(vVar7 - vVar4) };
	vVar13 = { func_1448(vVar10, 2) };
	vVar16 = { vVar4 + vVar10 * FtoV((vdist(vVar4, vVar7) * uParam0->f_7)) + Vector(uParam0->f_8, uParam0->f_8, uParam0->f_8) * vVar13 };
	iVar19 = 0;
	if (func_378(*uParam0, 1))
	{
		_0x41f88a85a579a61d(uParam0->f_9);
		while (func_1449(&fVar0, &vVar1, uParam0->f_10, vVar4, vVar7, vVar16))
		{
			_0xdd9dc1ab63d513ce(vVar1);
			iVar19++;
			if (iVar19 > iParam5)
			{
			}
		else
		{
			}
		}
		_0x812c1563185c6fb2();
		iVar19 = 0;
		fVar0 = 0f;
		vVar1 = { 0f, 0f, 0f };
	}
	if (func_378(*uParam0, 2))
	{
		if (!is_string_null_or_empty(uParam0->f_11))
		{
			_0x4bd66b4e3427689b(uParam0->f_11);
			while (func_1449(&fVar0, &vVar1, uParam0->f_13, vVar4, vVar7, vVar16))
			{
				set_random_seed(timera());
				if ((uParam0->f_12 < 0f || uParam0->f_12 >= 1f) || get_random_float_in_range(0f, 1f) <= uParam0->f_12)
				{
					_0xf5e45cb1cf965d2d(vVar1);
					iVar19++;
					if (iVar19 > iParam5)
					{
					}
				else
				{
					}
					_0xf2f543d48f319a3a();
					iVar19 = 0;
					fVar0 = 0f;
					vVar1 = { 0f, 0f, 0f };
					if (func_378(*uParam0, 4))
					{
						while (func_1449(&fVar0, &vVar1, uParam0->f_21, vVar4, vVar7, vVar16))
						{
							set_random_seed(timera());
							if ((uParam0->f_14 < 0f || uParam0->f_14 >= 1f) || get_random_float_in_range(0f, 1f) <= uParam0->f_14)
							{
								fVar20 = get_random_float_in_range(uParam0->f_15, uParam0->f_16);
								fVar21 = get_random_float_in_range(uParam0->f_17, uParam0->f_18);
								_add_blood_pool_2(vVar1, fVar20, fVar21, uParam0->f_20, false, NaNf, false);
								iVar19++;
								if (iVar19 > iParam5)
								{
								}
							else
							{
								}
								iVar19 = 0;
								fVar0 = 0f;
								vVar1 = { 0f, 0f, 0f };
							}
						}
					}
				}
			}
		}
	}
}

bool func_1255(float fParam0)
{
	if (!func_1068(fParam0))
	{
		return false;
	}
	if (func_1450(fParam0->f_7, fParam0->f_8, func_1073(&(fParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_1073(&(fParam0->f_3), 4))
	{
		if (func_1451())
		{
			return true;
		}
	}
	return false;
}

bool func_1256(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_entity_dead(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (is_entity_occluded(iParam0))
		{
			return true;
		}
	}
	if (func_1248(get_entity_coords(iParam0, true, false), iParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1257(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_1258(vector3 vParam0, float fParam3)
{
	if (!func_1073(&(fParam3->f_3), 8))
	{
		return true;
	}
	if (func_970(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_1259(vector3 vParam0, float fParam3)
{
	fVar0 = func_1260(vParam0, 1);
	return fVar0 < fParam3->f_6;
}

float func_1260(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_1452(0) };
	vVar3 = { func_1039(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_1261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1262(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!is_entity_dead(iParam1[iVar0]) && iParam0 != iParam1[iVar0])
		{
			if (func_368(iParam0, iParam1[iVar0], 1, 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_1263(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_1405(iParam0, &uVar1, &uVar2, &iVar0, &uVar3);
	func_1406(&iVar4, iParam0, iVar0, uVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

void func_1264(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_1265(bool bParam0, int iParam1)
{
	if (!bParam0 && func_620(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (_0x76cf93d4b416b288(752193127) < 2)
	{
		iVar0 = (_0x76cf93d4b416b288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar0);
	func_328(bParam0);
	return 1;
}

void func_1266()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_1453(iVar17))
		{
			iVar18 = func_1454(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_270(&(Global_1359489->f_55));
	if (func_1455(1777191912, 1))
	{
		func_1456(1777191912, 1, 0);
	}
}

void func_1267(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_1224(iParam0, (func_1231(iParam0) + shift_left(1, 16)));
}

bool func_1268()
{
	return func_1338() > 0;
}

void func_1269(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1457(-1032423150, iParam1);
			break;
		case 18:
			func_1457(294066959, iParam1);
			func_1457(-1925639563, iParam1);
			func_1457(-378582304, iParam1);
			func_1457(-338306437, iParam1);
			break;
		case 20:
			func_1457(437270255, iParam1);
			break;
		case 2:
			func_1457(-304000413, iParam1);
			func_1457(-533612796, iParam1);
			func_1457(48036954, iParam1);
			break;
		case 23:
			func_1457(193108691, iParam1);
			func_1457(491732588, iParam1);
			func_1457(671962088, iParam1);
			func_1458(1);
			break;
		case 16:
			func_1457(-1836056650, iParam1);
			func_1457(-754657922, iParam1);
			func_1457(-1752355838, iParam1);
			func_1457(-1375324510, iParam1);
			break;
		case 59:
			func_1457(-514392105, iParam1);
			func_1457(-822060246, iParam1);
			if (func_1459(146))
			{
				func_1457(1372748575, iParam1);
			}
			func_1458(1);
			break;
		case 76:
			func_1457(1991352213, iParam1);
			if (func_1460() == 0)
			{
				func_1457(1852488616, iParam1);
			}
			else
			{
				func_1457(-9866350, iParam1);
			}
			break;
		case 44:
			func_1457(863852599, iParam1);
			func_1457(1228374935, iParam1);
			func_1457(1517889050, iParam1);
			func_1457(830657578, iParam1);
			func_1457(1901354958, iParam1);
			break;
		case 46:
			func_1457(-582805654, iParam1);
			func_1457(250378940, iParam1);
			func_1457(-2143265426, iParam1);
			break;
		case 17:
			func_1457(-941494139, iParam1);
			func_1457(1641489521, iParam1);
			break;
		case 19:
			func_1457(-1829423531, iParam1);
			func_1457(-1590504752, iParam1);
			func_1457(1357221321, iParam1);
			break;
		case 21:
			func_1457(-1037992610, iParam1);
			func_1457(-1286414399, iParam1);
			func_1458(0);
			break;
		case 15:
			func_1457(-1014460309, iParam1);
			func_1457(-1030502825, iParam1);
			break;
		case 33:
			func_1457(479388090, iParam1);
			func_1457(-1396342239, iParam1);
			func_1457(-619618632, iParam1);
			break;
		case 34:
			func_1457(1193561641, iParam1);
			break;
		case 64:
			func_1457(1363960851, iParam1);
			break;
		case 60:
			func_1457(-1232453926, iParam1);
			func_1457(-882833584, iParam1);
			break;
		case 73:
			func_1457(2023205767, iParam1);
			break;
		case 74:
			func_1457(-2135286513, iParam1);
			if (func_1460() == 0)
			{
				func_1457(33799444, iParam1);
			}
			else
			{
				func_1457(-161343203, iParam1);
			}
			break;
		case 8:
			func_1457(841639693, iParam1);
			func_1457(358952323, iParam1);
			break;
		case 36:
			func_1457(852538149, iParam1);
			func_1457(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1457(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1457(1116039310, iParam1);
			}
			break;
		case 27:
			func_1457(107633428, iParam1);
			func_1457(335902282, iParam1);
			func_1457(575673055, iParam1);
			func_1457(-425944207, iParam1);
			break;
		case 28:
			func_1457(-1941530250, iParam1);
			func_1457(1399269304, iParam1);
			func_1457(1839684664, iParam1);
			func_1457(923168503, iParam1);
			func_1457(-1485078322, iParam1);
			break;
		case 29:
			func_1457(574995900, iParam1);
			func_1457(-1691275407, iParam1);
			func_1457(-1725307861, iParam1);
			break;
		case 31:
			func_1457(-2108383238, iParam1);
			func_1457(-1321828931, iParam1);
			func_1457(-1632118592, iParam1);
			func_1457(334938948, iParam1);
			break;
		case 4:
			func_1457(115823701, iParam1);
			func_1457(-1896939736, iParam1);
			func_1457(-1830746356, iParam1);
			func_1457(-1235169781, iParam1);
			func_1458(0);
			break;
		case 6:
			func_1457(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1457(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1457(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1457(-384176140, iParam1);
			}
			break;
		case 25:
			func_1457(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1457(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1457(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1457(-1374849484, iParam1);
			}
			break;
		case 48:
			func_1457(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1457(217772674, iParam1);
			}
			else
			{
				func_1457(2071798160, iParam1);
			}
			if (func_1461(51))
			{
				func_1457(-792802286, iParam1);
			}
			break;
		case 49:
			func_1457(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1457(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1457(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1457(1402120602, iParam1);
			}
			break;
		case 58:
			func_1457(-1661934591, iParam1);
			break;
		case 50:
			func_1457(-1713759426, iParam1);
			break;
		case 52:
			func_1457(-314799932, iParam1);
			func_1457(-462260432, iParam1);
			func_1457(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_1457(345256028, iParam1);
				func_1457(-1635084094, iParam1);
			}
			else
			{
				func_1457(114267347, iParam1);
			}
			break;
		case 32:
			func_1457(615304157, iParam1);
			break;
		case 47:
			func_1457(415434835, iParam1);
			break;
		case 69:
			func_1457(1373465877, iParam1);
			if (func_208((*Global_1347702)[9]->f_15, 1))
			{
				func_1457(-2058273527, iParam1);
			}
			break;
		case 70:
			func_1457(451334985, iParam1);
			if (func_1460() == 0)
			{
				func_1457(-224150200, iParam1);
			}
			else
			{
				func_1457(289012628, iParam1);
			}
			break;
		case 71:
			if (func_1460() == 0)
			{
				func_1457(-41692120, iParam1);
			}
			else
			{
				func_1457(1537840678, iParam1);
			}
			break;
		case 37:
			func_1457(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1457(1842132550, iParam1);
			}
			else
			{
				func_1457(-785735240, iParam1);
			}
			func_1457(-1605690566, iParam1);
			break;
		case 13:
			func_1457(-731367459, iParam1);
			func_1457(224176585, iParam1);
			func_1457(-14545580, iParam1);
			break;
		case 53:
			func_1457(1095274522, iParam1);
			break;
		case 54:
			func_1457(-572027988, iParam1);
			break;
		case 56:
			func_1457(1339307101, iParam1);
			func_1457(2102267732, iParam1);
			break;
		case 57:
			func_1457(710102686, iParam1);
			break;
		case 22:
			func_1457(-1754368482, iParam1);
			func_1457(-2071408557, iParam1);
			break;
		case 12:
			func_1457(-181334543, iParam1);
			break;
		case 0:
			func_1457(-2134669864, iParam1);
			func_1457(-548289709, iParam1);
			func_1457(-911271922, iParam1);
			func_1457(-604455775, iParam1);
			break;
		case 1:
			func_1458(1);
			break;
		case 3:
			if (func_1298())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_1457(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_1457(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_1270()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_1271(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1457(-145926707, iParam1);
			func_1457(-604922090, iParam1);
			func_1457(-848690769, iParam1);
			break;
		case 1:
			func_1457(-1477631591, iParam1);
			break;
		case 2:
			func_1457(76112544, iParam1);
			break;
		case 9:
			func_1457(1396404308, iParam1);
			func_1457(-1357381228, iParam1);
			if (func_208((*Global_1835011)[69]->f_1, 1))
			{
				func_1457(1902679064, iParam1);
			}
			else
			{
				func_1457(-2146422425, iParam1);
			}
			break;
		case 22:
			func_1457(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_1457(-1934184559, iParam1);
				func_1457(1281755988, iParam1);
			}
			else
			{
				func_1457(-1745220872, iParam1);
				func_1457(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_1457(-1641504538, iParam1);
				func_1457(-988014485, iParam1);
			}
			else if (func_1459(26))
			{
				func_1457(-343043950, iParam1);
				func_1457(-640062214, iParam1);
			}
			else
			{
				func_1457(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1457(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1457(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1457(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1457(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1457(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1457(1301690984, iParam1);
				}
			}
			else
			{
				func_1457(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1457(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1457(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1457(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1457(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1457(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1457(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_1457(-754570528, iParam1);
			}
			else
			{
				func_1457(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_1457(-2072125821, iParam1);
			}
			else
			{
				func_1457(270040030, iParam1);
			}
			break;
		case 37:
			func_1457(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_1457(-505314737, iParam1);
				func_1457(-1853052860, iParam1);
			}
			else
			{
				func_1457(-1975624994, iParam1);
				func_1457(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_1457(1690231002, iParam1);
			}
			else
			{
				func_1457(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_1457(1225386280, iParam1);
			}
			else if (func_1459(54))
			{
				func_1457(-283235773, iParam1);
			}
			else
			{
				func_1457(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_1457(1355398007, iParam1);
			}
			else
			{
				func_1457(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_1457(574636806, iParam1);
			}
			else
			{
				func_1457(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_1457(821118338, iParam1);
			}
			else if (func_1459(39))
			{
				func_1457(846829260, iParam1);
			}
			else
			{
				func_1457(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_1321((*Global_1835011)[33]->f_1) == 1)
				{
					func_1457(1422779093, iParam1);
				}
				else
				{
					func_1457(-1769536986, iParam1);
				}
			}
			else
			{
				func_1457(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_1457(352134789, iParam1);
			}
			else if (func_1459(43))
			{
				func_1457(260723113, iParam1);
			}
			else
			{
				func_1457(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_1457(-457958799, iParam1);
			}
			else
			{
				func_1457(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_1459(41))
			{
				func_1457(-546824600, iParam1);
			}
			else
			{
				func_1457(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_1457(1297261593, iParam1);
			}
			else
			{
				func_1457(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_1457(2068484886, iParam1);
			}
			else if (func_1459(49))
			{
				func_1457(-1489080639, iParam1);
				func_1457(-2102244050, iParam1);
			}
			else
			{
				func_1457(-1863040467, iParam1);
			}
			break;
		case 51:
			func_1457(-2055943209, iParam1);
			break;
		case 58:
			if (func_208((*Global_1347702)[23]->f_15, 1))
			{
				func_1457(1650066845, iParam1);
			}
			else
			{
				func_1457(151370023, iParam1);
			}
			func_1457(1426057961, iParam1);
			func_1457(476379584, iParam1);
			break;
		case 59:
			func_1457(-1638117866, iParam1);
			break;
		case 62:
			func_1457(199541730, iParam1);
			break;
		case 63:
			func_1457(1703485804, iParam1);
			func_1457(-800449045, iParam1);
			break;
		case 65:
			func_1457(-1678210868, iParam1);
			func_1457(-1448238026, iParam1);
			func_1457(-1200864845, iParam1);
			func_1457(1473511536, iParam1);
			break;
		case 66:
			func_1457(-1774490051, iParam1);
			func_1457(-34645921, iParam1);
			func_1457(174027075, iParam1);
			func_1457(-1155999, iParam1);
			func_1458(1);
			break;
		case 67:
			func_1457(701612593, iParam1);
			func_1457(-1069631343, iParam1);
			func_1457(1673428882, iParam1);
			break;
		case 68:
			func_1457(-739133286, iParam1);
			func_1457(-2130089358, iParam1);
			func_1457(2056190391, iParam1);
			func_1457(1941753817, iParam1);
			func_1458(0);
			break;
		case 70:
			func_1457(-1217555753, iParam1);
			break;
		case 71:
			func_1457(697048821, iParam1);
			break;
		case 73:
			func_1457(-553148661, iParam1);
			break;
		case 75:
			func_1457(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_1457(1414263863, iParam1);
			}
			else
			{
				func_1457(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_1457(1835465936, iParam1);
				func_1457(523715611, iParam1);
			}
			else if (func_1459(78))
			{
				func_1457(1420338873, iParam1);
			}
			else
			{
				func_1457(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_1457(10180941, iParam1);
			}
			else if (func_1459(79))
			{
				func_1457(768420635, iParam1);
			}
			else
			{
				func_1457(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_1457(-383601523, iParam1);
			}
			else
			{
				func_1457(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_1457(1606472408, iParam1);
			}
			else
			{
				func_1457(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_1457(-203571927, iParam1);
			}
			else
			{
				func_1457(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_1457(729886222, iParam1);
			}
			else
			{
				func_1457(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_1457(-714816362, iParam1);
			}
			else
			{
				func_1457(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_1457(-932932179, iParam1);
				func_1457(-1458537240, iParam1);
			}
			else
			{
				func_1457(-1764383885, iParam1);
				func_1457(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_1457(1741466706, iParam1);
			}
			else
			{
				func_1457(1405815775, iParam1);
			}
			break;
		case 94:
			func_1457(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1457(1905280979, iParam1);
			}
			else
			{
				func_1457(-1966245299, iParam1);
			}
			func_1457(721468880, iParam1);
			break;
		case 99:
			func_1457(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_1457(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1457(-1117781095, iParam1);
				}
				else
				{
					func_1457(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1457(141494548, iParam1);
			}
			else
			{
				func_1457(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_1457(-369525697, iParam1);
			}
			else if (func_1459(101))
			{
				func_1457(1595015219, iParam1);
			}
			else
			{
				func_1457(-321486961, iParam1);
			}
			break;
		case 103:
			func_1457(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_1457(793460477, iParam1);
				func_1457(-1610242176, iParam1);
			}
			else if (func_1459(103))
			{
				func_1457(1830897187, iParam1);
			}
			else
			{
				func_1457(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_1457(1528309077, iParam1);
			}
			else if (func_1459(104))
			{
				func_1457(1864966105, iParam1);
			}
			else
			{
				func_1457(-103336013, iParam1);
			}
			break;
		case 108:
			func_1457(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_1457(-1123227713, iParam1);
				func_1457(-889574341, iParam1);
			}
			else
			{
				func_1457(2065385917, iParam1);
				func_1457(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_1457(-887421691, iParam1);
			}
			else if (func_1459(109))
			{
				func_1457(-1318117949, iParam1);
			}
			else
			{
				func_1457(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1457(284822762, iParam1);
				}
				else
				{
					func_1457(-1425017554, iParam1);
				}
			}
			else if (func_1459(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1457(553087292, iParam1);
				}
				else
				{
					func_1457(-1766870331, iParam1);
					func_1457(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1457(-1980598735, iParam1);
			}
			else
			{
				func_1457(-442732098, iParam1);
				func_1457(1955756409, iParam1);
			}
			break;
		case 115:
			func_1457(394303528, iParam1);
			func_1457(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_1457(1182403394, iParam1);
			}
			else
			{
				func_1457(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_1457(924445424, iParam1);
			}
			else
			{
				func_1457(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_1457(430755273, iParam1);
				func_1457(-1473879802, iParam1);
			}
			else
			{
				func_1457(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_1457(73885747, iParam1);
			}
			else if (func_1459(117))
			{
				func_1457(1559707913, iParam1);
			}
			else
			{
				func_1457(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_1457(-2103887972, iParam1);
			}
			else if (func_1459(118))
			{
				func_1457(-435828462, iParam1);
			}
			else
			{
				func_1457(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_1457(2054486196, iParam1);
			}
			else
			{
				func_1457(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_1457(-570086056, iParam1);
			}
			else if (func_1459(121))
			{
				func_1457(32337856, iParam1);
			}
			else
			{
				func_1457(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_1457(813493663, iParam1);
			}
			else if (func_1459(122))
			{
				func_1457(-2132763590, iParam1);
			}
			else
			{
				func_1457(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_1457(-66240572, iParam1);
				func_1457(1563075046, iParam1);
			}
			else
			{
				func_1457(-787011772, iParam1);
				func_1457(-1523377438, iParam1);
			}
			break;
		case 127:
			func_1457(61020800, iParam1);
			break;
		case 129:
			func_1457(428985222, iParam1);
			break;
		case 131:
			func_1457(-1393851036, iParam1);
			break;
		case 133:
			func_1457(1559531342, iParam1);
			break;
		case 134:
			func_1457(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1457(-1374407408, iParam1);
				}
				else
				{
					func_1457(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1457(-472672138, iParam1);
				}
				else
				{
					func_1457(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1457(-1678710489, iParam1);
			}
			else
			{
				func_1457(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_1457(1717582460, iParam1);
			}
			else
			{
				func_1457(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_1457(1568112362, iParam1);
				func_1457(1388317526, iParam1);
			}
			else if (func_1459(136))
			{
				func_1457(-1597534828, iParam1);
				func_1457(-1207918353, iParam1);
			}
			else
			{
				func_1457(-1940891082, iParam1);
				func_1457(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_1457(448334530, iParam1);
				func_1457(2145375502, iParam1);
			}
			else
			{
				func_1457(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1457(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1457(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1457(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1457(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_1457(-66616327, iParam1);
			}
			else
			{
				func_1457(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_1457(1862916706, iParam1);
			}
			else if (func_1459(147))
			{
				func_1457(675105199, iParam1);
			}
			else
			{
				func_1457(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_1457(174409701, iParam1);
			}
			else if (func_1459(148))
			{
				func_1457(-1730895475, iParam1);
			}
			else
			{
				func_1457(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_1457(1295237052, iParam1);
			}
			else if (func_1459(149))
			{
				func_1457(-788577684, iParam1);
			}
			else
			{
				func_1457(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_1272(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_320(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_1462(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_1321((*Global_1835011)[9]->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_441(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_441(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_1273(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_1463(iParam0);
	iVar3 = func_1464(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_452();
				func_376(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_1465(iParam0, 1);
			if (func_1466(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_1467(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1468(1, iParam0);
				}
				else
				{
					func_1469(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1274(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

void func_1275(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

int func_1276(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_1277(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

int func_1278(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_1279()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_1108())
	{
		return false;
	}
	if (!func_208((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_208((*Global_1835011)[2]->f_1, 1) && func_208((*Global_1347702)[120]->f_15, 1)) && !func_208((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_208((*Global_1835011)[37]->f_1, 1) && !func_208((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_208((*Global_1835011)[57]->f_1, 1) && !func_208((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_208((*Global_1835011)[26]->f_1, 1) && !func_208((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_208((*Global_1835011)[62]->f_1, 1) && func_208((*Global_1835011)[63]->f_1, 1)) && !func_208((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_208((*Global_1835011)[75]->f_1, 1) && !func_208((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_208((*Global_1835011)[76]->f_1, 1) && !func_208((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_208((*Global_1835011)[40]->f_1, 1) && func_208((*Global_1835011)[41]->f_1, 1)) && !func_208((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_208((*Global_1835011)[62]->f_1, 1) && func_208((*Global_1835011)[63]->f_1, 1)) && !func_208((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_208((*Global_1835011)[65]->f_1, 1) && func_208((*Global_1835011)[66]->f_1, 1)) && !func_208((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_1280()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_1470(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_1281(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	if (!func_1471(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1472(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_1473(iParam0, bParam2);
	iVar2 = 0;
	if (func_1474(iParam0, 0, 0) == 0)
	{
		if (func_1475(iParam0))
		{
			iVar5 = func_1476(iParam0);
			iVar6 = func_1477(iVar5);
			iVar7 = func_1478(iVar6) + 1;
			func_1479(iVar5);
			if (func_1480(38))
			{
				func_960(483, 0);
			}
			else
			{
				func_960(482, 0);
			}
			if (iVar7 == func_1481(iVar6))
			{
				func_1281(func_1482(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_1108() && func_1483(4))
				{
					if (func_1108() && (func_1484(38) || func_1480(38)))
					{
						func_1486(38, func_1482(iVar6), 0, 0, func_1485(), 0, -1, 0);
						func_1487(2);
					}
					else
					{
						func_1486(38, func_1482(iVar6), 0, 0, func_1485(), 0, -1, 0);
						func_1487(1);
					}
				}
			}
			else if (func_1108() && func_1483(4))
			{
				if (func_1108() && (func_1484(38) || func_1480(38)))
				{
					func_1486(38, 0, 0, 0, func_1485(), 0, -1, 0);
					func_1487(2);
				}
				else
				{
					func_1486(38, 0, 0, 0, func_1485(), 0, -1, 0);
					func_1487(1);
				}
			}
			if (func_1108() && func_1483(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_1108() && (func_1484(38) || func_1480(38)))
					{
						func_1488(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1488(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_1095(iParam0) == -1037537535)
	{
		if ((!func_1395(iParam0, 866047851) && !func_1395(iParam0, -1979000645)) && !func_1395(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1489(iParam0, 8388608) && !func_1107(28))
	{
		func_1490(28);
	}
	if (!bVar3)
	{
		if (func_1395(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_933(iParam0) == -1447088266)
			{
				iVar1 = func_1492(func_1491(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_1() == -1)
					{
						func_1493(iVar1);
					}
					if (func_861(0) && func_534(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_862(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_1() == -1)
					{
						func_1493(iParam0);
					}
					if (func_861(0) && func_534(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_862(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_1095(iParam0) == -427144552)
		{
			if (!func_1494(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1095(iParam0) == 307971639 && func_1105(iParam0))
		{
			if (!func_1495(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1395(iParam0, 866047851))
		{
			func_1496(iParam0);
		}
		else if (func_1395(iParam0, 2000026003))
		{
			func_1497(iParam0);
		}
		else if (func_1395(iParam0, -103750053))
		{
			func_869(func_1498(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_869(func_868(-717883113, 2091222383), iVar0);
		}
		else if (func_1395(iParam0, -121341956) && !func_1395(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_208((*Global_1835011)[4]->f_1, 1))
				{
					func_960(498, 0);
				}
			}
			if (func_1395(iParam0, -2017733358) || func_1395(iParam0, -1369131378))
			{
				func_1499(iParam0);
			}
		}
		else if (func_1395(iParam0, -136654233))
		{
			if (func_1395(iParam0, -1021472396))
			{
			}
		}
		else if (func_1395(iParam0, -1466706512) && func_1395(iParam0, 1147021565))
		{
			func_960(484, 0);
		}
		else if (func_1395(iParam0, 1147021565) && func_1395(iParam0, -524514947))
		{
		}
		else if (func_1395(iParam0, 554195525))
		{
		}
		else if (func_1395(iParam0, 589988438))
		{
			if (func_1500())
			{
				func_1046(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1395(iParam0, 787083290) && func_1395(iParam0, 949916894))
		{
			func_1501(iParam0);
		}
		else if (func_1395(iParam0, -1718133314))
		{
			func_1502(iParam0);
		}
		else if (func_1395(iParam0, -1738650224))
		{
			func_1503(iParam0);
		}
		else if (func_1395(iParam0, -1112814642) && func_1395(iParam0, 949916894))
		{
			func_1504(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_1395(iParam0, 1841149704))
		{
			func_1505();
		}
		else if (func_1395(iParam0, 606799272))
		{
			func_1506(iParam0, iParam1);
			func_1507(iParam0);
		}
		else if (func_1395(iParam0, -1112814642) && func_1395(iParam0, -1697809989))
		{
			func_1508(iParam0, 0, 0, 0);
		}
		else if (func_1395(iParam0, -2017733358) || func_1395(iParam0, -1369131378))
		{
			func_1499(iParam0);
		}
		else if (func_1395(iParam0, -1921346699))
		{
			if (func_1() != -1)
			{
				return false;
			}
			func_1509(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_1395(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_1307(215778062, 1, 0))
					{
						func_1281(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_1307(670273567, 1, 0))
					{
						func_1281(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_1307(-967317137, 1, 0))
					{
						func_1281(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_1307(526074061, 1, 0))
					{
						func_1281(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_1307(-1045488665, 1, 0))
					{
						func_1281(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_1307(471514780, 1, 0))
					{
						func_1281(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1395(iParam0, -839724752) && func_1489(iParam0, 4))
		{
			if (!func_1480(42))
			{
				func_1510(iParam0);
			}
		}
		else if (func_1395(iParam0, 1399091007))
		{
			func_1511(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_1395(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_1281(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_1490(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_1512(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1513(&iVar9, 0))
				{
					func_534(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_1() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_1512(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_960(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1514();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1515();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1516();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1517();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1242();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1518(499813453, 854119837, 0);
				func_1519(499813453, 0);
				func_1520(1);
				break;
			case 2127812557:
				func_1518(499813453, -1292544588, 0);
				func_1519(499813453, 0);
				func_1520(2);
				break;
			case 808991383:
				func_1518(499813453, -1003325394, 0);
				func_1519(499813453, 0);
				func_1520(4);
				break;
			case 1134518629:
				func_1518(666607663, -335460405, 0);
				func_1519(666607663, 0);
				func_1521(1);
				break;
			case 902940106:
				func_1518(666607663, 903797617, 0);
				func_1519(666607663, 0);
				func_1521(2);
				break;
			case -418174898:
				func_1518(666607663, 669728650, 0);
				func_1519(666607663, 0);
				func_1521(4);
				break;
			case -648114971:
				func_1518(-220219788, 1214120047, 0);
				func_1519(-220219788, 0);
				func_1522(1);
				break;
			case 211153747:
				func_1518(-220219788, 655769340, 0);
				func_1519(-220219788, 0);
				func_1522(2);
				break;
			case -32876996:
				func_1518(-220219788, 885316185, 0);
				func_1519(-220219788, 0);
				func_1522(4);
				break;
			case 1191437462:
				func_1518(218622660, -1491419385, 0);
				func_1519(218622660, 0);
				func_1523(1);
				break;
			case 1119149048:
				func_1518(218622660, 1809565830, 0);
				func_1519(218622660, 0);
				func_1523(2);
				break;
			case 506073827:
				func_1518(390004462, -628873767, 0);
				func_1519(390004462, 0);
				func_1524(1);
				break;
			case -1876986168:
				func_1518(390004462, -405421956, 0);
				func_1519(390004462, 0);
				func_1524(2);
				break;
			case 2142623221:
				func_1518(390004462, -1108972386, 0);
				func_1519(390004462, 0);
				func_1524(4);
				break;
			case 1508215381:
				func_1518(6410548, 1053716392, 0);
				func_1519(6410548, 0);
				func_1525(1);
				break;
			case -888935280:
				func_1518(6410548, 806507056, 0);
				func_1519(6410548, 0);
				func_1525(2);
				break;
			case -1252474566:
				func_1518(6410548, 1571925350, 0);
				func_1519(6410548, 0);
				func_1525(4);
				break;
			case -1465702449:
				func_1518(6410548, 1330352282, 0);
				func_1519(6410548, 0);
				func_1525(8);
				break;
			case -21093309:
				func_1527(242, func_1526(-21093309), 0);
				break;
			case 204375141:
				func_1527(240, func_1526(204375141), 0);
				break;
			case -417963070:
				func_1527(241, func_1526(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1528(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1528(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1528(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1528(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1528(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1528(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_960(488, 0);
				break;
			case 1613651027:
				func_960(491, 0);
				break;
			case -885810591:
				func_960(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_1281(func_1529(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1281(func_1530(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_1107(1))
				{
					func_960(487, 0);
				}
				break;
			case -898386032:
				func_960(486, 0);
				break;
			case -2035110427:
				if (func_1() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_960(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_1531(&iVar10);
		if (!func_1532(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_861(0))
		{
			return true;
		}
		if (func_1095(iParam0) == -1037537535)
		{
			func_1533(iParam0);
		}
		if (func_1395(iParam0, -1979000645))
		{
			func_1534(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_861(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_1281(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1535(iVar2, 0);
		}
	}
	Var35 = { func_1536(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_1537(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1395(iParam0, -839724752))
		{
			func_1538(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1539(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_1282(int iParam0)
{
	if (func_1395(iParam0, 1989861793))
	{
		iVar0 = func_1540(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1541(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1542(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1543(iVar14, iVar1);
					if (iVar15 != iParam0 && func_1103(iVar15, 0))
					{
						if (func_1544(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1545(iVar1);
				if (bVar13)
				{
					func_1546(iParam0);
				}
				else
				{
					func_960(306, 0);
				}
			}
		}
	}
}

void func_1283()
{
	if (func_1() != -1)
	{
		return;
	}
	func_1547();
	func_1548();
	func_1549();
	func_1550();
	func_1551();
	func_1552();
	func_1553();
}

void func_1284(int iParam0)
{
	func_1554(iParam0, 1, 1, -142743235, 1);
	if (func_1555(iParam0))
	{
		func_1556(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1558(func_1557(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1559(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_1560() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1561(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1561(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_1562(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_1562(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_1562(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_1562(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_1562(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_1562(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_1562(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_1562(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_1562(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1563(iVar8, iVar0))
				{
					func_1564(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1563(iVar8, iVar0))
		{
			func_1564(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
			{
				*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
			{
				*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
		{
			*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
		if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
		{
			*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar1] = { *Global_1946804->f_1616.f_1[iVar1] };
		iVar1++;
	}
}

void func_1285()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1563(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_1560() == -2125499975 || func_1560() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1564(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1564(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5] == &Global_26796.f_627.f_1.f_1.f_1[iVar5] || 0 == &Global_26796.f_627.f_1.f_1.f_1[iVar5])
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar5] = { vVar2 };
	}
}

void func_1286()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_1470(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_1287(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_208((*Global_1835011)[59]->f_1, 1) || func_208((*Global_1347702)[1]->f_15, 1)) || func_101((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_1455(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_1288(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_1558(iParam0, 1);
	func_1565(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_1565(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_1566(17, iParam0, 0, 0, 0);
		}
	}
	if (func_1() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1565(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1565(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_1289()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_1470(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_1290()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_1470(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_1291(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_855(iParam1, 1, 0) };
		iParam3 = func_1567(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1568(iParam3);
	return func_1512(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_1292()
{
	return _unlock_is_unlocked(99890643);
}

void func_1293(int iParam0)
{
	if (!func_354(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_visible(iVar0, true);
}

bool func_1294(int iParam0, int iParam1)
{
	if (!func_1569(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1570(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1571(Global_40.f_9910[iParam1], 4);
}

void func_1295(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1569(iParam0))
	{
		return;
	}
	if (!func_375(iParam1))
	{
		return;
	}
	if (func_377(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1570(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_1294(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1572(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_146(0, 0, 1))
		{
			func_1325(0, 17);
		}
	}
}

void func_1296()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_1470(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_1297()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_1470(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_1298()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1299()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_1470(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_1300()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_1470(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_1301()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_1470(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_1302()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_1470(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_1303()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_1470(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_1304()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_1470(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_1305(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1306(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_1307(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1095(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_1573(iParam0, 1))
		{
			return false;
		}
	}
	return func_1474(iParam0, 0, bParam2) >= iParam1;
}

void func_1308(int iParam0)
{
	if (func_866(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1122(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1122(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_1309()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_1470(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_1310()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_1470(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_1311()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_1470(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_1312()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_1470(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_1313()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_1470(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_1314()
{
	if (func_1574() > 1)
	{
		func_1575();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_960(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_960(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_960(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_960(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_960(452, 1);
		}
	}
}

bool func_1315(int iParam0)
{
	return func_1576(iParam0, 4, 1);
}

void func_1316(int iParam0)
{
	func_1577(iParam0, 4, 1);
}

void func_1317(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_1120(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1318(int iParam0)
{
	if (func_866(32768))
	{
		return;
	}
	if (!func_100(iParam0))
	{
		return;
	}
	func_333(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_320(iParam0))
	{
		case 1:
			func_869(func_868(909007663, -587839005), 1);
			iVar0 = func_441(iParam0);
			func_869(func_1120(-634848880), 1);
			switch (func_613(iVar0))
			{
				case 0:
					func_869(func_868(909007663, 1325140787), 1);
					break;
				case 1:
					func_869(func_868(909007663, 2101241783), 1);
					break;
				case 2:
					func_869(func_868(909007663, -1296936294), 1);
					break;
				case 3:
					func_869(func_868(909007663, -798388728), 1);
					break;
				case 4:
					func_869(func_868(909007663, -1787586531), 1);
					break;
				case 5:
					func_869(func_868(909007663, -1002834519), 1);
					break;
				case 6:
					func_869(func_868(909007663, -50600144), 1);
					break;
				case 7:
					func_869(func_868(909007663, -348503123), 1);
					break;
				case 8:
					func_869(func_868(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_869(func_868(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_869(func_868(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_441(iParam0);
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_869(func_1120(-634848880), 1);
			}
			if (func_443((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_443((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_869(func_868(909007663, -587839005), 1);
				}
				else
				{
					func_869(func_868(909007663, -2049243343), 1);
				}
			}
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_614(iVar1))
				{
					case 0:
						func_869(func_868(909007663, 1325140787), 1);
						break;
					case 1:
						func_869(func_868(909007663, 2101241783), 1);
						break;
					case 2:
						func_869(func_868(909007663, -1296936294), 1);
						break;
					case 3:
						func_869(func_868(909007663, -798388728), 1);
						break;
					case 4:
						func_869(func_868(909007663, -1787586531), 1);
						break;
					case 5:
						func_869(func_868(909007663, -1002834519), 1);
						break;
					case 6:
						func_869(func_868(909007663, -50600144), 1);
						break;
					case 7:
						func_869(func_868(909007663, -348503123), 1);
						break;
					case 8:
						func_869(func_868(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_869(func_868(909007663, 532323983), 1);
				}
			}
			else if (func_443((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_443((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_443((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_869(func_868(909007663, 551192206), 1);
				}
				else
				{
					func_869(func_868(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_1319()
{
	if (func_1() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_4)
	{
		return;
	}
	if (!func_1578(64))
	{
		return;
	}
	else if (func_322(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_146(0, 0, 1) || func_801()) || func_1279())
	{
		return;
	}
	iVar0 = func_325();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_1579(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_1580(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_1580(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1019(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_1325(0, -1);
	}
	if (iVar2 > 0)
	{
		func_1581("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1582(1, 0);
	Global_1956575->f_4 = 1;
}

void func_1320(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_866(32768))
	{
		return;
	}
	func_1218(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!_unlock_is_unlocked(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1583(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_1321(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_1584(iParam0);
}

int func_1322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1220(1330954593, 0, -1);
		case 1:
			return func_1220(1330954593, 0, -1);
		case 2:
			return func_1220(1330954593, 0, -1) * 2;
		case 4:
			return func_1220(1330954593, 0, -1);
		case 5:
			return func_1220(1330954593, 0, -1);
		case 6:
			return func_1220(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_1220(1330954593, 0, -1) * 3;
		case 9:
			return func_1220(1330954593, 0, -1) * 3;
		case 10:
			return func_1220(1330954593, 0, -1) * 3;
		case 11:
			return func_1220(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_1323(int iParam0)
{
	if (!func_100(iParam0))
	{
		return cVar0;
	}
	switch (func_320(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_1462(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_441(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_802(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_1324(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_1585();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_320(Global_1879514->f_1) == 1)
			{
				func_1123(5, 1);
			}
			else if (func_320(Global_1879514->f_1) == 8 && (func_443((*Global_1347702)[func_441(Global_1879514->f_1)]->f_12, 1) || func_443((*Global_1347702)[func_441(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_1123(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_1325(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1054(&Global_0, 8);
	}
	if (!func_1108() || func_1() != -1)
	{
		return;
	}
	func_1054(&Global_0, 1);
}

bool func_1326()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_1327(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_1586();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = absi(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = to_float(iVar0);
	fVar7 = to_float(&Global_1347398);
	fVar8 = to_float(iVar3);
	iVar4 = func_1114(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_1114(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1587())
		{
			func_1588(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1589())
		{
			func_1588(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1590())
		{
			func_1588(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1591())
	{
		func_1588(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_869(func_1120(661720433), iVar1);
	iVar10 = func_1586();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

Vector3 func_1328(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_1329(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_1330(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_1331(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_1329(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_1332(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

float func_1333(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_1334()
{
	return Var0;
}

bool func_1335(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1336(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1337(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

int func_1338()
{
	return Global_40.f_11095.f_35;
}

void func_1339(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1592(bParam1);
	}
}

void func_1340(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1341(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_1342(int iParam0)
{
	if (!func_1193(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_1343(int iParam0, int iParam1, int iParam2)
{
	if (!func_1193(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1344(int iParam0)
{
	return iParam0;
}

int func_1345()
{
	iVar0 = func_1111();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_1346(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1347(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1348(int iParam0, int iParam1, var uParam2)
{
	if (!func_1347(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1349()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

void func_1350(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_1351(int iParam0)
{
	return iParam0 != 0;
}

bool func_1352()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_1353(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

void func_1354(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1594(func_1593(255), 109029619));
	}
	else if (func_1270())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1113();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1355(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_1356(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1594(func_1593(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1270())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1113())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1357(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_1358(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1359(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1421(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1355(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1355(iParam0) + 1;
	fVar6 = func_1595(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1333(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1360(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_1361(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1362(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_1596((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1363(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1376((*uParam0)[iVar0]))
		{
			func_966((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1364(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1597(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_312((*uParam2)[iVar0]->f_6))
		{
			func_966((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1365(int* iParam0)
{
	iVar0 = func_1598(*iParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_1366(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1367(int* iParam0, int* iParam1)
{
	if (!func_1150(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_966(iParam1, 19);
			func_1378(iParam0, 23);
			func_1599(iParam1, 2);
		}
	}
}

bool func_1368(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1600(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_1601(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_1369(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1597(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_1370(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1376(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1597(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1371(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1602(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1215(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_778(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_778(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1603(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1372(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1217(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1604(iParam1, 1))
	{
		func_1605(iParam1, 1);
		return true;
	}
	return false;
}

void func_1373(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_662((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1374(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_1375(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1376(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1377(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_1378(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1379(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1380(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1381(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1383(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1383(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1382(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1383(iParam0, 65536) && !func_1383(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1383(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1383(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1383(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1384()
{
	return Global_1905944->f_5694;
}

void func_1385(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2147[iParam1] = iParam0;
	}
	else
	{
		iLocal_2147[iVar2159] = iParam0;
		iLocal_2163 = iVar2159 + 1;
	}
}

char* func_1386()
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "Default_Shocked";
		case 1:
			return "Default_Scared";
			return "";
			default:
				break;
	}
}

int func_1387(float fParam0)
{
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iVar2160)
	{
		if (fParam0[iVar0] > fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fParam0[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1388(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2160)
	{
		if (&iLocal_2147[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1389(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		if (has_anim_event_fired(*iParam0, 1428722195))
		{
			iLocal_470[0] = 0;
		}
		else if (has_anim_event_fired(*iParam0, 1738422014))
		{
			iLocal_470[0] = 1;
		}
		else if (has_anim_event_fired(*iParam0, -1327707782))
		{
			iLocal_470[0] = 2;
		}
		else if (has_anim_event_fired(*iParam0, -1022661161))
		{
			iLocal_470[0] = 3;
		}
		else
		{
			iLocal_470[0] = -1;
		}
	}
}

void func_1390(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		if (has_anim_event_fired(*iParam0, 1428722195))
		{
			iLocal_470[1] = 0;
		}
		else if (has_anim_event_fired(*iParam0, 1738422014))
		{
			iLocal_470[1] = 1;
		}
		else
		{
			iLocal_470[1] = -1;
		}
	}
}

int func_1391(int iParam0)
{
	iVar0 = func_1558(func_1606(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1392(int iParam0, int iParam1)
{
	iVar1 = func_1558(func_1606(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_933(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1393()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1607())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_1394(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1186(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1395(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_1396()
{
	iVar0 = 1549701178;
	switch (func_1608())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1397()
{
	iVar0 = 614608656;
	switch (func_1608())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1398()
{
	iVar0 = -1832677570;
	switch (func_1608())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1399()
{
	iVar0 = 1623252156;
	switch (func_1608())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

char* func_1400(char* sParam0)
{
	return sParam0;
}

void func_1401(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

bool func_1402(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1403(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

void func_1404(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		disable_control_action(0, -640622144, false);
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	if (is_ped_on_mount(Global_35))
	{
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
	}
	if (bParam0)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1304887797, false);
	}
	if (bParam3)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		if (is_ped_on_mount(Global_35))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		disable_control_action(0, -620139643, false);
	}
	func_1037(0);
	if (bParam1)
	{
		disable_control_action(0, -822242784, false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (bParam2)
		{
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_reset_flag(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!get_ped_config_flag(Global_35, 43, true))
			{
				set_ped_config_flag(Global_35, 43, true);
			}
		}
	}
}

void func_1405(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1406(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_1407(int iParam0)
{
	return func_1609(iParam0);
}

bool func_1408(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1423(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1409(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1141(iParam0))
	{
		return;
	}
	iVar0 = func_289(iParam0);
	func_1610(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1611(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1612(iParam0, 0);
	func_633(iParam0);
}

void func_1410(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_1613(&Var0);
	func_1614(iParam0, Var0);
	func_1615(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1616(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1617(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1618(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1619(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1620(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1621(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1622(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1623(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_1411(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1412(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1413(vector3 vParam0)
{
	return func_1624(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1414(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1141(iParam0))
	{
		return false;
	}
	iVar0 = func_289(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1415(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1141(iParam0))
	{
		return false;
	}
	iVar0 = func_289(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_1416(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1141(iParam0))
	{
		return;
	}
	iVar0 = func_289(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1417(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1143(iParam0);
	func_1143(iParam0);
	func_1625(iParam0, iParam1);
	func_1626(iParam0, iParam1);
	func_1627(iParam0, iParam1);
	iVar1 = func_289(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1628(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_289(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1628(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_939();
}

bool func_1418()
{
	iVar0 = func_1629();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1419()
{
	iVar0 = func_1629();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1630(0);
}

void func_1420(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1421(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_1422(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_1423(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_1424(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1631(&iVar0, &iVar1, &iVar2);
	func_1632(iParam0, iVar0);
	func_1633(iParam0, iVar1);
	func_1634(iParam0, iVar2);
	func_1635(iParam0, 1);
	func_1636(iParam0, 1);
}

void func_1425(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1637(iParam0, 1);
}

void func_1426(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_1427(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1353(iParam0, 1);
}

struct<2> func_1428(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1638(iParam0, &uVar2))
	{
	}
	if (!func_1639(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1429()
{
	if (func_1640(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1640(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1640(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1640(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1640(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1640(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1430(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_1641(iParam0);
	func_1642(iParam0, uParam1);
	func_1643(iParam0);
	func_1644(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1645(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1431(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

void func_1432(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = fParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, fParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_1032(iParam0, 1);
	func_1033(iParam0, 1);
	func_1034(iParam0, 128);
}

bool func_1433()
{
	if (func_1298())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1434(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1646((Global_40.f_4283.f_325 + iParam0));
}

void func_1435(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1433())
	{
		func_1122(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1122(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_1436(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_612(iParam0);
	*uParam1 = func_835(iParam0);
	*uParam2 = func_1229(iParam0);
}

void func_1437(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1442(*uParam0, -1);
		func_1443(*uParam0, 0);
		func_1444(*uParam0, 0);
		if (does_blip_exist(&(Global_36308[*uParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_36308[*uParam0]));
			}
			remove_blip(Global_36308[*uParam0]);
		}
	}
	*uParam0 = -1;
}

bool func_1438(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_1439(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_1440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_1441(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_1442(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_1443(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_1444(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

float func_1445()
{
	if (func_1647())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1648(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1648(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1649();
	fVar2 = func_1650();
	fVar3 = func_1651();
	fVar4 = func_1652();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1653()));
	fVar7 = (func_1648(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1654(3, round((to_float(iVar8) * fVar10)), 0);
	func_1655(3, fVar9, fVar9 > 100f);
	return func_1656(fVar7, -100f, 100f);
}

float func_1446()
{
	if (func_1647())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1648(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1648(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1649();
	fVar2 = func_1650();
	fVar3 = func_1651();
	fVar4 = func_1652();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1653()));
	fVar7 = (func_1648(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1654(2, round((to_float(iVar8) * fVar10)), 0);
	func_1655(2, fVar9, fVar9 > 100f);
	return func_1656(fVar7, -100f, 100f);
}

float func_1447()
{
	if (func_1647())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1648(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1657())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1658())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1648(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1649();
	fVar2 = func_1650();
	fVar3 = func_1651();
	fVar4 = func_1652();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1653()));
	fVar7 = (func_1648(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1654(1, round((to_float(iVar8) * fVar10)), 0);
	func_1655(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1648(0);
	}
	return func_1656(fVar7, -100f, 100f);
}

Vector3 func_1448(vector3 vParam0, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

bool func_1449(float fParam0, var uParam1, float fParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (*fParam0 > 1f || *fParam0 < 0f)
	{
		return false;
	}
	*uParam1 = { func_1659(vParam3, vParam9, vParam6, *fParam0) };
	if (!func_520(uParam1, 1, 10, 0))
	{
		return false;
	}
	if (*fParam0 != 1f)
	{
		*fParam0 = (*fParam0 + fParam2);
		if (*fParam0 > 1f)
		{
			*fParam0 = 1f;
		}
	}
	else
	{
		*fParam0 = -1f;
	}
	return true;
}

bool func_1450(float fParam0, float fParam1, bool bParam2)
{
	func_1660(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_1257(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1451()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

Vector3 func_1452(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_1039((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_1453(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1454(int iParam0)
{
	if (!func_1661(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_1455(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1662(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1456(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_1467(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1457(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1663(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1458(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1458(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1663(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1664(1);
	}
}

bool func_1459(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1460()
{
	iVar0 = func_1665((*Global_1347702)[9]->f_15);
	iVar1 = func_1665((*Global_1835011)[69]->f_1);
	if (func_657(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1461(int iParam0)
{
	if (!func_1230(iParam0))
	{
		return false;
	}
	return func_208((*Global_1835011)[iParam0]->f_1, 1);
}

int func_1462(int iParam0)
{
	if (func_320(iParam0) == 1)
	{
		return func_441(iParam0);
	}
	return -1;
}

int func_1463(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1666(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1667(iVar6);
	}
	return iVar5;
}

int func_1464(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1668(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1465(int iParam0, bool bParam1)
{
	func_1669(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_1466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			return false;
		default:
			break;
	}
	return false;
}

void func_1467(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1465(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1468(2, *uParam0);
		}
		else
		{
			func_1469(2, *uParam0);
		}
	}
	func_1670(uParam0);
}

void func_1468(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_1469(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_1470(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1471(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_1671(iParam0) && func_1672(iParam0))
		{
			func_1673(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_1472(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1674(iParam0, iParam1);
	Var0 = { func_855(iParam0, 0, 1) };
	iVar5 = func_1675(iParam0, &Var0, 0, 0);
	iVar6 = func_1676(iParam0, 0);
	if ((iVar5 > 1 && !func_1279()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1395(iParam0, -2051813666))
		{
			func_960(583, 1);
		}
		else
		{
			func_960(582, 0);
		}
	}
	if (func_1677(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1473(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1540(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_1474(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1095(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1678(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1679(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_932(bParam2), iParam0, 0);
	return iVar2;
}

bool func_1475(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_1476(iParam0) != 0;
}

int func_1476(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1680())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1681(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1477(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_1478(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1680())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1477(iVar0))
		{
			if (func_1307(func_1681(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1479(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1682(48);
	func_1325(0, -1);
}

bool func_1480(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_208((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1481(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_1482(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1483(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_208((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_1484(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_442(iParam0))
	{
		return false;
	}
	return func_101((*Global_1347702)[iParam0]->f_15);
}

int func_1485()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_1307(func_1683(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1486(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_1108() && (func_1484(38) || func_1480(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_1108() && (func_1484(39) || func_1480(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1684(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_1108() && (func_1484(41) || func_1480(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_1108() && (func_1484(49) || func_1480(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1684(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1685(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1686(iParam0, iVar13, iVar14))
	{
	}
	if (func_1687(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1688(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1689(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1690(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1691(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1487(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1488(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_1108() && (func_1484(38) || func_1480(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_1108() && (func_1484(39) || func_1480(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_1108() && (func_1484(49) || func_1480(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_1108() && (func_1484(38) || func_1480(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1580(_create_var_string(2, sVar0), _create_var_string(2, func_1692(func_1482(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_1108() && (func_1484(39) || func_1480(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_1108() && (func_1484(49) || func_1480(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_864(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1489(int iParam0, int iParam1)
{
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_1490(int iParam0)
{
	if (!func_1335(iParam0))
	{
		return;
	}
	func_1693(iParam0);
	func_1694(iParam0);
}

int func_1491(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_1103(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1695(iVar0) || func_355(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1492(int iParam0, bool bParam1)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_1493(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_354(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_1494(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1492(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_1() == -1)
		{
			func_1493(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1696(iVar0);
			}
		}
		if (!func_1677(iParam0, &uVar1, 1, 0, 0))
		{
			func_1673(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1697(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_534(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_534(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_534(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1113())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_536(iVar0))
				{
					func_534(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_534(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_360(Global_35, 2, 0, 1);
				if ((((func_354(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_1107(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_354(iVar7) && func_1107(24))
				{
					if (!func_534(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_534(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_534(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_960(480, 1);
	}
	return true;
}

bool func_1495(int iParam0, int iParam1, int iParam2)
{
	if (!func_1105(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_354(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_1307(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1527(func_1698(iParam0), func_1526(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_208((*Global_1835011)[14]->f_1, 1))
			{
				func_960(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_861(0))
	{
		if (func_862(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1532(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1496(int iParam0)
{
	if ((iParam0 == -615217896 && !func_1298()) || iParam0 != -615217896)
	{
		if (func_1699(Global_35, iParam0, &uVar0))
		{
			func_1512(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_1242();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_1242();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_1242();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1516();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1514();
			break;
	}
}

void func_1497(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1514();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1515();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1516();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1517();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_1242();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1700();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1701();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1498(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1499(int iParam0)
{
	bVar0 = func_1395(iParam0, -2017733358);
	if (func_1702() < 3)
	{
		if (bVar0)
		{
			if (func_1704(func_1703(iParam0), iParam0))
			{
				func_1527(79, func_1526(func_1703(iParam0)), 1);
			}
			else
			{
				func_1527(78, func_1526(func_1703(iParam0)), 1);
			}
		}
		else
		{
			func_1527(80, func_1526(func_1705(iParam0)), 1);
		}
	}
}

bool func_1500()
{
	if (((((func_1706(839908568, 400) || func_1706(-1134030454, 400)) || func_1706(623353496, 400)) || func_1706(-344413337, 400)) || func_1706(-1664948962, 400)) || func_1706(1795228059, 400))
	{
		return true;
	}
	return false;
}

void func_1501(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1486(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1488(51, 0, 0, 0, 0, -1, 0);
			func_1707(8192);
			break;
		case 581047644:
			func_1486(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1488(51, 0, 0, 0, 0, -1, 0);
			func_1707(524288);
			break;
		case -644199619:
			func_1486(39, 0, 0, 0, 0, 0, 1, 0);
			func_1488(39, 0, 0, 0, 0, -1, 0);
			func_1708(16);
			break;
		case 684296857:
			func_1486(41, 0, 0, 0, 0, 0, 1, 0);
			func_1488(41, 0, 0, 0, 0, -1, 0);
			func_1709(8);
			break;
		case 466137807:
			func_1486(49, 0, 0, 0, 0, 0, 1, 0);
			func_1488(49, 0, 0, 0, 0, -1, 0);
			func_1710(16);
			break;
		case -1087522507:
			func_1486(43, 0, 0, -1791518714, func_1711(1), 0, -1, 0);
			func_1712(1);
			break;
		case -405829000:
			func_1486(43, 0, 0, -2087881550, func_1711(2), 0, -1, 0);
			func_1712(2);
			break;
		case 378660860:
			func_1486(43, 0, 0, 1908068621, func_1711(4), 0, -1, 0);
			func_1712(4);
			break;
		case 1566111097:
			func_1486(43, 0, 0, 1611247019, func_1711(8), 0, -1, 0);
			func_1712(8);
			break;
		case 1276007140:
			func_1486(43, 0, 0, 1319635688, func_1711(16), 0, -1, 0);
			func_1712(16);
			break;
	}
}

void func_1502(int iParam0)
{
	if (func_1713() == 1)
	{
		if (func_1480(39))
		{
			func_960(342, 0);
		}
		else
		{
			func_960(343, 0);
			func_1708(1);
		}
	}
	if (func_1713() >= 30)
	{
		func_960(344, 0);
	}
	func_1486(39, 0, 0, 0, 0, 0, -1, 0);
	func_1488(39, 0, 0, func_1713(), 30, 1, 0);
}

void func_1503(int iParam0)
{
	if (func_1714() == 1)
	{
		if (func_1480(49))
		{
			func_960(409, 0);
		}
		else
		{
			func_960(410, 0);
			func_1710(1);
		}
	}
	if (func_1714() >= 10)
	{
		func_960(411, 0);
	}
	func_1486(49, 0, 0, 0, 0, 0, -1, 0);
	func_1488(49, 0, 0, func_1714(), 10, 1, 0);
}

void func_1504(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_960(437, 0);
			func_960(440, 0);
			func_1715(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_1486(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_1488(51, 0, 0, sVar0, func_1684(-949689219, 20), 1, 0);
			func_1707(1);
			func_1716(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1715(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_1486(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_1488(51, 0, 0, sVar0, func_1684(-1248968496, 20), 1, 0);
			func_1707(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1715(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_1486(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_1488(51, 0, 0, sVar0, func_1684(1706369307, 20), 1, 0);
			func_1707(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1715(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_1486(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_1488(51, 0, 0, sVar0, func_1684(1520110311, 20), 1, 0);
			func_1707(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_960(438, 0);
			func_1715(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_1486(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_1488(51, 0, 0, sVar0, func_1684(-1992824800, 20), 1, 0);
			func_1707(32768);
			break;
		default:
			func_960(439, 0);
			break;
	}
}

void func_1505()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_1506(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_1480(43))
		{
			if (iParam0 == 281887510)
			{
				func_960(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_960(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_960(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_960(400, 0);
			}
		}
		else if (func_1395(iParam0, 412399755))
		{
			func_1717(-1791518714);
			if (func_1718() == 0)
			{
				func_1325(0, 10);
				iVar1 = func_1719(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1720(iParam0) < func_1721(iParam0))
					{
						func_1486(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1488(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1480(44))
		{
			if (iParam0 == -222563712)
			{
				func_960(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_960(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_960(401, 0);
			}
		}
		else if (func_1395(iParam0, 709057512))
		{
			func_1717(-2087881550);
			if (func_1718() == 1)
			{
				func_1325(0, 10);
				iVar1 = func_1719(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1720(iParam0) < func_1721(iParam0))
					{
						func_1486(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1488(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1480(45))
		{
			if (iParam0 == 2116770557)
			{
				func_960(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_960(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_960(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_960(398, 0);
			}
		}
		else if (func_1395(iParam0, -1478961327))
		{
			func_1717(1908068621);
			if (func_1718() == 2)
			{
				func_1325(0, 10);
				iVar1 = func_1719(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1722(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1723(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1682(48);
					}
					if (func_1720(iParam0) < func_1721(iParam0))
					{
						func_1486(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1488(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1720(iParam0) < func_1721(iParam0))
					{
						func_1486(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1488(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1480(46))
		{
			if (iParam0 == 2085530337)
			{
				func_960(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_960(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_960(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_960(406, 0);
			}
		}
		else if (func_1395(iParam0, -1238404098))
		{
			func_1717(1611247019);
			if (func_1718() == 3)
			{
				func_1325(0, 10);
				iVar1 = func_1719(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1720(iParam0) < func_1721(iParam0))
					{
						func_1486(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1488(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1480(47))
		{
			if (iParam0 == -1521783510)
			{
				func_960(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_960(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_960(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_960(403, 0);
			}
		}
		else if (func_1395(iParam0, 1160548794))
		{
			func_1717(1319635688);
			if (func_1718() == 4)
			{
				func_1325(0, 10);
				iVar1 = func_1719(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1720(iParam0) < func_1721(iParam0))
					{
						func_1486(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1488(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1507(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1722(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1723(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1682(48);
		}
	}
}

void func_1508(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_1307(func_1724(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1725(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1726(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1509(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1046(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_1046(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_1046(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_1046(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_1046(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_1046(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_1046(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_1046(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_1046(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_1046(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_1046(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_1046(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_1046(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1727())
			{
				func_1046(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_1046(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_1046(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_1046(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_1046(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_1046(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_1046(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_1046(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_1046(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_1046(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_1046(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_1046(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_1046(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1510(int iParam0)
{
	if (func_1480(41))
	{
		func_960(363, 0);
	}
	else
	{
		func_960(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1728(-1865241121);
			func_1729(-642026005);
			func_1730(-642026005);
			func_1325(0, 10);
			break;
		case -2108314374:
			func_1728(2117142684);
			func_1729(-940584364);
			func_1730(-940584364);
			func_1325(0, 10);
			break;
		case -1193798153:
			func_1728(-1409326024);
			func_1729(1972645282);
			func_1730(1972645282);
			func_1325(0, 10);
			break;
		case -787702678:
			func_1728(-641744968);
			func_1729(1667205433);
			func_1730(1667205433);
			func_1325(0, 10);
			break;
		case -804542901:
			func_1728(-946988203);
			func_1729(1362715885);
			func_1730(1362715885);
			func_1325(0, 10);
			break;
		case -1696275132:
			func_1728(-646136018);
			func_1729(1053540370);
			func_1730(1053540370);
			func_1325(0, 10);
			break;
		case -161595323:
			func_1728(-955835837);
			func_1729(-1100103852);
			func_1730(-1100103852);
			func_1325(0, 10);
			break;
		case -1114363619:
			func_1728(-179276075);
			func_1729(-1409869209);
			func_1730(-1409869209);
			func_1325(0, 10);
			break;
		case -368407134:
			func_1728(-492711560);
			func_1729(-1760235357);
			func_1730(-1760235357);
			func_1325(0, 10);
			break;
		case 1997759228:
			func_1728(1764383959);
			func_1729(-138366827);
			func_1730(-138366827);
			func_1325(0, 10);
			break;
		case 1265573293:
			func_1728(317501533);
			func_1729(-1261163843);
			func_1730(-1261163843);
			func_1325(0, 10);
			break;
		case -1030441283:
			func_1728(817753087);
			func_1729(-963523016);
			func_1730(-963523016);
			func_1325(0, 10);
			break;
		case -1490884871:
			func_1728(576606016);
			func_1729(560825326);
			func_1730(560825326);
			func_1325(0, 10);
			break;
		case -395458616:
			func_1728(814934957);
			func_1729(858269539);
			func_1730(858269539);
			break;
	}
}

void func_1511(int iParam0, int iParam1)
{
	func_1731(iParam0, iParam1, &uVar0);
}

int func_1512(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_855(iParam1, 1, 0) };
		iParam3 = func_1567(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1732(iParam1, iParam2, func_1558(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1733(1, (func_1() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1558(iParam3, 1)])
			{
				func_1566(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1734(32768) && iParam1 != &Global_1946804->f_57[func_1558(iParam3, 1)])
			{
				func_1735();
				func_1566(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1566(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1736(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1566(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1737(0);
			func_1738(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1566(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_1513(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_360(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_360(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1199("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1200(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1201(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_1514()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_1515()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_1516()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1517()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_1518(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_1519(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_864(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1520(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1521(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1522(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1523(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1524(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1525(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_1526(int iParam0)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_1527(int iParam0, int iParam1, bool bParam2)
{
	func_1162(iParam0, &iVar0, &iVar1);
	if (!func_1163(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1383(iParam0, 1024))
	{
		return;
	}
	func_1164(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_1528(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_1162(iParam0, &iVar0, &iVar1);
	if (!func_1163(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1383(iParam0, 1024))
	{
		return;
	}
	func_1164(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_1529()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1680())
	{
		return func_1530();
	}
	iVar4 = (func_1680() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1680())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1739(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1681(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1530()
{
	iVar0 = get_random_int_in_range(0, func_1680());
	return func_1681(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_1531(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

bool func_1532(int iParam0, int iParam1, int iParam2)
{
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_855(iParam0, 0, 1) };
	Var5 = { func_859(iParam0, Var0, Var0.f_4, 0) };
	return func_1740(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1533(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	switch (func_933(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1741(81053684, 0) <= 0)
			{
				func_1566(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1566(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1742(iParam0);
			if (func_1743(iVar0))
			{
				func_1744(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1566(30, iParam0, 0, 0, 0);
			}
			if (func_1560() == -2125499975 || func_1560() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1566(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1560() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1566(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1745(-525676072, 0))
			{
				if (func_1746(-525676072, &iVar1))
				{
					func_1566(33, iVar1, 0, 0, 0);
				}
			}
			func_1566(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1747(99217379))
		{
			func_1512(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1490(24);
		if (func_1513(&iVar2, 0))
		{
			func_534(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1534(int iParam0)
{
	if (func_1395(iParam0, 943695443))
	{
		func_1748(0, iParam0);
	}
	else if (func_1395(iParam0, -2096528786))
	{
		func_1748(1, iParam0);
	}
	else if (func_1395(iParam0, -1094167013))
	{
		func_1748(2, iParam0);
	}
	else if (func_1395(iParam0, 1936654645))
	{
		func_1748(3, iParam0);
	}
	else if (func_1395(iParam0, 1306489306))
	{
		func_1748(4, iParam0);
	}
	else if (func_1395(iParam0, 435762317))
	{
		func_1748(5, iParam0);
	}
	else if (func_1395(iParam0, 1259363210))
	{
		func_1748(6, iParam0);
	}
	else if (func_1395(iParam0, 881398259))
	{
		func_1748(7, iParam0);
	}
	else if (func_1395(iParam0, -541549214))
	{
		func_1748(8, iParam0);
	}
	else if (func_1395(iParam0, 130796156))
	{
		func_1748(-1, iParam0);
	}
}

int func_1535(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1749(&Var4, 1356624740);
	return func_1750(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_1536(int iParam0)
{
	if (!func_1103(iParam0, 0))
	{
		return Var0;
	}
	if (func_1395(iParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_1395(iParam0, -537818634))
			{
				return func_1120(189951448);
			}
			else
			{
				return func_1120(1176172851);
			}
		}
	}
	else if (func_1395(iParam0, -537818634))
	{
		return func_1120(-963660207);
	}
	if (func_1395(iParam0, 2084895747))
	{
		return func_1120(1694039471);
	}
	return Var2;
}

void func_1537(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_1() == -1)
			{
				if (func_208((*Global_1835011)[4]->f_1, 1))
				{
					func_960(109, 1);
				}
			}
			break;
	}
}

void func_1538(int iParam0, char* sParam1)
{
	sVar0 = func_1752(func_1751(0));
	func_1122(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1753(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1539(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_1103(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1754())
	{
		func_1755(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_758(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_758(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1489(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_1095(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1756(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1757(_create_var_string(10, &cVar2, _create_var_string(0, func_1526(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_1395(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_1526(iParam0));
	}
	func_1122(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_1540(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_1541(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_1542(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1543(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_1544(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1758(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1758(iParam0, Var2, 1))
				{
					if (func_1759(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1759(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_960(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_146(0, 0, 1))
		{
			func_1325(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_1545(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1546(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_960(iVar0, 0);
	}
}

void func_1547()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1760(0);
			_unlock_set_unlocked(-121456797, false);
			func_1761();
		}
		return;
	}
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1762();
	if (_0x57e798b54c45ee1a(1685912227) >= 2)
	{
		if (_0x57e798b54c45ee1a(2116153146) < 2)
		{
			_0xe824ce7d13fcb300(2116153146, 2);
		}
	}
	if (_unlock_is_unlocked(-121456797))
	{
		return;
	}
	_unlock_set_unlocked(-121456797, true);
	if (_unlock_is_unlocked(645322743))
	{
		return;
	}
	func_1760(1);
}

void func_1548()
{
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_1281(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_1549()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1763(0);
			_unlock_set_unlocked(1244328330, false);
		}
		return;
	}
	if (_unlock_is_unlocked(1244328330))
	{
		return;
	}
	if (_unlock_is_unlocked(-1383789777))
	{
		return;
	}
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1763(1);
}

void func_1550()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_745(15000, 0, 0, 0, 1);
			func_1763(0);
			_unlock_set_unlocked(398807247, false);
		}
		return;
	}
	if (_unlock_is_unlocked(398807247))
	{
		return;
	}
	if (_unlock_is_unlocked(-1651350587))
	{
		return;
	}
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_1218(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1763(1);
}

void func_1551()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_1307(1191437462, 1, 0) && !func_101((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_1281(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1764(1))
			{
				func_1523(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_1307(1119149048, 1, 0) && !func_101((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_1281(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1764(2))
			{
				func_1523(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1764(4))
		{
			func_1523(4);
		}
		if (func_1764(0))
		{
			func_1765(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_1307(1191437462, 1, 0))
			{
				func_1554(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_1307(1119149048, 1, 0))
			{
				func_1554(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1764(1))
		{
			func_1765(1);
		}
		if (func_1764(2))
		{
			func_1765(2);
		}
		if (func_1764(4))
		{
			func_1765(4);
		}
		if (!func_1764(0))
		{
			func_1523(0);
		}
	}
}

void func_1552()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1766() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_1493(127400949);
		if (func_534(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1766() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1767(-2055673461, Var1, 1423542233);
		func_1767(-202131179, Var1, -1264898804);
		func_1767(2013836545, Var1, 1592019450);
		func_1767(1497476650, Var1, 1117400455);
		func_1767(1063571467, Var1, 1150213537);
		func_1767(2107224237, Var1, 1598825281);
		func_1767(1747981656, Var1, -712527121);
		func_1767(-1371140647, Var1, 454332195);
		func_1767(-19142973, Var1, 256105670);
		func_1767(-2074737817, Var1, -1328061889);
		func_1767(-1114256243, Var1, -782241404);
		func_1767(-1653277288, Var1, 1669853467);
		func_1767(1869398132, Var1, -1559225678);
		func_1767(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_1326())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_354(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_1107(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_1107(24) && func_354(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_354(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_1107(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_1553()
{
	if (_unlock_is_unlocked(99890643))
	{
		return;
	}
	if (is_pc_version() || _is_stadia_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_orbis_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_durango_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
}

int func_1554(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1678(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_1539(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_1307(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_1536(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_1474(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_1474(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1554(iParam0, func_1474(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_1095(iParam0) == -427144552)
	{
		if (!func_1768(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1769(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_861(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_1539(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1770(iParam0, iParam1);
	return 1;
}

bool func_1555(int iParam0)
{
	switch (func_933(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_1556(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_933(iParam0))
	{
		case -2061583405:
			bVar0 = func_1771(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1771(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1771(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1771(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1771(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1771(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1772();
	}
	if (bParam1)
	{
		func_1773(0, 0);
	}
}

int func_1557(int iParam0)
{
	Var0 = { func_855(iParam0, 1, 0) };
	return func_1567(Var0.f_4);
}

int func_1558(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1559(int iParam0)
{
	if (func_1() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_1558(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1774(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_1560()
{
	return Global_1946804->f_1;
}

bool func_1561(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1775(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1777(uParam0, func_1776(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1558(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1] = iVar0;
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_1778(iVar3) && func_1779(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1780(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_1562(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return *Global_26796.f_26[iParam1]->f_1.f_1[iParam0];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iParam0];
}

int func_1563(int iParam0, int iParam1)
{
	vVar0 = { func_1562(iParam0, iParam1) };
	return vVar0.x;
}

void func_1564(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1565(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1566(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1781(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1782(Var0);
}

int func_1567(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1783(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_1568(int iParam0)
{
	func_1774(Global_1946804->f_1497.f_1[func_1558(iParam0, 1)], 2, 6);
	func_1774(Global_1946804->f_1378.f_1[func_1558(iParam0, 1)], 2, 6);
}

bool func_1569(int iParam0)
{
	return iParam0 != 0;
}

int func_1570(int iParam0)
{
	iVar0 = -1;
	if (!func_1569(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1571(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1572(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1573(int iParam0, int iParam1)
{
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1678(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1199("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1200(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_354(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1201(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1201(iVar1);
	}
	return false;
}

int func_1574()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1784(iVar1);
		if (!_unlock_is_visible(func_1785(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1575()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1784(iVar0);
		if (!_unlock_is_visible(func_1785(iVar1)))
		{
			_unlock_set_visible(func_1785(iVar1), true);
		}
		iVar0++;
	}
}

bool func_1576(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1661(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_1577(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1453(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_1578(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

int func_1579(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_1103(iVar0, 0))
	{
		return 0;
	}
	if (!func_1786(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1787(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_1395(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_855(iVar0, 0, 1) };
	iVar10 = func_1788(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1789(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1790(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_1281(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_745(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_1580(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

var func_1581(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1582(bool bParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (_spactionproxy_get_next_pending_crafting_action(&uVar0))
		{
			if (!_spactionproxy_process_action(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (_spactionproxy_get_next_pending_buy_action(&uVar9))
		{
			if (!_spactionproxy_process_action(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_1583(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1433())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1433())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_318(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_441(iParam0);
	if (func_320(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_320(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1791(1, iVar1);
					func_1791(8, iVar1);
					func_1791(7, iVar1);
					break;
				case 12:
					func_1791(6, iVar1);
					break;
				case 53:
					func_1791(3, iVar1);
					func_1791(7, iVar1);
					func_1791(4, iVar1);
					break;
				case 20:
					func_1791(8, iVar1);
					break;
				case 19:
					func_1791(1, iVar1);
					func_1791(2, iVar1);
					break;
				case 24:
					func_1791(3, iVar1);
					func_1791(9, iVar1);
					func_1791(20, iVar1);
					break;
				case 28:
					func_1791(1, iVar1);
					break;
				case 34:
					func_1791(23, iVar1);
					func_1791(2, iVar1);
					func_1791(18, iVar1);
					break;
				case 29:
					func_1791(0, iVar1);
					func_1791(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1791(0, iVar1);
					func_1791(3, iVar1);
					func_1791(2, iVar1);
					func_1791(11, iVar1);
					func_1791(6, iVar1);
					func_1791(25, iVar1);
					func_1791(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1791(5, iVar1);
					break;
				case 63:
					func_1791(1, iVar1);
					func_1791(3, iVar1);
					break;
				case 37:
					func_1791(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_802(0, 10, 11, 2116153146))
			{
				func_1791(7, iVar1);
				func_1791(4, iVar1);
			}
			else if (iParam0 == func_802(0, 7, 11, -379687487))
			{
				func_1791(8, iVar1);
				func_1791(15, iVar1);
			}
			else if (iParam0 == func_802(0, 8, 11, -1386089015))
			{
				func_1791(3, iVar1);
			}
			else if (iParam0 == func_802(0, 11, 11, -1952009645))
			{
				func_1791(6, iVar1);
				func_1791(3, iVar1);
			}
			else if (iParam0 == func_802(0, 12, 11, 2065895756))
			{
				func_1791(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1792()));
	if (!func_959(629))
	{
		func_960(629, 0);
	}
}

int func_1584(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_1585()
{
	iVar0 = func_1793(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1794(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = chal_mission_get_num_goals(iVar0);
		iVar2 = chal_mission_get_num_goals_complete(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

int func_1586()
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_1795(661720433);
}

bool func_1587()
{
	return Global_1347398->f_1 == 0;
}

void func_1588(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_1589()
{
	return Global_1347398->f_1 == 1000;
}

bool func_1590()
{
	return Global_1347398->f_1 == 2000;
}

bool func_1591()
{
	return Global_1347398->f_1 == 3000;
}

void func_1592(bool bParam0)
{
	func_1796(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

char* func_1593(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1797(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1797(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1594(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1757(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1595(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

int func_1596(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1597(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_312(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_313(&(iParam1->f_6), 0, 1);
	}
	if (!func_312(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1376(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1210(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_312(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1603(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1798(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1799(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_962(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1798(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_778(iParam1->f_6, 0, 1);
				}
				else
				{
					func_778(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1598(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_1599(int* iParam0, int iParam1)
{
	if (!func_965(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_966(iParam0, 14);
		}
	}
}

bool func_1600(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1601(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_1602(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_1603(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_312(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	func_1798(iParam0, 18, 0, 1);
	func_1798(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1604(int iParam0, bool bParam1)
{
	if (bParam1 && !func_312(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1605(int iParam0, bool bParam1)
{
	if (bParam1 && !func_312(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_1606(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1567(iVar0);
}

bool func_1607()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_1608()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1800(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1800(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_1609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

void func_1610(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_289(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1801(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_1611(int iParam0)
{
	if (!func_1802(iParam0))
	{
		return false;
	}
	if (!func_1292())
	{
		return true;
	}
	return false;
}

void func_1612(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

void func_1613(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1614(int iParam0, struct<2> Param1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1803(iParam0, Param1))
	{
	}
	if (!func_1804(iParam0, Param1.f_1))
	{
	}
}

void func_1615(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1805((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1616(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1617(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_3 = 0;
		(*uParam0)[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_1618(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1619(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1620(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1621(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1622(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1623(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1624(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_1625(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1626(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1627(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1806(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1806(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1807(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1808(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1809(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1628(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_1810(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_627(iParam0))
	{
		iVar3 = func_628(iParam0);
		if (func_1811(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

int func_1629()
{
	return Global_1900383->f_393;
}

void func_1630(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1631(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_1108())
	{
		if (func_1270())
		{
			bVar0 = false;
			if (!func_208((*Global_1835011)[15]->f_1, 1) && !func_1107(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1812();
				*iParam1 = func_1813();
				*iParam2 = func_1814();
				return 1;
			}
			else
			{
				*iParam0 = func_1815();
				*iParam1 = func_1816();
				*iParam2 = func_1817();
				return 1;
			}
		}
		else if (func_1113())
		{
			if (!func_208((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1818();
				*iParam1 = func_1819();
				*iParam2 = func_1820();
				return 1;
			}
			else
			{
				*iParam0 = func_1821();
				*iParam1 = func_1822();
				*iParam2 = func_1823();
				return 1;
			}
		}
	}
	else if (func_1270())
	{
		*iParam0 = func_1824();
		*iParam1 = func_1825();
		*iParam2 = func_1826();
		return 1;
	}
	else if (func_1113())
	{
		*iParam0 = func_1827();
		*iParam1 = func_1828();
		*iParam2 = func_1829();
		return 1;
	}
	return 0;
}

void func_1632(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = iParam1;
}

void func_1633(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = iParam1;
}

void func_1634(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = iParam1;
}

void func_1635(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_14 = iParam1;
}

void func_1636(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1421(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1631(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1830(iParam1);
	iVar5 = func_289(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

void func_1637(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_1638(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1806(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1831(Var0, 1415981582, 0);
	if (!func_1103(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1639(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1806(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1831(Var0, -2119169513, 0);
	if (!func_1103(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1640(int iParam0, int iParam1)
{
	if (!func_1832(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1833() };
	*iParam1 = func_1831(Var0, iParam0, 0);
	if (!func_1103(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1641(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, false);
}

void func_1642(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1834(iParam0, *uParam1);
	func_1834(iParam0, uParam1->f_1);
}

void func_1643(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, false);
}

void func_1644(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1834(iParam0, *uParam1);
	func_1834(iParam0, uParam1->f_1);
	func_1834(iParam0, uParam1->f_2);
	func_1834(iParam0, uParam1->f_3);
	func_1834(iParam0, uParam1->f_4);
	func_1834(iParam0, uParam1->f_5);
}

int func_1645(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

void func_1646(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1120(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_1647()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1648(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1649()
{
	fVar0 = func_1835(13);
	iVar1 = func_1836(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1650()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1651()
{
	if (func_1298())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1652()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1653()
{
	return Global_1955565->f_3;
}

void func_1654(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1837(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1655(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1837(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_1656(float fParam0, float fParam1, float fParam2)
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

bool func_1657()
{
	return func_1835(12) <= -99f;
}

bool func_1658()
{
	return func_1835(12) >= 99f;
}

Vector3 func_1659(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9)
{
	vVar0 = { func_1838(vParam0, vParam3, uParam9) };
	vVar3 = { func_1838(vParam3, vParam6, uParam9) };
	return func_1838(vVar0, vVar3, uParam9);
}

void func_1660(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

bool func_1661(int iParam0)
{
	return iParam0 > -1;
}

bool func_1662(int iParam0)
{
	func_1669(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1663(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1664(1);
	}
}

void func_1664(bool bParam0)
{
	if (bParam0)
	{
		func_145(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_201(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1665(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -15;
	}
	return func_1839(iParam0);
}

bool func_1666(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1667(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_1668(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1669(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1840(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1670(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_1671(int iParam0)
{
	return func_1095(iParam0) == -427144552;
}

bool func_1672(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (func_1489(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1677(iParam0, &uVar0, 1, 0, 0);
	}
	return func_1307(iParam0, 1, 0);
}

void func_1673(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_1095(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_1492(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_355(iVar0))
	{
		if (func_1() == -1)
		{
			func_1493(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_1474(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1539(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1674(int iParam0, int iParam1)
{
	if (func_1395(iParam0, 58855631))
	{
		func_1787(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1675(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	if (!func_861(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_932(bParam3), iParam0);
}

int func_1676(int iParam0, bool bParam1)
{
	if (func_1105(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_932(bParam1), iParam0, 0);
}

bool func_1677(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1841(&iParam0);
	if (!func_1103(iParam0, 0))
	{
		return false;
	}
	if (!func_861(0))
	{
		bParam3 = true;
	}
	if (func_1671(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1096(0) };
			Var4.f_9 = -1591664384;
			if (!func_857(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_858(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1097(iParam0, 1))
			{
				if (!func_857(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_858(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1842(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1675(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_1101(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_932(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1678(int iParam0, int iParam1)
{
	if (!func_1103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1095(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1395(iParam0, 1399091007))
	{
		func_1731(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1679(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1843(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1844(&Var0, func_1096(0));
	}
	if (!func_1845(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1201(iVar14);
	return uVar15;
}

int func_1680()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1681(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1682(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_1846(iParam0);
	fVar1 = func_1847(iParam0);
	if ((Global_1347477->f_117 || !func_1107(31)) || !func_1848(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1849(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_1850(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1122(_create_var_string(6, func_1851(iParam0), fVar1), "itemtype_textures", func_1852(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1684(int iParam0, int iParam1)
{
	if (!func_1193(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1685(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_1485() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1853(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1854(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1713() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1855(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1713(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1856(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1714() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1857(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1714(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1684(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1686(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_1687(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1688(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1689(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1858(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_1307(iVar2, 1, 0) || func_1860(func_1859(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1692(func_1858(iVar0))), func_1692(func_1858(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1713() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1861(iVar0)), func_1861(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1855() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1861(iVar0)), func_1861(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1861(iVar0)), func_1861(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1724(iParam3, func_1862(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1720(iVar2) - iParam7) >= func_1684(iParam3, func_1863(iVar0));
				}
				else
				{
					bVar1 = func_1720(iVar2) >= func_1684(iParam3, func_1863(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1720(iVar2) + iParam7) >= func_1684(iParam3, func_1863(iVar0));
			}
			else
			{
				bVar1 = func_1720(iVar2) >= func_1684(iParam3, func_1863(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1864(iVar2)), func_1864(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1865(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1866(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1866(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1714() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1867(iVar0)), func_1867(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1857() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1867(iVar0)), func_1867(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1867(iVar0)), func_1867(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1724(iParam3, func_1862(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1720(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1868(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1868(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1869(iVar2)), func_1869(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1690(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1856() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_1691(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_100(func_327(0)) && ((func_1870(0) == 1 || func_1870(0) == 8) || func_1870(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

char* func_1692(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

void func_1693(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1694(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1871(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1872(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1872(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1872(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1873(1);
			break;
		case 34:
			func_1874(1);
			break;
		case 35:
			func_1875(1);
			break;
		case 36:
			break;
		case 37:
			func_1876(0);
			break;
		case 38:
			func_1877(0);
			break;
		case 39:
			func_1878(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_1108()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1580("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_960(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_1108()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1580("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_960(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_1108()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1580("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_960(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_1108()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1580("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_960(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_1() == -1)
			{
				if (!func_1747(99217379) || func_1879(99217379) == 2110595215)
				{
					if (func_1113())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_1307(iVar0, 1, 0))
					{
						func_1532(iVar0, 1, 752097756);
					}
					func_1512(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_1() == -1)
			{
				if (!func_1307(1013902307, 1, 0))
				{
					func_1532(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_1() == -1)
			{
				if (!func_1307(1013902307, 1, 0))
				{
					func_1532(1013902307, 1, 752097756);
				}
				if (!func_1307(142640135, 1, 0))
				{
					func_1532(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_1() == -1)
			{
				if (!func_1307(786809402, 1, 0))
				{
					func_1532(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_1() == -1)
			{
				if (!func_1307(786809402, 1, 0))
				{
					func_1532(786809402, 1, 752097756);
				}
				if (!func_1307(-518019409, 1, 0))
				{
					func_1532(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1880();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_1695(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

void func_1696(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_452();
	func_376(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1697(int iParam0)
{
	if (func_1800(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1698(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_1107(50))
			{
				if (!func_1107(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_1107(51))
			{
				if (!func_1107(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1699(int iParam0, int iParam1, var uParam2)
{
	if (!func_1103(iParam1, 0))
	{
		return false;
	}
	if (func_1095(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_1() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_933(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1557(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_1395(iParam1, 866047851))
	{
		iVar5 = func_1558(iVar4, 1);
		if (func_1881(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_933(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_1395(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_1392(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1882(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1882(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_933(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_1395(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1883(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_1700()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1701()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1702()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_1307(func_1884(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1703(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_1704(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_1307(iVar0, 1, 0) && func_1307(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1705(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_1706(int iParam0, int iParam1)
{
	iVar0 = func_1885(iParam0);
	if (iVar0 != -15)
	{
		func_376(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_377(iVar0, 1);
	}
	return false;
}

void func_1707(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1708(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1709(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1710(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1711(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1720(iVar9);
	iVar2 = func_1720(iVar10);
	iVar3 = func_1720(iVar11);
	iVar5 = func_1721(iVar9);
	iVar6 = func_1721(iVar10);
	iVar7 = func_1721(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1720(iVar12);
		iVar8 = func_1721(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
	}
	{