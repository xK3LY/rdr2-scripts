void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_2242 = 15f;
	iLocal_2648 = 4;
	iLocal_3990 = -1;
	Local_3653.f_136 = 2;
	Local_3653.f_137 = uVar4549;
	Local_3653.f_138 = 834;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_3653.f_136);
		return;
	}
	if (!func_4(Local_3653.f_136, 2097152))
	{
		func_5(Local_3653.f_136, 2097152);
	}
	func_7(4, func_6(Local_3653.f_136));
	if (func_4(Local_3653.f_136, 33554432))
	{
		func_8(4);
		func_9(Local_3653.f_136, 33554432);
	}
	func_10(1024, func_4(Local_3653.f_136, 32));
	func_7(8, func_11(Local_3653.f_136, 128));
	func_7(256, func_12(-1580473214, 1, 0));
	func_7(1073741824, func_13(Local_3653.f_136));
	func_7(2, func_14(Local_3653.f_136));
	func_15(&Local_3653, 2048);
	func_16(0, &Local_3653, 0);
	if (func_11(Local_3653.f_136, 256))
	{
		return;
	}
	func_18(func_17(Local_3653.f_136));
	func_3(Local_3653.f_136);
	iLocal_14 = func_17(Local_3653.f_136);
	if (iLocal_14 != 2)
	{
	}
	else
	{
		func_7(1048576, func_4(Local_3653.f_136, 128));
	}
	func_20(16, func_19());
	func_21(&Local_3653, 32, (func_11(Local_3653.f_136, 524288) || iLocal_14 > 3));
	if (func_22(&Local_3653, 32))
	{
		if (!func_23(Local_3653.f_138, 32))
		{
			func_24(Local_3653.f_138, 32);
		}
		if (!func_25(1073741824))
		{
			iVar0 = 16;
			func_26((*Global_1392194)[Local_3653.f_136]->f_6, iVar0);
		}
	}
	else
	{
		func_27((*Global_1392194)[Local_3653.f_136]->f_6);
	}
	if (func_25(2))
	{
		Local_2145.f_3 = 1;
	}
	func_28();
	func_29(Local_3653.f_136, Local_3653.f_137, &Local_2650, &Local_3653, 1, 1);
	_0x9c8f42a5d1859dc1((*Global_1392194)[Local_3653.f_136]->f_5);
	func_30();
	func_31();
	Local_2650.f_4 = { func_32(Local_3653.f_136, func_17(Local_3653.f_136)) };
	func_33();
	func_34();
	if (2 != iLocal_14)
	{
	}
	else
	{
		iLocal_4440 = _create_volume_box_with_custom_name(2076.216f, 1001.187f, 112.332f, 0f, 0f, 13.199f, 14.446f, 11.798f, 3.385f, "Roanoke Trapper - m_volTrapper");
		iLocal_4441 = _create_volume_box_with_custom_name(2076.577f, 1000.768f, 113.832f, 0f, 0f, 14.334f, 1.507f, 2.813f, 4.877f, "Roanoke Trapper - m_volTrapperPrompt");
		iLocal_4442 = _create_volume_box_with_custom_name(2073.717f, 1000.015f, 113.832f, 0f, 0f, 14.334f, 3.821f, 4.158f, 4.877f, "Roanoke Trapper - m_volTrapperOfflimits");
		func_35(18, 952, iVar4438, 90, uVar4439, uVar4440, 12, -1082130432, 0, 0);
		func_36();
	}
	if (func_25(8))
	{
		switch (iLocal_14)
		{
			case 1:
				iLocal_2305[14] = _create_volume_aggregate_with_custom_name("EA CURR - volCamp");
				_0x6e0d3c3f828da773(&(iLocal_2305[14]), (*Global_1392194)[Local_3653.f_136]->f_6);
				_0x39816f6f94f385ad(&(iLocal_2305[14]), 2209.547f, 714.8749f, 100.4683f, 6.993175f, 0f, 18.50221f, 28.08039f, 73.75477f, 14.58272f);
				break;
			case 2:
				iLocal_2305[14] = _create_volume_aggregate_with_custom_name("EA CURR - volCamp");
				_0x6e0d3c3f828da773(&(iLocal_2305[14]), (*Global_1392194)[Local_3653.f_136]->f_6);
				_0x39816f6f94f385ad(&(iLocal_2305[14]), 2184.146f, 862.6637f, 113.3422f, 0f, 0f, 15.49503f, 34.40951f, 61.63839f, 11.3804f);
				break;
		}
	}
	else if (iLocal_14 == 1)
	{
		if (!_does_volume_exist(&(iLocal_2305[13])))
		{
			iLocal_2305[13] = _create_volume_cylinder_with_custom_name(2236.119f, 702.1536f, 101.6987f, 0f, 0f, 18.48959f, 84.40749f, 113.9496f, 29.56531f, "EA CURR - volObjective");
		}
	}
	if (has_force_cleanup_occurred(523))
	{
		iLocal_4549 = 1;
	}
	func_37();
	while (true)
	{
		func_39(bVar4547, 8423, 0);
		if (!bVar4547)
		{
			switch (iVar4436)
			{
				case 0:
					if (!func_22(&Local_3653, 32) && Local_2650.f_3 < (1 + (Local_2650.f_1 + iVar2648)))
					{
						func_40((1 + (iVar2648 + Local_2650.f_1)), &Local_2650);
					}
					else if (func_41())
					{
						iLocal_4438 = 1;
					}
					break;
				case 1:
					func_42(16);
					if (!func_43(8))
					{
						if (!func_22(&Local_3653, 32))
						{
							if (func_44(&Local_2650) && func_46(func_45(), &Local_1873, 0, 0, 0, -1, 1))
							{
								func_47(8);
							}
						}
						else
						{
							func_47(8);
						}
					}
					if (!func_43(1) && func_48())
					{
						if (!func_22(&Local_3653, 32))
						{
							bVar1 = func_43(16);
							func_10(1, func_49(&Local_2650, &Local_3653, &iLocal_3981, &uLocal_2645, &bVar1, &iLocal_2175));
							func_10(16, bVar1);
							if (func_43(1))
							{
								iLocal_2175 = 0;
							}
						}
						else
						{
							func_47(1);
						}
					}
					if (!func_43(4))
					{
						if (!func_22(&Local_3653, 32))
						{
							func_50(Local_3653.f_138, 1, 0, 0, 0, 0);
							func_10(4, func_51(Local_3653.f_138, 1, 1));
							if (!is_entity_dead(func_52(Local_3653.f_138)))
							{
								set_ped_config_flag(func_52(Local_3653.f_138), 301, false);
								set_ped_config_flag(func_52(Local_3653.f_138), 297, true);
								set_ped_config_flag(func_52(Local_3653.f_138), 315, true);
								set_ped_config_flag(func_52(Local_3653.f_138), 146, true);
								_0x24c82ef607105faa(func_52(Local_3653.f_138), 980351091);
								_0xb8b6430ead2d2437(func_52(Local_3653.f_138), 1220865053);
							}
						}
						else
						{
							func_47(4);
						}
					}
					Local_3653.f_35 = { Local_4444 };
					Local_2509.f_33 = { Local_4444 };
					Local_2509.f_33 = { Local_4444 };
					func_53(Local_3653.f_136, 1);
					if ((((((!is_screen_faded_out() && func_43(1)) && func_43(4)) && func_43(8)) && func_54()) && func_55()) || func_22(&Local_3653, 32))
					{
						if (!func_22(&Local_3653, 32) && (func_25(4) || !func_56()))
						{
							func_57(&Local_4444, Global_35, "ARTHUR", 0);
							func_57(&Local_4444, func_52(Local_3653.f_138), "EA_Rcamp_Foreman", 0);
							switch (iLocal_14)
							{
								case 1:
									func_57(&Local_4444, &(iLocal_3981[0]), "RAIL_INSTIGATOR", 0);
									func_57(&Local_4444, &(iLocal_3981[1]), "RAIL_WORKER", 0);
									break;
								case 2:
									func_57(&Local_4444, &(iLocal_3981[0]), "RCMP_GOONL", 0);
									func_57(&Local_4444, &(iLocal_3981[1]), "RCMP_GOON1", 0);
									func_57(&Local_4444, &(iLocal_3981[2]), "RCMP_GOON2", 0);
									break;
							}
							func_58();
						}
						else
						{
							func_57(&Local_4444, Global_35, "ARTHUR", 0);
							func_57(&Local_4444, func_52(Local_3653.f_138), "EA_Rcamp_Foreman", 0);
							func_59(Local_3653.f_138, 1);
						}
						func_60(vLocal_2327[3]);
						func_61(0);
						iLocal_4438 = 2;
					}
					break;
				case 2:
					if (func_22(&Local_3653, 128) && func_62(Local_3653.f_136, func_25(4)))
					{
						func_63();
						func_64();
						func_65(0);
						func_66(&Local_3653, 128);
					}
					if (func_67())
					{
					}
					else
					{
						func_68();
						func_69();
						func_70(&Local_3653, &Local_2650);
						if (!func_22(&Local_3653, 2) && !func_22(&Local_3653, 4))
						{
							func_71(&uLocal_2177);
							func_72();
							func_73();
							if (!func_22(&Local_3653, 32) && func_25(4))
							{
								func_75(&Local_3653, 0, func_74((iLocal_14 == 1 && func_43(8192)), 1f, 2f), func_74((iLocal_14 == 1 && func_43(8192)), 1f, 1.75f));
							}
							func_76(&uLocal_4048, &uLocal_4110, &Local_3653, 835, 857, &uLocal_2647, &uLocal_2177, 10, func_74((iLocal_14 == 2 && !func_25(8)), 45f, -1f), 1);
							func_77(&uLocal_4048);
							func_77(&iLocal_3981);
							func_78(func_52(Local_3653.f_138));
							if (func_79(&iLocal_2180, 1))
							{
								func_80();
							}
							if (func_81())
							{
								_0x36559148b78853b3(1, 0, 0);
								func_82(&Local_2145, &Local_3653, 0);
								func_83();
								func_84(&(Local_3653.f_32), 1, 1);
								func_85(0);
								func_86(Local_3653.f_136, 8388608);
								func_87(&uLocal_3985);
								func_88();
								if (func_89(iVar2172) && func_90(iVar2172))
								{
									func_91(iVar2172, 0, 2);
								}
								if (func_92(1))
								{
									func_15(&Local_3653, 4096);
									func_15(&Local_3653, 16384);
								}
								else
								{
									func_5(Local_3653.f_136, 1024);
								}
								func_94(func_52(func_93()), Global_35, "OPENS_FIRE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_15(&Local_3653, 2);
								func_95(Local_3653.f_136, 3);
								func_96();
								iVar2 = 0;
								while (iVar2 < 4)
								{
									func_97(func_52(&(iLocal_2504[iVar2])), iVar2);
									iVar2++;
								}
								func_98(&Local_3653);
								func_2();
								func_15(&Local_3653, 128);
							}
						}
						else
						{
							func_99(&uLocal_4048, &Local_3653);
							iVar3 = 0;
							while (iVar3 < 4)
							{
								func_97(func_52(&(iLocal_2504[iVar3])), iVar3);
								iVar3++;
							}
							if (func_100(&Local_3653, &iLocal_3981, &uLocal_4041, &(Local_3653.f_139), 4, 0))
							{
								if (!func_22(&Local_3653, 4))
								{
									func_15(&Local_3653, 4);
									func_15(&Local_3653, 128);
									func_83();
								}
							}
						}
						if (iLocal_14 != 1)
						{
						}
						else
						{
							func_102(128, func_101());
							func_103(131072, has_entity_been_damaged_by_entity(&(iLocal_3981[0]), Global_35, 1, 1));
						}
						if (func_104())
						{
							if (func_105())
							{
								if (iVar2140 == 2 && !_0x57779b55b83e2bea(&(iLocal_3981[0])))
								{
									func_106(2048);
								}
								else if (iVar2140 == 256 || iVar2140 == 4)
								{
									func_106(4096);
								}
								else
								{
									func_107(&uLocal_2114, &uLocal_2142);
								}
								if (_0x57779b55b83e2bea(&(iLocal_3981[0])))
								{
									_0x2948235db2058e99(&(iLocal_3981[0]), 512);
									_0xb2f47a1afdfcc595(&(iLocal_3981[0]), 32);
								}
								_0x36559148b78853b3(1, 0, 0);
								if (!func_108(iLocal_3981[0]))
								{
									if (_is_ped_using_scenario_hash(&(iLocal_3981[0]), func_109()))
									{
										_0xd999e379265a4501(&(iLocal_3981[0]), func_110(), 0);
									}
									if (((!func_43(2) && !func_43(67108864)) && !_is_ped_hogtied(&(iLocal_3981[0]))) && !func_111(8192))
									{
										clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
										set_ped_config_flag(&(iLocal_3981[0]), 225, false);
									}
								}
								func_112(1, 1, 1);
								if (iVar2475 < 11)
								{
									func_8(128);
									func_113(11);
								}
								if (iVar2471 < 13)
								{
									iLocal_2473 = 13;
								}
								func_8(128);
								if (func_114("RCMP_INST01A"))
								{
									func_115("RCMP_INST01A", 0);
								}
								if (func_114("RCMP_INST01B"))
								{
									func_115("RCMP_INST01B", 0);
								}
								func_84(&(Local_3653.f_32), 1, 1);
							}
						}
						if (func_22(&Local_3653, 4))
						{
							func_116();
						}
						if (!func_22(&Local_3653, 2) && !func_22(&Local_3653, 32))
						{
							func_117(&Local_2145);
							if (func_118(&Local_2145, 1))
							{
								func_119(&Local_3653, &Local_2145, Local_4142[3], Local_4227[3]);
							}
							else
							{
								func_120(&Local_2145, 4);
							}
							if (func_121())
							{
								iLocal_4438 = 3;
							}
						}
					}
			}
		}
		if (func_122())
		{
			iLocal_4549 = 1;
		}
		wait(Local_3653.f_30);
	}
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	_set_scenario_group_enabled_hash(-2104553981, false);
	_set_scenario_group_enabled_hash(-1302594744, false);
	_set_scenario_group_enabled_hash(-1889808927, false);
	_set_scenario_group_enabled_hash(-1197006729, false);
	_set_scenario_group_enabled_hash(-1312423920, false);
	_set_scenario_group_enabled_hash(461198205, false);
	_set_scenario_group_enabled_hash(-975072085, false);
	_set_scenario_group_enabled_hash(-1227004918, false);
	_set_scenario_group_enabled_hash(-1524907897, false);
	_set_scenario_group_enabled_hash(-401577020, false);
	_set_scenario_group_enabled_hash(1579987, false);
	_set_scenario_group_enabled_hash(-685820122, false);
	_set_scenario_group_enabled_hash(1884117487, false);
	_set_scenario_group_enabled_hash(1637006458, false);
	_set_scenario_group_enabled_hash(-1165885976, false);
	_set_scenario_group_enabled_hash(-632511363, false);
	_set_scenario_group_enabled_hash(-130631158, false);
	_set_scenario_group_enabled_hash(-1186144424, false);
	_set_scenario_group_enabled_hash(-1838235148, false);
	_set_scenario_group_enabled_hash(-828491182, false);
	_set_scenario_group_enabled_hash(330482790, false);
	_set_scenario_group_enabled_hash(1103995043, false);
}

void func_3(int iParam0)
{
	if (!func_123(iParam0))
	{
		return;
	}
	iVar0 = func_124(iParam0);
	if (!func_125(iVar0, 8))
	{
		func_126(iVar0, 8);
	}
	_0x4161648394262fdf(func_32(iParam0, func_17(iParam0)), 100f);
	func_127(&((*Global_1392194)[iParam0]->f_1), 1);
}

bool func_4(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	if (func_4(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 || iParam1);
}

bool func_6(var uParam0)
{
	if (func_128(30336, 1, 1) && !func_129())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_130(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_131() && func_132() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_8(iParam0);
	}
	else
	{
		func_133(iParam0);
	}
}

void func_8(int iParam0)
{
	iLocal_16 = (iLocal_16 || iParam0);
}

void func_9(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	if (!func_4(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 - (Global_40.f_9096[iParam0]->f_5 && iParam1));
}

void func_10(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(iParam0);
	}
	else
	{
		func_42(iParam0);
	}
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_4 && iParam1) != 0;
}

bool func_12(int iParam0, int iParam1, bool bParam2)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_135(iParam0);
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
		if (!func_136(iParam0, 1))
		{
			return false;
		}
	}
	return func_137(iParam0, 0, bParam2) >= iParam1;
}

bool func_13(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_11(iParam0, 4194304))
	{
		return false;
	}
	func_138(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

bool func_14(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_11(iParam0, 524288))
	{
		return false;
	}
	if (!func_4(iParam0, 16777216))
	{
		func_95(iParam0, 2);
		return true;
	}
	iVar0 = (&Global_40.f_9096[iParam0] - Global_40.f_9096[iParam0]->f_9);
	if (iVar0 >= 2)
	{
		if (func_4(iParam0, 32768))
		{
			func_9(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_139(iParam0))
	{
		if (func_4(iParam0, 32768))
		{
			func_9(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_4(iParam0, 32768))
	{
		func_9(iParam0, 32768);
	}
	return true;
}

void func_15(int iParam0, int iParam1)
{
	if (func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 || iParam1);
}

bool func_16(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = _get_prev_weather_type_hash_name();
		iVar8 = _get_next_weather_type_hash_name();
		_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_140(iVar7) || func_141(iVar7));
		bVar5 = (func_140(iVar8) || func_141(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_15(iParam1, 256);
		}
		else if (bVar4)
		{
			if (func_142(iVar7) || func_143(iVar7))
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
				func_66(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_142(iVar8) || func_143(iVar8))
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
				func_15(iParam1, 256);
			}
		}
		else
		{
			if (func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_66(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

int func_17(int iParam0)
{
	if (!func_123(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

void func_18(int iParam0)
{
	iVar0 = iParam0;
	if (func_11(2, 128))
	{
	}
	func_2();
	if (func_11(2, 524288))
	{
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				_set_scenario_group_enabled_hash(-1838235148, true);
				if (!func_11(2, 134217728))
				{
					_set_scenario_group_enabled_hash(-1312423920, true);
					_set_scenario_group_enabled_hash(-1889808927, true);
					_set_scenario_group_enabled_hash(-1302594744, true);
				}
				else
				{
					_set_scenario_group_enabled_hash(-1197006729, true);
					_set_scenario_group_enabled_hash(461198205, true);
					_set_scenario_group_enabled_hash(-2104553981, true);
				}
				break;
			case 2:
				_set_scenario_group_enabled_hash(-828491182, true);
				if (!func_144() || !func_11(2, 134217728))
				{
					_set_scenario_group_enabled_hash(-401577020, true);
					_set_scenario_group_enabled_hash(-1186144424, true);
					_set_scenario_group_enabled_hash(-1227004918, true);
				}
				else
				{
					_set_scenario_group_enabled_hash(-1524907897, true);
					_set_scenario_group_enabled_hash(1579987, true);
				}
				_set_scenario_group_enabled_hash(-975072085, true);
				break;
			case 3:
				_set_scenario_group_enabled_hash(1103995043, true);
				_set_scenario_group_enabled_hash(-632511363, true);
				_set_scenario_group_enabled_hash(-1165885976, true);
				_set_scenario_group_enabled_hash(-130631158, true);
				break;
			case 4:
				func_2();
				break;
		}
	}
}

bool func_19()
{
	if (iLocal_14 != 3)
	{
		return false;
	}
	if (func_25(8))
	{
		return false;
	}
	if (func_11(Local_3653.f_136, 4))
	{
		return false;
	}
	return true;
}

void func_20(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0);
	}
	else
	{
		func_146(iParam0);
	}
}

void func_21(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_15(iParam0, iParam1);
	}
	else
	{
		func_66(iParam0, iParam1);
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
	if (!func_147(iParam0))
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
	if (!func_147(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

bool func_25(int iParam0)
{
	return (iLocal_16 && iParam0) != 0;
}

int func_26(int iParam0, int iParam1)
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

int func_27(int iParam0)
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

void func_28()
{
	if (func_22(&Local_3653, 256))
	{
		func_47(134217728);
	}
	else
	{
		func_42(134217728);
	}
	sVar2 = func_149(!func_148());
	sVar3 = func_150();
	sVar0 = func_151(0);
	sVar1 = func_152();
	func_153(Local_3653.f_138, sVar3);
	iVar6 = func_154(0);
	iVar7 = func_155(0);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		func_153(iVar5, sVar2);
		iVar5++;
	}
	iVar6 = func_154(1);
	iVar7 = func_155(1);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (func_156(iVar8, func_43(268435456)))
		{
			sVar4 = sVar1;
			decor_set_bool(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = func_151(!func_148());
		}
		func_153(iVar5, sVar4);
		iVar8 = func_52(iVar5);
		if ((does_entity_exist(iVar8) && !is_ped_active_in_scenario(iVar8, 1)) && !is_entity_a_mission_entity(iVar8))
		{
			task_persistent_character(iVar8);
		}
		iVar5++;
	}
	iVar6 = func_154(2);
	iVar7 = func_155(2);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (func_156(iVar8, func_43(536870912)))
		{
			sVar4 = sVar1;
			decor_set_bool(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = func_151(!func_148());
		}
		func_153(iVar5, sVar4);
		iVar8 = func_52(iVar5);
		if ((does_entity_exist(iVar8) && !is_ped_active_in_scenario(iVar8, 1)) && !is_entity_a_mission_entity(iVar8))
		{
			task_persistent_character(iVar8);
		}
		iVar5++;
	}
	iVar6 = func_154(3);
	iVar7 = func_155(3);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (func_156(iVar8, func_43(1073741824)))
		{
			sVar4 = sVar1;
			decor_set_bool(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = sVar0;
		}
		func_153(iVar5, sVar4);
		iVar8 = func_52(iVar5);
		if ((does_entity_exist(iVar8) && !is_ped_active_in_scenario(iVar8, 1)) && !is_entity_a_mission_entity(iVar8))
		{
			task_persistent_character(iVar8);
		}
		iVar5++;
	}
	iVar6 = func_154(4);
	iVar7 = func_155(4);
	iVar5 = iVar6;
	while (iVar5 <= iVar7)
	{
		if (func_156(iVar8, func_43(-2147483648)))
		{
			sVar4 = sVar1;
			decor_set_bool(iVar8, "bOnBreak", true);
		}
		else
		{
			sVar4 = sVar0;
		}
		func_153(iVar5, sVar4);
		iVar8 = func_52(iVar5);
		if ((does_entity_exist(iVar8) && !is_ped_active_in_scenario(iVar8, 1)) && !is_entity_a_mission_entity(iVar8))
		{
			task_persistent_character(iVar8);
		}
		iVar5++;
	}
}

void func_29(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	func_15(iParam3, 128);
	func_157(iParam1, 1);
	if (bParam5)
	{
		func_158((*Global_1392194)[iParam3->f_136]->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_159((*Global_1392194)[iParam3->f_136]->f_6, 0);
		func_160((*Global_1392194)[iParam3->f_136]->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_161(&iVar1, &iVar2, func_4(1, 1048576));
	}
	else
	{
		func_162(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_147(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_163(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_164(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(iParam3, 32))
	{
		_0xb173599d61faeb31();
	}
}

void func_30()
{
	switch (iLocal_14)
	{
		case 1:
			iLocal_2649 = 16;
			break;
		case 2:
			iLocal_2649 = 16;
			break;
		case 3:
			iLocal_2649 = 12;
			break;
		default:
			iLocal_2649 = 0;
			break;
	}
	if (func_22(&Local_3653, 32))
	{
		iLocal_2649 = 0;
	}
	iVar1 = 838;
	while (iVar1 <= 857)
	{
		if (iVar0 >= iVar2647)
		{
			func_24(iVar1, 32);
			func_165(iVar1);
		}
		else
		{
			func_166(iVar1, 32);
			if (_0x800df3fc913355f3(func_167(iVar1)))
			{
				_0x4f81ead1de8fa19b(func_167(iVar1));
			}
		}
		iVar0++;
		iVar1++;
	}
	iVar1 = 835;
	while (iVar1 <= 837)
	{
		if (iLocal_14 >= 4 || func_22(&Local_3653, 32))
		{
			func_24(iVar1, 32);
			func_165(iVar1);
		}
		else
		{
			func_166(iVar1, 32);
			if (_0x800df3fc913355f3(func_167(iVar1)))
			{
				_0x4f81ead1de8fa19b(func_167(iVar1));
			}
		}
		iVar1++;
	}
}

void func_31()
{
	switch (iLocal_14)
	{
		case 1:
			iLocal_2305[0] = _create_volume_box_with_custom_name(2204.035f, 640.3217f, 96.741f, 0f, 0f, -60.07614f, 5.208361f, 7.620852f, 2.721208f, "EA CURR - volRcmpInt");
			_0x18262cafebb5fbe1(&(iLocal_2305[0]), 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(&(iLocal_2305[0]), 0, 0, 0, -1, -1, 0);
			set_bit(&uLocal_4550, 0);
			iLocal_2305[2] = _create_volume_box_with_custom_name(2223.267f, 647.9719f, 94.57482f, 0.478955f, 2.413458f, -36.62908f, 4.519195f, 4.858881f, 2.951118f, "EA CURR - volSupplies");
			iLocal_2305[10] = _create_volume_cylinder_with_custom_name(2204.302f, 646.4114f, 96.90681f, 0f, 0f, 29.00312f, 11.29416f, 14.33589f, 2.546122f, "EA CURR - volHorseBlock");
			break;
		case 2:
			iLocal_2305[0] = _create_volume_box_with_custom_name(2183.472f, 778.6752f, 107.4242f, 0f, 0f, 29.5373f, 8.13396f, 4.581317f, 2.768851f, "EA CURR - volRcmpInt");
			_0x18262cafebb5fbe1(&(iLocal_2305[0]), 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(&(iLocal_2305[0]), 0, 0, 0, -1, -1, 0);
			set_bit(&uLocal_4550, 0);
			iLocal_2305[2] = _create_volume_box_with_custom_name(2186.02f, 814.3329f, 109.6374f, 4.299829f, 0f, -22.4855f, 4.833133f, 4.665477f, 3.172462f, "EA CURR - volSupplies");
			iLocal_2305[10] = _create_volume_aggregate_with_custom_name("EA CURR - volHorseBlock");
			_0xbce668aaf83608be(&(iLocal_2305[10]), 2187.902f, 780.4258f, 108.85f, 0f, 0f, 0f, 8.055205f, 14.14526f, 3.793504f);
			if (!func_25(8))
			{
				_0xbce668aaf83608be(&(iLocal_2305[10]), 2180.28f, 880.4135f, 116.4027f, 0f, 0f, 18.69797f, 7.689991f, 10.58464f, 4.79523f);
			}
			break;
		case 3:
			iLocal_2305[0] = _create_volume_box_with_custom_name(1944.993f, 947.5162f, 116.3001f, 0f, 0f, 19.37593f, 4.376749f, 6.216661f, 3.277854f, "EA CURR - volRcmpInt");
			_0x18262cafebb5fbe1(&(iLocal_2305[0]), 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(&(iLocal_2305[0]), 0, 0, 0, -1, -1, 0);
			set_bit(&uLocal_4550, 0);
			iLocal_2305[2] = _create_volume_box_with_custom_name(1965.389f, 928.3877f, 117.2054f, 0f, 0f, 6.195515f, 4.741714f, 4.767919f, 3.094948f, "EA CURR - volSupplies");
			iLocal_2305[10] = _create_volume_box_with_custom_name(1948.251f, 943.1533f, 117.0246f, 0f, 0f, 12.15738f, 8.350031f, 7.58487f, 4f, "EA CURR - volHorseBlock");
			break;
	}
}

Vector3 func_32(int iParam0, int iParam1)
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

void func_33()
{
	switch (iLocal_14)
	{
		case 1:
			Local_2650.f_7 = { 2177.521f, 618.694f, 90f };
			Local_2650.f_10 = { 2256.262f, 700.7935f, 115f };
			break;
		case 2:
			Local_2650.f_7 = { 2161.365f, 757.0647f, 100f };
			Local_2650.f_10 = { 2231.307f, 864.3625f, 125f };
			break;
		case 3:
			Local_2650.f_7 = { 1903.7f, 901.1866f, 100f };
			Local_2650.f_10 = { 1987.008f, 961.9562f, 125f };
			break;
	}
}

void func_34()
{
	switch (iLocal_14)
	{
		case 1:
			iVar0 = -586415580;
			break;
		case 2:
			iVar0 = 1251859782;
			break;
		case 3:
			iVar0 = 994786977;
			break;
	}
	if (!func_168(iVar0) || !func_169(iVar0))
	{
		func_170(Local_2650.f_4, 80f, 0);
		func_171(Local_2650.f_4, 80f, 0);
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_172(iParam3, iParam0);
	vVar1 = { func_173(iVar0) };
	vVar4 = { func_174(iVar0) };
	if (func_175(vVar1))
	{
		return;
	}
	if (!func_176(19, 16384))
	{
		if (!func_147(iParam1))
		{
			return;
		}
	}
	if (!_does_volume_exist(iParam2))
	{
		return;
	}
	_0x748c5f51a18cb8f0(0);
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_177(iParam0);
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	if (func_175(vVar4))
	{
		Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	}
	else
	{
		Global_1914319->f_15936[iVar0]->f_2 = { vVar4 };
	}
	Global_1914319->f_3[iParam0]->f_10 = iVar0;
	Global_1914319->f_3[iParam0]->f_25 = iParam2;
	Global_1914319->f_3[iParam0]->f_26 = uParam4;
	Global_1914319->f_3[iParam0]->f_28 = uParam5;
	Global_1914319->f_3[iParam0]->f_29 = iParam9;
	Global_1914319->f_3[iParam0]->f_9 = iParam3;
	Global_1914319->f_3[iParam0]->f_409 = iParam8;
	if (func_178(iVar0) || func_179(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			case 61:
				iVar7 = 922959422;
				break;
			case 73:
				iVar7 = 646741747;
				break;
			case 43:
				iVar7 = -1159824322;
				break;
			case 41:
				iVar7 = 327042733;
				break;
		}
		Global_1914319->f_3[iParam0]->f_20 = func_180(5, Global_1914319->f_3[iParam0]->f_10, 2, iVar7);
	}
	*Global_1393529->f_114[iParam0] = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_181(iParam0);
	}
	Global_1914319->f_3[iParam0]->f_19 = fParam7;
	Global_1914319->f_3[iParam0]->f_8 = iParam6;
	if (!func_182(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_183(iParam3);
			break;
		case 10:
			func_184(iParam3);
			break;
		case 18:
			func_36();
			break;
		case 9:
			func_185();
			break;
		case 22:
			func_186();
			break;
	}
	func_187(Global_1914319->f_3[iParam0]->f_10);
	func_188(iParam0, 16);
	func_189(iParam0, 4);
	_0x748c5f51a18cb8f0(1);
}

void func_36()
{
	StringCopy(Global_1393529->f_288[18], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_37()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_2504[iVar0] = -1;
		iVar0++;
	}
}

void func_38()
{
	switch (iVar2186)
	{
		case 0:
			if (func_22(&Local_3653, 16384))
			{
				if (!func_22(&Local_3653, 32768))
				{
					func_190(Local_3653.f_136);
				}
				else
				{
					func_5(Local_3653.f_136, 1024);
				}
			}
			if (func_22(&Local_3653, 2))
			{
				func_85(1);
			}
			if (iLocal_14 == 1)
			{
				set_ped_config_flag(Global_35, 252, true);
			}
			set_ped_reset_flag(Global_35, 187, false);
			func_82(&Local_2145, &Local_3653, 0);
			func_191();
			if (func_11(Local_3653.f_136, 128))
			{
				iVar0 = func_52(Local_3653.f_138);
				func_192(&iVar0);
			}
			switch (iLocal_14)
			{
				case 2:
					if (func_12(-1580473214, 1, 0))
					{
						Global_40.f_9096[Local_3653.f_136]->f_2 = -1;
					}
					break;
			}
			if ((((iLocal_14 == 2 && !func_11(Local_3653.f_136, 524288)) && !func_11(Local_3653.f_136, 1048576)) && !func_11(Local_3653.f_136, 2097152)) && _does_volume_exist(&(iLocal_2305[1])))
			{
				vVar1 = { _0x3e2a25b2416dd67e(&(iLocal_2305[1])) };
				_0x9851de7aec10b4e1(_0xf70f00013a62f866(&(iLocal_2305[1])), ((vVar1.x + vVar1.y) / 2f), 1, 0);
			}
			if (does_cam_exist(iVar2465))
			{
				destroy_cam(iVar2465, false);
			}
			break;
		case 1:
			iLocal_2178 = 0;
			while (iVar2176 < 15)
			{
				func_193(&(iLocal_2305[iVar2176]));
				iLocal_2178 = iVar2176 + 1;
			}
			if (_0xf6a8a652a6b186cd(uVar2324))
			{
				_0xfdfecc6ee4491e11(uVar2324);
			}
			iLocal_2178 = 0;
			while (iVar2176 < iVar3979)
			{
				if (!is_entity_dead(&(iLocal_3981[iVar2176])))
				{
					if (func_194(&(iLocal_3981[iVar2176]), (*Global_1392194)[Local_3653.f_136]->f_5, 1, 0))
					{
						if (!does_entity_belong_to_this_script(&(iLocal_3981[iVar2176]), false))
						{
							set_entity_as_mission_entity(&(iLocal_3981[iVar2176]), true, false);
						}
						clear_ped_tasks_immediately(&(iLocal_3981[iVar2176]), false, true);
						delete_ped(iLocal_3981[iVar2176]);
					}
					else
					{
						set_ped_keep_task(&(iLocal_3981[iVar2176]), true);
						set_ped_as_no_longer_needed(iLocal_3981[iVar2176]);
					}
				}
				iLocal_2178 = iVar2176 + 1;
			}
			break;
		case 2:
			if (_0x0d0ae5081f88cfe1(Local_2650.f_15[0]->f_1))
			{
				_0x154340e87d8cc178(Local_2650.f_15[0]->f_1);
			}
			if (_0x0d0ae5081f88cfe1(-532378284))
			{
				_0x154340e87d8cc178(-532378284);
			}
			func_88();
			_0x8379e05871ad24e0();
			func_195();
			func_196(1);
			if (func_89(iVar2172))
			{
				func_91(iVar2172, 1, 2);
			}
			break;
		case 3:
			if (func_25(4))
			{
				func_83();
			}
			func_197(Local_3653.f_136, &Local_2650, &Local_3653);
			func_198(&Local_2650);
			_text_database_delete(func_199());
			_text_database_delete(func_200());
			break;
		default:
			terminate_this_thread();
			break;
	}
	uLocal_2188 = iVar2186 + 1;
}

void func_39(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_201(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_40(int iParam0, int iParam1)
{
	_0xf008e0ba1fe1d644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

bool func_41()
{
	switch (iVar4437)
	{
		case 0:
			if (!_0xcf45df50c7775f2a())
			{
				func_202();
				func_203(&Local_3653);
				func_203(&uLocal_2114);
				func_204(&Local_3653, 1f);
			}
			else
			{
				return false;
			}
			func_205(&(Local_2650.f_15));
			func_205(&(Local_2650.f_304));
			func_205(&(Local_2650.f_369));
			func_206();
			func_207();
			func_208();
			func_209(&(Local_2650.f_690));
			func_209(&Local_1873);
			func_210();
			if (func_25(4))
			{
				func_211(&Local_2509);
			}
			if (iLocal_14 == 2 && !func_25(8))
			{
				func_212();
			}
			_text_database_request(func_199());
			_text_database_request(func_200());
			iLocal_4439 = 1;
			break;
		case 1:
			if (!func_48())
			{
			}
			if (!func_213())
			{
			}
			if (!func_54())
			{
			}
			if (!func_207())
			{
				return false;
			}
			if (!func_55())
			{
			}
			if (!func_214())
			{
				func_212();
				return false;
			}
			return true;
	}
	return false;
}

void func_42(int iParam0)
{
	iLocal_17 = (iLocal_17 - (iLocal_17 && iParam0));
}

bool func_43(int iParam0)
{
	return (iLocal_17 && iParam0) != 0;
}

int func_44(int iParam0)
{
	return func_46(func_45(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

Vector3 func_45()
{
	return 0f, 0f, 0f;
}

int func_46(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_215((*iParam3)[iVar0]->f_11, 16))
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
					if (func_215((*iParam3)[iVar0]->f_11, 64))
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
					if (!func_215((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_215((*iParam3)[iVar0]->f_11, 128))
					{
						func_216(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_215((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_175((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_215((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_217((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_215((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_215((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_215((*iParam3)[iVar0]->f_11, 32))
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

void func_47(int iParam0)
{
	iLocal_17 = (iLocal_17 || iParam0);
}

bool func_48()
{
	if (!func_218(&(Local_2650.f_15)))
	{
		return false;
	}
	if (!func_218(&(Local_2650.f_369)))
	{
		return false;
	}
	if (!func_218(&(Local_2650.f_304)))
	{
		return false;
	}
	return true;
}

bool func_49(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
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
				(*iParam2)[*iParam5] = func_219(iParam0->f_15[*iParam5]->f_1, iParam0->f_15[*iParam5], iParam0->f_15[*iParam5]->f_6, iParam0->f_15[*iParam5]->f_9, 1, 0, 1, 0, 1);
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
			(*uParam3)[iVar0] = create_vehicle(iParam0->f_304[iVar0]->f_1, iParam0->f_304[iVar0]->f_6, iParam0->f_304[iVar0]->f_9, true, true, false, false);
			(*uParam3)[0] = uParam3[0];
		}
		iVar0++;
	}
	return true;
}

int func_50(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_221(func_220(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		func_222(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_223(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_224(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_175(vVar0))
	{
		_0x59c7ad6fea2ac449(func_167(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_167(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_167(iParam0), 0);
	}
	if (!func_175(vVar0))
	{
		_0xbb68908cd11aebdc(func_167(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_51(int iParam0, bool bParam1, bool bParam2)
{
	func_225(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_52(iParam0);
	if (!is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 178, !bParam1);
		set_ped_config_flag(iVar0, 168, false);
		set_ped_config_flag(iVar0, 259, true);
		set_ped_config_flag(iVar0, 297, bParam2);
		_0x6759bee6762e140b(func_167(iParam0));
		if (!bParam1)
		{
			func_226(iVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_52(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_221(func_220(iParam0)))
	{
		return func_227(iParam0);
	}
	return _0xe76687023d8c8505(func_228(iParam0), 0);
}

void func_53(int iParam0, bool bParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	iVar0 = func_124(iParam0);
	if (bParam1)
	{
		func_126(iVar0, 8);
		func_127(&((*Global_1392194)[iParam0]->f_1), 1);
	}
	else
	{
		func_229(iVar0, 8);
		func_230(&((*Global_1392194)[iParam0]->f_1), 1);
	}
}

bool func_54()
{
	if (!func_231(&uLocal_3809))
	{
		return false;
	}
	if (!func_232())
	{
		return false;
	}
	return true;
}

bool func_55()
{
	if (!_text_database_has_loaded(func_199()))
	{
		return false;
	}
	if (!_text_database_has_loaded(func_200()))
	{
		return false;
	}
	return true;
}

bool func_56()
{
	if (func_25(2))
	{
		return true;
	}
	if (func_25(8))
	{
		return true;
	}
	switch (iLocal_14)
	{
		case 1:
			if (func_4(Local_3653.f_136, 256) && !func_4(Local_3653.f_136, 64))
			{
				return false;
			}
			break;
		case 2:
			if (func_4(Local_3653.f_136, 4) && !func_11(Local_3653.f_136, 262144))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_57(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_233(uParam0, iParam1, sParam2))
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

void func_58()
{
	iVar0 = func_52(Local_3653.f_138);
	if (!is_entity_dead(iVar0))
	{
		if (!func_234(iVar0, 1))
		{
			func_235(iVar0, "EA_Rcamp_Foreman", 0);
		}
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	switch (iLocal_14)
	{
		case 1:
			if (!func_11(Local_3653.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					func_237(&iVar0, func_236(), 1, 0, 1, 0, 1, 1, 0);
				}
			}
			else if (!is_entity_dead(iVar0))
			{
				task_use_nearest_scenario_to_coord_warp(iVar0, func_236(), 1.5f, -1, true, false, false, false);
			}
			break;
		case 2:
			if (!func_11(Local_3653.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					task_use_nearest_scenario_to_coord_warp(iVar0, 2182.488f, 776.2858f, 106.6281f, 1.5f, -1, true, false, false, false);
				}
			}
			else if (!is_entity_dead(func_52(Local_3653.f_138)))
			{
				task_use_nearest_scenario_to_coord_warp(iVar0, 2186.958f, 784.5914f, 106.6165f, 1.5f, -1, true, false, false, false);
			}
			break;
		case 3:
			if (!is_entity_dead(func_52(Local_3653.f_138)))
			{
				task_use_nearest_scenario_to_coord_warp(iVar0, func_238(), 1.5f, -1, true, false, false, false);
			}
			break;
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (func_239(iParam0, 0))
	{
		iVar0 = func_52(iParam0);
		if (!is_entity_dead(iVar0))
		{
			set_ped_config_flag(iVar0, 234, true);
			set_ped_config_flag(iVar0, 259, true);
		}
		func_240(iParam0, 0, 1, 0, 0);
		_0x6759bee6762e140b(func_167(iParam0));
		if (bParam1)
		{
			func_226(iVar0, 1, 1);
		}
	}
}

void func_60(var uParam0)
{
	func_241(uParam0, 0f);
}

void func_61(int iParam0)
{
	if (iLocal_14 == 2 && does_entity_exist(Local_2650.f_690[3]->f_8))
	{
		_0x56e0735d6273b227(Local_2650.f_690[3]->f_8, iParam0);
	}
}

bool func_62(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return _0x1b065a2bf7953815(0) != 1;
}

void func_63()
{
	Local_3911.f_24 = 0;
	Local_3911.f_23 = 0;
	Local_3911.f_17 = 0;
	func_127(&(Local_3911.f_34), 1);
	if (!func_25(2))
	{
		switch (iLocal_14)
		{
			case 1:
				sVar1[0] = "TRACKS_AMB01A";
				iVar6[0] = 1;
				sVar1[1] = "TRACKS_AMB02A";
				iVar6[1] = 1;
				sVar1[2] = "TRACKS_AMB03A";
				iVar6[2] = 1;
				sVar1[3] = "TRACKS_AMB04A";
				iVar6[3] = 1;
				break;
			case 2:
				if (!func_144())
				{
					sVar1[0] = "TRACKS_AMB01B";
					iVar6[0] = 1;
					sVar1[1] = "TRACKS_AMB02B";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_AMB03B";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_AMB04B";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[0] = "TRACKS_AMB01B_W";
					iVar6[0] = 1;
					sVar1[1] = "TRACKS_AMB02B_W";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_AMB03B_W";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_AMB04B_W";
					iVar6[3] = 1;
				}
				break;
			case 3:
				sVar1[0] = "TRACKS_AMB01C";
				iVar6[0] = 1;
				sVar1[1] = "TRACKS_AMB02C";
				iVar6[1] = 1;
				sVar1[2] = "TRACKS_AMB03C";
				iVar6[2] = 1;
				sVar1[3] = "TRACKS_AMB04C";
				iVar6[3] = 1;
				break;
		}
	}
	else if (func_242(1) > 0)
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
	Local_3911.f_33 = 15f;
	func_243(&sVar1, &iVar6, &Local_3911, bVar0);
}

void func_64()
{
	Local_3946.f_24 = 0;
	Local_3946.f_23 = 0;
	Local_3946.f_17 = 0;
	func_127(&(Local_3946.f_34), 1);
	func_127(&(Local_3946.f_34), 8);
	if (!func_25(2))
	{
		switch (iLocal_14)
		{
			case 1:
				if (!func_25(8))
				{
					if (!func_43(4096))
					{
						sVar1[0] = "TRACKS_GUARD01A";
						iVar6[0] = 0;
					}
					else
					{
						sVar1[0] = "TRACKS_GUARD04A";
						iVar6[0] = 1;
					}
					sVar1[1] = "TRACKS_GUARD02A";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03A";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04A";
					iVar6[3] = 1;
					bVar0 = true;
				}
				else
				{
					sVar1[0] = "TRACKS_GUARD01A_W";
					iVar6[0] = 0;
					sVar1[1] = "TRACKS_GUARD02A_W";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03A_W";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04A_W";
					iVar6[3] = 1;
				}
				break;
			case 2:
				if (func_144())
				{
					sVar1[0] = "TRACKS_GUARD01B_W";
					iVar6[0] = 1;
					sVar1[1] = "TRACKS_GUARD02B_W";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03B_W";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04B_W";
					iVar6[3] = 1;
				}
				else if (func_4(Local_3653.f_136, 128))
				{
					sVar1[0] = "TRACKS_GUARD01B_A";
					iVar6[0] = 0;
					sVar1[1] = "TRACKS_GUARD02B_A";
					iVar6[1] = 0;
					sVar1[2] = "TRACKS_GUARD03B_A";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04B_A";
					iVar6[3] = 1;
				}
				else
				{
					if (!func_43(4096))
					{
						if (!func_4(Local_3653.f_136, 64))
						{
							sVar1[0] = "TRACKS_GUARD01BA";
						}
						else
						{
							sVar1[0] = "TRACKS_GUARD01B";
						}
						iVar6[0] = 0;
					}
					else
					{
						sVar1[0] = "TRACKS_GUARD04B";
						iVar6[0] = 1;
					}
					sVar1[1] = "TRACKS_GUARD02B";
					iVar6[1] = 1;
					sVar1[2] = "TRACKS_GUARD03B";
					iVar6[2] = 1;
					sVar1[3] = "TRACKS_GUARD04B";
					iVar6[3] = 1;
					bVar0 = true;
				}
				break;
			case 3:
				if (func_4(Local_3653.f_136, 64) || func_4(Local_3653.f_136, 128))
				{
					sVar1[0] = "TRACKS_GUARD01C";
				}
				else
				{
					sVar1[0] = "TRACKS_GUARD01CA";
				}
				iVar6[0] = 0;
				sVar1[1] = "TRACKS_GUARD02C";
				iVar6[1] = 1;
				sVar1[2] = "TRACKS_GUARD03C";
				iVar6[2] = 1;
				sVar1[3] = "TRACKS_GUARD04C";
				iVar6[3] = 1;
				break;
		}
	}
	Local_3946.f_33 = 15f;
	Local_3946.f_32 = 10f;
	func_243(&sVar1, &iVar6, &Local_3946, bVar0);
}

void func_65(bool bParam0)
{
	iVar0 = func_17(2);
	if (func_11(2, 128))
	{
		func_244(2, 0);
	}
	else
	{
		if (iVar0 > 3)
		{
			func_244(2, 0);
		}
		if (func_4(2, 32768) && !func_12(-1580473214, 1, 0))
		{
			func_244(2, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_4(2, 64))
					{
						func_244(2, 0);
					}
					else if (func_4(2, 256))
					{
						if (bParam0 || !func_11(2, 268435456))
						{
							func_245(2);
							func_246(2, 0, "TRACKS_JOURN01", 0, !bParam0);
							func_247(2, 268435456);
						}
					}
					else
					{
						func_244(2, 0);
					}
					break;
				case 2:
					if (func_11(2, 262144))
					{
						func_244(2, 0);
					}
					else if (func_4(2, 4))
					{
						if (bParam0 || !func_11(2, 268435456))
						{
							func_245(2);
							func_246(2, 0, "TRACKS_JOURN02", 0, !bParam0);
							func_247(2, 268435456);
						}
					}
					else
					{
						func_244(2, 0);
					}
					break;
				default:
					func_244(2, 0);
					break;
			}
		}
	}
}

void func_66(int iParam0, int iParam1)
{
	if (!func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

bool func_67()
{
	return (func_248(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

void func_68()
{
	set_force_object_this_frame(func_249(), 5f);
	if (iLocal_14 == 2 && !func_25(8))
	{
		set_force_object_this_frame(func_250(), 5f);
	}
}

void func_69()
{
	if ((iVar2175 % 10) == 0)
	{
		iVar0 = 835;
		while (iVar0 <= 837)
		{
			iVar1 = func_52(iVar0);
			if (!is_entity_dead(iVar1) && !func_234(iVar1, 1))
			{
				sVar2 = func_251(Local_3653.f_136, -1);
				set_ped_config_flag(iVar1, 301, false);
				set_ped_config_flag(iVar1, 297, true);
				func_235(iVar1, sVar2, 0);
				_0xb8b6430ead2d2437(iVar1, -1245139227);
			}
			iVar0++;
		}
	}
}

int func_70(int iParam0, int iParam1)
{
	if (!Global_1935630->f_12 && func_194(Global_35, (*Global_1392194)[iParam0->f_136]->f_5, 1, 0))
	{
		if (!func_22(iParam0, 64))
		{
			func_15(iParam0, 64);
			func_252(iParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

void func_71(var uParam0)
{
	if (!func_111(16) && (func_43(8388608) || func_253(vLocal_2327[3], 120f)))
	{
		if (!func_254())
		{
			func_60(vLocal_2327[3]);
			return;
		}
		if (func_148() && !(func_43(268435456) && func_43(536870912)))
		{
			if (!func_43(268435456))
			{
				func_47(268435456);
				func_28();
				func_60(vLocal_2327[3]);
			}
			else if (!func_43(536870912))
			{
				func_47(536870912);
				func_28();
				func_60(vLocal_2327[3]);
			}
		}
		else if (!func_43(1073741824))
		{
			func_47(1073741824);
			func_28();
			func_60(vLocal_2327[3]);
		}
		else if (!func_43(-2147483648))
		{
			func_47(-2147483648);
			func_28();
		}
		else if (func_111(8))
		{
			func_28();
			func_255(8);
			func_106(16);
		}
		func_42(8388608);
	}
	if (func_16(*uParam0, &Local_3653, 5) || (func_22(&Local_3653, 256) && !func_43(134217728)))
	{
		if (!func_254())
		{
			func_256();
		}
		func_28();
	}
	if (func_257(vLocal_2327[3]))
	{
		bVar0 = true;
		if (func_43(134217728))
		{
			if (func_148())
			{
				func_47(268435456);
				func_47(536870912);
			}
			bVar0 = false;
		}
		if (!func_258(64))
		{
			func_259();
			func_256();
			bVar0 = false;
		}
		if (bVar0)
		{
			if (!func_257(vLocal_2327[3]))
			{
				func_60(vLocal_2327[3]);
			}
		}
		else if (func_257(vLocal_2327[3]))
		{
			func_260(vLocal_2327[3]);
		}
	}
}

void func_72()
{
	if (!func_111(8388608))
	{
		if (!func_25(32) && func_261(func_249(), 1) < 50f)
		{
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (does_entity_exist(Local_2650.f_690[iVar0]->f_8))
				{
					freeze_entity_position(Local_2650.f_690[iVar0]->f_8, false);
				}
				iVar0++;
			}
			func_106(8388608);
		}
	}
	else if (func_25(32) || func_261(func_249(), 1) > 75f)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (does_entity_exist(Local_2650.f_690[iVar1]->f_8))
			{
				freeze_entity_position(Local_2650.f_690[iVar1]->f_8, true);
			}
			iVar1++;
		}
		func_255(8388608);
	}
}

void func_73()
{
	if (!func_262(2048))
	{
		if (func_262(1024) || (get_frame_count() % 9) == 0)
		{
			func_263(1024);
			iVar0 = (get_frame_count() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iLocal_2178 = 0;
			while (iVar2176 < 2)
			{
				sVar30 = func_264(&Var1, iVar2176);
				if (!is_string_null_or_empty(sVar30))
				{
					_0xef51242e35242b47(sVar30);
				}
				iLocal_2178 = iVar2176 + 1;
			}
			if (iVar0 == 8)
			{
				func_263(2048);
			}
		}
	}
}

float func_74(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_75(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_265(get_player_index(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = (*Global_1392194)[uParam0->f_136]->f_6;
	}
	if (func_194(Global_35, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, fParam2);
	}
	iVar0 = _get_last_mount(Global_35);
	if (func_194(iVar0, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(iVar0, fParam3);
	}
}

void func_76(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, bool bParam9)
{
	if ((*uParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_23(iVar0, 32))
			{
				iVar1 = func_52(iVar0);
				if (!is_entity_dead(iVar1))
				{
					if (is_ped_human(iVar1))
					{
						(*uParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = func_266(iVar1, 1, 0);
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
						func_267(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							set_ped_seeing_range(iVar1, fParam8);
						}
					}
					else
					{
						func_268(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*uParam5 = iVar2;
		*uParam6 = 0;
	}
	*uParam6++;
}

void func_77(int iParam0)
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

void func_78(int iParam0)
{
	func_269();
	if (!func_25(2) && (iVar2178 >= 3 || func_118(&Local_2145, 16)))
	{
		if (!func_118(&Local_2145, 16))
		{
			func_270(&Local_2145, 1);
			func_271(&Local_2145, Local_4142[3], Local_4227[3]);
			func_82(&Local_2145, &Local_3653, 0);
			func_270(&Local_2145, 16);
		}
		func_272(&iParam0);
	}
}

bool func_79(int iParam0, int iParam1)
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
				*iParam0++;
				decor_set_int(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					set_ped_config_flag(iVar1, 330, true);
				}
				return true;
			}
		}
	}
	return false;
}

void func_80()
{
	func_60(vLocal_2327[8]);
	if (iVar2178 >= 3)
	{
		func_273();
		iLocal_2180 = (iVar2178 - 2);
		func_274();
		if (!func_118(&Local_2145, 1))
		{
			if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, true, true))
			{
				Local_3653.f_10 = get_ped_index_from_entity_index(iVar0);
			}
			func_276(&Local_2145, &Local_3653, 65536, 52015, 1, 1);
			if (iVar2143 == func_52(Local_3653.f_138))
			{
				StringCopy(Local_2145.f_20[0], func_264(&Local_2145, 0), 32);
				StringCopy(Local_2145.f_20[1], func_264(&Local_2145, 1), 32);
				func_270(&Local_2145, 32);
			}
			else
			{
				func_277();
			}
		}
		else
		{
			func_270(&Local_2145, 512);
		}
	}
}

int func_81()
{
	iVar0 = iVar2185;
	if (func_25(32))
	{
		return 0;
	}
	else if (func_111(131072))
	{
		return 1;
	}
	else if ((func_118(&Local_2145, 2) || func_278(&Local_3653, &(Local_3653.f_28))) || func_279(func_52(Local_3653.f_138), 0, &Local_3653, &(Local_3653.f_28), 0, 0))
	{
		if (func_118(&Local_2145, 2))
		{
		}
		else if (Local_3653.f_28 == 65536)
		{
			func_280(&Local_3653, &(Local_3653.f_28));
			func_107(&Local_3653, &(Local_3653.f_28));
			return 0;
		}
		else if (Local_3653.f_28 == 32)
		{
			return func_281();
		}
		else if (!func_282())
		{
			if (!func_283())
			{
				return 1;
			}
			return 0;
		}
		return 1;
	}
	else if ((func_284(&uLocal_4048, &Local_3653, &(Local_3653.f_28), &uLocal_2187, 0, (iVar2645 - 1), 4) || (func_285() && (func_279(&(iLocal_3981[1]), 0, &Local_3653, &(Local_3653.f_28), 0, 0) || func_279(&(iLocal_3981[2]), 0, &Local_3653, &(Local_3653.f_28), 0, 0)))) || func_286())
	{
		if (!func_282())
		{
			if (func_287(&(Local_3653.f_28)))
			{
				if (!func_283())
				{
					if (!func_118(&Local_2145, 1))
					{
						if (Local_3653.f_28 == 65536)
						{
							func_274();
							bVar1 = true;
						}
						func_273();
						func_276(&Local_2145, &Local_3653, Local_3653.f_28, 52015, bVar1, bVar1);
						if (iVar2143 == func_52(Local_3653.f_138))
						{
							StringCopy(Local_2145.f_20[0], func_264(&Local_2145, 0), 32);
							StringCopy(Local_2145.f_20[1], func_264(&Local_2145, 1), 32);
							func_270(&Local_2145, 32);
						}
						else
						{
							func_277();
						}
					}
					else if (Local_2145.f_13 > 2)
					{
						if (Local_3653.f_28 == 65536)
						{
							func_274();
						}
						func_270(&Local_2145, 512);
					}
				}
				if (!func_118(&Local_2145, 2))
				{
					func_280(&Local_3653, &(Local_3653.f_28));
					func_107(&Local_3653, &(Local_3653.f_28));
					return 0;
				}
			}
			else if (Local_3653.f_28 == 32)
			{
				return func_281();
			}
			return 1;
		}
	}
	else if (!func_25(16777216) && func_288(&Local_3653, &Local_2145, 52015))
	{
		if (!func_118(&Local_2145, 1))
		{
			func_273();
			func_276(&Local_2145, &Local_3653, 1024, 52015, 0, 0);
			if (iVar2143 == func_52(Local_3653.f_138))
			{
				StringCopy(Local_2145.f_20[0], func_264(&Local_2145, 0), 32);
				StringCopy(Local_2145.f_20[1], func_264(&Local_2145, 1), 32);
				func_270(&Local_2145, 32);
			}
			else
			{
				func_277();
			}
		}
		else
		{
			func_270(&Local_2145, 512);
		}
	}
	else if (func_289())
	{
		Local_3653.f_28 = 65536;
		return 1;
	}
	iVar2 = func_290(iVar0 + 4, (iVar2645 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar2)
	{
		if (&uLocal_4110[iVar0] < Local_3653.f_19 && func_291(&(uLocal_4048[iVar0]), &Local_3653, 0, &(uLocal_4110[iVar0])))
		{
			func_60(vLocal_2327[10]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_253(vLocal_2327[10], 10f))
	{
		func_280(&Local_3653, &(Local_3653.f_28));
	}
	return 0;
}

void func_82(int* iParam0, var uParam1, bool bParam2)
{
	func_260(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_120(iParam0, 1);
	func_120(iParam0, 4);
	func_120(iParam0, 32);
	func_120(iParam0, 128);
	func_120(iParam0, 64);
	func_120(iParam0, 8);
	func_120(iParam0, 256);
	func_120(iParam0, 512);
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

void func_83()
{
	_uilog_clear_cached_objective();
}

void func_84(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_292(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_293(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_294(iVar0);
	*uParam0 = 0;
}

void func_85(bool bParam0)
{
	if (func_295(bParam0))
	{
		func_9(Local_3653.f_136, 4);
		func_247(Local_3653.f_136, 67108864);
		if (func_4(Local_3653.f_136, 128) && !func_11(Local_3653.f_136, 128))
		{
			func_247(Local_3653.f_136, 262144);
			func_296(&Local_3653);
		}
	}
}

void func_86(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	if (!func_11(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 - (Global_40.f_9096[iParam0]->f_4 && iParam1));
}

void func_87(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_297((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_88()
{
	_0xc6366a585659d15c(get_player_index(), "");
	_0x98cd760de43b612e(get_player_index(), "");
	_0xc177c827cefc0aa4(get_player_index(), "");
	_0xbd96185264ddaaea(get_player_index(), "");
	_0x8af46e5159a5b620(Global_35, 0);
}

bool func_89(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_90(int iParam0)
{
	iVar0 = func_298(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_91(int iParam0, bool bParam1, int iParam2)
{
	if (!func_89(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_90(iParam0) && !func_299(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_300(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_90(iParam0))
	{
		iParam2 = -1;
	}
	if (func_301(iParam0) == 3 || (func_301(iParam0) == 1 && _0x01f4d242765c6b24(func_300(iParam0))))
	{
		func_303(func_302(iParam0), func_300(iParam0), iParam2);
		if ((!func_89(Global_1572864->f_8) && !func_128(0, 1, 0)) && !func_248(&Global_1935630, 32768))
		{
			iVar0 = func_304(iParam0);
			if (iVar0 != -1)
			{
				func_305(0);
			}
			else if (func_302(iParam0) == 8)
			{
				iVar0 = func_306();
				if (iVar0 != -1)
				{
					func_305(0);
				}
			}
		}
	}
	func_307(iParam0, 0);
	if (func_308(0) == iParam0)
	{
		func_309(1);
		func_310(0);
		func_311(1);
	}
	func_312(iParam0, 1);
	func_313(iParam0);
}

bool func_92(int iParam0)
{
	iVar0 = _0x5407b7288d0478b7(Global_35, iParam0);
	return iVar0 > 0;
}

int func_93()
{
	iVar0[0] = 835;
	iVar0[1] = 836;
	iVar0[2] = 837;
	fVar5 = 999f;
	iVar6 = -1;
	iLocal_2178 = 0;
	while (iVar2176 < 3)
	{
		iVar7 = func_52(&(iVar0[iVar2176]));
		fVar4 = func_266(iVar7, 1, 1);
		if (fVar4 < fVar5)
		{
			iVar6 = &iVar0[iVar2176];
			fVar5 = fVar4;
		}
		iLocal_2178 = iVar2176 + 1;
	}
	return iVar6;
}

bool func_94(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_314(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_95(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0]->f_9 = &Global_40.f_9096[iParam0];
	Global_40.f_9096[iParam0]->f_10 = Global_40.f_9096[iParam0]->f_3;
	func_315(iParam0, iParam1, 0, 0, 0, 1);
	func_5(iParam0, 32768);
	func_9(iParam0, 16777216);
	func_86(iParam0, 4194304);
}

void func_96()
{
	func_51(Local_3653.f_138, 1, 1);
	iVar1 = func_52(Local_3653.f_138);
	if (!is_entity_dead(iVar1))
	{
		func_317(&Local_3653, iVar1, uLocal_4044[0], 1, func_316(268435456, 1056964608, 1065353216), 0);
	}
	func_84(&(Local_3653.f_32), 1, 1);
	func_84(&(Local_3653.f_33), 1, 1);
	func_40(iVar2645, &Local_2650);
	iLocal_2648 = func_318(iVar2646 > iVar0, (iVar2646 - iVar0), 0);
	iVar0 = (iVar0 + func_320(&Local_3653, &uLocal_4048, &uLocal_4079, iVar2646, func_316(268435456, 1056964608, 1065353216), iVar2645, 0, 0, 0, 1, func_319(&Local_3653, Local_3653.f_28), 1051260355));
	iLocal_2648 = func_318(iVar2646 > iVar0, (iVar2646 - iVar0), 0);
	iVar0 = (iVar0 + func_321(&Local_3653, &iLocal_3981, &uLocal_3985, func_316(268435456, 1056964608, 1065353216), 0, iVar2646, 0, 0, 1, func_319(&Local_3653, Local_3653.f_28), 1051260355));
}

int func_97(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 1;
	}
	if (!func_323(Local_2370[func_322(iParam1)]))
	{
		_0x74c2b3dc0b294102(&(iLocal_2321[func_324(iParam1)]));
		func_193(&(iLocal_2321[func_324(iParam1)]));
		return 1;
	}
	switch (&iLocal_2487[iParam1])
	{
		case 10:
		default:
			func_325(10, iParam1);
			break;
			if (func_326(iParam0, &(Local_2370[func_322(iParam1)]), "worker", 0, 0, 1, 0))
			{
				bVar0 = true;
			}
			else if (func_327(&iParam0, iParam1))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_325(11, iParam1);
			}
			break;
		case 11:
			if (func_326(iParam0, &(Local_2370[func_322(iParam1)]), "worker", 0, 0, 1, 0))
			{
				func_328(Local_2370[func_322(iParam1)], iParam0, "worker");
				func_328(Local_2370[func_322(iParam1)], (Local_1873[func_329(0, iParam1)])->f_8, "HAMMER");
				activate_physics((Local_1873[func_329(0, iParam1)])->f_8);
				func_317(&Local_3653, iParam0, uLocal_3985[0], 1, 0, Global_35);
				func_325(9, iParam1);
				_0x74c2b3dc0b294102(&(iLocal_2321[func_324(iParam1)]));
				func_193(&(iLocal_2321[func_324(iParam1)]));
				return 1;
			}
			break;
		case 9:
			if (!func_257(vLocal_2327[6]))
			{
				func_60(vLocal_2327[6]);
			}
			return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	func_107(iParam0, &(iParam0->f_28));
	func_330(iParam0, 1);
	func_331(iParam0, 0);
	func_332(iParam0, 0);
	func_333(iParam0, 0);
	func_334(iParam0, 0);
}

int func_99(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_335(uParam0[iVar0], 0, 1))
		{
			if (decor_exist_on(uParam0[iVar0], "bCowering"))
			{
				if ((func_279(uParam0[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_336(uParam0[iVar0], iParam1, &(iParam1->f_28), 0)) || func_337(uParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || func_338((*uParam0)[iVar0], iParam1, 1097859072))
					{
						set_ped_relationship_group_hash(uParam0[iVar0], -401180987);
						_task_smart_flee_style_ped(uParam0[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(uParam0[iVar0], true);
						decor_remove(uParam0[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_100(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (iParam0->f_136 == 1)
	{
		func_161(&iVar1, &iVar2, func_4(1, 1048576));
	}
	else
	{
		func_162(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_147(iVar0))
		{
		}
		else if (func_23(iVar0, 32))
		{
		}
		else
		{
			iVar3 = func_52(iVar0);
			if (!does_entity_exist(iVar3))
			{
			}
			else if (!decor_exist_on(iVar3, "bPedAlreadyCounted"))
			{
				if (is_entity_dead(iVar3))
				{
					if (func_339(iParam0, iVar3))
					{
						decor_set_bool(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_22(iParam0, 32768))
						{
							func_15(iParam0, 32768);
						}
					}
				}
				else if (!func_22(iParam0, 32768))
				{
					if (has_entity_been_damaged_by_entity(iVar3, Global_35, 1, 1))
					{
						func_15(iParam0, 32768);
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
			if (func_339(iParam0, iParam5))
			{
				decor_set_bool(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_22(iParam0, 32768))
				{
					func_15(iParam0, 32768);
				}
			}
		}
		else if (!func_22(iParam0, 32768))
		{
			if (has_entity_been_damaged_by_entity(iParam5, Global_35, 1, 1))
			{
				func_15(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (does_entity_exist(iParam1[iVar4]) && !decor_exist_on(iParam1[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(iParam1[iVar4]))
			{
				if (func_339(iParam0, iParam1[iVar4]))
				{
					decor_set_bool(iParam1[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_15(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(iParam1[iVar4], Global_35, 1, 1))
				{
					func_15(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *uParam2)
	{
		if (does_entity_exist(uParam2[iVar4]) && !decor_exist_on(uParam2[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(uParam2[iVar4]))
			{
				if (func_339(iParam0, uParam2[iVar4]))
				{
					decor_set_bool(uParam2[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_15(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(uParam2[iVar4], Global_35, 1, 1))
				{
					func_15(iParam0, 32768);
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

bool func_101()
{
	func_255(8192);
	if (_0xd0b7aeb56229d317(Global_35) == &iLocal_3981[0])
	{
		func_106(8192);
		return true;
	}
	func_255(8192);
	if (!func_340(&(iLocal_3981[0]), Global_35, 20f, 1))
	{
		return false;
	}
	if (_0x7f9b9791d4cb71f6(&(iLocal_3981[0]), Global_35, false, 0) == 0)
	{
		return false;
	}
	if (func_341(&(iLocal_3981[0]), Global_35, 0.6f) != 0)
	{
		return false;
	}
	if (!_0xcb690f680a3ea971(Global_35, 4))
	{
		return false;
	}
	if (!get_ped_reset_flag(Global_35, 0))
	{
		return false;
	}
	if (func_342(&(iLocal_3981[0]), 1, 1, 1, 0, 0))
	{
		return true;
	}
	if (func_343(&(iLocal_3981[0]), 1090519040, 1103626240, 1097859072, 0))
	{
		return true;
	}
	return false;
}

void func_102(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_106(iParam0);
	}
	else
	{
		func_255(iParam0);
	}
}

void func_103(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(iParam0);
	}
	else
	{
		func_344(iParam0);
	}
}

bool func_104()
{
	if (iLocal_14 != 1)
	{
		return false;
	}
	if (!func_4(Local_3653.f_136, 256))
	{
		return false;
	}
	if (func_25(128))
	{
		return false;
	}
	if (iVar2475 == 4)
	{
		return false;
	}
	if (func_194(&(iLocal_3981[0]), &(iLocal_2305[5]), 1, 0))
	{
		return false;
	}
	return true;
}

bool func_105()
{
	if (func_279(&(iLocal_3981[0]), 0, &uLocal_2114, &uLocal_2142, 0, 0))
	{
		if (func_345(iVar2140))
		{
			func_107(&uLocal_2114, &uLocal_2142);
			return false;
		}
		return true;
	}
	if (_0x57779b55b83e2bea(&(iLocal_3981[0])))
	{
		return true;
	}
	return false;
}

void func_106(int iParam0)
{
	iLocal_18 = (iLocal_18 || iParam0);
}

void func_107(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_346();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_347(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

bool func_108(int iParam0)
{
	if (get_ped_config_flag(*iParam0, 11, false))
	{
		return false;
	}
	if (!is_entity_dead(*iParam0))
	{
		return false;
	}
	return true;
}

int func_109()
{
	return -1668934283;
}

char* func_110()
{
	vVar1 = { func_348(Global_35, 1065353216) };
	iVar4 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar1, 1060437492);
	switch (iVar4)
	{
		case 0:
			iVar4 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar1, 1f);
			switch (iVar4)
			{
				case 3:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_L";
					break;
				case 2:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_R";
					break;
			}
			break;
		case 2:
			sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_R";
			break;
		case 3:
			sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_L";
			break;
		case 1:
			iVar4 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar1, 1f);
			switch (iVar4)
			{
				case 3:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_BL";
					break;
				case 2:
					sVar0 = "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@GUNSHOT_EXIT_BR";
					break;
			}
			break;
	}
	return sVar0;
}

bool func_111(int iParam0)
{
	return (iLocal_18 && iParam0) != 0;
}

void func_112(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_352(Local_4142[iParam0], 0);
	func_353(iParam0, 0);
	if (!bParam2)
	{
		func_255(-2147483648);
	}
	if (bParam1)
	{
		iLocal_4436 = -1;
	}
}

void func_113(int iParam0)
{
	iLocal_2477 = iParam0;
}

bool func_114(char* sParam0)
{
	return _0xd89504d9d7d5057d(sParam0);
}

void func_115(char* sParam0, bool bParam1)
{
	func_354(sParam0, bParam1, 0);
}

void func_116()
{
	if (iVar4441 < 0)
	{
		return;
	}
	if (iVar4441 < iVar2648)
	{
		if (!is_entity_dead(&(iLocal_3981[iVar4441])) && !is_ped_in_combat(&(iLocal_3981[iVar4441]), 0))
		{
			clear_ped_tasks(&(iLocal_3981[iVar4441]), 1, 0);
			_task_smart_flee_style_ped(&(iLocal_3981[iVar4441]), Global_35, 4, 0, 1000f, -1, 0);
			func_355(&(iLocal_3981[iVar4441]));
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (iVar4441 < iVar2645)
	{
		if (!is_entity_dead(&(uLocal_4048[iVar4441])) && !is_ped_in_combat(&(uLocal_4048[iVar4441]), 0))
		{
			clear_ped_tasks(&(uLocal_4048[iVar4441]), 1, 0);
			_task_smart_flee_style_ped(&(uLocal_4048[iVar4441]), Global_35, 4, 0, 1000f, -1, 0);
			func_355(&(uLocal_4048[iVar4441]));
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (!(iVar0 && iVar1))
	{
		uLocal_4443 = iVar4441 + 1;
	}
}

void func_117(int iParam0)
{
	if (!func_356(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_357(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_358(iVar1, 1))
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
			func_120(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_118(int iParam0, int iParam1)
{
	return func_359(iParam0->f_17, iParam1);
}

void func_119(var uParam0, int* iParam1, int* iParam2, var uParam3)
{
	if (is_entity_dead(*iParam1))
	{
		func_82(iParam1, uParam0, 0);
		return;
	}
	func_360(iParam1);
	if (func_118(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_361(iParam1, 7);
		}
		func_120(iParam1, 4);
	}
	if (func_118(iParam1, 256))
	{
		func_362(iParam1, iParam2, uParam3, 0);
	}
	if (func_118(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_60(&(iParam1->f_6));
			func_361(iParam1, 2);
		}
		iParam1->f_2++;
		func_120(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_60(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_361(iParam1, 9);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_361(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_363(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
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
				func_270(iParam1, 8);
			}
			if (!func_234(*iParam1, 1))
			{
				sVar1 = func_365(uParam0->f_136, -1);
				if (!is_string_null_or_empty(sVar1))
				{
					func_235(*iParam1, sVar1, 0);
				}
			}
			if (func_118(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_366(*iParam1))
			{
				task_dismount_animal(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (is_ped_in_any_vehicle(*iParam1, true))
			{
				task_leave_any_vehicle(*iParam1, 0, 0);
			}
			func_361(iParam1, 1);
			break;
		case 1:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if (func_367(&(iParam1->f_6)) < 5f && ((func_368(*iParam1, 501393341) || func_368(*iParam1, -828834893)) || func_368(*iParam1, 451360105)))
			{
				return;
			}
			func_60(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_361(iParam1, 3);
				set_blocking_of_non_temporary_events(*iParam1, false);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_361(iParam1, 9);
				return;
			}
			if (!func_118(iParam1, 64))
			{
				_0x62fdad5e01d2dd47(*iParam1, Global_36, 3, 0);
				clear_ped_tasks(*iParam1, 1, 0);
				open_sequence_task(&iVar0);
				if (func_369(iParam1) && (func_370(*iParam1, Global_35, 1) > 9f || _0xcb690f680a3ea971(*iParam1, 4)))
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
			func_371(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[0]))
			{
				if (func_118(iParam1, 32))
				{
					func_372(&(uParam0->f_35), iParam1->f_20[0], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_94(*iParam1, Global_35, iParam1->f_20[0], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_94(*iParam1, Global_35, func_373(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_361(iParam1, 3);
			}
			else
			{
				func_361(iParam1, 2);
			}
			break;
		case 3:
			if ((is_any_speech_playing(*iParam1) || !func_374(0, 1, *iParam1, 1)) || func_375(iParam1->f_20[0]))
			{
				return;
			}
			if (func_342(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_367(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_270(iParam1, 2);
					func_361(iParam1, 9);
					return;
				}
			}
			func_361(iParam1, 5);
			break;
		case 4:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_374(0, 1, *iParam1, 1)) || func_375(iParam1->f_20[0]))
			{
				return;
			}
			if (func_342(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_367(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_270(iParam1, 2);
					func_361(iParam1, 9);
					return;
				}
			}
			func_361(iParam1, 5);
			break;
		case 5:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_374(0, 1, *iParam1, 1)) || func_375(iParam1->f_20[0]))
			{
				return;
			}
			if (func_342(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_367(&(iParam1->f_6)) < 10f)
				{
					func_361(iParam1, 3);
					return;
				}
				else
				{
					func_270(iParam1, 2);
					func_361(iParam1, 9);
					return;
				}
			}
			func_60(&(iParam1->f_6));
			func_361(iParam1, 7);
			break;
		case 2:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_374(0, 1, *iParam1, 1)) || func_375(iParam1->f_20[0]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_367(&(iParam1->f_6)) < 25f) && func_368(*iParam1, 242628503)) && func_370(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_361(iParam1, 9);
				return;
			}
			if (!func_118(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						clear_ped_tasks(*iParam1, 1, 0);
						if (!func_118(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
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
						if (func_118(iParam1, 16))
						{
							clear_ped_tasks(*iParam1, 1, 0);
							if (!func_118(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
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
									if (!func_118(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
									{
										task_confront(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						clear_ped_tasks(*iParam1, 1, 0);
						if (func_118(iParam1, 16))
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
			func_60(&(iParam1->f_6));
			func_371(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[1]))
			{
				if (func_118(iParam1, 32))
				{
					func_372(&(uParam0->f_35), iParam1->f_20[1], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_94(*iParam1, Global_35, iParam1->f_20[1], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_94(*iParam1, Global_35, func_373(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_361(iParam1, 6);
					break;
				default:
					func_361(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_374(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_118(iParam1, 4) && func_368(*iParam1, -1942934348)) && func_367(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_367(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_60(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_361(iParam1, 9);
				return;
			}
			func_361(iParam1, 7);
			break;
		case 7:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_374(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_118(iParam1, 4) && func_368(*iParam1, -1942934348)) && func_367(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && does_entity_exist(func_376(Global_35)))
			{
				func_270(iParam1, 2);
			}
			func_60(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_361(iParam1, 9);
				return;
			}
			if (!func_118(iParam1, 64))
			{
				clear_ped_tasks(*iParam1, 1, 0);
			}
			func_361(iParam1, 8);
			break;
		case 8:
			if (func_147(iParam1->f_5))
			{
				if (!func_239(iParam1->f_5, 0))
				{
					func_364(iParam1->f_5);
				}
			}
			if (func_378(&(iParam1->f_6), func_377(iParam1)))
			{
				stop_ped_speaking(*iParam1, false);
				if (!func_118(iParam1, 64) && !func_118(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_59(iParam1->f_5, 1);
					}
					else
					{
						set_ped_as_no_longer_needed(iParam1);
					}
				}
				func_361(iParam1, 9);
			}
			break;
		case 9:
			func_271(iParam1, iParam2, uParam3);
			func_82(iParam1, uParam0, 0);
			break;
	}
}

void func_120(int iParam0, int iParam1)
{
	func_230(&(iParam0->f_17), iParam1);
}

int func_121()
{
	func_379();
	func_380();
	if (func_22(&Local_3653, 32))
	{
		return 0;
	}
	if (!func_111(16777216))
	{
		if (func_381(0) && func_382(0))
		{
			func_112(0, 1, 1);
			func_106(16777216);
		}
	}
	iVar0 = func_52(Local_3653.f_138);
	if (!is_entity_dead(iVar0))
	{
		func_57(&Local_4444, iVar0, "EA_Rcamp_Foreman", 0);
		Local_2509.f_33 = { Local_4444 };
		Local_3653.f_35 = { Local_4444 };
		func_383(&iVar0);
		func_384(&iVar0);
		set_ped_reset_flag(iVar0, 49, true);
	}
	func_385(&iVar0);
	func_386(&iVar0);
	func_387();
	if (!func_43(128))
	{
		func_388(1);
		func_47(128);
	}
	if (!func_25(8))
	{
		switch (iLocal_14)
		{
			case 1:
				func_389(&iVar0);
				break;
			case 2:
				func_390(&iVar0);
				break;
		}
	}
	if (!func_25(4))
	{
		func_391();
		return 0;
	}
	if (func_25(8))
	{
		if (!func_25(2))
		{
			return func_392(&iVar0);
		}
		else
		{
			return func_393(&iVar0);
		}
	}
	switch (iLocal_14)
	{
		case 1:
			if (!func_25(2))
			{
				return func_394(&iVar0);
			}
			else
			{
				return func_393(&iVar0);
			}
			break;
		case 2:
			if (!func_25(2))
			{
				return func_395(&iVar0);
			}
			else
			{
				return func_393(&iVar0);
			}
			break;
		case 3:
			if (!func_25(2))
			{
				return func_396(&iVar0);
			}
			else
			{
				return func_393(&iVar0);
			}
			break;
	}
	return 0;
}

bool func_122()
{
	if (func_22(&Local_3653, 1024))
	{
		return true;
	}
	if (bVar4547)
	{
		return true;
	}
	if (func_25(2048))
	{
		return false;
	}
	if (iVar4436 == 1)
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
	if (func_397(bVar4547))
	{
		return true;
	}
	return false;
}

bool func_123(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_124(int iParam0)
{
	if (!func_123(iParam0))
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

bool func_125(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_126(int iParam0, int iParam1)
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

void func_127(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_128(int iParam0, bool bParam1, bool bParam2)
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
		if (func_398())
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
		iVar0 = func_399(&(Global_1898164->f_1[0]));
		if (func_400(iVar0) && func_401((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_89(&(Global_1898164->f_1[0])))
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

bool func_129()
{
	return func_402(64);
}

bool func_130(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_403(iVar0) || func_404(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_131()
{
	return Global_1310750->f_16077 != 0;
}

int func_132()
{
	return Global_1310750->f_16071;
}

void func_133(int iParam0)
{
	iLocal_16 = (iLocal_16 - (iLocal_16 && iParam0));
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_135(int iParam0)
{
	if (!func_134(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_136(int iParam0, int iParam1)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_405(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_406("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_407(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_408(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_409(iVar1);
				return true;
			}
			iVar3++;
		}
		func_409(iVar1);
	}
	return false;
}

int func_137(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_134(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_405(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_410(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_411(bParam2), iParam0, 0);
	return iVar2;
}

void func_138(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_123(iParam0))
	{
		return;
	}
	func_412(iParam0, Global_40.f_9096[iParam0]->f_10, iParam1, iParam2, uParam3, uParam4);
}

bool func_139(int iParam0)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0]->f_3 > Global_40.f_9096[iParam0]->f_10;
}

int func_140(int iParam0)
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

int func_141(int iParam0)
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

int func_142(int iParam0)
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

int func_143(int iParam0)
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

bool func_144()
{
	if (func_11(2, 262144))
	{
		return true;
	}
	if (func_4(2, 128) && !func_12(-1580473214, 1, 0))
	{
		return true;
	}
	return false;
}

void func_145(int iParam0)
{
	iLocal_15 = (iLocal_15 || iParam0);
}

void func_146(int iParam0)
{
	iLocal_15 = (iLocal_15 - (iLocal_15 && iParam0));
}

bool func_147(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_148()
{
	if (iLocal_14 != 1)
	{
		return true;
	}
	if (func_25(8))
	{
		return true;
	}
	if (func_43(65536))
	{
		return true;
	}
	return false;
}

char* func_149(bool bParam0)
{
	switch (iLocal_14)
	{
		case 1:
			if (func_25(8))
			{
				if (func_22(&Local_3653, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage1_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage1";
				}
			}
			else if (bParam0)
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage1";
			}
			else if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage1_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage1";
			}
			break;
		case 2:
			if (func_25(8) && !func_413())
			{
				if (func_22(&Local_3653, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage2_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Guard_stage2";
				}
			}
			else if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage2_Shelter";
			}
			else if (!func_25(1048576) || func_413())
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage2";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage2";
			}
			break;
		case 3:
			if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage3_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Guard_stage3";
			}
			break;
	}
	return "";
}

char* func_150()
{
	switch (iLocal_14)
	{
		case 1:
			return "EventAreas/CentralUnion/RCAMP_Foreman_stage1";
		case 2:
			return "EventAreas/CentralUnion/RCAMP_Foreman_stage2";
		case 3:
			return "EventAreas/CentralUnion/RCAMP_Foreman_stage3";
	}
	return "";
}

char* func_151(bool bParam0)
{
	switch (iLocal_14)
	{
		case 1:
			if (func_25(8))
			{
				if (func_22(&Local_3653, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1";
				}
			}
			else if (bParam0)
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllWork";
			}
			else if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllWork";
			}
			break;
		case 2:
			if (func_25(8) && !func_413())
			{
				if (func_22(&Local_3653, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2";
				}
			}
			else if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
			}
			else if (!func_25(1048576) || func_413())
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_AllBreak";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2";
			}
			break;
		case 3:
			if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3";
			}
			break;
	}
	return "";
}

char[] func_152()
{
	switch (iLocal_14)
	{
		case 1:
			if (func_25(8))
			{
				if (func_22(&Local_3653, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllBreak";
				}
			}
			else if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage1_AllBreak";
			}
			break;
		case 2:
			if (func_25(8) && !func_413())
			{
				if (func_22(&Local_3653, 256))
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
				}
				else
				{
					return "EventAreas/CentralUnion/RCAMP_Worker_stage2_AllBreak";
				}
			}
			else if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage2_AllBreak";
			}
			break;
		case 3:
			if (func_22(&Local_3653, 256))
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3_Shelter";
			}
			else
			{
				return "EventAreas/CentralUnion/RCAMP_Worker_stage3_AllBreak";
			}
			break;
	}
	return "";
}

void func_153(int iParam0, char* sParam1)
{
	if (!func_147(iParam0))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (!func_221(iVar0))
	{
		return;
	}
	if (!are_strings_equal(_0xceb40b678e403759(iVar0), sParam1))
	{
		_0x187d65f3aec5d679(iVar0, sParam1);
	}
}

int func_154(int iParam0)
{
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 835;
				case 1:
					return 838;
				case 2:
					return 842;
				case 3:
					return 846;
				case 4:
					return 850;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 835;
				case 1:
					return 838;
				case 2:
					return 842;
				case 3:
					return 846;
				case 4:
					return 850;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 835;
				case 1:
					return 838;
				case 2:
					return 841;
				case 3:
					return 844;
				case 4:
					return 847;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_155(int iParam0)
{
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 837;
				case 1:
					return 841;
				case 2:
					return 845;
				case 3:
					return 849;
				case 4:
					return 853;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 837;
				case 1:
					return 841;
				case 2:
					return 845;
				case 3:
					return 849;
				case 4:
					return 853;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 837;
				case 1:
					return 840;
				case 2:
					return 843;
				case 3:
					return 846;
				case 4:
					return 849;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return true;
	}
	if (decor_exist_on(iParam0, "bOnBreak") && decor_get_bool(iParam0, "bOnBreak"))
	{
		return true;
	}
	return false;
}

void func_157(int iParam0, int iParam1)
{
	if (!func_414(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_158(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_230(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_159(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_160(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_161(int iParam0, int iParam1, bool bParam2)
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

bool func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

int func_163(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_221(func_220(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_167(iParam0));
	return 1;
}

int func_164(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_414(iParam0))
	{
		return 1;
	}
	if (func_125(iParam0, 16))
	{
		return 1;
	}
	if (func_415(iParam0) && !func_416(iParam0))
	{
	}
	if (func_162(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_147(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_147(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_415(iParam0) || func_416(iParam0)) || func_417(&Global_1897950))
			{
				func_222(&Global_1897950, 0);
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

void func_165(int iParam0)
{
	if (!func_147(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	func_418(iParam0);
	_0x7b204f88f6c3d287(iVar0);
	_0xfc77c5b44d5ff7c0(iVar0);
}

void func_166(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_147(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

int func_167(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_168(int iParam0)
{
	return iParam0 != 0;
}

bool func_169(int iParam0)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	return _is_position_inside_imap_streaming_extents(iParam0, Global_36);
}

void func_170(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_171(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_172(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_173(int iParam0)
{
	if (!func_419(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
			return 1332.55f, -1298.679f, 75.35602f;
			return 1209.053f, -193.1814f, 101.9785f;
			return 2644.188f, -1292.507f, 51.2496f;
			return 2657.466f, -1180.96f, 53.2785f;
			return 2819.495f, -1331.29f, 45.514f;
			return 2721.24f, -1231.66f, 49.37f;
			return 2859.51f, -1202.16f, 48.59f;
			return 2825.607f, -1318.207f, 45.7557f;
			return 2718f, -1287f, 49.6f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2748.811f, -1398.277f, 45.18309f;
			return 2747.824f, -1396.384f, 45.18309f;
			return 2555.09f, -1166.97f, 52.68f;
			return 2842.45f, -1227.66f, 46.66f;
			return 2817.64f, -1325.011f, 47.00512f;
			return 2836.992f, -1305.805f, 45.6964f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return 2683.84f, -1399.642f, 45.37881f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1790f, -388.27f, 159.33f;
			return -1818.99f, -370.94f, 162.3f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -1773.314f, -393.9122f, 155.5647f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -306.3f, 815.08f, 117.98f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -287.9538f, 804.0544f, 118.3859f;
			return -324f, 803.72f, 116.88f;
			return -281.82f, 778.97f, 118.5f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -178.0316f, 628.0621f, 113.0896f;
			return -175.0377f, 631.7999f, 113.0896f;
			return -272.7182f, 785.6115f, 117.4202f;
			return -325.532f, 773.6285f, 117.5038f;
			return 3025.786f, 562.7253f, 43.7167f;
			return 2986.224f, 569.9468f, 43.62284f;
			return 2986.94f, 574.9f, 43.64f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.83f, 399.7599f, 94.38248f;
			return -1299.891f, 401.3615f, 94.38248f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5487.197f, -2939.038f, -1.3872f;
			return -5507.993f, -2964.844f, -1.6215f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3687.3f, -2623.39f, -14.44f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return 0f, 0f, 0f;
		}

Vector3 func_174(int iParam0)
{
	if (!func_419(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_175(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_176(int iParam0, int iParam1)
{
	return func_359(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

void func_177(int iParam0)
{
	if (func_147(Global_1914319->f_3[iParam0]->f_21) && func_420(Global_1914319->f_3[iParam0]->f_21))
	{
		func_240(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_421(Global_1914319->f_3[iParam0]->f_10, 0);
	func_188(iParam0, 536870912);
	iVar1 = func_422(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_423(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_424(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_425(iParam0, 0);
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_180(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_426())
	{
		iVar2 = func_426();
	}
	iVar5 = func_427(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_428(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_428(iVar6) == 0)
			{
				return func_429(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_428(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_428(iVar6) == 0)
			{
				return func_429(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_429(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_181(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

bool func_182(int iParam0, int iParam1)
{
	if (func_176(iParam0, 16384) && !func_430(iParam0, 1))
	{
		return true;
	}
	if (!func_147(iParam1))
	{
		return false;
	}
	iVar0 = func_227(iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		iVar1 = _0x7fd78dfd0c5d7b9b(Global_1914319->f_3[iParam0]->f_25);
		if (does_entity_exist(iVar1))
		{
			if (iVar1 != iVar0)
			{
				_0x6d5f9e69ba1be783(Global_1914319->f_3[iParam0]->f_25);
			}
		}
		func_431(iParam1, Global_1914319->f_3[iParam0]->f_25, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_25, 1, 1);
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		iVar2 = _0x7fd78dfd0c5d7b9b(Global_1914319->f_3[iParam0]->f_28);
		if (does_entity_exist(iVar2))
		{
			if (iVar2 != iVar0)
			{
				_0x6d5f9e69ba1be783(Global_1914319->f_3[iParam0]->f_28);
			}
		}
		func_431(iParam1, Global_1914319->f_3[iParam0]->f_28, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_28, 0, 1);
	}
	Global_1914319->f_3[iParam0]->f_21 = iParam1;
	Global_1914319->f_3[iParam0]->f_23 = iVar0;
	return true;
}

void func_183(int iParam0)
{
	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(Global_1393529->f_288[2], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1393529->f_288[2], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(Global_1393529->f_288[2], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_432(29))
			{
				if (func_433(29) && func_306() <= func_434(29))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_432(3))
			{
				if (func_433(3) && func_306() <= func_434(3))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_432(25))
			{
				if (func_433(25) && func_306() <= func_434(25))
				{
					StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_184(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (get_random_int_in_range(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_185()
{
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_186()
{
	switch (get_random_int_in_range(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

void func_187(int iParam0)
{
	if (!func_419(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_435(iParam0, 2))
			{
				func_436(iParam0, 2);
			}
			break;
	}
}

void func_188(int iParam0, int iParam1)
{
	if (!func_437(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_189(int iParam0, int iParam1)
{
	if (!func_437(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_190(int iParam0)
{
	Global_40.f_9096[iParam0]->f_9 = -1;
	Global_40.f_9096[iParam0]->f_10 = -1;
	func_9(iParam0, 32768);
}

void func_191()
{
	_0x531a78d6bf27014b("Central_Union_Railroad_Camp_Sounds");
}

void func_192(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		iVar0 = _0x0139637a3bff8b6d(*iParam0, &iVar1);
		_0x946d46cd6dfb9742(get_player_index(), iVar1, iVar0);
	}
}

void func_193(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_194(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_195()
{
	if (_does_scenario_point_exist(iVar2466))
	{
		_delete_scenario_point(iVar2466);
	}
}

void func_196(bool bParam0)
{
	if (func_25(8388608) || bParam0)
	{
		if (func_335(iVar4040, 0, 1))
		{
			set_ped_config_flag(iVar4040, 136, false);
			func_438(iVar4040, 0);
		}
		func_133(8388608);
	}
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	func_15(iParam2, 128);
	func_53(iParam0, 0);
	func_157(iParam2->f_137, 0);
	func_439(iParam2);
	func_247(iParam0, 2048);
	func_66(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_161(&iVar0, &iVar1, func_4(1, 1048576));
	}
	else
	{
		func_162(iParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		set_ped_keep_task(func_52(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = iVar0;
	Global_1898092->f_26.f_8 = iParam2->f_29;
	Global_1898092->f_26.f_2 = iParam2->f_136;
	Global_1898092->f_26.f_1 = iParam2->f_137;
	func_440(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (does_entity_exist(iParam1->f_690[iVar3]->f_8))
		{
			delete_object(&(iParam1->f_690[iVar3]->f_8));
		}
		iVar3++;
	}
	if (func_292(iParam2->f_32))
	{
		func_84(&(iParam2->f_32), 1, 1);
	}
	if (func_292(iParam2->f_33))
	{
		func_84(&(iParam2->f_33), 1, 1);
	}
	if (func_292(iParam2->f_34))
	{
		func_84(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		_0x7d4e70a67a651c71((*iParam1 + iParam1->f_1));
	}
	if (func_441(get_cause_of_most_recent_force_cleanup(), 1))
	{
		func_247(iParam2->f_136, 4194304);
	}
	func_442();
	if (func_22(iParam2, 65536))
	{
		set_player_control(get_player_index(), true, 0, false);
		display_radar(true);
		display_hud(true);
	}
}

void func_198(int iParam0)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0->f_3);
	iParam0->f_3 = 0;
}

char* func_199()
{
	return "TRACKS";
}

char* func_200()
{
	return "RCMPAUD";
}

bool func_201(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_443(iVar0))
	{
		return false;
	}
	if (func_444(iVar0, 1) || func_444(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_202()
{
	func_63();
	func_64();
	if (func_22(&Local_3653, 32))
	{
		Local_2650 = 0;
		Local_2650.f_1 = 0;
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			Local_2650 = 3;
			if (func_4(Local_3653.f_136, 16) && !func_4(Local_3653.f_136, 32))
			{
				func_263(524288);
			}
			if ((!func_11(Local_3653.f_136, 128) && !func_4(Local_3653.f_136, 8)) && !func_4(Local_3653.f_136, 16))
			{
				if (!func_4(Local_3653.f_136, 32))
				{
					Local_2650.f_15[0]->f_6 = { 2215.099f, 694.2832f, 97.988f };
					Local_2650.f_15[0]->f_9 = -155.9f;
					Local_2650.f_15[0]->f_1 = -648879076;
					Local_2650.f_15[0]->f_3 = -1919484294;
					StringCopy(&(Local_2650.f_15[0]->f_23), "0931_A_M_M_Civ_White_AVOID_01", 64);
				}
				if (!func_4(Local_3653.f_136, 256))
				{
					Local_2650.f_15[1]->f_6 = { 2196.471f, 651.7592f, 95.78493f };
					Local_2650.f_15[1]->f_9 = -47.65f;
					Local_2650.f_15[1]->f_20 = -1;
					Local_2650.f_15[1]->f_1 = -2064282163;
					Local_2650.f_15[2]->f_6 = { 2198.87f, 652.9921f, 95.78352f };
					Local_2650.f_15[2]->f_9 = 43.7f;
					Local_2650.f_15[2]->f_20 = -1;
					Local_2650.f_15[2]->f_1 = -2064282163;
				}
			}
			break;
		case 2:
			Local_2650 = 0;
			if ((func_12(-1580473214, 1, 0) || func_144()) || func_4(Local_3653.f_136, 128))
			{
				func_263(1048576);
			}
			else
			{
				Local_2650 = iVar2648 + 3;
				Local_2650.f_15[0]->f_6 = { 2178.166f, 880.4974f, 113.1879f };
				Local_2650.f_15[0]->f_9 = 169.05f;
				Local_2650.f_15[0]->f_20 = -1;
				Local_2650.f_15[0]->f_1 = -1818007055;
				Local_2650.f_15[0]->f_3 = -1063184219;
				Local_2650.f_15[1]->f_6 = { 2175.762f, 878.707f, 113.1591f };
				Local_2650.f_15[1]->f_9 = -110.33f;
				Local_2650.f_15[1]->f_20 = -1;
				Local_2650.f_15[1]->f_1 = -1818007055;
				Local_2650.f_15[1]->f_3 = -766329848;
				Local_2650.f_15[2]->f_6 = { 2176.169f, 880.1107f, 113.1453f };
				Local_2650.f_15[2]->f_9 = -110.33f;
				Local_2650.f_15[2]->f_20 = -1;
				Local_2650.f_15[2]->f_1 = -1818007055;
				Local_2650.f_15[2]->f_3 = -472883453;
			}
			break;
		case 3:
			Local_2650 = 0;
			break;
		case 4:
			Local_2650 = 0;
			Local_2650.f_1 = 0;
			break;
	}
}

void func_203(int iParam0)
{
	func_445(iParam0);
	func_446(iParam0, 10f, 1);
	func_447(iParam0, 1);
	func_448(iParam0, 1);
	func_449(iParam0, 1);
	func_450(iParam0, 1);
	func_451(iParam0, 0);
	func_452(iParam0, 0);
	func_453(iParam0, 1);
	func_331(iParam0, 1);
	func_454(iParam0, 1);
	func_455(iParam0, 1);
	func_456(iParam0, 1);
	func_457(iParam0, 1);
	func_204(iParam0, 1.25f);
	func_458(iParam0, 1);
	func_459(iParam0, 1);
	func_460(iParam0, 1);
	func_461(iParam0, 1);
}

void func_204(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_205(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_462(&((*uParam0)[iVar0]->f_1));
		func_462(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_206()
{
	if (iLocal_14 != 2 || func_25(8))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_464(Local_2370[func_322(iVar0)], "scenario@proc@unionrailroad@work_hammer@main", func_463(5), 0);
			iVar0++;
		}
	}
	if (func_25(8))
	{
	}
	else
	{
		switch (iLocal_14)
		{
			case 1:
				if (!func_4(Local_3653.f_136, 256))
				{
					func_464(Local_2370[3], "script@proc@eventareas@unionrailroad@rcmp@leadout@int@leadout", func_463(3), 0);
					func_464(Local_2370[4], "script@proc@eventareas@unionRailroad@rcmp@leadin@int@ilo", func_463(4), 0);
				}
				func_464(Local_2370[0], "script@proc@eventareas@unionrailroad@stageonerailroad", func_463(0), 64);
				func_464(Local_2370[2], "script@proc@eventareas@unionrailroad@stageonetree", func_463(2), 0);
				break;
			case 2:
				func_464(Local_2370[2], "script@proc@eventareas@unionrailroad@stageTwoTent", func_463(2), 0);
				func_464(Local_2370[0], "script@proc@eventareas@unionrailroad@stagetwogoons", func_463(0), 0);
				break;
			case 3:
				func_464(Local_2370[0], "scenario@PROC@UNIONRAILROAD@work_line@main", func_463(0), 0);
				break;
		}
	}
}

bool func_207()
{
	return _0xd9130842d7226045("Central_Union_Railroad_Camp_Sounds", 0);
}

void func_208()
{
	if (iLocal_14 != 2 || func_25(8))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			(Local_1873[func_329(0, iVar0)])->f_7 = -968420256;
			*(Local_1873[func_329(0, iVar0)]) = { 2204.3f, 642.27f, 90.65f };
			(Local_1873[func_329(0, iVar0)])->f_3 = 120.9f;
			(Local_1873[func_329(0, iVar0)])->f_10 = 0;
			bVar1 = _is_scenario_group_enabled_hash(-1197006729);
			iVar2 = 0;
			while (iVar2 < 4)
			{
				(Local_1873[func_465(iVar2, iVar0)])->f_7 = 1125144996;
				*(Local_1873[func_465(iVar2, iVar0)]) = { func_466(iVar0, iVar2, bVar1) };
				(Local_1873[func_465(iVar2, iVar0)])->f_4 = { func_467(iVar0, iVar2, bVar1) };
				(Local_1873[func_465(iVar2, iVar0)])->f_10 = 0;
				func_468(&((Local_1873[func_465(iVar2, iVar0)])->f_11), 75);
				iVar2++;
			}
			iVar0++;
		}
	}
	if (func_469(16))
	{
		Local_2650.f_690[15]->f_7 = -993390366;
		*Local_2650.f_690[15] = { func_470() };
		Local_2650.f_690[15]->f_3 = 0f;
		Local_2650.f_690[15]->f_10 = 0;
		func_127(&(Local_2650.f_690[15]->f_11), 2);
		Local_2650.f_690[16]->f_7 = -993390366;
		*Local_2650.f_690[16] = { func_470() };
		Local_2650.f_690[16]->f_3 = 0f;
		Local_2650.f_690[16]->f_10 = 0;
		func_127(&(Local_2650.f_690[16]->f_11), 2);
		Local_2650.f_690[17]->f_7 = -993390366;
		*Local_2650.f_690[17] = { func_470() };
		Local_2650.f_690[17]->f_3 = 0f;
		Local_2650.f_690[17]->f_10 = 0;
		func_127(&(Local_2650.f_690[17]->f_11), 2);
		Local_2650.f_690[18]->f_7 = -993390366;
		*Local_2650.f_690[18] = { func_470() };
		Local_2650.f_690[18]->f_3 = 0f;
		Local_2650.f_690[18]->f_10 = 0;
		func_127(&(Local_2650.f_690[18]->f_11), 2);
		Local_2650.f_690[19]->f_7 = -700954487;
		*Local_2650.f_690[19] = { func_470() };
		Local_2650.f_690[19]->f_3 = 0f;
		Local_2650.f_690[19]->f_10 = 0;
		func_127(&(Local_2650.f_690[19]->f_11), 2);
		Local_2650.f_690[20]->f_7 = -1816893176;
		*Local_2650.f_690[20] = { func_470() };
		Local_2650.f_690[20]->f_3 = 0f;
		Local_2650.f_690[20]->f_10 = 0;
		func_127(&(Local_2650.f_690[20]->f_11), 2);
	}
	switch (iLocal_14)
	{
		case 1:
			if (!func_25(8))
			{
				Local_2650.f_690[3]->f_7 = 1230724566;
			}
			else
			{
				Local_2650.f_690[3]->f_7 = 0;
			}
			*Local_2650.f_690[3] = { 2204.122f, 642.5524f, 95.60305f };
			Local_2650.f_690[3]->f_3 = 120.9f;
			Local_2650.f_690[3]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[4]->f_7 = -967333571;
			}
			else
			{
				Local_2650.f_690[4]->f_7 = 0;
			}
			*Local_2650.f_690[4] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[4]->f_3 = 120.9f;
			Local_2650.f_690[4]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[5]->f_7 = -967333571;
			}
			else
			{
				Local_2650.f_690[5]->f_7 = 0;
			}
			*Local_2650.f_690[5] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[5]->f_3 = 120.9f;
			Local_2650.f_690[5]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[6]->f_7 = -967333571;
			}
			else
			{
				Local_2650.f_690[6]->f_7 = 0;
			}
			*Local_2650.f_690[6] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[6]->f_3 = 120.9f;
			Local_2650.f_690[6]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[12]->f_7 = -967333571;
			}
			else
			{
				Local_2650.f_690[12]->f_7 = 0;
			}
			*Local_2650.f_690[12] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[12]->f_3 = 120.9f;
			Local_2650.f_690[12]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[7]->f_7 = -1413776846;
			}
			else
			{
				Local_2650.f_690[7]->f_7 = 0;
			}
			*Local_2650.f_690[7] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[7]->f_3 = 120.9f;
			Local_2650.f_690[7]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[8]->f_7 = 617552302;
			}
			else
			{
				Local_2650.f_690[8]->f_7 = 0;
			}
			*Local_2650.f_690[8] = { 2204.3f, 642.2f, 95.65f };
			Local_2650.f_690[8]->f_3 = 120.9f;
			Local_2650.f_690[8]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[9]->f_7 = -823699805;
			}
			else
			{
				Local_2650.f_690[9]->f_7 = 0;
			}
			*Local_2650.f_690[9] = { 2259.46f, 785.18f, 97.18f };
			Local_2650.f_690[9]->f_4 = { -7.6f, -3.1f, -98.89f };
			Local_2650.f_690[9]->f_10 = 0;
			func_468(&(Local_2650.f_690[9]->f_11), 1);
			func_468(&(Local_2650.f_690[9]->f_11), 2);
			func_468(&(Local_2650.f_690[9]->f_11), 32);
			if (!func_25(8))
			{
				Local_2650.f_690[10]->f_7 = -823699805;
			}
			else
			{
				Local_2650.f_690[10]->f_7 = 0;
			}
			*Local_2650.f_690[10] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[10]->f_3 = 120.9f;
			Local_2650.f_690[10]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[11]->f_7 = -1473388640;
			}
			else
			{
				Local_2650.f_690[11]->f_7 = 0;
			}
			*Local_2650.f_690[11] = { 2204.3f, 642.27f, 90.65f };
			Local_2650.f_690[11]->f_3 = 120.9f;
			Local_2650.f_690[11]->f_10 = 0;
			Local_2650.f_690[0]->f_7 = func_471();
			*Local_2650.f_690[0] = { 2205.05f, 641.5634f, 95.5918f };
			Local_2650.f_690[0]->f_3 = 164.33f;
			Local_2650.f_690[0]->f_10 = 1;
			func_127(&(Local_2650.f_690[0]->f_11), 2);
			Local_2650.f_690[1]->f_7 = func_471();
			*Local_2650.f_690[1] = { 2204.482f, 643.2203f, 95.5754f };
			Local_2650.f_690[1]->f_3 = 56.04f;
			Local_2650.f_690[1]->f_10 = 0;
			func_127(&(Local_2650.f_690[0]->f_11), 2);
			Local_2650.f_690[2]->f_7 = func_472();
			*Local_2650.f_690[2] = { func_473() };
			Local_2650.f_690[2]->f_3 = func_474();
			Local_2650.f_690[2]->f_10 = 0;
			func_127(&(Local_2650.f_690[0]->f_11), 2);
			break;
		case 2:
			Local_2650.f_690[14]->f_7 = 137096978;
			*Local_2650.f_690[14] = { 2182.38f, 775.87f, 106.18f };
			Local_2650.f_690[14]->f_3 = 26f;
			Local_2650.f_690[14]->f_10 = 0;
			func_468(&(Local_2650.f_690[14]->f_11), 67);
			if (!func_25(1048576))
			{
				Local_2650.f_690[3]->f_7 = -1179266405;
			}
			else
			{
				Local_2650.f_690[3]->f_7 = 0;
			}
			*Local_2650.f_690[3] = { func_475() };
			Local_2650.f_690[3]->f_3 = 0f;
			Local_2650.f_690[3]->f_10 = 0;
			func_468(&(Local_2650.f_690[3]->f_11), 1);
			func_468(&(Local_2650.f_690[3]->f_11), 2);
			if (!func_25(1048576))
			{
				Local_2650.f_690[13]->f_7 = -82199229;
			}
			else
			{
				Local_2650.f_690[13]->f_7 = 0;
			}
			*Local_2650.f_690[13] = { 2181.265f, 776.1055f, 106.9767f };
			Local_2650.f_690[13]->f_3 = 0f;
			Local_2650.f_690[13]->f_10 = 0;
			func_468(&(Local_2650.f_690[13]->f_11), 1);
			func_468(&(Local_2650.f_690[13]->f_11), 2);
			if (!func_25(8))
			{
				Local_2650.f_690[12]->f_7 = 1571825167;
			}
			else
			{
				Local_2650.f_690[12]->f_7 = 0;
			}
			*Local_2650.f_690[12] = { 2204.3f, 642.27f, 95.65f };
			Local_2650.f_690[12]->f_3 = 120.9f;
			Local_2650.f_690[12]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[4]->f_7 = -967333571;
			}
			else
			{
				Local_2650.f_690[4]->f_7 = 0;
			}
			*Local_2650.f_690[4] = { 2181.2f, 779.1f, 105.5f };
			Local_2650.f_690[4]->f_3 = 120.9f;
			Local_2650.f_690[4]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[5]->f_7 = -967333571;
			}
			else
			{
				Local_2650.f_690[5]->f_7 = 0;
			}
			*Local_2650.f_690[5] = { 2178.156f, 880.2429f, 112.6794f };
			Local_2650.f_690[5]->f_3 = 120.9f;
			Local_2650.f_690[5]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[11]->f_7 = -1473388640;
			}
			else
			{
				Local_2650.f_690[11]->f_7 = 0;
			}
			*Local_2650.f_690[11] = { 2181.2f, 779.1f, 105.5f };
			Local_2650.f_690[11]->f_3 = 120.9f;
			Local_2650.f_690[11]->f_10 = 0;
			if (!func_25(8))
			{
				Local_2650.f_690[9]->f_7 = 531516298;
			}
			else
			{
				Local_2650.f_690[9]->f_7 = 0;
			}
			*Local_2650.f_690[9] = { 2181.2f, 779.1f, 105.5f };
			Local_2650.f_690[9]->f_3 = 120.9f;
			Local_2650.f_690[9]->f_10 = 0;
			Local_2650.f_690[0]->f_7 = func_472();
			*Local_2650.f_690[0] = { func_476(0, 0) };
			Local_2650.f_690[0]->f_3 = func_477(0);
			Local_2650.f_690[0]->f_10 = 0;
			func_127(&(Local_2650.f_690[0]->f_11), 2);
			break;
		case 3:
			Local_2650.f_690[0]->f_7 = func_472();
			*Local_2650.f_690[0] = { func_238() };
			Local_2650.f_690[0]->f_3 = func_478();
			Local_2650.f_690[0]->f_10 = 0;
			func_127(&(Local_2650.f_690[0]->f_11), 2);
			break;
	}
}

void func_209(var uParam0)
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

void func_210()
{
	switch (iLocal_14)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_211(float fParam0)
{
	fParam0->f_132 = 1;
	*fParam0 = -3.5f;
	fParam0->f_12 = 20f;
	fParam0->f_13 = 10f;
	if (!func_25(2))
	{
		if (func_11(Local_3653.f_136, 128))
		{
			switch (iLocal_14)
			{
				case 1:
					fParam0->f_11 = 1;
					if (!func_11(Local_3653.f_136, 16777216))
					{
						fParam0->f_1 = "RCMP_F01AN";
						fParam0->f_135 = "RCMP_F01ANP";
						fParam0->f_5 = "RCMP_F01ANN";
					}
					else
					{
						fParam0->f_1 = "RCMP_F02AN";
						fParam0->f_135 = "RCMP_F02ANP";
						fParam0->f_5 = "RCMP_F02ANN";
					}
					break;
				case 2:
					if (func_479())
					{
						if (!func_11(Local_3653.f_136, 16777216))
						{
							fParam0->f_1 = "RCMP_F01BN";
							fParam0->f_135 = "RCMP_F01BNP";
							fParam0->f_5 = "RCMP_F01BNN";
						}
						else
						{
							fParam0->f_1 = "RCMP_F02BN";
							fParam0->f_135 = "RCMP_F02BNP";
							fParam0->f_5 = "RCMP_F02BNN";
						}
					}
					break;
			}
		}
		else
		{
			switch (iLocal_14)
			{
				case 1:
					fParam0->f_1 = "RCMP_F01A";
					break;
				case 2:
					func_480(fParam0);
					break;
				case 3:
					if (func_479())
					{
						fParam0->f_1 = "RCMP_F01DH";
						fParam0->f_3 = "RCMP_F02DH";
						fParam0->f_135 = "RCMP_F03DHP";
						fParam0->f_5 = "RCMP_F03DHN";
					}
					else
					{
						fParam0->f_1 = "RCMP_F01D";
						fParam0->f_5 = "RCMP_F01DN";
					}
					break;
				case 4:
					break;
			}
		}
	}
	else if (func_481())
	{
		fParam0->f_1 = "RCMP_LNTA";
	}
	else
	{
		fParam0->f_1 = "RCMP_LNTB";
	}
	fParam0->f_8 = 0;
}

void func_212()
{
	request_collision_at_coord(func_250());
}

bool func_213()
{
	if (!func_482(&(Local_2650.f_690)) || !func_482(&Local_1873))
	{
		return false;
	}
	return true;
}

bool func_214()
{
	if (iLocal_14 == 2 && !func_25(8))
	{
		return _0x6bfbdc46139c45ab(func_250());
	}
	return true;
}

bool func_215(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_216(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_483(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_217(float fParam0)
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

bool func_218(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_484((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_219(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_485(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_486(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, iParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_487(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_487(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_488(iVar0))
		{
			func_235(iVar0, &(uParam1->f_23), 0);
		}
		if (func_488(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_489(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_490(&(uParam1->f_22)));
			func_492(iVar0, func_491(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_493(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_494(&(uParam1->f_22)))
		{
			func_495(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_496(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_215(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_488(iVar0))
		{
			func_498(iVar0, !func_497(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_499(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_500(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_500(&(uParam1->f_22)));
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

int func_220(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_221(int iParam0)
{
	return iParam0 != 0;
}

int func_222(int iParam0, bool bParam1)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_501(iParam0, _create_persistent_character(func_220(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_167(iParam0));
				func_166(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_167(iParam0));
		}
		return 0;
	}
	if (!func_502(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_167(iParam0)))
	{
		func_166(iParam0, 128);
		return 1;
	}
	func_501(iParam0, _create_persistent_character(func_220(iParam0)));
	_0x4f81ead1de8fa19b(func_167(iParam0));
	if (func_23(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_167(iParam0));
		func_166(iParam0, 2048);
	}
	return 1;
}

bool func_223(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_147(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_227(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_167(iParam0));
}

bool func_224(int iParam0)
{
	if (!func_147(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_167(iParam0)))
	{
		_0x49a8c2cd97815215(func_167(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_167(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

int func_225(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_503(iParam0, 1))
	{
		return 0;
	}
	if (func_221(func_220(iParam0)))
	{
		iVar1 = func_167(iParam0);
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
	if ((bParam4 && !func_420(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_504(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_226(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_227(int iParam0)
{
	iVar0 = func_167(iParam0);
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

int func_228(int iParam0)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

void func_229(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_230(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_231(var uParam0)
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

bool func_232()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (_does_anim_scene_exist(&(Local_2370[iVar1])))
		{
			if (!func_505(Local_2370[iVar1]))
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

bool func_233(var uParam0, int iParam1, char* sParam2)
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

bool func_234(int iParam0, int iParam1)
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

void func_235(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_335(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

Vector3 func_236()
{
	return 2204.943f, 641.5062f, 95.6109f;
}

void func_237(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (func_266(*iParam0, 1, 1) > 230f)
	{
		func_133(67108864);
		return;
	}
	if (!func_25(67108864))
	{
		if (!bParam10 && _is_ped_using_scenario_hash(*iParam0, func_506(bParam7, bParam9)))
		{
			func_8(67108864);
		}
		else if (bParam9)
		{
			func_507(iParam0, vParam1, &uLocal_2469, iParam4, iParam5, bParam6, bParam7, bParam8, bParam9);
		}
		else
		{
			func_507(iParam0, vParam1, &uLocal_2471, iParam4, iParam5, bParam6, bParam7, bParam8, bParam9);
		}
	}
}

Vector3 func_238()
{
	return 1945.817f, 948.7132f, 115.6541f;
}

bool func_239(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_147(iParam0))
	{
		return false;
	}
	if (!func_420(iParam0) && bParam1)
	{
		return false;
	}
	return func_23(iParam0, 1);
}

void func_240(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_147(iParam0))
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
	if ((!bParam4 && !func_420(iParam0)) && func_508(iParam0))
	{
		return;
	}
	func_166(iParam0, 1);
	func_509(iParam0);
	if (func_221(func_220(iParam0)))
	{
		iVar0 = func_167(iParam0);
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
		func_166(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_510(iParam0, 0);
	}
}

void func_241(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_511() - fParam1);
	func_512(uParam0, 1);
	func_513(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_242(bool bParam0)
{
	if (bParam0)
	{
		return func_514(Global_1359489->f_4);
	}
	get_group_size(func_515(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_515(), iVar3);
		if (func_516(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_243(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_517(&uVar1, iVar0, 1);
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

void func_244(int iParam0, bool bParam1)
{
	if (bParam1 || func_11(iParam0, 8192))
	{
		if (!_uilog_is_entry_registered(3, func_518(iParam0)))
		{
			return;
		}
		_uilog_remove_entry(3, func_518(iParam0));
		func_86(iParam0, 8192);
	}
}

void func_245(int iParam0)
{
	if (!func_11(iParam0, 8192))
	{
		_uilog_add_entry_hash(3, func_518(iParam0), func_32(iParam0, func_17(iParam0)), func_519(iParam0), func_520(iParam0), 0);
		_uilog_set_entry_icon_texture(3, func_518(iParam0), func_521(iParam0), func_522());
		_uilog_set_entry_brief_texture(3, func_518(iParam0), func_523(iParam0), func_524());
		func_247(iParam0, 8192);
	}
}

void func_246(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	_uilog_add_or_update_objective(3, func_518(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_526(func_525(iParam0), sParam2, func_522(), func_521(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

void func_247(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	if (func_11(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 || iParam1);
}

bool func_248(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_249()
{
	switch (iLocal_14)
	{
		case 1:
			return 2202.957f, 639.7081f, 95.81098f;
		case 2:
			return 2182.353f, 778.0294f, 106.1807f;
		case 3:
			return 1944.878f, 948.011f, 115.262f;
		default:
			break;
	}
	return 2202.158f, 639.5539f, 96.1934f;
}

Vector3 func_250()
{
	return 2177.45f, 879.17f, 112.71f;
}

char* func_251(int iParam0, int iParam1)
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

void func_252(int iParam0, bool bParam1)
{
	if (!func_527(iParam0))
	{
		iVar0 = func_124(iParam0);
		func_5(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_528(iVar0, 0);
				break;
			case 1:
				_0xd8c7162ab2e2af45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_529(iParam0, 0);
		}
	}
}

bool func_253(var uParam0, float fParam1)
{
	if (func_378(uParam0, fParam1))
	{
		func_260(uParam0);
		return true;
	}
	return false;
}

bool func_254()
{
	if (iLocal_14 != 1)
	{
		return true;
	}
	if (func_25(8))
	{
		return true;
	}
	if (func_25(256))
	{
		return true;
	}
	if (func_43(8388608))
	{
		return true;
	}
	return false;
}

void func_255(int iParam0)
{
	iLocal_18 = (iLocal_18 - (iLocal_18 && iParam0));
}

void func_256()
{
	if (_does_volume_exist(&(iLocal_2305[12])))
	{
		if (!func_148() && (func_22(&Local_3653, 256) || !func_258(64)))
		{
			_0xb56d41a694e42e86(&(iLocal_2305[12]), 534496, 0, 0, -1, -1, 0);
		}
		else
		{
			_0x74c2b3dc0b294102(&(iLocal_2305[12]));
		}
	}
}

bool func_257(var uParam0)
{
	return func_530(*uParam0, 1);
}

bool func_258(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_532(func_531());
	if (func_359(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_359(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_359(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_359(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_359(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_359(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_359(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_359(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_359(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_359(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_359(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_359(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_359(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_359(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_359(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_359(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_359(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_259()
{
	if (func_148())
	{
		func_47(268435456);
		func_47(536870912);
	}
	func_47(1073741824);
	func_47(-2147483648);
	func_106(8);
	func_47(8388608);
}

void func_260(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_261(vector3 vParam0, int iParam3)
{
	return func_533(Global_35, vParam0, iParam3);
}

bool func_262(int iParam0)
{
	return (iLocal_19 && iParam0) != 0;
}

void func_263(int iParam0)
{
	iLocal_19 = (iLocal_19 || iParam0);
}

char* func_264(int iParam0, int iParam1)
{
	if (func_118(iParam0, 16))
	{
		iVar0 = get_random_int_in_range(0, 2);
		switch (iVar0)
		{
			case 0:
			case default:
				switch (iParam1)
				{
					case 0:
						return "RCMP_AGGRO1";
					case 1:
					default:
						break;
				}
				return "RCMP_AGGRO2";
			case 1:
				switch (iParam1)
				{
					case 0:
						return "RCMP_AGGRO3";
					case 1:
					default:
						break;
				}
				return "RCMP_AGGRO4";
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				switch (iParam1)
				{
					case 0:
						return "RCMP_ATK1";
					case 1:
					default:
						break;
				}
				return "RCMP_ATK2";
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "RCMP_AIMPED1";
					case 1:
					default:
						break;
				}
				return "RCMP_AIMPED2";
			case 1:
				switch (iParam1)
				{
					case 0:
						return "RCMP_BODY1";
					case 1:
					default:
						break;
				}
				return "RCMP_BODY2";
			case 2:
				switch (iParam1)
				{
					case 0:
						return "RCMP_WHOGTIE1";
					case 1:
					default:
						break;
				}
				return "RCMP_WHOGTIE2";
			case 3:
				switch (iParam1)
				{
					case 0:
						return "RCMP_DYNAMITE1";
					case 1:
					default:
						break;
				}
				return "RCMP_DYNAMITE2";
			case 7:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_1)
						{
							case 0:
							case 1:
								return "RCMP_STEAL1A";
							default:
								break;
						}
						return "RCMP_STEAL1B";
					case 1:
						switch (iParam0->f_1)
						{
							case 0:
							case 1:
								return "RCMP_STEAL2A";
							default:
								break;
						}
						return "RCMP_STEAL2B";
				}
				break;
		}
	}
	return "RCMP_ATK2";
}

int func_265(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_534(bParam1, bParam2, bParam3);
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

float func_266(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_337(Global_35, iParam0, bParam1, bParam2);
}

void func_267(var uParam0, int iParam1, int iParam2)
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

void func_268(var uParam0, int iParam1, int iParam2)
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

void func_269()
{
	if (iVar2179 < 3 || !func_535())
	{
		if (iVar2291 <= 1 && func_253(vLocal_2327[12], 90f))
		{
			iLocal_2181 = (iVar2179 - 1);
			func_536(0);
			if (iVar2179 > 0)
			{
				func_60(vLocal_2327[12]);
			}
		}
	}
	if (func_253(vLocal_2327[8], 30f))
	{
		iLocal_2180 = (iVar2178 - 1);
		if (iVar2178 > 0)
		{
			func_60(vLocal_2327[8]);
		}
	}
}

void func_270(int iParam0, int iParam1)
{
	func_127(&(iParam0->f_17), iParam1);
}

void func_271(int* iParam0, int* iParam1, var uParam2)
{
	func_537(iParam0, iParam1, uParam2, 1, 1);
	func_538(uParam2, 0, 1, 1, 1);
	if (decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_remove(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

void func_272(int iParam0)
{
	if (iVar3987 != -1)
	{
		iVar0 = func_52(iVar3987);
		Local_2243.f_40 = iVar0;
	}
	if (func_535())
	{
		if (iVar2290 > 1)
		{
			func_362(&Local_2145, Local_4142[3], Local_4227[3], does_entity_exist(iVar0));
		}
		if (!func_239(Local_3653.f_138, 0))
		{
			func_51(Local_3653.f_138, 1, 1);
		}
		if (!func_43(512) && does_entity_exist(Local_2243.f_40))
		{
			func_47(512);
			if (!is_entity_dead(Local_2243.f_40))
			{
				_0xaab050da48b57978(Local_2243.f_40, "Default_Angry", Global_35, -1, 4);
			}
			if (iVar2290 == 4)
			{
				Local_3653.f_28 = 65536;
				func_106(131072);
			}
		}
		if (func_257(vLocal_2327[13]))
		{
			func_260(vLocal_2327[13]);
		}
		if (func_374(-3.5f, 1, 0, 0) && !func_257(vLocal_2327[7]))
		{
			func_60(vLocal_2327[7]);
		}
		if (func_539())
		{
			fVar1 = 7.5f;
		}
		else
		{
			fVar1 = 20f;
		}
		if (func_378(vLocal_2327[7], fVar1))
		{
			switch (iVar2290)
			{
				case 0:
					if (!func_262(65536) && !func_118(&Local_2145, 16))
					{
						func_372(&(Local_3653.f_35), func_540(), *iParam0, Global_35, 0, 0, 1, 1);
						clear_ped_tasks(*iParam0, 1, 0);
						Local_2243.f_40 = *iParam0;
						Local_2243 = 0;
					}
					func_260(vLocal_2327[7]);
					break;
				case 1:
					if (!func_262(65536) && !func_118(&Local_2145, 16))
					{
						if (func_374(-3.5f, 1, 0, 0) && func_541(*iParam0, Global_35, 0, 25f, 0))
						{
							func_372(&(Local_3653.f_35), func_540(), *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							return;
						}
					}
					if (iVar3987 == -1)
					{
						if (func_542(Local_2145.f_5))
						{
							iLocal_3990 = Local_2145.f_5;
						}
						else
						{
							iLocal_3990 = func_93();
						}
					}
					if (iVar3987 != -1)
					{
						func_51(iVar3987, 1, 1);
						iVar0 = func_52(iVar3987);
					}
					if (!is_entity_dead(iVar0))
					{
						func_263(65536);
						func_270(&Local_2145, 16);
						func_87(&uLocal_4044);
						func_543(Local_4142[3], 3);
						Local_2145.f_16 = 0;
						Local_2145 = iVar0;
						clear_ped_tasks(iVar0, 1, 0);
						iVar2 = func_544(iVar0);
						if (func_408(iVar2))
						{
							set_current_ped_weapon(iVar0, iVar2, true, 0, false, false);
						}
						clear_sequence_task(&iLocal_4141);
						open_sequence_task(&iLocal_4141);
						if (func_408(iVar2))
						{
							task_swap_weapon(0, 1, 0, 0, 0);
						}
						if (func_266(iVar0, 1, 1) > 10f)
						{
							task_go_to_entity(0, Global_35, -1, 10f, 2f, 0f, 1);
						}
						task_turn_ped_to_face_entity(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
						close_sequence_task(iVar4138);
						task_perform_sequence(iVar0, iVar4138);
						clear_sequence_task(&iLocal_4141);
						_0xaab050da48b57978(iVar0, "Default_Angry", Global_35, -1, 4);
						Local_2243.f_40 = iVar0;
						Local_2243 = 0;
					}
					break;
				case 2:
					if (iVar3987 == -1)
					{
						if (func_542(Local_2145.f_5))
						{
							iLocal_3990 = Local_2145.f_5;
						}
						else
						{
							iLocal_3990 = func_93();
						}
						func_51(iVar3987, 1, 1);
						iVar0 = func_52(iVar3987);
					}
					if (func_374(-3.5f, 1, 0, 0) && func_541(iVar0, Global_35, 0, 12.5f, 0))
					{
						if (func_25(2) && func_239(Local_3653.f_138, 0))
						{
							clear_ped_tasks(*iParam0, 1, 0);
							func_59(Local_3653.f_138, 1);
						}
						clear_ped_tasks(iVar0, 1, 0);
						func_120(&Local_2145, 1);
						func_94(iVar0, Global_35, func_540(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_371(249295937, iVar0, 1);
						Local_2243.f_40 = iVar0;
						Local_2243 = 0;
						func_260(vLocal_2327[7]);
					}
					else
					{
						return;
					}
					break;
				case 3:
					if (iVar3987 == -1)
					{
						if (func_542(Local_2145.f_5))
						{
							iLocal_3990 = Local_2145.f_5;
						}
						else
						{
							iLocal_3990 = func_93();
						}
						func_51(iVar3987, 1, 1);
						iVar0 = func_52(iVar3987);
					}
					func_94(iVar0, Global_35, func_540(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_371(249295937, iVar0, 1);
					Local_2243.f_40 = iVar0;
					Local_2243 = 0;
					clear_ped_tasks(iVar0, 1, 0);
					iVar3 = func_544(iVar0);
					if (func_408(iVar3))
					{
						set_current_ped_weapon(iVar0, iVar3, true, 0, false, false);
					}
					clear_sequence_task(&iLocal_4141);
					open_sequence_task(&iLocal_4141);
					if (func_408(iVar3))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
					close_sequence_task(iVar4138);
					task_perform_sequence(iVar0, iVar4138);
					clear_sequence_task(&iLocal_4141);
					func_260(vLocal_2327[7]);
					break;
				case 4:
					func_106(131072);
					Local_3653.f_28 = 65536;
					func_260(vLocal_2327[7]);
					break;
			}
			iLocal_2293 = iVar2290 + 1;
		}
	}
	else
	{
		if (func_257(vLocal_2327[7]))
		{
			func_260(vLocal_2327[7]);
		}
		if (!is_entity_dead(iVar0) && func_368(iVar0, 242628503))
		{
			clear_ped_tasks(iVar0, 1, 0);
			task_aim_gun_at_entity(iVar0, Global_35, -1, 0, 1);
		}
		if (func_43(512))
		{
			if (!func_257(vLocal_2327[13]))
			{
				func_60(vLocal_2327[13]);
			}
			if (func_253(vLocal_2327[13], 15f))
			{
				if (func_25(2) && func_239(Local_3653.f_138, 0))
				{
					if (!is_entity_dead(*iParam0))
					{
						clear_ped_tasks(*iParam0, 1, 0);
						_0x935cf6e42baf7f4d(*iParam0);
					}
					func_59(Local_3653.f_138, 1);
				}
				if (!is_entity_dead(iVar0))
				{
					clear_ped_tasks(iVar0, 1, 0);
					_0x935cf6e42baf7f4d(iVar0);
				}
				func_59(iVar3987, 1);
				iLocal_3990 = -1;
				func_42(512);
			}
		}
		else if (iVar2290 > 1)
		{
			if (!func_257(vLocal_2327[13]))
			{
				func_60(vLocal_2327[13]);
			}
			if (func_253(vLocal_2327[13], 30f))
			{
				iLocal_2293 = (iVar2290 - 1);
				func_60(vLocal_2327[13]);
			}
		}
		else if (func_257(vLocal_2327[13]))
		{
			func_260(vLocal_2327[13]);
		}
	}
	if (func_43(512))
	{
		if (!func_368(Local_2243.f_40, 242628503))
		{
			func_545(&Local_2243, 0);
		}
	}
}

void func_273()
{
	if (func_118(&Local_2145, 16))
	{
		Local_2145.f_1 = Local_2145.f_3;
	}
}

void func_274()
{
	iLocal_2181 = iVar2179 + 1;
	func_60(vLocal_2327[12]);
}

int func_275(var uParam0)
{
	iVar1 = func_52(Local_3653.f_138);
	if (!is_entity_dead(iVar1))
	{
		(*uParam0)[iVar0] = iVar1;
		iVar0++;
	}
	return iVar0;
}

void func_276(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_270(iParam0, 1);
	iVar0 = _get_lassoed_entity(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			func_270(iParam0, 16);
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
						func_270(iParam0, 2);
						return;
					}
					if (func_546(iParam0, &(uParam1->f_10)))
					{
						func_270(iParam0, 2);
					}
					else
					{
						func_120(iParam0, 1);
					}
					return;
				case 64:
					if (func_546(iParam0, &(uParam1->f_10)))
					{
						func_270(iParam0, 2);
					}
					else
					{
						func_120(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (does_entity_exist(func_376(Global_35)))
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
		else if (!func_549(iParam0, iParam3, Global_36, 50f, func_547(iParam0), func_548(iParam0)))
		{
		}
		if (!does_entity_exist(*iParam0) || !is_ped_human(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = func_531();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		func_270(iParam0, 2);
	}
}

void func_277()
{
	if (iVar2143 == &iLocal_3981[0])
	{
		return;
	}
	iVar0 = func_363(iVar2143, 0);
	switch (iVar0)
	{
		case 834:
		case 835:
		case 836:
		case 837:
			return;
	}
	iVar0 = func_93();
	Local_2145 = func_52(iVar0);
	switch (Local_2145.f_16)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
			break;
		case 5:
			Local_2145.f_16 = 6;
			break;
		default:
			Local_2145.f_16 = 8;
			break;
	}
	func_270(&Local_2145, 256);
}

bool func_278(int iParam0, var uParam1)
{
	if (func_25(1073741824))
	{
		if ((((func_336(func_52(Local_3653.f_138), iParam0, uParam1, 0) || ((iVar2173 % 3) == 1 && func_550(&uLocal_4048, iParam0, uParam1, 0, (iVar2643 / 3)))) || ((iVar2173 % 3) == 2 && func_550(&uLocal_4048, iParam0, uParam1, (iVar2643 / 3) + 1, (iVar2643 * 2 / 3)))) || ((iVar2173 % 3) == 0 && func_550(&uLocal_4048, iParam0, uParam1, (iVar2643 * 2 / 3) + 1, iVar2643))) || func_550(&iLocal_3981, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_279(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_551(iParam2, 1, iVar0);
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
			if (func_552(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_553(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_554(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_555(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_556(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_265(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_553(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_557(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_558(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_553(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_559(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_553(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_560(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_560(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_553(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_561(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_562(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_563(iParam2, 4000))
				{
					if ((func_564(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_565(iParam2, iParam0)) && func_566(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_553(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_564(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_565(iParam2, iParam0)) && func_566(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_567(iParam0, Global_1935630->f_41))
							{
								func_568();
								*uParam3 = 2;
								func_553(iParam0, iParam2, *uParam3);
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
						if (func_567(iParam0, Global_1935630->f_41))
						{
							func_568();
							*uParam3 = 2;
							func_553(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_569(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_346() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_568();
						*uParam3 = 2;
						func_553(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_570())
					{
						if (func_567(iParam0, Global_1935630->f_42))
						{
							func_568();
							*uParam3 = 2;
							func_553(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_571(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_553(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_572(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_573(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_553(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_574(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_575(iParam2, 4000))
				{
					if (func_576(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_553(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_577(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_553(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_339(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_553(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_280(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

int func_281()
{
	if (!func_578())
	{
		func_107(&Local_3653, &(Local_3653.f_28));
		func_280(&Local_3653, &(Local_3653.f_28));
		return 0;
	}
	if (!func_579(&Local_3653))
	{
		if (!func_580(Global_1935630->f_34[0]))
		{
			return 0;
		}
		func_15(&Local_3653, 4096);
	}
	return 1;
}

bool func_282()
{
	if (iLocal_14 != 1)
	{
		return false;
	}
	if (func_25(8))
	{
		return false;
	}
	if (!func_25(256))
	{
		return false;
	}
	if (func_194(&(iLocal_3981[0]), (*Global_1392194)[Local_3653.f_136]->f_6, 1, 0))
	{
		return false;
	}
	if (is_entity_dead(&(iLocal_3981[0])))
	{
		return false;
	}
	if (_0x336b3d200ab007cb(Global_35, get_entity_coords(&(iLocal_3981[0]), true, false), 20f, 512) >= 1)
	{
		return true;
	}
	return false;
}

bool func_283()
{
	if (Local_3653.f_28 == 8192 && func_581())
	{
		return true;
	}
	return false;
}

bool func_284(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_290(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_279(iParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_285()
{
	if (iLocal_14 == 2)
	{
		return false;
	}
	return true;
}

bool func_286()
{
	iVar0 = func_582();
	if (!does_entity_exist(iVar0))
	{
		func_255(32);
		return false;
	}
	if (!func_194(iVar0, (*Global_1392194)[Local_3653.f_136]->f_6, 0, 0))
	{
		func_255(32);
		return false;
	}
	set_ped_config_flag(&(iLocal_3981[0]), 4, false);
	set_ped_config_flag(&(iLocal_3981[0]), 6, false);
	if (iLocal_14 == 2 && func_583(iVar0, &iLocal_3981))
	{
		return false;
	}
	if (iLocal_14 != 1)
	{
		func_255(32);
		return true;
	}
	if (func_108(&iVar0))
	{
		func_255(32);
		return true;
	}
	if (iVar0 != &iLocal_3981[0])
	{
		func_255(32);
		return true;
	}
	if (func_584())
	{
		set_ped_config_flag(&(iLocal_3981[0]), 4, true);
		set_ped_config_flag(&(iLocal_3981[0]), 6, true);
		func_106(32);
		return false;
	}
	func_255(32);
	return true;
}

bool func_287(var uParam0)
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

bool func_288(var uParam0, int iParam1, int iParam2)
{
	if (func_118(iParam1, 1))
	{
		return false;
	}
	if (!func_194(Global_35, (*Global_1392194)[uParam0->f_136]->f_6, 1, 0))
	{
		return false;
	}
	if ((func_585(Global_35, &iVar0, 4) && !is_model_a_ped(iVar0)) || _0xd04241bbf6d03a5e(Global_35) != 0)
	{
		if (func_549(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_289()
{
	bVar0 = false;
	if (_0x5407b7288d0478b7(Global_35, 512) > 0)
	{
		iVar1 = create_itemset(true);
		iVar2 = _0x7be607daff382fd2(Global_35, iVar1, 512);
		if (iVar2 > 0)
		{
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				bVar0 = false;
				iVar4 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, iVar1));
				if (is_entity_a_ped(iVar4))
				{
					iVar5 = get_ped_index_from_entity_index(iVar4);
					if (func_194(iVar5, (*Global_1392194)[Local_3653.f_136]->f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar5 == func_52(Local_3653.f_138))
					{
						bVar0 = true;
					}
					else if (func_583(iVar5, &uLocal_4048))
					{
						bVar0 = true;
					}
					else if (iLocal_14 == 1 && func_583(iVar5, &iLocal_3981))
					{
						if (iVar5 == &iLocal_3981[0] && func_282())
						{
						}
						else
						{
							bVar0 = true;
							Jump @236; //curOff = 206
							if (bVar0)
							{
								if (!func_580(&iVar5))
								{
									bVar0 = false;
								}
							}
						}
						iVar3++;
						destroy_itemset(iVar1);
						return bVar0;
					}
				}
			}
		}
	}
}

int func_290(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_291(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_292(int iParam0)
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

int func_293(int iParam0)
{
	return iParam0;
}

void func_294(int iParam0)
{
	if (!func_586(iParam0))
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

bool func_295(bool bParam0)
{
	if (iLocal_14 != 2)
	{
		return false;
	}
	if (func_11(Local_3653.f_136, 128))
	{
		return false;
	}
	if (!bParam0 && iVar2471 == 17)
	{
		func_263(32768);
		return false;
	}
	if (func_413())
	{
		func_263(32768);
		return false;
	}
	func_344(32768);
	return true;
}

void func_296(int iParam0)
{
	if (!func_123(iParam0->f_136))
	{
		return;
	}
	func_247(iParam0->f_136, 128);
	func_5(iParam0->f_136, 65536);
	func_15(iParam0, 128);
	func_587(30, 0, 1);
}

void func_297(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_298(int iParam0)
{
	if (!func_89(iParam0))
	{
		return -1;
	}
	return func_301(iParam0);
}

bool func_299(int iParam0)
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
		iVar0 = func_301(iParam0);
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

int func_300(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_301(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_588(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_302(int iParam0)
{
	if (!func_89(iParam0))
	{
		return 0;
	}
	return func_589(func_428(iParam0));
}

void func_303(int iParam0, int iParam1, int iParam2)
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

int func_304(int iParam0)
{
	switch (func_302(iParam0))
	{
		case 1:
			iVar0 = func_399(iParam0);
			return func_434(iVar0);
		case 8:
			iVar1 = func_399(iParam0);
			if (func_401((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_590(iVar1);
			}
			break;
	}
	return -1;
}

void func_305(bool bParam0)
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
		func_591(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_592();
		Global_1898077->f_9 = func_593(Global_1894899->f_2);
		func_594(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_306()
{
	if (!func_595((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_595((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_595((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_595((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_595((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_595((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_595((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_307(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	func_596(iParam0, iParam1);
}

int func_308(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_309(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_597(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_598(Global_1935630, 4194304);
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

int func_310(bool bParam0)
{
	if (!bParam0 && func_599(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_311(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_312(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_308(0) != iParam0)
	{
		return;
	}
	if (func_600(iParam0))
	{
		if (bParam1)
		{
			func_601(-525676072);
		}
		else
		{
			func_602(-525676072);
		}
	}
}

int func_313(int iParam0)
{
	return func_604(func_603(iParam0));
}

int func_314(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_605())
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
				if (func_266(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_337(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_60(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_606(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_318(func_607(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_123(iParam0))
	{
		return;
	}
	func_608(iParam0, &(Global_40.f_9096[iParam0]->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	if ((func_609(iParam0, 16777216) && func_609(iParam0, 33554432)) && func_609(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_609(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_609(iParam0, 16777216))
	{
		if (!func_408(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_609(iParam0, 268435456) && func_610(iVar2))
	{
		if (!func_408(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_408(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

void func_317(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
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
	func_355(iParam1);
	func_297(iParam2);
	if (!is_entity_dead(iParam1))
	{
		_0xfc3db99c8144cd81(iParam1, (*Global_1392194)[iParam0->f_136]->f_5, 0, 0, 0);
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
			func_611(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_612(iParam1))
			{
				iParam4 = func_544(iParam1);
			}
			if (is_ped_human(iParam1))
			{
				bVar2 = func_613(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					_give_weapon_to_ped_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_408(iParam4))
			{
				set_current_ped_weapon(iParam1, iParam4, true, 0, false, false);
			}
			open_sequence_task(&iVar1);
			if (is_ped_human(iParam1))
			{
				if (func_408(iParam4))
				{
					task_swap_weapon(0, 1, 0, 0, 0);
				}
				if (!is_ped_using_any_scenario(iParam1) && bVar2)
				{
					task_react(0, Global_35, 0f, 0f, 0f, func_614(), 0.5f, 0, 4);
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

int func_318(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_319(var uParam0, int iParam1)
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

int func_320(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
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
		func_161(&iVar4, &iVar5, func_4(1, 1048576));
	}
	else
	{
		func_162(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_147(iVar3))
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
			iVar6 = func_52(iVar3);
			if (!is_entity_dead(iVar6) && !func_583(iVar6, &(iParam0->f_140)))
			{
				(*uParam1)[iVar0] = iVar6;
				if (!is_entity_a_mission_entity(iVar6))
				{
					set_entity_as_mission_entity(iVar6, true, false);
				}
				set_ped_config_flag(iVar6, 146, false);
				set_ped_config_flag(iVar6, 246, true);
				set_ped_config_flag(iVar6, 178, true);
				set_ped_can_be_targetted(iVar6, true);
				func_51(iVar3, 1, 1);
				set_ped_config_flag(iVar6, 277, false);
				_0xfc3db99c8144cd81(iVar6, (*Global_1392194)[iParam0->f_136]->f_5, 0, 0, 0);
				if ((func_615(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					_0x802092b07e3b1eea(iVar6, Global_36, 3);
					set_ped_relationship_group_hash(iVar6, 1269650476);
					func_611(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(iVar6, 58, true);
					set_ped_combat_attributes(iVar6, 5, true);
					set_ped_combat_attributes(iVar6, 71, true);
					set_ped_combat_attributes(iVar6, 31, true);
					if (func_612(iVar6))
					{
						iVar7 = func_544(iVar6);
					}
					if (is_ped_human(iVar6))
					{
						if (func_616(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							_give_weapon_to_ped_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_408(iVar7))
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
					if (func_408(iVar7))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (is_ped_human(iVar6) && !func_612(iVar6))
					{
						task_react(0, Global_35, 0f, 0f, 0f, func_614(), 0.5f, 0, 4);
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
					if ((bParam7 || func_266(iVar6, 1, 1) < 15f) || func_481())
					{
						clear_ped_tasks(iVar6, 1, 0);
						set_ped_config_flag(iVar6, 178, false);
						_task_smart_flee_style_ped(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iVar6, true);
						func_617(&iVar6, iParam10, fParam11);
					}
					else
					{
						open_sequence_task(&iVar2);
						task_react(0, Global_35, 0f, 0f, 0f, func_614(), 0.5f, 0, 4);
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

int func_321(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	bParam7 = (bParam7 || func_22(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *iParam1)
	{
		if (!is_entity_dead(iParam1[iVar2]))
		{
			if (!func_583(iParam1[iVar2], &(iParam0->f_140)))
			{
				set_ped_config_flag(iParam1[iVar2], 146, false);
				set_ped_config_flag(iParam1[iVar2], 277, false);
				set_ped_config_flag(iParam1[iVar2], 178, true);
				set_ped_can_be_targetted(iParam1[iVar2], true);
				iVar3 = func_363(iParam1[iVar2], 0);
				if (func_147(iVar3))
				{
					func_51(iVar3, 1, 1);
				}
				_0xfc3db99c8144cd81(iParam1[iVar2], (*Global_1392194)[iParam0->f_136]->f_5, 0, 0, 0);
				if (func_615(iParam1[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						_0x802092b07e3b1eea(iParam1[iVar2], Global_36, 3);
						clear_ped_tasks(iParam1[iVar2], 1, 0);
					}
					_0x802092b07e3b1eea(iParam1[iVar2], Global_36, 3);
					set_ped_relationship_group_hash(iParam1[iVar2], 1269650476);
					func_611(iParam1[iVar2], (*uParam2)[iVar2], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(iParam1[iVar2], 58, true);
					set_ped_combat_attributes(iParam1[iVar2], 5, true);
					set_ped_combat_attributes(iParam1[iVar2], 71, true);
					set_ped_combat_attributes(iParam1[iVar2], 31, true);
					if (func_612(iParam1[iVar2]))
					{
						iVar4 = func_544(iParam1[iVar2]);
					}
					if (is_ped_human(iParam1[iVar2]))
					{
						if (func_616((*iParam1)[iVar2], iVar4, (bParam8 || bParam7)))
						{
							_give_weapon_to_ped_2(iParam1[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_408(iVar4))
							{
								set_current_ped_weapon(iParam1[iVar2], iVar4, true, 0, false, false);
							}
						}
						set_ped_combat_attributes(iParam1[iVar2], 46, false);
					}
					else
					{
						set_ped_combat_attributes(iParam1[iVar2], 46, true);
					}
					open_sequence_task(&iVar0);
					if (is_ped_human(iParam1[iVar2]))
					{
						if (func_408(iVar4))
						{
							task_swap_weapon(0, 1, 0, 0, 0);
						}
						if (is_ped_in_any_vehicle(iParam1[iVar2], true))
						{
							task_leave_any_vehicle(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!func_612(iParam1[iVar2]))
						{
							task_react(0, Global_35, 0f, 0f, 0f, func_614(), 0.5f, 0, 4);
						}
					}
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(iParam1[iVar2], iVar0);
					clear_sequence_task(&iVar0);
					iVar1++;
				}
				else
				{
					set_ped_relationship_group_hash(iParam1[iVar2], -401180987);
					if (bParam6)
					{
						_0x802092b07e3b1eea(iParam1[iVar2], Global_36, 3);
						clear_ped_tasks(iParam1[iVar2], 1, 0);
					}
					else
					{
						_0xeeed8fafec331a70(iParam1[iVar2], Global_36, 1);
					}
					set_ped_flee_attributes(iParam1[iVar2], 2, false);
					set_ped_flee_attributes(iParam1[iVar2], 1048576, false);
					set_ped_flee_attributes(iParam1[iVar2], 65536, false);
					open_sequence_task(&iVar0);
					if (is_ped_in_any_vehicle(iParam1[iVar2], true))
					{
						task_leave_any_vehicle(0, 0, 4160);
						_task_smart_flee_style_ped(0, Global_35, 4, 1, -1082130432, -1, 0);
					}
					else
					{
						_task_smart_flee_style_ped(0, Global_35, 4, 0, -1082130432, -1, 0);
					}
					close_sequence_task(iVar0);
					task_perform_sequence(iParam1[iVar2], iVar0);
					clear_sequence_task(&iVar0);
					set_ped_keep_task(iParam1[iVar2], true);
					func_617((*iParam1)[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				set_blocking_of_non_temporary_events(iParam1[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_322(int iParam0)
{
	iVar0 = (5 + iParam0);
	return iVar0;
}

bool func_323(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_started(*uParam0, false);
}

int func_324(int iParam0)
{
	iVar0 = (0 + iParam0);
	return iVar0;
}

void func_325(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return;
	}
	iLocal_2487[iParam1] = iParam0;
}

bool func_326(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_618(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

bool func_327(int iParam0, int iParam1)
{
	if (has_anim_event_fired(*iParam0, 923959751))
	{
		if (func_619(Local_2370[func_322(iParam1)], "PBL_BRKOUT_A"))
		{
			func_620(Local_2370[func_322(iParam1)], "PBL_BRKOUT_A", 1);
			return true;
		}
		else
		{
			func_621(Local_2370[func_322(iParam1)], "PBL_BRKOUT_A");
		}
	}
	else if (has_anim_event_fired(*iParam0, -1194654402))
	{
		if (func_619(Local_2370[func_322(iParam1)], "PBL_BRKOUT_B"))
		{
			func_620(Local_2370[func_322(iParam1)], "PBL_BRKOUT_B", 1);
			return true;
		}
		else
		{
			func_621(Local_2370[func_322(iParam1)], "PBL_BRKOUT_B");
		}
	}
	else if (has_anim_event_fired(*iParam0, -478324062))
	{
		if (func_619(Local_2370[func_322(iParam1)], "PBL_BRKOUT_C"))
		{
			func_620(Local_2370[func_322(iParam1)], "PBL_BRKOUT_C", 1);
			return true;
		}
		else
		{
			func_621(Local_2370[func_322(iParam1)], "PBL_BRKOUT_C");
		}
	}
	return false;
}

void func_328(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_622(uParam0, sParam2))
	{
		return;
	}
	remove_anim_scene_entity(*uParam0, sParam2, iParam1);
}

int func_329(int iParam0, int iParam1)
{
	iVar0 = (iParam0 + iParam1 * 5);
	return iVar0;
}

void func_330(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_332(iParam0, 1);
		func_456(iParam0, 1);
		func_455(iParam0, 1);
		func_331(iParam0, 1);
		func_623(iParam0, 1);
		func_457(iParam0, 1);
		func_624(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_332(iParam0, 0);
		func_456(iParam0, 0);
		func_455(iParam0, 0);
		func_331(iParam0, 0);
		func_623(iParam0, 0);
		func_457(iParam0, 0);
		func_624(iParam0, 0);
	}
}

void func_331(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 32);
	}
	else
	{
		func_230(iParam0, 32);
	}
}

void func_332(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 4);
	}
	else
	{
		func_230(iParam0, 4);
	}
}

void func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 16384);
	}
	else
	{
		func_127(&(iParam0->f_1), 16384);
	}
}

void func_334(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 131072);
	}
	else
	{
		func_127(&(iParam0->f_1), 131072);
	}
}

bool func_335(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_625(iParam0, iParam1);
}

bool func_336(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_551(iParam1, 0, iVar0);
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
				if (func_563(iParam1, 4000))
				{
					if ((func_564(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_565(iParam1, iParam0)) && func_566(iParam1, iParam0))
					{
						func_568();
						*uParam2 = 2;
						func_553(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_563(iParam1, 4000))
				{
					if ((func_564(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_565(iParam1, iParam0)) && func_566(iParam1, iParam0))
					{
						func_568();
						*uParam2 = 2;
						func_553(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_567(iParam0, Global_1935630->f_41))
							{
								func_568();
								*uParam2 = 2;
								func_553(iParam0, iParam1, *uParam2);
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
						if (func_567(iParam0, Global_1935630->f_41))
						{
							func_568();
							*uParam2 = 2;
							func_553(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_570())
					{
						if (func_567(iParam0, Global_1935630->f_42))
						{
							func_568();
							*uParam2 = 2;
							func_553(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_557(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_558(Global_35, iParam0, iParam1))
					{
						func_568();
						*uParam2 = 4;
						func_553(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_559(Global_35, iParam0, iParam1))
					{
						func_568();
						*uParam2 = 256;
						func_553(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_626(iParam0, iParam1))
			{
				func_568();
				*uParam2 = 131072;
				func_553(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_627(iParam0, iParam1))
			{
				func_568();
				*uParam2 = 262144;
				func_553(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

float func_337(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_338(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
		{
			if (func_337(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_339(int iParam0, int iParam1)
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

bool func_340(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_341(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_628(iParam0, vVar0, iParam2);
}

bool func_342(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_337(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_629(iVar0, 0)))
		{
			if (func_630(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_343(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	if (!Global_1935630->f_27 && !bParam4)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		fVar0 = func_337(iParam0, player_ped_id(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (is_player_free_aiming(player_id()) || is_player_targetting_entity(player_id(), iParam0, false))
			{
				if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_629(player_ped_id(), 0);
				if (func_631(iVar3) && !is_control_pressed(0, 130948705))
				{
					return false;
				}
				if (is_ped_in_any_vehicle(iParam0, false) && was_ped_skeleton_updated(iParam0))
				{
					vVar4 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { get_entity_coords(iParam0, false, false) };
				}
				vVar7 = { func_632(0) };
				vVar10 = { func_633(vVar4 - get_gameplay_cam_coord()) };
				fVar13 = absf(get_angle_between_2d_vectors(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = absf(get_angle_between_2d_vectors(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_344(int iParam0)
{
	iLocal_19 = (iLocal_19 - (iLocal_19 && iParam0));
}

bool func_345(int iParam0)
{
	if (func_194(&(iLocal_3981[0]), &(iLocal_2305[5]), 1, 0))
	{
		return false;
	}
	if (func_194(&(iLocal_3981[0]), (*Global_1392194)[Local_3653.f_136]->f_6, 1, 0))
	{
		return false;
	}
	if (func_262(131072))
	{
		return false;
	}
	if (((iParam0 == 8 || iParam0 == 4) || iParam0 == 256) || iParam0 == 64)
	{
		return true;
	}
	return false;
}

int func_346()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 134217728);
	}
	else
	{
		func_230(iParam0, 134217728);
	}
}

Vector3 func_348(int iParam0, float fParam1)
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
	func_633(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

Vector3 func_349()
{
	return 0f, 0f, 154.04f;
}

Vector3 func_350(vector3 vParam0)
{
	fVar0 = sin(vParam0.z);
	fVar1 = cos(vParam0.z);
	fVar2 = sin(vParam0.x);
	fVar3 = cos(vParam0.x);
	return func_633((-fVar3 * fVar0), (fVar3 * fVar1), fVar2);
}

int func_351(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vVar0 = { vParam6 - vParam0 };
	fVar3 = func_634(vParam3, vVar0);
	if (absf(fVar3) > fParam9)
	{
		if (fVar3 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_635(vParam0, vParam0 + vParam3, vParam6))
	{
		return 3;
	}
	return 2;
}

void func_352(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_260(&(iParam0->f_18));
}

void func_353(int iParam0, bool bParam1)
{
	func_636(iParam0, 0, bParam1);
	func_636(iParam0, 1, bParam1);
	func_636(iParam0, 2, bParam1);
}

void func_354(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_355(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_297(&iVar0);
}

bool func_356(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_637(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_638(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_532(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_639(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_640(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_641(iParam0);
	if (iVar5 < 1 || iVar5 > func_642(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_639(*iParam0);
	iVar1 = func_640(*iParam0);
	iVar2 = func_641(*iParam0);
	iVar3 = func_532(*iParam0);
	iVar4 = func_638(*iParam0);
	iVar5 = func_637(*iParam0);
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
	iVar6 = func_642(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_642(iVar1, iVar0);
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
	func_643(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_358(int iParam0, bool bParam1)
{
	return func_644(func_531(), iParam0, bParam1);
}

bool func_359(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_360(int* iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (does_entity_exist(func_376(Global_35)))
		{
			iParam0->f_19 = add_shocking_event_for_entity(67779789, Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!does_entity_exist(func_376(Global_35)))
	{
		remove_shocking_event(iParam0->f_19);
	}
}

void func_361(int* iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_362(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_646(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_645(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
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
				func_648((*uParam2)[0], func_647(8), "", -163964935, 0, 0, 0, 1, 0);
				func_649((*uParam2)[0], 1, 0);
				func_650((*uParam2)[0], 0);
				func_648((*uParam2)[1], func_647(10), "", 648122183, 0, 0, 0, 1, 0);
				func_649((*uParam2)[1], 1, 0);
				func_650((*uParam2)[1], 0);
				func_648((*uParam2)[2], func_647(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_649((*uParam2)[2], 0, 0);
				func_650((*uParam2)[2], 1);
				func_651(iParam0, 1);
			}
			break;
		case 1:
			if (!func_374(0, 1, Global_35, 1) || !func_374(0, 1, *iParam0, 1))
			{
				func_652(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_352(iParam1, 0);
				func_649((*uParam2)[0], 0, 0);
				func_649((*uParam2)[1], 0, 0);
				if (!is_string_null_or_empty(func_653(iParam0)))
				{
					func_94(Global_35, *iParam0, func_653(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_651(iParam0, 2);
			}
			break;
		case 2:
			if (func_374(0, 1, Global_35, 1) && func_374(0, 1, *iParam0, 1))
			{
				if (!is_string_null_or_empty(func_654(iParam0)))
				{
					func_94(*iParam0, Global_35, func_654(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_651(iParam0, 3);
			}
			break;
		case 3:
			if (func_374(0, 1, Global_35, 1) && func_374(0, 1, *iParam0, 1))
			{
				func_651(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

int func_363(int iParam0, bool bParam1)
{
	return func_655(iParam0, Global_1894899->f_2, bParam1);
}

bool func_364(int iParam0)
{
	return func_51(iParam0, 0, 1);
}

char* func_365(int iParam0, int iParam1)
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

bool func_366(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

float func_367(var uParam0)
{
	if (!func_257(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_656(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_511() - uParam0->f_1);
}

bool func_368(int iParam0, int iParam1)
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

bool func_369(int* iParam0)
{
	return true;
}

float func_370(int iParam0, int iParam1, bool bParam2)
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
	return func_657(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_371(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

int func_372(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_337(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_337(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_60(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_658(sParam1))
			{
				return 1;
			}
		}
		else if (func_659(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_373(int* iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_481())
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
	if (func_118(iParam0, 16))
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
	return func_660(cVar0);
}

bool func_374(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_661(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_662(fParam0))
	{
		return false;
	}
	return true;
}

bool func_375(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

int func_376(int iParam0)
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

float func_377(int* iParam0)
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

bool func_378(var uParam0, float fParam1)
{
	if (!func_257(uParam0))
	{
		return false;
	}
	if (func_367(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_379()
{
	if (!_does_volume_exist(&(iLocal_2305[9])))
	{
		func_663();
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_469(func_664(iVar0)))
		{
			func_20(func_664(iVar0), func_665(iVar0));
		}
		func_666(iVar0);
		iVar0++;
	}
}

void func_380()
{
	if (func_469(16))
	{
		func_667();
	}
}

int func_381(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	func_648((*Local_4227[iParam0])[0], func_647(7), "", -163964935, 0, 0, 0, 1, 0);
	func_648((*Local_4227[iParam0])[1], func_647(10), "", 648122183, 0, 0, 0, 1, 0);
	func_648((*Local_4227[iParam0])[2], func_647(12), "", -1616532217, 0, 0, 0, 1, 0);
	return 1;
}

int func_382(int iParam0)
{
	if (!is_bit_set(Local_4227[iParam0][0], 15))
	{
		return 0;
	}
	if (!is_bit_set(Local_4227[iParam0][1], 15))
	{
		return 0;
	}
	if (!is_bit_set(Local_4227[iParam0][2], 15))
	{
		return 0;
	}
	return 1;
}

void func_383(int iParam0)
{
	if (!func_111(16777216))
	{
		return;
	}
	iVar0 = func_645(1, 0, 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar0 = func_645(1, 0, 0);
		switch (iVar2)
		{
			case 0:
				iVar3 = *iParam0;
				if (func_111(134217728))
				{
					iVar0 = 1;
				}
				if (!func_11(2, 128))
				{
					if (!_does_volume_exist(&(iLocal_2305[7])))
					{
						iLocal_2305[7] = _create_volume_cylinder(get_entity_coords(iVar3, true, false), 0f, 0f, 0f, fVar2239, fVar2239, 2f);
						_0x7c00cfc48a782dc0(&(iLocal_2305[7]), iVar3, func_45(), func_45(), 2, 1);
					}
				}
				iVar4 = &iLocal_2305[7];
				break;
			case 1:
				iVar3 = &iLocal_3981[0];
				if (func_25(33554432))
				{
					iVar0 = 65537;
				}
				else
				{
					iVar0 = func_645(1, 0, 0) | 65536;
				}
				iVar4 = 0;
				break;
			case 2:
				if (((!func_262(65536) && !func_118(&Local_2145, 16)) && !func_25(2)) && iVar3987 != -1)
				{
					iVar3 = func_52(iVar3987);
					if (!func_111(64))
					{
						iVar0 = 1;
					}
				}
				iVar4 = 0;
				break;
			case 3:
				Jump @593; //curOff = 311
				iVar5 = 1;
				if (iVar2 == 1 && func_111(32768))
				{
					if (decor_exist_on(iVar3, "bScriptedILO"))
					{
						decor_remove(iVar3, "bScriptedILO");
					}
				}
				else
				{
					if (!decor_exist_on(iVar3, "bScriptedILO"))
					{
						decor_set_bool(iVar3, "bScriptedILO", true);
					}
					if (((((is_control_pressed(0, 1287709438) || is_control_pressed(0, 1499911466)) || is_control_pressed(0, -209515122)) || func_668()) || func_669()) || func_670())
					{
						func_60(vLocal_2327[11]);
					}
					if (func_257(vLocal_2327[11]) && !func_378(vLocal_2327[11], 0.25f))
					{
						func_652(Local_4227[iVar2]);
					}
					iVar1 = func_646(&iVar3, Local_4142[iVar2], fVar2239, Local_4227[iVar2], &iVar5, 0, 1, 0, 0, iVar0, iVar4, 0, 2, 1, -1082130432, 0);
				}
				if (iVar4433 <= -1)
				{
					if (iVar1 != -1)
					{
					}
					iLocal_4436 = iVar1;
					iLocal_4437 = iVar2;
				}
				iVar2++;
			}
			if (!func_111(268435456))
			{
				if (!func_111(-2147483648))
				{
					if (func_374(-3.5f, 1, 0, 0))
					{
						if (iVar4433 == 1 && !func_111(536870912))
						{
							func_94(*iParam0, Global_35, func_671(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_112(0, 1, 0);
						if (func_111(536870912))
						{
							func_672(0);
						}
						else if (iVar2176 >= 2)
						{
							func_673(0, 0);
						}
						else
						{
							func_673(0, 1);
						}
					}
				}
				else if (iVar4434 == 0)
				{
					switch (iVar4433)
					{
						case 0:
							func_372(&(Local_3653.f_35), "RCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
							func_106(1073741824);
							func_112(0, 1, 0);
							break;
						case 1:
							if (func_111(536870912))
							{
								func_255(536870912);
								func_372(&(Local_3653.f_35), "RCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
								func_106(67108864);
								func_5(Local_3653.f_136, 262144);
								func_9(Local_3653.f_136, 256);
								func_112(0, 1, 0);
							}
							else
							{
								func_94(Global_35, *iParam0, func_674(), 0, -1082130432, get_random_int_in_range(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
								func_112(0, 0, 0);
								uLocal_2179 = iVar2176 + 1;
								if (iVar2176 >= 2)
								{
									func_636(iVar4434, 1, 0);
								}
							}
							break;
					}
				}
			}
		}

void func_384(int iParam0)
{
	if (func_262(512))
	{
		if (iVar2179 < 3)
		{
			if (func_374(0, 1, *iParam0, 1) && func_374(0, 1, Global_35, 1))
			{
				if (!func_257(vLocal_2327[9]))
				{
					if (fVar2180 < 30f)
					{
						fLocal_2183 = 45f;
					}
					else
					{
						fLocal_2183 = get_random_float_in_range(30f, 45f);
					}
					func_60(vLocal_2327[9]);
				}
				if (func_378(vLocal_2327[9], fVar2180))
				{
					if (func_266(*iParam0, 1, 1) < 12.5f)
					{
						func_372(&(Local_3653.f_35), func_675(), *iParam0, Global_35, 0, 0, 1, 1);
						func_260(vLocal_2327[9]);
						uLocal_2182 = iVar2179 + 1;
					}
				}
			}
		}
	}
}

int func_385(int iParam0)
{
	if (is_player_riding_train(get_player_index()))
	{
		return 0;
	}
	if (func_118(&Local_2145, 1))
	{
		return 0;
	}
	if (func_25(-2147483648))
	{
		return 0;
	}
	if (!func_43(4096))
	{
		return 0;
	}
	if (!func_374(-3.5f, 1, 0, 0))
	{
		return 0;
	}
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &uVar0, false, false))
	{
		return 0;
	}
	iVar1 = (iVar2174 % 3);
	switch (iVar1)
	{
		case 0:
			iVar2 = 0;
			iVar3 = (iVar2646 / 3);
			break;
		case 1:
			iVar2 = (iVar2646 / 3) + 1;
			iVar3 = (iVar2646 * 2 / 3);
			break;
		case 2:
			iVar2 = (iVar2646 * 2 / 3) + 1;
			iVar3 = iVar2646;
			break;
	}
	if (func_266(*iParam0, 1, 1) < 10f)
	{
		return 1;
	}
	iVar16 = (838 + iVar2);
	if (iVar16 > 857)
	{
		iVar16 = 838;
	}
	iVar17 = (838 + iVar3);
	if (iVar17 > 857)
	{
		iVar17 = 838;
	}
	iVar18 = iVar16;
	while (iVar18 <= iVar17)
	{
		if (iVar15 < 9)
		{
			iVar14 = func_52(iVar18);
			if (((((!is_entity_dead(iVar14) && iVar14 != &iLocal_3981[0]) && func_266(iVar14, 1, 1) < 22f) && !_0x9337183fda2e9035(iVar14, get_player_index())) && !_0xa454d234e45bb6e5(iVar14, get_player_index())) && !func_676(iVar18))
			{
				if (!func_234(iVar14, 1))
				{
					sVar19 = func_365(Local_3653.f_136, -1);
					if (!is_string_null_or_empty(sVar19))
					{
						func_235(iVar14, sVar19, 0);
					}
				}
				iVar4[iVar15] = iVar14;
				iVar15++;
			}
		}
		iVar18++;
	}
	if (!func_25(64) && func_677(&Local_3911, &iVar4, &uLocal_4041, 1, 0))
	{
		func_230(&(Local_3911.f_34), 1);
		if (func_257(&(Local_3946.f_27)))
		{
			func_60(&(Local_3946.f_27));
		}
		return 1;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (func_111(32))
	{
		return 0;
	}
	if (is_player_riding_train(get_player_index()))
	{
		return 0;
	}
	if (func_118(&Local_2145, 1))
	{
		return 0;
	}
	if (func_25(-2147483648))
	{
		return 0;
	}
	if (!func_374(-3.5f, 1, 0, 0))
	{
		return 0;
	}
	if (func_266(*iParam0, 1, 1) < 10f)
	{
		return 1;
	}
	iVar0[0] = func_52(835);
	iVar0[1] = func_52(836);
	iVar0[2] = func_52(837);
	if (!func_25(64) && func_677(&Local_3946, &iVar0, &uLocal_4041, 1, 0))
	{
		if (!func_25(1) && func_25(4))
		{
			func_611(*iParam0, uLocal_4044[0], -89429847, 580546400, 0, func_678(func_4(Local_3653.f_136, 524288)));
			func_8(1);
		}
		if (func_257(&(Local_3911.f_27)))
		{
			func_60(&(Local_3911.f_27));
		}
		func_230(&(Local_3946.f_34), 1);
		func_47(4096);
		return 1;
	}
	return 0;
}

void func_387()
{
	if (func_194(Global_35, &(iLocal_2305[0]), 1, 0))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_388(bool bParam0)
{
	if (bParam0)
	{
		_0x52572b331e693aed(&(iLocal_2305[2]), -411455723, 415013298);
	}
	else
	{
		_0x52572b331e693aed(&(iLocal_2305[2]), -411455723, 257258026);
	}
	func_7(16777216, !bParam0);
}

int func_389(int iParam0)
{
	func_679();
	fVar0 = func_266(&(iLocal_3981[0]), 1, 1);
	if (func_194(Global_35, &(iLocal_2305[3]), 1, 0))
	{
		set_ped_reset_flag(Global_35, 134, true);
	}
	if (!func_262(524288))
	{
		if (!func_43(2048) && !func_25(2))
		{
			if (!((func_4(Local_3653.f_136, 32) || func_4(Local_3653.f_136, 16)) || func_4(Local_3653.f_136, 8)))
			{
				if (func_108(iLocal_3981[0]))
				{
					func_5(Local_3653.f_136, 32);
					func_680(0, 1, 0);
				}
			}
			else if (iVar2474 < 17 && func_43(1024))
			{
				if (!func_108(iLocal_3981[0]))
				{
					delete_ped(iLocal_3981[0]);
				}
				func_113(17);
			}
		}
	}
	if (!func_111(512))
	{
		if (_0x57779b55b83e2bea(&(iLocal_3981[0])))
		{
			_0x2948235db2058e99(&(iLocal_3981[0]), 512);
			_0xb2f47a1afdfcc595(&(iLocal_3981[0]), 32);
			func_106(512);
		}
	}
	func_681();
	switch (iVar2474)
	{
		case 0:
			if (func_4(Local_3653.f_136, 8))
			{
				iLocal_2477 = 18;
				return 1;
			}
			if (!func_108(iLocal_3981[0]))
			{
				func_682(Local_2370[0], &(iLocal_3981[0]), "jr_foreman", 1);
				func_57(&Local_4444, &(iLocal_3981[0]), "RAIL_INSTIGATOR", 0);
				func_683(&vVar2, &vVar5, func_318(func_4(Local_3653.f_136, 256), -1, 0));
				func_684(Local_2370[0], vVar2, vVar5);
				func_517(&uLocal_2189, 3, 1);
				vVar2 = { func_685(Local_2370[0], "jr_foreman", 0) };
				func_686(&vVar2, 1088421888);
				fVar8 = func_687(Local_2370[0], "jr_foreman", 0);
				task_start_scenario_at_position(&(iLocal_3981[0]), 2087366558, vVar2, fVar8, -1, func_262(4096), !func_262(4096), 0, -1f, false);
				set_ped_config_flag(&(iLocal_3981[0]), 137, true);
				set_ped_config_flag(&(iLocal_3981[0]), 186, false);
				set_ped_config_flag(&(iLocal_3981[0]), 314, true);
				_0xa3db37edf9a74635(get_player_index(), &(iLocal_3981[0]), 7, 0, 1);
				if (!decor_exist_on(&(iLocal_3981[0]), "bLostLogs"))
				{
					decor_set_bool(&(iLocal_3981[0]), "bLostLogs", true);
				}
				if (func_262(4096))
				{
					iLocal_2477 = 2;
				}
				else
				{
					iLocal_2477 = 1;
				}
			}
			if (!is_entity_dead(&(iLocal_3981[1])) && !is_ped_using_any_scenario(&(iLocal_3981[1])))
			{
				func_226(&(iLocal_3981[1]), 1, 1);
				func_688(&(iLocal_3981[1]), Local_2650.f_15[1]->f_20, &Local_3890, -1, 1, 0, 1);
				_0xa3db37edf9a74635(get_player_index(), &(iLocal_3981[1]), 7, 0, 1);
			}
			if (!is_entity_dead(&(iLocal_3981[2])) && !is_ped_using_any_scenario(&(iLocal_3981[2])))
			{
				func_226(&(iLocal_3981[2]), 1, 1);
				func_688(&(iLocal_3981[2]), Local_2650.f_15[2]->f_20, &Local_3890, -1, 1, 0, 1);
				_0xa3db37edf9a74635(get_player_index(), &(iLocal_3981[2]), 7, 0, 1);
			}
			break;
		case 2:
			if (!func_118(&Local_2145, 1))
			{
				if (is_ped_using_any_scenario(&(iLocal_3981[0])))
				{
					iLocal_2477 = 1;
				}
				if (!func_368(&(iLocal_3981[0]), -1098463898))
				{
					iLocal_2477 = 0;
				}
			}
			break;
		case 1:
			func_689();
			if (!func_111(33554432))
			{
				func_381(1);
				func_112(1, 1, 1);
				func_673(1, 1);
				func_445(&uLocal_2114);
				func_453(&uLocal_2114, 0);
				func_106(33554432);
			}
			if (!func_4(Local_3653.f_136, 256) && !is_ped_using_any_scenario(&(iLocal_3981[0])))
			{
				func_263(4096);
				if (func_266(&(iLocal_3981[0]), 1, 1) < 10f)
				{
					if (!func_118(&Local_2145, 1))
					{
						func_273();
						func_276(&Local_2145, &Local_3653, 2048, 52015, 0, 0);
						Local_2145 = &iLocal_3981[0];
					}
					else
					{
						func_270(&Local_2145, 512);
					}
				}
				iLocal_2477 = 2;
			}
			if (!func_257(vLocal_2327[4]))
			{
				if (func_374(-3.5f, 1, 0, 0))
				{
					func_60(vLocal_2327[4]);
					func_690(vLocal_2327[4]);
				}
			}
			else if (func_266(&(iLocal_3981[0]), 1, 1) < func_74(func_111(256), 11.5f, 30f))
			{
				if (func_656(vLocal_2327[4]))
				{
					func_690(vLocal_2327[4]);
				}
			}
			else if (!func_656(vLocal_2327[4]))
			{
				func_691(vLocal_2327[4]);
			}
			if (!func_4(Local_3653.f_136, 256) && func_253(vLocal_2327[4], 15f))
			{
				if (func_111(256))
				{
					_0xe7fa07624574b79a(&(iLocal_3981[0]), Global_35, 2, 2, 2.5f, 1, 0, 0, 0);
					func_372(&(Local_3653.f_35), "RCMP_THIEFPRE", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
				}
				else
				{
					iVar9 = func_692(&uLocal_4048, 1, 0, -1, 0, 9f);
					if (!is_entity_dead(iVar9))
					{
						_0xe7fa07624574b79a(&(iLocal_3981[0]), iVar9, 2, 2, 2.5f, 1, 0, 0, 0);
					}
					func_372(&(Local_3653.f_35), "RCMP_THIEFYL", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
				}
			}
			if ((func_111(128) || func_111(8192)) || func_111(65536))
			{
				func_106(131072);
			}
			if (func_25(256))
			{
				set_entity_visible(Local_2650.f_690[9]->f_8, true);
				_0xe5d3eb37abc1eb03(get_player_index());
				set_ped_reset_flag(&(iLocal_3981[0]), 170, true);
				_0x543dfe14be720027(get_player_index(), &(iLocal_3981[0]), 0);
				func_693(&uLocal_2114);
				func_334(&uLocal_2114, 1);
				func_332(&uLocal_2114, 1);
				func_694(&Local_3653, 30);
				set_ped_hearing_range(&(iLocal_3981[0]), 7f);
				func_112(1, 1, 0);
				func_260(vLocal_2327[4]);
				func_113(3);
			}
			break;
		case 3:
			if (func_194(&(iLocal_3981[0]), &(iLocal_2305[4]), 1, 0))
			{
				return 0;
			}
			if (func_25(-2147483648))
			{
				func_133(-2147483648);
				func_696(1, "TRACKS_OBJ06", func_695(), 0);
			}
			if (func_194(&(iLocal_3981[0]), &(iLocal_2305[5]), 1, 0))
			{
				if (((func_111(128) || func_111(8192)) || func_111(65536)) || _0x3ec28da1ffac9ddd(&(iLocal_3981[0]), Global_35, 1, 1))
				{
					func_106(131072);
				}
				return 0;
			}
			if (!func_108(iLocal_3981[0]))
			{
				if (_0xe9f676788f8d5e1e(&(uLocal_3985[3])))
				{
					if (!func_43(131072))
					{
						if (!func_697("TRACKS_OBJ06", 1))
						{
							func_60(vLocal_2327[4]);
							func_47(131072);
						}
					}
					if (func_378(vLocal_2327[4], 7.5f))
					{
						if (!func_25(65536))
						{
							if (!func_698(&(iLocal_3981[0]), 25f, 0))
							{
								func_8(65536);
								_blip_set_modifier(&(uLocal_3985[3]), 1411832502);
							}
						}
						else if (func_698(&(iLocal_3981[0]), 25f, 0))
						{
							func_133(65536);
							_set_blip_flash_style(&(uLocal_3985[3]), 1411832502);
						}
					}
				}
				if ((((func_111(2048) || func_111(4096)) || _is_ped_hogtied(&(iLocal_3981[0]))) || func_262(131072)) && !func_111(8192))
				{
					if (!_is_ped_hogtied(&(iLocal_3981[0])))
					{
						func_372(&(Local_3653.f_35), "RCMP_CONV5", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_115("RCMP_CONF2C", 0);
						func_115("RCMP_CONV2D", 0);
						func_115("RCMP_CONV3B", 0);
						func_115("RCMP_CONF2A", 0);
					}
					if (_is_ped_hogtied(&(iLocal_3981[0])))
					{
						func_5(Local_3653.f_136, 16);
					}
					func_106(4194304);
					clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
					func_113(15);
				}
				else if (func_699())
				{
					func_84(&(Local_3653.f_34), 1, 1);
					_0xa3db37edf9a74635(get_player_index(), &(iLocal_3981[0]), 7, 2, 1);
					_set_ped_crouch_movement(Global_35, false, 0, false);
					set_blocking_of_non_temporary_events(&(iLocal_3981[0]), true);
					func_700(0);
					if (func_111(128) && !func_111(8192))
					{
						task_hands_up(&(iLocal_3981[0]), -1, Global_35, -1, false);
					}
					func_372(&(Local_3653.f_35), "RCMP_THIEF02H", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
					func_113(4);
				}
				else if (_is_ped_using_scenario_hash(&(iLocal_3981[0]), func_109()) && is_ped_active_in_scenario(&(iLocal_3981[0]), 1))
				{
					set_blocking_of_non_temporary_events(&(iLocal_3981[0]), true);
					set_ped_config_flag(&(iLocal_3981[0]), 178, false);
					set_ped_config_flag(&(iLocal_3981[0]), 288, true);
					set_ped_combat_attributes(&(iLocal_3981[0]), 77, true);
					set_ped_config_flag(&(iLocal_3981[0]), 146, true);
					iLocal_2295 = func_701(&(iLocal_3981[0]), _create_volume_cylinder(get_entity_coords(&(iLocal_3981[0]), true, false), 0f, 0f, get_entity_heading(&(iLocal_3981[0])), 10f, 10f, 5f), 148);
					func_107(&uLocal_2114, &uLocal_2142);
					func_203(&uLocal_2114);
					func_113(6);
				}
				else if ((!is_entity_dead(Global_35) && func_374(0, 1, 0, 0)) && func_702())
				{
					if (func_533(&(iLocal_3981[0]), func_703(), 1) < 7.5f)
					{
						clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
						func_8(131072);
						func_8(1024);
						func_113(6);
					}
					else if (!func_25(8192))
					{
						func_47(2097152);
					}
					else
					{
						clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
						func_372(&(Local_3653.f_35), "RCMP_THIEF02F", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
						func_696(1, 0, func_695(), 1);
						remove_all_ped_weapons(&(iLocal_3981[0]), true, true);
						task_combat_ped(&(iLocal_3981[0]), Global_35, 1048576, 0);
						func_47(67108864);
						func_706(Local_2650.f_690[2]->f_8, func_704(), func_705(), 1, 1073741824);
						func_709(&uLocal_2470, func_707(), func_708(), 2);
						clear_ped_tasks_immediately(*iParam0, false, true);
						func_710(iParam0, -1);
						if (_0xf6a8a652a6b186cd(uVar2323))
						{
							_0xfdfecc6ee4491e11(uVar2323);
						}
						iLocal_2473 = 13;
						func_113(16);
					}
				}
			}
			break;
		case 4:
			func_711(1048576000, 1028443341, 0, 106);
			if ((func_374(-3.5f, 1, 0, 0) && !func_262(131072)) && _0xd0b7aeb56229d317(Global_35) != &iLocal_3981[0])
			{
				if (_0x57779b55b83e2bea(&(iLocal_3981[0])))
				{
					clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
				}
				else
				{
					func_133(33554432);
					func_112(1, 1, 0);
					if (!is_entity_dead(&(iLocal_3981[0])))
					{
						clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
						func_712(&(iLocal_3981[0]));
						func_457(&uLocal_2114, 0);
						func_454(&uLocal_2114, 0);
						func_453(&uLocal_2114, 0);
						func_459(&uLocal_2114, 1);
						_0xaab050da48b57978(&(iLocal_3981[0]), "Default_Nervous", 0, -1, 4);
						task_follow_nav_mesh_to_coord(&(iLocal_3981[0]), func_703(), 1f, -1, 2f, 0, 40000f);
					}
					func_713("TRACKS_OBJ06a", 1);
					func_113(5);
				}
			}
			func_714();
			break;
		case 5:
			func_711(1048576000, 1028443341, 0, 106);
			if (func_715(Global_36, func_703(), 3f, 0) && !func_262(131072))
			{
				func_28();
				func_47(2);
				func_8(1024);
				func_372(&(Local_3653.f_35), "RCMP_THIEF02I", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
				_0x2e1d6d87346bb7d2(&(iLocal_3981[0]), Global_35, 0, 0);
				func_113(15);
			}
			func_714();
			break;
		case 6:
			if (func_698(&(iLocal_3981[0]), 20f, 0))
			{
				func_711(1048576000, 1028443341, 0, 106);
				func_28();
				func_107(&uLocal_2114, &uLocal_2142);
				func_8(1024);
				_0x935cf6e42baf7f4d(&(iLocal_3981[0]));
				_0x58f7db5bd8fa2288(&(iLocal_3981[0]));
				_0x4fd80c3dd84b817b(&(iLocal_3981[0]));
				set_ped_config_flag(&(iLocal_3981[0]), 225, true);
				set_ped_config_flag(&(iLocal_3981[0]), 401, false);
				set_ped_config_flag(&(iLocal_3981[0]), 199, true);
				set_ped_config_flag(&(iLocal_3981[0]), 222, true);
				func_133(65536);
				func_696(1, "TRACKS_OBJ07", func_695(), 0);
				func_259();
				func_113(7);
			}
			break;
		case 7:
			func_711(1048576000, 1028443341, 0, 106);
			func_716();
			if (!func_335(&(iLocal_3981[0]), 0, 1) && !func_262(524288))
			{
				if (_0x72ad59f7b7fb6e24(get_player_index(), 1000))
				{
					func_5(Local_3653.f_136, 32);
				}
				func_113(17);
			}
			else if (func_25(131072))
			{
				func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
				if (func_262(2))
				{
					func_112(1, 1, 1);
					func_718(1);
					set_ped_config_flag(&(iLocal_3981[0]), 225, true);
					set_ped_config_flag(&(iLocal_3981[0]), 401, false);
					func_719(iLocal_3981[0], fVar0, 1084227584);
					func_720(iLocal_3981[0], 1);
					_0xe5d3eb37abc1eb03(get_player_index());
					func_8(33554432);
					func_113(8);
				}
			}
			else if (!func_25(131072))
			{
				func_719(iLocal_3981[0], fVar0, 1084227584);
				if (_is_ped_using_scenario_hash(&(iLocal_3981[0]), func_109()) && func_721(fVar0))
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
					func_8(131072);
					func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
					set_ped_config_flag(&(iLocal_3981[0]), 225, true);
					set_ped_config_flag(&(iLocal_3981[0]), 401, false);
					_0xd999e379265a4501(&(iLocal_3981[0]), func_722(), 0);
					clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
				}
				else if (_is_ped_using_scenario_hash(&(iLocal_3981[0]), func_109()) && func_25(128))
				{
					if (iVar2139 == 2)
					{
						func_106(2048);
					}
					_set_ped_crouch_movement(Global_35, false, 0, false);
					func_372(&(Local_3653.f_35), "RCMP_CONV5", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
					func_106(4194304);
					func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
					func_8(131072);
					func_47(16384);
					_0xd999e379265a4501(&(iLocal_3981[0]), func_110(), 0);
					clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
					func_113(15);
				}
			}
			break;
		case 8:
			func_711(1048576000, 1028443341, 0, 106);
			func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
			set_ped_config_flag(&(iLocal_3981[0]), 225, true);
			set_ped_config_flag(&(iLocal_3981[0]), 401, false);
			if (is_ped_using_any_scenario(&(iLocal_3981[0])))
			{
				func_719(iLocal_3981[0], fVar0, 1084227584);
			}
			else
			{
				func_720(iLocal_3981[0], 0);
			}
			if (!func_43(32))
			{
				if (func_374(0, 1, 0, 0) && !func_257(vLocal_2327[4]))
				{
					func_60(vLocal_2327[4]);
				}
				if (func_253(vLocal_2327[4], 4.5f))
				{
					func_713("TRACKS_OBJ10", 1);
					func_47(32);
				}
			}
			else
			{
				if (func_374(0, 1, 0, 0) && !func_257(vLocal_2327[4]))
				{
					func_60(vLocal_2327[4]);
				}
				if (func_253(vLocal_2327[4], 12f))
				{
					func_372(&(Local_3653.f_35), "RCMP_THIEFFLEE", &(iLocal_3981[0]), Global_35, 0, 0, 1, 0);
					func_47(16384);
					func_720(iLocal_3981[0], 0);
					_task_smart_flee_style_coord(&(iLocal_3981[0]), Local_2650.f_4, 4, 0, 1000f, -1, 0);
					func_113(15);
				}
				else
				{
					if (!func_335(&(iLocal_3981[0]), 0, 1))
					{
						func_133(33554432);
						func_112(1, 0, 0);
						func_113(17);
					}
					else if (iVar4434 == 1)
					{
						switch (iVar4433)
						{
							case 1:
								func_112(1, 1, 1);
								if (func_723(58))
								{
									func_8(262144);
									func_133(33554432);
									func_112(1, 0, 0);
									func_113(14);
								}
								else
								{
									func_133(33554432);
									func_112(1, 0, 0);
									func_113(9);
								}
								break;
						}
					}
					if (func_25(128))
					{
						if (iVar2139 == 2)
						{
							func_106(2048);
						}
						_set_ped_crouch_movement(Global_35, false, 0, false);
						func_372(&(Local_3653.f_35), "RCMP_CONV5", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
						func_106(4194304);
						func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
						_0xd999e379265a4501(&(iLocal_3981[0]), func_110(), 0);
						clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
						func_113(15);
					}
					if (func_111(128))
					{
						func_112(1, 1, 1);
						func_133(262144);
						func_8(128);
						func_700(0);
						func_133(33554432);
						func_112(1, 0, 0);
						func_113(13);
					}
					Jump @8759; //curOff = 4482
					func_711(1048576000, 1028443341, 0, 106);
					if (func_374(-3.5f, 1, 0, 0) || func_111(128))
					{
						if (!func_262(4) && !func_111(128))
						{
							if (!_is_ped_hogtied(&(iLocal_3981[0])))
							{
								func_372(&(Local_3653.f_35), "RCMP_CONF2B", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
							}
							func_263(4);
						}
						else if (!func_262(8) && !func_111(128))
						{
							if (!_is_ped_hogtied(&(iLocal_3981[0])))
							{
								func_372(&(Local_3653.f_35), "RCMP_CONF2C", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
							}
							func_263(8);
						}
						else
						{
							func_700(0);
							func_8(33554432);
							func_112(1, 1, 0);
							func_724(1);
							func_260(vLocal_2327[4]);
							func_113(10);
						}
					}
					Jump @8759; //curOff = 4714
					func_711(1048576000, 1028443341, 0, 106);
					if (!func_335(&(iLocal_3981[0]), 0, 1))
					{
						func_113(17);
					}
					else
					{
						if (iVar4434 == 1)
						{
							switch (iVar4433)
							{
								case 2:
									if (func_257(vLocal_2327[4]))
									{
										func_260(vLocal_2327[4]);
									}
									if (!func_368(Global_35, 242628503))
									{
										func_112(1, 0, 1);
										set_player_control(get_player_index(), false, 0, false);
										func_15(&Local_3653, 65536);
										open_sequence_task(&iLocal_4141);
										if (!_0xcb690f680a3ea971(Global_35, 4))
										{
											get_current_ped_weapon(Global_35, &iVar10, true, 1, false);
											if (!func_408(iVar10))
											{
												get_current_ped_weapon(Global_35, &iVar10, true, 2, false);
											}
											set_current_ped_weapon(Global_35, iVar10, false, 0, false, false);
											task_swap_weapon(0, 1, 0, 0, 0);
										}
										task_aim_gun_at_entity(0, &(iLocal_3981[0]), 2000, 0, 1);
										close_sequence_task(iVar4138);
										task_perform_sequence(Global_35, iVar4138);
										clear_sequence_task(&iLocal_4141);
										func_8(128);
										func_700(0);
										func_133(33554432);
										func_113(13);
									}
									break;
							}
						}
						if (func_111(128))
						{
							set_player_control(get_player_index(), true, 0, false);
							func_66(&Local_3653, 65536);
							func_112(1, 1, 1);
							func_8(128);
							func_700(0);
							func_133(33554432);
							func_113(13);
						}
					}
					if (!func_43(32))
					{
						if (func_374(0, 1, 0, 0) && !func_257(vLocal_2327[4]))
						{
							func_60(vLocal_2327[4]);
						}
						if (func_253(vLocal_2327[4], 4.5f))
						{
							func_713("TRACKS_OBJ10", 1);
							func_260(vLocal_2327[4]);
							func_8(33554432);
							func_47(32);
						}
					}
					else
					{
						if (func_374(0, 1, 0, 0) && !func_257(vLocal_2327[4]))
						{
							func_60(vLocal_2327[4]);
						}
						if (func_253(vLocal_2327[4], 12f))
						{
							func_372(&(Local_3653.f_35), "RCMP_THIEFFLEE", &(iLocal_3981[0]), Global_35, 0, 0, 1, 0);
							func_720(iLocal_3981[0], 0);
							_task_smart_flee_style_coord(&(iLocal_3981[0]), Local_2650.f_4, 4, 0, 1000f, -1, 0);
							func_113(15);
						}
						else
						{
							Jump @8759; //curOff = 5290
							func_711(1048576000, 1028443341, 0, 106);
							func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
							if (is_ped_active_in_scenario(&(iLocal_3981[0]), 1))
							{
								if (!func_111(4096))
								{
									_0x2e1d6d87346bb7d2(&(iLocal_3981[0]), Global_35, 0, 0);
									func_8(4096);
								}
								_0xd999e379265a4501(&(iLocal_3981[0]), func_110(), 0);
								clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
							}
							func_330(&uLocal_2114, 0);
							func_450(&uLocal_2114, 1);
							func_447(&uLocal_2114, 1);
							func_448(&uLocal_2114, 1);
							func_107(&uLocal_2114, &uLocal_2142);
							if (((((!func_111(8192) && !func_111(65536)) && !func_25(32768)) && !_is_ped_lassoed(&(iLocal_3981[0]))) && !_is_ped_hogtied(&(iLocal_3981[0]))) && _0xcb690f680a3ea971(Global_35, 4))
							{
								func_47(16384);
							}
							func_113(12);
							Jump @8759; //curOff = 5543
							func_711(1048576000, 1028443341, 0, 106);
							func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
							bVar1 = func_111(4096);
							if (bVar1 || !is_ped_using_any_scenario(&(iLocal_3981[0])))
							{
								if (!func_335(&(iLocal_3981[0]), 0, 1))
								{
									func_113(17);
								}
								if (!_0x57779b55b83e2bea(&(iLocal_3981[0])))
								{
									func_725(&iLocal_2295, 1);
								}
								func_712(&(iLocal_3981[0]));
								if (!is_entity_dead(&(iLocal_3981[1])))
								{
									func_726(iLocal_3981[1]);
								}
								if (!is_entity_dead(&(iLocal_3981[2])))
								{
									func_726(iLocal_3981[2]);
								}
								if (func_292(Local_3653.f_32))
								{
									func_727(0);
									func_84(&(Local_3653.f_32), 1, 1);
								}
								if (func_374(-3.5f, 1, 0, 0) && !func_108(iLocal_3981[0]))
								{
									_0xe5d3eb37abc1eb03(get_player_index());
									stop_current_playing_speech(&(iLocal_3981[0]), 0);
									if ((func_25(1024) && (!bVar1 || _0x57779b55b83e2bea(&(iLocal_3981[0])))) && func_533(&(iLocal_3981[0]), func_703(), 1) < 7.5f)
									{
										if (_0x57779b55b83e2bea(&(iLocal_3981[0])))
										{
											_0x2948235db2058e99(&(iLocal_3981[0]), 512);
											_0xb2f47a1afdfcc595(&(iLocal_3981[0]), 32);
										}
										func_113(13);
									}
									else
									{
										if (_0xd0b7aeb56229d317(Global_35) == &iLocal_3981[0])
										{
											func_372(&(Local_3653.f_35), "RCMP_THIEFGRAB", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
										}
										else if ((_get_lassoed_entity(Global_35) == &iLocal_3981[0] || _is_ped_lassoed(&(iLocal_3981[0]))) || _is_ped_hogtied(&(iLocal_3981[0])))
										{
											func_372(&(Local_3653.f_35), "RCMP_THIEFHOG", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
										}
										else
										{
											func_372(&(Local_3653.f_35), "RCMP_THIEFFLEE", &(iLocal_3981[0]), Global_35, 0, 0, 1, 0);
										}
										if (_is_ped_hogtied(&(iLocal_3981[0])))
										{
											func_5(Local_3653.f_136, 16);
										}
										func_113(14);
									}
								}
							}
							Jump @8759; //curOff = 6083
							func_711(1048576000, 1028443341, 0, 106);
							bVar1 = func_111(4096);
							func_712(&(iLocal_3981[0]));
							if (func_335(&(iLocal_3981[0]), 0, 1))
							{
								if ((((bVar1 || func_111(128)) || get_entity_health(&(iLocal_3981[0])) < 60) || func_111(65536)) || (iVar4434 == 1 && iVar4433 == 2))
								{
									func_719(iLocal_3981[0], fVar0, 1084227584);
									set_player_control(get_player_index(), true, 0, false);
									func_66(&Local_3653, 65536);
									func_720(iLocal_3981[0], 1);
									func_372(&Local_4444, "RCMP_THIEF02B", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
									func_263(128);
									func_60(vLocal_2327[1]);
									set_ped_using_action_mode(&(iLocal_3981[0]), false, -1, 0);
									if (!func_43(2) && !func_111(65536))
									{
										clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
										set_ped_config_flag(&(iLocal_3981[0]), 225, false);
										clear_ped_tasks(Global_35, 1, 0);
									}
									if ((func_111(128) && !func_111(2048)) && !func_111(65536))
									{
										task_hands_up(&(iLocal_3981[0]), -1, Global_35, -1, false);
										func_47(2);
									}
									if (func_257(vLocal_2327[4]))
									{
										func_260(vLocal_2327[4]);
									}
									func_712(&(iLocal_3981[0]));
									func_330(&uLocal_2114, 0);
									func_450(&uLocal_2114, 1);
									func_447(&uLocal_2114, 1);
									func_448(&uLocal_2114, 1);
									func_107(&uLocal_2114, &uLocal_2142);
									func_113(14);
								}
							}
							else
							{
								set_player_control(get_player_index(), true, 0, false);
								func_66(&Local_3653, 65536);
								func_113(17);
							}
							Jump @8759; //curOff = 6539
							func_711(1048576000, 1028443341, 0, 106);
							func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
							func_712(&(iLocal_3981[0]));
							if ((((_0x57779b55b83e2bea(&(iLocal_3981[0])) || func_375("RCMP_THIEF02B")) || func_375("RCMP_CONV2D")) || func_375("RCMP_CONV3A")) || func_375("RCMP_CONV3B"))
							{
								func_719(iLocal_3981[0], fVar0, 1084227584);
							}
							if (is_entity_dead(&(iLocal_3981[0])))
							{
								func_195();
								func_725(&iLocal_2295, 1);
								func_8(-2147483648);
								func_113(17);
							}
							if ((func_111(4096) || func_111(2048)) || func_262(131072))
							{
								_0x36559148b78853b3(1, 0, 0);
								func_263(32);
								func_263(64);
								func_263(16);
								func_133(4096);
								func_8(524288);
								if (!func_108(iLocal_3981[0]))
								{
									func_372(&(Local_3653.f_35), "RCMP_CONV5", &(iLocal_3981[0]), Global_35, 0, 0, 1, 0);
									_0x2e1d6d87346bb7d2(&(iLocal_3981[0]), Global_35, 0, 0);
								}
								bVar1 = true;
							}
							if (is_ped_fleeing(&(iLocal_3981[0])))
							{
								_0x36559148b78853b3(1, 0, 0);
								func_113(17);
							}
							func_728();
							if ((((((func_25(128) || func_111(2048)) || func_25(262144)) || func_111(128)) || func_111(65536)) || func_25(32768)) || func_262(131072))
							{
								if (func_374(func_74(func_25(262144), -3.5f, -9f), 1, 0, 0))
								{
									if (func_25(262144))
									{
										if (!func_262(32))
										{
											func_372(&Local_4444, "RCMP_CONV3A", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
											func_263(32);
											func_133(33554432);
											func_112(1, 0, 0);
										}
										else if (!func_262(64))
										{
											func_372(&Local_4444, "RCMP_CONV3B", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
											func_263(64);
											func_133(33554432);
											func_112(1, 0, 0);
										}
										else
										{
											func_680(0, 1, 0);
											func_47(16384);
											_0x2e1d6d87346bb7d2(&(iLocal_3981[0]), Global_35, 0, 0);
											func_8(524288);
											func_133(33554432);
											func_112(1, 0, 0);
										}
									}
									else if (func_533(&(iLocal_3981[0]), func_703(), 1) < 7.5f)
									{
										if ((!func_262(16) && !func_111(2048)) && !bVar1)
										{
											if (!_is_ped_hogtied(&(iLocal_3981[0])))
											{
												func_372(&Local_4444, "RCMP_CONV2D", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
											}
											func_263(16);
											func_133(33554432);
											func_112(1, 0, 0);
										}
										else
										{
											func_680(0, 1, 0);
											func_47(16384);
											_0x2e1d6d87346bb7d2(&(iLocal_3981[0]), Global_35, 0, 0);
											func_8(524288);
											func_133(33554432);
											func_112(1, 0, 0);
										}
									}
								}
							}
							if (is_ped_using_action_mode(&(iLocal_3981[0])))
							{
								set_ped_using_action_mode(&(iLocal_3981[0]), false, -1, 0);
							}
							if ((((bVar1 || func_25(524288)) || func_25(4096)) || func_111(2048)) || func_262(131072))
							{
								if ((func_335(&(iLocal_3981[0]), 0, 1) && !func_368(&(iLocal_3981[0]), 518218985)) || does_blip_exist(&(uLocal_3985[1])))
								{
									func_680(0, 1, 0);
									func_47(16384);
									if (func_43(2))
									{
										update_task_hands_up_duration(&(iLocal_3981[0]), 1);
									}
									if (func_729(&(iLocal_3981[0]), 0f, 0f, 0f, 1120403456) || _is_ped_hogtied(&(iLocal_3981[0])))
									{
										if (func_108(iLocal_3981[0]))
										{
											func_15(&Local_3653, 128);
										}
										func_725(&iLocal_2295, 1);
									}
									func_195();
									func_725(&iLocal_2295, 1);
									func_8(-2147483648);
									func_113(17);
								}
							}
							else if (((func_111(128) && !func_43(2)) && !func_111(2048)) && !bVar1)
							{
								func_680(0, 1, 0);
								func_47(16384);
								clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
								task_hands_up(&(iLocal_3981[0]), -1, Global_35, -1, false);
								func_47(2);
								if (func_257(vLocal_2327[4]))
								{
									func_260(vLocal_2327[4]);
								}
								func_725(&iLocal_2295, 1);
							}
							Jump @8759; //curOff = 7748
							func_680(0, 1, 0);
							update_task_hands_up_duration(&(iLocal_3981[0]), 1);
							func_60(vLocal_2327[1]);
							func_47(16384);
							func_113(17);
							Jump @8759; //curOff = 7792
							if (func_374(-3.5f, 1, &(iLocal_3981[0]), 1))
							{
								if (!func_257(vLocal_2327[1]))
								{
									func_60(vLocal_2327[1]);
								}
								if (func_253(vLocal_2327[1], 5f))
								{
									func_372(&(Local_3653.f_35), "RCMP_THIEFMELEE", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
								}
							}
							if (func_111(128))
							{
								func_113(3);
							}
							if (!func_335(&(iLocal_3981[0]), 0, 1) || is_ped_fleeing(&(iLocal_3981[0])))
							{
								func_113(17);
							}
							Jump @8759; //curOff = 7932
							func_712(&(iLocal_3981[0]));
							func_133(33554432);
							func_112(1, 0, 0);
							func_728();
							if ((((_0x57779b55b83e2bea(&(iLocal_3981[0])) || func_375("RCMP_THIEF02B")) || func_375("RCMP_CONV2D")) || func_375("RCMP_CONV3A")) || func_375("RCMP_CONV3B"))
							{
								func_719(iLocal_3981[0], fVar0, 1084227584);
							}
							if (is_ped_fleeing(&(iLocal_3981[0])) && func_375("RCMP_CONV2D"))
							{
								func_115("RCMP_CONV2D", 0);
							}
							if ((!func_25(1048576) && !func_4(Local_3653.f_136, 16)) && ((((func_111(2048) || func_111(4096)) || func_111(4194304)) || _is_ped_hogtied(&(iLocal_3981[0]))) || func_374(0, 1, 0, 0)))
							{
								func_8(1048576);
								if (!func_4(Local_3653.f_136, 8))
								{
									func_8(4194304);
									if (func_25(1024))
									{
										func_713("TRACKS_OBJ08", func_695());
									}
									else
									{
										func_713("TRACKS_OBJ09", func_695());
									}
								}
								if (_is_ped_hogtied(&(iLocal_3981[0])))
								{
									func_5(Local_3653.f_136, 16);
								}
								func_247(Local_3653.f_136, 512);
							}
							if (func_111(4194304) || (func_25(1048576) && ((func_111(2048) || func_111(4096)) || func_378(vLocal_2327[1], 2f))))
							{
								if (!func_108(iLocal_3981[0]))
								{
									iVar11 = 0;
									if (func_25(4096) && !func_111(4194304))
									{
										iVar11 |= 384;
									}
									func_133(33554432);
									func_112(1, 0, 0);
									clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
									set_ped_config_flag(&(iLocal_3981[0]), 225, false);
									func_720(iLocal_3981[0], 0);
									if (func_111(4194304))
									{
										_task_smart_flee_style_ped(&(iLocal_3981[0]), Global_35, 4, iVar11, 1000f, -1, 0);
									}
									else
									{
										_task_smart_flee_style_coord(&(iLocal_3981[0]), Local_2650.f_4, 4, iVar11, 1000f, -1, 0);
									}
									func_5(Local_3653.f_136, 16);
								}
								func_113(18);
							}
							if ((func_4(Local_3653.f_136, 16) || func_4(Local_3653.f_136, 32)) || is_ped_fleeing(&(iLocal_3981[0])))
							{
								if (!func_25(1048576))
								{
									func_8(1048576);
									if (!func_4(Local_3653.f_136, 8))
									{
										func_8(4194304);
										if (func_25(1024))
										{
											func_713("TRACKS_OBJ08", func_695());
										}
										else
										{
											func_713("TRACKS_OBJ09", func_695());
										}
									}
								}
								func_113(18);
							}
							Jump @8759; //curOff = 8670
							func_725(&iLocal_2295, 1);
							if (((func_4(Local_3653.f_136, 8) || func_4(Local_3653.f_136, 16)) || func_4(Local_3653.f_136, 32)) || Global_40.f_9096[Local_3653.f_136]->f_6 != 0)
							{
								return 1;
							}
						}
						return 0;
					}
				}
			}
			default:
				break;
	}
}

int func_390(int iParam0)
{
	return 0;
}

void func_391()
{
	if (func_730() && (get_frame_count() % 30) == 0)
	{
		if (func_6(Local_3653.f_136))
		{
			func_8(4);
		}
	}
}

int func_392(int iParam0)
{
	switch (iVar2470)
	{
		case 0:
			Local_2509.f_12 = 15f;
			Local_2509.f_13 = 10f;
			func_381(0);
			func_112(0, 1, 1);
			iLocal_2473 = 1;
			break;
		case 1:
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			if (func_731(iParam0, 0))
			{
				if (iLocal_14 == 2)
				{
					func_247(Local_3653.f_136, 262144);
					func_15(&Local_3653, 128);
				}
				func_247(Local_3653.f_136, 4096);
				func_247(Local_3653.f_136, 16777216);
				func_15(&Local_3653, 128);
				func_83();
				func_263(512);
				iLocal_2473 = 17;
			}
			break;
		case 17:
			if (!func_43(16777216) && func_266(*iParam0, 1, 1) > 15f)
			{
				func_47(16777216);
			}
			if (func_43(16777216) && func_239(Local_3653.f_138, 0))
			{
				if (func_732(Local_3653.f_138, &Local_3653, 30000, 1))
				{
					iLocal_2473 = 18;
				}
			}
			break;
		case 18:
			break;
	}
	return 0;
}

int func_393(int iParam0)
{
	func_733(*iParam0);
	if (!func_262(65536))
	{
		if (Global_40.f_9096[Local_3653.f_136]->f_8 > 0)
		{
			iLocal_2293 = 1;
			Local_2243.f_43 = 4f;
			Local_2243.f_41 = 4f;
			Local_2243.f_39 = (*Global_1392194)[Local_3653.f_136]->f_6;
			func_241(vLocal_2327[7], (20f / 2f));
			func_47(512);
			func_263(65536);
			func_263(262144);
		}
	}
	if (func_262(262144))
	{
		func_272(iParam0);
	}
	switch (iVar2470)
	{
		case 0:
			if (func_111(16777216))
			{
				if (!func_239(Local_3653.f_138, 0))
				{
					func_51(Local_3653.f_138, 1, 1);
				}
				func_106(1073741824);
				if (!func_4(Local_3653.f_136, 131072))
				{
					func_5(Local_3653.f_136, 131072);
				}
				else
				{
					func_9(Local_3653.f_136, 131072);
				}
				func_734(*iParam0);
				iLocal_2473 = 1;
			}
			break;
		case 1:
			func_247(Local_3653.f_136, 4096);
			func_112(0, 1, 1);
			if (func_43(4096))
			{
				iLocal_2473 = 12;
			}
			else
			{
				iLocal_2473 = 3;
			}
			break;
		case 12:
			if (!func_735(-1f))
			{
				func_297(uLocal_4044[0]);
				iLocal_2473 = 3;
			}
			break;
		case 3:
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			if (func_541(*iParam0, Global_35, 0, 10f, 0))
			{
				func_711(1048576000, 1028443341, 0, 106);
				_0x62fdad5e01d2dd47(*iParam0, Global_36, 2, 0);
				clear_ped_tasks(*iParam0, 1, 0);
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_8(64);
				func_736(iParam0, 0, 0);
				func_5(Local_3653.f_136, 16777216);
				Local_2243.f_40 = *iParam0;
				Local_2243.f_43 = 4f;
				Local_2243.f_41 = 4f;
				Local_2243.f_39 = (*Global_1392194)[Local_3653.f_136]->f_6;
				func_47(512);
				if (func_481())
				{
					func_8(16384);
					StringCopy(&cVar0, "RCMP_LNTA", 64);
				}
				else
				{
					StringCopy(&cVar0, "RCMP_LNTB", 64);
				}
				func_372(&(Local_3653.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
				func_263(262144);
				iLocal_2473 = 10;
			}
			break;
		case 10:
			func_711(1048576000, 1028443341, 0, 106);
			func_717(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_374(-3.5f, 1, *iParam0, 0) && !func_111(268435456))
			{
				func_112(0, 1, 1);
				func_737(0);
				func_738(1, 0, 1097859072);
				func_60(vLocal_2327[1]);
			}
			if (func_111(268435456) && iVar4434 == 0)
			{
				switch (iVar4433)
				{
					case 1:
						if (func_25(16384))
						{
							StringCopy(&cVar9, "RCMP_LNTA_N", 24);
						}
						else
						{
							StringCopy(&cVar9, "RCMP_LNTB_N", 24);
						}
						Local_2243.f_40 = *iParam0;
						Local_2243 = 0;
						func_372(&(Local_3653.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_112(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_253(vLocal_2327[1], 5f))
				{
					func_112(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_738(0, 0, 1097859072);
					iLocal_2473 = 4;
				}
			}
			break;
		case 4:
			break;
		case 17:
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	func_740(func_739());
	func_741();
	func_102(65536, func_742(iLocal_3981[0]));
	func_743();
	func_744(iParam0);
	func_745();
	func_746();
	switch (iVar2470)
	{
		case 0:
			if (func_67())
			{
				return 0;
			}
			func_747(0f, 0f, 0f, -1020002304);
			if (!func_89(iVar2171))
			{
				iLocal_2174 = func_180(128, 1, 3, -1188213839);
				if (func_89(iVar2171))
				{
					func_748(iVar2171, 1);
				}
			}
			if (!_does_volume_exist(&(iLocal_2305[13])))
			{
				iLocal_2305[13] = _create_volume_cylinder_with_custom_name(2236.119f, 702.1536f, 101.6987f, 0f, 0f, 18.48959f, 84.40749f, 113.9496f, 29.56531f, "EA CURR - volObjective");
			}
			if (!func_323(Local_2370[0]))
			{
				func_749(&uLocal_3804);
				Local_2509.f_12 = 15f;
				Local_2509.f_13 = 10f;
			}
			if (!_does_volume_exist(&(iLocal_2305[12])))
			{
				iLocal_2305[12] = _create_volume_box_with_custom_name(2229.667f, 660.7031f, 94.59841f, 5.041285f, -0.379583f, 25.4644f, 6.493775f, 18.3399f, 4.196768f, "EA CURR - volTrackBlock");
				if (func_22(&Local_3653, 256))
				{
					_0xb56d41a694e42e86(&(iLocal_2305[12]), 534496, 0, 0, -1, -1, 0);
				}
				else
				{
					_0x74c2b3dc0b294102(&(iLocal_2305[12]));
				}
			}
			if (func_750() && func_111(16777216))
			{
				if (!func_108(iLocal_3981[0]))
				{
					remove_all_ped_weapons(&(iLocal_3981[0]), true, true);
					func_235(&(iLocal_3981[0]), "0931_A_M_M_Civ_White_AVOID_01", 0);
				}
				func_256();
				func_673(0, 1);
				func_112(0, 1, 1);
				if ((func_4(Local_3653.f_136, 8) || func_4(Local_3653.f_136, 32)) || func_4(Local_3653.f_136, 16))
				{
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar1 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar0 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					func_106(524288);
					func_706(Local_2650.f_690[2]->f_8, func_704(), func_705(), 1, 1073741824);
					func_709(&uLocal_2470, func_707(), func_708(), 2);
					clear_ped_tasks_immediately(*iParam0, false, true);
					func_710(iParam0, -1);
					func_454(&uLocal_2114, 0);
					func_453(&uLocal_2114, 0);
					func_457(&uLocal_2114, 0);
					func_459(&uLocal_2114, 1);
					func_752();
					func_47(32768);
					func_8(256);
					func_60(vLocal_2327[3]);
					if (!func_4(Local_3653.f_136, 8))
					{
						func_713("TRACKS_OBJ09", func_695());
						func_8(4194304);
						set_entity_coords(Local_2650.f_690[9]->f_8, func_703(), true, false, true, true);
					}
					else
					{
						func_713("TRACKS_OBJ04", func_695());
						func_611(*iParam0, uLocal_3985[3], -89429847, -981020806, 0, func_678(func_4(Local_3653.f_136, 524288)));
						if (!func_695())
						{
							func_753(&(uLocal_3985[3]), 1);
						}
					}
					iLocal_2473 = 13;
				}
				else if (func_4(Local_3653.f_136, 256))
				{
					set_blocking_of_non_temporary_events(&(iLocal_3981[0]), true);
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar1 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar0 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					func_47(4096);
					func_133(1);
					func_106(1048576);
					func_47(32768);
					if (func_481())
					{
						Local_2509.f_1 = "RCMP_FINSU2";
					}
					else
					{
						Local_2509.f_1 = "RCMP_FINSU3";
					}
					func_752();
					clear_ped_tasks_immediately(&(iLocal_3981[0]), false, true);
					func_754(Local_2370[0]);
					iLocal_2473 = 7;
				}
				else if (func_11(Local_3653.f_136, 64))
				{
					func_237(iParam0, func_236(), 1, 0, 1, 0, 1, 1, 0);
					func_755(Local_2370[3]);
					func_112(0, 1, 0);
					func_738(1, 1, 8f);
					func_756(0);
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar1 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar0 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					func_60(vLocal_2327[1]);
					func_106(524288);
					iLocal_2473 = 1;
				}
				else
				{
					func_237(iParam0, func_236(), 1, 0, 1, 0, 1, 1, 0);
					func_112(0, 1, 0);
					func_738(1, 1, 8f);
					func_673(0, 0);
					func_757(0);
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar1 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					bVar0 = true;
					_request_scenario_type(func_506(bVar0, bVar1), 1, func_228(Local_3653.f_138), func_751(bVar0, bVar1));
					iLocal_2305[1] = _create_volume_cylinder_with_custom_name(2198.052f, 653.0551f, 96.21241f, 0f, 0f, 17.8385f, 2.100592f, 2.018646f, 1.146914f, "EA CURR - volTable");
					_0x18262cafebb5fbe1(&(iLocal_2305[1]), 0, 0, 0, -1, -1, 0);
					_0xb56d41a694e42e86(&(iLocal_2305[1]), 0, 0, 0, -1, -1, 0);
					func_60(vLocal_2327[1]);
					func_106(524288);
					Local_2434 = 0;
					Local_2434.f_1 = Global_35;
					Local_2434.f_8 = { func_758() };
					iLocal_2473 = 1;
				}
			}
			break;
		case 1:
			func_237(iParam0, func_236(), 1, 0, 1, 0, 1, 1, 0);
			if (func_759((*Local_4227[0])[0], 0, 0))
			{
				if (func_118(&Local_2145, 16))
				{
					func_112(0, 1, 0);
				}
			}
			else if (!func_118(&Local_2145, 16))
			{
				func_673(0, 0);
			}
			if (_has_scenario_type_loaded(func_506(0, 0), false) && (func_11(Local_3653.f_136, 64) || func_757(0)))
			{
				if (!func_11(Local_3653.f_136, 4))
				{
					func_247(Local_3653.f_136, 4);
					func_15(&Local_3653, 128);
				}
				if (func_43(8192))
				{
					func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
				}
				if (!func_118(&Local_2145, 16))
				{
					if (!func_11(Local_3653.f_136, 64))
					{
						if (is_any_speech_playing(*iParam0))
						{
							func_649((*Local_4227[0])[0], 0, 0);
						}
						else if (!func_759((*Local_4227[0])[0], 0, 0))
						{
							func_649((*Local_4227[0])[0], 1, 0);
							func_611(*iParam0, uLocal_4044[0], -89429847, 580546400, 0, 0);
						}
					}
				}
				if (!func_118(&Local_2145, 16))
				{
					if (func_11(Local_3653.f_136, 64))
					{
						if (func_266(*iParam0, 1, 1) < fVar2239)
						{
							iLocal_2176 = 0;
							iLocal_2473 = 4;
						}
					}
					else
					{
						func_760(iParam0, 1.5f, iLocal_14 == 1, 2, 1, 1);
					}
				}
				if (func_761(Local_4142[0], 1))
				{
					func_762();
				}
				if (iVar4434 == 0 && iVar4433 == 0)
				{
					func_536(1);
					func_762();
					func_711(1048576000, 1028443341, 0, 106);
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_763(&(Local_2296.f_3), 4);
					func_764(*iParam0, &Local_2296, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
					func_112(0, 1, 1);
					func_752();
					set_blocking_of_non_temporary_events(&(iLocal_3981[0]), true);
					func_682(Local_2370[4], func_52(Local_3653.f_138), "U_M_M_RaCForeman_01", 1);
					func_682(Local_2370[4], Global_35, "ARTHUR", 1);
					func_765(Local_2370[4], Local_2650.f_690[0]->f_8, "p_chair06x");
					func_765(Local_2370[4], Local_2650.f_690[12]->f_8, "p_cigarette_cs01x");
					StringCopy(&(Local_2370[4]->f_4), "Loop", 24);
					func_766(&Local_2434);
					Local_2434.f_1 = Global_35;
					Local_2434.f_8 = { func_758() };
					Local_2434.f_19 = func_767();
					Local_2434.f_14 = { func_768() };
					func_127(&(Local_2434.f_23), 17921);
					func_8(32);
					func_15(&Local_3653, 65536);
					func_769(&Local_2434, 106);
					if (iVar2173 > 0)
					{
						func_372(&(Local_3653.f_35), "RCMP_INT_GRT", Global_35, *iParam0, 0, 0, 1, 1);
					}
					else
					{
						func_94(Global_35, *iParam0, "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_2473 = 2;
				}
			}
			break;
		case 2:
			func_711(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_762();
			func_764(*iParam0, &Local_2296, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_769(&Local_2434, 106);
			if (!func_25(64) && func_374(-5f, 1, 0, 0))
			{
				func_8(64);
				func_270(&Local_2145, 4);
				func_112(0, 0, 1);
				func_754(Local_2370[4]);
				func_372(&(Local_3653.f_35), "RCMP_INT_LI", *iParam0, Global_35, 0, 0, 1, 1);
				func_770(Local_2370[4]);
				func_83();
				func_270(&Local_2145, 4);
			}
			if (func_326(*iParam0, &(Local_2370[4]), "U_M_M_RaCForeman_01", 0, 0, 1, 0))
			{
				func_42(8192);
				func_5(Local_3653.f_136, 524288);
				func_192(iParam0);
				func_772(&Local_21, 145638);
				func_47(4096);
				func_773(&Local_21, &uLocal_263);
				func_774(&(Local_21.f_4), &((*Global_1392194)[2]->f_6));
				func_775(&Local_21, 2246.049f, 635.3174f, 89.32668f, -141f, 0);
				func_776(&(Local_21.f_213), 32);
				func_778(func_777(), &Local_21);
				func_711(1048576000, 1028443341, 1, 106);
				func_8(2048);
				func_442();
				iLocal_2473 = 3;
			}
			break;
		case 3:
			func_762();
			if (func_778(func_777(), &Local_21))
			{
				func_133(67108864);
				func_133(32);
				display_radar(false);
				display_hud(true);
				func_779(&Local_2224, func_647(0), func_647(1), 0, 2, ceil((12f * 4000f)), 1, -1, -1);
				iLocal_2473 = 4;
			}
			break;
		case 4:
			if (!func_11(Local_3653.f_136, 64))
			{
				if (func_780(Local_2370[3]))
				{
					func_781(Local_2370[3]);
				}
				if (func_782(&Local_2224))
				{
					if (func_783(&Local_2224))
					{
						if (func_292(Local_2224.f_5))
						{
							func_784(Local_2224.f_5, 0, 1);
							func_785(Local_2224.f_5, 0, 1);
						}
						if (func_292(Local_2224.f_6))
						{
							func_784(Local_2224.f_6, 0, 1);
							func_785(Local_2224.f_6, 0, 1);
						}
						if (func_786(&Local_2224))
						{
							display_radar(true);
							display_hud(true);
							func_5(Local_3653.f_136, 256);
							func_787(Local_2370[3], "EXIT_YES");
							clear_ped_tasks_immediately(&(iLocal_3981[0]), false, true);
							uLocal_2471 = create_scenario_point_attached_to_entity(Local_2650.f_690[0]->f_8, func_506(0, 0), func_45(), 0f, 0, 0, 0);
							func_709(&uLocal_2471, func_788(Local_2370[3], "RailroadForeman", "EXIT_YES"), func_789(Local_2370[3], "RailroadForeman", "EXIT_YES"), 0);
							func_754(Local_2370[0]);
							func_84(&(Local_3653.f_32), 1, 1);
							func_84(&(Local_3653.f_33), 1, 1);
							func_790();
							func_60(vLocal_2327[0]);
							func_133(268435456);
							if (func_89(iVar2171))
							{
								func_791(iVar2171, 1, 1);
							}
							freeze_entity_position(Local_2650.f_690[1]->f_8, true);
							iLocal_2176 = 0;
							iLocal_2473 = 5;
						}
						else if (func_792(&Local_2224))
						{
							func_787(Local_2370[3], "EXIT_NO");
							uLocal_2471 = create_scenario_point_attached_to_entity(Local_2650.f_690[0]->f_8, func_506(0, 0), func_45(), 0f, 0, 0, 0);
							func_709(&uLocal_2471, func_788(Local_2370[3], "RailroadForeman", "EXIT_NO"), func_789(Local_2370[3], "RailroadForeman", "EXIT_NO"), 0);
							display_radar(true);
							display_hud(true);
							func_84(&(Local_3653.f_32), 1, 1);
							func_84(&(Local_3653.f_33), 1, 1);
							func_133(268435456);
							if (func_89(iVar2171))
							{
								func_91(iVar2171, 1, 2);
							}
							freeze_entity_position(Local_2650.f_690[1]->f_8, true);
							iLocal_2473 = 5;
						}
					}
				}
			}
			else if (iVar4434 == 0 && iVar4433 == 0)
			{
				display_radar(true);
				display_hud(true);
				func_5(Local_3653.f_136, 256);
				func_372(&(Local_3653.f_35), "RCMP_INT_LO_YES", Global_35, *iParam0, 0, 0, 1, 1);
				uLocal_2471 = create_scenario_point_attached_to_entity(Local_2650.f_690[0]->f_8, func_506(0, 0), func_45(), 0f, 0, 0, 0);
				func_709(&uLocal_2471, func_788(Local_2370[3], "RailroadForeman", "EXIT_YES"), func_789(Local_2370[3], "RailroadForeman", "EXIT_YES"), 0);
				func_754(Local_2370[0]);
				func_84(&(Local_3653.f_32), 1, 1);
				func_84(&(Local_3653.f_33), 1, 1);
				func_790();
				func_60(vLocal_2327[0]);
				func_133(268435456);
				if (func_89(iVar2171))
				{
					func_791(iVar2171, 1, 1);
				}
				freeze_entity_position(Local_2650.f_690[1]->f_8, true);
				iLocal_2176 = 0;
				iLocal_2473 = 5;
			}
			else if (iVar4434 == 0 && iVar4433 == 1)
			{
				func_372(&(Local_3653.f_35), "RCMP_INT_LO_NO", Global_35, *iParam0, 0, 0, 1, 1);
				uLocal_2471 = create_scenario_point_attached_to_entity(Local_2650.f_690[0]->f_8, func_506(0, 0), func_45(), 0f, 0, 0, 0);
				func_709(&uLocal_2471, func_788(Local_2370[3], "RailroadForeman", "EXIT_NO"), func_789(Local_2370[3], "RailroadForeman", "EXIT_NO"), 0);
				display_radar(true);
				display_hud(true);
				func_84(&(Local_3653.f_32), 1, 1);
				func_84(&(Local_3653.f_33), 1, 1);
				func_133(268435456);
				if (func_89(iVar2171))
				{
					func_91(iVar2171, 1, 2);
				}
				freeze_entity_position(Local_2650.f_690[1]->f_8, true);
				iLocal_2473 = 5;
			}
			if (func_11(Local_3653.f_136, 64))
			{
				func_760(iParam0, 1.5f, iLocal_14 == 1, 2, 1, 1);
			}
			else if (func_378(vLocal_2327[1], 12f))
			{
				if (iVar2173 < 2)
				{
					if (iVar2173 > 0)
					{
						func_794(Local_2370[3], func_793((iVar2173 - 1)));
					}
					func_621(Local_2370[3], func_793(iVar2173));
					iLocal_2473 = 6;
				}
			}
			break;
		case 5:
			if (func_374(0, 1, *iParam0, 1) && (func_11(Local_3653.f_136, 64) || func_795(Local_2370[3])))
			{
				if (!func_11(Local_3653.f_136, 64))
				{
					func_796(Local_2370[3], 1, 1);
					func_797(&Local_2224);
				}
				else
				{
					func_755(Local_2370[3]);
				}
				set_player_control(get_player_index(), true, 0, false);
				func_66(&Local_3653, 65536);
				func_112(0, 1, 0);
				func_133(64);
				func_738(0, 0, 1097859072);
				func_247(Local_3653.f_136, 64);
				if (func_4(Local_3653.f_136, 256))
				{
					func_196(1);
					iLocal_2473 = 7;
				}
				else
				{
					func_196(1);
					iLocal_2473 = 8;
				}
			}
			break;
		case 6:
			if (func_619(Local_2370[3], func_793(iVar2173)))
			{
				func_60(vLocal_2327[1]);
				func_620(Local_2370[3], func_793(iVar2173), 1);
				func_770(Local_2370[3]);
				func_372(&(Local_3653.f_35), func_798(iVar2173), *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_2176 = iVar2173 + 1;
				iLocal_2473 = 4;
			}
			break;
		case 7:
			func_799(iParam0, 0);
			if (func_111(1048576))
			{
				func_760(iParam0, 1.5f, iLocal_14 == 1, 1, 1, 1);
			}
			if (func_374(-3.5f, 1, 0, 0) && !func_800(1))
			{
				func_297(uLocal_4044[0]);
				if (!func_108(iLocal_3981[0]))
				{
					set_ped_config_flag(&(iLocal_3981[0]), 6, true);
					set_ped_config_flag(&(iLocal_3981[0]), 4, true);
				}
				func_15(&Local_3653, 128);
				func_42(4194304);
				func_787(Local_2370[0], func_801(&(uLocal_2189[0])));
				StringCopy(&(Local_2370[0]->f_4), "BOOL_idle", 24);
				iLocal_2305[4] = _create_volume_aggregate_with_custom_name("EA CURR - volSearch");
				_0x39816f6f94f385ad(&(iLocal_2305[4]), 2229.169f, 662.1083f, 95.43304f, 0f, 6.380054f, -63.82947f, 17.50498f, 13.27673f, 4.950444f);
				_0x39816f6f94f385ad(&(iLocal_2305[4]), 2221.48f, 677.9045f, 97.39736f, 0.027007f, 6.379999f, -63.58642f, 18.25708f, 13.26443f, 4.950444f);
				_0xbce668aaf83608be(&(iLocal_2305[4]), 2233.024f, 654.2349f, 93.41387f, 0f, 0f, 26.16757f, 6.716787f, 6.717f, 3.306341f);
				_0xbce668aaf83608be(&(iLocal_2305[4]), 2217.637f, 686.0743f, 98.36574f, 0f, 0f, 21.26587f, 6.716787f, 6.717f, 3.306341f);
				iLocal_2305[5] = _create_volume_box_with_custom_name(2205.916f, 721.6003f, 99.21843f, 0f, 0f, 12.21777f, 27.72938f, 78.63357f, 24.42301f, "CURR - volIgnore");
				func_738(0, 0, 1097859072);
				func_112(0, 1, 0);
				iLocal_2473 = 10;
			}
			break;
		case 8:
			func_799(iParam0, 0);
			if (func_374(0, 1, 0, 0))
			{
				func_297(uLocal_4044[0]);
				func_738(0, 0, 1097859072);
				func_112(0, 1, 1);
				iLocal_2473 = 9;
			}
			break;
		case 9:
			if (func_799(iParam0, 0))
			{
				func_738(0, 0, 1097859072);
				func_112(0, 1, 0);
				_request_scenario_type(func_506(1, 0), 262148, -532378284, func_751(1, 0));
				func_263(512);
				func_196(1);
				iLocal_2473 = 17;
			}
			break;
		case 10:
			func_799(iParam0, 0);
			if (func_111(1048576))
			{
				func_760(iParam0, 1.5f, iLocal_14 == 1, 1, 1, 1);
			}
			if (!func_43(4194304) && func_326(Global_35, &(Local_2370[3]), "arthur", 0, 0, 1, 0))
			{
				func_696(2, "TRACKS_OBJ05", func_695(), 0);
				func_47(4194304);
			}
			bVar2 = func_25(512);
			if ((func_43(4194304) && func_43(32768)) && func_802(&(iLocal_3981[0]), &uLocal_4543, &uLocal_4548, &bVar2, 1f, 50f, 0f, 0, 0f, 1))
			{
				func_7(512, bVar2);
				func_749(&uLocal_4543);
				func_621(Local_2370[0], "PBL_idle");
				func_8(-2147483648);
				iLocal_2473 = 11;
			}
			func_7(512, bVar2);
			break;
		case 11:
			func_799(iParam0, 0);
			if (func_803(Local_2370[0], "BOOL_idle"))
			{
				func_804(Local_2370[0], "BOOL_idle");
			}
			if (func_374(-3.5f, 1, 0, 0) && !func_257(vLocal_2327[0]))
			{
				func_60(vLocal_2327[0]);
			}
			if (!func_262(8192) && !get_is_task_active(&(iLocal_3981[0]), 3))
			{
				if (func_266(&(iLocal_3981[0]), 1, 1) < 10f)
				{
					if (!func_118(&Local_2145, 1))
					{
						func_273();
						func_276(&Local_2145, &Local_3653, 2048, 52015, 0, 0);
						func_270(&Local_2145, 128);
						Local_2145 = &iLocal_3981[0];
					}
					else
					{
						func_270(&Local_2145, 512);
					}
				}
				func_263(8192);
			}
			if (func_805())
			{
				iLocal_2176 = iVar2173 + 1;
				if (func_806())
				{
					func_620(Local_2370[0], "PBL_idle", 1);
					func_807(Local_2370[0], "BOOL_idle");
					if (!is_entity_dead(&(iLocal_3981[0])))
					{
						_0xaab050da48b57978(&(iLocal_3981[0]), "Default_Nervous", 0, -1, 4);
					}
					func_371(2001176446, &(iLocal_3981[0]), 1);
					func_372(&Local_4444, "RCMP_THIEF01B", &(iLocal_3981[0]), &(iLocal_3981[1]), 0, 0, 1, 0);
					iLocal_2473 = 12;
				}
				else
				{
					func_112(1, 1, 0);
					func_796(Local_2370[0], 1, 1);
					func_371(2001176446, &(iLocal_3981[0]), 1);
					if (iVar2173 < 3)
					{
						func_787(Local_2370[0], func_801(&(uLocal_2189[iVar2173])));
					}
				}
			}
			break;
		case 12:
			if (func_326(&(iLocal_3981[0]), &(Local_2370[0]), "jr_foreman", -1795669989, 0, 1, 0))
			{
				if (!func_25(256))
				{
					func_706(Local_2650.f_690[2]->f_8, func_704(), func_705(), 1, 1073741824);
					func_709(&uLocal_2470, func_707(), func_708(), 2);
					clear_ped_tasks_immediately(*iParam0, false, true);
					func_710(iParam0, -1);
					func_454(&uLocal_2114, 0);
					func_457(&uLocal_2114, 0);
					func_453(&uLocal_2114, 0);
					func_459(&uLocal_2114, 1);
					func_8(256);
					func_60(vLocal_2327[3]);
				}
				uLocal_2468 = create_scenario_point(func_109(), func_703(), func_808(), 0, 0, 0);
				_set_scenario_point_flag(iVar2465, 19, true);
				iLocal_2305[3] = _create_volume_cylinder_with_custom_name(func_703(), 0f, 0f, 0f, 20f, 20f, 10f, "EA CURR - volTree");
				_0x18262cafebb5fbe1(&(iLocal_2305[3]), 0, 0, 0, -1, -1, 0);
				_0xb56d41a694e42e86(&(iLocal_2305[3]), 0, 0, 0, -1, -1, 0);
				task_play_anim(&(iLocal_3981[0]), "SCRIPT_PROC@EVENT_AREA@UNION_RAILROAD@STAGE_01@RAILROAD", "THIEF_EXIT", 2f, -2f, -1, 67108880, 0f, false, 0, false, 0, false);
				open_sequence_task(&iLocal_4141);
				task_follow_nav_mesh_to_coord(0, func_809(0), 1f, -1, 0.25f, 1, 40000f);
				task_follow_nav_mesh_to_coord(0, func_809(1), 1f, -1, 0.25f, 1, 40000f);
				task_follow_nav_mesh_to_coord(0, func_809(2), 1f, -1, 0.25f, 1, 40000f);
				task_follow_nav_mesh_to_coord(0, func_810(), 1f, -1, 0.25f, 0, func_811());
				_task_use_scenario_point(0, iVar2465, 0, -1, true, false, 0, false, -1f, false);
				func_812(&(iLocal_3981[0]), &iLocal_4141, 0, 0, 1, 1);
				func_813(&(iLocal_3981[0]), 2139774588);
				func_813(&(iLocal_3981[0]), 1587891565);
				func_813(&(iLocal_3981[0]), -1972216640);
				func_813(&(iLocal_3981[0]), 1877013492);
				iLocal_2473 = 13;
			}
			break;
		case 13:
			if ((!func_43(65536) && !func_194(&(iLocal_3981[0]), &(iLocal_2305[5]), 1, 0)) && !func_194(&(iLocal_3981[0]), (*Global_1392194)[Local_3653.f_136]->f_6, 1, 0))
			{
				func_47(65536);
			}
			if (func_814())
			{
				func_766(&Local_2434);
				if (!func_584())
				{
					sVar3 = "PBL_return_no_luck";
				}
				else if (func_815())
				{
					if (func_111(32) && func_337(Global_35, &(iLocal_3981[0]), 1, 1) < 5f)
					{
						sVar3 = "PBL_return_thief_alive";
						func_8(32768);
						func_5(Local_3653.f_136, 64);
						func_86(Local_3653.f_136, 512);
						func_247(Local_3653.f_136, 32);
						func_127(&(Local_2434.f_23), 4096);
						_0x18ff3110cf47115d(&(iLocal_3981[0]), 1, 0);
					}
					else
					{
						sVar3 = "PBL_return_thief_quit";
						func_5(Local_3653.f_136, 64);
						func_86(Local_3653.f_136, 512);
						func_247(Local_3653.f_136, 32);
					}
				}
				else
				{
					sVar3 = "PBL_return_thief_dead";
					func_5(Local_3653.f_136, 64);
					func_247(Local_3653.f_136, 512);
					func_86(Local_3653.f_136, 32);
				}
				func_464(Local_2370[1], "script@proc@eventareas@unionrailroad@stageonetent", sVar3, 0);
				func_133(-2147483648);
				func_8(64);
				func_536(1);
				Local_2434.f_1 = Global_35;
				func_127(&(Local_2434.f_23), 25344);
				Local_2434.f_17 = 0.2f;
				Local_2434.f_18 = 0.25f;
				func_270(&Local_2145, 4);
				if (func_4(Local_3653.f_136, 8))
				{
					func_83();
				}
				display_radar(false);
				iLocal_2473 = 14;
			}
			break;
		case 14:
			if (func_505(Local_2370[1]))
			{
				if (!func_584())
				{
					sVar4 = "PBL_return_no_luck";
				}
				else if (func_815())
				{
					if (func_111(32) && func_337(Global_35, &(iLocal_3981[0]), 1, 1) < 5f)
					{
						sVar4 = "PBL_return_thief_alive";
					}
					else
					{
						sVar4 = "PBL_return_thief_quit";
					}
				}
				else
				{
					sVar4 = "PBL_return_thief_dead";
				}
				Local_2434.f_8 = { func_685(Local_2370[1], "plr", sVar4) };
				Local_2434.f_19 = func_687(Local_2370[1], "plr", sVar4);
				Local_2434.f_25 = &Local_2370[1];
				StringCopy(&(Local_2434.f_30), "plr", 24);
				StringCopy(&(Local_2434.f_26), sVar4, 32);
				func_15(&Local_3653, 65536);
				func_769(&Local_2434, 106);
				func_711(1048576000, 1028443341, 0, 106);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				iLocal_2473 = 15;
			}
			break;
		case 15:
			func_711(1048576000, 1028443341, 0, 106);
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (func_769(&Local_2434, 106))
			{
				func_107(&Local_3653, &(Local_3653.f_28));
				func_8(32);
				func_57(&Local_4444, *iParam0, "EA_Rcamp_Foreman", 0);
				set_player_control(get_player_index(), true, 0, false);
				func_66(&Local_3653, 65536);
				set_blocking_of_non_temporary_events(&(iLocal_3981[0]), true);
				set_ped_config_flag(&(iLocal_3981[0]), 178, false);
				set_ped_config_flag(&(iLocal_3981[0]), 288, true);
				set_ped_reset_flag(&(iLocal_3981[0]), 147, true);
				func_765(Local_2370[1], Local_2650.f_690[2]->f_8, "Chair");
				func_765(Local_2370[1], Local_2650.f_690[11]->f_8, "pen");
				if (func_584())
				{
					set_entity_coords(Local_2650.f_690[9]->f_8, 2202.462f, 638.4186f, 95.3074f, true, false, true, true);
					if (!is_entity_visible(Local_2650.f_690[9]->f_8))
					{
						set_entity_visible(Local_2650.f_690[9]->f_8, true);
					}
					func_765(Local_2370[1], Local_2650.f_690[10]->f_8, "money_A");
					func_765(Local_2370[1], Local_2650.f_690[9]->f_8, "money_B");
				}
				func_682(Local_2370[1], *iParam0, "foreman", 1);
				func_682(Local_2370[1], Global_35, "plr", 1);
				if (!func_108(iLocal_3981[0]) && func_25(32768))
				{
					func_682(Local_2370[1], &(iLocal_3981[0]), "vic", 0);
				}
				Local_2509.f_33 = { Local_4444 };
				func_15(&Local_3653, 128);
				if (func_4(Local_3653.f_136, 8))
				{
					func_83();
				}
				if (func_111(32) && func_337(Global_35, &(iLocal_3981[0]), 1, 1) < 5f)
				{
					is_entity_dead(&(iLocal_3981[0]));
					detach_entity(&(iLocal_3981[0]), false, false);
				}
				func_754(Local_2370[1]);
				if (!func_584())
				{
					if (func_4(Local_3653.f_136, 32) || func_4(Local_3653.f_136, 16))
					{
						func_372(&(Local_3653.f_35), "RCMP_FINSU1B", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_372(&(Local_3653.f_35), "RCMP_FINSU1", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				func_297(uLocal_4044[0]);
				if (func_4(Local_3653.f_136, 8))
				{
					func_297(uLocal_3985[3]);
					func_83();
				}
				iLocal_2305[11] = _create_volume_box_with_custom_name(2203.92f, 641.6044f, 96.79558f, 0f, 0f, 33.06224f, 0.750799f, 2.395941f, 2.483808f, "EA CURR - volChairBlock");
				_0x19c7567d2f2287d6(&(iLocal_2305[11]), 7);
				_request_scenario_type(func_506(1, 0), 1, func_228(Local_3653.f_138), func_751(1, 0));
				iLocal_2473 = 16;
			}
			break;
		case 16:
			func_711(1048576000, 1028443341, 0, 106);
			if (func_25(32))
			{
				func_816(1, "plr");
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			if (func_111(1))
			{
				return 0;
			}
			set_ped_reset_flag(&(iLocal_3981[0]), 147, true);
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			if (!is_entity_dead(Global_35))
			{
				if (has_anim_event_fired(Global_35, 287195044))
				{
					func_818(func_817(Global_35), 1, 1);
				}
				if (!func_111(4) && func_584())
				{
					if (has_anim_event_fired(Global_35, -1323255486))
					{
						func_819();
						func_107(&Local_3653, &(Local_3653.f_28));
						task_knocked_out(&(iLocal_3981[0]), -100f, 0);
					}
				}
				if (!func_111(2) && func_111(4))
				{
					if (has_anim_event_fired(Global_35, -1898385492) || func_326(Global_35, &(Local_2370[1]), "plr", -1132719179, 0, 1, 0))
					{
						if (does_entity_exist(Local_2650.f_690[9]->f_8))
						{
							delete_object(&(Local_2650.f_690[9]->f_8));
						}
						if (does_entity_exist(Local_2650.f_690[10]->f_8))
						{
							delete_object(&(Local_2650.f_690[10]->f_8));
						}
						if (func_815())
						{
							iVar5 = (Global_40.f_9096[Local_3653.f_136]->f_6 / 2);
							func_820(iVar5, 0, 1065353216, 1, 0, 0, 1, 752097756);
						}
						else
						{
							iVar5 = (Global_40.f_9096[Local_3653.f_136]->f_6 / 4);
							func_820(iVar5, 0, 1065353216, 1, 0, 0, 1, 752097756);
						}
						func_821(*iParam0, (Global_40.f_9096[Local_3653.f_136]->f_6 - iVar5));
						func_106(2);
					}
				}
			}
			if (!func_11(Local_3653.f_136, 128) && func_326(Global_35, &(Local_2370[1]), "plr", -1132719179, 0, 1, 0))
			{
				func_822();
			}
			if (func_326(*iParam0, &(Local_2370[1]), "foreman", 0, 0, 1, 0))
			{
				func_822();
				func_823(iParam0);
				iLocal_2473 = 17;
			}
			break;
		case 17:
			if (func_374(0, 1, 0, 0))
			{
				if (func_239(Local_3653.f_138, 0))
				{
					if (!func_257(&(Local_3653.f_133)))
					{
						func_60(&(Local_3653.f_133));
					}
					if (func_25(32768))
					{
						iVar6 = 1000;
					}
					else
					{
						iVar6 = 30000;
					}
					iVar6 = (iVar6 / 1000);
					if (func_378(&(Local_3653.f_133), to_float(iVar6)) && !is_entity_on_screen(*iParam0))
					{
						func_260(&(Local_3653.f_133));
						func_824(iParam0);
						iLocal_2473 = 18;
					}
				}
			}
			break;
		case 18:
			if (func_239(Local_3653.f_138, 0) && !is_ped_using_any_scenario(*iParam0))
			{
				func_59(Local_3653.f_138, 1);
			}
			break;
	}
	return 0;
}

int func_395(int iParam0)
{
	func_740(func_825());
	func_826();
	switch (iVar2471)
	{
		case 0:
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			func_827(&Local_3653, 1);
			func_749(&uLocal_3804);
			Local_2509.f_12 = 13.5f;
			Local_2509.f_13 = 10f;
			if (!_does_volume_exist(&(iLocal_2305[1])))
			{
				iLocal_2305[1] = _create_volume_cylinder_with_custom_name(2179.364f, 878.3112f, 119.0544f, 0f, 0f, 28.30205f, 5.499839f, 6.271602f, 7.366519f, "EA CURR - volGoons");
				_0xb56d41a694e42e86(&(iLocal_2305[1]), 8192, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(&(iLocal_2305[1]), 8192, 0, 0, -1, -1, 0);
				if (_does_volume_exist(&(iLocal_2305[1])))
				{
					iLocal_2178 = 0;
					while (iVar2175 < iVar2647)
					{
						if (!is_entity_dead(&(iLocal_3981[iVar2175])))
						{
							_0xfc3db99c8144cd81(&(iLocal_3981[iVar2175]), &(iLocal_2305[1]), 0, 0, 0);
						}
						iLocal_2178 = iVar2175 + 1;
					}
				}
			}
			if (!func_43(64))
			{
				_request_scenario_type(func_828(), 15, func_228(Local_3653.f_138), func_829());
				_request_scenario_type(func_506(0, 0), 15, func_228(Local_3653.f_138), func_751(0, 0));
				_request_scenario_type(func_506(1, 0), 1, func_228(Local_3653.f_138), func_751(1, 0));
				func_47(64);
			}
			else
			{
				if (!_has_scenario_type_loaded(func_506(0, 0), false))
				{
					_request_scenario_type(func_506(0, 0), 15, func_228(Local_3653.f_138), func_751(0, 0));
					_request_scenario_type(func_506(1, 0), 1, func_228(Local_3653.f_138), func_751(1, 0));
				}
				if (!_has_scenario_type_loaded(func_828(), false))
				{
					_request_scenario_type(func_828(), 15, func_228(Local_3653.f_138), func_829());
				}
			}
			uLocal_2472 = _0x6f3068258a499e52(-1868746550, 2181.692f, 776.3154f, 106.1771f, 11);
			if (func_747(0f, 0f, 0f, -1020002304) && func_111(16777216))
			{
				clear_ped_tasks_immediately(*iParam0, false, true);
				func_133(67108864);
				if (func_413())
				{
					func_673(0, 1);
					func_112(0, 1, 1);
					func_752();
					func_47(32768);
					func_830();
					func_706(Local_2650.f_690[0]->f_8, func_476(0, 1), func_477(0), 1, 1073741824);
					func_709(&uLocal_2471, func_831(1, 0), func_832(1, 0), 0);
					func_237(iParam0, func_476(0, 0), 1, 1, 0, 0, 0, 0, 1);
					func_106(524288);
					iLocal_2305[7] = &iLocal_2305[0];
					iLocal_2474 = 20;
				}
				else if (func_25(1048576))
				{
					func_673(0, 1);
					func_112(0, 1, 1);
					func_47(32768);
					func_830();
					func_706(Local_2650.f_690[0]->f_8, func_476(1, 0), func_477(1), 1, 1073741824);
					func_709(&uLocal_2470, func_831(1, 1), func_832(1, 1), 0);
					func_710(iParam0, -1);
					func_464(Local_2370[1], "script@proc@eventareas@unionrailroad@stageTwoTent_Return", "PBL_goons_dead_already", 0);
					StringCopy(&(Local_2370[1]->f_1), "PBL_goons_dead_already", 24);
					iLocal_2474 = 23;
				}
				else if (func_750())
				{
					func_673(0, 1);
					func_112(0, 1, 1);
					if (func_11(Local_3653.f_136, 67108864))
					{
						func_47(4096);
						func_752();
						func_297(uLocal_4044[0]);
						func_106(524288);
						func_830();
						iLocal_2474 = 8;
					}
					else if (func_4(Local_3653.f_136, 4))
					{
						if (does_entity_exist(&(iLocal_3981[0])))
						{
							set_entity_proofs(&(iLocal_3981[0]), 2, false);
						}
						func_47(4096);
						func_752();
						func_47(32768);
						func_297(uLocal_4044[0]);
						func_106(524288);
						func_830();
						func_706(Local_2650.f_690[0]->f_8, func_476(1, 1), func_477(1), 1, 1073741824);
						func_709(&uLocal_2470, func_831(1, 1), func_832(1, 1), 0);
						_task_use_scenario_point(*iParam0, iVar2467, func_833(1, 0), -1, false, true, 0, false, -1f, false);
						iLocal_2474 = 7;
					}
					else
					{
						func_830();
						func_706(Local_2650.f_690[0]->f_8, func_476(0, 0), func_477(0), 1, 1073741824);
						func_709(&uLocal_2471, func_831(0, 0), func_832(0, 0), 0);
						func_60(vLocal_2327[1]);
						iLocal_2176 = 0;
						iLocal_2474 = 1;
					}
				}
			}
			break;
		case 1:
			if (!func_25(67108864))
			{
				func_709(&uLocal_2471, func_831(0, 0), func_832(0, 0), 0);
			}
			func_237(iParam0, func_476(0, 0), 1, 0, 0, 0, 0, 0, 0);
			if (!func_11(Local_3653.f_136, 4))
			{
				func_247(Local_3653.f_136, 4);
				func_15(&Local_3653, 128);
			}
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			if (func_43(33554432) || func_194(Global_35, &(iLocal_2305[0]), 1, 0))
			{
				func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			}
			if (func_374(-7.5f, 1, 0, 0) && !func_257(vLocal_2327[1]))
			{
				func_42(33554432);
				func_60(vLocal_2327[1]);
			}
			if (func_43(32768))
			{
				if ((iVar2173 < 3 && func_541(*iParam0, Global_35, 1, 20f, 0)) && func_253(vLocal_2327[1], 7.5f))
				{
					iLocal_2474 = 2;
				}
			}
			if (func_834())
			{
				func_711(1048576000, 1028443341, 0, 106);
				func_480(&Local_2509);
				func_611(*iParam0, uLocal_4044[0], -89429847, 580546400, 0, func_678(func_4(Local_3653.f_136, 524288)));
				if (func_25(8))
				{
					func_42(33554432);
					iLocal_2474 = 27;
				}
				else
				{
					func_752();
					func_42(33554432);
					func_5(Local_3653.f_136, 1024);
					func_15(&Local_3653, 128);
					func_587(30, 0, 1);
					func_766(&Local_2434);
					Local_2434.f_1 = Global_35;
					Local_2434.f_8 = { func_685(Local_2370[2], "plr", "PBL_proposition") };
					Local_2434.f_19 = func_687(Local_2370[2], "plr", "PBL_proposition");
					func_127(&(Local_2434.f_23), 25088);
					Local_2434.f_25 = &Local_2370[2];
					StringCopy(&(Local_2434.f_30), "plr", 24);
					StringCopy(&(Local_2434.f_26), "PBL_proposition", 32);
					func_86(Local_3653.f_136, 8388608);
					if (!func_4(Local_3653.f_136, 64) && (func_4(Local_3653.f_136, 32) || func_4(Local_3653.f_136, 16)))
					{
						func_835(&(Local_3653.f_35), "RCMP_F01ASA", 0);
					}
					else
					{
						func_835(&(Local_3653.f_35), "RCMP_F01AS", 0);
					}
					func_15(&Local_3653, 65536);
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_536(1);
					func_769(&Local_2434, 106);
					func_270(&Local_2145, 4);
					display_radar(false);
					iLocal_2474 = 3;
				}
			}
			break;
		case 2:
			func_717(iParam0, 0, Global_35, 1, 0, 0, 0, 1);
			if (func_374(0, 1, 0, 0) && func_836(iParam0))
			{
				func_47(33554432);
				func_372(&(Local_3653.f_35), func_837(iVar2173, !func_4(Local_3653.f_136, 256)), *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_2176 = iVar2173 + 1;
				iLocal_2474 = 1;
			}
			if (func_261(func_838(0), 1) < 3f)
			{
				iLocal_2474 = 1;
			}
			break;
		case 3:
			func_711(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (func_769(&Local_2434, 106) && _0x02ebbb3989b7e695(*iParam0))
			{
				_0x90703a8f75ee4abd(*iParam0, 1048576000);
				func_47(4096);
				set_player_control(get_player_index(), true, 0, false);
				func_66(&Local_3653, 65536);
				func_8(32);
				func_8(536870912);
				func_682(Local_2370[2], *iParam0, "foreman", 1);
				func_682(Local_2370[2], Global_35, "plr", 1);
				func_765(Local_2370[2], Local_2650.f_690[4]->f_8, "CIGARETTE");
				func_765(Local_2370[2], Local_2650.f_690[0]->f_8, "CHAIR");
				func_765(Local_2370[2], Local_2650.f_690[11]->f_8, "PEN");
				func_765(Local_2370[2], Local_2650.f_690[13]->f_8, "CUP");
				func_106(524288);
				func_754(Local_2370[2]);
				if (!func_4(Local_3653.f_136, 64) && (func_4(Local_3653.f_136, 32) || func_4(Local_3653.f_136, 16)))
				{
					func_372(&(Local_3653.f_35), "RCMP_F01ASA", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_372(&(Local_3653.f_35), "RCMP_F01AS", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_2176 = 0;
				func_260(vLocal_2327[1]);
				iLocal_2474 = 4;
			}
			break;
		case 4:
			func_711(1048576000, 1028443341, 0, 106);
			if (func_25(32))
			{
				func_816(2, "plr");
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			if (!func_111(1))
			{
				set_ped_max_move_blend_ratio(Global_35, 1f);
				if (!func_25(536870912))
				{
					display_radar(true);
				}
			}
			if (func_326(*iParam0, &(Local_2370[2]), "foreman", -1132719179, 0, 1, 0))
			{
				if (!func_368(*iParam0, 993674639))
				{
					_task_start_scenario_in_place(*iParam0, func_828(), -1, false, func_829(), -1f, false);
					func_344(16384);
					func_738(1, 1, 1097859072);
					func_112(0, 1, 1);
					func_756(0);
				}
				if (!func_111(1))
				{
					func_133(32);
					func_717(iParam0, 0, Global_35, 1, 0, 0, 0, 1);
					if (func_292(Local_3653.f_34))
					{
						func_84(&(Local_3653.f_34), 1, 1);
					}
					if (func_25(536870912))
					{
						func_133(536870912);
					}
					if (!func_257(vLocal_2327[1]) && func_374(0, 1, 0, 0))
					{
						func_60(vLocal_2327[1]);
					}
					if (iVar4434 == 0)
					{
						if (iVar4433 == 0)
						{
							func_372(&(Local_3653.f_35), "RCMP_P02A", Global_35, *iParam0, 0, 0, 1, 1);
							func_5(Local_3653.f_136, 4);
							func_738(0, 0, 1097859072);
							func_112(0, 1, 1);
							if (func_89(iVar2171))
							{
								func_791(iVar2171, 1, 1);
							}
							func_47(32768);
							func_464(Local_2370[3], "script@proc@eventareas@unionrailroad@stageTwoTent_Response", "PBL_proposition_accept", 0);
							iLocal_2474 = 6;
						}
						else if (iVar4433 == 1 || !func_194(Global_35, &(iLocal_2305[0]), 1, 0))
						{
							func_372(&(Local_3653.f_35), "RCMP_P02D", Global_35, *iParam0, 0, 0, 1, 1);
							func_247(Local_3653.f_136, 67108864);
							func_738(0, 0, 1097859072);
							func_112(0, 1, 1);
							if (func_89(iVar2171))
							{
								func_91(iVar2171, 1, 2);
							}
							func_464(Local_2370[3], "script@proc@eventareas@unionrailroad@stageTwoTent_Response", "PBL_proposition_decline", 0);
							iLocal_2474 = 6;
						}
					}
					if (func_541(*iParam0, Global_35, 1, 20f, 0) && func_253(vLocal_2327[1], 7.5f))
					{
						if (iVar2173 < 3)
						{
							iLocal_2474 = 5;
						}
						else
						{
							func_84(&(Local_3653.f_32), 1, 1);
							func_84(&(Local_3653.f_33), 1, 1);
							func_353(0, 0);
							func_464(Local_2370[3], "script@proc@eventareas@unionrailroad@stageTwoTent_Response", "PBL_proposition_decline", 0);
							iLocal_2474 = 6;
						}
					}
				}
			}
			break;
		case 5:
			func_711(1048576000, 1028443341, 0, 106);
			set_ped_max_move_blend_ratio(Global_35, 1f);
			func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			if (func_374(0, 1, 0, 0))
			{
				func_372(&(Local_3653.f_35), "RCMP_F01IMPS", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_2176 = iVar2173 + 1;
				iLocal_2474 = 4;
			}
			break;
		case 6:
			func_711(1048576000, 1028443341, 0, 106);
			set_ped_max_move_blend_ratio(Global_35, 1f);
			func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
			func_717(&Global_35, 0, *iParam0, 0, 0, 0, 0, 1);
			if (func_505(Local_2370[3]) && func_374(-3.5f, 1, 0, 0))
			{
				func_682(Local_2370[3], *iParam0, "foreman", 1);
				func_682(Local_2370[3], Global_35, "Arthur", 1);
				func_765(Local_2370[3], Local_2650.f_690[0]->f_8, "CHAIR");
				func_765(Local_2370[3], Local_2650.f_690[11]->f_8, "PEN");
				func_353(0, 0);
				func_196(1);
				_request_scenario_type(func_506(1, 0), 1, func_228(Local_3653.f_138), func_751(1, 0));
				func_754(Local_2370[3]);
				if (func_4(Local_3653.f_136, 4))
				{
					if (does_entity_exist(&(iLocal_3981[0])))
					{
						set_entity_proofs(&(iLocal_3981[0]), 2, false);
					}
					iLocal_2476 = 4;
					func_297(uLocal_4044[0]);
					iLocal_2474 = 7;
				}
				else
				{
					func_297(uLocal_4044[0]);
					iLocal_2474 = 8;
				}
			}
			break;
		case 7:
			if (!func_43(256))
			{
				if (func_374(0, 1, 0, 0))
				{
					func_112(0, 1, 0);
					func_673(0, 1);
					func_47(256);
				}
				func_717(iParam0, 0, Global_35, 1, 0, 0, 0, 1);
			}
			if (!func_43(256))
			{
				set_ped_max_move_blend_ratio(Global_35, 1f);
			}
			if (!does_blip_exist(&(uLocal_3985[3])))
			{
				func_717(&Global_35, 0, *iParam0, 0, 0, 0, 0, 1);
				if (func_374(0, 1, 0, 0))
				{
					func_297(uLocal_4044[0]);
					func_839(uLocal_3985[3], &(iLocal_2305[1]), 203020899);
					if (!func_840())
					{
						func_753(&(uLocal_3985[3]), 1);
					}
					func_713("TRACKS_OBJ01", func_840());
					func_15(&Local_3653, 128);
				}
			}
			func_757(0);
			iLocal_2467 = create_camera_with_params(26379945, func_841(), func_842(), func_843(), false, 2);
			iLocal_2474 = 9;
			break;
		case 8:
			if (is_any_speech_playing(*iParam0))
			{
				func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
				func_717(&Global_35, 0, *iParam0, 0, 0, 0, 0, 1);
			}
			else
			{
				func_47(256);
			}
			if (func_326(*iParam0, &(Local_2370[3]), "foreman", -1132719179, 0, 1, 0))
			{
				func_709(&uLocal_2470, func_788(Local_2370[3], "foreman", 0), func_789(Local_2370[3], "foreman", 0), 0);
				func_710(iParam0, -1);
				func_112(0, 1, 0);
				func_673(0, 1);
				func_47(256);
				func_844(0);
				_request_scenario_type(func_506(1, 0), 262148, -532378284, func_751(1, 0));
				func_263(512);
				func_196(1);
				iLocal_2474 = 26;
			}
			break;
		case 9:
			if (!func_262(4194304) && func_326(*iParam0, &(Local_2370[3]), "foreman", -1132719179, 0, 1, 0))
			{
				func_42(256);
				func_709(&uLocal_2470, func_788(Local_2370[3], "foreman", 0), func_789(Local_2370[3], "foreman", 0), 0);
				func_710(iParam0, -1);
				func_263(4194304);
			}
			if ((!func_25(64) && !func_25(134217728)) && func_284(&iLocal_3981, &uLocal_2114, &uLocal_2142, &uLocal_2143, 0, (iVar2647 - 1), 1))
			{
				func_845(&uLocal_263, 0);
				set_player_control(get_player_index(), true, 0, false);
				func_66(&Local_3653, 65536);
				iLocal_2476 = 7;
				func_846(iParam0, 1);
				iLocal_2474 = 12;
			}
			else
			{
				func_847();
				if (!is_cam_active(iVar2464) && func_848())
				{
					set_cam_active(iVar2464, true);
					render_script_cams(true, false, 3000, true, false, 0);
				}
				if (func_849())
				{
					func_852(&Local_21, func_851(func_850(&Local_21)));
					func_711(1048576000, 1028443341, 0, 106);
					func_772(&Local_21, 156574);
					func_855(&Local_21, 156702);
					func_8(64);
					func_270(&Local_2145, 4);
					func_536(1);
					func_8(134217728);
				}
				if (!func_25(64) && func_856(&uLocal_263))
				{
					func_711(1048576000, 1028443341, 0, 106);
					func_772(&Local_21, 156574);
					func_855(&Local_21, 156702);
					func_8(64);
					func_270(&Local_2145, 4);
					func_536(1);
				}
				if (func_757(1))
				{
					iLocal_2474 = 10;
				}
				Jump @10648; //curOff = 4375
				if (!func_262(4194304) && func_326(*iParam0, &(Local_2370[3]), "foreman", -1132719179, 0, 1, 0))
				{
					func_42(256);
					func_709(&uLocal_2470, func_788(Local_2370[3], "foreman", 0), func_789(Local_2370[3], "foreman", 0), 0);
					func_710(iParam0, -1);
					func_263(4194304);
				}
				if ((!func_25(64) && !func_25(134217728)) && func_284(&iLocal_3981, &uLocal_2114, &uLocal_2142, &uLocal_2143, 0, (iVar2647 - 1), 1))
				{
					func_845(&uLocal_263, 0);
					set_player_control(get_player_index(), true, 0, false);
					func_66(&Local_3653, 65536);
					iLocal_2476 = 7;
					func_846(iParam0, 1);
					iLocal_2474 = 12;
				}
				else
				{
					func_847();
					if (!is_cam_active(iVar2464) && func_848())
					{
						set_cam_active(iVar2464, true);
						render_script_cams(true, false, 3000, true, false, 0);
					}
					if (func_849())
					{
						func_852(&Local_21, func_851(func_850(&Local_21)));
						func_711(1048576000, 1028443341, 0, 106);
						func_772(&Local_21, 156574);
						func_855(&Local_21, 156702);
						func_8(64);
						func_270(&Local_2145, 4);
						func_536(1);
						func_8(134217728);
					}
					if (!func_25(64) && func_856(&uLocal_263))
					{
						func_711(1048576000, 1028443341, 0, 106);
						func_772(&Local_21, 156574);
						func_855(&Local_21, 156702);
						func_8(64);
						func_270(&Local_2145, 4);
						func_536(1);
					}
					if (!func_857(_0xf70f00013a62f866(Local_21.f_4), _0xf70f00013a62f866(&(iLocal_2305[1]))))
					{
						func_775(&Local_21, 2186.605f, 855.1331f, 110.967f, -173.29f, 0);
						func_776(&(Local_21.f_213), 32);
						func_774(&(Local_21.f_4), iLocal_2305[1]);
					}
					if (func_858())
					{
						if (func_25(134217728) || func_860(&uLocal_263, func_859(), 0, 0))
						{
							func_47(524288);
							func_47(1048576);
							func_47(262144);
							if ((func_366(Global_35) || is_ped_ragdoll(Global_35)) && !func_861())
							{
								clear_ped_tasks_immediately(Global_35, true, true);
								iVar0 = _get_last_mount(Global_35);
								if (!is_entity_dead(iVar0))
								{
									func_706(iVar0, 2184.642f, 869.6215f, 111.9345f, -178.02f, 2, 1073741824);
								}
							}
							func_711(1048576000, 1028443341, 1, 106);
							func_773(&Local_21, &uLocal_263);
							_disable_first_person_cam_this_frame_2();
							if (func_778(func_859(), &Local_21))
							{
								func_713("TRACKS_OBJ02", func_840());
								func_196(1);
								if (!is_entity_dead(&(iLocal_3981[0])))
								{
									_0x8b3b71c80a29a4bb(&(iLocal_3981[0]), -988409641, 6);
								}
								if (!is_entity_dead(&(iLocal_3981[1])))
								{
									task_look_at_entity(&(iLocal_3981[1]), Global_35, -1, 0, 51, 1);
									force_ped_motion_state(&(iLocal_3981[1]), -633298724, false, 1, false);
									func_862(&(iLocal_3981[1]), Global_35, 0);
									_0x8b3b71c80a29a4bb(&(iLocal_3981[1]), 137506481, 6);
								}
								if (!is_entity_dead(&(iLocal_3981[2])))
								{
									task_look_at_entity(&(iLocal_3981[2]), Global_35, -1, 0, 51, 1);
									force_ped_motion_state(&(iLocal_3981[2]), -633298724, false, 1, false);
									_0x8b3b71c80a29a4bb(&(iLocal_3981[2]), 137506481, 6);
								}
								iLocal_2474 = 11;
							}
						}
					}
					Jump @10648; //curOff = 5272
					if (func_863(func_250()))
					{
						func_864();
						func_611(*iParam0, uLocal_4044[0], -89429847, 580546400, 0, func_678(func_4(Local_3653.f_136, 524288)));
						func_709(&uLocal_2471, func_831(1, 1), func_832(1, 1), 0);
						func_706(Local_2650.f_690[0]->f_8, func_476(1, 0), func_477(1), 1, 1073741824);
						clear_ped_tasks_immediately(*iParam0, false, true);
						func_710(iParam0, 0);
						func_8(128);
						if (!_0x0d0ae5081f88cfe1(Local_2650.f_15[0]->f_1))
						{
							_0x49f3241c28ebbfbc(0);
							Var1 = -1580473214;
							Var1.f_1 = 1f;
							Var1.f_3 = 4;
							Var1.f_4 = 1;
							Var1.f_5 = 1;
							_0x183672fe838a661b(&Var1);
							_0x38c0c9cae1544500(Local_2650.f_15[0]->f_1);
						}
						func_5(Local_3653.f_136, 128);
						func_5(Local_3653.f_136, 1073741824);
						func_15(&Local_3653, 128);
						iLocal_2474 = 16;
					}
					Jump @10648; //curOff = 5514
					_disable_first_person_cam_this_frame_2();
					func_713("TRACKS_OBJ02", func_840());
					func_835(&(Local_3653.f_35), "RCMP_IG8", 0);
					func_196(1);
					iLocal_2474 = 11;
					Jump @10648; //curOff = 5558
					if (!is_entity_dead(&(iLocal_3981[0])))
					{
						_0x8b3b71c80a29a4bb(&(iLocal_3981[0]), -988409641, 6);
					}
					if (!is_entity_dead(&(iLocal_3981[1])))
					{
						_0x8b3b71c80a29a4bb(&(iLocal_3981[1]), 137506481, 6);
					}
					if (!is_entity_dead(&(iLocal_3981[2])))
					{
						_0x8b3b71c80a29a4bb(&(iLocal_3981[2]), 137506481, 6);
					}
					if (func_865("TRACKS_OBJ02", 1))
					{
						func_866("TRACKS_OBJ02", 1);
					}
					func_8(4194304);
					func_83();
					if (is_entity_dead(Global_35))
					{
						iLocal_2474 = 14;
						return 0;
					}
					func_5(Local_3653.f_136, 128);
					func_5(Local_3653.f_136, 1073741824);
					func_15(&Local_3653, 128);
					if (is_entity_dead(&(iLocal_3981[0])))
					{
						func_328(Local_2370[0], &(iLocal_3981[0]), "goon_A");
					}
					if (is_entity_dead(&(iLocal_3981[1])))
					{
						func_328(Local_2370[0], &(iLocal_3981[1]), "goon_B");
					}
					if (does_cam_exist(iVar2464))
					{
						destroy_cam(iVar2464, false);
					}
					if (!is_entity_dead(&(iLocal_3981[0])))
					{
						set_ped_using_action_mode(&(iLocal_3981[0]), false, -1, 0);
						task_look_at_entity(&(iLocal_3981[0]), Global_35, 10000, 0, 51, 1);
					}
					if (!is_entity_dead(&(iLocal_3981[1])))
					{
						set_ped_using_action_mode(&(iLocal_3981[1]), false, -1, 0);
						task_look_at_entity(&(iLocal_3981[1]), Global_35, 12000, 0, 51, 1);
					}
					if (!is_entity_dead(&(iLocal_3981[2])))
					{
						set_ped_using_action_mode(&(iLocal_3981[2]), false, -1, 0);
						task_look_at_entity(&(iLocal_3981[2]), Global_35, 9000, 0, 51, 1);
					}
					if (!func_25(65536))
					{
						func_297(uLocal_3985[3]);
						func_754(Local_2370[0]);
						task_play_anim(&(iLocal_3981[2]), "SCRIPT_PROC@EVENT_AREA@UNION_RAILROAD@STAGE_02", "goons_flee_goon_c", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
						func_717(iLocal_3981[1], 0, Global_35, 0, 0, 0, 0, 1);
						func_717(iLocal_3981[2], 0, Global_35, 0, 0, 0, 0, 1);
					}
					if (!func_375("RCMP_IG8"))
					{
						func_372(&Local_4444, "RCMP_IG8", &(iLocal_3981[1]), &(iLocal_3981[2]), 0, 0, 1, 1);
					}
					iLocal_2474 = 15;
					if (!func_25(65536))
					{
						if (!is_entity_dead(&(iLocal_3981[0])))
						{
							clear_ped_tasks_immediately(&(iLocal_3981[0]), false, true);
							_0x89f5e7adecccb49c(&(iLocal_3981[0]), "injured_right_arm");
							func_297(uLocal_3985[3]);
							func_754(Local_2370[0]);
							task_play_anim(&(iLocal_3981[2]), "SCRIPT_PROC@EVENT_AREA@UNION_RAILROAD@STAGE_02", "goons_flee_goon_c", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
							func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
							func_717(iLocal_3981[1], 0, Global_35, 0, 0, 0, 0, 1);
							func_717(iLocal_3981[2], 0, Global_35, 0, 0, 0, 0, 1);
							func_372(&Local_4444, "RCMP_IG8", &(iLocal_3981[1]), &(iLocal_3981[2]), 0, 0, 1, 1);
							func_8(65536);
						}
					}
					Jump @10648; //curOff = 6325
					Jump @10648; //curOff = 6328
					if (!is_entity_dead(&(iLocal_3981[1])) && has_anim_event_fired(&(iLocal_3981[1]), -753365664))
					{
						func_8(131072);
					}
					if (!is_entity_dead(&(iLocal_3981[1])) && has_anim_event_fired(&(iLocal_3981[1]), 110472604))
					{
						func_8(262144);
					}
					if (!_0x083d497d57b7400f(Local_2650.f_690[12]->f_8))
					{
						vVar7 = { get_entity_velocity(Local_2650.f_690[12]->f_8, -1) };
						if (!_0x3ab6c7b0bb0df4b1(Local_2650.f_690[12]->f_8, &(Local_2370[0])) && vVar7.z == 0f)
						{
							freeze_entity_position(Local_2650.f_690[12]->f_8, true);
						}
					}
					if (is_entity_dead(&(iLocal_3981[1])) || (func_867(Local_2370[0], "goon_B") && !func_25(524288)))
					{
						if (!func_25(131072))
						{
							if (!_0x0d0ae5081f88cfe1(Local_2650.f_15[0]->f_1))
							{
								_0x49f3241c28ebbfbc(0);
								Var10 = -1580473214;
								Var10.f_1 = 1f;
								Var10.f_3 = 4;
								Var10.f_4 = 1;
								Var10.f_5 = 1;
								_0x183672fe838a661b(&Var10);
								_0x38c0c9cae1544500(Local_2650.f_15[0]->f_1);
							}
						}
						else if (!func_25(262144))
						{
							func_328(Local_2370[0], Local_2650.f_690[12]->f_8, "deed");
							activate_physics(Local_2650.f_690[12]->f_8);
						}
						func_8(524288);
					}
					if (!func_25(524288))
					{
						func_717(iLocal_3981[0], 0, Global_35, 0, 0, 0, 0, 1);
						func_717(iLocal_3981[1], 0, Global_35, 0, 0, 0, 0, 1);
						func_717(iLocal_3981[2], 0, Global_35, 0, 0, 0, 0, 1);
					}
					if (!is_entity_dead(&(iLocal_3981[0])))
					{
						if (!func_368(&(iLocal_3981[0]), 518218985) && ((func_867(Local_2370[0], "goon_A") || func_868(Local_2370[0])) || has_anim_event_fired(&(iLocal_3981[0]), 811542464)))
						{
							clear_entity_last_damage_entity(&(iLocal_3981[0]));
							_task_smart_flee_style_coord(&(iLocal_3981[0]), Local_2650.f_4, 4, 28928, 1000f, -1, 0);
						}
					}
					if (!is_entity_dead(&(iLocal_3981[1])))
					{
						if (!func_368(&(iLocal_3981[1]), 518218985) && ((func_867(Local_2370[0], "goon_B") || func_868(Local_2370[0])) || has_anim_event_fired(&(iLocal_3981[1]), 811542464)))
						{
							_task_smart_flee_style_coord(&(iLocal_3981[1]), Local_2650.f_4, 4, 28928, 1000f, -1, 0);
						}
					}
					if (!is_entity_dead(&(iLocal_3981[2])))
					{
						if (!func_368(&(iLocal_3981[2]), 518218985) && (func_868(Local_2370[0]) || has_anim_event_fired(&(iLocal_3981[2]), 811542464)))
						{
							force_ped_motion_state(&(iLocal_3981[2]), -530524, false, 1, false);
							_task_smart_flee_style_coord(&(iLocal_3981[2]), Local_2650.f_4, 4, 28928, 1000f, -1, 0);
						}
					}
					if (func_868(Local_2370[0]))
					{
						if ((!is_entity_dead(&(iLocal_3981[0])) || !is_entity_dead(&(iLocal_3981[1]))) || !is_entity_dead(&(iLocal_3981[2])))
						{
							if (func_25(65536))
							{
								func_372(&(Local_3653.f_35), "RCMP_IG8_DISARM", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
							}
							else
							{
								func_372(&(Local_3653.f_35), "RCMP_IG8_KILLED", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
							}
						}
						iLocal_2474 = 16;
					}
					Jump @10648; //curOff = 7267
					if (!_0x083d497d57b7400f(Local_2650.f_690[12]->f_8))
					{
						vVar16 = { get_entity_velocity(Local_2650.f_690[12]->f_8, -1) };
						if (!_0x3ab6c7b0bb0df4b1(Local_2650.f_690[12]->f_8, &(Local_2370[0])) && vVar16.z == 0f)
						{
							freeze_entity_position(Local_2650.f_690[12]->f_8, true);
						}
					}
					if (func_374(-3.5f, 1, 0, 0))
					{
						if (!func_413())
						{
							if (func_25(131072))
							{
								func_713("TRACKS_OBJ03", func_840());
							}
							else
							{
								func_713("TRACKS_OBJ12", func_840());
							}
							func_297(uLocal_3985[3]);
							if (func_25(131072))
							{
								func_611(Local_2650.f_690[12]->f_8, uLocal_3985[3], 408396114, 580546400, 0, "TRACKS_BLIP_DEED");
							}
							else
							{
								func_869(func_250(), 20f, uLocal_3985[3], -1282792512);
							}
							if (!func_840())
							{
								func_753(&(uLocal_3985[3]), 1);
							}
						}
						_0x78b4567e18b54480(Local_2650.f_690[12]->f_8);
						_0xa48e4801debdf7e4(Local_2650.f_690[12]->f_8, 1);
						freeze_entity_position(Local_2650.f_690[12]->f_8, true);
						iLocal_2474 = 17;
					}
					func_864();
					Jump @10648; //curOff = 7590
					func_864();
					if (func_413())
					{
						func_297(uLocal_3985[3]);
						if (_0x0d0ae5081f88cfe1(Local_2650.f_15[0]->f_1))
						{
							_0x154340e87d8cc178(Local_2650.f_15[0]->f_1);
						}
						if (does_entity_exist(&(iLocal_3981[0])))
						{
							set_entity_proofs(&(iLocal_3981[0]), 0, false);
						}
						iLocal_2305[7] = &iLocal_2305[0];
						Local_2650.f_690[12]->f_8 = create_object(Local_2650.f_690[12]->f_7, *Local_2650.f_690[12], true, true, false, false, true);
						set_entity_visible(Local_2650.f_690[12]->f_8, false);
						_0xa48e4801debdf7e4(Local_2650.f_690[12]->f_8, 0);
						func_247(Local_3653.f_136, 8388608);
						iLocal_2474 = 18;
					}
					Jump @10648; //curOff = 7779
					func_864();
					if (func_374(-3.5f, 1, 0, 0))
					{
						clear_ped_tasks_immediately(*iParam0, false, true);
						func_133(67108864);
						func_706(Local_2650.f_690[0]->f_8, func_476(0, 1), func_477(0), 1, 1073741824);
						func_709(&uLocal_2471, func_831(1, 0), func_832(1, 0), 0);
						func_237(iParam0, func_476(0, 0), 1, 1, 0, 0, 0, 0, 0);
						func_15(&Local_3653, 128);
						func_713("TRACKS_OBJ04", func_840());
						func_297(uLocal_3985[3]);
						func_611(*iParam0, uLocal_3985[3], -89429847, -981020806, 0, func_678(func_4(Local_3653.f_136, 524288)));
						if (!func_840())
						{
							func_753(&(uLocal_3985[3]), 1);
						}
						iLocal_2474 = 20;
					}
					Jump @10648; //curOff = 7987
					if (!func_335(&(iLocal_3981[0]), 0, 1))
					{
						func_713("TRACKS_OBJ04", func_840());
						func_51(Local_3653.f_138, 1, 1);
						func_611(*iParam0, uLocal_3985[3], -89429847, -981020806, 0, func_678(func_4(Local_3653.f_136, 524288)));
						if (!func_840())
						{
							func_753(&(uLocal_3985[3]), 1);
						}
						iLocal_2474 = 20;
					}
					Jump @10648; //curOff = 8096
					if (!func_25(67108864))
					{
						func_709(&uLocal_2471, func_831(1, 0), func_832(1, 0), 0);
					}
					func_237(iParam0, func_476(0, 0), 1, 1, 0, 0, 0, 0, 0);
					func_864();
					if (!func_239(Local_3653.f_138, 0))
					{
						func_51(Local_3653.f_138, 1, 1);
					}
					if (get_blip_from_entity(*iParam0) == 0)
					{
						func_611(*iParam0, uLocal_3985[3], -89429847, -981020806, 0, func_678(func_4(Local_3653.f_136, 524288)));
						if (!func_840())
						{
							func_753(&(uLocal_3985[3]), 1);
						}
					}
					if (func_541(*iParam0, Global_35, 0, 15f, 0))
					{
						func_711(1048576000, 1028443341, 0, 106);
						func_57(&Local_4444, *iParam0, "EA_Rcamp_Foreman", 0);
						Local_2509.f_33 = { Local_4444 };
						func_464(Local_2370[1], "script@proc@eventareas@unionrailroad@stageTwoTent_Return", "PBL_proposition_reward", 0);
						StringCopy(&(Local_2370[1]->f_1), "PBL_proposition_reward", 24);
						if (func_413())
						{
							iLocal_2305[7] = &iLocal_2305[0];
							func_738(1, 1, 1097859072);
							func_112(0, 1, 1);
							func_870(0);
							func_372(&Local_4444, "RCMP_F01S", *iParam0, Global_35, 0, 0, 1, 1);
							iLocal_2176 = 0;
							func_60(vLocal_2327[1]);
							iLocal_2474 = 21;
						}
					}
					Jump @10648; //curOff = 8435
					if (!func_25(67108864))
					{
						func_709(&uLocal_2471, func_831(1, 0), func_832(1, 0), 0);
					}
					func_237(iParam0, func_476(0, 0), 1, 1, 0, 0, 0, 0, 0);
					func_864();
					if (!func_239(Local_3653.f_138, 0))
					{
						func_51(Local_3653.f_138, 1, 1);
					}
					if (func_194(Global_35, &(iLocal_2305[0]), 1, 0))
					{
						func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
					}
					if ((func_374(0, 1, 0, 0) && !func_257(vLocal_2327[1])) && iVar2173 < 4)
					{
						func_60(vLocal_2327[1]);
					}
					if (iVar4434 == 0 && iVar4433 == 2)
					{
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
						func_193(&(iLocal_2305[7]));
						func_738(0, 0, 1097859072);
						func_112(0, 0, 1);
						iLocal_2474 = 23;
					}
					if (func_541(*iParam0, Global_35, 1, 20f, 0))
					{
						func_711(1048576000, 1028443341, 0, 106);
						if (func_253(vLocal_2327[1], 7.5f))
						{
							if (iVar2173 < 4)
							{
								iLocal_2474 = 22;
							}
						}
					}
					Jump @10648; //curOff = 8730
					func_711(1048576000, 1028443341, 0, 106);
					if (!func_25(67108864))
					{
						func_709(&uLocal_2471, func_831(1, 0), func_832(1, 0), 0);
					}
					func_237(iParam0, func_476(0, 0), 1, 1, 0, 0, 0, 0, 0);
					func_864();
					func_717(iParam0, 0, Global_35, 0, 0, 0, 0, 1);
					if (func_374(0, 1, 0, 0))
					{
						if (iVar2173 < 3)
						{
							cVar19 = "RCMP_F04IMPSA";
						}
						else
						{
							cVar19 = "RCMP_F02S";
						}
						func_372(&(Local_3653.f_35), cVar19, *iParam0, Global_35, 0, 0, 1, 1);
						iLocal_2176 = iVar2173 + 1;
						iLocal_2474 = 21;
					}
					Jump @10648; //curOff = 8890
					if ((iVar4434 == 0 && iVar4433 == 2) || func_194(Global_35, &(iLocal_2305[0]), 1, 0))
					{
						func_711(1048576000, 1028443341, 0, 106);
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					}
					if (func_505(Local_2370[1]))
					{
						if (func_759((*Local_4227[0])[2], 0, 0))
						{
							if (!func_43(32768))
							{
								func_112(0, 1, 0);
							}
						}
						else if (func_43(32768) && func_413())
						{
							func_870(0);
						}
						if ((iVar4434 == 0 && iVar4433 == 2) || func_194(Global_35, &(iLocal_2305[0]), 1, 0))
						{
							func_536(1);
							func_766(&Local_2434);
							Local_2434.f_1 = Global_35;
							Local_2434.f_8 = { func_685(Local_2370[1], "plr", &(Local_2370[1]->f_1)) };
							Local_2434.f_17 = 0.2f;
							Local_2434.f_18 = 0.25f;
							Local_2434.f_19 = func_687(Local_2370[1], "plr", &(Local_2370[1]->f_1));
							Local_2434.f_25 = &Local_2370[1];
							StringCopy(&(Local_2434.f_30), "plr", 24);
							MemCopy(&(Local_2434.f_26), {Local_2370[1]->f_1}, 4);
							func_127(&(Local_2434.f_23), 25088);
							if (func_413())
							{
								func_127(&(Local_2434.f_23), 1024);
							}
							func_15(&Local_3653, 65536);
							func_769(&Local_2434, 106);
							func_270(&Local_2145, 4);
							display_radar(false);
							display_hud(true);
							iLocal_2474 = 24;
						}
					}
					Jump @10648; //curOff = 9289
					func_711(1048576000, 1028443341, 0, 106);
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					if (!func_239(Local_3653.f_138, 0))
					{
						func_51(Local_3653.f_138, 1, 1);
					}
					if (func_769(&Local_2434, 106))
					{
						func_738(0, 0, 1097859072);
						func_112(0, 0, 1);
						func_8(32);
						func_682(Local_2370[1], *iParam0, "foreman", 1);
						func_682(Local_2370[1], Global_35, "plr", 1);
						func_765(Local_2370[1], Local_2650.f_690[4]->f_8, "CIGARETTE");
						func_765(Local_2370[1], Local_2650.f_690[0]->f_8, "CHAIR");
						func_765(Local_2370[1], Local_2650.f_690[11]->f_8, "PEN");
						func_765(Local_2370[1], Local_2650.f_690[9]->f_8, "MONEY");
						func_765(Local_2370[1], Local_2650.f_690[12]->f_8, "deed");
						func_765(Local_2370[1], _0x4735e2a4bb83d9da(uVar2469), "DESK");
						set_entity_visible(Local_2650.f_690[12]->f_8, true);
						set_entity_coords(Local_2650.f_690[12]->f_8, 2181.2f, 779.1f, 105.5f, true, false, true, true);
						func_754(Local_2370[1]);
						func_83();
						set_player_control(get_player_index(), true, 0, false);
						func_66(&Local_3653, 65536);
						if (!func_4(Local_3653.f_136, 4))
						{
							if (!func_11(Local_3653.f_136, 67108864))
							{
								func_372(&(Local_3653.f_35), "RCMP_IG7_P1", *iParam0, Global_35, 0, 0, 1, 1);
							}
							else
							{
								func_372(&(Local_3653.f_35), "RCMP_THX_02", *iParam0, Global_35, 0, 0, 1, 1);
							}
						}
						else if (func_25(1048576) && !func_413())
						{
							func_372(&(Local_3653.f_35), "RCMP_THX_03", *iParam0, Global_35, 0, 0, 1, 1);
						}
						iLocal_2474 = 25;
					}
					Jump @10648; //curOff = 9792
					func_711(1048576000, 1028443341, 0, 106);
					if (func_25(32))
					{
						func_816(1, "plr");
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					}
					if (func_111(1))
					{
						return 0;
					}
					if (!is_entity_dead(Global_35))
					{
						if (!func_111(2))
						{
							if (has_anim_event_fired(Global_35, -1898385492))
							{
								if (does_entity_exist(Local_2650.f_690[9]->f_8))
								{
									delete_object(&(Local_2650.f_690[9]->f_8));
									func_871(668131102, 0, 1065353216, 1, 0, 0, 0, -1);
									func_247(Local_3653.f_136, 262144);
									func_106(2);
								}
							}
						}
						if (!func_111(4))
						{
							if (has_anim_event_fired(Global_35, 416017708))
							{
								func_872(-1580473214, 1, 0, -1387038764, 0);
								func_106(4);
							}
						}
						if (!func_25(2097152) && func_326(Global_35, &(Local_2370[1]), "plr", 1842457532, 0, 1, 0))
						{
							func_86(Local_3653.f_136, 8388608);
							func_247(Local_3653.f_136, 8);
							func_247(Local_3653.f_136, 16384);
							func_5(Local_3653.f_136, 1073741824);
							func_5(Local_3653.f_136, 128);
							func_5(Local_3653.f_136, 1024);
							func_106(524288);
							func_112(0, 1, 0);
							func_673(0, 1);
							func_297(uLocal_4044[0]);
							func_297(uLocal_3985[3]);
							func_83();
							func_296(&Local_3653);
							func_15(&Local_3653, 128);
							func_133(32);
							if (func_292(Local_3653.f_34))
							{
								func_84(&(Local_3653.f_34), 1, 1);
							}
							func_328(Local_2370[1], Global_35, "plr");
							if (func_89(iVar2171))
							{
								func_873(iVar2171, 1, 1, 0, 1);
							}
							display_radar(true);
							func_8(2097152);
						}
					}
					if (func_326(*iParam0, &(Local_2370[1]), "foreman", -1132719179, 0, 1, 0))
					{
						if (func_4(Local_3653.f_136, 4) && !func_25(1048576))
						{
							if (!func_262(16384))
							{
								func_507(iParam0, func_476(0, 0), &uLocal_2471, 1, 0, 0, 0, 0, 0);
							}
							func_133(32);
							func_297(uLocal_4044[0]);
							func_297(uLocal_3985[3]);
							if (func_292(Local_3653.f_34))
							{
								func_84(&(Local_3653.f_34), 1, 1);
							}
						}
						display_radar(true);
						func_844(0);
						_request_scenario_type(func_506(1, 0), 262148, -532378284, func_751(1, 0));
						func_263(512);
						func_196(1);
						func_344(16384);
						iLocal_2474 = 26;
					}
					Jump @10648; //curOff = 10472
					if (func_239(Local_3653.f_138, 0))
					{
						if (!func_257(&(Local_3653.f_133)))
						{
							func_60(&(Local_3653.f_133));
						}
						iVar20 = func_318((!func_4(Local_3653.f_136, 4) || func_25(1048576)), 5000, 30000);
						iVar20 = (iVar20 / 1000);
						if (func_378(&(Local_3653.f_133), to_float(iVar20)) && !is_entity_on_screen(*iParam0))
						{
							func_260(&(Local_3653.f_133));
							func_824(iParam0);
							iLocal_2474 = 27;
						}
					}
					Jump @10648; //curOff = 10606
					if (func_239(Local_3653.f_138, 0) && !is_ped_using_any_scenario(*iParam0))
					{
						func_59(Local_3653.f_138, 1);
					}
				}
			}
			return 0;
			default:
				break;
	}
}

int func_396(int iParam0)
{
	func_731(iParam0, 0);
	return 0;
}

bool func_397(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (!func_194(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_123(Global_1898092->f_26.f_2) && func_4(Global_1898092->f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

bool func_398()
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

int func_399(int iParam0)
{
	if (!func_89(iParam0))
	{
		return -1;
	}
	return func_874(func_428(iParam0));
}

bool func_400(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_401(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_402(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_403(int iParam0)
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

int func_404(int iParam0)
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

int func_405(int iParam0, int iParam1)
{
	if (!func_134(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_875(iParam0, 1399091007))
	{
		func_876(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_406(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_411(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_407(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_408(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_409(int iParam0)
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

int func_410(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_877(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_879(&Var0, func_878(0));
	}
	if (!func_880(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_409(iVar14);
	return uVar15;
}

int func_411(bool bParam0)
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

void func_412(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (!func_123(iParam0))
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

bool func_413()
{
	return func_12(-1580473214, 1, 0);
}

bool func_414(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_415(int iParam0)
{
	if (!func_414(iParam0))
	{
		return false;
	}
	return func_125(iParam0, 33554432);
}

bool func_416(int iParam0)
{
	if (!func_414(iParam0))
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

bool func_417(int iParam0)
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

void func_418(int iParam0)
{
	if (!func_147(iParam0))
	{
		return;
	}
	Global_24887[iParam0]->f_1 = func_531();
	if (_0x800df3fc913355f3(func_167(iParam0)))
	{
		_0x0b3a99ab6713aa52(func_167(iParam0));
	}
}

bool func_419(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_420(int iParam0)
{
	if (!func_147(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_421(int iParam0, bool bParam1)
{
	if (!func_419(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_435(iParam0, 1024))
		{
			func_436(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_435(iParam0, 1024))
	{
		func_881(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_882(iParam0);
}

int func_422(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_423(int iParam0)
{
	if (func_883(iParam0) && func_884())
	{
		remove_door_from_system(iParam0);
	}
}

void func_424(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_425(int iParam0, bool bParam1)
{
	if (!func_437(iParam0))
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

int func_426()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_428(int iParam0)
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

int func_429(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_885(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_426())
	{
		return -1;
	}
	iVar0 = func_427(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_596(iVar1, 0);
	func_886(iVar1, 0);
	func_887(iVar1, 0);
	func_888(iVar1, 0);
	func_889(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_890(iVar1, iParam4);
	}
	return iVar1;
}

bool func_430(int iParam0, int iParam1)
{
	return func_359(Global_1914319->f_3[iParam0]->f_6, iParam1);
}

int func_431(int iParam0, int iParam1, int iParam2)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_223(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_167(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

bool func_432(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_90((*Global_1835011)[iParam0]->f_1);
}

bool func_433(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_595((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_434(int iParam0)
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

bool func_435(int iParam0, int iParam1)
{
	if (!func_419(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_436(int iParam0, int iParam1)
{
	if (!func_419(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

bool func_437(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_438(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_891(iParam0))
	{
		return;
	}
	iVar0 = func_892(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_893(iVar0);
	func_894(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_895(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_896(iVar0))
		{
			return;
		}
	}
	func_897(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_439(int iParam0)
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

void func_440(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

bool func_441(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_442()
{
	_0x88544c0e3291dcae(1);
	func_898();
}

bool func_443(int iParam0)
{
	if (((func_444(iParam0, 1) && func_444(iParam0, 2)) && func_444(iParam0, 8)) && func_444(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_445(int iParam0)
{
	func_333(iParam0, 0);
	func_453(iParam0, 0);
	func_450(iParam0, 1);
	func_455(iParam0, 1);
	func_451(iParam0, 0);
	func_459(iParam0, 1);
	func_899(iParam0, 1, 1, 1);
}

void func_446(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_900(iParam0, fParam1);
	}
}

void func_447(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 4);
	}
	else
	{
		func_127(&(iParam0->f_1), 4);
	}
}

void func_448(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 2);
	}
	else
	{
		func_127(&(iParam0->f_1), 2);
	}
}

void func_449(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 1);
	}
	else
	{
		func_127(&(iParam0->f_1), 1);
	}
}

void func_450(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 256);
	}
	else
	{
		func_127(&(iParam0->f_1), 256);
	}
}

void func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 128);
	}
	else
	{
		func_127(&(iParam0->f_1), 128);
	}
}

void func_452(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 1024);
	}
	else
	{
		func_127(&(iParam0->f_1), 1024);
	}
}

void func_453(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 2048);
	}
	else
	{
		func_127(&(iParam0->f_1), 2048);
	}
}

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(iParam0->f_1), 8);
	}
	else
	{
		func_127(&(iParam0->f_1), 8);
	}
}

void func_455(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 16);
	}
	else
	{
		func_230(iParam0, 67108864);
		func_230(iParam0, 16);
	}
}

void func_456(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 8);
	}
	else
	{
		func_230(iParam0, 8);
	}
}

void func_457(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 1024);
	}
	else
	{
		func_230(iParam0, 1024);
	}
}

void func_458(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 128);
	}
	else
	{
		func_230(iParam0, 128);
	}
}

void func_459(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 256);
	}
	else
	{
		func_230(iParam0, 256);
	}
}

void func_460(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 2);
	}
	else
	{
		func_230(iParam0, 2);
	}
}

void func_461(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 131072);
	}
	else
	{
		func_230(iParam0, 131072);
	}
}

void func_462(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

char* func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_14 == 1)
			{
				return "PBL_idle";
			}
			else if (iLocal_14 == 2)
			{
				return "PBL_goons_flee";
			}
			else if (iLocal_14 == 3)
			{
				return "PBL_MAIN";
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				return "PBL_return_no_luck";
			}
			break;
		case 2:
			if (iLocal_14 == 1)
			{
				return "PBL_get_money_face_tree";
			}
			else if (iLocal_14 == 2)
			{
				return "PBL_proposition";
			}
			break;
		case 3:
			if (iLocal_14 == 1)
			{
				return "BEG_A";
			}
			break;
		case 4:
			return "pl_ILO";
		case 5:
			return "PBL_ENTER";
	}
	return "";
}

void func_464(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_901(uParam0, sParam1, sParam2, iParam3);
	func_902(uParam0);
}

int func_465(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_329(1, iParam1);
		case 1:
			return func_329(2, iParam1);
		case 2:
			return func_329(3, iParam1);
		case 3:
			return func_329(4, iParam1);
		default:
			break;
	}
	return func_329(6, iParam1);
}

Vector3 func_466(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2224.7f, 668.49f, 94.38f;
							case 1:
								return 2224.5f, 668.93f, 94.44f;
							case 2:
								return 2224.32f, 669.36f, 94.5f;
							case 3:
								return 2224.11f, 669.86f, 94.58f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2226.41f, 669.62f, 94.42f;
							case 1:
								return 2226.6f, 669.19f, 94.35f;
							case 2:
								return 2226.81f, 668.71f, 94.28f;
							case 3:
								return 2227f, 668.28f, 94.21f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2222.03f, 674.89f, 95.3f;
							case 1:
								return 2221.85f, 675.36f, 95.37f;
							case 2:
								return 2221.67f, 675.84f, 95.44f;
							case 3:
								return 2221.5f, 676.29f, 95.5f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2223.07f, 677.82f, 95.63f;
							case 1:
								return 2223.25f, 677.35f, 95.56f;
							case 2:
								return 2223.42f, 676.9f, 95.49f;
							case 3:
								return 2223.59f, 676.45f, 95.43f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2208.25f, 715.87f, 100.58f;
							case 1:
								return 2208.11f, 716.37f, 100.64f;
							case 2:
								return 2207.96f, 716.89f, 100.7f;
							case 3:
								return 2207.82f, 717.36f, 100.75f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2209.38f, 719.23f, 100.89f;
							case 1:
								return 2209.51f, 718.75f, 100.83f;
							case 2:
								return 2209.65f, 718.27f, 100.78f;
							case 3:
								return 2209.78f, 717.8f, 100.73f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2207.82f, 717.36f, 100.75f;
							case 1:
								return 2206.17f, 723.05f, 101.36f;
							case 2:
								return 2206.04f, 723.53f, 101.41f;
							case 3:
								return 2205.91f, 724.01f, 101.46f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2207.76f, 724.89f, 101.5f;
							case 1:
								return 2207.88f, 724.43f, 101.45f;
							case 2:
								return 2208.02f, 723.94f, 101.4f;
							case 3:
								return 2208.15f, 723.47f, 101.35f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2184.33f, 858.84f, 111.37f;
							case 1:
								return 2184.21f, 859.3f, 111.4f;
							case 2:
								return 2184.08f, 859.79f, 111.43f;
							case 3:
								return 2183.96f, 860.25f, 111.47f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2185.94f, 860.67f, 111.45f;
							case 1:
								return 2186.07f, 860.19f, 111.42f;
							case 2:
								return 2186.2f, 859.7f, 111.39f;
							case 3:
								return 2186.33f, 859.22f, 111.35f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2182.63f, 864.45f, 111.76f;
							case 1:
								return 2182.48f, 864.9f, 111.79f;
							case 2:
								return 2182.33f, 865.38f, 111.83f;
							case 3:
								return 2182.18f, 865.84f, 111.86f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2183.96f, 866.86f, 111.88f;
							case 1:
								return 2183.96f, 866.86f, 111.88f;
							case 2:
								return 2184.28f, 865.93f, 111.82f;
							case 3:
								return 2184.44f, 865.45f, 111.78f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 1927.83f, 925.46f, 115.88f;
						case 1:
							return 1927.37f, 925.29f, 115.87f;
						case 2:
							return 1926.9f, 925.11f, 115.86f;
						case 3:
							return 1926.44f, 924.94f, 115.84f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1926.33f, 927.06f, 115.85f;
						case 1:
							return 1926.79f, 927.23f, 115.86f;
						case 2:
							return 1927.24f, 927.39f, 115.88f;
						case 3:
							return 1927.7f, 927.56f, 115.89f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 1920.91f, 922.81f, 115.68f;
						case 1:
							return 1920.45f, 922.63f, 115.66f;
						case 2:
							return 1919.97f, 922.45f, 115.65f;
						case 3:
							return 1919.52f, 922.27f, 115.63f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1919.35f, 924.38f, 115.65f;
						case 1:
							return 1919.83f, 924.56f, 115.66f;
						case 2:
							return 1920.29f, 924.74f, 115.68f;
						case 3:
							return 1920.73f, 924.91f, 115.69f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_467(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 8.1f, -20.32f, 19.92f;
							case 1:
								return 8.1f, -20.32f, 19.92f;
							case 2:
								return 8.1f, -20.32f, 19.92f;
							case 3:
								return 8.1f, -20.32f, 19.92f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -8.42f, -20.31f, -153.25f;
							case 1:
								return -8.42f, -20.31f, -153.25f;
							case 2:
								return -8.42f, -20.31f, -153.25f;
							case 3:
								return -8.42f, -20.31f, -153.25f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 8.09f, -19.97f, 17.75f;
							case 1:
								return 8.09f, -19.97f, 17.75f;
							case 2:
								return 8.09f, -19.97f, 17.75f;
							case 3:
								return 8.09f, -19.97f, 17.75f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -8.41f, -20.68f, -156.23f;
							case 1:
								return -8.41f, -20.68f, -156.23f;
							case 2:
								return -8.41f, -20.68f, -156.23f;
							case 3:
								return -8.41f, -20.68f, -156.23f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 6.45f, -19.67f, 13.6f;
							case 1:
								return 6.45f, -19.67f, 13.6f;
							case 2:
								return 6.45f, -19.67f, 13.6f;
							case 3:
								return 6.45f, -19.67f, 13.6f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -6.31f, -20.07f, -162.03f;
							case 1:
								return -6.31f, -20.07f, -162.03f;
							case 2:
								return -6.31f, -20.07f, -162.03f;
							case 3:
								return -6.31f, -20.07f, -162.03f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 6.45f, -19.67f, 13.6f;
							case 1:
								return 6.45f, -19.67f, 13.6f;
							case 2:
								return 6.45f, -19.67f, 13.6f;
							case 3:
								return 6.45f, -19.67f, 13.6f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -6.21f, -20.07f, -162.67f;
							case 1:
								return -6.21f, -20.07f, -162.67f;
							case 2:
								return -6.21f, -20.07f, -162.67f;
							case 3:
								return -6.21f, -20.07f, -162.67f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 4.13f, -20.5f, 13.36f;
							case 1:
								return 4.13f, -20.5f, 13.36f;
							case 2:
								return 4.13f, -20.5f, 13.36f;
							case 3:
								return 4.13f, -20.5f, 13.36f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -4.21f, -19.4f, -164.05f;
							case 1:
								return -4.21f, -19.4f, -164.05f;
							case 2:
								return -4.21f, -19.4f, -164.05f;
							case 3:
								return -4.21f, -19.4f, -164.05f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 4.09f, -20.76f, 16.73f;
							case 1:
								return 4.09f, -20.76f, 16.73f;
							case 2:
								return 4.09f, -20.76f, 16.73f;
							case 3:
								return 4.09f, -20.76f, 16.73f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -3.94f, -19.13f, -160.12f;
							case 1:
								return -3.94f, -19.13f, -160.12f;
							case 2:
								return -3.94f, -19.13f, -160.12f;
							case 3:
								return -3.94f, -19.13f, -160.12f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return -1.67f, -20.05f, 110.69f;
						case 1:
							return -1.67f, -20.05f, 110.69f;
						case 2:
							return -1.67f, -20.05f, 110.69f;
						case 3:
							return -1.67f, -20.05f, 110.69f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1.46f, -20.16f, -70.63f;
						case 1:
							return 1.46f, -20.16f, -70.63f;
						case 2:
							return 1.46f, -20.16f, -70.63f;
						case 3:
							return 1.46f, -20.16f, -70.63f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -1.99f, -20.04f, 111.69f;
						case 1:
							return -1.99f, -20.04f, 111.69f;
						case 2:
							return -1.99f, -20.04f, 111.69f;
						case 3:
							return -1.99f, -20.04f, 111.69f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1.78f, -20.16f, -69.74f;
						case 1:
							return 1.78f, -20.16f, -69.74f;
						case 2:
							return 1.78f, -20.16f, -69.74f;
						case 3:
							return 1.78f, -20.16f, -69.74f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_468(int iParam0, int iParam1)
{
	func_903(iParam0, iParam1);
}

bool func_469(int iParam0)
{
	return (iLocal_15 && iParam0) != 0;
}

Vector3 func_470()
{
	return 1915.212f, 921.5867f, 115.5382f;
}

int func_471()
{
	return -1443906703;
}

int func_472()
{
	return -289651159;
}

Vector3 func_473()
{
	return 2203.07f, 637.9951f, 95.83443f;
}

float func_474()
{
	return 168.32f;
}

Vector3 func_475()
{
	return 2178.137f, 877.66f, 112.5392f;
}

Vector3 func_476(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		if (bParam1)
		{
			return 2182.52f, 776.33f, 106.18f;
		}
		else
		{
			return 2182.52f, 776.33f, 106.18f;
		}
	}
	return 2182.18f, 776.54f, 106.17f;
}

float func_477(bool bParam0)
{
	if (!bParam0)
	{
		return 171.79f;
	}
	return -59.3f;
}

float func_478()
{
	return 58.8f;
}

bool func_479()
{
	return (func_4(Local_3653.f_136, 128) || func_4(Local_3653.f_136, 64));
}

void func_480(float fParam0)
{
	fParam0->f_132 = 1;
	*fParam0 = -3.5f;
	if (func_413())
	{
		fParam0->f_1 = "RCMP_F01S";
	}
	else
	{
		fParam0->f_1 = "RCMP_F01CS";
		fParam0->f_3 = "RCMP_F01AS";
	}
}

bool func_481()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_482(var uParam0)
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

bool func_483(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_857(*uParam0, 0f, 0f, 0f))
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

bool func_484(var uParam0)
{
	if (!func_904(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_904(uParam0->f_12))
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

int func_485(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_905(&uParam1))
	{
		return 1;
	}
	if (!func_483(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_486(var uParam0)
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

int func_487(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_906(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_488(int iParam0)
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

bool func_489(var uParam0)
{
	return func_215(*uParam0, 4);
}

bool func_490(var uParam0)
{
	return func_215(*uParam0, 64);
}

bool func_491(var uParam0)
{
	return func_215(*uParam0, 8);
}

void func_492(int iParam0, bool bParam1, bool bParam2)
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

bool func_493(var uParam0)
{
	return func_215(*uParam0, 128);
}

bool func_494(var uParam0)
{
	return func_215(*uParam0, 2048);
}

void func_495(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_496(var uParam0)
{
	return func_215(*uParam0, 1024);
}

bool func_497(var uParam0)
{
	return func_215(*uParam0, 256);
}

void func_498(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_499(var uParam0)
{
	return func_215(*uParam0, 512);
}

bool func_500(var uParam0)
{
	return func_215(*uParam0, 4096);
}

void func_501(int iParam0, int iParam1)
{
	if (!func_147(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_502(int iParam0)
{
	if (!func_147(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_503(int iParam0, bool bParam1)
{
	if (!func_147(iParam0))
	{
		return false;
	}
	if ((func_23(iParam0, 1) && !func_420(iParam0)) && func_508(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_223(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_504(int iParam0)
{
	if (!func_147(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_505(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_loaded(*uParam0, true, false);
}

int func_506(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return -318144249;
	}
	if (bParam1)
	{
		return -1133174268;
	}
	return -2036140949;
}

void func_507(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	iVar0 = _find_closest_active_scenario_point_of_type(vParam1, func_907(), 2f, 0, false);
	vVar1 = { get_entity_coords(*iParam0, true, false) };
	if (bParam9)
	{
		vVar4 = { _get_scenario_point_coords(iVar0, true) };
		fVar7 = _get_scenario_point_heading(iVar0, true);
	}
	else
	{
		vVar4 = { vVar1 };
		fVar7 = get_entity_heading(*iParam0);
	}
	if (!_does_scenario_point_exist(*iParam4))
	{
		if (bParam5)
		{
			if (bParam10)
			{
				vVar4 = { 0.009f, 0.058f, 0.5f };
				fVar7 = -177.54f;
			}
			else
			{
				vVar4 = { 0.009f, 0.058f, 0.5f };
				fVar7 = -180f;
			}
			*iParam4 = create_scenario_point_attached_to_entity(Local_2650.f_690[0]->f_8, func_506(bParam8, bParam10), vVar4, fVar7, 0, 0, 0);
			_set_scenario_point_flag(*iParam4, 19, true);
		}
		else
		{
			*iParam4 = create_scenario_point(func_506(bParam8, bParam10), vVar4, fVar7, 0, 0, 0);
			_set_scenario_point_flag(*iParam4, 19, true);
		}
	}
	_task_use_scenario_point(*iParam0, *iParam4, func_833(bParam8, bParam10), -1, false, true, 0, false, -1f, false);
}

bool func_508(int iParam0)
{
	if (!func_147(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_509(int iParam0)
{
	if (!func_147(iParam0))
	{
		return;
	}
	iVar0 = func_227(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_510(int iParam0, bool bParam1)
{
	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_220(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_166(iParam0, 129);
	func_509(iParam0);
	_0xfc77c5b44d5ff7c0(func_167(iParam0));
	func_501(iParam0, 0);
	return 1;
}

float func_511()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_512(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_513(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_514(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_908(&iVar1, -2147483648);
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

int func_515()
{
	return get_player_group(get_player_index());
}

bool func_516(int iParam0)
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

void func_517(var uParam0, int iParam1, bool bParam2)
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

int func_518(int iParam0)
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

int func_519(int iParam0)
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

int func_520(int iParam0)
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

int func_521(int iParam0)
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

int func_522()
{
	return 676312963;
}

int func_523(int iParam0)
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

int func_524()
{
	return -886879462;
}

char* func_525(int iParam0)
{
	if (!func_123(iParam0))
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

var func_526(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
		return func_909(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_910(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_527(int iParam0)
{
	return func_4(iParam0, 1);
}

void func_528(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_911(128))
	{
		return;
	}
	if (!func_912(iParam0))
	{
		return;
	}
	if (func_125(iParam0, 32))
	{
		return;
	}
	func_126(iParam0, 32);
	func_598(Global_1935630, 8192);
	func_914(func_913(-1532769513, -36357794), 1);
	switch (func_915(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_914(func_913(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_914(func_913(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_914(func_913(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_914(func_913(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_914(func_913(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_914(func_913(-1532769513, -910218296), 1);
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
		func_126(iParam0, 64);
	}
}

void func_529(int iParam0, int iParam1)
{
	iVar0 = func_916(iParam0);
	if (iVar0 != 0 && func_4(iParam0, 1))
	{
		vVar1 = { func_917(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_17(iParam0);
		}
		func_918(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_4(iParam0, 67108864))
		{
			_0xe057fea9a22eb3ee(iVar0);
		}
		_0x1392105da88bbffb(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_5(iParam0, 67108864);
	}
}

bool func_530(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_531()
{
	return &Global_1899515;
}

int func_532(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

float func_533(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_534(bool bParam0, bool bParam1, bool bParam2)
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

bool func_535()
{
	if (func_194(Global_35, (*Global_1392194)[Local_3653.f_136]->f_6, 1, 0))
	{
		return true;
	}
	if (!_does_volume_exist(&(iLocal_2305[14])))
	{
		return false;
	}
	if (func_194(Global_35, &(iLocal_2305[14]), 1, 0))
	{
		return true;
	}
	return false;
}

void func_536(bool bParam0)
{
	iLocal_2293 = 0;
	func_42(512);
	if (iVar3987 != -1)
	{
		iVar0 = func_52(iVar3987);
		clear_ped_tasks(iVar0, 1, 0);
		func_59(iVar3987, 1);
		iLocal_3990 = -1;
	}
	func_280(&Local_3653, &(Local_3653.f_28));
	func_260(vLocal_2327[13]);
	func_260(vLocal_2327[7]);
	func_344(65536);
	func_120(&Local_2145, 16);
	if (bParam0)
	{
		iLocal_2181 = 0;
	}
	else
	{
		iLocal_2181 = 2;
	}
}

void func_537(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_919(iParam0);
		func_920(iParam1, uParam2);
	}
	func_226(*iParam0, 1, bParam4);
}

void func_538(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_292((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_84(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_539()
{
	if (!func_535())
	{
		return false;
	}
	fVar0 = func_261(Local_2650.f_4, 0);
	fVar1 = get_entity_speed(Global_35);
	iVar2 = func_628(Global_35, Local_2650.f_4, 1060437492);
	if (iVar2 == 1 && fVar1 > 1.25f)
	{
		return false;
	}
	if (iVar2 != 0 && (fVar1 > 3f || fVar0 > 20f))
	{
		return false;
	}
	return true;
}

char* func_540()
{
	switch (iVar2291)
	{
		case 0:
			return "RCMP_ANGR_A";
		case 1:
			return "RCMP_ANGR_B";
		case 2:
			return "GET_LOST";
		case 3:
			return "FINAL_WARNING";
		default:
			break;
	}
	return "";
}

bool func_541(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_921(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_340(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_542(int iParam0)
{
	switch (iParam0)
	{
		case 835:
		case 836:
		case 837:
			return true;
		default:
			break;
	}
	return false;
}

void func_543(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_544(int iParam0)
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

void func_545(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_335(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_922(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!_does_volume_exist(iParam0->f_39))
			{
				iParam0->f_39 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_923(iParam0))
			{
				if (bParam1)
				{
					clear_ped_tasks(iParam0->f_40, 1, 0);
				}
				func_922(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_924(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_924(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_923(iParam0))
			{
				task_turn_ped_to_face_entity(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

bool func_546(int iParam0, var uParam1)
{
	if (!is_ped_fleeing(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_547(int iParam0)
{
	if (((iParam0->f_16 == 3 || iParam0->f_16 == 1) || iParam0->f_16 == 6) || iParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_548(int iParam0)
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

bool func_549(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_925(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_926(&iVar0, vParam2, 0, 1, 0, -1);
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
			iVar42 = func_926(&iVar0, vParam2, 0, 1, 0, -1);
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

bool func_550(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_336(iParam0[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_551(int iParam0, bool bParam1, int iParam2)
{
	func_927(iParam2);
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
		iParam0->f_13 = func_928(0);
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
							func_127(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_929(1))
						{
							func_127(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_929(1) || *iParam0 & 8192 != 0))
				{
					func_230(iParam0, 33554432);
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
			if (func_930(iParam0))
			{
				iParam0->f_15 = func_346();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_346() - iParam0->f_15) > 500)
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
	func_931(iParam0);
}

bool func_552(int iParam0, int iParam1)
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
			if (!func_932(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_933(iParam0, iVar2) <= func_934(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_553(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_935(iParam2, 1, 1, 1, 0))
	{
		func_127(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_347(iParam1, 1);
	func_898();
}

bool func_554(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_342(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_936(iParam1);
			if (func_937(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_938(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_347(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_347(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_555(int iParam0, int iParam1, int iParam2)
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
	if (func_939(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_936(iParam2);
		if (func_937(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_938(iParam2)
				{
					func_347(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_556(int iParam0, int iParam1)
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
	if (func_932(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_938(iParam1)
		{
			fVar3 = func_936(iParam1);
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

bool func_557(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_346();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_558(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_940(iParam2);
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
			if (func_566(iParam2, iParam1))
			{
				func_347(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_559(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_941(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_566(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_347(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_560(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_942(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_347(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_347(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_943(iParam1, vVar0, vVar4))
					{
						func_347(iParam2, 1);
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
					func_347(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_943(iParam1, vVar0, vVar7))
					{
						func_347(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_561(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_932(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_944(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_945(&(Global_1935630->f_34[iVar0])))
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
			if (func_946(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_947(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_948(iParam1, iParam0, fVar1, iVar0))
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

bool func_562(int iParam0, int iParam1)
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

bool func_563(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_346();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_564(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_949(iVar0, &iVar2))
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
	if (func_950(iVar0, iParam0))
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

int func_565(int iParam0, int iParam1)
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

bool func_566(int iParam0, int iParam1)
{
	if (func_951(iParam0))
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

bool func_567(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_337(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_568()
{
}

bool func_569(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_952(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_346();
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
						if (func_533(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_346();
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

bool func_570()
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
	if ((func_346() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_571(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_934(iParam0);
	if (iParam0->f_12 > func_953(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_954(iParam1);
	iVar1 = func_955(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_572(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_956(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_573(int iParam0, int iParam1)
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
		if (func_957(iParam0, iParam1, 1))
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
					if (!func_958(iParam1, iParam0))
					{
						if (func_533(iVar4, Global_36, 1) < 7f)
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

bool func_574(int iParam0, int iParam1)
{
	if (!func_959(0))
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

bool func_575(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_346();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_576(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_577(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_346();
	}
	else if (func_346() - iParam1->f_4) > func_960(iParam1)
	{
		return func_291(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_578()
{
	if (iLocal_14 == 2)
	{
		iLocal_2178 = 0;
		while (iVar2176 < Global_1935630->f_39)
		{
			if (func_583(&(Global_1935630->f_34[iVar2176]), &iLocal_3981))
			{
				return false;
			}
			iLocal_2178 = iVar2176 + 1;
		}
	}
	return true;
}

bool func_579(var uParam0)
{
	if (!does_entity_exist(&(Global_1935630->f_34[0])))
	{
		return false;
	}
	if (is_entity_a_mission_entity(&(Global_1935630->f_34[0])) && does_entity_belong_to_this_script(&(Global_1935630->f_34[0]), true))
	{
		return true;
	}
	iVar0 = func_363(&(Global_1935630->f_34[0]), 0);
	if (func_147(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_161(&iVar1, &iVar2, 0);
		}
		else
		{
			func_162(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_580(int iParam0)
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
	if (!func_625(*iParam0, 75))
	{
		return true;
	}
	iVar0 = func_613(Global_35, 0, 1, 0);
	if (func_408(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = func_613(Global_35, 1, 1, 0);
	if (func_408(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_581()
{
	if (iLocal_14 != 1)
	{
		func_255(32);
		return false;
	}
	if (func_111(32))
	{
		return true;
	}
	iVar0 = func_582();
	if (!does_entity_exist(iVar0))
	{
		func_255(32);
		return false;
	}
	if (iVar0 == &iLocal_3981[0])
	{
		return true;
	}
	return false;
}

int func_582()
{
	iVar1 = _get_first_entity_ped_is_carrying(Global_35);
	if (!does_entity_exist(iVar1))
	{
		if (func_961(Global_35))
		{
			iVar1 = func_962(Global_35);
		}
		else if (func_963(Global_35))
		{
			iVar1 = func_964(Global_35);
		}
		else if (func_965(Global_35))
		{
			iVar1 = func_966(Global_35);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		Var3.f_10 = 7;
		iVar14 = func_967(&iVar2, &Var3);
		if (iVar2 == 2 && does_entity_exist(iVar14))
		{
			iVar1 = _get_first_entity_ped_is_carrying(iVar14);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		iVar15 = _get_last_mount(Global_35);
		if (does_entity_exist(iVar15))
		{
			iVar1 = _get_first_entity_ped_is_carrying(iVar15);
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
	if (!is_ped_human(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_583(int iParam0, int iParam1)
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

bool func_584()
{
	if (func_968(1) <= 0)
	{
		return false;
	}
	if (!func_4(Local_3653.f_136, 8))
	{
		return false;
	}
	return true;
}

bool func_585(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = func_969(iParam0, 4, iParam2);
	if (does_entity_exist(iVar0))
	{
		*iParam1 = get_entity_model(iVar0);
		return true;
	}
	iVar1 = func_969(iParam0, 5, iParam2);
	if (does_entity_exist(iVar1))
	{
		*iParam1 = get_entity_model(iVar1);
		return true;
	}
	return false;
}

bool func_586(int iParam0)
{
	return func_970(iParam0, 2);
}

void func_587(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_971(iParam0, iParam1, bParam2);
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

int func_588(int iParam0)
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

int func_589(int iParam0)
{
	return iParam0 & 31;
}

int func_590(int iParam0)
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

void func_591(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_592()
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

int func_593(int iParam0)
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

void func_594(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_595(int iParam0, bool bParam1)
{
	switch (func_298(iParam0))
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

void func_596(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_972(iParam0);
	}
	else
	{
		func_973(iParam0, iParam1);
	}
	func_974();
}

void func_597(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_598(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_599(int iParam0)
{
	iVar0 = func_975(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_600(int iParam0)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	switch (func_302(iParam0))
	{
		case 1:
			switch (func_399(iParam0))
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
			switch (func_399(iParam0))
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

void func_601(int iParam0)
{
	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_976(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_978(func_977(iParam0), 6);
}

void func_602(int iParam0)
{
	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_976(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_979(func_977(iParam0), 6);
}

int func_603(int iParam0)
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

int func_604(int iParam0)
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
	func_980(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_605()
{
	return (Global_1894899 & 1 != 0 && func_981() != -1);
}

bool func_606(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_607(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_982(iParam0, &Var0);
}

void func_608(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_123(iParam0))
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

bool func_609(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_610(int iParam0)
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

void func_611(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_612(int iParam0)
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

int func_613(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_614()
{
	return "Default_Shocked";
}

bool func_615(int iParam0, bool bParam1, bool bParam2)
{
	if (func_612(iParam0))
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
	fVar1 = func_266(iParam0, 1, 1);
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

bool func_616(int iParam0, int iParam1, bool bParam2)
{
	if (func_408(iParam1))
	{
		return true;
	}
	if (bParam2 && is_ped_in_combat(*iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_617(int iParam0, int iParam1, float fParam2)
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

bool func_618(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

bool func_619(var uParam0, char* sParam1)
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

void func_620(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_619(uParam0, sParam1))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(*uParam0, sParam1, bParam2);
}

int func_621(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xdf7b5144e25cd3fe(*uParam0, sParam1);
}

bool func_622(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x6f1f0b17109309da(*uParam0, sParam1);
}

void func_623(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 64);
	}
	else
	{
		func_230(iParam0, 64);
	}
}

void func_624(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 1048576);
	}
	else
	{
		func_230(iParam0, 1048576);
	}
}

bool func_625(int iParam0, int iParam1)
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
	if (func_215(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_215(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_215(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_215(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_215(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_215(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_215(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_215(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_626(int iParam0, int iParam1)
{
	fVar0 = func_983(iParam1);
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
		fVar2 = func_984(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_985())
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

bool func_627(int iParam0, int iParam1)
{
	if (func_986(iParam0))
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

int func_628(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_634(vVar3, vVar6);
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
	if (func_635(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_629(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_630(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_987(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_631(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

Vector3 func_632(int iParam0)
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
	return func_633((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_633(vector3 vParam0)
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

float func_634(vector3 vParam0, vector3 vParam3)
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

bool func_635(struct<2> Param0, float fParam2, struct<2> Param3, float fParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_636(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_649((*Local_4227[iParam0])[iParam1], bParam2, 0);
}

int func_637(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_638(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_639(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_318(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_640(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_641(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_642(int iParam0, int iParam1)
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

void func_643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_988(iParam0, iParam6);
	func_989(iParam0, iParam5);
	func_990(iParam0, iParam4);
	func_991(iParam0, iParam3);
	func_992(iParam0, iParam2);
	func_993(iParam0, iParam1);
}

bool func_644(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_356(iParam1) || !func_356(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_645(int iParam0, int iParam1, int iParam2)
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

int func_646(int iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_994(&iVar0);
	if (func_359(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_995(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_359(iVar0, 134217728))
	{
		func_996(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_997(558))
				{
					func_998(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_647(int iParam0)
{
	if (func_999(iParam0))
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

void func_648(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_292(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_1000(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_1001(iParam0->f_6, iParam0->f_5, 0);
			}
			func_784(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_1002(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_649(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1003(iParam0, 13))
	{
		func_1004(iParam0, 0);
	}
	else
	{
		func_1005(iParam0, 0);
	}
	if (func_292(iParam0->f_6))
	{
		if (bParam2)
		{
			func_84(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_650(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1003(iParam0, 4))
		{
			func_84(&(iParam0->f_6), 1, 1);
			func_1004(iParam0, 4);
		}
	}
	else if (func_1003(iParam0, 4))
	{
		func_1005(iParam0, 4);
		func_1004(iParam0, 14);
	}
}

void func_651(int* iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_652(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1004((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

char* func_653(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_118(iParam0, 16))
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
			if (func_118(iParam0, 16))
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
					return func_660(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_654(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_118(iParam0, 16))
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
			if (func_118(iParam0, 16))
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

int func_655(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_162(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_1006(iParam0, iVar0, iVar1, bParam2);
}

bool func_656(var uParam0)
{
	return func_530(*uParam0, 2);
}

float func_657(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_658(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_659(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1007(cParam1, cParam0);
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

char* func_660(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_661(int iParam0, bool bParam1)
{
	if (func_335(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_662(float fParam0)
{
	if (func_1008(1))
	{
		return true;
	}
	if (func_257(&uLocal_0) && !func_253(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_663()
{
	switch (iLocal_14)
	{
		case 1:
			if (func_25(8))
			{
				iLocal_2305[9] = _create_volume_box_with_custom_name(2208.046f, 720.5657f, 102.7978f, 0f, 0f, 16.96997f, 6.432906f, 7.54794f, 3.979209f, "CURR - volHammerBlk");
			}
			else
			{
				iLocal_2305[9] = _create_volume_box_with_custom_name(2223.633f, 673.8961f, 96.35098f, 0f, 0f, 21.30347f, 5.918352f, 7.950146f, 3.902181f, "CURR - volHammerBlk");
			}
			break;
		case 2:
			iLocal_2305[9] = _create_volume_box_with_custom_name(2184.146f, 862.6637f, 113.3422f, 0f, 0f, 15.49503f, 5.150692f, 10.34767f, 5.253829f, "CURR - volHammerBlk");
			break;
		case 3:
			iLocal_2305[9] = _create_volume_box_with_custom_name(1922.803f, 924.7153f, 117.2035f, 0f, 0f, 22.99839f, 10.06398f, 5.311772f, 3.946446f, "CURR - volHammerBlk");
			break;
	}
}

int func_664(int iParam0)
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

bool func_665(int iParam0)
{
	if (func_43(-2147483648))
	{
		return false;
	}
	if ((iLocal_14 != 1 || func_25(8)) && func_22(&Local_3653, 256))
	{
		return false;
	}
	if (iLocal_14 == 2 && !func_25(8))
	{
		return false;
	}
	if (!func_258(64))
	{
		return false;
	}
	if (&iLocal_2504[iParam0] == -1)
	{
		iLocal_2504[iParam0] = func_1009(iParam0);
		return false;
	}
	if (!func_257(vLocal_2327[5]))
	{
		func_60(vLocal_2327[5]);
		fLocal_2503 = get_random_float_in_range(15f, 30f);
	}
	if (func_253(vLocal_2327[5], fVar2500))
	{
		return true;
	}
	return false;
}

int func_666(int iParam0)
{
	if (iParam0 >= 4)
	{
		return 0;
	}
	if (!func_469(func_664(iParam0)))
	{
		return 0;
	}
	if (&iLocal_2504[iParam0] == -1)
	{
		return 0;
	}
	if (!func_147(&(iLocal_2504[iParam0])))
	{
		return 0;
	}
	iVar0 = func_52(&(iLocal_2504[iParam0]));
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	func_1010(&iVar0, iParam0);
	if (func_1011(iParam0))
	{
		func_1012(iParam0, "PBL_EXIT");
		func_325(6, iParam0);
	}
	if (func_780(Local_2370[func_322(iParam0)]))
	{
		func_781(Local_2370[func_322(iParam0)]);
	}
	bVar1 = _is_scenario_group_enabled_hash(-1197006729);
	switch (&iLocal_2487[iParam0])
	{
		case 0:
			if (func_505(Local_2370[func_322(iParam0)]) && _0x5e420ff293ee5472())
			{
				func_51(&(iLocal_2504[iParam0]), 0, 1);
				func_682(Local_2370[func_322(iParam0)], iVar0, "worker", 1);
				func_765(Local_2370[func_322(iParam0)], (Local_1873[func_329(0, iParam0)])->f_8, "HAMMER");
				func_765(Local_2370[func_322(iParam0)], (Local_1873[func_465(&(uLocal_2493[iParam0]), iParam0)])->f_8, "spike");
				StringCopy(&(Local_2370[func_322(iParam0)]->f_4), "base", 24);
				func_684(Local_2370[func_322(iParam0)], func_1013(iParam0, &(uLocal_2493[iParam0]), bVar1), func_1014(iParam0, &(uLocal_2493[iParam0]), bVar1));
				vVar2 = { func_685(Local_2370[func_322(iParam0)], "worker", "PBL_ENTER") };
				fVar8 = func_687(Local_2370[func_322(iParam0)], "worker", "PBL_ENTER");
				iVar10 = _get_scenario_point_ped_is_using(iVar0, false);
				vVar5 = { _get_scenario_point_coords(iVar10, true) };
				fVar9 = _get_scenario_point_heading(iVar10, true);
				clear_ped_tasks(iVar0, 1, 0);
				open_sequence_task(&iLocal_4141);
				task_follow_nav_mesh_to_coord(0, func_1015(vVar5, fVar9), 1f, -1, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, func_1015(vVar2, fVar8), 1f, -1, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, vVar2, 1f, -1, 0.25f, 0, fVar8);
				close_sequence_task(iVar4138);
				task_perform_sequence(iVar0, iVar4138);
				clear_sequence_task(&iLocal_4141);
				func_325(1, iParam0);
			}
			break;
		case 1:
			if (!func_368(iVar0, 242628503))
			{
				vVar11 = { func_685(Local_2370[func_322(iParam0)], "worker", "PBL_ENTER") };
				fVar14 = func_687(Local_2370[func_322(iParam0)], "worker", "PBL_ENTER");
				if (func_1016(iVar0, vVar11, fVar14, 1056964608, 1119092736, 1))
				{
					func_754(Local_2370[func_322(iParam0)]);
					func_1017(iParam0);
					func_1018(iParam0);
					func_1019(&iVar0, iParam0);
					func_1012(iParam0, "PBL_HAMMER_LOOP");
					Local_3653.f_140[0] = iVar0;
					func_1020(2, iParam0);
					func_1021(iParam0);
				}
				else
				{
					func_1022(iParam0);
				}
			}
			break;
		case 2:
			if (func_795(Local_2370[func_322(iParam0)]) && has_anim_event_fired(iVar0, 1824589780))
			{
				if (&uLocal_2493[iParam0] > 0 && &uLocal_2493[iParam0] < 4)
				{
					iVar15 = func_465(&(uLocal_2493[iParam0]), iParam0);
					iVar16 = func_465(0, iParam0);
					set_entity_coords(Local_1873[iVar15]->f_8, get_entity_coords(Local_1873[iVar16]->f_8, true, false), true, false, true, true);
					set_entity_rotation(Local_1873[iVar15]->f_8, get_entity_rotation(Local_1873[iVar16]->f_8, 2), 2, true);
				}
				func_684(Local_2370[func_322(iParam0)], func_1013(iParam0, &(uLocal_2493[iParam0]), bVar1), func_1014(iParam0, &(uLocal_2493[iParam0]), bVar1));
				func_1019(&iVar0, iParam0);
				func_1023(iParam0, 1, &uLocal_2498[iParam0] >= 3);
				func_1012(iParam0, func_1024(iParam0));
				func_1021(iParam0);
			}
			break;
		case 3:
			if (func_795(Local_2370[func_322(iParam0)]) && has_anim_event_fired(iVar0, 1824589780))
			{
				func_1023(iParam0, 1, &uLocal_2498[iParam0] >= 3);
				func_1012(iParam0, func_1024(iParam0));
				func_1021(iParam0);
			}
			break;
		case 4:
			if (func_795(Local_2370[func_322(iParam0)]) && has_anim_event_fired(iVar0, 1824589780))
			{
				func_1023(iParam0, 1, &uLocal_2498[iParam0] >= 3);
				if (&uLocal_2493[iParam0] < 3)
				{
					func_1012(iParam0, "PBL_STEP_L");
					func_1020(5, iParam0);
					func_1021(iParam0);
				}
				else
				{
					func_1012(iParam0, "PBL_EXIT");
					func_325(6, iParam0);
				}
			}
			break;
		case 5:
			if (func_795(Local_2370[func_322(iParam0)]) && has_anim_event_fired(iVar0, 1824589780))
			{
				uLocal_2493[iParam0] = &uLocal_2493[iParam0] + 1;
				func_1023(iParam0, 1, 1);
				if (&uLocal_2493[iParam0] < 4)
				{
					func_1020(2, iParam0);
					func_1012(iParam0, func_1024(iParam0));
					func_1021(iParam0);
				}
				else
				{
					func_1012(iParam0, "PBL_EXIT");
					func_1021(iParam0);
				}
			}
			break;
		case 6:
			if (func_795(Local_2370[func_322(iParam0)]) && has_anim_event_fired(iVar0, 1824589780))
			{
				func_1023(iParam0, 1, 1);
				func_325(7, iParam0);
				func_1020(9, iParam0);
			}
			break;
		case 7:
			if (func_326(iVar0, &(Local_2370[func_322(iParam0)]), "worker", 0, 0, 1, 0))
			{
				_0x74c2b3dc0b294102(&(iLocal_2321[func_324(iParam0)]));
				func_193(&(iLocal_2321[func_324(iParam0)]));
				decor_set_bool(iVar0, "bOnBreak", true);
				func_153(&(iLocal_2504[iParam0]), func_152());
				func_240(&(iLocal_2504[iParam0]), 0, 1, 0, 0);
				func_1025(1, &Local_2650);
				if (_does_anim_scene_exist(&(Local_2370[func_322(iParam0)])))
				{
					func_328(Local_2370[func_322(iParam0)], (Local_1873[func_329(0, iParam0)])->f_8, "HAMMER");
				}
				activate_physics((Local_1873[func_329(0, iParam0)])->f_8);
				iVar0 = 0;
				func_325(9, iParam0);
				func_1020(9, iParam0);
				return 1;
			}
			break;
		case 8:
			func_717(&iVar0, 0, 0, 0, 0, 0, 0, 1);
			if (func_1026(&iVar0, iParam0))
			{
				func_1021(iParam0);
				if (_does_anim_scene_exist(&(Local_2370[func_322(iParam0)])))
				{
					func_781(Local_2370[func_322(iParam0)]);
				}
			}
			break;
		case 9:
			return 1;
	}
	func_1027(&iVar0, iParam0);
	func_1028(&iVar0, iParam0);
	return 0;
}

int func_667()
{
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar0[iVar5] = func_52(func_1029(iVar5));
		iVar5++;
	}
	switch (iVar2490)
	{
		case 0:
			func_40(4, &Local_2650);
			func_1030(1);
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar5 = 0;
				while (iVar5 < 4)
				{
					if (!func_239(func_1029(iVar5), 0))
					{
						func_225(func_1029(iVar5), 0, 0, 0, 1, 1);
					}
					if (is_entity_dead(&(iVar0[iVar5])))
					{
						return 0;
					}
					iVar5++;
				}
				clear_ped_tasks_immediately(&(iVar0[0]), false, true);
				clear_ped_tasks_immediately(&(iVar0[1]), false, true);
				clear_ped_tasks_immediately(&(iVar0[2]), false, true);
				clear_ped_tasks_immediately(&(iVar0[3]), false, true);
				func_682(Local_2370[0], &(iVar0[0]), "worker01", 1);
				func_682(Local_2370[0], &(iVar0[1]), "worker02", 1);
				func_682(Local_2370[0], &(iVar0[2]), "worker03", 1);
				func_682(Local_2370[0], &(iVar0[3]), "worker04", 1);
				func_765(Local_2370[0], Local_2650.f_690[15]->f_8, "stick01");
				func_765(Local_2370[0], Local_2650.f_690[16]->f_8, "stick02");
				func_765(Local_2370[0], Local_2650.f_690[17]->f_8, "stick03");
				func_765(Local_2370[0], Local_2650.f_690[18]->f_8, "stick04");
				func_765(Local_2370[0], Local_2650.f_690[19]->f_8, "rail");
				func_765(Local_2370[0], Local_2650.f_690[20]->f_8, "track");
				StringCopy(&(Local_2370[0]->f_4), "base", 24);
				func_754(Local_2370[0]);
				func_1030(2);
			}
			break;
		case 2:
			if (func_1031(&iVar0, &uLocal_4543, &uLocal_4548, 3f, 30f, 1, 0, 7.5f))
			{
				func_770(Local_2370[0]);
				func_1030(3);
			}
			break;
		case 3:
			if (!func_469(32))
			{
				if (func_326(&(iVar0[0]), &(Local_2370[0]), "worker01", 0, 0, 1, 0))
				{
					func_240(func_1029(0), 0, 1, 0, 0);
					func_145(32);
				}
			}
			if (!func_469(64))
			{
				if (func_326(&(iVar0[1]), &(Local_2370[0]), "worker02", 0, 0, 1, 0))
				{
					func_240(func_1029(1), 0, 1, 0, 0);
					func_145(64);
				}
			}
			if (!func_469(128))
			{
				if (func_326(&(iVar0[2]), &(Local_2370[0]), "worker03", 0, 0, 1, 0))
				{
					func_240(func_1029(2), 0, 1, 0, 0);
					func_145(128);
				}
			}
			if (!func_469(256))
			{
				if (func_326(&(iVar0[3]), &(Local_2370[0]), "worker04", 0, 0, 1, 0))
				{
					func_240(func_1029(3), 0, 1, 0, 0);
					func_145(256);
				}
			}
			if (((func_469(32) && func_469(64)) && func_469(128)) && func_469(256))
			{
				func_1025(4, &Local_2650);
				func_1030(4);
			}
			break;
		case 4:
			func_146(16);
			return 1;
	}
	return 0;
}

bool func_668()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_669()
{
	return Global_1935689->f_1;
}

bool func_670()
{
	return &Global_1357517;
}

char* func_671()
{
	return "INSULT_RESPONSE";
}

void func_672(int iParam0)
{
	func_106(536870912);
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, 0);
	func_1032(iParam0, 1, func_647(30));
	func_636(iParam0, 1, 1);
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

void func_673(int iParam0, int iParam1)
{
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, !func_111(1073741824));
	func_1032(iParam0, 1, func_647(10));
	if (iParam1 == 1)
	{
		func_636(iParam0, 1, 1);
	}
	else
	{
		func_636(iParam0, 1, 0);
	}
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

char* func_674()
{
	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	_int_to_string(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_660(cVar4);
}

char* func_675()
{
	return "RCMP_HANG";
}

bool func_676(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&iLocal_2504[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_677(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				if (func_1034(uParam0, iParam1[uParam0->f_25], iParam2))
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
						if (!is_entity_dead(uParam0->f_31) && func_541(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_749(&(uParam0->f_18));
							vVar1 = { get_entity_coords(uParam0->f_31, true, false) };
							if (!&uParam0->f_7[uParam0->f_24])
							{
								task_look_at_entity(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_359(uParam0->f_34, 8))
								{
									_0xe7fa07624574b79a(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									func_127(&(uParam0->f_34), 16);
								}
								else if (!func_359(uParam0->f_34, 4) && !_0x84d0bf2b21862059(uParam0->f_31))
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
										if (func_533(uParam0->f_31, Global_36, 0) > 12f)
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
							func_749(&(uParam0->f_18));
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
						if (func_359(uParam0->f_34, 1))
						{
							func_727(0);
						}
						func_717(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_1035() && !is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23]))) && func_374(0, 1, uParam0->f_31, 1))
						{
							if (func_359(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_94(uParam0->f_31, Global_35, &(uParam0->f_2[uParam0->f_23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_60(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((func_359(uParam0->f_34, 16) && !is_entity_dead(uParam0->f_31)) && !is_any_speech_playing(uParam0->f_31))
						{
							_0x541e5b41dca45828(uParam0->f_31, 1, 0);
							func_230(&(uParam0->f_34), 16);
						}
						if (func_378(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_363(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_239(iVar4, 0))
							{
								func_240(iVar4, 0, 1, 0, 0);
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

char* func_678(bool bParam0)
{
	if (!bParam0)
	{
		return "TRACKS_FM_UNK";
	}
	return "TRACKS_BLIP_FM";
}

void func_679()
{
	if (!does_entity_exist(&(iLocal_3981[0])))
	{
		iVar0 = func_582();
		if (does_entity_exist(iVar0) && decor_exist_on(iVar0, "bLostLogs"))
		{
			iLocal_3981[0] = iVar0;
		}
	}
}

void func_680(char* sParam0, bool bParam1, bool bParam2)
{
	func_297(uLocal_3985[3]);
	if (!bParam2)
	{
		if (!is_string_null_or_empty(sParam0))
		{
			func_713(sParam0, bParam1);
		}
	}
	else
	{
		func_83();
	}
	iLocal_20 = 0;
}

void func_681()
{
	if (((func_111(2048) || func_111(4096)) || func_111(4194304)) || func_262(131072))
	{
		return;
	}
	if (func_43(2097152))
	{
		if (!_does_scenario_point_exist(iVar2466))
		{
			uLocal_2468 = create_scenario_point(func_109(), func_703(), func_808(), 0, 0, 0);
			_set_scenario_point_flag(iVar2466, 19, true);
			if (!_does_volume_exist(&(iLocal_2305[3])))
			{
				iLocal_2305[3] = _create_volume_cylinder_with_custom_name(func_703(), 0f, 0f, 0f, 20f, 20f, 10f, "EA CURR - volTree");
				_0x18262cafebb5fbe1(&(iLocal_2305[3]), 0, 0, 0, -1, -1, 0);
				_0xb56d41a694e42e86(&(iLocal_2305[3]), 0, 0, 0, -1, -1, 0);
			}
		}
		switch (iVar2479)
		{
			case 0:
				func_717(iLocal_3981[0], 0, 0, 1, 0, 0, 0, 1);
				_0xef51242e35242b47("RCMP_THIEF02J");
				clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
				func_372(&(Local_3653.f_35), "RCMP_THIEF02J", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
				task_turn_ped_to_face_entity(&(iLocal_3981[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_8(8192);
				func_260(vLocal_2327[1]);
				func_260(vLocal_2327[2]);
				iLocal_2481 = 1;
				break;
			case 1:
				func_717(iLocal_3981[0], 0, 0, 1, 0, 0, 0, 1);
				if ((func_374(-5f, 1, 0, 0) || func_111(128)) || func_111(8192))
				{
					if (!func_257(vLocal_2327[1]))
					{
						func_8(33554432);
						func_112(1, 1, 0);
						func_1036(1, !func_111(8192));
						func_106(16384);
						func_60(vLocal_2327[1]);
					}
				}
				vVar1 = { func_348(Global_35, 1065353216) };
				if (func_257(vLocal_2327[1]))
				{
					bVar0 = (iVar4435 == 1 && iVar4434 == 0);
					if (bVar0 || func_533(&(iLocal_3981[0]), vVar1, 1) > 7f)
					{
						if (!func_257(vLocal_2327[2]))
						{
							func_60(vLocal_2327[2]);
						}
						if (bVar0 || func_378(vLocal_2327[2], 4f))
						{
							if (bVar0)
							{
								func_372(&(Local_3653.f_35), "RCMP_THIEF02JP", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
							}
							func_133(33554432);
							func_112(1, 1, 0);
							func_60(vLocal_2327[1]);
							iLocal_2481 = 2;
						}
					}
					else
					{
						if (func_257(vLocal_2327[2]))
						{
							func_260(vLocal_2327[2]);
						}
						if (func_378(vLocal_2327[1], 15f))
						{
							func_260(vLocal_2327[1]);
							func_42(2097152);
							func_133(33554432);
							func_112(1, 1, 0);
							iLocal_2481 = 3;
						}
					}
				}
				break;
			case 2:
				if (!func_368(&(iLocal_3981[0]), -76381094))
				{
					if (func_378(vLocal_2327[1], 4.5f))
					{
						clear_ped_tasks(&(iLocal_3981[0]), 1, 0);
						_task_use_scenario_point(&(iLocal_3981[0]), iVar2466, 0, -1, true, false, 0, false, -1f, false);
						func_60(vLocal_2327[1]);
					}
				}
				else if (func_378(vLocal_2327[1], 5f))
				{
					func_260(vLocal_2327[1]);
					func_42(2097152);
					iLocal_2481 = 3;
				}
				break;
			case 3:
				func_42(2097152);
				break;
		}
	}
}

void func_682(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (bParam3 && is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_622(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_683(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		iParam2 = get_random_int_in_range(1, 2);
	}
	switch (iParam2)
	{
		case 0:
		case default:
			*uParam0 = { 2215.628f, 680.75f, 96.592f };
			*uParam1 = { 0f, 0f, -65.014f };
			break;
		case 1:
			*uParam0 = { 2218.08f, 674.079f, 95.589f };
			*uParam1 = { 0f, 0f, -65.014f };
			break;
	}
}

void func_684(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_origin(*uParam0, vParam1, vParam4, 2);
}

Vector3 func_685(var uParam0, char* sParam1, char* sParam2)
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

int func_686(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

float func_687(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { func_1037(uParam0, sParam1, sParam2) };
	if (!func_175(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

void func_688(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
		if (iParam1 < 0)
		{
			if (!bParam5)
			{
				task_use_nearest_scenario_to_coord_warp(iParam0, vVar0, 1.5f, bParam3, bParam6, false, false, false);
			}
			else
			{
				task_use_nearest_scenario_chain_to_coord_warp(iParam0, vVar0, 1.5f, bParam3, false, false, false);
			}
		}
		else
		{
			task_play_anim(iParam0, uParam2[iParam1], (*uParam2)[iParam1]->f_1, 8f, -8f, bParam3, iParam4, 0f, false, 0, false, 0, false);
		}
	}
}

void func_689()
{
	if (!is_ped_using_any_scenario(&(iLocal_3981[0])) && (func_375("RCMP_INTP") || func_375("RCMP_INTN")))
	{
		func_717(iLocal_3981[0], 0, 0, 1, 0, 0, 0, 1);
	}
	if (((!func_111(256) && func_323(Local_2370[0])) && func_1038(Local_2370[0], "BASE_IDLE")) && !func_759((*Local_4227[1])[0], 0, 0))
	{
		func_673(1, 1);
	}
	if (iVar4435 == 1)
	{
		if (func_374(-3.5f, 1, 0, 0))
		{
			switch (iVar4434)
			{
				case 0:
					func_372(&(Local_3653.f_35), "RCMP_INTP", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
					if (is_ped_using_any_scenario(&(iLocal_3981[0])))
					{
						_0xe7fa07624574b79a(&(iLocal_3981[0]), Global_35, 1, 1, 5f, 1, 0, 0, 0);
					}
					func_112(1, 1, 1);
					func_106(256);
					func_260(vLocal_2327[4]);
					break;
				case 1:
					func_372(&(Local_3653.f_35), "RCMP_INTN", Global_35, &(iLocal_3981[0]), 0, 0, 1, 1);
					if (is_ped_using_any_scenario(&(iLocal_3981[0])))
					{
						_0xe7fa07624574b79a(&(iLocal_3981[0]), Global_35, 1, 2, 5f, 1, 0, 0, 0);
					}
					func_112(1, 1, 1);
					func_106(256);
					func_260(vLocal_2327[4]);
					break;
			}
		}
	}
}

void func_690(var uParam0)
{
	if (!func_257(uParam0))
	{
	}
	if (func_656(uParam0))
	{
		uParam0->f_1 = (func_511() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_513(uParam0, 2);
	}
}

void func_691(var uParam0)
{
	if (!func_257(uParam0))
	{
	}
	if (!func_656(uParam0))
	{
		uParam0->f_2 = (func_511() - uParam0->f_1);
		func_512(uParam0, 2);
	}
}

int func_692(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_1039(uParam0, Global_36, iParam1, iParam2, bParam3, iParam4, bParam5);
}

void func_693(int iParam0)
{
	func_1040(iParam0, (func_953(iParam0) - 6f));
	func_1041(iParam0, 1);
}

void func_694(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_695()
{
	if (func_1042(2) || func_1042(1))
	{
		return false;
	}
	if (func_118(&Local_2145, 16))
	{
		return false;
	}
	if (!func_194(Global_35, &(iLocal_2305[13]), 1, 0))
	{
		return false;
	}
	if (!func_4(Local_3653.f_136, 256))
	{
		return false;
	}
	if (func_4(Local_3653.f_136, 64))
	{
		return false;
	}
	return true;
}

void func_696(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (iParam0 > 0 && !func_4(Local_3653.f_136, 8))
	{
		switch (func_1043(iParam0))
		{
			case 0:
				func_1044(sParam1, bParam2, bParam3);
				break;
			case 1:
				func_1045(sParam1, bParam2, bParam3);
				break;
			default:
				break;
		}
	}
}

bool func_697(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	return func_1046(_0x4e88a65968a55c78(&Var0, iParam1));
}

bool func_698(int iParam0, float fParam1, bool bParam2)
{
	if (is_entity_on_screen(iParam0) && func_541(Global_35, iParam0, 0, fParam1, bParam2))
	{
		return true;
	}
	return false;
}

bool func_699()
{
	if (iVar4435 == 1 && iVar4434 == 1)
	{
		func_112(1, 1, 0);
		return true;
	}
	if (func_111(128))
	{
		func_112(1, 1, 0);
		return true;
	}
	return false;
}

void func_700(int iParam0)
{
	func_1047(1, iParam0, 0);
}

int func_701(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1048();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0) || !_does_volume_exist(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && _does_volume_exist(iParam1))
	{
		(*Global_1955500)[iVar0]->f_1 = iParam1;
		(*Global_1955500)[iVar0]->f_2 = iParam0;
		(*Global_1955500)[iVar0] = 0;
		(*Global_1955500)[iVar0]->f_3 = get_id_of_this_thread();
		if (func_359(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_215(Global_1955500[iVar0], 0))
		{
			func_1049(iVar0, 1024);
			func_1049(iVar0, 16);
			func_1049(iVar0, 256);
		}
		func_1049(iVar0, iParam2);
	}
	return iVar0;
}

bool func_702()
{
	if (is_entity_dead(&(iLocal_3981[0])) || is_entity_dead(Global_35))
	{
		return false;
	}
	if (func_43(2097152))
	{
		return false;
	}
	if (func_194(Global_35, (*Global_1392194)[Local_3653.f_136]->f_6, 1, 0))
	{
		return false;
	}
	if (func_194(Global_35, &(iLocal_2305[5]), 1, 0))
	{
		return false;
	}
	if (func_533(&(iLocal_3981[0]), func_703(), 1) < 7.5f)
	{
		func_332(&uLocal_2114, 0);
	}
	if (func_266(&(iLocal_3981[0]), 1, 1) < 1.5f)
	{
		return true;
	}
	func_1050(&uLocal_2114, &(iLocal_3981[0]), 20f, -1082130432);
	if (func_336(&(iLocal_3981[0]), &uLocal_2114, &uLocal_2142, 0))
	{
		func_107(&uLocal_2114, &uLocal_2142);
		return true;
	}
	return false;
}

Vector3 func_703()
{
	return 2259.499f, 784.637f, 94.989f;
}

Vector3 func_704()
{
	return 2202.818f, 638.3447f, 95.81f;
}

float func_705()
{
	return -57.54f;
}

void func_706(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1051(Global_35) && is_player_teleport_active())
	{
	}
	if (func_488(iParam0))
	{
		if (func_1052(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_215(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_706(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_706(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_215(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_215(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_215(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_215(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_215(iParam5, 129))
	{
		if (func_215(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_215(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_215(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_215(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_488(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_215(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_215(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

Vector3 func_707()
{
	return 2202.952f, 638.4139f, 96.3099f;
}

float func_708()
{
	return 122.46f;
}

void func_709(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { get_offset_from_entity_given_world_coords(Local_2650.f_690[iParam5]->f_8, vParam1) };
	_set_scenario_point_coords(*uParam0, vVar0, false);
	_set_scenario_point_heading(*uParam0, fParam4, true);
}

void func_710(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		func_709(&uLocal_2470, get_entity_coords(*iParam0, true, false), get_entity_heading(*iParam0), iParam1);
	}
	_task_use_scenario_point(*iParam0, iVar2466, func_833(1, 0), -1, false, true, 0, false, -1f, false);
}

int func_711(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!_0x50f124e6ef188b22(Global_35))
	{
		return 1;
	}
	fVar0 = func_1053();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_1054(0);
		}
		else
		{
			func_1054(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_1054(0);
	}
	else
	{
		func_1054(1);
	}
	return 0;
}

void func_712(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		clear_entity_last_damage_entity(iParam0);
	}
}

void func_713(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_2184, sParam0, 24);
	if (bParam1)
	{
		if (!is_string_null_or_empty(&cLocal_2184))
		{
			func_1055(&cLocal_2184, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_714()
{
	if (!func_335(&(iLocal_3981[0]), 0, 1))
	{
		func_113(17);
	}
	else if (func_266(&(iLocal_3981[0]), 1, 1) > 20f || func_262(131072))
	{
		func_700(0);
		func_680(0, 1, 0);
		func_106(4194304);
		func_372(&(Local_3653.f_35), "RCMP_THIEFFLEE", &(iLocal_3981[0]), Global_35, 0, 0, 1, 0);
		update_task_hands_up_duration(&(iLocal_3981[0]), 1);
		func_113(17);
	}
}

bool func_715(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_716()
{
	if (!func_262(2) && (has_anim_event_fired(&(iLocal_3981[0]), 377515857) || !_is_ped_using_scenario_hash(&(iLocal_3981[0]), func_109())))
	{
		func_862(&(iLocal_3981[0]), Global_35, -1);
		func_372(&(Local_3653.f_35), "RCMP_CONF2A", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
		func_263(2);
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_717(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_468(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1056(&(Var0.f_5), 1);
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_718(int iParam0)
{
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, 0);
	func_1032(iParam0, 1, func_647(27));
	func_636(iParam0, 1, 1);
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

void func_719(var uParam0, float fParam1, float fParam2)
{
	if (fParam1 < 0f)
	{
		fParam1 = func_266(*uParam0, 1, 1);
	}
	if (fParam1 < fParam2)
	{
		disable_control_action(0, -1377110900, true);
		disable_control_action(0, -1292666904, true);
	}
}

void func_720(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		_0xc163dac52ac975d3(*uParam0, 0);
		_0xc163dac52ac975d3(*uParam0, 6);
		_0xc163dac52ac975d3(*uParam0, 1);
		_0xc163dac52ac975d3(*uParam0, 4);
		_0xc163dac52ac975d3(*uParam0, 5);
	}
	else
	{
		_0xbbf6d1d07c02d00a(*uParam0, 0);
		_0xbbf6d1d07c02d00a(*uParam0, 6);
		_0xbbf6d1d07c02d00a(*uParam0, 1);
		_0xbbf6d1d07c02d00a(*uParam0, 4);
		_0xbbf6d1d07c02d00a(*uParam0, 5);
	}
}

bool func_721(float fParam0)
{
	fVar0 = 10f;
	if (is_ped_facing_ped(&(iLocal_3981[0]), Global_35, 160f))
	{
		fVar0 = 25f;
	}
	if (fParam0 < 0f)
	{
		fParam0 = func_337(Global_35, &(iLocal_3981[0]), 1, 1);
	}
	if (_0x7f9b9791d4cb71f6(&(iLocal_3981[0]), Global_35, fParam0 > 10f, 0) != 1)
	{
		return false;
	}
	return fParam0 < fVar0;
}

char* func_722()
{
	vVar0 = { func_348(Global_35, 1065353216) };
	iVar3 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar0, 1060437492);
	if (_0x02ebbb3989b7e695(&(iLocal_3981[0])))
	{
		switch (iVar3)
		{
			case 0:
				iVar3 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R";
				}
				break;
			case 2:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R";
			case 3:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L";
			case 1:
				iVar3 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BL";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BR";
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				iVar3 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L_02";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R_02";
				}
				break;
			case 2:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_R_02";
			case 3:
				return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_L_02";
			case 1:
				iVar3 = func_351(get_entity_coords(&(iLocal_3981[0]), true, false), func_350(func_349()), vVar0, 1f);
				switch (iVar3)
				{
					case 3:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BL_02";
					case 2:
						return "scenario@PROC@UNIONRAILROAD@THIEF_SEARCH_TREE@REACT_EXIT_BR_02";
				}
				break;
		}
	}
	return "";
}

bool func_723(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_400(iParam0))
	{
		return false;
	}
	return func_595((*Global_1347702)[iParam0]->f_15, 1);
}

void func_724(int iParam0)
{
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, 0);
	func_1032(iParam0, 1, func_647(27));
	func_636(iParam0, 1, 0);
	func_1033(iParam0, 2, 0);
	func_1032(iParam0, 2, func_647(11));
	func_636(iParam0, 2, 1);
	func_106(-2147483648);
}

void func_725(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (*Global_1955500)[*iParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_1057(1, 1) == *iParam0)
			{
				func_1058(-1, 1, 1);
			}
			if (bParam1)
			{
				func_193((*Global_1955500)[*iParam0]->f_1);
			}
			(*Global_1955500)[*iParam0] = 0;
			(*Global_1955500)[*iParam0]->f_2 = 0;
			(*Global_1955500)[*iParam0]->f_3 = 0;
			*iParam0 = -1;
		}
	}
}

void func_726(int* iParam0)
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

void func_727(int iParam0)
{
	func_260(&uLocal_0);
	func_1047(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_1059();
}

void func_728()
{
	if (!func_4(Local_3653.f_136, 8))
	{
		if (func_1060())
		{
			if (does_blip_exist(&(uLocal_3985[3])))
			{
				func_297(uLocal_3985[3]);
			}
			func_869(func_703(), 25f, uLocal_3985[1], -1282792512);
			if (!func_695())
			{
				func_753(&(uLocal_3985[1]), 1);
			}
			func_47(16384);
		}
		if (func_1061())
		{
			if (does_blip_exist(&(uLocal_3985[3])))
			{
				func_297(uLocal_3985[3]);
			}
			func_1062(func_703(), uLocal_3985[1], 408396114, 0, "TRACKS_BLIP_MNY", 0);
			if (!func_695())
			{
				func_753(&(uLocal_3985[1]), 1);
			}
			StringCopy(&(Local_2193.f_8), "TREE_ORBIT_REQUEST", 64);
			StringCopy(&Local_2193, "event_area_tree_cam", 64);
			Local_2193.f_25 = 1;
			_0x6a4d224fc7643941(&Local_2193);
			func_8(2097152);
		}
	}
}

bool func_729(int iParam0, vector3 vParam1, float fParam4)
{
	if (func_175(vParam1))
	{
		return (!func_335(iParam0, 0, 1) || func_266(iParam0, 0, 1) > fParam4);
	}
	return (!func_335(iParam0, 0, 1) || func_533(iParam0, vParam1, 0) > fParam4);
}

bool func_730()
{
	if (func_25(2))
	{
		return true;
	}
	if (func_25(8))
	{
		return true;
	}
	switch (iLocal_14)
	{
		case 1:
			if (func_695())
			{
				return true;
			}
			break;
		case 2:
			if (func_840())
			{
				return true;
			}
			if (func_863(func_250()))
			{
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_731(int iParam0, bool bParam1)
{
	bParam1 = false;
	if (is_entity_dead(*iParam0))
	{
		iLocal_2475 = 8;
	}
	if (iVar2471 != 8 && !func_239(Local_3653.f_138, 0))
	{
		func_51(Local_3653.f_138, 1, 1);
	}
	switch (iVar2471)
	{
		case 0:
			if (Local_2509.f_12 == 40f)
			{
				Local_2509.f_12 = 22f;
			}
			if (Local_2509.f_13 == 20f)
			{
				Local_2509.f_13 = 3f;
			}
			if (fVar2505 == 0f)
			{
				Local_2509 = -2f;
			}
			Local_2509.f_8 = 0;
			Local_2509.f_9 = 0;
			Local_2509.f_131 = 2;
			if (!is_entity_dead(*iParam0) && func_541(*iParam0, Global_35, 0, Local_2509.f_12, 0))
			{
				func_711(1048576000, 1028443341, 0, 106);
				func_749(&uLocal_3804);
				_0xe7fa07624574b79a(*iParam0, Global_35, 1, 1, 7f, 1, 0, 0, 0);
				func_717(iParam0, ceil((7f * 1000f)), 0, 0, 0, 0, 0, 1);
				func_611(*iParam0, uLocal_4044[0], -89429847, 580546400, 0, func_678(func_4(Local_3653.f_136, 524288)));
				func_372(&Local_4444, Local_2509.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				func_60(vLocal_2327[1]);
				iLocal_2176 = 0;
				func_8(64);
				iLocal_2475 = 5;
			}
			break;
		case 5:
			func_711(1048576000, 1028443341, 0, 106);
			if (bParam1)
			{
				if (func_266(*iParam0, 1, 1) < Local_2509.f_13)
				{
					iLocal_2475 = 1;
				}
			}
			else if (func_374(-3.5f, 1, 0, 0))
			{
				if (!func_1063(iParam0))
				{
				}
				else if (func_266(*iParam0, 1, 1) < Local_2509.f_13 || iLocal_14 == 3)
				{
					_0xe7fa07624574b79a(*iParam0, Global_35, 1, 1, 1000f, 1, 0, 0, 0);
					func_717(iParam0, 0, 0, 0, 0, 0, 0, 1);
					func_372(&Local_4444, Local_2509.f_3, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_2475 = 2;
				}
				else
				{
					func_760(iParam0, 1.5f, iLocal_14 == 1, 1, 1, 1);
					Jump @1039; //curOff = 564
					func_711(1048576000, 1028443341, 0, 106);
					if (func_374(-12f, 1, 0, 0))
					{
						func_112(0, 1, 0);
						func_738(1, 0, 1097859072);
						func_1064(0);
						func_60(vLocal_2327[1]);
						iLocal_2475 = 3;
					}
					Jump @1039; //curOff = 637
					func_711(1048576000, 1028443341, 0, 106);
					if (func_253(vLocal_2327[1], 15f) || func_266(*iParam0, 1, 1) > 12.5f)
					{
						func_112(0, 1, 0);
						iLocal_2475 = 1;
					}
					else if (iVar4433 == 0)
					{
						switch (iVar4432)
						{
							case 0:
								func_112(0, 1, 0);
								func_60(vLocal_2327[4]);
								func_372(&Local_4444, Local_2509.f_135, Global_35, *iParam0, 0, 0, 1, 1);
								iLocal_2475 = 1;
								break;
							case 1:
								func_112(0, 1, 0);
								func_60(vLocal_2327[4]);
								func_372(&Local_4444, Local_2509.f_5, Global_35, *iParam0, 0, 0, 1, 1);
								iLocal_2475 = 1;
								break;
						}
					}
					else if (func_266(*iParam0, 1, 1) < 3f)
					{
					}
					Jump @1039; //curOff = 850
					func_717(iParam0, 0, 0, 0, 0, 0, 0, 1);
					if (func_374(-3.5f, 1, 0, 0))
					{
						if (func_266(*iParam0, 1, 1) < Local_2509.f_13 || iLocal_14 == 3)
						{
							func_60(vLocal_2327[4]);
							func_372(&Local_4444, Local_2509.f_135, Global_35, *iParam0, 0, 0, 1, 1);
						}
						iLocal_2475 = 1;
					}
					Jump @1039; //curOff = 946
					func_717(iParam0, 0, 0, 0, 0, 0, 0, 1);
					if (func_374(-7.5f, 1, 0, 0))
					{
						_0x541e5b41dca45828(*iParam0, 1, 0);
						func_297(uLocal_4044[0]);
						func_133(64);
						func_738(0, 0, 1097859072);
						func_112(0, 1, 0);
						iLocal_2475 = 8;
						return true;
					}
					Jump @1039; //curOff = 1029
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

bool func_732(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_257(&(uParam1->f_133)))
	{
		func_60(&(uParam1->f_133));
	}
	else if (func_1065(&(uParam1->f_133)) > iParam2)
	{
		func_260(&(uParam1->f_133));
		if (func_239(iParam0, 0))
		{
			func_59(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

void func_733(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar4045)
	{
		if (!is_entity_dead(&(uLocal_4048[iVar0])))
		{
			set_ped_reset_flag(&(uLocal_4048[iVar0]), 184, true);
		}
		iVar0++;
	}
	if (!is_entity_dead(iParam0))
	{
		set_ped_reset_flag(iParam0, 184, true);
	}
}

void func_734(int iParam0)
{
	Var1.f_12 = 31;
	Var1.f_13 = 0;
	Var1.f_11 = 100;
	Var1 = Global_35;
	iVar0 = 0;
	while (iVar0 < iVar4045)
	{
		if (!is_entity_dead(&(uLocal_4048[iVar0])))
		{
			Var1.f_14 = &uLocal_4048[iVar0];
			_0x88bc5f4aef77fc4e(&Var1, 17);
			set_ped_config_flag(&(uLocal_4048[iVar0]), 413, true);
		}
		iVar0++;
	}
	if (!is_entity_dead(iParam0))
	{
		Var1.f_14 = iParam0;
		_0x88bc5f4aef77fc4e(&Var1, 17);
		set_ped_config_flag(iParam0, 413, true);
	}
}

bool func_735(float fParam0)
{
	return !func_374(fParam0, 1, 0, 0);
}

void func_736(int iParam0, int iParam1, int iParam2)
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
	func_468(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_737(int iParam0)
{
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, 0);
	func_1032(iParam0, 1, func_647(10));
	func_636(iParam0, 1, 1);
	func_636(iParam0, 2, 0);
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

void func_738(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		func_106(268435456);
		func_102(134217728, bParam1);
		func_1066(0, fParam2);
	}
	else
	{
		func_255(268435456);
		func_255(134217728);
		fLocal_2242 = 15f;
		func_1066(0, -1082130432);
	}
}

bool func_739()
{
	if (iVar2471 >= 2 && iVar2471 <= 5)
	{
		return true;
	}
	if (iVar2471 >= 15 && iVar2471 < 17)
	{
		if (!func_359(Local_2434.f_23, 4096) || func_25(32))
		{
			return true;
		}
	}
	return false;
}

void func_740(bool bParam0)
{
	if (bParam0)
	{
		if (func_194(Global_35, &(iLocal_2305[10]), 1, 0))
		{
			func_1067(0);
			if (!func_25(8388608))
			{
				if (!func_366(Global_35))
				{
					func_7(8388608, func_1068(Global_35, &uLocal_4043, func_45(), &(iLocal_2305[10]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
					if (does_entity_exist(iVar4040))
					{
						set_ped_config_flag(iVar4040, 136, true);
					}
				}
			}
		}
		else
		{
			func_196(0);
		}
	}
	else if (func_25(8388608))
	{
		func_196(0);
	}
}

void func_741()
{
	if (bVar4547)
	{
		return;
	}
	if (func_67())
	{
		return;
	}
	if (!func_89(iVar2172))
	{
		iLocal_2174 = func_180(128, 1, 3, -1188213839);
		if (func_89(iVar2172))
		{
			func_748(iVar2172, 1);
		}
	}
	if (func_89(iVar2172))
	{
		if (!func_43(32768))
		{
			if (func_695())
			{
				func_713(&cLocal_2184, 1);
				func_753(&(uLocal_3985[3]), 0);
				if (does_blip_exist(&(uLocal_3985[1])))
				{
					func_753(&(uLocal_3985[1]), 0);
				}
				if (!func_90(iVar2172))
				{
					func_791(iVar2172, 1, 1);
				}
				func_47(32768);
			}
		}
		else if (!func_695())
		{
			func_753(&(uLocal_3985[3]), 1);
			if (does_blip_exist(&(uLocal_3985[1])))
			{
				func_753(&(uLocal_3985[1]), 1);
			}
			func_83();
			if (func_90(iVar2172))
			{
				func_91(iVar2172, 0, 2);
				func_748(iVar2172, 1);
			}
			func_42(32768);
		}
	}
}

bool func_742(var uParam0)
{
	return func_1069() == *uParam0;
}

void func_743()
{
	if (!func_111(32768))
	{
		if (func_111(65536) || func_111(2048))
		{
			func_112(1, 1, 0);
			func_725(&iLocal_2295, 1);
			func_537(iLocal_3981[0], Local_4142[1], Local_4227[1], 1, 1);
			func_106(32768);
		}
	}
}

int func_744(int iParam0)
{
	if (func_25(4194304))
	{
		switch (iVar2477)
		{
			case 0:
				if (func_1070(iVar2292, 1, 1))
				{
					func_725(&iLocal_2295, 1);
				}
				func_728();
				if (func_1071())
				{
					if (func_292(Local_3653.f_32))
					{
						func_84(&(Local_3653.f_32), 1, 1);
					}
				}
				else
				{
					if (!func_292(Local_3653.f_32))
					{
					}
					if (func_1072(&(Local_3653.f_32), "TRACKS_CTXT10", 2259.603f, 786.9858f, 96.25034f, 0, -719620017, 1.75f, 0, 1, 3, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
					{
						func_297(uLocal_3985[1]);
						func_5(Local_3653.f_136, 8);
						func_47(8388608);
						func_106(524288);
						func_47(65536);
						func_255(16);
						func_259();
						func_344(512);
						func_344(2097152);
						func_344(4194304);
						set_entity_visible(Local_2650.f_690[9]->f_8, true);
						set_ped_config_flag(Global_35, 252, false);
						if (!func_25(2097152))
						{
							StringCopy(&(Local_2193.f_8), "TREE_ORBIT_REQUEST", 64);
							StringCopy(&Local_2193, "event_area_tree_cam", 64);
							Local_2193.f_25 = 1;
							_0x6a4d224fc7643941(&Local_2193);
							func_8(2097152);
						}
						func_682(Local_2370[2], Global_35, "plr", 1);
						func_765(Local_2370[2], Local_2650.f_690[9]->f_8, "MONEY");
						func_766(&Local_2434);
						Local_2434.f_1 = Global_35;
						Local_2434.f_8 = { func_1073() };
						Local_2434.f_19 = func_1074();
						Local_2434.f_17 = 0.2f;
						Local_2434.f_14 = { Global_36 };
						Local_2434.f_18 = 0f;
						Local_2434.f_25 = &Local_2370[2];
						StringCopy(&(Local_2434.f_30), "plr", 24);
						StringCopy(&(Local_2434.f_26), func_463(2), 32);
						func_127(&(Local_2434.f_23), 11776);
						func_15(&Local_3653, 65536);
						func_769(&Local_2434, 106);
						func_270(&Local_2145, 4);
						func_60(vLocal_2327[1]);
						iLocal_2480 = 1;
					}
				}
				break;
			case 1:
				if (func_769(&Local_2434, 106) && (_0xdd0b7c5ae58f721d(&Local_2193) || func_378(vLocal_2327[1], 1f)))
				{
					func_260(vLocal_2327[1]);
					_0xb8b207c34285e978(&Local_2193);
					set_player_control(get_player_index(), true, 0, false);
					set_ped_config_flag(Global_35, 252, true);
					freeze_entity_position(Local_2650.f_690[9]->f_8, false);
					func_754(Local_2370[2]);
					func_536(1);
					iLocal_2480 = 2;
				}
				break;
			case 2:
				if (!is_entity_dead(Global_35) && has_anim_event_fired(Global_35, -1898385492))
				{
					if (is_entity_visible(Local_2650.f_690[9]->f_8))
					{
						set_entity_visible(Local_2650.f_690[9]->f_8, false);
					}
					Global_40.f_9096[Local_3653.f_136]->f_6 = func_871(1330954593, 0, 1065353216, 1, 0, 0, 0, -1);
				}
				if (func_868(Local_2370[2]))
				{
					if (_0x927b810e43e99932(&Local_2193))
					{
						_0x0a5a4f1979abb40e(&Local_2193);
					}
					func_611(*iParam0, uLocal_3985[3], -89429847, -981020806, 0, func_678(func_4(Local_3653.f_136, 524288)));
					func_713("TRACKS_OBJ04", 1);
					if (!func_239(Local_3653.f_138, 0))
					{
						func_51(Local_3653.f_138, 1, 1);
					}
					func_706(Local_2650.f_690[2]->f_8, func_704(), func_705(), 1, 1073741824);
					func_709(&uLocal_2470, func_707(), func_708(), 2);
					clear_ped_tasks_immediately(*iParam0, false, true);
					func_710(iParam0, -1);
					if (_0xf6a8a652a6b186cd(uVar2323))
					{
						_0xfdfecc6ee4491e11(uVar2323);
					}
					iLocal_2473 = 13;
					func_133(4194304);
					iLocal_2480 = 3;
				}
				break;
			case 3:
				return 1;
		}
	}
	return 0;
}

int func_745()
{
	if (iVar3988 != -1)
	{
		iVar0 = func_52(iVar3988);
	}
	if ((iVar2477 > 0 && func_25(64)) && iVar2477 <= 7)
	{
		if (!func_111(64))
		{
			func_297(uLocal_4044[2]);
			func_106(64);
			func_442();
			func_241(vLocal_2327[1], 3f);
			iLocal_2479 = 7;
		}
	}
	switch (iVar2477)
	{
		case 0:
			if (func_111(32))
			{
				iLocal_3990 = func_93();
				if (func_335(iVar0, 0, 1))
				{
					if (!func_234(iVar0, 1))
					{
						func_235(iVar0, func_251(Local_3653.f_136, -1), 0);
					}
					func_51(iVar3988, 1, 1);
					func_381(2);
					iLocal_2479 = 1;
				}
			}
			break;
		case 1:
			if (func_239(iVar3988, 0))
			{
				_0x463803429297117c(iVar0, Global_36, 3, 0);
				clear_ped_tasks(iVar0, 1, 0);
				if (func_266(iVar0, 1, 1) > 10f)
				{
					task_go_to_entity(iVar0, Global_35, -1, 10f, 2f, 0f, 1);
				}
				func_60(vLocal_2327[1]);
				iLocal_2479 = 2;
			}
			else
			{
				func_51(iVar3988, 1, 1);
			}
			break;
		case 2:
			if (func_374(-3.5f, 1, iVar0, 1) && (func_541(iVar0, Global_35, 1, 12f, 0) || func_378(vLocal_2327[1], 5f)))
			{
				func_611(iVar0, uLocal_4044[2], -1749618580, 580546400, 0, 0);
				func_763(&(Local_2296.f_3), 2);
				func_764(iVar0, &Local_2296, 0f, 0f, 0f, 0, 1106247680, 20f, -1, 4000, 1000, 1075838976, 1, 1, 1084227584);
				func_94(iVar0, Global_35, "DISPUTE_INTERVENE_DANGEROUS", 0, -1082130432, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
				func_112(2, 1, 0);
				func_1075(2);
				allow_sonar_blips(true);
				force_sonar_blips_this_frame();
				_trigger_sonar_blip_2(1891783641, iVar0);
				clear_ped_tasks(iVar0, 1, 0);
				Local_3991.f_40 = iVar0;
				Local_3991.f_39 = (*Global_1392194)[Local_3653.f_136]->f_6;
				Local_3991.f_42 = 3f;
				Local_3991.f_41 = 5f;
				func_545(&Local_3991, 0);
				iLocal_2479 = 3;
			}
			break;
		case 3:
			func_764(iVar0, &Local_2296, 0f, 0f, 0f, 0, 1106247680, 20f, -1, 4000, 1000, 1075838976, 1, 1, 1084227584);
			func_717(&iVar0, 0, 0, 0, 0, 0, 0, 1);
			if (!func_111(1024))
			{
				func_545(&Local_3991, 0);
			}
			if (!func_257(vLocal_2327[1]) && func_374(-3.5f, 1, iVar0, 0))
			{
				func_60(vLocal_2327[1]);
			}
			if (!func_111(2097152))
			{
				if (func_374(-3.5f, 1, iVar0, 1) && (func_541(iVar0, Global_35, 1, 10f, 0) || func_378(vLocal_2327[1], 5f)))
				{
					iLocal_2479 = 4;
				}
			}
			else if (func_253(vLocal_2327[1], func_74(func_111(1024), 4f, 7.5f)))
			{
				if (!func_111(1024))
				{
					iLocal_2479 = 5;
				}
				else
				{
					func_442();
					func_297(uLocal_4044[2]);
					func_270(&Local_2145, 2);
					iLocal_2479 = 8;
					return 1;
				}
			}
			if (iVar4435 == 2)
			{
				switch (iVar4434)
				{
					case 0:
						func_442();
						func_297(uLocal_4044[2]);
						func_372(&(Local_3653.f_35), "RCMP_HOGP", Global_35, iVar0, 0, 0, 1, 1);
						func_112(2, 1, 0);
						func_106(64);
						iLocal_2479 = 6;
						break;
					case 1:
						func_442();
						func_297(uLocal_4044[2]);
						func_372(&(Local_3653.f_35), "RCMP_HOGN", Global_35, iVar0, 0, 0, 1, 1);
						func_112(2, 1, 0);
						func_60(vLocal_2327[1]);
						iLocal_2479 = 7;
						break;
				}
			}
			break;
		case 4:
			func_545(&Local_3991, 0);
			func_717(&iVar0, 0, 0, 0, 0, 0, 0, 1);
			func_764(iVar0, &Local_2296, 0f, 0f, 0f, 0, 1106247680, 20f, -1, 4000, 1000, 1075838976, 1, 1, 1084227584);
			if (func_374(-3.5f, 1, iVar0, 1) && (func_541(iVar0, Global_35, 1, 10f, 0) || func_378(vLocal_2327[1], 5f)))
			{
				func_94(iVar0, Global_35, "CUT_THAT_OUT", 0, -1082130432, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
				func_260(vLocal_2327[1]);
				func_106(2097152);
				iLocal_2479 = 3;
			}
			break;
		case 5:
			func_764(iVar0, &Local_2296, 0f, 0f, 0f, 0, 1106247680, 20f, -1, 4000, 1000, 1075838976, 1, 1, 1084227584);
			if (func_374(-3.5f, 1, iVar0, 1) && func_541(iVar0, Global_35, 1, 20f, 0))
			{
				func_106(1024);
				func_94(iVar0, Global_35, "FINAL_WARNING", 0, -1082130432, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
				allow_sonar_blips(true);
				force_sonar_blips_this_frame();
				_trigger_sonar_blip_2(1891783641, iVar0);
				clear_ped_tasks(iVar0, 1, 0);
				func_1076(iVar0, 1);
				func_1077(Global_35, 1);
				task_aim_at_entity(iVar0, Global_35, -1, 0, 0);
				iLocal_2479 = 3;
			}
			break;
		case 6:
			if (((func_374(-3.5f, 1, iVar0, 1) && func_374(-3.5f, 1, Global_35, 1)) && !func_375("RCMP_HOGP")) && !func_375("RCMP_HOGN"))
			{
				clear_ped_tasks(iVar0, 1, 0);
				task_turn_ped_to_face_entity(iVar0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_94(iVar0, Global_35, "RESPONSE_GENERIC", 0, -1082130432, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
				func_60(vLocal_2327[1]);
				iLocal_2479 = 7;
			}
			break;
		case 7:
			func_717(&iVar0, 0, 0, 0, 0, 0, 0, 1);
			func_545(&Local_3991, 0);
			if (((func_374(-3.5f, 1, iVar0, 1) && func_374(-3.5f, 1, Global_35, 1)) && !func_375("RCMP_HOGP")) && !func_375("RCMP_HOGN"))
			{
				if (decor_exist_on(iVar0, "bScriptedILO"))
				{
					decor_remove(iVar0, "bScriptedILO");
				}
				if (!func_111(64))
				{
					if (func_253(vLocal_2327[1], 1f))
					{
						func_270(&Local_2145, 2);
						iLocal_2479 = 8;
					}
				}
				else if (func_253(vLocal_2327[1], 3f))
				{
					func_94(iVar0, Global_35, "DISMISSIVE_REACT", 0, -1082130432, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
					func_240(iVar3988, 0, 1, 0, 0);
					iLocal_2479 = 8;
				}
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

void func_746()
{
	if (func_108(iLocal_3981[0]))
	{
		return;
	}
	if (_is_ped_hogtied(&(iLocal_3981[0])))
	{
		bVar0 = true;
		func_5(Local_3653.f_136, 16);
	}
	if (!func_25(-2147483648))
	{
		return;
	}
	if (bVar0)
	{
		func_5(Local_3653.f_136, 16);
		func_133(33554432);
		if (!func_257(vLocal_2327[4]))
		{
			if (func_374(0, 1, 0, 0))
			{
				func_60(vLocal_2327[4]);
				func_690(vLocal_2327[4]);
				_0x18ff3110cf47115d(&(iLocal_3981[0]), 5, 1);
			}
		}
		else if (func_266(&(iLocal_3981[0]), 1, 1) < 11.5f)
		{
			if (func_656(vLocal_2327[4]))
			{
				func_690(vLocal_2327[4]);
			}
		}
		else if (!func_656(vLocal_2327[4]))
		{
			func_691(vLocal_2327[4]);
		}
		if (func_4(Local_3653.f_136, 8) && func_582() == &iLocal_3981[0])
		{
			func_455(&Local_3653, 0);
		}
		else
		{
			func_455(&Local_3653, 1);
		}
		if ((func_374(0, 1, 0, 0) && func_266(&(iLocal_3981[0]), 1, 1) < 15f) && func_253(vLocal_2327[4], 12f))
		{
			func_717(iLocal_3981[0], 2500, Global_35, 0, 0, 0, 0, 1);
			func_372(&(Local_3653.f_35), "RCMP_THIEFHOG", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
		}
	}
}

bool func_747(vector3 vParam0, float fParam3)
{
	if (!_does_scenario_point_exist(iVar2464))
	{
		if (func_175(vParam0))
		{
			vParam0 = { 0.009f, 0.058f, 0.5f };
		}
		iVar0 = func_318(iLocal_14 == 1, 2, 0);
		uLocal_2470 = create_scenario_point_attached_to_entity(Local_2650.f_690[iVar0]->f_8, func_506(1, 0), vParam0, fParam3, 0, 0, 0);
		_set_scenario_point_flag(iVar2464, 19, true);
	}
	if (_does_scenario_point_exist(iVar2464))
	{
		return true;
	}
	return false;
}

void func_748(int iParam0, bool bParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	if (!func_1078(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_300(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_300(iParam0)))
		{
			_0xca41e86545413b5b(func_302(iParam0), func_399(iParam0), func_1079(iParam0), func_300(iParam0), Global_36);
		}
	}
	func_307(iParam0, 1);
	bParam1 = bParam1;
}

void func_749(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

bool func_750()
{
	bVar0 = true;
	switch (iLocal_14)
	{
		case 1:
			if (!func_239(Local_3653.f_138, 0))
			{
				func_51(Local_3653.f_138, 1, 1);
			}
			switch (iVar2292)
			{
				case 0:
					if (is_entity_dead(Global_35))
					{
						bVar0 = false;
					}
					if (is_entity_dead(func_52(Local_3653.f_138)))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[0]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[1]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[2]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[3]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[4]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[5]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[6]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[7]->f_8))
					{
						bVar0 = false;
					}
					if (!does_entity_exist(Local_2650.f_690[8]->f_8))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						iLocal_2294 = 1;
					}
					break;
				case 1:
					func_1080(&Local_21, func_52(Local_3653.f_138), "U_M_M_RACFOREMAN_01", 0, 0, 0);
					func_1080(&Local_21, Global_35, "Arthur", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[0]->f_8, "p_chair06x", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[3]->f_8, "p_chair_crate02x", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[4]->f_8, "p_cigarette_cs01x", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[5]->f_8, "p_cigarette_cs01x^1", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[6]->f_8, "p_cigarette_cs01x^2", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[7]->f_8, "p_matches01x", 0, 0, 0);
					func_1081(&Local_21, Local_2650.f_690[8]->f_8, "p_matchstick01x", 0, 0, 0);
					func_1082(&Local_21, 50f);
					func_1083(&Local_21, (50f + 5f));
					func_1084(&Local_21);
					iLocal_2294 = 2;
					break;
				case 2:
					return true;
			}
			break;
		case 2:
			if (!func_25(8))
			{
				switch (iVar2292)
				{
					case 0:
						if (is_entity_dead(Global_35))
						{
							bVar0 = false;
						}
						if (is_entity_dead(&(iLocal_3981[0])))
						{
							bVar0 = false;
						}
						if (is_entity_dead(&(iLocal_3981[1])))
						{
							bVar0 = false;
						}
						if (is_entity_dead(&(iLocal_3981[2])))
						{
							bVar0 = false;
						}
						if (!does_entity_exist(Local_2650.f_690[5]->f_8))
						{
							bVar0 = false;
						}
						if (bVar0)
						{
							iLocal_2294 = 1;
						}
						break;
					case 1:
						func_1080(&Local_21, Global_35, "Arthur", 0, 0, 0);
						func_1085(&uLocal_263, Global_35, "Arthur", 0);
						func_1080(&Local_21, &(iLocal_3981[1]), "G_M_M_UNICORNWALLGOONS_01^2", 0, 0, 0);
						func_1085(&uLocal_263, &(iLocal_3981[1]), "G_M_M_UNICORNWALLGOONS_01^1", 0);
						func_1080(&Local_21, &(iLocal_3981[0]), "G_M_M_UNICORNWALLGOONS_01", 0, 0, 0);
						func_1085(&uLocal_263, &(iLocal_3981[0]), "G_M_M_UNICORNWALLGOONS_01", 0);
						func_1080(&Local_21, &(iLocal_3981[2]), "G_M_M_UNICORNWALLGOONS_01^1", 0, 0, 0);
						func_1085(&uLocal_263, &(iLocal_3981[2]), "G_M_M_UNICORNWALLGOONS_01^2", 0);
						func_1085(&uLocal_263, Local_2650.f_690[5]->f_8, "p_cigarette01x", 0);
						func_1082(&Local_21, 50f);
						func_1083(&Local_21, (50f + 5f));
						func_1084(&Local_21);
						func_1086(&uLocal_263, 4096);
						func_776(&(Local_21.f_213), 1);
						iLocal_2294 = 2;
						break;
					case 2:
						return true;
				}
			}
			break;
	}
	return false;
}

int func_751(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return 1090701398;
	}
	if (bParam1)
	{
		return -1595955421;
	}
	return 1394287955;
}

void func_752()
{
	func_8(1);
	if (Local_3946.f_23 == 0)
	{
		Local_3946.f_23++;
	}
}

bool func_753(int iParam0, bool bParam1)
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

void func_754(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	start_anim_scene(*uParam0);
}

void func_755(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_delete_anim_scene(*uParam0);
}

void func_756(int iParam0)
{
	func_1032(iParam0, 0, func_647(0));
	func_636(iParam0, 0, 1);
	func_1032(iParam0, 1, func_647(1));
	func_636(iParam0, 1, 1);
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

bool func_757(bool bParam0)
{
	switch (iLocal_14)
	{
		case 1:
			return func_1088(&Local_21, func_1087(), bParam0, 1);
		case 2:
			return func_1088(&Local_21, func_1089(), bParam0, 1);
	}
	return true;
}

Vector3 func_758()
{
	return 2206.506f, 642.7476f, 95.51965f;
}

bool func_759(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_292(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_1090(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_760(int iParam0, float fParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_541(*iParam0, Global_35, 0, Local_2509.f_12, 0) && func_1091(*iParam0, vLocal_2327[1]))
	{
		func_717(iParam0, ceil((fParam1 * 1000f)), 0, 0, 0, 0, 0, 1);
		if (bParam2)
		{
			_0xe7fa07624574b79a(*iParam0, Global_35, iParam3, iParam4, fParam1, 1, 0, 0, 0);
		}
		func_372(&Local_4444, Local_2509.f_1, *iParam0, Global_35, 0, 0, 1, 1);
		if ((bParam5 && !func_25(1)) && func_25(4))
		{
			func_611(*iParam0, uLocal_4044[0], -89429847, 580546400, 0, func_678(func_4(Local_3653.f_136, 524288)));
			func_8(1);
		}
	}
}

bool func_761(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_762()
{
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1499911466, false);
	disable_control_action(0, -209515122, false);
}

void func_763(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_764(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_1092(&(uParam1->f_3), 1))
	{
		func_1093(uParam1);
		if (func_1094(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_442();
		}
	}
	if (func_1095(get_entity_coords(iParam0, true, false), uParam1, fParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_1096(uParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

void func_765(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_622(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_766(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 256;
	iParam0->f_4 = 0;
	func_260(&(iParam0->f_5));
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = 0.25f;
	iParam0->f_18 = 0.25f;
	iParam0->f_19 = 40000f;
	iParam0->f_20 = 10f;
	iParam0->f_21 = 1f;
	iParam0->f_22 = 0f;
	iParam0->f_23 = 0;
	iParam0->f_25 = 0;
	StringCopy(&(iParam0->f_30), "", 24);
	StringCopy(&(iParam0->f_26), "", 32);
}

float func_767()
{
	return 121.22f;
}

Vector3 func_768()
{
	return 2205.641f, 644.4077f, 95.41605f;
}

bool func_769(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0->f_1) && !func_359(iParam0->f_23, 4))
	{
		set_ped_reset_flag(iParam0->f_1, 179, true);
	}
	switch (*iParam0)
	{
		case 0:
			if (!is_entity_dead(iParam0->f_1))
			{
				func_60(&(iParam0->f_5));
				if (is_ped_a_player(iParam0->f_1))
				{
					set_player_control(get_player_index(), false, iParam0->f_3, false);
					if (func_359(iParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (iParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_359(iParam0->f_23, 4))
				{
					clear_ped_secondary_task(iParam0->f_1);
				}
				if (!func_359(iParam0->f_23, 2))
				{
					iParam0->f_2 = _get_last_mount(iParam0->f_1);
					if (!is_entity_dead(iParam0->f_2) && func_366(iParam0->f_1))
					{
						func_1097(iParam0->f_1);
						iVar0 = func_628(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						task_dismount_animal(iParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (is_ped_in_any_vehicle(iParam0->f_1, true))
					{
						iVar2 = get_vehicle_ped_is_in(iParam0->f_1, true);
						bring_vehicle_to_halt(iVar2, 5f, -1, false);
						iVar3 = func_628(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						task_leave_any_vehicle(iParam0->f_1, 0, iVar4);
					}
					else
					{
						func_127(&(iParam0->f_23), 2);
					}
				}
				if (func_175(iParam0->f_14))
				{
					iParam0->f_14 = { iParam0->f_8 };
				}
				func_1098(iParam0, 1, iParam1);
			}
			else
			{
				func_1098(iParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1099(iParam0, iParam1))
			{
				func_60(&(iParam0->f_5));
				if (!func_1100(iParam0, iParam1))
				{
					func_1101();
				}
				func_1098(iParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1100(iParam0, iParam1))
			{
				func_60(&(iParam0->f_5));
				if (!func_359(iParam0->f_23, 4))
				{
					set_current_ped_weapon(iParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(iParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(iParam0->f_1, 1, func_359(iParam0->f_23, 512), 0, 0);
				}
				func_1098(iParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1102(iParam0, iParam1))
			{
				func_60(&(iParam0->f_5));
				if (!_is_ped_carrying(iParam0->f_1))
				{
					func_127(&(iParam0->f_23), 256);
				}
				if (func_359(iParam0->f_23, 4096) && !_is_ped_carrying(iParam0->f_1))
				{
					func_127(&(iParam0->f_23), 256);
					iVar6 = _get_last_mount(iParam0->f_1);
					if (func_337(iVar6, iParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_817(iVar6);
						task_pickup_carriable_entity(iParam0->f_1, iVar5);
					}
				}
				else if (!func_359(iParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(iParam0->f_1);
					task_place_carried_entity_at_coord(iParam0->f_1, iVar5, iParam0->f_14, iParam0->f_21, iParam0->f_4);
				}
				func_1098(iParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1103(iParam0, iParam1))
			{
				func_60(&(iParam0->f_5));
				if (func_359(iParam0->f_23, 8192))
				{
					if (func_359(iParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					task_enter_anim_scene(iParam0->f_1, iParam0->f_25, &(iParam0->f_30), &(iParam0->f_26), iParam0->f_21, 0, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_175(iParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_359(iParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_175(iParam0->f_11))
					{
						if (func_359(iParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, iParam0->f_11, iParam0->f_21, func_318(!func_359(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, iParam0->f_11, iParam0->f_21, func_318(!func_359(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
						}
					}
					if (func_359(iParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, iParam0->f_8, iParam0->f_21, func_318(!func_359(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, iParam0->f_8, iParam0->f_21, func_318(!func_359(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
					}
					if (func_359(iParam0->f_23, 1))
					{
						task_achieve_heading(0, iParam0->f_19, 0);
					}
					func_812(iParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_1098(iParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_359(iParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(iParam0->f_25, &(iParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_359(iParam0->f_23, 1))
			{
				iParam0->f_19 = get_entity_heading(iParam0->f_1);
			}
			if (!func_359(iParam0->f_23, 128) && func_253(&(iParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_359(iParam0->f_23, 8192))
			{
				if (get_script_task_status(iParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_175(iParam0->f_11) || !func_368(iParam0->f_1, 242628503)) || get_sequence_progress(iParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_1016(iParam0->f_1, iParam0->f_8, iParam0->f_19, iParam0->f_18, iParam0->f_20, func_359(iParam0->f_23, 8)) && (!func_359(iParam0->f_23, 64) || absf(func_1104(iParam0->f_1, iParam0->f_8)) < iParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_359(iParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(iParam0->f_1, iParam0->f_8, 0);
				}
				func_260(&(iParam0->f_5));
				func_1098(iParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_770(var uParam0)
{
	func_807(uParam0, &(uParam0->f_4));
}

void func_771(var uParam0)
{
	if (func_1105(uParam0, Global_35, "Arthur", 225514697, 1, 1))
	{
		if (func_25(2048))
		{
			func_133(2048);
		}
		display_radar(false);
		func_196(0);
		func_682(Local_2370[3], Global_35, "arthur", 1);
		func_682(Local_2370[3], func_52(Local_3653.f_138), "RailroadForeman", 1);
		func_765(Local_2370[3], Local_2650.f_690[4]->f_8, "p_cigarette_cs01x");
		func_765(Local_2370[3], Local_2650.f_690[0]->f_8, "p_chair06x");
		func_754(Local_2370[3]);
		StringCopy(&(Local_2370[3]->f_4), "Internal_Loop", 24);
		iLocal_2176 = 0;
		func_60(vLocal_2327[1]);
	}
}

void func_772(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	func_1106(uParam0, 2);
}

void func_773(var uParam0, var uParam1)
{
	if (func_1107(uParam1, 32768))
	{
		Var0 = { func_850(uParam0) };
		func_852(uParam0, &Var0);
		if (func_1107(uParam1, 131072))
		{
			func_1108(uParam0, 268435456);
			if (func_175(uParam0->f_217))
			{
				uParam0->f_217 = { func_1109(uParam1, uParam1->f_1372) };
			}
			if (func_175(uParam0->f_214))
			{
				uParam0->f_214 = { func_1109(uParam1, uParam1->f_1372) };
				get_ground_z_for_3d_coord(uParam0->f_214, &(uParam0->f_214.f_2), false);
				uParam0->f_214.f_2 = (uParam0->f_214.f_2 + 0.5f);
			}
		}
		if (func_1107(uParam1, 268435456))
		{
			func_1110(&(uParam0->f_212), 16384);
		}
	}
	else if (func_1107(uParam1, 524288))
	{
		func_1108(uParam0, 67108864);
		func_1111(uParam1, 524288);
	}
	if (func_1112(uParam1, 128))
	{
		func_1108(uParam0, 32);
	}
	if (uParam1->f_1591 != 0)
	{
		uParam0->f_224 = uParam1->f_1591;
		if (uParam1->f_1372 >= 0 && func_1113(uParam1->f_704[uParam1->f_1372], 256))
		{
			func_1110(&(uParam0->f_212), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_1380)))
	{
		_copy_memory(&(uParam0->f_225), &(uParam1->f_1380), 16);
	}
}

void func_774(var uParam0, var uParam1)
{
	_0x541b8576615c33de(*uParam0, _0xf70f00013a62f866(*uParam1));
	_0xa07cf1b21b56f041(*uParam0, _0x18675bc914891122(*uParam1));
	_0xa46e98bdc407e23d(*uParam0, _0x3e2a25b2416dd67e(*uParam1));
}

void func_775(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = fParam4;
	if (func_175(vParam1))
	{
		func_1114(uParam0, 2048, 1);
	}
	else
	{
		func_1108(uParam0, 2048);
		if (bParam5)
		{
			func_1108(uParam0, -2147483648);
		}
	}
}

void func_776(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<4> func_777()
{
	StringCopy(&cVar0, "RCMP_INT", 32);
	return cVar0;
}

bool func_778(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	func_1115(uParam4, &uParam0);
	if (func_1116(uParam4, 2) && !func_1116(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1117(uParam4) != 1)
	{
		func_1118(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1117(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_156, false))
				{
					func_1119(uParam4, &uParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_156))
				{
					func_1120(uParam4, 4);
					return false;
				}
				else if (func_1121(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_1120(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_156))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_158)) && func_1116(uParam4, 134217728))
				{
				}
				else
				{
					func_1122(uParam4);
				}
				func_60(&(uParam4->f_1));
				func_1120(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1123(uParam4);
				if (!func_257(&(uParam4->f_1)))
				{
					func_1124(&(uParam4->f_1), 0);
				}
				else if (func_367(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_1120(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_156) || !_is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (func_1088(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_156, true, false))
					{
						func_1120(uParam4, 4);
					}
					else if (!func_175(func_1125(uParam4)) && !func_1126(Global_35, func_1125(uParam4), 100f, 1, 1))
					{
						func_1127(1);
						start_player_teleport(get_player_index(), func_1125(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_367(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_1120(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_1128(1, 0);
					func_1119(uParam4, &uParam0);
					func_1120(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_367(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					_delete_anim_scene(uParam4->f_156);
				}
				func_1120(uParam4, 4);
			}
			break;
		case 3:
			func_1129(uParam4);
			if (func_1121(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_started(uParam4->f_156, false)) && (_0xef324e9550a394d5(uParam4->f_156) || func_1116(uParam4, 512)))
			{
				if (!func_1116(uParam4, 1024) && func_1130(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_1116(uParam4, 512))
				{
					func_60(&(uParam4->f_1));
					func_1108(uParam4, 512);
					func_1120(uParam4, 4);
				}
				else if (func_1116(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1118(uParam4);
			}
			if (func_1116(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1131(uParam4) - func_1132(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (_0xef324e9550a394d5(uParam4->f_156))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_1133(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1132(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1134(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_156))
				{
				}
				func_1135(uParam4);
				func_1136(uParam4);
				return true;
			}
			else
			{
				if (func_1116(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_156) && !_0xef324e9550a394d5(uParam4->f_156))
						{
							_delete_anim_scene_2(uParam4->f_156);
						}
						func_60(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_1108(uParam4, 512);
						func_1114(uParam4, 67108864, 1);
						func_1120(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_1116(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_156)) && is_screen_faded_out()) && func_1132(uParam4) <= 5000) && func_1132(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_1116(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1137(&(uParam4->f_213), 0);
					func_1108(uParam4, 536870912);
				}
				if (func_1132(uParam4) >= 5000 && func_1132(uParam4) <= (func_1131(uParam4) - 5000))
				{
					func_1138();
				}
			}
			break;
		case 6:
			if (func_1134(uParam4))
			{
				func_1135(uParam4);
				func_1136(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_1116(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_156))
					{
						func_1108(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (!_is_anim_scene_paused(uParam4->f_156))
					{
						set_anim_scene_paused(uParam4->f_156, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1121(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_1120(uParam4, 3);
					}
					else if (func_367(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_1120(uParam4, 3);
					}
				}
				if (func_1117(uParam4) == 3)
				{
					if (func_1116(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1120(uParam4, 4);
			break;
	}
	return false;
}

void func_779(var uParam0, char* sParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = _create_var_string(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = cParam2;
		uParam0->f_5 = func_1139(uParam0->f_7, -163964935, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		uParam0->f_6 = func_1139(uParam0->f_8, 648122183, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_1140(uParam0->f_5, 1);
		}
		func_1141(uParam0->f_5, 17, 1, 1);
		func_1141(uParam0->f_6, 17, 1, 1);
		func_1142(uParam0->f_5, 6, 1);
		func_1142(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = get_game_timer() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = (get_game_timer() + round((to_float(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = _uiprompt_set_register_horizontal_orientation();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_play("MissionChoice");
		}
		_0x6339c1ea3979b5f7("make_decision", "player_decision_moment_scenes");
	}
}

bool func_780(var uParam0)
{
	return func_803(uParam0, &(uParam0->f_4));
}

void func_781(var uParam0)
{
	func_804(uParam0, &(uParam0->f_4));
}

bool func_782(var uParam0)
{
	return uParam0->f_3;
}

bool func_783(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_292(uParam0->f_5) || !func_292(uParam0->f_6))
		{
			return false;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_5]->f_3) && func_1143(uParam0->f_5, 1)) || func_1144(uParam0->f_5, 1))
		{
			if (func_1145(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_6]->f_3) && func_1143(uParam0->f_6, 1)) || func_1144(uParam0->f_6, 1))
		{
			if (func_1145(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = get_game_timer();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_5]->f_3))
				{
					fVar2 = func_1146(uParam0->f_6, 1);
					fVar3 = func_1146(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_84(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_1139(uParam0->f_7, -163964935, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						else
						{
							uParam0->f_5 = func_1139(uParam0->f_7, -163964935, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						func_84(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_1139(uParam0->f_8, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_1140(uParam0->f_5, 1);
						}
						func_1142(uParam0->f_5, 6, 1);
						func_1142(uParam0->f_6, 6, 1);
						func_1141(uParam0->f_5, 17, 1, 1);
						func_1141(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_6]->f_3))
			{
				fVar2 = func_1146(uParam0->f_5, 1);
				fVar3 = func_1146(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_84(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_1139(uParam0->f_8, 648122183, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					else
					{
						uParam0->f_6 = func_1139(uParam0->f_8, 648122183, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					func_84(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_1139(uParam0->f_7, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_1140(uParam0->f_5, 1);
					}
					func_1142(uParam0->f_5, 6, 1);
					func_1142(uParam0->f_6, 6, 1);
					func_1141(uParam0->f_5, 17, 1, 1);
					func_1141(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

void func_784(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	if (bParam1)
	{
		func_1147(iParam0, 4);
		func_1148(iVar0, 1);
		func_1149(iVar0, 1);
	}
	else
	{
		func_1150(iParam0, 4);
		func_1149(iVar0, 0);
	}
}

void func_785(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	func_1148(iVar0, bParam1);
}

bool func_786(var uParam0)
{
	return *uParam0 == 1;
}

int func_787(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_621(uParam0, &(uParam0->f_1));
}

Vector3 func_788(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_6;
	}
	return 0f, 0f, 0f;
}

float func_789(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 40000f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_9.f_2;
	}
	return 40000f;
}

void func_790()
{
	if (!_0xf6a8a652a6b186cd(uVar2324))
	{
		uLocal_2326 = _0x00bbf7ceae8c666a(func_1151(), 32f, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (func_1152(Global_1393237->f_11[iVar2176]->f_3, func_1151(), 32f, 20f, 1))
		{
			func_1153(iVar2176, 131072, 0);
		}
		iVar0++;
	}
}

void func_791(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_89(iParam0))
	{
		return;
	}
	if (!func_299(iParam0))
	{
		return;
	}
	iVar0 = func_302(iParam0);
	if (bParam1)
	{
		if (func_300(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_300(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_1154(func_399(iParam0));
			}
			if (func_1() != 0)
			{
				_0xb2a38826e5886e83(func_300(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_300(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_1155(iParam0);
	if (!func_89(func_308(0)))
	{
		func_307(iParam0, 3);
		func_309(bParam2);
		if (func_1() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_310(1);
		}
		func_1156(iParam0, -1);
		if (bParam1 && !func_911(2))
		{
			func_1157(&Global_0, 1024);
		}
		if (func_1() == -1)
		{
			func_1158(&(Global_1347343->f_11), 536870912);
			func_1159(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_1160(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_1161(0);
			}
		}
		if (func_1() == -1)
		{
			iVar1 = func_304(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_306();
				switch (iVar1)
				{
					case 0:
						func_1162(0);
						break;
					case 1:
						func_1162(1);
						break;
					case 2:
						func_1162(2);
						break;
					case 3:
						func_1162(3);
						break;
					case 4:
						func_1162(4);
						break;
					case 5:
						func_1162(5);
						break;
					case 6:
						func_1162(5);
						break;
					case 7:
						func_1162(7);
						break;
					case 8:
						func_1162(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_399(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_1162(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_399(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_1162(11);
						break;
					default:
						iVar1 = func_306();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_1163(0);
									break;
								case 1:
									func_1163(1);
									break;
								case 2:
									func_1163(2);
									break;
								case 3:
									func_1163(3);
									break;
								case 4:
									func_1163(4);
									break;
								case 5:
									func_1163(5);
									break;
								case 6:
									func_1163(5);
									break;
								case 7:
									func_1163(7);
									break;
								case 8:
									func_1163(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_311(1);
	}
	else
	{
		func_1156(iParam0, -1);
		func_307(iParam0, 4);
	}
	func_312(iParam0, 0);
}

bool func_792(var uParam0)
{
	return *uParam0 == 2;
}

char* func_793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BEG_B";
		case 1:
			return "BEG_C";
		default:
			break;
	}
	return "BEG_A";
}

int func_794(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xae6ada8fe7e84acc(*uParam0, sParam1);
}

bool func_795(var uParam0)
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

void func_796(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (func_619(uParam0, &(uParam0->f_1)))
	{
		func_620(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_807(uParam0, &(uParam0->f_4));
		}
	}
}

void func_797(var uParam0)
{
	if (uParam0->f_3)
	{
		switch (*uParam0)
		{
			case 0:
				animpostfx_stop("MissionChoice");
				break;
			case 1:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 3 && uParam0->f_1 == 0)
					{
						animpostfx_stop("MissionChoice");
						animpostfx_play("PlayerHonorChoiceGood");
					}
					else
					{
						_0xc5cb91d65852ed7e("MissionChoice");
					}
				}
				break;
			case 2:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 2 && uParam0->f_1 == 0)
					{
						animpostfx_stop("MissionChoice");
						animpostfx_play("PlayerHonorChoiceBad");
					}
					else
					{
						_0xc5cb91d65852ed7e("MissionChoice");
					}
				}
				break;
		}
		if (func_292(uParam0->f_5))
		{
			func_84(&(uParam0->f_5), 1, 1);
		}
		if (func_292(uParam0->f_6))
		{
			func_84(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		uParam0->f_2 = 0;
		_uiprompt_clear_horizontal_orientation(uParam0->f_15);
		uParam0->f_15 = -1;
		_0x9428447ded71fc7e("player_decision_moment_scenes");
	}
}

char* func_798(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RCMP_INT_LO_B";
		case 1:
			return "RCMP_INT_LO_C";
		default:
			break;
	}
	return "RCMP_INT_LO_A";
}

bool func_799(int iParam0, int iParam1)
{
	if (!func_25(268435456))
	{
		if (func_326(*iParam0, &(Local_2370[3]), "RailroadForeman", -1132719179, 0, 1, 0))
		{
			if (!func_368(*iParam0, 993674639))
			{
				func_237(iParam0, func_236(), 0, 0, 1, iParam1, 0, 0, 0);
				if (does_entity_exist(Local_2650.f_690[4]->f_8))
				{
					delete_object(&(Local_2650.f_690[4]->f_8));
				}
				if (does_entity_exist(Local_2650.f_690[5]->f_8))
				{
					delete_object(&(Local_2650.f_690[5]->f_8));
				}
				if (does_entity_exist(Local_2650.f_690[6]->f_8))
				{
					delete_object(&(Local_2650.f_690[6]->f_8));
				}
				func_8(268435456);
				return true;
			}
		}
	}
	return false;
}

bool func_800(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

char* func_801(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_line_01";
		case 1:
			return "PBL_line_02";
		case 2:
			return "PBL_line_03";
		case 3:
			return "PBL_line_04";
		default:
			break;
	}
	return "PBL_idle";
}

bool func_802(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, bool bParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_370(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
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
	if (func_1164(iParam0, bParam5))
	{
		if (func_1165(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, bParam9))
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

bool func_803(var uParam0, char* sParam1)
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

void func_804(var uParam0, char* sParam1)
{
	func_1166(uParam0, sParam1, 0);
}

bool func_805()
{
	if (!func_43(32768))
	{
		return false;
	}
	if (func_108(iLocal_3981[0]))
	{
		return false;
	}
	if (!func_374(-3.5f, 1, 0, 0))
	{
		return false;
	}
	if (func_375("RCMP_INTP") || func_375("RCMP_INTN"))
	{
		return false;
	}
	if (iVar2143 == &iLocal_3981[0])
	{
		return false;
	}
	if (func_262(8192))
	{
		return true;
	}
	if (!has_anim_event_fired(&(iLocal_3981[0]), -921824043))
	{
		return false;
	}
	if (!(iVar2174 >= 3 || func_795(Local_2370[0])))
	{
		return false;
	}
	if (!(func_253(vLocal_2327[0], 3.5f) || func_337(&(iLocal_3981[0]), Global_35, 1, 1) < 10f))
	{
		return false;
	}
	return true;
}

bool func_806()
{
	if (iVar2143 == &iLocal_3981[0])
	{
		return false;
	}
	if (func_262(8192))
	{
		return true;
	}
	if (func_337(&(iLocal_3981[0]), Global_35, 1, 1) < 10f && is_entity_on_screen(&(iLocal_3981[0])))
	{
		return true;
	}
	if (iVar2174 <= 3)
	{
		return false;
	}
	if (!func_619(Local_2370[0], "PBL_idle"))
	{
		return false;
	}
	return true;
}

void func_807(var uParam0, char* sParam1)
{
	func_1166(uParam0, sParam1, 1);
}

float func_808()
{
	return 0f;
}

Vector3 func_809(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2210.748f, 696.9096f, 97.3888f;
		case 1:
			return 2221.975f, 702.6529f, 92.6824f;
		case 2:
			return 2231.502f, 719.36f, 91.5693f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_810()
{
	return 2259.779f, 786.6265f, 96.2632f;
}

float func_811()
{
	return 179.39f;
}

void func_812(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_813(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_1167(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_814()
{
	if (func_118(&Local_2145, 16))
	{
		return false;
	}
	if (func_635(2206.056f, 638.5417f, 95.63711f, 2203.771f, 642.9936f, 96.20085f, Global_36))
	{
		return false;
	}
	vVar0 = { func_348(Global_35, 1065353216) };
	if (func_261(func_1168(0), 1) < 3f)
	{
		return true;
	}
	if (get_distance_between_coords(vVar0, func_1168(0), true) < 3f)
	{
		return true;
	}
	return false;
}

bool func_815()
{
	if (func_262(524288))
	{
		return true;
	}
	if (!func_108(iLocal_3981[0]))
	{
		return true;
	}
	return false;
}

int func_816(int iParam0, char[4] cParam1)
{
	if (iVar2474 < 4)
	{
		disable_control_action(0, -2131587435, false);
	}
	switch (iVar2474)
	{
		case 0:
			if (func_292(Local_3653.f_34))
			{
				if (!is_disabled_control_pressed(0, 1367437629))
				{
					func_785(Local_3653.f_34, 0, 1);
				}
				else
				{
					func_785(Local_3653.f_34, 1, 1);
				}
			}
			if (!func_326(Global_35, &(Local_2370[iParam0]), cParam1, 0, 0, 1, 0))
			{
				if (func_1072(&(Local_3653.f_34), "CUTSCENE_SKIP", func_45(), Global_35, 1367437629, 1097859072, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, -2018976333, 1))
				{
					func_106(1);
					set_ped_reset_flag(Global_35, 175, true);
					iLocal_2478 = 1;
				}
			}
			break;
		case 1:
			set_ped_reset_flag(Global_35, 175, true);
			do_screen_fade_out(2000);
			func_263(16384);
			func_1169(0, 0);
			iLocal_2478 = 2;
			break;
		case 2:
			set_ped_reset_flag(Global_35, 175, true);
			if (is_screen_faded_out())
			{
				func_1170(Local_2370[iParam0], 1);
				func_700(0);
				switch (iLocal_14)
				{
					case 1:
						func_1171(iParam0);
						break;
					case 2:
						switch (iParam0)
						{
							case 2:
								func_1172(iParam0);
								break;
							case 1:
								func_1173(iParam0);
								break;
						}
						break;
				}
				func_755(Local_2370[iParam0]);
				func_60(vLocal_2327[1]);
				iLocal_2478 = 3;
			}
			break;
		case 3:
			set_ped_reset_flag(Global_35, 175, true);
			func_1169(0, 0);
			if (func_253(vLocal_2327[1], 2.5f))
			{
				func_1169(0, 0);
				do_screen_fade_in(2000);
				iLocal_2478 = 4;
			}
			break;
		case 4:
			func_1169(0, 0);
			if (is_screen_faded_in())
			{
				func_255(1);
				func_1169(0, 0);
				iLocal_2478 = 0;
				return 1;
			}
			else
			{
				set_ped_reset_flag(Global_35, 175, true);
			}
			break;
	}
	return 0;
}

int func_817(int iParam0)
{
	iVar0 = func_376(iParam0);
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

void func_818(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_819()
{
	if (!func_111(4))
	{
		iVar0 = func_968(1);
		if (iVar0 < Global_40.f_9096[Local_3653.f_136]->f_6)
		{
			Global_40.f_9096[Local_3653.f_136]->f_6 = iVar0;
		}
		func_1174(Global_40.f_9096[Local_3653.f_136]->f_6, 0, 0, 1, 1);
		func_247(Local_3653.f_136, 32);
		func_106(4);
	}
}

void func_820(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1175(iParam0, sParam4, iParam5);
	}
	func_1176(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_821(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1177(iParam0);
		return func_1178(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_822()
{
	if (!func_262(2097152))
	{
		if (func_111(2))
		{
			Global_40.f_9096[Local_3653.f_136]->f_6 = 0;
			if (func_262(16384))
			{
				func_1169(0, 0);
			}
			func_15(&Local_3653, 128);
			func_296(&Local_3653);
			func_5(Local_3653.f_136, 1073741824);
			if (!is_entity_dead(&(iLocal_3981[0])) && func_25(32768))
			{
				func_328(Local_2370[1], &(iLocal_3981[0]), "vic");
				task_carriable(&(iLocal_3981[0]), -2146271366, 0, 0, 0);
			}
			if (func_4(Local_3653.f_136, 8))
			{
				func_83();
			}
			if (func_89(iVar2172))
			{
				func_873(iVar2172, 1, 1, 0, 1);
			}
		}
		display_radar(true);
		func_297(uLocal_4044[0]);
		func_133(32);
		func_84(&(Local_3653.f_34), 1, 1);
		if (!is_entity_dead(&(iLocal_3981[0])))
		{
			set_blocking_of_non_temporary_events(&(iLocal_3981[0]), false);
			set_ped_config_flag(&(iLocal_3981[0]), 178, true);
			set_ped_config_flag(&(iLocal_3981[0]), 288, false);
		}
		func_263(2097152);
	}
}

void func_823(int iParam0)
{
	if (!func_262(4194304))
	{
		if (func_111(2))
		{
			if (does_entity_exist(Local_2650.f_690[9]->f_8))
			{
				delete_object(&(Local_2650.f_690[9]->f_8));
			}
			if (does_entity_exist(Local_2650.f_690[10]->f_8))
			{
				delete_object(&(Local_2650.f_690[10]->f_8));
			}
		}
		func_844(0);
		if (func_262(16384))
		{
			func_1169(0, 0);
		}
		if (!func_25(32768))
		{
			if (!func_262(16384))
			{
				func_709(&uLocal_2470, func_788(Local_2370[1], "foreman", 0), func_789(Local_2370[1], "foreman", 0), 2);
			}
			func_710(iParam0, -1);
		}
		func_133(32);
		if (func_292(Local_3653.f_34))
		{
			func_84(&(Local_3653.f_34), 1, 1);
		}
		_request_scenario_type(func_506(1, 0), 262148, -532378284, func_751(1, 0));
		func_1179();
		if (func_584())
		{
			func_9(Local_3653.f_136, 8);
			func_263(512);
		}
		func_196(1);
		func_344(16384);
		func_263(4194304);
	}
}

void func_824(int iParam0)
{
	clear_ped_tasks_immediately(*iParam0, false, true);
	func_706(*iParam0, func_1180(), 0f, 2, 1073741824);
}

bool func_825()
{
	return false;
}

void func_826()
{
	if (bVar4547)
	{
		return;
	}
	if (func_67())
	{
		return;
	}
	if (!func_89(iVar2172))
	{
		iLocal_2174 = func_180(128, 2, 3, -621415388);
		if (func_89(iVar2172))
		{
			func_748(iVar2172, 1);
		}
	}
	if (func_89(iVar2172))
	{
		if (!func_43(32768))
		{
			if (func_840())
			{
				func_713(&cLocal_2184, 1);
				func_753(&(uLocal_3985[3]), 0);
				if (!func_90(iVar2172))
				{
					if (!func_299(iVar2172))
					{
						func_748(iVar2172, 1);
					}
					func_791(iVar2172, 1, 1);
				}
				func_47(32768);
			}
		}
		else if (!func_840())
		{
			func_753(&(uLocal_3985[3]), 1);
			func_83();
			if (func_90(iVar2172))
			{
				func_91(iVar2172, 0, 2);
				func_748(iVar2172, 1);
			}
			func_42(32768);
		}
	}
}

void func_827(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 65536);
	}
	else
	{
		func_230(iParam0, 65536);
	}
}

int func_828()
{
	return 421625586;
}

int func_829()
{
	return -1315328293;
}

void func_830()
{
	uLocal_2471 = create_scenario_point_attached_to_entity(Local_2650.f_690[0]->f_8, func_506(0, 0), 0.009f, 0.058f, 0.5f, -180f, 0, 0, 0);
	_set_scenario_point_flag(iVar2469, 19, true);
}

Vector3 func_831(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		return 2182.512f, 776.3961f, 106.6537f;
	}
	if (!bParam1)
	{
		return 2182.512f, 776.396f, 106.6537f;
	}
	return 2182.194f, 776.54f, 106.6718f;
}

float func_832(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		return -8.21f;
	}
	if (!bParam1)
	{
		return -8.21f;
	}
	return 120.57f;
}

char* func_833(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
	}
	if (bParam1)
	{
		return "PROP_HUMAN_SEAT_CHAIR_PORCH_SMOKING_MALE_B";
	}
	return "PROP_HUMAN_SEAT_BENCH_PORCH_SMOKING_MALE_A";
}

bool func_834()
{
	if (func_118(&Local_2145, 16))
	{
		return false;
	}
	if (func_635(2185.302f, 776.7045f, 106.0465f, 2182.479f, 781.5592f, 106.1757f, Global_36))
	{
		return false;
	}
	vVar0 = { func_348(Global_35, 1065353216) };
	if (func_261(func_838(0), 1) < 3f)
	{
		return true;
	}
	if (get_distance_between_coords(vVar0, func_838(0), true) < 3f)
	{
		return true;
	}
	return false;
}

int func_835(char[4] cParam0, char* sParam1, int iParam2)
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
	else if (func_659(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_836(int iParam0)
{
	bVar1 = func_266(*iParam0, 1, 1) >= 10f;
	if (bVar1)
	{
		iVar0 = -570862526;
	}
	else
	{
		iVar0 = -79154248;
	}
	return func_1182(*iParam0, iVar0, 0.1f, func_751(0, 0), func_1181(bVar1, "RRFOR_STG2_COHIGH", "RRFOR_STG2_COLOW"), 0, 106);
}

char* func_837(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!bParam1)
			{
				return "RCMP_F01CS";
			}
			else
			{
				return "RCMP_F01MS";
			}
			break;
		case 1:
			return "RCMP_F01CSB";
		case 2:
			return "RCMP_F01CSC";
	}
	return "RCMP_F01CS";
}

Vector3 func_838(bool bParam0)
{
	if (!bParam0)
	{
		return 2184.668f, 778.6125f, 107.1735f;
	}
	return 2186.378f, 779.5057f, 106.1256f;
}

void func_839(int* iParam0, var uParam1, int iParam2)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	*iParam0 = _0xa6ef0c54a3443e70(iParam2, uParam1);
}

bool func_840()
{
	if (func_1042(2) || func_1042(1))
	{
		return false;
	}
	if (func_118(&Local_2145, 16))
	{
		return false;
	}
	if (!func_194(Global_35, (*Global_1392194)[Local_3653.f_136]->f_5, 1, 0))
	{
		return false;
	}
	if (!func_4(Local_3653.f_136, 4))
	{
		return false;
	}
	if (func_11(Local_3653.f_136, 262144))
	{
		return false;
	}
	return true;
}

Vector3 func_841()
{
	return 2186.492f, 879.1049f, 113.4622f;
}

Vector3 func_842()
{
	return 1.6621f, 0f, 92.7695f;
}

float func_843()
{
	return 30.0251f;
}

void func_844(int iParam0)
{
	if (is_bit_set(iVar4547, iParam0))
	{
		clear_bit(&uLocal_4550, iParam0);
		_0xa1cfb35069d23c23(&(iLocal_2305[iParam0]));
		_0x74c2b3dc0b294102(&(iLocal_2305[iParam0]));
	}
}

void func_845(var uParam0, int iParam1)
{
	func_1183(uParam0, 4);
	func_1184(uParam0, 10);
	func_1185(uParam0, iParam1);
}

int func_846(int iParam0, bool bParam1)
{
	iLocal_2178 = 0;
	while (iVar2174 < iVar2646)
	{
		set_ped_can_play_ambient_anims(&(iLocal_3981[iVar2174]), false);
		iLocal_2178 = iVar2174 + 1;
	}
	if (func_1186(&Local_3653, 256))
	{
		if (func_261(func_250(), 1) < 25f)
		{
			func_450(&Local_3653, 0);
			func_42(512);
			if (func_239(Local_3653.f_138, 0) && !is_ped_using_any_scenario(*iParam0))
			{
				_task_use_nearest_scenario_to_coord(*iParam0, func_249(), 5f, -1, false, false, false, false);
			}
		}
	}
	else if (func_261(func_250(), 1) >= 25f)
	{
		func_450(&Local_3653, 1);
	}
	switch (iVar2472)
	{
		case 0:
			Local_2509.f_8 = 0;
			Local_2509.f_9 = 0;
			func_445(&uLocal_2114);
			iLocal_2476 = 2;
			break;
		case 2:
			if ((!is_entity_dead(&(iLocal_3981[0])) && func_541(&(iLocal_3981[0]), Global_35, 0, 15f, 0)) && func_374(-3.5f, 1, 0, 0))
			{
				func_1187(&Local_2509);
				func_372(&(Local_3653.f_35), "RCMP_OW00", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
				_0x7c511e91738a0828(&(iLocal_3981[0]), Global_35, 16, 0);
				_0xe7fa07624574b79a(&(iLocal_3981[0]), Global_35, 2, 2, 5f, 1, 0, 0, 0);
				_0xe7fa07624574b79a(&(iLocal_3981[1]), Global_35, 1, 1, 3f, 1, 0, 0, 0);
				_0xe7fa07624574b79a(&(iLocal_3981[2]), Global_35, 1, 1, 7f, 1, 0, 0, 0);
				func_60(vLocal_2327[1]);
				iLocal_2476 = 3;
			}
			if (func_284(&iLocal_3981, &uLocal_2114, &uLocal_2142, &uLocal_2143, 0, (iVar2646 - 1), 1))
			{
				iLocal_2476 = 7;
			}
			break;
		case 3:
			if (func_374(-3.5f, 1, 0, 0) && func_1188())
			{
				func_60(vLocal_2327[1]);
				func_372(&(Local_3653.f_35), "RCMP_OW00A", &(iLocal_3981[0]), Global_35, 0, 0, 1, 1);
				_0xe7fa07624574b79a(&(iLocal_3981[0]), Global_35, 2, 2, 10f, 1, 0, 0, 0);
				_0xe7fa07624574b79a(&(iLocal_3981[1]), Global_35, 2, 1, 6f, 1, 0, 0, 0);
				_0xe7fa07624574b79a(&(iLocal_3981[2]), Global_35, 2, 1, 7f, 1, 0, 0, 0);
				iLocal_2476 = 6;
			}
			if (func_284(&iLocal_3981, &uLocal_2114, &uLocal_2142, &uLocal_2143, 0, (iVar2646 - 1), 1))
			{
				iLocal_2476 = 7;
			}
			break;
		case 5:
			bVar0 = func_25(16);
			func_7(16, bVar0);
			if (bParam1)
			{
				if (Local_2650.f_15[0]->f_20 == -1 && !is_ped_using_any_scenario(&(iLocal_3981[0])))
				{
					_task_use_nearest_scenario_to_coord(&(iLocal_3981[0]), get_entity_coords(&(iLocal_3981[0]), true, false), 2f, -1, true, false, false, false);
				}
				else
				{
					func_1189(&(iLocal_3981[0]), Local_3890[Local_2650.f_15[0]->f_20]->f_1, &(Local_3890[Local_2650.f_15[0]->f_20]), Local_2650.f_15[0]->f_6, Local_2650.f_15[0]->f_9);
				}
			}
			iLocal_2476 = 8;
			if (!func_840())
			{
				func_753(&(uLocal_3985[3]), 1);
			}
			func_7(16, bVar0);
			break;
		case 1:
			iLocal_2476 = 8;
			break;
		case 6:
			if ((func_374(-3.5f, 1, 0, 0) && func_541(&(iLocal_3981[0]), Global_35, 0, 10f, 0)) && func_253(vLocal_2327[1], 15f))
			{
				iLocal_2476 = 7;
			}
			if (func_284(&iLocal_3981, &uLocal_2114, &uLocal_2142, &uLocal_2143, 0, (iVar2646 - 1), 1))
			{
				iLocal_2476 = 7;
			}
			break;
		case 7:
			if (func_89(iVar2170))
			{
				if (!func_299(iVar2170))
				{
					func_748(iVar2170, 1);
				}
				func_791(iVar2170, 1, 1);
			}
			func_1190(&Local_3653, &iLocal_3981, 3, func_316(268435456, 1056964608, 1065353216), 0, 0, 0, 0, 1, 195938434, 1051260355);
			iLocal_2476 = 8;
			break;
		case 8:
			return 1;
	}
	return 0;
}

void func_847()
{
	if (func_861())
	{
		func_8(536870912);
	}
}

bool func_848()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_849()
{
	if (func_25(134217728))
	{
		return false;
	}
	if (func_25(64))
	{
		return false;
	}
	if (!func_194(Global_35, &(iLocal_2305[1]), 1, 0))
	{
		return false;
	}
	if (is_ped_ragdoll(Global_35) || is_ped_falling(Global_35))
	{
		return true;
	}
	if (is_ped_getting_up(Global_35))
	{
		return true;
	}
	if (!is_ped_on_foot(Global_35))
	{
		return true;
	}
	return false;
}

struct<8> func_850(var uParam0)
{
	Var0 = { func_1191(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_1192() };
	}
	return Var0;
}

char[] func_851(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_852(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && are_strings_equal(sParam1, uParam0->f_174[iVar0]))
		{
			Var1 = { uParam0->f_158 };
			*uParam0->f_174[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_1193(uParam0, sParam1);
	func_1114(uParam0, 2097152, 1);
	func_1108(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_156, sParam1, true);
}

void func_853(var uParam0)
{
	if (func_1105(uParam0, Global_35, "Arthur", 225514697, 1, 1))
	{
		func_682(Local_2370[0], &(iLocal_3981[0]), "goon_A", 1);
		func_682(Local_2370[0], &(iLocal_3981[1]), "goon_B", 1);
		func_765(Local_2370[0], Local_2650.f_690[12]->f_8, "deed");
		task_turn_ped_to_face_entity(&(iLocal_3981[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
}

int func_854(var uParam0)
{
	clear_ped_tasks_immediately(&(iLocal_3981[0]), false, true);
	func_706(&(iLocal_3981[0]), 2178.167f, 879.6453f, 113.7449f, -101.57f, 2, 1073741824);
	clear_ped_tasks_immediately(&(iLocal_3981[1]), false, true);
	func_706(&(iLocal_3981[1]), 2176.561f, 876.7833f, 113.6541f, -46.33f, 2, 1073741824);
	clear_ped_tasks_immediately(&(iLocal_3981[2]), false, true);
	func_706(&(iLocal_3981[2]), 2176.909f, 881.9207f, 113.9176f, -149.69f, 2, 1073741824);
	return 1;
}

void func_855(var uParam0, int iParam1)
{
	uParam0->f_150 = iParam1;
	func_1106(uParam0, 4);
}

bool func_856(var uParam0)
{
	if (uParam0->f_1458)
	{
		return false;
	}
	return uParam0->f_1457;
}

bool func_857(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_858()
{
	if (is_entity_dead(&(iLocal_3981[0])))
	{
		return false;
	}
	if (is_entity_dead(&(iLocal_3981[1])))
	{
		return false;
	}
	if (is_entity_dead(&(iLocal_3981[2])))
	{
		return false;
	}
	if (is_ped_ragdoll(Global_35))
	{
		return false;
	}
	if (is_ped_falling(Global_35))
	{
		return false;
	}
	if (is_ped_getting_up(Global_35))
	{
		return false;
	}
	vVar0 = { func_348(Global_35, 1f) };
	if (func_533(&(iLocal_3981[0]), vVar0, 1) > 15f)
	{
		return false;
	}
	return true;
}

struct<4> func_859()
{
	StringCopy(&cVar0, "RCMP_MCS1", 32);
	return cVar0;
}

bool func_860(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1107(uParam0, 32768))
	{
		return true;
	}
	if (func_1194(uParam0) >= 3)
	{
		uParam0->f_1584 = func_265(get_player_index(), 0, 0, 1);
		uParam0->f_1585 = _is_ped_getting_into_a_mount_seat(Global_35, true);
		uParam0->f_1587 = is_ped_in_any_vehicle(Global_35, true);
		if (uParam0->f_1585)
		{
			if (!is_entity_dead(Global_1935630->f_40))
			{
				uParam0->f_1586 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1586 = get_mount(Global_35);
			}
		}
		if (uParam0->f_1587)
		{
			uParam0->f_1589 = get_vehicle_ped_is_in(Global_35, true);
		}
		uParam0->f_1590 = get_interior_from_entity(Global_35);
		func_1195(uParam0);
	}
	if (func_1194(uParam0) < 10)
	{
		if (func_1194(uParam0) == 3)
		{
			func_1196(uParam0, iParam5, bParam6);
		}
		else if (func_1194(uParam0) > 3)
		{
			if (func_1197(uParam0) == 0)
			{
				if (!func_1107(uParam0, 524288))
				{
					func_1198(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1183(uParam0, 4);
					func_1184(uParam0, 10);
					func_1185(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1107(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1113(uParam0->f_704[uParam0->f_1372], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1067(0);
			func_1199();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_1372 >= 0)
			{
				if (!func_1113(uParam0->f_704[uParam0->f_1376], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1200(uParam0, uParam0->f_1372))
				{
					if (func_1201(uParam0) < 7 && uParam0->f_1376 >= 0)
					{
						func_1202(uParam0, uParam0->f_704[uParam0->f_1376]->f_27, uParam0->f_1033[uParam0->f_1376]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1376 >= 0)
				{
					func_1202(uParam0, uParam0->f_704[uParam0->f_1376]->f_27, uParam0->f_1033[uParam0->f_1376]->f_1, 1065353216);
				}
				func_1203(uParam0);
			}
		}
	}
	bVar0 = func_1204(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1107(uParam0, 268435456) && bVar1) && !func_1107(uParam0, 262144))
		{
			bVar3 = is_valid_interior(uParam0->f_1590);
			if (uParam0->f_1372 >= 0)
			{
				iVar4 = get_interior_at_coords(uParam0->f_704[uParam0->f_1372]->f_1);
				if ((is_valid_interior(iVar4) && bVar3) && iVar4 == uParam0->f_1590)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_1086(uParam0, 131072);
				func_1086(uParam0, 268435456);
			}
		}
		if (func_1112(uParam0, 64) || (uParam0->f_1372 >= 0 && !func_1113(uParam0->f_704[uParam0->f_1372], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1197(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1194(uParam0) == 3 || func_1107(uParam0, 131072))
	{
		func_1205(uParam0);
		if (!func_1107(uParam0, 262144))
		{
			if ((bVar0 && func_1107(uParam0, 65536)) || func_1107(uParam0, 131072))
			{
				func_1086(uParam0, 32768);
				func_1183(uParam0, 4);
				func_1184(uParam0, 10);
				uParam0->f_1457 = 1;
				func_1185(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1194(uParam0) >= 3)
	{
		func_1206(uParam0, iParam5);
		func_1207(uParam0);
		if (!func_1208(uParam0, 1))
		{
			func_1209(uParam0);
		}
		func_1210(uParam0);
	}
	switch (func_1194(uParam0))
	{
		case 0:
			func_1211(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1212(uParam0);
			break;
		case 2:
			func_1213(uParam0);
			break;
		case 3:
			if (func_856(uParam0))
			{
				func_1214(2);
				func_1202(uParam0, uParam0->f_704[uParam0->f_1372]->f_27, uParam0->f_1033[uParam0->f_1372]->f_1, 1065353216);
				func_60(&(uParam0->f_1560));
				func_1183(uParam0, 1);
				func_1215();
				func_1184(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1107(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1194(uParam0) == 5)
			{
				if (func_1216(uParam0))
				{
					func_1183(uParam0, 2);
					func_1184(uParam0, 6);
				}
			}
			if (func_1194(uParam0) == 6)
			{
				if (func_1217(uParam0))
				{
					func_1183(uParam0, 3);
					func_1184(uParam0, 8);
				}
			}
			if (uParam0->f_1373 >= 0 || func_1218(&(uParam0->f_1560)) >= 15f)
			{
				if (func_1219(uParam0, iParam5))
				{
					if (func_1220(uParam0))
					{
						uParam0->f_1373 = func_1221(uParam0);
						func_60(&(uParam0->f_1560));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1183(uParam0, 6);
						func_1184(uParam0, 9);
					}
					else
					{
						func_1183(uParam0, 4);
						func_1184(uParam0, 10);
						func_1185(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1219(uParam0, iParam5))
			{
				func_1185(uParam0, iParam5);
				func_1184(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_861()
{
	if (((func_368(Global_35, 242628503) || func_368(Global_35, 501393341)) || func_368(Global_35, 1553520516)) || func_368(Global_35, 1920417248))
	{
		return true;
	}
	return false;
}

int func_862(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_863(vector3 vParam0)
{
	return ((func_729(&(iLocal_3981[0]), vParam0, 75f) && func_729(&(iLocal_3981[1]), vParam0, 75f)) && func_729(&(iLocal_3981[2]), vParam0, 75f));
}

void func_864()
{
	if ((!func_25(128) && !func_262(1048576)) && func_1222(&iLocal_3981, 0))
	{
		func_8(128);
	}
}

bool func_865(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	return func_1223(_0x4e88a65968a55c78(&Var0, iParam1));
}

void func_866(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_1224(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

bool func_867(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (!func_622(uParam0, sParam1))
	{
		return false;
	}
	return _0xb89fcff19dafff28(*uParam0, sParam1);
}

bool func_868(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	return _is_anim_scene_finished(*uParam0, false);
}

void func_869(vector3 vParam0, float fParam3, int* iParam4, int iParam5)
{
	if (does_blip_exist(*iParam4))
	{
		remove_blip(iParam4);
	}
	*iParam4 = _blip_add_for_radius(iParam5, vParam0, fParam3);
}

void func_870(int iParam0)
{
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, 0);
	func_1032(iParam0, 1, func_647(10));
	func_636(iParam0, 1, 0);
	func_636(iParam0, 2, 1);
	func_1032(iParam0, 2, "TRACKS_CTXT2");
	func_1033(iParam0, 2, 0);
	func_106(-2147483648);
}

int func_871(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_1225(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1175(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1176(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

int func_872(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_134(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_405(iParam0, 1);
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
			func_1226(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_12(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_1227(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_137(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_137(iParam0, 0, 0) - iParam1) < 0)
		{
			func_872(iParam0, func_137(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_135(iParam0) == -427144552)
	{
		if (!func_1228(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1229(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_1230(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_1226(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1231(iParam0, iParam1);
	return 1;
}

void func_873(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_89(iParam0))
	{
		return;
	}
	if (func_298(iParam0) == 4)
	{
		func_1232(iParam0, func_531());
		if (!func_301(iParam0) == 5 && !func_301(iParam0) == 6)
		{
			if (bParam3)
			{
				func_307(iParam0, 6);
			}
			else
			{
				func_307(iParam0, 5);
			}
			func_313(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_309(1);
	}
	iVar0 = func_302(iParam0);
	bVar1 = func_1() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_1233(0, 2);
		if (!bVar1 && bParam1)
		{
			func_1234();
		}
	}
	else
	{
		func_310(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_1235(iParam0);
	}
	else
	{
		Var2 = { func_1236(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_911(32768))
		{
			Var4 = { func_1236(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_301(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_399(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_399(iParam0)]->f_8), true);
						}
					}
					else if ((func_399(iParam0) != 95 && func_399(iParam0) != 82) && !func_401((*Global_1347702)[func_399(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_399(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_399(iParam0)]->f_8), true);
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
		func_1238(func_399(iParam0), iVar6, func_1237());
	}
	else if (iVar0 == 8)
	{
		func_1240(func_399(iParam0), iVar6, func_1237(), func_1239());
	}
	if (!func_301(iParam0) == 5 && !func_301(iParam0) == 6)
	{
		iVar9 = func_1241(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_1242(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_1243(func_399(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1244((iVar10 - 20), 0, iVar10);
					iVar11 = func_1244((iVar11 - 10), 0, iVar11);
				}
				func_1245(1);
				func_587(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_587(45, 0, 1);
				break;
			case 8:
				iVar10 = func_1246(func_399(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1244((iVar10 - 20), 0, iVar10);
					iVar11 = func_1244((iVar11 - 10), 0, iVar11);
				}
				func_587(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_1247(func_399(iParam0)))
				{
					func_1248(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_587(120, 0, 1);
				break;
			case 2:
				func_587(120, 0, 1);
				break;
			case 6:
				func_587(func_1249(func_1079(iParam0)), 0, 1);
				break;
			case 5:
				func_587(120, 0, 1);
				break;
		}
	}
	func_312(iParam0, 1);
	func_1232(iParam0, func_531());
	func_313(iParam0);
	if ((!func_301(iParam0) == 0 && bParam1) && func_1() == -1)
	{
		iVar12 = func_304(iParam0);
		if (iVar12 != -1)
		{
			func_305(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_306();
			if (iVar12 != -1)
			{
				func_305(0);
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
				switch (func_399(iParam0))
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
				if (func_400(func_399(iParam0)) && func_401((*Global_1347702)[func_399(iParam0)]->f_12, 4))
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
				if (func_399(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_1250();
				}
				break;
			case 8:
				if (func_399(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_1250();
				}
				break;
		}
	}
	if (!func_301(iParam0) == 5 && !func_301(iParam0) == 6)
	{
		if (bParam3)
		{
			func_307(iParam0, 6);
		}
		else
		{
			func_307(iParam0, 5);
		}
		func_313(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_399(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_1251();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_1252(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(-1267972061);
						func_1252(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(1619534881);
						func_1252(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(-755457379);
						func_1252(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(1015404643);
						func_1252(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(-1724192342);
						func_1252(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(1310680212);
						func_1252(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(-566881549);
						func_1252(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(-1753730528);
						func_1252(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(147796381);
						func_1252(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(-378547623);
						func_1252(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(829545206);
						func_1252(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1253(891318243);
						func_1252(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1254();
						func_1255(967523420);
						func_1256();
						func_1257();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_1258(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_1252(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_998(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_998(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_1259(304805134, 1, 1);
						if (!func_595((*Global_1347702)[21]->f_15, 1))
						{
							func_873((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_1260();
						break;
					case 26:
						func_1261();
						break;
					case 17:
						func_1262(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_1263())
						{
							func_1264(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_1265(-514575035, -1))
						{
							iVar15 = func_531();
							func_357(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_1266(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_1263())
						{
							func_1264(1529685685);
						}
						break;
					case 34:
						if (func_1263())
						{
							func_1264(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_1267();
						break;
					case 37:
						func_1268();
						if (func_1269())
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
						func_1270();
						break;
					case 43:
						func_1271();
						break;
					case 44:
						if (!func_595((*Global_1347702)[82]->f_15, 1))
						{
							func_873((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_595((*Global_1347702)[83]->f_15, 1))
						{
							func_873((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_1272();
						break;
					case 59:
						func_1273();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_1274();
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
						func_1275();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_998(451, 0);
						}
						if (!func_1276(-1992824800))
						{
							if (func_1276(1520110311))
							{
								iVar16 = func_531();
								func_357(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_1266(1937177603, iVar16, 1);
							}
						}
						if (func_1277(4))
						{
							if (!func_12(684296857, 1, 0))
							{
								iVar17 = func_531();
								func_357(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_1266(-1439688706, iVar17, 1);
							}
						}
						func_1252(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1252(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_1278(89200);
						func_1278(2300);
						func_1278(2300);
						break;
					case 68:
						func_1279();
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
						func_1280();
						func_1278(-139100);
						break;
					case 69:
						if (func_595((*Global_1347702)[9]->f_15, 1))
						{
							func_1278(-6000);
						}
						break;
					case 70:
						func_1278(23400);
						func_1278(1900);
						func_1278(-15000);
						break;
					case 71:
						func_1278(-5500);
						break;
				}
				break;
			case 8:
				switch (func_399(iParam0))
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
						Jump @5080; //curOff = 4299
						_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
						_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
						Jump @5080; //curOff = 4330
						_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
						_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
						Jump @5080; //curOff = 4375
						_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
						Jump @5080; //curOff = 4392
						_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
						Jump @5080; //curOff = 4409
						_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
						_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
						_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
						_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
						Jump @5080; //curOff = 4496
						_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
						Jump @5080; //curOff = 4513
						_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
						_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
						Jump @5080; //curOff = 4544
						_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
						Jump @5080; //curOff = 4561
						_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
						Jump @5080; //curOff = 4578
						_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
						Jump @5080; //curOff = 4595
						func_1281();
						Jump @5080; //curOff = 4602
						_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
						_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
						Jump @5080; //curOff = 4633
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						Jump @5080; //curOff = 4653
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_1282();
						Jump @5080; //curOff = 4677
						func_1283();
						func_1284();
						Jump @5080; //curOff = 4688
						if (!func_1285(6))
						{
							func_1286(6);
						}
						if (!func_1285(3))
						{
							func_1286(3);
						}
						if (func_1263())
						{
							func_1264(1534638301);
						}
						Jump @5080; //curOff = 4735
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
						Jump @5080; //curOff = 4755
						_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
						Jump @5080; //curOff = 4772
						_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
						Jump @5080; //curOff = 4789
						_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
						Jump @5080; //curOff = 4806
						_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
						Jump @5080; //curOff = 4823
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
						Jump @5080; //curOff = 4860
						_0xd8c7162ab2e2af45(1720279629);
						Jump @5080; //curOff = 4872
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						Jump @5080; //curOff = 4903
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						Jump @5080; //curOff = 4948
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						Jump @5080; //curOff = 4965
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						Jump @5080; //curOff = 5010
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						Jump @5080; //curOff = 5027
						if (func_595((*Global_1835011)[69]->f_1, 1))
						{
							func_1287(0);
							func_1278(40500);
						}
						else
						{
							func_1287(0);
							func_1278(46500);
						}
						Jump @5142; //curOff = 5080
						switch (func_399(iParam0))
						{
							case 0:
								switch (func_1079(iParam0))
								{
									case 5:
										_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
										break;
								}
								break;
						}
						func_1288(iParam0);
						func_1289();
						switch (iVar0)
						{
							case 1:
								switch (func_399(iParam0))
								{
									case 4:
										func_1290(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 61:
									case 62:
									case 63:
										func_1290(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 25:
										func_1290(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 12:
										func_1290(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 53:
										func_1290(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 20:
										func_1290(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 19:
										func_1290(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
										break;
									case 24:
										iVar18 = func_1291(iParam0);
										func_1290(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 28:
										func_1290(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 34:
										func_1290(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
										if (!func_12(-2046502963, 1, 0))
										{
											func_1252(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
										}
										break;
									case 29:
										func_1290(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
										break;
									case 37:
										break;
									case 58:
										break;
									case 57:
										func_1290(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
										break;
									case 76:
										func_1290(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 72:
										if (func_1291(iParam0) == 0)
										{
											func_1290(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
										}
										else
										{
											func_1290(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
										}
										break;
								}
								break;
							case 8:
								if (func_401((*Global_1347702)[func_399(iParam0)]->f_12, 536870912))
								{
									func_1292(11, 1);
								}
								switch (func_399(iParam0))
								{
									case 109:
										func_1290(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 55:
										func_1292(8, 1);
										break;
									case 138:
										set_bit(&(Global_40.f_9052), 1);
										set_bit(&(Global_40.f_9052), 3);
										break;
									case 94:
										func_1290(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 63:
										func_1290(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
										break;
									case 37:
										func_1290(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 116:
										func_1290(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
										break;
									case 9:
										_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
										break;
								}
								break;
							case 11:
								if (iParam0 == func_180(0, 10, 11, 2116153146))
								{
									func_1290(iParam0, func_1291(iParam0), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_180(0, 7, 11, -379687487))
								{
									func_1290(iParam0, func_1293(9), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_180(0, 8, 11, -1386089015))
								{
									func_1290(iParam0, func_1293(10), 1, 0.5f, 2, 0, 0, 1);
								}
								else if (iParam0 == func_180(0, 11, 11, -1952009645))
								{
									func_1290(iParam0, func_1293(8), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_180(0, 12, 11, 2065895756))
								{
									func_1290(iParam0, func_1293(11), 1, 0.5f, 2, 0, 0, 1);
								}
								break;
						}
						if (bParam1)
						{
							if (!func_301(iParam0) == 0)
							{
								if (func_300(iParam0) == 0)
								{
								}
								else if (_0x01f4d242765c6b24(func_300(iParam0)))
								{
									iVar19 = 0;
									if (bParam3)
									{
										iVar19 = 3;
									}
									func_303(func_302(iParam0), func_300(iParam0), iVar19);
									if (bParam4)
									{
										if (iVar0 == 8 && func_399(iParam0) == 58)
										{
											Global_1879514->f_1 = iParam0;
										}
										func_1295(func_1294(Global_1879514->f_1));
										if (iVar0 == 8 && func_399(iParam0) == 58)
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
										if (func_400(func_399(iParam0)) && func_401((*Global_1347702)[func_399(iParam0)]->f_12, 1))
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
							func_1296(bParam2, iVar20);
						}
					}
					func_311(1);
					if ((bVar13 || func_1250()) && (func_302(iParam0) == 1 || func_302(iParam0) == 8))
					{
						Global_1879534->f_6 = 1;
						Global_1879534->f_7 = 1;
					}
				}

int func_874(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_875(int iParam0, int iParam1)
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

void func_876(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_877(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
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
	return Var0;
}

struct<4> func_878(bool bParam0)
{
	iVar0 = func_411(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1298(923904168, func_1297(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1298(923904168, func_1297(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1298(923904168, func_1297(bParam0), -740156546, 0);
}

void func_879(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_880(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_411(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_881(int iParam0, int iParam1)
{
	if (!func_419(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_882(int iParam0)
{
	func_1300(func_1299(iParam0));
}

bool func_883(int iParam0)
{
	if (func_1301(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_884()
{
	return true;
}

bool func_885(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_886(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_887(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_888(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_889(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_890(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_891(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_892(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_892(int iParam0)
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

void func_893(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1303(iParam0, 32);
	func_1304();
}

void func_894(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_895(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_897(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_897(iParam0);
	}
}

int func_895(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

bool func_896(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

void func_897(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

void func_898()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_899(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_127(iParam0, 268435456);
	}
	else
	{
		func_230(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_127(iParam0, 1073741824);
	}
	else
	{
		func_230(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_127(iParam0, 536870912);
	}
	else
	{
		func_230(iParam0, 536870912);
	}
}

void func_900(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_901(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = _create_anim_scene(sParam1, iParam3, sParam2, false, true);
}

void func_902(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	load_anim_scene(*uParam0);
}

void func_903(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_904(int iParam0)
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

bool func_905(var uParam0)
{
	return func_215(*uParam0, 1);
}

void func_906(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1305(iParam1))
		{
			func_1306(iParam0, 41788943);
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
			func_1307(iParam0, 0, 1);
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
			func_1308(iParam0, 0);
			bVar0 = true;
		}
		func_1309(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_907()
{
	return -1426662425;
}

void func_908(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

var func_909(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

var func_910(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_911(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_912(int iParam0)
{
	if (func_1310(iParam0))
	{
		if (!func_1311(45))
		{
			return false;
		}
	}
	iVar0 = func_915(iParam0);
	if (func_1312())
	{
		if (!func_595((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> func_913(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_914(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_915(int iParam0)
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

int func_916(int iParam0)
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

Vector3 func_917(int iParam0)
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

void func_918(int iParam0, int iParam1)
{
	func_1313(iParam0);
	iVar0 = func_1314(iParam0, iParam1);
	if (iVar0 != 0 && !_map_is_discovery_active(iVar0))
	{
		_0xd8c7162ab2e2af45(iVar0);
	}
}

void func_919(int* iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_920(int* iParam0, var uParam1)
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
	func_1315(iParam0, uParam1, 1);
	func_538(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_921(int iParam0, int iParam1, float fParam2)
{
	return func_1316(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

void func_922(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_1317(iParam0, iParam1, iParam18);
	}
}

bool func_923(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_39))
	{
		return true;
	}
	if (func_266(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_194(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_194(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_924(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_1318(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

int func_925(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_1319(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_193(iVar0);
	return iVar1;
}

int func_926(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
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

void func_927(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1320();
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
			func_1321(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_928(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_929(bool bParam0)
{
	if (func_1322(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_930(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1323(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1323(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_955(iVar0) == -1)
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

void func_931(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1324(iParam0);
	}
}

bool func_932(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_955(iParam2);
	}
	else
	{
		iVar1 = func_954(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_955(iParam0);
	}
	else
	{
		iVar0 = func_954(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_359(*iParam1, 8388608))
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

float func_933(int iParam0, int iParam1)
{
	return func_337(iParam0, iParam1, 1, 1);
}

float func_934(int iParam0)
{
	return iParam0->f_26;
}

bool func_935(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_936(int iParam0)
{
	return iParam0->f_17;
}

bool func_937(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_359(*iParam0, 4194304))
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

int func_938(int iParam0)
{
	return iParam0->f_18;
}

bool func_939(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_629(iVar0, 0)))
		{
			if (func_987(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_940(int iParam0)
{
	return iParam0->f_23;
}

int func_941(int iParam0)
{
	return iParam0->f_21;
}

int func_942(int iParam0)
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

bool func_943(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1316(iParam0, vParam4, 0.5f))
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

int func_944(int iParam0)
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
	if (func_1325(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_945(int iParam0)
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

bool func_946(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_986(iParam1))
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

bool func_947(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_986(iParam1))
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

bool func_948(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_986(iParam1))
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

bool func_949(int iParam0, int iParam1)
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

bool func_950(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1326(iParam0, 1, 0, 0) != 2055893578)
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

bool func_951(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_952(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_533(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_953(int iParam0)
{
	return iParam0->f_24;
}

int func_954(int iParam0)
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

int func_955(int iParam0)
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

int func_956(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_949(Global_35, &iVar1))
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
		fVar2 = func_337(iParam0, player_ped_id(), 0, 1);
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
		if (func_337(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_957(int iParam0, int iParam1, bool bParam2)
{
	func_1322(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_958(iParam1, iVar0))
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
				if (!bParam2 || !func_958(iParam1, iVar1))
				{
					if (func_533(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_958(int iParam0, int iParam1)
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

bool func_959(int iParam0)
{
	if (func_1327())
	{
		return false;
	}
	return func_595((*Global_1347702)[58]->f_15, 1);
}

int func_960(int iParam0)
{
	return iParam0->f_20;
}

int func_961(int iParam0)
{
	return func_1328(iParam0, 6);
}

int func_962(int iParam0)
{
	iVar0 = func_1329(iParam0, 6);
	return iVar0;
}

int func_963(int iParam0)
{
	return func_1328(iParam0, 7);
}

int func_964(int iParam0)
{
	iVar0 = func_1329(iParam0, 7);
	return iVar0;
}

bool func_965(int iParam0)
{
	return (func_1328(iParam0, 4) || func_1328(iParam0, 5));
}

int func_966(int iParam0)
{
	iVar0 = func_1329(iParam0, 4);
	if (!does_entity_exist(iVar0))
	{
		iVar1 = func_1329(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

int func_967(int iParam0, var uParam1)
{
	uParam1->f_10 = func_1302(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_175(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1312();
	if (*uParam1)
	{
		if (bVar0 && !func_595((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1330(5))
			{
				func_1331(5);
				func_1332(5);
				func_1333(0);
				func_1334(0);
			}
		}
	}
	if (func_1335(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_595((*Global_1835011)[37]->f_1, 1)) && !func_595((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_595((*Global_1835011)[43]->f_1, 1)) && !func_595((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1336(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1337(iVar1))
	{
		bVar3 = true;
		if (func_1338(iVar1))
		{
			bVar4 = true;
		}
		if (func_1339(iVar1))
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
				func_1340(uParam1->f_10);
				*iParam0 = 0;
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
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1330(0) && func_1330(1))
			{
				func_1341(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1342())
			{
				func_1343();
			}
			func_1333(0);
			func_1334(0);
			func_1344(uParam1->f_6);
		}
	}
	if (!func_1337(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1345(uParam1->f_10) == 0 || func_1346(uParam1->f_10) == 0) || func_1347(uParam1->f_10) == 0)
			{
				func_1348(uParam1->f_10);
			}
			func_1349(uParam1->f_10);
			func_1350(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1336(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1337(iVar1))
	{
		bVar3 = true;
		if (func_1338(iVar1))
		{
			bVar4 = true;
		}
		if (func_1339(iVar1))
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
			if (!func_175(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1351(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
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
			Var8 = { func_1352(uParam1->f_10) };
			Var10 = { func_1353() };
			func_1354(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_896(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1355(uParam1->f_10);
		if (uParam1->f_2 && !func_175(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_894(uParam1->f_10);
	if (func_896(uParam1->f_10))
	{
		iVar16 = func_895(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_968(int iParam0)
{
	return _money_get_cash_balance();
}

int func_969(int iParam0, int iParam1, int iParam2)
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

bool func_970(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_971(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1356(iParam0, iParam1, bParam2);
}

int func_972(int iParam0)
{
	iVar0 = func_588(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1357(iVar0);
}

int func_973(int iParam0, int iParam1)
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
			func_1358(iVar2);
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

void func_974()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_975(int iParam0, int iParam1)
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

int func_976(int iParam0)
{
	if (!func_134(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_977(int iParam0)
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

void func_978(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_979(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_980(int iParam0, int iParam1)
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
			func_1359((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1359(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_89(&(Global_1898164->f_1[0])))
	{
		func_307(&(Global_1898164->f_1[0]), 3);
	}
}

int func_981()
{
	return Global_1894899->f_2;
}

bool func_982(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

float func_983(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_953(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1360(iParam0);
	}
	return func_953(iParam0);
}

float func_984(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_985()
{
	iVar0 = func_532(func_531());
	iVar1 = func_638(func_531());
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

bool func_986(int iParam0)
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

bool func_987(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_988(int iParam0, int iParam1)
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

void func_989(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_990(int iParam0, int iParam1)
{
	iVar0 = func_640(*iParam0);
	iVar1 = func_639(*iParam0);
	if (iParam1 < 1 || iParam1 > func_642(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_991(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_992(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_993(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_994(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_995(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_994(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_74(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
			func_60(&(iParam1->f_13));
		}
		if (func_1361(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1362(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_995(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_919(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_1363(*iParam0, 1, 1);
						}
					}
					else if (func_761(iParam1, 22))
					{
						func_1363(*iParam0, 0, 1);
					}
				}
				if (func_1364(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1365(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1366(iParam8);
					if (func_1367(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1368(uParam3);
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
					func_1369(iParam1, uParam3, fVar8);
					if (func_1370(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_538(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1371(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1364(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1372(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1367(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1365(iParam0, func_1364(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1366(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_538(uParam3, 0, 0, 1, 1);
					}
					func_543(iParam1, 1);
				}
				func_1369(iParam1, uParam3, fVar8);
				if (func_1371(iParam0, iParam1, fParam4, bVar6))
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
			func_920(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_996(int* iParam0, var uParam1, int iParam2)
{
	iVar0 = func_1373(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_94(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_997(int iParam0)
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

void func_998(int iParam0, bool bParam1)
{
	func_1374(iParam0, &iVar0, &iVar1);
	if (!func_1375(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1376(iVar0, iVar1);
}

bool func_999(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_1000(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_1001(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_1002(int* iParam0, char* sParam1)
{
	if (func_292(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_1001(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_1005(iParam0, 1);
}

bool func_1003(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_1004(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_1005(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_1006(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_220(iVar2) != 0 && _0x800df3fc913355f3(func_167(iVar2)))
		{
			if (func_167(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_1007(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_1008(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_1009(int iParam0)
{
	iVar0 = 838;
	while (iVar0 <= 857)
	{
		if (!func_147(iVar0))
		{
		}
		else if (func_1377(iVar0))
		{
		}
		else if (func_676(iVar0))
		{
		}
		else if (!func_223(iVar0, 0))
		{
		}
		else
		{
			iVar1 = func_52(iVar0);
			if (is_entity_dead(iVar1))
			{
			}
			else if (!_is_ped_using_scenario_hash(iVar1, -455464142))
			{
			}
			else if (!func_111(262144))
			{
				if (func_194(iVar1, &(iLocal_2305[9]), 1, 0))
				{
				}
				else
				{
					func_40(1, &Local_2650);
					iLocal_2144 = 0;
					return iVar0;
				}
				iVar0++;
				if (!func_111(262144))
				{
					iLocal_2144 = iVar2141 + 1;
					if (iVar2141 >= 300)
					{
						func_106(262144);
					}
				}
				return -1;
			}
		}
	}
}

void func_1010(int iParam0, int iParam1)
{
	if ((&iLocal_2487[iParam1] > 1 && &iLocal_2487[iParam1] < 7) || &iLocal_2487[iParam1] == 8)
	{
		if (!get_is_task_active(*iParam0, 3))
		{
			func_1022(iParam1);
		}
	}
}

bool func_1011(int iParam0)
{
	if (iParam0 >= 4)
	{
		return false;
	}
	if (&iLocal_2487[iParam0] >= 6)
	{
		return false;
	}
	if (func_43(-2147483648))
	{
		return true;
	}
	if (func_22(&Local_3653, 256))
	{
		return true;
	}
	return false;
}

void func_1012(int iParam0, char* sParam1)
{
	if (iParam0 >= 4)
	{
		return;
	}
	func_787(Local_2370[func_322(iParam0)], sParam1);
}

Vector3 func_1013(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2225.502f, 669.187f, 94.464f;
							case 1:
								return 2225.31f, 669.622f, 94.527f;
							case 2:
								return 2225.123f, 670.053f, 94.59f;
							case 3:
								return 2224.915f, 670.549f, 94.662f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2225.624f, 668.897f, 94.412f;
							case 1:
								return 2225.808f, 668.47f, 94.347f;
							case 2:
								return 2226.021f, 667.989f, 94.274f;
							case 3:
								return 2226.212f, 667.557f, 94.208f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2222.858f, 675.553f, 95.383f;
							case 1:
								return 2222.681f, 676.026f, 95.45f;
							case 2:
								return 2222.503f, 676.502f, 95.518f;
							case 3:
								return 2222.33f, 676.95f, 95.582f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2222.25f, 677.139f, 95.63f;
							case 1:
								return 2222.429f, 676.668f, 95.56f;
							case 2:
								return 2222.6f, 676.218f, 95.494f;
							case 3:
								return 2222.767f, 675.777f, 95.429f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2209.132f, 716.466f, 100.647f;
							case 1:
								return 2208.99f, 716.968f, 100.702f;
							case 2:
								return 2208.843f, 717.489f, 100.76f;
							case 3:
								return 2208.704f, 717.954f, 100.812f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2208.496f, 718.627f, 100.887f;
							case 1:
								return 2208.633f, 718.144f, 100.835f;
							case 2:
								return 2208.769f, 717.67f, 100.784f;
							case 3:
								return 2208.902f, 717.199f, 100.733f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2207.189f, 723.161f, 101.376f;
							case 1:
								return 2207.062f, 723.635f, 101.426f;
							case 2:
								return 2206.935f, 724.109f, 101.476f;
							case 3:
								return 2206.799f, 724.595f, 101.527f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2206.875f, 724.285f, 101.499f;
							case 1:
								return 2207.003f, 723.829f, 101.451f;
							case 2:
								return 2207.139f, 723.344f, 101.4f;
							case 3:
								return 2207.271f, 722.874f, 101.35f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2185.225f, 859.421f, 111.432f;
							case 1:
								return 2185.104f, 859.88f, 111.464f;
							case 2:
								return 2184.975f, 860.368f, 111.498f;
							case 3:
								return 2184.854f, 860.828f, 111.53f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2185.041f, 860.089f, 111.454f;
							case 1:
								return 2185.174f, 859.612f, 111.42f;
							case 2:
								return 2185.306f, 859.122f, 111.385f;
							case 3:
								return 2185.435f, 858.643f, 111.351f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2183.488f, 865.083f, 111.83f;
							case 1:
								return 2183.341f, 865.531f, 111.862f;
							case 2:
								return 2183.182f, 866.017f, 111.896f;
							case 3:
								return 2183.034f, 866.468f, 111.928f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2183.111f, 866.215f, 111.877f;
							case 1:
								return 2183.27f, 865.744f, 111.845f;
							case 2:
								return 2183.425f, 865.284f, 111.813f;
							case 3:
								return 2183.587f, 864.803f, 111.78f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 1927.164f, 926.295f, 115.909f;
						case 1:
							return 1926.702f, 926.126f, 115.896f;
						case 2:
							return 1926.234f, 925.948f, 115.882f;
						case 3:
							return 1925.776f, 925.771f, 115.869f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1926.986f, 926.225f, 115.895f;
						case 1:
							return 1927.449f, 926.392f, 115.907f;
						case 2:
							return 1927.905f, 926.557f, 115.919f;
						case 3:
							return 1928.362f, 926.722f, 115.931f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 1920.228f, 923.628f, 115.703f;
						case 1:
							return 1919.773f, 923.453f, 115.687f;
						case 2:
							return 1919.295f, 923.269f, 115.67f;
						case 3:
							return 1918.841f, 923.095f, 115.654f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1920.023f, 923.551f, 115.694f;
						case 1:
							return 1920.503f, 923.734f, 115.709f;
						case 2:
							return 1920.962f, 923.915f, 115.723f;
						case 3:
							return 1921.403f, 924.09f, 115.737f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1014(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 7.589f, -0.505f, 22.677f;
							case 1:
								return 7.589f, -0.505f, 22.677f;
							case 2:
								return 7.589f, -0.505f, 22.677f;
							case 3:
								return 7.589f, -0.505f, 22.677f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -7.897f, -0.505f, -156.123f;
							case 1:
								return -7.897f, -0.505f, -156.123f;
							case 2:
								return -7.897f, -0.505f, -156.123f;
							case 3:
								return -7.897f, -0.505f, -156.123f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 7.604f, -0.149f, 20.509f;
							case 1:
								return 7.604f, -0.149f, 20.509f;
							case 2:
								return 7.604f, -0.149f, 20.509f;
							case 3:
								return 7.604f, -0.149f, 20.509f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -7.865f, -0.875f, -159.095f;
							case 1:
								return -7.865f, -0.875f, -159.095f;
							case 2:
								return -7.865f, -0.875f, -159.095f;
							case 3:
								return -7.865f, -0.875f, -159.095f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 6.072f, 0.209f, 15.798f;
							case 1:
								return 6.072f, 0.209f, 15.798f;
							case 2:
								return 6.072f, 0.209f, 15.798f;
							case 3:
								return 6.072f, 0.209f, 15.798f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -5.928f, -0.181f, -164.189f;
							case 1:
								return -5.928f, -0.181f, -164.189f;
							case 2:
								return -5.928f, -0.181f, -164.189f;
							case 3:
								return -5.928f, -0.181f, -164.189f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 5.772f, 0.209f, 14.998f;
							case 1:
								return 5.772f, 0.209f, 14.998f;
							case 2:
								return 5.772f, 0.209f, 14.998f;
							case 3:
								return 5.772f, 0.209f, 14.998f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -5.828f, -0.181f, -164.289f;
							case 1:
								return -5.828f, -0.181f, -164.289f;
							case 2:
								return -5.828f, -0.181f, -164.289f;
							case 3:
								return -5.828f, -0.181f, -164.289f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 3.872f, -0.552f, 14.773f;
							case 1:
								return 3.872f, -0.552f, 14.773f;
							case 2:
								return 3.872f, -0.552f, 14.773f;
							case 3:
								return 3.872f, -0.552f, 14.773f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -3.972f, 0.554f, -165.492f;
							case 1:
								return -3.972f, 0.554f, -165.492f;
							case 2:
								return -3.972f, 0.554f, -165.492f;
							case 3:
								return -3.972f, 0.554f, -165.492f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 3.826f, -0.811f, 18.124f;
							case 1:
								return 3.826f, -0.811f, 18.124f;
							case 2:
								return 3.826f, -0.811f, 18.124f;
							case 3:
								return 3.826f, -0.811f, 18.124f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -3.725f, 0.825f, -161.464f;
							case 1:
								return -3.725f, 0.825f, -161.464f;
							case 2:
								return -3.725f, 0.825f, -161.464f;
							case 3:
								return -3.725f, 0.825f, -161.464f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return -1.573f, -0.053f, 110.113f;
						case 1:
							return -1.573f, -0.053f, 110.113f;
						case 2:
							return -1.573f, -0.053f, 110.113f;
						case 3:
							return -1.573f, -0.053f, 110.113f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1.372f, -0.171f, -70.133f;
						case 1:
							return 1.372f, -0.171f, -70.133f;
						case 2:
							return 1.372f, -0.171f, -70.133f;
						case 3:
							return 1.372f, -0.171f, -70.133f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -1.873f, -0.053f, 111.013f;
						case 1:
							return -1.873f, -0.053f, 111.013f;
						case 2:
							return -1.873f, -0.053f, 111.013f;
						case 3:
							return -1.873f, -0.053f, 111.013f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1.672f, -0.171f, -69.133f;
						case 1:
							return 1.672f, -0.171f, -69.133f;
						case 2:
							return 1.672f, -0.171f, -69.133f;
						case 3:
							return 1.672f, -0.171f, -69.133f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1015(vector3 vParam0, float fParam3)
{
	return _get_object_offset_from_coords(vParam0, fParam3, 0f, 2.25f, 0f);
}

bool func_1016(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_217(get_entity_heading(iParam0));
	fParam4 = func_217(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_1017(int iParam0)
{
	if (iParam0 >= 4)
	{
		return;
	}
	func_621(Local_2370[func_322(iParam0)], "PBL_REACT_F");
	func_621(Local_2370[func_322(iParam0)], "PBL_REACT_B");
	func_621(Local_2370[func_322(iParam0)], "PBL_REACT_L");
	func_621(Local_2370[func_322(iParam0)], "PBL_REACT_R");
	func_621(Local_2370[func_322(iParam0)], "PBL_BASE");
	func_621(Local_2370[func_322(iParam0)], "PBL_BASE_02");
}

void func_1018(int iParam0)
{
	if (iParam0 >= 4)
	{
		return;
	}
	func_621(Local_2370[func_322(iParam0)], "PBL_BRKOUT_A");
	func_621(Local_2370[func_322(iParam0)], "PBL_BRKOUT_B");
	func_621(Local_2370[func_322(iParam0)], "PBL_BRKOUT_C");
}

void func_1019(int iParam0, int iParam1)
{
	if (!_does_volume_exist(&(iLocal_2321[func_324(iParam1)])))
	{
		StringCopy(&cVar0, "EA CURR - volHammer", 24);
		StringIntConCat(&cVar0, iParam1, 24);
		iLocal_2321[func_324(iParam1)] = _create_volume_cylinder_with_custom_name(get_entity_coords(*iParam0, true, false), func_45(), 3.5f, 3.5f, 3f, &cVar0);
		_0xb56d41a694e42e86(&(iLocal_2321[func_324(iParam1)]), 524288, 0, 0, -1, -1, 2);
	}
	else
	{
		_0x541b8576615c33de(&(iLocal_2321[func_324(iParam1)]), get_entity_coords(*iParam0, true, false));
	}
}

void func_1020(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return;
	}
	iLocal_2482[iParam1] = iParam0;
}

void func_1021(int iParam0)
{
	if (iParam0 >= 4)
	{
		return;
	}
	iLocal_2487[iParam0] = &iLocal_2482[iParam0];
	if (&iLocal_2487[iParam0] < 9)
	{
		iLocal_2482[iParam0] = &iLocal_2487[iParam0] + 1;
	}
}

void func_1022(int iParam0)
{
	if (_does_anim_scene_exist(&(Local_2370[func_322(iParam0)])))
	{
		func_328(Local_2370[func_322(iParam0)], (Local_1873[func_329(0, iParam0)])->f_8, "HAMMER");
	}
	activate_physics((Local_1873[func_329(0, iParam0)])->f_8);
	func_755(Local_2370[func_322(iParam0)]);
	func_325(7, iParam0);
}

void func_1023(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 >= 4)
	{
		return;
	}
	func_796(Local_2370[func_322(iParam0)], bParam1, bParam2);
}

char* func_1024(int iParam0)
{
	switch (&iLocal_2482[iParam0])
	{
		case 2:
		case default:
			return "PBL_HAMMER_LOOP";
		case 3:
			return "PBL_HAMMER_LOOP_02";
		case 4:
			return "PBL_HAMMER_LOOP_03";
			default:
				break;
	}
}

void func_1025(int iParam0, int iParam1)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0);
	iParam1->f_3 = (iParam1->f_3 - iParam0);
}

bool func_1026(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return false;
	}
	if (!_does_anim_scene_exist(&(Local_2370[func_322(iParam1)])))
	{
		return false;
	}
	if (!func_795(Local_2370[func_322(iParam1)]))
	{
		return false;
	}
	if (func_194(Global_35, &(iLocal_2321[func_324(iParam1)]), 1, 0))
	{
		return false;
	}
	if (_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index()))
	{
		return false;
	}
	if (!has_anim_event_fired(*iParam0, 1824589780))
	{
		return false;
	}
	return true;
}

void func_1027(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return;
	}
	if (func_1378(iParam0, iParam1))
	{
		iVar0 = func_341(*iParam0, Global_35, 1060437492);
		if (iVar0 == 1)
		{
			iVar0 = func_341(*iParam0, Global_35, 1f);
		}
		if (func_619(Local_2370[func_322(iParam1)], func_1379(iVar0)))
		{
			func_1020(&(iLocal_2487[iParam1]), iParam1);
			func_620(Local_2370[func_322(iParam1)], func_1379(iVar0), 1);
			func_325(8, iParam1);
		}
		else
		{
			func_621(Local_2370[func_322(iParam1)], func_1379(iVar0));
		}
	}
}

void func_1028(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return;
	}
	if (func_1380(iParam0, iParam1))
	{
		sVar0 = func_1381();
		if (func_619(Local_2370[func_322(iParam1)], sVar0))
		{
			func_1020(&(iLocal_2487[iParam1]), iParam1);
			func_620(Local_2370[func_322(iParam1)], sVar0, 1);
			func_325(8, iParam1);
		}
		else
		{
			func_621(Local_2370[func_322(iParam1)], sVar0);
		}
	}
}

int func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 838;
		case 1:
			return 839;
		case 2:
			return 840;
		case 3:
			return 841;
		default:
			break;
	}
	return -1;
}

void func_1030(int iParam0)
{
	iLocal_2492 = iParam0;
}

bool func_1031(int iParam0, var uParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, float fParam6, float fParam7)
{
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (func_1382(iVar2, bParam5))
		{
			if (func_802(iParam0[iVar2], uParam1, iParam2, &bVar1, fParam3, bParam4, fParam6, 1, fParam7, 1))
			{
				return true;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_1032(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_1001((*Local_4227[iParam0])[iParam1]->f_6, sParam2, 0);
	(*Local_4227[iParam0])[iParam1]->f_5 = sParam2;
}

void func_1033(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_650((*Local_4227[iParam0])[iParam1], bParam2);
}

bool func_1034(var uParam0, int iParam1, int iParam2)
{
	if (!func_335(iParam1, 0, 1))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!func_1383(iParam1))
	{
		return false;
	}
	if (func_337(iParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (func_583(iParam1, iParam2))
	{
		return false;
	}
	if (func_1384(iParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

bool func_1035()
{
	return func_1224(_0xc17f69e1418cd11f(3));
}

void func_1036(int iParam0, bool bParam1)
{
	func_1032(iParam0, 0, func_647(8));
	func_636(iParam0, 0, bParam1);
	func_1032(iParam0, 1, func_647(11));
	func_636(iParam0, 1, 1);
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

Vector3 func_1037(var uParam0, char* sParam1, char* sParam2)
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

bool func_1038(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(*uParam0, sParam1, 1);
}

int func_1039(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (iParam5 < 0 || iParam5 >= *uParam0)
	{
		iParam5 = 0;
	}
	if (bParam6 < 0 || bParam6 >= *uParam0)
	{
		bParam6 = (*uParam0 - 1);
	}
	if (bParam7 < 0f)
	{
		bParam7 = 0f;
	}
	if (bParam8 < 0f)
	{
		bParam8 = 999999.9f;
	}
	if (bParam7 > bParam8)
	{
	}
	iVar1 = 0;
	bVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= bParam6)
	{
		if (!bParam4 || !is_entity_dead(uParam0[iVar0]))
		{
			bVar2 = func_533(uParam0[iVar0], vParam1, 1);
			if (bVar2 < bVar3)
			{
				if (bVar2 >= bParam7 && bVar2 <= bParam8)
				{
					bVar3 = bVar2;
					iVar1 = uParam0[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1040(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_1041(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_127(iParam0, 1);
	}
	else
	{
		func_230(iParam0, 1);
	}
}

bool func_1042(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

int func_1043(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_1044(char* sParam0, bool bParam1, bool bParam2)
{
	func_297(uLocal_3985[3]);
	func_611(&(iLocal_3981[0]), uLocal_3985[3], -1749618580, -981020806, 0, func_1385());
	if (!func_695())
	{
		func_753(&(uLocal_3985[3]), 1);
	}
	if (!bParam2)
	{
		if (!is_string_null_or_empty(sParam0))
		{
			func_713(sParam0, bParam1);
		}
	}
	else
	{
		func_83();
	}
	iLocal_20 = 0;
	iLocal_20 |= 1;
}

void func_1045(char* sParam0, bool bParam1, bool bParam2)
{
	func_297(uLocal_3985[3]);
	func_839(uLocal_3985[3], &(iLocal_2305[4]), 203020899);
	if (!func_695())
	{
		func_753(&(uLocal_3985[3]), 1);
	}
	if (!bParam2)
	{
		if (!is_string_null_or_empty(sParam0))
		{
			func_713(sParam0, bParam1);
		}
	}
	else
	{
		func_83();
	}
	iLocal_20 = 0;
	iLocal_20 |= 2;
}

bool func_1046(int iParam0)
{
	iVar0 = 6;
	if (func_1224(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_1047(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

int func_1048()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1070(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1049(int iParam0, int iParam1)
{
	if (func_1070(iParam0, 1, 1))
	{
		func_468((*Global_1955500)[iParam0], iParam1);
	}
}

int func_1050(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (fParam3 >= 0f)
	{
		if (fParam3 < fParam2)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = func_337(iParam1, Global_35, 1, 1) < fParam2;
	}
	if (bVar0)
	{
		if (!*iParam0 & 4 != 0)
		{
			func_332(iParam0, 1);
			return 1;
		}
	}
	else if (*iParam0 & 4 != 0)
	{
		func_332(iParam0, 0);
		return 1;
	}
	return 0;
}

int func_1051(var uParam0)
{
	return uParam0;
}

bool func_1052(int iParam0)
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

float func_1053()
{
	return Global_1935436->f_9;
}

void func_1054(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

var func_1055(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1386(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1387(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1386(sVar0, iParam1, 0, 0, 1, 1);
}

void func_1056(int iParam0, int iParam1)
{
	func_908(iParam0, iParam1);
}

int func_1057(int iParam0, bool bParam1)
{
	iVar0 = func_1388();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_1058(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1388();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_1057(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_1389(iVar2, 512))
				{
					_0xc67a4910425f11f1(player_id(), 0);
				}
			}
		}
		task_clear_look_at(iVar0);
		_0xaac0ee3b4999abb5(iVar0, 0);
		enable_control_action(0, -128997553, true);
		if (does_entity_exist(iVar1))
		{
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!is_entity_dead(iVar3))
				{
					task_clear_look_at(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_1059()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

bool func_1060()
{
	if (func_25(2097152))
	{
		return false;
	}
	if (does_blip_exist(&(uLocal_3985[1])))
	{
		return false;
	}
	if (!func_335(&(iLocal_3981[0]), 0, 1))
	{
		return true;
	}
	if (is_ped_fleeing(&(iLocal_3981[0])))
	{
		return true;
	}
	return false;
}

bool func_1061()
{
	if (func_25(2097152))
	{
		return false;
	}
	if (!func_43(16384))
	{
		return false;
	}
	if (func_25(1024))
	{
		return true;
	}
	if (func_261(func_703(), 1) < 2.5f)
	{
		return true;
	}
	return false;
}

void func_1062(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	*iParam3 = _blip_add_for_coord(iParam4, vParam0);
	if (iParam7 != 0)
	{
		_blip_set_modifier(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		set_blip_sprite(*iParam3, iParam5, true);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		set_blip_name_from_text_file(*iParam3, sParam6);
	}
}

bool func_1063(int iParam0)
{
	fVar0 = func_266(*iParam0, 0, 1);
	if (fVar0 > 22f)
	{
		if (!is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
			func_66(&Local_3653, 65536);
			display_radar(true);
			display_hud(true);
		}
		return false;
	}
	if (func_366(Global_35))
	{
		iVar1 = func_341(Global_35, *iParam0, 0.93f);
		if (iVar1 != 0)
		{
			fVar2 = get_entity_speed(Global_35);
			iVar1 = func_341(Global_35, *iParam0, 1060437492);
			if (fVar2 > 6.5f || iVar1 == 1)
			{
				return false;
			}
		}
	}
	return true;
}

void func_1064(int iParam0)
{
	func_1032(iParam0, 0, func_647(7));
	func_636(iParam0, 0, !is_string_null_or_empty(Local_2509.f_135));
	func_1032(iParam0, 1, func_647(10));
	func_636(iParam0, 1, !is_string_null_or_empty(Local_2509.f_5));
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

int func_1065(var uParam0)
{
	if (!func_257(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_656(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_346() - round((uParam0->f_1 * 1000f)));
}

void func_1066(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		func_1390((*Local_4227[iParam0])[0], 0);
		func_1390((*Local_4227[iParam0])[1], 0);
		func_1390((*Local_4227[iParam0])[2], 0);
	}
	else
	{
		func_1391((*Local_4227[iParam0])[0], fParam1);
		func_1391((*Local_4227[iParam0])[1], fParam1);
		func_1391((*Local_4227[iParam0])[2], fParam1);
	}
}

void func_1067(bool bParam0)
{
	if (bParam0)
	{
		func_1392(4);
	}
	func_1392(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1068(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_366(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_1336(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_625(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_194(iVar0, iParam5, 1, 0)) && func_337(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_891(iVar0) && func_892(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_967(&uVar1, &Var2);
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
		if (func_625(*uParam1, 1))
		{
			if (!(func_368(*uParam1, 518218985) || func_368(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_175(vParam2))
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
				if (!bParam8 && func_175(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

int func_1069()
{
	iVar0 = _get_lassoed_entity(Global_35);
	if (!does_entity_exist(iVar0))
	{
		iVar0 = _0xd0b7aeb56229d317(Global_35);
	}
	if (!does_entity_exist(iVar0))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_35);
		if (is_entity_a_ped(iVar1))
		{
			iVar0 = get_ped_index_from_entity_index(iVar1);
		}
	}
	return iVar0;
}

bool func_1070(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1955500)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1955500)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1071()
{
	return does_entity_exist(func_1069());
}

bool func_1072(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_292(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_1393(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_1394(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_1395(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_175(vParam2))
			{
				return false;
			}
			*uParam0 = func_1396(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_1000(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_968(1))
			{
				func_784(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_785(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_1090(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_784(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_784(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_968(1))
		{
			func_784(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_292(*uParam0))
			{
				func_84(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_1144(*uParam0, 1)) || (bParam17 && func_1143(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_1174(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_820(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_84(uParam0, 1, 1);
		return true;
	}
	return false;
}

Vector3 func_1073()
{
	return 2259.22f, 786.7266f, 96.2035f;
}

float func_1074()
{
	return -162.5f;
}

void func_1075(int iParam0)
{
	func_1032(iParam0, 0, func_647(8));
	func_636(iParam0, 0, 1);
	func_1032(iParam0, 1, func_647(10));
	func_636(iParam0, 1, 1);
	func_1033(iParam0, 2, 1);
	func_106(-2147483648);
}

void func_1076(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_1077(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

bool func_1078(int iParam0)
{
	return func_298(iParam0) == 0;
}

int func_1079(int iParam0)
{
	if (!func_89(iParam0))
	{
		return -1;
	}
	return func_1397(func_428(iParam0));
}

void func_1080(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_1081(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_1081(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1398(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1399(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1400(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1401(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1402(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1403(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1404(uParam0->f_13[iVar0], 2);
		}
	}
}

void func_1082(var uParam0, float fParam1)
{
	uParam0->f_146 = fParam1;
}

void func_1083(var uParam0, float fParam1)
{
	uParam0->f_147 = fParam1;
}

void func_1084(var uParam0)
{
	Var0 = { func_1405() };
	func_1193(uParam0, &Var0);
}

void func_1085(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_1406(uParam0);
	iVar0 = func_1407(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_1398(iParam1);
		}
		iVar0 = func_1408(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_1409(uParam0);
		}
		else
		{
			Var1.f_10 = -1569615261;
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_1409(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0]->f_2 = iParam1;
	uParam0->f_3[iVar0]->f_1 = get_entity_model(iParam1);
	if (is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
	{
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	else if (!is_string_null_or_empty(sParam2))
	{
		if (!are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	func_1086(uParam0, 2);
}

void func_1086(var uParam0, int iParam1)
{
	uParam0->f_1352 = (uParam0->f_1352 || iParam1);
}

char[] func_1087()
{
	return "RCMP_INT";
}

bool func_1088(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_1116(uParam0, 256) && !func_1116(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_1115(uParam0, sParam1);
	if (!func_1116(uParam0, 64))
	{
		if (!func_175(func_1125(uParam0)))
		{
			func_1108(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1410(uParam0) };
			if (!func_175(vVar0))
			{
				func_1411(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_533(Global_35, func_1125(uParam0), 1);
	if (func_1116(uParam0, 128) || func_1116(uParam0, 256))
	{
		if ((fVar3 >= func_1412(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_1413();
				uParam0->f_241 = 0;
			}
			func_1414(uParam0);
			if (_does_anim_scene_exist(uParam0->f_156))
			{
				_delete_anim_scene(uParam0->f_156);
			}
			func_1415(uParam0);
			func_1114(uParam0, 128, 1);
			func_1114(uParam0, 256, 1);
			func_1114(uParam0, 4096, 1);
			func_1114(uParam0, 32768, 1);
			func_1114(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1416(uParam0) || bParam2)
	{
		if (!func_1116(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_156))
			{
				if (func_1416(uParam0) >= func_1412(uParam0))
				{
				}
				Var4 = { func_1417(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_1084(uParam0);
				}
				Var4 = { func_1417(uParam0) };
				iVar12 = 256;
				if (!func_1116(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = _create_anim_scene(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_1418(uParam0, 0, 0, 0, 0);
				func_1108(uParam0, 128);
			}
		}
	}
	if (func_1116(uParam0, 128))
	{
		if (func_1116(uParam0, 256) && !func_1116(uParam0, 4194304))
		{
			return true;
		}
		func_1123(uParam0);
		if (!uParam0->f_241)
		{
			if (func_1419())
			{
				func_1420(4096);
				uParam0->f_241 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_850(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_174[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_174[iVar14], &Var15))
					{
						if (!uParam0->f_174[iVar14]->f_8)
						{
							uParam0->f_174[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_156, uParam0->f_174[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_1116(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_156, &Var15))
				{
					if (!func_1116(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_156, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_156, &Var15)) && !_0x1f0e401031e20146(uParam0->f_156, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_156, &Var15);
						}
						func_1108(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_1108(uParam0, 256);
			func_1114(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

char[] func_1089()
{
	return "RCMP_MCS1";
}

bool func_1090(int iParam0, bool bParam1)
{
	if (bParam1 && !func_292(iParam0))
	{
		return false;
	}
	return !func_970(iParam0, 4);
}

bool func_1091(int iParam0, var uParam1)
{
	if (func_25(8))
	{
		return false;
	}
	if (func_374(-3.5f, 1, 0, 0) && !func_257(uParam1))
	{
		func_60(uParam1);
	}
	if ((func_374(-3.5f, 1, 0, 0) && func_1421(iParam0, Local_2509.f_13, -1082130432, -1082130432, -1082130432)) && func_253(uParam1, 11f))
	{
		if (iVar2172 >= 3)
		{
			return false;
		}
		iVar0 = 0;
		iLocal_4542 = 1;
		iLocal_4542 = iVar4538;
		if (func_111(1048576))
		{
			iLocal_2176 = 3;
			func_60(uParam1);
			return true;
		}
		else
		{
			switch (iLocal_14)
			{
				case 1:
					if (func_11(Local_3653.f_136, 64))
					{
						if (iVar2172 == 0)
						{
							Local_2509.f_1 = "RCMP_INT_LO_C";
							iVar0 = 1;
						}
						else if (iVar2172 == 1)
						{
							Local_2509.f_1 = "RCMP_INT_LO_B";
							iVar0 = 1;
						}
						else if (iVar2172 == 2)
						{
							Local_2509.f_1 = "RCMP_INT_LO_A";
							iVar0 = 1;
						}
					}
					else if (iVar2172 == 0)
					{
						Local_2509.f_1 = "RCMP_F01A";
						iVar0 = 1;
					}
					else if (iVar2172 == 1)
					{
						Local_2509.f_1 = "RCMP_F01AB";
						iVar0 = 1;
					}
					else if (iVar2172 == 2)
					{
						Local_2509.f_1 = "RCMP_F01AC";
						iVar0 = 1;
					}
					break;
				case 2:
					if (iVar2172 == 1)
					{
						Local_2509.f_1 = "RCMP_F01CSB";
						iVar0 = 1;
					}
					else if (iVar2172 == 2)
					{
						Local_2509.f_1 = "RCMP_F01CSC";
						iVar0 = 1;
					}
					break;
				case 3:
					iLocal_2176 = 3;
					func_60(uParam1);
					return true;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_2176 = iVar2172 + 1;
			func_60(uParam1);
			return true;
		}
	}
	return false;
}

bool func_1092(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1093(var uParam0)
{
	if (func_1092(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_1422(uParam0) || func_1092(&(uParam0->f_3), 4)) && !func_1092(&(uParam0->f_3), 256))
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
	if (func_1423(uParam0))
	{
		func_442();
	}
	if (!func_1092(&(uParam0->f_3), 16))
	{
		if (func_257(uParam0))
		{
			if (func_1065(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_1094(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_1424(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1095(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_1425(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_1092(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_533(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_1426(vParam0, uParam3))
	{
		return false;
	}
	if (!func_1092(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_1427(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_1096(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_1428(vParam1, 1);
	if (!func_1092(&(uParam0->f_3), 32))
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
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		_0x1f6ebd94680252ce(iVar1, -1082130432);
		_0xf48664e9c83825e3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_60(uParam0);
	func_763(&(uParam0->f_3), 1);
}

void func_1097(int iParam0)
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

void func_1098(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam1;
}

bool func_1099(int iParam0, int iParam1)
{
	if (func_253(&(iParam0->f_5), 5f))
	{
		return true;
	}
	if (func_359(iParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_366(iParam0->f_1) && !func_368(iParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(iParam0->f_1, true)) && !func_368(iParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_1100(int iParam0, int iParam1)
{
	if (func_253(&(iParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_359(iParam0->f_23, 16384))
	{
		return true;
	}
	if (iParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1429(&uVar0))
	{
		return true;
	}
	return false;
}

int func_1101()
{
	if (!func_1430())
	{
		return 0;
	}
	if (!func_1431(&iVar0))
	{
		return 0;
	}
	if (!func_1432(iVar0))
	{
		return 0;
	}
	return func_1433(iVar0, 0);
}

bool func_1102(int iParam0, int iParam1)
{
	if (func_253(&(iParam0->f_5), 4f))
	{
		return true;
	}
	if (func_359(iParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(iParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(iParam0->f_1, &iVar1, true, 1, false);
	if (func_359(iParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

bool func_1103(int iParam0, int iParam1)
{
	if (func_253(&(iParam0->f_5), 15f))
	{
		return true;
	}
	if (func_359(iParam0->f_23, 4096) && func_368(iParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_359(iParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(iParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

float func_1104(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_1105(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_1434(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_1106(var uParam0, int iParam1)
{
	uParam0->f_151 = (uParam0->f_151 || iParam1);
}

bool func_1107(var uParam0, int iParam1)
{
	return (uParam0->f_1352 && iParam1) != 0;
}

void func_1108(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_1109(var uParam0, int iParam1)
{
	switch (&uParam0->f_704[iParam1])
	{
		case 0:
			vVar7 = { uParam0->f_704[iParam1]->f_4 - uParam0->f_704[iParam1]->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_633(vVar10) * Vector(2f, 2f, 2f) };
			*vVar0[0] = { uParam0->f_704[iParam1]->f_1 + uParam0->f_704[iParam1]->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			get_ground_z_for_3d_coord(*vVar0[0], &(vVar0[0]->f_2), false);
			*vVar0[1] = { uParam0->f_704[iParam1]->f_1 + uParam0->f_704[iParam1]->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			get_ground_z_for_3d_coord(*vVar0[1], &(vVar0[1]->f_2), false);
			if (!func_175(*vVar0[0]))
			{
				if (get_distance_between_coords(*vVar0[0], uParam0->f_704[iParam1]->f_7, true) < get_distance_between_coords(*vVar0[1], uParam0->f_704[iParam1]->f_7, true))
				{
					return *vVar0[1];
				}
				else
				{
					return *vVar0[0];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_704[iParam1]->f_13 < uParam0->f_704[iParam1]->f_12)
			{
				fVar13 = ((uParam0->f_704[iParam1]->f_12 + (uParam0->f_704[iParam1]->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_704[iParam1]->f_12 + uParam0->f_704[iParam1]->f_13) / 2f);
			}
			*vVar0[0] = { uParam0->f_704[iParam1]->f_1 + Vector(0f, (cos(fVar13) * (uParam0->f_704[iParam1]->f_11 + 5f)), (sin(fVar13) * (uParam0->f_704[iParam1]->f_11 + 5f))) };
			vVar0[0]->f_2 = (vVar0[0]->f_2 + 10f);
			get_ground_z_for_3d_coord(*vVar0[0], &(vVar0[0]->f_2), false);
			if (!func_175(*vVar0[0]))
			{
				return *vVar0[0];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1111(var uParam0, int iParam1)
{
	uParam0->f_1352 = (uParam0->f_1352 - (uParam0->f_1352 && iParam1));
}

bool func_1112(var uParam0, int iParam1)
{
	return (uParam0->f_1354.f_1 && iParam1) != 0;
}

bool func_1113(var uParam0, int iParam1)
{
	return func_1435(uParam0->f_27, iParam1);
}

void func_1114(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_156)) && _0xef324e9550a394d5(uParam0->f_156))
	{
		_0x8a8208ae92bf87a5(uParam0->f_156);
	}
}

void func_1115(var uParam0, char* sParam1)
{
	if (func_1116(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_1436("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_1436("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_1108(uParam0, 8192);
}

bool func_1116(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1117(var uParam0)
{
	return *uParam0;
}

void func_1118(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false)) || _0xef324e9550a394d5(uParam0->f_156)) || func_1116(uParam0, 512))
	{
		if (!func_1437(uParam0->f_213, 128))
		{
			func_1438();
		}
		return;
	}
	if ((func_1133(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_156, func_1439(Global_35)) && _0xb89fcff19dafff28(uParam0->f_156, func_1439(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_156))
	{
		if (!func_1437(uParam0->f_213, 128))
		{
			func_1438();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_1223(iVar1))
		{
			if (func_1090(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_1437(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_1440(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_156);
		func_1438();
	}
}

void func_1119(var uParam0, char* sParam1)
{
	if (func_1117(uParam0) == 2 && (func_1441(uParam0->f_212, 16384) || func_1116(uParam0, 268435456)))
	{
		Var0 = { func_850(uParam0) };
		func_852(uParam0, &Var0);
	}
	func_1442(uParam0, sParam1);
	if (func_1116(uParam0, 131072))
	{
		func_1443(uParam0, 0);
	}
	if (func_1444())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_1445();
	}
	if (func_1446())
	{
		func_1447(1);
	}
	func_1418(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1448(uParam0, cVar8);
	func_1128(1, 0);
	func_1414(uParam0);
	if (func_1449() && _0x6f1f0b17109309da(uParam0->f_156, func_1439(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_1121(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_1450(uParam0);
	func_1451(uParam0, 1);
	start_anim_scene(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_1120(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_60(&(uParam0->f_1));
}

bool func_1121(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_1122(var uParam0)
{
	Var0 = { func_850(uParam0) };
	func_1193(uParam0, &Var0);
}

void func_1123(var uParam0)
{
	if ((!func_1116(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_156)) && _is_anim_scene_metadata_loaded(uParam0->f_156, false))
	{
		func_1452(uParam0);
		func_1451(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_156, true))
		{
			load_anim_scene(uParam0->f_156);
		}
		func_1108(uParam0, 32768);
	}
}

void func_1124(var uParam0, bool bParam1)
{
	if (bParam1 || !func_257(uParam0))
	{
		func_60(uParam0);
	}
}

Vector3 func_1125(var uParam0)
{
	return uParam0->f_5;
}

bool func_1126(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_657(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1127(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_1128(bool bParam0, int iParam1)
{
	if (func_1035())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1453())
		{
			func_1454(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_1129(var uParam0)
{
	if (!func_1116(uParam0, 4))
	{
		if (func_1441(uParam0->f_212, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_1455(uParam0) };
		if (!func_1441(uParam0->f_212, 524288))
		{
			func_1456(&(uParam0->f_224));
		}
		func_1457(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1458(uParam0, 0f, 0f, 0f);
		func_1459(uParam0);
		func_1460(uParam0);
		func_775(uParam0, 0f, 0f, 0f, 0, 0);
		func_1461(uParam0);
		func_1108(uParam0, 4);
		func_1462(uParam0, 0);
		func_1463(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_225)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_225));
		}
	}
}

bool func_1130(var uParam0, bool bParam1)
{
	if (func_1116(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_156, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_156, "ExportCamera") && bParam1)) || _is_anim_scene_active(uParam0->f_156))
	{
		func_1108(uParam0, 262144);
		func_1462(uParam0, 1);
		return true;
	}
	return false;
}

int func_1131(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_156) * 1000f));
}

int func_1132(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_156) * 1000f));
}

bool func_1133(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_1464(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1134(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_156, 0))
	{
		if (func_1116(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_156) && func_1116(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_1135(var uParam0)
{
	if (((func_1116(uParam0, 1073741824) && !func_1116(uParam0, 524288)) && func_1116(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_1136(var uParam0)
{
	if (!func_1116(uParam0, 536870912))
	{
		func_1462(uParam0, 1);
		func_1137(&(uParam0->f_213), uParam0->f_224);
		func_1413();
		func_1108(uParam0, 536870912);
	}
	if (func_1116(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_1465(uParam0);
	func_1120(uParam0, 1);
	func_1415(uParam0);
	func_1466(uParam0);
	func_1467(uParam0);
	func_1468(uParam0, 4);
	func_1084(uParam0);
	func_1443(uParam0, 1);
	func_1414(uParam0);
	func_260(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_156) && check_ownership_of_anim_scene(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
	func_1469(!func_1437(uParam0->f_213, 128));
	if (!func_1437(uParam0->f_213, 128))
	{
		func_1438();
	}
}

void func_1137(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1470(2000);
	Global_16 = 0;
	func_1471();
	set_entity_invincible(Global_35, func_1437(*uParam0, 8));
	if (!func_1437(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1437(*uParam0, 2) || func_1437(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1437(*uParam0, 16))
	{
		func_1472(1);
	}
	if (func_1437(*uParam0, 32))
	{
		func_1473(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1474(-1623728698, 0);
	}
	func_1463(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_1138()
{
	Global_1935630->f_52 = 1;
}

int func_1139(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_970(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1475(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1140(int iParam0, bool bParam1)
{
	if (!func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

void func_1141(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_292(iParam0))
	{
		return;
	}
	iVar0 = func_293(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

bool func_1143(int iParam0, bool bParam1)
{
	if (bParam1 && !func_292(iParam0))
	{
		return false;
	}
	iVar0 = func_293(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_1144(int iParam0, bool bParam1)
{
	if (bParam1 && !func_292(iParam0))
	{
		return false;
	}
	iVar0 = func_293(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_1145(int iParam0, bool bParam1)
{
	if (bParam1 && !func_292(iParam0))
	{
		return false;
	}
	iVar0 = func_293(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

float func_1146(int iParam0, bool bParam1)
{
	if (bParam1 && !func_292(iParam0))
	{
		return 0f;
	}
	iVar0 = func_293(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

void func_1147(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1148(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_970(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1149(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1150(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

Vector3 func_1151()
{
	return 2274.985f, 813.6608f, 93.29452f;
}

bool func_1152(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, bool bParam8)
{
	if (!bParam8)
	{
		vParam3.f_2 = (vParam3.z - (0.5f * fParam7));
	}
	vVar0 = { vParam0 - vParam3 };
	if (vVar0.z < 0f || vVar0.z > fParam7)
	{
		return false;
	}
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam6 * fParam6);
}

void func_1153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

void func_1154(int iParam0)
{
	if (!func_1476(iParam0))
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

void func_1155(int iParam0)
{
	if (!func_89(iParam0))
	{
		return;
	}
	func_886(iParam0, func_1477(iParam0) + 1);
}

int func_1156(int iParam0, int iParam1)
{
	iVar0 = func_603(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_1478(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_980(iVar0, iParam1);
	return iParam1;
}

void func_1157(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1159(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_1160(bool bParam0)
{
	func_1479(bParam0);
	func_1480(bParam0);
	func_1481(bParam0);
	func_1482(bParam0);
	func_1483(bParam0);
	func_1484(bParam0);
	func_1485(bParam0);
	func_1486(bParam0);
}

void func_1161(bool bParam0)
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
		func_998(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_998(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_1487(1, bParam0, 1);
	func_1488();
	Global_40.f_11095.f_43 = bParam0;
}

void func_1162(int iParam0)
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
	func_1489(Global_1898077->f_7, Global_1898077->f_3);
}

void func_1163(int iParam0)
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
	func_1490(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_1164(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_370(player_ped_id(), iParam0, 1) < (bParam1 * bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1165(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				fVar2 = func_1491(iParam10);
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
			bVar0 = func_1492(bParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_1493(bParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_511();
		}
		else if ((func_511() - *iParam5) > bParam7)
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

void func_1166(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
}

int func_1167(int iParam0)
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

Vector3 func_1168(bool bParam0)
{
	if (!bParam0)
	{
		return 2205.322f, 640.3705f, 96.742f;
	}
	return 2206.434f, 640.9165f, 95.59111f;
}

void func_1169(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_1170(var uParam0, bool bParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_paused(*uParam0, bParam1);
}

void func_1171(int iParam0)
{
	vVar0 = { func_788(Local_2370[iParam0], "plr", 0) };
	vVar3 = { func_788(Local_2370[iParam0], "foreman", 0) };
	vVar6 = { func_788(Local_2370[iParam0], "Chair", 0) };
	fVar9 = func_789(Local_2370[iParam0], "plr", 0);
	fVar10 = func_789(Local_2370[iParam0], "foreman", 0);
	fVar11 = func_789(Local_2370[iParam0], "Chair", 0);
	if (func_584())
	{
		if (does_entity_exist(Local_2650.f_690[11]->f_8))
		{
			delete_object(&(Local_2650.f_690[11]->f_8));
		}
		if (does_entity_exist(Local_2650.f_690[9]->f_8))
		{
			delete_object(&(Local_2650.f_690[9]->f_8));
		}
		if (does_entity_exist(Local_2650.f_690[10]->f_8))
		{
			delete_object(&(Local_2650.f_690[10]->f_8));
		}
	}
	if (func_25(32768))
	{
		func_818(&(iLocal_3981[0]), 1, 1);
	}
	if (func_584())
	{
		func_819();
		if (!func_111(2))
		{
			if (func_815())
			{
				iVar12 = (Global_40.f_9096[Local_3653.f_136]->f_6 / 2);
				func_820(iVar12, 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
			else
			{
				iVar12 = (Global_40.f_9096[Local_3653.f_136]->f_6 / 4);
				func_820(iVar12, 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
			func_821(func_52(Local_3653.f_138), (Global_40.f_9096[Local_3653.f_136]->f_6 - iVar12));
			func_106(2);
		}
	}
	func_297(uLocal_4044[0]);
	if (func_4(Local_3653.f_136, 8))
	{
		func_297(uLocal_3985[3]);
		func_83();
	}
	func_706(Global_35, vVar0, fVar9, 1, 1073741824);
	iVar13 = func_52(Local_3653.f_138);
	func_706(iVar13, vVar3, fVar10, 1, 1073741824);
	func_706(Local_2650.f_690[2]->f_8, vVar6, fVar11, 1, 1073741824);
	if (func_25(32768))
	{
		func_706(&(iLocal_3981[0]), func_1494(), func_1495(), 1, 1073741824);
	}
}

void func_1172(int iParam0)
{
	vVar0 = { func_788(Local_2370[iParam0], "plr", 0) };
	vVar3 = { func_788(Local_2370[iParam0], "foreman", 0) };
	vVar6 = { func_788(Local_2370[iParam0], "CHAIR", 0) };
	fVar9 = func_789(Local_2370[iParam0], "plr", 0);
	fVar10 = func_789(Local_2370[iParam0], "foreman", 0);
	fVar11 = func_789(Local_2370[iParam0], "CHAIR", 0);
	if (does_entity_exist(Local_2650.f_690[11]->f_8))
	{
		delete_object(&(Local_2650.f_690[11]->f_8));
	}
	if (does_entity_exist(Local_2650.f_690[4]->f_8))
	{
		delete_object(&(Local_2650.f_690[4]->f_8));
	}
	func_706(Global_35, vVar0, fVar9, 1, 1073741824);
	iVar12 = func_52(Local_3653.f_138);
	func_706(iVar12, vVar3, fVar10, 1, 1073741824);
	func_706(Local_2650.f_690[0]->f_8, vVar6, fVar11, 1, 1073741824);
}

void func_1173(int iParam0)
{
	vVar0 = { func_788(Local_2370[iParam0], "plr", 0) };
	vVar3 = { func_788(Local_2370[iParam0], "foreman", 0) };
	vVar6 = { func_788(Local_2370[iParam0], "Chair", 0) };
	fVar9 = func_789(Local_2370[iParam0], "plr", 0);
	fVar10 = func_789(Local_2370[iParam0], "foreman", 0);
	fVar11 = func_789(Local_2370[iParam0], "Chair", 0);
	if (does_entity_exist(Local_2650.f_690[11]->f_8))
	{
		delete_object(&(Local_2650.f_690[11]->f_8));
	}
	if (does_entity_exist(Local_2650.f_690[9]->f_8))
	{
		delete_object(&(Local_2650.f_690[9]->f_8));
	}
	if (does_entity_exist(Local_2650.f_690[4]->f_8))
	{
		delete_object(&(Local_2650.f_690[4]->f_8));
	}
	if (does_entity_exist(Local_2650.f_690[12]->f_8))
	{
		delete_object(&(Local_2650.f_690[12]->f_8));
	}
	if (!func_111(4))
	{
		func_872(-1580473214, 1, 0, -1387038764, 0);
		func_106(4);
	}
	if (!func_111(2))
	{
		func_871(668131102, 0, 1065353216, 1, 0, 0, 0, -1);
		func_247(Local_3653.f_136, 262144);
		func_106(2);
	}
	func_297(uLocal_4044[0]);
	func_297(uLocal_3985[3]);
	func_83();
	func_706(Global_35, vVar0, fVar9, 1, 1073741824);
	iVar12 = func_52(Local_3653.f_138);
	func_706(iVar12, vVar3, fVar10, 1, 1073741824);
	func_706(Local_2650.f_690[0]->f_8, vVar6, fVar11, 1, 1073741824);
}

void func_1174(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1496(iParam0);
	if (bParam3)
	{
		func_1497(iParam0, sParam1, iParam2);
	}
}

void func_1175(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1498(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1176(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1499())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1498(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1500(iVar0);
			func_1501(iVar0, 0, 0);
		}
		func_1498(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_914(func_1236(1644987397), iVar1);
	}
}

int func_1177(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_1178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_1179()
{
	iVar0 = 0;
	while (iVar0 < iVar4046)
	{
		if (does_entity_exist(&(uLocal_4048[iVar0])))
		{
			_0xeb946b9e579729ad(&(uLocal_4048[iVar0]), 0);
		}
		iVar0++;
	}
}

Vector3 func_1180()
{
	switch (iLocal_14)
	{
		case 1:
			return 2202.477f, 639.3932f, 95.81949f;
		case 2:
			return 2181.999f, 777.5085f, 106.1755f;
		default:
			break;
	}
	return func_45();
}

char* func_1181(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1182(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_335(iParam0, 0, 1))
	{
		_0xd65fdc686a031c83(iParam0, iParam1, fParam2);
		if (!is_string_null_or_empty(sParam4))
		{
		}
		if ((_0x68821369a2ceadd5(iParam0, iParam1) && (bParam5 || !_0x02ebbb3989b7e695(iParam0))) && (iParam3 == 0 || _0x569f1e1237508deb(iParam0) == iParam3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1183(var uParam0, int iParam1)
{
	uParam0->f_1371 = iParam1;
}

void func_1184(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_1185(var uParam0, int iParam1)
{
	if (func_1112(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			_display_hud_component(-1679307491);
			_display_hud_component(474191950);
			break;
		default:
			if (func_1502())
			{
				if (!func_1107(uParam0, 524288))
				{
					_hide_hud_component(-1679307491);
				}
				_display_hud_component(474191950);
			}
			break;
	}
	if (func_1502())
	{
		func_1111(uParam0, 512);
		func_1503(uParam0, 128);
		_0xcb9401f918cb0f75(Global_35, "PlayLeadin", 0, -1);
		if (func_1504(uParam0->f_704[uParam0->f_1372], 4))
		{
			_0xcb9401f918cb0f75(Global_35, func_1505(uParam0->f_704[uParam0->f_1372]->f_39), 0, -1);
		}
		set_ped_config_flag(Global_35, 255, true);
	}
	func_1506();
	func_1507(uParam0, 1, 0);
	func_1508(uParam0);
	if (func_1107(uParam0, 524288) && is_screen_faded_out())
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	func_1503(uParam0, 4);
	if (_does_volume_exist(uParam0->f_1563))
	{
		_delete_volume(uParam0->f_1563);
	}
	if (func_1112(uParam0, 8) && _0xdd0b7c5ae58f721d(func_1509()))
	{
		_0x798be43c9393632b(func_1509());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!is_string_null_or_empty(&(uParam0->f_1033[iVar0]->f_2)) && !are_strings_equal(&(uParam0->f_1033[iVar0]->f_2), func_1509())) && _0xdd0b7c5ae58f721d(&(uParam0->f_1033[iVar0]->f_2)))
		{
			if (uParam0->f_1033[iVar0]->f_21)
			{
				_0x798be43c9393632b(&(uParam0->f_1033[iVar0]->f_2));
			}
		}
		iVar0++;
	}
	reset_player_input_gait(get_player_index());
	if (func_1107(uParam0, 524288) || iParam1 == 1)
	{
		func_1438();
	}
	if (func_1112(uParam0, 16))
	{
		if (func_1197(uParam0) == 0)
		{
			if (_0x927b810e43e99932(&(uParam0->f_1380)))
			{
			}
		}
		else if (_0x927b810e43e99932(&(uParam0->f_1380)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_1380));
		}
	}
	func_1510();
	if (func_1112(uParam0, 32))
	{
		_0x3ad8eff9703be657(Global_35, 1f);
	}
	if (does_entity_exist(uParam0->f_1589))
	{
		if (!func_1107(uParam0, 8192))
		{
			if (_0xc6d7ddc843176701(uParam0->f_1589) != 50f)
			{
				_0x0c3f0f7f92ca847c(uParam0->f_1589, 50f);
			}
		}
		if (_0x404527bc03da0e6c(uParam0->f_1589))
		{
			_0x7c06330bfdda182e(uParam0->f_1589);
		}
	}
	func_1209(uParam0);
	if (is_itemset_valid(uParam0->f_1609))
	{
		destroy_itemset(uParam0->f_1609);
	}
	return 1;
}

bool func_1186(var uParam0, int iParam1)
{
	if (func_1511(iParam1))
	{
		return !(uParam0->f_1 && iParam1) != 0;
	}
	else
	{
		switch (iParam1)
		{
			case 262144:
				return func_359(*uParam0, 4);
			case 32:
				return func_359(*uParam0, 8);
			case 8192:
				return func_359(*uParam0, 16);
			case 64:
				return func_359(*uParam0, 32);
			case 32768:
				return func_359(*uParam0, 64);
			case 65536:
				return func_359(*uParam0, 1024);
			case 4096:
				return func_359(*uParam0, 262144);
			case 512:
				return func_359(*uParam0, 1048576);
			default:
				break;
		}
	}
	return false;
}

void func_1187(float fParam0)
{
	fParam0->f_132 = 1;
	*fParam0 = -3.5f;
	fParam0->f_1 = "RCMP_OW01";
}

bool func_1188()
{
	if (!func_378(vLocal_2327[1], 20f))
	{
		return false;
	}
	if (!func_541(&(iLocal_3981[0]), Global_35, 0, 15f, 0))
	{
		return false;
	}
	vVar0 = { func_348(Global_35, 5f) };
	if (func_533(&(iLocal_3981[0]), vVar0, 1) > 15f)
	{
		return false;
	}
	return true;
}

void func_1189(int iParam0, char* sParam1, char* sParam2, vector3 vParam3, float fParam6)
{
	open_sequence_task(&iVar0);
	task_go_straight_to_coord(0, vParam3, 1f, -1, fParam6, 1056964608, 0);
	task_play_anim(0, sParam2, sParam1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	close_sequence_task(iVar0);
	task_perform_sequence(iParam0, iVar0);
	clear_sequence_task(&iVar0);
}

int func_1190(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	bParam6 = (bParam6 || func_22(iParam0, 4096));
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!is_entity_dead(iParam1[iVar0]))
		{
			iVar3 = func_363(iParam1[iVar0], 0);
			if (func_147(iVar3))
			{
				func_51(iVar3, 1, 1);
			}
			set_ped_config_flag(iParam1[iVar0], 146, !bParam5);
			set_ped_config_flag(iParam1[iVar0], 246, true);
			set_ped_config_flag(iParam1[iVar0], 178, true);
			set_ped_can_be_targetted(iParam1[iVar0], true);
			if (func_615(iParam1[iVar0], (iParam2 == -1 || iVar1 < iParam2), (bParam7 || bParam6)))
			{
				_0x802092b07e3b1eea(iParam1[iVar0], Global_36, 3);
				set_ped_relationship_group_hash(iParam1[iVar0], 1269650476);
				_blip_add_for_entity(831283580, iParam1[iVar0]);
				set_ped_combat_attributes(iParam1[iVar0], 58, true);
				set_ped_combat_attributes(iParam1[iVar0], 5, true);
				set_ped_combat_attributes(iParam1[iVar0], 71, true);
				set_ped_combat_attributes(iParam1[iVar0], 31, true);
				if (func_612(iParam1[iVar0]))
				{
					iVar4 = func_544(iParam1[iVar0]);
				}
				if (is_ped_human(iParam1[iVar0]))
				{
					if (func_616((*iParam1)[iVar0], iVar4, (bParam7 || bParam6)))
					{
						_give_weapon_to_ped_2(iParam1[iVar0], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						if (func_408(iVar4))
						{
							set_current_ped_weapon(iParam1[iVar0], iVar4, true, 0, false, false);
						}
					}
					set_ped_combat_attributes(iParam1[iVar0], 46, false);
				}
				else
				{
					set_ped_combat_attributes(iParam1[iVar0], 46, true);
				}
				open_sequence_task(&iVar2);
				if (is_ped_human(iParam1[iVar0]))
				{
					if (func_408(iVar4))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (!bParam8 && !func_612(iParam1[iVar0]))
					{
						task_react(0, Global_35, 0f, 0f, 0f, func_614(), 0.5f, 0, 4);
					}
				}
				task_combat_ped(0, Global_35, 0, 0);
				close_sequence_task(iVar2);
				task_perform_sequence(iParam1[iVar0], iVar2);
				clear_sequence_task(&iVar2);
				iVar1++;
			}
			else
			{
				_0xeeed8fafec331a70(iParam1[iVar0], Global_36, 1);
				_task_smart_flee_style_ped(iParam1[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
				set_ped_keep_task(iParam1[iVar0], true);
				func_617((*iParam1)[iVar0], iParam9, fParam10);
			}
		}
		iVar0++;
	}
	return iVar1;
}

struct<8> func_1191(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_1192()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_1193(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

int func_1194(var uParam0)
{
	return uParam0->f_1;
}

void func_1195(var uParam0)
{
	if (!func_1107(uParam0, 134217728))
	{
		bVar0 = true;
		request_script_with_name_hash(-1181125641);
		if (!has_script_with_name_hash_loaded(-1181125641))
		{
			bVar0 = false;
		}
		request_anim_dict(func_1512(1));
		if (!has_anim_dict_loaded(func_1512(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_1086(uParam0, 134217728);
		}
	}
}

void func_1196(var uParam0, int iParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_1107(uParam0, 65536))
	{
		if (is_ped_falling(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_1107(uParam0, 4096) && uParam0->f_1584)
	{
		return;
	}
	if (!func_1107(uParam0, 16777216))
	{
		return;
	}
	if (_0x99f92061efe908ba())
	{
		return;
	}
	func_1203(uParam0);
	func_1513(uParam0, uParam0->f_1585, uParam0->f_1587);
	func_1514(uParam0);
	if (uParam0->f_1588 && !uParam0->f_1587)
	{
		if (((((uParam0->f_1583 >= 0 && uParam0->f_704[uParam0->f_1583]->f_17 > 0f) && uParam0->f_1376 >= 0) && !func_1126(Global_35, uParam0->f_704[uParam0->f_1376]->f_1, (uParam0->f_704[uParam0->f_1583]->f_17 + 5f), 1, 1)) && !func_1107(uParam0, 33554432)) && !func_1107(uParam0, 4))
		{
			func_1515(uParam0, uParam0->f_1585);
			return;
		}
	}
	if (!func_1107(uParam0, 4))
	{
		if (func_1516(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1372 = uParam0->f_1376;
				func_1086(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1515(uParam0, uParam0->f_1585);
		}
		if (uParam0->f_704[uParam0->f_1378]->f_29)
		{
			fVar0 = func_1517(uParam0, uParam0->f_1378);
			if (fVar0 < 0f || (uParam0->f_1585 && fVar0 < 1f))
			{
				uParam0->f_1376 = uParam0->f_1378;
				if (!bParam2)
				{
					uParam0->f_1372 = uParam0->f_1378;
					func_1086(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1377 == -1f || fVar0 <= uParam0->f_1377) || uParam0->f_1378 == uParam0->f_1376)
				{
					if (uParam0->f_1378 != uParam0->f_1376)
					{
					}
					uParam0->f_1376 = uParam0->f_1378;
					uParam0->f_1377 = fVar0;
					func_1086(uParam0, 16);
					if (((!func_1107(uParam0, 32) && iParam1 != 2) && !bParam2) && get_distance_between_coords(Global_36, uParam0->f_704[uParam0->f_1376]->f_1, true) < (uParam0->f_704[uParam0->f_1376]->f_11 + 5f))
					{
						func_1518(uParam0);
						func_1086(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1376 == uParam0->f_1378)
			{
				func_1111(uParam0, 16);
			}
		}
		if (uParam0->f_1378 + 1 >= 8)
		{
			uParam0->f_1378 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1378 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_704[iVar2]->f_29)
				{
					uParam0->f_1378 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1378 = 0;
			}
		}
		if (uParam0->f_1376 < 0)
		{
			return;
		}
		if (func_1113(uParam0->f_704[uParam0->f_1376], 2) && uParam0->f_1585)
		{
			return;
		}
	}
	if (func_1107(uParam0, 16))
	{
		fVar4 = func_533(Global_35, uParam0->f_704[uParam0->f_1376]->f_1, 1);
		if (uParam0->f_1585 && fVar4 <= (uParam0->f_704[uParam0->f_1376]->f_17 + 5f))
		{
			disable_control_action(0, -640622144, false);
		}
		fVar5 = func_1519(Global_36, uParam0->f_704[uParam0->f_1376]->f_1, 1);
		fVar6 = 2f;
		if (absf((fVar5 - get_entity_heading(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_704[uParam0->f_1376]->f_17 || _0xf256a75210c5c0eb(uParam0->f_1563, uParam0->f_1567))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_704[uParam0->f_1376]->f_1.f_2 && Global_36.f_2 <= (uParam0->f_704[uParam0->f_1376]->f_1.f_2 + uParam0->f_704[uParam0->f_1376]->f_10))
			{
				func_1202(uParam0, uParam0->f_704[uParam0->f_1376]->f_27, uParam0->f_1033[uParam0->f_1376]->f_1, fVar6);
			}
			if ((uParam0->f_1587 && _0xf256a75210c5c0eb(uParam0->f_1563, uParam0->f_1567)) && get_entity_speed(uParam0->f_1589) > 5f)
			{
				if (does_entity_exist(uParam0->f_1589) && !_0x404527bc03da0e6c(uParam0->f_1589))
				{
					bring_vehicle_to_halt(uParam0->f_1589, 1f, 2000, false);
				}
			}
			else if (does_entity_exist(uParam0->f_1589) && _0x404527bc03da0e6c(uParam0->f_1589))
			{
				_0x7c06330bfdda182e(uParam0->f_1589);
			}
		}
		else if ((uParam0->f_1585 && fVar4 <= (uParam0->f_704[uParam0->f_1376]->f_17 + 5f)) && !is_entity_dead(uParam0->f_1586))
		{
			set_ped_max_move_blend_ratio(uParam0->f_1586, 1f);
			disable_control_action(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1585 && iVar3) && get_ped_desired_move_blend_ratio(uParam0->f_1586) > 1.25f) || func_1107(uParam0, 4))
	{
		if (((_0xf256a75210c5c0eb(uParam0->f_1563, uParam0->f_1567) && func_1517(uParam0, uParam0->f_1376) < 10000f) && func_1107(uParam0, 16)) || func_1107(uParam0, 4))
		{
			if (!func_1107(uParam0, 4))
			{
				func_1086(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_1200(uParam0, uParam0->f_1376))
			{
				iVar7 |= 2048;
			}
			if (func_1520(Global_35, &(uParam0->f_1374), iVar7, 0, 0, 1084227584, 100, uParam0->f_704[uParam0->f_1376]->f_7, uParam0->f_704[uParam0->f_1376]->f_7.f_1))
			{
				set_player_control(get_player_index(), true, 0, false);
				uParam0->f_1374 = 0;
				func_1111(uParam0, 4);
			}
		}
	}
	else if (func_1107(uParam0, 4))
	{
		func_1111(uParam0, 4);
	}
}

int func_1197(var uParam0)
{
	return *uParam0;
}

void func_1198(var uParam0)
{
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		return;
	}
	if (func_1107(uParam0, 512))
	{
		return;
	}
	if (func_1218(&(uParam0->f_1560)) < 2f)
	{
		return;
	}
	if (func_1440(1, 0))
	{
		do_screen_fade_out(1000);
		func_1086(uParam0, 524288);
	}
}

void func_1199()
{
	Global_1905944->f_5695 = 1;
}

bool func_1200(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_163[iVar0]->f_17 == 1 && uParam0->f_163[iVar0]->f_2 == 4) && &uParam0->f_163[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1201(var uParam0)
{
	return uParam0->f_2;
}

void func_1202(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if (func_1435(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_1435(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1585)
	{
		fParam3 = 0.55f;
		set_ped_reset_flag(uParam0->f_1586, 214, true);
	}
	if (uParam0->f_1584 && func_1107(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_1435(uParam1, 262144) && Global_1935630->f_44 == 2055893578)
	{
		iVar0 |= 16;
	}
	func_1521(&iVar1, uParam2);
	func_1522(&(uParam0->f_1592), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_1107(uParam0, 67108864))
		{
			set_ped_reset_flag(Global_35, 25, true);
		}
		set_ped_reset_flag(Global_35, 36, true);
	}
	func_1523();
	func_1524(uParam0, 1);
}

void func_1203(var uParam0)
{
	iVar0 = uParam0->f_1376;
	if (iVar0 >= 0 && !func_1208(uParam0, 2))
	{
		bVar1 = get_distance_between_coords(Global_36, uParam0->f_704[iVar0]->f_1, true) <= uParam0->f_704[iVar0]->f_16;
		Var2 = { uParam0->f_1380 };
		if (bVar1)
		{
			if (!is_string_null_or_empty(&(uParam0->f_1033[iVar0]->f_2)))
			{
				StringCopy(&(uParam0->f_1380), func_1525(uParam0->f_1033[iVar0]->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1380), func_1509(), 64);
			}
			if (!is_string_null_or_empty(&(uParam0->f_1033[iVar0]->f_10)))
			{
				StringCopy(&(uParam0->f_1380.f_8), func_1525(uParam0->f_1033[iVar0]->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1380.f_8), func_1526(), 64);
			}
			disable_control_action(0, -1722177808, false);
		}
		bVar18 = (!are_strings_equal(&Var2, &(uParam0->f_1380)) || !are_strings_equal(&(Var2.f_8), &(uParam0->f_1380.f_8)));
		if (bVar18 || !bVar1)
		{
			if (_0x927b810e43e99932(&Var2))
			{
				_0x0a5a4f1979abb40e(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1033[iVar0])
		{
			if (!func_1527(uParam0->f_1033[iVar0]->f_1, 8))
			{
				if (!func_1527(uParam0->f_1033[iVar0]->f_1, 8))
				{
					func_1521(&iVar19, uParam0->f_1033[iVar0]->f_1);
					func_1528(&(uParam0->f_1592), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_704[iVar0]->f_1 };
				iVar24 = -1;
				if (uParam0->f_1033[iVar0]->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 11)
					{
						if (uParam0->f_3[iVar25] && does_entity_exist(uParam0->f_3[iVar25]->f_2))
						{
							if (uParam0->f_1033[iVar0]->f_20 == uParam0->f_3[iVar25]->f_3)
							{
								iVar23 = uParam0->f_3[iVar25]->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_1527(uParam0->f_1033[iVar0]->f_1, 16) && iVar24 >= 0)
							{
								if (!does_entity_exist(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1033[iVar0]->f_20]->f_2;
								}
								if (!does_entity_exist(iVar23) || get_ped_index_from_entity_index(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { get_entity_coords(iVar23, false, false) };
									iVar26 = get_interior_from_entity(iVar23);
									if (is_valid_interior(iVar26) && (!is_valid_interior(uParam0->f_1590) || iVar26 != uParam0->f_1590))
									{
										if (_0x927b810e43e99932(&(uParam0->f_1380)))
										{
											_0x0a5a4f1979abb40e(&(uParam0->f_1380));
											func_1503(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1033[iVar0]->f_18 != 0f || uParam0->f_1033[iVar0]->f_19 != 0f)
								{
									vVar20 = { _get_object_offset_from_coords(vVar20, func_1529(Global_35, iVar23, 1), uParam0->f_1033[iVar0]->f_18, 0f, uParam0->f_1033[iVar0]->f_19) };
								}
							}
							else if (uParam0->f_1033[iVar0]->f_18 != 0f || uParam0->f_1033[iVar0]->f_19 != 0f)
							{
								vVar20 = { _get_object_offset_from_coords(vVar20, func_1519(Global_36, uParam0->f_704[iVar0]->f_1, 1), uParam0->f_1033[iVar0]->f_18, 0f, uParam0->f_1033[iVar0]->f_19) };
							}
							fVar27 = uParam0->f_704[iVar0]->f_16;
							fVar28 = uParam0->f_704[iVar0]->f_14;
							bVar29 = func_1527(uParam0->f_1033[iVar0]->f_1, 2);
							bVar30 = (func_1527(uParam0->f_1033[iVar0]->f_1, 1) && !bVar29);
							bVar31 = func_1527(uParam0->f_1033[iVar0]->f_1, 4);
							bVar32 = false;
							if (!_0x927b810e43e99932(&(uParam0->f_1380)))
							{
								_0xb8b207c34285e978(&(uParam0->f_1380));
								if (is_cinematic_cam_rendering())
								{
									func_1169(0, 0);
								}
								bVar32 = true;
								func_1503(uParam0, 16);
							}
							if (_0x4138ee36bc3dc0a7(&(uParam0->f_1380), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1396.f_16 != iVar23);
								bVar32 = (bVar32 || !func_715(uParam0->f_1396.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || absf((uParam0->f_1396.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || absf((uParam0->f_1396.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1396.f_22 != bVar30);
								uParam0->f_1396.f_16 = iVar23;
								uParam0->f_1396.f_17 = { vVar20 };
								uParam0->f_1396.f_20 = fVar27;
								uParam0->f_1396.f_21 = fVar28;
								uParam0->f_1396.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1396 = { uParam0->f_1380 };
									_0x8e036b41c37d0e5f(&(uParam0->f_1396));
								}
							}
							if (_0x4138ee36bc3dc0a7(&(uParam0->f_1380), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1419.f_16 != iVar23);
								bVar32 = (bVar32 || !func_715(uParam0->f_1419.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1419.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1419.f_21 != bVar30);
								uParam0->f_1419.f_16 = iVar23;
								uParam0->f_1419.f_17 = { vVar20 };
								uParam0->f_1419.f_20 = !bVar31;
								uParam0->f_1419.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1419 = { uParam0->f_1380 };
									_0x728491fb3dffef99(&(uParam0->f_1419));
								}
							}
							Jump @1468; //curOff = 1420
							if (_0x927b810e43e99932(&(uParam0->f_1380)))
							{
								_0x0a5a4f1979abb40e(&(uParam0->f_1380));
							}
							StringCopy(&(uParam0->f_1380), "", 64);
							StringCopy(&(uParam0->f_1380.f_8), "", 64);
							func_1530(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_1204(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1531(uParam0, &iVar0))
	{
		func_1532(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_1205(var uParam0)
{
	if (func_1197(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1376;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_704[iVar0]->f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_704[iVar0]->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_704[iVar0]->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = get_distance_between_coords(Global_36, uParam0->f_704[iVar0]->f_1, false);
		fVar3 = absf((Global_36.f_2 - uParam0->f_704[iVar0]->f_1.f_2));
		bVar4 = _does_volume_exist(uParam0->f_1563);
		if (bVar4)
		{
			vVar6 = { _0xf70f00013a62f866(uParam0->f_1563) };
			fVar5 = absf((vVar6.z - uParam0->f_704[iVar0]->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_704[iVar0]->f_10 || (bVar4 && fVar5 <= uParam0->f_704[iVar0]->f_10)))
		{
			iVar9 = get_interior_at_coords(uParam0->f_704[iVar0]->f_1);
			if (!is_valid_interior(iVar9) || !is_valid_interior(uParam0->f_1590))
			{
				func_1086(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1590 == iVar9)
			{
				func_1086(uParam0, 65536);
				return;
			}
		}
		func_1111(uParam0, 65536);
	}
}

void func_1206(var uParam0, int iParam1)
{
	iVar2 = 0;
	if (func_1194(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1582)
		{
			if (uParam0->f_163[iVar0]->f_7)
			{
				func_1533(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_163[iVar0]->f_6)
			{
				bVar1 = func_1534(uParam0, iVar0);
				if (bVar1)
				{
					func_1535(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_1200(uParam0, uParam0->f_1372))
		{
			func_1536(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1379;
	while (iVar0 <= (uParam0->f_1582 - 1))
	{
		if (uParam0->f_163[iVar0]->f_7)
		{
			func_1533(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_163[iVar0]->f_6)
		{
			bVar1 = func_1534(uParam0, iVar0);
			if (bVar1)
			{
				func_1535(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1379 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1379 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_1207(var uParam0)
{
	if (is_itemset_valid(uParam0->f_1609))
	{
		iVar1 = get_itemset_size(uParam0->f_1609);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = get_indexed_item_in_itemset(iVar0, uParam0->f_1609);
			if (_does_item_have_valid_base(iVar2))
			{
				set_ped_reset_flag(get_ped_index_from_entity_index(_get_entity_from_item(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_1208(var uParam0, int iParam1)
{
	return (uParam0->f_1353 && iParam1) != 0;
}

void func_1209(var uParam0)
{
	func_1537(&(uParam0->f_1592));
}

void func_1210(var uParam0)
{
	uParam0->f_1353 = 0;
}

void func_1211(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_1538(uParam0, 4);
	if (func_1539(uParam0, &uParam1, iParam5))
	{
		func_1184(uParam0, 1);
	}
}

void func_1212(var uParam0)
{
	if (!func_1540(uParam0))
	{
		return;
	}
	if (!func_1107(uParam0, 4194304))
	{
		func_1541(uParam0);
		func_1086(uParam0, 4194304);
	}
	if (func_1542(uParam0))
	{
		func_1543(uParam0);
		func_1544(uParam0);
		func_1184(uParam0, 2);
	}
}

void func_1213(var uParam0)
{
	uParam0->f_1373 = -1;
	func_1183(uParam0, 0);
	func_1184(uParam0, 3);
	func_1545(uParam0, 0);
	func_260(&(uParam0->f_1557));
	func_1546(uParam0);
	func_260(&(uParam0->f_1560));
}

void func_1214(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_625(func_1547(iVar0), 0))
		{
			if (is_ped_group_member(func_1547(iVar0), func_515(), 1))
			{
				func_1548(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_1215()
{
	Global_18 = 1;
	Global_43884 = get_id_of_this_thread();
}

bool func_1216(var uParam0)
{
	if (uParam0->f_1372 >= 0)
	{
		if (func_533(Global_35, uParam0->f_704[uParam0->f_1372]->f_1, 0) < uParam0->f_704[uParam0->f_1372]->f_14)
		{
			return true;
		}
		else if (uParam0->f_704[uParam0->f_1372]->f_14 >= uParam0->f_704[uParam0->f_1372]->f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_1217(var uParam0)
{
	if (uParam0->f_1372 >= 0)
	{
		if (func_533(Global_35, uParam0->f_704[uParam0->f_1372]->f_1, 0) < uParam0->f_704[uParam0->f_1372]->f_15)
		{
			return true;
		}
		else if (uParam0->f_704[uParam0->f_1372]->f_15 >= uParam0->f_704[uParam0->f_1372]->f_11)
		{
			return true;
		}
	}
	return false;
}

float func_1218(var uParam0)
{
	if (!func_257(uParam0))
	{
		return 0f;
	}
	if (func_656(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_511() - uParam0->f_1);
}

bool func_1219(var uParam0, int iParam1)
{
	if (uParam0->f_1373 < 0)
	{
		return true;
	}
	switch (uParam0->f_163[uParam0->f_1373]->f_2)
	{
		case 4:
			if (get_script_task_status(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (func_367(&(uParam0->f_1560)) >= 15f)
			{
				func_1086(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1456)
			{
				if (func_367(&(uParam0->f_1560)) >= 15f)
				{
					func_1086(uParam0, 32768);
					return true;
				}
				if (_does_anim_scene_exist(func_1549(uParam0)) && _is_anim_scene_started(func_1549(uParam0), false))
				{
					uParam0->f_1456 = 1;
				}
			}
			else
			{
				fVar0 = _get_anim_scene_progress(func_1549(uParam0));
				bVar1 = _is_anim_scene_finished(func_1549(uParam0), false);
				bVar2 = _is_anim_scene_active(func_1549(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_367(&(uParam0->f_1560)) >= 15f;
	}
	return false;
}

bool func_1220(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_163[iVar0]->f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1221(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_163[iVar0]->f_17 == 2 && func_1550(uParam0->f_163[iVar0], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1222(int iParam0, bool bParam1)
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

bool func_1223(int iParam0)
{
	if (func_1224(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_1224(int iParam0)
{
	return iParam0 != 0;
}

int func_1225(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_12(1811977508, 1, 0))
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
			if (func_134(iVar25, 0) && func_875(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1226(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_134(iParam0, 0))
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
	if (!func_1551())
	{
		func_1552(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1181(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1181(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1553(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_135(iParam0);
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
	else if (!func_1554(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1556(_create_var_string(10, &cVar2, _create_var_string(0, func_1555(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_875(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_1555(iParam0));
	}
	func_1498(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_1227(int iParam0)
{
	if (!func_134(iParam0, 0))
	{
		return Var0;
	}
	if (func_875(iParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_875(iParam0, -537818634))
			{
				return func_1236(189951448);
			}
			else
			{
				return func_1236(1176172851);
			}
		}
	}
	else if (func_875(iParam0, -537818634))
	{
		return func_1236(-963660207);
	}
	if (func_875(iParam0, 2084895747))
	{
		return func_1236(1694039471);
	}
	return Var2;
}

bool func_1228(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_877(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_879(&Var0, func_878(0));
	}
	if (!func_880(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_407(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1557(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_409(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1229(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1558(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1559(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1298(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1557(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_1230(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_411(bParam0));
}

void func_1231(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_875(iParam0, 606799272))
		{
			func_1560(iParam0, iParam1);
		}
		if (func_875(iParam0, -1112814642) && func_875(iParam0, -1697809989))
		{
			func_1561(iParam0, iParam1, 1, 0);
		}
	}
}

void func_1232(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_1233(bool bParam0, int iParam1)
{
	if (!bParam0 && func_599(373691918))
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
	func_310(bParam0);
	return 1;
}

void func_1234()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_1562(iVar17))
		{
			iVar18 = func_1547(iVar17);
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
	func_260(&(Global_1359489->f_55));
	if (func_1563(1777191912, 1))
	{
		func_1564(1777191912, 1, 0);
	}
}

void func_1235(int iParam0)
{
	if (!func_89(iParam0))
	{
		return;
	}
	func_886(iParam0, (func_1477(iParam0) + shift_left(1, 16)));
}

struct<2> func_1236(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_1237()
{
	return func_1565() > 0;
}

void func_1238(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1566(-1032423150, iParam1);
			break;
		case 18:
			func_1566(294066959, iParam1);
			func_1566(-1925639563, iParam1);
			func_1566(-378582304, iParam1);
			func_1566(-338306437, iParam1);
			break;
		case 20:
			func_1566(437270255, iParam1);
			break;
		case 2:
			func_1566(-304000413, iParam1);
			func_1566(-533612796, iParam1);
			func_1566(48036954, iParam1);
			break;
		case 23:
			func_1566(193108691, iParam1);
			func_1566(491732588, iParam1);
			func_1566(671962088, iParam1);
			func_1567(1);
			break;
		case 16:
			func_1566(-1836056650, iParam1);
			func_1566(-754657922, iParam1);
			func_1566(-1752355838, iParam1);
			func_1566(-1375324510, iParam1);
			break;
		case 59:
			func_1566(-514392105, iParam1);
			func_1566(-822060246, iParam1);
			if (func_1568(146))
			{
				func_1566(1372748575, iParam1);
			}
			func_1567(1);
			break;
		case 76:
			func_1566(1991352213, iParam1);
			if (func_1569() == 0)
			{
				func_1566(1852488616, iParam1);
			}
			else
			{
				func_1566(-9866350, iParam1);
			}
			break;
		case 44:
			func_1566(863852599, iParam1);
			func_1566(1228374935, iParam1);
			func_1566(1517889050, iParam1);
			func_1566(830657578, iParam1);
			func_1566(1901354958, iParam1);
			break;
		case 46:
			func_1566(-582805654, iParam1);
			func_1566(250378940, iParam1);
			func_1566(-2143265426, iParam1);
			break;
		case 17:
			func_1566(-941494139, iParam1);
			func_1566(1641489521, iParam1);
			break;
		case 19:
			func_1566(-1829423531, iParam1);
			func_1566(-1590504752, iParam1);
			func_1566(1357221321, iParam1);
			break;
		case 21:
			func_1566(-1037992610, iParam1);
			func_1566(-1286414399, iParam1);
			func_1567(0);
			break;
		case 15:
			func_1566(-1014460309, iParam1);
			func_1566(-1030502825, iParam1);
			break;
		case 33:
			func_1566(479388090, iParam1);
			func_1566(-1396342239, iParam1);
			func_1566(-619618632, iParam1);
			break;
		case 34:
			func_1566(1193561641, iParam1);
			break;
		case 64:
			func_1566(1363960851, iParam1);
			break;
		case 60:
			func_1566(-1232453926, iParam1);
			func_1566(-882833584, iParam1);
			break;
		case 73:
			func_1566(2023205767, iParam1);
			break;
		case 74:
			func_1566(-2135286513, iParam1);
			if (func_1569() == 0)
			{
				func_1566(33799444, iParam1);
			}
			else
			{
				func_1566(-161343203, iParam1);
			}
			break;
		case 8:
			func_1566(841639693, iParam1);
			func_1566(358952323, iParam1);
			break;
		case 36:
			func_1566(852538149, iParam1);
			func_1566(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1566(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1566(1116039310, iParam1);
			}
			break;
		case 27:
			func_1566(107633428, iParam1);
			func_1566(335902282, iParam1);
			func_1566(575673055, iParam1);
			func_1566(-425944207, iParam1);
			break;
		case 28:
			func_1566(-1941530250, iParam1);
			func_1566(1399269304, iParam1);
			func_1566(1839684664, iParam1);
			func_1566(923168503, iParam1);
			func_1566(-1485078322, iParam1);
			break;
		case 29:
			func_1566(574995900, iParam1);
			func_1566(-1691275407, iParam1);
			func_1566(-1725307861, iParam1);
			break;
		case 31:
			func_1566(-2108383238, iParam1);
			func_1566(-1321828931, iParam1);
			func_1566(-1632118592, iParam1);
			func_1566(334938948, iParam1);
			break;
		case 4:
			func_1566(115823701, iParam1);
			func_1566(-1896939736, iParam1);
			func_1566(-1830746356, iParam1);
			func_1566(-1235169781, iParam1);
			func_1567(0);
			break;
		case 6:
			func_1566(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1566(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1566(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1566(-384176140, iParam1);
			}
			break;
		case 25:
			func_1566(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1566(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1566(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1566(-1374849484, iParam1);
			}
			break;
		case 48:
			func_1566(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1566(217772674, iParam1);
			}
			else
			{
				func_1566(2071798160, iParam1);
			}
			if (func_1570(51))
			{
				func_1566(-792802286, iParam1);
			}
			break;
		case 49:
			func_1566(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1566(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1566(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1566(1402120602, iParam1);
			}
			break;
		case 58:
			func_1566(-1661934591, iParam1);
			break;
		case 50:
			func_1566(-1713759426, iParam1);
			break;
		case 52:
			func_1566(-314799932, iParam1);
			func_1566(-462260432, iParam1);
			func_1566(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_1566(345256028, iParam1);
				func_1566(-1635084094, iParam1);
			}
			else
			{
				func_1566(114267347, iParam1);
			}
			break;
		case 32:
			func_1566(615304157, iParam1);
			break;
		case 47:
			func_1566(415434835, iParam1);
			break;
		case 69:
			func_1566(1373465877, iParam1);
			if (func_595((*Global_1347702)[9]->f_15, 1))
			{
				func_1566(-2058273527, iParam1);
			}
			break;
		case 70:
			func_1566(451334985, iParam1);
			if (func_1569() == 0)
			{
				func_1566(-224150200, iParam1);
			}
			else
			{
				func_1566(289012628, iParam1);
			}
			break;
		case 71:
			if (func_1569() == 0)
			{
				func_1566(-41692120, iParam1);
			}
			else
			{
				func_1566(1537840678, iParam1);
			}
			break;
		case 37:
			func_1566(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1566(1842132550, iParam1);
			}
			else
			{
				func_1566(-785735240, iParam1);
			}
			func_1566(-1605690566, iParam1);
			break;
		case 13:
			func_1566(-731367459, iParam1);
			func_1566(224176585, iParam1);
			func_1566(-14545580, iParam1);
			break;
		case 53:
			func_1566(1095274522, iParam1);
			break;
		case 54:
			func_1566(-572027988, iParam1);
			break;
		case 56:
			func_1566(1339307101, iParam1);
			func_1566(2102267732, iParam1);
			break;
		case 57:
			func_1566(710102686, iParam1);
			break;
		case 22:
			func_1566(-1754368482, iParam1);
			func_1566(-2071408557, iParam1);
			break;
		case 12:
			func_1566(-181334543, iParam1);
			break;
		case 0:
			func_1566(-2134669864, iParam1);
			func_1566(-548289709, iParam1);
			func_1566(-911271922, iParam1);
			func_1566(-604455775, iParam1);
			break;
		case 1:
			func_1567(1);
			break;
		case 3:
			if (func_1269())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_1566(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_1566(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_1239()
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

void func_1240(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1566(-145926707, iParam1);
			func_1566(-604922090, iParam1);
			func_1566(-848690769, iParam1);
			break;
		case 1:
			func_1566(-1477631591, iParam1);
			break;
		case 2:
			func_1566(76112544, iParam1);
			break;
		case 9:
			func_1566(1396404308, iParam1);
			func_1566(-1357381228, iParam1);
			if (func_595((*Global_1835011)[69]->f_1, 1))
			{
				func_1566(1902679064, iParam1);
			}
			else
			{
				func_1566(-2146422425, iParam1);
			}
			break;
		case 22:
			func_1566(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_1566(-1934184559, iParam1);
				func_1566(1281755988, iParam1);
			}
			else
			{
				func_1566(-1745220872, iParam1);
				func_1566(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_1566(-1641504538, iParam1);
				func_1566(-988014485, iParam1);
			}
			else if (func_1568(26))
			{
				func_1566(-343043950, iParam1);
				func_1566(-640062214, iParam1);
			}
			else
			{
				func_1566(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1566(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1566(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1566(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1566(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1566(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1566(1301690984, iParam1);
				}
			}
			else
			{
				func_1566(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1566(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1566(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1566(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1566(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1566(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1566(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_1566(-754570528, iParam1);
			}
			else
			{
				func_1566(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_1566(-2072125821, iParam1);
			}
			else
			{
				func_1566(270040030, iParam1);
			}
			break;
		case 37:
			func_1566(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_1566(-505314737, iParam1);
				func_1566(-1853052860, iParam1);
			}
			else
			{
				func_1566(-1975624994, iParam1);
				func_1566(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_1566(1690231002, iParam1);
			}
			else
			{
				func_1566(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_1566(1225386280, iParam1);
			}
			else if (func_1568(54))
			{
				func_1566(-283235773, iParam1);
			}
			else
			{
				func_1566(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_1566(1355398007, iParam1);
			}
			else
			{
				func_1566(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_1566(574636806, iParam1);
			}
			else
			{
				func_1566(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_1566(821118338, iParam1);
			}
			else if (func_1568(39))
			{
				func_1566(846829260, iParam1);
			}
			else
			{
				func_1566(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_1291((*Global_1835011)[33]->f_1) == 1)
				{
					func_1566(1422779093, iParam1);
				}
				else
				{
					func_1566(-1769536986, iParam1);
				}
			}
			else
			{
				func_1566(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_1566(352134789, iParam1);
			}
			else if (func_1568(43))
			{
				func_1566(260723113, iParam1);
			}
			else
			{
				func_1566(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_1566(-457958799, iParam1);
			}
			else
			{
				func_1566(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_1568(41))
			{
				func_1566(-546824600, iParam1);
			}
			else
			{
				func_1566(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_1566(1297261593, iParam1);
			}
			else
			{
				func_1566(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_1566(2068484886, iParam1);
			}
			else if (func_1568(49))
			{
				func_1566(-1489080639, iParam1);
				func_1566(-2102244050, iParam1);
			}
			else
			{
				func_1566(-1863040467, iParam1);
			}
			break;
		case 51:
			func_1566(-2055943209, iParam1);
			break;
		case 58:
			if (func_595((*Global_1347702)[23]->f_15, 1))
			{
				func_1566(1650066845, iParam1);
			}
			else
			{
				func_1566(151370023, iParam1);
			}
			func_1566(1426057961, iParam1);
			func_1566(476379584, iParam1);
			break;
		case 59:
			func_1566(-1638117866, iParam1);
			break;
		case 62:
			func_1566(199541730, iParam1);
			break;
		case 63:
			func_1566(1703485804, iParam1);
			func_1566(-800449045, iParam1);
			break;
		case 65:
			func_1566(-1678210868, iParam1);
			func_1566(-1448238026, iParam1);
			func_1566(-1200864845, iParam1);
			func_1566(1473511536, iParam1);
			break;
		case 66:
			func_1566(-1774490051, iParam1);
			func_1566(-34645921, iParam1);
			func_1566(174027075, iParam1);
			func_1566(-1155999, iParam1);
			func_1567(1);
			break;
		case 67:
			func_1566(701612593, iParam1);
			func_1566(-1069631343, iParam1);
			func_1566(1673428882, iParam1);
			break;
		case 68:
			func_1566(-739133286, iParam1);
			func_1566(-2130089358, iParam1);
			func_1566(2056190391, iParam1);
			func_1566(1941753817, iParam1);
			func_1567(0);
			break;
		case 70:
			func_1566(-1217555753, iParam1);
			break;
		case 71:
			func_1566(697048821, iParam1);
			break;
		case 73:
			func_1566(-553148661, iParam1);
			break;
		case 75:
			func_1566(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_1566(1414263863, iParam1);
			}
			else
			{
				func_1566(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_1566(1835465936, iParam1);
				func_1566(523715611, iParam1);
			}
			else if (func_1568(78))
			{
				func_1566(1420338873, iParam1);
			}
			else
			{
				func_1566(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_1566(10180941, iParam1);
			}
			else if (func_1568(79))
			{
				func_1566(768420635, iParam1);
			}
			else
			{
				func_1566(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_1566(-383601523, iParam1);
			}
			else
			{
				func_1566(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_1566(1606472408, iParam1);
			}
			else
			{
				func_1566(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_1566(-203571927, iParam1);
			}
			else
			{
				func_1566(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_1566(729886222, iParam1);
			}
			else
			{
				func_1566(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_1566(-714816362, iParam1);
			}
			else
			{
				func_1566(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_1566(-932932179, iParam1);
				func_1566(-1458537240, iParam1);
			}
			else
			{
				func_1566(-1764383885, iParam1);
				func_1566(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_1566(1741466706, iParam1);
			}
			else
			{
				func_1566(1405815775, iParam1);
			}
			break;
		case 94:
			func_1566(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1566(1905280979, iParam1);
			}
			else
			{
				func_1566(-1966245299, iParam1);
			}
			func_1566(721468880, iParam1);
			break;
		case 99:
			func_1566(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_1566(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1566(-1117781095, iParam1);
				}
				else
				{
					func_1566(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1566(141494548, iParam1);
			}
			else
			{
				func_1566(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_1566(-369525697, iParam1);
			}
			else if (func_1568(101))
			{
				func_1566(1595015219, iParam1);
			}
			else
			{
				func_1566(-321486961, iParam1);
			}
			break;
		case 103:
			func_1566(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_1566(793460477, iParam1);
				func_1566(-1610242176, iParam1);
			}
			else if (func_1568(103))
			{
				func_1566(1830897187, iParam1);
			}
			else
			{
				func_1566(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_1566(1528309077, iParam1);
			}
			else if (func_1568(104))
			{
				func_1566(1864966105, iParam1);
			}
			else
			{
				func_1566(-103336013, iParam1);
			}
			break;
		case 108:
			func_1566(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_1566(-1123227713, iParam1);
				func_1566(-889574341, iParam1);
			}
			else
			{
				func_1566(2065385917, iParam1);
				func_1566(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_1566(-887421691, iParam1);
			}
			else if (func_1568(109))
			{
				func_1566(-1318117949, iParam1);
			}
			else
			{
				func_1566(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1566(284822762, iParam1);
				}
				else
				{
					func_1566(-1425017554, iParam1);
				}
			}
			else if (func_1568(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1566(553087292, iParam1);
				}
				else
				{
					func_1566(-1766870331, iParam1);
					func_1566(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1566(-1980598735, iParam1);
			}
			else
			{
				func_1566(-442732098, iParam1);
				func_1566(1955756409, iParam1);
			}
			break;
		case 115:
			func_1566(394303528, iParam1);
			func_1566(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_1566(1182403394, iParam1);
			}
			else
			{
				func_1566(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_1566(924445424, iParam1);
			}
			else
			{
				func_1566(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_1566(430755273, iParam1);
				func_1566(-1473879802, iParam1);
			}
			else
			{
				func_1566(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_1566(73885747, iParam1);
			}
			else if (func_1568(117))
			{
				func_1566(1559707913, iParam1);
			}
			else
			{
				func_1566(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_1566(-2103887972, iParam1);
			}
			else if (func_1568(118))
			{
				func_1566(-435828462, iParam1);
			}
			else
			{
				func_1566(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_1566(2054486196, iParam1);
			}
			else
			{
				func_1566(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_1566(-570086056, iParam1);
			}
			else if (func_1568(121))
			{
				func_1566(32337856, iParam1);
			}
			else
			{
				func_1566(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_1566(813493663, iParam1);
			}
			else if (func_1568(122))
			{
				func_1566(-2132763590, iParam1);
			}
			else
			{
				func_1566(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_1566(-66240572, iParam1);
				func_1566(1563075046, iParam1);
			}
			else
			{
				func_1566(-787011772, iParam1);
				func_1566(-1523377438, iParam1);
			}
			break;
		case 127:
			func_1566(61020800, iParam1);
			break;
		case 129:
			func_1566(428985222, iParam1);
			break;
		case 131:
			func_1566(-1393851036, iParam1);
			break;
		case 133:
			func_1566(1559531342, iParam1);
			break;
		case 134:
			func_1566(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1566(-1374407408, iParam1);
				}
				else
				{
					func_1566(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1566(-472672138, iParam1);
				}
				else
				{
					func_1566(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1566(-1678710489, iParam1);
			}
			else
			{
				func_1566(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_1566(1717582460, iParam1);
			}
			else
			{
				func_1566(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_1566(1568112362, iParam1);
				func_1566(1388317526, iParam1);
			}
			else if (func_1568(136))
			{
				func_1566(-1597534828, iParam1);
				func_1566(-1207918353, iParam1);
			}
			else
			{
				func_1566(-1940891082, iParam1);
				func_1566(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_1566(448334530, iParam1);
				func_1566(2145375502, iParam1);
			}
			else
			{
				func_1566(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1566(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1566(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1566(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1566(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_1566(-66616327, iParam1);
			}
			else
			{
				func_1566(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_1566(1862916706, iParam1);
			}
			else if (func_1568(147))
			{
				func_1566(675105199, iParam1);
			}
			else
			{
				func_1566(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_1566(174409701, iParam1);
			}
			else if (func_1568(148))
			{
				func_1566(-1730895475, iParam1);
			}
			else
			{
				func_1566(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_1566(1295237052, iParam1);
			}
			else if (func_1568(149))
			{
				func_1566(-788577684, iParam1);
			}
			else
			{
				func_1566(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_1241(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_302(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_1571(iParam0);
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
					if (func_1291((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_399(iParam0);
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
			iVar3 = func_399(iParam0);
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

int func_1242(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_1572(iParam0);
	iVar3 = func_1573(iParam0);
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
				iVar1 = func_531();
				func_357(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_1574(iParam0, 1);
			if (func_1575(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_1576(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1577(1, iParam0);
				}
				else
				{
					func_1578(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1243(int iParam0, int iParam1)
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

int func_1244(int iParam0, int iParam1, int iParam2)
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

void func_1245(bool bParam0)
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

int func_1246(int iParam0, int iParam1)
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

bool func_1247(int iParam0)
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

void func_1248(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_1167(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1579(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1580(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_1581(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1580(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_1250()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_1312())
	{
		return false;
	}
	if (!func_595((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_595((*Global_1835011)[2]->f_1, 1) && func_595((*Global_1347702)[120]->f_15, 1)) && !func_595((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_595((*Global_1835011)[37]->f_1, 1) && !func_595((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_595((*Global_1835011)[57]->f_1, 1) && !func_595((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_595((*Global_1835011)[26]->f_1, 1) && !func_595((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_595((*Global_1835011)[62]->f_1, 1) && func_595((*Global_1835011)[63]->f_1, 1)) && !func_595((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_595((*Global_1835011)[75]->f_1, 1) && !func_595((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_595((*Global_1835011)[76]->f_1, 1) && !func_595((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_595((*Global_1835011)[40]->f_1, 1) && func_595((*Global_1835011)[41]->f_1, 1)) && !func_595((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_595((*Global_1835011)[62]->f_1, 1) && func_595((*Global_1835011)[63]->f_1, 1)) && !func_595((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_595((*Global_1835011)[65]->f_1, 1) && func_595((*Global_1835011)[66]->f_1, 1)) && !func_595((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_1251()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_1582(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_1252(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	if (!func_1583(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1584(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_1585(iParam0, bParam2);
	iVar2 = 0;
	if (func_137(iParam0, 0, 0) == 0)
	{
		if (func_1586(iParam0))
		{
			iVar5 = func_1587(iParam0);
			iVar6 = func_1588(iVar5);
			iVar7 = func_1589(iVar6) + 1;
			func_1590(iVar5);
			if (func_1591(38))
			{
				func_998(483, 0);
			}
			else
			{
				func_998(482, 0);
			}
			if (iVar7 == func_1592(iVar6))
			{
				func_1252(func_1593(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_1312() && func_1594(4))
				{
					if (func_1312() && (func_1595(38) || func_1591(38)))
					{
						func_1597(38, func_1593(iVar6), 0, 0, func_1596(), 0, -1, 0);
						func_1598(2);
					}
					else
					{
						func_1597(38, func_1593(iVar6), 0, 0, func_1596(), 0, -1, 0);
						func_1598(1);
					}
				}
			}
			else if (func_1312() && func_1594(4))
			{
				if (func_1312() && (func_1595(38) || func_1591(38)))
				{
					func_1597(38, 0, 0, 0, func_1596(), 0, -1, 0);
					func_1598(2);
				}
				else
				{
					func_1597(38, 0, 0, 0, func_1596(), 0, -1, 0);
					func_1598(1);
				}
			}
			if (func_1312() && func_1594(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_1312() && (func_1595(38) || func_1591(38)))
					{
						func_1599(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1599(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_135(iParam0) == -1037537535)
	{
		if ((!func_875(iParam0, 866047851) && !func_875(iParam0, -1979000645)) && !func_875(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1553(iParam0, 8388608) && !func_1311(28))
	{
		func_1600(28);
	}
	if (!bVar3)
	{
		if (func_875(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_976(iParam0) == -1447088266)
			{
				iVar1 = func_1602(func_1601(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_1() == -1)
					{
						func_1603(iVar1);
					}
					if (func_1230(0) && func_1604(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1605(iParam0, iVar0, iParam5);
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
						func_1603(iParam0);
					}
					if (func_1230(0) && func_1604(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1605(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_135(iParam0) == -427144552)
		{
			if (!func_1606(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_135(iParam0) == 307971639 && func_1607(iParam0))
		{
			if (!func_1608(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_875(iParam0, 866047851))
		{
			func_1609(iParam0);
		}
		else if (func_875(iParam0, 2000026003))
		{
			func_1610(iParam0);
		}
		else if (func_875(iParam0, -103750053))
		{
			func_914(func_1611(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_914(func_913(-717883113, 2091222383), iVar0);
		}
		else if (func_875(iParam0, -121341956) && !func_875(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_595((*Global_1835011)[4]->f_1, 1))
				{
					func_998(498, 0);
				}
			}
			if (func_875(iParam0, -2017733358) || func_875(iParam0, -1369131378))
			{
				func_1612(iParam0);
			}
		}
		else if (func_875(iParam0, -136654233))
		{
			if (func_875(iParam0, -1021472396))
			{
			}
		}
		else if (func_875(iParam0, -1466706512) && func_875(iParam0, 1147021565))
		{
			func_998(484, 0);
		}
		else if (func_875(iParam0, 1147021565) && func_875(iParam0, -524514947))
		{
		}
		else if (func_875(iParam0, 554195525))
		{
		}
		else if (func_875(iParam0, 589988438))
		{
			if (func_1613())
			{
				func_871(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_875(iParam0, 787083290) && func_875(iParam0, 949916894))
		{
			func_1614(iParam0);
		}
		else if (func_875(iParam0, -1718133314))
		{
			func_1615(iParam0);
		}
		else if (func_875(iParam0, -1738650224))
		{
			func_1616(iParam0);
		}
		else if (func_875(iParam0, -1112814642) && func_875(iParam0, 949916894))
		{
			func_1617(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_875(iParam0, 1841149704))
		{
			func_1618();
		}
		else if (func_875(iParam0, 606799272))
		{
			func_1619(iParam0, iParam1);
			func_1620(iParam0);
		}
		else if (func_875(iParam0, -1112814642) && func_875(iParam0, -1697809989))
		{
			func_1561(iParam0, 0, 0, 0);
		}
		else if (func_875(iParam0, -2017733358) || func_875(iParam0, -1369131378))
		{
			func_1612(iParam0);
		}
		else if (func_875(iParam0, -1921346699))
		{
			if (func_1() != -1)
			{
				return false;
			}
			func_1621(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_875(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_12(215778062, 1, 0))
					{
						func_1252(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_12(670273567, 1, 0))
					{
						func_1252(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_12(-967317137, 1, 0))
					{
						func_1252(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_12(526074061, 1, 0))
					{
						func_1252(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_12(-1045488665, 1, 0))
					{
						func_1252(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_12(471514780, 1, 0))
					{
						func_1252(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_875(iParam0, -839724752) && func_1553(iParam0, 4))
		{
			if (!func_1591(42))
			{
				func_1622(iParam0);
			}
		}
		else if (func_875(iParam0, 1399091007))
		{
			func_1623(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_875(iParam0, 1248798204))
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
				func_1252(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1600(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_1473(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1624(&iVar9, 0))
				{
					func_1604(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_1() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_1473(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_998(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1625();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1626();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1627();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1628();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1488();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1629(499813453, 854119837, 0);
				func_1630(499813453, 0);
				func_1631(1);
				break;
			case 2127812557:
				func_1629(499813453, -1292544588, 0);
				func_1630(499813453, 0);
				func_1631(2);
				break;
			case 808991383:
				func_1629(499813453, -1003325394, 0);
				func_1630(499813453, 0);
				func_1631(4);
				break;
			case 1134518629:
				func_1629(666607663, -335460405, 0);
				func_1630(666607663, 0);
				func_1632(1);
				break;
			case 902940106:
				func_1629(666607663, 903797617, 0);
				func_1630(666607663, 0);
				func_1632(2);
				break;
			case -418174898:
				func_1629(666607663, 669728650, 0);
				func_1630(666607663, 0);
				func_1632(4);
				break;
			case -648114971:
				func_1629(-220219788, 1214120047, 0);
				func_1630(-220219788, 0);
				func_1633(1);
				break;
			case 211153747:
				func_1629(-220219788, 655769340, 0);
				func_1630(-220219788, 0);
				func_1633(2);
				break;
			case -32876996:
				func_1629(-220219788, 885316185, 0);
				func_1630(-220219788, 0);
				func_1633(4);
				break;
			case 1191437462:
				func_1629(218622660, -1491419385, 0);
				func_1630(218622660, 0);
				func_1634(1);
				break;
			case 1119149048:
				func_1629(218622660, 1809565830, 0);
				func_1630(218622660, 0);
				func_1634(2);
				break;
			case 506073827:
				func_1629(390004462, -628873767, 0);
				func_1630(390004462, 0);
				func_1635(1);
				break;
			case -1876986168:
				func_1629(390004462, -405421956, 0);
				func_1630(390004462, 0);
				func_1635(2);
				break;
			case 2142623221:
				func_1629(390004462, -1108972386, 0);
				func_1630(390004462, 0);
				func_1635(4);
				break;
			case 1508215381:
				func_1629(6410548, 1053716392, 0);
				func_1630(6410548, 0);
				func_1636(1);
				break;
			case -888935280:
				func_1629(6410548, 806507056, 0);
				func_1630(6410548, 0);
				func_1636(2);
				break;
			case -1252474566:
				func_1629(6410548, 1571925350, 0);
				func_1630(6410548, 0);
				func_1636(4);
				break;
			case -1465702449:
				func_1629(6410548, 1330352282, 0);
				func_1630(6410548, 0);
				func_1636(8);
				break;
			case -21093309:
				func_1637(242, func_1555(-21093309), 0);
				break;
			case 204375141:
				func_1637(240, func_1555(204375141), 0);
				break;
			case -417963070:
				func_1637(241, func_1555(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1638(594, 1934060482, 1, 1);
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
					func_1638(594, 1110018439, 1, 1);
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
					func_1638(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1638(594, -1228016946, 1, 1);
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
					func_1638(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1638(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_998(488, 0);
				break;
			case 1613651027:
				func_998(491, 0);
				break;
			case -885810591:
				func_998(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_1252(func_1639(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1252(func_1640(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_1311(1))
				{
					func_998(487, 0);
				}
				break;
			case -898386032:
				func_998(486, 0);
				break;
			case -2035110427:
				if (func_1() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_998(496, 0);
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
		func_1641(&iVar10);
		if (!func_1642(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_1230(0))
		{
			return true;
		}
		if (func_135(iParam0) == -1037537535)
		{
			func_1643(iParam0);
		}
		if (func_875(iParam0, -1979000645))
		{
			func_1644(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1230(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_1252(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1645(iVar2, 0);
		}
	}
	Var35 = { func_1227(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_1646(iParam0);
	if (fParam6 > 0f)
	{
		if (func_875(iParam0, -839724752))
		{
			func_1647(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1226(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_1253(int iParam0)
{
	if (func_875(iParam0, 1989861793))
	{
		iVar0 = func_1648(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1649(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1650(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1651(iVar14, iVar1);
					if (iVar15 != iParam0 && func_134(iVar15, 0))
					{
						if (func_1652(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1653(iVar1);
				if (bVar13)
				{
					func_1654(iParam0);
				}
				else
				{
					func_998(306, 0);
				}
			}
		}
	}
}

void func_1254()
{
	if (func_1() != -1)
	{
		return;
	}
	func_1655();
	func_1656();
	func_1657();
	func_1658();
	func_1659();
	func_1660();
	func_1661();
}

void func_1255(int iParam0)
{
	func_872(iParam0, 1, 1, -142743235, 1);
	if (func_1662(iParam0))
	{
		func_1663(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1665(func_1664(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1666(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_1667() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1668(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1668(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_1669(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_1669(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_1669(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_1669(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_1669(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_1669(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_1669(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_1669(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_1669(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1670(iVar8, iVar0))
				{
					func_1671(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1670(iVar8, iVar0))
		{
			func_1671(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_1256()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1670(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_1667() == -2125499975 || func_1667() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1671(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1671(&vVar2, iVar5, iVar0);
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

void func_1257()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_1582(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_1258(int iParam0, bool bParam1)
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
			if ((func_595((*Global_1835011)[59]->f_1, 1) || func_595((*Global_1347702)[1]->f_15, 1)) || func_90((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_1563(403634348, 1))
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

void func_1259(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_1665(iParam0, 1);
	func_1672(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_1672(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_1673(17, iParam0, 0, 0, 0);
		}
	}
	if (func_1() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1672(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_1672(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_1260()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_1582(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_1261()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_1582(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_1262(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1558(iParam1, 1, 0) };
		iParam3 = func_1674(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1675(iParam3);
	return func_1473(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_1263()
{
	return _unlock_is_unlocked(99890643);
}

void func_1264(int iParam0)
{
	if (!func_408(iParam0))
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

bool func_1265(int iParam0, int iParam1)
{
	if (!func_1676(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1677(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1678(Global_40.f_9910[iParam1], 4);
}

void func_1266(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1676(iParam0))
	{
		return;
	}
	if (!func_356(iParam1))
	{
		return;
	}
	if (func_358(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1677(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_1265(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1679(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_128(0, 0, 1))
		{
			func_1296(0, 17);
		}
	}
}

void func_1267()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_1582(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_1268()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_1582(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_1269()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1270()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_1582(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_1271()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_1582(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_1272()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_1582(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_1273()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_1582(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_1274()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_1582(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_1275()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_1582(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_1276(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1277(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

void func_1278(int iParam0)
{
	if (func_911(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1498(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1498(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_1279()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_1582(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_1280()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_1582(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_1281()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_1582(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_1282()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_1582(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_1283()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_1582(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_1284()
{
	if (func_1680() > 1)
	{
		func_1681();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_998(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_998(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_998(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_998(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_998(452, 1);
		}
	}
}

bool func_1285(int iParam0)
{
	return func_1682(iParam0, 4, 1);
}

void func_1286(int iParam0)
{
	func_1683(iParam0, 4, 1);
}

void func_1287(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_1236(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1288(int iParam0)
{
	if (func_911(32768))
	{
		return;
	}
	if (!func_89(iParam0))
	{
		return;
	}
	func_598(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_302(iParam0))
	{
		case 1:
			func_914(func_913(909007663, -587839005), 1);
			iVar0 = func_399(iParam0);
			func_914(func_1236(-634848880), 1);
			switch (func_434(iVar0))
			{
				case 0:
					func_914(func_913(909007663, 1325140787), 1);
					break;
				case 1:
					func_914(func_913(909007663, 2101241783), 1);
					break;
				case 2:
					func_914(func_913(909007663, -1296936294), 1);
					break;
				case 3:
					func_914(func_913(909007663, -798388728), 1);
					break;
				case 4:
					func_914(func_913(909007663, -1787586531), 1);
					break;
				case 5:
					func_914(func_913(909007663, -1002834519), 1);
					break;
				case 6:
					func_914(func_913(909007663, -50600144), 1);
					break;
				case 7:
					func_914(func_913(909007663, -348503123), 1);
					break;
				case 8:
					func_914(func_913(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_914(func_913(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_914(func_913(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_399(iParam0);
			if (func_401((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_914(func_1236(-634848880), 1);
			}
			if (func_401((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_401((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_914(func_913(909007663, -587839005), 1);
				}
				else
				{
					func_914(func_913(909007663, -2049243343), 1);
				}
			}
			if (func_401((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_590(iVar1))
				{
					case 0:
						func_914(func_913(909007663, 1325140787), 1);
						break;
					case 1:
						func_914(func_913(909007663, 2101241783), 1);
						break;
					case 2:
						func_914(func_913(909007663, -1296936294), 1);
						break;
					case 3:
						func_914(func_913(909007663, -798388728), 1);
						break;
					case 4:
						func_914(func_913(909007663, -1787586531), 1);
						break;
					case 5:
						func_914(func_913(909007663, -1002834519), 1);
						break;
					case 6:
						func_914(func_913(909007663, -50600144), 1);
						break;
					case 7:
						func_914(func_913(909007663, -348503123), 1);
						break;
					case 8:
						func_914(func_913(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_914(func_913(909007663, 532323983), 1);
				}
			}
			else if (func_401((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_401((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_401((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_914(func_913(909007663, 551192206), 1);
				}
				else
				{
					func_914(func_913(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_1289()
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
	if (!func_1684(64))
	{
		return;
	}
	else if (func_248(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_128(0, 0, 1) || func_67()) || func_1250())
	{
		return;
	}
	iVar0 = func_306();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_1685(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_1686(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_1686(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1497(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_1296(0, -1);
	}
	if (iVar2 > 0)
	{
		func_1687("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1688(1, 0);
	Global_1956575->f_4 = 1;
}

void func_1290(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_911(32768))
	{
		return;
	}
	func_820(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_1689(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_1291(int iParam0)
{
	if (!func_89(iParam0))
	{
		return -1;
	}
	return func_1690(iParam0);
}

int func_1292(int iParam0, int iParam1)
{
	if (!func_1691(iParam0))
	{
		return 0;
	}
	if (!func_1312())
	{
		return 0;
	}
	if (!func_1692(iParam0, &iVar0, &iVar1))
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

int func_1293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1225(1330954593, 0, -1);
		case 1:
			return func_1225(1330954593, 0, -1);
		case 2:
			return func_1225(1330954593, 0, -1) * 2;
		case 4:
			return func_1225(1330954593, 0, -1);
		case 5:
			return func_1225(1330954593, 0, -1);
		case 6:
			return func_1225(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_1225(1330954593, 0, -1) * 3;
		case 9:
			return func_1225(1330954593, 0, -1) * 3;
		case 10:
			return func_1225(1330954593, 0, -1) * 3;
		case 11:
			return func_1225(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_1294(int iParam0)
{
	if (!func_89(iParam0))
	{
		return cVar0;
	}
	switch (func_302(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_1571(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_399(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_180(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_1295(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_1693();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_302(Global_1879514->f_1) == 1)
			{
				func_1292(5, 1);
			}
			else if (func_302(Global_1879514->f_1) == 8 && (func_401((*Global_1347702)[func_399(Global_1879514->f_1)]->f_12, 1) || func_401((*Global_1347702)[func_399(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_1292(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_1296(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1157(&Global_0, 8);
	}
	if (!func_1312() || func_1() != -1)
	{
		return;
	}
	func_1157(&Global_0, 1);
}

struct<4> func_1297(bool bParam0)
{
	return func_1298(1328661203, func_1694(), -1591664384, bParam0);
}

struct<4> func_1298(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_134(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_411(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1299(int iParam0)
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

void func_1300(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_1301(int iParam0)
{
	return iParam0 != 0;
}

int func_1302(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_1303(int iParam0, int iParam1)
{
	iParam0 = func_1302(iParam0);
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

void func_1304()
{
	if (func_1337(0))
	{
		func_1695(0);
	}
	if (func_1337(1))
	{
		func_1695(1);
	}
	if (func_1337(5))
	{
		func_1695(5);
	}
	if (func_1337(6))
	{
		func_1696(6);
	}
}

bool func_1305(int iParam0)
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

void func_1306(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1697(iParam0, iParam1))
		{
			if (func_1698(iParam0, iParam1))
			{
				if (func_1699(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1700(iParam0);
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

void func_1307(int iParam0, int iParam1, bool bParam2)
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

void func_1308(int iParam0, bool bParam1)
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

void func_1309(int iParam0, int iParam1)
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

bool func_1310(int iParam0)
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

bool func_1311(int iParam0)
{
	if (!func_1701(iParam0))
	{
		return false;
	}
	return func_1702(iParam0);
}

bool func_1312()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_1313(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_1703(iParam0))
	{
		iVar1 = func_1314(iParam0, iVar0);
		if (iVar1 != 0 && _map_is_discovery_active(iVar1))
		{
			_map_discovery_set_enabled(iVar1);
		}
		iVar0++;
	}
}

int func_1314(int iParam0, int iParam1)
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

void func_1315(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_84(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_352(iParam0, 0);
		}
	}
}

bool func_1316(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_1317(int iParam0, int iParam1, int iParam2)
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

void func_1318(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1067(0);
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

int func_1319(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (func_1704(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_583(iVar2, iParam1))
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

bool func_1320()
{
	if (func_1705())
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

void func_1321(var uParam0, var uParam1)
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

bool func_1322(bool bParam0, int iParam1, int iParam2)
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

int func_1323(int iParam0)
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

void func_1324(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_230(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_127(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1325(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1326(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1327()
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

int func_1328(int iParam0, int iParam1)
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

int func_1329(int iParam0, int iParam1)
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

bool func_1330(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1347(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1331(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1337(iParam0))
	{
		return;
	}
	iVar0 = func_1336(iParam0);
	func_1706(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1707(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1708(iParam0, 0);
	func_897(iParam0);
}

void func_1332(int iParam0)
{
	iParam0 = func_1302(iParam0);
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
	func_1709(&Var0);
	func_1710(iParam0, Var0);
	func_1711(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1712(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1713(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1714(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1715(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1716(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1717(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1718(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1719(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_1333(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1334(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1335(vector3 vParam0)
{
	return func_1720(_get_map_zone_at_coords(vParam0, 10));
}

int func_1336(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

bool func_1337(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

bool func_1338(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1337(iParam0))
	{
		return false;
	}
	iVar0 = func_1336(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1339(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1337(iParam0))
	{
		return false;
	}
	iVar0 = func_1336(iParam0);
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

void func_1340(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1337(iParam0))
	{
		return;
	}
	iVar0 = func_1336(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1341(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1696(iParam0);
	func_1696(iParam0);
	func_1721(iParam0, iParam1);
	func_1722(iParam0, iParam1);
	func_1723(iParam0, iParam1);
	iVar1 = func_1336(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1724(iVar1);
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
	iVar3 = func_1336(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1724(iVar3);
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
	func_1304();
}

bool func_1342()
{
	iVar0 = func_1725();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1343()
{
	iVar0 = func_1725();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1726(0);
}

void func_1344(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1345(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

int func_1346(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

int func_1347(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

void func_1348(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1727(&iVar0, &iVar1, &iVar2);
	func_1728(iParam0, iVar0);
	func_1729(iParam0, iVar1);
	func_1730(iParam0, iVar2);
	func_1731(iParam0, 1);
	func_1732(iParam0, 1);
}

void func_1349(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1733(iParam0, 1);
}

void func_1350(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_1302(iParam0);
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

bool func_1351(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1734(iParam0, 1);
}

struct<2> func_1352(int iParam0)
{
	iParam0 = func_1302(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1735(iParam0, &uVar2))
	{
	}
	if (!func_1736(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1353()
{
	if (func_1737(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1737(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1737(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1737(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1737(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1737(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1354(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1738(iParam0);
	func_1739(iParam0, uParam1);
	func_1740(iParam0);
	func_1741(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1742(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1355(int iParam0)
{
	iParam0 = func_1302(iParam0);
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

void func_1356(int iParam0, int iParam1, bool bParam2)
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

int func_1357(int iParam0)
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

int func_1358(int iParam0)
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

void func_1359(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

var func_1360(int iParam0)
{
	return iParam0->f_25;
}

bool func_1361(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1743(iParam0, iParam1))
		{
			if (!func_359(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_538(uParam2, 0, 0, 1, 0);
				func_127(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_359(iParam1->f_10, 1))
		{
			func_1744(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_230(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1362(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_359(iParam4, 32);
		func_1315(iParam1, uParam2, 0);
		iVar5 = func_1745(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_538(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_359(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_359(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_359(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_359(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_359(iParam4, 8388608) || func_359(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_359(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_359(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_761(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_761(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_359(iParam4, 67108864))
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
				iParam6 = func_1746(iParam0);
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
			if (func_359(iParam4, 268435456))
			{
				iVar8 = func_1747(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1748(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_761(iParam1, 23))
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
			if (func_359(iParam4, 2) || func_359(iParam4, 16))
			{
				func_1363(*iParam0, 1, 1);
			}
			else
			{
				func_1363(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1363(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1364(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1749(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1365(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1750(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_359(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1366(int iParam0)
{
	if (func_359(iParam0, 4))
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
	if (func_359(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_359(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_1367(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_968(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_965(Global_35)) || func_963(Global_35)) || func_961(Global_35));
	fVar12 = -1f;
	if (func_257(&(iParam1->f_13)))
	{
		fVar12 = func_367(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_292((*uParam4)[iVar0]->f_6);
		func_1751(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1752(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1753(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_538(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1754(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1315(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1755(iParam1, fParam6, iParam1->f_9))
					{
						func_60(&(iParam1->f_18));
						if (bVar6)
						{
							func_1754(uParam4, 0, 0);
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
		func_1756(iParam1, fParam2);
	}
	return bVar5;
}

void func_1368(var uParam0)
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

void func_1369(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1757((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1756(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1370(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1758(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1759(iParam1, 0);
				func_1315(iParam1, uParam2, func_761(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1371(int iParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_60(&(iParam1->f_18));
			return false;
		}
		else if (func_257(&(iParam1->f_18)))
		{
			func_260(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_257(&(iParam1->f_18)))
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
	return func_253(&(iParam1->f_18), fParam2);
	return true;
}

void func_1372(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1751(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

int func_1373(int* iParam0)
{
	if (func_761(iParam0, 0))
	{
		if (func_1760(iParam0))
		{
			func_543(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1374(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1375(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1761(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1762(iParam0))
	{
		return false;
	}
	if (func_1763(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1764(iParam0, 1)) || func_911(32768))
	{
		if (!func_1764(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1765())
	{
		return false;
	}
	return true;
}

void func_1376(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_1377(int iParam0)
{
	if (!func_469(16))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iParam0 == func_1029(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1378(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return false;
	}
	if (!_does_anim_scene_exist(&(Local_2370[func_322(iParam1)])))
	{
		return false;
	}
	if (&iLocal_2487[iParam1] >= 8)
	{
		return false;
	}
	if (!(_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index())))
	{
		return false;
	}
	if (has_anim_event_fired(*iParam0, 1824589780) || has_anim_event_fired(*iParam0, 923959751))
	{
		return true;
	}
	return false;
}

char* func_1379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return "PBL_REACT_F";
		case 1:
			return "PBL_REACT_B";
		case 3:
			return "PBL_REACT_L";
		case 2:
			return "PBL_REACT_R";
			return "";
			default:
				break;
	}
}

bool func_1380(int iParam0, int iParam1)
{
	if (iParam1 >= 4)
	{
		return false;
	}
	if (&iLocal_2487[iParam1] >= 8)
	{
		return false;
	}
	if (!_does_volume_exist(&(iLocal_2321[func_324(iParam1)])))
	{
		return false;
	}
	if (!func_194(Global_35, &(iLocal_2321[func_324(iParam1)]), 1, 0))
	{
		return false;
	}
	if (has_anim_event_fired(*iParam0, 1865930452))
	{
		return true;
	}
	return false;
}

char* func_1381()
{
	return "PBL_BASE";
}

bool func_1382(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return true;
	}
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

bool func_1383(int iParam0)
{
	if (func_986(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1384(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar0]))
		{
			if (func_370(uParam1[iVar0], iParam0, 1) < 225f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_1385()
{
	return "TRACKS_BLIP_THF";
}

var func_1386(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1387(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1766(sParam1));
}

int func_1388()
{
	switch (func_1())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_1389(int iParam0, int iParam1)
{
	if (func_1070(iParam0, 1, 1))
	{
		return func_215(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_1390(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_1005(iParam0, 7);
}

void func_1391(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_1004(iParam0, 7);
}

void func_1392(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1393(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_970(iVar0, 2))
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
				func_1475(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1394(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_292(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_293(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_1395(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
		if (func_970(iVar0, 2))
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
		func_1475(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1396(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_175(vParam2))
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
		if (func_970(iVar0, 2))
		{
			if (func_715(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_1475(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_1397(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

char* func_1398(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1439(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1767(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1768(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_1399(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1400(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_1401(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1403(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1404(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_1405()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_1406(var uParam0)
{
	Var1.f_10 = -1569615261;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
		iVar0++;
	}
}

int func_1407(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1408(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && !is_string_null_or_empty(sParam1)) && are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1410(var uParam0)
{
	MemCopy(&uVar0, {func_1769(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_157))
	{
		uParam0->f_157 = _create_anim_scene(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_157, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_157, func_1439(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1411(var uParam0, vector3 vParam1)
{
	if (func_175(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1412(var uParam0)
{
	return uParam0->f_147;
}

void func_1413()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1770(Var0);
	}
}

void func_1414(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_156, uParam0->f_174[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_156, uParam0->f_174[iVar0]);
		}
		uParam0->f_174[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_1415(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_1116(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_1771(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_1116(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_1114(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1114(uParam0, 16, 1);
}

float func_1416(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_1417(var uParam0)
{
	return uParam0->f_158;
}

void func_1418(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_1116(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_857(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1772());
		func_1108(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1773(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_1108(uParam0, 16);
	}
}

bool func_1419()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_1420(int iParam0)
{
	if (func_1774(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1770(Var0);
}

bool func_1421(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_533(iParam0, Global_36, 1);
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

bool func_1422(var uParam0)
{
	if (!func_1775(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_1423(var uParam0)
{
	if (!func_1422(uParam0))
	{
		return false;
	}
	if (func_1776(uParam0->f_7, uParam0->f_8, func_1092(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_1092(&(uParam0->f_3), 4))
	{
		if (func_1777())
		{
			return true;
		}
	}
	return false;
}

bool func_1424(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (func_1778(get_entity_coords(iParam0, true, false), fParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1425(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_1426(vector3 vParam0, var uParam3)
{
	if (!func_1092(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_987(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_1427(vector3 vParam0, var uParam3)
{
	fVar0 = func_1428(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_1428(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_632(0) };
	vVar3 = { func_633(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

bool func_1429(int iParam0)
{
	if (-1829635046 == func_1779(81053684))
	{
		if (func_1431(iParam0))
		{
			return true;
		}
	}
	else if (func_1780(-525676072, iParam0))
	{
		if (func_1431(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1430()
{
	return Global_1946804->f_2792;
}

bool func_1431(int iParam0)
{
	if (func_1780(81053684, iParam0))
	{
		return true;
	}
	if (func_1780(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1432(int iParam0)
{
	if (func_1781())
	{
		return false;
	}
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	if (!func_12(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_1433(int iParam0, int iParam1)
{
	bVar3 = func_1782(iParam0);
	if (func_875(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1429(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1783();
			}
			else
			{
				iVar0 = func_1784();
			}
		}
		else if (func_215(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1785();
		}
		else
		{
			iVar0 = func_1786();
		}
	}
	else if (func_1431(&iVar2))
	{
		if (func_875(iVar2, -1303648999))
		{
			iVar0 = func_1783();
		}
		else
		{
			iVar0 = func_1784();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1785();
	}
	else
	{
		iVar0 = func_1786();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_1434(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (bParam4 && is_entity_dead(iParam1))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1398(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = get_entity_model(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
	}
	if (!func_1133(uParam0, iParam1, 4))
	{
		if (_0xb89fcff19dafff28(uParam0->f_156, sParam2))
		{
			func_1787(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && _0x005e6f28dd7ed58d(uParam0->f_156, sParam2))
		{
			func_1787(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

bool func_1435(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<8> func_1436(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_1437(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1438()
{
	if (func_292(Global_43801))
	{
		func_84(&Global_43801, 0, 0);
	}
}

char* func_1439(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_1788(iVar0);
}

bool func_1440(bool bParam0, bool bParam1)
{
	if (!func_292(Global_43801))
	{
		Global_43801 = func_1139("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_785(Global_43801, 0, 1);
		func_1142(Global_43801, 6, 1);
		if (bParam1)
		{
			func_1142(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_1090(Global_43801, 0))
		{
			func_784(Global_43801, 1, 1);
		}
		if (func_1146(Global_43801, 1) != 0f && bParam0)
		{
			func_785(Global_43801, 1, 1);
		}
		else
		{
			func_785(Global_43801, 0, 1);
		}
		return func_1143(Global_43801, 1);
	}
	return false;
}

bool func_1441(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1442(var uParam0, char* sParam1)
{
	if (((!func_1116(uParam0, 32) || func_1789(uParam0)) || func_1116(uParam0, 268435456)) && !func_1116(uParam0, 65536))
	{
		func_1110(&(uParam0->f_212), 256);
	}
}

void func_1443(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_1444()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_1445()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

bool func_1446()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

void func_1447(bool bParam0)
{
	if (func_1446())
	{
		Global_1357509 = 1;
	}
	if (func_1790(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_1448(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

bool func_1449()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_1450(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]))
		{
			func_1791(uParam0, uParam0->f_174[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_1405() };
	func_1791(uParam0, &Var1);
	Var1 = { func_850(uParam0) };
	func_1791(uParam0, &Var1);
}

void func_1451(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_1464(uParam0->f_13[iVar0], 2))
		{
			if (func_1464(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_1792(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_1464(uParam0->f_13[iVar0], 16))
					{
						func_1793(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1452(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_1464(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_1403(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

bool func_1453()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1454(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_1455(var uParam0)
{
	return uParam0->f_214;
}

void func_1456(var uParam0)
{
	if (func_1429(&iVar0))
	{
		if (func_134(iVar0, 0))
		{
			if (func_976(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_1473(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_134(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1457(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_1794(0, 0);
		func_1795(-1);
	}
	func_1127(1);
	set_entity_invincible(Global_35, true);
	if (!func_1441(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_1441(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_1441(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_1441(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_1441(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_1441(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_1441(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_1441(*uParam0, 4) && !func_1441(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1441(*uParam0, 2048))
	{
		func_1796(0, 0);
	}
	if (func_1441(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_1441(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_1441(*uParam0, 8192))
	{
		func_1797();
	}
	if (!func_1441(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_1441(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_1441(*uParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_1441(*uParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_1725() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_175(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_483(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1334(2);
						func_1333(-1);
						func_1344(vVar3);
						func_1799(func_1798());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_1441(*uParam0, 4096))
	{
		func_1793(Global_35);
	}
	if (!func_1441(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_1441(*uParam0, 2097152))
	{
		if (func_1800() || _0x50f124e6ef188b22(Global_35))
		{
			func_1801(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1458(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_1459(var uParam0)
{
	if (func_1116(uParam0, 2048) && !func_175(func_1802(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_1116(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_706(iVar1, func_1802(uParam0), func_1803(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_1116(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_706(iVar3, func_1802(uParam0), func_1803(uParam0), 2, 1073741824);
		}
	}
}

void func_1460(var uParam0)
{
	if ((func_1116(uParam0, 268435456) && !func_175(func_1802(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1802(uParam0) };
			func_706(iVar0, vVar1, func_1519(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_1461(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_1464(uParam0->f_13[iVar0], 8))
					{
						if (func_408(func_613(iVar1, 0, 1, 0)))
						{
							if (!func_1804(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_408(func_613(iVar1, 1, 1, 0)))
						{
							if (!func_1804(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1462(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1463(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_1() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_190);
			}
			func_1805(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1806(iParam1, 29, bVar4, 1, 0);
			func_1806(iParam1, 31, bVar4, 1, 0);
			func_1806(iParam1, 30, bVar4, 1, 0);
			func_1806(iParam1, 22, bVar4, 1, 0);
			func_1806(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1807(32768) && func_1808(1108822547, 8)) && func_1809(10, iParam3))
	{
		func_1810(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1811(iVar1, 1);
			if (func_1808(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1809(iVar1, iParam3))
				{
				}
				else if ((func_1808(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1808(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1806(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1812(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1] == &Global_1946804->f_2456[iVar1]) && uParam0->f_1[iVar1]->f_1 == Global_1946804->f_2456[iVar1]->f_1)
						{
						}
						else
						{
							if (Global_1946804->f_57[iVar1]->f_1 > 1)
							{
								func_1806(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1808(iVar3, 1))
							{
								func_1813(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(iParam1, bVar4);
							_update_ped_variation(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_1464(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1465(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_1814(uParam0);
	func_1411(uParam0, 0f, 0f, 0f);
	func_1815(uParam0);
}

void func_1466(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_1467(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1468(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_1404(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1469(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1438();
	}
	_0xa0cefcea390aab9b(0);
}

void func_1470(int iParam0)
{
	func_1816();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_1471()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

void func_1472(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1817(bParam0);
}

int func_1473(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1558(iParam1, 1, 0) };
		iParam3 = func_1674(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1818(iParam1, iParam2, func_1665(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1819(1, (func_1() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1665(iParam3, 1)])
			{
				func_1673(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1807(32768) && iParam1 != &Global_1946804->f_57[func_1665(iParam3, 1)])
			{
				func_1820();
				func_1673(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1673(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1821(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1673(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1420(0);
			func_1822(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1673(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1474(int iParam0, bool bParam1)
{
	Var0 = { func_1558(iParam0, 0, 0) };
	Var5 = { func_1298(iParam0, Var0, Var0.f_4, 0) };
	if (func_1823(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_411(0), &Var5, bParam1);
}

void func_1475(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
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
	_uiprompt_set_transport_mode(iVar0, iParam5);
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
	func_1148(iParam0, 1);
	func_1149(iParam0, 1);
	func_1150(iParam0, 128);
}

bool func_1476(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_1477(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_1478(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_428(iParam0);
		func_1824(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_1479(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_1825(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_1480(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1825(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_1481(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1825(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_1482(bool bParam0)
{
	func_1825(Global_1956614, bParam0);
}

void func_1483(bool bParam0)
{
	func_1825(&(Global_1415412->f_3), bParam0);
}

void func_1484(bool bParam0)
{
	if (func_1826(Global_1934051->f_33))
	{
		func_1827(Global_1934051->f_33, 7148155);
	}
	func_1825(&(Global_1934051->f_33), bParam0);
}

void func_1485(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1829(func_1828(iVar0));
		if (iVar1 != 0)
		{
			func_1827(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_1825((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_1486(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_1830(iVar0, -1);
		func_1831(iVar0, 0);
		func_1832(iVar0, 0);
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

void func_1487(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_1488()
{
	func_1833();
	func_1834();
	func_1835();
}

void func_1489(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_1490(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

float func_1491(int iParam0)
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

int func_1492(bool bParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1836(iParam1) };
	vVar3 = { func_1836(iParam2) };
	return func_1837(bParam0, vVar0, vVar3, iParam2);
}

int func_1493(bool bParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1836(iParam1) };
	return func_1837(bParam0, vVar0, vParam2, 0);
}

Vector3 func_1494()
{
	return 2203.104f, 641.0013f, 96.8093f;
}

float func_1495()
{
	return -146.86f;
}

void func_1496(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_968(1) < iParam0)
	{
		iParam0 = func_968(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_1236(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1497(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1498(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_1498(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_1838(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1499()
{
	if (func_1269())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1500(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1839((Global_40.f_4283.f_325 + iParam0));
}

void func_1501(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1499())
	{
		func_1498(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1498(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1502()
{
	return func_1840(get_id_of_this_thread());
}

void func_1503(var uParam0, int iParam1)
{
	uParam0->f_1354.f_1 = (uParam0->f_1354.f_1 || iParam1);
}

bool func_1504(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_1505(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

void func_1506()
{
	if (func_1502())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_848())
		{
			func_1472(1);
		}
	}
}

void func_1507(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(uParam0->f_1210[iVar0]->f_8))
		{
			if (bParam1)
			{
				bVar1 = check_ownership_of_anim_scene(uParam0->f_1210[iVar0]->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((_0xa9016536015de29d(uParam0->f_1210[iVar0]->f_8, "pl_breakout") && _0x23e33cb9f4a3f547(uParam0->f_1210[iVar0]->f_8, "pl_breakout")) && !uParam0->f_1457)
					{
						_set_anim_scene_playback_list_bool(uParam0->f_1210[iVar0]->f_8, "pl_breakout", true);
					}
				}
				else if (func_1107(uParam0, 32768) && func_1841(uParam0->f_1210[iVar0], 128))
				{
					func_1842(uParam0->f_1210[iVar0]->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						take_ownership_of_anim_scene(uParam0->f_1210[iVar0]->f_8);
					}
					_delete_anim_scene(uParam0->f_1210[iVar0]->f_8);
				}
			}
			else
			{
				reset_anim_scene(uParam0->f_1210[iVar0]->f_8, 0);
			}
		}
		iVar0++;
	}
}

void func_1508(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2)))
			{
				task_clear_look_at(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2));
				if (func_1107(uParam0, 524288) && is_screen_faded_out())
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), false, true);
				}
				if (get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
				{
					set_ped_can_be_targetted(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

char* func_1509()
{
	return "default_leadin_camera";
}

void func_1510()
{
	set_script_with_name_hash_as_no_longer_needed(-1181125641);
	remove_anim_dict(func_1512(1));
}

bool func_1511(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return true;
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return false;
		default:
			break;
	}
	return false;
}

char* func_1512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_1513(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_volume_exist(uParam0->f_1563))
	{
		if (!bParam1)
		{
			func_1843(uParam0);
		}
		else if (bParam2)
		{
			func_1844(uParam0);
		}
		else
		{
			func_1845(uParam0, uParam0->f_1586);
		}
	}
	else
	{
		if (!func_1107(uParam0, 1048576) && bParam1)
		{
			func_1845(uParam0, uParam0->f_1586);
		}
		else if (!func_1107(uParam0, 2097152) && bParam2)
		{
			func_1844(uParam0);
		}
		else if ((func_1107(uParam0, 1048576) && !bParam1) || (func_1107(uParam0, 2097152) && !bParam2))
		{
			func_1843(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1570 * FtoV(func_1846(uParam0->f_1586)) };
			if (!func_715(vVar0, _0x3e2a25b2416dd67e(uParam0->f_1563), 1056964608, 1) && !func_175(vVar0))
			{
				_0xa46e98bdc407e23d(uParam0->f_1563, vVar0);
			}
		}
	}
}

void func_1514(var uParam0)
{
	if (uParam0->f_1376 < 0)
	{
		return;
	}
	if ((uParam0->f_1587 && does_entity_exist(uParam0->f_1589)) && _is_draft_vehicle(uParam0->f_1589))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = _get_ped_in_draft_seat(uParam0->f_1589, iVar0);
			if (!is_entity_dead(iVar2))
			{
				if (!does_entity_exist(iVar1) || func_533(iVar2, uParam0->f_704[uParam0->f_1376]->f_1, 1) < func_533(iVar1, uParam0->f_704[uParam0->f_1376]->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!does_entity_exist(iVar1))
		{
			return;
		}
		if (!func_1107(uParam0, 8192))
		{
			if (func_533(iVar1, uParam0->f_704[uParam0->f_1376]->f_1, 1) <= (uParam0->f_704[uParam0->f_1376]->f_17 + 5f) || _0xf256a75210c5c0eb(uParam0->f_1563, uParam0->f_1567))
			{
				if (_0xc6d7ddc843176701(uParam0->f_1589) != 5f)
				{
					_0x0c3f0f7f92ca847c(uParam0->f_1589, 5f);
				}
			}
			else if ((!func_1847(512) || func_1848(2)) && _0xc6d7ddc843176701(uParam0->f_1589) != 50f)
			{
				_0x0c3f0f7f92ca847c(uParam0->f_1589, 50f);
			}
		}
	}
}

void func_1515(var uParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1321[iVar2]->f_11 && _does_volume_exist(uParam0->f_1321[iVar2]->f_12))
		{
			if (!bVar1)
			{
				iVar0 = _get_first_entity_ped_is_carrying(Global_35);
				bVar1 = true;
			}
			if (!is_entity_dead(uParam0->f_1586) && !uParam0->f_1321[iVar2]->f_13)
			{
				_0xe9b168527b337bf0(uParam0->f_1586, uParam0->f_1321[iVar2]->f_12);
				_0xf74e134f40192884(uParam0->f_1586, 1);
				uParam0->f_1321[iVar2]->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1375 != 0 || func_1107(uParam0, 33554432))
				{
					set_player_control(get_player_index(), true, 0, false);
					if (is_radar_hidden())
					{
						_display_hud_component(-1679307491);
					}
					uParam0->f_1375 = 0;
					func_1111(uParam0, 33554432);
				}
				bVar3 = func_1435(uParam0->f_1321[iVar2]->f_10, 131072);
				if (func_1849(Global_35, uParam0->f_1321[iVar2]->f_12, 0, 1))
				{
					if (uParam0->f_1376 >= 0)
					{
						func_1202(uParam0, uParam0->f_1321[iVar2]->f_10, uParam0->f_1033[uParam0->f_1376]->f_1, 1065353216);
						disable_control_action(0, -822242784, false);
					}
					if (bVar3)
					{
						func_1850();
					}
					func_1851(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_1852(uParam0->f_1321[iVar2]) != 0)
				{
					func_1851(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_1435(uParam0->f_1321[iVar2]->f_10, 4))
			{
				if (uParam0->f_1376 >= 0)
				{
					if (((func_533(Global_35, uParam0->f_704[uParam0->f_1376]->f_1, 1) > uParam0->f_704[uParam0->f_1376]->f_17 && func_1849(uParam0->f_1586, uParam0->f_1321[iVar2]->f_12, 0, 1)) || uParam0->f_1375 != 0) || func_1107(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_1520(Global_35, &(uParam0->f_1375), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							set_player_control(get_player_index(), true, 0, false);
							uParam0->f_1375 = 0;
							func_1111(uParam0, 33554432);
						}
						else
						{
							func_1086(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_1516(var uParam0)
{
	if (uParam0->f_1376 < 0)
	{
		return false;
	}
	if (func_1107(uParam0, 33554432))
	{
		return false;
	}
	if (func_1113(uParam0->f_704[uParam0->f_1376], 2) && uParam0->f_1585)
	{
		return false;
	}
	if (_does_volume_exist(uParam0->f_1563) && _0xf256a75210c5c0eb(uParam0->f_1563, uParam0->f_1564))
	{
		return true;
	}
	if (func_1107(uParam0, 65536))
	{
		return true;
	}
	return false;
}

float func_1517(var uParam0, int iParam1)
{
	fVar16 = 10000f;
	switch (&uParam0->f_704[iParam1])
	{
		case 0:
			fVar12 = get_distance_between_coords(Global_36, uParam0->f_704[iParam1]->f_1, true);
			fVar13 = get_distance_between_coords(Global_36, uParam0->f_704[iParam1]->f_4, true);
			vVar0 = { uParam0->f_704[iParam1]->f_4 - uParam0->f_704[iParam1]->f_1 };
			if (func_1853(&vVar3, uParam0->f_704[iParam1]->f_1, uParam0->f_704[iParam1]->f_4, vVar0, Global_36))
			{
				fVar16 = get_distance_between_coords(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_704[iParam1]->f_1.f_2 && Global_36.f_2 <= (uParam0->f_704[iParam1]->f_1.f_2 + uParam0->f_704[iParam1]->f_10))
			{
				func_1854(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (get_distance_between_coords(Global_36, uParam0->f_704[iParam1]->f_1, true) - uParam0->f_704[iParam1]->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_1518(var uParam0)
{
	func_1855(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_704[iVar0]->f_29)
		{
			if ((!is_string_null_or_empty(&(uParam0->f_704[iVar0]->f_22)) && func_1856(uParam0, iVar0)) && !func_1504(uParam0->f_704[iVar0], 1))
			{
				if (!func_1857(uParam0, &(uParam0->f_704[iVar0]->f_22)))
				{
					func_659(&(uParam0->f_1459), uParam0->f_704[iVar0]->f_22, 0, -1, 1, 0);
				}
				func_1858(uParam0->f_704[iVar0], 1);
			}
		}
		iVar0++;
	}
}

float func_1519(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_1520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	bVar3 = is_ped_on_mount(iParam0);
	if (bVar3)
	{
		iVar2 = get_mount(iParam0);
		if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = is_ped_in_any_vehicle(iParam0, true);
		if (bVar4)
		{
			iVar1 = get_vehicle_ped_is_in(iParam0, true);
			if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_215(*iParam1, 128))
	{
		if (!func_368(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_215(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_1859(iVar2))
			{
				return false;
			}
			if (!func_368(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_1860(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_215(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_359(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_468(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_215(*iParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return false;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (func_215(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_1859(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_359(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_359(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_359(iParam2, 8192))
				{
					_display_hud_component(724769646);
				}
			}
		}
	}
	disable_control_action(0, -1879280170, false);
	if (bVar3)
	{
		if (is_entity_in_air(iVar2, 0))
		{
			return false;
		}
		if (func_215(*iParam1, 2336))
		{
			if (!func_1859(iVar2))
			{
			}
			if (func_1861(iVar2, *iParam1))
			{
				func_1056(iParam1, 32);
				func_1056(iParam1, 256);
				func_1056(iParam1, 2048);
				func_468(iParam1, 512);
				func_468(iParam1, 1024);
				func_468(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_215(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_1859(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_1056(iParam1, 64);
			}
		}
		if (func_359(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_359(iParam2, 1024))) || func_359(iParam2, 8)) && !func_215(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_468(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_359(iParam2, 4096)) && !func_215(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_468(iParam1, 2048);
			func_468(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_359(iParam2, 32)) && !func_215(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_468(iParam1, 256);
			func_468(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_468(iParam1, 64);
		}
		else if (!func_359(iParam2, 1))
		{
			if (!func_359(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_1860(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_215(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_468(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_468(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_359(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_468(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_359(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_468(iParam1, 8);
	}
	return false;
}

void func_1521(int iParam0, var uParam1)
{
	*iParam0 = 0;
	if (!func_1527(uParam1, 8))
	{
		if (func_1527(uParam1, 1))
		{
			*iParam0 = 1;
		}
		else if (func_1527(uParam1, 4))
		{
			*iParam0 = 4;
		}
		else if (func_1527(uParam1, 2))
		{
			*iParam0 = 2;
		}
	}
}

void func_1522(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_1528(sParam0, iParam2);
	func_1862(iParam1, fParam3);
}

void func_1523()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

void func_1524(var uParam0, int iParam1)
{
	uParam0->f_1353 = (uParam0->f_1353 || iParam1);
}

char* func_1525(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1526()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_1527(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1528(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_1863(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_1863(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_1863(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			_0x6a4d224fc7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (_0xdd0b7c5ae58f721d(sParam0) && !_0x927b810e43e99932(sParam0))
		{
			_0xb8b207c34285e978(sParam0);
		}
	}
}

float func_1529(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_1519(vVar0, vVar3, iParam2);
}

void func_1530(var uParam0, int iParam1)
{
	uParam0->f_1353 = (uParam0->f_1353 - (uParam0->f_1353 && iParam1));
}

bool func_1531(var uParam0, int iParam1)
{
	if (func_1107(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1376 < 0 || uParam0->f_1376 >= 8)
	{
		return false;
	}
	if (!uParam0->f_704[uParam0->f_1376]->f_29)
	{
		return false;
	}
	if (!func_1107(uParam0, 4096) && uParam0->f_1584)
	{
		return false;
	}
	if (Global_1430231->f_4)
	{
		return false;
	}
	if (uParam0->f_704[uParam0->f_1376]->f_29)
	{
		if (&uParam0->f_704[uParam0->f_1376] == 0)
		{
			vVar3 = { uParam0->f_704[uParam0->f_1376]->f_4 - uParam0->f_704[uParam0->f_1376]->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_1853(&vVar0, uParam0->f_1453, Global_36, vVar6, uParam0->f_704[uParam0->f_1376]->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_704[uParam0->f_1376]->f_1)
				{
					if (vVar0.x > uParam0->f_704[uParam0->f_1376]->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_704[uParam0->f_1376]->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_704[uParam0->f_1376]->f_1.f_1)
					{
						if (vVar0.y > uParam0->f_704[uParam0->f_1376]->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_704[uParam0->f_1376]->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_704[uParam0->f_1376]->f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_704[uParam0->f_1376]->f_1.f_2 + uParam0->f_704[uParam0->f_1376]->f_10)) || (func_1113(uParam0->f_704[uParam0->f_1376], 2) && (uParam0->f_1585 || uParam0->f_1587)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1376;
					return true;
				}
			}
		}
		else if (func_1107(uParam0, 8))
		{
			*iParam1 = uParam0->f_1372;
			return true;
		}
	}
	return false;
}

void func_1532(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_704[iParam1]->f_28 = 1;
		uParam0->f_1372 = iParam1;
		uParam0->f_1376 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1457 = 1;
	}
}

void func_1533(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_163[iParam1]->f_2)
	{
		case 9:
			if (_does_anim_scene_exist(uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8) && _is_anim_scene_started(uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8, false))
			{
				fVar1 = _get_anim_scene_progress(uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8);
				iVar0 = 0;
				while (iVar0 < 11)
				{
					if ((((uParam0->f_3[iVar0] && !is_entity_dead(uParam0->f_3[iVar0]->f_2)) && uParam0->f_3[iVar0]->f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0]->f_8) && !is_entity_visible(uParam0->f_3[iVar0]->f_2))
					{
						set_entity_visible(uParam0->f_3[iVar0]->f_2, true);
					}
					iVar0++;
				}
				if (((func_1550(uParam0->f_163[iParam1], 4) && uParam0->f_163[iParam1]->f_12 < 1f) && fVar1 >= uParam0->f_163[iParam1]->f_12) && !is_player_script_control_on(get_player_index()))
				{
					clear_ped_tasks(Global_35, 1, 0);
					set_player_control(get_player_index(), true, 0, false);
				}
				if (func_1550(uParam0->f_163[iParam1], 64) && func_1864(uParam0, iParam1, 0))
				{
					func_1865(uParam0, uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8, uParam0->f_163[iParam1]->f_13, uParam0->f_163[iParam1]->f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_163[iParam1]->f_3 >= 0 && uParam0->f_163[iParam1]->f_5 >= 0) && uParam0->f_163[iParam1]->f_3 != uParam0->f_163[iParam1]->f_5)
			{
				if (!is_entity_dead(uParam0->f_3[uParam0->f_163[iParam1]->f_3]->f_2) && !is_entity_dead(uParam0->f_3[uParam0->f_163[iParam1]->f_5]->f_2))
				{
					if (is_entity_a_ped(uParam0->f_3[uParam0->f_163[iParam1]->f_3]->f_2) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_163[iParam1]->f_3]->f_2)))
					{
						func_1866(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_163[iParam1]->f_3]->f_2), uParam0->f_3[uParam0->f_163[iParam1]->f_5]->f_2, uParam0->f_163[iParam1]->f_13, uParam0->f_163[iParam1]->f_14);
					}
					if ((func_1550(uParam0->f_163[iParam1], 128) && is_entity_a_ped(uParam0->f_3[uParam0->f_163[iParam1]->f_5]->f_2)) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_163[iParam1]->f_5]->f_2)))
					{
						func_1866(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_163[iParam1]->f_5]->f_2), uParam0->f_3[uParam0->f_163[iParam1]->f_3]->f_2, uParam0->f_163[iParam1]->f_13, uParam0->f_163[iParam1]->f_14);
					}
				}
			}
			break;
		case 4:
			func_1536(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_1534(var uParam0, int iParam1)
{
	if (uParam0->f_163[iParam1]->f_1 > uParam0->f_1371)
	{
		return 0;
	}
	if (!is_entity_dead(uParam0->f_3[uParam0->f_163[iParam1]->f_3]->f_2))
	{
	}
	if (uParam0->f_1371 < 0 || uParam0->f_1371 > 6)
	{
		return 0;
	}
	if (uParam0->f_163[iParam1]->f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_163[iParam1]->f_17 == 2 && func_1194(uParam0) == 9)
	{
		return 1;
	}
	if (!func_1107(uParam0, 4096) && uParam0->f_1584)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_163[iParam1] != uParam0->f_1372)
	{
		return 0;
	}
	if (func_1194(uParam0) > 3 && &uParam0->f_163[iParam1] != uParam0->f_1372)
	{
		return 0;
	}
	if ((((func_1194(uParam0) > 3 && uParam0->f_163[iParam1]->f_17 == 1) && func_1201(uParam0) != 11) && func_1200(uParam0, uParam0->f_1372)) && uParam0->f_163[iParam1]->f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_163[iParam1]->f_2 == 9 && uParam0->f_163[iParam1]->f_4 >= 0) && _does_anim_scene_exist(uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8))
	{
		if (!_is_anim_scene_loaded(uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8, true, false))
		{
			return 0;
		}
		else if (_0x6f1f0b17109309da(uParam0->f_1210[uParam0->f_163[iParam1]->f_4]->f_8, func_1439(Global_35)))
		{
			if (func_1841(uParam0->f_1210[uParam0->f_163[iParam1]->f_4], 4))
			{
				if (!_0xa218d2bbcaa7388c(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_1841(uParam0->f_1210[uParam0->f_163[iParam1]->f_4], 8))
			{
				if (!_0xa218d2bbcaa7388c(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_1535(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_163[iParam1]->f_2)
	{
		case 9:
			func_1867(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_1536(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_163[iParam1]->f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!is_string_null_or_empty(&(uParam0->f_704[&uParam0->f_163[iParam1]]->f_19)) && !is_string_null_or_empty(&(uParam0->f_704[&uParam0->f_163[iParam1]]->f_22)))
			{
				if (func_367(&(uParam0->f_1560)) >= IntToFloat((uParam0->f_704[&uParam0->f_163[iParam1]]->f_25 / 1000)))
				{
					func_1855(uParam0);
					if (!_0xd89504d9d7d5057d(&(uParam0->f_704[&uParam0->f_163[iParam1]]->f_22)))
					{
						func_659(&(uParam0->f_1459), uParam0->f_704[&uParam0->f_163[iParam1]]->f_22, 0, -1, 0, 0);
					}
					else
					{
						start_preloaded_conversation(&(uParam0->f_704[&uParam0->f_163[iParam1]]->f_22));
					}
					uParam0->f_163[iParam1]->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_163[iParam1]->f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_163[iParam1]->f_7 = 1;
			break;
		case 11:
			uParam0->f_163[iParam1]->f_7 = 1;
			uParam0->f_1373 = iParam1;
			break;
	}
}

int func_1536(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar2 = uParam0->f_1376;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_163[iParam1];
		fVar3 = uParam0->f_704[uParam0->f_1376]->f_7;
		fVar4 = uParam0->f_704[uParam0->f_1376]->f_7.f_1;
	}
	if (!is_entity_dead(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1f);
	}
	switch (func_1201(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_1868(uParam0, iVar2))
				{
					uParam0->f_1373 = iParam1;
				}
				uParam0->f_163[iParam1]->f_7 = 1;
			}
			if (((!func_1113(uParam0->f_704[iVar2], 32) && func_1869()) && !is_string_null_or_empty(&(uParam0->f_147))) || (!func_1113(uParam0->f_704[iVar2], 128) && uParam0->f_1587))
			{
				if (uParam0->f_1587)
				{
					bring_vehicle_to_halt(uParam0->f_1589, 0.1f, -1, false);
					if (!func_1107(uParam0, 8192))
					{
						_0x0c3f0f7f92ca847c(uParam0->f_1589, 0f);
					}
					task_vehicle_temp_action(Global_35, uParam0->f_1589, 24, 1000);
					func_1545(uParam0, 8);
				}
				else
				{
					func_1086(uParam0, 131072);
					func_1545(uParam0, 11);
				}
			}
			else if (uParam0->f_1585)
			{
				func_1545(uParam0, 5);
			}
			else
			{
				func_1870(uParam0);
			}
			break;
		case 1:
			bVar0 = func_1218(&(uParam0->f_1557)) >= 3f;
			if ((((!func_368(Global_35, 716706914) && !func_368(Global_35, 242628503)) && func_1218(&(uParam0->f_1557)) >= 2.5f) || (!func_408(func_613(Global_35, 0, 1, 0)) && !func_408(func_613(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_1870(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = func_1218(&(uParam0->f_1557)) >= 3.5f;
			iVar1 = 5664;
			if (func_1113(uParam0->f_704[uParam0->f_1376], 512))
			{
				iVar1 |= 128;
			}
			if (!func_1200(uParam0, uParam0->f_1376))
			{
				iVar1 |= 2048;
			}
			if (func_1520(Global_35, &(uParam0->f_1374), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_1870(uParam0);
			}
			if ((!uParam0->f_1585 && !uParam0->f_1587) || bVar0)
			{
				uParam0->f_1374 = 0;
				if (func_1201(uParam0) == 5 || iParam1 < 0)
				{
					func_1870(uParam0);
				}
				else
				{
					func_1871(uParam0, iParam1, bParam2);
					func_60(&(uParam0->f_1557));
					func_1545(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = func_1218(&(uParam0->f_1557)) >= 1f;
			if (func_1872(Global_35, 242628503) || bVar0)
			{
				func_1545(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!func_1113(uParam0->f_704[iVar2], 256))
			{
				if (func_1429(&(uParam0->f_1591)))
				{
					func_1873(uParam0->f_1591, 0);
				}
			}
			func_60(&(uParam0->f_1557));
			func_1545(uParam0, 4);
			break;
		case 4:
			bVar0 = func_1218(&(uParam0->f_1557)) >= 2f;
			if ((func_1113(uParam0->f_704[iVar2], 256) || !func_1429(&uVar5)) || bVar0)
			{
				if (func_670())
				{
					func_1874();
					func_1545(uParam0, 10);
				}
				else
				{
					func_1545(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = func_1218(&(uParam0->f_1557)) >= 2f;
			if (func_670() || bVar0)
			{
				func_1545(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = func_1218(&(uParam0->f_1557)) >= 2f;
			iVar1 = 5664;
			if (func_1113(uParam0->f_704[uParam0->f_1376], 512))
			{
				iVar1 |= 128;
			}
			if (!func_1200(uParam0, uParam0->f_1376))
			{
				iVar1 |= 2048;
			}
			if (func_1520(Global_35, &(uParam0->f_1374), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1374 = 0;
				set_vehicle_forward_speed(uParam0->f_1589, 0f);
				clear_ped_tasks(Global_35, 1, 0);
				func_1545(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (func_1218(&(uParam0->f_1557)) >= 0.75f)
			{
				if (!func_1107(uParam0, 8192))
				{
					_0x0c3f0f7f92ca847c(uParam0->f_1589, 50f);
				}
				_0x7c06330bfdda182e(uParam0->f_1589);
				func_1086(uParam0, 131072);
				func_1545(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_1537(char* sParam0)
{
	if (sParam0->f_16)
	{
		_0x0a5a4f1979abb40e(sParam0);
		if (!is_string_null_or_empty(sParam0) && _0xdd0b7c5ae58f721d(sParam0))
		{
			_0x798be43c9393632b(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_1538(var uParam0, int iParam1)
{
	uParam0->f_1354.f_1 = (uParam0->f_1354.f_1 - (uParam0->f_1354.f_1 && iParam1));
}

bool func_1539(var uParam0, char* sParam1, int iParam2)
{
	bVar0 = _0x7907969497ea92f5(uParam0->f_1577);
	if (!bVar0)
	{
		uParam0->f_1577 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
	}
	bVar1 = _0x603ac35fd4602c76(uParam0->f_1577);
	if (!bVar1)
	{
		return false;
	}
	func_1875(uParam0);
	func_1876(uParam0, iParam2);
	if (func_1107(uParam0, 16384))
	{
		func_1877(uParam0);
	}
	Var2.f_10 = -1569615261;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_1878(uParam0, iVar18);
		if (func_1879(uParam0, 0))
		{
			if (func_1880(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_704[iVar16]->f_27 = 0;
					func_1881(uParam0, 1, &(uParam0->f_704[iVar16]->f_1));
					func_1881(uParam0, 2, &(uParam0->f_704[iVar16]->f_1.f_1));
					func_1881(uParam0, 3, &(uParam0->f_704[iVar16]->f_1.f_2));
					func_1881(uParam0, 4, &(uParam0->f_704[iVar16]->f_11));
					func_1881(uParam0, 5, &(uParam0->f_704[iVar16]->f_12));
					func_1881(uParam0, 6, &(uParam0->f_704[iVar16]->f_13));
					func_1881(uParam0, 7, &(uParam0->f_704[iVar16]->f_4));
					func_1881(uParam0, 8, &(uParam0->f_704[iVar16]->f_4.f_1));
					func_1881(uParam0, 9, &(uParam0->f_704[iVar16]->f_4.f_2));
					func_1881(uParam0, 10, &(uParam0->f_704[iVar16]->f_7));
					func_1881(uParam0, 11, &(uParam0->f_704[iVar16]->f_7.f_1));
					func_1881(uParam0, 12, &(uParam0->f_704[iVar16]->f_7.f_2));
					func_1881(uParam0, 13, &(uParam0->f_704[iVar16]->f_10));
					func_1881(uParam0, 14, &(uParam0->f_704[iVar16]->f_14));
					func_1881(uParam0, 15, &(uParam0->f_704[iVar16]->f_15));
					if (func_1880(uParam0, 16, &iVar17))
					{
						uParam0->f_704[iVar16] = iVar17;
					}
					func_1881(uParam0, 19, &(uParam0->f_704[iVar16]->f_16));
					func_1881(uParam0, 20, &(uParam0->f_704[iVar16]->f_17));
					func_1881(uParam0, 31, &(uParam0->f_704[iVar16]->f_18));
					if (func_1882(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_704[iVar16]->f_19), {Var20}, 3);
					}
					if (func_1882(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_704[iVar16]->f_22), {Var20}, 3);
					}
					func_1880(uParam0, 23, &(uParam0->f_704[iVar16]->f_25));
					func_1883(uParam0, &(uParam0->f_704[iVar16]->f_27));
					if (func_1882(uParam0, 35, &(uParam0->f_704[iVar16]->f_30)))
					{
					}
					if (func_1880(uParam0, 39, &iVar17))
					{
						uParam0->f_704[iVar16]->f_39 = iVar17;
					}
					else
					{
						uParam0->f_704[iVar16]->f_39 = 1;
					}
					if (func_1881(uParam0, 40, &(uParam0->f_704[iVar16]->f_40)))
					{
						func_1858(uParam0->f_704[iVar16], 2);
					}
					if (is_string_null_or_empty(&(uParam0->f_704[iVar16]->f_30)))
					{
						uParam0->f_704[iVar16]->f_30 = { func_1405() };
					}
					uParam0->f_704[iVar16]->f_29 = 1;
					if (uParam0->f_1583 == -1 || uParam0->f_704[uParam0->f_1583]->f_17 < uParam0->f_704[iVar16]->f_17)
					{
						uParam0->f_1583 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_704[iVar18]->f_29)
		{
			vVar29 = { vVar29 + uParam0->f_704[iVar18]->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(to_float(iVar28)) };
	uParam0->f_1588 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_704[iVar18]->f_29)
		{
			if (!func_1884(vVar29, uParam0->f_704[iVar18]->f_1, 5f, 1))
			{
				uParam0->f_1588 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_1878(uParam0, iVar18);
				if (func_1879(uParam0, 45))
				{
					if (func_1880(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_1885(uParam0->f_1210[iVar16], 2);
							func_1882(uParam0, 46, uParam0->f_1210[iVar16]);
							if (func_1886(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_1885(uParam0->f_1210[iVar16], 1);
								}
							}
							if (func_1880(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_1885(uParam0->f_1210[iVar16], 8);
								}
								else if (iVar17 == 2)
								{
									func_1885(uParam0->f_1210[iVar16], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_1878(uParam0, iVar18);
				if (func_1879(uParam0, 50))
				{
					if (func_1880(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_1880(uParam0, 43, &(Var2.f_3));
					if (func_1882(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					func_1881(uParam0, 53, &(Var2.f_8));
					if (func_1880(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_1886(uParam0, 55, &(Var2.f_11));
					func_1886(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_1887(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 11)
						{
							uParam0->f_3[iVar32]->f_3 = Var2.f_3;
							uParam0->f_3[iVar32]->f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32]->f_8 = Var2.f_8;
							uParam0->f_3[iVar32]->f_10 = Var2.f_10;
							uParam0->f_3[iVar32]->f_11 = Var2.f_11;
							uParam0->f_3[iVar32]->f_12 = Var2.f_12;
							uParam0->f_3[iVar32] = 1;
							if (func_1888(Var2.f_1))
							{
								func_1086(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_1878(uParam0, iVar18);
			if (func_1879(uParam0, 82))
			{
				if (func_1882(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_147), {Var20}, 4);
				}
				func_1882(uParam0, 84, &(uParam0->f_147.f_4));
				if (is_string_null_or_empty(&(uParam0->f_147.f_4)))
				{
					if (uParam0->f_147.f_15 == 1)
					{
						uParam0->f_147.f_4 = { func_1192() };
					}
					else if (uParam0->f_147.f_15 == 2)
					{
						uParam0->f_147.f_4 = { func_1405() };
					}
					else
					{
						uParam0->f_147.f_4 = { func_1405() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_1878(uParam0, iVar18);
				if (func_1879(uParam0, 57))
				{
					if (func_1880(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_163[iVar16]->f_8 = 0;
							func_1880(uParam0, 58, uParam0->f_163[iVar16]);
							if (func_1880(uParam0, 59, &iVar17))
							{
								uParam0->f_163[iVar16]->f_1 = func_1889(iVar17);
							}
							if (func_1880(uParam0, 60, &iVar17))
							{
								uParam0->f_163[iVar16]->f_2 = func_1890(iVar17);
							}
							func_1880(uParam0, 61, &(uParam0->f_163[iVar16]->f_3));
							func_1881(uParam0, 67, &(uParam0->f_163[iVar16]->f_10));
							func_1881(uParam0, 70, &(uParam0->f_163[iVar16]->f_11));
							func_1881(uParam0, 68, &(uParam0->f_163[iVar16]->f_9));
							func_1880(uParam0, 72, &(uParam0->f_163[iVar16]->f_5));
							func_1881(uParam0, 77, &(uParam0->f_163[iVar16]->f_12));
							func_1880(uParam0, 78, &(uParam0->f_163[iVar16]->f_13));
							func_1880(uParam0, 79, &(uParam0->f_163[iVar16]->f_14));
							if (func_1880(uParam0, 73, &iVar17))
							{
								uParam0->f_163[iVar16]->f_17 = iVar17;
							}
							if (func_1880(uParam0, 75, &iVar17))
							{
								uParam0->f_163[iVar16]->f_4 = iVar17;
								bVar15 = true;
							}
							func_1881(uParam0, 80, &(uParam0->f_163[iVar16]->f_15));
							if (func_1886(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 1;
								}
							}
							if (func_1886(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 512;
								}
							}
							if (func_1886(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 2;
								}
							}
							if (func_1886(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 16;
								}
							}
							if (func_1886(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 32;
								}
							}
							if (func_1886(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 4;
								}
							}
							if (func_1886(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 64;
								}
							}
							if (func_1886(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 128;
								}
							}
							if (func_1886(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_163[iVar16]->f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_163[iVar16]->f_2 == 9)
							{
								uParam0->f_163[iVar16]->f_4 = uParam0->f_163[iVar16]->f_3;
								uParam0->f_163[iVar16]->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_163[iVar16]->f_16 = uParam0->f_163[iVar16]->f_2;
							uParam0->f_163[iVar16]->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1582 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_1878(uParam0, iVar18);
				if (func_1879(uParam0, 85))
				{
					func_1880(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_1886(uParam0, 87, uParam0->f_1033[iVar18]);
						func_1882(uParam0, 96, &(uParam0->f_1033[iVar18]->f_2));
						func_1882(uParam0, 97, &(uParam0->f_1033[iVar18]->f_10));
						func_1881(uParam0, 93, &(uParam0->f_1033[iVar18]->f_18));
						func_1881(uParam0, 94, &(uParam0->f_1033[iVar18]->f_19));
						func_1880(uParam0, 95, &(uParam0->f_1033[iVar18]->f_20));
						uParam0->f_1033[iVar18]->f_1 = 0;
						func_1891(uParam0, &(uParam0->f_1033[iVar18]->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_1878(uParam0, iVar18);
				if (func_1879(uParam0, 98))
				{
					if (func_1880(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1321[iVar16]->f_10 = 0;
							func_1892(uParam0, 99, uParam0->f_1321[iVar16]);
							func_1892(uParam0, 100, &(uParam0->f_1321[iVar16]->f_6));
							func_1892(uParam0, 101, &(uParam0->f_1321[iVar16]->f_3));
							if (func_1880(uParam0, 102, &iVar17))
							{
								uParam0->f_1321[iVar16]->f_9 = iVar17;
							}
							func_1883(uParam0, &(uParam0->f_1321[iVar16]->f_10));
							uParam0->f_1321[iVar16]->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			_datafile_unload(uParam0->f_1577);
			func_1086(uParam0, 1);
			func_1086(uParam0, 16384);
			func_1893(uParam0);
			return true;
		}
	}
}

bool func_1540(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!is_string_null_or_empty(uParam0->f_1210[iVar0]) && func_1841(uParam0->f_1210[iVar0], 2)) && !func_1841(uParam0->f_1210[iVar0], 16)) && func_1894(uParam0, iVar0))
		{
			if (!_does_anim_scene_exist(uParam0->f_1210[iVar0]->f_8))
			{
				uParam0->f_1210[iVar0]->f_8 = _create_anim_scene(uParam0->f_1210[iVar0], 0, 0, false, true);
				load_anim_scene(uParam0->f_1210[iVar0]->f_8);
				return false;
			}
			else if (!_is_anim_scene_metadata_loaded(uParam0->f_1210[iVar0]->f_8, false))
			{
				return false;
			}
			if (_0xa9016536015de29d(uParam0->f_1210[iVar0]->f_8, "pl_breakout"))
			{
				func_1885(uParam0->f_1210[iVar0], 32);
			}
			_delete_anim_scene(uParam0->f_1210[iVar0]->f_8);
			func_1885(uParam0->f_1210[iVar0], 16);
		}
		iVar0++;
	}
	return true;
}

void func_1541(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_string_null_or_empty(uParam0->f_1210[iVar0]) && func_1841(uParam0->f_1210[iVar0], 2))
		{
			iVar1 = 0;
			if (func_1894(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1210[iVar0]->f_8 = _create_anim_scene(uParam0->f_1210[iVar0], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_1509(), 64);
	StringCopy(&(Var2.f_8), func_1526(), 64);
	uParam0->f_1396 = { Var2 };
	uParam0->f_1419 = { Var2 };
	if (!func_1112(uParam0, 8))
	{
		_0x6a4d224fc7643941(func_1509());
		func_1503(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1033[iVar0]->f_2)) && !are_strings_equal(&(uParam0->f_1033[iVar0]->f_2), func_1509()))
		{
			if (!_0xdd0b7c5ae58f721d(&(uParam0->f_1033[iVar0]->f_2)))
			{
				_0x6a4d224fc7643941(&(uParam0->f_1033[iVar0]->f_2));
				uParam0->f_1033[iVar0]->f_21 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1542(var uParam0)
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(uParam0->f_1210[iVar0]->f_8))
		{
			if (!func_1841(uParam0->f_1210[iVar0], 64))
			{
				if (_is_anim_scene_metadata_loaded(uParam0->f_1210[iVar0]->f_8, false))
				{
					func_1895(uParam0, uParam0->f_1210[iVar0]->f_8);
					load_anim_scene(uParam0->f_1210[iVar0]->f_8);
					bVar1 = false;
					func_1885(uParam0->f_1210[iVar0], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!_is_anim_scene_loaded(uParam0->f_1210[iVar0]->f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_704)
	{
		if (!is_string_null_or_empty(&(uParam0->f_704[iVar0]->f_19)) && !are_strings_equal(&(uParam0->f_704[iVar0]->f_19), "empty"))
		{
			_text_database_request(&(uParam0->f_704[iVar0]->f_19));
			if (!_text_database_has_loaded(&(uParam0->f_704[iVar0]->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_1112(uParam0, 8) && !_0xdd0b7c5ae58f721d(func_1509()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!is_string_null_or_empty(&(uParam0->f_1033[iVar0]->f_2)) && uParam0->f_1033[iVar0]->f_21) && !_0xdd0b7c5ae58f721d(&(uParam0->f_1033[iVar0]->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_175(uParam0->f_1573) || uParam0->f_1576 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (_does_anim_scene_exist(uParam0->f_1210[iVar0]->f_8))
			{
				if (_0xa9016536015de29d(uParam0->f_1210[iVar0]->f_8, "pl_breakout"))
				{
					_0xdf7b5144e25cd3fe(uParam0->f_1210[iVar0]->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					_get_anim_scene_origin(uParam0->f_1210[iVar0]->f_8, &vVar2, &vVar5, 2);
					vVar2 = { _get_object_offset_from_coords(vVar2, uParam0->f_1576, uParam0->f_1573) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1576);
					set_anim_scene_origin(uParam0->f_1210[iVar0]->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_1543(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((((!is_entity_dead(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && !func_488(uParam0->f_3[iVar0]->f_2)) && func_408(uParam0->f_3[iVar0]->f_10)) && !func_1888(uParam0->f_3[iVar0]->f_1))
		{
			iVar1 = get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2);
			if (!is_entity_dead(iVar1))
			{
				if (!has_ped_got_weapon(iVar1, uParam0->f_3[iVar0]->f_10, 0, false))
				{
					if (func_631(uParam0->f_3[iVar0]->f_10))
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (_is_weapon_two_handed(uParam0->f_3[iVar0]->f_10))
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0]->f_11)
				{
					if (func_1326(iVar1, 0, 0, 0) != uParam0->f_3[iVar0]->f_10)
					{
						set_current_ped_weapon(iVar1, uParam0->f_3[iVar0]->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1544(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_12)
		{
			func_1896(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
}

void func_1545(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_60(&(uParam0->f_1557));
}

void func_1546(var uParam0)
{
	func_1897(uParam0);
	func_1898(uParam0);
}

int func_1547(int iParam0)
{
	if (!func_1899(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_1548(int iParam0, int iParam1)
{
	if (!func_1562(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_1549(var uParam0)
{
	if (uParam0->f_1373 < 0 || uParam0->f_163[uParam0->f_1373]->f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1210[uParam0->f_163[uParam0->f_1373]->f_4]->f_8;
}

bool func_1550(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_1551()
{
	return !&Global_1911774;
}

void func_1552(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

bool func_1553(int iParam0, int iParam1)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_1554(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1555(int iParam0)
{
	if (!func_134(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_1556(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1557(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1900(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1901(*uParam1, &Var0, bParam6, 0))
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
	if (!func_1230(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_411(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<5> func_1558(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1297(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_135(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1298(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_878(bParam1) };
			if (bParam2 && func_1902(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1903(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1903(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1904(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1905(bParam1) };
			switch (func_976(iParam0))
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
			if (func_1906(iParam0, -1823706425))
			{
				Var0 = { func_1298(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1906(iParam0, -1483207246))
			{
				Var0 = { func_1298(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1901(Var0, &Var27, bParam1, 0))
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

bool func_1559(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1900(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_1230(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_411(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1560(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_1() == -1)
	{
		if (func_1591(43))
		{
			if (func_875(iParam0, 412399755))
			{
				func_1907(-1791518714);
				if (func_1908() == 0)
				{
					func_1296(0, 10);
					iVar0 = func_1909(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1910(iParam0) < func_1911(iParam0))
						{
							func_1597(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_1591(44))
		{
			if (func_875(iParam0, 709057512))
			{
				func_1907(-2087881550);
				if (func_1908() == 1)
				{
					func_1296(0, 10);
					iVar0 = func_1909(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1910(iParam0) < func_1911(iParam0))
						{
							func_1597(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1591(45))
		{
			if (func_875(iParam0, -1478961327))
			{
				func_1907(1908068621);
				if (func_1908() == 2)
				{
					func_1296(0, 10);
					iVar0 = func_1909(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1910(iParam0) < func_1911(iParam0))
						{
							func_1597(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1591(46))
		{
			if (func_875(iParam0, -1238404098))
			{
				func_1907(1611247019);
				if (func_1908() == 3)
				{
					func_1296(0, 10);
					iVar0 = func_1909(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1910(iParam0) < func_1911(iParam0))
						{
							func_1597(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1591(47))
		{
			if (func_875(iParam0, 1160548794))
			{
				func_1907(1319635688);
				if (func_1908() == 4)
				{
					func_1296(0, 10);
					iVar0 = func_1909(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1910(iParam0) < func_1911(iParam0))
						{
							func_1597(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_1561(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_12(func_1912(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1913(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1914(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_1562(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_1563(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1915(iParam0);
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

int func_1564(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_1576(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1565()
{
	return Global_40.f_11095.f_35;
}

void func_1566(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1916(iParam0, 0);
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
		func_1567(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1567(int iParam0)
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
			func_1916(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1917(1);
	}
}

bool func_1568(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1569()
{
	iVar0 = func_1918((*Global_1347702)[9]->f_15);
	iVar1 = func_1918((*Global_1835011)[69]->f_1);
	if (func_644(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1570(int iParam0)
{
	if (!func_1476(iParam0))
	{
		return false;
	}
	return func_595((*Global_1835011)[iParam0]->f_1, 1);
}

int func_1571(int iParam0)
{
	if (func_302(iParam0) == 1)
	{
		return func_399(iParam0);
	}
	return -1;
}

int func_1572(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1919(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1920(iVar6);
	}
	return iVar5;
}

int func_1573(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1921(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1574(int iParam0, bool bParam1)
{
	func_1922(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_1575(int iParam0)
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

void func_1576(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1574(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1577(2, *uParam0);
		}
		else
		{
			func_1578(2, *uParam0);
		}
	}
	func_1923(uParam0);
}

void func_1577(int iParam0, int iParam1)
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

void func_1578(int iParam0, int iParam1)
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

int func_1579(int iParam0)
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

void func_1580(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1924();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1925(iParam0);
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
	if (func_1311(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1327())
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
	Global_40.f_11095.f_35 = func_1244(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1924();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1926(iVar1);
		func_1928(func_1927(), 0, 4000);
		func_1929(Global_40.f_11095.f_35);
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
		func_1930(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_914(func_1236(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1579(14))
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
					sParam4 = func_1931(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1498(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1498(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_914(func_1236(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1579(4))
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
					sParam4 = func_1931(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1498(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1498(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1236(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1292(10, 1);
	}
}

void func_1581(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_1582(int iParam0)
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

bool func_1583(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_1932(iParam0) && func_1933(iParam0))
		{
			func_1934(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_1584(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1935(iParam0, iParam1);
	Var0 = { func_1558(iParam0, 0, 1) };
	iVar5 = func_1936(iParam0, &Var0, 0, 0);
	iVar6 = func_1937(iParam0, 0);
	if ((iVar5 > 1 && !func_1250()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_875(iParam0, -2051813666))
		{
			func_998(583, 1);
		}
		else
		{
			func_998(582, 0);
		}
	}
	if (func_1938(iParam0, &Var0, *iParam1, 0, 0))
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

void func_1585(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1648(iParam0, -949239683))
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

bool func_1586(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_1587(iParam0) != 0;
}

int func_1587(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1939())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1940(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1588(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_1589(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1939())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1588(iVar0))
		{
			if (func_12(func_1940(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1590(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1941(48);
	func_1296(0, -1);
}

bool func_1591(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_595((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1592(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_1593(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1594(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_595((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_1595(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_400(iParam0))
	{
		return false;
	}
	return func_90((*Global_1347702)[iParam0]->f_15);
}

int func_1596()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_12(func_1942(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1597(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_1312() && (func_1595(38) || func_1591(38)))
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
			if (func_1312() && (func_1595(39) || func_1591(39)))
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
			iVar9 = func_1943(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_1312() && (func_1595(41) || func_1591(41)))
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
			if (func_1312() && (func_1595(49) || func_1591(49)))
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
			iVar9 = func_1943(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1944(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1945(iParam0, iVar13, iVar14))
	{
	}
	if (func_1946(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1947(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1948(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1949(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1950(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1598(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1599(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_1312() && (func_1595(38) || func_1591(38)))
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
			if (func_1312() && (func_1595(39) || func_1591(39)))
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
			if (func_1312() && (func_1595(49) || func_1591(49)))
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
		if (func_1312() && (func_1595(38) || func_1591(38)))
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
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1686(_create_var_string(2, sVar0), _create_var_string(2, func_1951(func_1593(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_1312() && (func_1595(39) || func_1591(39)))
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
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_1312() && (func_1595(49) || func_1591(49)))
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
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_909(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_1600(int iParam0)
{
	if (!func_1701(iParam0))
	{
		return;
	}
	func_1952(iParam0);
	func_1953(iParam0);
}

int func_1601(int iParam0, bool bParam1)
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
	if (func_134(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1954(iVar0) || func_610(iVar0))
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

int func_1602(int iParam0, bool bParam1)
{
	if (!func_134(iParam0, 0))
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

void func_1603(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_408(iParam0))
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

bool func_1604(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1558(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1955((386 + iVar28), 1);
			if (func_1903(iParam0, &Var0, iVar5, 0))
			{
				if (func_1904(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1298(iParam0, Var0, iVar5, 0) };
					func_1557(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1230(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_1605(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1956(iParam0, iParam1);
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

bool func_1605(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1607(iParam0))
	{
		return false;
	}
	if (!func_1230(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_1606(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1602(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_1() == -1)
		{
			func_1603(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1957(iVar0);
			}
		}
		if (!func_1938(iParam0, &uVar1, 1, 0, 0))
		{
			func_1934(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1958(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_1604(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_1604(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_1604(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1327())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1959(iVar0))
				{
					func_1604(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1604(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_613(Global_35, 2, 0, 1);
				if ((((func_408(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_1311(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_408(iVar7) && func_1311(24))
				{
					if (!func_1604(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1604(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1604(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_998(480, 1);
	}
	return true;
}

bool func_1607(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1608(int iParam0, int iParam1, int iParam2)
{
	if (!func_1607(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_408(iVar4))
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
	if (func_12(611073244, 1, 0) && iParam2 == -897553835)
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
		func_1637(func_1960(iParam0), func_1555(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_595((*Global_1835011)[14]->f_1, 1))
			{
				func_998(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1230(0))
	{
		if (func_1605(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1642(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1609(int iParam0)
{
	if ((iParam0 == -615217896 && !func_1269()) || iParam0 != -615217896)
	{
		if (func_1961(Global_35, iParam0, &uVar0))
		{
			func_1473(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_1488();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_1488();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_1488();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1627();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1625();
			break;
	}
}

void func_1610(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1625();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1626();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1627();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1628();
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
			func_1488();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1962();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1963();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1611(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1612(int iParam0)
{
	bVar0 = func_875(iParam0, -2017733358);
	if (func_1964() < 3)
	{
		if (bVar0)
		{
			if (func_1966(func_1965(iParam0), iParam0))
			{
				func_1637(79, func_1555(func_1965(iParam0)), 1);
			}
			else
			{
				func_1637(78, func_1555(func_1965(iParam0)), 1);
			}
		}
		else
		{
			func_1637(80, func_1555(func_1967(iParam0)), 1);
		}
	}
}

bool func_1613()
{
	if (((((func_1968(839908568, 400) || func_1968(-1134030454, 400)) || func_1968(623353496, 400)) || func_1968(-344413337, 400)) || func_1968(-1664948962, 400)) || func_1968(1795228059, 400))
	{
		return true;
	}
	return false;
}

void func_1614(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1597(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1599(51, 0, 0, 0, 0, -1, 0);
			func_1969(8192);
			break;
		case 581047644:
			func_1597(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1599(51, 0, 0, 0, 0, -1, 0);
			func_1969(524288);
			break;
		case -644199619:
			func_1597(39, 0, 0, 0, 0, 0, 1, 0);
			func_1599(39, 0, 0, 0, 0, -1, 0);
			func_1970(16);
			break;
		case 684296857:
			func_1597(41, 0, 0, 0, 0, 0, 1, 0);
			func_1599(41, 0, 0, 0, 0, -1, 0);
			func_1971(8);
			break;
		case 466137807:
			func_1597(49, 0, 0, 0, 0, 0, 1, 0);
			func_1599(49, 0, 0, 0, 0, -1, 0);
			func_1972(16);
			break;
		case -1087522507:
			func_1597(43, 0, 0, -1791518714, func_1973(1), 0, -1, 0);
			func_1974(1);
			break;
		case -405829000:
			func_1597(43, 0, 0, -2087881550, func_1973(2), 0, -1, 0);
			func_1974(2);
			break;
		case 378660860:
			func_1597(43, 0, 0, 1908068621, func_1973(4), 0, -1, 0);
			func_1974(4);
			break;
		case 1566111097:
			func_1597(43, 0, 0, 1611247019, func_1973(8), 0, -1, 0);
			func_1974(8);
			break;
		case 1276007140:
			func_1597(43, 0, 0, 1319635688, func_1973(16), 0, -1, 0);
			func_1974(16);
			break;
	}
}

void func_1615(int iParam0)
{
	if (func_1975() == 1)
	{
		if (func_1591(39))
		{
			func_998(342, 0);
		}
		else
		{
			func_998(343, 0);
			func_1970(1);
		}
	}
	if (func_1975() >= 30)
	{
		func_998(344, 0);
	}
	func_1597(39, 0, 0, 0, 0, 0, -1, 0);
	func_1599(39, 0, 0, func_1975(), 30, 1, 0);
}

void func_1616(int iParam0)
{
	if (func_1976() == 1)
	{
		if (func_1591(49))
		{
			func_998(409, 0);
		}
		else
		{
			func_998(410, 0);
			func_1972(1);
		}
	}
	if (func_1976() >= 10)
	{
		func_998(411, 0);
	}
	func_1597(49, 0, 0, 0, 0, 0, -1, 0);
	func_1599(49, 0, 0, func_1976(), 10, 1, 0);
}

void func_1617(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_998(437, 0);
			func_998(440, 0);
			func_1977(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_1597(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_1599(51, 0, 0, sVar0, func_1943(-949689219, 20), 1, 0);
			func_1969(1);
			func_1978(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1977(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_1597(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_1599(51, 0, 0, sVar0, func_1943(-1248968496, 20), 1, 0);
			func_1969(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1977(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_1597(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_1599(51, 0, 0, sVar0, func_1943(1706369307, 20), 1, 0);
			func_1969(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1977(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_1597(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_1599(51, 0, 0, sVar0, func_1943(1520110311, 20), 1, 0);
			func_1969(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_998(438, 0);
			func_1977(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_1597(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_1599(51, 0, 0, sVar0, func_1943(-1992824800, 20), 1, 0);
			func_1969(32768);
			break;
		default:
			func_998(439, 0);
			break;
	}
}

void func_1618()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_1619(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_1591(43))
		{
			if (iParam0 == 281887510)
			{
				func_998(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_998(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_998(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_998(400, 0);
			}
		}
		else if (func_875(iParam0, 412399755))
		{
			func_1907(-1791518714);
			if (func_1908() == 0)
			{
				func_1296(0, 10);
				iVar1 = func_1979(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1910(iParam0) < func_1911(iParam0))
					{
						func_1597(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1599(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1591(44))
		{
			if (iParam0 == -222563712)
			{
				func_998(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_998(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_998(401, 0);
			}
		}
		else if (func_875(iParam0, 709057512))
		{
			func_1907(-2087881550);
			if (func_1908() == 1)
			{
				func_1296(0, 10);
				iVar1 = func_1979(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1910(iParam0) < func_1911(iParam0))
					{
						func_1597(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1599(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1591(45))
		{
			if (iParam0 == 2116770557)
			{
				func_998(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_998(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_998(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_998(398, 0);
			}
		}
		else if (func_875(iParam0, -1478961327))
		{
			func_1907(1908068621);
			if (func_1908() == 2)
			{
				func_1296(0, 10);
				iVar1 = func_1979(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1980(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1981(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1941(48);
					}
					if (func_1910(iParam0) < func_1911(iParam0))
					{
						func_1597(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1599(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1910(iParam0) < func_1911(iParam0))
					{
						func_1597(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1599(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1591(46))
		{
			if (iParam0 == 2085530337)
			{
				func_998(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_998(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_998(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_998(406, 0);
			}
		}
		else if (func_875(iParam0, -1238404098))
		{
			func_1907(1611247019);
			if (func_1908() == 3)
			{
				func_1296(0, 10);
				iVar1 = func_1979(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1910(iParam0) < func_1911(iParam0))
					{
						func_1597(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1599(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1591(47))
		{
			if (iParam0 == -1521783510)
			{
				func_998(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_998(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_998(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_998(403, 0);
			}
		}
		else if (func_875(iParam0, 1160548794))
		{
			func_1907(1319635688);
			if (func_1908() == 4)
			{
				func_1296(0, 10);
				iVar1 = func_1979(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1910(iParam0) < func_1911(iParam0))
					{
						func_1597(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1599(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1620(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1980(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1981(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1941(48);
		}
	}
}

void func_1621(int iParam0, int iParam1, int iParam2)
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
				func_871(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_871(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_871(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_871(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_871(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_871(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			break;
		case 1111063991:
			{