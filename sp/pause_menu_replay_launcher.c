void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	if (has_force_cleanup_occurred(523))
	{
		terminate_this_thread();
	}
	iVar0 = iVar1578;
	while (!func_1(&uLocal_29, iVar0))
	{
		func_2();
		_0x8674d138391ffb1b(get_player_index(), 1);
		_0x61b98367d93f012f(get_player_index());
		func_3(1, 0, 1);
		wait(0);
	}
	_0x64b956f4e761df5c(0);
	terminate_this_thread();
}

bool func_1(var uParam0, int iParam1)
{
	if (!func_4(iParam1))
	{
		return true;
	}
	if (!is_entity_dead(Global_35))
	{
		set_ped_reset_flag(Global_35, 25, true);
	}
	_0x8674d138391ffb1b(get_player_index(), 1);
	switch (func_5(uParam0))
	{
		case 0:
			if (_0x1b065a2bf7953815(0) != 1)
			{
				func_6(0, 0);
				(*Global_2621440)[0]->f_9.f_7 = { Global_36 };
				(*Global_2621440)[0]->f_9.f_13 = 0f;
				(*Global_2621440)[0]->f_9 = 6;
				(*Global_2621440)[0]->f_9.f_15 = func_7(Global_36, 1);
				func_8(32768);
				_0x7d654266025e921b(-1967303071);
				func_9(&(uParam0->f_938), 0);
				func_10(uParam0, 1);
			}
			break;
		case 1:
			if (_0x1b065a2bf7953815(0) == 0)
			{
				func_10(uParam0, 2);
			}
			else if (_0x1b065a2bf7953815(0) == 2 || func_11(&(uParam0->f_938)) >= 5f)
			{
				func_12(32768);
				return true;
			}
			break;
		case 2:
			func_13(0, 0, 1, 0);
			do_screen_fade_out(0);
			force_cleanup(160);
			trigger_music_event("STOP_MUSIC_8S");
			clear_weather_type_persist();
			clear_timecycle_modifier();
			set_player_invincible(get_player_index(), true);
			func_14(1);
			func_15(0);
			_0xe1f45a67a9f0dcbc(1);
			func_16(uParam0);
			if (func_17(iParam1) != 1 || func_18(iParam1) != 0)
			{
				func_19(uParam0);
			}
			func_20(uParam0);
			func_21(uParam0);
			func_10(uParam0, 3);
			break;
		case 3:
			if (!is_entity_dead(Global_35))
			{
				clear_ped_tasks_immediately(Global_35, false, true);
				_0x2208438012482a1a(Global_35, false, false);
				_0x9587913b9e772d29(Global_35, 0);
			}
			switch (func_17(iParam1))
			{
				case 1:
					func_23(&(uParam0->f_1), func_18(iParam1), func_22(iParam1), 1, 0, 1);
					func_25(func_24(func_18(iParam1)), 1140457472);
					break;
				case 8:
					iVar0 = func_26(iParam1);
					func_27(&(uParam0->f_1), iVar0, 1, 1);
					func_14(1);
					start_player_teleport(get_player_index(), (*Global_1347702)[iVar0]->f_24, 0f, true, true, true, false);
					func_25((*Global_1347702)[iVar0]->f_24, 1140457472);
					break;
				case 11:
					func_28(&(uParam0->f_1), 28, 10, 1, 0, 1);
					func_29(Global_35, 1873.404f, -1871.423f, 41.8129f, 0f, 2, 1073741824);
					func_25(1873.404f, -1871.423f, 41.8129f, 1140457472);
					break;
			}
			func_9(&(uParam0->f_941), 0);
			func_10(uParam0, 4);
			break;
		case 4:
			if ((!is_player_teleport_active() || _has_player_teleport_finished(get_player_index())) || func_11(&(uParam0->f_941)) >= 30f)
			{
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				func_30(1, 0);
				func_13(0, 0, 0, 0);
				if (func_17(iParam1) != 8)
				{
					func_31(iParam1, 0);
					func_32(iParam1);
				}
				func_33(Global_35);
				func_34(-569063887, 1, 0, -142743235, 0);
				func_35(1);
				func_36();
				Global_1934765->f_272 = 1;
				Global_1934765->f_274 = 1;
				func_37(iParam1);
				func_38(uParam0);
				if (func_17(iParam1) != 1 || func_18(iParam1) != 0)
				{
					func_39(uParam0);
				}
				func_40(uParam0, iParam1);
				func_41(uParam0);
				func_42(100f);
				func_43(1, 0);
				func_44(-1);
				func_45(0, 0);
				func_46(10);
				func_47();
				func_48();
				func_10(uParam0, 6);
			}
			break;
		case 6:
			switch (func_17(iParam1))
			{
				case 1:
					if (func_49(iParam1))
					{
						if (iParam1 == func_50(70))
						{
							func_51(168171957, 1, 0);
						}
						func_52(iParam1);
						func_14(0);
						set_player_invincible(get_player_index(), false);
						func_15(1);
						return true;
					}
					break;
				case 8:
					if (&Global_1879534)
					{
						func_14(0);
					}
					if (func_53(func_26(iParam1), 1, 1, 1, 1))
					{
						set_player_invincible(get_player_index(), false);
						func_15(1);
						return true;
					}
					break;
				case 11:
					Global_1391438->f_491 = -1891229662;
					func_54(&(Global_1391438->f_5), 4096, 1);
					func_14(0);
					set_player_invincible(get_player_index(), false);
					func_15(1);
					return true;
			}
			break;
	}
	return false;
}

void func_2()
{
	func_55(&Global_0, 16);
}

void func_3(bool bParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = create_itemset(true);
	if (_0x7be607daff382fd2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (get_itemset_size(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iVar0));
			if (!is_entity_dead(iVar2) && is_entity_a_ped(iVar2))
			{
				iVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(iVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(iVar3));
					}
					else
					{
						delete_ped(&iVar3);
					}
				}
				else
				{
					clear_ped_tasks(iVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	destroy_itemset(iVar0);
}

bool func_4(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_5(var uParam0)
{
	return *uParam0;
}

void func_6(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_57(32768))
	{
		return;
	}
	if (!func_57(32768))
	{
		func_58(1, bParam1);
	}
	_queue_savegame_operation(iParam0);
	_copy_memory((*Global_2621440)[iParam0], &Global_40, 12066);
	_copy_memory((*Global_2645573)[iParam0], &Global_12106, 5398);
	_copy_memory((*Global_2656370)[iParam0], &Global_17504, 3206);
	_copy_memory((*Global_2662783)[iParam0], &Global_20710, 2408);
	_copy_memory((*Global_2667600)[iParam0], &Global_23118, 1769);
	_copy_memory((*Global_2671139)[iParam0], &Global_24887, 1909);
	_copy_memory((*Global_2674958)[iParam0], &Global_26796, 777);
	_copy_memory((*Global_2676513)[iParam0], &Global_27573, 4501);
	_copy_memory((*Global_2685516)[iParam0], &Global_32074, 4234);
	if (func_57(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_59();
	}
}

int func_7(vector3 vParam0, int iParam3)
{
	iVar0 = func_60();
	if (func_61(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_62(vParam0, iParam3);
}

void func_8(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1 || !func_63(uParam0))
	{
		func_64(uParam0);
	}
}

void func_10(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_11(var uParam0)
{
	if (!func_63(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_65(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_66() - uParam0->f_1);
}

void func_12(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

int func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bVar4 = func_56() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_67(get_player_index(), 1, 0, 1);
	}
	if (!func_68(&Global_1898439, 1024))
	{
		func_69();
		func_70(Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (&Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_4(Global_1898330[iVar2]) && func_49(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581->f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!func_71(iVar2, 1024))
			{
				func_72(iVar2, 0);
				switch ((*Global_1898346)[iVar2]->f_3)
				{
					case 1:
						if (!(*Global_1835011)[iVar0]->f_71)
						{
							iVar0 = (*Global_1898346)[iVar2]->f_4;
							if (func_73(iVar0))
							{
								if (!bParam1)
								{
									func_74(iVar0, 0);
								}
								func_75(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_76(iVar0);
								if (bVar3 && !func_77((*Global_1835011)[iVar0], 32768))
								{
									func_78((*Global_1835011)[iVar0], 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899->f_2 == (*Global_1835011)[iVar0]->f_21)
									{
										(*Global_1835011)[iVar0]->f_64 = func_59();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = (*Global_1898346)[iVar2]->f_4;
						if (iVar5 == 0 && func_56() == -1)
						{
							iVar6 = (*Global_1898346)[iVar2]->f_5;
							if (*Global_1392626)[iVar6]->f_3 != func_79(0)
							{
								if (bVar3)
								{
									func_80(iVar6, 0, 0);
								}
								else
								{
									func_80(iVar6, 1, 0);
								}
								if (func_49((*Global_1392626)[iVar6]->f_3))
								{
									func_81((*Global_1392626)[iVar6]->f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (does_blip_exist(Global_1898346[iVar2]))
						{
							remove_blip((*Global_1898346)[iVar2]);
						}
						break;
					default:
						if (does_blip_exist(Global_1898346[iVar2]))
						{
							remove_blip((*Global_1898346)[iVar2]);
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!func_68(&Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				func_82(16384);
			}
			else
			{
				func_83();
			}
			func_70(Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = &Global_40.f_450[iVar7];
			if (func_84(iVar1) && Global_1347702[iVar1] != 45)
			{
				if (func_85((*Global_1347702)[iVar1]->f_13, 256))
				{
				}
				else if (*Global_1347702)[iVar1]->f_15 != func_79(0)
				{
					if (func_86(0) == 1 || func_86(0) == 8)
					{
						func_87(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_88(iVar1, 0);
					}
					if (func_49((*Global_1347702)[iVar1]->f_15))
					{
						func_81((*Global_1347702)[iVar1]->f_15);
					}
				}
				func_89(&((*Global_1347702)[iVar1]->f_13), 2);
			}
			iVar7++;
		}
	}
	func_90();
	if (bParam2)
	{
		func_91();
	}
	func_92();
	func_93();
	return 1;
}

void func_14(bool bParam0)
{
	if (&Global_1879534 == bParam0)
	{
		return;
	}
	Global_1879534 = bParam0;
	_0xec0bd8736dcaf841(bParam0);
	if (func_57(32768) && !bParam0)
	{
		if (Global_1879534->f_7301.f_1)
		{
			Global_1879534->f_7301.f_1 = 0;
		}
		if (Global_1879534->f_1)
		{
			Global_1879534->f_1 = 0;
		}
	}
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_94(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_95(Global_1935630, 4194304);
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

void func_16(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_944)
	{
		uParam0->f_944[iVar0] = &Global_40.f_11095.f_11[iVar0];
		iVar0++;
	}
}

int func_17(int iParam0)
{
	if (!func_4(iParam0))
	{
		return 0;
	}
	return func_97(func_96(iParam0));
}

int func_18(int iParam0)
{
	if (func_17(iParam0) == 1)
	{
		return func_98(iParam0);
	}
	return -1;
}

void func_19(var uParam0)
{
	_copy_memory(&(uParam0->f_968), Global_40.f_1095.f_1[0], 436);
	Var0.f_10 = 10;
	iVar94 = 0;
	while (iVar94 < 3)
	{
		_copy_memory(uParam0->f_968.f_15[iVar94], &Var0, 94);
		iVar94++;
	}
	iVar94 = 0;
	while (iVar94 < 57)
	{
		_copy_memory(uParam0->f_968.f_298[iVar94], &uVar95, 1);
		iVar94++;
	}
	iVar94 = 0;
	while (iVar94 < 3)
	{
		_copy_memory(uParam0->f_968.f_356[iVar94], &uVar96, 5);
		iVar94++;
	}
	iVar101 = create_itemset(true);
	find_all_attached_carriable_entities(func_99(0), iVar101);
	iVar102 = 0;
	while (iVar102 < get_itemset_size(iVar101))
	{
		iVar103 = _get_entity_from_item(get_indexed_item_in_itemset(iVar102, iVar101));
		if (does_entity_exist(iVar103))
		{
			_0xed00d72f81cf7278(iVar103, 0, 0);
			delete_entity(&iVar103);
		}
		iVar102++;
	}
	destroy_itemset(iVar101);
}

void func_20(var uParam0)
{
	func_100(Global_35, &(uParam0->f_1404));
}

void func_21(var uParam0)
{
	if (_0x7c7e4ab748ea3b07())
	{
		return;
	}
	Var4.f_9 = -1591664384;
	if (func_101("ALL SATCHEL", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = (iVar1 - 1);
		while (iVar2 >= 0)
		{
			if (!func_102(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (_item_database_is_intrinsic_item(Var4.f_4))
			{
			}
			else if (func_103(Var4.f_4) != 2041469314)
			{
			}
			else
			{
				uParam0->f_1450[iVar3] = Var4.f_4;
				uParam0->f_1450[iVar3]->f_1 = Var4.f_11;
				iVar3++;
				if (iVar3 >= 50)
				{
				}
				else
				{
					iVar2 = (iVar2 + -1);
				}
				func_104(iVar0);
			}
		}
	}
}

int func_22(int iParam0)
{
	if (!func_4(iParam0))
	{
		return -1;
	}
	return func_105(func_96(iParam0));
}

void func_23(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_106(iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	Var1 = 1770;
	Var1.f_1772 = 56;
	if (bParam3)
	{
		func_107();
		if (!network_is_game_in_progress())
		{
			set_bit(Global_1879534->f_7301.f_2[0], 1);
		}
		else if (func_56() == 0)
		{
			set_bit(Global_1879534->f_7301.f_2[0], 1);
		}
	}
	func_14(1);
	func_108(&Var1, uParam0, (iVar0 - 1), iParam2);
	if (!func_109((*Global_1835011)[iParam1]))
	{
		if (func_110(&((*Global_1835011)[iParam1]->f_29), 4))
		{
			set_clock_time(6, 0, 0);
		}
		else if (func_110(&((*Global_1835011)[iParam1]->f_29), 8))
		{
			set_clock_time(12, 0, 0);
		}
		else if (func_110(&((*Global_1835011)[iParam1]->f_29), 16))
		{
			set_clock_time(18, 0, 0);
		}
		else if (func_110(&((*Global_1835011)[iParam1]->f_29), 32))
		{
			set_clock_time(0, 0, 0);
		}
	}
	if (bParam5)
	{
		func_111(uParam0);
	}
	switch (iParam1)
	{
		case 20:
			func_112((*Global_1835011)[19]->f_1, 0, 0, 0, 0);
			break;
		case 53:
			func_112((*Global_1835011)[17]->f_1, 0, 0, 0, 0);
			break;
	}
	func_14(0);
	if (bParam4)
	{
		func_55(&Global_0, 1024);
	}
}

Vector3 func_24(int iParam0)
{
	return func_113(iParam0);
}

void func_25(vector3 vParam0, int iParam3)
{
	func_114(vParam0, iParam3, 1, 0, 0, 0, 0);
}

int func_26(int iParam0)
{
	if (func_17(iParam0) == 8)
	{
		return func_98(iParam0);
	}
	return -1;
}

void func_27(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = true;
	switch (iParam1)
	{
		case 151:
			func_27(uParam0, 49, bParam2, bParam3);
			break;
		case 153:
			func_27(uParam0, 18, bParam2, bParam3);
			break;
		case 155:
			func_27(uParam0, 18, bParam2, bParam3);
			break;
		case 154:
			func_27(uParam0, 13, bParam2, bParam3);
			break;
		default:
			bVar0 = false;
			break;
	}
	if (bVar0)
	{
		func_115(iParam1, 0);
		return;
	}
	iVar2 = func_116(iParam1, &iVar1);
	if (iVar2 == -1)
	{
		iVar3 = func_117(Global_1347702[iParam1]);
		iVar2 = func_116(iVar3, &iVar1);
		if (iVar2 == -1)
		{
			return;
		}
	}
	Var4 = 1770;
	Var4.f_1772 = 56;
	if (bParam2)
	{
		func_107();
		if (!network_is_game_in_progress())
		{
			set_bit(Global_1879534->f_7301.f_2[0], 1);
		}
		else if (func_56() == 0)
		{
			set_bit(Global_1879534->f_7301.f_2[0], 1);
		}
	}
	func_14(1);
	uVar1835 = Global_1347702[iParam1];
	iVar1836 = iParam1;
	iVar1837 = (iParam1 - 1);
	while (iLocal_1843 >= 0)
	{
		if (Global_1347702[iLocal_1843] == iLocal_1841)
		{
			iVar1836 = iLocal_1843;
		}
		else
		{
			iVar1837 = -1;
		}
		iVar1837 = (iLocal_1843 + -1);
	}
	iVar1837 = iParam1 + 1;
	while (iLocal_1843 <= 200)
	{
		if (Global_1347702[iLocal_1843] == iLocal_1841)
		{
			if ((*Global_1347702)[iLocal_1843]->f_48 != -1 && (*Global_1347702)[iLocal_1843]->f_48 == (*Global_1347702)[iParam1]->f_48)
			{
				if ((*Global_1347702)[iLocal_1843]->f_35 != -1 && (*Global_1347702)[iLocal_1843]->f_35 == (*Global_1347702)[iParam1]->f_35)
				{
				}
			}
			else
			{
				func_118(iLocal_1843, 1, 1);
				func_87(iLocal_1843, 1, 1, 1, 32);
			}
		}
		else
		{
			iVar1837 = 201;
		}
		iVar1837 = iLocal_1843 + 1;
	}
	if (func_119((*Global_1347702)[iLocal_1842]->f_12, 2048))
	{
		func_115(iLocal_1842, 0);
	}
	if (iParam1 != iLocal_1842 && func_119((*Global_1347702)[iParam1]->f_12, 2048))
	{
		func_115(iParam1, 0);
	}
	iVar1837 = iLocal_1842;
	while (iLocal_1843 <= (iParam1 - 1))
	{
		if ((*Global_1347702)[iLocal_1843]->f_48 != -1 && (*Global_1347702)[iLocal_1843]->f_48 == (*Global_1347702)[iParam1]->f_48)
		{
			if ((*Global_1347702)[iLocal_1843]->f_35 != -1 && (*Global_1347702)[iLocal_1843]->f_35 == (*Global_1347702)[iParam1]->f_35)
			{
			}
		}
		else
		{
			func_120(iLocal_1843, 1, 0, 1, 0, 1, 0);
			func_87(iLocal_1843, 1, 1, 1, 32);
		}
		iVar1837 = iLocal_1843 + 1;
	}
	if ((*Global_1347702)[iParam1]->f_48 != -1)
	{
		if (func_17((*Global_1347702)[iParam1]->f_48) == 8 && func_22((*Global_1347702)[iParam1]->f_48) != Global_1347702[iParam1])
		{
			iVar1838 = func_98((*Global_1347702)[iParam1]->f_48);
			func_120(iScriptParam_0, 1, 0, 1, 0, 1, 0);
			func_87(iScriptParam_0, 1, 1, 1, 32);
		}
	}
	func_108(&Var4, uParam0, iVar2, iVar1);
	if (bParam3)
	{
		func_111(uParam0);
	}
	func_14(0);
	func_55(&Global_0, 1024);
}

void func_28(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_106(iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7222)
	{
		iVar1++;
	}
	if (bParam3)
	{
		func_107();
		set_bit(Global_1879534->f_7301.f_2[0], 1);
	}
	Var2 = 1770;
	Var2.f_1772 = 56;
	func_14(1);
	func_108(&Var2, uParam0, iVar0, iParam2);
	if (bParam5)
	{
		func_111(uParam0);
	}
	func_14(0);
	if (bParam4)
	{
		func_55(&Global_0, 1024);
	}
}

void func_29(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_121(Global_35) && is_player_teleport_active())
	{
	}
	if (func_122(iParam0))
	{
		if (func_123(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_68(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_29(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_29(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_68(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_68(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_68(iParam5, 129))
	{
		if (func_68(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_68(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_68(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_122(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_68(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_68(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_30(bool bParam0, int iParam1)
{
	if (func_124())
	{
		if (func_125(255))
		{
			if (!func_126(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_61(Global_1894899->f_2) && func_127(Global_1894899->f_2))
		{
			func_128(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_129(16);
			}
		}
		else if (func_61(Global_1894899->f_2) && !func_130(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1894899->f_7 = 0;
		func_131(16);
		func_132();
		if (bVar0)
		{
			func_131(1);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (!func_4(iParam0))
	{
		return;
	}
	func_133(iParam0, iParam1);
}

int func_32(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_134(iParam0))
	{
		return -1;
	}
	if (func_56() != -1)
	{
		iVar2 = func_135(iParam0);
		if (iVar2 >= 0)
		{
			func_136(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_72(iVar1, 1);
			func_136(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_135(iParam0);
		if (iVar2 >= 0)
		{
			func_136(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_4(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_72(iVar0, 1);
					func_136(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_33(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	func_137(iParam0);
	clear_ped_wetness(iParam0);
	_0xa7a806677f8de138(iParam0);
	_0xa064bbabb064446f(iParam0);
	clear_ped_env_dirt(iParam0);
	_0x9184788bff1edad7(iParam0, 0f);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		clear_ped_damage_decal_by_zone(iParam0, iVar0, "ALL");
		iVar0++;
	}
}

int func_34(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_139(iParam0, 1);
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
			func_140(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_141(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_142(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_143(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_143(iParam0, 0, 0) - iParam1) < 0)
		{
			func_34(iParam0, func_143(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_144(iParam0) == -427144552)
	{
		if (!func_145(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_146(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_147(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_140(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_148(iParam0, iParam1);
	return 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_149(0f);
	Global_1935436->f_11 = 1;
	if (func_150())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_151();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_36()
{
	Global_1934765->f_273 = 0;
}

void func_37(int iParam0)
{
	if (_0x7c7e4ab748ea3b07())
	{
		if (func_17(iParam0) == 1)
		{
			switch (func_18(iParam0))
			{
				case 39:
					set_current_ped_weapon(Global_35, -1569615261, true, 3, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 2, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 7, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 9, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 10, false, false);
					break;
				case 40:
				case 41:
				case 42:
				case 43:
					iVar0 = func_152(2097152, 0);
					if (func_138(iVar0, 0))
					{
						set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
					}
					iVar0 = func_153(6291456, 0);
					if (func_138(iVar0, 0))
					{
						set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
					}
					break;
			}
		}
		return;
	}
	_0x6968ce7ac32f6788(1);
	Var4.f_9 = -1591664384;
	if (func_101("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = (iVar2 - 1);
		while (iVar3 >= 0)
		{
			if (!func_102(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_154(Var4.f_4))
			{
			}
			else if (_item_database_is_intrinsic_item(Var4.f_4))
			{
			}
			else if (_is_weapon_throwable(Var4.f_4) && !func_155(Var4.f_4))
			{
				_0x3e4e811480b3ae79(1, &Var4, 1, -142743235);
			}
			iVar3 = (iVar3 + -1);
		}
		func_104(iVar1);
	}
	switch (func_17(iParam0))
	{
		case 1:
			switch (func_18(iParam0))
			{
				case 1:
					if (func_141(392538360, 1, 0))
					{
						func_146(392538360, 1, -142743235, 0, 0);
					}
					break;
				case 2:
					if (func_141(-183018591, 1, 0))
					{
						func_146(-183018591, 1, -142743235, 0, 0);
					}
					func_156(0);
					break;
				case 14:
					if (func_141(-506285289, 1, 0))
					{
						func_146(-506285289, 1, -142743235, 0, 0);
					}
					if (func_141(1402226560, 1, 0))
					{
						func_146(1402226560, 1, -142743235, 0, 0);
					}
					if (func_141(1311933014, 1, 0))
					{
						func_146(1311933014, 1, -142743235, 0, 0);
					}
					break;
				case 22:
					if (func_141(1311933014, 1, 0))
					{
						func_146(1311933014, 1, -142743235, 0, 0);
					}
					break;
				case 12:
					if (func_141(-1471716628, 1, 0))
					{
						func_146(-1471716628, 1, -142743235, 0, 0);
					}
					break;
				case 75:
					func_157(954660191, 20, 1, 0, 0, 752097756, 0, 0, 0, 0);
					break;
			}
			break;
		case 8:
			switch (func_26(iParam0))
			{
				case 63:
					if (func_141(1845102363, 1, 0))
					{
						func_146(1845102363, 1, -142743235, 0, 0);
					}
					break;
				case 65:
					if (func_141(-1783478894, 1, 0))
					{
						func_146(-1783478894, 1, -142743235, 0, 0);
					}
					break;
				case 120:
					if (func_141(-2002235300, 1, 0))
					{
						func_146(-2002235300, 1, -142743235, 0, 0);
					}
					if (func_141(115405099, 1, 0))
					{
						func_146(115405099, 1, -142743235, 0, 0);
					}
					break;
				case 76:
					if (func_141(1999408598, 1, 0))
					{
						func_146(1999408598, 1, -142743235, 0, 0);
					}
					break;
			}
			break;
	}
	iVar18 = func_158(Global_35, 0);
	if (func_154(iVar18))
	{
		if (_is_weapon_one_handed(iVar18))
		{
			if (!func_154(func_158(Global_35, 2)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 2, false, false);
			}
			else if (func_159(24) && !func_154(func_158(Global_35, 3)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 3, false, false);
			}
		}
		else if (_is_weapon_two_handed(iVar18))
		{
			if (!func_154(func_158(Global_35, 9)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 9, false, false);
			}
			else if (!func_154(func_158(Global_35, 10)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 10, false, false);
			}
		}
	}
	iVar18 = func_158(Global_35, 1);
	if (func_154(iVar18))
	{
		if (_is_weapon_one_handed(iVar18))
		{
			if (func_159(24) && !func_154(func_158(Global_35, 3)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 3, false, false);
			}
		}
		else if (_is_weapon_two_handed(iVar18))
		{
			if (!func_154(func_158(Global_35, 9)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 9, false, false);
			}
			else if (!func_154(func_158(Global_35, 10)))
			{
				set_current_ped_weapon(Global_35, iVar18, true, 10, false, false);
			}
		}
	}
	if (func_159(24) && !func_154(func_158(Global_35, 3)))
	{
		iVar18 = func_152(2097152, 0);
		if (func_138(iVar18, 0))
		{
			set_current_ped_weapon(Global_35, iVar18, true, 3, false, false);
		}
	}
}

void func_38(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_944)
	{
		Global_40.f_11095.f_11[iVar0] = &uParam0->f_944[iVar0];
		iVar1 = round(&(Global_40.f_11095.f_11[iVar0]));
		if (func_160(iVar0))
		{
			if (func_161(iVar0))
			{
				set_attribute_points(Global_35, iVar0, iVar1);
			}
			else
			{
				set_attribute_points(Global_35, iVar0, func_162(iVar1));
			}
		}
		iVar0++;
	}
}

void func_39(var uParam0)
{
	_copy_memory(Global_40.f_1095.f_1[0], &(uParam0->f_968), 436);
}

void func_40(var uParam0, int iParam1)
{
	if (func_163(iParam1) == 0)
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			iVar1 = func_164(iVar0);
			if (func_138(iVar1, 0))
			{
				if (&uParam0->f_1404[iVar0] > 0 && !func_165(iVar0))
				{
					uParam0->f_1404[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
	func_166(Global_35, &(uParam0->f_1404), 1);
}

void func_41(var uParam0)
{
	if (_0x7c7e4ab748ea3b07())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_138(&(uParam0->f_1450[iVar0]), 0))
		{
			func_157(&(uParam0->f_1450[iVar0]), uParam0->f_1450[iVar0]->f_1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
}

void func_42(float fParam0)
{
	if (func_167(1) < fParam0)
	{
		func_168(1, fParam0, 0);
	}
	if (func_167(2) < fParam0)
	{
		func_168(2, fParam0, 0);
	}
	if (func_167(0) < fParam0)
	{
		func_168(0, fParam0, 0);
	}
}

void func_43(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_154(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_46(1);
	}
}

void func_44(int iParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_45(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_46(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_47()
{
	iVar0 = player_ped_id();
	disable_attribute_overpower(iVar0, 0);
	disable_attribute_overpower(iVar0, 1);
	disable_attribute_overpower(iVar0, 2);
	disable_attribute_overpower(iVar0, 19);
	disable_attribute_overpower(iVar0, 18);
	disable_attribute_overpower(iVar0, 20);
}

void func_48()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

bool func_49(int iParam0)
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
		iVar0 = func_169(iParam0);
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

int func_50(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_1;
}

void func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_170(1497516462);
			func_171(2016141805);
			func_171(1010885152);
			func_171(-502324015);
			break;
		case 2016141805:
			func_171(1497516462);
			func_170(2016141805);
			func_171(1010885152);
			func_171(-502324015);
			break;
		case 1010885152:
			func_171(1497516462);
			func_171(2016141805);
			func_170(1010885152);
			func_171(-502324015);
			break;
		case -502324015:
			func_171(1497516462);
			func_171(2016141805);
			func_171(1010885152);
			func_170(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_171(-538889627);
			func_171(-538880323);
			func_171(-1056767524);
			func_170(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_172();
			func_170(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_173();
			func_170(iParam0);
			break;
		case 2019386373:
			func_171(-664252410);
			func_171(2109952320);
			func_170(2019386373);
			break;
		case -664252410:
			func_171(2019386373);
			func_171(2109952320);
			func_170(-664252410);
			break;
		case 2109952320:
			func_171(2019386373);
			func_171(-664252410);
			func_170(2109952320);
			break;
		case -1674179981:
			func_171(-1835851517);
			func_171(-1838352012);
			func_170(-1674179981);
			break;
		case -1835851517:
			func_171(-1674179981);
			func_171(-1838352012);
			func_170(-1835851517);
			break;
		case -1838352012:
			func_171(-1674179981);
			func_171(-1835851517);
			func_170(-1838352012);
			break;
		case -1717960576:
			func_171(210001842);
			func_170(-1717960576);
			break;
		case 210001842:
			func_171(-1717960576);
			func_170(210001842);
			break;
		case -150493654:
			func_171(-1271608261);
			func_171(1846061697);
			func_171(-1145519186);
			func_170(-150493654);
			break;
		case -1271608261:
			func_171(-150493654);
			func_171(1846061697);
			func_171(-1145519186);
			func_170(-1271608261);
			break;
		case 1846061697:
			func_171(-150493654);
			func_171(-1271608261);
			func_171(-1145519186);
			func_170(1846061697);
			break;
		case -1145519186:
			func_171(-150493654);
			func_171(-1271608261);
			func_171(1846061697);
			func_170(-1145519186);
			break;
		case 1766284049:
			func_171(280705402);
			func_171(1926308480);
			func_170(1766284049);
			break;
		case 280705402:
			func_171(1766284049);
			func_171(1926308480);
			func_170(280705402);
			break;
		case 1926308480:
			func_171(1766284049);
			func_171(280705402);
			func_170(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_171(439465264);
				func_170(1609506757);
			}
			else
			{
				func_171(1609506757);
				func_171(439465264);
			}
			break;
		case 439465264:
			if (func_174(1609506757))
			{
				if (bParam1)
				{
					func_170(439465264);
				}
				else
				{
					func_171(439465264);
				}
			}
			break;
		case 1822001510:
			func_171(-1612662716);
			func_170(1822001510);
			break;
		case -1612662716:
			func_171(1822001510);
			func_170(-1612662716);
			break;
		case 1306158345:
			func_171(1952610440);
			func_171(-223469678);
			func_171(-404698347);
			func_171(1517904467);
			func_170(1306158345);
			break;
		case 1952610440:
			func_171(1306158345);
			func_171(-223469678);
			func_171(-404698347);
			func_171(1517904467);
			func_170(1952610440);
			break;
		case -223469678:
			func_171(1306158345);
			func_171(1952610440);
			func_171(-404698347);
			func_171(1517904467);
			func_170(-223469678);
			break;
		case -404698347:
			func_171(1306158345);
			func_171(1952610440);
			func_171(-223469678);
			func_171(1517904467);
			func_170(-404698347);
			break;
		case 1517904467:
			func_171(1306158345);
			func_171(1952610440);
			func_171(-223469678);
			func_171(-404698347);
			func_170(1517904467);
			break;
		case 1376646519:
			func_171(931649776);
			func_171(-434590080);
			func_171(1743048395);
			func_171(449774763);
			func_170(1376646519);
			break;
		case 931649776:
			func_171(1376646519);
			func_171(-434590080);
			func_171(1743048395);
			func_171(449774763);
			func_170(931649776);
			break;
		case -434590080:
			func_171(1376646519);
			func_171(931649776);
			func_171(1743048395);
			func_171(449774763);
			func_170(-434590080);
			break;
		case 1743048395:
			func_171(1376646519);
			func_171(931649776);
			func_171(-434590080);
			func_171(449774763);
			func_170(1743048395);
			break;
		case 449774763:
			func_171(1376646519);
			func_171(931649776);
			func_171(-434590080);
			func_171(1743048395);
			func_170(449774763);
			break;
		case -1414537028:
			func_171(38162571);
			func_171(1350391819);
			func_171(54073871);
			func_170(-1414537028);
			break;
		case 38162571:
			func_171(-1414537028);
			func_171(1350391819);
			func_171(54073871);
			func_170(38162571);
			break;
		case 1350391819:
			func_171(-1414537028);
			func_171(38162571);
			func_171(54073871);
			func_170(1350391819);
			break;
		case 54073871:
			func_171(-1414537028);
			func_171(38162571);
			func_171(1350391819);
			func_170(54073871);
			break;
		case 198200492:
			func_170(198200492);
			func_171(-1124061431);
			func_171(52706132);
			func_171(-259123672);
			break;
		case -1124061431:
			func_171(198200492);
			func_170(-1124061431);
			func_171(52706132);
			func_171(-259123672);
			break;
		case 52706132:
			func_171(198200492);
			func_171(-1124061431);
			func_170(52706132);
			func_171(-259123672);
			break;
		case -259123672:
			func_171(198200492);
			func_171(-1124061431);
			func_171(52706132);
			func_170(-259123672);
			break;
		case -919512195:
			func_170(-919512195);
			func_171(-1925798111);
			func_171(420709909);
			func_171(1703426636);
			break;
		case -1925798111:
			func_170(-1925798111);
			func_171(-919512195);
			func_171(420709909);
			func_171(1703426636);
			break;
		case 420709909:
			func_170(420709909);
			func_171(-919512195);
			func_171(-1925798111);
			func_171(1703426636);
			break;
		case 1703426636:
			func_170(1703426636);
			func_171(-919512195);
			func_171(-1925798111);
			func_171(420709909);
			break;
		case -1223121209:
			func_170(-1223121209);
			func_171(630808005);
			break;
		case 630808005:
			func_170(630808005);
			func_171(-1223121209);
			break;
		case 1453909576:
			func_170(1453909576);
			func_171(1643531967);
			break;
		case 1643531967:
			func_170(1643531967);
			func_171(1453909576);
			break;
		case 0:
			func_170(0);
			func_171(473295046);
			func_171(-1738165526);
			break;
		case 473295046:
			func_170(473295046);
			func_171(0);
			func_171(-1738165526);
			break;
		case -1738165526:
			func_170(-1738165526);
			func_171(0);
			func_171(473295046);
			break;
		case 932909855:
			func_170(932909855);
			func_171(2051822093);
			break;
		case 2051822093:
			func_170(2051822093);
			func_171(932909855);
			break;
		case 405586984:
			func_170(405586984);
			func_171(1509509592);
			func_171(-959357075);
			func_171(-1311865656);
			break;
		case 1509509592:
			func_170(1509509592);
			func_171(405586984);
			func_171(-959357075);
			func_171(-1311865656);
			break;
		case -959357075:
			func_170(-959357075);
			func_171(1509509592);
			func_171(405586984);
			func_171(-1311865656);
			break;
		case -1311865656:
			func_170(-1311865656);
			func_171(1509509592);
			func_171(-959357075);
			func_171(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_170(-524145696);
			}
			else
			{
				func_171(-524145696);
			}
			func_171(1626481264);
			func_171(282809459);
			break;
		case 282809459:
			func_170(282809459);
			func_171(1626481264);
			func_171(-524145696);
			break;
		case 1626481264:
			func_170(1626481264);
			func_171(-524145696);
			func_171(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_170(885203519);
			}
			else
			{
				func_171(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_170(-1080627546);
			}
			else
			{
				func_171(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_174(iParam0))
				{
					func_170(iParam0);
				}
			}
			else if (func_174(iParam0))
			{
				func_171(iParam0);
			}
			break;
	}
}

void func_52(int iParam0)
{
	func_175(iParam0);
}

bool func_53(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_84(iParam0))
	{
		return true;
	}
	if (!func_176(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_115(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_85((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_177(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_85((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_177(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_85((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_178(iParam0))
	{
		func_32((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_179((*Global_1347702)[iParam0]->f_15))
	{
		func_52((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_85((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_177(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

void func_54(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_55(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_56()
{
	return Global_1572887->f_12;
}

bool func_57(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_58(bool bParam0, bool bParam1)
{
	if (func_56() == -1)
	{
		func_180();
	}
	else
	{
		return;
	}
	func_181();
	Global_40.f_9.f_14 = func_59();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_182())
		{
			func_183(Global_1310720->f_1);
		}
		else if (func_184() == func_7(Global_36, 1) && func_185() != 2)
		{
			func_183(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_183(Global_36);
		}
		func_186(Global_36, &vVar0, &uVar4);
		if (!func_182())
		{
			if (func_187(vVar0, Global_36) < func_187(Global_40.f_9.f_7, Global_36))
			{
				func_183(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_7(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_186(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_95(Global_1935630, 8192);
	}
	func_188();
}

int func_59()
{
	return &Global_1899515;
}

int func_60()
{
	return Global_1894899->f_2;
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_62(vector3 vParam0, bool bParam3)
{
	iVar0 = func_189(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_63(var uParam0)
{
	return func_190(*uParam0, 1);
}

void func_64(var uParam0)
{
	func_191(uParam0, 0f);
}

bool func_65(var uParam0)
{
	return func_190(*uParam0, 2);
}

float func_66()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_67(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_192(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_68(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_69()
{
	iVar2 = 0;
	bVar3 = func_56() == -1;
	iVar1 = 0;
	while (iVar1 < &Global_1898329)
	{
		if (func_4(Global_1898330[iVar1]) && func_49(Global_1898330[iVar1]))
		{
			if ((*Global_1898346)[iVar1]->f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = (*Global_1898346)[iVar1]->f_5;
					if (func_193(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

void func_70(var uParam0, int iParam1)
{
	func_194(uParam0, iParam1);
}

bool func_71(int iParam0, int iParam1)
{
	return (func_195(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

void func_72(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_96(Global_1898330[iParam0]);
		func_196((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_73(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_74(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (func_77((*Global_1835011)[iParam0], 8192))
	{
		bVar0 = true;
	}
	(*Global_1835011)[iParam0]->f_63 = 0;
	if (!bParam1 && bVar0)
	{
		(*Global_1835011)[iParam0]->f_63 |= 2;
		(*Global_1835011)[iParam0]->f_63 |= 8192;
	}
}

void func_75(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_195(iParam1))
	{
		iParam1 = func_135(func_197(iParam0));
		if (!func_195(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_198(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_199())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_200(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_198(iParam0, -1) && func_201(iParam0))
			{
				func_202(iParam0, fParam5, iParam1, bParam2, 1);
				func_78((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_203(iParam0)) && !Global_43891)
	{
		func_202(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_71(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_204(iParam0)) && !func_71(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_81((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_205(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

void func_76(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_3}, 3);
	if ((func_56() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_7, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_7);
	}
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_79(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_80(int iParam0, bool bParam1, int iParam2)
{
	if (func_206((*Global_1392626)[iParam0]->f_3))
	{
		return;
	}
	if (bParam1)
	{
		func_207(iParam0);
	}
	if (!is_thread_active((*Global_1392626)[iParam0]->f_21, false))
	{
		if (iParam2 == 1)
		{
			func_208(iParam0);
		}
		func_209(&((*Global_1392626)[iParam0]->f_11), 1, 0, 1);
		(*Global_1392626)[iParam0]->f_11 = 0;
	}
	func_210(&((*Global_1392626)[iParam0]->f_9), 1);
	if (!func_211((*Global_1392626)[iParam0]->f_8, 1))
	{
		func_212(&((*Global_1392626)[iParam0]->f_8), 1);
	}
	func_210(&((*Global_1392626)[iParam0]->f_9), 2);
}

void func_81(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_4(iParam0))
	{
		return;
	}
	if (func_49(iParam0))
	{
		func_213(iParam0, 0, 2);
	}
	iVar0 = func_135(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_82(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_214(iVar0) && is_bit_set(Global_40.f_9052, iVar0))
		{
			if (((*Global_1392626)[iVar0]->f_10 && iParam0) == 0)
			{
				func_215(iVar0, iParam0);
			}
			func_216(iVar0);
		}
		iVar0++;
	}
}

void func_83()
{
	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_214(iVar0))
		{
			func_207(iVar0);
		}
		iVar0++;
	}
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_85(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_86(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_217(iParam0);
	}
	if (func_85((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_89(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_119((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_218(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_88(iParam0, 0);
	}
	func_219(iParam0);
	if (iParam3 == 1)
	{
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1347702)[iParam0]->f_42, iParam4);
		}
		else
		{
			(*Global_1347702)[iParam0]->f_43 = 0;
		}
	}
}

void func_88(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_220(&((*Global_1347702)[iParam0]->f_14));
		func_89(&((*Global_1347702)[iParam0]->f_13), 16);
		func_221(iParam0);
		if ((!func_222(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_89(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_223(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_224(iParam0, 16384);
			func_226(iParam0, 1, func_225(iParam0));
		}
	}
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_90()
{
	if (func_56() != -1)
	{
		return;
	}
	Global_1357549->f_1708 = 0;
	if (does_blip_exist(Global_1357549->f_1711))
	{
		remove_blip(&(Global_1357549->f_1711));
		iVar0 = func_227(Global_40.f_4283);
		if (func_61(iVar0) && func_228((*Global_1888801)[iVar0]->f_13))
		{
			func_229((*Global_1888801)[iVar0]->f_13, 1560611276);
		}
		Global_1357549->f_1710 = 0;
	}
}

void func_91()
{
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2;
						if (func_73(iVar1))
						{
							func_74(iVar1, 0);
							func_75(iVar1, -1, 0, 1, 0, 0, 0);
							if (does_blip_exist((*Global_1835011)[iVar1]->f_27))
							{
								remove_blip(&((*Global_1835011)[iVar1]->f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_92()
{
	Global_1898164->f_163 = func_230(0, 0, 0);
}

void func_93()
{
	Global_1898164->f_164 = func_230(0, 1, 0);
}

void func_94(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_95(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_96(int iParam0)
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

int func_97(int iParam0)
{
	return iParam0 & 31;
}

int func_98(int iParam0)
{
	if (!func_4(iParam0))
	{
		return -1;
	}
	return func_231(func_96(iParam0));
}

int func_99(int iParam0)
{
	iParam0 = func_232(iParam0);
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

void func_100(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = func_164(iVar0);
		if (func_138(iVar1, 0))
		{
			(*uParam1)[iVar0] = get_ped_ammo_by_type(iParam0, iVar1);
		}
		iVar0++;
	}
}

bool func_101(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_233(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_102(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_103(int iParam0)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_104(int iParam0)
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

int func_105(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_106(int iParam0, int iParam1)
{
	iVar0 = &Global_1879534->f_7222[iParam1];
	while (iVar0 <= Global_1879534->f_7222[iParam1]->f_1)
	{
		if (&Global_1879534->f_1911[iVar0] == -2093459088 || &Global_1879534->f_1911[iVar0] == -868169264)
		{
			if (Global_1879534->f_1911[iVar0]->f_2 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_107()
{
	func_234(0, func_56(), 1);
}

void func_108(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = iParam2;
	uParam0->f_1829++;
	while (iParam2 >= &Global_1879534->f_7222[iParam3] && !bVar1)
	{
		iVar2 = floor((IntToFloat(iParam2) / 32f));
		iVar3 = (iParam2 % 32);
		if (is_bit_set(&(uParam0->f_1772[iVar2]), iVar3))
		{
			bVar1 = true;
			if ((&uParam1->f_904[iParam3] < iParam2 && iParam2 >= &Global_1879534->f_7222[iParam3]) && iParam2 <= Global_1879534->f_7222[iParam3]->f_1)
			{
				uParam1->f_904[iParam3] = iParam2;
			}
		}
		set_bit(uParam0->f_1772[iVar2], iVar3);
		uParam0->f_1830++;
		if (uParam0->f_1830 > 400)
		{
			wait(0);
			uParam0->f_1830 = 0;
		}
		if (_0x72904d3d62af5839() + floor((to_float(_0xc43cd2668b204419()) * 0.2f))) > _0xc43cd2668b204419()
		{
			wait(0);
		}
		Global_1359453 = 0;
		if (func_235() > 25)
		{
			wait(0);
		}
		if (!bVar1)
		{
			if (((&uParam1->f_904[iParam3] == 0 || &uParam1->f_904[iParam3] < iParam2) && iParam2 >= &Global_1879534->f_7222[iParam3]) && iParam2 <= Global_1879534->f_7222[iParam3]->f_1)
			{
				uParam1->f_904[iParam3] = iParam2;
			}
			(*uParam0)[uParam0->f_1771] = iParam2;
			uParam0->f_1771++;
			switch (&Global_1879534->f_1911[iParam2])
			{
				case -1750917831:
					iVar4 = func_236(iParam3);
					if (iVar4 != -1)
					{
						func_108(uParam0, uParam1, iVar4, func_237(iVar4));
					}
					break;
				case -1982716178:
					iVar4 = func_238(Global_1879534->f_1911[iParam2]->f_2);
					if (iVar4 != -1)
					{
						func_108(uParam0, uParam1, iVar4, func_237(iVar4));
					}
					break;
			}
			iParam2 = (iParam2 - 1);
		}
	}
	uParam0->f_1771 = (uParam0->f_1771 - 1);
	while (((uParam0->f_1771 > -1 && uParam0[uParam0->f_1771] <= iVar0) && uParam0[uParam0->f_1771] >= &Global_1879534->f_7222[iParam3]) && uParam0[uParam0->f_1771] < Global_1879534->f_7222[iParam3]->f_1)
	{
		if (_0x72904d3d62af5839() + floor((to_float(_0xc43cd2668b204419()) * 0.2f))) > _0xc43cd2668b204419()
		{
			wait(0);
		}
		Global_1359453 = 0;
		if (func_235() > 25)
		{
			wait(0);
		}
		switch (&Global_1879534->f_1911[uParam0[uParam0->f_1771]])
		{
			case -1913176419:
				func_239(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2);
				func_240(iParam3, -2);
				break;
			case -1120129944:
				break;
			case -1083639171:
				iVar8 = &Global_1879534->f_211[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2];
				if (func_84(iVar8))
				{
					func_120(iVar8, 1, 0, 1, 0, 1, 0);
					func_81((*Global_1347702)[iVar8]->f_15);
					func_241(iParam3, uParam0[uParam0->f_1771]);
				}
				break;
			case 111818573:
				iVar9 = &Global_1879534->f_1172[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2];
				if (iVar9 == 0 || iVar9 == -1439599467)
				{
					clear_weather_type_persist();
					set_random_weather_type(true, true);
				}
				else
				{
					_set_weather_type(iVar9, true, false, false, 0f, false);
				}
				Global_1879534->f_1172[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2]->f_1 = 0;
			case -138866642:
			case 1281917784:
				func_240(iParam3, -2);
			case -217347738:
				iVar11 = &Global_1879534->f_1172[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2];
				if (iVar11 > -1 && iVar11 < Global_1879534->f_7300)
				{
					iVar12 = Global_1879534->f_1172[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2]->f_1;
					iVar13 = &Global_1879534->f_7222[iVar11];
					iVar14 = -1;
					while (iVar13 <= Global_1879534->f_7222[iVar11]->f_1)
					{
						if (&Global_1879534->f_1911[iVar13] == 531432813)
						{
							iVar14 = Global_1879534->f_1911[iVar13]->f_2;
							iVar15 = &Global_1879534->f_211[iVar14];
							if (iVar15 == iVar12)
							{
								if (&uParam1->f_904[iVar11] < iVar13 || &uParam1->f_904[iVar11] == 0)
								{
									uParam1->f_904[iVar11] = iVar13;
								}
								else
								{
									iVar13++;
								}
								Jump @1193; //curOff = 1171
								func_241(iParam3, uParam0[uParam0->f_1771]);
								switch (&Global_1879534->f_1911[uParam0[uParam0->f_1771]])
								{
									case -2093459088:
									case -868169264:
										func_112((*Global_1835011)[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2]->f_1, 0, 0, 0, 1);
										func_81((*Global_1835011)[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2]->f_1);
										switch (Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2)
										{
											case 45:
												if (!func_242((*Global_1347702)[58]->f_15, 1))
												{
													func_112((*Global_1347702)[58]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[58]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												break;
											case 37:
												if (!func_242((*Global_1347702)[139]->f_15, 1))
												{
													func_112((*Global_1347702)[139]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[139]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												break;
											case 21:
												if (!func_242((*Global_1347702)[95]->f_15, 1))
												{
													func_112((*Global_1347702)[95]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[95]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[138]->f_15, 1))
												{
													func_112((*Global_1347702)[138]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[138]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												break;
											case 58:
												if (!func_242((*Global_1347702)[69]->f_15, 1))
												{
													func_112((*Global_1347702)[69]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[69]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[70]->f_15, 1))
												{
													func_112((*Global_1347702)[70]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[70]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[6]->f_15, 1))
												{
													func_112((*Global_1347702)[6]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[6]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[7]->f_15, 1))
												{
													func_112((*Global_1347702)[7]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[7]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[140]->f_15, 1))
												{
													func_112((*Global_1347702)[140]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[140]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[141]->f_15, 1))
												{
													func_112((*Global_1347702)[141]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[141]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[142]->f_15, 1))
												{
													func_112((*Global_1347702)[142]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[142]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												break;
											case 49:
												if (!func_242((*Global_1347702)[22]->f_15, 1))
												{
													func_112((*Global_1347702)[22]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[22]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[23]->f_15, 1))
												{
													func_112((*Global_1347702)[23]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[23]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[24]->f_15, 1))
												{
													func_112((*Global_1347702)[24]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[24]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												if (!func_242((*Global_1347702)[25]->f_15, 1))
												{
													func_112((*Global_1347702)[25]->f_15, 0, 0, 0, 0);
													cVar10 = func_243((*Global_1347702)[25]->f_15);
													_0xe824ce7d13fcb300(get_hash_key(&cVar10), 3);
												}
												break;
											case 9:
												if (!func_242((*Global_1347702)[59]->f_15, 1))
												{
													func_120(59, 0, 0, 1, 0, 0, 0);
												}
												func_244(2);
												if (!func_242((*Global_1347702)[60]->f_15, 1))
												{
													func_120(60, 0, 0, 1, 0, 0, 0);
												}
												func_245(0, 0);
												break;
										}
										iVar17 = (*Global_1835011)[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2]->f_1;
										cVar10 = func_246(func_18(iVar17));
										if (Global_1425247->f_53)
										{
											iVar7 = 0;
										}
										else
										{
											iVar7 = 2;
										}
										_0xe824ce7d13fcb300(get_hash_key(&cVar10), iVar7);
										func_112(iVar17, 1, 0, 0, 0);
										if (does_blip_exist((*Global_1835011)[func_18(iVar17)]->f_27))
										{
											remove_blip(&((*Global_1835011)[func_18(iVar17)]->f_27));
										}
										break;
									case 69231574:
									case 891989563:
									case 987244216:
										iVar8 = Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2;
										if (func_84(iVar8))
										{
											func_247(Global_1347702[iVar8], iVar8);
											if (Global_1425247->f_53)
											{
												iVar7 = 0;
											}
											else
											{
												iVar7 = 2;
											}
											_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[iVar8]->f_3)), iVar7);
											func_112((*Global_1347702)[iVar8]->f_15, 1, 0, 0, 0);
											switch (iVar8)
											{
												case 66:
													if (!func_242((*Global_1347702)[98]->f_15, 1))
													{
														func_112((*Global_1347702)[98]->f_15, 0, 0, 0, 0);
													}
													if (!func_248(8))
													{
														func_112(func_197(8), 0, 0, 0, 0);
													}
													break;
												case 68:
													if (!func_248(7))
													{
														func_112(func_197(7), 0, 0, 0, 0);
													}
													break;
											}
										}
										break;
									case -1440757252:
									case 2025667422:
										iVar16 = Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2;
										if (func_249(iVar16))
										{
											func_250(iVar16, 1);
										}
										break;
									case 1831856550:
										iVar18 = Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2;
										func_244(iVar18);
										if (iVar18 == 2)
										{
											func_120(60, 0, 0, 1, 0, 0, 0);
										}
										break;
									case -1378868385:
										iVar19 = &Global_1879534->f_1172[Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2];
										if (iVar19 != -1)
										{
											func_251(iVar19, &uVar5, &uVar6);
											func_252(&uVar5, &uVar6);
										}
										break;
									case -1535566683:
										while (get_entity_model(player_ped_id()) != Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2)
										{
											if (Global_1935630->f_2 != Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2)
											{
												func_253(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2);
											}
											func_254();
											wait(0);
										}
										break;
									case -508972844:
										func_240(iParam3, func_255(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2));
										break;
									case 1726178855:
										func_240(iParam3, func_256(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2));
										break;
									case -1496733911:
										func_240(iParam3, func_257(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2));
										break;
									case -2049944022:
										func_240(iParam3, func_258(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2));
										break;
									case -976663157:
										func_240(iParam3, func_259(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2));
										break;
									case 1518265781:
										func_240(iParam3, func_260(Global_1879534->f_1911[uParam0[uParam0->f_1771]]->f_2));
										break;
								}
								if (Global_1879534->f_7301.f_2[iParam3]->f_1 != uParam0[uParam0->f_1771])
								{
									Global_1879534->f_7301.f_2[iParam3]->f_1 = uParam0[uParam0->f_1771];
								}
								uParam0->f_1771 = (uParam0->f_1771 - 1);
								uParam0->f_1829 = (uParam0->f_1829 - 1);
								iVar20 = func_241(iParam3, &(uParam1->f_904[iParam3]));
								if (((iVar20 != -1 || &Global_1879534->f_1911[&uParam1->f_904[iParam3]] == 1210875743) || &Global_1879534->f_1911[&uParam1->f_904[iParam3]] == -138866642) || &Global_1879534->f_1911[&uParam1->f_904[iParam3]] == 1281917784)
								{
									while (&uParam1->f_904[iParam3] < Global_1879534->f_7222[iParam3]->f_1)
									{
										uParam1->f_904[iParam3] = &uParam1->f_904[iParam3] + 1;
										switch (&Global_1879534->f_1911[&uParam1->f_904[iParam3]])
										{
											case 111818573:
											case 1210875743:
												func_240(iParam3, -2);
												iVar20 = -2;
												break;
											default:
												iVar20 = func_241(iParam3, &(uParam1->f_904[iParam3]));
												break;
										}
										if (_0x72904d3d62af5839() + floor((to_float(_0xc43cd2668b204419()) * 0.2f))) > _0xc43cd2668b204419()
										{
											wait(0);
										}
										if (iVar20 == -1)
										{
										}
									else
									{
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_109(var uParam0)
{
	if (func_110(&(uParam0->f_29), 62))
	{
		switch (func_261())
		{
			case 1:
				if (!func_110(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_110(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_110(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_110(&(uParam0->f_29), 32))
				{
					if (func_110(&(uParam0->f_29), 2))
					{
						if (func_262(func_59()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

bool func_110(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_111(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (&uParam0->f_904[iVar0] != 0)
		{
			Global_1879534->f_7301.f_2[iVar0]->f_1 = &uParam0->f_904[iVar0];
			uParam0->f_904[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_4(iParam0))
	{
		return;
	}
	if (func_263(iParam0) == 4)
	{
		func_264(iParam0, func_59());
		if (!func_169(iParam0) == 5 && !func_169(iParam0) == 6)
		{
			if (bParam3)
			{
				func_31(iParam0, 6);
			}
			else
			{
				func_31(iParam0, 5);
			}
			func_265(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_15(1);
	}
	iVar0 = func_17(iParam0);
	bVar1 = func_56() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_266(0, 2);
		if (!bVar1 && bParam1)
		{
			func_267();
		}
	}
	else
	{
		func_268(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_269(iParam0);
	}
	else
	{
		Var2 = { func_270(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_57(32768))
		{
			Var4 = { func_270(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_169(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_98(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_98(iParam0)]->f_8), true);
						}
					}
					else if ((func_98(iParam0) != 95 && func_98(iParam0) != 82) && !func_119((*Global_1347702)[func_98(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_98(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_98(iParam0)]->f_8), true);
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
		func_272(func_98(iParam0), iVar6, func_271());
	}
	else if (iVar0 == 8)
	{
		func_273(func_98(iParam0), iVar6, func_271(), func_150());
	}
	if (!func_169(iParam0) == 5 && !func_169(iParam0) == 6)
	{
		iVar9 = func_274(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_275(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_276(func_98(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_277((iVar10 - 20), 0, iVar10);
					iVar11 = func_277((iVar11 - 10), 0, iVar11);
				}
				func_278(1);
				func_279(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_279(45, 0, 1);
				break;
			case 8:
				iVar10 = func_280(func_98(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_277((iVar10 - 20), 0, iVar10);
					iVar11 = func_277((iVar11 - 10), 0, iVar11);
				}
				func_279(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_281(func_98(iParam0)))
				{
					func_282(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_279(120, 0, 1);
				break;
			case 2:
				func_279(120, 0, 1);
				break;
			case 6:
				func_279(func_283(func_22(iParam0)), 0, 1);
				break;
			case 5:
				func_279(120, 0, 1);
				break;
		}
	}
	func_284(iParam0, 1);
	func_264(iParam0, func_59());
	func_265(iParam0);
	if ((!func_169(iParam0) == 0 && bParam1) && func_56() == -1)
	{
		iVar12 = func_163(iParam0);
		if (iVar12 != -1)
		{
			func_285(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_286();
			if (iVar12 != -1)
			{
				func_285(0);
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
				switch (func_98(iParam0))
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
				if (func_84(func_98(iParam0)) && func_119((*Global_1347702)[func_98(iParam0)]->f_12, 4))
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
				if (func_98(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_287();
				}
				break;
			case 8:
				if (func_98(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_287();
				}
				break;
		}
	}
	if (!func_169(iParam0) == 5 && !func_169(iParam0) == 6)
	{
		if (bParam3)
		{
			func_31(iParam0, 6);
		}
		else
		{
			func_31(iParam0, 5);
		}
		func_265(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_98(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_288();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_157(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-1267972061);
						func_157(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(1619534881);
						func_157(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-755457379);
						func_157(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(1015404643);
						func_157(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-1724192342);
						func_157(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(1310680212);
						func_157(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-566881549);
						func_157(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-1753730528);
						func_157(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(147796381);
						func_157(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-378547623);
						func_157(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(829545206);
						func_157(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(891318243);
						func_157(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290();
						func_291(967523420);
						func_292();
						func_293();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_294(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_157(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_295(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_295(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_296(304805134, 1, 1);
						if (!func_242((*Global_1347702)[21]->f_15, 1))
						{
							func_112((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_297();
						break;
					case 26:
						func_298();
						break;
					case 17:
						func_299(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_300())
						{
							func_301(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_302(-514575035, -1))
						{
							iVar15 = func_59();
							func_303(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_304(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_300())
						{
							func_301(1529685685);
						}
						break;
					case 34:
						if (func_300())
						{
							func_301(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_305();
						break;
					case 37:
						func_306();
						if (func_307())
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
						func_308();
						break;
					case 43:
						func_309();
						break;
					case 44:
						if (!func_242((*Global_1347702)[82]->f_15, 1))
						{
							func_112((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_242((*Global_1347702)[83]->f_15, 1))
						{
							func_112((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_310();
						break;
					case 59:
						func_311();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_312();
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
						func_313();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_295(451, 0);
						}
						if (!func_314(-1992824800))
						{
							if (func_314(1520110311))
							{
								iVar16 = func_59();
								func_303(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_304(1937177603, iVar16, 1);
							}
						}
						if (func_315(4))
						{
							if (!func_141(684296857, 1, 0))
							{
								iVar17 = func_59();
								func_303(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_304(-1439688706, iVar17, 1);
							}
						}
						func_157(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_157(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_316(89200);
						func_316(2300);
						func_316(2300);
						break;
					case 68:
						func_317();
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
						func_318();
						func_316(-139100);
						break;
					case 69:
						if (func_242((*Global_1347702)[9]->f_15, 1))
						{
							func_316(-6000);
						}
						break;
					case 70:
						func_316(23400);
						func_316(1900);
						func_316(-15000);
						break;
					case 71:
						func_316(-5500);
						break;
				}
				break;
			case 8:
				switch (func_98(iParam0))
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
						func_319();
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
						func_320();
						break;
					case 66:
						func_321();
						func_322();
						break;
					case 67:
						if (!func_323(6))
						{
							func_324(6);
						}
						if (!func_323(3))
						{
							func_324(3);
						}
						if (func_300())
						{
							func_301(1534638301);
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
						if (func_242((*Global_1835011)[69]->f_1, 1))
						{
							func_325(0);
							func_316(40500);
						}
						else
						{
							func_325(0);
							func_316(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_98(iParam0))
				{
					case 0:
						switch (func_22(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_326(iParam0);
		func_327();
		switch (iVar0)
		{
			case 1:
				switch (func_98(iParam0))
				{
					case 4:
						func_328(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_328(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_328(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_328(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_328(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_328(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_328(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_329(iParam0);
						func_328(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_328(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_328(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_141(-2046502963, 1, 0))
						{
							func_157(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_328(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_328(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_328(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_329(iParam0) == 0)
						{
							func_328(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_328(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_119((*Global_1347702)[func_98(iParam0)]->f_12, 536870912))
				{
					func_330(11, 1);
				}
				switch (func_98(iParam0))
				{
					case 109:
						func_328(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_330(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_328(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_328(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_328(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_328(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_331(0, 10, 11, 2116153146))
				{
					func_328(iParam0, func_329(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_331(0, 7, 11, -379687487))
				{
					func_328(iParam0, func_332(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_331(0, 8, 11, -1386089015))
				{
					func_328(iParam0, func_332(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_331(0, 11, 11, -1952009645))
				{
					func_328(iParam0, func_332(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_331(0, 12, 11, 2065895756))
				{
					func_328(iParam0, func_332(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_169(iParam0) == 0)
			{
				if (func_333(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_333(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_334(func_17(iParam0), func_333(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_98(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_335(func_243(Global_1879514->f_1));
						if (iVar0 == 8 && func_98(iParam0) == 58)
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
						if (func_84(func_98(iParam0)) && func_119((*Global_1347702)[func_98(iParam0)]->f_12, 1))
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
			func_336(bParam2, iVar20);
		}
	}
	func_337(1);
	if ((bVar13 || func_287()) && (func_17(iParam0) == 1 || func_17(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

Vector3 func_113(int iParam0)
{
	if (func_338(iParam0))
	{
		return func_339(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

void func_114(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_115(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_119((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_242((*Global_1835011)[59]->f_1, 1))
			{
				return false;
			}
		}
		else if (func_119((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_242((*Global_1835011)[59]->f_1, 1))
			{
				return false;
			}
		}
	}
	return func_340(iParam0);
}

int func_116(int iParam0, var uParam1)
{
	*uParam1 = 0;
	while (*uParam1 < Global_1879534->f_7300)
	{
		if ((func_341(*uParam1) || !func_119((*Global_1347702)[iParam0]->f_12, 1)) || func_342(*uParam1))
		{
			iVar0 = &Global_1879534->f_7222[*uParam1];
			while (iVar0 <= Global_1879534->f_7222[*uParam1]->f_1)
			{
				if (&Global_1879534->f_1911[iVar0] == 939785963 || &Global_1879534->f_1911[iVar0] == -42848759)
				{
					if (Global_1879534->f_1911[iVar0]->f_2 == iParam0)
					{
						return iVar0;
					}
				}
				iVar0++;
			}
		}
		*uParam1++;
	}
	return -1;
}

int func_117(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (Global_1347702[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	func_343(iParam0, iParam2);
	if (func_178(iParam0))
	{
		func_81((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_206((*Global_1347702)[iParam0]->f_15))
		{
			func_213((*Global_1347702)[iParam0]->f_15, 0, 2);
		}
	}
}

bool func_119(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_120(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (func_150())
	{
		func_344(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		_0xcc3edc5614b03f61(18);
	}
	else if (iParam0 == 86)
	{
		_0xcc3edc5614b03f61(19);
	}
	else if (iParam0 == 87)
	{
		_0xcc3edc5614b03f61(20);
	}
	else if (iParam0 == 135)
	{
		_0xcc3edc5614b03f61(73);
	}
	else if (iParam0 == 20)
	{
		_0xcc3edc5614b03f61(6);
	}
	else if (iParam0 == 19)
	{
		_0xcc3edc5614b03f61(7);
	}
	else if (iParam0 == 12)
	{
		_0xcc3edc5614b03f61(10);
	}
	else if (iParam0 == 16)
	{
		_0xcc3edc5614b03f61(11);
	}
	else if (iParam0 == 17)
	{
		_0xcc3edc5614b03f61(13);
	}
	else if (iParam0 == 18)
	{
		_0xcc3edc5614b03f61(14);
	}
	else if (iParam0 == 14)
	{
		_0xcc3edc5614b03f61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_57(32768))
		{
			if (chal_is_goal_active(-816321659, -1044347982))
			{
				chal_add_goal_progress_int_by_score_id(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_150())
		{
			(*Global_1347702)[iParam0]->f_35 = 104;
			(*Global_1347702)[104]->f_48 = (*Global_1347702)[iParam0]->f_15;
		}
	}
	func_118(iParam0, 0, iParam3);
	if (func_84((*Global_1347702)[iParam0]->f_35))
	{
		func_345((*Global_1347702)[iParam0]->f_35);
		if (iParam1 == 1)
		{
			func_115((*Global_1347702)[iParam0]->f_35, 0);
			if (func_346(iParam0))
			{
				(*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_43 = (*Global_1347702)[iParam0]->f_43;
			}
		}
	}
	else
	{
		func_347();
	}
	if (!func_119((*Global_1347702)[iParam0]->f_12, 1) && !func_119((*Global_1347702)[iParam0]->f_12, 33554432))
	{
		if (func_119((*Global_1347702)[iParam0]->f_12, 262144))
		{
			if (bParam5)
			{
				func_348(iParam0);
			}
			bParam5 = false;
			cVar0 = func_243((*Global_1347702)[iParam0]->f_15);
			if (!is_string_null_or_empty(&cVar0))
			{
				_0xe824ce7d13fcb300(get_hash_key(&cVar0), 2);
			}
			func_218(&((*Global_1347702)[iParam0]->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_119((*Global_1347702)[iParam0]->f_12, 4);
	}
	if (!func_57(32768))
	{
		func_112((*Global_1347702)[iParam0]->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_349((*Global_1347702)[iParam0]->f_15, bParam6);
	}
	func_350(iParam0);
}

int func_121(var uParam0)
{
	return uParam0;
}

bool func_122(int iParam0)
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

bool func_123(int iParam0)
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

bool func_124()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_125(int iParam0)
{
	return func_126(23, iParam0);
}

bool func_126(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_351(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_352())
	{
		return func_351(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_351(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_127(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return func_130(iParam0, 8);
}

void func_128(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_129(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_130(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_131(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_132()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_130(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1888801)[iVar1]->f_26)))
			{
				set_script_as_no_longer_needed(&((*Global_1888801)[iVar1]->f_26));
			}
		}
		if ((*Global_1888801)[iVar1]->f_9 != 0)
		{
			if (is_thread_active((*Global_1888801)[iVar1]->f_9, false))
			{
				if (func_56() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_130(iVar1, 2))
			{
				if (func_56() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1888801)[iVar1]->f_26), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1888801)[iVar1]->f_26)));
				}
			}
			if (!_does_thread_exist((*Global_1888801)[iVar1]->f_9))
			{
				(*Global_1888801)[iVar1]->f_9 = 0;
				func_353(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_133(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_354(iParam0);
	}
	else
	{
		func_355(iParam0, iParam1);
	}
	func_356();
}

bool func_134(int iParam0)
{
	return func_263(iParam0) == 0;
}

int func_135(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(int iParam0, bool bParam1)
{
	if (!func_4(iParam0))
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_333(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_333(iParam0)))
		{
			_0xca41e86545413b5b(func_17(iParam0), func_98(iParam0), func_22(iParam0), func_333(iParam0), Global_36);
		}
	}
	func_31(iParam0, 1);
	bParam1 = bParam1;
}

void func_137(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_139(int iParam0, int iParam1)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_357(iParam0, 1399091007))
	{
		func_358(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_140(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_138(iParam0, 0))
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
	if (!func_359())
	{
		func_360(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_361(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_361(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_362(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_144(iParam0);
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
	else if (!func_363(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_365(_create_var_string(10, &cVar2, _create_var_string(0, func_364(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_357(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_364(iParam0));
	}
	func_366(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_141(int iParam0, int iParam1, bool bParam2)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_144(iParam0);
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
		if (!func_367(iParam0, 1))
		{
			return false;
		}
	}
	return func_143(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_142(int iParam0)
{
	if (!func_138(iParam0, 0))
	{
		return Var0;
	}
	if (func_357(iParam0, -305066475))
	{
		if (func_56() == -1)
		{
			if (func_357(iParam0, -537818634))
			{
				return func_270(189951448);
			}
			else
			{
				return func_270(1176172851);
			}
		}
	}
	else if (func_357(iParam0, -537818634))
	{
		return func_270(-963660207);
	}
	if (func_357(iParam0, 2084895747))
	{
		return func_270(1694039471);
	}
	return Var2;
}

int func_143(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_139(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_368(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_233(bParam2), iParam0, 0);
	return iVar2;
}

int func_144(int iParam0)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_145(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_369(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_371(&Var0, func_370(0));
	}
	if (!func_372(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_102(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_373(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_104(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_146(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_374(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_375(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_376(iParam0, Var0, Var0.f_4, bParam4) };
	return func_373(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_147(bool bParam0)
{
	if (func_56() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_233(bParam0));
}

void func_148(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_357(iParam0, 606799272))
		{
			func_377(iParam0, iParam1);
		}
		if (func_357(iParam0, -1112814642) && func_357(iParam0, -1697809989))
		{
			func_378(iParam0, iParam1, 1, 0);
		}
	}
}

void func_149(float fParam0)
{
	func_379(10, fParam0);
}

bool func_150()
{
	if (func_56() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_151()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_152(int iParam0, int iParam1)
{
	return func_380(&uVar0, iParam0, iParam1);
}

int func_153(int iParam0, int iParam1)
{
	return func_381(&uVar0, iParam0, iParam1);
}

bool func_154(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_155(int iParam0)
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

void func_156(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_382(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_383(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					_0xe9bd19f8121ade3e(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

bool func_157(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	if (!func_384(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_385(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_386(iParam0, bParam2);
	iVar2 = 0;
	if (func_143(iParam0, 0, 0) == 0)
	{
		if (func_387(iParam0))
		{
			iVar5 = func_388(iParam0);
			iVar6 = func_389(iVar5);
			iVar7 = func_390(iVar6) + 1;
			func_391(iVar5);
			if (func_392(38))
			{
				func_295(483, 0);
			}
			else
			{
				func_295(482, 0);
			}
			if (iVar7 == func_393(iVar6))
			{
				func_157(func_394(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_395() && func_396(4))
				{
					if (func_395() && (func_397(38) || func_392(38)))
					{
						func_399(38, func_394(iVar6), 0, 0, func_398(), 0, -1, 0);
						func_400(2);
					}
					else
					{
						func_399(38, func_394(iVar6), 0, 0, func_398(), 0, -1, 0);
						func_400(1);
					}
				}
			}
			else if (func_395() && func_396(4))
			{
				if (func_395() && (func_397(38) || func_392(38)))
				{
					func_399(38, 0, 0, 0, func_398(), 0, -1, 0);
					func_400(2);
				}
				else
				{
					func_399(38, 0, 0, 0, func_398(), 0, -1, 0);
					func_400(1);
				}
			}
			if (func_395() && func_396(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_395() && (func_397(38) || func_392(38)))
					{
						func_401(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_401(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_144(iParam0) == -1037537535)
	{
		if ((!func_357(iParam0, 866047851) && !func_357(iParam0, -1979000645)) && !func_357(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_362(iParam0, 8388608) && !func_159(28))
	{
		func_402(28);
	}
	if (!bVar3)
	{
		if (func_357(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_103(iParam0) == -1447088266)
			{
				iVar1 = func_404(func_403(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_56() == -1)
					{
						func_405(iVar1);
					}
					if (func_147(0) && func_406(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_407(iParam0, iVar0, iParam5);
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
					if (func_56() == -1)
					{
						func_405(iParam0);
					}
					if (func_147(0) && func_406(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_407(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_144(iParam0) == -427144552)
		{
			if (!func_408(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_144(iParam0) == 307971639 && func_409(iParam0))
		{
			if (!func_410(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_357(iParam0, 866047851))
		{
			func_411(iParam0);
		}
		else if (func_357(iParam0, 2000026003))
		{
			func_412(iParam0);
		}
		else if (func_357(iParam0, -103750053))
		{
			func_414(func_413(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_414(func_415(-717883113, 2091222383), iVar0);
		}
		else if (func_357(iParam0, -121341956) && !func_357(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_242((*Global_1835011)[4]->f_1, 1))
				{
					func_295(498, 0);
				}
			}
			if (func_357(iParam0, -2017733358) || func_357(iParam0, -1369131378))
			{
				func_416(iParam0);
			}
		}
		else if (func_357(iParam0, -136654233))
		{
			if (func_357(iParam0, -1021472396))
			{
			}
		}
		else if (func_357(iParam0, -1466706512) && func_357(iParam0, 1147021565))
		{
			func_295(484, 0);
		}
		else if (func_357(iParam0, 1147021565) && func_357(iParam0, -524514947))
		{
		}
		else if (func_357(iParam0, 554195525))
		{
		}
		else if (func_357(iParam0, 589988438))
		{
			if (func_417())
			{
				func_418(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_357(iParam0, 787083290) && func_357(iParam0, 949916894))
		{
			func_419(iParam0);
		}
		else if (func_357(iParam0, -1718133314))
		{
			func_420(iParam0);
		}
		else if (func_357(iParam0, -1738650224))
		{
			func_421(iParam0);
		}
		else if (func_357(iParam0, -1112814642) && func_357(iParam0, 949916894))
		{
			func_422(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_357(iParam0, 1841149704))
		{
			func_423();
		}
		else if (func_357(iParam0, 606799272))
		{
			func_424(iParam0, iParam1);
			func_425(iParam0);
		}
		else if (func_357(iParam0, -1112814642) && func_357(iParam0, -1697809989))
		{
			func_378(iParam0, 0, 0, 0);
		}
		else if (func_357(iParam0, -2017733358) || func_357(iParam0, -1369131378))
		{
			func_416(iParam0);
		}
		else if (func_357(iParam0, -1921346699))
		{
			if (func_56() != -1)
			{
				return false;
			}
			func_426(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_357(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_141(215778062, 1, 0))
					{
						func_157(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_141(670273567, 1, 0))
					{
						func_157(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_141(-967317137, 1, 0))
					{
						func_157(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_141(526074061, 1, 0))
					{
						func_157(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_141(-1045488665, 1, 0))
					{
						func_157(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_141(471514780, 1, 0))
					{
						func_157(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_357(iParam0, -839724752) && func_362(iParam0, 4))
		{
			if (!func_392(42))
			{
				func_427(iParam0);
			}
		}
		else if (func_357(iParam0, 1399091007))
		{
			func_428(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_357(iParam0, 1248798204))
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
				func_157(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_402(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_429(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_430(&iVar9, 0))
				{
					func_406(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_56() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_429(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_295(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_431();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_432();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_433();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_434();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_435();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_436(499813453, 854119837, 0);
				func_437(499813453, 0);
				func_438(1);
				break;
			case 2127812557:
				func_436(499813453, -1292544588, 0);
				func_437(499813453, 0);
				func_438(2);
				break;
			case 808991383:
				func_436(499813453, -1003325394, 0);
				func_437(499813453, 0);
				func_438(4);
				break;
			case 1134518629:
				func_436(666607663, -335460405, 0);
				func_437(666607663, 0);
				func_439(1);
				break;
			case 902940106:
				func_436(666607663, 903797617, 0);
				func_437(666607663, 0);
				func_439(2);
				break;
			case -418174898:
				func_436(666607663, 669728650, 0);
				func_437(666607663, 0);
				func_439(4);
				break;
			case -648114971:
				func_436(-220219788, 1214120047, 0);
				func_437(-220219788, 0);
				func_440(1);
				break;
			case 211153747:
				func_436(-220219788, 655769340, 0);
				func_437(-220219788, 0);
				func_440(2);
				break;
			case -32876996:
				func_436(-220219788, 885316185, 0);
				func_437(-220219788, 0);
				func_440(4);
				break;
			case 1191437462:
				func_436(218622660, -1491419385, 0);
				func_437(218622660, 0);
				func_441(1);
				break;
			case 1119149048:
				func_436(218622660, 1809565830, 0);
				func_437(218622660, 0);
				func_441(2);
				break;
			case 506073827:
				func_436(390004462, -628873767, 0);
				func_437(390004462, 0);
				func_442(1);
				break;
			case -1876986168:
				func_436(390004462, -405421956, 0);
				func_437(390004462, 0);
				func_442(2);
				break;
			case 2142623221:
				func_436(390004462, -1108972386, 0);
				func_437(390004462, 0);
				func_442(4);
				break;
			case 1508215381:
				func_436(6410548, 1053716392, 0);
				func_437(6410548, 0);
				func_443(1);
				break;
			case -888935280:
				func_436(6410548, 806507056, 0);
				func_437(6410548, 0);
				func_443(2);
				break;
			case -1252474566:
				func_436(6410548, 1571925350, 0);
				func_437(6410548, 0);
				func_443(4);
				break;
			case -1465702449:
				func_436(6410548, 1330352282, 0);
				func_437(6410548, 0);
				func_443(8);
				break;
			case -21093309:
				func_444(242, func_364(-21093309), 0);
				break;
			case 204375141:
				func_444(240, func_364(204375141), 0);
				break;
			case -417963070:
				func_444(241, func_364(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_445(594, 1934060482, 1, 1);
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
					func_445(594, 1110018439, 1, 1);
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
					func_445(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_445(594, -1228016946, 1, 1);
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
					func_445(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_445(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_295(488, 0);
				break;
			case 1613651027:
				func_295(491, 0);
				break;
			case -885810591:
				func_295(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_157(func_446(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_157(func_447(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_159(1))
				{
					func_295(487, 0);
				}
				break;
			case -898386032:
				func_295(486, 0);
				break;
			case -2035110427:
				if (func_56() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_295(496, 0);
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
		func_448(&iVar10);
		if (!func_449(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_147(0))
		{
			return true;
		}
		if (func_144(iParam0) == -1037537535)
		{
			func_450(iParam0);
		}
		if (func_357(iParam0, -1979000645))
		{
			func_451(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_147(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_157(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_452(iVar2, 0);
		}
	}
	Var35 = { func_142(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_453(iParam0);
	if (fParam6 > 0f)
	{
		if (func_357(iParam0, -839724752))
		{
			func_454(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_140(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

int func_158(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_159(int iParam0)
{
	if (!func_455(iParam0))
	{
		return false;
	}
	return func_456(iParam0);
}

bool func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		default:
			break;
	}
	return false;
}

bool func_161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

int func_162(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_163(int iParam0)
{
	switch (func_17(iParam0))
	{
		case 1:
			iVar0 = func_98(iParam0);
			return func_457(iVar0);
		case 8:
			iVar1 = func_98(iParam0);
			if (func_119((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_458(iVar1);
			}
			break;
	}
	return -1;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 954660191;
		case 1:
			return -1040876935;
		case 2:
			return 296901449;
		case 3:
			return 126245522;
		case 4:
			return -1368511730;
		case 43:
			return -1841822177;
		case 5:
			return 480079517;
		case 6:
			return 840671577;
		case 7:
			return 424030678;
		case 8:
			return 446901936;
		case 9:
			return -355466967;
		case 10:
			return 1446246869;
		case 11:
			return -2006166057;
		case 12:
			return 1950175060;
		case 13:
			return 836939099;
		case 14:
			return 1185302722;
		case 15:
			return -1411815376;
		case 16:
			return 236338048;
		case 17:
			return -1330115686;
		case 18:
			return -578347576;
		case 19:
			return -1668585578;
		case 20:
			return 231465488;
		case 21:
			return 1148521608;
		case 22:
			return 1681219929;
		case 23:
			return 1232099469;
		case 24:
			return 78180283;
		case 25:
			return -2084181920;
		case 26:
			return 1243983880;
		case 27:
			return 218444191;
		case 28:
			return 1654725195;
		case 29:
			return 1838310467;
		case 30:
			return 1858824185;
		case 31:
			return 200254898;
		case 32:
			return -1878508229;
		case 33:
			return -1077205471;
		case 34:
			return 314966081;
		case 35:
			return 588559146;
		case 36:
			return -1639263599;
		case 37:
			return 1222378998;
		case 38:
			return 2074469742;
		case 39:
			return 1235846615;
		case 40:
			return -228768324;
		case 41:
			return -1411922943;
		case 42:
			return -834103244;
		case 44:
			return 2113196069;
		default:
			break;
	}
	return 0;
}

bool func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 7:
		case 9:
		case 10:
		case 12:
		case 17:
		case 22:
		case 27:
		case 32:
		case 36:
		case 39:
		case 44:
			return true;
	}
	return false;
}

void func_166(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = func_164(iVar0);
		if (func_138(iVar1, 0))
		{
			if (uParam1[iVar0] > 0)
			{
				if (bParam2)
				{
					_add_ammo_to_ped_by_type(iParam0, iVar1, uParam1[iVar0], 752097756);
				}
				else
				{
					_add_ammo_to_ped_by_type(iParam0, iVar1, (uParam1[iVar0] - get_ped_ammo_by_type(iParam0, iVar1)), 752097756);
				}
			}
		}
		iVar0++;
	}
}

float func_167(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_168(int iParam0, float fParam1, int iParam2)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_159(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_162(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_459(iParam0), iVar0);
	func_461(func_460(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_462(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_295(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_295(func_463(iParam0), 1);
	}
	sVar1 = func_464(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

int func_169(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_465(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_170(int iParam0)
{
	iVar0 = func_466(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_171(int iParam0)
{
	iVar0 = func_466(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_172()
{
	func_171(-939420910);
	func_171(-1187950766);
	func_171(356365161);
	func_171(753127042);
	func_171(-2038424081);
	func_171(1884271742);
	func_171(459290420);
}

void func_173()
{
	func_171(704802028);
	func_171(588987611);
	func_171(2008888900);
	func_171(1649996811);
	func_171(227918160);
	func_171(168171957);
	func_171(1193080109);
	func_171(-491981251);
	func_171(-639037538);
	func_171(-618620429);
}

bool func_174(int iParam0)
{
	iVar0 = func_466(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_175(int iParam0)
{
	if (!func_4(iParam0))
	{
		return;
	}
	if (!func_49(iParam0))
	{
		return;
	}
	func_31(iParam0, 2);
}

bool func_176(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_178(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_84(iParam0))
	{
		return false;
	}
	return func_49((*Global_1347702)[iParam0]->f_15);
}

bool func_179(int iParam0)
{
	return func_263(iParam0) == 2;
}

void func_180()
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_395())
	{
		return;
	}
	func_467(&(Global_40.f_40));
}

void func_181()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			Global_40.f_11029[iVar0]->f_1 = { _0x1e8a921112891651((*Global_1425371)[iVar0]->f_1) };
			Global_40.f_11029[iVar0]->f_4 = _0x67995318f5faa496((*Global_1425371)[iVar0]->f_1);
		}
		iVar0++;
	}
}

bool func_182()
{
	return !func_468(Global_1310720->f_1);
}

void func_183(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_184()
{
	return Global_40.f_4283.f_1;
}

int func_185()
{
	return Global_40.f_4283.f_4;
}

void func_186(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_469())
	{
		fVar0 = func_470(vParam0, Global_40.f_6);
	}
	if (func_471(33554432))
	{
		if (!func_472(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_470(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_187(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_188()
{
	if (!func_473(&Global_1935630, 8192))
	{
		return;
	}
	if (func_57(32768))
	{
		return;
	}
	func_94(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_474(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_474(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_474(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_474(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_474(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_474(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_474(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_474(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_474(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_475(10f, to_float(func_474(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_475(5f, to_float(func_474(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_475(25f, to_float(func_476(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_475(1f, to_float(func_476(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_475(6f, to_float(func_476(64058978)))));
	fVar0 = (fVar0 + (3f * func_475(1f, to_float(func_476(795577402)))));
	iVar1 = func_477();
	fVar0 = (fVar0 + (0.1111111f * func_475(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_475(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_475(to_float(20), to_float(func_479()))));
	if (func_480(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_480(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_480(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_480(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_480(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_478(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_475(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_475(5f, to_float(func_476(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_475(5f, to_float(func_474(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_481(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_481(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_481(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_481(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_481(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_481(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_482(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_475((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_475(1f, to_float(func_483(-2116919750)))));
	fVar5 = to_float(func_484());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_475(5f, to_float(func_476(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_475(1f, to_float(func_476(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_475(1f, to_float(func_476(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_475(1f, to_float(func_476(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_475(1f, to_float(func_474(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_475(1f, to_float(func_474(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_475(1f, to_float(func_474(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_475(1f, to_float(func_474(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_475(1f, to_float(func_474(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_475(1f, to_float(func_474(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_475(1f, to_float(func_474(978382515, 1015970717)))));
	Var6 = { func_270(1215094015) };
	fVar8 = func_485(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_4(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_4(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_169(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_81(Global_1898330[iVar61]);
				}
				else
				{
					func_72(iVar61, 0);
					if (func_17(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_333(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_333((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										_0x51ec204a6e5b5a1a(func_333(&Global_1898437), &iVar9);
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

int func_189(vector3 vParam0)
{
	iVar0 = func_486(vParam0, 0f, 0f, 0, 2);
	return func_486(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_190(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_191(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_66() - fParam1);
	func_487(uParam0, 1);
	func_488(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_192(bool bParam0, bool bParam1, bool bParam2)
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

bool func_193(int iParam0, int iParam1)
{
	iVar0 = func_489(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_490(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	if (func_491(iParam0))
	{
		return true;
	}
	func_492(iParam0);
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_7))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_7);
	}
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_8))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_8);
	}
	Global_1392915->f_121[iVar0]->f_1 = 0;
	func_493(iVar0);
	iVar2 = func_135((*Global_1392915)[iVar0]->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_81((*Global_1392915)[iVar0]->f_4);
		}
		if (does_blip_exist(Global_1898346[iVar2]))
		{
			remove_blip((*Global_1898346)[iVar2]);
		}
		func_494(iVar2, 0);
		return true;
	}
	return false;
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_195(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_196(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_97(iParam0);
	*uParam1 = func_231(iParam0);
	*uParam2 = func_105(iParam0);
}

int func_197(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_198(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_338(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

bool func_199()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_200(int iParam0)
{
	func_495(1);
}

bool func_201(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

int func_202(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_57(32768))
	{
		return 0;
	}
	iVar0 = func_56();
	if ((bParam4 && func_110(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_110(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_199())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_496(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_242((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_497()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_242((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_497()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_242((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_198(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_77((*Global_1835011)[iParam0], 2))
			{
				if (func_338(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_339(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_113(iParam0));
				}
			}
			else if (func_338(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_339(iParam0), func_498(iParam0), func_499(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_500(iParam0), func_501(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_338(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_502(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_339(iParam0));
				bVar2 = true;
			}
		}
		else if (func_503(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_113(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_113(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_113(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_338(iParam0))
			{
				func_494(iParam2, 4194304);
			}
			else
			{
				func_205(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_27, 63, iParam0);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_27, (*Global_1835011)[iParam0]->f_26, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_27, &((*Global_1835011)[iParam0]->f_39));
		}
		if (!func_110(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_503(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_504(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_503(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_77((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_227(Global_40.f_4283);
	if (func_61(iVar4) && func_228((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_505(iVar4);
	}
	if (func_506(iParam0, bVar5, iVar4))
	{
		func_507((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_508(579))
	{
		func_509(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_110(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_110(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_497()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_510(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_198(iParam0, iVar0) || (fParam1 >= (func_511(iParam0) * func_511(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_512(&cVar7, 10000, 0, 0, 0, 1);
			func_504(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

bool func_203(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

bool func_204(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_206((*Global_1835011)[iParam0]->f_1);
}

void func_205(int iParam0, int iParam1)
{
	if (!func_195(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

bool func_206(int iParam0)
{
	iVar0 = func_263(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_207(int iParam0)
{
	set_this_script_can_remove_blips_created_by_any_script(true);
	if (does_blip_exist(Global_1392626[iParam0]))
	{
		func_513(&((*Global_1392626)[iParam0]->f_10));
		remove_blip((*Global_1392626)[iParam0]);
	}
	if (does_blip_exist((*Global_1392626)[iParam0]->f_1))
	{
		func_513(&((*Global_1392626)[iParam0]->f_10));
		remove_blip(&((*Global_1392626)[iParam0]->f_1));
	}
}

void func_208(int iParam0)
{
	if (_does_volume_exist((*Global_1392626)[iParam0]->f_30))
	{
		func_514((*Global_1392626)[iParam0]->f_30);
		_delete_volume((*Global_1392626)[iParam0]->f_30);
	}
	if (_does_volume_exist((*Global_1392626)[iParam0]->f_31))
	{
		func_514((*Global_1392626)[iParam0]->f_31);
		_delete_volume((*Global_1392626)[iParam0]->f_31);
	}
	if (iParam0 == 4)
	{
		func_515(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_209(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(int iParam0, bool bParam1, int iParam2)
{
	if (!func_4(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_206(iParam0) && !func_49(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_333(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_206(iParam0))
	{
		iParam2 = -1;
	}
	if (func_169(iParam0) == 3 || (func_169(iParam0) == 1 && _0x01f4d242765c6b24(func_333(iParam0))))
	{
		func_334(func_17(iParam0), func_333(iParam0), iParam2);
		if ((!func_4(Global_1572864->f_8) && !func_230(0, 1, 0)) && !func_473(&Global_1935630, 32768))
		{
			iVar0 = func_163(iParam0);
			if (iVar0 != -1)
			{
				func_285(0);
			}
			else if (func_17(iParam0) == 8)
			{
				iVar0 = func_286();
				if (iVar0 != -1)
				{
					func_285(0);
				}
			}
		}
	}
	func_31(iParam0, 0);
	if (func_79(0) == iParam0)
	{
		func_15(1);
		func_268(0);
		func_337(1);
	}
	func_284(iParam0, 1);
	func_265(iParam0);
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_215(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_516(&((*Global_1392626)[iParam0]->f_10), iParam1);
	func_516(&((*Global_1392626)[iParam0]->f_10), 2);
	func_212(&((*Global_1392626)[iParam0]->f_8), 1);
}

void func_216(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_517(iParam0, 4))
	{
		bVar0 = does_blip_exist(Global_1392626[iParam0]);
	}
	else
	{
		bVar0 = does_blip_exist((*Global_1392626)[iParam0]->f_1);
	}
	if ((*Global_1392626)[iParam0]->f_9 & 4096 != 0)
	{
		if (bVar0)
		{
			return;
		}
	}
	if (func_517(iParam0, 4))
	{
		if (!bVar0)
		{
			func_518(iParam0, (*Global_1392626)[iParam0], (*Global_1392626)[iParam0]->f_24);
		}
		_blip_set_modifier(Global_1392626[iParam0], 724623647);
	}
	else
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bVar0)
		{
			remove_blip(&((*Global_1392626)[iParam0]->f_1));
		}
		func_518(iParam0, &((*Global_1392626)[iParam0]->f_1), (*Global_1392626)[iParam0]->f_27);
		_blip_set_modifier((*Global_1392626)[iParam0]->f_1, 724623647);
	}
	func_519(&((*Global_1392626)[iParam0]->f_9), 4096);
}

void func_217(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_514((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_219(int iParam0)
{
	if (func_520(iParam0, &iVar1, &iVar0))
	{
		if (func_521(iVar1, iVar0, 1))
		{
			func_522(iVar1, iVar0);
		}
	}
}

void func_220(var uParam0)
{
	*uParam0 = 0;
}

void func_221(int iParam0)
{
	if (func_523(179) || func_523(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_200(1);
			}
		}
	}
	if (func_524(179))
	{
		func_525(179);
	}
	if (func_524(180))
	{
		func_525(180);
	}
}

bool func_222(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_67(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_223(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_224(int iParam0, int iParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	func_526(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_526(&((*Global_1347702)[iParam0]->f_14), 2);
	func_527(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_89(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_84(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

Vector3 func_225(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_528(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_226(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_221(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_530(iParam0, func_529(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_530(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_530(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_177(&((*Global_1347702)[iParam0]->f_13), 4096);
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_228(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_0xbd62d98799a3daf0(&(Global_36308[iParam0]), iParam1);
		}
	}
}

bool func_230(int iParam0, bool bParam1, bool bParam2)
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
		if (func_531())
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
		iVar0 = func_98(&(Global_1898164->f_1[0]));
		if (func_84(iVar0) && func_119((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_4(&(Global_1898164->f_1[0])))
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

int func_231(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_232(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_233(bool bParam0)
{
	if (func_56() == -1)
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

void func_234(bool bParam0, int iParam1, bool bParam2)
{
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_14(1);
	func_13(0, 0, 1, 0);
	if ((iParam1 == -1 && get_hash_of_this_script_name() != 27496334) && func_532(64))
	{
		force_cleanup(2);
	}
	if (iParam1 == -1)
	{
		_uilog_clear_all_entries();
		if (bParam2)
		{
			_0x7a1bd123e5cdb6e5();
			func_533();
			clear_bit(&(Global_1934765->f_301), 1);
		}
	}
	if (iParam1 == -1)
	{
		func_534();
		func_535();
	}
	func_536(bParam0, iParam1);
	func_537();
	func_30(1, 0);
	func_538(iParam1);
	func_539(iParam1);
	func_540();
	func_541(iParam1);
	func_542();
	func_543();
	func_544();
	func_545();
	func_546(1, 16);
	func_547();
	func_548(&(Global_1934765->f_402));
	func_549();
	func_550(1);
	_display_hud_component(-1679307491);
	Global_1879534->f_6 = 1;
	Global_1879534->f_7 = 0;
	func_14(0);
}

int func_235()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (&Global_1357549->f_1252[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_236(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_1911)
	{
		if (&Global_1879534->f_1911[iVar0] == 1677774865)
		{
			if (Global_1879534->f_1911[iVar0]->f_2 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_237(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7222)
	{
		if (iParam0 >= &Global_1879534->f_7222[iVar0] && iParam0 <= Global_1879534->f_7222[iVar0]->f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_238(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_1911)
	{
		if (&Global_1879534->f_1911[iVar0] == -964850613)
		{
			if (Global_1879534->f_1911[iVar0]->f_2 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_239(int iParam0)
{
	if (network_is_game_in_progress())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534->f_211[iParam0]->f_1;
	iVar1 = &Global_1879534->f_211[iParam0];
	if (is_bit_set(iVar0, 0))
	{
		set_clock_time(func_262(iVar1), get_clock_minutes(), get_clock_seconds());
	}
	if (is_bit_set(iVar0, 1))
	{
		set_clock_time(get_clock_hours(), func_551(iVar1), get_clock_seconds());
	}
	if (is_bit_set(iVar0, 2))
	{
		set_clock_time(get_clock_hours(), get_clock_minutes(), func_552(iVar1));
	}
	if (is_bit_set(iVar0, 3))
	{
		set_clock_date(func_553(iVar1), get_clock_month(), get_clock_year());
	}
	if (is_bit_set(iVar0, 4))
	{
		set_clock_date(get_clock_day_of_month(), func_554(iVar1), get_clock_year());
	}
	if (is_bit_set(iVar0, 5))
	{
		set_clock_date(get_clock_day_of_month(), get_clock_month(), func_555(iVar1));
	}
	return -2;
}

void func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return;
		default:
			break;
	}
	if (!is_bit_set(&(Global_1879534->f_7301.f_2[iParam0]), 1))
	{
		return;
	}
	if (is_bit_set(&(Global_1879534->f_7301.f_2[iParam0]), 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_1879534->f_112[iParam0] = -15;
		Global_1879534->f_46[iParam0] = 0;
		Global_1879534->f_7301.f_2[iParam0]->f_3 = -15;
		Global_1879534->f_7301.f_2[iParam0]->f_1++;
		return;
	}
	iVar0 = Global_1879534->f_7301.f_2[iParam0]->f_1;
	iVar1 = &Global_1879534->f_7222[iParam0];
	iVar2 = Global_1879534->f_7222[iParam0]->f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (&Global_1879534->f_1911[iVar3] == 531432813)
		{
			iVar4 = Global_1879534->f_1911[iVar3]->f_2;
			iVar5 = &Global_1879534->f_211[iVar4];
			if (iVar5 == iParam1)
			{
				Global_1879534->f_7301.f_2[iParam0]->f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

int func_241(int iParam0, int iParam1)
{
	iVar0 = -1;
	iVar1 = &Global_1879534->f_1911[iParam1];
	iVar2 = Global_1879534->f_1911[iParam1]->f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_556(iVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_557(iVar2);
			break;
		case 1909997983:
			set_bit(Global_1879534->f_7301.f_2[iParam0], 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_558(iVar2);
			break;
		case -217347738:
			iVar0 = func_559(iVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_560(iVar2);
			break;
		case 1984622930:
			iVar0 = func_561(iVar2);
			break;
		case -661286798:
			iVar0 = func_562(iVar2);
			break;
		case -1532130030:
			iVar0 = func_563(iVar2);
			break;
		case 1174602905:
			iVar0 = func_564(iVar2);
			break;
		case 1111033820:
			iVar0 = func_565(iVar2);
			break;
		case 1986927063:
			iVar0 = func_566(iVar2);
			break;
		case -1982716178:
			iVar0 = func_567(iVar2);
			break;
		case -964850613:
			iVar0 = func_568(iVar2);
			break;
		case -1913176419:
			iVar0 = func_239(iVar2);
			break;
		case 1210875743:
			iVar0 = func_569(iParam0, iVar2);
			break;
		case 427205337:
			iVar0 = func_570(iParam0, iVar2);
			break;
		case 712880499:
			iVar0 = func_571(iParam0, iVar2);
			break;
		case -1664179412:
			iVar0 = func_572(iParam0, iVar2);
			break;
		case 770100737:
			iVar0 = func_573(iVar2);
			break;
		case 939785963:
			iVar0 = func_574(iVar2);
			break;
		case -2146402779:
			iVar0 = func_575(iVar2);
			break;
		case -1785731347:
			iVar0 = func_576(iVar2);
			break;
		case -2093459088:
			iVar0 = func_577(iParam0, iVar2);
			break;
		case -868169264:
			iVar0 = func_578(iParam0, iVar2);
			break;
		case 566451265:
			iVar0 = func_579(iVar2);
			break;
		case -115271859:
			iVar0 = func_580(iVar2);
			break;
		case 2021594245:
			iVar0 = func_581(iVar2);
			break;
		case -806419157:
			iVar0 = func_582(iVar2);
			break;
		case -1110793538:
			iVar0 = func_583(iVar2);
			break;
		case 2088328892:
			iVar0 = func_584(iVar2);
			break;
		case -1535636242:
			iVar0 = func_585(iVar2);
			break;
		case 1509183597:
			iVar0 = func_586(iVar2);
			break;
		case 1281917784:
			iVar0 = func_587(iParam0, iVar2);
			break;
		default:
			if (!func_588(iVar1, iVar2, &iVar0))
			{
				iVar0 = -2;
			}
			break;
	}
	if (!is_bit_set(&(Global_1879534->f_7301.f_2[iParam0]), 2))
	{
		if (iVar0 != -1)
		{
			Global_1879534->f_1 = 1;
			Global_1879534->f_1910 = 1;
		}
		func_240(iParam0, iVar0);
	}
	return iVar0;
}

bool func_242(int iParam0, bool bParam1)
{
	switch (func_263(iParam0))
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

char[] func_243(int iParam0)
{
	if (!func_4(iParam0))
	{
		return cVar0;
	}
	switch (func_17(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_18(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_98(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_331(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_244(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

void func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_214(iVar0))
			{
				return;
			}
			func_589(iVar0, 0, 0);
			break;
		case 1:
		case 2:
			break;
		default:
			break;
	}
}

char[] func_246(int iParam0)
{
	if (!func_73(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_247(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	while (iVar0 > -1)
	{
		if (Global_1347702[iVar0] != iParam0)
		{
			if (Global_1347702[iVar0] == -1)
			{
			}
			return;
		}
		if (func_242((*Global_1347702)[iVar0]->f_15, 1))
		{
			return;
		}
		func_120(iVar0, 0, 0, 1, 0, 1, 0);
		_0x748c5f51a18cb8f0(0);
		func_87(iVar0, 1, 1, 1, 32);
		_0x748c5f51a18cb8f0(1);
		iVar0 = (iVar0 - 1);
	}
}

bool func_248(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_242((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_249(int iParam0)
{
	if (!func_590(iParam0))
	{
		return false;
	}
	return &(Global_1327590->f_23[iParam0]);
}

void func_250(int iParam0, bool bParam1)
{
	if (!func_590(iParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	Global_32074.f_4[iParam0]->f_3 = bParam1;
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_252(var uParam0, var uParam1)
{
	if (func_56() != -1)
	{
		uVar0 = &Global_36638.f_1444[*uParam0];
		set_bit(&uVar0, *uParam1);
		Global_36638.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*uParam0];
	set_bit(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_253(int iParam0)
{
	if (iParam0 == 11966224)
	{
		Global_40.f_7729 = 61;
		Global_1905941 = 61;
	}
	Global_1935630->f_2 = iParam0;
	func_591(iParam0, 999);
	return true;
}

int func_254()
{
	if (&Global_1835009)
	{
		return 0;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		Global_40.f_39 = Global_1935630->f_2;
		return 0;
	}
	if (is_entity_dead(Global_35))
	{
	}
	iVar1 = get_entity_model(Global_35);
	if (Global_1935630->f_2 == 0)
	{
		return 1;
	}
	if (Global_1935630->f_2 == Global_40.f_39 && iVar1 == Global_40.f_39)
	{
		Global_40.f_39 = Global_1935630->f_2;
		return 1;
	}
	if (is_player_teleport_active())
	{
		return 0;
	}
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_script_task_status(Global_35, 501393341, false);
		if (iVar0 != 1 && iVar0 != 0)
		{
			task_dismount_animal(Global_35, 524288, 0, 0, 0, 0);
		}
		return 0;
	}
	else if (is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_script_task_status(Global_35, -828834893, false);
		if (iVar0 != 1 && iVar0 != 0)
		{
			task_leave_any_vehicle(Global_35, 0, 524288);
		}
		return 0;
	}
	request_model(Global_1935630->f_2, false);
	if (!has_model_loaded(Global_1935630->f_2))
	{
		return 0;
	}
	bVar2 = false;
	bVar3 = false;
	if (Global_1935630->f_2 == 11966224 && get_entity_model(Global_35) != 11966224)
	{
		bVar2 = true;
	}
	if (Global_1935630->f_2 == 225514697 && get_entity_model(Global_35) != 225514697)
	{
		bVar3 = true;
	}
	if (bVar2)
	{
		func_592();
	}
	func_593(bVar2);
	Var5 = 117;
	Var5.f_118 = 45;
	func_594(player_ped_id(), &Var5);
	uVar169 = 29;
	func_595(player_ped_id(), &uVar169);
	func_596(Global_35);
	set_player_model(player_id(), Global_1935630->f_2, false);
	set_model_as_no_longer_needed(Global_1935630->f_2);
	Global_35 = get_player_ped(player_id());
	func_597(Global_35, Global_1935630->f_2);
	if (Global_40.f_39 != Global_1935630->f_2 && Global_40.f_39 != 0)
	{
		set_model_as_no_longer_needed(Global_40.f_39);
	}
	Global_40.f_39 = Global_1935630->f_2;
	func_591(Global_40.f_39, 999);
	if (bVar2)
	{
		func_598();
	}
	else if (bVar3)
	{
		func_599();
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return 1;
	}
	if (Global_26796.f_775 != Global_1946804->f_1)
	{
		func_600(0, 0, 0, 1);
		func_601();
		func_602();
		Global_26796.f_774 = 0;
		Global_26796.f_776 = 0;
		func_603(1);
		iVar199 = 0;
		while (iVar199 < 5)
		{
			Global_26796.f_26[iVar199] = 0;
			Global_26796.f_26[iVar199]->f_1 = 0;
			iVar200 = 0;
			while (iVar200 < 39)
			{
				vVar201.x = &Global_1946804->f_57[iVar200];
				*Global_26796.f_26[iVar199]->f_1.f_1[iVar200] = { vVar201 };
				iVar200++;
			}
			iVar199++;
		}
		iVar200 = 0;
		while (iVar200 < 39)
		{
			vVar201.x = &Global_1946804->f_57[iVar200];
			*Global_1946804->f_1497.f_1[iVar200] = { vVar201 };
			*Global_1946804->f_1378.f_1[iVar200] = { vVar201 };
			iVar200++;
		}
		switch (Global_1946804->f_1)
		{
			case -2125499975:
			case -449205311:
				func_604(&(Global_1946804->f_1378), 2020890174, &uVar4, 0, 0, 0, 0);
				Global_40.f_7729 = 6;
				break;
			case 1160113249:
				func_604(&(Global_1946804->f_1378), 1105329772, &uVar4, 0, 0, 0, 0);
				func_605();
				func_606(Global_35, 4, 4, 3, 0);
				func_607();
				func_608(Global_35, 3, 0);
				func_609();
				Global_40.f_7729 = 61;
				break;
		}
		func_610(-2124052603);
		func_611(-1, 1, 1, 0, 0, 0);
		func_612(-1, 1, 0, 6);
		if (!&Global_1905941 == Global_40.f_7729)
		{
			if (func_613(&Global_1905941, 32768))
			{
				Global_40.f_7729 = &Global_1905941;
				func_614(&Global_1905941, 32768);
			}
			else if (func_613(&Global_1905941, 1024))
			{
			}
			func_614(&Global_1905941, 1024);
		}
		func_615(1);
	}
	if (Global_40.f_7729 > -1 && Global_40.f_7729 <= 5)
	{
		if (func_616(2, Global_40.f_7729))
		{
			func_617(Global_35, Global_40.f_7729, 1, 0, 0);
		}
		else if (Global_1946804->f_1 == 1160113249)
		{
			func_617(Global_35, 62, 1, 0, 0);
		}
		else
		{
			func_617(Global_35, 6, 1, 0, 0);
		}
	}
	else if (func_619(func_618(Global_40.f_7729), Global_1946804->f_1))
	{
		func_617(Global_35, Global_40.f_7729, 1, 0, 0);
	}
	if (Global_1946804->f_1 == 1160113249)
	{
		func_620(func_618(Global_40.f_7729), 1, 1, 1);
	}
	func_621(Global_35, &Var5, 0);
	func_622(Global_35, &uVar169);
	set_current_ped_weapon(Global_35, func_623(256), false, 0, true, false);
	func_624();
	func_625(0);
	func_626(0, 1);
	func_627(0);
	func_628();
	func_629();
	func_630();
	Global_26796.f_775 = Global_1946804->f_1;
	return 1;
}

int func_255(int iParam0)
{
	func_631(iParam0);
	return -2;
}

int func_256(int iParam0)
{
	func_632(iParam0, 0);
	return -2;
}

int func_257(int iParam0)
{
	func_633(iParam0);
	return -2;
}

int func_258(int iParam0)
{
	func_634(iParam0);
	return -2;
}

int func_259(int iParam0)
{
	func_635(iParam0);
	return -2;
}

int func_260(int iParam0)
{
	func_636(iParam0);
	return -2;
}

int func_261()
{
	return &Global_1899516;
}

int func_262(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_263(int iParam0)
{
	if (!func_4(iParam0))
	{
		return -1;
	}
	return func_169(iParam0);
}

void func_264(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_265(int iParam0)
{
	return func_638(func_637(iParam0));
}

int func_266(bool bParam0, int iParam1)
{
	if (!bParam0 && func_174(373691918))
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
	func_268(bParam0);
	return 1;
}

void func_267()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_639(iVar17))
		{
			iVar18 = func_640(iVar17);
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
	func_641(&(Global_1359489->f_55));
	if (func_642(1777191912, 1))
	{
		func_643(1777191912, 1, 0);
	}
}

int func_268(bool bParam0)
{
	if (!bParam0 && func_174(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_269(int iParam0)
{
	if (!func_4(iParam0))
	{
		return;
	}
	func_645(iParam0, (func_644(iParam0) + shift_left(1, 16)));
}

struct<2> func_270(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_271()
{
	return func_646() > 0;
}

void func_272(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_647(-1032423150, iParam1);
			break;
		case 18:
			func_647(294066959, iParam1);
			func_647(-1925639563, iParam1);
			func_647(-378582304, iParam1);
			func_647(-338306437, iParam1);
			break;
		case 20:
			func_647(437270255, iParam1);
			break;
		case 2:
			func_647(-304000413, iParam1);
			func_647(-533612796, iParam1);
			func_647(48036954, iParam1);
			break;
		case 23:
			func_647(193108691, iParam1);
			func_647(491732588, iParam1);
			func_647(671962088, iParam1);
			func_648(1);
			break;
		case 16:
			func_647(-1836056650, iParam1);
			func_647(-754657922, iParam1);
			func_647(-1752355838, iParam1);
			func_647(-1375324510, iParam1);
			break;
		case 59:
			func_647(-514392105, iParam1);
			func_647(-822060246, iParam1);
			if (func_649(146))
			{
				func_647(1372748575, iParam1);
			}
			func_648(1);
			break;
		case 76:
			func_647(1991352213, iParam1);
			if (func_650() == 0)
			{
				func_647(1852488616, iParam1);
			}
			else
			{
				func_647(-9866350, iParam1);
			}
			break;
		case 44:
			func_647(863852599, iParam1);
			func_647(1228374935, iParam1);
			func_647(1517889050, iParam1);
			func_647(830657578, iParam1);
			func_647(1901354958, iParam1);
			break;
		case 46:
			func_647(-582805654, iParam1);
			func_647(250378940, iParam1);
			func_647(-2143265426, iParam1);
			break;
		case 17:
			func_647(-941494139, iParam1);
			func_647(1641489521, iParam1);
			break;
		case 19:
			func_647(-1829423531, iParam1);
			func_647(-1590504752, iParam1);
			func_647(1357221321, iParam1);
			break;
		case 21:
			func_647(-1037992610, iParam1);
			func_647(-1286414399, iParam1);
			func_648(0);
			break;
		case 15:
			func_647(-1014460309, iParam1);
			func_647(-1030502825, iParam1);
			break;
		case 33:
			func_647(479388090, iParam1);
			func_647(-1396342239, iParam1);
			func_647(-619618632, iParam1);
			break;
		case 34:
			func_647(1193561641, iParam1);
			break;
		case 64:
			func_647(1363960851, iParam1);
			break;
		case 60:
			func_647(-1232453926, iParam1);
			func_647(-882833584, iParam1);
			break;
		case 73:
			func_647(2023205767, iParam1);
			break;
		case 74:
			func_647(-2135286513, iParam1);
			if (func_650() == 0)
			{
				func_647(33799444, iParam1);
			}
			else
			{
				func_647(-161343203, iParam1);
			}
			break;
		case 8:
			func_647(841639693, iParam1);
			func_647(358952323, iParam1);
			break;
		case 36:
			func_647(852538149, iParam1);
			func_647(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_647(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_647(1116039310, iParam1);
			}
			break;
		case 27:
			func_647(107633428, iParam1);
			func_647(335902282, iParam1);
			func_647(575673055, iParam1);
			func_647(-425944207, iParam1);
			break;
		case 28:
			func_647(-1941530250, iParam1);
			func_647(1399269304, iParam1);
			func_647(1839684664, iParam1);
			func_647(923168503, iParam1);
			func_647(-1485078322, iParam1);
			break;
		case 29:
			func_647(574995900, iParam1);
			func_647(-1691275407, iParam1);
			func_647(-1725307861, iParam1);
			break;
		case 31:
			func_647(-2108383238, iParam1);
			func_647(-1321828931, iParam1);
			func_647(-1632118592, iParam1);
			func_647(334938948, iParam1);
			break;
		case 4:
			func_647(115823701, iParam1);
			func_647(-1896939736, iParam1);
			func_647(-1830746356, iParam1);
			func_647(-1235169781, iParam1);
			func_648(0);
			break;
		case 6:
			func_647(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_647(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_647(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_647(-384176140, iParam1);
			}
			break;
		case 25:
			func_647(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_647(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_647(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_647(-1374849484, iParam1);
			}
			break;
		case 48:
			func_647(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_647(217772674, iParam1);
			}
			else
			{
				func_647(2071798160, iParam1);
			}
			if (func_651(51))
			{
				func_647(-792802286, iParam1);
			}
			break;
		case 49:
			func_647(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_647(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_647(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_647(1402120602, iParam1);
			}
			break;
		case 58:
			func_647(-1661934591, iParam1);
			break;
		case 50:
			func_647(-1713759426, iParam1);
			break;
		case 52:
			func_647(-314799932, iParam1);
			func_647(-462260432, iParam1);
			func_647(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_647(345256028, iParam1);
				func_647(-1635084094, iParam1);
			}
			else
			{
				func_647(114267347, iParam1);
			}
			break;
		case 32:
			func_647(615304157, iParam1);
			break;
		case 47:
			func_647(415434835, iParam1);
			break;
		case 69:
			func_647(1373465877, iParam1);
			if (func_242((*Global_1347702)[9]->f_15, 1))
			{
				func_647(-2058273527, iParam1);
			}
			break;
		case 70:
			func_647(451334985, iParam1);
			if (func_650() == 0)
			{
				func_647(-224150200, iParam1);
			}
			else
			{
				func_647(289012628, iParam1);
			}
			break;
		case 71:
			if (func_650() == 0)
			{
				func_647(-41692120, iParam1);
			}
			else
			{
				func_647(1537840678, iParam1);
			}
			break;
		case 37:
			func_647(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_647(1842132550, iParam1);
			}
			else
			{
				func_647(-785735240, iParam1);
			}
			func_647(-1605690566, iParam1);
			break;
		case 13:
			func_647(-731367459, iParam1);
			func_647(224176585, iParam1);
			func_647(-14545580, iParam1);
			break;
		case 53:
			func_647(1095274522, iParam1);
			break;
		case 54:
			func_647(-572027988, iParam1);
			break;
		case 56:
			func_647(1339307101, iParam1);
			func_647(2102267732, iParam1);
			break;
		case 57:
			func_647(710102686, iParam1);
			break;
		case 22:
			func_647(-1754368482, iParam1);
			func_647(-2071408557, iParam1);
			break;
		case 12:
			func_647(-181334543, iParam1);
			break;
		case 0:
			func_647(-2134669864, iParam1);
			func_647(-548289709, iParam1);
			func_647(-911271922, iParam1);
			func_647(-604455775, iParam1);
			break;
		case 1:
			func_648(1);
			break;
		case 3:
			if (func_307())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_647(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_647(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

void func_273(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_647(-145926707, iParam1);
			func_647(-604922090, iParam1);
			func_647(-848690769, iParam1);
			break;
		case 1:
			func_647(-1477631591, iParam1);
			break;
		case 2:
			func_647(76112544, iParam1);
			break;
		case 9:
			func_647(1396404308, iParam1);
			func_647(-1357381228, iParam1);
			if (func_242((*Global_1835011)[69]->f_1, 1))
			{
				func_647(1902679064, iParam1);
			}
			else
			{
				func_647(-2146422425, iParam1);
			}
			break;
		case 22:
			func_647(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_647(-1934184559, iParam1);
				func_647(1281755988, iParam1);
			}
			else
			{
				func_647(-1745220872, iParam1);
				func_647(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_647(-1641504538, iParam1);
				func_647(-988014485, iParam1);
			}
			else if (func_649(26))
			{
				func_647(-343043950, iParam1);
				func_647(-640062214, iParam1);
			}
			else
			{
				func_647(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_647(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_647(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_647(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_647(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_647(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_647(1301690984, iParam1);
				}
			}
			else
			{
				func_647(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_647(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_647(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_647(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_647(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_647(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_647(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_647(-754570528, iParam1);
			}
			else
			{
				func_647(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_647(-2072125821, iParam1);
			}
			else
			{
				func_647(270040030, iParam1);
			}
			break;
		case 37:
			func_647(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_647(-505314737, iParam1);
				func_647(-1853052860, iParam1);
			}
			else
			{
				func_647(-1975624994, iParam1);
				func_647(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_647(1690231002, iParam1);
			}
			else
			{
				func_647(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_647(1225386280, iParam1);
			}
			else if (func_649(54))
			{
				func_647(-283235773, iParam1);
			}
			else
			{
				func_647(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_647(1355398007, iParam1);
			}
			else
			{
				func_647(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_647(574636806, iParam1);
			}
			else
			{
				func_647(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_647(821118338, iParam1);
			}
			else if (func_649(39))
			{
				func_647(846829260, iParam1);
			}
			else
			{
				func_647(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_329((*Global_1835011)[33]->f_1) == 1)
				{
					func_647(1422779093, iParam1);
				}
				else
				{
					func_647(-1769536986, iParam1);
				}
			}
			else
			{
				func_647(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_647(352134789, iParam1);
			}
			else if (func_649(43))
			{
				func_647(260723113, iParam1);
			}
			else
			{
				func_647(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_647(-457958799, iParam1);
			}
			else
			{
				func_647(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_649(41))
			{
				func_647(-546824600, iParam1);
			}
			else
			{
				func_647(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_647(1297261593, iParam1);
			}
			else
			{
				func_647(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_647(2068484886, iParam1);
			}
			else if (func_649(49))
			{
				func_647(-1489080639, iParam1);
				func_647(-2102244050, iParam1);
			}
			else
			{
				func_647(-1863040467, iParam1);
			}
			break;
		case 51:
			func_647(-2055943209, iParam1);
			break;
		case 58:
			if (func_242((*Global_1347702)[23]->f_15, 1))
			{
				func_647(1650066845, iParam1);
			}
			else
			{
				func_647(151370023, iParam1);
			}
			func_647(1426057961, iParam1);
			func_647(476379584, iParam1);
			break;
		case 59:
			func_647(-1638117866, iParam1);
			break;
		case 62:
			func_647(199541730, iParam1);
			break;
		case 63:
			func_647(1703485804, iParam1);
			func_647(-800449045, iParam1);
			break;
		case 65:
			func_647(-1678210868, iParam1);
			func_647(-1448238026, iParam1);
			func_647(-1200864845, iParam1);
			func_647(1473511536, iParam1);
			break;
		case 66:
			func_647(-1774490051, iParam1);
			func_647(-34645921, iParam1);
			func_647(174027075, iParam1);
			func_647(-1155999, iParam1);
			func_648(1);
			break;
		case 67:
			func_647(701612593, iParam1);
			func_647(-1069631343, iParam1);
			func_647(1673428882, iParam1);
			break;
		case 68:
			func_647(-739133286, iParam1);
			func_647(-2130089358, iParam1);
			func_647(2056190391, iParam1);
			func_647(1941753817, iParam1);
			func_648(0);
			break;
		case 70:
			func_647(-1217555753, iParam1);
			break;
		case 71:
			func_647(697048821, iParam1);
			break;
		case 73:
			func_647(-553148661, iParam1);
			break;
		case 75:
			func_647(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_647(1414263863, iParam1);
			}
			else
			{
				func_647(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_647(1835465936, iParam1);
				func_647(523715611, iParam1);
			}
			else if (func_649(78))
			{
				func_647(1420338873, iParam1);
			}
			else
			{
				func_647(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_647(10180941, iParam1);
			}
			else if (func_649(79))
			{
				func_647(768420635, iParam1);
			}
			else
			{
				func_647(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_647(-383601523, iParam1);
			}
			else
			{
				func_647(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_647(1606472408, iParam1);
			}
			else
			{
				func_647(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_647(-203571927, iParam1);
			}
			else
			{
				func_647(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_647(729886222, iParam1);
			}
			else
			{
				func_647(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_647(-714816362, iParam1);
			}
			else
			{
				func_647(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_647(-932932179, iParam1);
				func_647(-1458537240, iParam1);
			}
			else
			{
				func_647(-1764383885, iParam1);
				func_647(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_647(1741466706, iParam1);
			}
			else
			{
				func_647(1405815775, iParam1);
			}
			break;
		case 94:
			func_647(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_647(1905280979, iParam1);
			}
			else
			{
				func_647(-1966245299, iParam1);
			}
			func_647(721468880, iParam1);
			break;
		case 99:
			func_647(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_647(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_647(-1117781095, iParam1);
				}
				else
				{
					func_647(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_647(141494548, iParam1);
			}
			else
			{
				func_647(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_647(-369525697, iParam1);
			}
			else if (func_649(101))
			{
				func_647(1595015219, iParam1);
			}
			else
			{
				func_647(-321486961, iParam1);
			}
			break;
		case 103:
			func_647(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_647(793460477, iParam1);
				func_647(-1610242176, iParam1);
			}
			else if (func_649(103))
			{
				func_647(1830897187, iParam1);
			}
			else
			{
				func_647(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_647(1528309077, iParam1);
			}
			else if (func_649(104))
			{
				func_647(1864966105, iParam1);
			}
			else
			{
				func_647(-103336013, iParam1);
			}
			break;
		case 108:
			func_647(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_647(-1123227713, iParam1);
				func_647(-889574341, iParam1);
			}
			else
			{
				func_647(2065385917, iParam1);
				func_647(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_647(-887421691, iParam1);
			}
			else if (func_649(109))
			{
				func_647(-1318117949, iParam1);
			}
			else
			{
				func_647(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_647(284822762, iParam1);
				}
				else
				{
					func_647(-1425017554, iParam1);
				}
			}
			else if (func_649(110))
			{
				if (&Global_1357515 == 0)
				{
					func_647(553087292, iParam1);
				}
				else
				{
					func_647(-1766870331, iParam1);
					func_647(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_647(-1980598735, iParam1);
			}
			else
			{
				func_647(-442732098, iParam1);
				func_647(1955756409, iParam1);
			}
			break;
		case 115:
			func_647(394303528, iParam1);
			func_647(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_647(1182403394, iParam1);
			}
			else
			{
				func_647(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_647(924445424, iParam1);
			}
			else
			{
				func_647(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_647(430755273, iParam1);
				func_647(-1473879802, iParam1);
			}
			else
			{
				func_647(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_647(73885747, iParam1);
			}
			else if (func_649(117))
			{
				func_647(1559707913, iParam1);
			}
			else
			{
				func_647(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_647(-2103887972, iParam1);
			}
			else if (func_649(118))
			{
				func_647(-435828462, iParam1);
			}
			else
			{
				func_647(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_647(2054486196, iParam1);
			}
			else
			{
				func_647(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_647(-570086056, iParam1);
			}
			else if (func_649(121))
			{
				func_647(32337856, iParam1);
			}
			else
			{
				func_647(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_647(813493663, iParam1);
			}
			else if (func_649(122))
			{
				func_647(-2132763590, iParam1);
			}
			else
			{
				func_647(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_647(-66240572, iParam1);
				func_647(1563075046, iParam1);
			}
			else
			{
				func_647(-787011772, iParam1);
				func_647(-1523377438, iParam1);
			}
			break;
		case 127:
			func_647(61020800, iParam1);
			break;
		case 129:
			func_647(428985222, iParam1);
			break;
		case 131:
			func_647(-1393851036, iParam1);
			break;
		case 133:
			func_647(1559531342, iParam1);
			break;
		case 134:
			func_647(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_647(-1374407408, iParam1);
				}
				else
				{
					func_647(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_647(-472672138, iParam1);
				}
				else
				{
					func_647(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_647(-1678710489, iParam1);
			}
			else
			{
				func_647(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_647(1717582460, iParam1);
			}
			else
			{
				func_647(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_647(1568112362, iParam1);
				func_647(1388317526, iParam1);
			}
			else if (func_649(136))
			{
				func_647(-1597534828, iParam1);
				func_647(-1207918353, iParam1);
			}
			else
			{
				func_647(-1940891082, iParam1);
				func_647(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_647(448334530, iParam1);
				func_647(2145375502, iParam1);
			}
			else
			{
				func_647(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_647(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_647(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_647(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_647(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_647(-66616327, iParam1);
			}
			else
			{
				func_647(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_647(1862916706, iParam1);
			}
			else if (func_649(147))
			{
				func_647(675105199, iParam1);
			}
			else
			{
				func_647(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_647(174409701, iParam1);
			}
			else if (func_649(148))
			{
				func_647(-1730895475, iParam1);
			}
			else
			{
				func_647(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_647(1295237052, iParam1);
			}
			else if (func_649(149))
			{
				func_647(-788577684, iParam1);
			}
			else
			{
				func_647(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_274(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_17(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_18(iParam0);
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
					if (func_329((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_98(iParam0);
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
			iVar3 = func_98(iParam0);
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

int func_275(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_652(iParam0);
	iVar3 = func_653(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_59();
				func_303(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_654(iParam0, 1);
			if (func_655(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_656(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_657(1, iParam0);
				}
				else
				{
					func_658(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_276(int iParam0, int iParam1)
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

int func_277(int iParam0, int iParam1, int iParam2)
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

void func_278(bool bParam0)
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

void func_279(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_659(iParam0, iParam1, bParam2);
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

int func_280(int iParam0, int iParam1)
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

bool func_281(int iParam0)
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

void func_282(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_56() != -1)
	{
		return;
	}
	if ((Global_36616 && func_660(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_661(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_662(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_663(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_662(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_284(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (func_79(0) != iParam0)
	{
		return;
	}
	if (func_664(iParam0))
	{
		if (bParam1)
		{
			func_665(-525676072);
		}
		else
		{
			func_666(-525676072);
		}
	}
}

void func_285(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_667(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_668();
		Global_1898077->f_9 = func_669(Global_1894899->f_2);
		func_670(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_286()
{
	if (!func_242((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_242((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_242((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_242((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_242((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_242((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_242((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_287()
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_395())
	{
		return false;
	}
	if (!func_242((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_242((*Global_1835011)[2]->f_1, 1) && func_242((*Global_1347702)[120]->f_15, 1)) && !func_242((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_242((*Global_1835011)[37]->f_1, 1) && !func_242((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_242((*Global_1835011)[57]->f_1, 1) && !func_242((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_242((*Global_1835011)[26]->f_1, 1) && !func_242((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_242((*Global_1835011)[62]->f_1, 1) && func_242((*Global_1835011)[63]->f_1, 1)) && !func_242((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_242((*Global_1835011)[75]->f_1, 1) && !func_242((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_242((*Global_1835011)[76]->f_1, 1) && !func_242((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_242((*Global_1835011)[40]->f_1, 1) && func_242((*Global_1835011)[41]->f_1, 1)) && !func_242((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_242((*Global_1835011)[62]->f_1, 1) && func_242((*Global_1835011)[63]->f_1, 1)) && !func_242((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_242((*Global_1835011)[65]->f_1, 1) && func_242((*Global_1835011)[66]->f_1, 1)) && !func_242((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_288()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_671(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

void func_289(int iParam0)
{
	if (func_357(iParam0, 1989861793))
	{
		iVar0 = func_672(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_673(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_674(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_675(iVar14, iVar1);
					if (iVar15 != iParam0 && func_138(iVar15, 0))
					{
						if (func_676(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_677(iVar1);
				if (bVar13)
				{
					func_678(iParam0);
				}
				else
				{
					func_295(306, 0);
				}
			}
		}
	}
}

void func_290()
{
	if (func_56() != -1)
	{
		return;
	}
	func_679();
	func_680();
	func_681();
	func_682();
	func_683();
	func_684();
	func_685();
}

void func_291(int iParam0)
{
	func_34(iParam0, 1, 1, -142743235, 1);
	if (func_686(iParam0))
	{
		func_687(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_689(func_688(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_610(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_690() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_604(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_604(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_691(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_691(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_691(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_691(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_691(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_691(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_691(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_691(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_691(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_692(iVar8, iVar0))
				{
					func_693(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_692(iVar8, iVar0))
		{
			func_693(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_292()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_692(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_690() == -2125499975 || func_690() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_693(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_693(&vVar2, iVar5, iVar0);
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

void func_293()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_671(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_294(int iParam0, bool bParam1)
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
			if ((func_242((*Global_1835011)[59]->f_1, 1) || func_242((*Global_1347702)[1]->f_15, 1)) || func_206((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_642(403634348, 1))
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

void func_295(int iParam0, bool bParam1)
{
	func_251(iParam0, &iVar0, &iVar1);
	if (!func_694(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_695(iVar0, iVar1);
}

void func_296(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_689(iParam0, 1);
	func_696(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_696(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_697(17, iParam0, 0, 0, 0);
		}
	}
	if (func_56() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_696(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_696(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_297()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_671(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_298()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_671(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_299(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_374(iParam1, 1, 0) };
		iParam3 = func_698(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_699(iParam3);
	return func_429(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_300()
{
	return _unlock_is_unlocked(99890643);
}

void func_301(int iParam0)
{
	if (!func_154(iParam0))
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

bool func_302(int iParam0, int iParam1)
{
	if (!func_700(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_701(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_702(Global_40.f_9910[iParam1], 4);
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_555(*iParam0);
	iVar1 = func_554(*iParam0);
	iVar2 = func_553(*iParam0);
	iVar3 = func_262(*iParam0);
	iVar4 = func_551(*iParam0);
	iVar5 = func_552(*iParam0);
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
	iVar6 = func_703(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_703(iVar1, iVar0);
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
	func_704(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_304(int iParam0, int iParam1, bool bParam2)
{
	if (!func_700(iParam0))
	{
		return;
	}
	if (!func_705(iParam1))
	{
		return;
	}
	if (func_706(iParam1, 1))
	{
		return;
	}
	iVar0 = func_701(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_302(iParam0, -1))
	{
		return;
	}
	else
	{
		func_707(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_230(0, 0, 1))
		{
			func_336(0, 17);
		}
	}
}

void func_305()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_671(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_306()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_671(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_307()
{
	return _unlock_is_unlocked(-121456797);
}

void func_308()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_671(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_309()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_671(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_310()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_671(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_311()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_671(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_312()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_671(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_313()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_671(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_314(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_315(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

void func_316(int iParam0)
{
	if (func_57(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_366(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_366(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_317()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_671(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_318()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_671(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_319()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_671(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_320()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_671(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_321()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_671(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_322()
{
	if (func_708() > 1)
	{
		func_709();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_295(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_295(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_295(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_295(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_295(452, 1);
		}
	}
}

bool func_323(int iParam0)
{
	return func_710(iParam0, 4, 1);
}

void func_324(int iParam0)
{
	func_711(iParam0, 4, 1);
}

void func_325(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_270(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_326(int iParam0)
{
	if (func_57(32768))
	{
		return;
	}
	if (!func_4(iParam0))
	{
		return;
	}
	func_95(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_17(iParam0))
	{
		case 1:
			func_414(func_415(909007663, -587839005), 1);
			iVar0 = func_98(iParam0);
			func_414(func_270(-634848880), 1);
			switch (func_457(iVar0))
			{
				case 0:
					func_414(func_415(909007663, 1325140787), 1);
					break;
				case 1:
					func_414(func_415(909007663, 2101241783), 1);
					break;
				case 2:
					func_414(func_415(909007663, -1296936294), 1);
					break;
				case 3:
					func_414(func_415(909007663, -798388728), 1);
					break;
				case 4:
					func_414(func_415(909007663, -1787586531), 1);
					break;
				case 5:
					func_414(func_415(909007663, -1002834519), 1);
					break;
				case 6:
					func_414(func_415(909007663, -50600144), 1);
					break;
				case 7:
					func_414(func_415(909007663, -348503123), 1);
					break;
				case 8:
					func_414(func_415(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_414(func_415(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_414(func_415(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_98(iParam0);
			if (func_119((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_414(func_270(-634848880), 1);
			}
			if (func_119((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_119((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_414(func_415(909007663, -587839005), 1);
				}
				else
				{
					func_414(func_415(909007663, -2049243343), 1);
				}
			}
			if (func_119((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_458(iVar1))
				{
					case 0:
						func_414(func_415(909007663, 1325140787), 1);
						break;
					case 1:
						func_414(func_415(909007663, 2101241783), 1);
						break;
					case 2:
						func_414(func_415(909007663, -1296936294), 1);
						break;
					case 3:
						func_414(func_415(909007663, -798388728), 1);
						break;
					case 4:
						func_414(func_415(909007663, -1787586531), 1);
						break;
					case 5:
						func_414(func_415(909007663, -1002834519), 1);
						break;
					case 6:
						func_414(func_415(909007663, -50600144), 1);
						break;
					case 7:
						func_414(func_415(909007663, -348503123), 1);
						break;
					case 8:
						func_414(func_415(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_414(func_415(909007663, 532323983), 1);
				}
			}
			else if (func_119((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_119((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_119((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_414(func_415(909007663, 551192206), 1);
				}
				else
				{
					func_414(func_415(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_327()
{
	if (func_56() != -1)
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
	if (!func_532(64))
	{
		return;
	}
	else if (func_473(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_230(0, 0, 1) || func_712()) || func_287())
	{
		return;
	}
	iVar0 = func_286();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_713(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_714(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_714(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_715(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_336(0, -1);
	}
	if (iVar2 > 0)
	{
		func_512("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_716(1, 0);
	Global_1956575->f_4 = 1;
}

void func_328(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_57(32768))
	{
		return;
	}
	func_717(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_718(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_329(int iParam0)
{
	if (!func_4(iParam0))
	{
		return -1;
	}
	return func_719(iParam0);
}

int func_330(int iParam0, int iParam1)
{
	if (!func_720(iParam0))
	{
		return 0;
	}
	if (!func_395())
	{
		return 0;
	}
	if (!func_721(iParam0, &iVar0, &iVar1))
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

int func_331(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_722())
	{
		iVar2 = func_722();
	}
	iVar5 = func_723(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_96(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_96(iVar6) == 0)
			{
				return func_724(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_96(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_96(iVar6) == 0)
			{
				return func_724(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_724(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_725(1330954593, 0, -1);
		case 1:
			return func_725(1330954593, 0, -1);
		case 2:
			return func_725(1330954593, 0, -1) * 2;
		case 4:
			return func_725(1330954593, 0, -1);
		case 5:
			return func_725(1330954593, 0, -1);
		case 6:
			return func_725(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_725(1330954593, 0, -1) * 3;
		case 9:
			return func_725(1330954593, 0, -1) * 3;
		case 10:
			return func_725(1330954593, 0, -1) * 3;
		case 11:
			return func_725(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

void func_334(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_56() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_335(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_726();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_17(Global_1879514->f_1) == 1)
			{
				func_330(5, 1);
			}
			else if (func_17(Global_1879514->f_1) == 8 && (func_119((*Global_1347702)[func_98(Global_1879514->f_1)]->f_12, 1) || func_119((*Global_1347702)[func_98(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_330(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_336(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_55(&Global_0, 8);
	}
	if (!func_395() || func_56() != -1)
	{
		return;
	}
	func_55(&Global_0, 1);
}

void func_337(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_338(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_109((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_339(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_340(int iParam0)
{
	if (func_480(iParam0))
	{
		return 0;
	}
	if (func_176(iParam0, 0))
	{
		func_727(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_727(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_341(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 30:
			return true;
	}
	return false;
}

bool func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 6:
		case 7:
		case 8:
		case 10:
		case 15:
		case 16:
		case 18:
		case 29:
			return true;
	}
	return false;
}

void func_343(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_89(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_87(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_84(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

void func_344(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_345(int iParam0)
{
	func_347();
	if (!func_84(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0];
}

bool func_346(int iParam0)
{
	if (!does_entity_exist((*Global_1347702)[iParam0]->f_43))
	{
		return false;
	}
	else if (does_entity_exist((*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_43))
	{
		return false;
	}
	else if ((*Global_1347702)[iParam0]->f_28 != (*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_28)
	{
		return false;
	}
	else if (Global_1347702[iParam0] != Global_1347702[(*Global_1347702)[iParam0]->f_35])
	{
		return false;
	}
	else if (!func_728(iParam0))
	{
		return false;
	}
	fVar0 = vdist2(get_entity_coords((*Global_1347702)[iParam0]->f_43, false, false), func_225((*Global_1347702)[iParam0]->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return false;
	}
	return true;
}

void func_347()
{
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_729(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_84(iVar1) && Global_1347702[iVar1] == iVar0)
			{
				if (does_blip_exist((*Global_1347702)[iVar1]->f_37))
				{
					func_88(iVar1, 0);
					func_530(iVar1, func_225(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_348(int iParam0)
{
	if (func_119((*Global_1347702)[iParam0]->f_12, 4))
	{
		iVar0 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_730(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = get_hash_key("toast_log_blips");
	}
	if (func_119((*Global_1347702)[iParam0]->f_12, 67108864))
	{
		func_714("MISSION_COMPLETE", &((*Global_1347702)[iParam0]->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		_uilog_set_pending_details_id(1, func_731(iParam0));
		func_732("MISSION_COMPLETE", &((*Global_1347702)[iParam0]->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

void func_349(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_333(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_334(func_17(iParam0), func_333(iParam0), iVar0);
		if (func_57(32768))
		{
			iVar1 = func_17(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_331(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_726();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_49(iParam0))
	{
		func_213(iParam0, 0, 2);
	}
	else if (func_206(iParam0))
	{
		if (!func_169(iParam0) == 5 && !func_169(iParam0) == 6)
		{
			if (bParam1)
			{
				func_31(iParam0, 6);
			}
			else
			{
				func_31(iParam0, 5);
			}
			func_265(iParam0);
		}
	}
	switch (func_17(iParam0))
	{
		case 1:
			switch (func_98(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_98(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_350(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_733(iParam0);
	if (iVar0 == 1)
	{
		if (_uilog_is_entry_registered(iVar0, func_731(iParam0)))
		{
			_uilog_mark_mission_completed(func_731(iParam0));
		}
		func_734(iParam0, 4);
		func_734(iParam0, 8);
		return;
	}
	else if (func_119((*Global_1347702)[iParam0]->f_12, 4))
	{
		func_735(Global_1347702[iParam0]);
		func_736(iParam0);
		if (_uilog_is_entry_registered(iVar0, func_731(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_737(0, &cVar1, 0, 0, -1, -1);
			func_738(iParam0, &cVar1, cVar4, -1082130432);
			_uilog_set_entry_icon_texture(iVar0, func_731(iParam0), get_hash_key("TOAST_MEDAL_COLLECTABLE"), get_hash_key("hud_toasts"));
		}
		func_734(iParam0, 4);
		func_734(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_739(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_739(iParam0, 16))
	{
		bVar6 = true;
	}
	func_735(Global_1347702[iParam0]);
	func_736(iParam0);
	MemCopy(&cVar1, {(*Global_1347702)[iParam0]->f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (func_739(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (func_739(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (does_text_label_exist(&cVar1))
	{
		cVar4 = func_737(0, &cVar1, 0, 0, -1, -1);
		func_738(iParam0, &cVar1, cVar4, -1082130432);
		if (func_739(iParam0, 16) || bVar6)
		{
			func_740(iParam0, 1);
		}
		if (func_739(iParam0, 8) || bVar5)
		{
			func_741(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_737(0, &cVar1, 0, 0, -1, -1);
		func_738(iParam0, &cVar1, cVar4, -1082130432);
		func_741(iParam0, 1);
		if (func_739(iParam0, 16) || bVar6)
		{
			func_740(iParam0, 1);
		}
	}
}

bool func_351(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_352()
{
	return Global_1109400->f_245;
}

void func_353(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

int func_354(int iParam0)
{
	iVar0 = func_465(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_742(iVar0);
}

int func_355(int iParam0, int iParam1)
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
			func_743(iVar2);
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

void func_356()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_357(int iParam0, int iParam1)
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

void func_358(int iParam0, int iParam1, var uParam2)
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

bool func_359()
{
	return !&Global_1911774;
}

void func_360(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_361(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_362(int iParam0, int iParam1)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_363(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_364(int iParam0)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_365(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_366(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_744(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_367(int iParam0, int iParam1)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_139(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_101("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_102(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_154(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_104(iVar1);
				return true;
			}
			iVar3++;
		}
		func_104(iVar1);
	}
	return false;
}

int func_368(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_369(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_371(&Var0, func_370(0));
	}
	if (!func_372(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_104(iVar14);
	return uVar15;
}

struct<14> func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_370(bool bParam0)
{
	iVar0 = func_233(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_376(923904168, func_745(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_376(923904168, func_745(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_376(923904168, func_745(bParam0), -740156546, 0);
}

void func_371(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_372(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_233(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_373(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_746(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_747(*uParam1, &Var0, bParam6, 0))
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
	if (!func_147(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_233(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<5> func_374(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_745(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_144(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_376(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_370(bParam1) };
			if (bParam2 && func_748(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_749(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_749(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_750(iParam0, &Var5, 1728382685))
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
			Var0 = { func_751(bParam1) };
			switch (func_103(iParam0))
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
			if (func_752(iParam0, -1823706425))
			{
				Var0 = { func_376(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_752(iParam0, -1483207246))
			{
				Var0 = { func_376(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_747(Var0, &Var27, bParam1, 0))
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

bool func_375(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_746(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_147(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_233(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_376(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_138(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_233(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_377(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_56() == -1)
	{
		if (func_392(43))
		{
			if (func_357(iParam0, 412399755))
			{
				func_753(-1791518714);
				if (func_754() == 0)
				{
					func_336(0, 10);
					iVar0 = func_755(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_756(iParam0) < func_757(iParam0))
						{
							func_399(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_392(44))
		{
			if (func_357(iParam0, 709057512))
			{
				func_753(-2087881550);
				if (func_754() == 1)
				{
					func_336(0, 10);
					iVar0 = func_755(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_756(iParam0) < func_757(iParam0))
						{
							func_399(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_392(45))
		{
			if (func_357(iParam0, -1478961327))
			{
				func_753(1908068621);
				if (func_754() == 2)
				{
					func_336(0, 10);
					iVar0 = func_755(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_756(iParam0) < func_757(iParam0))
						{
							func_399(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_392(46))
		{
			if (func_357(iParam0, -1238404098))
			{
				func_753(1611247019);
				if (func_754() == 3)
				{
					func_336(0, 10);
					iVar0 = func_755(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_756(iParam0) < func_757(iParam0))
						{
							func_399(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_392(47))
		{
			if (func_357(iParam0, 1160548794))
			{
				func_753(1319635688);
				if (func_754() == 4)
				{
					func_336(0, 10);
					iVar0 = func_755(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_756(iParam0) < func_757(iParam0))
						{
							func_399(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_378(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_141(func_758(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_759(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_760(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_379(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_361(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_761(1, bVar1, 1, sVar2);
		func_762(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_162(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_435();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_162(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_162(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_380(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_763(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_101("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_102(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_154(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_763(iParam1, 512) && func_764(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_763(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_763(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_763(iParam1, 33554432)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_104(iVar1);
	}
	if (func_154(iVar0))
	{
	}
	else if (!func_763(iParam1, 512))
	{
		iParam1 |= 512;
		return func_380(uParam0, iParam1, iParam2);
	}
	else if (func_763(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_381(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_763(iParam1, 128);
	if (func_101("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_102(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_154(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_763(iParam1, 512) && func_764(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_383(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_763(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_763(iParam1, 4))) && (!func_383(Var4.f_4) || func_763(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_763(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_763(iParam1, 1048576)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_104(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_763(iParam1, 512) && !func_763(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_381(uParam0, iParam1, iParam2);
	}
	else if (func_763(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_383(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_384(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_56() == -1)
	{
		if (func_765(iParam0) && func_766(iParam0))
		{
			func_767(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_385(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_768(iParam0, iParam1);
	Var0 = { func_374(iParam0, 0, 1) };
	iVar5 = func_769(iParam0, &Var0, 0, 0);
	iVar6 = func_770(iParam0, 0);
	if ((iVar5 > 1 && !func_287()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_357(iParam0, -2051813666))
		{
			func_295(583, 1);
		}
		else
		{
			func_295(582, 0);
		}
	}
	if (func_771(iParam0, &Var0, *iParam1, 0, 0))
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

void func_386(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_672(iParam0, -949239683))
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

bool func_387(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_388(iParam0) != 0;
}

int func_388(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_772())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_773(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_389(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_390(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_772())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_389(iVar0))
		{
			if (func_141(func_773(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_391(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_774(48);
	func_336(0, -1);
}

bool func_392(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_242((*Global_1347702)[iParam0]->f_15, 1);
}

int func_393(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_394(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_395()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_396(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_242((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_397(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_84(iParam0))
	{
		return false;
	}
	return func_206((*Global_1347702)[iParam0]->f_15);
}

int func_398()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_141(func_775(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_399(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_395() && (func_397(38) || func_392(38)))
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
			if (func_395() && (func_397(39) || func_392(39)))
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
			iVar9 = func_776(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_395() && (func_397(41) || func_392(41)))
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
			if (func_395() && (func_397(49) || func_392(49)))
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
			iVar9 = func_776(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_777(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_778(iParam0, iVar13, iVar14))
	{
	}
	if (func_779(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_780(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_781(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_782(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_783(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_400(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_395() && (func_397(38) || func_392(38)))
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
			if (func_395() && (func_397(39) || func_392(39)))
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
			if (func_395() && (func_397(49) || func_392(49)))
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
		if (func_395() && (func_397(38) || func_392(38)))
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
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_714(_create_var_string(2, sVar0), _create_var_string(2, func_784(func_394(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_395() && (func_397(39) || func_392(39)))
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
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_395() && (func_397(49) || func_392(49)))
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
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_732(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_402(int iParam0)
{
	if (!func_455(iParam0))
	{
		return;
	}
	func_785(iParam0);
	func_786(iParam0);
}

int func_403(int iParam0, bool bParam1)
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
	if (func_138(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_787(iVar0) || func_155(iVar0))
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

int func_404(int iParam0, bool bParam1)
{
	if (!func_138(iParam0, 0))
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

void func_405(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_154(iParam0))
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

bool func_406(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_374(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_788((386 + iVar28), 1);
			if (func_749(iParam0, &Var0, iVar5, 0))
			{
				if (func_750(iParam0, &Var6, iVar5))
				{
					Var29 = { func_376(iParam0, Var0, iVar5, 0) };
					func_373(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_147(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_407(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_789(iParam0, iParam1);
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

bool func_407(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_409(iParam0))
	{
		return false;
	}
	if (!func_147(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_408(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_404(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_56() == -1)
		{
			func_405(iVar0);
			if (iParam1 == 1248274121)
			{
				func_790(iVar0);
			}
		}
		if (!func_771(iParam0, &uVar1, 1, 0, 0))
		{
			func_767(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_791(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_406(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_406(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_406(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_792())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_793(iVar0))
				{
					func_406(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_406(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_382(Global_35, 2, 0, 1);
				if ((((func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_159(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_154(iVar7) && func_159(24))
				{
					if (!func_406(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_406(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_406(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_295(480, 1);
	}
	return true;
}

bool func_409(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_410(int iParam0, int iParam1, int iParam2)
{
	if (!func_409(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_154(iVar4))
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
	if (func_141(611073244, 1, 0) && iParam2 == -897553835)
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
		func_444(func_794(iParam0), func_364(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_56() == -1)
		{
			if (func_242((*Global_1835011)[14]->f_1, 1))
			{
				func_295(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_147(0))
	{
		if (func_407(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_449(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_411(int iParam0)
{
	if ((iParam0 == -615217896 && !func_307()) || iParam0 != -615217896)
	{
		if (func_795(Global_35, iParam0, &uVar0))
		{
			func_429(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_435();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_435();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_435();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_433();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_431();
			break;
	}
}

void func_412(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_431();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_432();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_433();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_434();
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
			func_435();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_796();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_797();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_413(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_414(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_415(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_416(int iParam0)
{
	bVar0 = func_357(iParam0, -2017733358);
	if (func_798() < 3)
	{
		if (bVar0)
		{
			if (func_800(func_799(iParam0), iParam0))
			{
				func_444(79, func_364(func_799(iParam0)), 1);
			}
			else
			{
				func_444(78, func_364(func_799(iParam0)), 1);
			}
		}
		else
		{
			func_444(80, func_364(func_801(iParam0)), 1);
		}
	}
}

bool func_417()
{
	if (((((func_802(839908568, 400) || func_802(-1134030454, 400)) || func_802(623353496, 400)) || func_802(-344413337, 400)) || func_802(-1664948962, 400)) || func_802(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_418(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_725(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_803(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_804(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_419(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_399(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_401(51, 0, 0, 0, 0, -1, 0);
			func_805(8192);
			break;
		case 581047644:
			func_399(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_401(51, 0, 0, 0, 0, -1, 0);
			func_805(524288);
			break;
		case -644199619:
			func_399(39, 0, 0, 0, 0, 0, 1, 0);
			func_401(39, 0, 0, 0, 0, -1, 0);
			func_806(16);
			break;
		case 684296857:
			func_399(41, 0, 0, 0, 0, 0, 1, 0);
			func_401(41, 0, 0, 0, 0, -1, 0);
			func_807(8);
			break;
		case 466137807:
			func_399(49, 0, 0, 0, 0, 0, 1, 0);
			func_401(49, 0, 0, 0, 0, -1, 0);
			func_808(16);
			break;
		case -1087522507:
			func_399(43, 0, 0, -1791518714, func_809(1), 0, -1, 0);
			func_810(1);
			break;
		case -405829000:
			func_399(43, 0, 0, -2087881550, func_809(2), 0, -1, 0);
			func_810(2);
			break;
		case 378660860:
			func_399(43, 0, 0, 1908068621, func_809(4), 0, -1, 0);
			func_810(4);
			break;
		case 1566111097:
			func_399(43, 0, 0, 1611247019, func_809(8), 0, -1, 0);
			func_810(8);
			break;
		case 1276007140:
			func_399(43, 0, 0, 1319635688, func_809(16), 0, -1, 0);
			func_810(16);
			break;
	}
}

void func_420(int iParam0)
{
	if (func_811() == 1)
	{
		if (func_392(39))
		{
			func_295(342, 0);
		}
		else
		{
			func_295(343, 0);
			func_806(1);
		}
	}
	if (func_811() >= 30)
	{
		func_295(344, 0);
	}
	func_399(39, 0, 0, 0, 0, 0, -1, 0);
	func_401(39, 0, 0, func_811(), 30, 1, 0);
}

void func_421(int iParam0)
{
	if (func_812() == 1)
	{
		if (func_392(49))
		{
			func_295(409, 0);
		}
		else
		{
			func_295(410, 0);
			func_808(1);
		}
	}
	if (func_812() >= 10)
	{
		func_295(411, 0);
	}
	func_399(49, 0, 0, 0, 0, 0, -1, 0);
	func_401(49, 0, 0, func_812(), 10, 1, 0);
}

void func_422(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_295(437, 0);
			func_295(440, 0);
			func_813(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_399(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_401(51, 0, 0, sVar0, func_776(-949689219, 20), 1, 0);
			func_805(1);
			func_51(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_813(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_399(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_401(51, 0, 0, sVar0, func_776(-1248968496, 20), 1, 0);
			func_805(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_813(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_399(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_401(51, 0, 0, sVar0, func_776(1706369307, 20), 1, 0);
			func_805(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_813(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_399(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_401(51, 0, 0, sVar0, func_776(1520110311, 20), 1, 0);
			func_805(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_295(438, 0);
			func_813(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_399(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_401(51, 0, 0, sVar0, func_776(-1992824800, 20), 1, 0);
			func_805(32768);
			break;
		default:
			func_295(439, 0);
			break;
	}
}

void func_423()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_424(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_56() == -1)
	{
		if (!func_392(43))
		{
			if (iParam0 == 281887510)
			{
				func_295(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_295(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_295(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_295(400, 0);
			}
		}
		else if (func_357(iParam0, 412399755))
		{
			func_753(-1791518714);
			if (func_754() == 0)
			{
				func_336(0, 10);
				iVar1 = func_814(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_756(iParam0) < func_757(iParam0))
					{
						func_399(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_401(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_392(44))
		{
			if (iParam0 == -222563712)
			{
				func_295(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_295(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_295(401, 0);
			}
		}
		else if (func_357(iParam0, 709057512))
		{
			func_753(-2087881550);
			if (func_754() == 1)
			{
				func_336(0, 10);
				iVar1 = func_814(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_756(iParam0) < func_757(iParam0))
					{
						func_399(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_401(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_392(45))
		{
			if (iParam0 == 2116770557)
			{
				func_295(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_295(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_295(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_295(398, 0);
			}
		}
		else if (func_357(iParam0, -1478961327))
		{
			func_753(1908068621);
			if (func_754() == 2)
			{
				func_336(0, 10);
				iVar1 = func_814(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_815(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_816(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_774(48);
					}
					if (func_756(iParam0) < func_757(iParam0))
					{
						func_399(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_401(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_756(iParam0) < func_757(iParam0))
					{
						func_399(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_401(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_392(46))
		{
			if (iParam0 == 2085530337)
			{
				func_295(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_295(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_295(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_295(406, 0);
			}
		}
		else if (func_357(iParam0, -1238404098))
		{
			func_753(1611247019);
			if (func_754() == 3)
			{
				func_336(0, 10);
				iVar1 = func_814(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_756(iParam0) < func_757(iParam0))
					{
						func_399(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_401(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_392(47))
		{
			if (iParam0 == -1521783510)
			{
				func_295(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_295(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_295(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_295(403, 0);
			}
		}
		else if (func_357(iParam0, 1160548794))
		{
			func_753(1319635688);
			if (func_754() == 4)
			{
				func_336(0, 10);
				iVar1 = func_814(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_756(iParam0) < func_757(iParam0))
					{
						func_399(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_401(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_425(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_815(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_816(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_774(48);
		}
	}
}

void func_426(int iParam0, int iParam1, int iParam2)
{
	if (func_56() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_418(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_418(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_418(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_418(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_418(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_418(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_418(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_418(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_418(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_418(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_418(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_418(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_418(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_817())
			{
				func_418(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_418(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_418(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_418(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_418(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_418(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_418(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_418(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_418(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_418(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_418(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_418(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_418(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_427(int iParam0)
{
	if (func_392(41))
	{
		func_295(363, 0);
	}
	else
	{
		func_295(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_818(-1865241121);
			func_819(-642026005);
			func_820(-642026005);
			func_336(0, 10);
			break;
		case -2108314374:
			func_818(2117142684);
			func_819(-940584364);
			func_820(-940584364);
			func_336(0, 10);
			break;
		case -1193798153:
			func_818(-1409326024);
			func_819(1972645282);
			func_820(1972645282);
			func_336(0, 10);
			break;
		case -787702678:
			func_818(-641744968);
			func_819(1667205433);
			func_820(1667205433);
			func_336(0, 10);
			break;
		case -804542901:
			func_818(-946988203);
			func_819(1362715885);
			func_820(1362715885);
			func_336(0, 10);
			break;
		case -1696275132:
			func_818(-646136018);
			func_819(1053540370);
			func_820(1053540370);
			func_336(0, 10);
			break;
		case -161595323:
			func_818(-955835837);
			func_819(-1100103852);
			func_820(-1100103852);
			func_336(0, 10);
			break;
		case -1114363619:
			func_818(-179276075);
			func_819(-1409869209);
			func_820(-1409869209);
			func_336(0, 10);
			break;
		case -368407134:
			func_818(-492711560);
			func_819(-1760235357);
			func_820(-1760235357);
			func_336(0, 10);
			break;
		case 1997759228:
			func_818(1764383959);
			func_819(-138366827);
			func_820(-138366827);
			func_336(0, 10);
			break;
		case 1265573293:
			func_818(317501533);
			func_819(-1261163843);
			func_820(-1261163843);
			func_336(0, 10);
			break;
		case -1030441283:
			func_818(817753087);
			func_819(-963523016);
			func_820(-963523016);
			func_336(0, 10);
			break;
		case -1490884871:
			func_818(576606016);
			func_819(560825326);
			func_820(560825326);
			func_336(0, 10);
			break;
		case -395458616:
			func_818(814934957);
			func_819(858269539);
			func_820(858269539);
			break;
	}
}

void func_428(int iParam0, int iParam1)
{
	func_358(iParam0, iParam1, &uVar0);
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_374(iParam1, 1, 0) };
		iParam3 = func_698(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_821(iParam1, iParam2, func_689(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_822(1, (func_56() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_689(iParam3, 1)])
			{
				func_697(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_823(32768) && iParam1 != &Global_1946804->f_57[func_689(iParam3, 1)])
			{
				func_602();
				func_697(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_697(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_824(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_697(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_825(0);
			func_826(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_697(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_430(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_382(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_382(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_101("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_102(&Var3, iVar2, iVar0, iVar1))
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
						func_104(iVar0);
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

void func_431()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_432()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_433()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_434()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_435()
{
	func_827();
	func_828();
	func_829();
}

void func_436(int iParam0, int iParam1, bool bParam2)
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

void func_437(int iParam0, bool bParam1)
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
	func_732(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_438(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_439(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_440(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_441(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_442(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_443(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_444(int iParam0, int iParam1, bool bParam2)
{
	func_251(iParam0, &iVar0, &iVar1);
	if (!func_694(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_830(iParam0, 1024))
	{
		return;
	}
	func_695(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_445(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_251(iParam0, &iVar0, &iVar1);
	if (!func_694(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_830(iParam0, 1024))
	{
		return;
	}
	func_695(iVar0, iVar1);
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

int func_446()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_772())
	{
		return func_447();
	}
	iVar4 = (func_772() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_772())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_831(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_773(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_447()
{
	iVar0 = get_random_int_in_range(0, func_772());
	return func_773(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_448(int iParam0)
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

bool func_449(int iParam0, int iParam1, int iParam2)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_374(iParam0, 0, 1) };
	Var5 = { func_376(iParam0, Var0, Var0.f_4, 0) };
	return func_832(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_450(int iParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	switch (func_103(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_833(81053684, 0) <= 0)
			{
				func_697(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_697(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_834(iParam0);
			if (func_835(iVar0))
			{
				func_836(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_697(30, iParam0, 0, 0, 0);
			}
			if (func_690() == -2125499975 || func_690() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_697(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_690() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_697(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_837(-525676072, 0))
			{
				if (func_838(-525676072, &iVar1))
				{
					func_697(33, iVar1, 0, 0, 0);
				}
			}
			func_697(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_839(99217379))
		{
			func_429(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_402(24);
		if (func_430(&iVar2, 0))
		{
			func_406(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_451(int iParam0)
{
	if (func_357(iParam0, 943695443))
	{
		func_840(0, iParam0);
	}
	else if (func_357(iParam0, -2096528786))
	{
		func_840(1, iParam0);
	}
	else if (func_357(iParam0, -1094167013))
	{
		func_840(2, iParam0);
	}
	else if (func_357(iParam0, 1936654645))
	{
		func_840(3, iParam0);
	}
	else if (func_357(iParam0, 1306489306))
	{
		func_840(4, iParam0);
	}
	else if (func_357(iParam0, 435762317))
	{
		func_840(5, iParam0);
	}
	else if (func_357(iParam0, 1259363210))
	{
		func_840(6, iParam0);
	}
	else if (func_357(iParam0, 881398259))
	{
		func_840(7, iParam0);
	}
	else if (func_357(iParam0, -541549214))
	{
		func_840(8, iParam0);
	}
	else if (func_357(iParam0, 130796156))
	{
		func_840(-1, iParam0);
	}
}

int func_452(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_841(&Var4, 1356624740);
	return func_842(iParam0, &Var4, &uVar0, iParam1);
}

void func_453(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_56() == -1)
			{
				if (func_242((*Global_1835011)[4]->f_1, 1))
				{
					func_295(109, 1);
				}
			}
			break;
	}
}

void func_454(int iParam0, char* sParam1)
{
	sVar0 = func_844(func_843(0));
	func_366(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_845(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_455(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_456(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_457(int iParam0)
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

int func_458(int iParam0)
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

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_461(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_846(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_462(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

int func_465(int iParam0)
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

int func_466(int iParam0, int iParam1)
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

void func_467(var uParam0)
{
	_copy_memory(uParam0, &(Global_1879534->f_7301), 243);
}

bool func_468(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_469()
{
	if (func_248(43) && !func_248(44))
	{
		return false;
	}
	if (func_248(67) && func_847() != 8)
	{
		return false;
	}
	return true;
}

float func_470(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_471(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_472(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_473(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_474(int iParam0, int iParam1)
{
	Var1 = { func_415(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_475(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_476(int iParam0)
{
	Var1 = { func_270(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_477()
{
	if (func_68(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_68(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_478(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_479()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_848(iVar0);
		if (func_68(func_849(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_480(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_84(iParam0))
	{
		return false;
	}
	return func_242((*Global_1347702)[iParam0]->f_15, 1);
}

int func_481(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_482(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_143(-1845241476, 0, 0);
	iVar1 = func_143(1654063339, 0, 0);
	iVar2 = func_143(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_483(int iParam0)
{
	Var1 = { func_413(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_484()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_850(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_485(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

int func_486(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_487(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_488(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_489(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_490(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

bool func_491(int iParam0)
{
	iVar0 = func_489(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_490(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

void func_492(int iParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_851(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

int func_493(int iParam0)
{
	if (func_852(Global_1392915->f_121[iParam0]->f_3))
	{
		_display_hud_component(-1744263063);
		func_853(&(Global_1392915->f_121[iParam0]->f_3), 1, 0);
		Global_1392915->f_121[iParam0]->f_3 = 0;
		return 1;
	}
	Global_1392915->f_121[iParam0]->f_3 = 0;
	return 0;
}

void func_494(int iParam0, int iParam1)
{
	if (!func_195(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_495(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_496(int iParam0)
{
	if (func_56() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_242((*Global_1347702)[21]->f_15, 1);
		case 44:
			return func_242((*Global_1347702)[83]->f_15, 1);
	}
	return true;
}

int func_497()
{
	return &Global_1898438;
}

Vector3 func_498(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_499(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_500(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, (*Global_1835011)[iParam0]->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

float func_501(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

Vector3 func_502(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_503(int iParam0)
{
	return func_203(iParam0);
}

void func_504(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_505(int iParam0)
{
	if (!func_854(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_855(iParam0))
		{
			if (vdist(Global_36, func_856(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_856(iParam0), false) <= func_857();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_857();
	}
	return func_858();
}

bool func_506(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && (*Global_1835011)[iParam0]->f_21 == iParam2)
	{
		return true;
	}
	return false;
}

void func_507(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_4(iParam0))
	{
		return;
	}
	switch (func_17(iParam0))
	{
		case 1:
			iVar0 = func_98(iParam0);
			if (func_859(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_198(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_198(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if ((*Global_1835011)[iVar0]->f_28 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1835011)[iVar0]->f_27, iVar2);
				if (!func_503(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_77((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_98(iParam0);
			if (func_860(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_861(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_861(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_862(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_508(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_56() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_509(int iParam0, var uParam1, bool bParam2)
{
	func_251(iParam0, &iVar0, &iVar1);
	if (!func_694(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_830(iParam0, 1024))
	{
		return;
	}
	func_695(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

bool func_510(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_511(int iParam0)
{
	return (func_501(iParam0) / 2f);
}

var func_512(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_513(var uParam0)
{
	*uParam0 = 0;
}

void func_514(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_863(vVar0, 0);
}

void func_515(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_864(vVar0, vVar3, 0f) };
	vVar9 = { func_865(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_517(int iParam0, int iParam1)
{
	if (func_214(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

void func_518(int iParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = _blip_add_for_coord(func_866(iParam0), vParam2);
	if (does_blip_exist(*uParam1))
	{
		func_867(uParam1, iParam0);
		func_868(iParam0);
		if (!func_508(163))
		{
			func_509(163, *uParam1, 0);
		}
	}
}

void func_519(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_520(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = 1754500170;
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = -1600776215;
	*iParam1 = -1;
	return false;
}

bool func_521(int iParam0, int iParam1, bool bParam2)
{
	if (!func_869(iParam0))
	{
		return false;
	}
	if (!func_870(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_871(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_522(int iParam0, int iParam1)
{
	if (!func_869(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			func_872(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_523(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

bool func_524(int iParam0)
{
	func_251(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_525(int iParam0)
{
	func_251(iParam0, &iVar0, &iVar1);
	func_873(iVar0, iVar1);
}

void func_526(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_527(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_528(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_329((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

Vector3 func_529(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_530(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_230(0, 0, 1))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16 != 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_36 == 0)
	{
		return;
	}
	if (func_57(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_861(iParam0);
	if (!bParam5 && func_874(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_529(iParam0), (*Global_1347702)[iParam0]->f_18);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	else
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_coord((*Global_1347702)[iParam0]->f_38, vParam1);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_875(8);
	}
	else if (iParam0 == 62)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 838722941);
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCEXO");
	}
	func_876(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_56() == -1)
	{
		func_862(iParam0);
		iVar0 = func_227(Global_40.f_4283);
		if (func_61(iVar0) && func_228((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_505(iVar0);
		}
		if (func_877(iParam0, bVar1, iVar0))
		{
			func_507((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (_0x66f35dd9d2b58579() || is_screen_faded_out())
		{
			return;
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 1 == 0)
	{
		func_177(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_874(iParam0) || func_119((*Global_1347702)[iParam0]->f_12, 1)) || func_119((*Global_1347702)[iParam0]->f_12, 512)) || func_85((*Global_1347702)[iParam0]->f_13, 2048))
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 580546400);
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32768 == 0)
	{
		if (((*Global_1347702)[iParam0]->f_36 == -1822497728 && (*Global_1347702)[iParam0]->f_12 & 1 == 0) && (*Global_1347702)[iParam0]->f_12 & 2 != 0)
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -211388321);
		}
		else
		{
			func_177(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_878(iParam0))
		{
			if (iParam0 == 97)
			{
				func_295(185, 0);
			}
			else
			{
				func_295(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_512(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_344(iParam0, 2);
	}
}

bool func_531()
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

bool func_532(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_533()
{
	Var0.f_8.f_1 = -15;
	Var0.f_11 = 10;
	Var0.f_11.f_1.f_1 = -15;
	Var0.f_11.f_1.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_42 = -1;
	Var0.f_43 = -15;
	Var0.f_45 = -15;
	Var0.f_46 = -15;
	Var0.f_47 = -15;
	Var0.f_48 = -15;
	Var0.f_50 = -15;
	iVar60 = 0;
	while (iVar60 < 27)
	{
		*Global_40.f_4942[iVar60] = { Var0 };
		iVar60++;
	}
}

void func_534()
{
	_copy_memory(&Global_20710, Global_2714655, 2408);
}

void func_535()
{
	Var1.f_1 = -15;
	Var1.f_2 = -15;
	Var1.f_4 = -1;
	Var1.f_4.f_4 = -15;
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			*Global_23118[iVar0] = { Var1 };
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			*Global_1058888->f_40615[iVar0] = { Var1 };
			iVar0++;
		}
	}
}

void func_536(bool bParam0, int iParam1)
{
	func_13(0, 0, 1, 0);
	func_879();
	func_880();
	func_881(1);
	func_882();
	func_883();
	if (iParam1 == -1)
	{
		if (!func_395() || bParam0)
		{
			func_112((*Global_1835011)[0]->f_1, 0, 0, 0, 1);
		}
		else
		{
			_map_discovery_set_enabled(-1753910767);
		}
	}
}

void func_537()
{
	func_884();
	func_885();
	func_535();
}

void func_538(int iParam0)
{
	_0x77e83c315a3b31ca(get_player_index());
	if (iParam0 == -1)
	{
		func_886();
		func_887();
		func_888();
		func_889();
		func_890();
		func_891();
		func_892();
		func_893();
		func_894();
		func_895();
		func_896();
		func_897(1);
		_0x946d46cd6dfb9742(get_player_index(), 0, -944777689);
	}
	func_898();
	func_899();
}

void func_539(int iParam0)
{
	if (iParam0 == -1)
	{
		func_900();
	}
	else
	{
		func_901();
	}
}

void func_540()
{
	_0x8bc555034a5a5e8c(230221572, -548014618);
	_0x8bc555034a5a5e8c(948152617, -1084397164);
	_0x8bc555034a5a5e8c(404801781, 1760888205);
	Global_40.f_4942[7]->f_7 = 0;
	Global_40.f_4942[11]->f_7 = 0;
	Global_40.f_4942[4]->f_7 = 0;
}

void func_541(int iParam0)
{
	if (iParam0 == -1)
	{
		func_902();
	}
	else
	{
		func_903();
	}
}

void func_542()
{
	func_904();
	func_905(0);
	if (func_56() == -1)
	{
		func_906(!func_395());
	}
	func_907();
	func_908();
	Global_40.f_7854 = 0;
	Global_40.f_7855 = 0;
	Global_40.f_7856 = 0;
	func_909();
	if (Global_40)
	{
		func_910();
	}
	_0x3e93dddcbb6111e4("RDR3.BattleSeqIndex", 0f);
}

void func_543()
{
	_jorunal_clear_all_progress();
	func_911();
}

void func_544()
{
	if (func_56() == 0)
	{
		return;
	}
	else
	{
		func_912();
		func_913();
	}
}

void func_545()
{
	if (func_56() != -1)
	{
		return;
	}
	Global_40.f_4283.f_328 = -15;
	Global_40.f_4283.f_329 = -15;
	Global_40.f_4283.f_331 = -15;
	Global_40.f_4283.f_332[0] = -1;
	Global_40.f_4283.f_332[1] = -1;
	func_914(Global_40.f_4283.f_440[0]);
	func_914(Global_40.f_4283.f_440[1]);
	func_915(0, 711);
}

void func_546(int iParam0, int iParam1)
{
	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_916(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_916(iParam1, iParam0);
	}
}

void func_547()
{
	vVar0 = 176656832;
	vVar0.f_1 = -15;
	vVar0.f_2 = 1017034651;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		_copy_memory(Global_40.f_4283.f_6[iVar5], &vVar0, 5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 17)
	{
		Global_1357549->f_1848[iVar5] = 0;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 50)
	{
		_copy_memory(Global_1357549->f_1252[iVar5], &uVar6, 3);
		iVar5++;
	}
	Global_1357549->f_1403 = 0;
	Global_1357549->f_1404 = 0;
	Global_1357549->f_1405 = 0;
	Global_1357549->f_1406 = 0;
	Global_1359453 = 0;
}

void func_548(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_5 = { func_917() };
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
	if (get_milliseconds_per_game_minute() != 2000)
	{
		_set_milliseconds_per_game_minute(2000);
	}
}

void func_549()
{
	set_ambient_zone_list_state_persistent("AZL_CAMP_COLTER", false, true);
	set_ambient_zone_list_state_persistent("AZL_CAMP_HORSESHOE_OVERLOOK", false, true);
	set_ambient_zone_list_state_persistent("AZL_camp_clemens_point", false, true);
	set_ambient_zone_list_state_persistent("AZL_camp_shady_belle", false, true);
	set_ambient_zone_list_state_persistent("AZL_camp_beaver_hollow", false, true);
	set_ambient_zone_list_state_persistent("AZL_camp_pronghorn_ranch", false, true);
	set_ambient_zone_list_state_persistent("AZL_pronghorn_ranch", false, true);
	set_ambient_zone_list_state_persistent("AZL_camp_beechers_hope", false, true);
	set_ambient_zone_list_state_persistent("AZL_beechers_hope", false, true);
	set_ambient_zone_list_state_persistent("AZL_Camp_Lakay", false, true);
	set_ambient_zone_list_state_persistent("AZL_Camp_Guarma", false, true);
	set_ambient_zone_state_persistent("AZ_camp_dark_mood_zone", false, true);
}

void func_550(bool bParam0)
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
		func_918();
	}
	_0xa0cefcea390aab9b(0);
}

int func_551(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_552(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_553(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_554(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_555(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_919(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_556(int iParam0)
{
	if (iParam0 < -1 || iParam0 > Global_1879534->f_7300)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
	{
		return -2;
	}
	set_bit(Global_1879534->f_7301.f_2[iVar0], 1);
	return -2;
}

int func_557(int iParam0)
{
	if (iParam0 < -1 || iParam0 > Global_1879534->f_7300)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
	{
		return -2;
	}
	set_bit(Global_1879534->f_7301.f_2[iVar0], 2);
	if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
	{
		set_bit(Global_1879534->f_7301.f_2[iVar0], 1);
	}
	return -2;
}

int func_558(int iParam0)
{
	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 42)
	{
		return -2;
	}
	return iVar0;
}

int func_559(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (iVar0 <= -1 || iVar0 >= Global_1879534->f_7300)
	{
		return -2;
	}
	if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
	{
		return -2;
	}
	if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	iVar2 = Global_1879534->f_7301.f_2[iVar0]->f_1;
	iVar3 = &Global_1879534->f_7222[iVar0];
	iVar4 = Global_1879534->f_7222[iVar0]->f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (&Global_1879534->f_1911[iVar5] == 531432813)
		{
			iVar6 = Global_1879534->f_1911[iVar5]->f_2;
			iVar7 = &Global_1879534->f_211[iVar6];
			if (iVar7 == iVar1)
			{
				Global_1879534->f_7301.f_2[iVar0]->f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_560(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = 0;
	if (Global_1879534->f_211[iParam0]->f_1 == 1)
	{
		iVar1 = 1;
	}
	func_920(iVar0, iVar1);
	return -2;
}

int func_561(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	func_921(iVar0, iVar1);
	return -2;
}

int func_562(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if (Global_1879534->f_211[iParam0]->f_2 == 1)
	{
		bVar2 = true;
	}
	func_922(iVar0, iVar1, bVar2);
	return -2;
}

int func_563(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (&Global_1879534->f_211[iParam0] % 1000000);
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (func_923(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_564(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	uVar3 = Global_1879534->f_211[iParam0]->f_3;
	if (func_924(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_565(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	uVar3 = Global_1879534->f_211[iParam0]->f_3;
	if (func_925(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_566(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == Global_1879534->f_7300)
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_567(int iParam0)
{
	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 104)
	{
		return -2;
	}
	if (!&Global_1879534->f_7301.f_131[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_568(int iParam0)
{
	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 104)
	{
		return -2;
	}
	Global_1879534->f_7301.f_131[iVar0] = 1;
	return -2;
}

int func_569(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return -2;
	}
	if (!func_395())
	{
		return -2;
	}
	iVar0 = Global_1879534->f_211[iParam1]->f_2;
	iVar1 = Global_1879534->f_211[iParam1]->f_1;
	iVar2 = &Global_1879534->f_211[iParam1];
	if (!&Global_1879534->f_46[iParam0])
	{
		if (func_705(Global_1879534->f_7301.f_2[iParam0]->f_3))
		{
			Global_1879534->f_112[iParam0] = Global_1879534->f_7301.f_2[iParam0]->f_3;
		}
		else
		{
			Global_1879534->f_112[iParam0] = func_59();
			func_303(Global_1879534->f_112[iParam0], iVar0, iVar1, iVar2, 0, 0, 0, 0);
			Global_1879534->f_7301.f_2[iParam0]->f_3 = &Global_1879534->f_112[iParam0];
		}
		Global_1879534->f_46[iParam0] = 1;
	}
	else
	{
		iVar3 = (get_game_timer() - func_497());
		iVar4 = -1;
		if ((Global_1572887->f_12 == -1 && Global_1430242->f_9) && iVar3 >= 5000)
		{
			iVar4 = func_926(1);
		}
		if (func_927(func_59(), &(Global_1879534->f_112[iParam0]), 1) || iVar4 == 0)
		{
			Global_1879534->f_46[iParam0] = 0;
			Global_1879534->f_7301.f_2[iParam0]->f_3 = -15;
			if (iVar4 == 0)
			{
				Global_1898438 = get_game_timer();
			}
			return -2;
		}
	}
	return -1;
}

int func_570(int iParam0, int iParam1)
{
	if (!func_395())
	{
		return -2;
	}
	if (!&Global_1879534->f_46[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_1879534->f_79[iParam0] = (get_game_timer() + iParam1);
		Global_1879534->f_46[iParam0] = 1;
	}
	else if (get_game_timer() > &Global_1879534->f_79[iParam0])
	{
		Global_1879534->f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_571(int iParam0, int iParam1)
{
	if (!func_395())
	{
		return -2;
	}
	if (!&Global_1879534->f_46[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = func_59();
		if (func_262(iVar1) > iVar0)
		{
			func_303(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_262(iVar1) != iVar0)
		{
			func_928(&iVar1, 0);
			func_929(&iVar1, 0);
			func_930(&iVar1, iVar0);
		}
		Global_1879534->f_112[iParam0] = iVar1;
		Global_1879534->f_46[iParam0] = 1;
	}
	else if (func_706(&(Global_1879534->f_112[iParam0]), 1))
	{
		Global_1879534->f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_572(int iParam0, int iParam1)
{
	if (!&Global_1879534->f_46[iParam0])
	{
		iVar0 = iParam1;
		Global_1879534->f_112[iParam0] = iVar0;
		Global_1879534->f_46[iParam0] = 1;
	}
	else if (func_706(&(Global_1879534->f_112[iParam0]), 1))
	{
		Global_1879534->f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_573(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (get_clock_hours() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_574(int iParam0)
{
	iVar0 = iParam0;
	if (func_300())
	{
		switch (iVar0)
		{
			case 49:
				func_574(151);
				break;
			case 18:
				func_574(153);
				func_574(155);
				break;
			case 13:
				func_574(154);
				break;
		}
	}
	if (func_119((*Global_1347702)[iVar0]->f_12, 2048))
	{
		return -2;
	}
	else if (func_115(iVar0, 0))
	{
		return -2;
	}
	else if (func_480(iVar0))
	{
		return -2;
	}
	return -1;
}

int func_575(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_576(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (!func_73(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (func_248(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_577(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (!func_248(iVar0))
	{
		if ((!Global_1935630 & 2048 != 0 && !func_4(Global_1572864->f_8)) && !func_230(0, 1, 1))
		{
			if (func_931(iVar0, 0, 1, func_184()))
			{
			}
		}
	}
	else
	{
		if (func_56() == 0)
		{
		}
		return -2;
	}
	return -1;
}

int func_578(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (func_57(32768))
	{
		return -1;
	}
	if (!func_248(iVar0))
	{
		if (func_473(&Global_1935630, 1048576))
		{
			return -1;
		}
		if (!func_473(&Global_1935630, 2048) && !func_230(0, 1, 1))
		{
			if ((func_56() == -1 && func_395()) && func_932(&Global_0, 3))
			{
				return -1;
			}
			if (func_931(iVar0, func_395(), 0, -1))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_579(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	request_script_with_name_hash(iVar0);
	if (!has_script_with_name_hash_loaded(iVar0))
	{
		return -1;
	}
	start_new_script_with_name_hash(iVar0, iVar1);
	set_script_with_name_hash_as_no_longer_needed(iVar0);
	return -2;
}

int func_580(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_581(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_582(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_583(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_584(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_585(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_586(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	if (Global_1879534->f_1)
	{
		return -1;
	}
	iVar0 = func_926(0);
	if (iVar0 >= &Global_1879534->f_211[iParam0])
	{
		iVar1 = Global_1879534->f_211[iParam0]->f_1;
		iVar2 = Global_1879534->f_211[iParam0]->f_2;
		iVar3 = Global_1879534->f_7301.f_2[iVar1]->f_1;
		iVar4 = &Global_1879534->f_7222[iVar1];
		iVar5 = Global_1879534->f_7222[iVar1]->f_1;
		if (iVar3 < iVar4)
		{
			return -2;
		}
		if (iVar3 > iVar5)
		{
			return -2;
		}
		iVar6 = iVar4;
		iVar7 = -1;
		while (iVar6 <= iVar5)
		{
			if (&Global_1879534->f_1911[iVar6] == 531432813)
			{
				iVar7 = Global_1879534->f_1911[iVar6]->f_2;
				iVar8 = &Global_1879534->f_211[iVar7];
				if (iVar8 == iVar2)
				{
					Global_1879534->f_7301.f_2[iVar1]->f_1 = iVar6;
					return -2;
				}
			}
			iVar6++;
		}
	}
	return -2;
}

int func_587(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534->f_211[iParam1]->f_3;
	if (func_73(iVar0))
	{
		if (func_248(iVar0))
		{
			return -2;
		}
	}
	Var1 = &Global_1879534->f_211[iParam1];
	Var1.f_1 = Global_1879534->f_211[iParam1]->f_1;
	iVar3 = Global_1879534->f_211[iParam1]->f_2;
	if (!&Global_1879534->f_145[iParam0])
	{
		Global_1879534->f_178[iParam0] = (func_933(Var1) + iVar3);
		Global_1879534->f_145[iParam0] = 1;
	}
	else if (func_933(Var1) >= &Global_1879534->f_178[iParam0])
	{
		return -2;
	}
	return -1;
}

bool func_588(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -566605714:
			*iParam2 = func_934(iParam1);
			break;
		case 891989563:
			*iParam2 = func_935(iParam1);
			break;
		case 987244216:
			*iParam2 = func_936(iParam1);
			break;
		case 2055336839:
			*iParam2 = func_937(iParam1);
			break;
		case -1271429659:
			*iParam2 = func_938(iParam1);
			break;
		case -259205396:
			*iParam2 = func_939(iParam1);
			break;
		case -289754349:
			*iParam2 = func_940(iParam1);
			break;
		case -1940826795:
			*iParam2 = func_941(iParam1);
			break;
		case 40566325:
			*iParam2 = func_942(iParam1);
			break;
		case 901529234:
			*iParam2 = func_943(iParam1);
			break;
		case -780657756:
			*iParam2 = func_944(iParam1);
			break;
		case -1628808209:
			*iParam2 = func_945(iParam1);
			break;
		case 1225435693:
			*iParam2 = func_946(iParam1);
			break;
		case 363897013:
			*iParam2 = func_947(iParam1);
			break;
		case -1042325909:
			*iParam2 = func_948(iParam1);
			break;
		case -1472568760:
			*iParam2 = func_949(iParam1);
			break;
		case 2143263185:
			*iParam2 = func_950(iParam1);
			break;
		case -1520384013:
			*iParam2 = func_951();
			break;
		case -401276712:
			*iParam2 = func_952();
			break;
		case 759449782:
			*iParam2 = func_953(iParam1);
			break;
		case 477724652:
			*iParam2 = func_954(iParam1);
			break;
		case -1815455941:
			*iParam2 = func_955(iParam1);
			break;
		case -914010892:
			*iParam2 = func_956(iParam1);
			break;
		case -346691420:
			*iParam2 = func_957(iParam1);
			break;
		case -471968486:
			*iParam2 = func_958(iParam1);
			break;
		case 672918768:
			*iParam2 = func_959(iParam1);
			break;
		case 1181815586:
			*iParam2 = func_960(iParam1);
			break;
		case -755014414:
			*iParam2 = func_961(iParam1);
			break;
		case 644640119:
			*iParam2 = func_962(iParam1);
			break;
		case -915138989:
			*iParam2 = func_963(iParam1);
			break;
		case 1250460476:
			*iParam2 = func_964(iParam1);
			break;
		case -1449067653:
			*iParam2 = func_965(iParam1);
			break;
		case -549926405:
			*iParam2 = func_966(iParam1);
			break;
		case 1015095530:
			*iParam2 = func_967(iParam1);
			break;
		case -1523883609:
			*iParam2 = func_968(iParam1);
			break;
		case -990335083:
			*iParam2 = func_969(iParam1);
			break;
		case -716094127:
			*iParam2 = func_970(iParam1);
			break;
		case -1260617938:
			*iParam2 = func_971(iParam1);
			break;
		case -1063874733:
			*iParam2 = func_972(iParam1);
			break;
		case 1331093620:
			*iParam2 = func_973(iParam1);
			break;
		case 1842360635:
			*iParam2 = func_974(iParam1);
			break;
		case -663280148:
			*iParam2 = func_975(iParam1);
			break;
		case -1360770031:
			*iParam2 = func_976(iParam1);
			break;
		case -486436146:
			*iParam2 = func_977(iParam1);
			break;
		case -1053276381:
			*iParam2 = func_978(iParam1);
			break;
		case -1673286084:
			*iParam2 = func_979(iParam1);
			break;
		case -756450532:
			*iParam2 = func_980(iParam1);
			break;
		case -1289504437:
			*iParam2 = func_981(iParam1);
			break;
		case 26902781:
			*iParam2 = func_982(iParam1);
			break;
		case 147262072:
			*iParam2 = func_983(iParam1);
			break;
		case -2042718100:
			*iParam2 = func_984(iParam1);
			break;
		case -1738949208:
			*iParam2 = func_985(iParam1);
			break;
		case -1536300574:
			*iParam2 = func_986(iParam1);
			break;
		case 47963769:
			*iParam2 = func_987(iParam1);
			break;
		case 630069176:
			*iParam2 = func_988(iParam1);
			break;
		case 634895793:
			*iParam2 = func_989(iParam1);
			break;
		case -1216055267:
			*iParam2 = func_990(iParam1);
			break;
		case 1050963831:
			*iParam2 = func_991(iParam1);
			break;
		case -1535566683:
			*iParam2 = func_992(iParam1);
			break;
		case 433040111:
			*iParam2 = func_993(iParam1);
			break;
		case 1883692561:
			*iParam2 = func_994(iParam1);
			break;
		case 2001493029:
			*iParam2 = func_995(iParam1);
			break;
		case 1978308683:
			*iParam2 = func_996(iParam1);
			break;
		case 99307713:
			*iParam2 = func_997(iParam1);
			break;
		case 111818573:
			*iParam2 = func_998(iParam1);
			break;
		case 1120810236:
			*iParam2 = func_999(iParam1);
			break;
		case -1244116362:
			*iParam2 = func_1000(iParam1);
			break;
		case -1729634664:
			*iParam2 = func_1001(iParam1);
			break;
		case -1941172569:
			*iParam2 = func_1002(iParam1);
			break;
		case -1408274960:
			*iParam2 = func_1003(iParam1);
			break;
		case -90803914:
			*iParam2 = func_1004(iParam1);
			break;
		case 656468362:
			*iParam2 = func_1005(iParam1);
			break;
		case 995574226:
			*iParam2 = func_1006(iParam1);
			break;
		case 2121795512:
			*iParam2 = func_1007(iParam1);
			break;
		case -1293709741:
			*iParam2 = func_1008(iParam1);
			break;
		case 670944580:
			*iParam2 = func_1009(iParam1);
			break;
		case 225795806:
			*iParam2 = func_1010(iParam1);
			break;
		case 1805087304:
			*iParam2 = func_1011(iParam1);
			break;
		case -838803174:
			*iParam2 = func_1012(iParam1);
			break;
		case -138866642:
			*iParam2 = func_1013(iParam1);
			break;
		case -718595174:
			*iParam2 = func_1014(iParam1);
			break;
		case -801023198:
			*iParam2 = func_1015(iParam1);
			break;
		case -1120129944:
			*iParam2 = func_1016(iParam1);
			break;
		case 794205136:
			*iParam2 = func_1017(iParam1);
			break;
		case -1672441969:
			*iParam2 = func_1018(iParam1);
			break;
		case 644587471:
			*iParam2 = func_1019(iParam1);
			break;
		case -1398429376:
			*iParam2 = func_1020();
			break;
		case -683322528:
			*iParam2 = func_1021(iParam1);
			break;
		case 1836702732:
			*iParam2 = func_1022(iParam1);
			break;
		case 460788415:
			*iParam2 = func_1023(iParam1);
			break;
		case -845953794:
			*iParam2 = func_1024(iParam1);
			break;
		case 498793617:
			*iParam2 = func_1025(iParam1);
			break;
		case -1156263964:
			*iParam2 = func_1026(iParam1);
			break;
		case 7411042:
			*iParam2 = func_1027(iParam1);
			break;
		case -1598787124:
			*iParam2 = func_1028(iParam1);
			break;
		case -1378868385:
			*iParam2 = func_1029(iParam1);
			break;
		case 1098008903:
			*iParam2 = func_1030(iParam1);
			break;
		case 1371030896:
			*iParam2 = func_1031(iParam1);
			break;
		case 1093832731:
			*iParam2 = func_1032();
			break;
		case -159886710:
			*iParam2 = func_1033();
			break;
		case -1440757252:
			*iParam2 = func_1034(iParam1);
			break;
		case 2025667422:
			*iParam2 = func_1035(iParam1);
			break;
		case -42848759:
			*iParam2 = func_1036(iParam1);
			break;
		case -1083639171:
			*iParam2 = func_1037(iParam1);
			break;
		case 69231574:
			*iParam2 = func_1038(iParam1);
			break;
		case 203794828:
			*iParam2 = func_1039(iParam1);
			break;
		case -2030110303:
			*iParam2 = func_1040(iParam1);
			break;
		case -148700515:
			*iParam2 = func_1041(iParam1);
			break;
		case 1831856550:
			*iParam2 = func_1042(iParam1);
			break;
		case 260291403:
			*iParam2 = func_1043(iParam1);
			break;
		case 2128134704:
			*iParam2 = func_1044(iParam1);
			break;
		case -644074888:
			*iParam2 = func_1045();
			break;
		case 442701271:
			*iParam2 = func_1046();
			break;
		case -1525868272:
			*iParam2 = func_1047(iParam1);
			break;
		case 170295534:
			*iParam2 = func_1048(iParam1);
			break;
		case -612537234:
			*iParam2 = func_1049(iParam1);
			break;
		case -157982035:
			*iParam2 = func_1050(iParam1);
			break;
		case 2038286720:
			*iParam2 = func_1051();
			break;
		case 1475426593:
			*iParam2 = func_1052(iParam1);
			break;
		case -2024549018:
			*iParam2 = func_1053(iParam1);
			break;
		case -391651599:
			*iParam2 = func_1054(iParam1);
			break;
		case 1810366898:
			*iParam2 = func_1055(iParam1);
			break;
		case 442105888:
			*iParam2 = func_1056(iParam1);
			break;
		case -1829373791:
			*iParam2 = func_1057(iParam1);
			break;
		case -508972844:
			*iParam2 = func_255(iParam1);
			break;
		case 1726178855:
			*iParam2 = func_256(iParam1);
			break;
		case -1496733911:
			*iParam2 = func_257(iParam1);
			break;
		case -2049944022:
			*iParam2 = func_258(iParam1);
			break;
		case -976663157:
			*iParam2 = func_259(iParam1);
			break;
		case 1518265781:
			*iParam2 = func_260(iParam1);
			break;
		case -1438979859:
			*iParam2 = func_1058(iParam1);
			break;
		case 242535924:
			*iParam2 = func_1059(iParam1);
			break;
		default:
			return false;
	}
	return true;
}

void func_589(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_214(iParam0))
	{
		return;
	}
	else if (!func_4((*Global_1392626)[iParam0]->f_3))
	{
		return;
	}
	if (!func_1060(1))
	{
		func_244(1);
	}
	func_207(iParam0);
	if (iParam0 == 0)
	{
		_0xcc3edc5614b03f61(29);
	}
	else if (iParam0 == 6)
	{
		_0xcc3edc5614b03f61(28);
	}
	else if (iParam0 == 3)
	{
		_0xcc3edc5614b03f61(30);
	}
	clear_bit(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2] = func_59();
		func_303(Global_40.f_9422[2], 0, 0, 0, 3, 0, 0, 0);
	}
	func_112((*Global_1392626)[iParam0]->f_3, bParam2, bParam1, 0, 1);
	if ((*Global_1392626)[iParam0]->f_7 != -1)
	{
		func_1061((*Global_1392626)[iParam0]->f_7);
	}
}

bool func_590(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

void func_591(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_56();
	}
	if (iVar0 == -1)
	{
		switch (iParam0)
		{
			case 225514697:
				func_1062(-2125499975);
				break;
			case 11966224:
				func_1062(1160113249);
				break;
			default:
				break;
		}
		return;
	}
	if (iParam0 == -171876066)
	{
		func_1062(2026485318);
	}
	else if (iParam0 == -1481695040)
	{
		func_1062(24043185);
	}
}

void func_592()
{
	if (!is_ped_injured(Global_35))
	{
		set_ped_config_flag(Global_35, 265, true);
	}
	func_1063(0, 5, 1, 1, 0);
	func_1063(1, 5, 1, 1, 0);
	Global_40.f_11095.f_35 = 0;
	func_662(65, 1, 9, 0, 0, 0, 0, 0);
	func_379(13, 0f);
	Global_40.f_11095.f_40 = -100f;
	Global_40.f_11095.f_41 = 100f;
	Global_1347477->f_201 = 1;
	Global_1347477->f_184 = -1;
	Global_40.f_11095.f_67 = -1;
	Global_1347477->f_190 = 0;
	func_1064(1, 0, 0);
	func_1064(2, 0, 0);
	func_1064(3, 0, 0);
}

void func_593(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_string(Global_1955569->f_5.f_2[iVar0]->f_1, func_1065(iVar0, bParam0));
		_databinding_write_data_string(Global_1955569->f_5.f_2[iVar0]->f_2, func_1066());
		iVar0++;
	}
}

void func_594(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	Var2 = 117;
	Var2.f_118 = 45;
	_copy_memory(uParam1, &Var2, 164);
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar166 = func_1067(iVar0, 1);
		if (iVar166 != 0)
		{
			iVar1 = _0xdbc4b552b2ae9a83(iParam0, iVar166);
			if (is_weapon_valid(iVar1))
			{
				(*uParam1)[iVar0] = iVar1;
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	func_100(iParam0, &(uParam1->f_118));
}

void func_595(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_154(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_596(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_597(var uParam0, int iParam1)
{
	iVar0 = func_1068(iParam1);
	_0xb285ad0ec870b2df(uParam0, iVar0);
	func_1069();
}

void func_598()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_1900383[iVar0];
		if (does_entity_exist(iVar1))
		{
			if (!_0x88ad6cc10d8d35b2(iVar1))
			{
				set_entity_as_mission_entity(iVar1, false, true);
			}
			delete_ped(&iVar1);
		}
		func_1070(iVar0);
		iVar0++;
	}
	if (does_entity_exist(Global_1900383->f_393))
	{
		delete_object(&(Global_1900383->f_393));
	}
	Global_40.f_1095.f_1[0]->f_8 = func_1071();
	Global_40.f_1095.f_1[0]->f_9 = func_1072();
	Global_40.f_1095.f_1[0]->f_10 = func_1073();
	func_1074(&Var2);
	func_1075(0, Var2);
	func_1076(0, 1);
	func_1077(0);
	iVar4 = Global_40.f_1095.f_1[0]->f_9;
	iVar5 = 1;
	fVar6 = to_float(get_default_attribute_points_needed_for_rank(iVar4, 7, iVar5));
	Global_40.f_1095.f_1[0]->f_372 = iVar5;
	Global_40.f_1095.f_1[0]->f_372.f_1 = fVar6;
	func_1078(&Var7);
	func_1079(Var7);
	func_1080(0);
	func_1081(0);
	func_1082(0f, 0f, 0f);
	func_1083(-15);
}

void func_599()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_1900383[iVar0];
		if (does_entity_exist(iVar1))
		{
			if (!_0x88ad6cc10d8d35b2(iVar1))
			{
				set_entity_as_mission_entity(iVar1, false, true);
			}
			delete_ped(&iVar1);
		}
		func_1070(iVar0);
		iVar0++;
	}
	if (does_entity_exist(Global_1900383->f_393))
	{
		delete_object(&(Global_1900383->f_393));
	}
	Global_40.f_1095.f_1[0]->f_8 = func_1084();
	Global_40.f_1095.f_1[0]->f_9 = func_1085();
	Global_40.f_1095.f_1[0]->f_10 = func_1086();
	func_1074(&Var2);
	func_1075(0, Var2);
	func_1076(0, 1);
	func_1077(0);
	iVar4 = Global_40.f_1095.f_1[0]->f_9;
	iVar5 = 1;
	fVar6 = to_float(get_default_attribute_points_needed_for_rank(iVar4, 7, iVar5));
	Global_40.f_1095.f_1[0]->f_372 = iVar5;
	Global_40.f_1095.f_1[0]->f_372.f_1 = fVar6;
	func_1078(&Var7);
	func_1079(Var7);
	func_1080(0);
	func_1081(0);
}

int func_600(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1087(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1088(iParam1);
	return func_1089(iParam0, iVar0, bParam2, bParam2);
}

void func_601()
{
	Global_1946804->f_850 = 0;
	Global_1946804->f_855 = 0;
	Global_1946804->f_856 = 0;
	Global_1946804->f_852 = 0;
	Global_1946804->f_853 = 0;
	Global_1946804->f_854 = 0;
	Global_1946804->f_851 = 0;
	iVar0 = 0;
	while (iVar0 < 37)
	{
		Global_1946804->f_529[iVar0] = 0;
		iVar0++;
	}
	func_1090(8);
	func_1090(16);
}

void func_602()
{
	func_1091(&(Global_1946804->f_2776));
	func_1090(32768);
	func_1092(1108822547, 8, 6);
}

void func_603(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_138(iVar1, 0))
		{
			func_687(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

bool func_604(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1093(iParam6);
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
		func_1095(uParam0, func_1094(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_689(iVar3, 1);
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
							if (func_1096(iVar3) && func_1097(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1098(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

void func_605()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

void func_606(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 == -1)
	{
		iParam1 = &Global_40.f_7731[0];
	}
	if (iParam2 == -1)
	{
		iParam2 = &Global_40.f_7731[1];
	}
	if (iParam3 == -1)
	{
		iParam3 = &Global_40.f_7731[2];
	}
	func_1099();
	func_1100(iParam1, iParam2, iParam3);
	if ((iParam1 == 0 && iParam2 == 0) && iParam3 == 0)
	{
		func_1101(iParam0, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1101(iParam0, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam4)
	{
		if (is_ped_a_player(iParam0))
		{
			func_697(1, 64, 0, 0, 0);
		}
		else
		{
			func_697(1, 64, 1, iParam0, 0);
		}
	}
	func_1102(1);
}

void func_607()
{
	func_1102(0);
	func_1103(0, Global_1946804->f_2653, 0);
	func_1103(1, Global_1946804->f_2654, 0);
	func_1103(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	*Global_1946804->f_1497.f_1[iVar1] = { *Global_1946804->f_1378.f_1[iVar1] };
	*Global_1946804->f_1497.f_1[iVar2] = { *Global_1946804->f_1378.f_1[iVar2] };
	*Global_1946804->f_1497.f_1[iVar3] = { *Global_1946804->f_1378.f_1[iVar3] };
	func_1104();
	func_1105();
}

void func_608(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_40.f_7748.f_1;
	}
	func_1099();
	func_1106(iParam1);
	if (bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_697(1, 64, 0, 0, 0);
		}
		else
		{
			func_697(1, 64, 1, iParam0, 0);
		}
	}
	func_1102(1);
}

void func_609()
{
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0];
	if (!func_1107() && func_1108(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0] = func_1109(iVar1);
	}
	func_1102(0);
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_1110();
	Global_40.f_7748.f_2 = func_1111();
	func_1112(Global_1946804->f_2656, 0);
	func_1113();
}

void func_610(int iParam0)
{
	if (func_56() == -1)
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
		iVar0 = func_689(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1114(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

void func_611(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1115()) || bParam5)
		{
			func_605();
		}
	}
	if (func_56() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1116(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_618(Global_40.f_7729);
				Global_1946804->f_1378 = func_618(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1117(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1118(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1119(0, 1);
	}
	func_1102(0);
}

void func_612(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_1120(&(Global_1946804->f_1497), iParam0);
	if (bParam2)
	{
		func_1121(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_1119(0, 1);
	}
}

bool func_613(int iParam0, int iParam1)
{
	if (!func_835(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_614(int iParam0, int iParam1)
{
	if (!func_835(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_615(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 || iParam0);
}

bool func_616(int iParam0, int iParam1)
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

int func_617(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_618(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1122(iParam1);
	}
	if ((bParam3 && func_613(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_619(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_614(Global_40.f_7729, 4096);
		func_1123(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_1124(iParam0);
	}
	func_1125();
	if (!func_1126(iParam1))
	{
		func_1127(iVar0, iParam0, func_1117(iParam1), 1, 0, 1);
	}
	func_1128(iParam0);
	return 1;
}

int func_618(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_619(int iParam0, int iParam1)
{
	iVar0 = func_1093(iParam1);
	func_1129(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

void func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1130(iParam0))
	{
		return;
	}
	iVar0 = func_103(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1131(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1131(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1131(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1131(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1131(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1131(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1132(0))
	{
		func_1133(iParam0, 1);
		if (func_690() == 1160113249)
		{
			func_1133(func_1132(-2125499975), 0);
		}
		else
		{
			func_1133(func_1132(1160113249), 0);
		}
	}
	func_1134();
	if (func_1135(iVar0))
	{
		_0x766315a564594401(func_233(0), iParam0, 0);
	}
	func_1136(iParam0, bParam3);
	if (bParam2)
	{
		func_1119(0, 0);
	}
}

void func_621(int iParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		remove_all_ped_weapons(iParam0, true, true);
		_0x1b83c0deebcbb214(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_154(uParam1[iVar0]))
		{
			if (func_155(uParam1[iVar0]))
			{
				if (!has_ped_got_weapon(iParam0, uParam1[iVar0], 0, false))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					if (iParam0 == Global_35)
					{
						_0xe9bd19f8121ade3e(Global_35, uParam1[iVar0]);
					}
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	func_166(iParam0, &(uParam1->f_118), 1);
}

void func_622(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_155(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_623(int iParam0)
{
	iVar8 = func_380(&uVar0, iParam0, 0);
	iVar9 = func_381(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (func_763(iParam0, 256))
			{
				return -1569615261;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (_0xa2091482ed42ef85(Global_35, &uVar0) > _0xa2091482ed42ef85(Global_35, &uVar4) && !func_763(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_624()
{
	iVar0 = func_1137();
	bVar1 = (!func_473(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
	if (does_entity_exist(Global_35))
	{
		if (bVar1)
		{
			Global_1935630->f_13 = (_0x69e181772886f48b(iVar0) || _0xf0fbfb9ab15f7734(iVar0, 0, 0));
			Global_1935630->f_15 = _0x148e7ac8141c9e64(iVar0);
			Global_1935630->f_14 = _0x9945a3e2528a02e8(iVar0);
			Global_1935630->f_16 = _0xf46108c50a22b029();
			Global_1935630->f_17 = _get_wanted_intensity_for_player(iVar0);
			Global_1935630->f_26 = _0x9d5c9a5a3321b128(iVar0);
			Global_1935630->f_21 = _0xdaefdfdb2aeece37(_get_hud_player_crime_type(iVar0), 0);
			Global_1935630->f_18 = _0xad401c63158acbaa(iVar0);
			if (Global_1935630->f_18)
			{
				_0x9c5bd8c562565ce6(&Var2);
				Global_1935630->f_19 = Var2.f_10;
				Global_1935630->f_23 = Var2.f_11 == 6;
			}
			Global_1935630->f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (_0x532c5fddb986ee5c(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = _0xdaefdfdb2aeece37(Var20, 0);
						if (iVar37 > Global_1935630->f_20)
						{
							Global_1935630->f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_1138();
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		Global_1935630->f_41 = Global_1935630->f_40;
	}
	Global_1935630->f_22 = is_player_being_arrested(iVar0, true);
	Global_1935630->f_12 = is_entity_dead(Global_35);
	if (!Global_1935630->f_12)
	{
		get_current_ped_weapon(Global_35, &(Global_1935630->f_44), false, 0, false);
		Global_1935630->f_40 = get_mount(Global_35);
		if (Global_1572887->f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			set_ped_reset_flag(Global_35, 174, true);
		}
		if (Global_1572887->f_12 != -1)
		{
			set_ped_reset_flag(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			set_ped_reset_flag(Global_35, 154, true);
		}
		if (Global_1572887->f_12 == -1)
		{
			if (!func_159(9))
			{
				set_ped_reset_flag(Global_35, 135, true);
			}
			if (!func_159(14))
			{
				set_ped_reset_flag(Global_35, 144, true);
			}
			if (!func_159(36))
			{
				_uiprompt_disable_prompt_type_this_frame(9);
			}
			if (_0x139efb0a71dd9011())
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, 1934388793, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -824104112, false);
				disable_control_action(0, 516589524, false);
				disable_control_action(0, 1390807691, false);
				disable_control_action(0, 1663574939, false);
				_uiprompt_enable_prompt_type_this_frame(6);
			}
			else if ((is_screen_faded_out() && func_287()) && !func_230(0, 0, 1))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (is_control_pressed(0, 255439828))
			{
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
				disable_control_action(0, 1623727326, false);
				disable_control_action(0, -922478227, false);
				disable_control_action(0, 1751579194, false);
				disable_control_action(0, -2023713047, false);
			}
			if (_is_weapon_sniper(Global_1935630->f_44) && is_first_person_aim_cam_active())
			{
				disable_control_action(0, 255439828, false);
			}
		}
	}
	else
	{
		if (func_56() == -1 && _0x139efb0a71dd9011())
		{
			_uiprompt_enable_prompt_type_this_frame(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_625(bool bParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_626(bool bParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_1139();
	if (bParam1)
	{
		func_44(-1);
	}
}

void func_627(bool bParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_1140();
}

void func_628()
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (func_159(iVar0))
		{
			func_786(iVar0);
		}
		else
		{
			func_1141(iVar0);
		}
		iVar0++;
	}
}

void func_629()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11095.f_11)
	{
		iVar1 = round(&(Global_40.f_11095.f_11[iVar0]));
		if (func_160(iVar0))
		{
			if (func_161(iVar0))
			{
				set_attribute_points(Global_35, iVar0, iVar1);
			}
			else
			{
				set_attribute_points(Global_35, iVar0, func_162(iVar1));
			}
		}
		iVar0++;
	}
}

void func_630()
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	_0xaa5a52204e077883(Global_35, 529538990);
	_0xaa5a52204e077883(Global_35, -596647170);
	_0xaa5a52204e077883(Global_35, -1548100798);
	_0xaa5a52204e077883(Global_35, -159383285);
	_0xaa5a52204e077883(Global_35, -1233969318);
	_0xaa5a52204e077883(Global_35, -1860710511);
	_0xaa5a52204e077883(Global_35, 1507636870);
	_0xaa5a52204e077883(Global_35, 1828724907);
	_0xaa5a52204e077883(Global_35, 1270940175);
	_0xaa5a52204e077883(Global_35, -1857826511);
}

void func_631(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	Var0 = { func_270(1736503291) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_632(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	func_631((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		func_330(9, iParam0);
	}
}

void func_633(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_4283.f_324 - iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	func_631(iVar0);
}

void func_634(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_270(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_635(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_634((Global_40.f_4283.f_325 + iParam0));
}

void func_636(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_4283.f_325 - iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	func_634(iVar0);
}

int func_637(int iParam0)
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

int func_638(int iParam0)
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
	func_1142(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_639(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_640(int iParam0)
{
	if (!func_1143(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_641(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_642(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1144(iParam0);
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

int func_643(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_656(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_644(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_645(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_646()
{
	return Global_40.f_11095.f_35;
}

void func_647(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1145(iParam0, 0);
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
		func_648(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_648(int iParam0)
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
			func_1145(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1146(1);
	}
}

bool func_649(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_650()
{
	iVar0 = func_1147((*Global_1347702)[9]->f_15);
	iVar1 = func_1147((*Global_1835011)[69]->f_1);
	if (func_927(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_651(int iParam0)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	return func_242((*Global_1835011)[iParam0]->f_1, 1);
}

int func_652(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1148(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1149(iVar6);
	}
	return iVar5;
}

int func_653(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1150(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_654(int iParam0, bool bParam1)
{
	func_1151(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_655(int iParam0)
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

void func_656(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_654(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_657(2, *uParam0);
		}
		else
		{
			func_658(2, *uParam0);
		}
	}
	func_1152(uParam0);
}

void func_657(int iParam0, int iParam1)
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

void func_658(int iParam0, int iParam1)
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

void func_659(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1153(iParam0, iParam1, bParam2);
}

int func_660(int iParam0)
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

int func_661(int iParam0)
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

void func_662(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1154();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1155(iParam0);
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
	if (func_159(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_792())
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
	Global_40.f_11095.f_35 = func_277(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1154();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1156(iVar1);
		func_1158(func_1157(), 0, 4000);
		func_1159(Global_40.f_11095.f_35);
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
		func_1160(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_414(func_270(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_661(14))
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
					sParam4 = func_1161(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_366(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_366(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_414(func_270(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_661(4))
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
					sParam4 = func_1161(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_366(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_366(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_270(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_330(10, 1);
	}
}

void func_663(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_664(int iParam0)
{
	if (!func_4(iParam0))
	{
		return false;
	}
	switch (func_17(iParam0))
	{
		case 1:
			switch (func_98(iParam0))
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
			switch (func_98(iParam0))
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

void func_665(int iParam0)
{
	iVar2 = func_233(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_103(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1163(func_1162(iParam0), 6);
}

void func_666(int iParam0)
{
	iVar2 = func_233(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_103(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1164(func_1162(iParam0), 6);
}

void func_667(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_668()
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

int func_669(int iParam0)
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

void func_670(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_671(int iParam0)
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

int func_672(int iParam0, int iParam1)
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

struct<10> func_673(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_674(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_675(int iParam0, int iParam1)
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

bool func_676(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1165(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1165(iParam0, Var2, 1))
				{
					if (func_1166(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1166(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_295(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_230(0, 0, 1))
		{
			func_336(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_677(int iParam0)
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

void func_678(int iParam0)
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
		func_295(iVar0, 0);
	}
}

void func_679()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1167(0);
			_unlock_set_unlocked(-121456797, false);
			func_1168();
		}
		return;
	}
	if (!func_242((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1169();
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
	func_1167(1);
}

void func_680()
{
	if (!func_242((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_157(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_681()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1170(0);
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
	if (!func_242((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1170(1);
}

void func_682()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1171(15000, 0, 0, 0, 1);
			func_1170(0);
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
	if (!func_242((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_717(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1170(1);
}

void func_683()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_141(1191437462, 1, 0) && !func_206((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_157(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1172(1))
			{
				func_441(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_141(1119149048, 1, 0) && !func_206((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_157(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1172(2))
			{
				func_441(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1172(4))
		{
			func_441(4);
		}
		if (func_1172(0))
		{
			func_1173(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_141(1191437462, 1, 0))
			{
				func_34(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_141(1119149048, 1, 0))
			{
				func_34(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1172(1))
		{
			func_1173(1);
		}
		if (func_1172(2))
		{
			func_1173(2);
		}
		if (func_1172(4))
		{
			func_1173(4);
		}
		if (!func_1172(0))
		{
			func_441(0);
		}
	}
}

void func_684()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_242((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1174() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_405(127400949);
		if (func_406(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1174() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1175(-2055673461, Var1, 1423542233);
		func_1175(-202131179, Var1, -1264898804);
		func_1175(2013836545, Var1, 1592019450);
		func_1175(1497476650, Var1, 1117400455);
		func_1175(1063571467, Var1, 1150213537);
		func_1175(2107224237, Var1, 1598825281);
		func_1175(1747981656, Var1, -712527121);
		func_1175(-1371140647, Var1, 454332195);
		func_1175(-19142973, Var1, 256105670);
		func_1175(-2074737817, Var1, -1328061889);
		func_1175(-1114256243, Var1, -782241404);
		func_1175(-1653277288, Var1, 1669853467);
		func_1175(1869398132, Var1, -1559225678);
		func_1175(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_1176())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_154(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_159(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_159(24) && func_154(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_154(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_159(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_685()
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

bool func_686(int iParam0)
{
	switch (func_103(iParam0))
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

void func_687(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_103(iParam0))
	{
		case -2061583405:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1177(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1134();
	}
	if (bParam1)
	{
		func_1119(0, 0);
	}
}

int func_688(int iParam0)
{
	Var0 = { func_374(iParam0, 1, 0) };
	return func_698(Var0.f_4);
}

int func_689(int iParam0, int iParam1)
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

int func_690()
{
	return Global_1946804->f_1;
}

Vector3 func_691(int iParam0, int iParam1)
{
	if (func_56() == -1)
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

int func_692(int iParam0, int iParam1)
{
	vVar0 = { func_691(iParam0, iParam1) };
	return vVar0.x;
}

void func_693(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_694(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1178(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1179(iParam0))
	{
		return false;
	}
	if (func_1180(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_830(iParam0, 1)) || func_57(32768))
	{
		if (!func_830(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1181())
	{
		return false;
	}
	return true;
}

void func_695(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_696(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_697(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1182(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1183(Var0);
}

int func_698(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1184(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_699(int iParam0)
{
	func_1114(Global_1946804->f_1497.f_1[func_689(iParam0, 1)], 2, 6);
	func_1114(Global_1946804->f_1378.f_1[func_689(iParam0, 1)], 2, 6);
}

bool func_700(int iParam0)
{
	return iParam0 != 0;
}

int func_701(int iParam0)
{
	iVar0 = -1;
	if (!func_700(iParam0))
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

bool func_702(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_703(int iParam0, int iParam1)
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

void func_704(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1185(iParam0, iParam6);
	func_1186(iParam0, iParam5);
	func_1187(iParam0, iParam4);
	func_930(iParam0, iParam3);
	func_929(iParam0, iParam2);
	func_928(iParam0, iParam1);
}

bool func_705(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_551(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_262(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_555(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_554(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_553(iParam0);
	if (iVar5 < 1 || iVar5 > func_703(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_706(int iParam0, bool bParam1)
{
	return func_927(func_59(), iParam0, bParam1);
}

void func_707(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_708()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1188(iVar1);
		if (!_unlock_is_visible(func_1189(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_709()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1188(iVar0);
		if (!_unlock_is_visible(func_1189(iVar1)))
		{
			_unlock_set_visible(func_1189(iVar1), true);
		}
		iVar0++;
	}
}

bool func_710(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1143(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_711(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_639(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_712()
{
	return (func_473(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_713(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_56() != -1)
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
	if (!func_138(iVar0, 0))
	{
		return 0;
	}
	if (!func_1190(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1191(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_357(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_374(iVar0, 0, 1) };
	iVar10 = func_1192(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1193(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1194(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_157(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_1171(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

var func_714(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_715(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_366(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_716(bool bParam0, bool bParam1)
{
	if (func_56() != -1)
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

void func_717(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_803(iParam0, sParam4, iParam5);
	}
	func_804(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_718(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1195())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1195())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_333(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_98(iParam0);
	if (func_17(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_17(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1196(1, iVar1);
					func_1196(8, iVar1);
					func_1196(7, iVar1);
					break;
				case 12:
					func_1196(6, iVar1);
					break;
				case 53:
					func_1196(3, iVar1);
					func_1196(7, iVar1);
					func_1196(4, iVar1);
					break;
				case 20:
					func_1196(8, iVar1);
					break;
				case 19:
					func_1196(1, iVar1);
					func_1196(2, iVar1);
					break;
				case 24:
					func_1196(3, iVar1);
					func_1196(9, iVar1);
					func_1196(20, iVar1);
					break;
				case 28:
					func_1196(1, iVar1);
					break;
				case 34:
					func_1196(23, iVar1);
					func_1196(2, iVar1);
					func_1196(18, iVar1);
					break;
				case 29:
					func_1196(0, iVar1);
					func_1196(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1196(0, iVar1);
					func_1196(3, iVar1);
					func_1196(2, iVar1);
					func_1196(11, iVar1);
					func_1196(6, iVar1);
					func_1196(25, iVar1);
					func_1196(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1196(5, iVar1);
					break;
				case 63:
					func_1196(1, iVar1);
					func_1196(3, iVar1);
					break;
				case 37:
					func_1196(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_331(0, 10, 11, 2116153146))
			{
				func_1196(7, iVar1);
				func_1196(4, iVar1);
			}
			else if (iParam0 == func_331(0, 7, 11, -379687487))
			{
				func_1196(8, iVar1);
				func_1196(15, iVar1);
			}
			else if (iParam0 == func_331(0, 8, 11, -1386089015))
			{
				func_1196(3, iVar1);
			}
			else if (iParam0 == func_331(0, 11, 11, -1952009645))
			{
				func_1196(6, iVar1);
				func_1196(3, iVar1);
			}
			else if (iParam0 == func_331(0, 12, 11, 2065895756))
			{
				func_1196(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1197()));
	if (!func_508(629))
	{
		func_295(629, 0);
	}
}

int func_719(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_720(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_721(int iParam0, int iParam1, var uParam2)
{
	if (!func_720(iParam0))
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

int func_722()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_723(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_724(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1198(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_722())
	{
		return -1;
	}
	iVar0 = func_723(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_133(iVar1, 0);
	func_645(iVar1, 0);
	func_1199(iVar1, 0);
	func_1200(iVar1, 0);
	func_1201(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1202(iVar1, iParam4);
	}
	return iVar1;
}

int func_725(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_141(1811977508, 1, 0))
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
			if (func_138(iVar25, 0) && func_357(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_726()
{
	iVar0 = func_1203(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1204(iVar0))
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

void func_727(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_639(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1206(&iVar0, func_1205(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_177(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1207(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_184()))
			{
				func_177(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_177(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

bool func_728(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_48 == -1)
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_47 == 0)
	{
		return true;
	}
	iVar0 = func_1208(iParam0);
	return func_706(iVar0, 1);
}

bool func_729(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

int func_730(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || func_242((*Global_1347702)[iParam0]->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || func_242((*Global_1347702)[iParam0]->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return (*Global_1347702)[iParam0]->f_36;
}

int func_731(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

var func_732(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_733(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

void func_734(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_735(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_84(iVar0) && Global_1347702[iVar0] == iParam0)
		{
			bVar1 = true;
			func_1209(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

void func_736(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_730(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = get_hash_key("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {(*Global_1347702)[iParam0]->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_733(iParam0);
	_uilog_add_entry_hash(iVar13, func_731(iParam0), (*Global_1347702)[iParam0]->f_24, iVar12, get_hash_key(&cVar0), (*Global_1347702)[iParam0]->f_37);
	_uilog_set_entry_icon_texture(iVar13, func_731(iParam0), iVar11, get_hash_key("toast_log_blips"));
	if (!is_string_null_or_empty(sVar8) && !is_string_null_or_empty(sVar9))
	{
		_uilog_set_entry_brief_texture(iVar13, func_731(iParam0), get_hash_key(sVar8), get_hash_key(sVar9));
	}
	if (_uilog_is_entry_registered(iVar13, func_731(iParam0)))
	{
		func_344(iParam0, 4);
	}
}

char* func_737(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1210(sParam1));
}

void func_738(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_733(iParam0);
	if (!_uilog_is_entry_registered(iVar0, func_731(iParam0)))
	{
		return;
	}
	_uilog_add_or_update_objective(iVar0, func_731(iParam0), get_hash_key(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

bool func_739(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_740(int iParam0, bool bParam1)
{
	if (!func_739(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_733(iParam0), func_731(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_733(iParam0), func_731(iParam0), 2, "");
		func_344(iParam0, 16);
	}
	else
	{
		if (func_739(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_733(iParam0), func_731(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_733(iParam0), func_731(iParam0), 0, "");
		}
		func_734(iParam0, 16);
	}
}

void func_741(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_739(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_733(iParam0), func_731(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_739(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_733(iParam0), func_731(iParam0), 1, "");
		}
		func_344(iParam0, 8);
	}
	else
	{
		if (func_739(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_733(iParam0), func_731(iParam0), 0, "");
		}
		func_734(iParam0, 8);
	}
}

int func_742(int iParam0)
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

int func_743(int iParam0)
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

void func_744(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

struct<4> func_745(bool bParam0)
{
	return func_376(1328661203, func_1211(), -1591664384, bParam0);
}

bool func_746(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_747(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_233(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_748(int iParam0, bool bParam1)
{
	if (func_103(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_159(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_749(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1212(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_750(int iParam0, var uParam1, int iParam2)
{
	if (func_764(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_751(bool bParam0)
{
	iVar0 = func_233(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_376(271701509, func_745(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_376(271701509, func_745(bParam0), 12999093, 0);
}

bool func_752(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_103(iParam0);
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

void func_753(int iParam0)
{
	if (!func_1213(iParam0))
	{
		func_1215(func_1214(iParam0));
	}
}

int func_754()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1213(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_755(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
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
	iVar1 = func_756(iVar9);
	iVar2 = func_756(iVar10);
	iVar3 = func_756(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_756(iVar12);
	}
	iVar5 = func_757(iVar9);
	iVar6 = func_757(iVar10);
	iVar7 = func_757(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_757(iVar12);
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
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_756(int iParam0)
{
	if (func_141(iParam0, 1, 0))
	{
		iVar0 = func_143(iParam0, 0, 0);
	}
	return iVar0;
}

int func_757(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_758(int iParam0, int iParam1)
{
	if (!func_1216(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_759(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_758(iParam1, 5) || iParam0 == func_758(iParam1, 6)) || iParam0 == func_758(iParam1, 7)) || iParam0 == func_758(iParam1, 8)) || iParam0 == func_758(iParam1, 9))
	{
		func_813(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_399(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_401(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_760(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_758(iParam1, 5) || iParam0 == func_758(iParam1, 6)) || iParam0 == func_758(iParam1, 7)) || iParam0 == func_758(iParam1, 8)) || iParam0 == func_758(iParam1, 9))
	{
		if (func_813(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_399(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_401(51, 0, 0, iVar0, func_776(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_399(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_401(51, 0, 0, iVar0, func_776(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_761(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_762(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_846(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

bool func_763(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_764(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_233(0);
	*uParam1 = { func_376(iParam0, func_370(0), iParam3, 0) };
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

bool func_765(int iParam0)
{
	return func_144(iParam0) == -427144552;
}

bool func_766(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (func_362(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_771(iParam0, &uVar0, 1, 0, 0);
	}
	return func_141(iParam0, 1, 0);
}

void func_767(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_144(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_404(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_155(iVar0))
	{
		if (func_56() == -1)
		{
			func_405(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_143(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_140(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_768(int iParam0, int iParam1)
{
	if (func_357(iParam0, 58855631))
	{
		func_1191(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_769(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	if (!func_147(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_233(bParam3), iParam0);
}

int func_770(int iParam0, bool bParam1)
{
	if (func_409(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_233(bParam1), iParam0, 0);
}

bool func_771(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1217(&iParam0);
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	if (!func_147(0))
	{
		bParam3 = true;
	}
	if (func_765(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_370(0) };
			Var4.f_9 = -1591664384;
			if (!func_749(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_750(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_748(iParam0, 1))
			{
				if (!func_749(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_750(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1218(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_769(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1212(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_233(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_772()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_773(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_774(int iParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	iVar0 = func_1219(iParam0);
	fVar1 = func_1220(iParam0);
	if ((Global_1347477->f_117 || !func_159(31)) || !func_1221(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1222(iVar0) >= 7)
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
	func_1223(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_366(_create_var_string(6, func_1224(iParam0), fVar1), "itemtype_textures", func_1225(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_775(int iParam0)
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

int func_776(int iParam0, int iParam1)
{
	if (!func_1216(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_777(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_398() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1226(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1227(), 12);
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
			else if (func_811() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1228(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_811(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1229(), 13);
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
			else if (func_812() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1230(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_812(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_776(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_778(int iParam0, int iParam1, int iParam2)
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

bool func_779(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_780(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_781(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1231(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_141(iVar2, 1, 0) || func_1233(func_1232(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_784(func_1231(iVar0))), func_784(func_1231(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_811() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1234(iVar0)), func_1234(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1228() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1234(iVar0)), func_1234(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1234(iVar0)), func_1234(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_758(iParam3, func_1235(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_756(iVar2) - iParam7) >= func_776(iParam3, func_1236(iVar0));
				}
				else
				{
					bVar1 = func_756(iVar2) >= func_776(iParam3, func_1236(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_756(iVar2) + iParam7) >= func_776(iParam3, func_1236(iVar0));
			}
			else
			{
				bVar1 = func_756(iVar2) >= func_776(iParam3, func_1236(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1237(iVar2)), func_1237(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1238(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1239(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1239(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_812() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1240(iVar0)), func_1240(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1230() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1240(iVar0)), func_1240(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1240(iVar0)), func_1240(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_758(iParam3, func_1235(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_756(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1241(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1241(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1242(iVar2)), func_1242(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_782(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1229() >= 13)
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

bool func_783(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_4(func_79(0)) && ((func_86(0) == 1 || func_86(0) == 8) || func_86(0) == 6))
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

char* func_784(int iParam0)
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

void func_785(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_786(int iParam0)
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
			func_1243(1);
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
			func_1244(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1244(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1244(3);
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
			func_1245(1);
			break;
		case 34:
			func_1246(1);
			break;
		case 35:
			func_1247(1);
			break;
		case 36:
			break;
		case 37:
			func_1248(0);
			break;
		case 38:
			func_1249(0);
			break;
		case 39:
			func_1250(0);
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
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_295(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_295(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_295(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_295(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_56() == -1)
			{
				if (!func_839(99217379) || func_1251(99217379) == 2110595215)
				{
					if (func_792())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_141(iVar0, 1, 0))
					{
						func_449(iVar0, 1, 752097756);
					}
					func_429(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_56() == -1)
			{
				if (!func_141(1013902307, 1, 0))
				{
					func_449(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_56() == -1)
			{
				if (!func_141(1013902307, 1, 0))
				{
					func_449(1013902307, 1, 752097756);
				}
				if (!func_141(142640135, 1, 0))
				{
					func_449(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_56() == -1)
			{
				if (!func_141(786809402, 1, 0))
				{
					func_449(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_56() == -1)
			{
				if (!func_141(786809402, 1, 0))
				{
					func_449(786809402, 1, 752097756);
				}
				if (!func_141(-518019409, 1, 0))
				{
					func_449(-518019409, 1, 752097756);
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
			func_1252();
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

bool func_787(int iParam0)
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

int func_788(int iParam0, int iParam1)
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

void func_789(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_481(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_790(int iParam0)
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
	iVar2 = func_59();
	func_303(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_791(int iParam0)
{
	if (func_383(iParam0))
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

bool func_792()
{
	if (func_56() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_793(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_794(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_159(50))
			{
				if (!func_159(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_159(51))
			{
				if (!func_159(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_795(int iParam0, int iParam1, var uParam2)
{
	if (!func_138(iParam1, 0))
	{
		return false;
	}
	if (func_144(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_56() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_103(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_688(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_357(iParam1, 866047851))
	{
		iVar5 = func_689(iVar4, 1);
		if (func_1253(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_103(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_357(iParam1, -1638171711))
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
			if (func_1254(1868067663, &uVar0))
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
				iVar10 = func_1255(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1255(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_103(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_357(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1256(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_796()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_797()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_798()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_141(func_1257(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_799(int iParam0)
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

bool func_800(int iParam0, int iParam1)
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
	if (func_141(iVar0, 1, 0) && func_141(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_801(int iParam0)
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

bool func_802(int iParam0, int iParam1)
{
	iVar0 = func_1258(iParam0);
	if (iVar0 != -15)
	{
		func_303(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_706(iVar0, 1);
	}
	return false;
}

void func_803(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_366(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_804(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1195())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_366(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_635(iVar0);
			func_1259(iVar0, 0, 0);
		}
		func_366(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_414(func_270(1644987397), iVar1);
	}
}

void func_805(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_806(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_807(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_808(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_809(int iParam0)
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
	iVar1 = func_756(iVar9);
	iVar2 = func_756(iVar10);
	iVar3 = func_756(iVar11);
	iVar5 = func_757(iVar9);
	iVar6 = func_757(iVar10);
	iVar7 = func_757(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_756(iVar12);
		iVar8 = func_757(iVar12);
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
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_810(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_811()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1260(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_812()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_813(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1241(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1241(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1241(iVar0))
		{
			*sParam2++;
		}
		if (func_1241(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1241(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1241(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1241(iVar0))
		{
			*sParam2++;
		}
		if (func_1241(iVar1))
		{
			*sParam2++;
		}
		if (func_1241(iVar0) && func_1241(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1241(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1241(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1241(iVar0))
		{
			*sParam2++;
		}
		if (func_1241(iVar1))
		{
			*sParam2++;
		}
		if (func_1241(iVar2))
		{
			*sParam2++;
		}
		if ((func_1241(iVar0) && func_1241(iVar1)) && func_1241(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1241(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1241(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1241(iVar0))
		{
			*sParam2++;
		}
		if (func_1241(iVar1))
		{
			*sParam2++;
		}
		if (func_1241(iVar2))
		{
			*sParam2++;
		}
		if (func_1241(iVar3))
		{
			*sParam2++;
		}
		if (((func_1241(iVar0) && func_1241(iVar1)) && func_1241(iVar2)) && func_1241(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_814(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
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
	iVar1 = func_756(iVar9);
	iVar2 = func_756(iVar10);
	iVar3 = func_756(iVar11);
	iVar5 = func_757(iVar9);
	iVar6 = func_757(iVar10);
	iVar7 = func_757(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_756(iVar12);
		iVar8 = func_757(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_815(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_816(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

bool func_817()
{
	if (func_206((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_818(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_819(int iParam0)
{
	if (!func_1261(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_820(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_821(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1099();
	if (iParam2 == 39)
	{
		Var0 = { func_374(iParam0, 1, 0) };
		iParam2 = func_689(func_698(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_357(iParam0, 866047851) && func_1253(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_823(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1262(func_1184(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1263(iParam2);
	func_1264(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1114(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1114(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1098(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1265(iParam0, iParam2, iParam1, func_56() != -1);
	if (bParam4)
	{
		func_1266(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1266(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_1092(func_1184(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_822(bool bParam0, bool bParam1, bool bParam2)
{
	func_1267(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_823(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

int func_824(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_689(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_825(int iParam0)
{
	if (func_1268(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1269(Var0);
}

void func_826(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1269(Var0);
}

float func_827()
{
	if (func_1270())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_167(2);
	}
	if (Global_1347477->f_119)
	{
		return func_167(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1271();
	fVar2 = func_1272();
	fVar3 = func_1273();
	fVar4 = func_1274();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1275()));
	fVar7 = (func_167(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1276(3, round((to_float(iVar8) * fVar10)), 0);
	func_1277(3, fVar9, fVar9 > 100f);
	return func_1278(fVar7, -100f, 100f);
}

float func_828()
{
	if (func_1270())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_167(1);
	}
	if (Global_1347477->f_119)
	{
		return func_167(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1271();
	fVar2 = func_1272();
	fVar3 = func_1273();
	fVar4 = func_1274();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1275()));
	fVar7 = (func_167(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1276(2, round((to_float(iVar8) * fVar10)), 0);
	func_1277(2, fVar9, fVar9 > 100f);
	return func_1278(fVar7, -100f, 100f);
}

float func_829()
{
	if (func_1270())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_167(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1279())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1280())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_167(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1271();
	fVar2 = func_1272();
	fVar3 = func_1273();
	fVar4 = func_1274();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1275()));
	fVar7 = (func_167(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1276(1, round((to_float(iVar8) * fVar10)), 0);
	func_1277(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_167(0);
	}
	return func_1278(fVar7, -100f, 100f);
}

bool func_830(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_831(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_832(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_138(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_771(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_147(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_233(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_833(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1281();
			}
			break;
	}
	return 0;
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_835(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_836(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_835(iParam0))
	{
		return;
	}
	if (func_1282(iParam0))
	{
		return;
	}
	if (!func_1283(iParam0))
	{
		func_1284(iParam0, 1, 0);
	}
	iVar0 = func_618(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_613(iParam0, 512))
		{
			func_697(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_199() && !bParam1) && !func_230(0, 0, 1))
	{
		func_512(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1123(iParam0, 6);
	if (bParam2)
	{
		if (!func_230(0, 0, 1))
		{
			func_336(1, 4);
		}
	}
}

bool func_837(int iParam0, bool bParam1)
{
	return func_833(iParam0, 0) < func_1285(iParam0, bParam1);
}

bool func_838(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_103(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_839(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_689(iParam0, 1)] != &Global_1946804->f_57[func_689(iParam0, 1)];
}

void func_840(int iParam0, int iParam1)
{
	if (func_357(iParam1, 130796156))
	{
		func_1286(iParam1, 0);
	}
	else if (func_357(iParam1, 930141731))
	{
		func_1286(iParam1, 1);
		func_1287(iParam0);
	}
}

void func_841(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_842(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1288(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1289(uParam2, iParam0, Var1);
	return 1;
}

int func_843(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_845(int iParam0)
{
	if (!func_1290(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

char* func_846(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_361(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_361(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_847()
{
	return Global_40.f_4283;
}

int func_848(int iParam0)
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
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_849()
{
	return Global_40.f_8863.f_148;
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_851(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

bool func_852(int iParam0)
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

void func_853(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_852(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1291(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1292(iVar0);
	*uParam0 = 0;
}

bool func_854(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_855(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_856(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_857()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_858()
{
	return Global_1894899 & 2 != 0;
}

bool func_859(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_506(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_860(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_877(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_861(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_84(iParam0))
	{
		return iVar0;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

void func_862(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 495758964);
				break;
		}
	}
}

void func_863(vector3 vParam0, int iParam3)
{
	if (func_468(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_472(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_864(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_865(vector3 vParam0, vector3 vParam3, float fParam6)
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

int func_866(int iParam0)
{
	if (func_1293(iParam0))
	{
		return 1673015813;
	}
	return -936216634;
}

void func_867(var uParam0, int iParam1)
{
	if (func_1293(iParam1))
	{
		set_blip_sprite(*uParam0, 2145479193, true);
	}
	else
	{
		set_blip_sprite(*uParam0, -997121570, true);
	}
	func_1294(iParam1);
	set_blip_name_from_text_file(*uParam0, func_1295(iParam1));
}

void func_868(int iParam0)
{
	if (!func_517(iParam0, 2))
	{
		if (!func_1296())
		{
			if (does_blip_exist(Global_1392626[iParam0]))
			{
				_blip_set_modifier(Global_1392626[iParam0], 580546400);
			}
		}
		func_1297(iParam0, 2);
	}
}

bool func_869(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_870(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0, int iParam1)
{
	if (!func_869(iParam0))
	{
		return false;
	}
	func_1298(iParam1, &iVar0, &iVar1);
	return is_bit_set(Global_1935183->f_73[iParam0][iVar0], iVar1);
}

void func_872(int iParam0, var uParam1)
{
	if (!func_869(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1299(iParam0, *uParam1, 0);
	func_1300(uParam1);
	Global_1935183->f_24 = 1;
}

void func_873(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_874(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_84(iParam0))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		return true;
	}
	return false;
}

void func_875(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_876(int iParam0)
{
	if (!func_874(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_177(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_89(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

bool func_877(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

bool func_878(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_879()
{
	func_1301();
	func_1302();
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		Global_1879534->f_46[iVar0] = 0;
		Global_1879534->f_79[iVar0] = 0;
		Global_1879534->f_112[iVar0] = -15;
		Global_1879534->f_145[iVar0] = 0;
		Global_1879534->f_178[iVar0] = 0;
		iVar0++;
	}
}

void func_880()
{
	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		func_31((*Global_1835011)[iVar0]->f_1, 0);
		func_1303(&((*Global_1835011)[iVar0]->f_29), 9216);
		func_1304((*Global_1835011)[iVar0]);
		(*Global_1835011)[iVar0]->f_70 = 0;
		(*Global_1835011)[iVar0]->f_71 = 0;
		iVar0++;
	}
}

void func_881(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		(*Global_1898330)[iVar0] = -1;
		iVar0++;
	}
	Global_1898329 = 0;
	iVar1 = 0;
	while (iVar1 < func_722())
	{
		if ((func_169(iVar1) == 1 || func_169(iVar1) == 2) || func_169(iVar1) == 3)
		{
			if (bParam0)
			{
				func_334(func_17(iVar1), func_333(iVar1), 2);
			}
			func_133(iVar1, 0);
			func_264(iVar1, -15);
		}
		iVar1++;
	}
	if (func_56() == -1)
	{
		func_1305(8);
		func_1305(1);
	}
}

void func_882()
{
	func_1306();
	iVar0 = 0;
	while (iVar0 < func_722())
	{
		if (func_96(iVar0) != 0)
		{
			if (func_169(iVar0) == 3 || func_169(iVar0) == 1)
			{
				func_334(func_17(iVar0), func_333(iVar0), 2);
			}
			func_133(iVar0, 0);
			func_264(iVar0, -15);
			func_645(iVar0, 0);
			func_1199(iVar0, 0);
			func_1200(iVar0, 0);
		}
		iVar0++;
	}
}

void func_883()
{
	if (func_56() != -1)
	{
		return;
	}
	Global_1347343->f_2 = -1;
	Global_1347343 = -1;
	Global_1347343->f_1 = -1;
	StringCopy(&(Global_1347343->f_3), "", 64);
	Global_1347343->f_12 = 0;
	Global_1347343->f_11 = 0;
}

void func_884()
{
	bVar0 = func_1307(8);
	Global_1894899 = 0;
	if (bVar0)
	{
		func_129(8);
	}
	Global_1894899->f_1 = 0;
	Global_1894899->f_2 = -1;
	Global_1894899->f_4 = 0;
	func_1308();
	func_1309();
}

void func_885()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!func_61(iVar0))
		{
		}
		else
		{
			if (func_56() == -1)
			{
				Global_23118[iVar0]->f_1 = -15;
			}
			else
			{
				Global_1058888->f_40615[iVar0]->f_1 = -15;
			}
			func_1311(func_1310(iVar0));
			func_353(iVar0, 16777216);
			func_1312(iVar0, 0, 350);
			func_1313(iVar0, 0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_886()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		func_31((*Global_1347702)[iVar0]->f_15, 0);
		func_1314((*Global_1347702)[iVar0]->f_15, -15);
		func_87(iVar0, 1, 1, 1, 32);
		func_1209(iVar0, 1);
		(*Global_1347702)[iVar0]->f_13 = 0;
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
	func_1315();
	func_1316();
}

void func_887()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		Global_40.f_11029[iVar0]->f_1 = { 0f, 0f, 0f };
		Global_40.f_11029[iVar0]->f_4 = 0;
		func_1317(iVar0, 17);
		iVar0++;
	}
	func_1318(1);
}

void func_888()
{
	if (!Global_40)
	{
		Global_40.f_4283.f_2 = 0;
		Global_40.f_4283.f_3 = 0;
		Global_40.f_4283.f_312 = 1;
		Global_40.f_4283.f_324 = 0;
		Global_40.f_4283.f_325 = 0;
		Global_40.f_4283.f_328 = &Global_1899515;
	}
	Global_1357549 = 0;
	Global_1357549->f_1494 = 0;
	Global_1357549->f_1497.f_8 = 0;
	func_1319(0);
	Global_1357549->f_1724 = _databinding_add_data_container_from_path("", "camp_select_data");
	Global_1357549->f_1725 = _databinding_add_ui_item_list(Global_1357549->f_1724, "camp_collection");
	_databinding_clear_binding_array(Global_1357549->f_1725);
	func_1320();
	func_1321();
	if ((func_248(17) && !func_248(37)) && !func_710(16, 4, 1))
	{
		func_324(16);
	}
}

void func_889()
{
	if (func_56() != -1)
	{
		return;
	}
	Global_40.f_9074 = 0;
	Global_40.f_9074.f_1 = 0;
}

void func_890()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9079[iVar0] = 0;
		iVar0++;
	}
	switch (func_56())
	{
		case -1:
			func_1323(0, 5, func_1322(0), 0);
			func_1323(1, 105, func_1322(1), 0);
			func_1323(2, 76, func_1322(2), 0);
			func_1323(3, 38, func_1322(3), 0);
			break;
	}
}

void func_891()
{
	Global_40.f_9146 = 0;
	Global_40.f_9146.f_1 = 4;
	Global_40.f_9146.f_2 = 0;
	Global_40.f_9146.f_3 = -1;
	Global_40.f_9146.f_109 = -15;
	Global_40.f_9146.f_110 = -15;
	Global_40.f_9146.f_126 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Global_40.f_9146.f_49[iVar0] = 0;
		Global_40.f_9146.f_64[iVar0] = -15;
		Global_40.f_9146.f_79[iVar0] = -15;
		Global_40.f_9146.f_94[iVar0] = 0;
		Global_40.f_9146.f_4[iVar0] = 0;
		Global_40.f_9146.f_19[iVar0] = -1;
		Global_40.f_9146.f_34[iVar0] = -1;
		iVar0++;
	}
}

void func_892()
{
	Global_40.f_9052 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (is_thread_active((*Global_1392626)[iVar0]->f_21, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1392626)[iVar0]->f_21, 1);
		}
		(*Global_1392626)[iVar0]->f_21 = 0;
		func_80(iVar0, 1, 1);
		Global_40.f_9052.f_1[iVar0] = -15;
		(*Global_1392626)[iVar0]->f_9 = 0;
		(*Global_1392626)[iVar0]->f_8 = 0;
		func_31((*Global_1392626)[iVar0]->f_3, 0);
		iVar0++;
	}
	func_1324();
}

void func_893()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1325(iVar0, 20510, 1);
		Global_40.f_4942[iVar0]->f_1 = 0;
		Global_40.f_4942[iVar0]->f_2 = 0;
		Global_40.f_4942[iVar0]->f_3 = -268604689;
		Global_40.f_4942[iVar0]->f_5 = 0;
		iVar0++;
	}
}

void func_894()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		Global_17504.f_42[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_895()
{
}

void func_896()
{
	_copy_memory(Global_1430226, &uVar0, 5);
	iVar5 = 0;
	while (iVar5 < 180)
	{
		Global_40.f_9910[iVar5]->f_3 = -15;
		Global_40.f_9910[iVar5]->f_1 = 0;
		iVar5++;
	}
}

void func_897(bool bParam0)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return;
	}
	iVar0 = (get_itemset_size(&Global_1396084) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, &Global_1396084));
		if (does_entity_exist(iVar1))
		{
			if (!_0x88ad6cc10d8d35b2(iVar1))
			{
				if (!bParam0)
				{
					Jump @99; //curOff = 79
				}
				else
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
			}
			delete_entity(&iVar1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_898()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_873(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_899()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_7832)
	{
		Global_40.f_7832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		Global_40.f_7756[iVar0] = 0;
		Global_40.f_7756[iVar0]->f_1 = 0;
		Global_40.f_7756[iVar0]->f_2 = -1;
		iVar0++;
	}
}

void func_900()
{
	func_1326();
	func_1168();
	func_603(1);
	func_1327(1);
	func_1062(-2125499975);
	func_1328();
	if (func_690() == 1160113249)
	{
		Global_40.f_7729 = 62;
		Global_1905941 = 62;
	}
	else
	{
		Global_40.f_7729 = 6;
		Global_1905941 = 6;
	}
	func_1329();
	if (!func_395())
	{
		func_786(24);
	}
	else
	{
		func_1141(24);
	}
	Global_1935630 = 0;
	func_1330();
	func_630();
	func_1331(1);
	func_1332(0);
	if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
	{
		remove_all_ped_weapons(player_ped_id(), false, true);
		if (func_395())
		{
			func_157(379542007, 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
		}
		func_405(379542007);
		func_157(1259508039, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		set_ped_relationship_group_hash(Global_35, 1862763509);
		_unlock_set_unlocked(-707360575, false);
		_unlock_set_unlocked(-1278339625, false);
		_unlock_set_unlocked(1880205078, false);
		_unlock_set_unlocked(-1201174711, false);
		_unlock_set_unlocked(151582343, false);
		_unlock_set_unlocked(1231074654, false);
		_unlock_set_unlocked(-642492359, false);
		_unlock_set_unlocked(1673898385, false);
		_unlock_set_unlocked(5171247, false);
		func_1160(0);
		if (_money_get_cash_balance() > 0)
		{
			_money_decrement_cash_balance(_money_get_cash_balance());
		}
		Var0 = { func_270(1644987397) };
		_0x0fee2561120f3333(&Var0);
		if (!func_395())
		{
			func_402(1);
			func_157(-1623728698, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(1147557067, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(-569063887, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(1164374808, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			_unlock_set_unlocked(-707360575, true);
			_unlock_set_unlocked(-1278339625, true);
			_unlock_set_unlocked(1880205078, true);
			_unlock_set_unlocked(-1201174711, true);
			_unlock_set_unlocked(151582343, true);
			_unlock_set_unlocked(1231074654, true);
			_unlock_set_unlocked(-642492359, true);
			_unlock_set_unlocked(1673898385, true);
			_unlock_set_unlocked(5171247, true);
			if (func_1333())
			{
				func_157(-755485480, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-486559882, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(730856618, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-1429211481, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-227505011, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(299161628, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-951828978, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-324053813, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(785407605, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(546981776, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			else
			{
				func_157(230530039, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_157(2055893578, 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_157(-183018591, 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_157(2075992054, 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_157(-1330115686, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(1681219929, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_157(-727924611, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_1334(1449674019, 0, 1065353216, 1, 0, 0);
			func_157(-14157738, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_1335(1);
			func_157(-1516555556, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			if (!func_1333())
			{
				func_157(1533677103, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-2076104686, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(-801397594, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_157(1627068364, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_1336();
			func_1153(get_random_int_in_range(120, 420), 0, 1);
			if (!func_141(1661121390, 1, 0))
			{
				func_157(1661121390, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_141(624063935, 1, 0))
			{
				func_157(624063935, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_141(1560492757, 1, 0))
			{
				func_157(1560492757, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		_0x76f7e1bcd623a429(get_player_index());
	}
	func_1337(get_entity_coords(player_ped_id(), true, false), 0);
	func_1338(0, 1);
	func_1339(1);
	func_1340();
	func_1341();
	func_625(1);
	func_626(1, 1);
	func_627(1);
	func_1342();
	func_1343();
	func_1344();
	func_1345();
	func_290();
	_0xe6cb36f43a95d75f(0.1f);
}

void func_901()
{
	func_1329();
}

void func_902()
{
	func_1346();
	func_1347();
	if (does_entity_exist(Global_1900383->f_393))
	{
		if (!_0x88ad6cc10d8d35b2(Global_1900383->f_393))
		{
			set_entity_as_mission_entity(Global_1900383->f_393, true, true);
		}
		if (does_blip_exist(Global_1900383->f_393.f_1))
		{
			remove_blip(&(Global_1900383->f_393.f_1));
		}
		delete_object(&(Global_1900383->f_393));
	}
}

void func_903()
{
}

void func_904()
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_1348(&(Global_20710[iVar0]->f_2));
		Global_20710[iVar0] = 0;
		Global_20710[iVar0]->f_1 = 0;
		Global_20710[iVar0]->f_43 = 0;
		Global_20710[iVar0]->f_44 = 0;
		iVar0++;
	}
	func_1348(&(Global_20710.f_1126));
	Global_20710.f_1167 = -1;
}

void func_905(bool bParam0)
{
	func_1349(bParam0);
	func_1350(bParam0);
	func_1351(bParam0);
	func_1352(bParam0);
	func_1353(bParam0);
	func_1354(bParam0);
	func_1355(bParam0);
	func_1356(bParam0);
}

void func_906(bool bParam0)
{
	set_minimap_hide_fow(bParam0);
	if (bParam0)
	{
		_reveal_minimap_fow(0);
	}
	else
	{
		_reset_minimap_fow(0);
	}
}

void func_907()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			Global_40.f_283[iVar0] = 0;
		}
		else
		{
			Global_1058888->f_40567[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_908()
{
	func_15(1);
	func_1357(0);
	func_1358();
	func_1359();
	func_1360();
}

void func_909()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_7857[iVar0] = 0;
		iVar0++;
	}
}

void func_910()
{
	iVar16 = 0;
	while (iVar16 <= 9)
	{
		*(*Global_1934603)[iVar16] = { Var0 };
		iVar16++;
	}
	Global_1934603->f_161 = 0;
}

void func_911()
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Global_40.f_11922[iVar0] = 0;
		iVar0++;
	}
}

void func_912()
{
	iVar1 = 20051;
	iVar2 = 20148;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		iVar3 = func_1361(iVar0, 1);
		if (iVar3 == -1569615261)
		{
		}
		else if (!is_weapon_valid(iVar3))
		{
		}
		else
		{
			iVar4 = _get_weapon_unlock(iVar3);
			if (iVar4 == 0)
			{
			}
			else
			{
				func_1362(iVar3);
			}
		}
		iVar0++;
	}
}

void func_913()
{
	iVar1 = 20051;
	iVar2 = 20148;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		iVar3 = func_1361(iVar0, 1);
		if (iVar3 == -1569615261)
		{
		}
		else if (!is_weapon_valid(iVar3))
		{
		}
		else
		{
			iVar4 = _get_weapon_unlock(iVar3);
			if (iVar4 == 0)
			{
			}
			else
			{
				func_1363(iVar3);
			}
		}
		iVar0++;
	}
}

void func_914(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_1364(uParam0->f_1[iVar0]);
		iVar0++;
	}
	uParam0->f_62 = 0;
}

void func_915(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (func_1365(iParam0, 0, iParam1, Global_40.f_4283.f_440[0], 0, 1))
	{
		return;
	}
	if (func_1365(iParam0, 0, iParam1, Global_40.f_4283.f_440[1], 0, 1))
	{
		if (&Global_40.f_4283.f_440[1] == 0)
		{
			Global_40.f_4283.f_440[1] = func_1366(Global_40.f_4283.f_440[0]);
		}
		return;
	}
	func_1367(&(Global_40.f_4283.f_440));
	func_1365(iParam0, 0, iParam1, Global_40.f_4283.f_440[1], 0, 1);
}

void func_916(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

Vector3 func_917()
{
	return 0f, 0f, 0f;
}

void func_918()
{
	if (func_852(Global_43801))
	{
		func_853(&Global_43801, 0, 0);
	}
}

int func_919(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_920(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1879534->f_7301.f_131.f_105[iParam0] == iParam1)
	{
		return;
	}
	Global_1879534->f_7301.f_131.f_105[iParam0] = iParam1;
}

void func_921(int iParam0, int iParam1)
{
	if (iParam0 == 2 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1879534->f_7301.f_131.f_107[iParam0] == iParam1)
	{
		return;
	}
	Global_1879534->f_7301.f_131.f_107[iParam0] = iParam1;
}

void func_922(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = is_bit_set(&(Global_1879534->f_7301.f_131.f_110[iParam0]), iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		set_bit(Global_1879534->f_7301.f_131.f_110[iParam0], iParam1);
	}
	else
	{
		clear_bit(Global_1879534->f_7301.f_131.f_110[iParam0], iParam1);
	}
}

bool func_923(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	return &(Global_1879534->f_7301.f_131.f_105[iParam0]);
}

int func_924(int iParam0)
{
	if (iParam0 == 2 || iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1879534->f_7301.f_131.f_107[iParam0]);
}

bool func_925(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = is_bit_set(&(Global_1879534->f_7301.f_131.f_110[iParam0]), iParam1);
	return bVar0;
}

int func_926(bool bParam0)
{
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case 987244216:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
						if (func_119((*Global_1347702)[iVar1]->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
							if (func_73(iVar2) && !func_203(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_927(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_705(iParam1) || !func_705(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_928(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_929(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_930(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

bool func_931(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_1368(iParam0))
	{
		return false;
	}
	if ((func_242((*Global_1347702)[59]->f_15, 1) && !func_242((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return false;
	}
	if (func_1369(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_503(iParam0)) && !Global_43891)
		{
			func_202(iParam0, vdist2(func_502(iParam0), Global_36), -1, 1, 1);
			func_78((*Global_1835011)[iParam0], 2);
		}
		return false;
	}
	if (bParam2)
	{
		if (!func_1207(func_1370(iParam0), func_197(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return false;
		}
		if (func_926(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_1371(iParam0, 0, 1))
				{
					return false;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_1372(Global_35, func_24(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_24(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_24(iParam0), 2.5f)))
					{
						return false;
					}
				}
			}
		}
	}
	iVar0 = func_32((*Global_1835011)[iParam0]->f_1);
	if (!func_195(iVar0))
	{
		return false;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_1373(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_52((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_337(4);
	}
	return true;
}

bool func_932(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_933(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

int func_934(int iParam0)
{
	if (func_57(32768))
	{
		return -2;
	}
	if (func_73(iParam0))
	{
		func_75(iParam0, -1, 0, 1, 1, 0, 0);
		func_1374(iParam0);
	}
	return -2;
}

int func_935(int iParam0)
{
	if (func_57(32768))
	{
		return -2;
	}
	iVar0 = iParam0;
	if (func_84(iVar0) && !func_480(iVar0))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_87(iVar0, 1, 1, 1, 32);
		set_this_script_can_remove_blips_created_by_any_script(false);
		func_118(iVar0, 0, 1);
		iVar1 = 0;
		while (iVar1 < Global_1879534->f_7300)
		{
			if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 2))
			{
				if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 1))
				{
					switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1])
					{
						case 987244216:
							if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1]->f_2 == iVar0)
							{
								Global_1879534->f_7301.f_2[iVar1]->f_1++;
							}
							else
							{
								iVar1++;
							}
							return -2;
							default:
								break;
					}
				}
			}
		}
	}
}

int func_936(int iParam0)
{
	if (func_480(iParam0))
	{
		return -2;
	}
	return -1;
}

int func_937(int iParam0)
{
	if (func_84(iParam0) && !func_480(iParam0))
	{
		func_120(iParam0, 1, 0, 0, 0, 0, 0);
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1347702)[iParam0]->f_42, 32);
		}
		func_87(iParam0, 1, 1, 1, 32);
	}
	return -2;
}

int func_938(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	func_1375(iParam0);
	return -2;
}

int func_939(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	func_1376(iParam0);
	return -2;
}

int func_940(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	func_1377(iParam0, 0);
	return -2;
}

int func_941(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	func_711(iParam0, 32, 1);
	func_1377(iParam0, 0);
	return -2;
}

int func_942(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	iVar0 = iParam0;
	if (func_847() == 4 && (((iVar0 != 0 && iVar0 != 2) && iVar0 != 6) && iVar0 != 3))
	{
		return -2;
	}
	func_324(iParam0);
	return -2;
}

int func_943(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_639(iVar0))
	{
		return -2;
	}
	func_1378(iVar0);
	if (Global_1879534->f_1172[iParam0]->f_1 == 1)
	{
		func_1379(iVar0, 0, 0, 1, 0);
	}
	return -2;
}

int func_944(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	return -2;
}

int func_945(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	return -2;
}

int func_946(int iParam0)
{
	return -2;
}

int func_947(int iParam0)
{
	return -2;
}

int func_948(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1380(iVar0, &(Global_1879534->f_211[iParam0]), 0, Global_1879534->f_211[iParam0]->f_1, Global_1879534->f_211[iParam0]->f_2, 1, 0);
		iVar0++;
	}
	return -2;
}

int func_949(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 != 27 && !func_639(iVar0))
	{
		return -2;
	}
	fVar1 = to_float(Global_1879534->f_211[iParam0]->f_1);
	fVar1 = (fVar1 / 100f);
	fVar2 = to_float(Global_1879534->f_211[iParam0]->f_2);
	fVar2 = (fVar2 / 100f);
	if (iVar0 != 27)
	{
		(*Global_1360165)[iVar0]->f_138 = fVar1;
		(*Global_1360165)[iVar0]->f_139 = fVar2;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 27)
		{
			(*Global_1360165)[iVar3]->f_138 = fVar1;
			(*Global_1360165)[iVar3]->f_139 = fVar2;
			iVar3++;
		}
	}
	return -2;
}

int func_950(int iParam0)
{
	if (!func_639(&(Global_1879534->f_211[iParam0])))
	{
		return -2;
	}
	func_1381(&(Global_1879534->f_211[iParam0]), Global_1879534->f_211[iParam0]->f_1);
	return -2;
}

int func_951()
{
	func_1382();
	return -2;
}

int func_952()
{
	func_1383(32768);
	return -2;
}

int func_953(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	func_1384(iParam0, 1, 1);
	return -2;
}

int func_954(int iParam0)
{
	if (!func_639(iParam0))
	{
		return -2;
	}
	func_1384(iParam0, 0, 1);
	return -2;
}

int func_955(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_639(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	if (!is_model_valid(iVar1))
	{
		return -2;
	}
	if (func_1385(iVar0, iVar1))
	{
		return -2;
	}
	return -1;
}

int func_956(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_639(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	if (!is_model_valid(iVar1))
	{
		return -2;
	}
	if (func_1386(iVar0, iVar1))
	{
		return -2;
	}
	return -1;
}

int func_957(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	_0x8bc555034a5a5e8c(func_1387(iVar0), iVar1);
	if (iVar1 == -1745321414)
	{
		_0x2df89cd2ed1d0bde(func_1387(iVar0), 41788943);
	}
	else
	{
		_0x535a66aad2bf68f9(func_1387(iVar0), _0xdc9655d47dec0353(func_1387(iVar0)));
	}
	return -2;
}

int func_958(int iParam0)
{
	sVar0 = func_1388(&(Global_1879534->f_211[iParam0]));
	if (is_string_null_or_empty(sVar0))
	{
		return -2;
	}
	if (Global_1879534->f_211[iParam0]->f_1 > 0)
	{
		bVar1 = true;
	}
	if (Global_1879534->f_211[iParam0]->f_2 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		set_ambient_zone_list_state_persistent(sVar0, bVar1, true);
	}
	else
	{
		set_ambient_zone_state_persistent(sVar0, bVar1, true);
	}
	return -2;
}

int func_959(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_1389(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_1390(iVar1);
	func_1391(iVar0);
	return -2;
}

int func_960(int iParam0)
{
	iVar0 = iParam0;
	func_1390(iVar0);
	func_1391(func_1392());
	return -2;
}

int func_961(int iParam0)
{
	return -2;
}

int func_962(int iParam0)
{
	return -2;
}

int func_963(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	iVar3 = Global_1879534->f_211[iParam0]->f_3;
	func_275(iVar0, iVar2, iVar3, iVar1, 1, 1, 0);
	return -2;
}

int func_964(int iParam0)
{
	return -2;
}

int func_965(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	iVar3 = Global_1879534->f_211[iParam0]->f_3;
	func_1393(iVar0, iVar1, 1, iVar2, iVar3);
	return -2;
}

int func_966(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_522(iVar0, iVar1);
	return -2;
}

int func_967(int iParam0)
{
	if (!func_1394(iParam0))
	{
		return -2;
	}
	func_1395(iParam0);
	return -2;
}

int func_968(int iParam0)
{
	if (!func_1396(iParam0))
	{
		return -2;
	}
	func_1397(iParam0);
	return -2;
}

int func_969(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_1396(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_1398(iVar0, uVar1);
	return -2;
}

int func_970(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_1396(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_1399(iVar0, uVar1);
	return -2;
}

int func_971(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_1396(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_245(iVar0, iVar1);
	return -2;
}

int func_972(int iParam0)
{
	if (!func_1400(iParam0))
	{
		return -2;
	}
	func_1401(iParam0);
	return -2;
}

int func_973(int iParam0)
{
	if (!func_1400(iParam0))
	{
		return -2;
	}
	func_1402(iParam0);
	return -2;
}

int func_974(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_1400(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_1403(iVar0, uVar1);
	return -2;
}

int func_975(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	bVar1 = is_bit_set(Global_1879534->f_211[iParam0]->f_1, 0);
	bVar2 = is_bit_set(Global_1879534->f_211[iParam0]->f_1, 1);
	bVar3 = is_bit_set(Global_1879534->f_211[iParam0]->f_1, 2);
	iVar4 = Global_1879534->f_211[iParam0]->f_2;
	if (!func_138(iVar0, 0))
	{
		return -2;
	}
	if (!is_weapon_valid(iVar0))
	{
		return -2;
	}
	if (!does_entity_exist(Global_35) || is_entity_dead(Global_35))
	{
		return -1;
	}
	if (bVar1)
	{
		func_405(iVar0);
	}
	if (bVar2)
	{
		func_301(iVar0);
	}
	if (bVar3)
	{
		if (iVar0 == -618550132)
		{
		}
		iVar5 = 1;
		if (func_1404(iVar0))
		{
			iVar5 = 5;
		}
		bVar6 = false;
		if ((_0x705be297eebdb95d(iVar0) || iVar0 == -618550132) || iVar0 == 2055893578)
		{
			bVar6 = true;
		}
		func_157(iVar0, iVar5, 1, 0, bVar6, 752097756, 0, 1, 0, 0);
	}
	if (iVar4 != -1)
	{
		switch (iVar4)
		{
			case 523:
			case 524:
			case 525:
				func_444(iVar4, func_1405(iVar0), 0);
				break;
			default:
				func_295(iVar4, 0);
				break;
		}
	}
	return -2;
}

int func_976(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_835(iVar0))
	{
		return -2;
	}
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 > 0;
	func_836(iVar0, 1, 0);
	if (bVar1 && func_395())
	{
		func_1406(iVar0, 0, 1, 0);
	}
	return -2;
}

int func_977(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_138(iVar0, 0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_157(iVar0, iVar1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	if (func_357(iVar0, 1104960349))
	{
		func_289(iVar0);
	}
	return -2;
}

int func_978(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (!func_138(iVar0, 0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_34(iVar0, iVar1, 1, -142743235, 0);
	return -2;
}

int func_979(int iParam0)
{
	if (!func_455(iParam0))
	{
		return -2;
	}
	func_402(iParam0);
	return -2;
}

int func_980(int iParam0)
{
	if (!func_455(iParam0))
	{
		return -2;
	}
	if (!func_395())
	{
		return -2;
	}
	func_1407(iParam0);
	return -2;
}

int func_981(int iParam0)
{
	func_51(iParam0, 1, 0);
	return -2;
}

int func_982(int iParam0)
{
	func_51(iParam0, 0, 0);
	return -2;
}

int func_983(int iParam0)
{
	if (!is_model_a_ped(iParam0))
	{
		return -2;
	}
	if (func_395())
	{
		set_ped_model_is_suppressed(iParam0, true);
	}
	return -2;
}

int func_984(int iParam0)
{
	if (!is_model_a_ped(iParam0))
	{
		return -2;
	}
	if (_is_this_model_a_horse(iParam0) && func_1408(iParam0))
	{
		return -2;
	}
	if (func_395())
	{
		set_ped_model_is_suppressed(iParam0, false);
	}
	return -2;
}

int func_985(int iParam0)
{
	func_1409(iParam0);
	return -2;
}

int func_986(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_1410(iVar0, iVar1, 0);
	return -2;
}

int func_987(int iParam0)
{
	func_1411(iParam0, 1);
	return -2;
}

int func_988(int iParam0)
{
	func_1411(iParam0, 0);
	return -2;
}

int func_989(int iParam0)
{
	func_1412(iParam0, 0);
	if (iParam0 == 24)
	{
		func_1412(119, 0);
	}
	return -2;
}

int func_990(int iParam0)
{
	func_1412(iParam0, 1);
	return -2;
}

int func_991(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	uVar1 = Global_1879534->f_1172[iParam0]->f_1;
	func_1413(iVar0, uVar1);
	return -2;
}

int func_992(int iParam0)
{
	if (func_253(iParam0))
	{
		if (iParam0 == 11966224)
		{
			func_1414();
		}
		return -2;
	}
	return -1;
}

int func_993(int iParam0)
{
	if (Global_1347477->f_200 || !func_395())
	{
		return -2;
	}
	Global_40.f_11095.f_11[13] = to_float(iParam0);
	Global_1347477->f_201 = 1;
	return -2;
}

int func_994(int iParam0)
{
	if (Global_1347477->f_200 || !func_395())
	{
		return -2;
	}
	fVar0 = func_1415(13);
	fVar0 = (fVar0 + to_float(iParam0));
	Global_40.f_11095.f_11[13] = func_1278(fVar0, Global_40.f_11095.f_40, Global_40.f_11095.f_41);
	Global_1347477->f_201 = 1;
	return -2;
}

int func_995(int iParam0)
{
	Global_40.f_11095.f_40 = to_float(&(Global_1879534->f_1172[iParam0]));
	Global_40.f_11095.f_41 = to_float(Global_1879534->f_1172[iParam0]->f_1);
	return -2;
}

int func_996(int iParam0)
{
	Global_40.f_11095.f_67 = iParam0;
	if (Global_40.f_11095.f_67 >= 9)
	{
		Global_40.f_11095.f_44 = 0.2f;
		func_797();
	}
	if ((Global_40.f_11095.f_67 == 9 && !is_entity_dead(Global_35)) && !func_792())
	{
		_0xd47d47efbf103fb8(Global_35, 3);
	}
	return -2;
}

int func_997(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	uVar1 = Global_1879534->f_1172[iParam0]->f_1;
	if (iVar0 == 0)
	{
		func_1416(uVar1);
	}
	else if (iVar0 == 1)
	{
		func_1417(uVar1);
	}
	else if (iVar0 == 2)
	{
		func_1418(uVar1);
	}
	return -2;
}

int func_998(int iParam0)
{
	if (!func_395())
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	_0xdd560abef5d3784c(&uVar2, &iVar3);
	if (iVar0 == 0 || iVar0 == -1439599467)
	{
		if (iVar3 == 0)
		{
			clear_weather_type_persist();
			if (iVar0 == -1439599467)
			{
				set_random_weather_type(true, true);
			}
		}
		else
		{
			func_1419(8);
			if (iVar0 == -1439599467)
			{
				func_1419(16);
			}
		}
	}
	else if (iVar1 == 0)
	{
		_set_weather_type(iVar0, true, true, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar0, false, true, true, to_float(iVar1), false);
	}
	return -2;
}

int func_999(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	iVar3 = Global_1879534->f_211[iParam0]->f_3;
	if (!func_1420(iVar0))
	{
		return -2;
	}
	if (!func_1421(iVar1))
	{
		return -2;
	}
	if (!func_1422(iVar2))
	{
		return -2;
	}
	if (!func_1423(iVar3))
	{
		return -2;
	}
	func_1103(iVar0, iVar1, 0);
	Global_40.f_7731[iVar0]->f_1 = iVar2;
	Global_40.f_7731[iVar0]->f_2 = iVar3;
	func_697(10, 0, 0, 0, 0);
	return -2;
}

int func_1000(int iParam0)
{
	func_1424(1);
	return -2;
}

int func_1001(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 == true;
	if (!func_61(iVar0))
	{
	}
	if (bVar1)
	{
		func_1425(iVar0, 0, 0);
	}
	else
	{
		func_1425(iVar0, 1, 0);
	}
	return -2;
}

int func_1002(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	uVar1 = Global_1879534->f_1172[iParam0]->f_1;
	if (!func_1426(iVar0, 0))
	{
	}
	func_1427(iVar0, uVar1, 0);
	return -2;
}

int func_1003(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 == true;
	if (!func_1426(iVar0, 0))
	{
	}
	func_1428(iVar0, bVar1);
	return -2;
}

int func_1004(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 == true;
	iVar2 = func_1429(iVar0);
	if (iVar0 <= -1 || iVar0 >= 42)
	{
	}
	iVar3 = func_1430(iVar0);
	switch (iVar2)
	{
		case 0:
			StringCopy(&cVar4, "ODR Ambush ", 64);
			break;
		case 2:
			StringCopy(&cVar4, "EXC Ambush ", 64);
			break;
		case 1:
			StringCopy(&cVar4, "INB Ambush ", 64);
			break;
		case 3:
			StringCopy(&cVar4, "SAV Ambush ", 64);
			break;
		case 4:
			StringCopy(&cVar4, "RNC Ambush ", 64);
			break;
		case 5:
			StringCopy(&cVar4, "BND Ambush ", 64);
			break;
	}
	if (bVar1)
	{
		if (!func_1431(iVar0, 0))
		{
			iVar12 = 0;
			while (iVar12 < iVar3)
			{
				func_1432(iVar2, iVar0, &cVar4, iVar12);
				iVar12++;
			}
		}
	}
	else
	{
		iVar12 = 0;
		while (iVar12 < iVar3)
		{
			func_1433(iVar2, iVar0, iVar12);
			iVar12++;
		}
	}
	return -2;
}

int func_1005(int iParam0)
{
	if (network_is_game_in_progress())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	func_1434(&(Global_1879534->f_1172[iParam0]));
	func_1424(1);
	return -2;
}

int func_1006(int iParam0)
{
	func_1435(iParam0, 0);
	return -2;
}

int func_1007(int iParam0)
{
	if (iParam0 != 0)
	{
		func_1436(iParam0, 0);
	}
	else
	{
		func_1437(0);
	}
	func_1438(iParam0);
	return -2;
}

int func_1008(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (iVar2 == 0)
	{
		func_1439(iVar0, iVar1);
	}
	else
	{
		func_1440(iVar0, iVar1);
	}
	return -2;
}

int func_1009(int iParam0)
{
	func_1441(iParam0, 1);
	return -2;
}

int func_1010(int iParam0)
{
	func_1441(iParam0, 0);
	return -2;
}

int func_1011(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = (func_924(iVar0) + Global_1879534->f_1172[iParam0]->f_1);
	func_921(iVar0, iVar1);
	return -2;
}

int func_1012(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	switch (iVar2)
	{
		case 0:
			if (func_924(iVar0) == iVar1)
			{
				return -2;
			}
			break;
		case 1:
			if (func_924(iVar0) != iVar1)
			{
				return -2;
			}
			break;
		case 2:
			if (func_924(iVar0) < iVar1)
			{
				return -2;
			}
			break;
		case 3:
			if (func_924(iVar0) > iVar1)
			{
				return -2;
			}
			break;
		case 4:
			if (func_924(iVar0) >= iVar1)
			{
				return -2;
			}
			break;
		case 5:
			if (func_924(iVar0) <= iVar1)
			{
				return -2;
			}
			break;
	}
	return -1;
}

int func_1013(int iParam0)
{
	if (Global_1879534->f_1 || Global_1879534->f_1910)
	{
		return -1;
	}
	if (IntToFloat((get_game_timer() - func_497())) <= 5000f)
	{
		return -1;
	}
	if (!func_395())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = func_926(1);
	iVar2 = Global_1879534->f_1172[iParam0]->f_1;
	switch (iVar2)
	{
		case 0:
			if (iVar1 == iVar0)
			{
				return -2;
			}
			break;
		case 1:
			if (iVar1 != iVar0)
			{
				return -2;
			}
			break;
		case 2:
			if (iVar1 < iVar0)
			{
				return -2;
			}
			break;
		case 3:
			if (iVar1 > iVar0)
			{
				return -2;
			}
			break;
		case 4:
			if (iVar1 >= iVar0)
			{
				return -2;
			}
			break;
		case 5:
			if (iVar1 <= iVar0)
			{
				return -2;
			}
			break;
	}
	return -1;
}

int func_1014(int iParam0)
{
	func_1442(iParam0, 1);
	return -2;
}

int func_1015(int iParam0)
{
	func_1317(iParam0, 1);
	return -2;
}

int func_1016(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = _0x76cf93d4b416b288(752193127);
	iVar2 = (iVar1 + iVar0);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar2);
	return -2;
}

int func_1017(int iParam0)
{
	bVar0 = iParam0 > 0;
	func_268(bVar0);
	return -2;
}

int func_1018(int iParam0)
{
	bVar0 = iParam0 > 0;
	iVar1 = _get_bounty_for_player(player_id());
	Global_40.f_11957 = iVar1;
	if (bVar0)
	{
		_set_bounty_for_player(player_id(), 0);
	}
	return -2;
}

int func_1019(int iParam0)
{
	bVar0 = iParam0 > 0;
	if (Global_40.f_11957 == 0 && _get_bounty_for_player(player_id()) == 0)
	{
		return -2;
	}
	_set_bounty_for_player(player_id(), 0);
	if (Global_40.f_11957 > 0)
	{
		_0x0e3bdeed21beb945(player_id(), Global_40.f_11957);
		if (bVar0)
		{
			Global_40.f_11957 = 0;
		}
	}
	return -2;
}

int func_1020()
{
	func_1358();
	return -2;
}

int func_1021(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	bVar2 = Global_1879534->f_211[iParam0]->f_2 != false;
	if (bVar2)
	{
		func_1443(iVar0, uVar1);
	}
	else
	{
		func_1444(iVar0, uVar1);
	}
	return -2;
}

int func_1022(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	bVar2 = Global_1879534->f_211[iParam0]->f_2 != false;
	if (bVar2)
	{
		func_1445(iVar0, uVar1);
	}
	else
	{
		func_1446(iVar0, uVar1);
	}
	return -2;
}

int func_1023(int iParam0)
{
	if (iParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_0x5d6182f3bce1333b(5, -142743235);
		if (func_248(59))
		{
			func_1447();
		}
		else
		{
			func_1448();
			func_1449();
			_0xe36d4a38d28d9cfb(1);
		}
		func_1407(24);
	}
	else
	{
		func_1450(Global_35, 1742487518);
		func_1451();
		_0x5d6182f3bce1333b(5, -142743235);
		if (!func_248(59))
		{
			func_1452(1, 0, 1);
			func_1453();
		}
		func_402(24);
	}
	return -2;
}

int func_1024(int iParam0)
{
	if (iParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1454(&(Global_40.f_7443), 1);
	}
	else
	{
		func_1455(&(Global_40.f_7443), 0);
		func_429(Global_35, -1515874150, 0, 99217379, 1, 1, 1, 0, 1, 1);
	}
	return -2;
}

int func_1025(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	bVar1 = Global_1879534->f_211[iParam0]->f_1 == true;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (!func_61(iVar0))
	{
		return -2;
	}
	if (!bVar1)
	{
		func_1456(iVar0, 0, 1);
	}
	func_1312(iVar0, bVar1, iVar2);
	return -2;
}

int func_1026(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 == true;
	if (!func_61(iVar0))
	{
		return -2;
	}
	func_1456(iVar0, bVar1, 1);
	return -2;
}

int func_1027(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 == true;
	if (!func_1457(iVar0))
	{
		return -2;
	}
	func_1458(iVar0, bVar1);
	return -2;
}

int func_1028(int iParam0)
{
	iVar0 = &Global_1879534->f_211[iParam0];
	bVar1 = Global_1879534->f_211[iParam0]->f_1 == true;
	bVar2 = Global_1879534->f_211[iParam0]->f_2 == true;
	if (!func_1459(iVar0))
	{
		return -2;
	}
	func_1460(iVar0, bVar1, bVar2);
	return -2;
}

int func_1029(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = Global_1879534->f_1172[iParam0]->f_1 == true;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (&Global_1879534)
	{
		return -2;
	}
	func_295(iVar0, bVar1);
	return -2;
}

int func_1030(int iParam0)
{
	func_1461(iParam0);
	return -2;
}

int func_1031(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		if (func_56() != -1)
		{
			return -2;
		}
		_unlock_set_unlocked(iVar0, true);
	}
	return -2;
}

int func_1032()
{
	if (func_932(&Global_0, 3))
	{
		return -1;
	}
	func_55(&Global_0, 1);
	func_55(&Global_0, 32);
	func_55(&Global_0, 64);
	return -2;
}

int func_1033()
{
	if (func_932(&Global_0, 3))
	{
		return -1;
	}
	return -2;
}

int func_1034(int iParam0)
{
	if (func_1462(iParam0))
	{
		return -2;
	}
	if (!&Global_1879534 && func_926(1) <= 0)
	{
		return -2;
	}
	return -1;
}

int func_1035(int iParam0)
{
	if (func_249(iParam0))
	{
		func_250(iParam0, 1);
	}
	return -2;
}

int func_1036(int iParam0)
{
	iVar0 = iParam0;
	if (!func_84(iVar0))
	{
		return -2;
	}
	if (func_480(iVar0))
	{
		return -2;
	}
	if (func_473(&Global_1935630, 1048576))
	{
		return -1;
	}
	if (func_57(32768))
	{
		return -1;
	}
	if (!func_480(iVar0))
	{
		if (!func_473(&Global_1935630, 2048) && !func_230(0, 1, 1))
		{
			if (func_56() == -1 && func_932(&Global_0, 3))
			{
				func_1463();
				return -1;
			}
			if (func_53(iVar0, 1, 1, 1, 0))
			{
				return -2;
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_1037(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (!func_84(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_1;
	uVar2 = Global_1879534->f_211[iParam0]->f_2;
	if (func_480(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_1038(int iParam0)
{
	if (func_480(iParam0) || (func_1464(iParam0) && (Global_1430242->f_1 + Global_1430242->f_3) == 1))
	{
		return -2;
	}
	return -1;
}

int func_1039(int iParam0)
{
	iVar0 = iParam0;
	if (func_1465(iVar0))
	{
		func_1466(iVar0);
	}
	return -2;
}

int func_1040(int iParam0)
{
	iVar0 = iParam0;
	if (func_1465(iVar0))
	{
		func_1467(iVar0);
	}
	return -2;
}

int func_1041(int iParam0)
{
	func_330(iParam0, 1);
	return -2;
}

int func_1042(int iParam0)
{
	iVar0 = iParam0;
	if (!func_1060(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_1043(int iParam0)
{
	iVar0 = -2;
	if (iParam0 == -1)
	{
		return iVar0;
	}
	iVar1 = &Global_1879534->f_1172[iParam0];
	if (iVar1 == 0)
	{
		return iVar0;
	}
	if (!func_1468(iVar1, &uVar2))
	{
		return iVar0;
	}
	Var13 = { *(*Global_1887078)[iParam0] };
	Var18.f_9 = -1591664384;
	bVar36 = false;
	iVar32 = Var13.f_1;
	iVar33 = Var13.f_2;
	switch (Var13)
	{
		case 0:
		default:
			Var13 = 0;
			iVar0 = -1;
			break;
			if (!func_101("ALL COACHES", &iVar32, &iVar33, -1591664384, 0))
			{
				Var13.f_1 = iVar32;
				Var13.f_2 = iVar33;
				iVar0 = -1;
			}
			else
			{
				Var13.f_1 = iVar32;
				Var13.f_2 = iVar33;
				iVar34 = 0;
				while (iVar34 < iVar33)
				{
					if (!func_102(&Var18, iVar34, iVar32, iVar33))
					{
					}
					else if (Var18.f_4 == 0)
					{
					}
					else
					{
						iVar35 = 0;
						while (iVar35 < 10)
						{
							if (&uVar2[iVar35] == 0)
							{
							}
							else if (Var18.f_4 != &uVar2[iVar35])
							{
							}
							else
							{
								bVar36 = true;
							}
							iVar35++;
						}
					}
					iVar34++;
				}
				if (!bVar36)
				{
					Var13 = 1;
				}
				else
				{
					Var13 = 2;
				}
				func_104(iVar32);
				iVar0 = -1;
				Jump @390; //curOff = 322
				if (!Var13.f_4)
				{
					Var13.f_4 = 1;
					Var13.f_3 = get_network_time_accurate();
				}
				if (absi(get_time_difference(Var13.f_3, get_network_time_accurate())) > 30000)
				{
					Var13 = 0;
					Var13.f_4 = 0;
				}
				iVar0 = -1;
				Jump @390; //curOff = 379
				iVar0 = -2;
			}
			*(*Global_1887078)[iParam0] = { Var13 };
			return iVar0;
			default:
				break;
	}
}

int func_1044(int iParam0)
{
	iVar0 = iParam0;
	if (!func_1469(iVar0))
	{
		return -1;
	}
	if (func_1470(iVar0))
	{
		return -2;
	}
	if (func_1471(iVar0, 0, player_id(), 0))
	{
		return -2;
	}
	return -1;
}

int func_1045()
{
	if (func_1472(255))
	{
		return -1;
	}
	return -2;
}

int func_1046()
{
	_0x2c5bd9a43987aa27(1);
	return -2;
}

int func_1047(int iParam0)
{
	iVar0 = &Global_1879534->f_1172[iParam0];
	iVar1 = Global_1879534->f_1172[iParam0]->f_1;
	iVar2 = -1;
	iVar3 = -1;
	if (func_1473(player_id()))
	{
		iVar2 = iVar1;
		iVar3 = iVar0;
		iVar4 = 15;
	}
	else
	{
		iVar2 = iVar0;
		iVar3 = iVar1;
		iVar4 = 16;
	}
	if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar2]), 1))
	{
		func_1474(iVar3, iVar2);
		return -2;
	}
	iVar5 = Global_1879534->f_7301.f_2[iVar2]->f_1;
	iVar6 = &Global_1879534->f_7222[iVar2];
	iVar7 = Global_1879534->f_7222[iVar2]->f_1;
	if (iVar5 < iVar6)
	{
		func_1474(iVar3, iVar2);
		return -2;
	}
	if (iVar5 > iVar7)
	{
		func_1474(iVar3, iVar2);
		return -2;
	}
	iVar8 = iVar6;
	iVar9 = -1;
	while (iVar8 <= iVar7)
	{
		if (!&Global_1879534->f_1911[iVar8] == 531432813)
		{
			iVar8++;
		}
		else
		{
			iVar9 = Global_1879534->f_1911[iVar8]->f_2;
			iVar10 = &Global_1879534->f_211[iVar9];
			if (iVar10 != iVar4)
			{
				iVar8++;
			}
			else
			{
				Global_1879534->f_7301.f_2[iVar2]->f_1 = iVar8;
				func_1474(iVar3, iVar2);
				return -2;
			}
		}
	}
	return -2;
}

int func_1048(int iParam0)
{
	iVar0 = iParam0;
	if (!func_1469(iVar0))
	{
		return -1;
	}
	if (func_1470(iVar0))
	{
		return -2;
	}
	if (func_1471(iVar0, 0, player_id(), 0))
	{
		return -2;
	}
	return -1;
}

int func_1049(int iParam0)
{
	if (func_56() == 0)
	{
		if (!func_1475())
		{
			return -1;
		}
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	iVar1 = Global_1879534->f_211[iParam0]->f_1;
	iVar2 = Global_1879534->f_211[iParam0]->f_2;
	iVar3 = Global_1879534->f_211[iParam0]->f_3;
	if (iVar0 == -1)
	{
		set_bit(&iVar3, 0);
		set_bit(&iVar3, 1);
	}
	else
	{
		if (!is_bit_set(iVar3, 0))
		{
			if (!Global_1935630 & 2048 != 0 && !func_230(0, 1, 1))
			{
				if (func_931(iVar0, 0, 0, -1))
				{
					set_bit(&iVar3, 0);
				}
			}
		}
		if (!is_bit_set(iVar3, 1) && is_bit_set(iVar3, 0))
		{
			if (func_248(iVar0))
			{
				set_bit(&iVar3, 1);
			}
		}
	}
	if (iVar1 == -1)
	{
		set_bit(&iVar3, 2);
		set_bit(&iVar3, 3);
	}
	else
	{
		if (!is_bit_set(iVar3, 2))
		{
			if (!Global_1935630 & 2048 != 0 && !func_230(0, 1, 1))
			{
				if (func_931(iVar1, 0, 0, -1))
				{
					set_bit(&iVar3, 2);
				}
			}
		}
		if (!is_bit_set(iVar3, 3) && is_bit_set(iVar3, 2))
		{
			if (func_248(iVar1))
			{
				set_bit(&iVar3, 3);
			}
		}
	}
	if (iVar2 == -1)
	{
		set_bit(&iVar3, 4);
		set_bit(&iVar3, 5);
	}
	else
	{
		if (!is_bit_set(iVar3, 4))
		{
			if (!Global_1935630 & 2048 != 0 && !func_230(0, 1, 1))
			{
				if (func_931(iVar2, 0, 0, -1))
				{
					func_1207(func_1370(iVar2), func_197(iVar2), 0, (*Global_1835011)[iVar2]->f_21, func_184());
					set_bit(&iVar3, 4);
				}
			}
		}
		if (!is_bit_set(iVar3, 5) && is_bit_set(iVar3, 4))
		{
			if (func_248(iVar2))
			{
				set_bit(&iVar3, 5);
			}
		}
	}
	Global_1879534->f_211[iParam0]->f_3 = iVar3;
	if ((is_bit_set(iVar3, 1) && is_bit_set(iVar3, 3)) && is_bit_set(iVar3, 5))
	{
		return -2;
	}
	return -1;
}

int func_1050(int iParam0)
{
	uVar0 = &Global_1879534->f_1172[iParam0];
	bVar1 = false;
	switch (Global_1887078->f_1718)
	{
		case 0:
			Global_1887078->f_1720 = -1;
			iVar2 = func_1476(uVar0);
			if (iVar2 == -1)
			{
			}
			else
			{
				Global_1887078->f_1720 = iVar2;
				func_1477(1);
			}
			break;
		case 1:
			if (Global_1887078->f_1720 == -1)
			{
				func_1477(0);
			}
			else if (func_1478(Global_1887078->f_1720))
			{
				bVar1 = true;
			}
			break;
		case 2:
			func_1477(0);
			break;
	}
	if (bVar1)
	{
		func_1477(0);
		Global_1887078->f_1720 = -1;
		return -2;
	}
	return -1;
}

int func_1051()
{
	func_1479();
	return -2;
}

int func_1052(int iParam0)
{
	iVar0 = iParam0;
	if (!func_1469(iVar0))
	{
		return -1;
	}
	if (func_1471(iVar0, 0, player_id(), 0))
	{
		return -2;
	}
	return -1;
}

int func_1053(int iParam0)
{
	iVar0 = 0;
	if (func_1473(player_id()))
	{
		iVar0 = &Global_1879534->f_1172[iParam0];
	}
	else
	{
		iVar0 = Global_1879534->f_1172[iParam0]->f_1;
	}
	if (iVar0 == 0 || !func_1469(iVar0))
	{
		return -2;
	}
	if (func_1471(iVar0, 0, player_id(), 0))
	{
		return -2;
	}
	return -2;
}

int func_1054(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (!func_73(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_2;
	uVar2 = Global_1879534->f_211[iParam0]->f_3;
	if (func_329((*Global_1835011)[iVar0]->f_1) == Global_1879534->f_211[iParam0]->f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_1055(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (!func_84(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534->f_211[iParam0]->f_2;
	uVar2 = Global_1879534->f_211[iParam0]->f_3;
	if (func_329((*Global_1347702)[iVar0]->f_15) == Global_1879534->f_211[iParam0]->f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_1056(int iParam0)
{
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1879534->f_211[iParam0];
	if (!func_84(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534->f_211[iParam0]->f_2;
	iVar2 = Global_1879534->f_211[iParam0]->f_1;
	uVar3 = Global_1879534->f_211[iParam0]->f_3;
	iVar4 = func_1147((*Global_1347702)[iVar0]->f_15);
	func_303(&iVar4, 0, 0, iVar1, 0, 0, 0, 0);
	switch (iVar2)
	{
		case 2:
		case 5:
			if (!func_1480(iVar4))
			{
				return uVar3;
			}
			break;
		case 3:
		case 4:
			if (func_1480(iVar4))
			{
				return uVar3;
			}
			break;
	}
	return -2;
}

int func_1057(int iParam0)
{
	if (!func_395())
	{
		return -2;
	}
	if (&Global_1879534)
	{
		return -2;
	}
	vVar0.x = to_float(&(Global_1879534->f_211[iParam0]));
	vVar0.f_1 = to_float(Global_1879534->f_211[iParam0]->f_1);
	vVar0.f_2 = to_float(Global_1879534->f_211[iParam0]->f_2);
	_set_entity_coords_and_heading(Global_35, vVar0, to_float(Global_1879534->f_211[iParam0]->f_3), true, false, true);
	return -2;
}

int func_1058(int iParam0)
{
	if (!func_1481(iParam0))
	{
		return -2;
	}
	func_1482(iParam0);
	return -2;
}

int func_1059(int iParam0)
{
	if (!func_1481(iParam0))
	{
		return -2;
	}
	func_1483(iParam0);
	return -2;
}

bool func_1060(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_1061(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	else if (!func_4((*Global_1392626)[iParam0]->f_3))
	{
		return;
	}
	if (!is_bit_set(Global_40.f_9052, iParam0))
	{
		func_207(iParam0);
		set_bit(&(Global_40.f_9052), iParam0);
	}
	if (func_263((*Global_1392626)[iParam0]->f_3) == 3)
	{
		func_213((*Global_1392626)[iParam0]->f_3, 0, 2);
	}
}

void func_1062(int iParam0)
{
	Global_1946804->f_1 = iParam0;
}

void func_1063(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = func_1484(iParam1);
	if (iParam0 == 0)
	{
		func_625(0);
	}
	else if (iParam0 == 2)
	{
		func_627(0);
	}
	else if (iParam0 == 1)
	{
		func_626(0, bParam3);
	}
	set_attribute_points(Global_35, iParam0, iVar0);
	Global_40.f_11095.f_11[iParam0] = to_float(iVar0);
	if (bParam2)
	{
		func_295(func_1485(iParam0), 0);
		func_1486(iParam0, iParam1, 0);
		func_1487(iParam0, 7000);
	}
}

void func_1064(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_11, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_10, bParam2);
}

char* func_1065(int iParam0, bool bParam1)
{
	if (Global_40.f_39 == 11966224 || bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_JOHN_GENERAL";
			case 1:
				return "PLAYER_JOHN_HEALTH";
			case 2:
				return "PLAYER_JOHN_STAMINA";
			case 3:
				return "PLAYER_JOHN_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_ARTHUR_GENERAL";
			case 1:
				return "PLAYER_ARTHUR_HEALTH";
			case 2:
				return "PLAYER_ARTHUR_STAMINA";
			case 3:
				return "PLAYER_ARTHUR_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	return "";
}

char* func_1066()
{
	return "pausemenu_player";
}

int func_1067(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2069893421;
		case 1:
			return 1747661667;
		case 2:
			return -875426853;
		case 3:
			return 757105507;
		case 4:
			return -1879729569;
		case 5:
			return 787316203;
		case 6:
			return 2129028479;
		case 7:
			return 1261138928;
		case 8:
			return -1894256235;
		case 9:
			return 1706052688;
		case 10:
			return 1285391378;
		case 11:
			return 693005399;
		case 12:
			return 790678034;
		case 13:
			return 2031132011;
		case 14:
			return -1019271530;
		case 15:
			return 1183803081;
		case 16:
			return 1338756401;
		case 17:
			return 744226541;
		case 18:
			return 530671939;
		case 19:
			return -367868014;
		case 20:
			return -1549775456;
		case 21:
			return -1604265010;
		case 22:
			return -1827447245;
		case 23:
			return -759061492;
		case 24:
			return 1105471824;
		case 25:
			return -2048056274;
		case 26:
			return 1741725206;
		case 27:
			return 1901448492;
		case 28:
			return 911414965;
		case 29:
			return 1062881804;
		case 30:
			return -944178516;
		case 31:
			return 1400887301;
		case 32:
			return 1865339861;
		case 33:
			return 1440632655;
		case 34:
			return -1157194180;
		case 35:
			return -1151085798;
		case 36:
			return -1915486054;
		case 37:
			return -377574959;
		case 38:
			return -102827824;
		case 39:
			return 41932468;
		case 40:
			return 1437199060;
		case 41:
			return 1985273028;
		case 42:
			return -1988984077;
		case 43:
			return 1261539922;
		case 44:
			return -1190908814;
		case 45:
			return 805845691;
		case 46:
			return 214785091;
		case 47:
			return -1169075737;
		case 48:
			return -2073547330;
		case 49:
			return 1472024063;
		case 50:
			return -585098035;
		case 51:
			return -2141145462;
		case 52:
			return -832908671;
		case 53:
			return 1961205920;
		case 54:
			return -2038873145;
		case 55:
			return -1327698122;
		case 56:
			return 992695664;
		case 57:
			return -937655290;
		case 58:
			return -1914604474;
		case 59:
			return 205166155;
		case 60:
			return 1780028424;
		case 61:
			return -835345303;
		case 62:
			return 558731558;
		case 63:
			return 1921351553;
		case 64:
			return -378561682;
		case 65:
			return 1306457250;
		case 66:
			return 1131758526;
		case 67:
			return 358997942;
		case 68:
			return -1976230089;
		case 69:
			return -907971236;
		case 70:
			return 253727941;
		case 71:
			return -1271310569;
		case 72:
			return -1461871483;
		case 73:
			return -1239377811;
		case 74:
			return 1639899405;
		case 75:
			return -1816811601;
		case 76:
			return -2139497371;
		case 77:
			return 978801228;
		case 78:
			return -1309844859;
		case 79:
			return -102545856;
		case 80:
			return -1882615108;
		case 81:
			return 104820669;
		case 82:
			return 72801698;
		case 83:
			return -1533288167;
		case 84:
			return 2041846130;
		case 85:
			return -350556716;
		case 86:
			return -353010695;
		case 87:
			return -692335380;
		case 88:
			return 1504223919;
		case 89:
			return -520556863;
		case 90:
			return 713508039;
		case 91:
			return -82191741;
		case 92:
			return -1221836150;
		case 93:
			return 229544920;
		case 94:
			return 1423490462;
		case 95:
			return 266787856;
		case 96:
			return -863017340;
		case 97:
			return 175025255;
		case 98:
			return -2066076661;
		case 99:
			return 745945503;
		case 100:
			return -596510485;
		case 101:
			return 1995043222;
		case 102:
			return 709801630;
		case 103:
			return 1190538002;
		case 104:
			return -1812870325;
		case 105:
			return 1753192824;
		case 106:
			return -936508922;
		case 107:
			return -1672929718;
		case 108:
			return 1562378696;
		case 109:
			return 7562841;
		case 110:
			return 1250977037;
		case 111:
			return 1139025222;
		case 112:
			return 1128086492;
		case 113:
			return -1948083328;
		case 114:
			return 1993361168;
		case 115:
			return 1314299724;
		case 116:
			return 0;
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

int func_1068(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return -508547493;
		case 11966224:
			return -676452144;
		default:
			break;
	}
	return 0;
}

void func_1069()
{
	if (func_1068(get_entity_model(Global_35)) == -676452144)
	{
		_0x2b4ce170de09f346(Global_35, 531055934);
		_0x2b4ce170de09f346(Global_35, -676452144);
		_0x1e017404784aa6a3(Global_35, 1862763509);
		_0x1e017404784aa6a3(Global_35, 455003611);
		_0x1e017404784aa6a3(Global_35, 487851963);
	}
}

void func_1070(int iParam0)
{
	iParam0 = func_232(iParam0);
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
	func_1074(&Var0);
	func_1075(iParam0, Var0);
	func_1488(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1489(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1490(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1491(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1492(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1493(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1494(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1495(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1496(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1071()
{
	return -997197050;
}

int func_1072()
{
	return -2063289686;
}

int func_1073()
{
	return 2;
}

void func_1074(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1075(int iParam0, struct<2> Param1)
{
	iParam0 = func_232(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1497(iParam0, Param1))
	{
	}
	if (!func_1498(iParam0, Param1.f_1))
	{
	}
}

void func_1076(int iParam0, int iParam1)
{
	iParam0 = func_232(iParam0);
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

void func_1077(int iParam0)
{
	Global_40.f_1095 = iParam0;
}

void func_1078(var uParam0)
{
	func_1499(uParam0);
	func_1501(uParam0, func_1500(-1346384396));
	func_1502(uParam0, func_1500(-712836614));
	func_1503(uParam0, func_1500(-1629133289));
	func_1504(uParam0, func_1500(1302066700));
	func_1505(uParam0, func_1500(599669344));
	func_1506(uParam0, func_1500(-1555511632));
}

void func_1079(struct<6> Param0)
{
	if (!func_1507(Param0.f_4, 1))
	{
	}
	if (!func_1507(Param0, 1))
	{
	}
	if (!func_1507(Param0.f_2, 1))
	{
	}
	if (!func_1507(Param0.f_5, 1))
	{
	}
	if (!func_1507(Param0.f_3, 1))
	{
	}
	if (!func_1507(Param0.f_1, 1))
	{
	}
}

void func_1080(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1081(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1082(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

void func_1083(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

int func_1084()
{
	return -868094182;
}

int func_1085()
{
	return 1074477367;
}

int func_1086()
{
	return 1;
}

bool func_1087(int iParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1946804->f_2535.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_1508(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1509(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_1510(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

int func_1088(int iParam0)
{
	Var1 = -961687407;
	if (func_56() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_1094(iVar0);
}

int func_1089(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_697(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_697(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1511(0))
	{
	}
	func_1512(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

void func_1090(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_1091(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1092(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_689(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_689(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_689(iParam0, 1)])->f_10 && iParam1));
}

int func_1093(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_690();
	}
	if (func_56() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1095(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1513(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1184(iVar0, 1);
			if (func_1514(iVar0, iParam1))
			{
				vVar4 = { func_691(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1515(iVar7, 4))
				{
					func_1092(iVar7, 4, 6);
				}
			}
			else
			{
				func_1516(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_1096(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_56() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1129(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1097(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1098(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_103(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1514(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1264(iVar1, iVar3);
		}
	}
	if (func_839(-1586649372) && func_1514(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1264(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
			}
			func_1517(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1517(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1517(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1517(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1517(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1517(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1264(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1264(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_103(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1264(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1256(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_103(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1264(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_357(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1256(&(Global_1946804->f_1497.f_1[iVar1])) || func_357(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1264(iVar1, iVar3);
					}
				}
			}
			switch (func_103(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_103(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1264(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_103(&(uParam0->f_1[iVar1])) || func_357(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1264(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_1099()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1100(int iParam0, int iParam1, int iParam2)
{
	iVar3 = 0;
	bVar2 = func_56() != -1;
	if (func_690() == 24043185)
	{
		iVar3 = 1;
	}
	iVar0 = func_1518(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_1519(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2653 = iParam0;
		}
		else if (func_1519(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1518(iParam0 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2653 = iParam0;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1520(0);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = 289238755;
				Global_1946804->f_2653 = iParam0;
			}
			else
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
				Global_1946804->f_2653 = iParam0;
			}
		}
	}
	iVar0 = func_1518(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_1519(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2654 = iParam1;
		}
		else if (func_1519(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1518(iParam1 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2654 = iParam1;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1520(1);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = 289238755;
				Global_1946804->f_2654 = iParam1;
			}
			else
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
				Global_1946804->f_2654 = iParam1;
			}
		}
	}
	iVar0 = func_1518(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_1519(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2655 = iParam2;
		}
		else if (func_1519(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1518(iParam2 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2655 = iParam2;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1520(2);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = 289238755;
				Global_1946804->f_2655 = iParam2;
			}
			else
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
				Global_1946804->f_2655 = iParam2;
			}
		}
	}
}

int func_1101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_689(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_690() == 24043185)
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_1099();
	}
	if (iParam1 != 1155669136 && func_1519(&(Global_1946804->f_1378.f_1[iVar0]), iVar1, iParam1, func_56() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946804->f_2456[iVar0] = 0;
		Global_1946804->f_2456[iVar0]->f_1 = 0;
	}
	Global_1946804->f_1378.f_1[iVar0]->f_1 = iParam1;
	Global_1946804->f_1497.f_1[iVar0]->f_1 = iParam1;
	if (bParam5)
	{
		if (is_ped_a_player(iParam0))
		{
			func_697(17, iParam2, 0, 0, 0);
		}
		else
		{
			func_697(17, iParam2, 1, iParam0, 0);
		}
	}
	func_1102(0);
	return 1;
}

void func_1102(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_1103(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1420(iParam0))
	{
		return;
	}
	if (!func_1421(iParam1))
	{
		return;
	}
	if (&Global_40.f_7731[iParam0] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0] = iParam1;
	if (!bParam2)
	{
		bVar2 = (&Global_40.f_7731[iParam0] < 7 && func_1521(iParam0));
		Global_40.f_7731[iParam0]->f_3 = func_59();
		func_1522(iParam0, &iVar0, &iVar1, bVar2);
		func_303(&(Global_40.f_7731[iParam0]->f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_1104()
{
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (func_56() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			func_693(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar4);
			func_693(Global_1946804->f_1497.f_1[iVar1], iVar1, iVar4);
			func_693(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar4);
			func_693(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		func_1523(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar4);
		func_1523(Global_1946804->f_1497.f_1[iVar1], iVar1, iVar4);
		func_1523(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar4);
		func_1523(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar4);
		iVar4++;
	}
}

void func_1105()
{
	iVar0 = func_59();
	func_303(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_1524(0) <= 1)
	{
		decor_set_int(Global_35, "chinShort", iVar0);
		if (decor_exist_on(Global_35, "chinLong"))
		{
			decor_remove(Global_35, "chinLong");
		}
	}
	else if (decor_exist_on(Global_35, "chinShort"))
	{
		decor_remove(Global_35, "chinShort");
	}
	if (func_1524(1) <= 1)
	{
		decor_set_int(Global_35, "chopsShort", iVar0);
		if (decor_exist_on(Global_35, "chopsLong"))
		{
			decor_remove(Global_35, "chopsLong");
		}
	}
	else if (decor_exist_on(Global_35, "chopsShort"))
	{
		decor_remove(Global_35, "chopsShort");
	}
	if (func_1524(2) <= 1)
	{
		decor_set_int(Global_35, "stacheShort", iVar0);
		if (decor_exist_on(Global_35, "stacheLong"))
		{
			decor_remove(Global_35, "stacheLong");
		}
	}
	else if (decor_exist_on(Global_35, "stacheShort"))
	{
		decor_remove(Global_35, "stacheShort");
	}
}

void func_1106(int iParam0)
{
	func_1525(&(Global_1946804->f_1378), iParam0);
}

bool func_1107()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_1108(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
		default:
			break;
	}
	return false;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582;
		case -1051664629:
			return -1472456118;
		case 1471627791:
			return -2120294484;
		case 1012091683:
			return -814448122;
		case 282876023:
			return 1279519416;
		case 1334801974:
			return 933586678;
		case -736147717:
			return 1612093252;
		case -245303732:
			return 530132198;
		case -1900633994:
			return -499492817;
		case -1511041621:
			return -1392593303;
		case -193909113:
			return -2091943191;
		case -929316746:
			return 1165676701;
		case -1147723761:
			return 1380556716;
		case 963009459:
			return -1140711191;
		case 602337354:
			return -1189021969;
		case -1471756535:
			return 862555979;
		case -2017785881:
			return -674783297;
		case -827216318:
			return 279124309;
		default:
			break;
	}
	return 0;
}

void func_1110()
{
	iVar0 = 1;
	if (func_56() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_693(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_1523(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
		iVar1++;
	}
}

var func_1111()
{
	return &(Global_1946804->f_1497.f_1[1]);
}

void func_1112(int iParam0, bool bParam1)
{
	if (!func_1526(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_59();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_1527());
		func_1528(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_303(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_1113()
{
	if (func_1529() <= 3)
	{
		iVar0 = func_59();
		func_303(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		decor_set_int(Global_35, "hairShort", iVar0);
		if (decor_exist_on(Global_35, "hairLong"))
		{
			decor_remove(Global_35, "hairLong");
		}
	}
	else if (decor_exist_on(Global_35, "hairShort"))
	{
		decor_remove(Global_35, "hairShort");
	}
}

void func_1114(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1115()
{
	if (func_56() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_1116(int iParam0)
{
	iVar0 = func_1093(0);
	iVar1 = 0;
	func_1129(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
	{
		return false;
	}
	if (!_0xa63cd20f19b961ab(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

bool func_1117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		default:
			break;
	}
	return false;
}

void func_1118(int iParam0, bool bParam1, int iParam2)
{
	func_1120(&(Global_1946804->f_1378), iParam0);
	func_1121(2, iParam0, 6);
	if (bParam1)
	{
		func_1119(0, 1);
	}
}

void func_1119(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1102(0);
	}
	if (bParam0)
	{
		func_1182(8);
		func_1182(512);
	}
	else
	{
		func_1182(8);
		func_1182(16);
	}
}

void func_1120(var uParam0, int iParam1)
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_693(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1523(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1121(int iParam0, int iParam1, int iParam2)
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

int func_1122(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1115();
	}
	if (func_56() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1123(int iParam0, int iParam1)
{
	if (!func_835(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_1124(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_1125()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_823(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	task_play_anim(Global_35, func_1530(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1090(1);
	remove_anim_dict(func_1530());
}

bool func_1126(int iParam0)
{
	return false;
}

void func_1127(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_834(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_56() != -1)
	{
		return;
	}
	func_1099();
	if (bParam5)
	{
		if (!func_1531(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_823(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_602();
	}
	func_611(iVar3, 1, 1, 1, 1, 1);
	func_697(31, 0, 0, 0, 0);
	func_825(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (is_ped_a_player(iParam1))
		{
			func_697(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_697(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_1512(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1128(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

void func_1129(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1130(int iParam0)
{
	if (func_56() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1131(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1532(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1533(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_103(iParam0) != -999503751)
	{
		func_1534(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1132(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_690();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1133(int iParam0, int iParam1)
{
	Var0 = { func_374(iParam0, 0, 0) };
	Var5 = { func_376(iParam0, Var0, Var0.f_4, 0) };
	if (func_1212(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_233(0), &Var5);
	return 1;
}

void func_1134()
{
	if (func_56() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1135(int iParam0)
{
	return func_1535(func_1162(iParam0));
}

void func_1136(int iParam0, bool bParam1)
{
	Var0 = { func_374(iParam0, 0, 0) };
	Var5 = { func_376(iParam0, Var0, Var0.f_4, 0) };
	if (func_1212(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_233(0), &Var5, bParam1);
}

int func_1137()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225639->f_8;
		Global_36 = { Global_1225639->f_16 };
		return Global_1225639->f_10;
	}
	Global_35 = get_player_ped(player_id());
	Global_36 = { get_entity_coords(Global_35, false, false) };
	return player_id();
}

void func_1138()
{
	Global_1935630->f_13 = 0;
	Global_1935630->f_14 = 0;
	Global_1935630->f_26 = 0;
	Global_1935630->f_15 = 0;
	Global_1935630->f_16 = 0;
	Global_1935630->f_17 = 0;
	Global_1935630->f_18 = 0;
	Global_1935630->f_19 = -1;
	Global_1935630->f_20 = -1;
	Global_1935630->f_21 = -1;
	Global_1935630->f_23 = 0;
}

void func_1139()
{
}

void func_1140()
{
	_0x95ee1dee1dcd9070(player_id(), 1);
	if (func_159(47))
	{
		_0xa63fcad3a6fec6d2(player_id(), 1);
	}
	else
	{
		_0xa63fcad3a6fec6d2(player_id(), 0);
	}
}

void func_1141(int iParam0)
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
			func_1243(0);
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
			_uitutorial_set_rpg_icon_visibility(5, 2);
			_uitutorial_set_rpg_icon_visibility(4, 2);
			func_1536(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 2);
			_uitutorial_set_rpg_icon_visibility(0, 2);
			func_1536(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 2);
			_uitutorial_set_rpg_icon_visibility(2, 2);
			func_1536(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 2);
			_uitutorial_set_rpg_icon_visibility(6, 2);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 2);
			_uitutorial_set_rpg_icon_visibility(8, 2);
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
			func_1245(0);
			break;
		case 34:
			func_1246(0);
			break;
		case 35:
			func_1247(0);
			break;
		case 36:
			break;
		case 37:
			func_1248(1);
			break;
		case 38:
			func_1249(1);
			break;
		case 39:
			func_1250(1);
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
			_set_deadeye_ability_locked(get_player_index(), 1, true);
			_set_deadeye_ability_locked(get_player_index(), 2, true);
			_set_deadeye_ability_locked(get_player_index(), 3, true);
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			_set_deadeye_ability_level(get_player_index(), 0);
			break;
		case 2:
			_set_deadeye_ability_locked(get_player_index(), 2, true);
			_set_deadeye_ability_locked(get_player_index(), 3, true);
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 1)
			{
				_set_deadeye_ability_level(get_player_index(), 1);
			}
			break;
		case 3:
			_set_deadeye_ability_locked(get_player_index(), 3, true);
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 2)
			{
				_set_deadeye_ability_level(get_player_index(), 2);
			}
			break;
		case 4:
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 3)
			{
				_set_deadeye_ability_level(get_player_index(), 3);
			}
			break;
		case 5:
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 4)
			{
				_set_deadeye_ability_level(get_player_index(), 4);
			}
			break;
		case 24:
			_unlock_set_unlocked(-200143754, false);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 0);
			break;
		case 48:
			_0xc900a465364a85d6(player_id());
			break;
		case 50:
			_0xc900a465364a85d6(player_id());
			break;
		case 49:
			_0xc900a465364a85d6(player_id());
			break;
		case 51:
			_0xc900a465364a85d6(player_id());
			break;
		case 23:
			_0x5b9813ecf7633fe8(1);
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
			_unlock_set_unlocked(-843169622, false);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			_unlock_set_unlocked(-1526891582, false);
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 0);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, false);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, false);
			break;
		case 54:
			_unlock_set_unlocked(296662302, false);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, false);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, false);
			break;
	}
}

void func_1142(int iParam0, int iParam1)
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
			func_1537((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1537(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_4(&(Global_1898164->f_1[0])))
	{
		func_31(&(Global_1898164->f_1[0]), 3);
	}
}

bool func_1143(int iParam0)
{
	return iParam0 > -1;
}

bool func_1144(int iParam0)
{
	func_1151(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1145(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1146(1);
	}
}

void func_1146(bool bParam0)
{
	if (bParam0)
	{
		func_1538(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1539(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1147(int iParam0)
{
	if (!func_4(iParam0))
	{
		return -15;
	}
	return func_1540(iParam0);
}

bool func_1148(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1149(int iParam0)
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

bool func_1150(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1151(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1541(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1152(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1153(int iParam0, int iParam1, bool bParam2)
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

int func_1154()
{
	iVar0 = func_646();
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

int func_1155(int iParam0)
{
	if (func_56() != -1)
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
	fVar1 = func_1542(absf(fVar1) < 1f, func_1542(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1156(int iParam0)
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

int func_1157()
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

void func_1158(int iParam0, bool bParam1, int iParam2)
{
	func_1543((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1544(iParam0);
}

void func_1159(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1545(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1160(bool bParam0)
{
	bVar3 = false;
	if (func_1546(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1547(iVar5, &iVar2, &iVar0))
			{
				if (!func_138(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1548(iVar2);
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
							if (func_144(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1154() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1154() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1549();
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

char* func_1161(int iParam0)
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

int func_1162(int iParam0)
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

void func_1163(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1164(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_1165(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_56() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1550(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_1166(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (func_1550(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1167(bool bParam0)
{
	if (bParam0)
	{
		func_157(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1168();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1551(2032023096);
		func_291(-615217896);
		func_34(655868243, 1, 1, -142743235, 1);
		func_1553(146323340, func_1552());
		Var0 = { func_1554() };
		if (func_1555(&Var0) == -1387633835)
		{
			func_1078(&Var0);
			func_1079(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1556(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1557(iVar6) == 2010625508)
			{
				func_1558(iVar6, iVar7);
				func_1559(iVar6, iVar8);
				func_1560(iVar6, iVar9);
				func_1561(iVar6, 0);
				if (func_1562(iVar6))
				{
					func_1563(iVar6);
				}
				iVar10 = func_1564(iVar8);
				func_1565(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1168()
{
	if (!func_1566(-1898635967, func_1552(), 1))
	{
		return 0;
	}
	if (func_307())
	{
		if (!func_1566(146323340, func_1552(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1169()
{
	func_301(34411519);
	func_301(834124286);
	func_301(-570967010);
}

void func_1170(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_157(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_157(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_34(-1080874779, 3, 1, -142743235, 1);
		func_34(-223790555, 3, 1, -142743235, 1);
		func_34(1566032147, 3, 1, -142743235, 1);
		func_34(891311852, 5, 1, -142743235, 1);
		func_34(-1353737667, 5, 1, -142743235, 1);
		func_34(-330313895, 5, 1, -142743235, 1);
		func_34(-2051332199, 5, 1, -142743235, 1);
		func_34(1237770824, 5, 1, -142743235, 1);
		func_34(-1795542128, 3, 1, -142743235, 1);
		func_34(-1757588258, 3, 1, -142743235, 1);
		func_34(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1556(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1557(iVar0) == 153881023)
			{
				func_1558(iVar0, iVar1);
				func_1559(iVar0, iVar2);
				func_1560(iVar0, iVar3);
				func_1561(iVar0, 0);
				if (func_1562(iVar0))
				{
					func_1563(iVar0);
				}
				iVar4 = func_1564(iVar2);
				func_1565(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1168();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1171(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1567(iParam0);
	if (bParam3)
	{
		func_715(iParam0, sParam1, iParam2);
	}
}

bool func_1172(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1173(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1174()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_101("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_102(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @135; //curOff = 79
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_750(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_104(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_104(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1175(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1568(Param1, iParam5, &Var5, 0))
	{
		func_373(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_832(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1569(Var19, 1);
}

bool func_1176()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

int func_1177(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1532(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_103(iParam0) != -999503751)
		{
			func_1570(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_103(iParam0) != -999503751)
	{
		func_1570(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1533(iParam0, 1);
	return 1;
}

bool func_1178(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1179(int iParam0)
{
	if (func_56() != -1)
	{
		if (func_830(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_830(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1180(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_830(iParam0, 65536) && !func_830(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_830(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_830(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1181()
{
	return Global_1905944->f_5694;
}

void func_1182(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1183(struct<4> Param0)
{
	switch (Param0)
	{
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
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1571(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1572(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1182(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1571(Param0))
			{
				return;
			}
			func_1572(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1182(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_826(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_1184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_1185(int iParam0, int iParam1)
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

void func_1186(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1187(int iParam0, int iParam1)
{
	iVar0 = func_554(*iParam0);
	iVar1 = func_555(*iParam0);
	if (iParam1 < 1 || iParam1 > func_703(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

int func_1188(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1190(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_56() == -1)
	{
		if (func_765(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

int func_1191(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1192(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1217(&iParam0);
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	if (!func_147(0))
	{
		bParam2 = true;
	}
	iVar0 = func_769(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1212(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_233(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1193(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_357(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			_0x42a2f33a1942e865(iVar33);
		}
		iVar49 = 0;
		if (func_1573(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
				{
					iVar49 = (iVar49 + Var0[iVar32]->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_672(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_675(iVar62, iVar61);
					if (func_138(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1193(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1193(iVar63, -915411861, 1, 0, 0));
								}
								_0x42a2f33a1942e865(iVar33);
							}
						}
					}
					iVar62++;
				}
				_0xcbb7b6edfa933ade(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1573(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1194(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1574(1);
}

bool func_1195()
{
	if (func_307())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1196(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1575(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_294(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1575(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_294(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1197()
{
	return Global_40.f_4283.f_325;
}

bool func_1198(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1199(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1200(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1201(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1202(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1203(int iParam0)
{
	if (!func_4(iParam0))
	{
		return 0;
	}
	cVar0 = func_243(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1204(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

int func_1205(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_1206(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_1207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_56() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_230(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_1576(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1577(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_711(iVar0, 512, 1);
			}
			else
			{
				func_1325(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_1208(int iParam0)
{
	iVar0 = func_1147((*Global_1347702)[iParam0]->f_48);
	func_303(&iVar0, 0, 0, (*Global_1347702)[iParam0]->f_47, 0, 0, 0, 0);
	return iVar0;
}

void func_1209(int iParam0, bool bParam1)
{
	iVar0 = func_733(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_731(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_731(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_731(iParam0)))
			{
				_uilog_remove_entry(2, func_731(iParam0));
			}
		}
	}
	func_734(iParam0, 4);
	func_734(iParam0, 8);
	func_734(iParam0, 16);
}

char* func_1210(char* sParam0)
{
	return sParam0;
}

struct<4> func_1211()
{
	return Var0;
}

int func_1212(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_138(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_376(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_233(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1213(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1214(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1215(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1216(int iParam0, var uParam1)
{
	if (!func_1578(iParam0))
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

int func_1217(int iParam0)
{
	if (!func_138(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1218(int iParam0, var uParam1, bool bParam2)
{
	if (!func_138(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_374(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_788((386 + iVar29), 1);
		if (func_749(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_750(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1219(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1579(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1579(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1579(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_159(18);
		case 2:
			return func_159(20);
		case 1:
			return func_159(19);
		default:
			break;
	}
	return true;
}

int func_1222(int iParam0)
{
	return func_1580(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1223(int iParam0, float fParam1, bool bParam2)
{
	if (func_56() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_159(31))
	{
		return;
	}
	iVar0 = func_1222(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1222(iParam0);
	if (func_161(iParam0) && func_160(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1581(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1582(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_295(func_1485(iParam0), 0);
					}
					func_1486(iParam0, iVar2, iVar3);
					func_1487(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1224(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1225(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1226()
{
	return func_1583(Global_40.f_12019);
}

int func_1227()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_775(iVar1);
		if (func_141(iVar2, 1, 0) || func_1233(func_1232(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1228()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1584(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1229()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1238(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1230()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1231(int iParam0)
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

int func_1232(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1233(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1235(int iParam0)
{
	switch (iParam0)
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
			break;
	}
	return 5;
}

int func_1236(int iParam0)
{
	switch (iParam0)
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
			break;
	}
	return 15;
}

char* func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1238(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1239(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1241(int iParam0)
{
	if (func_1585(iParam0) && func_141(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1586(iParam0) && func_1587(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1242(int iParam0)
{
	if (!func_138(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_364(iParam0));
}

void func_1243(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_1244(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1245(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1246(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1247(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1248(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_1249(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_1250(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_1251(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_689(iParam0, 1)]);
}

void func_1252()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1451();
		_unlock_set_unlocked(-1526891582, true);
		func_405(-916314281);
		func_449(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_405(494733111);
		func_449(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

int func_1253(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_357(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_357(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_357(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_357(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_357(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_357(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1254(int iParam0, int iParam1)
{
	iVar1 = func_689(func_1588(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_103(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1255(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_689(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_823(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_1256(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_1257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1258(int iParam0)
{
	return func_1589(iParam0, -1);
}

void func_1259(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1195())
	{
		func_366(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_366(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1260(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1261(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1262(int iParam0)
{
	func_1092(iParam0, 8, 6);
}

void func_1263(int iParam0)
{
	func_1590(&(Global_1946804->f_2589), iParam0);
}

void func_1264(int iParam0, int iParam1)
{
	func_1591(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1265(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1592(0);
	if (iParam2 != 0 && func_1519(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1097(iParam0, func_1184(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1266(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_56() != -1;
	iVar7 = func_1592(0);
	if (func_823(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1184(iVar0, 1);
			if (func_1515(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1515(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1255(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1593(uParam0);
				if (iVar3 > 0)
				{
					if (!func_823(524288))
					{
						func_1182(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1184(iVar0, 1);
							if (func_1515(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1515(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1255(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1264(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1090(524288);
				}
			}
		}
	}
}

void func_1267(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1594(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_56() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_616(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_618(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_618(Global_40.f_7729);
				Global_1946804->f_1378 = func_618(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1118(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1119(0, 1);
	}
}

bool func_1268(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1269(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1571(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1571(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1572(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1182(8);
}

bool func_1270()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1271()
{
	fVar0 = func_1415(13);
	iVar1 = func_1595(fVar0);
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

float func_1272()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1273()
{
	if (func_307())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1274()
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

float func_1275()
{
	return Global_1955565->f_3;
}

void func_1276(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_846(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1277(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_846(iParam0, 2, 0, 0);
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

float func_1278(float fParam0, float fParam1, float fParam2)
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

bool func_1279()
{
	return func_1415(12) <= -99f;
}

bool func_1280()
{
	return func_1415(12) >= 99f;
}

int func_1281()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_103(iVar1) == -999503751)
		{
			if (func_1596() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1282(int iParam0)
{
	if (!func_835(iParam0))
	{
		return false;
	}
	if (func_613(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1283(int iParam0)
{
	if (!func_835(iParam0))
	{
		return false;
	}
	if (func_613(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1284(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_835(iParam0))
	{
		return;
	}
	if (!func_1283(iParam0))
	{
		func_1123(iParam0, 2);
		if (bParam2)
		{
			if (!func_230(0, 0, 1))
			{
				func_336(1, 4);
			}
		}
		if ((!func_199() && !bParam1) && !func_230(0, 0, 1))
		{
			func_512(_create_var_string(10, "OUT_JOURN_ADD", func_1597(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1285(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1286(int iParam0, bool bParam1)
{
	iVar0 = func_1598(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_402(50);
			}
			else
			{
				func_402(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_402(51);
			}
			else
			{
				func_402(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1599(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_431();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_431();
			}
			break;
		case 3:
			func_402(24);
			if (bParam1)
			{
				if (!func_1599(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_431();
				}
			}
			break;
	}
}

void func_1287(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1600(0))
			{
				iVar0++;
			}
			if (func_1600(2))
			{
				iVar0++;
			}
			if (func_1600(4))
			{
				iVar0++;
			}
			if (!func_1601(16))
			{
				if (iVar0 == 1)
				{
					func_1602();
					func_295(456, 1);
					func_1603(16);
				}
			}
			if (!func_1601(32))
			{
				if (iVar0 >= 3)
				{
					func_1602();
					func_295(456, 1);
					func_1603(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1600(1))
			{
				iVar0++;
			}
			if (func_1600(3))
			{
				iVar0++;
			}
			if (func_1600(7))
			{
				iVar0++;
			}
			if (!func_1601(1))
			{
				if (iVar0 == 1)
				{
					func_1604();
					func_295(457, 1);
					func_1603(1);
				}
			}
			if (!func_1601(2))
			{
				if (iVar0 >= 3)
				{
					func_1604();
					func_295(457, 1);
					func_1603(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1600(5))
			{
				iVar0++;
			}
			if (func_1600(6))
			{
				iVar0++;
			}
			if (func_1600(8))
			{
				iVar0++;
			}
			if (!func_1601(4))
			{
				if (iVar0 == 1)
				{
					func_1605();
					func_295(455, 1);
					func_1603(4);
				}
			}
			if (!func_1601(8))
			{
				if (iVar0 >= 3)
				{
					func_1605();
					func_295(455, 1);
					func_1603(8);
				}
			}
			break;
	}
}

void func_1288(var uParam0)
{
	func_841(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_841(uParam0, 617531372);
	}
	else
	{
		func_841(uParam0, 291123060);
	}
}

void func_1289(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1606(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1290(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1291(var uParam0)
{
	return uParam0;
}

void func_1292(int iParam0)
{
	if (!func_1607(iParam0))
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

bool func_1293(int iParam0)
{
	if (func_211((*Global_1392626)[iParam0]->f_8, 4) || !func_1060(1))
	{
		return true;
	}
	return false;
}

void func_1294(int iParam0)
{
	if (func_1293(iParam0))
	{
		func_1608(iParam0, -1986290853);
		func_1608(iParam0, 495758964);
	}
	if (func_1296())
	{
		func_1608(iParam0, 847579139);
	}
}

char* func_1295(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "BLIP_LSM_CATFISH";
		case 7:
			return "BLIP_LSM_HORSE_CHASE_1";
		case 1:
			return "BLIP_LSM_HUNTER";
		case 5:
			return "BLIP_LSM_MINER_1";
		case 6:
			return "BLIP_LSM_MINER_2";
		case 8:
			return "BLIP_LSM_SELL_HORSE_1";
		case 4:
			return "BLIP_LSM_SOLDIER";
		case 3:
			return "BLIP_LSM_UNDERTAKER";
		case 0:
			return "BLIP_LSM_WOMANCRY";
	}
	return "";
}

bool func_1296()
{
	if (!func_242((*Global_1347702)[61]->f_15, 1) && func_1060(1))
	{
		return true;
	}
	return false;
}

void func_1297(int iParam0, int iParam1)
{
	if (func_214(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

int func_1298(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1609(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1299(int iParam0, int iParam1, bool bParam2)
{
	if (!func_869(iParam0))
	{
		return;
	}
	func_1298(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1300(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1301()
{
	func_1610();
	func_1611();
	func_1612();
	func_1613();
	func_1614();
	func_1615();
}

void func_1302()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		Global_1879534->f_7301.f_2[iVar0]->f_1 = &Global_1879534->f_7222[iVar0];
		iVar0++;
	}
}

void func_1303(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
}

void func_1304(var uParam0)
{
	uParam0->f_69 = 0;
}

void func_1305(int iParam0)
{
	iVar0 = iParam0;
	Var1 = { func_270(-1048906573) };
	_0x6123e2832c34243d(&Var1, iVar0, -1, -1, 0);
}

void func_1306()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar7 = func_4(&(Global_1898164->f_1[iVar0]));
		if (bVar7)
		{
			iVar6 = func_263(&(Global_1898164->f_1[iVar0]));
		}
		else
		{
			iVar6 = -1;
		}
		if (!bVar7 || ((bVar7 && iVar6 != 3) && iVar6 != 4))
		{
			*Global_1898164->f_1[iVar0] = { Var1 };
			func_1142(iVar0, 31);
		}
		iVar0++;
	}
	Global_1898164->f_162 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] != 0)
		{
			Global_1898164->f_162++;
			if (iVar0 == 0)
			{
				func_31(&(Global_1898164->f_1[iVar0]), 3);
			}
			else
			{
				func_31(&(Global_1898164->f_1[iVar0]), 4);
			}
		}
		iVar0++;
	}
}

bool func_1307(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_1308()
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		func_1616(iVar0);
		iVar0++;
	}
}

void func_1309()
{
	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_8863)
	{
		iVar1 = func_1617(iVar0, 1);
		if (func_1618(iVar1, 8))
		{
			_0xd8c7162ab2e2af45(func_1619(iVar1, 0));
		}
		iVar0++;
	}
}

int func_1310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

void func_1311(int iParam0)
{
	if (func_1620(iParam0) == 57)
	{
		_0x6786d7afac3162b3(-1145496915);
		_0x6786d7afac3162b3(-1043953850);
		_0x6786d7afac3162b3(-1783502982);
	}
	else if (_0xe38450dbcbc70e3d(iParam0, -1305340593) || _0xe38450dbcbc70e3d(iParam0, -1482012664))
	{
		_0x6786d7afac3162b3(iParam0);
	}
}

void func_1312(int iParam0, bool bParam1, int iParam2)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (func_1621(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		iVar0 = (*Global_1888801)[iParam0]->f_5;
	}
	else
	{
		iVar0 = func_1622(iParam0);
	}
	bVar1 = func_130(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1623(iParam0);
		if (iParam2 > iVar2 || !func_705(func_1624(iParam0)))
		{
			func_1625(iParam0, func_59());
			func_1626(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1627(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				_0xf2a2177ac848b3a8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_353(iParam0, 33554432);
		func_1625(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_1628(iParam0);
}

void func_1313(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	bVar0 = func_130(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_1629(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_1630(iParam0, func_59());
			func_1627(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_353(iParam0, 67108864);
		func_1630(iParam0, -15);
	}
	func_1631(iParam0);
}

void func_1314(int iParam0, int iParam1)
{
	if (!func_4(iParam0))
	{
		return;
	}
	func_264(iParam0, iParam1);
}

void func_1315()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (func_84(&(Global_40.f_450[iVar0])))
		{
			func_89(&((*Global_1347702)[&Global_40.f_450[iVar0]]->f_13), 2);
			Global_40.f_450[iVar0] = -1;
		}
		iVar0++;
	}
	Global_40.f_1094 = 0;
}

int func_1316()
{
	_0x748c5f51a18cb8f0(0);
	func_1632(0, 0, "ABIGAIL11", "RABI1", "rcm_abigail11", -1, -146.9627f, -15.7764f, 95.2415f, 0, 2134645637, 262151, 100f);
	func_1632(3, 3, "BANDP10", "RBNP10", "rcm_beau_and_penelope10", -1, 1736.427f, -1375.109f, 42.9164f, 0, -982604554, 67240067, 200f);
	func_1632(4, 3, "BANDP11", "RBNP11", "rcm_beau_and_penelope11", 5, 1790.746f, -1311.754f, 43.1925f, 1266159496, 1301148265, 1310737, 120f);
	func_1632(5, 3, "BANDP12", "RBNP12", "rcm_beau_and_penelope12", -1, 1863.698f, -1349.39f, 41.2784f, 0, 1301148265, 262149, 250f);
	func_1632(21, 18, "BRAT01", "RBRT0", "rcm_braithwaites01", -1, 660.1356f, -1257.437f, 44.0746f, 0, 2134645637, 67239943, 120f);
	func_1632(37, 23, "COACHROBBERY1", "RCHRB", "rcm_coach_robbery1", -1, 675.0945f, -1217.237f, 44.386f, 0, -1151477989, 262151, 120f);
	func_1632(58, 33, "DOCTORSOPINION1", "RDOPN", "rcm_doctors_opinion1", -1, 2802.581f, -1177.624f, 45.9451f, 0, 0, 134480023, 85f);
	func_1632(59, 34, "DOWN1", "RDOWN1", "rcm_down1", 60, -171.1026f, -25.1129f, 94.9136f, 0, 2145479193, 67, 120f);
	func_1632(60, 34, "DOWNA", "RDOWNA", "rcm_down1_2", -1, -171.1026f, -25.1129f, 94.9136f, 0, 2145479193, 12529, 150f);
	func_1632(61, 34, "DOWN2", "RDOWN2", "rcm_down2", -1, -135.48f, -33.46f, 95.08f, 0, -1954662204, 97, 60f);
	func_1632(62, 34, "DOWN3", "RDOWN3", "rcm_down3", -1, -815.8262f, 343.8745f, 99.3458f, 0, 2145479193, 262341, 120f);
	func_1632(63, 35, "DUSTER21", "RDST2", "rcm_dusters21", -1, -138.2931f, -13.8407f, 95.3376f, 0, -420584813, 262215, 120f);
	func_1632(64, 36, "DUSTER61", "RDST61", "rcm_dusters61", -1, 2362.525f, 1308.025f, 111.6106f, 0, 1232829146, 67108931, 90f);
	func_1632(65, 36, "DUSTER62", "RDST62", "rcm_dusters62", -1, -2110.199f, 660.5305f, 119.8892f, 0, 1232829146, 1310725, 100f);
	func_1632(66, 37, "DUTCH11", "RDTC1", "rcm_dutch11", -1, -129.8283f, -32.11561f, 94.94459f, 0, -106554210, 262215, 150f);
	func_1632(67, 38, "DUTCH21", "RDTC2", "rcm_dutch21", -1, 672.7785f, -1246.157f, 42.9398f, 0, -106554210, 296039, 1112014848);
	func_1632(68, 39, "DUTCH31", "RDCH3", "rcm_dutch31", -1, 2247.695f, -798.5478f, 43.1559f, 0, -106554210, 262151, 130f);
	func_1632(76, 42, "EXCONFED11", "RXCF1", "rcm_exconfed11", -1, 677.1235f, -1288.551f, 42.4063f, 0, 818727011, 262151, 120f);
	func_1632(82, 45, "GANG01", "RGNG01", "rcm_gang01", -1, 3009.262f, 477.1921f, 40.8607f, 0, 0, 132323, 1112014848);
	func_1632(83, 45, "GANG02", "RGNG02", "rcm_gang02", -1, 2974.441f, 474.3331f, 46.86f, 0, 0, 134489253, 1112014848);
	func_1632(94, 51, "HOMEROB00", "RHMR0", "rcm_homerob00", -1, 1407.78f, 265.425f, 88.61228f, 0, -1724301546, 1351687, 200f);
	func_1632(97, 54, "MARY01", "RMARY1", "rcm_mary01", 98, -126.0832f, -38.3759f, 94.6333f, 0, -2100584570, 67240027, 1112014848);
	func_1632(98, 54, "MARY02", "RMARY2", "rcm_mary02", -1, -380.78f, 917.269f, 118.9613f, 0, 1429600911, 67240133, 36f);
	func_1632(106, 58, "MOB01", "RMOB01", "rcm_mob01", -1, 2793.855f, -1169.53f, 46.924f, 0, -1137631263, 67109063, 1112014848);
	func_1632(107, 58, "MOB02", "RMOB02", "rcm_mob02", -1, 2686.954f, -1122.447f, 49.7002f, 0, -1137631263, 67108935, 1112014848);
	func_1632(108, 59, "MONROE11", "RMNR1", "rcm_monroe11", -1, 471.1853f, 2226.889f, 246.2259f, 0, -301979999, 2359303, 150f);
	func_1632(112, 60, "MUDTOWN31", "RMUD31", "rcm_mudtown3_1", 112, -141.5388f, -57.201f, 93.9626f, 0, -887880659, 131283, 100f);
	func_1632(113, 60, "MUDTOWN32", "RMUD32", "rcm_mudtown3_2", 113, 505.0512f, 704.0245f, 115.0716f, 0, -887880659, 274609, 1112014848);
	func_1632(114, 60, "MUDTOWN33", "RMUD33", "rcm_mudtown3_3", -1, -144.0388f, -56.981f, 93.9626f, 0, -887880659, 67240005, 100f);
	func_1632(115, 62, "NATIVE1", "RNATV1", "rcm_native1", -1, 2531.1f, -1312.83f, 48.19f, 743219360, -1822497728, 67764227, 120f);
	func_1632(116, 62, "NATIVE2", "RNATV2", "rcm_native2", -1, 223.26f, 512.19f, 125.45f, 0, 1079956634, 1310725, 350f);
	func_1632(120, 64, "PEARSON1", "RPRSN", "rcm_pearson1", -1, -1346.968f, 2402.061f, 306.5004f, 0, -699499938, 262151, 120f);
	func_1632(134, 68, "SADIE1", "RSAD1", "rcm_sadie11", -1, 677.3743f, -1251.831f, 43.0154f, 0, -699499938, 262151, 130f);
	func_1632(6, 4, "BANDP20", "RBNP20", "rcm_beau_and_penelope20", 7, 2340.914f, 1359.669f, 105.3503f, 0, -2100584570, 2228234, 120f);
	func_1632(7, 4, "BANDP21", "RBNP21", "rcm_beau_and_penelope21", -1, 895.2736f, -1866.43f, 42.6791f, 0, -510064667, 40108164, 120f);
	func_1632(22, 19, "CALDERON1", "RCLDN1", "rcm_calderon1", 23, 2815.65f, -1222.53f, 46.57f, 482703333, -1822497728, 35913794, 70f);
	func_1632(23, 19, "CALDERON2", "RCLDN2", "rcm_calderon2", -1, 2819.028f, -1110.255f, 45.9487f, -2086875988, 332378857, 40108100, 120f);
	func_1632(24, 20, "CALDERON21", "RCLD21", "rcm_calderon21", 25, 2733.148f, -1248.815f, 48.8597f, -2086875988, -1822497728, 2228290, 120f);
	func_1632(25, 20, "CALDERON22", "RCLD22", "rcm_calderon22", -1, 2733.148f, -1248.815f, 48.8597f, 0, -809133732, 6557892, 125f);
	func_1632(26, 21, "CALLOWAY1", "RCAL11", "rcm_callaway1", -1, -240.2066f, 768.6583f, 117.085f, 1815090590, -1822497728, 1179714, 40f);
	func_1632(27, 21, "CALLOWAYB", "RCAL1B", "rcm_callaway12", 28, -239.1001f, 770.5522f, 117.1001f, 0, -1744398657, 131072, 40f);
	func_1632(28, 21, "CALLOWAY2", "RCAL12", "rcm_callaway2", 29, 2857.948f, -1370.687f, 43.5575f, 0, -1744398657, 131072, 1112014848);
	func_1632(29, 21, "CALLOWAY3", "RCAL13", "rcm_callaway3", -1, 2907.656f, 1314.266f, 44.67463f, 460337971, -1744398657, 537133124, 36f);
	func_1632(30, 22, "CHAINGANG1", "RBWCG1", "rcm_chain_gang1", 31, 1276.24f, -1389.17f, 79.86f, -2075028835, -1822497728, 1704002, 140f);
	func_1632(31, 22, "CHAINGANG2", "RBWCG2", "rcm_chain_gang2", 32, 1311.78f, -1298.51f, 74.93f, 0, -622951465, 12528, 1112014848);
	func_1632(32, 22, "CHAINGANG3", "RBWCG3", "rcm_chain_gang3", 33, 1215.95f, -1425.98f, 70.45f, 0, -622951465, 1310784, 100f);
	func_1632(33, 22, "CHAINGANG4", "RBWCG4", "rcm_chain_gang4", 34, 902.15f, -384.86f, 88.3f, -2075028835, -1822497728, 1572928, 150f);
	func_1632(34, 22, "CHAINGANG5", "RBWCG5", "rcm_chain_gang5", 35, 902.15f, -384.86f, 88.3f, 0, -622951465, 4320, 150f);
	func_1632(35, 22, "CHAINGANG6", "RBWCG6", "rcm_chain_gang6", 36, 902.15f, -384.86f, 88.3f, 0, -622951465, 262208, 150f);
	func_1632(36, 22, "CHAINGANG7", "RBWCG7", "rcm_chain_gang7", -1, -2459.21f, 838f, 145.37f, -2075028835, -1822497728, 538836996, 80f);
	func_1632(38, 24, "CIGCARD1", "RCCIG", "rcm_collect_cigarette_cards1", -1, -343.5616f, -369.2671f, 87.0759f, -754733870, -1822497728, 72482822, (50f * 4f));
	func_1632(39, 25, "DINOBONE11", "RCDIN1", "rcm_collect_dinosaur_bones11", -1, 122.7758f, -185.4978f, 116.4383f, 1253299569, -1822497728, 68288642, (50f * 4f));
	func_1632(40, 25, "DINOBONE12", "RCDIN2", "rcm_collect_dinosaur_bones12", -1, 197.275f, 985.9788f, 189.2538f, 1253299569, 1162303770, 608176132, 1112014848);
	func_1632(43, 27, "EXOTICS1", "RCEXO1", "rcm_collect_exotics1", -1, 2586.494f, -1009.154f, 43.24f, 1507038616, -1822497728, 68296706, 1112014848);
	func_1632(44, 27, "EXOTICS2", "RCEXO2", "rcm_collect_exotics2", -1, 2586.494f, -1009.154f, 43.24f, 1507038616, 2107943776, 67250176, 1112014848);
	func_1632(45, 27, "EXOTICS3", "RCEXO3", "rcm_collect_exotics3", -1, 2586.494f, -1009.154f, 43.24f, 1507038616, 2107943776, 67250176, 1112014848);
	func_1632(46, 27, "EXOTICS4", "RCEXO4", "rcm_collect_exotics4", -1, 2586.494f, -1009.154f, 43.24f, 1507038616, 2107943776, 67250176, 1112014848);
	func_1632(47, 27, "EXOTICS5", "RCEXO5", "rcm_collect_exotics5", -1, 2586.494f, -1009.154f, 43.24f, 1507038616, 2107943776, 67250176, 1112014848);
	func_1632(48, 27, "EXOTICS6", "RCEXO6", "rcm_collect_exotics6", -1, 2586.494f, -1009.154f, 43.24f, 1507038616, 2107943776, 608315460, 1112014848);
	func_1632(41, 26, "RAREFISH11", "RCFSH1", "rcm_collect_rare_fish1", -1, 337.3075f, -684.5404f, 41.8362f, 1514128030, -1822497728, 68288642, (50f * 4f));
	func_1632(42, 26, "RAREFISH12", "RCFSH2", "rcm_collect_rare_fish2", -1, 341.9155f, -665.392f, 41.8046f, 1514128030, -273196610, 541067652, 1112014848);
	func_1632(49, 28, "ROCKFACE1", "RCRKF1", "rcm_collect_rock_faces1", -1, -2178.646f, -245.6886f, 191.1569f, -1774921803, -1822497728, 68288514, 100f);
	func_1632(50, 28, "ROCKFACE2", "RCRKF2", "rcm_collect_rock_faces2", -1, -2173.926f, -247.408f, 191.8229f, 1656830110, -781551276, 608307204, 100f);
	func_1632(51, 29, "TAXIDERMY1", "RCTAX1", "rcm_collect_taxidermy1", -1, -1678.832f, -335.5439f, 172.9001f, 563170881, 1986498931, 68290882, 1112014848);
	func_1632(52, 29, "TAXIDERMY2", "RCTAX2", "rcm_collect_taxidermy2", -1, -1638.497f, -1361.436f, 83.3966f, 0, -1822497728, 608305412, 1112014848);
	func_1632(53, 30, "CRACKPOT1", "RCKPT1", "rcm_crackpot1", 54, 2463.36f, -1372.69f, 44.3262f, 1270841555, -1822497728, 1310786, 120f);
	func_1632(54, 30, "CRACKPOT2", "RCKPT2", "rcm_crackpot2", 55, 2517.188f, 2289.349f, 176.3516f, 1270841555, 877823184, 262208, 300f);
	func_1632(55, 30, "CRACKPOT3", "RCKPT3", "rcm_crackpot3", -1, 2517.188f, 2289.349f, 176.3516f, 0, 0, 536875092, 100f);
	func_1632(56, 31, "CRAWLEY1", "RCRAW", "rcm_crawley1", -1, 2011.776f, -504.0132f, 40.983f, -1342246546, -1822497728, 537921542, 150f);
	func_1632(57, 32, "CREOLE1", "RCRLE", "rcm_creole1", -1, 1380.51f, -1337.51f, 77f, 993577366, -1822497728, 538181702, 120f);
	func_1632(69, 40, "EDOWN21", "REDW21", "rcm_edith_down21", 70, 2935.405f, 1377.749f, 43.5814f, -450226655, -661151214, 37486786, 120f);
	func_1632(70, 40, "EDOWN22", "REDW22", "rcm_edith_down22", -1, 2956.146f, 1340.49f, 43.8751f, -121985991, -661151214, 41156612, 60f);
	func_1632(77, 43, "FORMYART1", "RFMA1", "rcm_for_my_art1", 78, 2794.64f, -1168.4f, 46.92f, 0, -1822497728, 1179842, 36f);
	func_1632(78, 43, "FORMYART2", "RFMA2", "rcm_for_my_art2", 79, 2738.72f, -1207.39f, 48.66f, 0, -434412386, 1310784, 50f);
	func_1632(79, 43, "FORMYART3", "RFMA3", "rcm_for_my_art3", 80, 2700.241f, -1187.552f, 55.0907f, 0, -434412386, 262336, 150f);
	func_1632(80, 43, "FORMYART4", "RFMA4", "rcm_for_my_art4", -1, 2739.74f, -1315.64f, 47.63f, -670436990, -434412386, 538706116, 120f);
	func_1632(81, 44, "FUNDRAISER", "REFND", "rcm_fundraiser", -1, 2504.054f, -1152.946f, 48.26756f, 0, -1822497728, 86519878, 120f);
	func_1632(84, 46, "GUNSLINGER1", "RGUN11", "rcm_gunslinger1_1", 85, -62.69012f, -404.3738f, 69.91233f, -98087368, 858349040, 1050634, 120f);
	func_1632(85, 46, "GUNSLINGER12", "RGUN12", "rcm_gunslinger1_2", -1, -63.25864f, -404.9262f, 69.9287f, -98087368, 858349040, 262340, 120f);
	func_1632(86, 47, "GUNSLINGER2", "RGUN2", "rcm_gunslinger2_1", -1, -967.5845f, 2181.624f, 339.4473f, 1347320453, 479604938, 264398, 200f);
	func_1632(87, 48, "GUNSLINGER3", "RGUN3", "rcm_gunslinger3_1", -1, 1231.35f, -1299.684f, 75.9034f, 0, 240424007, 264398, 50f);
	func_1632(88, 49, "GUNSLINGER51", "RGUN5", "rcm_gunslinger5_1", -1, 2492.992f, -420.529f, 43.78334f, 594026681, 1813565390, 1312846, 120f);
	func_1632(89, 50, "HEREKITTY1", "RKTTY1", "rcm_here_kitty_kitty1", 90, 1604.317f, -262.3793f, 78.2036f, 1999476738, -1822497728, 1179650, 250f);
	func_1632(90, 50, "HEREKITTY2", "RKTTY2", "rcm_here_kitty_kitty2", 91, 1015.113f, 159.7295f, 103.0175f, 0, 1970061205, 262272, 250f);
	func_1632(91, 50, "HEREKITTY3", "RKTTY3", "rcm_here_kitty_kitty3", 92, 1491.239f, -1118.537f, 55.39496f, 0, 1970061205, 1310720, 250f);
	func_1632(92, 50, "HEREKITTY4", "RKTTY4", "rcm_here_kitty_kitty4", 93, 1408.014f, 280.6987f, 88.45465f, 0, 1970061205, 1310848, 200f);
	func_1632(93, 50, "HEREKITTY5", "RKTTY5", "rcm_here_kitty_kitty5", -1, 1581.761f, -259.8209f, 79.8f, 1999476738, 1970061205, 537264132, 250f);
	func_1632(95, 52, "HOMEROB01", "RHMRB", "rcm_homerob01", -1, 668.8008f, -1233.836f, 43.15567f, 0, 444204045, 23068678, 100f);
	func_1632(99, 55, "MARY31", "RMARY3", "rcm_mary31", -1, 1905.66f, -1860.534f, 47.18359f, 0, -2100584570, 6291530, 1112014848);
	func_1632(101, 57, "MASON1", "RMASN1", "rcm_mason1", 102, -1365.9f, -726.54f, 91.08f, 513427234, -1822497728, 1310914, 120f);
	func_1632(102, 57, "MASON2", "RMASN2", "rcm_mason2", 103, -1651.18f, 628.19f, 125.4f, 513427234, -1259688762, 1310784, 120f);
	func_1632(103, 57, "MASON3", "RMASN3", "rcm_mason3", 104, 1358.591f, 554.5364f, 87.3964f, 513427234, -1259688762, 3407936, 200f);
	func_1632(104, 57, "MASON4", "RMASN4", "rcm_mason4", 105, 2387.459f, -580.6672f, 41.0198f, 513427234, -1259688762, 1310784, 120f);
	func_1632(105, 57, "MASON5", "RMASN5", "rcm_mason5", -1, -231.24f, 226.84f, 94.4f, 513427234, -1259688762, 538312708, 400f);
	func_1632(109, 61, "MAYR1", "RMAYR1", "rcm_mr_mayor1", -1, 2401.393f, -1071.014f, 47.473f, 808601893, -340501579, 264258, 50f);
	func_1632(110, 61, "MAYR2", "RMAYR2", "rcm_mr_mayor2", 111, 2401.393f, -1071.014f, 47.473f, 808601893, -340501579, 2112, 50f);
	func_1632(111, 61, "MAYR3", "RMAYR3", "rcm_mr_mayor3", -1, 2401.393f, -1071.014f, 47.473f, 0, -340501579, 537133188, 50f);
	func_1632(117, 63, "OHBROTHER1", "ROBT1", "rcm_oh_brother1", 118, -323.86f, 794.53f, 116.89f, 0, -1822497728, 1310786, 100f);
	func_1632(118, 63, "OHBROTHER2", "ROBT2", "rcm_oh_brother2", 119, -303.77f, 817.93f, 117.41f, 0, -1822497728, 1310784, 100f);
	func_1632(119, 63, "OHBROTHER3", "ROBT3", "rcm_oh_brother3", -1, -1049.4f, 426.08f, 53.89f, 0, -1822497728, 538181700, 120f);
	func_1632(121, 65, "POISONEDWELL1", "RHNTN1", "rcm_poisoned_well1", 122, 2538.461f, 432.7961f, 64.0455f, 918898309, -1822497728, 1835074, 120f);
	func_1632(122, 65, "POISONEDWELL2", "RHNTN2", "rcm_poisoned_well2", 123, 2556.25f, 806.7f, 75.3f, 0, 415367144, 262144, 200f);
	func_1632(123, 65, "POISONEDWELL3", "RHNTN3", "rcm_poisoned_well3", 124, 2397.81f, 609.74f, 66.21f, 0, 415367144, 12416, 120f);
	func_1632(124, 65, "POISONEDWELL4", "RHNTN4", "rcm_poisoned_well4", 125, 2556.25f, 806.7f, 75.3f, 68512371, 415367144, 131072, 150f);
	func_1632(125, 65, "POISONEDWELL5", "RHNTN5", "rcm_poisoned_well5", -1, 2281.98f, 1198.91f, 108.09f, 0, 415367144, 538181636, 150f);
	func_1632(127, 67, "LIGHTNING1", "RRTL1", "rcm_ride_the_lightning1", 128, 2829.053f, -1055.899f, 43.0369f, 2115504616, -1822497728, 3801090, 60f);
	func_1632(128, 67, "LIGHTNING2", "RRTL2", "rcm_ride_the_lightning2", -1, 1226.67f, -1295.04f, 75.9f, 0, -1962480616, 2101376, 36f);
	func_1632(129, 67, "LIGHTNING3", "RRTL3", "rcm_ride_the_lightning3", 130, 2536.865f, -275.3683f, 42.8264f, 0, -1962480616, 2361472, 150f);
	func_1632(130, 67, "LIGHTNING4", "RRTL4", "rcm_ride_the_lightning4", 131, 2507.133f, -1307.169f, 47.9537f, 0, -1962480616, 2363520, 36f);
	func_1632(131, 67, "LIGHTNING5", "RRTL5", "rcm_ride_the_lightning5", 132, 2829.053f, -1055.899f, 43.0369f, 2115504616, -1962480616, 2752512, 60f);
	func_1632(132, 67, "LIGHTNING6", "RRTL6", "rcm_ride_the_lightning6", 133, 1281.752f, 908.6993f, 126.8532f, 0, -1962480616, 2359488, 300f);
	func_1632(133, 67, "LIGHTNING7", "RRTL7", "rcm_ride_the_lightning7", -1, 2689.054f, -1120.174f, 49.6621f, 2115504616, -1962480616, 540934148, 140f);
	func_1632(135, 69, "SERIALKILLER1", "RSKLR", "rcm_serial_killer1", -1, -609.3224f, 521.8002f, 95.1998f, 0, -1822497728, 546572422, 55f);
	func_1632(136, 70, "SLAVE1", "RSLVC1", "rcm_slave_catcher1", 137, 1244.57f, -1275.52f, 74.96f, -373817191, -1822497728, 1179714, 200f);
	func_1632(137, 70, "SLAVE2", "RSLVC2", "rcm_slave_catcher2", -1, 1264.612f, -404.1218f, 97.0883f, 0, 194953189, 537133124, 36f);
	func_1632(138, 71, "STRAUSS11", "RSTR1", "rcm_strauss11", -1, 655.3615f, -1234.329f, 43.1254f, 0, 2145479193, 6422598, 100f);
	func_1632(139, 72, "STRAUSS21", "RSTR2", "rcm_strauss21", -1, 1970.765f, -1872.171f, 41.6262f, 0, 2145479193, 6422598, 120f);
	func_1632(140, 73, "STRAUSS31", "RSTR31", "rcm_strauss31", 141, 2327.984f, 1330.677f, 106.157f, 0, 2145479193, 2228290, 100f);
	func_1632(141, 73, "STRAUSS32", "RSTR32", "rcm_strauss32", 142, 2328.061f, 1329.368f, 106.1765f, 0, 2145479193, 2101488, 1112014848);
	func_1632(142, 73, "STRAUSS33", "RSTR33", "rcm_strauss33", -1, 2327.984f, 1330.677f, 106.157f, 0, 2145479193, 6684748, 100f);
	func_1632(143, 74, "THEODDFELLOWS1", "RODDF1", "rcm_the_odd_fellows1", 144, 2945.728f, 526.6201f, 45.84f, -1458432563, -1822497728, 1835010, 60f);
	func_1632(144, 74, "THEODDFELLOWS2", "RODDF2", "rcm_the_odd_fellows2", -1, 2312.786f, 27.78194f, 48.40265f, 0, 825960713, 538181700, 140f);
	func_1632(147, 77, "WARVET1", "RWARV1", "rcm_war_veteran1", 148, 1479.436f, 1335.166f, 161.3365f, -1676898583, -1822497728, 786498, 140f);
	func_1632(148, 77, "WARVET2", "RWARV2", "rcm_war_veteran2", 149, 1698.457f, 1511.371f, 146.8702f, -1676898583, 1770336866, 786496, 200f);
	func_1632(149, 77, "WARVET3", "RWARV3", "rcm_war_veteran3", 150, 1699.141f, 1508.696f, 146.8712f, -1676898583, 1770336866, 786496, 200f);
	func_1632(150, 77, "WARVET4", "RWARV4", "rcm_war_veteran4", -1, 1698.457f, 1511.371f, 146.8702f, -1676898583, 1770336866, 537657412, 200f);
	func_1632(11, 7, "BHDUEL1", "RBDUL", "rcm_bounty_duel1", -1, -2336.112f, 105.0412f, 221.6922f, 0, -907204276, 8653446, 60f);
	func_1632(12, 8, "BHEXCONFED1", "RBCON", "rcm_bounty_exconfed1", -1, 2505.874f, 286.573f, 71.9487f, 466209020, -907204276, 8653446, 120f);
	func_1632(13, 9, "BHRANCHER1", "RBRAN", "rcm_bounty_rancher1", -1, 1647.412f, -608.9368f, 42.4184f, -1694480560, -907204276, 8653446, 150f);
	func_1632(153, 79, "BHTARGET3", "RBT03", "rcm_bh_laramie_sleeping", -1, -1947.647f, 427.8162f, 118.9041f, 0, -907204276, 8653702, 250f);
	func_1632(14, 10, "BHTARGET5", "RBT05", "rcm_bh_wife_and_lover", -1, -1215.09f, 369.9232f, 64.0378f, 0, -907204276, 8653446, 250f);
	func_1632(154, 80, "BHTARGET12", "RBT12", "rcm_bh_camp_return", -1, 1425.841f, -2186.84f, 47.99936f, 0, -907204276, 8653446, 250f);
	func_1632(15, 11, "BHTARGET14", "RBT14", "rcm_bh_shack_escape", -1, 1361.01f, -2066.81f, 52.23f, 0, -907204276, 8653446, 70f);
	func_1632(16, 12, "BHTARGET15", "RBT15", "rcm_bh_sd_saloon", -1, 2794.52f, -1170.64f, 46.924f, 0, -907204276, 8653702, 50f);
	func_1632(17, 13, "BHTARGET18", "RBT18", "rcm_bh_skinner_brother", -1, -2000.8f, -1829.5f, 113.3f, 0, -907204276, 8653702, 200f);
	func_1632(18, 14, "BHTARGET20", "RBT20", "rcm_bh_skinner_search", -1, -1982.37f, -1430.89f, 115.58f, 0, -907204276, 8653702, 200f);
	func_1632(155, 15, "BHTARGET21", "RBT21", "rcm_bh_blackwater_hunt", -1, -799.8206f, -1232.503f, 42.552f, 0, -907204276, 8653702, 175f);
	func_1632(19, 16, "BHTARGET22", "RBT22", "rcm_bh_bandito_shack", -1, -5409f, -3655f, -22.2f, 0, -907204276, 8653702, 250f);
	func_1632(20, 17, "BHTARGET23", "RBT23", "rcm_bh_bandito_mine", -1, -5970.842f, -3245.562f, -22.5793f, 0, -907204276, 8653702, 250f);
	func_1632(1, 1, "ABIGAIL22", "RABI22", "rcm_abigail22", -1, -1606.873f, -1376.358f, 81.81185f, 0, -887880659, 67143009, 1112014848);
	func_1632(2, 2, "ABIGAIL31", "RABI3", "rcm_abigail31", -1, -1637.182f, -1363.268f, 83.4566f, 0, 2134645637, 262407, 120f);
	func_1632(8, 5, "BEECHERS11", "RBCH11", "rcm_beechers11", 9, -814.331f, -1278.102f, 42.6377f, 0, -194220735, 67240259, 1112014848);
	func_1632(9, 5, "BEECHERS12", "RBCH12", "rcm_beechers12", -1, -1635.695f, -1355.41f, 82.9339f, 0, -194220735, 262469, 200f);
	func_1632(10, 6, "BEECHERS21", "RBCH21", "rcm_beechers21", -1, -1638.859f, -1359.027f, 82.9803f, 0, -338536163, 262403, 250f);
	func_1632(71, 41, "EVELYN1", "RMLLR1", "rcm_evelyn_miller1", 72, -2068.575f, -1063.067f, 134.9549f, 743219360, -1822497728, 1573314, 1112014848);
	func_1632(72, 41, "EVELYN2", "RMLLR2", "rcm_evelyn_miller2", 73, -2374.59f, -1594.19f, 153.4694f, 743219360, -1610853131, 1835328, 100f);
	func_1632(73, 41, "EVELYN3", "RMLLR3", "rcm_evelyn_miller3", 74, -2373.404f, -1592.497f, 153.0315f, 0, -1610853131, 256, 1112014848);
	func_1632(74, 41, "EVELYN4", "RMLLR4", "rcm_evelyn_miller4", 75, -2373.404f, -1592.497f, 153.0315f, 0, 0, 4592, 1112014848);
	func_1632(75, 41, "EVELYN5", "RMLLR5", "rcm_evelyn_miller5", -1, -2373.404f, -1592.497f, 153.0315f, 0, 0, 671355188, 1112014848);
	func_1632(96, 53, "JACK21", "RJCK2", "rcm_jack2", -1, -1629.71f, -1338.377f, 82.0174f, 0, 388668855, 262407, 140f);
	func_1632(100, 56, "MARYBETH1", "RMRYB", "rcm_marybeth1", -1, -171.3529f, 631.9009f, 113.0321f, 0, 0, 67240214, 1112014848);
	func_1632(126, 66, "RAINSFALL1", "RRFA1", "rcm_rains_fall1", -1, 2937.5f, 1276.5f, 45.1f, 0, 0, 67240214, 1112014848);
	func_1632(145, 75, "TILLY1", "RTLLY", "rcm_tilly1", -1, 2595.41f, -1198.08f, 52.23f, 0, 0, 67240214, 1112014848);
	func_1632(151, 78, "HERBALISTCAMP1", "REHEC1", "rcm_herbalist_camp", 152, 556.271f, 172.08f, 133.3435f, 0, -1822497728, 1048642, 250f);
	func_1632(152, 78, "HERBALISTCAMP2", "REHEC2", "rcm_herbalist_camp", -1, 557.4186f, 170.2608f, 134.348f, 0, -1176045274, 536875076, 250f);
	func_1632(146, 76, "TREASUREHUNTER1", "RETH", "rcm_treasure_hunter", -1, -586.4957f, -344.5864f, 81.4029f, 989172200, -1822497728, 68190278, 200f);
	func_1633(1, 12);
	func_1633(23, 1);
	func_1633(33, 24);
	func_1633(36, 24);
	func_1633(54, 24);
	func_1633(55, 48);
	func_1633(70, 4);
	func_1633(72, 24);
	func_1633(73, 24);
	func_1633(78, 24);
	func_1633(79, 24);
	func_1633(80, 48);
	func_1633(102, 48);
	func_1633(103, 48);
	func_1633(104, 48);
	func_1633(105, 48);
	func_1633(113, 1);
	func_1633(118, 24);
	func_1633(119, 24);
	func_1633(122, 24);
	func_1633(133, 24);
	func_1633(148, 24);
	func_1633(149, 24);
	func_1633(150, 24);
	func_1634(0, 100010212, 1);
	func_1634(2, 100010212, 1);
	func_1634(23, 100010212, 1);
	func_1634(24, 100010212, 1);
	func_1634(53, 100010212, 1);
	func_1634(54, 880414984, 1);
	func_1634(59, 100010212, 1);
	func_1634(71, 100010212, 1);
	func_1634(72, 100010212, 1);
	func_1634(69, 100010212, 1);
	func_1634(81, 100010212, 1);
	func_1634(89, 100010212, 1);
	func_1634(91, 100010212, 1);
	func_1634(92, 100010212, 1);
	func_1634(93, 100010212, 1);
	func_1634(101, 100010212, 1);
	func_1634(102, 100010212, 1);
	func_1634(103, 100010212, 1);
	func_1634(104, 100010212, 1);
	func_1634(105, 100010212, 1);
	func_1634(117, 100010212, 0);
	func_1634(118, 100010212, 0);
	func_1634(119, 100010212, 1);
	func_1634(115, 100010212, 1);
	func_1634(133, 100010212, 1);
	func_1634(134, 100010212, 1);
	func_1634(144, 100010212, 1);
	func_1634(145, 100010212, 0);
	func_1634(146, 100010212, 1);
	func_1634(147, 100010212, 1);
	if (&Global_1879534 == 0)
	{
		func_1635(2, ((*Global_1347702)[2]->f_16 + 50f));
		func_1635(12, ((*Global_1347702)[12]->f_16 + 40f));
		func_1635(13, ((*Global_1347702)[13]->f_16 + 40f));
		func_1635(23, ((*Global_1347702)[23]->f_16 + 30f));
		func_1635(32, ((*Global_1347702)[32]->f_16 + 30f));
		func_1635(56, ((*Global_1347702)[56]->f_16 + 50f));
		func_1635(54, ((*Global_1347702)[54]->f_16 + 50f));
		func_1635(58, ((*Global_1347702)[58]->f_16 + 50f));
		func_1635(63, ((*Global_1347702)[63]->f_16 + 40f));
		func_1635(81, ((*Global_1347702)[81]->f_16 + 30f));
		func_1635(151, 410f);
		func_1635(152, 410f);
		func_1635(90, ((*Global_1347702)[90]->f_16 + 25f));
		func_1635(91, ((*Global_1347702)[91]->f_16 + 25f));
		func_1635(96, ((*Global_1347702)[96]->f_16 + 50f));
		func_1635(120, ((*Global_1347702)[120]->f_16 + 100f));
		func_1635(123, ((*Global_1347702)[123]->f_16 + 50f));
		func_1635(129, ((*Global_1347702)[129]->f_16 + 60f));
		func_1635(132, ((*Global_1347702)[132]->f_16 + 60f));
		func_1635(144, ((*Global_1347702)[144]->f_16 + 50f));
		func_1636(3, 35f);
		func_1636(4, 20f);
		func_1636(11, 30f);
		func_1636(13, 80f);
		func_1636(12, 110f);
		func_1636(153, 100f);
		func_1636(14, 80f);
		func_1636(154, 100f);
		func_1636(15, 60f);
		func_1636(17, 100f);
		func_1636(18, 85f);
		func_1636(155, 65f);
		func_1636(19, 65f);
		func_1636(20, 60f);
		func_1636(26, 45f);
		func_1636(30, 40f);
		func_1636(32, 30f);
		func_1636(33, 55f);
		func_1636(36, 40f);
		func_1636(38, 35f);
		func_1636(39, 80f);
		func_1636(43, 45f);
		func_1636(41, 40f);
		func_1636(49, 40f);
		func_1636(51, 65f);
		func_1636(53, 32f);
		func_1636(56, 35f);
		func_1636(57, 17f);
		func_1636(62, 50f);
		func_1636(65, 42f);
		func_1636(69, 25f);
		func_1636(70, 30f);
		func_1636(71, 25f);
		func_1636(72, 25f);
		func_1636(77, 12f);
		func_1636(78, 17f);
		func_1636(80, 20f);
		func_1636(84, 35f);
		func_1636(86, 50f);
		func_1636(88, 45f);
		func_1636(89, 75f);
		func_1636(90, 130f);
		func_1636(91, 60f);
		func_1636(92, 85f);
		func_1636(94, 47f);
		func_1636(101, 40f);
		func_1636(102, 40f);
		func_1636(103, 40f);
		func_1636(104, 40f);
		func_1636(105, 40f);
		func_1636(106, 25f);
		func_1636(107, 25f);
		func_1636(116, 30f);
		func_1636(117, 20f);
		func_1636(118, 20f);
		func_1636(119, 20f);
		func_1636(121, 55f);
		func_1636(123, 100f);
		func_1636(125, 35f);
		func_1636(127, 28f);
		func_1636(129, func_1637(13));
		func_1636(132, 100f);
		func_1636(133, 20f);
		func_1636(135, 75f);
		func_1636(136, 22f);
		func_1636(143, 20f);
		func_1636(144, 50f);
		func_1636(151, 100f);
		func_1636(146, 135f);
		func_1638(0, (func_1205(13) || func_1205(14)));
		func_1638(2, (func_1205(13) || func_1205(4)));
		func_1638(10, (func_1205(4) || func_1205(7)));
		func_1638(21, func_1205(13));
		func_1638(37, func_1205(23));
		func_1638(59, func_1205(18));
		func_1638(63, func_1205(10));
		func_1638(64, func_1205(11));
		func_1638(65, func_1205(11));
		func_1638(66, (func_1205(0) || func_1205(5)));
		func_1638(67, (((func_1205(0) || func_1205(5)) || func_1205(9)) || func_1205(2)));
		func_1638(68, (func_1205(0) || func_1205(7)));
		func_1638(76, func_1205(9));
		func_1638(94, func_1205(5));
		func_1638(95, func_1205(8));
		func_1638(96, (func_1205(14) || func_1205(12)));
		func_1638(112, (func_1205(1) || func_1205(8)));
		func_1638(114, (func_1205(1) || func_1205(8)));
		func_1638(116, func_1205(26));
		func_1638(120, func_1205(17));
		func_1638(134, (func_1205(11) || func_1205(17)));
		func_1638(138, func_1205(18));
		func_1638(139, func_1205(18));
		func_1638(140, func_1205(18));
		func_1638(142, func_1205(22));
		func_1639(53, 1026);
		func_1639(54, 128);
		func_1639(56, 128);
		func_1639(57, 1030);
		func_1639(39, 1030);
		func_1639(79, 1026);
		func_1639(81, 8192);
		func_1639(101, 1026);
		func_1639(102, 1026);
		func_1639(103, 1026);
		func_1639(104, 1026);
		func_1639(105, 1026);
		func_1639(109, 128);
		func_1639(110, 128);
		func_1639(111, 128);
		func_1639(122, 8);
		func_1639(148, 1026);
		func_1639(149, 1026);
		func_1639(150, 1026);
		func_1639(155, 640);
		func_1639(128, 7);
		func_1639(52, 7);
		func_1639(71, 1026);
		func_1640(6, 1f);
		func_1640(22, 30f);
		func_1640(26, 15f);
		func_1640(27, 15f);
		func_1640(30, 50f);
		func_1640(32, 100f);
		func_1640(33, 150f);
		func_1640(34, 100f);
		func_1640(36, 100f);
		func_1640(41, 10f);
		func_1640(53, 50f);
		func_1640(54, 150f);
		func_1640(58, 0f);
		func_1640(59, 3f);
		func_1640(61, 2f);
		func_1640(76, 3f);
		func_1640(81, 50f);
		func_1640(84, 60f);
		func_1640(85, 60f);
		func_1640(89, 150f);
		func_1640(90, 180f);
		func_1640(91, 75f);
		func_1640(93, 150f);
		func_1640(95, 4.5f);
		func_1640(97, 2f);
		func_1640(101, 50f);
		func_1640(103, 150f);
		func_1640(112, 5f);
		func_1640(113, 0f);
		func_1640(114, 5f);
		func_1640(115, 70f);
		func_1640(116, 150f);
		func_1640(134, 2f);
		func_1640(0, 3f);
		func_1640(120, 3f);
		func_1640(138, 3f);
		func_1640(139, 3f);
		func_1640(140, 3f);
		func_1640(142, 3f);
		func_1640(147, 150f);
		func_1640(117, 10f);
		func_1640(118, 10f);
		func_1640(151, 160f);
		func_1640(152, 160f);
		func_1640(146, 155f);
		func_1640(121, 200f);
		func_1640(15, 70f);
		func_1640(155, 5f);
		func_1640(20, 170f);
		func_1640(13, 140f);
		func_1640(17, 160f);
		func_1640(12, 100f);
		func_1640(126, 2f);
		func_1640(145, 2f);
		func_1640(14, 100f);
		func_1641(22, 100f);
		func_1641(23, 100f);
		func_1641(62, 150f);
		func_1641(68, 150f);
		func_1641(65, 250f);
		func_1641(106, 100f);
		func_1641(107, 100f);
		func_1641(115, 100f);
		func_1641(116, 225f);
		func_1641(151, 250f);
		func_1641(155, 110f);
	}
	_0x748c5f51a18cb8f0(1);
	return 1;
}

void func_1317(int iParam0, int iParam1)
{
	if (!func_1642(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

void func_1318(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_1442(iVar0, 4096);
			if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iVar1]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar1]->f_1, 1);
			}
			iVar1++;
		}
		_0x4c05b42a8d937796();
		_0x16b86a49e072aa85();
	}
	if (func_56() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_1319(bool bParam0)
{
	if (bParam0)
	{
		_hide_hud_component(-1618603322);
		func_875(8388608);
	}
	else
	{
		_display_hud_component(-1618603322);
		func_1643(8388608);
	}
}

void func_1320()
{
	Global_1357549 = 0;
	func_875(1);
}

void func_1321()
{
	Global_1357549->f_1886 = _databinding_add_data_container_from_path("", "Tithing");
	Global_1357549->f_1886.f_1 = _databinding_add_data_string(Global_1357549->f_1886, "Supplies", "");
	uVar0 = _databinding_add_data_container(Global_1357549->f_1886, "CampFunds");
	func_1644(uVar0, &(Global_1357549->f_1886.f_2));
	uVar1 = _databinding_add_data_container(Global_1357549->f_1886, "PlayerCash");
	func_1644(uVar1, &(Global_1357549->f_1886.f_4));
}

Vector3 func_1322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2638.87f, -1289.67f, 51.32f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -307.3165f, 776.0316f, 118.7f;
		case 3:
			return -813.4f, -1275.6f, 44.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1323(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	if (!func_1645(iParam0))
	{
		return;
	}
	if (func_468(vParam2))
	{
		return;
	}
	if (!func_61(iParam1))
	{
		return;
	}
	(*Global_1934182)[iParam0]->f_1 = { vParam2 };
	(*Global_1934182)[iParam0]->f_5 = func_331(1, iParam0, 2, func_1646(iParam0));
	(*Global_1934182)[iParam0] = iParam1;
	if (bParam5)
	{
		(*Global_1934182)[iParam0]->f_7 = _create_volume_box_with_custom_name(func_1647(iParam0), func_1648(iParam0), func_1649(iParam0), func_1650(iParam0));
		_0x128fc3a893bf853a((*Global_1934182)[iParam0]->f_7);
	}
	switch (iParam0)
	{
		case 2:
			func_1651(170);
			break;
	}
}

int func_1324()
{
	if (func_56() != -1)
	{
		return 1;
	}
	func_1652(2, "loanshark_catfish", 96, 1308.708f, -2342.772f, 41.4922f, 1324.754f, -2307.706f, 47.07406f, 65f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_1652(7, "loanshark_horseChase1", 66, 1120.147f, 503.3499f, 94.8851f, 1120.147f, 503.3499f, 94.8851f, 40f, 0, -1, -1, 200f, 65, 1123680256);
	func_1652(1, "loanshark_hunter", -1, -1781.541f, -180.863f, 194.142f, -1733.015f, -200.884f, 182.1981f, 75f, 0, -1, -1, 200f, 65, 140f);
	func_1652(5, "loanshark_miner1", 78, 2757.363f, 1370.689f, 68.29453f, 2792.968f, 1347.938f, 72.24879f, 50f, 0, -1, 6, 1123680256, 1, 1123680256);
	func_1652(6, "loanshark_miner2", 82, 2685.276f, 900.0816f, 90.9889f, 2689.845f, 900.8306f, 96.28243f, 35f, 0, -1, -1, 1123680256, 81, 1123680256);
	func_1652(8, "loanshark_sellHorse1", -1, -610.8f, -25.3f, 85.5f, -619.389f, -28.8628f, 84.4293f, 50f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_1652(4, "loanshark_soldier", -1, 1411.856f, 1166.743f, 184.1507f, 1418.006f, 1129.67f, 183.486f, 120f, 0, -1, 5, 150f, 81, 140f);
	func_1652(3, "loanshark_undertaker", 105, 1300.562f, -1318.563f, 76.5193f, 1306.878f, -1313.599f, 79.70631f, 15f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_1652(0, "loanshark_womanCry", 69, 1424.889f, 383.4419f, 89.48783f, 1422.9f, 329.34f, 87.41f, 65f, 0, -1, -1, 170f, 67, 100f);
	return 1;
}

void func_1325(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_639(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

void func_1326()
{
	if (func_56() != -1)
	{
		return;
	}
	_0xe36d4a38d28d9cfb(0);
	_0x5d6182f3bce1333b(1, -142743235);
	_0x5d6182f3bce1333b(5, -142743235);
	func_716(1, 1);
}

void func_1327(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 - (Global_26796.f_774 && iParam0));
}

int func_1328()
{
	func_1653(Global_1949604);
	func_1654();
	iVar2 = 0;
	if (func_1655(1))
	{
		Global_1946804->f_1 = Global_26796.f_775;
		func_603(0);
		if (((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && func_242((*Global_1835011)[4]->f_1, 1)) && !func_1655(16))
		{
			func_291(967523420);
			func_292();
			func_615(16);
		}
		func_1656();
		switch (Global_1946804->f_1)
		{
			case -2125499975:
			case -449205311:
				Global_40.f_39 = 225514697;
				Global_1935630->f_2 = Global_40.f_39;
				break;
			case 1160113249:
				Global_1935630->f_2 = 11966224;
				if (!does_entity_exist(Global_35) || get_entity_model(Global_35) != 11966224)
				{
					Global_40.f_39 = 0;
				}
				break;
		}
	}
	else
	{
		func_603(1);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_26796.f_26[iVar0] = 0;
			Global_26796.f_26[iVar0]->f_1 = 0;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				vVar3.x = &Global_1946804->f_57[iVar1];
				*Global_26796.f_26[iVar0]->f_1.f_1[iVar1] = { vVar3 };
				iVar1++;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			vVar3.x = &Global_1946804->f_57[iVar1];
			*Global_1946804->f_1497.f_1[iVar1] = { vVar3 };
			*Global_1946804->f_1378.f_1[iVar1] = { vVar3 };
			iVar1++;
		}
		if ((((Global_1946804->f_1 == 0 || Global_1946804->f_1 == -2125499975) || Global_1946804->f_1 == -449205311) || Global_1946804->f_1 == 2026485318) || Global_1946804->f_1 == 24043185)
		{
			func_1062(-2125499975);
			func_604(&(Global_1946804->f_1378), 2020890174, &iVar2, 0, 0, 0, 0);
			func_610(-2124052603);
			func_604(&(Global_1946804->f_1378), 1661121390, &iVar2, 0, 1, 0, 0);
			Global_26796.f_776 = 0;
			func_611(-1, 0, 1, 1, 1, 0);
			func_612(-1, 0, 0, 6);
			func_1657(1420417918, 3, 3, 3, 0);
			func_1658(0, 5, 0);
			Global_40.f_39 = 225514697;
			Global_1935630->f_2 = Global_40.f_39;
			Global_26796.f_775 = Global_1946804->f_1;
		}
		else if (Global_1946804->f_1 == 1160113249)
		{
			func_1062(Global_1946804->f_1);
			switch (Global_1946804->f_1)
			{
				case 1160113249:
					Global_1935630->f_2 = 11966224;
					Global_40.f_39 = 0;
					break;
			}
		}
		func_615(1);
		func_1659(7);
	}
	Global_1347698 = 0;
	Global_1347698->f_1 = 0;
	Global_1347698->f_2 = 0;
	return 1;
}

void func_1329()
{
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (func_1660(iVar0))
		{
			Global_40.f_7157[iVar0] = 1;
		}
		iVar0++;
	}
}

void func_1330()
{
}

int func_1331(bool bParam0)
{
	func_1661(6, 0, 0, 513, bParam0);
	func_1661(62, 0, 0, 513, bParam0);
	func_1661(7, 0, 4, 513, bParam0);
	func_1661(8, 0, 4, 513, bParam0);
	func_1661(9, 0, 8, 513, bParam0);
	func_1661(10, 0, 8, 513, bParam0);
	func_1661(12, 0, 0, 1, 0);
	func_1661(11, 0, 0, 17, bParam0);
	func_1661(14, 0, 0, 1, 0);
	func_1661(13, 0, 0, 1, 0);
	func_1661(61, 0, 0, 1, 0);
	func_1661(63, 0, 0, 1, 0);
	func_1661(70, 0, 4, 513, bParam0);
	func_1661(94, 0, 0, 1, 0);
	func_1661(15, 0, 0, 545, bParam0);
	func_1661(16, 0, 0, 521, bParam0);
	func_1661(17, 0, 0, 521, bParam0);
	func_1661(18, 0, 0, 1, 0);
	func_1661(19, 0, 0, 1, 0);
	func_1661(20, 0, 0, 1, 0);
	func_1661(0, 0, 0, 513, bParam0);
	func_1661(1, 0, 0, 513, bParam0);
	func_1661(2, 0, 0, 513, bParam0);
	func_1661(3, 0, 0, 513, bParam0);
	func_1661(4, 0, 0, 513, bParam0);
	func_1661(5, 0, 0, 513, bParam0);
	func_1661(24, 0, 0, 513, bParam0);
	func_1661(25, 0, 0, 513, bParam0);
	func_1661(26, 0, 0, 513, bParam0);
	func_1661(27, 0, 0, 513, bParam0);
	func_1661(28, 0, 0, 513, bParam0);
	func_1661(21, 0, 0, 513, bParam0);
	func_1661(22, 0, 0, 513, bParam0);
	func_1661(29, 0, 0, 513, bParam0);
	func_1661(30, 0, 0, 513, bParam0);
	func_1661(31, 0, 0, 513, bParam0);
	func_1661(32, 0, 0, 513, bParam0);
	func_1661(33, 0, 0, 513, bParam0);
	func_1661(34, 0, 0, 513, bParam0);
	func_1661(35, 0, 0, 513, bParam0);
	func_1661(36, 0, 0, 513, bParam0);
	func_1661(37, 0, 0, 513, bParam0);
	func_1661(38, 0, 0, 513, bParam0);
	func_1661(39, 0, 0, 513, bParam0);
	func_1661(40, 0, 0, 513, bParam0);
	func_1661(41, 0, 0, 513, bParam0);
	func_1661(42, 0, 0, 513, bParam0);
	func_1661(43, 0, 0, 513, bParam0);
	func_1661(44, 0, 0, 513, bParam0);
	func_1661(45, 0, 0, 513, bParam0);
	func_1661(46, 0, 0, 513, bParam0);
	func_1661(47, 0, 0, 513, bParam0);
	func_1661(48, 0, 0, 513, bParam0);
	func_1661(49, 0, 0, 513, bParam0);
	func_1661(50, 0, 0, 513, bParam0);
	func_1661(51, 0, 0, 513, bParam0);
	func_1661(52, 0, 0, 513, bParam0);
	func_1661(53, 0, 0, 513, bParam0);
	func_1661(54, 0, 0, 513, bParam0);
	func_1661(55, 0, 0, 513, bParam0);
	func_1661(56, 0, 0, 513, bParam0);
	func_1661(57, 0, 0, 513, bParam0);
	func_1661(58, 0, 0, 513, bParam0);
	func_1661(59, 0, 0, 513, bParam0);
	func_1661(60, 0, 0, 513, bParam0);
	func_1661(23, 0, 0, 1, 0);
	func_1661(67, 0, 0, 1, 0);
	func_1661(68, 0, 0, 1, 0);
	func_1661(69, 0, 0, 1, 0);
	func_1661(75, 0, 0, 1, 0);
	func_1661(79, 0, 0, 1, 0);
	func_1661(83, 0, 0, 1, 0);
	func_1661(87, 0, 0, 1, 0);
	func_1661(71, 0, 0, 1, 0);
	func_1661(73, 0, 0, 1, 0);
	func_1661(77, 0, 0, 1, 0);
	func_1661(78, 0, 0, 1, 0);
	func_1661(81, 0, 0, 1, 0);
	func_1661(85, 0, 0, 1, 0);
	func_1661(89, 0, 0, 1, 0);
	func_1661(76, 0, 0, 1, 0);
	func_1661(80, 0, 0, 1, 0);
	func_1661(82, 0, 0, 1, 0);
	func_1661(84, 0, 0, 1, 0);
	func_1661(86, 0, 0, 1, 0);
	func_1661(88, 0, 0, 1, 0);
	func_1661(72, 0, 0, 1, 0);
	func_1661(74, 0, 0, 1, 0);
	func_1661(93, 0, 0, 513, bParam0);
	func_1661(66, 0, 0, 1, 0);
	func_1661(64, 0, 0, 1, 0);
	func_1661(70, 0, 4, 513, bParam0);
	func_1661(90, 0, 0, 1, 0);
	func_1661(65, 0, 0, 513, bParam0);
	func_1661(91, 0, 0, 513, bParam0);
	func_1661(92, 0, 0, 1, 0);
	func_1662(1);
	return 1;
}

void func_1332(bool bParam0)
{
	if (func_56() != -1)
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
		func_295(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_295(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_1663(1, bParam0, 1);
	func_435();
	Global_40.f_11095.f_43 = bParam0;
}

bool func_1333()
{
	return false;
}

void func_1334(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	iVar0 = func_1664(iParam0);
	if (!bParam1)
	{
		func_803(iVar0, sParam4, iParam5);
	}
	func_804(iVar0, bParam1, fParam2, iParam3, 752097756);
}

void func_1335(bool bParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		func_157(-1415022764, 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

void func_1336()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		Global_17504.f_42[iVar0]->f_2 = 0;
		Global_17504.f_42[iVar0]->f_3 = 0;
		Global_17504.f_42[iVar0]->f_1 = 0;
		Global_17504.f_42[iVar0] = 0;
		iVar0++;
	}
}

void func_1337(vector3 vParam0, bool bParam3)
{
	if (!func_395() || bParam3)
	{
		iVar0 = func_1665(vParam0, 1);
		Global_40.f_7729 = iVar0;
	}
	else
	{
		iVar0 = Global_40.f_7729;
	}
	Global_1905941 = Global_40.f_7729;
	func_617(Global_35, iVar0, 1, !bParam3, 0);
	func_1666();
}

void func_1338(int iParam0, bool bParam1)
{
	if (func_56() == -1)
	{
		func_1667(0, iParam0);
		func_1667(2, iParam0);
		func_1667(1, iParam0);
		if (bParam1)
		{
			func_1668(10, iParam0);
			func_1668(12, iParam0);
			func_1668(13, iParam0);
			func_1668(15, iParam0);
		}
	}
}

void func_1339(bool bParam0)
{
	func_1669(1, func_1582(1), bParam0);
	func_1669(0, func_1582(0), bParam0);
	func_1669(2, func_1582(2), bParam0);
}

void func_1340()
{
	Global_40.f_11095.f_42 = 0;
	Global_40.f_11095.f_43 = 0;
	Global_40.f_11095.f_44 = 0f;
	Global_40.f_11095.f_45 = 0f;
	Global_40.f_11095.f_49 = 0f;
	Global_40.f_11095.f_50 = 0f;
	Global_40.f_11095.f_51 = 0f;
	Global_40.f_11095.f_52 = 0f;
	Global_40.f_11095.f_53 = 0f;
	Global_40.f_11095.f_54 = 0f;
	Global_40.f_11095.f_55 = 0f;
	Global_40.f_11095.f_56 = 0f;
	Global_40.f_11095.f_57 = 0f;
	Global_40.f_11095.f_58 = 0f;
	Global_40.f_11095.f_59 = 0f;
	Global_40.f_11095.f_60 = 0f;
	Global_40.f_11095.f_61 = 0f;
	Global_40.f_11095.f_62 = 0f;
	Global_40.f_11095.f_63 = 0f;
	Global_40.f_11095.f_64 = 0f;
	Global_40.f_11095.f_65 = 0;
	Global_40.f_11095.f_66 = 0;
	Global_40.f_11095.f_68 = 0f;
	Global_40.f_11095.f_69 = 0f;
	Global_40.f_11095.f_70 = 0f;
	func_433();
	func_1670();
	func_431();
	func_434();
	func_797();
	func_432();
	func_796();
}

void func_1341()
{
	Global_1347477->f_185 = 0;
	Global_1347477->f_184 = -1;
	Global_1347477->f_189 = 0;
	Global_1347477->f_190 = 0;
}

void func_1342()
{
	if (func_56() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_23118[iVar0]->f_1 = -15;
			Global_23118[iVar0]->f_4 = -1;
			Global_23118[iVar0]->f_4.f_1 = 0;
			Global_23118[iVar0]->f_4.f_2 = 0;
			Global_23118[iVar0]->f_4.f_3 = 0;
			func_1539(&(Global_23118[iVar0]->f_4.f_5), 1);
			Global_23118[iVar0]->f_4.f_4 = -15;
			func_1539(&(Global_23118[iVar0]->f_4.f_5), 2);
			if (Global_23118[iVar0] & 16777216 == 0)
			{
				Global_23118[iVar0] = (&Global_23118[iVar0] - Global_23118[iVar0] & 33554432);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_1058888->f_40615[iVar0]->f_1 = -15;
			Global_1058888->f_40615[iVar0]->f_4 = -1;
			Global_1058888->f_40615[iVar0]->f_4.f_1 = 0;
			Global_1058888->f_40615[iVar0]->f_4.f_2 = 0;
			Global_1058888->f_40615[iVar0]->f_4.f_3 = 0;
			func_1539(&(Global_1058888->f_40615[iVar0]->f_4.f_5), 1);
			Global_1058888->f_40615[iVar0]->f_4.f_4 = -15;
			func_1539(&(Global_1058888->f_40615[iVar0]->f_4.f_5), 2);
			if (Global_1058888->f_40615[iVar0] & 16777216 == 0)
			{
				Global_1058888->f_40615[iVar0] = (&Global_1058888->f_40615[iVar0] - Global_1058888->f_40615[iVar0] & 33554432);
			}
			iVar0++;
		}
	}
}

void func_1343()
{
	Var1.f_6 = -1;
	Var1.f_6.f_4 = -15;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar13 = Global_40.f_358[iVar0]->f_5;
		iVar13 = (iVar13 - iVar13 & 1);
		iVar13 = (iVar13 - iVar13 & 4);
		*Global_40.f_358[iVar0] = { Var1 };
		Global_40.f_358[iVar0]->f_5 = iVar13;
		iVar0++;
	}
}

void func_1344()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_1359();
}

void func_1345()
{
	_unlock_set_unlocked(304788622, false);
	_unlock_set_unlocked(-1968398307, false);
	_unlock_set_unlocked(1244328330, false);
	_unlock_set_unlocked(-1383789777, false);
	_unlock_set_unlocked(398807247, false);
	_unlock_set_unlocked(-1651350587, false);
	_unlock_set_unlocked(-121456797, false);
	_unlock_set_unlocked(645322743, false);
	_unlock_set_unlocked(-236259196, false);
	_unlock_set_unlocked(99890643, false);
}

void func_1346()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_1671(iVar0))
		{
		}
		func_1672(iVar0, 1);
		iVar0++;
	}
	func_1673();
	iVar1 = get_game_timer();
	while (!func_1674())
	{
		func_1673();
		if (iVar1 + 1000 > get_game_timer())
		{
		}
	else
	{
		}
		else
		{
			wait(0);
		}
	}
	while (func_1675())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_1676(iVar0);
			iVar0++;
		}
		wait(0);
	}
	func_1673();
}

void func_1347()
{
	if (!func_395())
	{
		func_1677(45);
	}
}

void func_1348(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_1 = -15;
		(*uParam0)[iVar0]->f_3 = -1;
		iVar0++;
	}
}

void func_1349(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_1678(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_1350(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1678(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_1351(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1678(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_1352(bool bParam0)
{
	func_1678(Global_1956614, bParam0);
}

void func_1353(bool bParam0)
{
	func_1678(&(Global_1415412->f_3), bParam0);
}

void func_1354(bool bParam0)
{
	if (func_228(Global_1934051->f_33))
	{
		func_1679(Global_1934051->f_33, 7148155);
	}
	func_1678(&(Global_1934051->f_33), bParam0);
}

void func_1355(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1681(func_1680(iVar0));
		if (iVar1 != 0)
		{
			func_1679(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_1678((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_1356(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_1682(iVar0, -1);
		func_1683(iVar0, 0);
		func_1684(iVar0, 0);
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

void func_1357(int iParam0)
{
	Global_1934266->f_56 = iParam0;
}

void func_1358()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1685(iVar0);
		iVar0++;
	}
}

void func_1359()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1457(iVar0))
		{
			func_1686(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_1360()
{
	iVar0 = 0;
	while (iVar0 < 130)
	{
		if (func_61(iVar0))
		{
			if (func_1687(iVar0))
			{
				func_1312(iVar0, 1, 350);
			}
			else
			{
				func_1312(iVar0, 0, 350);
			}
			if (func_1688(iVar0))
			{
				func_1313(iVar0, 1);
			}
			else
			{
				func_1313(iVar0, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1459(iVar1))
		{
			if (func_1689(iVar1, 0))
			{
				func_1690(iVar1, 1);
			}
			else
			{
				func_1690(iVar1, 0);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_1457(iVar2))
		{
			if (func_1691(iVar2, 1))
			{
				func_1692(iVar2, 1);
			}
			else
			{
				func_1692(iVar2, 0);
			}
			if (func_1693(iVar2, 4))
			{
				func_1694(iVar2, 1);
			}
			else
			{
				func_1694(iVar2, 0);
			}
		}
		iVar2++;
	}
}

int func_1361(int iParam0, int iParam1)
{
	if (iParam0 <= 999)
	{
		switch (iParam0)
		{
			case 0:
				return -1227171078;
			case 1:
				return 791558975;
			case 2:
				return 867055377;
			case 3:
				return 375900808;
			case 4:
				return -105122892;
			case 5:
				return -1934603088;
			case 6:
				return -880521161;
			case 7:
				return -12367247;
			case 8:
				return -205539813;
			case 9:
				return -1344316506;
			case 10:
				return -1752608012;
			case 11:
				return -419572339;
			case 12:
				return -308452334;
			case 13:
				return -1358839957;
			case 14:
				return 74558095;
			case 15:
				return 418732174;
			case 16:
				return 1637195725;
			case 17:
				return -1502176626;
			case 18:
				return 1787769013;
			case 19:
				return -1102485189;
			case 20:
				return -494501205;
			case 21:
				return -1953077157;
			case 22:
				return -1711271356;
			case 23:
				return -1814149473;
			case 24:
				return -2038682661;
			case 25:
				return 1942029925;
			case 26:
				return 758434361;
			case 27:
				return 995238331;
			case 28:
				return 786341068;
			case 29:
				return 1011266530;
			case 30:
				return 1465397279;
			case 31:
				return 1750223017;
			case 32:
				return -1332092694;
			case 33:
				return -1612740354;
			case 34:
				return -771082586;
			case 35:
				return 314268286;
			case 36:
				return -837278398;
			case 37:
				return 732213410;
			case 38:
				return 394645752;
			case 39:
				return -2118592067;
			case 40:
				return 1412640604;
			case 41:
				return 1353850870;
			case 42:
				return -1328608584;
			case 43:
				return -1993607266;
			case 44:
				return -579023972;
			case 45:
				return -2035690612;
			case 46:
				return 1695766303;
			case 47:
				return 2069758841;
			case 48:
				return -1285905261;
			case 49:
				return -1615798631;
			case 50:
				return 1022297466;
			case 51:
				return -32773682;
			case 52:
				return 175258389;
			case 53:
				return 99467956;
			case 54:
				return -358752435;
			case 55:
				return -388117549;
			case 56:
				return -2050292967;
			case 57:
				return 1667448928;
			case 58:
				return 478457592;
			case 59:
				return -1531891414;
			case 60:
				return 1123096857;
			case 61:
				return -1403680537;
			case 62:
				return 790716847;
			case 63:
				return -2038558347;
			case 64:
				return -709015620;
			case 65:
				return -216026216;
			case 66:
				return 1443160902;
			case 67:
				return -1887917134;
			case 68:
				return 1888299197;
			case 69:
				return -2027278911;
			case 70:
				return 1023659009;
			case 71:
				return -1756239979;
			case 72:
				return 1462996864;
			case 73:
				return 586982487;
			case 74:
				return -260338642;
			case 75:
				return -203666030;
			case 76:
				return -332077618;
			case 77:
				return 1500463595;
			case 78:
				return -507527158;
			case 79:
				return 109371257;
			case 80:
				return 987980670;
			case 81:
				return 88506962;
			case 82:
				return -1885745320;
			case 83:
				return -1236608434;
			case 84:
				return 2123177066;
			case 85:
				return 1549194689;
			case 86:
				return 1245020893;
			case 87:
				return 748716030;
			case 88:
				return 1714450556;
			case 89:
				return 1158682166;
			case 90:
				return 601674865;
			case 91:
				return -1155004560;
			case 92:
				return 1322917898;
			case 93:
				return 2003835710;
			case 94:
				return -1970704673;
			case 95:
				return -1626645938;
			case 96:
				return -213585457;
			case 97:
				return -1142369156;
			case 98:
				return 818116677;
			case 99:
				return -69230471;
			case 100:
				return 1431837084;
			case 101:
				return 548213215;
			case 102:
				return -576793615;
			case 103:
				return 1057626915;
			case 104:
				return -364746529;
			case 105:
				return -727795902;
			case 106:
				return 1117741040;
			case 107:
				return -1821047969;
			case 108:
				return -1026956792;
			case 109:
				return 1505625669;
			case 110:
				return -25407949;
			case 111:
				return -1370672668;
			case 112:
				return 579961519;
			case 113:
				return 1009268444;
			case 114:
				return -1183097861;
			case 115:
				return -1947776899;
			case 116:
				return -946172939;
			case 117:
				return 1503222889;
			case 118:
				return -781833059;
			case 119:
				return -210055184;
			case 120:
				return -1780101245;
			case 121:
				return 1089717172;
			case 122:
				return 1628125543;
			case 123:
				return -490888081;
			case 124:
				return -1668483683;
			case 125:
				return 1951492277;
			case 126:
				return 1658602955;
			case 127:
				return 794137797;
			case 128:
				return 714578215;
			case 129:
				return 218889449;
			case 130:
				return 1982574117;
			case 131:
				return 1348347440;
			case 132:
				return -1970661909;
			case 133:
				return 950102604;
			case 134:
				return -236505420;
			case 135:
				return 72757048;
			case 136:
				return 1797559106;
			case 137:
				return -455234138;
			case 138:
				return -520714309;
			case 139:
				return 2113196069;
			case 140:
				return 550900979;
			case 141:
				return -1903059161;
			case 142:
				return -1408528642;
			case 143:
				return 954660191;
			case 144:
				return 990323211;
			case 145:
				return 529538990;
			case 146:
				return -596647170;
			case 147:
				return -1548100798;
			case 148:
				return -1040876935;
			case 149:
				return 296901449;
			case 150:
				return 126245522;
			case 151:
				return -1368511730;
			case 152:
				return 1657716792;
			case 153:
				return -159383285;
			case 154:
				return -1233969318;
			case 155:
				return 34372170;
			case 156:
				return -1231590751;
			case 157:
				return 480079517;
			case 158:
				return 840671577;
			case 159:
				return 424030678;
			case 160:
				return -1188697038;
			case 161:
				return 446901936;
			case 162:
				return -355466967;
			case 163:
				return -1367331108;
			case 164:
				return 1446246869;
			case 165:
				return -2006166057;
			case 166:
				return 1701457723;
			case 167:
				return 1950175060;
			case 168:
				return -1467836497;
			case 169:
				return -153287664;
			case 170:
				return 1845082736;
			case 171:
				return 1723805622;
			case 172:
				return 836939099;
			case 173:
				return 1185302722;
			case 174:
				return -1411815376;
			case 175:
				return 236338048;
			case 176:
				return 963726415;
			case 177:
				return -1330115686;
			case 178:
				return -2029793397;
			case 179:
				return -2075613923;
			case 180:
				return 122656217;
			case 181:
				return 2120467495;
			case 182:
				return -578347576;
			case 183:
				return -1668585578;
			case 184:
				return 231465488;
			case 185:
				return 1148521608;
			case 186:
				return 1681219929;
			case 187:
				return 1234009870;
			case 188:
				return 1297050066;
			case 189:
				return -1780177928;
			case 190:
				return -1202134084;
			case 191:
				return 1232099469;
			case 192:
				return 78180283;
			case 193:
				return -2084181920;
			case 194:
				return 1243983880;
			case 195:
				return 218444191;
			case 196:
				return 406755377;
			case 197:
				return 45760211;
			case 198:
				return -276295943;
			case 199:
				return 1469029564;
			case 200:
				return -1282254562;
			case 201:
				return 1654725195;
			case 202:
				return 1838310467;
			case 203:
				return 1858824185;
			case 204:
				return 200254898;
			case 205:
				return -290532181;
			case 206:
				return -1576646991;
			case 207:
				return 2042008380;
			case 208:
				return 1218316854;
			case 209:
				return -1339303910;
			case 210:
				return -1175215405;
			case 211:
				return -45300706;
			case 212:
				return -1868065697;
			case 213:
				return -1824847199;
			case 214:
				return -1044879461;
			case 215:
				return 1680154251;
			case 216:
				return 2147287279;
			case 217:
				return 1059686305;
			case 218:
				return 865169517;
			case 219:
				return -1841373626;
			case 220:
				return -542729457;
			case 221:
				return -1878508229;
			case 222:
				return 2107187484;
			case 223:
				return 305770744;
			case 224:
				return -791844268;
			case 225:
				return -1077205471;
			case 226:
				return 314966081;
			case 227:
				return 588559146;
			case 228:
				return -1639263599;
			case 229:
				return -1860710511;
			case 230:
				return 1507636870;
			case 231:
				return 1828724907;
			case 232:
				return 2074469742;
			case 233:
				return 1270940175;
			case 234:
				return -1857826511;
			case 235:
				return 1235846615;
			case 236:
				return -228768324;
			case 237:
				return 2116863123;
			case 238:
				return 923904168;
			case 239:
				return -406091561;
			case 240:
				return 1328661203;
			case 241:
				return 390935467;
			case 242:
				return 2048424288;
			case 243:
				return -1281168296;
			case 244:
				return 333655543;
			case 245:
				return 1814584992;
			case 246:
				return 1985311482;
			case 247:
				return 1293066329;
			case 248:
				return 1591559150;
			case 249:
				return -1267732718;
			case 250:
				return 1553350496;
			case 251:
				return -211292927;
			case 252:
				return 1956638214;
			case 253:
				return -429272680;
			case 254:
				return -1147904941;
			case 255:
				return -2050953043;
			case 256:
				return 1475745048;
			case 257:
				return -194130427;
			case 258:
				return -1095212389;
			case 259:
				return 851692208;
			case 260:
				return 23155389;
			case 261:
				return 26891283;
			case 262:
				return -210716736;
			case 263:
				return -411656244;
			case 264:
				return -924556632;
			case 265:
				return 123375808;
			case 266:
				return 1685867266;
			case 267:
				return 114134722;
			case 268:
				return -776854388;
			case 269:
				return -487536887;
			case 270:
				return -1798878303;
			case 271:
				return -1592957907;
			case 272:
				return 1587306316;
			case 273:
				return 1843396051;
			case 274:
				return 975279703;
			case 275:
				return 389173377;
			case 276:
				return -522067447;
			case 277:
				return -949735658;
			case 278:
				return -397348625;
			case 279:
				return -2060242385;
			case 280:
				return 1962185138;
			case 281:
				return -507942078;
			case 282:
				return -1804644353;
			case 283:
				return -1338800241;
			case 284:
				return 564226665;
			case 285:
				return -90499713;
			case 286:
				return -467474289;
			case 287:
				return -132509591;
			case 288:
				return -428610275;
			case 289:
				return 481221010;
			case 290:
				return 185185864;
			case 291:
				return 1085514163;
			case 292:
				return 845153548;
			case 293:
				return -42034082;
			case 294:
				return -398691878;
			case 295:
				return 473029060;
			case 296:
				return 481179600;
			case 297:
				return 1109263023;
			case 298:
				return 993195225;
			case 299:
				return -469023093;
			case 300:
				return 1463013513;
			case 301:
				return 841582197;
			case 302:
				return -1413842511;
			case 303:
				return 2038175029;
			case 304:
				return -2019774090;
			case 305:
				return 1407797776;
			case 306:
				return 1676732959;
			case 307:
				return -800080485;
			case 308:
				return -1282121799;
			case 309:
				return -1589265636;
			case 310:
				return -908948395;
			case 311:
				return 941156576;
			case 312:
				return -150229440;
			case 313:
				return 109825344;
			case 314:
				return -791584308;
			case 315:
				return -501676965;
			case 316:
				return 1013889301;
			case 317:
				return 1328504470;
			case 318:
				return 434697210;
			case 319:
				return 732600205;
			case 320:
				return 1761382948;
			case 321:
				return 1494054498;
			case 322:
				return 1120553436;
			case 323:
				return -206099545;
			case 324:
				return -513210613;
			case 325:
				return 1647642801;
			case 326:
				return -1803096748;
			case 327:
				return -2118924370;
			case 328:
				return 650013618;
			case 329:
				return -85322742;
			case 330:
				return 163623351;
			case 331:
				return -543859359;
			case 332:
				return -261947652;
			case 333:
				return -1511724543;
			case 334:
				return 2129762503;
			case 335:
				return 1597899359;
			case 336:
				return 179362118;
			case 337:
				return -1851992388;
			case 338:
				return 1963990435;
			case 339:
				return 272847903;
			case 340:
				return -984859370;
			case 341:
				return -1282500197;
			case 342:
				return 433940019;
			case 343:
				return -1626372774;
			case 344:
				return -1384701399;
			case 345:
				return -878027121;
			case 346:
				return -657786672;
			case 347:
				return -2106962928;
			case 348:
				return 1008974836;
			case 349:
				return 240476248;
			case 350:
				return 297853910;
			case 351:
				return 59393897;
			case 352:
				return 892644029;
			case 353:
				return 707126889;
			case 354:
				return 1120267144;
			case 355:
				return 1298484403;
			case 356:
				return -697100746;
			case 357:
				return -999519443;
			case 358:
				return 128291088;
			case 359:
				return 1646425321;
			case 360:
				return 1345779248;
			case 361:
				return 953388298;
			case 362:
				return -55206167;
			case 363:
				return 1371028520;
			case 364:
				return -296143963;
			case 365:
				return -9036837;
			case 366:
				return 705255263;
			case 367:
				return 1479488426;
			case 368:
				return -575193412;
			case 369:
				return 1936286816;
			case 370:
				return -120697124;
			case 371:
				return -1399517481;
			case 372:
				return -471215553;
			case 373:
				return -170363364;
			case 374:
				return 1364208910;
			case 375:
				return -361115047;
			case 376:
				return -1295114026;
			case 377:
				return -735397297;
			case 378:
				return 770694722;
			case 379:
				return 914410532;
			case 380:
				return 1152215114;
			case 381:
				return -1940137369;
			case 382:
				return 525225162;
			case 383:
				return -459281333;
			case 384:
				return -1704610313;
			case 385:
				return 1225448291;
			case 386:
				return 70234873;
			case 387:
				return -1219387173;
			case 388:
				return 1192924966;
			case 389:
				return -1837074090;
			case 390:
				return -119249538;
			case 391:
				return 1225008069;
			case 392:
				return -390042476;
			case 393:
				return -1108993414;
			case 394:
				return 1242891102;
			case 395:
				return 749111889;
			case 396:
				return -1451532610;
			case 397:
				return -679400796;
			case 398:
				return 1377332900;
			case 399:
				return 121671270;
			case 400:
				return -1184622003;
			case 401:
				return 1031465259;
			case 402:
				return -84770874;
			case 403:
				return -147674048;
			case 404:
				return -2024553896;
			case 405:
				return -399749454;
			case 406:
				return 1730734904;
			case 407:
				return -489413085;
			case 408:
				return -991384379;
			case 409:
				return -138573168;
			case 410:
				return 712011765;
			case 411:
				return 1428145499;
			case 412:
				return 893948884;
			case 413:
				return -1988267089;
			case 414:
				return -1791399933;
			case 415:
				return -1955772361;
			case 416:
				return -657484822;
			case 417:
				return -1834731109;
			case 418:
				return -494315136;
			case 419:
				return -1318783204;
			case 420:
				return -187008013;
			case 421:
				return 169435479;
			case 422:
				return -598309422;
			case 423:
				return 915094078;
			case 424:
				return 145972875;
			case 425:
				return 1395717001;
			case 426:
				return 596251708;
			case 427:
				return 1611566404;
			case 428:
				return 1112494534;
			case 429:
				return 2122959418;
			case 430:
				return -570554375;
			case 431:
				return 1411871822;
			case 432:
				return 1112199317;
			case 433:
				return 910735505;
			case 434:
				return 620205551;
			case 435:
				return 1530561140;
			case 436:
				return -1994596808;
			case 437:
				return -1116715310;
			case 438:
				return 1800610469;
			case 439:
				return -1577349143;
			case 440:
				return 1754822876;
			case 441:
				return -23878468;
			case 442:
				return 206716985;
			case 443:
				return 783222006;
			case 444:
				return 1010409483;
			case 445:
				return 1710247623;
			case 446:
				return 1699486378;
			case 447:
				return -1624764831;
			case 448:
				return -1925027178;
			case 449:
				return -1061957256;
			case 450:
				return -1362907752;
			case 451:
				return -466511753;
			case 452:
				return -764906271;
			case 453:
				return 162227050;
			case 454:
				return -136233002;
			case 455:
				return -1949341416;
			case 456:
				return 2117979637;
			case 457:
				return -1054059567;
			case 458:
				return -1298811228;
			case 459:
				return -680624039;
			case 460:
				return -1205507155;
			case 461:
				return -440482081;
			case 462:
				return -1823235574;
			case 463:
				return 1593915778;
			case 464:
				return 1146487852;
			case 465:
				return -1050214836;
			case 466:
				return -1347331359;
			case 467:
				return 393849428;
			case 468:
				return 1043003318;
			case 469:
				return -1641990515;
			case 470:
				return -403191239;
			case 471:
				return 1738164608;
			case 472:
				return 2042883539;
			case 473:
				return 1127579831;
			case 474:
				return -1386156083;
			case 475:
				return -1504407916;
			case 476:
				return 1964684696;
			case 477:
				return -2087489409;
			case 478:
				return -1869018428;
			case 479:
				return 123627865;
			case 480:
				return -89731094;
			case 481:
				return 2012236403;
			case 482:
				return 708325124;
			case 483:
				return 358745432;
			case 484:
				return 1177806587;
			case 485:
				return -790102943;
			case 486:
				return -1147219505;
			case 487:
				return 1850455850;
			case 488:
				return 649832739;
			case 489:
				return 334660497;
			case 490:
				return -577270367;
			case 491:
				return -860557048;
			case 492:
				return 1367031332;
			case 493:
				return -1614980441;
			case 494:
				return -1110436236;
			case 495:
				return -811910646;
			case 496:
				return -1970130863;
			case 497:
				return -341511651;
			case 498:
				return -111932037;
			case 499:
				return 1538052651;
			case 500:
				return 347522112;
			case 501:
				return 1163012838;
			case 502:
				return 2020905258;
			case 503:
				return 1790899647;
			case 504:
				return 303940734;
			case 505:
				return -53175828;
			case 506:
				return 929664789;
			case 507:
				return 541548753;
			case 508:
				return 194818087;
			case 509:
				return -358583593;
			case 510:
				return -537830023;
			case 511:
				return -440014554;
			case 512:
				return -612772722;
			case 513:
				return -1051779015;
			case 514:
				return -1222767657;
			case 515:
				return -1529092269;
			case 516:
				return -1836957024;
			case 517:
				return 1610800538;
			case 518:
				return -276956310;
			case 519:
				return -1447956525;
			case 520:
				return -1829780913;
			case 521:
				return -1386645722;
			case 522:
				return -1777186664;
			case 523:
				return -1866154499;
			case 524:
				return 2054590817;
			case 525:
				return 1613216286;
			case 526:
				return 1724828042;
			case 527:
				return 337191968;
			case 528:
				return -34441261;
			case 529:
				return -341912788;
			case 530:
				return -511918360;
			case 531:
				return -819848653;
			case 532:
				return -305768589;
			case 533:
				return -1678363692;
			case 534:
				return -791634552;
			case 535:
				return 1922984129;
			case 536:
				return 661410398;
			case 537:
				return 1504917227;
			case 538:
				return -1144849655;
			case 539:
				return -1372561436;
			case 540:
				return 1584513128;
			case 541:
				return -1753104324;
			case 542:
				return -1447795551;
			case 543:
				return -1139963561;
			case 544:
				return -835244630;
			case 545:
				return 1803020325;
			case 546:
				return 2109574320;
			case 547:
				return -1594502368;
			case 548:
				return -1287882835;
			case 549:
				return 907836787;
			case 550:
				return 820834240;
			case 551:
				return -1873400175;
			case 552:
				return 1570785574;
			case 553:
				return 1810523578;
			case 554:
				return 957710353;
			case 555:
				return -660881633;
			case 556:
				return -1497769128;
			case 557:
				return -845885815;
			case 558:
				return -668402627;
			case 559:
				return -1436966753;
			case 560:
				return -1105410003;
			case 561:
				return -792302208;
			case 562:
				return -1544547372;
			case 563:
				return -1268599623;
			case 564:
				return 1281867320;
			case 565:
				return -1699226913;
			case 566:
				return -1610553999;
			case 567:
				return -1909243438;
			case 568:
				return -1551799186;
			case 569:
				return -1999554802;
			case 570:
				return 723981565;
			case 571:
				return 963752338;
			case 572:
				return 372402960;
			case 573:
				return 989901996;
			case 574:
				return -239754729;
			case 575:
				return 142266273;
			case 576:
				return 911761394;
			case 577:
				return 1676688161;
			case 578:
				return 1907906229;
			case 579:
				return -1621282302;
			case 580:
				return -1801773954;
			case 581:
				return -1003029579;
			case 582:
				return 165089723;
			case 583:
				return 395586869;
			case 584:
				return 623560802;
			case 585:
				return 888203246;
			case 586:
				return 1123550204;
			case 587:
				return 1862360078;
			case 588:
				return -1320869011;
			case 589:
				return -1078345642;
			case 590:
				return -571278136;
			case 591:
				return -856663353;
			case 592:
				return -632654469;
			case 593:
				return -380562552;
			case 594:
				return 1911459413;
			case 595:
				return -1606456586;
			case 596:
				return -1888892597;
			case 597:
				return 1154823199;
			case 598:
				return 856068226;
			case 599:
				return 1786380136;
			case 600:
				return 1943475930;
			case 601:
				return 1697315198;
			case 602:
				return -1787340262;
			case 603:
				return -1341845703;
			case 604:
				return -1632670578;
			case 605:
				return -932593662;
			case 606:
				return -628675859;
			case 607:
				return 1076559944;
			case 608:
				return -692835048;
			case 609:
				return -1669842815;
			case 610:
				return -1271830541;
			case 611:
				return 2128543055;
			case 612:
				return -1935894326;
			case 613:
				return 1433578103;
			case 614:
				return 790545795;
			case 615:
				return 1034183310;
			case 616:
				return -801044535;
			case 617:
				return -394250169;
			case 618:
				return -89465700;
			case 619:
				return 110949504;
			case 620:
				return 596777993;
			case 621:
				return -1176844132;
			case 622:
				return -951786640;
			case 623:
				return 1569132534;
			case 624:
				return 1790552667;
			case 625:
				return -1326401848;
			case 626:
				return 1985388592;
			case 627:
				return 1281969238;
			case 628:
				return 107266126;
			case 629:
				return 484699468;
			case 630:
				return 1671428807;
			case 631:
				return 962569799;
			case 632:
				return -442895418;
			case 633:
				return -611786844;
			case 634:
				return -988630336;
			case 635:
				return -1152278722;
			case 636:
				return 1905560517;
			case 637:
				return -539629498;
			case 638:
				return -1789947458;
			case 639:
				return -554392313;
			case 640:
				return -313900622;
			case 641:
				return 1116204076;
			case 642:
				return -792360791;
			case 643:
				return 362287693;
			case 644:
				return -1366441116;
			case 645:
				return -1539068208;
			case 646:
				return 1084352402;
			case 647:
				return 778060559;
			case 648:
				return -177385174;
			case 649:
				return -352371634;
			case 650:
				return 1210414711;
			case 651:
				return -697691390;
			case 652:
				return -1128734816;
			case 653:
				return -957418484;
			case 654:
				return -47325047;
			case 655:
				return -1418838773;
			case 656:
				return -534084805;
			case 657:
				return -229103722;
			case 658:
				return -130632881;
			case 659:
				return -899950694;
			case 660:
				return -604308776;
			case 661:
				return -1389028019;
			case 662:
				return -1809396443;
			case 663:
				return -1571264120;
			case 664:
				return 1196012392;
			case 665:
				return -1516802054;
			case 666:
				return 1741747318;
			case 667:
				return 958338835;
			case 668:
				return 309321739;
			case 669:
				return 88491448;
			case 670:
				return -1205359748;
			case 671:
				return -1462563629;
			case 672:
				return 1537045093;
			case 673:
				return 1311889294;
			case 674:
				return 988916260;
			case 675:
				return 718014937;
			case 676:
				return 1466524435;
			case 677:
				return 1227802270;
			case 678:
				return -2107950854;
			case 679:
				return 1947835511;
			case 680:
				return -202858847;
			case 681:
				return -181493459;
			case 682:
				return 1332598186;
			case 683:
				return 1624569976;
			case 684:
				return -407173554;
			case 685:
				return -91477008;
			case 686:
				return -820889560;
			case 687:
				return -1051747165;
			case 688:
				return -728317135;
			case 689:
				return -2045467066;
			case 690:
				return -904319410;
			case 691:
				return -1126624306;
			case 692:
				return -1211193308;
			case 693:
				return -907260833;
			case 694:
				return 300899428;
			case 695:
				return 495612826;
			case 696:
				return -414480611;
			case 697:
				return 16759429;
			case 698:
				return -191377954;
			case 699:
				return -22617604;
			case 700:
				return -799210135;
			case 701:
				return -353682811;
			case 702:
				return 1796848348;
			case 703:
				return -1114644529;
			case 704:
				return 992705844;
			case 705:
				return 89198976;
			case 706:
				return 396801579;
			case 707:
				return -505984371;
			case 708:
				return -199102686;
			case 709:
				return -1099201578;
			case 710:
				return -347281611;
			case 711:
				return -649772250;
			case 712:
				return -822399342;
			case 713:
				return -1127183811;
			case 714:
				return -1599909409;
			case 715:
				return -1760411971;
			case 716:
				return 1141603828;
			case 717:
				return 309893839;
			case 718:
				return -946010859;
			case 719:
				return -706240086;
			case 720:
				return 2105962729;
			case 721:
				return 1271795065;
			case 722:
				return -1514583188;
			case 723:
				return -1819138274;
			case 724:
				return -2109963149;
			case 725:
				return 1886183636;
			case 726:
				return 1589493110;
			case 727:
				return 1290082757;
			case 728:
				return -1732116082;
			case 729:
				return -2043224964;
			case 730:
				return 1970158315;
			case 731:
				return 1655444839;
			case 732:
				return 1373270980;
			case 733:
				return 1058885194;
			case 734:
				return -1944199774;
			case 735:
				return 999079041;
			case 736:
				return 635605293;
			case 737:
				return 1493792634;
			case 738:
				return -213406744;
			case 739:
				return -505870069;
			case 740:
				return -152330007;
			case 741:
				return 2024678512;
			case 742:
				return 1188643011;
			case 743:
				return 1680243549;
			case 744:
				return 845486043;
			case 745:
				return -1351118334;
			case 746:
				return -1206325201;
			case 747:
				return -1514091649;
			case 748:
				return 1284413724;
			case 749:
				return 976581738;
			case 750:
				return 1895916033;
			case 751:
				return 1588804965;
			case 752:
				return -1698171004;
			case 753:
				return -1437165919;
			case 754:
				return -1206046162;
			case 755:
				return -1020114856;
			case 756:
				return -778869478;
			case 757:
				return -558071952;
			case 758:
				return 1109042843;
			case 759:
				return 817890278;
			case 760:
				return 1719496544;
			case 761:
				return 1452003197;
			case 762:
				return -2077939025;
			case 763:
				return 2036208929;
			case 764:
				return 1074060936;
			case 765:
				return 1238037012;
			case 766:
				return -1431915598;
			case 767:
				return -1133947081;
			case 768:
				return -987535189;
			case 769:
				return -676262434;
			case 770:
				return -691537108;
			case 771:
				return -2138714467;
			case 772:
				return -1967660287;
			case 773:
				return -1574858284;
			case 774:
				return -1370707414;
			case 775:
				return 1429764111;
			case 776:
				return 1249910627;
			case 777:
				return 1421751263;
			case 778:
				return -1509861784;
			case 779:
				return -1337431306;
			case 780:
				return 2142472653;
			case 781:
				return -1947360703;
			case 782:
				return -137953046;
			case 783:
				return 777285116;
			case 784:
				return 396247184;
			case 785:
				return 164078819;
			case 786:
				return 85760909;
			case 787:
				return -160629206;
			case 788:
				return 1187555601;
			case 789:
				return 1958675709;
			case 790:
				return -1568677762;
			case 791:
				return 1112154104;
			case 792:
				return 1871575679;
			case 793:
				return -1665641261;
			case 794:
				return 949010559;
			case 795:
				return 1251107970;
			case 796:
				return 1709873970;
			case 797:
				return 2015969199;
			case 798:
				return -2125049335;
			case 799:
				return -1817446732;
			case 800:
				return 1279518456;
			case 801:
				return 973226613;
			case 802:
				return -167789967;
			case 803:
				return -440067588;
			case 804:
				return 321549510;
			case 805:
				return 23384379;
			case 806:
				return 605776796;
			case 807:
				return -601990237;
			case 808:
				return 29402855;
			case 809:
				return -1216834984;
			case 810:
				return -317850238;
			case 811:
				return -1524568663;
			case 812:
				return -1405751859;
			case 813:
				return 1142070668;
			case 814:
				return 1372403969;
			case 815:
				return 1605915863;
			case 816:
				return 1836707930;
			case 817:
				return 180955894;
			case 818:
				return 34074416;
			case 819:
				return -2147456217;
			case 820:
				return 1284375619;
			case 821:
				return 1524277468;
			case 822:
				return -1191944950;
			case 823:
				return 928438741;
			case 824:
				return 1870962666;
			case 825:
				return 1572797535;
			case 826:
				return 1071693987;
			case 827:
				return 840049926;
			case 828:
				return 633637995;
			case 829:
				return 186865449;
			case 830:
				return 1756984590;
			case 831:
				return 923046309;
			case 832:
				return -1522373085;
			case 833:
				return 1959955780;
			case 834:
				return -1045092600;
			case 835:
				return -1889648037;
			case 836:
				return 1611441611;
			case 837:
				return 1306657142;
			case 838:
				return -2089718636;
			case 839:
				return 1898694665;
			case 840:
				return -1932034204;
			case 841:
				return 2050087449;
			case 842:
				return 1634307162;
			case 843:
				return 1807196406;
			case 844:
				return 2113750401;
			case 845:
				return -553515135;
			case 846:
				return -325934430;
			case 847:
				return 39636534;
			case 848:
				return 558646452;
			case 849:
				return -404008465;
			case 850:
				return -132386224;
			case 851:
				return 236330564;
			case 852:
				return 484686815;
			case 853:
				return -1564489831;
			case 854:
				return 2086065928;
			case 855:
				return -2059605804;
			case 856:
				return -1761375135;
			case 857:
				return -1046814317;
			case 858:
				return -749435642;
			case 859:
				return 8183638;
			case 860:
				return -2096133643;
			case 861:
				return -1340218351;
			case 862:
				return 345615631;
			case 863:
				return 42666226;
			case 864:
				return 791437876;
			case 865:
				return 518439337;
			case 866:
				return 965568069;
			case 867:
				return 744967161;
			case 868:
				return 1579036522;
			case 869:
				return -820768428;
			case 870:
				return 8647731;
			case 871:
				return -242133426;
			case 872:
				return -2049453698;
			case 873:
				return -1869715745;
			case 874:
				return -2099754125;
			case 875:
				return -854827046;
			case 876:
				return 2066103311;
			case 877:
				return -1520332667;
			case 878:
				return -843829222;
			case 879:
				return 538924271;
			case 880:
				return -101119837;
			case 881:
				return -629519934;
			case 882:
				return -390109620;
			case 883:
				return -1243250535;
			case 884:
				return -1363687004;
			case 885:
				return -1064080037;
			case 886:
				return 1552590155;
			case 887:
				return 771442737;
			case 888:
				return 2014469210;
			case 889:
				return -1982857259;
			case 890:
				return 1554905902;
			case 891:
				return 1784419978;
			case 892:
				return 2004332737;
			case 893:
				return -2058171273;
			case 894:
				return -1812764232;
			case 895:
				return -1581939396;
			case 896:
				return -1284904731;
			case 897:
				return -1524937656;
			case 898:
				return -670322136;
			case 899:
				return -893773947;
			case 900:
				return -675106406;
			case 901:
				return -911141513;
			case 902:
				return 303950392;
			case 903:
				return -1860016061;
			case 904:
				return 1592001479;
			case 905:
				return -862003397;
			case 906:
				return -623608922;
			case 907:
				return 1515649709;
			case 908:
				return -1927598962;
			case 909:
				return -1570154710;
			case 910:
				return -1409389996;
			case 911:
				return 1401567593;
			case 912:
				return 635657756;
			case 913:
				return 1459601492;
			case 914:
				return -186385338;
			case 915:
				return 751889435;
			case 916:
				return -125140081;
			case 917:
				return 1383905138;
			case 918:
				return 472730324;
			case 919:
				return 1367324028;
			case 920:
				return -640060001;
			case 921:
				return -406384262;
			case 922:
				return -1119110012;
			case 923:
				return -884844431;
			case 924:
				return 355363912;
			case 925:
				return 619776973;
			case 926:
				return 474722494;
			case 927:
				return -363836216;
			case 928:
				return -42700016;
			case 929:
				return -960002633;
			case 930:
				return -669996983;
			case 931:
				return -1262984807;
			case 932:
				return 442326505;
			case 933:
				return 480535159;
			case 934:
				return -1360656644;
			case 935:
				return -1133469167;
			case 936:
				return -824490266;
			case 937:
				return -521311478;
			case 938:
				return -133908828;
			case 939:
				return 1976119851;
			case 940:
				return -1954325089;
			case 941:
				return -1725171472;
			case 942:
				return 518915190;
			case 943:
				return -1250414120;
			case 944:
				return -1492961536;
			case 945:
				return 1644604684;
			case 946:
				return -1007521570;
			case 947:
				return -1307194047;
			case 948:
				return 1411125587;
			case 949:
				return 1707259040;
			case 950:
				return -1844738039;
			case 951:
				return -1520685398;
			case 952:
				return 1990512956;
			case 953:
				return -135572537;
			case 954:
				return 157087402;
			case 955:
				return -596402984;
			case 956:
				return 1507419538;
			case 957:
				return 1267157230;
			case 958:
				return -791391366;
			case 959:
				return -1022969889;
			case 960:
				return -1311304320;
			case 961:
				return -1508180460;
			case 962:
				return 822544561;
			case 963:
				return 1495128290;
			case 964:
				return 1256012897;
			case 965:
				return -294419569;
			case 966:
				return 1614341912;
			case 967:
				return 674625299;
			case 968:
				return -136535866;
			case 969:
				return -164717206;
			case 970:
				return -1957247048;
			case 971:
				return 2038965275;
			case 972:
				return -1365995977;
			case 973:
				return -1660228832;
			case 974:
				return -1508977249;
			case 975:
				return -1815400168;
			case 976:
				return 1067157814;
			case 977:
				return -1333400947;
			case 978:
				return -881975203;
			case 979:
				return -1122991198;
			case 980:
				return 968725941;
			case 981:
				return 1179102921;
			case 982:
				return 165295603;
			case 983:
				return -677883536;
			case 984:
				return 758578348;
			case 985:
				return -85059557;
			case 986:
				return -1699480783;
			case 987:
				return 1763710986;
			case 988:
				return 1994797974;
			case 989:
				return -1015231294;
			case 990:
				return -784635841;
			case 991:
				return -1611004483;
			case 992:
				return -338204811;
			case 993:
				return -636894246;
			case 994:
				return -968844216;
			case 995:
				return -1267074885;
			case 996:
				return -1566583545;
			case 997:
				return -1823721888;
			case 998:
				return 1513315530;
			case 999:
				return 1149645168;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 1999)
	{
		switch (iParam0)
		{
			case 1000:
				return 893686509;
			case 1001:
				return 325963612;
			case 1002:
				return 500163616;
			case 1003:
				return -258963038;
			case 1004:
				return 243661217;
			case 1005:
				return -128758468;
			case 1006:
				return 647637449;
			case 1007:
				return 1288992317;
			case 1008:
				return 991810256;
			case 1009:
				return 1780822198;
			case 1010:
				return -396368648;
			case 1011:
				return -1166964452;
			case 1012:
				return -861590141;
			case 1013:
				return 518836757;
			case 1014:
				return 825849518;
			case 1015:
				return 57088778;
			case 1016:
				return -1985603707;
			case 1017:
				return -1217072350;
			case 1018:
				return -383002993;
			case 1019:
				return -1751796892;
			case 1020:
				return -854581672;
			case 1021:
				return -79955281;
			case 1022:
				return -1982549724;
			case 1023:
				return 2080839049;
			case 1024:
				return -1340047941;
			case 1025:
				return -1722920937;
			case 1026:
				return -860145936;
			case 1027:
				return -439588590;
			case 1028:
				return 1498663119;
			case 1029:
				return -1340049817;
			case 1030:
				return 1055200242;
			case 1031:
				return -1851082372;
			case 1032:
				return -1570153735;
			case 1033:
				return -717242179;
			case 1034:
				return 1744988242;
			case 1035:
				return 1514196175;
			case 1036:
				return 1149083977;
			case 1037:
				return 919799284;
			case 1038:
				return 849280396;
			case 1039:
				return 584670721;
			case 1040:
				return -583585498;
			case 1041:
				return -813591109;
			case 1042:
				return 699025931;
			case 1043:
				return 438545150;
			case 1044:
				return 200216213;
			case 1045:
				return 1989927921;
			case 1046:
				return 1423390476;
			case 1047:
				return 588731273;
			case 1048:
				return 890238842;
			case 1049:
				return 52564895;
			case 1050:
				return 408108545;
			case 1051:
				return -424912204;
			case 1052:
				return -606130002;
			case 1053:
				return -814049307;
			case 1054:
				return -2014377809;
			case 1055:
				return -84644136;
			case 1056:
				return 347382360;
			case 1057:
				return 87065424;
			case 1058:
				return -701881749;
			case 1059:
				return 75661083;
			case 1060:
				return 925099105;
			case 1061:
				return -990543870;
			case 1062:
				return -761619640;
			case 1063:
				return 1094514831;
			case 1064:
				return 1472244478;
			case 1065:
				return 2102457886;
			case 1066:
				return -1188270636;
			case 1067:
				return -1490695737;
			case 1068:
				return 1687372959;
			case 1069:
				return 308224056;
			case 1070:
				return 1497809836;
			case 1071:
				return 829551619;
			case 1072:
				return 1136334997;
			case 1073:
				return -1909445254;
			case 1074:
				return -1334676994;
			case 1075:
				return 1823140468;
			case 1076:
				return 1561839464;
			case 1077:
				return 1360047962;
			case 1078:
				return 1062144983;
			case 1079:
				return 57840671;
			case 1080:
				return 833646746;
			case 1081:
				return -592296293;
			case 1082:
				return -1293712063;
			case 1083:
				return -1588731370;
			case 1084:
				return -562078600;
			case 1085:
				return -852444709;
			case 1086:
				return 1776808779;
			case 1087:
				return 1488212196;
			case 1088:
				return -1410585699;
			case 1089:
				return 1620808957;
			case 1090:
				return -1906741128;
			case 1091:
				return 1142807574;
			case 1092:
				return 1926150499;
			case 1093:
				return 644489391;
			case 1094:
				return 540396823;
			case 1095:
				return 705159355;
			case 1096:
				return -69335960;
			case 1097:
				return -1998971294;
			case 1098:
				return -1818807332;
			case 1099:
				return 1855056334;
			case 1100:
				return 1921111385;
			case 1101:
				return -927333940;
			case 1102:
				return -589026784;
			case 1103:
				return -1424439674;
			case 1104:
				return -1184144597;
			case 1105:
				return 369499235;
			case 1106:
				return 547118156;
			case 1107:
				return -1026318156;
			case 1108:
				return -1339786410;
			case 1109:
				return -1570381863;
			case 1110:
				return -1952468403;
			case 1111:
				return 2111575750;
			case 1112:
				return -641004135;
			case 1113:
				return -1289895873;
			case 1114:
				return 1696506954;
			case 1115:
				return -1330693278;
			case 1116:
				return -1560961041;
			case 1117:
				return 475501241;
			case 1118:
				return 1827350630;
			case 1119:
				return 1614647051;
			case 1120:
				return -779062877;
			case 1121:
				return -1018309346;
			case 1122:
				return -162448600;
			case 1123:
				return -417882955;
			case 1124:
				return 1488722231;
			case 1125:
				return -994971359;
			case 1126:
				return -1223731748;
			case 1127:
				return -1582617836;
			case 1128:
				return -1822585223;
			case 1129:
				return -1600771866;
			case 1130:
				return -1140579097;
			case 1131:
				return -1374287605;
			case 1132:
				return -530780776;
			case 1133:
				return 1386009110;
			case 1134:
				return -2059880623;
			case 1135:
				return 2005834749;
			case 1136:
				return -1090841709;
			case 1137:
				return -232621599;
			case 1138:
				return -496510356;
			case 1139:
				return 1973879020;
			case 1140:
				return -1411027608;
			case 1141:
				return -1692480549;
			case 1142:
				return 1019870773;
			case 1143:
				return 722754250;
			case 1144:
				return 425080654;
			case 1145:
				return 124097389;
			case 1146:
				return -276569174;
			case 1147:
				return -508508156;
			case 1148:
				return -1896863365;
			case 1149:
				return -1706409937;
			case 1150:
				return -1336579003;
			case 1151:
				return 2015984622;
			case 1152:
				return 1306077006;
			case 1153:
				return 424001060;
			case 1154:
				return 982397463;
			case 1155:
				return -214883490;
			case 1156:
				return -445937709;
			case 1157:
				return -605358894;
			case 1158:
				return -835659426;
			case 1159:
				return -1174032120;
			case 1160:
				return 1222853521;
			case 1161:
				return -445940577;
			case 1162:
				return -209315624;
			case 1163:
				return 30684532;
			case 1164:
				return 254660647;
			case 1165:
				return 1730609188;
			case 1166:
				return -446578585;
			case 1167:
				return -140221204;
			case 1168:
				return -487769218;
			case 1169:
				return 853760873;
			case 1170:
				return 1159266260;
			case 1171:
				return 256513079;
			case 1172:
				return -589703006;
			case 1173:
				return -895831004;
			case 1174:
				return -594356208;
			case 1175:
				return -887638758;
			case 1176:
				return -238189947;
			case 1177:
				return -276070911;
			case 1178:
				return 1474428677;
			case 1179:
				return 1151031416;
			case 1180:
				return -506227978;
			case 1181:
				return -669417598;
			case 1182:
				return 255749579;
			case 1183:
				return -49559194;
			case 1184:
				return 968676969;
			case 1185:
				return -1224519440;
			case 1186:
				return -703885568;
			case 1187:
				return 58091989;
			case 1188:
				return -244890185;
			case 1189:
				return -272743779;
			case 1190:
				return 1064045917;
			case 1191:
				return 699523561;
			case 1192:
				return 434651734;
			case 1193:
				return -1674852641;
			case 1194:
				return -1771848881;
			case 1195:
				return -2004017246;
			case 1196:
				return -2067766301;
			case 1197:
				return 1097588027;
			case 1198:
				return -286738370;
			case 1199:
				return 466489856;
			case 1200:
				return 1268314517;
			case 1201:
				return 142109521;
			case 1202:
				return -1041004081;
			case 1203:
				return -820599787;
			case 1204:
				return -485176303;
			case 1205:
				return -188518546;
			case 1206:
				return -1969743079;
			case 1207:
				return -1733740741;
			case 1208:
				return -189315588;
			case 1209:
				return 82110039;
			case 1210:
				return 387123891;
			case 1211:
				return 692563740;
			case 1212:
				return -1335476889;
			case 1213:
				return -1647536076;
			case 1214:
				return -1946749661;
			case 1215:
				return -486825277;
			case 1216:
				return -726137284;
			case 1217:
				return -997530038;
			case 1218:
				return -1295105327;
			case 1219:
				return 473109809;
			case 1220:
				return 1178144317;
			case 1221:
				return 1541716368;
			case 1222:
				return 1318264557;
			case 1223:
				return 532463937;
			case 1224:
				return 301868484;
			case 1225:
				return 55117914;
			case 1226:
				return 1617708606;
			case 1227:
				return 1855972005;
			case 1228:
				return 205921779;
			case 1229:
				return 426948684;
			case 1230:
				return 664851624;
			case 1231:
				return 900362427;
			case 1232:
				return 2020553633;
			case 1233:
				return 1244682020;
			case 1234:
				return -2132851583;
			case 1235:
				return -1834653683;
			case 1236:
				return -1378673048;
			case 1237:
				return -1349377562;
			case 1238:
				return -1252037874;
			case 1239:
				return -285712829;
			case 1240:
				return -46269746;
			case 1241:
				return -881551556;
			case 1242:
				return -642829391;
			case 1243:
				return 870311953;
			case 1244:
				return 341101829;
			case 1245:
				return -1090641311;
			case 1246:
				return -1327069646;
			case 1247:
				return -526817897;
			case 1248:
				return -1972848329;
			case 1249:
				return 2082086042;
			case 1250:
				return 1998642125;
			case 1251:
				return -1956510641;
			case 1252:
				return -1180770104;
			case 1253:
				return 1069804816;
			case 1254:
				return 879220312;
			case 1255:
				return 1656271613;
			case 1256:
				return -1282768177;
			case 1257:
				return -1011604702;
			case 1258:
				return 424005188;
			case 1259:
				return 741930026;
			case 1260:
				return -34859119;
			case 1261:
				return 185184716;
			case 1262:
				return -1902377423;
			case 1263:
				return -924943691;
			case 1264:
				return -1172841176;
			case 1265:
				return 1673801858;
			case 1266:
				return 1435145231;
			case 1267:
				return 200507622;
			case 1268:
				return -508827995;
			case 1269:
				return 678818872;
			case 1270:
				return 104771530;
			case 1271:
				return 1297595891;
			case 1272:
				return 379932823;
			case 1273:
				return 1640589014;
			case 1274:
				return -961350733;
			case 1275:
				return 1483904820;
			case 1276:
				return 1728394329;
			case 1277:
				return 1907444145;
			case 1278:
				return -2089882324;
			case 1279:
				return 235209306;
			case 1280:
				return 1961175976;
			case 1281:
				return -907094626;
			case 1282:
				return -1154238424;
			case 1283:
				return -1367204155;
			case 1284:
				return 2143273281;
			case 1285:
				return 1884365412;
			case 1286:
				return -850709795;
			case 1287:
				return -477339809;
			case 1288:
				return 1064769327;
			case 1289:
				return 1303360416;
			case 1290:
				return -1710273434;
			case 1291:
				return -1466504843;
			case 1292:
				return -499643373;
			case 1293:
				return 799975167;
			case 1294:
				return 1037779800;
			case 1295:
				return -1960256014;
			case 1296:
				return -1728284263;
			case 1297:
				return -2102342394;
			case 1298:
				return -348615841;
			case 1299:
				return -108320764;
			case 1300:
				return -1096175042;
			case 1301:
				return 489189182;
			case 1302:
				return 1377589537;
			case 1303:
				return 1627223779;
			case 1304:
				return -1870673622;
			case 1305:
				return -1527778806;
			case 1306:
				return 1851327709;
			case 1307:
				return -2136725133;
			case 1308:
				return -904840136;
			case 1309:
				return -572300324;
			case 1310:
				return -59429085;
			case 1311:
				return 173460198;
			case 1312:
				return 395175252;
			case 1313:
				return -1513389615;
			case 1314:
				return -753148815;
			case 1315:
				return -462848244;
			case 1316:
				return -1179077041;
			case 1317:
				return -1994533606;
			case 1318:
				return 650809461;
			case 1319:
				return 956577000;
			case 1320:
				return 1943579280;
			case 1321:
				return 1183502325;
			case 1322:
				return -966731033;
			case 1323:
				return -1220133710;
			case 1324:
				return -1967266914;
			case 1325:
				return 197748151;
			case 1326:
				return -44939063;
			case 1327:
				return -231394673;
			case 1328:
				return 558618427;
			case 1329:
				return -814304370;
			case 1330:
				return -1655681226;
			case 1331:
				return 1264331603;
			case 1332:
				return 2025555469;
			case 1333:
				return -1401819783;
			case 1334:
				return -1250040611;
			case 1335:
				return -1481651903;
			case 1336:
				return 1377476116;
			case 1337:
				return -1044775599;
			case 1338:
				return 1803047119;
			case 1339:
				return 1564324954;
			case 1340:
				return -766206151;
			case 1341:
				return -78253665;
			case 1342:
				return -853863126;
			case 1343:
				return -560842728;
			case 1344:
				return 609076110;
			case 1345:
				return 875520849;
			case 1346:
				return -1597921923;
			case 1347:
				return 1457295796;
			case 1348:
				return -2062815726;
			case 1349:
				return 1608557504;
			case 1350:
				return 1314324653;
			case 1351:
				return 1153166711;
			case 1352:
				return -408057508;
			case 1353:
				return 854826999;
			case 1354:
				return 1152631671;
			case 1355:
				return -1194284125;
			case 1356:
				return -1429794928;
			case 1357:
				return 344056580;
			case 1358:
				return -617234804;
			case 1359:
				return -920708513;
			case 1360:
				return -2134832732;
			case 1361:
				return -294591230;
			case 1362:
				return -1540501379;
			case 1363:
				return -1845122003;
			case 1364:
				return -172033587;
			case 1365:
				return 207190918;
			case 1366:
				return 2126012482;
			case 1367:
				return 1359119575;
			case 1368:
				return 1665378649;
			case 1369:
				return 866437660;
			case 1370:
				return -1872329798;
			case 1371:
				return 1881805444;
			case 1372:
				return 2053285609;
			case 1373:
				return 1819839253;
			case 1374:
				return 919838664;
			case 1375:
				return 1696496733;
			case 1376:
				return 255905955;
			case 1377:
				return 135502004;
			case 1378:
				return -1094089207;
			case 1379:
				return 683366891;
			case 1380:
				return 457948940;
			case 1381:
				return 84775568;
			case 1382:
				return -2142729980;
			case 1383:
				return -1220382747;
			case 1384:
				return -641420023;
			case 1385:
				return -401714788;
			case 1386:
				return -44467150;
			case 1387:
				return 1923311272;
			case 1388:
				return -2139291045;
			case 1389:
				return 1332472111;
			case 1390:
				return 1076710066;
			case 1391:
				return -1010150946;
			case 1392:
				return 2040642970;
			case 1393:
				return 1753160533;
			case 1394:
				return 2100839623;
			case 1395:
				return 178498951;
			case 1396:
				return 484561411;
			case 1397:
				return 794785534;
			case 1398:
				return -1353845031;
			case 1399:
				return 1100421997;
			case 1400:
				return 1406779378;
			case 1401:
				return -575558699;
			case 1402:
				return 839013505;
			case 1403:
				return 491596567;
			case 1404:
				return 261066652;
			case 1405:
				return -117611912;
			case 1406:
				return -348338441;
			case 1407:
				return 691751658;
			case 1408:
				return 449687055;
			case 1409:
				return 93225873;
			case 1410:
				return 2002315044;
			case 1411:
				return 269097100;
			case 1412:
				return -2117501943;
			case 1413:
				return 248842994;
			case 1414:
				return 1082125895;
			case 1415:
				return 726582245;
			case 1416:
				return 1560586064;
			case 1417:
				return 1432524812;
			case 1418:
				return -2091846680;
			case 1419:
				return -1384845375;
			case 1420:
				return 1934228328;
			case 1421:
				return 1033605132;
			case 1422:
				return 331889766;
			case 1423:
				return 1646221587;
			case 1424:
				return -1079962591;
			case 1425:
				return 77281155;
			case 1426:
				return -631545088;
			case 1427:
				return -321452041;
			case 1428:
				return -1108825573;
			case 1429:
				return -799584520;
			case 1430:
				return -1585188522;
			case 1431:
				return 35960671;
			case 1432:
				return 149505256;
			case 1433:
				return 378986563;
			case 1434:
				return -1012057503;
			case 1435:
				return -1486683699;
			case 1436:
				return -652679880;
			case 1437:
				return 1808311941;
			case 1438:
				return 2105985537;
			case 1439:
				return 1481375624;
			case 1440:
				return 1512375102;
			case 1441:
				return 852571283;
			case 1442:
				return 1150507031;
			case 1443:
				return 176415813;
			case 1444:
				return 416907504;
			case 1445:
				return 1937290801;
			case 1446:
				return -2120068476;
			case 1447:
				return 1478426490;
			case 1448:
				return 1716493279;
			case 1449:
				return 1752609646;
			case 1450:
				return 713406353;
			case 1451:
				return -128527564;
			case 1452:
				return 896748908;
			case 1453:
				return 1120266257;
			case 1454:
				return -514579153;
			case 1455:
				return 1126189272;
			case 1456:
				return 711530346;
			case 1457:
				return 931443105;
			case 1458:
				return 228482501;
			case 1459:
				return -1339710767;
			case 1460:
				return -2037952619;
			case 1461:
				return -1347474603;
			case 1462:
				return -1654585671;
			case 1463:
				return 527895263;
			case 1464:
				return 1302161195;
			case 1465:
				return -2063510026;
			case 1466:
				return 825208400;
			case 1467:
				return 996448735;
			case 1468:
				return -1203399689;
			case 1469:
				return -907135160;
			case 1470:
				return -1745595651;
			case 1471:
				return 1982467945;
			case 1472:
				return 1783560191;
			case 1473:
				return -546858360;
			case 1474:
				return -1381615866;
			case 1475:
				return -65186829;
			case 1476:
				return 364578614;
			case 1477:
				return 676146266;
			case 1478:
				return -293783373;
			case 1479:
				return 855210497;
			case 1480:
				return 513691979;
			case 1481:
				return 342375647;
			case 1482:
				return 35690576;
			case 1483:
				return -866538305;
			case 1484:
				return -1168111412;
			case 1485:
				return 1348758976;
			case 1486:
				return 242543082;
			case 1487:
				return -64764600;
			case 1488:
				return -1034366541;
			case 1489:
				return -525791661;
			case 1490:
				return 1455454852;
			case 1491:
				return -1902039792;
			case 1492:
				return 2098694653;
			case 1493:
				return 1781163039;
			case 1494:
				return 1483980978;
			case 1495:
				return 1174117314;
			case 1496:
				return 861238902;
			case 1497:
				return 1216775863;
			case 1498:
				return -1296147675;
			case 1499:
				return 1706279185;
			case 1500:
				return 2012308876;
			case 1501:
				return -1723160514;
			case 1502:
				return -343421765;
			case 1503:
				return -1505495543;
			case 1504:
				return 1267712166;
			case 1505:
				return 1109044668;
			case 1506:
				return 362239274;
			case 1507:
				return 122697884;
			case 1508:
				return -1305145757;
			case 1509:
				return 2025248241;
			case 1510:
				return 1847214292;
			case 1511:
				return 2145182809;
			case 1512:
				return 1368852430;
			case 1513:
				return 1800420160;
			case 1514:
				return -1134404253;
			case 1515:
				return 579945399;
			case 1516:
				return -120950742;
			case 1517:
				return 257727822;
			case 1518:
				return -1155959603;
			case 1519:
				return -797991047;
			case 1520:
				return -2038789232;
			case 1521:
				return -493576341;
			case 1522:
				return 2139117892;
			case 1523:
				return 803879457;
			case 1524:
				return 1127899329;
			case 1525:
				return 964185405;
			case 1526:
				return -1164456078;
			case 1527:
				return -1717236061;
			case 1528:
				return -1528158931;
			case 1529:
				return -1222620775;
			case 1530:
				return -931337134;
			case 1531:
				return -626388812;
			case 1532:
				return -303188165;
			case 1533:
				return 162898828;
			case 1534:
				return -141656258;
			case 1535:
				return -468723647;
			case 1536:
				return -756959771;
			case 1537:
				return -1062334082;
			case 1538:
				return -1318948117;
			case 1539:
				return 453988878;
			case 1540:
				return 763557621;
			case 1541:
				return -55569072;
			case 1542:
				return 250558926;
			case 1543:
				return 1617321147;
			case 1544:
				return 981569778;
			case 1545:
				return -1814976041;
			case 1546:
				return -2062873526;
			case 1547:
				return 156767462;
			case 1548:
				return 1013873426;
			case 1549:
				return 783540125;
			case 1550:
				return 1073021471;
			case 1551:
				return -1973039765;
			case 1552:
				return 1866766121;
			case 1553:
				return -579341426;
			case 1554:
				return -757998014;
			case 1555:
				return -1062913559;
			case 1556:
				return -1487141033;
			case 1557:
				return 1037794378;
			case 1558:
				return -455914949;
			case 1559:
				return -879618119;
			case 1560:
				return 108957073;
			case 1561:
				return -194516636;
			case 1562:
				return -1844042558;
			case 1563:
				return 1149847047;
			case 1564:
				return 1373233320;
			case 1565:
				return 823435038;
			case 1566:
				return -1347478447;
			case 1567:
				return -1108559668;
			case 1568:
				return -1964813638;
			case 1569:
				return 990973190;
			case 1570:
				return 1271115371;
			case 1571:
				return 1838936603;
			case 1572:
				return 2057505837;
			case 1573:
				return -1651944967;
			case 1574:
				return -1355352748;
			case 1575:
				return 670851830;
			case 1576:
				return -105740701;
			case 1577:
				return 2119471017;
			case 1578:
				return 1610044139;
			case 1579:
				return 1889924168;
			case 1580:
				return 1146592172;
			case 1581:
				return 1948268890;
			case 1582:
				return 2028552940;
			case 1583:
				return -1969822137;
			case 1584:
				return -290835780;
			case 1585:
				return -573206253;
			case 1586:
				return 272594406;
			case 1587:
				return -2136585919;
			case 1588:
				return -1830883918;
			case 1589:
				return 671029236;
			case 1590:
				return 959593050;
			case 1591:
				return 1237113711;
			case 1592:
				return 1541898180;
			case 1593:
				return -2123999414;
			case 1594:
				return -1750662197;
			case 1595:
				return -1395315161;
			case 1596:
				return 1931885258;
			case 1597:
				return -933370568;
			case 1598:
				return 1691819452;
			case 1599:
				return 268570922;
			case 1600:
				return -296497718;
			case 1601:
				return -594138545;
			case 1602:
				return 1488331409;
			case 1603:
				return 1459429151;
			case 1604:
				return 1161395096;
			case 1605:
				return 892963014;
			case 1606:
				return 1190865993;
			case 1607:
				return -1406339413;
			case 1608:
				return -1227551749;
			case 1609:
				return -1987989163;
			case 1610:
				return -1707060526;
			case 1611:
				return 1224132558;
			case 1612:
				return 1471571277;
			case 1613:
				return 1150762767;
			case 1614:
				return -1825416120;
			case 1615:
				return -1534001403;
			case 1616:
				return 1926830998;
			case 1617:
				return 493869516;
			case 1618:
				return 791313729;
			case 1619:
				return -1341784326;
			case 1620:
				return -1313930676;
			case 1621:
				return -1027562385;
			case 1622:
				return -695809029;
			case 1623:
				return -732403941;
			case 1624:
				return -1027750938;
			case 1625:
				return -1208308128;
			case 1626:
				return 939011673;
			case 1627:
				return 626297106;
			case 1628:
				return 463828404;
			case 1629:
				return 564357958;
			case 1630:
				return -1289417149;
			case 1631:
				return -97575842;
			case 1632:
				return 266749900;
			case 1633:
				return 1455117685;
			case 1634:
				return 1751480521;
			case 1635:
				return 1618595713;
			case 1636:
				return -1839254665;
			case 1637:
				return -1492886335;
			case 1638:
				return 1558202490;
			case 1639:
				return -2086758922;
			case 1640:
				return 962691453;
			case 1641:
				return -410630335;
			case 1642:
				return -161815318;
			case 1643:
				return 1125547616;
			case 1644:
				return -706894864;
			case 1645:
				return 512996699;
			case 1646:
				return 822532673;
			case 1647:
				return -1447249497;
			case 1648:
				return -488133636;
			case 1649:
				return -267073962;
			case 1650:
				return 1167257945;
			case 1651:
				return -728756403;
			case 1652:
				return 1887651645;
			case 1653:
				return 25757734;
			case 1654:
				return 1232312314;
			case 1655:
				return 1999532911;
			case 1656:
				return 934442100;
			case 1657:
				return 687658761;
			case 1658:
				return 468303075;
			case 1659:
				return 732570378;
			case 1660:
				return 505448439;
			case 1661:
				return 1177606167;
			case 1662:
				return -123749134;
			case 1663:
				return -383312383;
			case 1664:
				return 337212389;
			case 1665:
				return -1398052698;
			case 1666:
				return -1129772895;
			case 1667:
				return -831607764;
			case 1668:
				return -653803170;
			case 1669:
				return -171902256;
			case 1670:
				return -864212927;
			case 1671:
				return -841118326;
			case 1672:
				return -610457335;
			case 1673:
				return -378059587;
			case 1674:
				return -147726286;
			case 1675:
				return -1760419852;
			case 1676:
				return -1529365633;
			case 1677:
				return -251119239;
			case 1678:
				return 26925726;
			case 1679:
				return 323845635;
			case 1680:
				return -1890486771;
			case 1681:
				return 704752495;
			case 1682:
				return 984501448;
			case 1683:
				return -1220832300;
			case 1684:
				return -397838865;
			case 1685:
				return -2113427091;
			case 1686:
				return 612855406;
			case 1687:
				return 272188882;
			case 1688:
				return -1057740991;
			case 1689:
				return -346432062;
			case 1690:
				return 1433055718;
			case 1691:
				return 1193547097;
			case 1692:
				return -1209108756;
			case 1693:
				return -1420337730;
			case 1694:
				return 745201639;
			case 1695:
				return -2032899709;
			case 1696:
				return -295323472;
			case 1697:
				return -590703238;
			case 1698:
				return 304775217;
			case 1699:
				return 1105911729;
			case 1700:
				return -1487918458;
			case 1701:
				return 1487133483;
			case 1702:
				return 1255489422;
			case 1703:
				return -1690050454;
			case 1704:
				return -1921891129;
			case 1705:
				return 204325436;
			case 1706:
				return -4478632;
			case 1707:
				return 310845978;
			case 1708:
				return -445036545;
			case 1709:
				return -150836463;
			case 1710:
				return -640995165;
			case 1711:
				return -1754846240;
			case 1712:
				return 1763266373;
			case 1713:
				return -2115207921;
			case 1714:
				return 1327634299;
			case 1715:
				return 1574745328;
			case 1716:
				return -1703793126;
			case 1717:
				return -1120767078;
			case 1718:
				return -167877327;
			case 1719:
				return 1595467403;
			case 1720:
				return -720678282;
			case 1721:
				return -954616173;
			case 1722:
				return -1330017837;
			case 1723:
				return 570158166;
			case 1724:
				return -1672486660;
			case 1725:
				return 1033784287;
			case 1726:
				return 585504367;
			case 1727:
				return 1478689012;
			case 1728:
				return 1331031886;
			case 1729:
				return 1455390261;
			case 1730:
				return 1627951811;
			case 1731:
				return 1680754876;
			case 1732:
				return 2070968128;
			case 1733:
				return -707646462;
			case 1734:
				return -470169519;
			case 1735:
				return -1388979510;
			case 1736:
				return -1066008246;
			case 1737:
				return 310890228;
			case 1738:
				return 541420143;
			case 1739:
				return -148793304;
			case 1740:
				return 98088342;
			case 1741:
				return -861027519;
			case 1742:
				return 2063671293;
			case 1743:
				return -959845957;
			case 1744:
				return 2099402341;
			case 1745:
				return -1425067450;
			case 1746:
				return -1115138324;
			case 1747:
				return 2026065323;
			case 1748:
				return -1961856443;
			case 1749:
				return 415476331;
			case 1750:
				return 184553188;
			case 1751:
				return 1831981894;
			case 1752:
				return -754999584;
			case 1753:
				return 869490822;
			case 1754:
				return 630506505;
			case 1755:
				return -1413752005;
			case 1756:
				return -1109360764;
			case 1757:
				return 1425616311;
			case 1758:
				return 690279951;
			case 1759:
				return 1888347360;
			case 1760:
				return 1117817094;
			case 1761:
				return 1629569463;
			case 1762:
				return 166138692;
			case 1763:
				return -262290;
			case 1764:
				return 901245669;
			case 1765:
				return 459781701;
			case 1766:
				return -1059487446;
			case 1767:
				return -1603743891;
			case 1768:
				return -1367708784;
			case 1769:
				return 1122210912;
			case 1770:
				return 1362243837;
			case 1771:
				return 1735482747;
			case 1772:
				return 1972828614;
			case 1773:
				return 378956505;
			case 1774:
				return -435648066;
			case 1775:
				return 974270928;
			case 1776:
				return 202331595;
			case 1777:
				return 1595276247;
			case 1778:
				return 794434656;
			case 1779:
				return 365659794;
			case 1780:
				return 666020448;
			case 1781:
				return -1449513447;
			case 1782:
				return 203879241;
			case 1783:
				return -622849860;
			case 1784:
				return -326257641;
			case 1785:
				return 683365963;
			case 1786:
				return 201923819;
			case 1787:
				return 791765819;
			case 1788:
				return 1766217572;
			case 1789:
				return 447003170;
			case 1790:
				return 1422962297;
			case 1791:
				return -1679055377;
			case 1792:
				return -104275540;
			case 1793:
				return -342670015;
			case 1794:
				return -587716597;
			case 1795:
				return -759360619;
			case 1796:
				return 1425315838;
			case 1797:
				return 1326721336;
			case 1798:
				return 1095404965;
			case 1799:
				return 711188436;
			case 1800:
				return -858643278;
			case 1801:
				return 101652267;
			case 1802:
				return 945388479;
			case 1803:
				return -722593886;
			case 1804:
				return -490491059;
			case 1805:
				return -1930590302;
			case 1806:
				return -1696783487;
			case 1807:
				return -1339077083;
			case 1808:
				return -1100354918;
			case 1809:
				return 242834636;
			case 1810:
				return 541687916;
			case 1811:
				return -302113834;
			case 1812:
				return -2769019;
			case 1813:
				return -912043231;
			case 1814:
				return -613812562;
			case 1815:
				return -857589818;
			case 1816:
				return -640626269;
			case 1817:
				return -395383073;
			case 1818:
				return -2027705266;
			case 1819:
				return -1781839459;
			case 1820:
				return -1567268047;
			case 1821:
				return -336245160;
			case 1822:
				return -547965669;
			case 1823:
				return -842788362;
			case 1824:
				return 1137835536;
			case 1825:
				return 843602685;
			case 1826:
				return 142477161;
			case 1827:
				return -1403526656;
			case 1828:
				return 166399738;
			case 1829:
				return 956689711;
			case 1830:
				return -614780453;
			case 1831:
				return -834627674;
			case 1832:
				return -25298912;
			case 1833:
				return -236167427;
			case 1834:
				return -1151792276;
			case 1835:
				return -569224994;
			case 1836:
				return -1816871896;
			case 1837:
				return -2105861707;
			case 1838:
				return 45914674;
			case 1839:
				return 676193620;
			case 1840:
				return 1449424525;
			case 1841:
				return 1211521585;
			case 1842:
				return 1020150621;
			case 1843:
				return 763602120;
			case 1844:
				return 525502566;
			case 1845:
				return -1850741469;
			case 1846:
				return -1261809032;
			case 1847:
				return -1492338947;
			case 1848:
				return -801568427;
			case 1849:
				return 1086417440;
			case 1850:
				return -340410290;
			case 1851:
				return -571202357;
			case 1852:
				return 1614929995;
			case 1853:
				return 1312406587;
			case 1854:
				return -2036552448;
			case 1855:
				return 1961494939;
			case 1856:
				return -1420069251;
			case 1857:
				return -1719807294;
			case 1858:
				return 1564617196;
			case 1859:
				return 1142159244;
			case 1860:
				return 834556641;
			case 1861:
				return -1297099578;
			case 1862:
				return -1477066926;
			case 1863:
				return -1764025059;
			case 1864:
				return 1431102593;
			case 1865:
				return -971661178;
			case 1866:
				return 787485655;
			case 1867:
				return -654647698;
			case 1868:
				return -1433587946;
			case 1869:
				return -499308854;
			case 1870:
				return -785677145;
			case 1871:
				return -18849776;
			case 1872:
				return -806059467;
			case 1873:
				return 91876671;
			case 1874:
				return -199538046;
			case 1875:
				return -1754780383;
			case 1876:
				return -2050586146;
			case 1877:
				return -1622000367;
			case 1878:
				return -1930520502;
			case 1879:
				return 1689602008;
			case 1880:
				return 1384162159;
			case 1881:
				return -733625577;
			case 1882:
				return -370348443;
			case 1883:
				return -1205728560;
			case 1884:
				return 459985248;
			case 1885:
				return 834207228;
			case 1886:
				return 1230744937;
			case 1887:
				return 1859098900;
			case 1888:
				return -2137310037;
			case 1889:
				return 1086995730;
			case 1890:
				return -1962290800;
			case 1891:
				return 1736084082;
			case 1892:
				return 2038967949;
			case 1893:
				return 1242900290;
			case 1894:
				return 402539281;
			case 1895:
				return 1598116250;
			case 1896:
				return 999361082;
			case 1897:
				return -365271154;
			case 1898:
				return -1228570459;
			case 1899:
				return -1255452460;
			case 1900:
				return -1429128160;
			case 1901:
				return 12052460;
			case 1902:
				return -295550143;
			case 1903:
				return -467849545;
			case 1904:
				return -774993382;
			case 1905:
				return 423274221;
			case 1906:
				return 1737081738;
			case 1907:
				return 1569566606;
			case 1908:
				return -1427649979;
			case 1909:
				return 2031838889;
			case 1910:
				return 1179484430;
			case 1911:
				return -1327749830;
			case 1912:
				return 1681918935;
			case 1913:
				return 1980936060;
			case 1914:
				return -1227869962;
			case 1915:
				return -2006625247;
			case 1916:
				return -618923635;
			case 1917:
				return 310421618;
			case 1918:
				return -456471289;
			case 1919:
				return -283516507;
			case 1920:
				return -1059125968;
			case 1921:
				return -607831300;
			case 1922:
				return -1383899527;
			case 1923:
				return -721531872;
			case 1924:
				return 829883664;
			case 1925:
				return 1684695798;
			case 1926:
				return 774733437;
			case 1927:
				return 515530647;
			case 1928:
				return 2060130231;
			case 1929:
				return -951761453;
			case 1930:
				return -722804450;
			case 1931:
				return 1731691961;
			case 1932:
				return -2108245001;
			case 1933:
				return -1819451804;
			case 1934:
				return -1632668504;
			case 1935:
				return -235701467;
			case 1936:
				return 2142279329;
			case 1937:
				return -1921568210;
			case 1938:
				return 457133496;
			case 1939:
				return 689760627;
			case 1940:
				return -1230240617;
			case 1941:
				return -203553989;
			case 1942:
				return -1134357434;
			case 1943:
				return 388155844;
			case 1944:
				return 1865284057;
			case 1945:
				return 1087839532;
			case 1946:
				return 103720924;
			case 1947:
				return 2106153141;
			case 1948:
				return -1817017081;
			case 1949:
				return 1527092142;
			case 1950:
				return -1891369942;
			case 1951:
				return 1608064345;
			case 1952:
				return -1910834724;
			case 1953:
				return 1116114470;
			case 1954:
				return 1683345860;
			case 1955:
				return 1996584731;
			case 1956:
				return 147495599;
			case 1957:
				return 883159645;
			case 1958:
				return -960850296;
			case 1959:
				return 1017977815;
			case 1960:
				return 1357136965;
			case 1961:
				return 1525078090;
			case 1962:
				return 618785845;
			case 1963:
				return 319572106;
			case 1964:
				return 1248180028;
			case 1965:
				return -447882490;
			case 1966:
				return -675725347;
			case 1967:
				return -1058860495;
			case 1968:
				return -1288341802;
			case 1969:
				return -1671018184;
			case 1970:
				return -1912624021;
			case 1971:
				return 1341247911;
			case 1972:
				return 1563618345;
			case 1973:
				return 1229046867;
			case 1974:
				return 1527211998;
			case 1975:
				return 1757741913;
			case 1976:
				return -1769578789;
			case 1977:
				return 1304377171;
			case 1978:
				return 1006408654;
			case 1979:
				return -1110108283;
			case 1980:
				return -341118160;
			case 1981:
				return -692139688;
			case 1982:
				return -2071976740;
			case 1983:
				return -150190747;
			case 1984:
				return 289372619;
			case 1985:
				return -601321570;
			case 1986:
				return -439180558;
			case 1987:
				return -908104948;
			case 1988:
				return 1486030953;
			case 1989:
				return 433714699;
			case 1990:
				return -1030961278;
			case 1991:
				return -278945513;
			case 1992:
				return -2139536544;
			case 1993:
				return -1238126892;
			case 1994:
				return 2078390833;
			case 1995:
				return -492309195;
			case 1996:
				return -185198127;
			case 1997:
				return 618330518;
			case 1998:
				return 908565555;
			case 1999:
				return 1239270303;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 2999)
	{
		switch (iParam0)
		{
			case 2000:
				return 1537697586;
			case 2001:
				return 1884804857;
			case 2002:
				return -2014804454;
			case 2003:
				return -172957267;
			case 2004:
				return -1017152249;
			case 2005:
				return -1323181940;
			case 2006:
				return 692340951;
			case 2007:
				return 2033809010;
			case 2008:
				return 1273633748;
			case 2009:
				return -872965139;
			case 2010:
				return -576438458;
			case 2011:
				return -1335696188;
			case 2012:
				return -2112780254;
			case 2013:
				return 497317450;
			case 2014:
				return 1956563245;
			case 2015:
				return -1242743726;
			case 2016:
				return -992705550;
			case 2017:
				return -598283164;
			case 2018:
				return -227417186;
			case 2019:
				return 1590868709;
			case 2020:
				return -70698645;
			case 2021:
				return -624561609;
			case 2022:
				return -471239852;
			case 2023:
				return 1854926048;
			case 2024:
				return -1465857903;
			case 2025:
				return -1894807850;
			case 2026:
				return 1979046379;
			case 2027:
				return -1608576986;
			case 2028:
				return 217264818;
			case 2029:
				return 264181399;
			case 2030:
				return -1789518572;
			case 2031:
				return 1552472759;
			case 2032:
				return -57876923;
			case 2033:
				return 32626264;
			case 2034:
				return -229280346;
			case 2035:
				return -1394219006;
			case 2036:
				return -244042440;
			case 2037:
				return -293928008;
			case 2038:
				return 813410628;
			case 2039:
				return 100994321;
			case 2040:
				return -1795269905;
			case 2041:
				return -860727514;
			case 2042:
				return -54778657;
			case 2043:
				return -1540813054;
			case 2044:
				return 242475926;
			case 2045:
				return 1649118012;
			case 2046:
				return -741675463;
			case 2047:
				return -114205508;
			case 2048:
				return -300071288;
			case 2049:
				return -1580421620;
			case 2050:
				return -410797739;
			case 2051:
				return 1510082395;
			case 2052:
				return -1955468742;
			case 2053:
				return -1309984984;
			case 2054:
				return -1632464713;
			case 2055:
				return -662597260;
			case 2056:
				return -880117882;
			case 2057:
				return -44770534;
			case 2058:
				return -400707412;
			case 2059:
				return 2043671547;
			case 2060:
				return -105679936;
			case 2061:
				return -344336563;
			case 2062:
				return -734680891;
			case 2063:
				return 269716848;
			case 2064:
				return 508701165;
			case 2065:
				return 901765320;
			case 2066:
				return 1008133494;
			case 2067:
				return -994913592;
			case 2068:
				return -132207177;
			case 2069:
				return -976566000;
			case 2070:
				return -1415867214;
			case 2071:
				return 769235244;
			case 2072:
				return 864330882;
			case 2073:
				return 21348357;
			case 2074:
				return 418901865;
			case 2075:
				return -1780782850;
			case 2076:
				return 2082616716;
			case 2077:
				return 589300377;
			case 2078:
				return -862094528;
			case 2079:
				return -1702226150;
			case 2080:
				return 1816738433;
			case 2081:
				return 2049201719;
			case 2082:
				return 835601804;
			case 2083:
				return 1068753239;
			case 2084:
				return -1554732905;
			case 2085:
				return -1309030943;
			case 2086:
				return -1998064706;
			case 2087:
				return -556849261;
			case 2088:
				return 1310560820;
			case 2089:
				return -1221860269;
			case 2090:
				return -1432302787;
			case 2091:
				return 1394514942;
			case 2092:
				return 1596830748;
			case 2093:
				return -1370303895;
			case 2094:
				return -1131876651;
			case 2095:
				return 1002270012;
			case 2096:
				return 169249263;
			case 2097:
				return -701294047;
			case 2098:
				return -160768474;
			case 2099:
				return 393027630;
			case 2100:
				return 160924803;
			case 2101:
				return 1375442250;
			case 2102:
				return 728909880;
			case 2103:
				return 1887490644;
			case 2104:
				return 1609511217;
			case 2105:
				return -1960638564;
			case 2106:
				return -2072249782;
			case 2107:
				return -266898857;
			case 2108:
				return 726781158;
			case 2109:
				return 421079157;
			case 2110:
				return -1645268449;
			case 2111:
				return -1802494111;
			case 2112:
				return 23623956;
			case 2113:
				return -678288024;
			case 2114:
				return -1247649399;
			case 2115:
				return -1427026905;
			case 2116:
				return -1601816751;
			case 2117:
				return 1994092600;
			case 2118:
				return -2091139547;
			case 2119:
				return 1726907723;
			case 2120:
				return -723656408;
			case 2121:
				return -898905020;
			case 2122:
				return 1160364478;
			case 2123:
				return 978824218;
			case 2124:
				return 730041970;
			case 2125:
				return -1706759177;
			case 2126:
				return 265803547;
			case 2127:
				return 578064748;
			case 2128:
				return 1987471067;
			case 2129:
				return 1101659459;
			case 2130:
				return 334537169;
			case 2131:
				return -574769812;
			case 2132:
				return -389743370;
			case 2133:
				return -694658915;
			case 2134:
				return 2118559739;
			case 2135:
				return 1802699348;
			case 2136:
				return -1922289675;
			case 2137:
				return 2060749510;
			case 2138:
				return -1473583758;
			case 2139:
				return 877526458;
			case 2140:
				return -250275448;
			case 2141:
				return 1465968158;
			case 2142:
				return 1173898061;
			case 2143:
				return 55229931;
			case 2144:
				return -1025764898;
			case 2145:
				return -1109214830;
			case 2146:
				return 1363631891;
			case 2147:
				return 366256325;
			case 2148:
				return -1850031174;
			case 2149:
				return 1085171521;
			case 2150:
				return -1066932917;
			case 2151:
				return 1513765413;
			case 2152:
				return 1465636868;
			case 2153:
				return -2133032183;
			case 2154:
				return -254962964;
			case 2155:
				return 1904350295;
			case 2156:
				return 1295567813;
			case 2157:
				return 1041575294;
			case 2158:
				return 666304706;
			case 2159:
				return -827633984;
			case 2160:
				return -1603048025;
			case 2161:
				return -1503856258;
			case 2162:
				return -1734910477;
			case 2163:
				return -913293336;
			case 2164:
				return -1428749706;
			case 2165:
				return -605756271;
			case 2166:
				return 295847116;
			case 2167:
				return -1566775593;
			case 2168:
				return -866895291;
			case 2169:
				return -602220078;
			case 2170:
				return -303989409;
			case 2171:
				return -111111083;
			case 2172:
				return 996487218;
			case 2173:
				return 165072166;
			case 2174:
				return 412183195;
			case 2175:
				return -415234055;
			case 2176:
				return -185228444;
			case 2177:
				return 1035908285;
			case 2178:
				return 1090654496;
			case 2179:
				return 834564757;
			case 2180:
				return 617568439;
			case 2181:
				return 377797666;
			case 2182:
				return 79304845;
			case 2183:
				return -158893016;
			case 2184:
				return -1836208829;
			case 2185:
				return -2133128738;
			case 2186:
				return -1043395647;
			case 2187:
				return 743432389;
			case 2188:
				return -494121669;
			case 2189:
				return -792352338;
			case 2190:
				return 1679300899;
			case 2191:
				return 1449229750;
			case 2192:
				return -2147299080;
			case 2193:
				return 1900360573;
			case 2194:
				return 453543685;
			case 2195:
				return 231238785;
			case 2196:
				return -663197331;
			case 2197:
				return -1819123806;
			case 2198:
				return -2111587131;
			case 2199:
				return 923281039;
			case 2200:
				return -1582367781;
			case 2201:
				return 1490610736;
			case 2202:
				return -1915782583;
			case 2203:
				return -1804105831;
			case 2204:
				return 1814410998;
			case 2205:
				return 2043892305;
			case 2206:
				return 900188667;
			case 2207:
				return 1531843911;
			case 2208:
				return 186465082;
			case 2209:
				return 238436716;
			case 2210:
				return 736263364;
			case 2211:
				return -1299903997;
			case 2212:
				return -1067833939;
			case 2213:
				return -2026491034;
			case 2214:
				return -571902733;
			case 2215:
				return 1881839991;
			case 2216:
				return -249160836;
			case 2217:
				return 23641089;
			case 2218:
				return 77120097;
			case 2219:
				return 392587260;
			case 2220:
				return 1452303943;
			case 2221:
				return -388134173;
			case 2222:
				return 202625359;
			case 2223:
				return 1599404204;
			case 2224:
				return -846134590;
			case 2225:
				return -522180256;
			case 2226:
				return -1202759625;
			case 2227:
				return 1314817111;
			case 2228:
				return -1775660052;
			case 2229:
				return -1433486154;
			case 2230:
				return 16312805;
			case 2231:
				return -281819557;
			case 2232:
				return -597352258;
			case 2233:
				return 272796036;
			case 2234:
				return 725211654;
			case 2235:
				return -1316559202;
			case 2236:
				return 2144666427;
			case 2237:
				return -1777717339;
			case 2238:
				return 1751176275;
			case 2239:
				return -435400700;
			case 2240:
				return 402338785;
			case 2241:
				return -842424449;
			case 2242:
				return -75531542;
			case 2243:
				return 1592212608;
			case 2244:
				return 1178628992;
			case 2245:
				return -946801121;
			case 2246:
				return 1507203755;
			case 2247:
				return 1794817268;
			case 2248:
				return 1832501618;
			case 2249:
				return -292273115;
			case 2250:
				return 5105560;
			case 2251:
				return -1846015250;
			case 2252:
				return -1548046733;
			case 2253:
				return -735965087;
			case 2254:
				return 1097861868;
			case 2255:
				return 1401073425;
			case 2256:
				return -1648606333;
			case 2257:
				return -1341495265;
			case 2258:
				return 135829562;
			case 2259:
				return 440351879;
			case 2260:
				return 1687736637;
			case 2261:
				return 1993504176;
			case 2262:
				return 1825366505;
			case 2263:
				return 241152884;
			case 2264:
				return 120193360;
			case 2265:
				return 1150188568;
			case 2266:
				return -361838634;
			case 2267:
				return 405971809;
			case 2268:
				return -496453686;
			case 2269:
				return -809233791;
			case 2270:
				return -980025819;
			case 2271:
				return -1286055510;
			case 2272:
				return -1725881028;
			case 2273:
				return -597806211;
			case 2274:
				return -379718605;
			case 2275:
				return -136277704;
			case 2276:
				return 1520662761;
			case 2277:
				return -523270817;
			case 2278:
				return 186112495;
			case 2279:
				return 1038991258;
			case 2280:
				return 658805320;
			case 2281:
				return 1483699357;
			case 2282:
				return 1235867410;
			case 2283:
				return 1961569684;
			case 2284:
				return 1586495710;
			case 2285:
				return 203021495;
			case 2286:
				return 1585319991;
			case 2287:
				return -1560602388;
			case 2288:
				return -1260077889;
			case 2289:
				return -2041061478;
			case 2290:
				return -2020220394;
			case 2291:
				return 185395470;
			case 2292:
				return -575926707;
			case 2293:
				return -1098067953;
			case 2294:
				return -783977088;
			case 2295:
				return -1389643287;
			case 2296:
				return 966921719;
			case 2297:
				return 1659920531;
			case 2298:
				return -1404800198;
			case 2299:
				return -1636640873;
			case 2300:
				return -1883653595;
			case 2301:
				return -2115297656;
			case 2302:
				return -483532532;
			case 2303:
				return -711440927;
			case 2304:
				return 1408746214;
			case 2305:
				return -1228568880;
			case 2306:
				return 1433853988;
			case 2307:
				return 667288771;
			case 2308:
				return 942908830;
			case 2309:
				return -1974646332;
			case 2310:
				return -1658851479;
			case 2311:
				return 2111287513;
			case 2312:
				return 1853821492;
			case 2313:
				return -2135116113;
			case 2314:
				return -741122853;
			case 2315:
				return -1749294279;
			case 2316:
				return 1089571784;
			case 2317:
				return -1286901634;
			case 2318:
				return -339713685;
			case 2319:
				return -562706730;
			case 2320:
				return -801985968;
			case 2321:
				return -1024389171;
			case 2322:
				return 851996542;
			case 2323:
				return 625562752;
			case 2324:
				return 386676742;
			case 2325:
				return 1934782713;
			case 2326:
				return -294970445;
			case 2327:
				return -1517483528;
			case 2328:
				return -1220891309;
			case 2329:
				return 315319411;
			case 2330:
				return 627345829;
			case 2331:
				return 1490698;
			case 2332:
				return 38454130;
			case 2333:
				return 1847237392;
			case 2334:
				return -2138423313;
			case 2335:
				return 1296026231;
			case 2336:
				return 1707283259;
			case 2337:
				return 526124654;
			case 2338:
				return -1980507236;
			case 2339:
				return -1124056652;
			case 2340:
				return -760058600;
			case 2341:
				return 434207605;
			case 2342:
				return -1366711097;
			case 2343:
				return -68272241;
			case 2344:
				return 165403498;
			case 2345:
				return 1660587062;
			case 2346:
				return -306989203;
			case 2347:
				return -629665546;
			case 2348:
				return -1231894204;
			case 2349:
				return -923898373;
			case 2350:
				return -770146225;
			case 2351:
				return -464050996;
			case 2352:
				return -2140316422;
			case 2353:
				return -1851064459;
			case 2354:
				return -1682369647;
			case 2355:
				return -1278759446;
			case 2356:
				return -120001051;
			case 2357:
				return -1345659958;
			case 2358:
				return -578537668;
			case 2359:
				return -1805572873;
			case 2360:
				return -2111602564;
			case 2361:
				return 2025942456;
			case 2362:
				return 1719716151;
			case 2363:
				return -1501411119;
			case 2364:
				return -1195184814;
			case 2365:
				return -1315019583;
			case 2366:
				return 156394944;
			case 2367:
				return -1996364535;
			case 2368:
				return 1463550334;
			case 2369:
				return 1986346960;
			case 2370:
				return 1143757683;
			case 2371:
				return -860099460;
			case 2372:
				return -1696397109;
			case 2373:
				return -1458494169;
			case 2374:
				return 2004566524;
			case 2375:
				return -430658475;
			case 2376:
				return -1829313135;
			case 2377:
				return -999470979;
			case 2378:
				return -1233408870;
			case 2379:
				return 1547860009;
			case 2380:
				return 1313791042;
			case 2381:
				return -2089662840;
			case 2382:
				return 1841437480;
			case 2383:
				return 385674655;
			case 2384:
				return 24363661;
			case 2385:
				return -1369990350;
			case 2386:
				return -1601044569;
			case 2387:
				return -1056817017;
			case 2388:
				return -1295539182;
			case 2389:
				return 1780847311;
			case 2390:
				return 71650129;
			case 2391:
				return 839952103;
			case 2392:
				return 516554842;
			case 2393:
				return 1581154114;
			case 2394:
				return 1260706063;
			case 2395:
				return 2029139113;
			case 2396:
				return -1781305749;
			case 2397:
				return -2053779984;
			case 2398:
				return -1300224060;
			case 2399:
				return -708711617;
			case 2400:
				return -1661666906;
			case 2401:
				return -1304157116;
			case 2402:
				return 2132917760;
			case 2403:
				return -1921754459;
			case 2404:
				return 2005977303;
			case 2405:
				return 633677121;
			case 2406:
				return 336757212;
			case 2407:
				return -1185756070;
			case 2408:
				return -1482872593;
			case 2409:
				return 1441629585;
			case 2410:
				return -1003494892;
			case 2411:
				return -64728684;
			case 2412:
				return -304958223;
			case 2413:
				return 580820948;
			case 2414:
				return 812792699;
			case 2415:
				return -2099388327;
			case 2416:
				return 1965704434;
			case 2417:
				return 812301172;
			case 2418:
				return -1775816905;
			case 2419:
				return 1691110530;
			case 2420:
				return 1185157170;
			case 2421:
				return 2071493078;
			case 2422:
				return 1286577221;
			case 2423:
				return 1336058411;
			case 2424:
				return 558024044;
			case 2425:
				return 911011712;
			case 2426:
				return 403878668;
			case 2427:
				return -1244699989;
			case 2428:
				return -1324290209;
			case 2429:
				return -1618523060;
			case 2430:
				return -858413336;
			case 2431:
				return -1156250777;
			case 2432:
				return -130384463;
			case 2433:
				return -427894214;
			case 2434:
				return 329200766;
			case 2435:
				return 30970097;
			case 2436:
				return 1912107191;
			case 2437:
				return -957113908;
			case 2438:
				return 1743036476;
			case 2439:
				return 1510933649;
			case 2440:
				return 1263626006;
			case 2441:
				return 889207412;
			case 2442:
				return -1760657773;
			case 2443:
				return -2138812033;
			case 2444:
				return 1924707816;
			case 2445:
				return 1541900358;
			case 2446:
				return -602240858;
			case 2447:
				return 964543611;
			case 2448:
				return 1816658985;
			case 2449:
				return 2063966628;
			case 2450:
				return -1625757258;
			case 2451:
				return 1951765552;
			case 2452:
				return 981311617;
			case 2453:
				return -1849667835;
			case 2454:
				return 1507548988;
			case 2455:
				return 1746795457;
			case 2456:
				return -165931053;
			case 2457:
				return -18936143;
			case 2458:
				return 1158890211;
			case 2459:
				return 995897205;
			case 2460:
				return 698190840;
			case 2461:
				return 506557712;
			case 2462:
				return 208654733;
			case 2463:
				return 28228619;
			case 2464:
				return -268166986;
			case 2465:
				return 1409081510;
			case 2466:
				return 1162298171;
			case 2467:
				return -1126254044;
			case 2468:
				return 430117085;
			case 2469:
				return 645737105;
			case 2470:
				return -130134508;
			case 2471:
				return -1786017824;
			case 2472:
				return -943330220;
			case 2473:
				return -1192669541;
			case 2474:
				return -615214215;
			case 2475:
				return 249166467;
			case 2476:
				return 10444302;
			case 2477:
				return -963746499;
			case 2478:
				return 1901607682;
			case 2479:
				return 1672847293;
			case 2480:
				return -857968119;
			case 2481:
				return -1082861766;
			case 2482:
				return -1467111060;
			case 2483:
				return -1706488605;
			case 2484:
				return 185036390;
			case 2485:
				return -154515988;
			case 2486:
				return 131000305;
			case 2487:
				return -1496052059;
			case 2488:
				return -2011967195;
			case 2489:
				return 2052142496;
			case 2490:
				return -1982802789;
			case 2491:
				return 2088417775;
			case 2492:
				return 931394498;
			case 2493:
				return 751427150;
			case 2494:
				return -626214379;
			case 2495:
				return -1050179701;
			case 2496:
				return -185012563;
			case 2497:
				return -492156400;
			case 2498:
				return -1851578365;
			case 2499:
				return -1200982639;
			case 2500:
				return 1128368933;
			case 2501:
				return -319824025;
			case 2502:
				return -317554050;
			case 2503:
				return -838876071;
			case 2504:
				return -590519820;
			case 2505:
				return 733085628;
			case 2506:
				return -1204315959;
			case 2507:
				return -1851077708;
			case 2508:
				return -1489635638;
			case 2509:
				return 1921486190;
			case 2510:
				return -2134234637;
			case 2511:
				return -373556679;
			case 2512:
				return 688083471;
			case 2513:
				return 1615216788;
			case 2514:
				return 1301158692;
			case 2515:
				return -229874526;
			case 2516:
				return -532955007;
			case 2517:
				return 377367813;
			case 2518:
				return 87067242;
			case 2519:
				return -843211903;
			case 2520:
				return -1146718381;
			case 2521:
				return 955125332;
			case 2522:
				return -831444003;
			case 2523:
				return -1164835809;
			case 2524:
				return -1442880774;
			case 2525:
				return -1472372874;
			case 2526:
				return 2144636581;
			case 2527:
				return 1852763094;
			case 2528:
				return 1538836074;
			case 2529:
				return 1241129709;
			case 2530:
				return 1193090355;
			case 2531:
				return 1297918670;
			case 2532:
				return 1833291715;
			case 2533:
				return -2036530575;
			case 2534:
				return -1730500884;
			case 2535:
				return -1301358060;
			case 2536:
				return -1035896391;
			case 2537:
				return 76545553;
			case 2538:
				return -398015105;
			case 2539:
				return -519162098;
			case 2540:
				return -759686558;
			case 2541:
				return -1828240243;
			case 2542:
				return 852128288;
			case 2543:
				return 1628491436;
			case 2544:
				return -1902794311;
			case 2545:
				return 1002439691;
			case 2546:
				return 1779032222;
			case 2547:
				return -1412570075;
			case 2548:
				return -1710800744;
			case 2549:
				return -1817725991;
			case 2550:
				return -1998741947;
			case 2551:
				return 935031806;
			case 2552:
				return 1956783201;
			case 2553:
				return -1304911987;
			case 2554:
				return -738729205;
			case 2555:
				return 218354978;
			case 2556:
				return -1077069130;
			case 2557:
				return -124638145;
			case 2558:
				return 458322365;
			case 2559:
				return 944876577;
			case 2560:
				return -2095824475;
			case 2561:
				return -213648249;
			case 2562:
				return 612887171;
			case 2563:
				return 375672380;
			case 2564:
				return -1840167404;
			case 2565:
				return -1928774780;
			case 2566:
				return 2127273737;
			case 2567:
				return 1840118990;
			case 2568:
				return 1643439428;
			case 2569:
				return 1988759150;
			case 2570:
				return 1286814401;
			case 2571:
				return 1775171164;
			case 2572:
				return -1097997304;
			case 2573:
				return 1379863404;
			case 2574:
				return -1424868079;
			case 2575:
				return -1395834745;
			case 2576:
				return 590163269;
			case 2577:
				return 1158050039;
			case 2578:
				return -2117932433;
			case 2579:
				return 292522442;
			case 2580:
				return -325304284;
			case 2581:
				return 813549870;
			case 2582:
				return 2094826132;
			case 2583:
				return -1742751462;
			case 2584:
				return -510604289;
			case 2585:
				return -288692621;
			case 2586:
				return -333913777;
			case 2587:
				return -363733567;
			case 2588:
				return -1903876571;
			case 2589:
				return 2093384360;
			case 2590:
				return -1285820462;
			case 2591:
				return 974650924;
			case 2592:
				return 2007614072;
			case 2593:
				return -905517259;
			case 2594:
				return -1751842222;
			case 2595:
				return -562491367;
			case 2596:
				return -1141454059;
			case 2597:
				return 47438030;
			case 2598:
				return 279245936;
			case 2599:
				return 395477575;
			case 2600:
				return 895401439;
			case 2601:
				return -492335614;
			case 2602:
				return -823439138;
			case 2603:
				return -1373499572;
			case 2604:
				return -210691607;
			case 2605:
				return 11482213;
			case 2606:
				return -1714952556;
			case 2607:
				return 1963367698;
			case 2608:
				return -1100369957;
			case 2609:
				return -1951085970;
			case 2610:
				return 1624143010;
			case 2611:
				return 1142706330;
			case 2612:
				return -1516145572;
			case 2613:
				return 932681806;
			case 2614:
				return 1258962739;
			case 2615:
				return 1287406231;
			case 2616:
				return 1584784906;
			case 2617:
				return -301431503;
			case 2618:
				return -4282211;
			case 2619:
				return 296045674;
			case 2620:
				return -1251109896;
			case 2621:
				return -1944403977;
			case 2622:
				return -2101218227;
			case 2623:
				return -407978451;
			case 2624:
				return -703390986;
			case 2625:
				return -1002768574;
			case 2626:
				return -1298639875;
			case 2627:
				return 512109531;
			case 2628:
				return 208471977;
			case 2629:
				return -78748308;
			case 2630:
				return -388382589;
			case 2631:
				return 743852263;
			case 2632:
				return -1886833472;
			case 2633:
				return -1582081772;
			case 2634:
				return -1274610245;
			case 2635:
				return 1830744048;
			case 2636:
				return 919307082;
			case 2637:
				return 1805642990;
			case 2638:
				return 894730328;
			case 2639:
				return 272348711;
			case 2640:
				return 1526483879;
			case 2641:
				return -864572676;
			case 2642:
				return 33335841;
			case 2643:
				return 294537540;
			case 2644:
				return 1714877076;
			case 2645:
				return -202043886;
			case 2646:
				return -687811550;
			case 2647:
				return -423660641;
			case 2648:
				return -1143071267;
			case 2649:
				return -913327808;
			case 2650:
				return -1879489004;
			case 2651:
				return -492409655;
			case 2652:
				return -1267430392;
			case 2653:
				return 1071852706;
			case 2654:
				return 1664840530;
			case 2655:
				return 495478761;
			case 2656:
				return 248334963;
			case 2657:
				return 461202367;
			case 2658:
				return 220055296;
			case 2659:
				return 65090695;
			case 2660:
				return -128737940;
			case 2661:
				return -1335849593;
			case 2662:
				return -1685433065;
			case 2663:
				return 1091495004;
			case 2664:
				return 257163495;
			case 2665:
				return 480582509;
			case 2666:
				return 704132627;
			case 2667:
				return -149860282;
			case 2668:
				return 108883742;
			case 2669:
				return -744781477;
			case 2670:
				return -505371163;
			case 2671:
				return -825393193;
			case 2672:
				return -1762456457;
			case 2673:
				return 625559762;
			case 2674:
				return -1729694382;
			case 2675:
				return -580060869;
			case 2676:
				return -1609643961;
			case 2677:
				return 1211732894;
			case 2678:
				return -1920707400;
			case 2679:
				return -1091214145;
			case 2680:
				return -1673564980;
			case 2681:
				return 1283509117;
			case 2682:
				return 677182481;
			case 2683:
				return 919617553;
			case 2684:
				return -699175707;
			case 2685:
				return 1139809750;
			case 2686:
				return 1938021838;
			case 2687:
				return -736346909;
			case 2688:
				return -1138931255;
			case 2689:
				return 1941958234;
			case 2690:
				return 1600584215;
			case 2691:
				return 288598051;
			case 2692:
				return -390021744;
			case 2693:
				return -714790073;
			case 2694:
				return -953067149;
			case 2695:
				return -81056067;
			case 2696:
				return -1336287000;
			case 2697:
				return 841312706;
			case 2698:
				return 1908481481;
			case 2699:
				return 340205659;
			case 2700:
				return -1630091422;
			case 2701:
				return -2028510013;
			case 2702:
				return -1893163625;
			case 2703:
				return 1111762293;
			case 2704:
				return -1108325521;
			case 2705:
				return -45400686;
			case 2706:
				return -1851238190;
			case 2707:
				return -1223902981;
			case 2708:
				return 1786002603;
			case 2709:
				return -1849293275;
			case 2710:
				return 654590692;
			case 2711:
				return -1168415751;
			case 2712:
				return -1815585000;
			case 2713:
				return 1769661839;
			case 2714:
				return -1123583961;
			case 2715:
				return -147394606;
			case 2716:
				return -1435783264;
			case 2717:
				return -1077443028;
			case 2718:
				return 1247569710;
			case 2719:
				return 1586287962;
			case 2720:
				return 1524292245;
			case 2721:
				return 1179744246;
			case 2722:
				return -360092902;
			case 2723:
				return -80604546;
			case 2724:
				return -432795837;
			case 2725:
				return -1560054817;
			case 2726:
				return -1015542461;
			case 2727:
				return -1442153709;
			case 2728:
				return -1226976988;
			case 2729:
				return 2112658068;
			case 2730:
				return -2053911790;
			case 2731:
				return 1988474451;
			case 2732:
				return -1290651568;
			case 2733:
				return -1738649404;
			case 2734:
				return -2102333884;
			case 2735:
				return -1469507783;
			case 2736:
				return 1285213894;
			case 2737:
				return 972465011;
			case 2738:
				return 1881371797;
			case 2739:
				return 839889935;
			case 2740:
				return -1710143883;
			case 2741:
				return 715947527;
			case 2742:
				return 1011499272;
			case 2743:
				return 1398058136;
			case 2744:
				return -1740388421;
			case 2745:
				return -729568189;
			case 2746:
				return -1240807897;
			case 2747:
				return -1864193639;
			case 2748:
				return -1638282104;
			case 2749:
				return 612134528;
			case 2750:
				return -1326819686;
			case 2751:
				return -1297751818;
			case 2752:
				return -351877313;
			case 2753:
				return 739258290;
			case 2754:
				return -1214860187;
			case 2755:
				return 529421873;
			case 2756:
				return 909042863;
			case 2757:
				return -1021797183;
			case 2758:
				return -109482983;
			case 2759:
				return -1187847033;
			case 2760:
				return -598609627;
			case 2761:
				return -739606090;
			case 2762:
				return -680334038;
			case 2763:
				return -2104811957;
			case 2764:
				return 1155556403;
			case 2765:
				return 1253712469;
			case 2766:
				return 1159518206;
			case 2767:
				return -54898916;
			case 2768:
				return -748620753;
			case 2769:
				return -208412671;
			case 2770:
				return 924463379;
			case 2771:
				return -142861927;
			case 2772:
				return 456295088;
			case 2773:
				return 1522189200;
			case 2774:
				return 1687317308;
			case 2775:
				return -1701437984;
			case 2776:
				return -823749858;
			case 2777:
				return 1676120918;
			case 2778:
				return 307171564;
			case 2779:
				return -1480264180;
			case 2780:
				return 1312895143;
			case 2781:
				return -1528262924;
			case 2782:
				return -382251110;
			case 2783:
				return -1882797684;
			case 2784:
				return 700176809;
			case 2785:
				return -1194403097;
			case 2786:
				return 1732623661;
			case 2787:
				return 251307644;
			case 2788:
				return -1227873077;
			case 2789:
				return 413877452;
			case 2790:
				return 1853673202;
			case 2791:
				return -401421089;
			case 2792:
				return -580742468;
			case 2793:
				return -747990100;
			case 2794:
				return 2124596755;
			case 2795:
				return 422249095;
			case 2796:
				return 1188509724;
			case 2797:
				return 1548899641;
			case 2798:
				return 477323545;
			case 2799:
				return 656066660;
			case 2800:
				return -1564429313;
			case 2801:
				return 596316494;
			case 2802:
				return -1785814590;
			case 2803:
				return 48701593;
			case 2804:
				return -95544323;
			case 2805:
				return 122590098;
			case 2806:
				return 1721876701;
			case 2807:
				return -419273004;
			case 2808:
				return 1909700942;
			case 2809:
				return -914113091;
			case 2810:
				return 198975914;
			case 2811:
				return 1134435597;
			case 2812:
				return 73896424;
			case 2813:
				return 1199132064;
			case 2814:
				return -2025285274;
			case 2815:
				return -231222072;
			case 2816:
				return 58562878;
			case 2817:
				return -2135453203;
			case 2818:
				return 1398844423;
			case 2819:
				return -1305575185;
			case 2820:
				return -1274748692;
			case 2821:
				return -2008231777;
			case 2822:
				return -1142822822;
			case 2823:
				return -2078698449;
			case 2824:
				return 540824655;
			case 2825:
				return 620402868;
			case 2826:
				return 109166093;
			case 2827:
				return -1675125335;
			case 2828:
				return -1809682277;
			case 2829:
				return -2144973143;
			case 2830:
				return 503957196;
			case 2831:
				return 1021574475;
			case 2832:
				return -522937277;
			case 2833:
				return 107605801;
			case 2834:
				return -1454145777;
			case 2835:
				return 2145956586;
			case 2836:
				return 1951056004;
			case 2837:
				return 1707669679;
			case 2838:
				return -131327239;
			case 2839:
				return -104288411;
			case 2840:
				return 1013717721;
			case 2841:
				return 200683969;
			case 2842:
				return 1292302437;
			case 2843:
				return -1910935596;
			case 2844:
				return -1675279275;
			case 2845:
				return -900456266;
			case 2846:
				return -144475436;
			case 2847:
				return -441559190;
			case 2848:
				return 1621773664;
			case 2849:
				return -1892144517;
			case 2850:
				return 2086536391;
			case 2851:
				return -1432690368;
			case 2852:
				return 702209982;
			case 2853:
				return 287451889;
			case 2854:
				return 1923158817;
			case 2855:
				return -2143801777;
			case 2856:
				return 1364447343;
			case 2857:
				return 1608314241;
			case 2858:
				return 1973328132;
			case 2859:
				return -2072987992;
			case 2860:
				return 210945770;
			case 2861:
				return 434725271;
			case 2862:
				return 791448609;
			case 2863:
				return -1013238248;
			case 2864:
				return 1719172056;
			case 2865:
				return 1403868738;
			case 2866:
				return 2066162997;
			case 2867:
				return 1764852042;
			case 2868:
				return -977647937;
			case 2869:
				return -1046331761;
			case 2870:
				return -1352951294;
			case 2871:
				return 504199012;
			case 2872:
				return 181391593;
			case 2873:
				return 1126285708;
			case 2874:
				return -127980536;
			case 2875:
				return 830873173;
			case 2876:
				return 1607203552;
			case 2877:
				return -1456206125;
			case 2878:
				return -1230984788;
			case 2879:
				return -23676521;
			case 2880:
				return -737909645;
			case 2881:
				return 439316680;
			case 2882:
				return -1104259517;
			case 2883:
				return -1319682923;
			case 2884:
				return -1567056104;
			case 2885:
				return -183024620;
			case 2886:
				return -414373760;
			case 2887:
				return -629895473;
			case 2888:
				return 1271034217;
			case 2889:
				return 1054791586;
			case 2890:
				return 807975478;
			case 2891:
				return -766444220;
			case 2892:
				return -937590592;
			case 2893:
				return -621533587;
			case 2894:
				return -192259687;
			case 2895:
				return 1439505433;
			case 2896:
				return 1677834370;
			case 2897:
				return 2033246944;
			case 2898:
				return -2012086106;
			case 2899:
				return 249007663;
			case 2900:
				return 488516284;
			case 2901:
				return -2121533690;
			case 2902:
				return 1876317083;
			case 2903:
				return -273689780;
			case 2904:
				return 478489850;
			case 2905:
				return 169510949;
			case 2906:
				return -441522968;
			case 2907:
				return -1886373716;
			case 2908:
				return -1004166698;
			case 2909:
				return -716487647;
			case 2910:
				return -568119413;
			case 2911:
				return 610548752;
			case 2912:
				return -284634794;
			case 2913:
				return 960554441;
			case 2914:
				return 305371055;
			case 2915:
				return 1677605699;
			case 2916:
				return 903241460;
			case 2917:
				return 2006573690;
			case 2918:
				return 1229522393;
			case 2919:
				return -142253777;
			case 2920:
				return -449561459;
			case 2921:
				return 452864036;
			case 2922:
				return -354039824;
			case 2923:
				return 1077736097;
			case 2924:
				return 243765047;
			case 2925:
				return 1642214891;
			case 2926:
				return 840128078;
			case 2927:
				return -2057896748;
			case 2928:
				return 1401755969;
			case 2929:
				return -1153471464;
			case 2930:
				return 731863173;
			case 2931:
				return 902819050;
			case 2932:
				return 535085332;
			case 2933:
				return 1780667791;
			case 2934:
				return 1518941788;
			case 2935:
				return -1934910816;
			case 2936:
				return 2128543495;
			case 2937:
				return -1617411975;
			case 2938:
				return -1851480942;
			case 2939:
				return -1237127954;
			case 2940:
				return 1235903780;
			case 2941:
				return 1683856002;
			case 2942:
				return 1446444597;
			case 2943:
				return -2129046535;
			case 2944:
				return 1927133058;
			case 2945:
				return -1625485316;
			case 2946:
				return -1923453829;
			case 2947:
				return -1218264953;
			case 2948:
				return -1448532716;
			case 2949:
				return 1742871471;
			case 2950:
				return 1127594950;
			case 2951:
				return 889200475;
			case 2952:
				return 1125694352;
			case 2953:
				return 887562029;
			case 2954:
				return 1587966635;
			case 2955:
				return 1349244470;
			case 2956:
				return -337310422;
			case 2957:
				return 364339406;
			case 2958:
				return 125355089;
			case 2959:
				return -1240717027;
			case 2960:
				return -1470692241;
			case 2961:
				return -694886166;
			case 2962:
				return -481101198;
			case 2963:
				return -770123778;
			case 2964:
				return -21581507;
			case 2965:
				return -311325005;
			case 2966:
				return 445278436;
			case 2967:
				return 139215976;
			case 2968:
				return 901422916;
			case 2969:
				return -760001357;
			case 2970:
				return -1570155638;
			case 2971:
				return -1807501505;
			case 2972:
				return -2083613099;
			case 2973:
				return 1578715879;
			case 2974:
				return 1295886640;
			case 2975:
				return 1065618877;
			case 2976:
				return 729081247;
			case 2977:
				return 615372817;
			case 2978:
				return 407387974;
			case 2979:
				return -1676225731;
			case 2980:
				return 256255268;
			case 2981:
				return 159455642;
			case 2982:
				return 2066316521;
			case 2983:
				return 1718571893;
			case 2984:
				return -927950858;
			case 2985:
				return 569395828;
			case 2986:
				return 291350863;
			case 2987:
				return -32013629;
			case 2988:
				return 2100363512;
			case 2989:
				return 1092224995;
			case 2990:
				return 824851344;
			case 2991:
				return 1064687655;
			case 2992:
				return 1370979498;
			case 2993:
				return -693991798;
			case 2994:
				return 1477675362;
			case 2995:
				return 1785802269;
			case 2996:
				return -1934462305;
			case 2997:
				return 511448628;
			case 2998:
				return -1970016654;
			case 2999:
				return -1210366572;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 3999)
	{
		switch (iParam0)
		{
			case 3000:
				return 1018385611;
			case 3001:
				return 1308751720;
			case 3002:
				return -1772386274;
			case 3003:
				return -1463472911;
			case 3004:
				return -219692747;
			case 3005:
				return 87844318;
			case 3006:
				return -1310802116;
			case 3007:
				return -1635116909;
			case 3008:
				return 223147543;
			case 3009:
				return 842474915;
			case 3010:
				return -946113247;
			case 3011:
				return -1189849069;
			case 3012:
				return 1791835014;
			case 3013:
				return -823655494;
			case 3014:
				return 11200319;
			case 3015:
				return -227685691;
			case 3016:
				return -1539133840;
			case 3017:
				return -545512230;
			case 3018:
				return -793082025;
			case 3019:
				return -1868593554;
			case 3020:
				return -260574885;
			case 3021:
				return -493464168;
			case 3022:
				return -851367186;
			case 3023:
				return -1082486943;
			case 3024:
				return 433354580;
			case 3025:
				return 68111306;
			case 3026:
				return 881274041;
			case 3027:
				return -826253015;
			case 3028:
				return -1055996474;
			case 3029:
				return -251288157;
			case 3030:
				return 448526607;
			case 3031:
				return -1645314170;
			case 3032:
				return -2042146760;
			case 3033:
				return 1862967391;
			case 3034:
				return 1818170544;
			case 3035:
				return -2121384178;
			case 3036:
				return -1949543542;
			case 3037:
				return -1646004295;
			case 3038:
				return -727784142;
			case 3039:
				return -1490056620;
			case 3040:
				return 1881447487;
			case 3041:
				return -1028964021;
			case 3042:
				return 444100836;
			case 3043:
				return -1819089921;
			case 3044:
				return 452442465;
			case 3045:
				return -739570698;
			case 3046:
				return 18966114;
			case 3047:
				return 1705193312;
			case 3048:
				return 1405193117;
			case 3049:
				return -936741779;
			case 3050:
				return -1234448144;
			case 3051:
				return 451647986;
			case 3052:
				return 1209398342;
			case 3053:
				return -2124618029;
			case 3054:
				return -1511279212;
			case 3055:
				return 422907192;
			case 3056:
				return 704884437;
			case 3057:
				return 879281055;
			case 3058:
				return 1176135426;
			case 3059:
				return -554461002;
			case 3060:
				return -258065397;
			case 3061:
				return -75673143;
			case 3062:
				return 222491988;
			case 3063:
				return -80981733;
			case 3064:
				return 868763417;
			case 3065:
				return -1706923699;
			case 3066:
				return 1595863815;
			case 3067:
				return 1021226631;
			case 3068:
				return 19609421;
			case 3069:
				return 1304055870;
			case 3070:
				return 613285394;
			case 3071:
				return -221308267;
			case 3072:
				return -1203657349;
			case 3073:
				return 146064992;
			case 3074:
				return 2101095457;
			case 3075:
				return 1341529360;
			case 3076:
				return 1388651182;
			case 3077:
				return 595215385;
			case 3078:
				return 909142405;
			case 3079:
				return -1190924502;
			case 3080:
				return -2019685281;
			case 3081:
				return 1819661839;
			case 3082:
				return 2134375315;
			case 3083:
				return -232070793;
			case 3084:
				return -925102658;
			case 3085:
				return 373446499;
			case 3086:
				return -1001245820;
			case 3087:
				return -107176424;
			case 3088:
				return 668367499;
			case 3089:
				return -612703791;
			case 3090:
				return -657925011;
			case 3091:
				return -1090049814;
			case 3092:
				return -1367177247;
			case 3093:
				return -1837871167;
			case 3094:
				return 245319441;
			case 3095:
				return -588190019;
			case 3096:
				return -1446639512;
			case 3097:
				return -1214307302;
			case 3098:
				return 127550479;
			case 3099:
				return 369811696;
			case 3100:
				return -213017738;
			case 3101:
				return 25737196;
			case 3102:
				return 282285673;
			case 3103:
				return 529134550;
			case 3104:
				return 1996464632;
			case 3105:
				return -2091924756;
			case 3106:
				return 2079732793;
			case 3107:
				return 1738869655;
			case 3108:
				return -1789630739;
			case 3109:
				return -1066025681;
			case 3110:
				return 2041098134;
			case 3111:
				return 1659011594;
			case 3112:
				return -969127748;
			case 3113:
				return -104124455;
			case 3114:
				return 1990099486;
			case 3115:
				return 1404320845;
			case 3116:
				return -1579657064;
			case 3117:
				return 1956085267;
			case 3118:
				return 1128831862;
			case 3119:
				return 136979770;
			case 3120:
				return 1448427919;
			case 3121:
				return 503468266;
			case 3122:
				return -63369896;
			case 3123:
				return -1048930336;
			case 3124:
				return 1357330395;
			case 3125:
				return 800666916;
			case 3126:
				return 2049952272;
			case 3127:
				return -1938919795;
			case 3128:
				return 1457455983;
			case 3129:
				return 1760602002;
			case 3130:
				return 1777871677;
			case 3131:
				return 2058210472;
			case 3132:
				return -2047941846;
			case 3133:
				return 406357951;
			case 3134:
				return 2090651018;
			case 3135:
				return -1796340114;
			case 3136:
				return -1353565386;
			case 3137:
				return 2146983043;
			case 3138:
				return -1982500803;
			case 3139:
				return -2047842185;
			case 3140:
				return 1476037772;
			case 3141:
				return 1763520209;
			case 3142:
				return 881313191;
			case 3143:
				return 1323367001;
			case 3144:
				return 1677949813;
			case 3145:
				return 2080172175;
			case 3146:
				return -1913942932;
			case 3147:
				return -1717197856;
			case 3148:
				return 629324696;
			case 3149:
				return 927293213;
			case 3150:
				return 1087271471;
			case 3151:
				return 1395267306;
			case 3152:
				return 591214389;
			case 3153:
				return 301372584;
			case 3154:
				return 1548495502;
			case 3155:
				return 1183836872;
			case 3156:
				return 928795749;
			case 3157:
				return 1158244287;
			case 3158:
				return 330728730;
			case 3159:
				return -41527110;
			case 3160:
				return 167014806;
			case 3161:
				return -595618131;
			case 3162:
				return -438130317;
			case 3163:
				return -1207251516;
			case 3164:
				return 1278866112;
			case 3165:
				return 1961801166;
			case 3166:
				return -1389124005;
			case 3167:
				return -1686043914;
			case 3168:
				return 2140261140;
			case 3169:
				return 758589024;
			case 3170:
				return 1644957705;
			case 3171:
				return -1849725073;
			case 3172:
				return -189778593;
			case 3173:
				return -495349518;
			case 3174:
				return 302182040;
			case 3175:
				return 1200487116;
			case 3176:
				return 961109571;
			case 3177:
				return -1175199846;
			case 3178:
				return 1673409328;
			case 3179:
				return 1443141565;
			case 3180:
				return 2118838345;
			case 3181:
				return -609246487;
			case 3182:
				return 119142845;
			case 3183:
				return -120365776;
			case 3184:
				return -910328355;
			case 3185:
				return -1227041431;
			case 3186:
				return -1585403215;
			case 3187:
				return 1516936318;
			case 3188:
				return -991137400;
			case 3189:
				return 2109563683;
			case 3190:
				return 1755265255;
			case 3191:
				return 556870156;
			case 3192:
				return 334270339;
			case 3193:
				return 1159066069;
			case 3194:
				return 1924089687;
			case 3195:
				return -2076527540;
			case 3196:
				return -692364984;
			case 3197:
				return -1580241035;
			case 3198:
				return 1946555363;
			case 3199:
				return -346783098;
			case 3200:
				return -47765973;
			case 3201:
				return -1002294174;
			case 3202:
				return 379377942;
			case 3203:
				return 844632208;
			case 3204:
				return -2031732597;
			case 3205:
				return -1590720797;
			case 3206:
				return -822713744;
			case 3207:
				return 957789875;
			case 3208:
				return 650318348;
			case 3209:
				return 1654163894;
			case 3210:
				return -2007837398;
			case 3211:
				return -301260643;
			case 3212:
				return -473560045;
			case 3213:
				return 1533508436;
			case 3214:
				return 330557078;
			case 3215:
				return -1366992655;
			case 3216:
				return 1548137589;
			case 3217:
				return 1258885626;
			case 3218:
				return 1425057221;
			case 3219:
				return 1117061390;
			case 3220:
				return 1901878940;
			case 3221:
				return 524499563;
			case 3222:
				return 234428375;
			case 3223:
				return 1012659356;
			case 3224:
				return 637554637;
			case 3225:
				return -1046857608;
			case 3226:
				return 301127976;
			case 3227:
				return 809571784;
			case 3228:
				return 1031843911;
			case 3229:
				return -49991859;
			case 3230:
				return 1262242750;
			case 3231:
				return -1927590025;
			case 3232:
				return -1688474632;
			case 3233:
				return 680330844;
			case 3234:
				return 1936432512;
			case 3235:
				return -1459320651;
			case 3236:
				return -819079929;
			case 3237:
				return 210390975;
			case 3238:
				return 448523298;
			case 3239:
				return -917674180;
			case 3240:
				return -1244676031;
			case 3241:
				return 752725603;
			case 3242:
				return 455805694;
			case 3243:
				return -1990138008;
			case 3244:
				return 2006402005;
			case 3245:
				return -477488199;
			case 3246:
				return 130901055;
			case 3247:
				return 1039487122;
			case 3248:
				return -1406653486;
			case 3249:
				return -1782120720;
			case 3250:
				return -2089002405;
			case 3251:
				return -1294452450;
			case 3252:
				return -1736309646;
			case 3253:
				return 528339046;
			case 3254:
				return 298136821;
			case 3255:
				return -1246331691;
			case 3256:
				return -1610526357;
			case 3257:
				return -902289956;
			case 3258:
				return -990602411;
			case 3259:
				return -1538663948;
			case 3260:
				return -1450449800;
			case 3261:
				return -1211334403;
			case 3262:
				return -515747740;
			case 3263:
				return -299079112;
			case 3264:
				return -1125251140;
			case 3265:
				return 965771491;
			case 3266:
				return 676945553;
			case 3267:
				return -2027068700;
			case 3268:
				return 1491830369;
			case 3269:
				return 1921628573;
			case 3270:
				return -1236713077;
			case 3271:
				return -724468069;
			case 3272:
				return -1567974898;
			case 3273:
				return -1319913568;
			case 3274:
				return 823998265;
			case 3275:
				return 2132300586;
			case 3276:
				return 2140067023;
			case 3277:
				return 103360831;
			case 3278:
				return -175405052;
			case 3279:
				return 668626081;
			case 3280:
				return 1243001089;
			case 3281:
				return 1003230316;
			case 3282:
				return 1817834887;
			case 3283:
				return 1578359035;
			case 3284:
				return -2099371377;
			case 3285:
				return 1956611602;
			case 3286:
				return -138017107;
			case 3287:
				return 319438133;
			case 3288:
				return -482648672;
			case 3289:
				return -251987681;
			case 3290:
				return 2128483563;
			case 3291:
				return -1248613242;
			case 3292:
				return -1018017789;
			case 3293:
				return -1847532255;
			case 3294:
				return -1599962460;
			case 3295:
				return -1673496144;
			case 3296:
				return -1374479019;
			case 3297:
				return 2010099919;
			case 3298:
				return -1986702246;
			case 3299:
				return -779328441;
			case 3300:
				return -1454206812;
			case 3301:
				return 308633328;
			case 3302:
				return 539228781;
			case 3303:
				return -351236025;
			case 3304:
				return -53333046;
			case 3305:
				return 1233964366;
			case 3306:
				return 1514630851;
			case 3307:
				return 624821425;
			case 3308:
				return 855875644;
			case 3309:
				return 314662840;
			case 3310:
				return 76923449;
			case 3311:
				return -564706035;
			case 3312:
				return -938993553;
			case 3313:
				return 956922420;
			case 3314:
				return 650335656;
			case 3315:
				return -1594865088;
			case 3316:
				return -1823822091;
			case 3317:
				return 2108654527;
			case 3318:
				return -336732102;
			case 3319:
				return 1390128600;
			case 3320:
				return 474136003;
			case 3321:
				return -1868257655;
			case 3322:
				return -490321205;
			case 3323:
				return -183242906;
			case 3324:
				return -714362858;
			case 3325:
				return 1377581688;
			case 3326:
				return 1154588643;
			case 3327:
				return 1855189863;
			case 3328:
				return 1563185304;
			case 3329:
				return 154708142;
			case 3330:
				return -84407251;
			case 3331:
				return 633233849;
			case 3332:
				return 394052918;
			case 3333:
				return 1578685053;
			case 3334:
				return -2019613587;
			case 3335:
				return -934408309;
			case 3336:
				return -1239979234;
			case 3337:
				return -1545058624;
			case 3338:
				return -1851088315;
			case 3339:
				return -283026139;
			case 3340:
				return -580994656;
			case 3341:
				return -829547521;
			case 3342:
				return -1195118485;
			case 3343:
				return -1444785496;
			case 3344:
				return -1236243912;
			case 3345:
				return -577448116;
			case 3346:
				return 199996409;
			case 3347:
				return -163477339;
			case 3348:
				return 612361505;
			case 3349:
				return 1356742109;
			case 3350:
				return 1057987136;
			case 3351:
				return 1837299494;
			case 3352:
				return 1539134363;
			case 3353:
				return -1949289528;
			case 3354:
				return 462607459;
			case 3355:
				return -1757530457;
			case 3356:
				return -2065264136;
			case 3357:
				return -182455699;
			case 3358:
				return -533477227;
			case 3359:
				return -828267151;
			case 3360:
				return -1107295186;
			case 3361:
				return 741826715;
			case 3362:
				return 461717303;
			case 3363:
				return 162438026;
			case 3364:
				return 1761237816;
			case 3365:
				return 676845404;
			case 3366:
				return 915043265;
			case 3367:
				return -1204685042;
			case 3368:
				return 1182765995;
			case 3369:
				return 1538047493;
			case 3370:
				return 1777490576;
			case 3371:
				return -590528444;
			case 3372:
				return -190877720;
			case 3373:
				return -2127427313;
			case 3374:
				return -837540206;
			case 3375:
				return -671356385;
			case 3376:
				return 574619302;
			case 3377:
				return -1282531004;
			case 3378:
				return 1827804189;
			case 3379:
				return -1616348791;
			case 3380:
				return -931771628;
			case 3381:
				return 2047618641;
			case 3382:
				return 874553959;
			case 3383:
				return 642909898;
			case 3384:
				return 1162397703;
			case 3385:
				return 2036433038;
			case 3386:
				return -1418369867;
			case 3387:
				return -417932293;
			case 3388:
				return 357546092;
			case 3389:
				return -1033301344;
			case 3390:
				return -188024989;
			case 3391:
				return 1168218359;
			case 3392:
				return 1533133943;
			case 3393:
				return 573952540;
			case 3394:
				return -787568037;
			case 3395:
				return 1000959918;
			case 3396:
				return 607797456;
			case 3397:
				return -1462941192;
			case 3398:
				return -1794760086;
			case 3399:
				return -2077982553;
			case 3400:
				return -162405120;
			case 3401:
				return 1904728942;
			case 3402:
				return 1669021525;
			case 3403:
				return 1294275241;
			case 3404:
				return -1504983543;
			case 3405:
				return 2057687289;
			case 3406:
				return -1937673052;
			case 3407:
				return 2014530504;
			case 3408:
				return 693448269;
			case 3409:
				return 329384679;
			case 3410:
				return 1055480181;
			case 3411:
				return -250659390;
			case 3412:
				return -632483778;
			case 3413:
				return -724040364;
			case 3414:
				return 224756410;
			case 3415:
				return -1409595726;
			case 3416:
				return -1172905239;
			case 3417:
				return -825160611;
			case 3418:
				return -560747550;
			case 3419:
				return -605706614;
			case 3420:
				return -342800927;
			case 3421:
				return 8351677;
			case 3422:
				return 234359466;
			case 3423:
				return 483305559;
			case 3424:
				return 1977473300;
			case 3425:
				return -2126753439;
			case 3426:
				return -1811286276;
			case 3427:
				return -1564371857;
			case 3428:
				return -1252804205;
			case 3429:
				return -1169833097;
			case 3430:
				return -922787606;
			case 3431:
				return -1139226839;
			case 3432:
				return -858330971;
			case 3433:
				return -541749662;
			case 3434:
				return -1834916325;
			case 3435:
				return 1701653225;
			case 3436:
				return 1386939749;
			case 3437:
				return 1103717282;
			case 3438:
				return -1593520704;
			case 3439:
				return 1260724738;
			case 3440:
				return -297375678;
			case 3441:
				return -260985198;
			case 3442:
				return -1179959034;
			case 3443:
				return -873142887;
			case 3444:
				return -1278925815;
			case 3445:
				return -80071950;
			case 3446:
				return -781656240;
			case 3447:
				return 1890828381;
			case 3448:
				return 1864875333;
			case 3449:
				return -320325540;
			case 3450:
				return 525029001;
			case 3451:
				return 1717296181;
			case 3452:
				return 1894117705;
			case 3453:
				return -452048774;
			case 3454:
				return -1085571851;
			case 3455:
				return -862677113;
			case 3456:
				return -1615607679;
			case 3457:
				return -1894668475;
			case 3458:
				return 2095710966;
			case 3459:
				return -1617179117;
			case 3460:
				return 1784374159;
			case 3461:
				return 2081818376;
			case 3462:
				return 1464921218;
			case 3463:
				return 550403966;
			case 3464:
				return 856007660;
			case 3465:
				return 1332088703;
			case 3466:
				return 1034120186;
			case 3467:
				return 532885562;
			case 3468:
				return 560856018;
			case 3469:
				return -1382149068;
			case 3470:
				return -188079477;
			case 3471:
				return 245915270;
			case 3472:
				return 844146134;
			case 3473:
				return 538640747;
			case 3474:
				return 1578729681;
			case 3475:
				return 1879581870;
			case 3476:
				return 948647349;
			case 3477:
				return 1670772830;
			case 3478:
				return 1983552939;
			case 3479:
				return 786927362;
			case 3480:
				return 1369887872;
			case 3481:
				return 570111671;
			case 3482:
				return -957218650;
			case 3483:
				return 103776032;
			case 3484:
				return -1428731763;
			case 3485:
				return -719093566;
			case 3486:
				return -1538384104;
			case 3487:
				return 310672259;
			case 3488:
				return -1112944177;
			case 3489:
				return -1962262014;
			case 3490:
				return 912169120;
			case 3491:
				return 1688335654;
			case 3492:
				return -2118045852;
			case 3493:
				return -1144595255;
			case 3494:
				return -1085348903;
			case 3495:
				return 1481938398;
			case 3496:
				return 1770895440;
			case 3497:
				return 2134080808;
			case 3498:
				return -1843724218;
			case 3499:
				return 1230218954;
			case 3500:
				return 592591509;
			case 3501:
				return 391683094;
			case 3502:
				return -779182503;
			case 3503:
				return 1621644826;
			case 3504:
				return 199227248;
			case 3505:
				return 559607436;
			case 3506:
				return 1960470978;
			case 3507:
				return 1112945406;
			case 3508:
				return -69261803;
			case 3509:
				return 632256949;
			case 3510:
				return 1330793722;
			case 3511:
				return 1497981160;
			case 3512:
				return 855413839;
			case 3513:
				return 1152202672;
			case 3514:
				return -1504314624;
			case 3515:
				return -1205494109;
			case 3516:
				return 117130861;
			case 3517:
				return -1067785553;
			case 3518:
				return 192313573;
			case 3519:
				return -46211978;
			case 3520:
				return 632335713;
			case 3521:
				return 393122013;
			case 3522:
				return 1113417402;
			case 3523:
				return 873482784;
			case 3524:
				return 558244996;
			case 3525:
				return 314673019;
			case 3526:
				return 1305443458;
			case 3527:
				return -1205469536;
			case 3528:
				return -1505404193;
			case 3529:
				return -856151992;
			case 3530:
				return -1034153200;
			case 3531:
				return -877288001;
			case 3532:
				return -1185545984;
			case 3533:
				return 139697914;
			case 3534:
				return -176228015;
			case 3535:
				return 584406013;
			case 3536:
				return -1879789766;
			case 3537:
				return -1547374981;
			case 3538:
				return 1162621323;
			case 3539:
				return 1462097214;
			case 3540:
				return 1572233823;
			case 3541:
				return -269809974;
			case 3542:
				return 36711252;
			case 3543:
				return 342806481;
			case 3544:
				return 582708330;
			case 3545:
				return -997347304;
			case 3546:
				return -2115196629;
			case 3547:
				return -245533045;
			case 3548:
				return 1353505172;
			case 3549:
				return -1839021388;
			case 3550:
				return -1419782610;
			case 3551:
				return 943548653;
			case 3552:
				return -1619642221;
			case 3553:
				return 622047586;
			case 3554:
				return 1597263426;
			case 3555:
				return 1722628166;
			case 3556:
				return -1694539233;
			case 3557:
				return 1513634512;
			case 3558:
				return -893316168;
			case 3559:
				return 538868986;
			case 3560:
				return -1711481698;
			case 3561:
				return 1319328085;
			case 3562:
				return 1952208904;
			case 3563:
				return -541889516;
			case 3564:
				return 1557647991;
			case 3565:
				return -1710663785;
			case 3566:
				return -794317506;
			case 3567:
				return -1980858;
			case 3568:
				return -1686496844;
			case 3569:
				return -351961813;
			case 3570:
				return -1506830253;
			case 3571:
				return 1231534549;
			case 3572:
				return 2088008649;
			case 3573:
				return 733157164;
			case 3574:
				return 1859530310;
			case 3575:
				return -1905288808;
			case 3576:
				return 777965970;
			case 3577:
				return -1206384056;
			case 3578:
				return 264499065;
			case 3579:
				return 1780589899;
			case 3580:
				return 633743639;
			case 3581:
				return 256741405;
			case 3582:
				return -1077994284;
			case 3583:
				return -879146621;
			case 3584:
				return -1166653914;
			case 3585:
				return 516997117;
			case 3586:
				return 702843560;
			case 3587:
				return -1530677444;
			case 3588:
				return -370365282;
			case 3589:
				return 850581503;
			case 3590:
				return 1037966707;
			case 3591:
				return 1935957604;
			case 3592:
				return 570369388;
			case 3593:
				return 1772261760;
			case 3594:
				return 1029422614;
			case 3595:
				return 503661864;
			case 3596:
				return 1665826560;
			case 3597:
				return -2025836292;
			case 3598:
				return 1063949307;
			case 3599:
				return 1864554622;
			case 3600:
				return 373485948;
			case 3601:
				return 815556842;
			case 3602:
				return 1170008750;
			case 3603:
				return 1618040491;
			case 3604:
				return 1650960057;
			case 3605:
				return -1519087724;
			case 3606:
				return -1210908838;
			case 3607:
				return 1960069292;
			case 3608:
				return -1515593200;
			case 3609:
				return -1797776727;
			case 3610:
				return 930714389;
			case 3611:
				return 1278862344;
			case 3612:
				return 526423614;
			case 3613:
				return 698460606;
			case 3614:
				return -162936736;
			case 3615:
				return 1193475188;
			case 3616:
				return 94163197;
			case 3617:
				return 751693245;
			case 3618:
				return -365299490;
			case 3619:
				return -1149697598;
			case 3620:
				return 418539384;
			case 3621:
				return 1797040784;
			case 3622:
				return -980250282;
			case 3623:
				return -1625831236;
			case 3624:
				return 345005559;
			case 3625:
				return -713623402;
			case 3626:
				return 813490453;
			case 3627:
				return 404691120;
			case 3628:
				return 1979333234;
			case 3629:
				return 28609679;
			case 3630:
				return 1008913434;
			case 3631:
				return -1164023136;
			case 3632:
				return -1487288889;
			case 3633:
				return 324948736;
			case 3634:
				return -1343447025;
			case 3635:
				return 1836892466;
			case 3636:
				return -781326676;
			case 3637:
				return 152231296;
			case 3638:
				return -1184429521;
			case 3639:
				return 1489573229;
			case 3640:
				return 1524472431;
			case 3641:
				return 1576312814;
			case 3642:
				return 1347974832;
			case 3643:
				return 884508060;
			case 3644:
				return 18037563;
			case 3645:
				return -140399328;
			case 3646:
				return 1793637184;
			case 3647:
				return 1912445715;
			case 3648:
				return 80752257;
			case 3649:
				return -1900107955;
			case 3650:
				return 215377327;
			case 3651:
				return 1676952854;
			case 3652:
				return 2069834062;
			case 3653:
				return 980981270;
			case 3654:
				return 421935074;
			case 3655:
				return -1796137500;
			case 3656:
				return -1429417208;
			case 3657:
				return 1044265416;
			case 3658:
				return -1298745971;
			case 3659:
				return -1659763883;
			case 3660:
				return 588096874;
			case 3661:
				return 700497293;
			case 3662:
				return 325638129;
			case 3663:
				return -1791962442;
			case 3664:
				return 1149525926;
			case 3665:
				return -1293767800;
			case 3666:
				return 1317886737;
			case 3667:
				return -121380886;
			case 3668:
				return -1358387664;
			case 3669:
				return 1465462356;
			case 3670:
				return -1235568753;
			case 3671:
				return 1383944466;
			case 3672:
				return 446695881;
			case 3673:
				return 134207312;
			case 3674:
				return -1311747726;
			case 3675:
				return -673313625;
			case 3676:
				return 1590399727;
			case 3677:
				return -111769906;
			case 3678:
				return 300853034;
			case 3679:
				return -914225159;
			case 3680:
				return 1493179235;
			case 3681:
				return -1346415230;
			case 3682:
				return 1365213532;
			case 3683:
				return 813371591;
			case 3684:
				return -1207848251;
			case 3685:
				return -1467417409;
			case 3686:
				return -1577946792;
			case 3687:
				return -1293288470;
			case 3688:
				return -998690479;
			case 3689:
				return -1051930818;
			case 3690:
				return 1937512887;
			case 3691:
				return -1794149227;
			case 3692:
				return 173987104;
			case 3693:
				return -2063561378;
			case 3694:
				return -713492985;
			case 3695:
				return 885461652;
			case 3696:
				return -990718175;
			case 3697:
				return -1480115632;
			case 3698:
				return 418592673;
			case 3699:
				return 879884287;
			case 3700:
				return 928002221;
			case 3701:
				return -1177242188;
			case 3702:
				return -2021797625;
			case 3703:
				return -1805194535;
			case 3704:
				return 1647937151;
			case 3705:
				return -521272346;
			case 3706:
				return -844112534;
			case 3707:
				return -591496313;
			case 3708:
				return -1458367439;
			case 3709:
				return 625380794;
			case 3710:
				return 869083847;
			case 3711:
				return -1249858004;
			case 3712:
				return -2084648279;
			case 3713:
				return -1843665053;
			case 3714:
				return -690537577;
			case 3715:
				return 158572755;
			case 3716:
				return -122912959;
			case 3717:
				return 765356328;
			case 3718:
				return -80739252;
			case 3719:
				return 1383936741;
			case 3720:
				return -163800986;
			case 3721:
				return -2106320965;
			case 3722:
				return -1339690210;
			case 3723:
				return 1674173031;
			case 3724:
				return -1843906813;
			case 3725:
				return 946144158;
			case 3726:
				return 1956281352;
			case 3727:
				return 259965560;
			case 3728:
				return 892705196;
			case 3729:
				return -981778145;
			case 3730:
				return -680851467;
			case 3731:
				return -749154876;
			case 3732:
				return -2143575159;
			case 3733:
				return -102780002;
			case 3734:
				return -848671080;
			case 3735:
				return -43635057;
			case 3736:
				return -346584462;
			case 3737:
				return 437708784;
			case 3738:
				return 590067755;
			case 3739:
				return -617109408;
			case 3740:
				return -371669598;
			case 3741:
				return -1080168147;
			case 3742:
				return -832303431;
			case 3743:
				return -1542309354;
			case 3744:
				return -1296738468;
			case 3745:
				return 1772897607;
			case 3746:
				return 2011488696;
			case 3747:
				return -949976050;
			case 3748:
				return -612591185;
			case 3749:
				return 223509850;
			case 3750:
				return -149991212;
			case 3751:
				return 684602449;
			case 3752:
				return -1801384967;
			case 3753:
				return -968167604;
			case 3754:
				return -1341799742;
			case 3755:
				return -505895321;
			case 3756:
				return -993596440;
			case 3757:
				return 1058888963;
			case 3758:
				return -580773486;
			case 3759:
				return -282084051;
			case 3760:
				return 1531697767;
			case 3761:
				return 1832025652;
			case 3762:
				return 2008585024;
			case 3763:
				return -1978124289;
			case 3764:
				return 1266793159;
			case 3765:
				return 495705828;
			case 3766:
				return 1744466872;
			case 3767:
				return 969250639;
			case 3768:
				return -803257332;
			case 3769:
				return 517859092;
			case 3770:
				return 309184131;
			case 3771:
				return 1033182417;
			case 3772:
				return 1199452323;
			case 3773:
				return 1570266327;
			case 3774:
				return 1733914713;
			case 3775:
				return 2066421756;
			case 3776:
				return -2065224844;
			case 3777:
				return -1769091391;
			case 3778:
				return -1605049777;
			case 3779:
				return 2062555242;
			case 3780:
				return -1442483842;
			case 3781:
				return -1673538061;
			case 3782:
				return -1918191415;
			case 3783:
				return 2137005108;
			case 3784:
				return -102493890;
			case 3785:
				return 714797739;
			case 3786:
				return -574793487;
			case 3787:
				return 259996788;
			case 3788:
				return 1760063301;
			case 3789:
				return -1678814094;
			case 3790:
				return -1695888380;
			case 3791:
				return -1900432478;
			case 3792:
				return -2136664199;
			case 3793:
				return 1764747407;
			case 3794:
				return 1526746160;
			case 3795:
				return 1318269782;
			case 3796:
				return 1080727301;
			case 3797:
				return -1036543331;
			case 3798:
				return 836696554;
			case 3799:
				return -29815017;
			case 3800:
				return 801549301;
			case 3801:
				return 538447000;
			case 3802:
				return -138658863;
			case 3803:
				return -378429636;
			case 3804:
				return 321450666;
			case 3805:
				return 81221127;
			case 3806:
				return -2095951221;
			case 3807:
				return -1361466867;
			case 3808:
				return -1592521086;
			case 3809:
				return 605359274;
			case 3810:
				return -151945845;
			case 3811:
				return -533245929;
			case 3812:
				return -1905087361;
			case 3813:
				return 2042397459;
			case 3814:
				return -1294568122;
			case 3815:
				return -1666758424;
			case 3816:
				return -719832631;
			case 3817:
				return -958030492;
			case 3818:
				return -76020084;
			case 3819:
				return -245731083;
			case 3820:
				return 869550712;
			case 3821:
				return -1441450248;
			case 3822:
				return -1756655259;
			case 3823:
				return -1934459853;
			case 3824:
				return 2061490318;
			case 3825:
				return 2047891243;
			case 3826:
				return 784331446;
			case 3827:
				return -369989348;
			case 3828:
				return -1136554565;
			case 3829:
				return -2054086569;
			case 3830:
				return -675134276;
			case 3831:
				return -1383632829;
			case 3832:
				return -704119684;
			case 3833:
				return -441672759;
			case 3834:
				return -1291110781;
			case 3835:
				return -1060318714;
			case 3836:
				return -1997610421;
			case 3837:
				return -1665594913;
			case 3838:
				return 520262346;
			case 3839:
				return 2052606328;
			case 3840:
				return -2018548698;
			case 3841:
				return 1441628323;
			case 3842:
				return -703135500;
			case 3843:
				return -178110582;
			case 3844:
				return 1119640125;
			case 3845:
				return 1357805217;
			case 3846:
				return -514405705;
			case 3847:
				return 148740548;
			case 3848:
				return 1993176486;
			case 3849:
				return 739926077;
			case 3850:
				return 440548493;
			case 3851:
				return 1103301522;
			case 3852:
				return -1353259336;
			case 3853:
				return 1718998263;
			case 3854:
				return 1412575344;
			case 3855:
				return 922285826;
			case 3856:
				return -1883262636;
			case 3857:
				return -1637364060;
			case 3858:
				return -1405457847;
			case 3859:
				return -1196719313;
			case 3860:
				return -430252403;
			case 3861:
				return -182748146;
			case 3862:
				return 657360470;
			case 3863:
				return 864722658;
			case 3864:
				return 1117863183;
			case 3865:
				return -1930636887;
			case 3866:
				return -1642433532;
			case 3867:
				return 1752303796;
			case 3868:
				return 2074390297;
			case 3869:
				return -974634081;
			case 3870:
				return -678304014;
			case 3871:
				return -511576826;
			case 3872:
				return 384717424;
			case 3873:
				return 699267055;
			case 3874:
				return 33335437;
			case 3875:
				return -1602165349;
			case 3876:
				return 2096209533;
			case 3877:
				return -2027638045;
			case 3878:
				return -648095914;
			case 3879:
				return 1497356058;
			case 3880:
				return 853969512;
			case 3881:
				return -417533546;
			case 3882:
				return 1511461630;
			case 3883:
				return 315950195;
			case 3884:
				return 644557727;
			case 3885:
				return -1929938754;
			case 3886:
				return -1964853245;
			case 3887:
				return 2091326348;
			case 3888:
				return -516234070;
			case 3889:
				return -764000479;
			case 3890:
				return 1907243024;
			case 3891:
				return -1429460405;
			case 3892:
				return -792562121;
			case 3893:
				return -1491688732;
			case 3894:
				return 168693594;
			case 3895:
				return 713314374;
			case 3896:
				return 1720698972;
			case 3897:
				return 419343675;
			case 3898:
				return -69081877;
			case 3899:
				return -360824284;
			case 3900:
				return 691912610;
			case 3901:
				return -1473757835;
			case 3902:
				return 269459499;
			case 3903:
				return 576275646;
			case 3904:
				return 2081323047;
			case 3905:
				return -1899749998;
			case 3906:
				return 1551401337;
			case 3907:
				return -775721971;
			case 3908:
				return -1226099107;
			case 3909:
				return -1523281168;
			case 3910:
				return -484502140;
			case 3911:
				return 516132044;
			case 3912:
				return 235531097;
			case 3913:
				return 997672499;
			case 3914:
				return -1063507755;
			case 3915:
				return -1294037670;
			case 3916:
				return 483746110;
			case 3917:
				return 160643770;
			case 3918:
				return -1190417423;
			case 3919:
				return -241525490;
			case 3920:
				return 1189300110;
			case 3921:
				return 220091413;
			case 3922:
				return -547926090;
			case 3923:
				return -1467293158;
			case 3924:
				return -1161525615;
			case 3925:
				return 568186050;
			case 3926:
				return 1331326540;
			case 3927:
				return 974406592;
			case 3928:
				return 735029047;
			case 3929:
				return 397967109;
			case 3930:
				return 1294370506;
			case 3931:
				return -1668143864;
			case 3932:
				return -298858430;
			case 3933:
				return 66384844;
			case 3934:
				return -597131526;
			case 3935:
				return 1780554349;
			case 3936:
				return 673617541;
			case 3937:
				return 911160022;
			case 3938:
				return -1938432222;
			case 3939:
				return -1697416227;
			case 3940:
				return -407105952;
			case 3941:
				return 1484585410;
			case 3942:
				return -1435647876;
			case 3943:
				return 121629299;
			case 3944:
				return 1297587677;
			case 3945:
				return 368546563;
			case 3946:
				return -829486231;
			case 3947:
				return 1109845536;
			case 3948:
				return 2043513452;
			case 3949:
				return 1681968008;
			case 3950:
				return 1672340786;
			case 3951:
				return -732799007;
			case 3952:
				return -1351538712;
			case 3953:
				return -296734541;
			case 3954:
				return 406510339;
			case 3955:
				return -29522246;
			case 3956:
				return -517014560;
			case 3957:
				return 477432347;
			case 3958:
				return 1494417353;
			case 3959:
				return -37225494;
			case 3960:
				return -120601963;
			case 3961:
				return -256727029;
			case 3962:
				return 306287596;
			case 3963:
				return 133887219;
			case 3964:
				return -1186197333;
			case 3965:
				return 272798698;
			case 3966:
				return -1387971799;
			case 3967:
				return -375079609;
			case 3968:
				return -43062561;
			case 3969:
				return 117375707;
			case 3970:
				return -1600705049;
			case 3971:
				return 504480234;
			case 3972:
				return -1720994018;
			case 3973:
				return 791990600;
			case 3974:
				return 480662374;
			case 3975:
				return 1036145925;
			case 3976:
				return -1202261561;
			case 3977:
				return -1012902011;
			case 3978:
				return -106840971;
			case 3979:
				return 1750698878;
			case 3980:
				return -1321197337;
			case 3981:
				return 1240740249;
			case 3982:
				return -961345733;
			case 3983:
				return -1963379453;
			case 3984:
				return -1064507801;
			case 3985:
				return 1291564328;
			case 3986:
				return -32410602;
			case 3987:
				return 1287454364;
			case 3988:
				return -1817612008;
			case 3989:
				return -669252080;
			case 3990:
				return 2024813755;
			case 3991:
				return -313637108;
			case 3992:
				return -1910195504;
			case 3993:
				return 815986484;
			case 3994:
				return 179763942;
			case 3995:
				return -1916324985;
			case 3996:
				return -1829915252;
			case 3997:
				return -241551160;
			case 3998:
				return 1597549589;
			case 3999:
				return -1552462237;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 4999)
	{
		switch (iParam0)
		{
			case 4000:
				return 1030010203;
			case 4001:
				return -1219822925;
			case 4002:
				return -1635971628;
			case 4003:
				return -1324425777;
			case 4004:
				return -1671780862;
			case 4005:
				return 507190568;
			case 4006:
				return 1895061720;
			case 4007:
				return 1089186542;
			case 4008:
				return -238140031;
			case 4009:
				return 1805787437;
			case 4010:
				return -987111715;
			case 4011:
				return -1804584792;
			case 4012:
				return -1612343687;
			case 4013:
				return 1533949009;
			case 4014:
				return -1161101549;
			case 4015:
				return 740194192;
			case 4016:
				return -97869496;
			case 4017:
				return 4326228;
			case 4018:
				return 1318574398;
			case 4019:
				return -1501914726;
			case 4020:
				return -1102040142;
			case 4021:
				return 2131868179;
			case 4022:
				return 3381261;
			case 4023:
				return 1805882815;
			case 4024:
				return -949828683;
			case 4025:
				return -81285892;
			case 4026:
				return 6301841;
			case 4027:
				return 1923744857;
			case 4028:
				return -1902572193;
			case 4029:
				return 90307511;
			case 4030:
				return 1141776368;
			case 4031:
				return 1320043540;
			case 4032:
				return -982438733;
			case 4033:
				return -1891328615;
			case 4034:
				return -1415269242;
			case 4035:
				return -230490133;
			case 4036:
				return 1438066731;
			case 4037:
				return -610154040;
			case 4038:
				return 1715649495;
			case 4039:
				return 1709715848;
			case 4040:
				return -1998144599;
			case 4041:
				return 1678607713;
			case 4042:
				return -1137103998;
			case 4043:
				return 786747692;
			case 4044:
				return -1712171277;
			case 4045:
				return -1046072898;
			case 4046:
				return 1609951869;
			case 4047:
				return -1308317005;
			case 4048:
				return 1538423250;
			case 4049:
				return -703125203;
			case 4050:
				return 332147902;
			case 4051:
				return 987875961;
			case 4052:
				return -1040621063;
			case 4053:
				return -358588746;
			case 4054:
				return -1319316385;
			case 4055:
				return 2020080935;
			case 4056:
				return 777331155;
			case 4057:
				return -1561911472;
			case 4058:
				return 1325054645;
			case 4059:
				return -1788312058;
			case 4060:
				return 1784851286;
			case 4061:
				return -54017604;
			case 4062:
				return 1852460277;
			case 4063:
				return 64305580;
			case 4064:
				return -951101690;
			case 4065:
				return -1616045408;
			case 4066:
				return 2130053094;
			case 4067:
				return 348879995;
			case 4068:
				return -1203108475;
			case 4069:
				return -1526470792;
			case 4070:
				return 1925775192;
			case 4071:
				return -144574664;
			case 4072:
				return 980632813;
			case 4073:
				return -206140918;
			case 4074:
				return 1617935389;
			case 4075:
				return -1819197281;
			case 4076:
				return -62382787;
			case 4077:
				return -1680477536;
			case 4078:
				return -1593659312;
			case 4079:
				return 68508030;
			case 4080:
				return -740951021;
			case 4081:
				return -1629651288;
			case 4082:
				return 869323742;
			case 4083:
				return -1441970735;
			case 4084:
				return -703447740;
			case 4085:
				return 1043469528;
			case 4086:
				return 1091490859;
			case 4087:
				return -369622629;
			case 4088:
				return -2113353585;
			case 4089:
				return 169691417;
			case 4090:
				return -1432200570;
			case 4091:
				return -792398644;
			case 4092:
				return -944693227;
			case 4093:
				return 121268493;
			case 4094:
				return -1406660397;
			case 4095:
				return -1472854646;
			case 4096:
				return 1548901968;
			case 4097:
				return 497657806;
			case 4098:
				return 658872627;
			case 4099:
				return 2088915818;
			case 4100:
				return -526009756;
			case 4101:
				return -790469824;
			case 4102:
				return 149047576;
			case 4103:
				return 118889588;
			case 4104:
				return 730317751;
			case 4105:
				return -1754253671;
			case 4106:
				return -1206134015;
			case 4107:
				return 1517523662;
			case 4108:
				return 221566106;
			case 4109:
				return 1620016488;
			case 4110:
				return -1612466468;
			case 4111:
				return 1131227064;
			case 4112:
				return 134135711;
			case 4113:
				return -998263070;
			case 4114:
				return 295404001;
			case 4115:
				return -999991982;
			case 4116:
				return 388083084;
			case 4117:
				return -2079473135;
			case 4118:
				return 2054194665;
			case 4119:
				return 1847915859;
			case 4120:
				return 2116287140;
			case 4121:
				return -954763954;
			case 4122:
				return -1720705328;
			case 4123:
				return -182293253;
			case 4124:
				return -1454229166;
			case 4125:
				return 1084504086;
			case 4126:
				return -763979179;
			case 4127:
				return -1239774220;
			case 4128:
				return -1859689914;
			case 4129:
				return -813191644;
			case 4130:
				return 1140310123;
			case 4131:
				return 617432326;
			case 4132:
				return -1435070363;
			case 4133:
				return 2122306480;
			case 4134:
				return -892151819;
			case 4135:
				return -1580067991;
			case 4136:
				return -88950655;
			case 4137:
				return -987346660;
			case 4138:
				return -2141149157;
			case 4139:
				return -1053399294;
			case 4140:
				return 371458575;
			case 4141:
				return 1416911728;
			case 4142:
				return 1894250564;
			case 4143:
				return 203301940;
			case 4144:
				return 1613479242;
			case 4145:
				return 1847208808;
			case 4146:
				return 1176805492;
			case 4147:
				return 681141339;
			case 4148:
				return 253209781;
			case 4149:
				return -1424757013;
			case 4150:
				return -2142442799;
			case 4151:
				return 1771180828;
			case 4152:
				return -1857260791;
			case 4153:
				return 55480155;
			case 4154:
				return 942186406;
			case 4155:
				return -1924861449;
			case 4156:
				return 1715823207;
			case 4157:
				return 1845329994;
			case 4158:
				return 1237816835;
			case 4159:
				return -981705557;
			case 4160:
				return 91425386;
			case 4161:
				return 1560191357;
			case 4162:
				return 396308894;
			case 4163:
				return -96860049;
			case 4164:
				return 1096242045;
			case 4165:
				return -160605984;
			case 4166:
				return -1732997673;
			case 4167:
				return -1228656480;
			case 4168:
				return -129959128;
			case 4169:
				return 617200186;
			case 4170:
				return 1377126878;
			case 4171:
				return 1046968383;
			case 4172:
				return -212131365;
			case 4173:
				return 473172620;
			case 4174:
				return -1466634683;
			case 4175:
				return 1011255576;
			case 4176:
				return -1280934893;
			case 4177:
				return 2110206217;
			case 4178:
				return -1999800301;
			case 4179:
				return 1806828653;
			case 4180:
				return -376844874;
			case 4181:
				return -90167861;
			case 4182:
				return -267123022;
			case 4183:
				return -932203738;
			case 4184:
				return -1651419014;
			case 4185:
				return -1401760066;
			case 4186:
				return 797659203;
			case 4187:
				return -1109470813;
			case 4188:
				return -1692500966;
			case 4189:
				return -1040209893;
			case 4190:
				return 93967432;
			case 4191:
				return 1151816609;
			case 4192:
				return 1999553541;
			case 4193:
				return -2072252395;
			case 4194:
				return -1827677399;
			case 4195:
				return -87321066;
			case 4196:
				return 140277730;
			case 4197:
				return 2109232330;
			case 4198:
				return -1643687654;
			case 4199:
				return 218037466;
			case 4200:
				return -975157357;
			case 4201:
				return 1909298657;
			case 4202:
				return -1147140719;
			case 4203:
				return -1545488628;
			case 4204:
				return -16848559;
			case 4205:
				return -1741033802;
			case 4206:
				return -1553812939;
			case 4207:
				return -1010544124;
			case 4208:
				return -281651177;
			case 4209:
				return -1596721785;
			case 4210:
				return 1696004030;
			case 4211:
				return -709056520;
			case 4212:
				return -116316218;
			case 4213:
				return -378039201;
			case 4214:
				return 124757932;
			case 4215:
				return -105798553;
			case 4216:
				return -1086665194;
			case 4217:
				return 1949113658;
			case 4218:
				return -1523046054;
			case 4219:
				return 220334858;
			case 4220:
				return -203804203;
			case 4221:
				return -1903965627;
			case 4222:
				return -744303220;
			case 4223:
				return 480931427;
			case 4224:
				return 68102926;
			case 4225:
				return 336556257;
			case 4226:
				return 1763716249;
			case 4227:
				return 94629394;
			case 4228:
				return 826534200;
			case 4229:
				return -84860917;
			case 4230:
				return -114573418;
			case 4231:
				return 769159816;
			case 4232:
				return -1681677322;
			case 4233:
				return -655350761;
			case 4234:
				return 160919686;
			case 4235:
				return -1259080839;
			case 4236:
				return 888815427;
			case 4237:
				return -396628673;
			case 4238:
				return 1269897867;
			case 4239:
				return -623611269;
			case 4240:
				return -145892619;
			case 4241:
				return 1941280070;
			case 4242:
				return -1806397515;
			case 4243:
				return -1657407004;
			case 4244:
				return 1123955257;
			case 4245:
				return -1201409107;
			case 4246:
				return -119149274;
			case 4247:
				return 655117220;
			case 4248:
				return 70377968;
			case 4249:
				return 1585929500;
			case 4250:
				return 1961611157;
			case 4251:
				return 1105720530;
			case 4252:
				return 1698224187;
			case 4253:
				return 1662103488;
			case 4254:
				return -1708345880;
			case 4255:
				return -874025521;
			case 4256:
				return -699264274;
			case 4257:
				return 1152706980;
			case 4258:
				return -847823026;
			case 4259:
				return 1980454529;
			case 4260:
				return -101158860;
			case 4261:
				return -609042987;
			case 4262:
				return -160233161;
			case 4263:
				return -2045211744;
			case 4264:
				return 1109815442;
			case 4265:
				return -17242186;
			case 4266:
				return 866213025;
			case 4267:
				return -93991804;
			case 4268:
				return 34937916;
			case 4269:
				return 96809980;
			case 4270:
				return 998378570;
			case 4271:
				return 1679131103;
			case 4272:
				return 1127266435;
			case 4273:
				return 1810794494;
			case 4274:
				return 2075366895;
			case 4275:
				return -406845564;
			case 4276:
				return 2116241565;
			case 4277:
				return -800327705;
			case 4278:
				return 846060781;
			case 4279:
				return 1734918270;
			case 4280:
				return 1917811014;
			case 4281:
				return -1657717434;
			case 4282:
				return 1820746414;
			case 4283:
				return -1080990563;
			case 4284:
				return -1603309816;
			case 4285:
				return 1223020622;
			case 4286:
				return -1617483323;
			case 4287:
				return -165191618;
			case 4288:
				return 271839352;
			case 4289:
				return -1919103931;
			case 4290:
				return -1348416676;
			case 4291:
				return 866107234;
			case 4292:
				return 1648963249;
			case 4293:
				return -1287916402;
			case 4294:
				return 1120419167;
			case 4295:
				return 1610349905;
			case 4296:
				return -1047629741;
			case 4297:
				return -2120309033;
			case 4298:
				return -1766119350;
			case 4299:
				return 811599175;
			case 4300:
				return 792017842;
			case 4301:
				return -1483535800;
			case 4302:
				return -1763983749;
			case 4303:
				return -1963434881;
			case 4304:
				return 208985507;
			case 4305:
				return -1511536017;
			case 4306:
				return -1995727118;
			case 4307:
				return 294577146;
			case 4308:
				return -688335981;
			case 4309:
				return 999391329;
			case 4310:
				return 1186911133;
			case 4311:
				return -1852635272;
			case 4312:
				return -1863811448;
			case 4313:
				return -527238551;
			case 4314:
				return 915512969;
			case 4315:
				return 1497930606;
			case 4316:
				return 2135308921;
			case 4317:
				return 2092471499;
			case 4318:
				return -641774848;
			case 4319:
				return 2018241175;
			case 4320:
				return 702099763;
			case 4321:
				return -548246616;
			case 4322:
				return -1759488261;
			case 4323:
				return -112611116;
			case 4324:
				return -1815766317;
			case 4325:
				return -1715042520;
			case 4326:
				return -276196895;
			case 4327:
				return 725162398;
			case 4328:
				return -1632847049;
			case 4329:
				return -338013269;
			case 4330:
				return 249454280;
			case 4331:
				return 927821405;
			case 4332:
				return -13865292;
			case 4333:
				return -634331226;
			case 4334:
				return 1794220146;
			case 4335:
				return 1009655517;
			case 4336:
				return 952357808;
			case 4337:
				return 751446730;
			case 4338:
				return 1814213670;
			case 4339:
				return -39900350;
			case 4340:
				return -1903776188;
			case 4341:
				return -28046091;
			case 4342:
				return 1188702271;
			case 4343:
				return -37511798;
			case 4344:
				return 1134090621;
			case 4345:
				return -604383145;
			case 4346:
				return 1072744937;
			case 4347:
				return 51802513;
			case 4348:
				return -848342201;
			case 4349:
				return 546401976;
			case 4350:
				return 2094733404;
			case 4351:
				return 1741755508;
			case 4352:
				return 246348133;
			case 4353:
				return 1507733864;
			case 4354:
				return 1436936800;
			case 4355:
				return -1838297102;
			case 4356:
				return -1668368270;
			case 4357:
				return -662085934;
			case 4358:
				return 494012117;
			case 4359:
				return -608595574;
			case 4360:
				return 1237586132;
			case 4361:
				return 907876401;
			case 4362:
				return -1612919523;
			case 4363:
				return -1487377938;
			case 4364:
				return -283924386;
			case 4365:
				return -303789602;
			case 4366:
				return 2124870560;
			case 4367:
				return 967738392;
			case 4368:
				return -514463808;
			case 4369:
				return 1169356545;
			case 4370:
				return -345129298;
			case 4371:
				return 315772104;
			case 4372:
				return -814635474;
			case 4373:
				return -322936741;
			case 4374:
				return -256155909;
			case 4375:
				return -1658581211;
			case 4376:
				return 1159263025;
			case 4377:
				return -1724559384;
			case 4378:
				return 2128107338;
			case 4379:
				return -275151786;
			case 4380:
				return -11739290;
			case 4381:
				return -1785154021;
			case 4382:
				return 88214985;
			case 4383:
				return 590577033;
			case 4384:
				return -929766875;
			case 4385:
				return -570458866;
			case 4386:
				return -1927591221;
			case 4387:
				return 2075765705;
			case 4388:
				return 1248819316;
			case 4389:
				return 1509839034;
			case 4390:
				return -1473775082;
			case 4391:
				return 429089805;
			case 4392:
				return -1904807067;
			case 4393:
				return 483498115;
			case 4394:
				return 1170424579;
			case 4395:
				return -516111142;
			case 4396:
				return 1778297235;
			case 4397:
				return -549310467;
			case 4398:
				return -508160357;
			case 4399:
				return 2143613419;
			case 4400:
				return -1969184512;
			case 4401:
				return 929414529;
			case 4402:
				return 1147582722;
			case 4403:
				return -1885825989;
			case 4404:
				return 1818504000;
			case 4405:
				return -1767883506;
			case 4406:
				return -662030118;
			case 4407:
				return -401269895;
			case 4408:
				return -1583986339;
			case 4409:
				return -481352770;
			case 4410:
				return 1492880698;
			case 4411:
				return 74975426;
			case 4412:
				return -1291592992;
			case 4413:
				return 2016900903;
			case 4414:
				return -1397022939;
			case 4415:
				return -1505686364;
			case 4416:
				return -1084065315;
			case 4417:
				return 2074136664;
			case 4418:
				return -1581924092;
			case 4419:
				return 1181658187;
			case 4420:
				return 2088842941;
			case 4421:
				return -359413609;
			case 4422:
				return -877073005;
			case 4423:
				return -1908196239;
			case 4424:
				return -561493738;
			case 4425:
				return 724255336;
			case 4426:
				return -456815544;
			case 4427:
				return 1031019028;
			case 4428:
				return 953295761;
			case 4429:
				return 1322599261;
			case 4430:
				return 144619495;
			case 4431:
				return -820939160;
			case 4432:
				return 133371048;
			case 4433:
				return -1517020313;
			case 4434:
				return -1210204166;
			case 4435:
				return -917249306;
			case 4436:
				return 829043461;
			case 4437:
				return 1130419954;
			case 4438:
				return 1428617854;
			case 4439:
				return 1691654621;
			case 4440:
				return -387931661;
			case 4441:
				return -91667132;
			case 4442:
				return 2126205186;
			case 4443:
				return 654707516;
			case 4444:
				return 1459874615;
			case 4445:
				return 1154336459;
			case 4446:
				return 1922474588;
			case 4447:
				return 1850317250;
			case 4448:
				return 2113091849;
			case 4449:
				return 1816729013;
			case 4450:
				return -1719144398;
			case 4451:
				return -1212732272;
			case 4452:
				return 1418487632;
			case 4453:
				return -287103568;
			case 4454:
				return 938522614;
			case 4455:
				return 1243012162;
			case 4456:
				return -1802473160;
			case 4457:
				return 650384797;
			case 4458:
				return 1896131105;
			case 4459:
				return -2090971436;
			case 4460:
				return -909517910;
			case 4461:
				return -612860153;
			case 4462:
				return 1332733944;
			case 4463:
				return 1326838792;
			case 4464:
				return 1281293608;
			case 4465:
				return -2124323028;
			case 4466:
				return 724155070;
			case 4467:
				return 1643554903;
			case 4468:
				return 1432883002;
			case 4469:
				return -965152422;
			case 4470:
				return -1209576393;
			case 4471:
				return -258521698;
			case 4472:
				return -1703831220;
			case 4473:
				return 500407978;
			case 4474:
				return -967717158;
			case 4475:
				return 507575991;
			case 4476:
				return -335668686;
			case 4477:
				return 529826142;
			case 4478:
				return 223042764;
			case 4479:
				return 555844684;
			case 4480:
				return 794566849;
			case 4481:
				return 1169771899;
			case 4482:
				return 1399777510;
			case 4483:
				return 406745490;
			case 4484:
				return -1010919220;
			case 4485:
				return -886528096;
			case 4486:
				return -664583659;
			case 4487:
				return -289902913;
			case 4488:
				return 302626141;
			case 4489:
				return 542659066;
			case 4490:
				return 895384582;
			case 4491:
				return 1136793805;
			case 4492:
				return 1915909545;
			case 4493:
				return 1116870557;
			case 4494:
				return 886537803;
			case 4495:
				return 588372672;
			case 4496:
				return 290174772;
			case 4497:
				return -7400517;
			case 4498:
				return 1510656153;
			case 4499:
				return -5106715;
			case 4500:
				return 902627358;
			case 4501:
				return 1813146792;
			case 4502:
				return -1556456713;
			case 4503:
				return 1243293286;
			case 4504:
				return 1936023345;
			case 4505:
				return -1207080832;
			case 4506:
				return 1313838342;
			case 4507:
				return -1766152741;
			case 4508:
				return -1426796977;
			case 4509:
				return -253306318;
			case 4510:
				return -2022373552;
			case 4511:
				return -233055072;
			case 4512:
				return -1411011;
			case 4513:
				return -2072444844;
			case 4514:
				return -1730160636;
			case 4515:
				return 13477858;
			case 4516:
				return -294059207;
			case 4517:
				return 1682173645;
			case 4518:
				return 1375095346;
			case 4519:
				return -1134911727;
			case 4520:
				return 718797834;
			case 4521:
				return 12494808;
			case 4522:
				return -293731497;
			case 4523:
				return 958698871;
			case 4524:
				return -1870273381;
			case 4525:
				return 1583611992;
			case 4526:
				return -1372479502;
			case 4527:
				return -1141425283;
			case 4528:
				return -940747927;
			case 4529:
				return -577864021;
			case 4530:
				return -481883620;
			case 4531:
				return -215307805;
			case 4532:
				return 693602511;
			case 4533:
				return 414370589;
			case 4534:
				return 594337937;
			case 4535:
				return -77197180;
			case 4536:
				return 220771337;
			case 4537:
				return 1605785891;
			case 4538:
				return 1921253054;
			case 4539:
				return 998281400;
			case 4540:
				return 1294414853;
			case 4541:
				return 288843105;
			case 4542:
				return 33343212;
			case 4543:
				return -190600134;
			case 4544:
				return -480114249;
			case 4545:
				return -1435265061;
			case 4546:
				return -667585698;
			case 4547:
				return -1381753272;
			case 4548:
				return -605619507;
			case 4549:
				return 1834866334;
			case 4550:
				return -573805146;
			case 4551:
				return -1417508589;
			case 4552:
				return -1184520999;
			case 4553:
				return -2028421060;
			case 4554:
				return 1960352700;
			case 4555:
				return -2107984192;
			case 4556:
				return 1349505771;
			case 4557:
				return 1645049382;
			case 4558:
				return 236722048;
			case 4559:
				return 484095229;
			case 4560:
				return 789174619;
			case 4561:
				return 1094680006;
			case 4562:
				return -1012497770;
			case 4563:
				return -714004949;
			case 4564:
				return -398308403;
			case 4565:
				return -100405424;
			case 4566:
				return -38012118;
			case 4567:
				return -1025702774;
			case 4568:
				return -10485888;
			case 4569:
				return -505133943;
			case 4570:
				return -735172323;
			case 4571:
				return -966226542;
			case 4572:
				return -1233457737;
			case 4573:
				return -1732726221;
			case 4574:
				return -1963583826;
			case 4575:
				return 1244465491;
			case 4576:
				return 1475028175;
			case 4577:
				return 553662202;
			case 4578:
				return 1857770095;
			case 4579:
				return 1165230049;
			case 4580:
				return 322247524;
			case 4581:
				return -675634068;
			case 4582:
				return 630177817;
			case 4583:
				return -486599176;
			case 4584:
				return -2078745223;
			case 4585:
				return -1499454833;
			case 4586:
				return -1735358864;
			case 4587:
				return 189623268;
			case 4588:
				return -48574593;
			case 4589:
				return 1132321860;
			case 4590:
				return -280218654;
			case 4591:
				return 403309917;
			case 4592:
				return 1458477377;
			case 4593:
				return 1766604284;
			case 4594:
				return 1803174488;
			case 4595:
				return 2108745413;
			case 4596:
				return 1321830671;
			case 4597:
				return 1627598210;
			case 4598:
				return 695811691;
			case 4599:
				return 1941033695;
			case 4600:
				return -1428000221;
			case 4601:
				return -768891382;
			case 4602:
				return 410497697;
			case 4603:
				return 197957963;
			case 4604:
				return -1441540645;
			case 4605:
				return -1752944452;
			case 4606:
				return -960524494;
			case 4607:
				return -1263342823;
			case 4608:
				return 1922590433;
			case 4609:
				return -2119267941;
			case 4610:
				return -213521208;
			case 4611:
				return -1660731324;
			case 4612:
				return -1899846717;
			case 4613:
				return -1805472005;
			case 4614:
				return -2044030325;
			case 4615:
				return -1354013492;
			case 4616:
				return -1581364814;
			case 4617:
				return 1450663083;
			case 4618:
				return 651762817;
			case 4619:
				return 682106911;
			case 4620:
				return 979682200;
			case 4621:
				return 1277912869;
			case 4622:
				return -258494477;
			case 4623:
				return 298775137;
			case 4624:
				return 605656822;
			case 4625:
				return 891533578;
			case 4626:
				return 1271251815;
			case 4627:
				return -1455743418;
			case 4628:
				return -679347501;
			case 4629:
				return -579336469;
			case 4630:
				return 185197070;
			case 4631:
				return -1228326514;
			case 4632:
				return -1533864670;
			case 4633:
				return -766840687;
			case 4634:
				return -1071526849;
			case 4635:
				return 796106253;
			case 4636:
				return 305292171;
			case 4637:
				return -1783731583;
			case 4638:
				return -2021929444;
			case 4639:
				return 1768526328;
			case 4640:
				return 1526461725;
			case 4641:
				return -1621787161;
			case 4642:
				return -2137112455;
			case 4643:
				return 1699306928;
			case 4644:
				return -624365446;
			case 4645:
				return -1384442401;
			case 4646:
				return -1085392507;
			case 4647:
				return 871506639;
			case 4648:
				return -2052110776;
			case 4649:
				return -1738708060;
			case 4650:
				return 1783271295;
			case 4651:
				return 64996015;
			case 4652:
				return 75807350;
			case 4653:
				return -155181331;
			case 4654:
				return 405758411;
			case 4655:
				return 142852724;
			case 4656:
				return 1001924832;
			case 4657:
				return 774999507;
			case 4658:
				return 1993645848;
			case 4659:
				return 1620013710;
			case 4660:
				return 875772061;
			case 4661:
				return 1174002730;
			case 4662:
				return -1887539510;
			case 4663:
				return 2103560849;
			case 4664:
				return 1806935861;
			case 4665:
				return 1514013770;
			case 4666:
				return 1214931103;
			case 4667:
				return 910441555;
			case 4668:
				return 847488626;
			case 4669:
				return 1063469105;
			case 4670:
				return 1461809069;
			case 4671:
				return -189584706;
			case 4672:
				return 452622156;
			case 4673:
				return 686297895;
			case 4674:
				return 1050295947;
			case 4675:
				return -1117537232;
			case 4676:
				return -1298762637;
			case 4677:
				return -359898022;
			case 4678:
				return -650460745;
			case 4679:
				return -905895100;
			case 4680:
				return -1129117528;
			case 4681:
				return 878049260;
			case 4682:
				return 570446657;
			case 4683:
				return 398802635;
			case 4684:
				return 1534477070;
			case 4685:
				return -1976754053;
			case 4686:
				return 1089048053;
			case 4687:
				return 1855416656;
			case 4688:
				return 538070115;
			case 4689:
				return 1316104454;
			case 4690:
				return 94214010;
			case 4691:
				return 854094351;
			case 4692:
				return -1446458011;
			case 4693:
				return -1672039807;
			case 4694:
				return 1085012785;
			case 4695:
				return 853565338;
			case 4696:
				return 92734696;
			case 4697:
				return 2009262430;
			case 4698:
				return -137991833;
			case 4699:
				return -370356812;
			case 4700:
				return -253035418;
			case 4701:
				return -612576886;
			case 4702:
				return 1057527972;
			case 4703:
				return 1892645937;
			case 4704:
				return -1801600051;
			case 4705:
				return 1180346184;
			case 4706:
				return -77688495;
			case 4707:
				return 404212419;
			case 4708:
				return 1594087578;
			case 4709:
				return 739176917;
			case 4710:
				return -1952370444;
			case 4711:
				return -1663380633;
			case 4712:
				return 1901298738;
			case 4713:
				return 1134045372;
			case 4714:
				return 1441189209;
			case 4715:
				return 776896017;
			case 4716:
				return 981210756;
			case 4717:
				return 163230954;
			case 4718:
				return 393039951;
			case 4719:
				return 801571026;
			case 4720:
				return 564487319;
			case 4721:
				return -1441665026;
			case 4722:
				return -2059229608;
			case 4723:
				return -678081796;
			case 4724:
				return 2040587860;
			case 4725:
				return 1818414040;
			case 4726:
				return 1713323857;
			case 4727:
				return 1190002927;
			case 4728:
				return -1295722337;
			case 4729:
				return -461194214;
			case 4730:
				return -1892347520;
			case 4731:
				return -1053821579;
			case 4732:
				return 561078420;
			case 4733:
				return 398347566;
			case 4734:
				return 1174743483;
			case 4735:
				return 924421092;
			case 4736:
				return 1817769570;
			case 4737:
				return 1501057185;
			case 4738:
				return -1864974491;
			case 4739:
				return 2109282602;
			case 4740:
				return -1811921480;
			case 4741:
				return 574645074;
			case 4742:
				return 822083793;
			case 4743:
				return 1173760701;
			case 4744:
				return 130860912;
			case 4745:
				return 429058812;
			case 4746:
				return 730664772;
			case 4747:
				return -1714132015;
			case 4748:
				return -2028124573;
			case 4749:
				return 1969660662;
			case 4750:
				return 462614356;
			case 4751:
				return 163400617;
			case 4752:
				return 254558449;
			case 4753:
				return 1085416452;
			case 4754:
				return 986322996;
			case 4755:
				return 1731227904;
			case 4756:
				return 1501025679;
			case 4757:
				return -1982482870;
			case 4758:
				return -1544033650;
			case 4759:
				return -1825945357;
			case 4760:
				return 542025048;
			case 4761:
				return 2062506648;
			case 4762:
				return -1931608459;
			case 4763:
				return 1469354979;
			case 4764:
				return 1766471502;
			case 4765:
				return -1009980334;
			case 4766:
				return -1903787578;
			case 4767:
				return -1008341888;
			case 4768:
				return -582897495;
			case 4769:
				return -293383380;
			case 4770:
				return 1774471600;
			case 4771:
				return 1997169724;
			case 4772:
				return 104530587;
			case 4773:
				return 863657241;
			case 4774:
				return -2067431478;
			case 4775:
				return 1444684408;
			case 4776:
				return -2125153910;
			case 4777:
				return -1826202323;
			case 4778:
				return -322498435;
			case 4779:
				return -17582890;
			case 4780:
				return 1003302524;
			case 4781:
				return 1578988316;
			case 4782:
				return -1278468472;
			case 4783:
				return -1237572760;
			case 4784:
				return 1189456855;
			case 4785:
				return -1467093210;
			case 4786:
				return -1226077215;
			case 4787:
				return -1927694274;
			case 4788:
				return -1682647692;
			case 4789:
				return -503782917;
			case 4790:
				return 271662699;
			case 4791:
				return -966055200;
			case 4792:
				return 1896906141;
			case 4793:
				return 1431520803;
			case 4794:
				return 1283765382;
			case 4795:
				return 986648859;
			case 4796:
				return 1995802927;
			case 4797:
				return -1657481811;
			case 4798:
				return -732904476;
			case 4799:
				return -2003424144;
			case 4800:
				return -737501876;
			case 4801:
				return -1625083010;
			case 4802:
				return -270379781;
			case 4803:
				return 985066151;
			case 4804:
				return 216796946;
			case 4805:
				return -672619256;
			case 4806:
				return 681166445;
			case 4807:
				return 154011534;
			case 4808:
				return -995983489;
			case 4809:
				return -1789386517;
			case 4810:
				return -2057994010;
			case 4811:
				return -151919583;
			case 4812:
				return -373831251;
			case 4813:
				return -603410865;
			case 4814:
				return -801532239;
			case 4815:
				return 1063580934;
			case 4816:
				return -1673217296;
			case 4817:
				return -1309874624;
			case 4818:
				return 2026501115;
			case 4819:
				return 1830608033;
			case 4820:
				return 1466872133;
			case 4821:
				return 1277795003;
			case 4822:
				return 975402671;
			case 4823:
				return 717182951;
			case 4824:
				return -637576971;
			case 4825:
				return -1948304202;
			case 4826:
				return -817446016;
			case 4827:
				return -2129025241;
			case 4828:
				return -1175250727;
			case 4829:
				return -563748418;
			case 4830:
				return 396350513;
			case 4831:
				return -885376153;
			case 4832:
				return 947262620;
			case 4833:
				return 1233696449;
			case 4834:
				return 390517302;
			case 4835:
				return -1082678639;
			case 4836:
				return -1826338325;
			case 4837:
				return -1544426618;
			case 4838:
				return 2034734642;
			case 4839:
				return -34824326;
			case 4840:
				return 1536285807;
			case 4841:
				return 1833074640;
			case 4842:
				return 989109045;
			case 4843:
				return 1087153893;
			case 4844:
				return 808453528;
			case 4845:
				return 1117727350;
			case 4846:
				return -1797370125;
			case 4847:
				return 1995445015;
			case 4848:
				return 1591025974;
			case 4849:
				return 321489368;
			case 4850:
				return 1156345181;
			case 4851:
				return -44605900;
			case 4852:
				return 671986592;
			case 4853:
				return -2063700544;
			case 4854:
				return 1455493446;
			case 4855:
				return -1554929050;
			case 4856:
				return -1179827429;
			case 4857:
				return -280318375;
			case 4858:
				return -578286892;
			case 4859:
				return -2054038811;
			case 4860:
				return 1926215009;
			case 4861:
				return -1476616262;
			case 4862:
				return -1782645953;
			case 4863:
				return 1047121058;
			case 4864:
				return 735348517;
			case 4865:
				return 437969838;
			case 4866:
				return 256167426;
			case 4867:
				return 1840843505;
			case 4868:
				return 1388434691;
			case 4869:
				return 1094201840;
			case 4870:
				return 911088668;
			case 4871:
				return -1263101721;
			case 4872:
				return -1713806543;
			case 4873:
				return -214331352;
			case 4874:
				return 91829415;
			case 4875:
				return -1432977673;
			case 4876:
				return 379324627;
			case 4877:
				return 1212476452;
			case 4878:
				return -1383024986;
			case 4879:
				return -1749251330;
			case 4880:
				return 294059689;
			case 4881:
				return -79834601;
			case 4882:
				return -994581240;
			case 4883:
				return 1902984820;
			case 4884:
				return -1470944193;
			case 4885:
				return 1393135113;
			case 4886:
				return -1646845021;
			case 4887:
				return -1348942042;
			case 4888:
				return 1315227230;
			case 4889:
				return -115663924;
			case 4890:
				return 850923269;
			case 4891:
				return 1031414921;
			case 4892:
				return 1881606594;
			case 4893:
				return -504205993;
			case 4894:
				return -1437237730;
			case 4895:
				return -1794157678;
			case 4896:
				return -1186685956;
			case 4897:
				return -842281770;
			case 4898:
				return 907550053;
			case 4899:
				return 648969874;
			case 4900:
				return 1078064756;
			case 4901:
				return 851630966;
			case 4902:
				return -452935693;
			case 4903:
				return 1253378910;
			case 4904:
				return 2065427499;
			case 4905:
				return 1834471587;
			case 4906:
				return 529184006;
			case 4907:
				return -1579370068;
			case 4908:
				return -1291622233;
			case 4909:
				return 1940220412;
			case 4910:
				return 1699204417;
			case 4911:
				return 661737877;
			case 4912:
				return 1471623712;
			case 4913:
				return -1158088542;
			case 4914:
				return -1388356305;
			case 4915:
				return -1873337505;
			case 4916:
				return -141036718;
			case 4917:
				return 762207998;
			case 4918:
				return -619365811;
			case 4919:
				return -2132834845;
			case 4920:
				return -1365221020;
			case 4921:
				return -463287064;
			case 4922:
				return -1905614599;
			case 4923:
				return 1478538338;
			case 4924:
				return -1159990200;
			case 4925:
				return -1770935436;
			case 4926:
				return -2009854215;
			case 4927:
				return 2058220541;
			case 4928:
				return 1818711920;
			case 4929:
				return 1156647044;
			case 4930:
				return 919039025;
			case 4931:
				return -1296735221;
			case 4932:
				return 952965221;
			case 4933:
				return 1916209976;
			case 4934:
				return -2074235003;
			case 4935:
				return -841661837;
			case 4936:
				return -535632146;
			case 4937:
				return -1007210825;
			case 4938:
				return -843496893;
			case 4939:
				return -535959828;
			case 4940:
				return -100730437;
			case 4941:
				return -886563826;
			case 4942:
				return -715050880;
			case 4943:
				return -975335075;
			case 4944:
				return -677727017;
			case 4945:
				return 584076097;
			case 4946:
				return 892268542;
			case 4947:
				return 19695610;
			case 4948:
				return -1029537244;
			case 4949:
				return -187144561;
			case 4950:
				return 1762643776;
			case 4951:
				return -1682721721;
			case 4952:
				return -1903846933;
			case 4953:
				return -1070826184;
			case 4954:
				return 843571633;
			case 4955:
				return 813030925;
			case 4956:
				return -783055979;
			case 4957:
				return -2013400817;
			case 4958:
				return -1706846822;
			case 4959:
				return -1420216379;
			case 4960:
				return -1114153919;
			case 4961:
				return 806928670;
			case 4962:
				return 1305607312;
			case 4963:
				return 1381074359;
			case 4964:
				return -102837887;
			case 4965:
				return 2058703672;
			case 4966:
				return -1392560181;
			case 4967:
				return -1638589833;
			case 4968:
				return -796786992;
			case 4969:
				return 904939951;
			case 4970:
				return 1750806148;
			case 4971:
				return 1505628490;
			case 4972:
				return -133482211;
			case 4973:
				return 174185930;
			case 4974:
				return 245294660;
			case 4975:
				return -505705226;
			case 4976:
				return 60477556;
			case 4977:
				return 385251115;
			case 4978:
				return -1463838017;
			case 4979:
				return -1194968372;
			case 4980:
				return -1792649029;
			case 4981:
				return -1490355004;
			case 4982:
				return -357792830;
			case 4983:
				return -61331687;
			case 4984:
				return -836646227;
			case 4985:
				return -539726318;
			case 4986:
				return 641628905;
			case 4987:
				return 941694642;
			case 4988:
				return 752613274;
			case 4989:
				return 1516917474;
			case 4990:
				return 1757900700;
			case 4991:
				return 1936721133;
			case 4992:
				return -2129027008;
			case 4993:
				return 552787956;
			case 4994:
				return 780499737;
			case 4995:
				return 1013356251;
			case 4996:
				return 1783723009;
			case 4997:
				return 1486278796;
			case 4998:
				return 1326300538;
			case 4999:
				return 292045356;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 5999)
	{
		switch (iParam0)
		{
			case 5000:
				return 135343998;
			case 5001:
				return -162821133;
			case 5002:
				return -626043725;
			case 5003:
				return -894389066;
			case 5004:
				return 186022919;
			case 5005:
				return -649029508;
			case 5006:
				return -501175708;
			case 5007:
				return -730591477;
			case 5008:
				return -20028481;
			case 5009:
				return -252098539;
			case 5010:
				return -1153606498;
			case 5011:
				return -1920138946;
			case 5012:
				return -1573860179;
			case 5013:
				return -1918524521;
			case 5014:
				return 1092684427;
			case 5015:
				return -1293914612;
			case 5016:
				return 1789222291;
			case 5017:
				return 1421619649;
			case 5018:
				return 137992381;
			case 5019:
				return 2047409242;
			case 5020:
				return 792192995;
			case 5021:
				return 1212291575;
			case 5022:
				return 1299915881;
			case 5023:
				return 1591461674;
			case 5024:
				return 1829921687;
			case 5025:
				return -247174147;
			case 5026:
				return -1769687425;
			case 5027:
				return -1540402732;
			case 5028:
				return -1163821384;
			case 5029:
				return 1927314847;
			case 5030:
				return 1596675637;
			case 5031:
				return 1312863328;
			case 5032:
				return 1965111208;
			case 5033:
				return 1116623487;
			case 5034:
				return 2141703349;
			case 5035:
				return -1919391594;
			case 5036:
				return 807546279;
			case 5037:
				return -38909760;
			case 5038:
				return 1453226655;
			case 5039:
				return 439747023;
			case 5040:
				return -749497385;
			case 5041:
				return 226494511;
			case 5042:
				return 531737746;
			case 5043:
				return 706789744;
			case 5044:
				return 1012884973;
			case 5045:
				return 838258944;
			case 5046:
				return 1135965309;
			case 5047:
				return 2110646473;
			case 5048:
				return 1941525606;
			case 5049:
				return 732906575;
			case 5050:
				return 1602464763;
			case 5051:
				return 422354762;
			case 5052:
				return 990241532;
			case 5053:
				return -218639647;
			case 5054:
				return 616150628;
			case 5055:
				return -528273928;
			case 5056:
				return -2085190255;
			case 5057:
				return 1959258036;
			case 5058:
				return 1734003930;
			case 5059:
				return -1178341037;
			case 5060:
				return -1416997664;
			case 5061:
				return -574310060;
			case 5062:
				return -810541781;
			case 5063:
				return 1917870701;
			case 5064:
				return 1762912266;
			case 5065:
				return 1578127875;
			case 5066:
				return 273757830;
			case 5067:
				return 6461097;
			case 5068:
				return 851245917;
			case 5069:
				return 619274166;
			case 5070:
				return -1256620012;
			case 5071:
				return -1258586144;
			case 5072:
				return -1312716655;
			case 5073:
				return -545004523;
			case 5074:
				return -582099031;
			case 5075:
				return -390990235;
			case 5076:
				return -687975682;
			case 5077:
				return 1948552524;
			case 5078:
				return -1571001925;
			case 5079:
				return -1839609418;
			case 5080:
				return -1028717772;
			case 5081:
				return -186259551;
			case 5082:
				return -432354741;
			case 5083:
				return 411873006;
			case 5084:
				return 162959682;
			case 5085:
				return 1006728663;
			case 5086:
				return 766007589;
			case 5087:
				return 1603157232;
			case 5088:
				return -1061482520;
			case 5089:
				return 1028131104;
			case 5090:
				return 1663063248;
			case 5091:
				return 1912009341;
			case 5092:
				return -2020074049;
			case 5093:
				return 1881468617;
			case 5094:
				return 2046296687;
			case 5095:
				return -1967021054;
			case 5096:
				return -892902010;
			case 5097:
				return 58808057;
			case 5098:
				return -246697330;
			case 5099:
				return -1746075698;
			case 5100:
				return -2054137067;
			case 5101:
				return -1169439601;
			case 5102:
				return -1474289608;
			case 5103:
				return 1790715233;
			case 5104:
				return 1096575841;
			case 5105:
				return 604319923;
			case 5106:
				return 432544825;
			case 5107:
				return -1998030212;
			case 5108:
				return 1856128496;
			case 5109:
				return 2103370605;
			case 5110:
				return 1876412511;
			case 5111:
				return 1629825786;
			case 5112:
				return -294690243;
			case 5113:
				return -524564778;
			case 5114:
				return -755913918;
			case 5115:
				return 482060830;
			case 5116:
				return -1642451751;
			case 5117:
				return -1467727443;
			case 5118:
				return 1733029563;
			case 5119:
				return 1987349772;
			case 5120:
				return 1764586122;
			case 5121:
				return -1256131797;
			case 5122:
				return 1370565705;
			case 5123:
				return 1609812174;
			case 5124:
				return 1928481267;
			case 5125:
				return -2069828272;
			case 5126:
				return 1466143446;
			case 5127:
				return -2048972766;
			case 5128:
				return 1598872374;
			case 5129:
				return -592030257;
			case 5130:
				return -658720261;
			case 5131:
				return -243465948;
			case 5132:
				return -976246326;
			case 5133:
				return -753810354;
			case 5134:
				return -1455558489;
			case 5135:
				return -1165782222;
			case 5136:
				return 1376862787;
			case 5137:
				return 46700294;
			case 5138:
				return 882834098;
			case 5139:
				return 644111933;
			case 5140:
				return 3446312;
			case 5141:
				return 199470470;
			case 5142:
				return 1436762368;
			case 5143:
				return -84032016;
			case 5144:
				return -393207531;
			case 5145:
				return 511806715;
			case 5146:
				return 1767742729;
			case 5147:
				return 1934340325;
			case 5148:
				return 752919564;
			case 5149:
				return -1842240289;
			case 5150:
				return -2112813918;
			case 5151:
				return -1873370835;
			case 5152:
				return 479993333;
			case 5153:
				return -1671455390;
			case 5154:
				return -886932761;
			case 5155:
				return -9509913;
			case 5156:
				return -785184912;
			case 5157:
				return -488035620;
			case 5158:
				return -1054682518;
			case 5159:
				return 1073106963;
			case 5160:
				return 783822231;
			case 5161:
				return 2084220232;
			case 5162:
				return 1125628675;
			case 5163:
				return -1885645815;
			case 5164:
				return 1459708630;
			case 5165:
				return 893853538;
			case 5166:
				return -131750628;
			case 5167:
				return 1182122431;
			case 5168:
				return 272225604;
			case 5169:
				return 197321496;
			case 5170:
				return -1845825658;
			case 5171:
				return 1604913891;
			case 5172:
				return 1962358143;
			case 5173:
				return -1020571158;
			case 5174:
				return 838315909;
			case 5175:
				return 2144193328;
			case 5176:
				return -1836322644;
			case 5177:
				return -689657715;
			case 5178:
				return 676514664;
			case 5179:
				return 199561869;
			case 5180:
				return 496940544;
			case 5181:
				return 1855117287;
			case 5182:
				return -2141914261;
			case 5183:
				return 1378557720;
			case 5184:
				return 1424630934;
			case 5185:
				return -1101814081;
			case 5186:
				return -1334473981;
			case 5187:
				return -488214556;
			case 5188:
				return 1627778077;
			case 5189:
				return 1397870773;
			case 5190:
				return 97301936;
			case 5191:
				return -133981666;
			case 5192:
				return -1706205521;
			case 5193:
				return 1877339773;
			case 5194:
				return 1512555265;
			case 5195:
				return 1434171817;
			case 5196:
				return 1170807364;
			case 5197:
				return 1465040219;
			case 5198:
				return 1101042167;
			case 5199:
				return 882964468;
			case 5200:
				return 215066710;
			case 5201:
				return 253815315;
			case 5202:
				return -514191738;
			case 5203:
				return -200526870;
			case 5204:
				return -702253077;
			case 5205:
				return -1087354365;
			case 5206:
				return -1183269228;
			case 5207:
				return -1563717318;
			case 5208:
				return -620396111;
			case 5209:
				return 1515697214;
			case 5210:
				return 1755730139;
			case 5211:
				return 2126216453;
			case 5212:
				return -1929307760;
			case 5213:
				return -1169132502;
			case 5214:
				return -929886033;
			case 5215:
				return -555991743;
			case 5216:
				return -317335116;
			case 5217:
				return -980124953;
			case 5218:
				return -1219109270;
			case 5219:
				return 926834229;
			case 5220:
				return 570176433;
			case 5221:
				return 333092718;
			case 5222:
				return -56661768;
			case 5223:
				return 328570576;
			case 5224:
				return -53974730;
			case 5225:
				return -74131770;
			case 5226:
				return 156725835;
			case 5227:
				return 535601005;
			case 5228:
				return 774257632;
			case 5229:
				return 661409921;
			case 5230:
				return -490191046;
			case 5231:
				return 217619354;
			case 5232:
				return -530496920;
			case 5233:
				return -382821196;
			case 5234:
				return 1769807183;
			case 5235:
				return 1927753763;
			case 5236:
				return -968861992;
			case 5237:
				return -1132106762;
			case 5238:
				return -1909223597;
			case 5239:
				return -673635683;
			case 5240:
				return -1447147928;
			case 5241:
				return 1394473283;
			case 5242:
				return 1503069749;
			case 5243:
				return 1738646090;
			case 5244:
				return 1668684263;
			case 5245:
				return -54830229;
			case 5246:
				return -1084690014;
			case 5247:
				return 1780795199;
			case 5248:
				return 2077682339;
			case 5249:
				return -1658511610;
			case 5250:
				return -1494207844;
			case 5251:
				return -1341143845;
			case 5252:
				return -908724121;
			case 5253:
				return 1414368592;
			case 5254:
				return 1573298242;
			case 5255:
				return 808946355;
			case 5256:
				return 1710880311;
			case 5257:
				return -431982898;
			case 5258:
				return -730082491;
			case 5259:
				return -1971372223;
			case 5260:
				return -1656789823;
			case 5261:
				return -1430071127;
			case 5262:
				return -1191643883;
			case 5263:
				return -2026434158;
			case 5264:
				return 1705365104;
			case 5265:
				return 1974431363;
			case 5266:
				return 1139837702;
			case 5267:
				return -130865627;
			case 5268:
				return -429620600;
			case 5269:
				return 773296609;
			case 5270:
				return 1667890309;
			case 5271:
				return 473099784;
			case 5272:
				return -417037332;
			case 5273:
				return -317571139;
			case 5274:
				return 301009282;
			case 5275:
				return 1199404186;
			case 5276:
				return -1539887608;
			case 5277:
				return -1812558457;
			case 5278:
				return 18180035;
			case 5279:
				return 1829127786;
			case 5280:
				return -1307225977;
			case 5281:
				return -915964117;
			case 5282:
				return 1132819281;
			case 5283:
				return 301371444;
			case 5284:
				return 1595484788;
			case 5285:
				return 1991026974;
			case 5286:
				return -948909403;
			case 5287:
				return -1304387503;
			case 5288:
				return 75220166;
			case 5289:
				return 382069082;
			case 5290:
				return -387641959;
			case 5291:
				return 1200388119;
			case 5292:
				return 44985948;
			case 5293:
				return -454151460;
			case 5294:
				return 817220090;
			case 5295:
				return 379295174;
			case 5296:
				return -865697443;
			case 5297:
				return -1279620091;
			case 5298:
				return -1079008273;
			case 5299:
				return -2006076060;
			case 5300:
				return -500012812;
			case 5301:
				return 1088890500;
			case 5302:
				return -1689527476;
			case 5303:
				return 2082085198;
			case 5304:
				return -1907114559;
			case 5305:
				return 204355960;
			case 5306:
				return 510647803;
			case 5307:
				return 582280837;
			case 5308:
				return 888933139;
			case 5309:
				return 1999601735;
			case 5310:
				return -1378357869;
			case 5311:
				return -1149204252;
			case 5312:
				return -918903720;
			case 5313:
				return -150142980;
			case 5314:
				return 155034777;
			case 5315:
				return -1503547037;
			case 5316:
				return 1246951747;
			case 5317:
				return 478485928;
			case 5318:
				return -555507098;
			case 5319:
				return 824821489;
			case 5320:
				return -1984890882;
			case 5321:
				return 409361553;
			case 5322:
				return -955237914;
			case 5323:
				return 1837532904;
			case 5324:
				return -1732715188;
			case 5325:
				return -783233433;
			case 5326:
				return 2133502512;
			case 5327:
				return 553014285;
			case 5328:
				return 215755737;
			case 5329:
				return -22442124;
			case 5330:
				return 1512523378;
			case 5331:
				return -1932416058;
			case 5332:
				return 1404418447;
			case 5333:
				return -2026825141;
			case 5334:
				return 1351101690;
			case 5335:
				return -1565404852;
			case 5336:
				return 1842079617;
			case 5337:
				return 1014826212;
			case 5338:
				return 155229800;
			case 5339:
				return 196967420;
			case 5340:
				return 1779087517;
			case 5341:
				return -1141252998;
			case 5342:
				return -961023498;
			case 5343:
				return -1737550491;
			case 5344:
				return 608513291;
			case 5345:
				return -1031096431;
			case 5346:
				return -1336339666;
			case 5347:
				return -432570646;
			case 5348:
				return -737748343;
			case 5349:
				return -419954581;
			case 5350:
				return 495545741;
			case 5351:
				return 454405754;
			case 5352:
				return -139696216;
			case 5353:
				return -1977742099;
			case 5354:
				return -745234567;
			case 5355:
				return -506315788;
			case 5356:
				return -1275961195;
			case 5357:
				return -338763698;
			case 5358:
				return -497169044;
			case 5359:
				return 1649626453;
			case 5360:
				return 1352772082;
			case 5361:
				return -1249938512;
			case 5362:
				return -1420533926;
			case 5363:
				return -1806268721;
			case 5364:
				return -616524638;
			case 5365:
				return -841319978;
			case 5366:
				return -1430965372;
			case 5367:
				return -1668835543;
			case 5368:
				return -967054639;
			case 5369:
				return -1730008197;
			case 5370:
				return 1184270053;
			case 5371:
				return -1280167980;
			case 5372:
				return -128960241;
			case 5373:
				return -1549536595;
			case 5374:
				return 4745637;
			case 5375:
				return -409211474;
			case 5376:
				return -246808310;
			case 5377:
				return 1953793889;
			case 5378:
				return -1657939757;
			case 5379:
				return -1345290728;
			case 5380:
				return -1164799076;
			case 5381:
				return 899778996;
			case 5382:
				return 1177299657;
			case 5383:
				return -1367827440;
			case 5384:
				return -1720133415;
			case 5385:
				return -1200571014;
			case 5386:
				return 1027350843;
			case 5387:
				return -2105926175;
			case 5388:
				return -1387498619;
			case 5389:
				return -1626941702;
			case 5390:
				return -877907988;
			case 5391:
				return 768275496;
			case 5392:
				return -419436909;
			case 5393:
				return -716422356;
			case 5394:
				return 12950046;
			case 5395:
				return -657887287;
			case 5396:
				return -1389052187;
			case 5397:
				return 1969824553;
			case 5398:
				return 1738114954;
			case 5399:
				return -761176680;
			case 5400:
				return -1131662994;
			case 5401:
				return -1456141632;
			case 5402:
				return 450326019;
			case 5403:
				return 193777518;
			case 5404:
				return -180247848;
			case 5405:
				return -2002950731;
			case 5406:
				return -1584017982;
			case 5407:
				return -2134021286;
			case 5408:
				return 1501994189;
			case 5409:
				return 1668264095;
			case 5410:
				return 757449736;
			case 5411:
				return -671802968;
			case 5412:
				return 296422675;
			case 5413:
				return 507913801;
			case 5414:
				return 75395770;
			case 5415:
				return -1261287885;
			case 5416:
				return -1445285820;
			case 5417:
				return -1586782362;
			case 5418:
				return 1482067261;
			case 5419:
				return 2094978637;
			case 5420:
				return 871810166;
			case 5421:
				return 1650630997;
			case 5422:
				return -117584207;
			case 5423:
				return 649112086;
			case 5424:
				return -1860731446;
			case 5425:
				return 2052935766;
			case 5426:
				return 1169647367;
			case 5427:
				return -259146571;
			case 5428:
				return 695316092;
			case 5429:
				return 335250320;
			case 5430:
				return -154253002;
			case 5431:
				return -1453052317;
			case 5432:
				return -633696241;
			case 5433:
				return 218658218;
			case 5434:
				return 960187631;
			case 5435:
				return -405689827;
			case 5436:
				return 369362561;
			case 5437:
				return 1165944182;
			case 5438:
				return 24599912;
			case 5439:
				return -1362610165;
			case 5440:
				return -585198409;
			case 5441:
				return 205746944;
			case 5442:
				return 1631460580;
			case 5443:
				return -1893467985;
			case 5444:
				return -517561221;
			case 5445:
				return -748910361;
			case 5446:
				return -424726648;
			case 5447:
				return -721056715;
			case 5448:
				return 173405909;
			case 5449:
				return 211358442;
			case 5450:
				return 2139289788;
			case 5451:
				return 1889884929;
			case 5452:
				return -711711519;
			case 5453:
				return -1017020292;
			case 5454:
				return 969502026;
			case 5455:
				return 671074743;
			case 5456:
				return -1931832469;
			case 5457:
				return 1802949143;
			case 5458:
				return 2061070556;
			case 5459:
				return 1493314862;
			case 5460:
				return -1469559815;
			case 5461:
				return -1264688027;
			case 5462:
				return -1542667450;
			case 5463:
				return -1042415896;
			case 5464:
				return -1884743041;
			case 5465:
				return -346903805;
			case 5466:
				return 1089689155;
			case 5467:
				return 1328083630;
			case 5468:
				return 612212056;
			case 5469:
				return 850147765;
			case 5470:
				return -2013469607;
			case 5471:
				return -1559487905;
			case 5472:
				return -105461841;
			case 5473:
				return -1103578254;
			case 5474:
				return -880290288;
			case 5475:
				return -648646227;
			case 5476:
				return 1730907481;
			case 5477:
				return 1960913092;
			case 5478:
				return -2108963943;
			case 5479:
				return 215996611;
			case 5480:
				return 456455533;
			case 5481:
				return 695374312;
			case 5482:
				return -1691405324;
			case 5483:
				return 1825068839;
			case 5484:
				return -1098188117;
			case 5485:
				return -1875173876;
			case 5486:
				return -1476211297;
			case 5487:
				return -1202622916;
			case 5488:
				return -870804022;
			case 5489:
				return -707876554;
			case 5490:
				return -274965295;
			case 5491:
				return -84315253;
			case 5492:
				return -1911088420;
			case 5493:
				return 2145746553;
			case 5494:
				return -1498723324;
			case 5495:
				return -1853808208;
			case 5496:
				return -989951830;
			case 5497:
				return -1228870609;
			case 5498:
				return -89820169;
			case 5499:
				return -332474614;
			case 5500:
				return -243441237;
			case 5501:
				return -482687706;
			case 5502:
				return -844914784;
			case 5503:
				return -612680881;
			case 5504:
				return -381593893;
			case 5505:
				return -152309200;
			case 5506:
				return -526563953;
			case 5507:
				return -1335625216;
			case 5508:
				return -1632512356;
			case 5509:
				return -1913440993;
			case 5510:
				return -102560511;
			case 5511:
				return 1748920758;
			case 5512:
				return 1433945130;
			case 5513:
				return 1157047080;
			case 5514:
				return -1556553858;
			case 5515:
				return 75443719;
			case 5516:
				return -237991766;
			case 5517:
				return 537519388;
			case 5518:
				return 261375025;
			case 5519:
				return -1110171470;
			case 5520:
				return -1159128356;
			case 5521:
				return -380602454;
			case 5522:
				return -1199532529;
			case 5523:
				return -416582812;
			case 5524:
				return 7638878;
			case 5525:
				return 1192664229;
			case 5526:
				return 888600674;
			case 5527:
				return 1670600094;
			case 5528:
				return 1356771381;
			case 5529:
				return -1601417325;
			case 5530:
				return -1904432268;
			case 5531:
				return -1137899816;
			case 5532:
				return -1446485493;
			case 5533:
				return -245272256;
			case 5534:
				return 1498693640;
			case 5535:
				return -1187840060;
			case 5536:
				return -2032067807;
			case 5537:
				return -1638348276;
			case 5538:
				return -2069784930;
			case 5539:
				return -1073476250;
			case 5540:
				return -834754085;
			case 5541:
				return -432121382;
			case 5542:
				return -344759228;
			case 5543:
				return 28971217;
			case 5544:
				return 1119000089;
			case 5545:
				return 810414412;
			case 5546:
				return 100965566;
			case 5547:
				return -204801973;
			case 5548:
				return -443589676;
			case 5549:
				return -75463450;
			case 5550:
				return 781642514;
			case 5551:
				return 1759764399;
			case 5552:
				return 2049114669;
			case 5553:
				return 1168677177;
			case 5554:
				return 2010807708;
			case 5555:
				return -1380357803;
			case 5556:
				return -1624585160;
			case 5557:
				return -1993105334;
			case 5558:
				return 1398272184;
			case 5559:
				return -1471865158;
			case 5560:
				return 2038284584;
			case 5561:
				return -1021651867;
			case 5562:
				return -1253525311;
			case 5563:
				return 1319201648;
			case 5564:
				return 1085788061;
			case 5565:
				return 1778197031;
			case 5566:
				return 1556514746;
			case 5567:
				return 1436842350;
			case 5568:
				return -1760366546;
			case 5569:
				return -397931994;
			case 5570:
				return 1591080768;
			case 5571:
				return 1991288565;
			case 5572:
				return 1684669032;
			case 5573:
				return 840801744;
			case 5574:
				return -1614743275;
			case 5575:
				return -498729438;
			case 5576:
				return -796108113;
			case 5577:
				return 2127083305;
			case 5578:
				return 1603401144;
			case 5579:
				return -58887652;
			case 5580:
				return -618254482;
			case 5581:
				return -1646676778;
			case 5582:
				return -1953230773;
			case 5583:
				return -1282154422;
			case 5584:
				return -1301750284;
			case 5585:
				return 1478404449;
			case 5586:
				return 1189906173;
			case 5587:
				return 1854428752;
			case 5588:
				return 399189939;
			case 5589:
				return 625557869;
			case 5590:
				return 931325408;
			case 5591:
				return -772662592;
			case 5592:
				return -717676210;
			case 5593:
				return -413219431;
			case 5594:
				return -123934699;
			case 5595:
				return -2001041330;
			case 5596:
				return -1694683949;
			case 5597:
				return -1104317645;
			case 5598:
				return 690931800;
			case 5599:
				return 1947203311;
			case 5600:
				return 1641173620;
			case 5601:
				return -1801930752;
			case 5602:
				return -2041046145;
			case 5603:
				return -1427807079;
			case 5604:
				return -1730297718;
			case 5605:
				return -846321202;
			case 5606:
				return -1076392351;
			case 5607:
				return 829911463;
			case 5608:
				return 222505543;
			case 5609:
				return -2041902346;
			case 5610:
				return 572932774;
			case 5611:
				return 415838188;
			case 5612:
				return 93555073;
			case 5613:
				return -69896699;
			case 5614:
				return 2071590220;
			case 5615:
				return 1772048791;
			case 5616:
				return 1592605747;
			case 5617:
				return 1295620300;
			case 5618:
				return 967537384;
			case 5619:
				return 1526560414;
			case 5620:
				return -1126286754;
			case 5621:
				return -825106875;
			case 5622:
				return -1768690230;
			case 5623:
				return -1610809188;
			case 5624:
				return -105303021;
			case 5625:
				return 361458615;
			case 5626:
				return -547520676;
			case 5627:
				return -383479062;
			case 5628:
				return 1968384553;
			case 5629:
				return -532373162;
			case 5630:
				return 1607278701;
			case 5631:
				return 1384547808;
			case 5632:
				return 1149463002;
			case 5633:
				return 909757767;
			case 5634:
				return -1919550470;
			case 5635:
				return 2126274119;
			case 5636:
				return 1613504807;
			case 5637:
				return 1221901655;
			case 5638:
				return -288650950;
			case 5639:
				return 554593727;
			case 5640:
				return 1401213623;
			case 5641:
				return 93304514;
			case 5642:
				return -405898432;
			case 5643:
				return -636166195;
			case 5644:
				return 207832169;
			case 5645:
				return -310160986;
			case 5646:
				return -1739380925;
			case 5647:
				return -1859643155;
			case 5648:
				return 646005665;
			case 5649:
				return 406497044;
			case 5650:
				return -905639254;
			case 5651:
				return 1002991151;
			case 5652:
				return 110691277;
			case 5653:
				return -1544415236;
			case 5654:
				return -1858899333;
			case 5655:
				return 220031569;
			case 5656:
				return -77969717;
			case 5657:
				return -392453810;
			case 5658:
				return -703890386;
			case 5659:
				return 1377465414;
			case 5660:
				return 1120753068;
			case 5661:
				return -542471226;
			case 5662:
				return -185354664;
			case 5663:
				return -1008937941;
			case 5664:
				return -770543466;
			case 5665:
				return 1382597333;
			case 5666:
				return 1129882805;
			case 5667:
				return 883033928;
			case 5668:
				return -1225782302;
			case 5669:
				return 1377331935;
			case 5670:
				return -136923555;
			case 5671:
				return 98783862;
			case 5672:
				return 363196923;
			case 5673:
				return 547298053;
			case 5674:
				return 796506298;
			case 5675:
				return -2078055928;
			case 5676:
				return 855162804;
			case 5677:
				return -1550515886;
			case 5678:
				return -699406649;
			case 5679:
				return -1870177465;
			case 5680:
				return 1121730546;
			case 5681:
				return -1606199964;
			case 5682:
				return -1366953495;
			case 5683:
				return 1493223136;
			case 5684:
				return 1732731757;
			case 5685:
				return -993297765;
			case 5686:
				return 1243186493;
			case 5687:
				return 1548003731;
			case 5688:
				return 1853771270;
			case 5689:
				return -456994495;
			case 5690:
				return -1627994710;
			case 5691:
				return -2009556946;
			case 5692:
				return 849308921;
			case 5693:
				return 1779645445;
			case 5694:
				return 2112644023;
			case 5695:
				return -909575313;
			case 5696:
				return 1534435018;
			case 5697:
				return -83784299;
			case 5698:
				return 1681940497;
			case 5699:
				return 1436861146;
			case 5700:
				return 1192175023;
			case 5701:
				return -503349107;
			case 5702:
				return 424603435;
			case 5703:
				return 1033779145;
			case 5704:
				return 734729251;
			case 5705:
				return -1451110845;
			case 5706:
				return 1302861393;
			case 5707:
				return 2145483459;
			case 5708:
				return 1916198766;
			case 5709:
				return 229873288;
			case 5710:
				return 1056766234;
			case 5711:
				return 1993402593;
			case 5712:
				return 1754221662;
			case 5713:
				return -729270013;
			case 5714:
				return 1899518934;
			case 5715:
				return 1595044813;
			case 5716:
				return 968771889;
			case 5717:
				return 1680224254;
			case 5718:
				return -885835862;
			case 5719:
				return 207247924;
			case 5720:
				return 1570272012;
			case 5721:
				return 1275219936;
			case 5722:
				return 961325685;
			case 5723:
				return 657819207;
			case 5724:
				return -1834132171;
			case 5725:
				return -1605240726;
			case 5726:
				return -1895836218;
			case 5727:
				return 2092380469;
			case 5728:
				return -588289269;
			case 5729:
				return -282128498;
			case 5730:
				return 1616769530;
			case 5731:
				return 1924568735;
			case 5732:
				return 744622595;
			case 5733:
				return 1059041150;
			case 5734:
				return 155468744;
			case 5735:
				return 462055508;
			case 5736:
				return -457359897;
			case 5737:
				return -838922133;
			case 5738:
				return 117113446;
			case 5739:
				return 960095971;
			case 5740:
				return 1803504493;
			case 5741:
				return 499396600;
			case 5742:
				return 1268124571;
			case 5743:
				return 2102390542;
			case 5744:
				return -1367322254;
			case 5745:
				return -192487782;
			case 5746:
				return -212874432;
			case 5747:
				return 677328230;
			case 5748:
				return 374247749;
			case 5749:
				return 1285357025;
			case 5750:
				return 1021009502;
			case 5751:
				return 1585619368;
			case 5752:
				return 1321730611;
			case 5753:
				return -2061865257;
			case 5754:
				return 1933757224;
			case 5755:
				return -222581724;
			case 5756:
				return -873215733;
			case 5757:
				return -569742024;
			case 5758:
				return 1190838043;
			case 5759:
				return 1237632175;
			case 5760:
				return 578221584;
			case 5761:
				return 895884274;
			case 5762:
				return 2118397357;
			case 5763:
				return -1596165411;
			case 5764:
				return 1504732294;
			case 5765:
				return -298873246;
			case 5766:
				return -512804908;
			case 5767:
				return -732357208;
			case 5768:
				return 82509515;
			case 5769:
				return -1188993247;
			case 5770:
				return -1814881147;
			case 5771:
				return 1554329130;
			case 5772:
				return -1420735615;
			case 5773:
				return 7271839;
			case 5774:
				return -835514072;
			case 5775:
				return -1290346928;
			case 5776:
				return -689399160;
			case 5777:
				return -61020816;
			case 5778:
				return -358399491;
			case 5779:
				return 534031451;
			case 5780:
				return 236062934;
			case 5781:
				return 528198573;
			case 5782:
				return 1153234479;
			case 5783:
				return 878531952;
			case 5784:
				return 1654141413;
			case 5785:
				return 175439924;
			case 5786:
				return -821566974;
			case 5787:
				return -1587411273;
			case 5788:
				return -1281283275;
			case 5789:
				return -2049552480;
			case 5790:
				return 164845464;
			case 5791:
				return 906899469;
			case 5792:
				return -323314329;
			case 5793:
				return 452491746;
			case 5794:
				return 1124026863;
			case 5795:
				return 630951416;
			case 5796:
				return 1288539013;
			case 5797:
				return 1519036159;
			case 5798:
				return 1757954938;
			case 5799:
				return 1594044396;
			case 5800:
				return 1824639849;
			case 5801:
				return 2009260395;
			case 5802:
				return -2005630258;
			case 5803:
				return -1290479602;
			case 5804:
				return -1042877038;
			case 5805:
				return -1645105388;
			case 5806:
				return -2135130028;
			case 5807:
				return 2140306944;
			case 5808:
				return 1843452573;
			case 5809:
				return 1547810655;
			case 5810:
				return 1250104290;
			case 5811:
				return -1685770707;
			case 5812:
				return -1437938760;
			case 5813:
				return -1216616934;
			case 5814:
				return 1172669167;
			case 5815:
				return -2067495908;
			case 5816:
				return -1825562381;
			case 5817:
				return -1449767481;
			case 5818:
				return -1207375188;
			case 5819:
				return -1647200706;
			case 5820:
				return -326642775;
			case 5821:
				return 39714645;
			case 5822:
				return -600231156;
			case 5823:
				return 846716808;
			case 5824:
				return 1076329191;
			case 5825:
				return -2058222569;
			case 5826:
				return -235020095;
			case 5827:
				return -448641206;
			case 5828:
				return 529513452;
			case 5829:
				return 290135907;
			case 5830:
				return -83037465;
			case 5831:
				return -288400788;
			case 5832:
				return 1453304331;
			case 5833:
				return 1223954100;
			case 5834:
				return 859431744;
			case 5835:
				return 367831530;
			case 5836:
				return 218356006;
			case 5837:
				return -12436061;
			case 5838:
				return -508558721;
			case 5839:
				return -739940630;
			case 5840:
				return 848929861;
			case 5841:
				return 618891481;
			case 5842:
				return 169562953;
			case 5843:
				return -59459588;
			case 5844:
				return 2079405811;
			case 5845:
				return -116933198;
			case 5846:
				return 1829050720;
			case 5847:
				return 188503504;
			case 5848:
				return -125849513;
			case 5849:
				return 919809277;
			case 5850:
				return 640650166;
			case 5851:
				return -943763769;
			case 5852:
				return -1250186688;
			case 5853:
				return -478542260;
			case 5854:
				return -769694841;
			case 5855:
				return -938616416;
			case 5856:
				return 1096287207;
			case 5857:
				return 1394190186;
			case 5858:
				return 763059246;
			case 5859:
				return 808739232;
			case 5860:
				return -1705560604;
			case 5861:
				return -1418897392;
			case 5862:
				return 1706642601;
			case 5863:
				return 1996418868;
			case 5864:
				return -756111598;
			case 5865:
				return 750669892;
			case 5866:
				return 1751807173;
			case 5867:
				return 1449447610;
			case 5868:
				return 1284947230;
			case 5869:
				return 975837253;
			case 5870:
				return -1586633005;
			case 5871:
				return -1866840724;
			case 5872:
				return -2050478200;
			case 5873:
				return 1945209819;
			case 5874:
				return -1618484465;
			case 5875:
				return 1236557937;
			case 5876:
				return 1680326131;
			case 5877:
				return 2100752405;
			case 5878:
				return 1256033123;
			case 5879:
				return 567064894;
			case 5880:
				return 1945755035;
			case 5881:
				return 681395935;
			case 5882:
				return 300685693;
			case 5883:
				return -859369676;
			case 5884:
				return -698801576;
			case 5885:
				return 1278185827;
			case 5886:
				return -1524987139;
			case 5887:
				return -1285183597;
			case 5888:
				return 383151731;
			case 5889:
				return 617155160;
			case 5890:
				return -335669053;
			case 5891:
				return -94685827;
			case 5892:
				return 2109357109;
			case 5893:
				return -1947019098;
			case 5894:
				return 1397450584;
			case 5895:
				return 1864768501;
			case 5896:
				return -279465196;
			case 5897:
				return 1160208054;
			case 5898:
				return 214068713;
			case 5899:
				return -627275362;
			case 5900:
				return 2017182942;
			case 5901:
				return -2039783107;
			case 5902:
				return 1434976119;
			case 5903:
				return 599006160;
			case 5904:
				return 1680809145;
			case 5905:
				return -85374125;
			case 5906:
				return 942550234;
			case 5907:
				return -668930903;
			case 5908:
				return -1453191380;
			case 5909:
				return -1212699689;
			case 5910:
				return -1919658079;
			case 5911:
				return 286940827;
			case 5912:
				return 509081878;
			case 5913:
				return -194403014;
			case 5914:
				return -1028931137;
			case 5915:
				return 8339013;
			case 5916:
				return 834850569;
			case 5917:
				return -1792961083;
			case 5918:
				return -1080497485;
			case 5919:
				return -123282226;
			case 5920:
				return -1562103478;
			case 5921:
				return -2041907172;
			case 5922:
				return 2022530209;
			case 5923:
				return -1308930184;
			case 5924:
				return 1544201116;
			case 5925:
				return -941622175;
			case 5926:
				return 1253389015;
			case 5927:
				return 551739187;
			case 5928:
				return 791116732;
			case 5929:
				return -1387726843;
			case 5930:
				return 1944618309;
			case 5931:
				return -2117984008;
			case 5932:
				return 1477496206;
			case 5933:
				return -698201545;
			case 5934:
				return -1119610885;
			case 5935:
				return 359483172;
			case 5936:
				return 343866930;
			case 5937:
				return 44849805;
			case 5938:
				return -1377718023;
			case 5939:
				return -1625943198;
			case 5940:
				return -407231331;
			case 5941:
				return -711163806;
			case 5942:
				return 357433284;
			case 5943:
				return 30365895;
			case 5944:
				return -2105943522;
			case 5945:
				return 1969504531;
			case 5946:
				return -277263571;
			case 5947:
				return 486647353;
			case 5948:
				return -754150828;
			case 5949:
				return 47935985;
			case 5950:
				return 1756970407;
			case 5951:
				return 1441437706;
			case 5952:
				return 203818114;
			case 5953:
				return 1004069863;
			case 5954:
				return 113408435;
			case 5955:
				return 1732034074;
			case 5956:
				return -487970312;
			case 5957:
				return 875318395;
			case 5958:
				return -1960740252;
			case 5959:
				return 1563991699;
			case 5960:
				return 662057743;
			case 5961:
				return 2030655028;
			case 5962:
				return -1806005034;
			case 5963:
				return -1482902694;
			case 5964:
				return -1330231923;
			case 5965:
				return 1100348102;
			case 5966:
				return -2070101105;
			case 5967:
				return 865182074;
			case 5968:
				return 684755960;
			case 5969:
				return -1006648760;
			case 5970:
				return 2060070878;
			case 5971:
				return 1737263459;
			case 5972:
				return -1641220445;
			case 5973:
				return 484537370;
			case 5974:
				return 186568853;
			case 5975:
				return 719784629;
			case 5976:
				return -519894099;
			case 5977:
				return 1166668376;
			case 5978:
				return -676096339;
			case 5979:
				return 705641315;
			case 5980:
				return 1010884550;
			case 5981:
				return -1838543845;
			case 5982:
				return -1655692825;
			case 5983:
				return -403949794;
			case 5984:
				return 10709132;
			case 5985:
				return -1143644427;
			case 5986:
				return -554030930;
			case 5987:
				return -1434234958;
			case 5988:
				return -619663164;
			case 5989:
				return -848554629;
			case 5990:
				return 914712492;
			case 5991:
				return 818502708;
			case 5992:
				return 339223314;
			case 5993:
				return 107317101;
			case 5994:
				return 2006739417;
			case 5995:
				return 1780272858;
			case 5996:
				return 1476864923;
			case 5997:
				return 2092360591;
			case 5998:
				return -1636456692;
			case 5999:
				return -321207335;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 6999)
	{
		switch (iParam0)
		{
			case 6000:
				return -1040617965;
			case 6001:
				return -1872065802;
			case 6002:
				return 932337991;
			case 6003:
				return 1172600299;
			case 6004:
				return -76717826;
			case 6005:
				return -358334612;
			case 6006:
				return -173648764;
			case 6007:
				return -1073504989;
			case 6008:
				return -307595152;
			case 6009:
				return -605006596;
			case 6010:
				return 220215131;
			case 6011:
				return 2035290037;
			case 6012:
				return -1490228370;
			case 6013:
				return -1796290830;
			case 6014:
				return -1037786779;
			case 6015:
				return 1638752372;
			case 6016:
				return 1921974571;
			case 6017:
				return 5344312;
			case 6018:
				return 738452380;
			case 6019:
				return -904454184;
			case 6020:
				return -230068164;
			case 6021:
				return 747922641;
			case 6022:
				return -692274909;
			case 6023:
				return 285257130;
			case 6024:
				return -47282682;
			case 6025:
				return 1918136404;
			case 6026:
				return -762891192;
			case 6027:
				return 1795208067;
			case 6028:
				return 1011471894;
			case 6029:
				return 1941882111;
			case 6030:
				return 1624088349;
			case 6031:
				return 559226925;
			case 6032:
				return -208517976;
			case 6033:
				return 1174006134;
			case 6034:
				return 404753859;
			case 6035:
				return -1060315354;
			case 6036:
				return -2140512322;
			case 6037:
				return 1903121605;
			case 6038:
				return 2133913672;
			case 6039:
				return 1443208690;
			case 6040:
				return 1648604782;
			case 6041:
				return 411542263;
			case 6042:
				return 1185873733;
			case 6043:
				return -51778632;
			case 6044:
				return 152699932;
			case 6045:
				return -1140037126;
			case 6046:
				return -1330360350;
			case 6047:
				return -1319293933;
			case 6048:
				return 380375562;
			case 6049:
				return -199176904;
			case 6050:
				return -1783623592;
			case 6051:
				return -763000318;
			case 6052:
				return 34695449;
			case 6053:
				return 1599873961;
			case 6054:
				return 1351255558;
			case 6055:
				return -907773760;
			case 6056:
				return -1143350101;
			case 6057:
				return 2019714061;
			case 6058:
				return 1420014040;
			case 6059:
				return 1946587047;
			case 6060:
				return 2116878699;
			case 6061:
				return 271199050;
			case 6062:
				return -11564651;
			case 6063:
				return 748545073;
			case 6064:
				return 703192777;
			case 6065:
				return -431205274;
			case 6066:
				return -124880662;
			case 6067:
				return -1269108608;
			case 6068:
				return 1185191189;
			case 6069:
				return 1975258357;
			case 6070:
				return 1790080661;
			case 6071:
				return 2132192148;
			case 6072:
				return 41010263;
			case 6073:
				return -1135289523;
			case 6074:
				return -2078561629;
			case 6075:
				return -485858679;
			case 6076:
				return -496174899;
			case 6077:
				return -1471590640;
			case 6078:
				return -1100258208;
			case 6079:
				return -21391503;
			case 6080:
				return -1362818594;
			case 6081:
				return -1333789752;
			case 6082:
				return 1349399153;
			case 6083:
				return -503400268;
			case 6084:
				return -1972939517;
			case 6085:
				return -561700837;
			case 6086:
				return 1467239777;
			case 6087:
				return 1680232168;
			case 6088:
				return 1329669406;
			case 6089:
				return 27429346;
			case 6090:
				return 1924328449;
			case 6091:
				return 795764089;
			case 6092:
				return 697588165;
			case 6093:
				return -757453742;
			case 6094:
				return -1101987008;
			case 6095:
				return -55630821;
			case 6096:
				return 1067265059;
			case 6097:
				return 1642361009;
			case 6098:
				return 1395315518;
			case 6099:
				return -854899689;
			case 6100:
				return 2135468179;
			case 6101:
				return 1959826339;
			case 6102:
				return -1500350682;
			case 6103:
				return 656775461;
			case 6104:
				return 1421538383;
			case 6105:
				return -225234867;
			case 6106:
				return -455240478;
			case 6107:
				return -193781477;
			case 6108:
				return 648925612;
			case 6109:
				return 1842250006;
			case 6110:
				return 1968553862;
			case 6111:
				return -1175681863;
			case 6112:
				return -886877444;
			case 6113:
				return -260513889;
			case 6114:
				return -277995633;
			case 6115:
				return 1463018264;
			case 6116:
				return 1753434087;
			case 6117:
				return -356979788;
			case 6118:
				return 1237454505;
			case 6119:
				return -46508956;
			case 6120:
				return -1730454695;
			case 6121:
				return -872810473;
			case 6122:
				return 357463992;
			case 6123:
				return -1063413864;
			case 6124:
				return 227803980;
			case 6125:
				return -97430121;
			case 6126:
				return 218755123;
			case 6127:
				return -1180764554;
			case 6128:
				return -1494222502;
			case 6129:
				return -1305774909;
			case 6130:
				return -343472373;
			case 6131:
				return 118297808;
			case 6132:
				return 1281675660;
			case 6133:
				return -1069461611;
			case 6134:
				return 134352775;
			case 6135:
				return 1694019116;
			case 6136:
				return 773273041;
			case 6137:
				return -377253474;
			case 6138:
				return 2083250300;
			case 6139:
				return 1268027260;
			case 6140:
				return -2083850938;
			case 6141:
				return 644542331;
			case 6142:
				return -408728765;
			case 6143:
				return 529519278;
			case 6144:
				return 1752777248;
			case 6145:
				return 991187389;
			case 6146:
				return 2073672045;
			case 6147:
				return 1641096889;
			case 6148:
				return 323138932;
			case 6149:
				return -50392222;
			case 6150:
				return 1106426883;
			case 6151:
				return -1085503541;
			case 6152:
				return 459090810;
			case 6153:
				return -735684371;
			case 6154:
				return 1513980121;
			case 6155:
				return -2005392678;
			case 6156:
				return 1161087910;
			case 6157:
				return 376512148;
			case 6158:
				return 1381558557;
			case 6159:
				return -1906282886;
			case 6160:
				return -830134112;
			case 6161:
				return -306351989;
			case 6162:
				return -628910426;
			case 6163:
				return -1160438169;
			case 6164:
				return -1665997642;
			case 6165:
				return 981884407;
			case 6166:
				return -174530855;
			case 6167:
				return 141629944;
			case 6168:
				return -599669674;
			case 6169:
				return -289347244;
			case 6170:
				return 370587687;
			case 6171:
				return 99588057;
			case 6172:
				return 981762306;
			case 6173:
				return 1752095958;
			case 6174:
				return -1659353556;
			case 6175:
				return 1289299371;
			case 6176:
				return -2115137577;
			case 6177:
				return -797528572;
			case 6178:
				return -607796062;
			case 6179:
				return -318478561;
			case 6180:
				return 132553959;
			case 6181:
				return 169320777;
			case 6182:
				return 1339370691;
			case 6183:
				return 839643441;
			case 6184:
				return 1818355164;
			case 6185:
				return 1049594424;
			case 6186:
				return -1732460907;
			case 6187:
				return 449255562;
			case 6188:
				return 895584015;
			case 6189:
				return 1119560130;
			case 6190:
				return 423612100;
			case 6191:
				return 635594761;
			case 6192:
				return -55962215;
			case 6193:
				return 231192532;
			case 6194:
				return -610872461;
			case 6195:
				return -247660865;
			case 6196:
				return -1079043164;
			case 6197:
				return -677852005;
			case 6198:
				return 31662383;
			case 6199:
				return -870435418;
			case 6200:
				return -1129277749;
			case 6201:
				return -304875271;
			case 6202:
				return -547267564;
			case 6203:
				return -1021893760;
			case 6204:
				return -1259501779;
			case 6205:
				return 2116393374;
			case 6206:
				return -1435241926;
			case 6207:
				return 707056466;
			case 6208:
				return 1864486166;
			case 6209:
				return -1208951121;
			case 6210:
				return -1515832806;
			case 6211:
				return -1279044008;
			case 6212:
				return -1577209139;
			case 6213:
				return -668917997;
			case 6214:
				return -963478538;
			case 6215:
				return -343226906;
			case 6216:
				return -657907613;
			case 6217:
				return -372751499;
			case 6218:
				return -686285291;
			case 6219:
				return -1202659181;
			case 6220:
				return -1505575817;
			case 6221:
				return -604624931;
			case 6222:
				return -910130318;
			case 6223:
				return 22704805;
			case 6224:
				return -271954043;
			case 6225:
				return 615463250;
			case 6226:
				return 324802220;
			case 6227:
				return -409557139;
			case 6228:
				return 1024747954;
			case 6229:
				return 1382585434;
			case 6230:
				return 1622618359;
			case 6231:
				return 1959549217;
			case 6232:
				return -1972140941;
			case 6233:
				return -1690425848;
			case 6234:
				return -1359983252;
			case 6235:
				return -1105990733;
			case 6236:
				return -750971387;
			case 6237:
				return 610541354;
			case 6238:
				return 784020440;
			case 6239:
				return 1067832749;
			case 6240:
				return 1239411233;
			case 6241:
				return -914724520;
			case 6242:
				return 1537543595;
			case 6243:
				return 1692082199;
			case 6244:
				return 1998046352;
			case 6245:
				return 239497967;
			case 6246:
				return -1608509788;
			case 6247:
				return -161003351;
			case 6248:
				return -1089618167;
			case 6249:
				return -379251785;
			case 6250:
				return -621644078;
			case 6251:
				return -2072393246;
			case 6252:
				return 1959537287;
			case 6253:
				return -1610776343;
			case 6254:
				return -1849236356;
			case 6255:
				return 1704037390;
			case 6256:
				return 1214796220;
			case 6257:
				return 311778191;
			case 6258:
				return 696584562;
			case 6259:
				return -1614350860;
			case 6260:
				return 1274039880;
			case 6261:
				return 977971965;
			case 6262:
				return 1924045764;
			case 6263:
				return -929675354;
			case 6264:
				return -1926475585;
			case 6265:
				return -2072887477;
			case 6266:
				return 463924678;
			case 6267:
				return 1111325934;
			case 6268:
				return -616609227;
			case 6269:
				return 180300080;
			case 6270:
				return -50950753;
			case 6271:
				return 640475147;
			case 6272:
				return 409158776;
			case 6273:
				return 1128045098;
			case 6274:
				return 1976991581;
			case 6275:
				return 1689246992;
			case 6276:
				return -1853933902;
			case 6277:
				return -2063196464;
			case 6278:
				return -1833125315;
			case 6279:
				return -510765089;
			case 6280:
				return -281545934;
			case 6281:
				return -909137822;
			case 6282:
				return 396117046;
			case 6283:
				return 631496773;
			case 6284:
				return 89825203;
			case 6285:
				return 306133372;
			case 6286:
				return 1610470648;
			case 6287:
				return 1999832138;
			case 6288:
				return -1186822177;
			case 6289:
				return -226493863;
			case 6290:
				return 465423572;
			case 6291:
				return -957144256;
			case 6292:
				return 2146506049;
			case 6293:
				return -1721087949;
			case 6294:
				return -563555797;
			case 6295:
				return -1867008306;
			case 6296:
				return 1181458995;
			case 6297:
				return -1775118034;
			case 6298:
				return -1574178526;
			case 6299:
				return 2145627282;
			case 6300:
				return 1302185991;
			case 6301:
				return 1598581596;
			case 6302:
				return 1273775248;
			case 6303:
				return 1717205356;
			case 6304:
				return 949525993;
			case 6305:
				return 1119466027;
			case 6306:
				return 514484745;
			case 6307:
				return 2035818643;
			case 6308:
				return 1740417970;
			case 6309:
				return 1408992304;
			case 6310:
				return 1252454791;
			case 6311:
				return 947965243;
			case 6312:
				return 1326152276;
			case 6313:
				return 1053350351;
			case 6314:
				return -211074283;
			case 6315:
				return 558603989;
			case 6316:
				return -643330162;
			case 6317:
				return 1783113373;
			case 6318:
				return 2134233208;
			case 6319:
				return -1913852442;
			case 6320:
				return -1557686177;
			case 6321:
				return -1318996781;
			case 6322:
				return -903911870;
			case 6323:
				return -1243726400;
			case 6324:
				return -292212947;
			case 6325:
				return -1134933320;
			case 6326:
				return 293139700;
			case 6327:
				return 641179029;
			case 6328:
				return 1635775304;
			case 6329:
				return 1984961772;
			case 6330:
				return 1024731761;
			case 6331:
				return 1405048775;
			case 6332:
				return -44389585;
			case 6333:
				return 320329385;
			case 6334:
				return -641801276;
			case 6335:
				return -275050576;
			case 6336:
				return 1150302617;
			case 6337:
				return -1532791822;
			case 6338:
				return 2044534374;
			case 6339:
				return -2025801427;
			case 6340:
				return 642250557;
			case 6341:
				return -192539718;
			case 6342:
				return 163331622;
			case 6343:
				return 1479039741;
			case 6344:
				return -876985833;
			case 6345:
				return -511480407;
			case 6346:
				return -1354462932;
			case 6347:
				return 1822950108;
			case 6348:
				return -1895546752;
			case 6349:
				return -1596857317;
			case 6350:
				return -1934574631;
			case 6351:
				return 1582751518;
			case 6352:
				return -1718397530;
			case 6353:
				return -1441073483;
			case 6354:
				return 1967230211;
			case 6355:
				return 2139529613;
			case 6356:
				return 16458868;
			case 6357:
				return -1896497349;
			case 6358:
				return 2114592100;
			case 6359:
				return 1790178992;
			case 6360:
				return -733165080;
			case 6361:
				return -973132467;
			case 6362:
				return -1348337517;
			case 6363:
				return -1584700314;
			case 6364:
				return -1130915186;
			case 6365:
				return -1370096117;
			case 6366:
				return -1725770843;
			case 6367:
				return -940655156;
			case 6368:
				return -225322827;
			case 6369:
				return -924744363;
			case 6370:
				return 761515572;
			case 6371:
				return 926736870;
			case 6372:
				return 147522819;
			case 6373:
				return 581515455;
			case 6374:
				return -1539064842;
			case 6375:
				return 1981996981;
			case 6376:
				return 2144662297;
			case 6377:
				return -1548926331;
			case 6378:
				return 736941142;
			case 6379:
				return 985100779;
			case 6380:
				return 243702154;
			case 6381:
				return -469941128;
			case 6382:
				return -231415577;
			case 6383:
				return -916287677;
			case 6384:
				return 970551331;
			case 6385:
				return 294330247;
			case 6386:
				return 525581080;
			case 6387:
				return 2061725410;
			case 6388:
				return -1725214483;
			case 6389:
				return -1956072088;
			case 6390:
				return -157316140;
			case 6391:
				return -422187967;
			case 6392:
				return -774716869;
			case 6393:
				return -1005312322;
			case 6394:
				return 569795197;
			case 6395:
				return 338675440;
			case 6396:
				return 257670472;
			case 6397:
				return 630088181;
			case 6398:
				return 1232819602;
			case 6399:
				return 2042508823;
			case 6400:
				return -1812043113;
			case 6401:
				return 372829966;
			case 6402:
				return -21512180;
			case 6403:
				return 824091865;
			case 6404:
				return 728013157;
			case 6405:
				return -1459120979;
			case 6406:
				return -1018312391;
			case 6407:
				return 1264966279;
			case 6408:
				return 490529836;
			case 6409:
				return -1896331359;
			case 6410:
				return 926521381;
			case 6411:
				return 1909886302;
			case 6412:
				return 2075631904;
			case 6413:
				return 1683026515;
			case 6414:
				return -267777589;
			case 6415:
				return 1226390500;
			case 6416:
				return 1523113795;
			case 6417:
				return -898137249;
			case 6418:
				return 1920311900;
			case 6419:
				return 1688274611;
			case 6420:
				return -1640334875;
			case 6421:
				return -1878073970;
			case 6422:
				return -1180356406;
			case 6423:
				return -1418554267;
			case 6424:
				return -925118665;
			case 6425:
				return -242278243;
			case 6426:
				return -456620272;
			case 6427:
				return 1778093520;
			case 6428:
				return 1441553043;
			case 6429:
				return 279564187;
			case 6430:
				return -18142178;
			case 6431:
				return 743868148;
			case 6432:
				return 445440865;
			case 6433:
				return -677094003;
			case 6434:
				return -975062520;
			case 6435:
				return -218557382;
			case 6436:
				return -516067137;
			case 6437:
				return -684991564;
			case 6438:
				return 309877770;
			case 6439:
				return -1145852338;
			case 6440:
				return -1439495347;
			case 6441:
				return -1622411909;
			case 6442:
				return -1922018876;
			case 6443:
				return 1113045904;
			case 6444:
				return 815077387;
			case 6445:
				return 1478911789;
			case 6446:
				return 1182319570;
			case 6447:
				return 251829;
			case 6448:
				return -1329681963;
			case 6449:
				return -957557199;
			case 6450:
				return -718638420;
			case 6451:
				return 1531739874;
			case 6452:
				return -374858841;
			case 6453:
				return -136792056;
			case 6454:
				return 237102234;
			case 6455:
				return 1883482324;
			case 6456:
				return -2046634926;
			case 6457:
				return 1045316002;
			case 6458:
				return -1638851761;
			case 6459:
				return -1561713535;
			case 6460:
				return -1300839526;
			case 6461:
				return -1484608082;
			case 6462:
				return -1254078167;
			case 6463:
				return -638741877;
			case 6464:
				return -274153983;
			case 6465:
				return -25011276;
			case 6466:
				return 71591736;
			case 6467:
				return -1232358888;
			case 6468:
				return -214054986;
			case 6469:
				return 77589114;
			case 6470:
				return 380604057;
			case 6471:
				return 974181723;
			case 6472:
				return 1280702949;
			case 6473:
				return 1597743024;
			case 6474:
				return 1631822784;
			case 6475:
				return 1056595750;
			case 6476:
				return 1094476714;
			case 6477:
				return -1993213140;
			case 6478:
				return -323977844;
			case 6479:
				return -621618671;
			case 6480:
				return 327207724;
			case 6481:
				return -1043454008;
			case 6482:
				return -131787659;
			case 6483:
				return 643494112;
			case 6484:
				return 1514428594;
			case 6485:
				return 141407494;
			case 6486:
				return 1055039983;
			case 6487:
				return -90007536;
			case 6488:
				return -1197883998;
			case 6489:
				return 1939682218;
			case 6490:
				return 1582926115;
			case 6491:
				return 1486093716;
			case 6492:
				return 1121899050;
			case 6493:
				return -85867983;
			case 6494:
				return 757245618;
			case 6495:
				return -547353810;
			case 6496:
				return 167075928;
			case 6497:
				return 1868245262;
			case 6498:
				return -834603660;
			case 6499:
				return -1073096442;
			case 6500:
				return -1330103709;
			case 6501:
				return -1559978244;
			case 6502:
				return 87843690;
			case 6503:
				return -143669295;
			case 6504:
				return -406738827;
			case 6505:
				return -637793046;
			case 6506:
				return 1007931672;
			case 6507:
				return 1744676815;
			case 6508:
				return 1005333675;
			case 6509:
				return 1601926089;
			case 6510:
				return -526322154;
			case 6511:
				return -753739014;
			case 6512:
				return 1985225086;
			case 6513:
				return 1753122259;
			case 6514:
				return 104612172;
			case 6515:
				return -1199823415;
			case 6516:
				return -1447360441;
			case 6517:
				return 1463575739;
			case 6518:
				return 1004204265;
			case 6519:
				return -1560428759;
			case 6520:
				return -1525169315;
			case 6521:
				return -1235130896;
			case 6522:
				return 1211992490;
			case 6523:
				return -936179309;
			case 6524:
				return -637031108;
			case 6525:
				return -24054194;
			case 6526:
				return -1855513604;
			case 6527:
				return 644696970;
			case 6528:
				return -2059950388;
			case 6529:
				return 293322614;
			case 6530:
				return -543106111;
			case 6531:
				return 756512429;
			case 6532:
				return 4726031;
			case 6533:
				return -1765684740;
			case 6534:
				return -1412697072;
			case 6535:
				return -1305771817;
			case 6536:
				return -937251643;
			case 6537:
				return 189932703;
			case 6538:
				return 1266015133;
			case 6539:
				return 1562869504;
			case 6540:
				return -568426256;
			case 6541:
				return -271768499;
			case 6542:
				return 42748363;
			case 6543:
				return 340913494;
			case 6544:
				return -576716813;
			case 6545:
				return -1495166345;
			case 6546:
				return -2088678505;
			case 6547:
				return 612145719;
			case 6548:
				return 1134758556;
			case 6549:
				return 1776047886;
			case 6550:
				return -1741540423;
			case 6551:
				return -2034790204;
			case 6552:
				return -1123222162;
			case 6553:
				return -1424533117;
			case 6554:
				return 1373677319;
			case 6555:
				return 1077019562;
			case 6556:
				return 1976135384;
			case 6557:
				return 655971049;
			case 6558:
				return -755702786;
			case 6559:
				return -864332025;
			case 6560:
				return -634588566;
			case 6561:
				return -1334468868;
			case 6562:
				return -1147161264;
			case 6563:
				return 1905369397;
			case 6564:
				return -1615135353;
			case 6565:
				return 1427499070;
			case 6566:
				return 1665402010;
			case 6567:
				return -1924310444;
			case 6568:
				return 1740156946;
			case 6569:
				return 635521847;
			case 6570:
				return -865249810;
			case 6571:
				return 671724542;
			case 6572:
				return -1233965893;
			case 6573:
				return -1324992207;
			case 6574:
				return -1453546030;
			case 6575:
				return 750714753;
			case 6576:
				return -392891236;
			case 6577:
				return 687502422;
			case 6578:
				return 2100608296;
			case 6579:
				return 1260509443;
			case 6580:
				return 1373562493;
			case 6581:
				return 614304763;
			case 6582:
				return 116674713;
			case 6583:
				return 483490899;
			case 6584:
				return -342189594;
			case 6585:
				return -245586582;
			case 6586:
				return -1071725841;
			case 6587:
				return -966863417;
			case 6588:
				return 1788428300;
			case 6589:
				return 1157264595;
			case 6590:
				return 407051109;
			case 6591:
				return -26089517;
			case 6592:
				return -827815871;
			case 6593:
				return -1457996514;
			case 6594:
				return -348831398;
			case 6595:
				return 396139048;
			case 6596:
				return 702955195;
			case 6597:
				return 1070426513;
			case 6598:
				return -727913047;
			case 6599:
				return -1569846964;
			case 6600:
				return -1143260122;
			case 6601:
				return 168450179;
			case 6602:
				return 458160908;
			case 6603:
				return -241719394;
			case 6604:
				return 1054851629;
			case 6605:
				return 1416752465;
			case 6606:
				return 472612137;
			case 6607:
				return -1966744652;
			case 6608:
				return -81074610;
			case 6609:
				return 232197034;
			case 6610:
				return 530886469;
			case 6611:
				return -1571638113;
			case 6612:
				return -1272850371;
			case 6613:
				return -952926624;
			case 6614:
				return -655646256;
			case 6615:
				return -2145095613;
			case 6616:
				return -1850666152;
			case 6617:
				return -422330108;
			case 6618:
				return -123312983;
			case 6619:
				return -764405699;
			case 6620:
				return -436617392;
			case 6621:
				return 1073017669;
			case 6622:
				return -972799518;
			case 6623:
				return 305125944;
			case 6624:
				return -1045645005;
			case 6625:
				return -287108193;
			case 6626:
				return 538965528;
			case 6627:
				return 1515940466;
			case 6628:
				return 748326641;
			case 6629:
				return 917021453;
			case 6630:
				return -1997551718;
			case 6631:
				return 1929616634;
			case 6632:
				return -515573377;
			case 6633:
				return 354115879;
			case 6634:
				return 325344697;
			case 6635:
				return -1177605488;
			case 6636:
				return -509836174;
			case 6637:
				return -799809055;
			case 6638:
				return -836575873;
			case 6639:
				return -573211408;
			case 6640:
				return -939306676;
			case 6641:
				return -1526920384;
			case 6642:
				return -1755877387;
			case 6643:
				return -2139995605;
			case 6644:
				return 1924376238;
			case 6645:
				return -482147253;
			case 6646:
				return -66715703;
			case 6647:
				return -1983472820;
			case 6648:
				return -1677574205;
			case 6649:
				return -1446257834;
			case 6650:
				return 1025311226;
			case 6651:
				return 1381706870;
			case 6652:
				return 1636879073;
			case 6653:
				return 1993864559;
			case 6654:
				return 90542700;
			case 6655:
				return -48463106;
			case 6656:
				return -593307611;
			case 6657:
				return 949194757;
			case 6658:
				return 1257125050;
			case 6659:
				return 68232961;
			case 6660:
				return 377113555;
			case 6661:
				return -891505531;
			case 6662:
				return -577512973;
			case 6663:
				return -1780364664;
			case 6664:
				return -1175940451;
			case 6665:
				return 2099811250;
			case 6666:
				return -1067667797;
			case 6667:
				return -1909208482;
			case 6668:
				return -1662720064;
			case 6669:
				return 1789330245;
			case 6670:
				return 2042863998;
			case 6671:
				return 1736080620;
			case 6672:
				return 910269051;
			case 6673:
				return 1140831735;
			case 6674:
				return 1464261773;
			case 6675:
				return 1010379214;
			case 6676:
				return 2034364228;
			case 6677:
				return 1216548295;
			case 6678:
				return 1422730843;
			case 6679:
				return -717707408;
			case 6680:
				return -1561673003;
			case 6681:
				return -1055719643;
			case 6682:
				return -1889526848;
			case 6683:
				return -180295868;
			case 6684:
				return -1022426399;
			case 6685:
				return 564283410;
			case 6686:
				return -1665809282;
			case 6687:
				return 1659949301;
			case 6688:
				return 1090424081;
			case 6689:
				return -321526587;
			case 6690:
				return -1163657118;
			case 6691:
				return -1862554354;
			case 6692:
				return -572176668;
			case 6693:
				return 905017083;
			case 6694:
				return 70882188;
			case 6695:
				return -23755596;
			case 6696:
				return -1476774101;
			case 6697:
				return -1247030642;
			case 6698:
				return 192249376;
			case 6699:
				return -1755408908;
			case 6700:
				return -585653915;
			case 6701:
				return -77668877;
			case 6702:
				return 1111288750;
			case 6703:
				return -831912950;
			case 6704:
				return 366023383;
			case 6705:
				return 1276218895;
			case 6706:
				return 1193235905;
			case 6707:
				return 1440740174;
			case 6708:
				return 1210210259;
			case 6709:
				return -111625663;
			case 6710:
				return -342483268;
			case 6711:
				return -1564340987;
			case 6712:
				return 224977505;
			case 6713:
				return -955263584;
			case 6714:
				return -1336760282;
			case 6715:
				return 1693979342;
			case 6716:
				return -929510421;
			case 6717:
				return -1371367617;
			case 6718:
				return 739054294;
			case 6719:
				return 1104559720;
			case 6720:
				return -1899931587;
			case 6721:
				return -1784584707;
			case 6722:
				return -160847988;
			case 6723:
				return 1143587579;
			case 6724:
				return 1515188039;
			case 6725:
				return 2025097147;
			case 6726:
				return -535848873;
			case 6727:
				return 674867370;
			case 6728:
				return 981749055;
			case 6729:
				return -2070421147;
			case 6730:
				return 385123872;
			case 6731:
				return 1669406520;
			case 6732:
				return 1975141290;
			case 6733:
				return -1098853066;
			case 6734:
				return -800917318;
			case 6735:
				return 980172311;
			case 6736:
				return 742798933;
			case 6737:
				return -1433292050;
			case 6738:
				return -1672735133;
			case 6739:
				return -821593127;
			case 6740:
				return -1062412508;
			case 6741:
				return 1635918032;
			case 6742:
				return 1396737101;
			case 6743:
				return -2009993681;
			case 6744:
				return 2011385234;
			case 6745:
				return -1780184396;
			case 6746:
				return 367303955;
			case 6747:
				return -852980840;
			case 6748:
				return -239676236;
			case 6749:
				return -1361883410;
			case 6750:
				return -1104876143;
			case 6751:
				return -1958311979;
			case 6752:
				return -1734139250;
			case 6753:
				return -1636094394;
			case 6754:
				return -1395602703;
			case 6755:
				return -13442216;
			case 6756:
				return -133501402;
			case 6757:
				return 573915770;
			case 6758:
				return 342402785;
			case 6759:
				return -851502961;
			case 6760:
				return -1090290664;
			case 6761:
				return -374222476;
			case 6762:
				return -629984521;
			case 6763:
				return 731829525;
			case 6764:
				return 1616264835;
			case 6765:
				return 1891622506;
			case 6766:
				return 237932673;
			case 6767:
				return 268097363;
			case 6768:
				return 1648393181;
			case 6769:
				return -259712920;
			case 6770:
				return 1923587191;
			case 6771:
				return -666015807;
			case 6772:
				return -904115361;
			case 6773:
				return -1144410438;
			case 6774:
				return 1005104886;
			case 6775:
				return -1641647244;
			case 6776:
				return 1458332681;
			case 6777:
				return -367230592;
			case 6778:
				return -10310644;
			case 6779:
				return -458197336;
			case 6780:
				return -1275947731;
			case 6781:
				return -921321613;
			case 6782:
				return -1757357114;
			case 6783:
				return -1277782711;
			case 6784:
				return -500141572;
			case 6785:
				return -679781230;
			case 6786:
				return 1075392792;