void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_612 = 1;
	vLocal_613 = { -2209.862f, 721.4012f, 126.6772f };
	uLocal_639 = uVar639;
	iLocal_637 = vScriptParam_0.z;
	if (func_1(Global_35, 0))
	{
		set_ped_reset_flag(Global_35, 54, true);
	}
	func_2();
	while (func_3())
	{
		if (get_game_timer() > iVar636)
		{
			iLocal_638 = get_game_timer() + 1000;
			iVar0 = iVar635;
			func_4(iVar637, &iLocal_637);
			switch (iVar635)
			{
				case 0:
					if (!Global_1879534->f_1)
					{
						bLocal_640 = !func_5(iVar637, 1);
						if (bVar638)
						{
						}
						iLocal_637 = 1;
					}
					break;
				case 1:
					iLocal_637 = 2;
					break;
				case 2:
					if (func_6(bVar638))
					{
						iLocal_637 = 4;
					}
					break;
				case 4:
					iLocal_637 = 6;
					break;
				case 6:
					if (func_7(iVar637, -1, -1, 0))
					{
						func_8(iVar637, 4);
						iLocal_637 = 7;
					}
					break;
				case 7:
					iLocal_637 = 8;
					break;
				case 8:
					func_9(iVar637);
					iLocal_637 = 9;
					break;
				case 9:
					if (iVar637 != 5)
					{
						func_10(Global_1898004);
						func_11(iVar637, Global_1898004, bVar638);
					}
					func_8(iVar637, 8);
					iLocal_637 = 10;
					break;
				case 10:
					if (!bVar638)
					{
						func_12();
						if (func_13(32))
						{
							if (is_screen_faded_out())
							{
								do_screen_fade_in(500);
							}
							func_14(32);
						}
						iLocal_637 = 3;
					}
					else
					{
						iLocal_637 = 3;
					}
					break;
				case 3:
					if (!_0xcf45df50c7775f2a())
					{
						if (func_15(bVar638))
						{
							iLocal_637 = 11;
						}
					}
					break;
				case 11:
					if (!bVar638)
					{
						if (!func_16(iVar637))
						{
							iLocal_638 = 0;
						}
					}
					func_17(Global_1898004, iVar637);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iVar635)
			{
				iLocal_638 = 0;
			}
		}
		wait(0);
	}
	func_18();
}

bool func_1(int iParam0, int iParam1)
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
	if (func_19(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_2()
{
	if (has_force_cleanup_occurred(2))
	{
		func_18();
		if (network_get_this_script_is_network_script())
		{
		}
		else
		{
			terminate_this_thread();
		}
	}
}

bool func_3()
{
	if (is_entity_dead(Global_35) && is_screen_faded_out())
	{
		return false;
	}
	return true;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_13(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_14(16);
		return;
	}
	if (!func_20(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_14(16);
		return;
	}
	if (func_21(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_22(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_22(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_22(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_22(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_22(1);
			*iParam1 = 11;
			return;
		}
	}
}

bool func_5(int iParam0, bool bParam1)
{
	if (func_23(iParam0))
	{
		return false;
	}
	if (func_24() == -1)
	{
		if (func_25(6206, 1, 1))
		{
			iVar0 = func_26(0);
			iVar1 = func_27(iVar0);
			return false;
		}
		if (bParam1)
		{
			if (func_28() == iParam0)
			{
				return false;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_29(63))
					{
						return false;
					}
					if (func_30(76) || func_31())
					{
						return false;
					}
					break;
				case 125:
					if (!func_32())
					{
						return false;
					}
					break;
				case 129:
					if (!func_33())
					{
						return false;
					}
					if (func_34(19, 0))
					{
						return false;
					}
					break;
				case 114:
					if (!func_33())
					{
						return false;
					}
					if (func_34(20, 0))
					{
						return false;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_24() == 0)
	{
		return false;
	}
	else
	{
		return false;
	}
	if (func_35(iParam0, 256))
	{
		return false;
	}
	if (bParam1)
	{
		iVar2 = func_36(iParam0);
		if (!func_37(iVar2))
		{
			return false;
		}
		iVar3 = func_38(iVar2);
		if (func_39(iVar3))
		{
			func_40(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_41(iVar3, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_6(bool bParam0)
{
	func_42();
	Local_40.f_215 = Local_15.f_8;
	return true;
}

bool func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_24() != -1)
	{
		return true;
	}
	if (!func_43(iParam0))
	{
		return true;
	}
	if (func_35(iParam0, 16))
	{
		return true;
	}
	if (func_44(iParam0) && !func_45(iParam0))
	{
	}
	if (func_46(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_47(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_47(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_44(iParam0) || func_45(iParam0)) || func_48(&Global_1897950))
			{
				func_49(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return false;
			}
		}
	}
	return true;
}

void func_8(int iParam0, int iParam1)
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

void func_9(int iParam0)
{
	iParam0 = iParam0;
}

void func_10(var uParam0)
{
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[uParam0->f_61]->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	func_50(uParam1, Local_40.f_215, 1);
}

void func_12()
{
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	set_ambient_zone_list_state("AZL_Hideout_Hanging_Dog_Ranch", true, true);
	func_58(&Local_40, 16, &sLocal_455, 30);
	func_59(&(Local_40.f_155), 1);
	func_60(&(Local_40.f_155), 0);
	func_61(&(Local_40.f_155), 1);
	func_62(&(Local_40.f_155), 0);
}

bool func_13(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_14(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_15(bool bParam0)
{
	return true;
}

bool func_16(int iParam0)
{
	switch (Local_40)
	{
		case 0:
			if (func_63(&Local_40, &uLocal_445, &uLocal_447, "HANGING", 0))
			{
				func_64(&Local_40, 1);
			}
			break;
		case 1:
			if (!func_65(262144))
			{
				func_66(&Local_518);
				place_object_on_ground_properly(Local_518[1]->f_8, 0);
				set_entity_lod_dist(Local_518[1]->f_8, 200);
			}
			func_64(&Local_40, 2);
			break;
		case 2:
			if (func_67(&Local_40, &Local_264, -1996978098, 0, 16))
			{
				Local_40.f_197 = 0;
				func_68(0);
				func_64(&Local_40, 3);
			}
			break;
		case 3:
			func_69(&Local_40, &Local_264, 0, 16);
			func_70();
			func_71();
			if (!func_65(262144))
			{
				func_72();
			}
			func_64(&Local_40, 7);
			break;
		case 6:
			break;
		case 7:
			func_73(&Local_40, &Local_264);
			func_74();
			break;
	}
	if (!func_75(&Local_40, 4))
	{
		if (Local_40 >= 3)
		{
			func_73(&Local_40, &Local_264);
			func_76();
		}
	}
	func_77();
	func_78(&Local_40);
	func_79();
	return false;
}

void func_17(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_80(&Global_1935630, 16384)) || func_80(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_81(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((is_screen_faded_out() || is_screen_fading_in()) || is_screen_fading_out());
	bVar2 = func_82();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((*uParam0)[iVar3]->f_1)
		{
			case 1:
				if (_does_volume_exist(uParam0[iVar3]))
				{
					if (_0xf256a75210c5c0eb(uParam0[iVar3], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_83((*uParam0)[iVar3], 1) && func_84(iParam1)) && !func_85(iParam1, 16))
							{
								func_87(iParam1, func_86(), -1, 0, -1, 0);
								func_88((*uParam0)[iVar3], 1);
							}
							func_89(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_24() == -1)
	{
		if (func_90() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_91();
			func_92(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_93(bVar0);
	if (func_24() == -1)
	{
		func_94((iParam1 == func_28() && bVar0));
	}
}

void func_18()
{
	func_95(uVar638);
	func_96(uVar638);
	if (func_24() == -1)
	{
		if (iVar637 != 5)
		{
			func_97(iVar637);
		}
	}
	if (iVar637 != 5)
	{
		func_98(iVar637);
		func_99(iVar637, 4);
		func_99(iVar637, 8);
		func_93(0);
		if (func_24() == -1)
		{
			func_94(0);
		}
	}
	func_100(0);
	if (func_28() == iVar637)
	{
		func_101(0);
	}
	if (func_102(func_36(iVar637), 1))
	{
		func_104(func_103(iVar637), 1, 0);
	}
	func_105(iVar637);
	terminate_this_thread();
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_20(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return func_35(iParam0, 8);
}

bool func_21(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_22(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

bool func_23(int iParam0)
{
	iVar0 = func_106(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return Global_40.f_9571[iVar0]->f_1 == 5;
}

int func_24()
{
	return Global_1572887->f_12;
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
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
		if (func_107())
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
		iVar0 = func_108(&(Global_1898164->f_1[0]));
		if (func_109(iVar0) && func_110((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_37(&(Global_1898164->f_1[0])))
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

int func_26(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_27(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_112(func_111(iParam0));
}

int func_28()
{
	return Global_40.f_4283.f_1;
}

bool func_29(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_109(iParam0))
	{
		return false;
	}
	return func_102((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_30(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_102((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_31()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_32()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_33()
{
	return _unlock_is_unlocked(99890643);
}

bool func_34(int iParam0, bool bParam1)
{
	if (func_24() != -1)
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

bool func_35(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_36(int iParam0)
{
	if (!func_113(iParam0))
	{
	}
	return Global_1888801[iParam0];
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -15;
	}
	return func_114(iParam0);
}

bool func_39(int iParam0)
{
	return iParam0 != -15;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_115(*iParam0);
	iVar1 = func_116(*iParam0);
	iVar2 = func_117(*iParam0);
	iVar3 = func_118(*iParam0);
	iVar4 = func_119(*iParam0);
	iVar5 = func_120(*iParam0);
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
	iVar6 = func_121(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_121(iVar1, iVar0);
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
	func_122(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_124(func_123(), iParam0, bParam1);
}

void func_42()
{
	Local_15 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15, -2215.921f, 715.4277f, 108.5499f, 0f, 0f, -60.71788f, 61.12918f, 71.4177f, 40f);
	_0x39816f6f94f385ad(Local_15, -2185.79f, 719.8107f, 125.9173f, 0f, 0f, -49.66869f, 78.42181f, 29.96664f, 40f);
	_0x39816f6f94f385ad(Local_15, -2207.069f, 698.5532f, 125.9173f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 40f);
	_0x39816f6f94f385ad(Local_15, -2243.9f, 698.0834f, 125.9173f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 40f);
	Local_15.f_1 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15.f_1, -2195.499f, 704.8807f, 123.1368f, 0f, 0f, 30.4f, 18.83077f, 12f, 10f);
	_0x39816f6f94f385ad(Local_15.f_1, -2198.667f, 710.2791f, 123.1368f, 0f, 0f, 30.4f, 32.91431f, 12f, 10f);
	_0x39816f6f94f385ad(Local_15.f_1, -2203.972f, 709.9851f, 123.1368f, 0f, 0f, -15.61006f, 12f, 12f, 10f);
	Local_15.f_2 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15.f_2, -2238.242f, 733.6033f, 132.643f, 0f, 0f, 13.43941f, 3.288061f, 3.232871f, 12.02643f);
	_0x39816f6f94f385ad(Local_15.f_2, -2238.109f, 733.6352f, 128.3968f, 0f, 0f, 13.43941f, 5.500687f, 5.320982f, 3.092754f);
	Local_15.f_3 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15.f_3, -2213.416f, 724.3344f, 126.4249f, 0f, 0f, 120.7389f, 12.5758f, 14.00233f, 16.17389f);
	_0x39816f6f94f385ad(Local_15.f_3, -2218.295f, 735.6706f, 126.4249f, 0f, 0f, 77.82641f, 21.75996f, 23.15428f, 16.17389f);
	Local_15.f_4 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15.f_4, -2233.069f, 692.6113f, 119.2689f, 0f, 0f, 26.89521f, 13.60186f, 59.31243f, 14.88079f);
	_0x39816f6f94f385ad(Local_15.f_4, -2245.768f, 688.1744f, 119.2689f, 0f, 0f, 58.93462f, 18.14353f, 47.38847f, 14.88079f);
	_0x39816f6f94f385ad(Local_15.f_4, -2241.587f, 694.2487f, 119.2689f, 0f, 0f, 40.89366f, 13.73913f, 47.38847f, 14.88079f);
	_0x39816f6f94f385ad(Local_15.f_4, -2225.716f, 701.6668f, 119.2689f, 0f, 0f, 26.89521f, 9.995893f, 16.37919f, 14.88079f);
	Local_15.f_5 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15.f_5, -2185.79f, 719.8107f, 125.9173f, 0f, 0f, -49.66869f, 78.42181f, 29.96664f, 40f);
	_0x39816f6f94f385ad(Local_15.f_5, -2243.9f, 698.0834f, 125.9173f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 40f);
	_0x39816f6f94f385ad(Local_15.f_5, -2215.921f, 715.4277f, 108.5499f, 0f, 0f, -60.71788f, 61.12918f, 71.4177f, 40f);
	_0x39816f6f94f385ad(Local_15.f_5, -2207.069f, 698.5532f, 125.9173f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 40f);
	Local_15.f_6 = _create_volume_cylinder(-2162.379f, 697.5178f, 124.2176f, 0f, 0f, 117.2988f, 7.23474f, 10.33556f, 10f);
	Local_15.f_7 = _create_volume_box(-2176.081f, 718.1721f, 123.1325f, 0f, 0f, -65.64973f, 13.25763f, 11.35147f, 3.617907f);
	Local_15.f_8 = _create_volume_cylinder(-2205.058f, 704.8635f, 107.6184f, 0f, 0f, 0f, 100f, 100f, 55f);
	Local_15.f_9 = _create_volume_box(-2179.158f, 718.7728f, 125.696f, 0f, 0f, 25.73497f, 2.51749f, 8.753881f, 1.420768f);
	Local_15.f_10 = _create_volume_box(-2181.856f, 703.3795f, 125.5378f, 0f, 0f, 31.84711f, 25.59958f, 28.61663f, 14f);
	Local_15.f_11 = _create_volume_box(-2184.401f, 716.2277f, 125.5378f, 0f, 0f, 31.84711f, 46.04769f, 32.37297f, 14f);
	Local_15.f_12 = _create_volume_box(-2179.2f, 718.7476f, 126.3739f, 0f, 0f, 25.68902f, 25.76206f, 26.5051f, 13.80155f);
	Local_15.f_13 = _create_volume_box(-2175.911f, 721.6743f, 122.894f, 0f, 0f, 25.00886f, 5.707779f, 15.48536f, 2.940435f);
	Local_15.f_14 = _create_volume_box(-2219.658f, 736.7062f, 123.6755f, 0f, 0f, 29.83442f, 7.807473f, 10.42084f, 3f);
	Local_15.f_15 = _create_volume_box(-2209.769f, 719.3145f, 122.5114f, 0f, 0f, 29.49111f, 18.56119f, 13.66177f, 5f);
	Local_15.f_16 = _create_volume_box(-2174.108f, 723.7501f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 1.679469f, 2.345157f);
	Local_15.f_17 = _create_volume_box(-2172.26f, 719.765f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 3.028282f, 2.345157f);
	Local_15.f_18 = _create_volume_box(-2182.887f, 718.5485f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 1.910376f, 2.345157f);
	Local_15.f_19 = _create_volume_box(-2180.633f, 713.69f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 2.099462f, 2.345157f);
	Local_15.f_20 = _create_volume_box(-2217.485f, 732.937f, 123.3117f, 0f, 0f, 120.7389f, 15.10671f, 14.00233f, 3.046946f);
	Local_15.f_21 = _create_volume_box(-2217.907f, 733.649f, 123.3117f, 0f, 0f, 120.7389f, 18.05849f, 21.12796f, 3.046946f);
	Local_15.f_22 = _create_volume_box(-2218.787f, 735.3565f, 127.9376f, 0f, 0f, 30.39472f, 13.31781f, 11.7553f, 2.381363f);
	Local_15.f_23 = _create_volume_box(-2176.977f, 717.8536f, 125.6246f, 0f, 0f, 25.36805f, 13.22988f, 14.86482f, 8.285974f);
	Local_15.f_24 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_15.f_24, -2243.9f, 698.0834f, 120.3619f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 3.523202f);
	_0x39816f6f94f385ad(Local_15.f_24, -2207.069f, 698.5532f, 120.7016f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 3.523202f);
	_0x39816f6f94f385ad(Local_15.f_24, -2185.79f, 719.8107f, 120.3619f, 0f, 0f, -49.66869f, 78.42181f, 29.96664f, 3.523202f);
	_0x39816f6f94f385ad(Local_15.f_24, -2215.921f, 715.4277f, 120.7374f, 0f, 2.365027f, -60.71788f, 61.12918f, 71.4177f, 4.394218f);
}

bool func_43(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_44(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return func_35(iParam0, 33554432);
}

bool func_45(int iParam0)
{
	if (!func_43(iParam0))
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

bool func_46(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_24() != -1;
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

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_48(int iParam0)
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

int func_49(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_125(iParam0, 2))
	{
		return 0;
	}
	if (func_125(iParam0, 32) && !bParam1)
	{
		func_127(iParam0, _create_persistent_character(func_126(iParam0)));
		if (func_24() == -1)
		{
			if (func_125(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_128(iParam0));
				func_129(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_128(iParam0));
		}
		return 0;
	}
	if (!func_130(iParam0) && func_24() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_128(iParam0)))
	{
		func_129(iParam0, 128);
		return 1;
	}
	func_127(iParam0, _create_persistent_character(func_126(iParam0)));
	_0x4f81ead1de8fa19b(func_128(iParam0));
	if (func_125(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_128(iParam0));
		func_129(iParam0, 2048);
	}
	return 1;
}

void func_50(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_131(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

void func_51()
{
	if ((func_34(64, 0) || func_34(65, 0)) || func_132(128))
	{
	}
	if (!func_133(&(iLocal_591[0])))
	{
		iVar0 = -905798639;
		iLocal_591[0] = iVar0;
		func_134(&(iLocal_591[0]), 0, -0.9f, 1, 0, 0, 0, 0);
		if (func_135(&(iLocal_591[0])))
		{
		}
	}
	if (!func_133(&(iLocal_591[1])))
	{
		iVar0 = 944044180;
		iLocal_591[1] = iVar0;
		func_134(&(iLocal_591[1]), 0, 1f, 1, 0, 0, 0, 0);
		if (func_135(&(iLocal_591[1])))
		{
		}
	}
	if (!func_133(&(iLocal_591[2])))
	{
		iVar0 = -2123724066;
		iLocal_591[2] = iVar0;
		func_134(&(iLocal_591[2]), 0, 0f, 0, 1, 0, 0, 0);
		if (func_135(&(iLocal_591[2])))
		{
		}
	}
	if (!func_133(&(iLocal_591[3])))
	{
		iVar0 = -1826804157;
		iLocal_591[3] = iVar0;
		func_134(&(iLocal_591[3]), 0, 0f, 0, 1, 0, 0, 0);
		if (func_135(&(iLocal_591[3])))
		{
		}
	}
	if (!func_133(&(iLocal_591[4])))
	{
		iVar0 = -1624567095;
		iLocal_591[4] = iVar0;
		func_134(&(iLocal_591[4]), 0, 0f, 0, 1, 0, 0, 0);
		if (func_135(&(iLocal_591[4])))
		{
		}
	}
	if (!func_133(iVar595))
	{
		iVar0 = -2082052312;
		iLocal_597 = iVar0;
		func_134(iVar595, 1, 0f, 0, 0, 0, 0, 0);
		if (func_135(iVar595))
		{
		}
	}
}

void func_52()
{
	if (func_65(262144))
	{
		Local_40.f_189 = 1;
		Local_40.f_199 = 4;
		Local_40.f_201 = (Local_40.f_199 + func_136());
	}
	else
	{
		Local_40.f_189 = 3;
		Local_40.f_199 = 20;
		Local_40.f_201 = (Local_40.f_199 + func_136());
	}
	func_137();
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (iVar1 == 0)
		{
			Local_264[iVar0] = 347599949;
		}
		else if (iVar1 == 1)
		{
			Local_264[iVar0] = 50483426;
		}
		else if (iVar1 == 2)
		{
			Local_264[iVar0] = 347599949;
		}
		iVar1++;
		iVar1 = (iVar1 % 3);
		iVar0++;
	}
	func_138();
	Local_40.f_207 = "CALLOUT_LETS_GET_OUTTA_HERE_NEUTRAL";
	func_139(&uLocal_447, &(Local_264[0]));
	func_139(&uLocal_447, &(Local_264[1]));
	func_139(&uLocal_447, -1038436471);
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < iVar460)
	{
		Local_462[iVar0]->f_7 = 30;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar460)
	{
		func_140(&(Local_462[iVar0]->f_1), &uVar1, 5, iVar0);
		iVar0++;
	}
}

void func_54()
{
	sLocal_455[0] = "HIDEOUT2_COMBAT1";
	sLocal_455[1] = "HIDEOUT2_COMBAT2";
	sLocal_455[2] = "HIDEOUT2_COMBAT3";
	sLocal_455[3] = "HIDEOUT2_COMBAT4";
	sLocal_455[4] = "HIDEOUT2_COMBAT5";
	sLocal_455[5] = "HIDEOUT2_COMBAT6";
}

void func_55()
{
	func_140(&(Local_481[0]->f_1), &(Local_481[0]->f_4), 6, 0);
	Local_481[0]->f_5 = 0;
	Local_481[0]->f_6 = 3;
	Local_481[0]->f_7 = 1;
	func_140(&(Local_481[1]->f_1), &(Local_481[1]->f_4), 6, 1);
	Local_481[1]->f_5 = 0;
	Local_481[1]->f_6 = 3;
	Local_481[1]->f_7 = 1;
	func_140(&(Local_481[2]->f_1), &(Local_481[2]->f_4), 6, 2);
	Local_481[2]->f_5 = 0;
	Local_481[2]->f_6 = 3;
	Local_481[2]->f_7 = 1;
	func_140(&(Local_481[3]->f_1), &(Local_481[3]->f_4), 6, 3);
	Local_481[3]->f_5 = 0;
	Local_481[3]->f_6 = 3;
	Local_481[3]->f_7 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_141(Local_481[iVar0], 0);
		iVar0++;
	}
}

void func_56()
{
	*Local_518[0] = { func_142(0, 2) };
	Local_518[0]->f_6 = func_143(0, 2);
	Local_518[0]->f_7 = 742064790;
	Local_518[0]->f_11 = 1;
	Local_518[0]->f_12 = 1;
	*Local_518[1] = { func_142(4, 0) };
	Local_518[1]->f_6 = func_143(4, 0);
	Local_518[1]->f_7 = -243150339;
	iVar0 = 0 + 1;
	while (iVar0 <= 1)
	{
		if (Local_518[iVar0]->f_7 == 0)
		{
			Local_518[iVar0]->f_7 = 987342453;
		}
		Local_518[iVar0]->f_3 = { 0f, 0f, Local_518[iVar0]->f_6 };
		iVar0++;
	}
	func_139(&uLocal_447, Local_518[0]->f_7);
	func_139(&uLocal_447, Local_518[1]->f_7);
}

void func_57()
{
	if (!_does_scenario_point_exist(&(uLocal_587[0])))
	{
		uLocal_587[0] = create_scenario_point(-2061249149, -2237.846f, 731.8396f, 135.3028f, 214.7357f, 2f, 0, 0);
	}
	if (!_does_scenario_point_exist(&(uLocal_587[1])))
	{
		uLocal_587[1] = create_scenario_point(-2061249149, -2238.688f, 735.3594f, 135.3028f, 6.8992f, 2f, 0, 0);
	}
}

void func_58(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	func_144(128);
	iParam0->f_205 = iParam1;
	bVar0 = func_145(&(iParam0->f_5), 1048576);
	iParam0->f_202 = { func_146(iParam0->f_205, bVar0) };
	iParam0->f_187 = get_random_int_in_range(7502, 10000);
	if (iParam0->f_205 == 16)
	{
		func_147(iParam0->f_202, 120f, 0);
	}
	else
	{
		func_147(iParam0->f_202, 80f, 0);
	}
	func_148(iParam0, 1);
	func_149(&(iParam0->f_155));
	func_150(&(iParam0->f_155));
	func_151(&(iParam0->f_155));
	func_152(&(iParam0->f_155), 1);
	func_153(&(iParam0->f_155), to_float(iParam3));
	func_154(&(iParam0->f_155), 50);
	func_155(&(iParam0->f_155), 8f);
	func_156(sParam2);
	func_157(iParam0);
	if (!func_158(65))
	{
		func_159(iParam0);
	}
	func_160(iParam0);
	func_161(iParam0);
	func_162(&(iParam0->f_38), Global_35, "ARTHUR", 0);
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 4);
	}
	else
	{
		func_164(uParam0, 4);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(&(uParam0->f_1), 1);
	}
	else
	{
		func_163(&(uParam0->f_1), 1);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 512);
	}
	else
	{
		func_164(uParam0, 512);
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 65536);
	}
	else
	{
		func_164(uParam0, 65536);
	}
}

bool func_63(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		_0xed9582b3da8f02b4(iParam0->f_201);
	}
	else
	{
		_0xed9582b3da8f02b4(iParam0->f_199);
	}
	if (func_165(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && _0x5e420ff293ee5472())
	{
		return true;
	}
	return false;
}

void func_64(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_65(int iParam0)
{
	return (uVar595 && iParam0) != 0;
}

void func_66(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!(*uParam0)[iVar0]->f_11)
		{
			if ((*uParam0)[iVar0]->f_7 != 0)
			{
				if ((*uParam0)[iVar0]->f_13 > -1)
				{
					iVar10 = (*uParam0)[iVar0]->f_13;
					vVar7 = { _get_object_offset_from_coords(*(*uParam0)[iVar10], (*uParam0)[iVar0]->f_6, *(*uParam0)[iVar0]) };
					(*uParam0)[iVar0]->f_8 = create_object((*uParam0)[iVar0]->f_7, vVar7, true, true, false, false, true);
					if (!(*uParam0)[iVar10]->f_11)
					{
						attach_entity_to_entity((*uParam0)[iVar0]->f_8, (*uParam0)[iVar10]->f_8, 0, *(*uParam0)[iVar0], (*uParam0)[iVar0]->f_3, false, false, false, false, 2, true, false, false);
					}
					else
					{
						attach_entity_to_entity((*uParam0)[iVar0]->f_8, (*uParam0)[iVar10]->f_9, 0, *(*uParam0)[iVar0], (*uParam0)[iVar0]->f_3, false, false, false, false, 2, true, false, false);
					}
				}
				else
				{
					(*uParam0)[iVar0]->f_8 = create_object((*uParam0)[iVar0]->f_7, *(*uParam0)[iVar0], true, true, true, false, true);
					vVar1 = { get_entity_coords((*uParam0)[iVar0]->f_8, true, false) };
				}
				set_entity_rotation((*uParam0)[iVar0]->f_8, (*uParam0)[iVar0]->f_3, 2, true);
				if ((*uParam0)[iVar0]->f_12)
				{
					freeze_entity_position((*uParam0)[iVar0]->f_8, (*uParam0)[iVar0]->f_12);
				}
				else
				{
					activate_physics((*uParam0)[iVar0]->f_8);
					_0x9587913b9e772d29((*uParam0)[iVar0]->f_8, 0);
				}
			}
		}
		else
		{
			(*uParam0)[iVar0]->f_9 = create_vehicle((*uParam0)[iVar0]->f_7, *(*uParam0)[iVar0], (*uParam0)[iVar0]->f_6, true, true, false, false);
		}
		if (does_entity_exist((*uParam0)[iVar0]->f_8))
		{
			vVar1 = { get_entity_coords((*uParam0)[iVar0]->f_8, true, false) };
			vVar4 = { get_entity_rotation((*uParam0)[iVar0]->f_8, 2) };
		}
		else if (does_entity_exist((*uParam0)[iVar0]->f_9))
		{
			vVar1 = { get_entity_coords((*uParam0)[iVar0]->f_9, true, false) };
			vVar4 = { get_entity_rotation((*uParam0)[iVar0]->f_9, 2) };
		}
		iVar0++;
	}
}

bool func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0)
	{
		iParam4 = (iParam0->f_199 - 1);
	}
	if (iParam0->f_197 < iParam3)
	{
		iParam0->f_197 = iParam3;
	}
	if (iParam1[iParam0->f_197] != 0)
	{
		func_166((*iParam1)[iParam0->f_197], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return true;
	}
	return false;
}

void func_68(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Local_40.f_199 - 1))
	{
		if (func_167(Local_264[iVar0]->f_5, 0, 1))
		{
			set_blocking_of_non_temporary_events(Local_264[iVar0]->f_5, bParam0);
			set_ped_config_flag(Local_264[iVar0]->f_5, 130, bParam0);
			_0xa3db37edf9a74635(player_id(), Local_264[iVar0]->f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_167((*iParam1)[iVar0]->f_5, 0, 1))
		{
			set_entity_visible((*iParam1)[iVar0]->f_5, true);
		}
		iVar0++;
	}
}

void func_70()
{
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_167(Local_264[iVar0]->f_5, 0, 1))
		{
			set_ped_config_flag(Local_264[iVar0]->f_5, 246, true);
			func_168(Local_264[iVar0], 0);
			_0x9238a3d970bbb0a9(Local_264[iVar0]->f_5, -820192119);
		}
		iVar0++;
	}
	func_169(Local_264[0]->f_5, -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
	func_169(Local_264[1]->f_5, -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
	if (!func_65(262144))
	{
		func_169(Local_264[7]->f_5, -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
		func_169(Local_264[6]->f_5, -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
		func_169(Local_264[12]->f_5, -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
	}
	if (func_167(Local_264[4]->f_5, 0, 1))
	{
		func_170(Local_264[4]->f_5, 1);
	}
	if (func_167(Local_264[5]->f_5, 0, 1))
	{
		set_ped_combat_movement(Local_264[5]->f_5, 0);
		set_ped_combat_attributes(Local_264[5]->f_5, 1, false);
		remove_all_ped_weapons(Local_264[5]->f_5, true, true);
	}
}

void func_71()
{
	iVar1[0] = -1755170815;
	iVar1[1] = -22664287;
	iVar1[2] = 1978275899;
	iVar1[3] = -258459266;
	if (func_167(Local_264[0]->f_5, 0, 1))
	{
		uLocal_578[0] = create_scenario_point(&(iVar1[2]), Local_264[0]->f_1, Local_264[0]->f_4, 0f, 0, 1);
		_task_use_scenario_point(Local_264[0]->f_5, &(uLocal_578[0]), "", 0, false, true, 0, false, -1f, false);
		_0xf1c03a5352243a30(Local_264[0]->f_5);
		func_171(&(Local_264[0]->f_7), 256, 0);
	}
	if (func_167(Local_264[1]->f_5, 0, 1))
	{
		_task_start_scenario_in_place(Local_264[1]->f_5, -258459266, -1, false, 0, -1f, false);
		_0xf1c03a5352243a30(Local_264[1]->f_5);
		func_171(&(Local_264[1]->f_7), 256, 0);
	}
	if (func_167(Local_264[7]->f_5, 0, 1))
	{
		uLocal_578[3] = create_scenario_point(&(iVar1[3]), Local_264[7]->f_1, Local_264[7]->f_4, 0f, 0, 1);
		_task_use_scenario_point(Local_264[7]->f_5, &(uLocal_578[3]), "", 0, false, true, 0, false, -1f, false);
		func_171(&(Local_264[7]->f_7), 256, 0);
	}
	if (func_167(Local_264[6]->f_5, 0, 1))
	{
		task_wander_in_area(Local_264[6]->f_5, -2214.539f, 695.5394f, 121.706f, 20f, 1077936128, 1086324736, 0);
		func_171(&(Local_264[6]->f_7), 256, 0);
	}
	if (func_167(Local_264[2]->f_5, 0, 1))
	{
		task_wander_in_area(Local_264[2]->f_5, -2207.076f, 702.7548f, 121.9932f, 15f, 1077936128, 1086324736, 0);
		func_171(&(Local_264[2]->f_7), 256, 0);
	}
	if (func_167(Local_264[3]->f_5, 0, 1))
	{
		task_wander_in_area(Local_264[3]->f_5, -2204.292f, 701.1174f, 121.9064f, 15f, 1077936128, 1086324736, 0);
		func_171(&(Local_264[3]->f_7), 256, 0);
	}
	if (!func_65(262144))
	{
		if (func_167(Local_264[12]->f_5, 0, 1))
		{
			uLocal_578[2] = create_scenario_point(&(iVar1[1]), Local_264[12]->f_1, Local_264[12]->f_4, 0f, 0, 1);
			_task_use_scenario_point(Local_264[12]->f_5, &(uLocal_578[2]), "", 0, false, true, 0, false, -1f, false);
			func_171(&(Local_264[12]->f_7), 256, 0);
			_0xf1c03a5352243a30(Local_264[12]->f_5);
		}
		if (func_167(Local_264[4]->f_5, 0, 1))
		{
			fVar6 = func_172(Local_264[4]->f_1, Global_36, 1);
			fVar6 = func_173((fVar6 + 180f));
			_task_start_scenario_in_place(Local_264[4]->f_5, -22664287, -1, false, 0, -1f, false);
			func_171(&(Local_264[4]->f_7), 256, 0);
			func_170(Local_264[4]->f_5, 1);
		}
		if (func_167(Local_264[15]->f_5, 0, 1))
		{
			_set_ped_crouch_movement(Local_264[15]->f_5, true, 0, false);
		}
		if (func_167(Local_264[16]->f_5, 0, 1))
		{
			_set_ped_crouch_movement(Local_264[16]->f_5, true, 0, false);
		}
		if (func_167(Local_264[10]->f_5, 0, 1))
		{
			set_ped_config_flag(Local_264[10]->f_5, 234, true);
		}
		if (func_167(Local_264[11]->f_5, 0, 1))
		{
			task_wander_in_area(Local_264[11]->f_5, -2248.725f, 699.6807f, 120.7643f, 20f, 1077936128, 1086324736, 0);
			set_ped_config_flag(Local_264[11]->f_5, 234, true);
			func_171(&(Local_264[11]->f_7), 256, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_167(Local_264[iVar0]->f_5, 0, 0))
		{
			if (!func_174(&(Local_264[iVar0]->f_7), 256))
			{
				func_175(Local_264[iVar0]->f_5, Local_264[iVar0]->f_1, 3f, 3, 0, 0, 0);
			}
			func_177(Local_264[iVar0]->f_5, func_176(&(Local_264[iVar0])), 0);
		}
		iVar0++;
	}
}

void func_72()
{
	if ((func_167(Local_264[5]->f_5, 0, 1) && does_entity_exist(Local_518[0]->f_9)) && !is_entity_dead(Local_518[0]->f_9))
	{
		func_170(Local_264[5]->f_5, 1);
		set_entity_coords(Local_264[5]->f_5, -2224.648f, 738.5237f, 126.754f, true, false, true, true);
	}
}

void func_73(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0->f_196 >= iParam0->f_199)
		{
			iParam0->f_196 = 0;
		}
		if (func_167((*iParam1)[iParam0->f_196]->f_5, 0, 1))
		{
			(*iParam1)[iVar0]->f_8 = func_178((*iParam1)[iParam0->f_196]->f_5, Global_35, 0, 1);
			if (*iParam1)[iVar0]->f_8 < func_179(iParam0)
			{
				if (!func_174(&((*iParam1)[iParam0->f_196]->f_7), 16))
				{
					func_180(&((*iParam1)[iParam0->f_196]->f_7), 32);
					func_171(&((*iParam1)[iParam0->f_196]->f_7), 16, 1);
				}
			}
			else if (!func_174(&((*iParam1)[iParam0->f_196]->f_7), 32))
			{
				func_180(&((*iParam1)[iParam0->f_196]->f_7), 16);
				func_171(&((*iParam1)[iParam0->f_196]->f_7), 32, 1);
			}
			if (!func_145(&(iParam0->f_5), 65536))
			{
				if (func_181((*iParam1)[iParam0->f_196]->f_5, 45f, 30f, (*iParam1)[iVar0]->f_8, 70f))
				{
					vVar1 = { get_entity_coords((*iParam1)[iParam0->f_196]->f_5, true, false) };
					func_182(&(iParam0->f_5), 65536);
				}
			}
		}
		iParam0->f_196++;
		iVar0++;
	}
}

void func_74()
{
	if (!func_183(&Local_40, 9))
	{
		Local_40.f_198 = func_184(&Local_264, Local_40.f_199, Local_40.f_199);
	}
	if (func_158(65) && func_132(256))
	{
		if (!func_65(1048576))
		{
			func_185(&Local_40, 10);
			iVar0 = 0;
			while (iVar0 < iVar262)
			{
				if (does_entity_exist(Local_264[iVar0]->f_5))
				{
					delete_ped(&(Local_264[iVar0]->f_5));
				}
				iVar0++;
			}
			if (does_entity_exist(Local_518[0]->f_9))
			{
				func_186(Local_518[0]->f_9, 1, 1);
				delete_vehicle(&(Local_518[0]->f_9));
			}
			if (does_entity_exist(Local_518[1]->f_8))
			{
				delete_object(&(Local_518[1]->f_8));
			}
			func_187(1048576);
		}
	}
	switch (Local_40.f_3)
	{
		case 0:
			if (func_188())
			{
				if (func_189(0, 100))
				{
					func_190();
				}
				else
				{
					func_185(&Local_40, 1);
					func_191();
				}
			}
			else if (func_192())
			{
				func_187(32768);
				func_185(&Local_40, 1);
			}
			break;
		case 1:
			if (!func_65(32768))
			{
				if (func_193())
				{
					func_194(Local_40.f_192, 0, "ACFGO_DOAA", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					task_aim_gun_at_entity(Local_40.f_192, Global_35, 4000, 0, 1);
					func_185(&Local_40, 2);
				}
			}
			else if (func_195())
			{
				func_196();
				func_190();
			}
			break;
		case 2:
			func_196();
			if (!func_65(262144))
			{
				func_197(1);
			}
			func_190();
			break;
		case 5:
			func_196();
			if (func_198())
			{
			}
			if (!func_65(262144))
			{
				func_199();
			}
			if (func_200())
			{
				if (func_201(&uLocal_627) >= 20f)
				{
					func_185(&Local_40, 7);
					trigger_music_event("SP_HIDEOUTS_GENERAL_IDLE");
				}
			}
			break;
		case 7:
			if (Local_40.f_198 < 3)
			{
				func_202();
				if (func_203(&Local_40, &Local_264, -1))
				{
					func_187(524288);
					func_185(&Local_40, 8);
				}
			}
			if (!func_65(262144))
			{
				func_199();
			}
			break;
		case 8:
			if (func_204())
			{
				func_185(&Local_40, 9);
			}
			break;
		case 9:
			if (func_205(&Local_40, &Local_264, 1000, 1, 1))
			{
				func_185(&Local_40, 10);
				set_ambient_zone_list_state("AZL_Hideout_Hanging_Dog_Ranch", false, true);
				_0xcc3edc5614b03f61(23);
			}
			break;
		case 10:
			if (!func_132(256))
			{
				if (func_206(&Local_40))
				{
					func_207(0);
				}
			}
			break;
	}
	if (Local_40.f_3 <= 5)
	{
		func_208(&Local_264, &Local_40);
	}
	if (!func_75(&Local_40, 5))
	{
		if (func_209(&Local_40, &Local_264, Local_40.f_199, 0, 0))
		{
			func_190();
		}
	}
	else if (Local_40.f_3 > 8)
	{
		func_210(&Local_264, &Local_40, 200, 1084227584);
	}
}

bool func_75(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return false;
	}
	return true;
}

void func_76()
{
	if (func_145(&(Local_40.f_5), 131072))
	{
		return;
	}
	if (!func_145(&(Local_40.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
				if (func_167(Local_264[iVar0]->f_5, 0, 1))
				{
					func_211(Local_264[iVar0], 831283580, -662251075);
				}
				break;
		}
		iVar0++;
	}
	func_182(&(Local_40.f_5), 131072);
}

void func_77()
{
	switch (iVar547)
	{
		case 0:
			vVar0 = { _0xf70f00013a62f866(Local_15.f_7) };
			iLocal_590 = get_interior_at_coords(vVar0);
			if (is_valid_interior(iVar588))
			{
				func_212(1);
			}
			break;
		case 1:
			if (is_valid_interior(iVar588))
			{
				pin_interior_in_memory(iVar588);
				func_212(2);
			}
			break;
		case 2:
			if (is_valid_interior(iVar588))
			{
				if (is_interior_ready(iVar588))
				{
					if (is_interior_entity_set_active(iVar588, "han_int_tables_flipped"))
					{
						deactivate_interior_entity_set(iVar588, "han_int_tables_flipped", true);
					}
					if (!is_interior_entity_set_active(iVar588, "han_int_tables_upright"))
					{
						activate_interior_entity_set(iVar588, "han_int_tables_upright", 0);
					}
					if (!is_interior_entity_set_active(iVar588, "HAN_WIN_LOCK"))
					{
						activate_interior_entity_set(iVar588, "HAN_WIN_LOCK", 0);
					}
					func_212(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_78(int iParam0)
{
	if (iParam0->f_195 == 0)
	{
		if (func_213(iParam0))
		{
		}
		if (func_214(Global_1888801[iParam0->f_205]) == 3)
		{
			if (func_167(Global_35, 0, 1))
			{
				set_ped_config_flag(Global_35, 141, true);
			}
		}
		func_215(iParam0);
	}
	if (!func_145(&(iParam0->f_5), 1073741824))
	{
		if (!func_216())
		{
			if (iParam0->f_3 >= 4 && iParam0->f_3 < 8)
			{
				func_217(iParam0, 1);
				func_218(iParam0, 1);
			}
		}
		else if (iParam0->f_3 >= 8)
		{
			func_217(iParam0, 0);
			func_219(0);
		}
	}
	if (iParam0->f_195 < 5)
	{
		iParam0->f_195++;
	}
	else
	{
		iParam0->f_195 = 0;
	}
}

void func_79()
{
}

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_82()
{
	return func_80(&Global_1935630, 4096);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_84(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_220(iParam0));
}

bool func_85(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_86()
{
	return Global_1897952->f_41;
}

void func_87(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_221())
	{
		return;
	}
	sVar1 = func_222(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_223(iParam4))
	{
		if (func_43(iParam0))
		{
			iParam4 = func_225(func_224(iParam0));
		}
		else
		{
			iParam4 = func_225(iParam1);
		}
	}
	if (func_223(iParam4))
	{
		iVar3 = func_226(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_228(func_227(iParam2));
	}
	else if ((func_229(iParam1, 2) || func_230(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_male(player_ped_id()))
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_43(iParam0) && func_35(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_118(func_123());
		iVar5 = func_119(func_123());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_36);
		if (!_should_use_24_hour_clock())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_231(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_232(&cVar6, 109029619), sVar9, func_232(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_231(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_232(&cVar6, 109029619), func_232(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_233(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_89(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_24() == 0)
	{
		return;
	}
	if (func_234(128))
	{
		return;
	}
	if (!func_235(iParam0))
	{
		return;
	}
	if (func_35(iParam0, 32))
	{
		return;
	}
	func_8(iParam0, 32);
	func_236(Global_1935630, 8192);
	func_238(func_237(-1532769513, -36357794), 1);
	switch (func_224(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_238(func_237(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_238(func_237(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_238(func_237(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_238(func_237(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_238(func_237(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_238(func_237(-1532769513, -910218296), 1);
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
			Jump @1640; //curOff = 1031
			_0xd8c7162ab2e2af45(1006072805);
			Jump @1640; //curOff = 1043
			_0xd8c7162ab2e2af45(929640770);
			Jump @1640; //curOff = 1055
			_0xd8c7162ab2e2af45(1603579970);
			Jump @1640; //curOff = 1067
			_0xd8c7162ab2e2af45(-1332669948);
			Jump @1640; //curOff = 1079
			_0xd8c7162ab2e2af45(-1807212021);
			Jump @1640; //curOff = 1091
			_0xd8c7162ab2e2af45(-1347759053);
			Jump @1640; //curOff = 1103
			_0xd8c7162ab2e2af45(-918096609);
			Jump @1640; //curOff = 1115
			_0xd8c7162ab2e2af45(1728445882);
			Jump @1640; //curOff = 1127
			_0xd8c7162ab2e2af45(-507075109);
			Jump @1640; //curOff = 1139
			_0xd8c7162ab2e2af45(462373845);
			Jump @1640; //curOff = 1151
			_0xd8c7162ab2e2af45(-1727895786);
			Jump @1640; //curOff = 1163
			_0xd8c7162ab2e2af45(1826504111);
			Jump @1640; //curOff = 1175
			_0xd8c7162ab2e2af45(1714554710);
			Jump @1640; //curOff = 1187
			_0xd8c7162ab2e2af45(-91026072);
			Jump @1640; //curOff = 1199
			_0xd8c7162ab2e2af45(893855320);
			Jump @1640; //curOff = 1211
			_0xd8c7162ab2e2af45(326709244);
			Jump @1640; //curOff = 1223
			_0xd8c7162ab2e2af45(653799702);
			Jump @1640; //curOff = 1235
			_0xd8c7162ab2e2af45(415864829);
			Jump @1640; //curOff = 1247
			_0xd8c7162ab2e2af45(-1836330842);
			Jump @1640; //curOff = 1259
			_0xd8c7162ab2e2af45(648073069);
			Jump @1640; //curOff = 1271
			_0xd8c7162ab2e2af45(770074951);
			Jump @1640; //curOff = 1283
			_0xd8c7162ab2e2af45(-1276637644);
			Jump @1640; //curOff = 1295
			_0xd8c7162ab2e2af45(-431488293);
			Jump @1640; //curOff = 1307
			_0xd8c7162ab2e2af45(-1101810198);
			Jump @1640; //curOff = 1319
			_0xd8c7162ab2e2af45(-1344767066);
			Jump @1640; //curOff = 1331
			_0xd8c7162ab2e2af45(1472232821);
			Jump @1640; //curOff = 1343
			_0xd8c7162ab2e2af45(-1368676121);
			Jump @1640; //curOff = 1355
			_0xd8c7162ab2e2af45(-33677540);
			Jump @1640; //curOff = 1367
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			Jump @1640; //curOff = 1397
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			Jump @1640; //curOff = 1427
			_0xd8c7162ab2e2af45(-161135375);
			Jump @1640; //curOff = 1439
			_0xd8c7162ab2e2af45(1625008147);
			Jump @1640; //curOff = 1451
			_0xd8c7162ab2e2af45(121074776);
			Jump @1640; //curOff = 1463
			_0xd8c7162ab2e2af45(1876184276);
			Jump @1640; //curOff = 1475
			_0xd8c7162ab2e2af45(458479023);
			Jump @1640; //curOff = 1487
			_0xd8c7162ab2e2af45(85299473);
			Jump @1640; //curOff = 1499
			_0xd8c7162ab2e2af45(-1150244084);
			Jump @1640; //curOff = 1511
			_0xd8c7162ab2e2af45(759314201);
			Jump @1640; //curOff = 1523
			_0xd8c7162ab2e2af45(2063457042);
			Jump @1640; //curOff = 1535
			_0xd8c7162ab2e2af45(1877776161);
			Jump @1640; //curOff = 1547
			_0xd8c7162ab2e2af45(2143316225);
			Jump @1640; //curOff = 1559
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			Jump @1640; //curOff = 1580
			_0xd8c7162ab2e2af45(1354284392);
			Jump @1640; //curOff = 1592
			_0xd8c7162ab2e2af45(-1430883057);
			Jump @1640; //curOff = 1604
			_0xd8c7162ab2e2af45(820139809);
			Jump @1640; //curOff = 1616
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			if (bParam1)
			{
				func_8(iParam0, 64);
			}
		}

bool func_90()
{
	return (Global_1894899 & 1 != 0 && func_239() != -1);
}

void func_91()
{
	if (!func_240(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_241(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_92(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_242() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_240(iVar1) && !func_243(iVar1, iParam2)) && (!bParam3 || !func_244(iVar1))) && (!bParam4 || !func_245(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_246(iVar0);
			}
		}
		iVar0++;
	}
}

void func_93(bool bParam0)
{
	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		_0xda26263c07cce9c2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		_0xda26263c07cce9c2(0);
	}
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

void func_95(var uParam0)
{
}

void func_96(var uParam0)
{
}

void func_97(int iParam0)
{
	iVar0 = func_247(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_248(&(Global_1392240->f_1[iVar0]->f_6[iVar1]));
		Global_1392240->f_1[iVar0]->f_6[iVar1] = 0;
		iVar1++;
	}
}

void func_98(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_249(iVar0);
		}
		iVar0++;
	}
}

void func_99(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 4);
	}
}

void func_101(bool bParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_250(iVar0) && !func_251(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_252(iVar0, 33, 1) || !does_entity_exist(Global_1360165[iVar0])) || !is_entity_on_screen(Global_1360165[iVar0]))
			{
				func_253(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

bool func_102(int iParam0, bool bParam1)
{
	switch (func_214(iParam0))
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

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 273461605;
		case 16:
			return -857964358;
		case 9:
			return -868076593;
		case 36:
			return 1205826474;
		case 127:
			return 2136753624;
		case 125:
			return -796902762;
		case 118:
			return 1360745816;
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

void func_104(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_254(1497516462);
			func_255(2016141805);
			func_255(1010885152);
			func_255(-502324015);
			break;
		case 2016141805:
			func_255(1497516462);
			func_254(2016141805);
			func_255(1010885152);
			func_255(-502324015);
			break;
		case 1010885152:
			func_255(1497516462);
			func_255(2016141805);
			func_254(1010885152);
			func_255(-502324015);
			break;
		case -502324015:
			func_255(1497516462);
			func_255(2016141805);
			func_255(1010885152);
			func_254(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_255(-538889627);
			func_255(-538880323);
			func_255(-1056767524);
			func_254(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_256();
			func_254(iParam0);
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
			func_257();
			func_254(iParam0);
			break;
		case 2019386373:
			func_255(-664252410);
			func_255(2109952320);
			func_254(2019386373);
			break;
		case -664252410:
			func_255(2019386373);
			func_255(2109952320);
			func_254(-664252410);
			break;
		case 2109952320:
			func_255(2019386373);
			func_255(-664252410);
			func_254(2109952320);
			break;
		case -1674179981:
			func_255(-1835851517);
			func_255(-1838352012);
			func_254(-1674179981);
			break;
		case -1835851517:
			func_255(-1674179981);
			func_255(-1838352012);
			func_254(-1835851517);
			break;
		case -1838352012:
			func_255(-1674179981);
			func_255(-1835851517);
			func_254(-1838352012);
			break;
		case -1717960576:
			func_255(210001842);
			func_254(-1717960576);
			break;
		case 210001842:
			func_255(-1717960576);
			func_254(210001842);
			break;
		case -150493654:
			func_255(-1271608261);
			func_255(1846061697);
			func_255(-1145519186);
			func_254(-150493654);
			break;
		case -1271608261:
			func_255(-150493654);
			func_255(1846061697);
			func_255(-1145519186);
			func_254(-1271608261);
			break;
		case 1846061697:
			func_255(-150493654);
			func_255(-1271608261);
			func_255(-1145519186);
			func_254(1846061697);
			break;
		case -1145519186:
			func_255(-150493654);
			func_255(-1271608261);
			func_255(1846061697);
			func_254(-1145519186);
			break;
		case 1766284049:
			func_255(280705402);
			func_255(1926308480);
			func_254(1766284049);
			break;
		case 280705402:
			func_255(1766284049);
			func_255(1926308480);
			func_254(280705402);
			break;
		case 1926308480:
			func_255(1766284049);
			func_255(280705402);
			func_254(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_255(439465264);
				func_254(1609506757);
			}
			else
			{
				func_255(1609506757);
				func_255(439465264);
			}
			break;
		case 439465264:
			if (func_258(1609506757))
			{
				if (bParam1)
				{
					func_254(439465264);
				}
				else
				{
					func_255(439465264);
				}
			}
			break;
		case 1822001510:
			func_255(-1612662716);
			func_254(1822001510);
			break;
		case -1612662716:
			func_255(1822001510);
			func_254(-1612662716);
			break;
		case 1306158345:
			func_255(1952610440);
			func_255(-223469678);
			func_255(-404698347);
			func_255(1517904467);
			func_254(1306158345);
			break;
		case 1952610440:
			func_255(1306158345);
			func_255(-223469678);
			func_255(-404698347);
			func_255(1517904467);
			func_254(1952610440);
			break;
		case -223469678:
			func_255(1306158345);
			func_255(1952610440);
			func_255(-404698347);
			func_255(1517904467);
			func_254(-223469678);
			break;
		case -404698347:
			func_255(1306158345);
			func_255(1952610440);
			func_255(-223469678);
			func_255(1517904467);
			func_254(-404698347);
			break;
		case 1517904467:
			func_255(1306158345);
			func_255(1952610440);
			func_255(-223469678);
			func_255(-404698347);
			func_254(1517904467);
			break;
		case 1376646519:
			func_255(931649776);
			func_255(-434590080);
			func_255(1743048395);
			func_255(449774763);
			func_254(1376646519);
			break;
		case 931649776:
			func_255(1376646519);
			func_255(-434590080);
			func_255(1743048395);
			func_255(449774763);
			func_254(931649776);
			break;
		case -434590080:
			func_255(1376646519);
			func_255(931649776);
			func_255(1743048395);
			func_255(449774763);
			func_254(-434590080);
			break;
		case 1743048395:
			func_255(1376646519);
			func_255(931649776);
			func_255(-434590080);
			func_255(449774763);
			func_254(1743048395);
			break;
		case 449774763:
			func_255(1376646519);
			func_255(931649776);
			func_255(-434590080);
			func_255(1743048395);
			func_254(449774763);
			break;
		case -1414537028:
			func_255(38162571);
			func_255(1350391819);
			func_255(54073871);
			func_254(-1414537028);
			break;
		case 38162571:
			func_255(-1414537028);
			func_255(1350391819);
			func_255(54073871);
			func_254(38162571);
			break;
		case 1350391819:
			func_255(-1414537028);
			func_255(38162571);
			func_255(54073871);
			func_254(1350391819);
			break;
		case 54073871:
			func_255(-1414537028);
			func_255(38162571);
			func_255(1350391819);
			func_254(54073871);
			break;
		case 198200492:
			func_254(198200492);
			func_255(-1124061431);
			func_255(52706132);
			func_255(-259123672);
			break;
		case -1124061431:
			func_255(198200492);
			func_254(-1124061431);
			func_255(52706132);
			func_255(-259123672);
			break;
		case 52706132:
			func_255(198200492);
			func_255(-1124061431);
			func_254(52706132);
			func_255(-259123672);
			break;
		case -259123672:
			func_255(198200492);
			func_255(-1124061431);
			func_255(52706132);
			func_254(-259123672);
			break;
		case -919512195:
			func_254(-919512195);
			func_255(-1925798111);
			func_255(420709909);
			func_255(1703426636);
			break;
		case -1925798111:
			func_254(-1925798111);
			func_255(-919512195);
			func_255(420709909);
			func_255(1703426636);
			break;
		case 420709909:
			func_254(420709909);
			func_255(-919512195);
			func_255(-1925798111);
			func_255(1703426636);
			break;
		case 1703426636:
			func_254(1703426636);
			func_255(-919512195);
			func_255(-1925798111);
			func_255(420709909);
			break;
		case -1223121209:
			func_254(-1223121209);
			func_255(630808005);
			break;
		case 630808005:
			func_254(630808005);
			func_255(-1223121209);
			break;
		case 1453909576:
			func_254(1453909576);
			func_255(1643531967);
			break;
		case 1643531967:
			func_254(1643531967);
			func_255(1453909576);
			break;
		case 0:
			func_254(0);
			func_255(473295046);
			func_255(-1738165526);
			break;
		case 473295046:
			func_254(473295046);
			func_255(0);
			func_255(-1738165526);
			break;
		case -1738165526:
			func_254(-1738165526);
			func_255(0);
			func_255(473295046);
			break;
		case 932909855:
			func_254(932909855);
			func_255(2051822093);
			break;
		case 2051822093:
			func_254(2051822093);
			func_255(932909855);
			break;
		case 405586984:
			func_254(405586984);
			func_255(1509509592);
			func_255(-959357075);
			func_255(-1311865656);
			break;
		case 1509509592:
			func_254(1509509592);
			func_255(405586984);
			func_255(-959357075);
			func_255(-1311865656);
			break;
		case -959357075:
			func_254(-959357075);
			func_255(1509509592);
			func_255(405586984);
			func_255(-1311865656);
			break;
		case -1311865656:
			func_254(-1311865656);
			func_255(1509509592);
			func_255(-959357075);
			func_255(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_254(-524145696);
			}
			else
			{
				func_255(-524145696);
			}
			func_255(1626481264);
			func_255(282809459);
			break;
		case 282809459:
			func_254(282809459);
			func_255(1626481264);
			func_255(-524145696);
			break;
		case 1626481264:
			func_254(1626481264);
			func_255(-524145696);
			func_255(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_254(885203519);
			}
			else
			{
				func_255(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_254(-1080627546);
			}
			else
			{
				func_255(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_258(iParam0))
				{
					func_254(iParam0);
				}
			}
			else if (func_258(iParam0))
			{
				func_255(iParam0);
			}
			break;
	}
}

void func_105(int iParam0)
{
	if (is_valid_interior(iVar587))
	{
		unpin_interior(iVar587);
	}
	if (Local_40.f_205 != iParam0)
	{
		Local_40.f_205 = iParam0;
	}
	func_207(1);
	set_ambient_zone_list_state("AZL_Hideout_Hanging_Dog_Ranch", false, true);
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_31() && !func_30(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

bool func_107()
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

int func_108(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_259(func_111(iParam0));
}

bool func_109(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_110(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_111(int iParam0)
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

int func_112(int iParam0)
{
	return iParam0 & 31;
}

bool func_113(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

int func_114(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_115(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_260(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_116(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_117(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_118(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_119(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_120(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_121(int iParam0, int iParam1)
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

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(iParam0, iParam6);
	func_262(iParam0, iParam5);
	func_263(iParam0, iParam4);
	func_264(iParam0, iParam3);
	func_265(iParam0, iParam2);
	func_266(iParam0, iParam1);
}

int func_123()
{
	return &Global_1899515;
}

bool func_124(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_267(iParam1) || !func_267(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_125(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_126(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_127(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_128(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_129(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_130(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (!func_125(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_131(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_132(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

bool func_133(int iParam0)
{
	if (func_135(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_134(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_268(iParam0, 0, 0);
	if (func_133(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_269(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_270(iParam0, 1);
			}
			else
			{
				func_271(iParam0, 1);
			}
		}
		else
		{
			func_272(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_273())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_135(int iParam0)
{
	return iParam0 != 0;
}

int func_136()
{
	return 0;
}

void func_137()
{
	if (func_65(262144))
	{
		iLocal_607 = (Local_40.f_199 - 1);
		iLocal_609 = 0;
		iLocal_608 = -1;
		iLocal_610 = -1;
	}
	else
	{
		iLocal_609 = 2;
		iLocal_607 = 16;
		iLocal_608 = iVar605 + 1;
		iLocal_610 = ((iVar606 + iVar607) - 1);
	}
}

void func_138()
{
	func_274(&(Local_264[4]->f_1), &(Local_264[4]->f_4), 0, 0);
	func_274(&(Local_264[5]->f_1), &(Local_264[5]->f_4), 0, 2);
	func_274(&(Local_264[0]->f_1), &(Local_264[0]->f_4), 0, 9);
	func_274(&(Local_264[1]->f_1), &(Local_264[1]->f_4), 0, 10);
	func_274(&(Local_264[7]->f_1), &(Local_264[7]->f_4), 0, 11);
	func_274(&(Local_264[2]->f_1), &(Local_264[2]->f_4), 0, 3);
	func_274(&(Local_264[3]->f_1), &(Local_264[3]->f_4), 0, 4);
	func_274(&(Local_264[6]->f_1), &(Local_264[6]->f_4), 0, 12);
	func_274(&(Local_264[8]->f_1), &(Local_264[8]->f_4), 0, 6);
	func_274(&(Local_264[9]->f_1), &(Local_264[9]->f_4), 0, 5);
	func_274(&(Local_264[10]->f_1), &(Local_264[10]->f_4), 0, 7);
	func_274(&(Local_264[11]->f_1), &(Local_264[11]->f_4), 0, 8);
	func_274(&(Local_264[12]->f_1), &(Local_264[12]->f_4), 0, 13);
	func_274(&(Local_264[13]->f_1), &(Local_264[13]->f_4), 0, 14);
	func_274(&(Local_264[14]->f_1), &(Local_264[14]->f_4), 0, 15);
	func_274(&(Local_264[15]->f_1), &(Local_264[15]->f_4), 0, 16);
	func_274(&(Local_264[16]->f_1), &(Local_264[16]->f_4), 0, 17);
	if (!func_65(262144))
	{
		iVar0 = iVar606;
		while (iVar0 <= iVar608)
		{
			func_140(&(Local_264[iVar0]->f_1), &(Local_264[iVar0]->f_4), 2, (iVar0 - iVar606));
			iVar0++;
		}
	}
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] == 0)
		{
			iVar1 = iVar0;
			Jump @68; //curOff = 42
		}
		else if (uParam0[iVar0] == iParam1)
		{
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		(*uParam0)[iVar1] = iParam1;
	}
}

void func_140(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_275(iParam2, iParam3) };
	*uParam1 = func_276(iParam2, iParam3);
}

void func_141(var uParam0, bool bParam1)
{
	*uParam0 = add_cover_point(uParam0->f_1, uParam0->f_4, uParam0->f_6, uParam0->f_5, uParam0->f_7, bParam1);
}

Vector3 func_142(int iParam0, int iParam1)
{
	return func_275(iParam0, iParam1);
}

float func_143(int iParam0, int iParam1)
{
	return func_276(iParam0, iParam1);
}

void func_144(int iParam0)
{
	Global_1898091 = (&Global_1898091 - (Global_1898091 && iParam0));
}

bool func_145(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

Vector3 func_146(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 9:
			vVar0 = { 1897.123f, -1863.157f, 46.0415f };
			break;
		case 16:
			vVar0 = { -2205.06f, 704.86f, 107.62f };
			break;
		case 36:
			vVar0 = { -45.93f, 1230.82f, 175.19f };
			break;
		case 79:
			vVar0 = { 2351f, 1335.5f, 102.4f };
			break;
		case 125:
			vVar0 = { -3962.021f, -2137.957f, -5.9562f };
			break;
		case 127:
			vVar0 = { -1411.857f, -2333.451f, 42.1056f };
			break;
		case 118:
			vVar0 = { -4201.647f, -3440.702f, 47.5009f };
			break;
		case 129:
			vVar0 = { -5415.055f, -3654.25f, -13.4989f };
			break;
		case 114:
			vVar0 = { -5984.121f, -3249.982f, -22.5604f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	if (get_distance_between_coords(vVar0, _0xf70f00013a62f866(func_277(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_147(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_148(int iParam0, bool bParam1)
{
	switch (iParam0->f_205)
	{
		case 79:
			sVar0 = "AZ_hideout_beaver_hollow";
			break;
		case 118:
			sVar0 = "AZ_hideout_fort_mercer";
			break;
		case 16:
			sVar0 = "AZ_hideout_hanging_dog_ranch";
			break;
		case 9:
			sVar0 = "AZ_hideout_shady_belle";
			break;
		case 36:
			sVar0 = "AZ_hideout_six_point_cabin";
			break;
		case 127:
			sVar0 = "AZ_hideout_thieves_landing";
			break;
		case 125:
			sVar0 = "AZ_hideout_Twin_Rocks";
			break;
		default:
			return;
	}
	if (func_145(&(iParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_182(&(iParam0->f_5), 262144);
	}
	else
	{
		func_278(&(iParam0->f_5), 262144);
	}
	set_ambient_zone_state(sVar0, bParam1, true);
	set_ambient_zone_state_persistent(sVar0, true, true);
}

void func_149(var uParam0)
{
	func_280(uParam0, (func_279(uParam0) - 6f));
	func_281(uParam0, 1);
}

void func_150(var uParam0)
{
	func_282(uParam0, 0);
	func_283(uParam0, 0);
	func_152(uParam0, 1);
	func_284(uParam0, 1);
	func_285(uParam0, 0);
	func_286(uParam0, 1);
	func_287(uParam0, 1, 1, 1);
}

void func_151(var uParam0)
{
	func_61(uParam0, 1);
	func_288(uParam0, 1);
	func_289(uParam0, 1);
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(&(uParam0->f_1), 256);
	}
	else
	{
		func_163(&(uParam0->f_1), 256);
	}
}

void func_153(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_154(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_155(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_156(char* sParam0)
{
	if (*sParam0 <= 1)
	{
		return;
	}
	iVar0 = (*sParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = get_random_int_in_range(0, iVar0);
		uVar2 = sParam0[iVar1];
		(*sParam0)[iVar1] = sParam0[iVar0];
		(*sParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_157(int iParam0)
{
	switch (iParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

bool func_158(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_109(iParam0))
	{
		return false;
	}
	return func_290((*Global_1347702)[iParam0]->f_15);
}

void func_159(int iParam0)
{
}

void func_160(int iParam0)
{
	iParam0->f_136.f_9 = { 0f, 0f, 0f };
	iParam0->f_136.f_12 = 1;
	iParam0->f_136.f_13 = 30f;
	iParam0->f_136.f_14 = 100f;
	iParam0->f_136.f_15 = -1;
	iParam0->f_136.f_16 = 1500;
	iParam0->f_136.f_17 = 1000;
	iParam0->f_136.f_6 = 25f;
}

void func_161(int iParam0)
{
	iVar0 = 0;
	switch (iParam0->f_205)
	{
		case 79:
			iVar0 = 325633398;
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 214473058;
			}
			else
			{
				iVar0 = 1811505867;
			}
			break;
		case 9:
			iVar0 = -2009656535;
			break;
		case 36:
			iVar0 = 214473058;
			break;
		case 125:
			iVar0 = 1004822587;
			break;
		case 127:
			iVar0 = 1004822587;
			break;
		default:
			iParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { func_237(953441746, iVar0) };
		stat_id_get_int(&Var1, &(iParam0->f_200));
	}
}

void func_162(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_291(uParam0, iParam1, sParam2))
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

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_164(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_165(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			func_292(uParam1);
			func_293(uParam2);
			if (is_string_null_or_empty(sParam3) || func_294(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!func_295(uParam1))
			{
				return 0;
			}
			if (!func_296(uParam2))
			{
				return 0;
			}
			if (!is_string_null_or_empty(sParam3))
			{
				if (!_text_database_has_loaded(sParam3))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

void func_166(var uParam0, int iParam1, bool bParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = func_297(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_174(&(uParam0->f_7), 2))
	{
		if (func_174(&(uParam0->f_7), 8))
		{
			iVar0 = func_297(-1038436471, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			_set_ped_on_mount(uParam0->f_5, iVar0, -1, true);
		}
		set_blocking_of_non_temporary_events(uParam0->f_5, true);
		request_ped_visibility_tracking(uParam0->f_5);
		set_ped_relationship_group_hash(uParam0->f_5, iParam1);
		if (func_174(&(uParam0->f_7), 4))
		{
			set_ped_sphere_defensive_area(uParam0->f_5, uParam0->f_1, 2f, 1, 0, 0);
		}
		set_entity_visible(uParam0->f_5, !bParam2);
	}
	else
	{
		func_298(uParam0->f_5, 0, 0);
	}
	set_ped_keep_task(uParam0->f_5, true);
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_1(iParam0, iParam1);
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_171(&(uParam0->f_7), 1, 0);
	}
	else
	{
		func_180(&(uParam0->f_7), 1);
	}
}

int func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_299(iParam3, 1);
	bVar1 = func_299(iParam3, 2);
	bVar2 = !func_299(iParam3, 4);
	bVar3 = func_299(iParam3, 8);
	bVar4 = !func_299(iParam3, 16);
	bVar5 = func_299(iParam3, 32);
	bVar6 = func_299(iParam3, 64);
	return func_300(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_170(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

float func_172(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

float func_173(float fParam0)
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

bool func_174(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_175(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	if (!func_167(iParam0, 0, 1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	switch (iParam5)
	{
		case 0:
			task_use_nearest_scenario_chain_to_coord(0, vParam1, fParam4, bParam7, bParam8, false, false);
			break;
		case 2:
			_task_use_nearest_scenario_to_coord(0, vParam1, fParam4, bParam7, false, bParam8, false, false);
			break;
		case 1:
			task_use_nearest_scenario_chain_to_coord_warp(0, vParam1, fParam4, bParam7, bParam8, false, false);
			break;
		case 3:
			task_use_nearest_scenario_to_coord_warp(0, vParam1, fParam4, bParam7, false, bParam8, false, false);
			break;
	}
	if (bParam8)
	{
		if (_does_volume_exist(iParam6))
		{
			task_wander_in_volume(0, iParam6, 1077936128, 1086324736, 1);
		}
		else
		{
			task_wander_in_area(0, vParam1, fParam4, 1077936128, 1086324736, 1);
		}
	}
	func_301(iParam0, &iVar0, 0, 0, 1, 1);
}

char* func_176(int iParam0)
{
	switch (iParam0)
	{
		case 347599949:
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case 50483426:
			return "0357_G_M_M_UniDuster_02_WHITE_01";
		case -1273613561:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		default:
			break;
	}
	return "0355_G_M_M_UniDuster_01_WHITE_01";
}

void func_177(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_167(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

float func_178(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_179(int iParam0)
{
	return 18f;
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_181(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_302(iParam0, Global_36, 1);
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

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_183(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return false;
	}
	return true;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_167((*iParam0)[iVar0]->f_5, 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_185(int iParam0, int iParam1)
{
	if (iParam1 == iParam0->f_3)
	{
	}
	iParam0->f_3 = iParam1;
}

void func_186(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_187(int iParam0)
{
	uLocal_598 = (uVar595 || iParam0);
}

bool func_188()
{
	if (get_distance_between_coords(func_303(), Global_36, false) >= 25f)
	{
		return false;
	}
	Local_40.f_190 = func_304(&Local_264, &Local_40, 0, 0, 0, 1);
	if (Local_40.f_190 < 0)
	{
		return false;
	}
	Local_40.f_190 = 1;
	Local_40.f_192 = Local_264[Local_40.f_190]->f_5;
	func_211(Local_264[Local_40.f_190], 831283580, 0);
	iVar0 = Local_264[0]->f_5;
	if (!is_entity_in_volume(Global_35, Local_15, true, 0))
	{
		if (func_189(0, 100))
		{
			func_194(Local_40.f_192, 0, "ITS_MALE_EXTREME_RECOGNIZE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_194(Local_40.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_305(&uLocal_557, 0);
	}
	open_sequence_task(&iVar1);
	task_aim_gun_at_entity(0, Global_35, 8000, 0, 1);
	task_turn_ped_to_face_entity(0, Global_35, 6000, -1082130432, -1082130432, -1082130432);
	_task_use_nearest_scenario_to_coord(0, get_entity_coords(Local_40.f_192, true, false), 30f, 0, false, false, false, false);
	func_301(Local_40.f_192, &iVar1, 0, 0, 1, 1);
	func_306(Local_40.f_192, 10000);
	if (func_167(iVar0, 0, 1))
	{
		func_307(iVar0, Global_36, 3, 1, 1);
		open_sequence_task(&iVar1);
		task_turn_ped_to_face_entity(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
		func_301(iVar0, &iVar1, 0, 0, 1, 1);
		func_306(iVar0, 2000);
		set_ped_using_action_mode(iVar0, true, 2000, 0);
	}
	fLocal_599 = func_302(Local_40.f_192, Global_36, 1);
	func_308(Local_40.f_205);
	func_309(1);
	trigger_music_event("SP_HIDEOUTS_GENERAL_START");
	return true;
}

bool func_189(int iParam0, int iParam1)
{
	if (!func_310(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_311(iParam0);
	}
	bVar1 = get_random_int_in_range(0, 100) < iVar0;
	return bVar1;
}

void func_190()
{
	iLocal_555 = 1;
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_312(iVar0))
		{
		}
		iVar0++;
	}
	func_313(&iLocal_556);
	func_305(&(Local_40.f_184), 1);
	func_305(&uLocal_566, 1);
	Local_40.f_187 = 16500;
	func_134(&(iLocal_591[2]), 0, 0f, 0, 0, 0f, 0, 0);
	func_134(&(iLocal_591[3]), 0, 0f, 0, 0, 0f, 0, 0);
	func_185(&Local_40, 5);
	trigger_music_event("SP_HIDEOUTS_GENERAL_ACTION");
	func_314(&uLocal_627);
	func_68(1);
	if (_does_volume_exist(Local_15.f_23))
	{
		if (_0x19c7567d2f2287d6(Local_15.f_23, 7))
		{
		}
	}
}

void func_191()
{
	iVar0 = 0;
	while (iVar0 <= (Local_40.f_199 - 1))
	{
		if (func_167(Local_264[iVar0]->f_5, 0, 1))
		{
			_0xa3db37edf9a74635(player_id(), Local_264[iVar0]->f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

bool func_192()
{
	if (!func_315(Global_35, Local_15, 1, 0))
	{
		return false;
	}
	Local_40.f_190 = func_304(&Local_264, &Local_40, 0, 0, 4, 16);
	if (Local_40.f_190 < 0)
	{
		return false;
	}
	Local_40.f_192 = Local_264[Local_40.f_190]->f_5;
	return true;
}

bool func_193()
{
	if (func_65(32768))
	{
		return false;
	}
	if (is_entity_in_volume(Global_35, Local_15, true, 0))
	{
		if (func_316())
		{
			return true;
		}
	}
	else
	{
		fVar0 = func_302(Local_40.f_192, Global_36, 1);
		if (func_317(-2f, 1, 0, 0))
		{
			if (fVar0 < (fVar597 - 15f) || fVar0 < 6f)
			{
				return true;
			}
		}
		if (func_317(0, 1, 0, 0) && func_318(&uLocal_557, 16f))
		{
			if ((fVar0 < (fVar597 + 2f) && is_ped_facing_ped(Global_35, Local_40.f_192, 80f)) && is_entity_on_screen(Local_40.f_192))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_194(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_319(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_195()
{
	switch (iVar548)
	{
		case 0:
			if (func_167(Local_40.f_192, 0, 1))
			{
				func_320(Local_40.f_192, Global_35, -1);
				func_305(&uLocal_575, 1);
				func_321(1);
			}
			break;
		case 1:
			if (is_ped_facing_ped(Local_40.f_192, Global_35, 60f) || func_318(&uLocal_575, 2f))
			{
				func_314(&uLocal_575);
				task_aim_gun_at_entity(Local_40.f_192, Global_35, 8000, 0, 1);
				func_194(Local_40.f_192, 0, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_211(Local_264[Local_40.f_190], 831283580, 0);
				func_321(2);
			}
			break;
		case 2:
			if (!func_65(262144))
			{
				iVar1 = 12;
			}
			else
			{
				iVar1 = (Local_40.f_199 - 1);
			}
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				iVar0++;
			}
			if (func_318(&uLocal_575, 2f))
			{
				func_321(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_196()
{
	if (func_318(&uLocal_566, 6f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_322(iVar0))
		{
			set_ped_reset_flag(Local_264[iVar0]->f_5, 27, true);
		}
		iVar0++;
	}
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		_0x19c7567d2f2287d6(Local_15.f_4, 15);
		iVar1 = Local_40.f_199;
	}
	else
	{
		iVar1 = 2;
	}
	fVar2 = 0.2f;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iVar608 >= Local_40.f_199)
		{
			iLocal_611 = 0;
		}
		if (func_323(iVar608))
		{
			iLocal_611 = iVar608 + 1;
		}
		else
		{
			if (func_167(Local_264[iVar608]->f_5, 0, 1) && is_ped_in_combat(Local_264[iVar608]->f_5, 0))
			{
				StringCopy(&cVar3, "Ped ", 24);
				StringIntConCat(&cVar3, iVar608, 24);
				StringConCat(&cVar3, " ", 24);
				if (func_174(&(Local_264[iVar608]->f_7), 4096))
				{
					StringConCat(&cVar3, "Flag set", 24);
					if (func_315(Local_264[iVar608]->f_5, Local_15.f_4, 1, 0) || !func_315(Global_35, Local_15, 1, 0))
					{
						func_180(&(Local_264[iVar608]->f_7), 4096);
						set_ped_combat_movement(Local_264[iVar608]->f_5, 1);
						set_ped_combat_range(Local_264[iVar608]->f_5, 0);
					}
				}
				else if (!func_174(&(Local_264[iVar608]->f_7), 4096))
				{
					if (!func_315(Local_264[iVar608]->f_5, Local_15.f_4, 1, 0))
					{
						StringConCat(&cVar3, "Flag NOT set", 24);
						func_171(&(Local_264[iVar608]->f_7), 4096, 0);
					}
				}
			}
			iLocal_611 = iVar608 + 1;
		}
		iVar0++;
	}
}

bool func_198()
{
	if (func_65(1))
	{
		return true;
	}
	if (!func_324())
	{
		func_187(1);
	}
	return false;
}

void func_199()
{
	if (!func_65(16))
	{
		if (func_325(5))
		{
			func_187(16);
		}
	}
}

bool func_200()
{
	if (!func_65(262144))
	{
		func_326();
		func_327();
		func_328();
		func_329();
		func_330();
		func_331();
	}
	func_332();
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		func_333(&Local_40, &Local_264, iVar0, &uVar1, 2096805056);
		iVar0++;
	}
	switch (iVar546)
	{
		case 0:
			func_334(1);
			break;
		case 1:
			func_334(2);
			break;
		case 2:
			if (func_335(Local_40.f_199, &Local_264, "CALLOUT_JUST_KILL_EM_NEUTRAL", Local_40.f_198, 4, 0))
			{
				func_334(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

float func_201(bool bParam0)
{
	if (!func_336(bParam0))
	{
		return bParam0->f_1;
	}
	if (func_337(bParam0))
	{
		return bParam0->f_2;
	}
	return (func_338() - bParam0->f_1);
}

void func_202()
{
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (!func_167(Local_264[iVar0]->f_5, 0, 1))
		{
		}
		else
		{
			fVar1 = func_302(Local_264[iVar0]->f_5, Global_36, 1);
			if (fVar1 < 1f)
			{
				func_171(&(Local_264[iVar0]->f_7), 1, 0);
			}
		}
		iVar0++;
	}
}

bool func_203(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 0)
	{
		iVar0 = iParam2;
	}
	else
	{
		iVar0 = iParam0->f_198;
	}
	if (iVar0 < iParam0->f_189)
	{
		switch (iParam0->f_205)
		{
			case 79:
				vVar3 = { 2279.824f, 1490.092f, 83.44096f };
				break;
			case 16:
				vVar3 = { -2142.385f, 797.8377f, 135.6134f };
				break;
			case 36:
				vVar3 = { -50.2002f, 1267.741f, 171.5688f };
				break;
		}
		iVar1 = 0;
		while (iVar1 < iParam0->f_199)
		{
			func_339((*iParam1)[iVar1], iParam0->f_207, &uVar2, iVar1, vVar3);
			iVar1++;
		}
		if (!func_336(&(iParam0->f_211)))
		{
			func_305(&(iParam0->f_211), 0);
		}
		func_182(&(iParam0->f_5), 128);
		return true;
	}
	return false;
}

bool func_204()
{
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_167(Local_264[iVar0]->f_5, 0, 1))
		{
			if (func_174(&(Local_264[iVar0]->f_7), 1) && does_blip_exist(Local_264[iVar0]->f_6))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_205(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_340(iParam1, iParam0))
	{
		return false;
	}
	if (!func_145(&(iParam0->f_5), 256))
	{
		set_ped_config_flag(Global_35, 141, false);
		func_341(iParam0);
		func_342(iParam0);
		if (bParam4)
		{
			func_343(iParam0->f_205, bParam3, 0);
		}
		func_148(iParam0, 0);
		func_182(&(iParam0->f_5), 256);
		func_182(&(iParam0->f_5), 8);
	}
	return true;
}

bool func_206(int iParam0)
{
	if (!func_145(&(iParam0->f_5), 256) && !func_324())
	{
		iVar0 = func_36(iParam0->f_205);
		if (func_214(iVar0) == 3 || func_214(iVar0) == 4)
		{
			func_344(iParam0->f_205);
			func_182(&(iParam0->f_5), 4096);
		}
		func_345("H_HIDE_FAIL", 7500, 0, 1, 0, 0, -1, -1, 0);
		func_182(&(iParam0->f_5), 256);
		return true;
	}
	return false;
}

void func_207(bool bParam0)
{
	if (_does_volume_exist(Local_15.f_23))
	{
		_0x2c87c3e1c7b96ee2(Local_15.f_23);
	}
	trigger_music_event("SP_HIDEOUTS_GENERAL_IDLE");
	func_346();
	func_347();
	if (bParam0)
	{
		Local_40.f_205 = 16;
		func_348(&Local_264, &Local_40, &uLocal_447, get_id_of_this_thread(), "HANGING");
	}
}

void func_208(int iParam0, int iParam1)
{
	if (!func_349(iParam1->f_205) && !func_80(&Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (does_entity_exist((*iParam0)[iVar0]->f_5))
			{
				if (has_entity_been_damaged_by_entity((*iParam0)[iVar0]->f_5, Global_35, 1, 1))
				{
					func_350(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_351((*iParam1)[iVar0]->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !get_ped_config_flag((*iParam1)[iVar0]->f_5, 9, false))
		{
			iParam0->f_192 = (*iParam1)[iVar0]->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (func_352(iParam0, (*iParam1)[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar1 = func_145(&(iParam1->f_5), 128);
	iVar0 = 0;
	while (iVar0 < iParam1->f_199)
	{
		func_353((*iParam0)[iVar0], iParam1->f_202, iParam2, &(iParam1->f_211), iParam3, bVar1);
		iVar0++;
	}
}

void func_211(var uParam0, int iParam1, int iParam2)
{
	func_354(uParam0, iParam1, iParam2);
}

void func_212(int iParam0)
{
	iLocal_549 = iParam0;
}

bool func_213(int iParam0)
{
	if (!func_145(&(iParam0->f_5), 1024))
	{
		if (_0xf256a75210c5c0eb(iParam0->f_215, Global_36))
		{
			if (func_167(Global_35, 0, 1))
			{
				func_355(iParam0, 1);
				func_182(&(iParam0->f_5), 1024);
				return true;
			}
		}
	}
	else if (!_0xf256a75210c5c0eb(iParam0->f_215, Global_36) && func_214(Global_1888801[iParam0->f_205]) != 3)
	{
		if (func_167(Global_35, 0, 1))
		{
			func_355(iParam0, 0);
			func_278(&(iParam0->f_5), 1024);
			return true;
		}
	}
	return false;
}

int func_214(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_356(iParam0);
}

void func_215(int iParam0)
{
	if (func_357(302))
	{
		return;
	}
	if (func_28() == iParam0->f_205)
	{
		return;
	}
	if (!func_358(iParam0->f_205))
	{
		return;
	}
	if (func_25(32, 0, 1))
	{
		return;
	}
	if (func_34(83, 0))
	{
		return;
	}
	if (!func_5(iParam0->f_205, 0))
	{
		return;
	}
	if (func_145(&(iParam0->f_5), 1024))
	{
		if (func_359(iParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_360(302, &iVar0, &iVar1);
			func_361(iVar0, iVar1);
			func_362(&iVar0, &iVar1);
			func_363("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_216()
{
	return func_132(2);
}

void func_217(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_364(iParam0, 1);
		func_365(2);
	}
	else
	{
		if (func_132(2))
		{
			func_364(iParam0, 0);
		}
		func_144(2);
	}
}

void func_218(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_145(&(iParam0->f_5), 32768))
		{
			_0xde5faa741a781f73(player_id(), 1);
			func_182(&(iParam0->f_5), 32768);
		}
	}
	else if (func_145(&(iParam0->f_5), 32768))
	{
		_0xde5faa741a781f73(player_id(), 0);
		func_278(&(iParam0->f_5), 32768);
	}
}

void func_219(bool bParam0)
{
	if (bParam0)
	{
		if (!func_366())
		{
			func_365(8);
		}
	}
	else if (func_366())
	{
		func_144(8);
	}
}

bool func_220(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_31())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_221()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_367())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_25(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_368(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_370(func_369(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_371(iParam0) || func_372(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (is_string_null_or_empty(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_223(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_224(int iParam0)
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

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_226(int iParam0)
{
	if (!func_223(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_229(int iParam0, int iParam1)
{
	if (!func_373(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_230(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

float func_231(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_232(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_374(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_233(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _show_location_notification(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_234(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_235(int iParam0)
{
	if (func_371(iParam0))
	{
		if (!func_372(45))
		{
			return false;
		}
	}
	iVar0 = func_224(iParam0);
	if (func_375())
	{
		if (!func_102((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_237(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_238(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_239()
{
	return Global_1894899->f_2;
}

bool func_240(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_241(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_242()
{
	return Global_1310750->f_16037;
}

bool func_243(int iParam0, int iParam1)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_244(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	if (func_376(64) && func_377(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_245(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_246(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_240(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_378(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_247(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1392240->f_1[iVar0]->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_248(int iParam0)
{
	if (func_133(iParam0) && func_379())
	{
		remove_door_from_system(iParam0);
	}
}

void func_249(int iParam0)
{
	if (func_47(Global_1914319->f_3[iParam0]->f_21) && func_380(Global_1914319->f_3[iParam0]->f_21))
	{
		func_381(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_382(Global_1914319->f_3[iParam0]->f_10, 0);
	func_383(iParam0, 536870912);
	iVar1 = func_384(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_248(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_385(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_386(iParam0, 0);
}

bool func_250(int iParam0)
{
	return func_387(iParam0, 16, 1);
}

bool func_251(int iParam0)
{
	return func_252(iParam0, 32, 1);
}

bool func_252(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_388(iParam0))
		{
			return false;
		}
	}
	func_389(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(func_390(iParam0)))
	{
		func_391(iParam0, 4, 1);
		func_391(iParam0, 17, 1);
		func_391(iParam0, 1, 1);
		func_391(iParam0, 2, 1);
		return;
	}
	if (!func_392(iParam0))
	{
		return;
	}
	if (func_251(iParam0) && !bParam2)
	{
		return;
	}
	if (func_250(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && does_entity_exist(func_390(iParam0))) && func_393(iParam0) < 5000f) && !is_screen_faded_out())
	{
		return;
	}
	func_391(iParam0, 4, 1);
	func_391(iParam0, 17, 1);
	func_391(iParam0, 1, 1);
	func_391(iParam0, 2, 1);
	func_394(iParam0, func_390(iParam0));
	func_395(iParam0, 1, 1, 1, bParam4);
}

void func_254(int iParam0)
{
	iVar0 = func_396(iParam0, 1);
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

void func_255(int iParam0)
{
	iVar0 = func_396(iParam0, 1);
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

void func_256()
{
	func_255(-939420910);
	func_255(-1187950766);
	func_255(356365161);
	func_255(753127042);
	func_255(-2038424081);
	func_255(1884271742);
	func_255(459290420);
}

void func_257()
{
	func_255(704802028);
	func_255(588987611);
	func_255(2008888900);
	func_255(1649996811);
	func_255(227918160);
	func_255(168171957);
	func_255(1193080109);
	func_255(-491981251);
	func_255(-639037538);
	func_255(-618620429);
}

bool func_258(int iParam0)
{
	iVar0 = func_396(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_259(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_260(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_261(int iParam0, int iParam1)
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

void func_262(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_263(int iParam0, int iParam1)
{
	iVar0 = func_116(*iParam0);
	iVar1 = func_115(*iParam0);
	if (iParam1 < 1 || iParam1 > func_121(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_264(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_265(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_266(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_267(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_120(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_119(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_118(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_115(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_116(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_117(iParam0);
	if (iVar5 < 1 || iVar5 > func_121(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

void func_269(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_133(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_270(int iParam0, bool bParam1)
{
	if (func_133(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_271(int iParam0, bool bParam1)
{
	if (func_133(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_272(int iParam0, bool bParam1)
{
	if (func_133(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_273()
{
	return true;
}

void func_274(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	func_140(uParam0, uParam1, iParam2, iVar0);
}

Vector3 func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2239.086f, 731.4213f, 126.8743f;
				case 1:
					return -2211.511f, 727.8998f, 126.7459f;
				case 2:
					return -2213.341f, 725.5923f, 127.8459f;
				case 3:
					return -2207.076f, 702.7548f, 120.9932f;
				case 4:
					return -2204.292f, 701.1174f, 120.9065f;
				case 5:
					return -2184.479f, 716.0485f, 121.365f;
				case 6:
					return -2182.99f, 713.1871f, 121.2193f;
				case 7:
					return -2197.853f, 748.804f, 122.682f;
				case 8:
					return -2241.76f, 709.5347f, 120.9811f;
				case 9:
					return -2181.485f, 674.349f, 118.9245f;
				case 10:
					return -2175.783f, 676.358f, 119.1763f;
				case 11:
					return -2154.695f, 703.457f, 120.4095f;
				case 12:
					return -2214.539f, 695.5394f, 120.7059f;
				case 13:
					return -2196.974f, 732.5887f, 121.893f;
				case 14:
					return -2220.024f, 737.211f, 122.3224f;
				case 15:
					return -2220.817f, 734.4677f, 122.2189f;
				case 16:
					return -2215.213f, 724.9563f, 126.6924f;
				case 17:
					return -2211.383f, 727.0737f, 126.694f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2165.668f, 697.6175f, 120.1345f;
				case 1:
					return -2156.594f, 700.3184f, 120.1769f;
				case 2:
					return -2207.846f, 710.9598f, 121.2715f;
				case 3:
					return -2184.639f, 721.9179f, 121.6566f;
				case 4:
					return -2203.078f, 703.4612f, 120.9872f;
				case 5:
					return -2211.82f, 727.1941f, 126.7459f;
				case 6:
					return -2188.947f, 739.0814f, 122.7604f;
				case 7:
					return -2225.564f, 721.2993f, 121.6953f;
				case 8:
					return -2205.198f, 688.3999f, 120.2721f;
				case 9:
					return -2201.518f, 730.3251f, 121.8811f;
				case 10:
					return -2188.512f, 728.1428f, 121.5633f;
				case 11:
					return -2212.953f, 725.0867f, 126.7433f;
				case 12:
					return -2215.519f, 735.6501f, 126.7459f;
				case 13:
					return -2220.87f, 732.6031f, 126.7458f;
				case 14:
					return -2238.716f, 732.028f, 134.8867f;
				case 15:
					return -2215.8f, 737.1833f, 122.2836f;
				case 16:
					return -2223.617f, 736.6936f, 122.3548f;
				case 17:
					return -2217.507f, 740.1511f, 126.7459f;
				case 18:
					return -2221.892f, 734.0942f, 126.7458f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2214.278f, 726.3344f, 121.8427f;
				case 1:
					return -2213.874f, 728.0781f, 121.9102f;
				case 2:
					return -2213.294f, 732.6716f, 122.0753f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2174.467f, 717.715f, 121.4657f;
				case 1:
					return -2174.198f, 722.3304f, 121.4641f;
				case 2:
					return -2178.391f, 719.8176f, 125.0021f;
				case 3:
					return -2172.199f, 715.5494f, 121.4657f;
				case 4:
					return -2178.231f, 714.4116f, 121.4658f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2181.971f, 700.0224f, 120.5177f;
				case 1:
					return -2196.003f, 717.3415f, 121.4383f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2214.143f, 722.3033f, 121.6883f;
				case 1:
					return -2212.281f, 724.3179f, 121.7576f;
				case 2:
					return -2210.563f, 721.6714f, 121.5998f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -2179.626f, 721.6503f, 125.2021f;
				case 1:
					return -2177.274f, 719.6866f, 125.2064f;
				case 2:
					return -2175.853f, 715.3982f, 125.1131f;
				case 3:
					return -2175.05f, 713.8082f, 125.2081f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 339.2611f;
				case 1:
					return 207.3486f;
				case 2:
					return 208.2606f;
				case 3:
					return 566.6668f;
				case 4:
					return 161.2667f;
				case 5:
					return 110.9196f;
				case 6:
					return 123.455f;
				case 7:
					return -45.36f;
				case 8:
					return -18.8163f;
				case 9:
					return 554.6566f;
				case 10:
					return 208.1663f;
				case 11:
					return 86.1663f;
				case 12:
					return 180.6566f;
				case 13:
					return -242.351f;
				case 14:
					return 163.0894f;
				case 15:
					return -64.9106f;
				case 16:
					return 30.2908f;
				case 17:
					return 30.191f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 200.052f;
				case 1:
					return 114.052f;
				case 2:
					return -148.1992f;
				case 3:
					return 205.2408f;
				case 4:
					return 156.052f;
				case 5:
					return -147.9481f;
				case 6:
					return 130.0519f;
				case 7:
					return 104.0519f;
				case 8:
					return 244.1844f;
				case 9:
					return 119.649f;
				case 10:
					return -66.351f;
				case 11:
					return -136.2232f;
				case 12:
					return 99.1534f;
				case 13:
					return 299.1534f;
				case 14:
					return -121.945f;
				case 15:
					return -156.9106f;
				case 16:
					return 213.0894f;
				case 17:
					return 106.2908f;
				case 18:
					return -99.7092f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 211.4397f;
				case 1:
					return 207.4397f;
				case 2:
					return 187.4397f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 322.5399f;
				case 1:
					return 218.9355f;
				case 2:
					return 202.1689f;
				case 3:
					return 46.9725f;
				case 4:
					return -343.3276f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 417.4069f;
				case 1:
					return 331.4069f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -167.4217f;
				case 1:
					return -149.4217f;
				case 2:
					return -141.4217f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -147.7302f;
				case 1:
					return -155.7302f;
				case 2:
					return -61.7302f;
				case 3:
					return -63.7302f;
			}
			break;
	}
	return 0f;
}

int func_277(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_278(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_279(var uParam0)
{
	return uParam0->f_24;
}

void func_280(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_281(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 1);
	}
	else
	{
		func_164(uParam0, 1);
	}
}

void func_282(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(&(uParam0->f_1), 16384);
	}
	else
	{
		func_163(&(uParam0->f_1), 16384);
	}
}

void func_283(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(&(uParam0->f_1), 2048);
	}
	else
	{
		func_163(&(uParam0->f_1), 2048);
	}
}

void func_284(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 16);
	}
	else
	{
		func_164(uParam0, 67108864);
		func_164(uParam0, 16);
	}
}

void func_285(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(&(uParam0->f_1), 128);
	}
	else
	{
		func_163(&(uParam0->f_1), 128);
	}
}

void func_286(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 256);
	}
	else
	{
		func_164(uParam0, 256);
	}
}

void func_287(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_163(uParam0, 268435456);
	}
	else
	{
		func_164(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_163(uParam0, 1073741824);
	}
	else
	{
		func_164(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_163(uParam0, 536870912);
	}
	else
	{
		func_164(uParam0, 536870912);
	}
}

void func_288(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 2);
	}
	else
	{
		func_164(uParam0, 2);
	}
}

void func_289(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 8);
	}
	else
	{
		func_164(uParam0, 8);
	}
}

bool func_290(int iParam0)
{
	iVar0 = func_214(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_291(var uParam0, int iParam1, char* sParam2)
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

void func_292(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			request_anim_dict(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_293(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			request_model(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

bool func_294(char* sParam0, char* sParam1)
{
	if (!is_string_null_or_empty(sParam0))
	{
		fVar0 = _text_database_request(sParam0);
		if (fVar0 == 0)
		{
			return false;
		}
	}
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	fVar0 = _text_database_request(sParam1);
	if (fVar0 == 0)
	{
		return false;
	}
	return true;
}

bool func_295(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_string_null_or_empty(uParam0[iVar0]))
		{
			iVar1 = 1;
		}
		else if (!has_anim_dict_loaded(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_296(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0 && !has_model_loaded(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_297(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_397(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_298(int iParam0, bool bParam1, bool bParam2)
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

bool func_299(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_300(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_398(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_398(iVar4) && iVar4 != iVar0)
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
	if (func_24() == -1 && !func_399(iVar0))
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
				if (func_399(-183018591))
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
		if (iParam0 != Global_35 && func_398(iVar0))
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
		func_400(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_401(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_402(iVar0))
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

void func_301(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

float func_302(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_303()
{
	return func_142(0, 9);
}

int func_304(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	if (iParam5 == 0)
	{
		if (iParam1->f_199 > 0)
		{
			iParam5 = (iParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = func_403((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam1->f_191 == -1)
	{
		iParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam1->f_191 > ((iParam4 + iVar2) - 1) || iParam1->f_191 < iParam4)
		{
			iParam1->f_191 = iParam4;
		}
		if (!func_404((*iParam0)[iParam1->f_191]->f_5) || bParam3)
		{
			if (func_405((*iParam0)[iParam1->f_191]->f_5, &(iParam1->f_155), &(iParam1->f_183), 0))
			{
				if (bParam2)
				{
					func_354((*iParam0)[iParam1->f_191], 831283580, 0);
				}
				return iParam1->f_191;
			}
		}
		else if (func_404((*iParam0)[iParam1->f_191]->f_5))
		{
			if (func_178((*iParam0)[iParam1->f_191]->f_5, Global_35, 0, 1) < 2f && has_entity_clear_los_to_entity((*iParam0)[iParam1->f_191]->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					func_354((*iParam0)[iParam1->f_191], 831283580, 0);
				}
				return iParam1->f_191;
			}
		}
		iParam1->f_191++;
		iVar0++;
	}
	return -1;
}

void func_305(var uParam0, bool bParam1)
{
	if (bParam1 || !func_336(uParam0))
	{
		func_314(uParam0);
	}
}

void func_306(int iParam0, int iParam1)
{
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	_0x66f9eb44342bb4c5(iParam0, &Var0);
}

void func_307(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_1(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_406(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

void func_308(int iParam0)
{
	if (!func_43(iParam0))
	{
		return;
	}
}

void func_309(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_310(int iParam0, bool bParam1)
{
	if (!func_407(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

bool func_312(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 4:
			_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_2, 0, 0, 0);
			func_408(Local_264[iVar0], 0, 0, 0, 0, 0);
			break;
		case 5:
			func_171(&(Local_264[iVar0]->f_7), 64, 0);
			_0x986f7a51ee3e1f92(Local_264[iVar0]->f_5, 1);
			break;
		case 2:
			*vVar1[0] = { func_142(1, 2) };
			set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, *vVar1[0], 5.5f, 0, 0, 0);
			func_408(Local_264[iVar0], 0, 0, 0, 0, 0);
			break;
		case 3:
			*vVar1[0] = { func_142(1, 4) };
			set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, *vVar1[0], 5f, 0, 0, 0);
			func_408(Local_264[iVar0], 1, func_409(), 1, func_409(), 0);
			break;
		case 6:
			switch (iVar552)
			{
				case 1:
					*vVar1[0] = { func_142(1, 8) };
					func_408(Local_264[iVar0], 0, 1, 0, 0, 0);
					set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, *vVar1[0], 5f, 0, 0, 0);
					break;
				default:
					set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, *vVar1[0], 5f, 0, 0, 0);
					func_408(Local_264[iVar0], 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 8:
			_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_24, 0, 0, 0);
			func_408(Local_264[iVar0], 0, 1, 1, 0, 0);
			set_ped_combat_range(Local_264[iVar0]->f_5, 0);
			set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
			break;
		case 9:
			switch (iVar552)
			{
				case 1:
					*vVar1[0] = { func_142(1, 3) };
					func_408(Local_264[iVar0], 0, 1, 1, 0, 0);
					_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_24, 0, 0, 0);
					set_ped_combat_range(Local_264[iVar0]->f_5, 0);
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					break;
				default:
					_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_24, 0, 0, 0);
					set_ped_combat_range(Local_264[iVar0]->f_5, 0);
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					func_408(Local_264[iVar0], 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 10:
			func_408(Local_264[iVar0], 0, 1, 1, 0, 0);
			set_ped_combat_range(Local_264[iVar0]->f_5, 0);
			set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, Local_264[iVar0]->f_1, 10f, 0, 0, 0);
			func_171(&(Local_264[iVar0]->f_7), 64, 0);
			break;
		case 11:
			func_408(Local_264[iVar0], 0, 1, 1, 0, 0);
			set_ped_combat_range(Local_264[iVar0]->f_5, 0);
			set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
			set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, Local_264[iVar0]->f_1, 15f, 0, 0, 0);
			func_171(&(Local_264[iVar0]->f_7), 64, 0);
			break;
		case 12:
			switch (iVar552)
			{
				case 4:
					*vVar1[0] = { func_142(1, 9) };
					fVar5[0] = func_143(1, 9);
					break;
				default:
					*vVar1[0] = { func_142(1, 9) };
					fVar5[0] = func_143(1, 9);
					break;
			}
			iVar7 = add_cover_point(*vVar1[0], &(fVar5[0]), 3, 1, 1, false);
			open_sequence_task(&iVar8);
			task_follow_nav_mesh_to_coord(0, *vVar1[0], 2f, 20000, 0.25f, 0, &(fVar5[0]));
			task_put_ped_directly_into_cover(0, *vVar1[0], 2, 1, 0f, 0, 0, iVar7, 1, 0, 0);
			func_301(Local_264[iVar0]->f_5, &iVar8, 0, 0, 1, 1);
			func_408(Local_264[iVar0], 1, 1, 1, 0, 0);
			set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, Local_264[iVar0]->f_1, 10f, 0, 0, 0);
			func_171(&(Local_264[iVar0]->f_7), 64, 0);
			break;
		case 0:
		case 1:
			switch (iVar552)
			{
				case 1:
					set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, Local_264[iVar0]->f_1, 6f, 0, 0, 0);
					func_408(Local_264[iVar0], 0, 0, 1, 0, 0);
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					break;
				default:
					set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, Local_264[iVar0]->f_1, 6f, 0, 0, 0);
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					func_408(Local_264[iVar0], 0, 0, 1, 0, 0);
					break;
			}
			break;
		case 7:
			switch (iVar552)
			{
				case 1:
					*vVar1[0] = { func_142(1, 0) };
					fVar5[0] = func_143(1, 0);
					iVar7 = add_cover_point(*vVar1[0], &(fVar5[0]), 3, 1, 1, false);
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					func_408(Local_264[iVar0], 1, 1, 0, 0, 0);
					set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, *vVar1[0], 6f, 0, 0, 0);
					break;
				case 3:
					*vVar1[0] = { func_142(1, 1) };
					fVar5[0] = func_143(1, 1);
					iVar7 = add_cover_point(*vVar1[0], &(fVar5[0]), 3, 1, 1, false);
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					func_408(Local_264[iVar0], 1, 1, 0, 0, 0);
					set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, *vVar1[0], 6f, 0, 0, 0);
					break;
				default:
					set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
					func_408(Local_264[7], 0, 1, 1, 0, 0);
					_0xfc3db99c8144cd81(Local_264[7]->f_5, Local_15.f_6, 0, 0, 0);
					break;
			}
			break;
		case 13:
			*vVar1[0] = { func_142(1, 15) };
			fVar5[0] = func_143(1, 15);
			iVar7 = add_cover_point(*vVar1[0], &(fVar5[0]), 3, 0, 1, false);
			open_sequence_task(&iVar8);
			task_follow_nav_mesh_to_coord(0, *vVar1[0], 2f, 20000, 0.25f, 0, &(fVar5[0]));
			task_put_ped_directly_into_cover(0, *vVar1[0], 3, 1, 0f, 0, 0, iVar7, 1, 0, 0);
			func_301(Local_264[iVar0]->f_5, &iVar8, 0, 0, 1, 1);
			func_408(Local_264[iVar0], 1, 1, 1, 0, 0);
			_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_21, 0, 0, 0);
			set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
			break;
		case 14:
			*vVar1[0] = { func_142(1, 16) };
			fVar5[0] = func_143(1, 16);
			iVar7 = add_cover_point(*vVar1[0], &(fVar5[0]), 3, 0, 1, false);
			open_sequence_task(&iVar8);
			task_follow_nav_mesh_to_coord(0, *vVar1[0], 2f, 20000, 0.25f, 0, &(fVar5[0]));
			task_put_ped_directly_into_cover(0, *vVar1[0], 3000, 1, 0f, 0, 0, iVar7, 1, 0, 0);
			func_301(Local_264[iVar0]->f_5, &iVar8, 0, 0, 1, 1);
			func_408(Local_264[iVar0], 1, 1, 1, 0, 0);
			_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_21, 0, 0, 0);
			set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
			break;
		case 15:
			break;
		case 16:
			break;
		default:
			return false;
	}
	return true;
}

void func_313(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_314(var uParam0)
{
	func_410(uParam0, 0f);
}

bool func_315(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_316()
{
	Local_40.f_190 = func_304(&Local_264, &Local_40, 0, 0, 0, 1);
	if (Local_40.f_190 < 0)
	{
		return false;
	}
	Local_40.f_192 = Local_264[Local_40.f_190]->f_5;
	func_211(Local_264[Local_40.f_190], 831283580, 0);
	return true;
}

bool func_317(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_411(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_412(fParam0))
	{
		return false;
	}
	return true;
}

bool func_318(bool bParam0, float fParam1)
{
	if (!func_336(bParam0))
	{
		return false;
	}
	if (func_201(bParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_319(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_90())
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
				if (func_413(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_178(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_314(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_414(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_260(func_415(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_320(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_321(int iParam0)
{
	iLocal_550 = iParam0;
}

bool func_322(int iParam0)
{
	if (!func_167(Local_264[iParam0]->f_5, 0, 0))
	{
		return false;
	}
	if (has_entity_been_damaged_by_any_ped(Local_264[iParam0]->f_5))
	{
		return false;
	}
	if (func_302(Local_264[iParam0]->f_5, Global_36, 1) < 5f)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			fVar0 = 3f;
			break;
		case 5:
			fVar0 = 2f;
			break;
		case 2:
			fVar0 = 2f;
			break;
		case 3:
			fVar0 = 2f;
			break;
		case 6:
			fVar0 = 1.5f;
			break;
		case 8:
			fVar0 = 1.24f;
			break;
		case 9:
			fVar0 = 1.2f;
			break;
		case 10:
			fVar0 = 1f;
			break;
		case 11:
			fVar0 = 1f;
			break;
		case 12:
			fVar0 = 1f;
			break;
		case 0:
			fVar0 = 1.2f;
			break;
		case 1:
			fVar0 = 1.5f;
			break;
		case 7:
			fVar0 = 1f;
			break;
	}
	if (func_318(&uLocal_566, fVar0))
	{
		return false;
	}
	return true;
}

bool func_323(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 7:
		case 10:
		case 11:
		case 12:
		case 15:
		case 16:
			return true;
	}
	return false;
}

bool func_324()
{
	return func_416(_0xc17f69e1418cd11f(3));
}

bool func_325(int iParam0)
{
	if (!func_167(Local_264[iParam0]->f_5, 0, 1))
	{
		return true;
	}
	if (func_65(524288))
	{
		open_sequence_task(&iVar0);
		clear_ped_tasks(0, 1, 0);
		_task_flee_from_ped(0, Global_35, -2142.385f, 797.8377f, 135.6134f, -1f, -1, 0, 1077936128, 0);
		func_301(Local_264[iParam0]->f_5, &iVar0, 0, 0, 1, 1);
		return true;
	}
	if (func_315(Global_35, Local_15.f_21, 1, 0) || func_315(Global_35, Local_15.f_22, 1, 0))
	{
		func_169(Local_264[iParam0]->f_5, -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
		open_sequence_task(&iVar1);
		clear_ped_tasks(0, 1, 0);
		task_combat_ped(0, Global_35, 0, 0);
		func_301(Local_264[iParam0]->f_5, &iVar1, 0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_326()
{
	if (func_65(4096))
	{
		return;
	}
	if (!func_167(Local_264[7]->f_5, 0, 1))
	{
		func_187(4096);
		return;
	}
	if (func_315(Global_35, Local_15.f_10, 1, 0) || has_entity_been_damaged_by_any_ped(Local_264[7]->f_5))
	{
		set_ped_combat_range(Local_264[7]->f_5, 0);
		set_ped_combat_movement(Local_264[7]->f_5, 1);
		func_187(4096);
	}
}

void func_327()
{
	if (!func_65(1024))
	{
		if (!func_336(&uLocal_560))
		{
			if (func_315(Global_35, Local_15.f_1, 1, 0) || Local_40.f_198 < 13)
			{
				iVar0 = -1;
				iVar0 = func_417(&Local_264, Global_35, 0, (Local_40.f_199 - 1), 90f, 1);
				if (iVar0 >= 0)
				{
					func_305(&uLocal_560, 0);
					func_194(Local_264[iVar0]->f_5, 0, "CALLOUT_JUST_KILL_EM_MALE", 0, -1f, 1, 0, 1, 1, 0, 1, -500314840, 1, 0, 0);
					func_211(Local_264[5], 831283580, 580546400);
				}
				if (func_167(Local_264[15]->f_5, 0, 1))
				{
					_set_ped_crouch_movement(Local_264[15]->f_5, false, 0, false);
					func_211(Local_264[15], 831283580, 0);
					set_ped_combat_attributes(Local_264[15]->f_5, 30, true);
					open_sequence_task(&iVar1);
					set_ped_combat_attributes(0, 0, true);
					task_combat_ped(0, Global_35, 0, 0);
					func_301(Local_264[15]->f_5, &iVar1, 0, 0, 1, 1);
				}
			}
		}
		if (func_336(&uLocal_560))
		{
			fVar2 = func_201(&uLocal_560);
			if ((fVar2 * 1.25f) < 1f)
			{
			}
		}
		if (func_318(&uLocal_560, 1f))
		{
			func_418(5, 1);
			if (func_167(Local_264[5]->f_5, 0, 1))
			{
			}
			func_314(&uLocal_560);
			func_187(1024);
			if (has_collision_loaded_around_entity(Local_518[0]->f_9))
			{
				_0x445d7d8ea66e373e(Local_518[0]->f_9, 0, get_entity_coords(Local_518[0]->f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	else if (!func_65(65536))
	{
		if (func_318(&uLocal_560, 5f))
		{
			if (func_167(Local_264[5]->f_5, 0, 1))
			{
				set_ped_combat_attributes(Local_264[5]->f_5, 30, false);
				_0xa769d753922b031b(Local_264[5]->f_5, 0.2f, 0.3f);
				_0xfc3db99c8144cd81(Local_264[5]->f_5, Local_15.f_21, 0, 0, 0);
			}
			func_187(65536);
		}
	}
}

void func_328()
{
	switch (iVar549)
	{
		case 0:
			if (func_419(vLocal_613, &uLocal_616, &uLocal_621, &uLocal_622, 1.5f, 38f, 0, 0, 30f))
			{
				func_420(&Local_264, iVar606, iVar608, -1996978098, 1);
				iVar0 = iVar606;
				while (iVar0 <= iVar608)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 0))
					{
						if (iVar0 == iVar606)
						{
							func_169(Local_264[iVar0]->f_5, 970310034, -1, 1, 0, 1056964608, 1065353216, 0);
						}
						else
						{
							func_169(Local_264[iVar0]->f_5, 416676503, -1, 1, 0, 1056964608, 1065353216, 0);
						}
						_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15, 0, 0, 0);
						set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
						task_combat_ped(Local_264[iVar0]->f_5, Global_35, 0, 0);
						func_177(Local_264[iVar0]->f_5, func_176(&(Local_264[iVar0])), 0);
					}
					iVar0++;
				}
				func_134(&(iLocal_591[2]), 0, 0f, 0, 0, 0f, 0, 0);
				func_134(&(iLocal_591[3]), 0, 0f, 0, 0, 0f, 0, 0);
				iLocal_551 = 1;
				_play_sound_from_position("OPEN_BARN_DOORS", func_421(&(iLocal_591[3])), "HIDEOUT_HDR_Sounds", false, 0, false, 0);
			}
			break;
		case 1:
			if (func_422(&(iLocal_591[3])) != 0f || func_422(&(iLocal_591[2])) != 0f)
			{
				if (!bVar604)
				{
					fLocal_600[3] = func_422(&(iLocal_591[3]));
					fLocal_600[2] = func_422(&(iLocal_591[2]));
					iLocal_606 = 1;
				}
				func_305(&uLocal_572, 0);
				fVar1 = func_201(&uLocal_572);
				if (func_422(&(iLocal_591[3])) < 1.6f)
				{
					func_134(&(iLocal_591[2]), 0, ((-fVar1 * 1.5f) + &fLocal_600[2]), 1, 0, 0f, 0, 0);
					func_134(&(iLocal_591[3]), 0, ((fVar1 * 1.5f) + &fLocal_600[3]), 1, 0, 0f, 0, 0);
				}
				else
				{
					func_314(&uLocal_572);
					iLocal_551 = 2;
				}
			}
			break;
		case 2:
			if (func_318(&uLocal_572, 2f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 1))
					{
					}
					iVar0++;
				}
				func_314(&uLocal_572);
				iLocal_551 = 3;
			}
			break;
		case 3:
			if (func_318(&uLocal_572, 10f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 1))
					{
						set_ped_combat_range(Local_264[iVar0]->f_5, 0);
					}
					iVar0++;
				}
				iVar0 = iVar606;
				while (iVar0 <= iVar608)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 0))
					{
						set_ped_combat_range(Local_264[iVar0]->f_5, 0);
					}
					iVar0++;
				}
				iLocal_551 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_329()
{
	if (!func_167(Local_264[4]->f_5, 0, 1))
	{
		return;
	}
	switch (iVar621)
	{
		case 0:
			func_408(Local_264[4], 0, 0, 1, 0, 0);
			func_423(1);
			break;
		case 1:
			func_305(&uLocal_624, 0);
			if (has_entity_clear_los_to_entity(Local_264[4]->f_5, Global_35, 17))
			{
				func_314(&uLocal_624);
			}
			else if (func_318(&uLocal_624, 2f))
			{
				*vVar1[0] = { func_142(1, 14) };
				request_collision_at_coord(-2235.835f, 732.9716f, 127.3328f);
				request_collision_at_coord(-2236.81f, 732.5904f, 135.467f);
				open_sequence_task(&iVar0);
				set_ped_path_can_use_ladders(0, true);
				task_follow_nav_mesh_to_coord(0, *vVar1[0], 2f, 20000, (0.25f * 2f), 4, 40000f);
				task_combat_ped(0, Global_35, 0, 0);
				func_301(Local_264[4]->f_5, &iVar0, 0, 0, 1, 1);
				func_314(&uLocal_624);
				func_423(2);
			}
			break;
		case 2:
			*vVar1[0] = { func_142(1, 14) };
			vVar5 = { get_entity_coords(Local_264[4]->f_5, true, false) };
			if (vVar5.z > (vVar1[0]->f_2 - 0.5f))
			{
				func_314(&uLocal_624);
				func_423(3);
			}
			break;
		case 3:
			if (has_entity_clear_los_to_entity(Local_264[4]->f_5, Global_35, 17))
			{
				func_314(&uLocal_624);
			}
			else if (func_318(&uLocal_624, 2f))
			{
				func_424(Local_264[4]->f_5);
				set_ped_combat_movement(Local_264[4]->f_5, 0);
				set_ped_combat_range(Local_264[4]->f_5, 2);
				func_314(&uLocal_624);
				func_423(4);
			}
			break;
		case 4:
			break;
	}
}

void func_330()
{
	switch (iVar550)
	{
		case 0:
			if (!does_blip_exist(Local_264[13]->f_6) || !does_blip_exist(Local_264[14]->f_6))
			{
				if (func_425(&Local_264) < 2)
				{
					func_211(Local_264[13], 831283580, 0);
					func_211(Local_264[14], 831283580, 0);
				}
			}
			if ((func_315(Global_35, Local_15.f_1, 1, 0) || !func_167(Local_264[13]->f_5, 0, 1)) || !func_167(Local_264[14]->f_5, 0, 1))
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 1))
					{
						if (!bVar1)
						{
							func_177(Local_264[iVar0]->f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
							func_194(Local_264[iVar0]->f_5, 0, "OPENS_FIRE", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							bVar1 = true;
						}
						func_211(Local_264[iVar0], 831283580, 0);
					}
					iVar0++;
				}
				func_426(1);
			}
			break;
		case 1:
			iVar0 = 13;
			while (iVar0 <= 14)
			{
				if (has_entity_been_damaged_by_any_ped(Local_264[iVar0]->f_5))
				{
					bVar2 = true;
				}
				else
				{
					iVar0++;
				}
			}
			if ((func_317(-5f, 1, 0, 0) || func_315(Global_35, Local_15.f_21, 1, 0)) || bVar2)
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (func_408(Local_264[iVar0], 0, 0, 1, 0, 0))
					{
						set_ped_sphere_defensive_area(Local_264[iVar0]->f_5, get_entity_coords(Local_264[iVar0]->f_5, true, false), 5.5f, 0, 0, 0);
					}
					iVar0++;
				}
				func_305(&uLocal_630, 1);
				func_426(2);
			}
			break;
		case 2:
			if (func_318(&uLocal_630, 4f))
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 1))
					{
						_0xfc3db99c8144cd81(Local_264[iVar0]->f_5, Local_15.f_20, 0, 0, 0);
					}
					iVar0++;
				}
				func_305(&uLocal_630, 1);
				func_426(3);
			}
			break;
		case 3:
			if (func_318(&uLocal_630, 6f))
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (func_167(Local_264[iVar0]->f_5, 0, 1))
					{
						if (has_entity_clear_los_to_entity(Local_264[iVar0]->f_5, Global_35, 17))
						{
							bVar3 = true;
						}
					}
					iVar0++;
				}
				if (!bVar3)
				{
					iVar0 = 13;
					while (iVar0 <= 14)
					{
						if (func_167(Local_264[iVar0]->f_5, 0, 1))
						{
							if (!bVar4)
							{
								func_177(Local_264[iVar0]->f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
								func_194(Local_264[iVar0]->f_5, 0, "OPENS_FIRE", "", -1f, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								bVar4 = true;
							}
							set_ped_combat_movement(Local_264[iVar0]->f_5, 1);
							func_426(4);
						}
						iVar0++;
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_331()
{
	switch (iVar552)
	{
		case 0:
			if (func_427())
			{
				if (func_167(Local_264[15]->f_5, 0, 1))
				{
					vVar0 = { func_142(1, 18) };
					_set_ped_crouch_movement(Local_264[15]->f_5, false, 0, false);
					set_ped_sphere_defensive_area(Local_264[15]->f_5, vVar0, 5f, 0, 0, 0);
					func_211(Local_264[15], 831283580, 0);
					open_sequence_task(&iVar3);
					task_go_straight_to_coord(0, vVar0, 2f, 20000, 1193033728, 1.5f, 0);
					task_combat_ped(0, Global_35, 0, 0);
					func_301(Local_264[15]->f_5, &iVar3, 0, 0, 1, 1);
				}
				func_305(&uLocal_633, 0);
				func_428(1);
			}
			break;
		case 1:
			if (func_318(&uLocal_633, 1.25f))
			{
				if (func_167(Local_264[16]->f_5, 0, 1))
				{
					vVar0 = { func_142(1, 17) };
					_set_ped_crouch_movement(Local_264[16]->f_5, false, 0, false);
					set_ped_sphere_defensive_area(Local_264[16]->f_5, vVar0, 5f, 0, 0, 0);
					func_211(Local_264[16], 831283580, 0);
					open_sequence_task(&iVar3);
					task_go_straight_to_coord(0, vVar0, 2f, 20000, 1193033728, 1.5f, 0);
					task_combat_ped(0, Global_35, 0, 0);
					func_301(Local_264[16]->f_5, &iVar3, 0, 0, 1, 1);
				}
				func_314(&uLocal_633);
				func_428(2);
			}
			break;
		case 2:
			if (func_318(&uLocal_633, 4.5f))
			{
				if (func_167(Local_264[16]->f_5, 0, 1))
				{
					set_ped_combat_range(Local_264[16]->f_5, 0);
					set_ped_combat_movement(Local_264[16]->f_5, 1);
				}
				if (func_167(Local_264[15]->f_5, 0, 1))
				{
					set_ped_combat_range(Local_264[15]->f_5, 0);
					set_ped_combat_movement(Local_264[15]->f_5, 1);
				}
				func_314(&uLocal_633);
				func_428(3);
			}
			break;
		case 3:
			if (func_318(&uLocal_633, 3.5f))
			{
				if (func_167(Local_264[15]->f_5, 0, 1))
				{
					set_ped_combat_range(Local_264[15]->f_5, 0);
					set_ped_combat_movement(Local_264[15]->f_5, 1);
				}
				if (func_167(Local_264[16]->f_5, 0, 1))
				{
					set_ped_combat_range(Local_264[16]->f_5, 0);
					set_ped_combat_movement(Local_264[16]->f_5, 1);
				}
				func_314(&uLocal_633);
				func_428(4);
			}
			break;
		case 4:
			break;
	}
}

void func_332()
{
	if (func_65(8192))
	{
		return;
	}
	if (!func_167(Local_264[9]->f_5, 0, 1))
	{
		func_187(8192);
		return;
	}
	if ((func_315(Global_35, Local_15.f_11, 1, 0) || has_entity_been_damaged_by_any_ped(Local_264[9]->f_5)) || func_429(Local_264[9]->f_5, Global_36, 1) < 484f)
	{
		set_ped_combat_range(Local_264[9]->f_5, 0);
		set_ped_combat_movement(Local_264[9]->f_5, 1);
		func_187(8192);
	}
}

void func_333(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if ((does_blip_exist((*iParam1)[iParam2]->f_6) || !func_167((*iParam1)[iParam2]->f_5, 0, 1)) || func_174(&((*iParam1)[iParam2]->f_7), 64))
	{
		return;
	}
	if (func_430(iParam1, iParam2))
	{
		func_354((*iParam1)[iParam2], 831283580, iParam4);
		if (!func_174(&((*iParam1)[iParam2]->f_7), 64))
		{
			func_171(&((*iParam1)[iParam2]->f_7), 64, 0);
		}
	}
	else
	{
		if (!func_174(&((*iParam1)[iParam2]->f_7), 64))
		{
			if (func_174(&((*iParam1)[iParam2]->f_7), 128))
			{
				func_171(&((*iParam1)[iParam2]->f_7), 64, 0);
			}
		}
		if (!func_174(&((*iParam1)[iParam2]->f_7), 64))
		{
			bVar0 = func_409();
			if (func_409())
			{
				if (!has_entity_been_damaged_by_any_ped((*iParam1)[iParam2]->f_5) && func_174(&((*iParam1)[iParam2]->f_7), 32))
				{
					bVar1 = true;
				}
			}
			if ((_0xc8d523bf5bbd3808((*iParam1)[iParam2]->f_5, -1507090758) || _0xc8d523bf5bbd3808((*iParam1)[iParam2]->f_5, -1102089407)) || has_entity_been_damaged_by_any_ped((*iParam1)[iParam2]->f_5))
			{
				func_408((*iParam1)[iParam2], 1, bVar0, 0, bVar1, 0);
				func_354((*iParam1)[iParam2], 831283580, iParam4);
				func_171(&((*iParam1)[iParam2]->f_7), 64, 0);
			}
			else if (*uParam3 < 5)
			{
				if (func_431((*iParam1)[iParam2]->f_5, Global_35, 1, 20f, 0))
				{
					func_408((*iParam1)[iParam2], 1, bVar0, 0, bVar1, 0);
					func_354((*iParam1)[iParam2], 831283580, iParam4);
					func_171(&((*iParam1)[iParam2]->f_7), 64, 0);
				}
				*uParam3++;
			}
		}
	}
}

void func_334(int iParam0)
{
	iLocal_548 = iParam0;
}

bool func_335(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam3 < iParam4)
	{
		iVar0 = iParam5;
		while (iVar0 <= ((iParam5 + iParam0) - 1))
		{
			func_432(&((*iParam1)[iVar0]->f_5), "");
			if (!bVar1)
			{
				if (func_167((*iParam1)[iVar0]->f_5, 0, 1))
				{
					bVar1 = true;
					func_194((*iParam1)[iVar0]->f_5, 0, sParam2, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

bool func_336(bool bParam0)
{
	return func_433(*bParam0, 1);
}

bool func_337(bool bParam0)
{
	return func_433(*bParam0, 2);
}

float func_338()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_339(var uParam0, char* sParam1, var uParam2, int iParam3, vector3 vParam4)
{
	if (!is_entity_dead(uParam0->f_5))
	{
		if (get_script_task_status(uParam0->f_5, 518218985, true) != 1)
		{
			if (!func_434(uParam0))
			{
				if (!func_406(vParam4))
				{
					open_sequence_task(&iVar0);
					_task_flee_from_ped(0, Global_35, vParam4, -1f, -1, 5120, 1077936128, 0);
					func_301(uParam0->f_5, &iVar0, 0, 0, 1, 1);
				}
				if (is_string_null_or_empty(sParam1))
				{
					*uParam2 = 1;
				}
				if (!*uParam2)
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_194(uParam0->f_5, Global_35, sParam1, "", 70f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					*uParam2 = 1;
				}
			}
			set_ped_keep_task(uParam0->f_5, true);
		}
	}
}

bool func_340(int iParam0, int iParam1)
{
	if (!func_145(&(iParam1->f_5), 33554432))
	{
		if (func_425(iParam0) <= 0)
		{
			func_182(&(iParam1->f_5), 33554432);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_341(int iParam0)
{
	iVar2 = 0;
	switch (iParam0->f_205)
	{
		case 9:
			iVar0 = 100;
			iVar1 = 150;
			iVar2 = -2009656535;
			break;
		case 16:
			iVar0 = 100;
			iVar1 = 150;
			if (!func_31())
			{
				iVar2 = 214473058;
			}
			else
			{
				iVar2 = -1005838710;
			}
			break;
		case 36:
			iVar0 = 75;
			iVar1 = 100;
			iVar2 = 214473058;
			break;
		case 79:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 325633398;
			break;
		case 125:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 1004822587;
			break;
		case 127:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 1004822587;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 0)
	{
		Var4 = { func_237(953441746, iVar2) };
		stat_id_get_int(&Var4, &iVar3);
		if (iVar3 >= (iParam0->f_200 + iParam0->f_199))
		{
			func_435(iVar0, 1);
		}
		else
		{
			func_435(iVar1, 1);
		}
	}
}

void func_342(int iParam0)
{
	if (func_436(1) <= 0)
	{
		return;
	}
}

void func_343(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	func_437(iVar0, 1, bParam1, 0, 1);
	func_438(iParam0, -1);
	if (bParam2)
	{
		if (func_439(iVar0) >= 1)
		{
			func_440(iVar0, (func_439(iVar0) - 1));
		}
	}
	else
	{
		func_441(0, 12);
		iVar1 = func_442(iParam0);
		if (func_439(iVar0) <= 1)
		{
			func_238(func_443(64058978), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1]->f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				(*Global_1392050)[iVar1]->f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237->f_192[iVar1] = (func_444() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						(*Global_1392050)[iVar1]->f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						(*Global_1392050)[iVar1]->f_1 |= 8;
					}
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			func_446(func_445(iParam0, 1), 350f, 0);
			func_447(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_344(int iParam0)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	if (iVar0 != func_26(0))
	{
		func_448(iVar0);
	}
	else
	{
		func_448(iVar0);
	}
}

var func_345(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_449(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_450(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_449(sVar0, iParam1, 0, 0, 1, 1);
}

void func_346()
{
	_delete_volume(Local_15);
	_delete_volume(Local_15.f_1);
	_delete_volume(Local_15.f_2);
	_delete_volume(Local_15.f_3);
	_delete_volume(Local_15.f_4);
	_delete_volume(Local_15.f_5);
	_delete_volume(Local_15.f_6);
	_delete_volume(Local_15.f_7);
	_delete_volume(Local_15.f_8);
	_delete_volume(Local_15.f_9);
	_delete_volume(Local_15.f_10);
	_delete_volume(Local_15.f_11);
	_delete_volume(Local_15.f_12);
	_delete_volume(Local_15.f_13);
	_delete_volume(Local_15.f_14);
	_delete_volume(Local_15.f_15);
	_delete_volume(Local_15.f_16);
	_delete_volume(Local_15.f_17);
	_delete_volume(Local_15.f_18);
	_delete_volume(Local_15.f_19);
	_delete_volume(Local_15.f_20);
	_delete_volume(Local_15.f_21);
	_delete_volume(Local_15.f_22);
	_delete_volume(Local_15.f_23);
	_delete_volume(Local_15.f_24);
}

void func_347()
{
	iVar0 = get_interior_at_coords(-2177.448f, 716.6751f, 121.6206f);
	if (is_valid_interior(iVar0))
	{
		if (is_interior_ready(iVar0))
		{
			deactivate_interior_entity_set(iVar0, "HAN_WIN_LOCK", true);
		}
	}
}

void func_348(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
{
	if (!func_145(&(iParam1->f_5), 8) && !func_145(&(iParam1->f_5), 4))
	{
		iVar0 = func_36(iParam1->f_205);
		if (is_entity_dead(player_ped_id()))
		{
			if (func_290(iVar0))
			{
				if (!func_145(&(iParam1->f_5), 4096))
				{
					func_451(iParam1, 1);
					func_182(&(iParam1->f_5), 4096);
				}
				func_344(iParam1->f_205);
			}
		}
		else if (func_290(iVar0))
		{
			func_451(iParam1, 0);
			func_452(iParam1->f_205, iParam1->f_198);
			func_182(&(iParam1->f_5), 4);
		}
	}
	func_148(iParam1, 0);
	func_218(iParam1, 0);
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		func_313(&((*iParam0)[iVar1]->f_6));
		if ((is_screen_faded_out() || (func_178((*iParam0)[iVar1]->f_5, Global_35, 0, 0) > 60f && is_entity_occluded((*iParam0)[iVar1]->f_5))) || func_178((*iParam0)[iVar1]->f_5, Global_35, 0, 0) > 100f)
		{
			func_453(&((*iParam0)[iVar1]->f_5));
		}
		iVar1++;
	}
	func_454(&(iParam1->f_214), 1, 1);
	func_455(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!is_string_null_or_empty(sParam4))
	{
		_text_database_delete(sParam4);
	}
	render_script_cams(false, false, 3000, true, false, 0);
	func_456(&uVar2, 0);
	if (_does_volume_exist(iParam1->f_215))
	{
		_0xa1cfb35069d23c23(iParam1->f_215);
		_0x74c2b3dc0b294102(iParam1->f_215);
		_delete_volume(iParam1->f_215);
	}
	if (_does_volume_exist(iParam1->f_216))
	{
		_0xa1cfb35069d23c23(iParam1->f_216);
		_0x74c2b3dc0b294102(iParam1->f_216);
	}
	else if (_does_volume_exist(func_277(iParam1->f_205)))
	{
		_0xa1cfb35069d23c23(func_277(iParam1->f_205));
		_0x74c2b3dc0b294102(func_277(iParam1->f_205));
	}
	set_ped_config_flag(Global_35, 141, false);
	func_217(iParam1, 0);
	func_219(0);
	func_457(Global_1935630, 32);
	terminate_this_thread();
}

bool func_349(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return false;
	}
	return func_290(iVar0);
}

void func_350(int iParam0)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_458(iParam0, 57, func_445(iParam0, 1), 0);
	set_this_script_can_remove_blips_created_by_any_script(false);
	if (func_214(iVar0) != 4)
	{
		func_236(Global_1935630, 32);
	}
	if (func_102(iVar0, 1))
	{
		func_459(iVar0);
	}
	iVar1 = func_442(iParam0);
	if (iVar1 != -1)
	{
		func_447(0, iVar1, 0, 12, 0);
	}
	func_460(iParam0);
	func_461(iVar0, 1);
	func_463(iVar0, 1, func_462(player_id(), 1, 0, 1));
	func_464(iParam0);
	func_441(0, 12);
}

bool func_351(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_465(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_466(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_468(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_469(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_470(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_462(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_471(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_472(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_473(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_474(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_474(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_475(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_476(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_477(uParam2, 4000))
				{
					if ((func_478(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_479(uParam2, iParam0)) && func_480(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_478(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_479(uParam2, iParam0)) && func_480(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_481(iParam0, Global_1935630->f_41))
							{
								func_482();
								*uParam3 = 2;
								func_467(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (func_481(iParam0, Global_1935630->f_41))
						{
							func_482();
							*uParam3 = 2;
							func_467(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_483(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_444() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_482();
						*uParam3 = 2;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_484())
					{
						if (func_481(iParam0, Global_1935630->f_42))
						{
							func_482();
							*uParam3 = 2;
							func_467(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_485(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_486(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_487(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_488(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_489(uParam2, 4000))
				{
					if (func_490(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_467(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_491(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_467(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_492(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_467(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_352(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < func_436(1))
	{
		iVar1 = func_493(iVar0);
		if (func_392(iVar1))
		{
			iVar2 = func_494(iVar1);
			if (does_entity_exist(iVar2))
			{
				if (does_entity_exist(uParam1->f_5))
				{
					if (func_167(iVar2, 0, 1))
					{
						if (has_entity_been_damaged_by_entity(uParam1->f_5, iVar2, 1, 1))
						{
							return true;
						}
					}
					if (func_167(uParam1->f_5, 0, 1))
					{
						if (has_entity_been_damaged_by_entity(iVar2, uParam1->f_5, 1, 1))
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_353(var uParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (does_blip_exist(uParam0->f_6))
	{
		if (func_167(uParam0->f_5, 0, 1))
		{
			if (!func_434(uParam0))
			{
				if (get_script_task_status(uParam0->f_5, 518218985, true) == 1 || bParam7)
				{
					if (func_429(uParam0->f_5, vParam1, 1) > IntToFloat((iParam4 * iParam4)))
					{
						remove_blip(&(uParam0->f_6));
					}
					else if (func_318(bParam5, fParam6))
					{
						remove_blip(&(uParam0->f_6));
						if (func_302(uParam0->f_5, vParam1, 1) < IntToFloat((iParam4 / 3)))
						{
						}
					}
				}
			}
		}
	}
}

void func_354(var uParam0, int iParam1, int iParam2)
{
	if (!func_167(uParam0->f_5, 0, 0) || decor_exist_on(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (does_blip_exist(uParam0->f_6))
	{
		func_313(&(uParam0->f_6));
	}
	uParam0->f_6 = _blip_add_for_entity(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		_blip_set_modifier(uParam0->f_6, iParam2);
	}
}

void func_355(int iParam0, bool bParam1)
{
	if (iParam0->f_205 != 9)
	{
		set_ped_config_flag(Global_35, 141, bParam1);
	}
}

int func_356(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_495(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_357(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_24() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_358(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

bool func_359(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_360(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_361(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_362(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		uVar0 = &Global_36638.f_1444[*iParam0];
		set_bit(&uVar0, *iParam1);
		Global_36638.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*iParam0];
	set_bit(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

var func_363(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_364(int iParam0, bool bParam1)
{
	iVar0 = 0;
	func_496(&iVar0, 0);
	func_496(&iVar0, 17);
	func_496(&iVar0, 28);
	if (bParam1)
	{
		_0x3caad93fa5b9579a(iParam0->f_215, 2, iVar0);
	}
	else if (_does_volume_exist(iParam0->f_215))
	{
		_0x7274f84b1501b523(iParam0->f_215);
	}
}

void func_365(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

bool func_366()
{
	return func_132(8);
}

bool func_367()
{
	if (func_24() != 0)
	{
		return true;
	}
	return true;
}

char* func_368(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_369(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_497(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_371(int iParam0)
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

bool func_372(int iParam0)
{
	if (!func_498(iParam0))
	{
		return false;
	}
	return func_499(iParam0);
}

bool func_373(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_374(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_375()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_376(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_377(int iParam0)
{
	return func_243(iParam0, Global_1310750->f_16072 | 64);
}

void func_378(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

bool func_379()
{
	return true;
}

bool func_380(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_381(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (!func_125(iParam0, 1))
	{
		return;
	}
	if (!func_125(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_380(iParam0)) && func_500(iParam0))
	{
		return;
	}
	func_129(iParam0, 1);
	func_501(iParam0);
	if (func_502(func_126(iParam0)))
	{
		iVar0 = func_128(iParam0);
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
		func_129(iParam0, 16);
	}
	if (func_125(iParam0, 128) && !bParam3)
	{
		func_503(iParam0, 0);
	}
}

void func_382(int iParam0, bool bParam1)
{
	if (!func_504(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_505(iParam0, 1024))
		{
			func_506(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_505(iParam0, 1024))
	{
		func_507(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_508(iParam0);
}

void func_383(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

int func_384(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_385(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_386(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
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

bool func_387(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_388(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_388(int iParam0)
{
	return iParam0 > -1;
}

int func_389(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_390(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_391(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_388(iParam0))
		{
			return;
		}
	}
	func_389(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_392(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

float func_393(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_394(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_510(iParam1);
	}
}

void func_395(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_392(iParam0))
	{
		return;
	}
	if (func_250(iParam0))
	{
		if (!func_511(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_252(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_512(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_390(iParam0);
	if (((does_entity_exist(iVar1) && func_393(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_513(iParam0, 2, 1);
	}
	else
	{
		func_514(iParam0);
		func_513(iParam0, 1, 1);
	}
}

int func_396(int iParam0, int iParam1)
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

void func_397(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_515(iParam1))
		{
			func_516(iParam0, 41788943);
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
			func_517(iParam0, 0, 1);
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
			func_518(iParam0, 0);
			bVar0 = true;
		}
		func_519(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_398(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_399(int iParam0)
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

bool func_400(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_520(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_521((386 + iVar28), 1);
			if (func_522(iParam0, &Var0, iVar5, 0))
			{
				if (func_523(iParam0, &Var6, iVar5))
				{
					Var29 = { func_524(iParam0, Var0, iVar5, 0) };
					func_525(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_526(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_527(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_528(iParam0, iParam1);
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

void func_401(int iParam0, int iParam1, float fParam2)
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

bool func_402(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_403(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_404(int iParam0)
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

bool func_405(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_5)
	{
		func_465(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_477(uParam1, 4000))
				{
					if ((func_478(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_479(uParam1, iParam0)) && func_480(uParam1, iParam0))
					{
						func_482();
						*uParam2 = 2;
						func_467(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_477(uParam1, 4000))
				{
					if ((func_478(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_479(uParam1, iParam0)) && func_480(uParam1, iParam0))
					{
						func_482();
						*uParam2 = 2;
						func_467(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_481(iParam0, Global_1935630->f_41))
							{
								func_482();
								*uParam2 = 2;
								func_467(iParam0, uParam1, *uParam2);
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
					if (*uParam1 & 131072 == 0)
					{
						if (func_481(iParam0, Global_1935630->f_41))
						{
							func_482();
							*uParam2 = 2;
							func_467(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_484())
					{
						if (func_481(iParam0, Global_1935630->f_42))
						{
							func_482();
							*uParam2 = 2;
							func_467(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_471(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_472(Global_35, iParam0, uParam1))
					{
						func_482();
						*uParam2 = 4;
						func_467(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_473(Global_35, iParam0, uParam1))
					{
						func_482();
						*uParam2 = 256;
						func_467(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_529(iParam0, uParam1))
			{
				func_482();
				*uParam2 = 131072;
				func_467(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_530(iParam0, uParam1))
			{
				func_482();
				*uParam2 = 262144;
				func_467(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_406(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_407(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

bool func_408(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (func_167(uParam0->f_5, 0, 1))
	{
		iVar0 = get_best_ped_weapon(uParam0->f_5, false, false);
		if (!func_174(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				open_sequence_task(&iVar1);
				if (bParam4)
				{
					task_seek_cover_from_ped(0, Global_35, 4000, 0, 0, 0);
				}
				if (iVar0 != 0)
				{
					if (bParam2 && (_is_weapon_one_handed(iVar0) || _is_weapon_two_handed(iVar0)))
					{
						func_531(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				task_combat_ped(0, Global_35, iParam5, 0);
				func_301(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
			}
			else
			{
				task_combat_ped(uParam0->f_5, Global_35, 0, 0);
			}
		}
		if (bParam3)
		{
			if (!decor_exist_on(uParam0->f_5, "proc_bounty_target"))
			{
				func_354(uParam0, 831283580, 0);
			}
		}
		return true;
	}
	return false;
}

bool func_409()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_410(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_338() - fParam1);
	func_532(uParam0, 1);
	func_533(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_411(int iParam0, bool bParam1)
{
	if (func_167(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_412(float fParam0)
{
	if (func_534(1))
	{
		return true;
	}
	if (func_336(&uLocal_0) && !func_535(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

float func_413(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_178(Global_35, iParam0, bParam1, bParam2);
}

bool func_414(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_415(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_536(iParam0, &Var0);
}

bool func_416(int iParam0)
{
	return iParam0 != 0;
}

int func_417(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5)
{
	fVar0 = 1000000f;
	iVar2 = iParam2;
	while (iVar2 <= iParam3)
	{
		if ((*iParam0)[iVar2]->f_5 != iParam1)
		{
			if (func_167((*iParam0)[iVar2]->f_5, 0, 1) || !bParam5)
			{
				fVar1 = func_178((*iParam0)[iVar2]->f_5, iParam1, 1, 1);
				if (fVar1 < fVar0)
				{
					fVar0 = fVar1;
					iVar3 = iVar2;
				}
			}
		}
		iVar2++;
	}
	if (fVar1 < fParam4)
	{
		return iVar3;
	}
	return -1;
}

int func_418(int iParam0, bool bParam1)
{
	if (!func_167(Local_264[iParam0]->f_5, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		open_sequence_task(&iVar0);
		set_ped_combat_attributes(0, 27, false);
		task_enter_vehicle(0, Local_518[0]->f_9, 20000, -1, 2f, 1, 0);
		task_vehicle_shoot_at_ped(0, Global_35, 90f);
		func_301(Local_264[iParam0]->f_5, &iVar0, 0, 0, 1, 1);
		set_ped_firing_pattern(Local_264[iParam0]->f_5, -957453492);
		func_211(Local_264[iParam0], 831283580, 580546400);
	}
	return 1;
}

bool func_419(vector3 vParam0, var uParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	if (fParam8 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam8)
		{
			return false;
		}
	}
	fVar0 = func_302(player_ped_id(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (func_537(vParam0, 0, uParam3, iParam4, fParam5, fParam6, fParam7, fParam9, 0))
		{
			return true;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return true;
		}
	}
	return false;
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_166((*iParam0)[iVar0], iParam3, 0);
		if (func_167((*iParam0)[iVar0]->f_5, 0, 1))
		{
			set_ped_combat_movement((*iParam0)[iVar0]->f_5, 2);
			set_ped_combat_range((*iParam0)[iVar0]->f_5, 1);
			if (bParam4)
			{
				func_354((*iParam0)[iVar0], 831283580, 0);
			}
		}
		iVar0++;
	}
}

Vector3 func_421(int iParam0)
{
	if (does_entity_exist(func_538(iParam0, 0)))
	{
		return get_entity_coords(func_538(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

float func_422(int iParam0)
{
	func_268(iParam0, 0, 0);
	if (func_133(iParam0))
	{
		return door_system_get_open_ratio(iParam0);
	}
	return -1f;
}

void func_423(int iParam0)
{
	iLocal_623 = iParam0;
}

void func_424(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

int func_425(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (does_blip_exist((*iParam0)[iVar0]->f_6) && func_167((*iParam0)[iVar0]->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_426(int iParam0)
{
	iLocal_552 = iParam0;
}

bool func_427()
{
	if (!func_315(Global_35, Local_15.f_21, 1, 0) && !func_315(Global_35, Local_15.f_22, 1, 0))
	{
		return false;
	}
	func_305(&uLocal_569, 0);
	if (func_318(&uLocal_569, 0.1f))
	{
		return true;
	}
	if (!func_167(Local_264[13]->f_5, 0, 1) || !func_167(Local_264[14]->f_5, 0, 1))
	{
		if (func_318(&uLocal_569, 3f))
		{
			return true;
		}
	}
	return false;
}

void func_428(int iParam0)
{
	iLocal_554 = iParam0;
}

float func_429(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_539(vVar0, vParam1);
}

bool func_430(int iParam0, int iParam1)
{
	if (is_ped_shooting((*iParam0)[iParam1]->f_5))
	{
		return true;
	}
	if (!is_ped_in_combat((*iParam0)[iParam1]->f_5, 0))
	{
		return false;
	}
	if (has_entity_clear_los_to_entity((*iParam0)[iParam1]->f_5, Global_35, 17))
	{
		return true;
	}
	if (func_429((*iParam0)[iParam1]->f_5, Global_36, 1) < 100f)
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_540(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_541(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_432(var uParam0, char* sParam1)
{
	if (!is_entity_dead(*uParam0) && get_script_task_status(*uParam0, 780511057, true) == 1)
	{
		set_ped_combat_movement(*uParam0, 2);
		set_ped_combat_range(*uParam0, 0);
	}
	if (!is_string_null(sParam1) && func_317(0, 1, 0, 0))
	{
		func_194(*uParam0, Global_35, sParam1, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

bool func_433(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_434(var uParam0)
{
	if (func_174(&(uParam0->f_7), 1))
	{
		return true;
	}
	return false;
}

void func_435(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_542(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_543())
	{
		iVar1 = 0;
	}
	func_544(iParam0, iVar1);
}

int func_436(bool bParam0)
{
	if (bParam0)
	{
		return func_545(Global_1359489->f_4);
	}
	get_group_size(func_546(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_546(), iVar3);
		if (func_547(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_437(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (func_214(iParam0) == 4)
	{
		func_548(iParam0, func_123());
		if (!func_356(iParam0) == 5 && !func_356(iParam0) == 6)
		{
			if (bParam3)
			{
				func_549(iParam0, 6);
			}
			else
			{
				func_549(iParam0, 5);
			}
			func_550(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_551(1);
	}
	iVar0 = func_27(iParam0);
	bVar1 = func_24() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_552(0, 2);
		if (!bVar1 && bParam1)
		{
			func_553();
		}
	}
	else
	{
		func_554(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_555(iParam0);
	}
	else
	{
		Var2 = { func_443(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_234(32768))
		{
			Var4 = { func_443(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_356(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_108(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_108(iParam0)]->f_8), true);
						}
					}
					else if ((func_108(iParam0) != 95 && func_108(iParam0) != 82) && !func_110((*Global_1347702)[func_108(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_108(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_108(iParam0)]->f_8), true);
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
		func_557(func_108(iParam0), iVar6, func_556());
	}
	else if (iVar0 == 8)
	{
		func_559(func_108(iParam0), iVar6, func_556(), func_558());
	}
	if (!func_356(iParam0) == 5 && !func_356(iParam0) == 6)
	{
		iVar9 = func_560(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_561(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_562(func_108(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_563((iVar10 - 20), 0, iVar10);
					iVar11 = func_563((iVar11 - 10), 0, iVar11);
				}
				func_564(1);
				func_565(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_565(45, 0, 1);
				break;
			case 8:
				iVar10 = func_566(func_108(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_563((iVar10 - 20), 0, iVar10);
					iVar11 = func_563((iVar11 - 10), 0, iVar11);
				}
				func_565(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_567(func_108(iParam0)))
				{
					func_568(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_565(120, 0, 1);
				break;
			case 2:
				func_565(120, 0, 1);
				break;
			case 6:
				func_565(func_570(func_569(iParam0)), 0, 1);
				break;
			case 5:
				func_565(120, 0, 1);
				break;
		}
	}
	func_571(iParam0, 1);
	func_548(iParam0, func_123());
	func_550(iParam0);
	if ((!func_356(iParam0) == 0 && bParam1) && func_24() == -1)
	{
		iVar12 = func_572(iParam0);
		if (iVar12 != -1)
		{
			func_573(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_574();
			if (iVar12 != -1)
			{
				func_573(0);
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
				switch (func_108(iParam0))
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
				if (func_109(func_108(iParam0)) && func_110((*Global_1347702)[func_108(iParam0)]->f_12, 4))
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
				if (func_108(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_575();
				}
				break;
			case 8:
				if (func_108(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_575();
				}
				break;
		}
	}
	if (!func_356(iParam0) == 5 && !func_356(iParam0) == 6)
	{
		if (bParam3)
		{
			func_549(iParam0, 6);
		}
		else
		{
			func_549(iParam0, 5);
		}
		func_550(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_108(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_576();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_577(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(-1267972061);
						func_577(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(1619534881);
						func_577(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(-755457379);
						func_577(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(1015404643);
						func_577(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(-1724192342);
						func_577(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(1310680212);
						func_577(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(-566881549);
						func_577(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(-1753730528);
						func_577(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(147796381);
						func_577(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(-378547623);
						func_577(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(829545206);
						func_577(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_578(891318243);
						func_577(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_579();
						func_580(967523420);
						func_581();
						func_582();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_583(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_577(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_584(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_584(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_585(304805134, 1, 1);
						if (!func_102((*Global_1347702)[21]->f_15, 1))
						{
							func_437((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_586();
						break;
					case 26:
						func_587();
						break;
					case 17:
						func_588(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_33())
						{
							func_589(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_590(-514575035, -1))
						{
							iVar15 = func_123();
							func_40(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_591(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_33())
						{
							func_589(1529685685);
						}
						break;
					case 34:
						if (func_33())
						{
							func_589(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_592();
						break;
					case 37:
						func_593();
						if (func_32())
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
						func_594();
						break;
					case 43:
						func_595();
						break;
					case 44:
						if (!func_102((*Global_1347702)[82]->f_15, 1))
						{
							func_437((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_102((*Global_1347702)[83]->f_15, 1))
						{
							func_437((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_596();
						break;
					case 59:
						func_597();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_598();
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
						func_599();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_584(451, 0);
						}
						if (!func_600(-1992824800))
						{
							if (func_600(1520110311))
							{
								iVar16 = func_123();
								func_40(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_591(1937177603, iVar16, 1);
							}
						}
						if (func_601(4))
						{
							if (!func_602(684296857, 1, 0))
							{
								iVar17 = func_123();
								func_40(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_591(-1439688706, iVar17, 1);
							}
						}
						func_577(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_603(89200);
						func_603(2300);
						func_603(2300);
						break;
					case 68:
						func_604();
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
						func_605();
						func_603(-139100);
						break;
					case 69:
						if (func_102((*Global_1347702)[9]->f_15, 1))
						{
							func_603(-6000);
						}
						break;
					case 70:
						func_603(23400);
						func_603(1900);
						func_603(-15000);
						break;
					case 71:
						func_603(-5500);
						break;
				}
				break;
			case 8:
				switch (func_108(iParam0))
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
						func_606();
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
						func_607();
						break;
					case 66:
						func_608();
						func_609();
						break;
					case 67:
						if (!func_610(6))
						{
							func_611(6);
						}
						if (!func_610(3))
						{
							func_611(3);
						}
						if (func_33())
						{
							func_589(1534638301);
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
						if (func_102((*Global_1835011)[69]->f_1, 1))
						{
							func_612(0);
							func_603(40500);
						}
						else
						{
							func_612(0);
							func_603(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_108(iParam0))
				{
					case 0:
						switch (func_569(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_613(iParam0);
		func_614();
		switch (iVar0)
		{
			case 1:
				switch (func_108(iParam0))
				{
					case 4:
						func_615(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_615(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_615(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_615(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_615(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_615(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_615(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_616(iParam0);
						func_615(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_615(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_615(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_602(-2046502963, 1, 0))
						{
							func_577(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_615(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_615(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_615(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_616(iParam0) == 0)
						{
							func_615(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_615(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_110((*Global_1347702)[func_108(iParam0)]->f_12, 536870912))
				{
					func_617(11, 1);
				}
				switch (func_108(iParam0))
				{
					case 109:
						func_615(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_617(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_615(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_615(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_615(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_615(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_618(0, 10, 11, 2116153146))
				{
					func_615(iParam0, func_616(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_618(0, 7, 11, -379687487))
				{
					func_615(iParam0, func_619(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_618(0, 8, 11, -1386089015))
				{
					func_615(iParam0, func_619(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_618(0, 11, 11, -1952009645))
				{
					func_615(iParam0, func_619(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_618(0, 12, 11, 2065895756))
				{
					func_615(iParam0, func_619(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_356(iParam0) == 0)
			{
				if (func_620(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_620(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_621(func_27(iParam0), func_620(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_108(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_623(func_622(Global_1879514->f_1));
						if (iVar0 == 8 && func_108(iParam0) == 58)
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
						if (func_109(func_108(iParam0)) && func_110((*Global_1347702)[func_108(iParam0)]->f_12, 1))
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
			func_441(bParam2, iVar20);
		}
	}
	func_624(1);
	if ((bVar13 || func_575()) && (func_27(iParam0) == 1 || func_27(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_438(int iParam0, int iParam1)
{
	iVar0 = func_625(iParam0);
	Global_40.f_11864[iVar0] = iParam1;
}

int func_439(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return shift_right(func_626(iParam0) & 2147418112, 16);
}

void func_440(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	iVar0 = func_626(iParam0) & 65535;
	iVar1 = shift_left(iParam1, 16);
	func_627(iParam0, (iVar1 + iVar0));
}

void func_441(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_628(&Global_0, 8);
	}
	if (!func_375() || func_24() != -1)
	{
		return;
	}
	func_628(&Global_0, 1);
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 2;
		case 79:
			return 1;
		case 36:
			return 0;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
		case 16:
			if (func_31())
			{
				return 4;
			}
			else
			{
				return 0;
			}
			break;
	}
	return -1;
}

struct<2> func_443(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_444()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

Vector3 func_445(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_43(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_3))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3) };
		if (bParam1)
		{
			if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_446(vector3 vParam0, float fParam3, int iParam4)
{
	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (vdist(Global_1393237->f_11[iVar0]->f_3, vParam0) < fParam3)
		{
			func_629(iVar0);
		}
		iVar0++;
	}
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_630(Global_1393447, 1);
	func_631();
	func_632();
	func_633((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_444() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_634();
		if (iParam1 == -1)
		{
			if (func_635(iParam0, 1))
			{
				func_636(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_635(iParam0, 2))
			{
				func_636(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_635(iParam0, 4))
			{
				func_636(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_637(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_638(to_float(iVar0), 1, 0);
	}
	else
	{
		func_638((to_float(200) / 3f), 1, 0);
	}
}

void func_448(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (iParam0 != func_26(0))
	{
		return;
	}
	if (func_620(iParam0) == 0)
	{
	}
	iVar0 = func_27(iParam0);
	if (func_356(iParam0) == 3)
	{
		if (func_620(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_620(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
			{
				func_621(func_27(iParam0), func_620(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_550(iParam0);
	func_551(1);
	func_554(0);
	func_549(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_564(1);
			func_565(15, 0, 1);
			break;
		case 4:
			func_565(10, 0, 1);
			break;
		case 8:
			func_565(10, 0, 1);
			break;
		case 9:
			func_565(10, 0, 1);
			break;
		case 2:
			func_565(10, 0, 1);
			break;
		case 6:
			func_565(10, 0, 1);
			break;
		case 5:
			func_565(10, 0, 1);
			break;
	}
	func_624(1);
}

var func_449(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_450(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_639(sParam1));
}

void func_451(int iParam0, bool bParam1)
{
	switch (iParam0->f_205)
	{
		case 9:
			if (bParam1)
			{
				trigger_music_event("SB_HIDEOUT_FAIL");
			}
			else
			{
				trigger_music_event("SB_HIDEOUT_END");
			}
			break;
		case 36:
			if (bParam1)
			{
				trigger_music_event("HIDEOUT_SPC_FAIL");
			}
			else
			{
				trigger_music_event("HIDEOUT_SPC_ABANDON");
			}
			break;
		case 79:
			if (bParam1)
			{
				trigger_music_event("HIDEOUT_BH_FAIL");
			}
			else
			{
				trigger_music_event("HIDEOUT_BH_ABANDON");
			}
			break;
		case 125:
		case 127:
			trigger_music_event("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}
}

void func_452(int iParam0, int iParam1)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	iVar1 = func_442(iParam0);
	if (iVar1 != -1)
	{
		(*Global_1392050)[iVar1]->f_1 |= 16;
	}
	func_640(iVar0, 0, 2);
	func_438(iParam0, iParam1);
}

void func_453(int* iParam0)
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

void func_454(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_641(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_642(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_643(iVar0);
	*uParam0 = 0;
}

void func_455(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			set_model_as_no_longer_needed(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_456(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_644(2000);
	Global_16 = 0;
	func_645();
	set_entity_invincible(Global_35, func_646(*uParam0, 8));
	if (!func_646(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_646(*uParam0, 2) || func_646(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_646(*uParam0, 16))
	{
		func_647(1);
	}
	if (func_646(*uParam0, 32))
	{
		func_648(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_649(-1623728698, 0);
	}
	func_650(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_457(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_458(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_651(iVar0) == iParam0 && func_652(iVar0) == iParam1)
		{
			func_653(iVar0, -1);
			func_654(iVar0, 0);
			func_655(iVar0, 0);
			if (does_blip_exist(&(Global_36308[iVar0])))
			{
				if (bParam5)
				{
					set_radar_zoom(&(Global_36308[iVar0]));
				}
				remove_blip(Global_36308[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

void func_459(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_549(iParam0, 0);
}

void func_460(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			iVar0 = 55818986;
			iVar1 = -1595327694;
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 55818986;
				iVar1 = -1065712501;
			}
			else
			{
				iVar0 = -2100600611;
				iVar1 = 151695316;
			}
			break;
		case 9:
			iVar0 = 1143368244;
			iVar1 = -162596529;
			break;
		case 79:
			iVar0 = -1797026825;
			iVar1 = -339251000;
			break;
		case 125:
			iVar0 = 1033509606;
			iVar1 = -437070331;
			break;
		case 127:
			iVar0 = 1033509606;
			iVar1 = 1047393655;
			break;
		case 118:
			iVar0 = 1033509606;
			iVar1 = 1048432636;
			break;
		case 114:
			iVar0 = 1033509606;
			iVar1 = 2103232336;
			break;
		case 129:
			iVar0 = 1033509606;
			iVar1 = 1351740867;
			break;
	}
	compendium_gang_hideout_found(iVar0, iVar1);
}

void func_461(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_656(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_620(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_620(iParam0)))
		{
			_0xca41e86545413b5b(func_27(iParam0), func_108(iParam0), func_569(iParam0), func_620(iParam0), Global_36);
		}
	}
	func_549(iParam0, 1);
	bParam1 = bParam1;
}

bool func_462(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_657(bParam1, bParam2, bParam3);
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

void func_463(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_658(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (bParam1)
	{
		if (func_620(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_620(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_659(func_108(iParam0));
			}
			if (func_24() != 0)
			{
				_0xb2a38826e5886e83(func_620(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_620(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_660(iParam0);
	if (!func_37(func_26(0)))
	{
		func_549(iParam0, 3);
		func_551(bParam2);
		if (func_24() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_554(1);
		}
		func_661(iParam0, -1);
		if (bParam1 && !func_234(2))
		{
			func_628(&Global_0, 1024);
		}
		if (func_24() == -1)
		{
			func_662(&(Global_1347343->f_11), 536870912);
			func_663(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_664(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_665(0);
			}
		}
		if (func_24() == -1)
		{
			iVar1 = func_572(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_574();
				switch (iVar1)
				{
					case 0:
						func_666(0);
						break;
					case 1:
						func_666(1);
						break;
					case 2:
						func_666(2);
						break;
					case 3:
						func_666(3);
						break;
					case 4:
						func_666(4);
						break;
					case 5:
						func_666(5);
						break;
					case 6:
						func_666(5);
						break;
					case 7:
						func_666(7);
						break;
					case 8:
						func_666(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_108(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_666(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_108(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_666(11);
						break;
					default:
						iVar1 = func_574();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_667(0);
									break;
								case 1:
									func_667(1);
									break;
								case 2:
									func_667(2);
									break;
								case 3:
									func_667(3);
									break;
								case 4:
									func_667(4);
									break;
								case 5:
									func_667(5);
									break;
								case 6:
									func_667(5);
									break;
								case 7:
									func_667(7);
									break;
								case 8:
									func_667(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_624(1);
	}
	else
	{
		func_661(iParam0, -1);
		func_549(iParam0, 4);
	}
	func_571(iParam0, 0);
}

void func_464(int iParam0)
{
	if (func_668(iParam0))
	{
		return;
	}
	iVar0 = func_625(iParam0);
	func_669(iVar0, 16);
}

void func_465(var uParam0, bool bParam1, int iParam2)
{
	func_670(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_671(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_163(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_672(1))
						{
							func_163(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_672(1) || *uParam0 & 8192 != 0))
				{
					func_164(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_673(uParam0))
			{
				uParam0->f_15 = func_444();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_444() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_674(uParam0);
}

bool func_466(int iParam0, var uParam1)
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
			if (!func_675(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_676(iParam0, iVar2) <= func_677(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_467(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_678(iParam2, 1, 1, 1, 0))
	{
		func_163(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_679(uParam1, 1);
	func_680();
}

bool func_468(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_681(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_682(uParam1);
			if (func_683(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_684(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_679(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_679(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_469(int iParam0, int iParam1, var uParam2)
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
	if (func_685(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_682(uParam2);
		if (func_683(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_684(uParam2)
				{
					func_679(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_470(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
	if (func_675(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_684(uParam1)
		{
			fVar3 = func_682(uParam1);
			if (uParam1->f_12 < fVar3)
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

bool func_471(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_444();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_472(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_686(uParam2);
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
			if (func_480(uParam2, iParam1))
			{
				func_679(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_473(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_687(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_480(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_679(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_474(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_688(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_679(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_679(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_689(iParam1, vVar0, vVar4))
					{
						func_679(uParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_679(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_689(iParam1, vVar0, vVar7))
					{
						func_679(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_475(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_675(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_690(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_691(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_692(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_693(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_694(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_476(int iParam0, var uParam1)
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

bool func_477(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_444();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_478(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_695(iVar0, &iVar2))
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
	if (func_696(iVar0, iParam0))
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

int func_479(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_480(var uParam0, int iParam1)
{
	if (func_697(uParam0))
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

bool func_481(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_178(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_482()
{
}

bool func_483(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_698(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_444();
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
						if (func_302(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_444();
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

bool func_484()
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
	if ((func_444() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_485(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_677(uParam0);
	if (uParam0->f_12 > func_279(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_699(iParam1);
	iVar1 = func_700(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_486(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_701(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_487(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_702(iParam0, uParam1, 1))
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
					if (!func_703(uParam1, iParam0))
					{
						if (func_302(iVar4, Global_36, 1) < 7f)
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

bool func_488(int iParam0, var uParam1)
{
	if (!func_704(0))
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

bool func_489(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_444();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_491(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_444();
	}
	else if (func_444() - uParam1->f_4) > func_705(uParam1)
	{
		return func_706(iParam0, uParam1, 0, -1082130432);
	}
	return false;
}

bool func_492(var uParam0, int iParam1)
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

int func_493(int iParam0)
{
	if (!func_388(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_436(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_494(int iParam0)
{
	if (func_392(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_495(int iParam0)
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

void func_496(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

bool func_497(vector3 vParam0, int iParam3)
{
	func_707(iParam3, &vVar0, &Var3, &uVar6);
	if (func_708(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_498(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_499(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_500(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_501(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	iVar0 = func_709(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_502(int iParam0)
{
	return iParam0 != 0;
}

int func_503(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_125(iParam0, 2))
	{
		return 0;
	}
	if (func_126(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_128(iParam0)))
	{
		return 1;
	}
	if (func_125(iParam0, 1) && !bParam1)
	{
		func_710(iParam0, 128);
		return 1;
	}
	func_129(iParam0, 129);
	func_501(iParam0);
	_0xfc77c5b44d5ff7c0(func_128(iParam0));
	func_127(iParam0, 0);
	return 1;
}

bool func_504(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_505(int iParam0, int iParam1)
{
	if (!func_504(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_506(int iParam0, int iParam1)
{
	if (!func_504(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_507(int iParam0, int iParam1)
{
	if (!func_504(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_508(int iParam0)
{
	func_712(func_711(iParam0));
}

bool func_509(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_510(int iParam0)
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

bool func_511(int iParam0)
{
	if (!func_392(iParam0))
	{
		return false;
	}
	if (!func_250(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_512(int iParam0, bool bParam1)
{
	if (!func_392(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_713(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_513(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_388(iParam0))
		{
			return;
		}
	}
	func_389(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_514(int iParam0)
{
	iVar0 = func_390(iParam0);
	iVar1 = func_512(iParam0, 0);
	func_394(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

bool func_515(int iParam0)
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

void func_516(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_714(iParam0, iParam1))
		{
			if (func_715(iParam0, iParam1))
			{
				if (func_716(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_717(iParam0);
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

void func_517(int iParam0, int iParam1, bool bParam2)
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

void func_518(int iParam0, bool bParam1)
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

void func_519(int iParam0, int iParam1)
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

struct<5> func_520(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_718(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_719(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_524(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_720(bParam1) };
			if (bParam2 && func_721(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_522(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_522(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_523(iParam0, &Var5, 1728382685))
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
			Var0 = { func_722(bParam1) };
			switch (func_723(iParam0))
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
			if (func_724(iParam0, -1823706425))
			{
				Var0 = { func_524(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_724(iParam0, -1483207246))
			{
				Var0 = { func_524(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_725(Var0, &Var27, bParam1, 0))
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

int func_521(int iParam0, int iParam1)
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

bool func_522(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_726(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_523(int iParam0, var uParam1, int iParam2)
{
	if (func_727(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_524(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_728(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_729(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_525(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_730(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_725(*uParam1, &Var0, bParam6, 0))
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
	if (!func_526(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_729(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_526(bool bParam0)
{
	if (func_24() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_729(bParam0));
}

bool func_527(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_731(iParam0))
	{
		return false;
	}
	if (!func_526(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_528(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_403(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_529(int iParam0, var uParam1)
{
	fVar0 = func_732(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (uParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_733(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_734())
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

bool func_530(int iParam0, var uParam1)
{
	if (func_404(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *uParam1 & 2097152 != 0))
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

void func_531(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			iVar0 = 0;
			if (!get_current_ped_weapon(iParam0, &iVar0, true, 0, false))
			{
				set_current_ped_weapon(iParam0, get_best_ped_weapon(iParam0, false, false), true, 0, false, false);
			}
			if (_is_weapon_one_handed(func_735(iParam0, 0)) || _is_weapon_two_handed(func_735(iParam0, 0)))
			{
				if (bParam4)
				{
					task_aim_gun_at_entity(0, iParam1, iParam2, iParam3, iParam5);
				}
				else
				{
					task_aim_gun_at_entity(iParam0, iParam1, iParam2, iParam3, iParam5);
				}
			}
		}
	}
}

void func_532(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_533(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_534(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_535(bool bParam0, float fParam1)
{
	if (func_318(bParam0, fParam1))
	{
		func_736(bParam0);
		return true;
	}
	return false;
}

bool func_536(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_537(vector3 vParam0, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
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
				fVar2 = func_737(iParam10);
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
			bVar0 = func_738(fParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_739(fParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_338();
		}
		else if ((func_338() - *iParam5) > fParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*fParam4 == 2 && fParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

int func_538(int iParam0, int iParam1)
{
	func_268(iParam0, 0, 0);
	if (func_133(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

float func_539(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_540(int iParam0, int iParam1, float fParam2)
{
	return func_740(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_541(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_542(var uParam0)
{
	if (-1829635046 == func_741(81053684))
	{
		if (func_742(uParam0))
		{
			return true;
		}
	}
	else if (func_743(-525676072, uParam0))
	{
		if (func_742(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_543()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_544(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_744();
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
	iVar4 = func_563(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_563(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_745())
		{
			func_746(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_747())
		{
			func_746(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_748())
		{
			func_746(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_749())
	{
		func_746(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_238(func_443(661720433), iVar1);
	iVar10 = func_744();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

int func_545(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_750(&iVar1, -2147483648);
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

int func_546()
{
	return get_player_group(get_player_index());
}

bool func_547(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_24() != -1)
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

void func_548(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

void func_549(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_751(iParam0, iParam1);
}

int func_550(int iParam0)
{
	return func_753(func_752(iParam0));
}

void func_551(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_457(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_236(Global_1935630, 4194304);
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

int func_552(bool bParam0, int iParam1)
{
	if (!bParam0 && func_258(373691918))
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
	func_554(bParam0);
	return 1;
}

void func_553()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_392(iVar17))
		{
			iVar18 = func_390(iVar17);
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
	func_736(&(Global_1359489->f_55));
	if (func_754(1777191912, 1))
	{
		func_755(1777191912, 1, 0);
	}
}

int func_554(bool bParam0)
{
	if (!bParam0 && func_258(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_555(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_627(iParam0, (func_626(iParam0) + shift_left(1, 16)));
}

bool func_556()
{
	return func_756() > 0;
}

void func_557(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_757(-1032423150, iParam1);
			break;
		case 18:
			func_757(294066959, iParam1);
			func_757(-1925639563, iParam1);
			func_757(-378582304, iParam1);
			func_757(-338306437, iParam1);
			break;
		case 20:
			func_757(437270255, iParam1);
			break;
		case 2:
			func_757(-304000413, iParam1);
			func_757(-533612796, iParam1);
			func_757(48036954, iParam1);
			break;
		case 23:
			func_757(193108691, iParam1);
			func_757(491732588, iParam1);
			func_757(671962088, iParam1);
			func_758(1);
			break;
		case 16:
			func_757(-1836056650, iParam1);
			func_757(-754657922, iParam1);
			func_757(-1752355838, iParam1);
			func_757(-1375324510, iParam1);
			break;
		case 59:
			func_757(-514392105, iParam1);
			func_757(-822060246, iParam1);
			if (func_759(146))
			{
				func_757(1372748575, iParam1);
			}
			func_758(1);
			break;
		case 76:
			func_757(1991352213, iParam1);
			if (func_760() == 0)
			{
				func_757(1852488616, iParam1);
			}
			else
			{
				func_757(-9866350, iParam1);
			}
			break;
		case 44:
			func_757(863852599, iParam1);
			func_757(1228374935, iParam1);
			func_757(1517889050, iParam1);
			func_757(830657578, iParam1);
			func_757(1901354958, iParam1);
			break;
		case 46:
			func_757(-582805654, iParam1);
			func_757(250378940, iParam1);
			func_757(-2143265426, iParam1);
			break;
		case 17:
			func_757(-941494139, iParam1);
			func_757(1641489521, iParam1);
			break;
		case 19:
			func_757(-1829423531, iParam1);
			func_757(-1590504752, iParam1);
			func_757(1357221321, iParam1);
			break;
		case 21:
			func_757(-1037992610, iParam1);
			func_757(-1286414399, iParam1);
			func_758(0);
			break;
		case 15:
			func_757(-1014460309, iParam1);
			func_757(-1030502825, iParam1);
			break;
		case 33:
			func_757(479388090, iParam1);
			func_757(-1396342239, iParam1);
			func_757(-619618632, iParam1);
			break;
		case 34:
			func_757(1193561641, iParam1);
			break;
		case 64:
			func_757(1363960851, iParam1);
			break;
		case 60:
			func_757(-1232453926, iParam1);
			func_757(-882833584, iParam1);
			break;
		case 73:
			func_757(2023205767, iParam1);
			break;
		case 74:
			func_757(-2135286513, iParam1);
			if (func_760() == 0)
			{
				func_757(33799444, iParam1);
			}
			else
			{
				func_757(-161343203, iParam1);
			}
			break;
		case 8:
			func_757(841639693, iParam1);
			func_757(358952323, iParam1);
			break;
		case 36:
			func_757(852538149, iParam1);
			func_757(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_757(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_757(1116039310, iParam1);
			}
			break;
		case 27:
			func_757(107633428, iParam1);
			func_757(335902282, iParam1);
			func_757(575673055, iParam1);
			func_757(-425944207, iParam1);
			break;
		case 28:
			func_757(-1941530250, iParam1);
			func_757(1399269304, iParam1);
			func_757(1839684664, iParam1);
			func_757(923168503, iParam1);
			func_757(-1485078322, iParam1);
			break;
		case 29:
			func_757(574995900, iParam1);
			func_757(-1691275407, iParam1);
			func_757(-1725307861, iParam1);
			break;
		case 31:
			func_757(-2108383238, iParam1);
			func_757(-1321828931, iParam1);
			func_757(-1632118592, iParam1);
			func_757(334938948, iParam1);
			break;
		case 4:
			func_757(115823701, iParam1);
			func_757(-1896939736, iParam1);
			func_757(-1830746356, iParam1);
			func_757(-1235169781, iParam1);
			func_758(0);
			break;
		case 6:
			func_757(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_757(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_757(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_757(-384176140, iParam1);
			}
			break;
		case 25:
			func_757(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_757(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_757(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_757(-1374849484, iParam1);
			}
			break;
		case 48:
			func_757(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_757(217772674, iParam1);
			}
			else
			{
				func_757(2071798160, iParam1);
			}
			if (func_761(51))
			{
				func_757(-792802286, iParam1);
			}
			break;
		case 49:
			func_757(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_757(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_757(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_757(1402120602, iParam1);
			}
			break;
		case 58:
			func_757(-1661934591, iParam1);
			break;
		case 50:
			func_757(-1713759426, iParam1);
			break;
		case 52:
			func_757(-314799932, iParam1);
			func_757(-462260432, iParam1);
			func_757(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_757(345256028, iParam1);
				func_757(-1635084094, iParam1);
			}
			else
			{
				func_757(114267347, iParam1);
			}
			break;
		case 32:
			func_757(615304157, iParam1);
			break;
		case 47:
			func_757(415434835, iParam1);
			break;
		case 69:
			func_757(1373465877, iParam1);
			if (func_102((*Global_1347702)[9]->f_15, 1))
			{
				func_757(-2058273527, iParam1);
			}
			break;
		case 70:
			func_757(451334985, iParam1);
			if (func_760() == 0)
			{
				func_757(-224150200, iParam1);
			}
			else
			{
				func_757(289012628, iParam1);
			}
			break;
		case 71:
			if (func_760() == 0)
			{
				func_757(-41692120, iParam1);
			}
			else
			{
				func_757(1537840678, iParam1);
			}
			break;
		case 37:
			func_757(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_757(1842132550, iParam1);
			}
			else
			{
				func_757(-785735240, iParam1);
			}
			func_757(-1605690566, iParam1);
			break;
		case 13:
			func_757(-731367459, iParam1);
			func_757(224176585, iParam1);
			func_757(-14545580, iParam1);
			break;
		case 53:
			func_757(1095274522, iParam1);
			break;
		case 54:
			func_757(-572027988, iParam1);
			break;
		case 56:
			func_757(1339307101, iParam1);
			func_757(2102267732, iParam1);
			break;
		case 57:
			func_757(710102686, iParam1);
			break;
		case 22:
			func_757(-1754368482, iParam1);
			func_757(-2071408557, iParam1);
			break;
		case 12:
			func_757(-181334543, iParam1);
			break;
		case 0:
			func_757(-2134669864, iParam1);
			func_757(-548289709, iParam1);
			func_757(-911271922, iParam1);
			func_757(-604455775, iParam1);
			break;
		case 1:
			func_758(1);
			break;
		case 3:
			if (func_32())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_757(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_757(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_558()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_559(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_757(-145926707, iParam1);
			func_757(-604922090, iParam1);
			func_757(-848690769, iParam1);
			break;
		case 1:
			func_757(-1477631591, iParam1);
			break;
		case 2:
			func_757(76112544, iParam1);
			break;
		case 9:
			func_757(1396404308, iParam1);
			func_757(-1357381228, iParam1);
			if (func_102((*Global_1835011)[69]->f_1, 1))
			{
				func_757(1902679064, iParam1);
			}
			else
			{
				func_757(-2146422425, iParam1);
			}
			break;
		case 22:
			func_757(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_757(-1934184559, iParam1);
				func_757(1281755988, iParam1);
			}
			else
			{
				func_757(-1745220872, iParam1);
				func_757(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_757(-1641504538, iParam1);
				func_757(-988014485, iParam1);
			}
			else if (func_759(26))
			{
				func_757(-343043950, iParam1);
				func_757(-640062214, iParam1);
			}
			else
			{
				func_757(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_757(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_757(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_757(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_757(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_757(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_757(1301690984, iParam1);
				}
			}
			else
			{
				func_757(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_757(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_757(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_757(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_757(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_757(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_757(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_757(-754570528, iParam1);
			}
			else
			{
				func_757(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_757(-2072125821, iParam1);
			}
			else
			{
				func_757(270040030, iParam1);
			}
			break;
		case 37:
			func_757(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_757(-505314737, iParam1);
				func_757(-1853052860, iParam1);
			}
			else
			{
				func_757(-1975624994, iParam1);
				func_757(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_757(1690231002, iParam1);
			}
			else
			{
				func_757(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_757(1225386280, iParam1);
			}
			else if (func_759(54))
			{
				func_757(-283235773, iParam1);
			}
			else
			{
				func_757(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_757(1355398007, iParam1);
			}
			else
			{
				func_757(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_757(574636806, iParam1);
			}
			else
			{
				func_757(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_757(821118338, iParam1);
			}
			else if (func_759(39))
			{
				func_757(846829260, iParam1);
			}
			else
			{
				func_757(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_616((*Global_1835011)[33]->f_1) == 1)
				{
					func_757(1422779093, iParam1);
				}
				else
				{
					func_757(-1769536986, iParam1);
				}
			}
			else
			{
				func_757(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_757(352134789, iParam1);
			}
			else if (func_759(43))
			{
				func_757(260723113, iParam1);
			}
			else
			{
				func_757(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_757(-457958799, iParam1);
			}
			else
			{
				func_757(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_759(41))
			{
				func_757(-546824600, iParam1);
			}
			else
			{
				func_757(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_757(1297261593, iParam1);
			}
			else
			{
				func_757(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_757(2068484886, iParam1);
			}
			else if (func_759(49))
			{
				func_757(-1489080639, iParam1);
				func_757(-2102244050, iParam1);
			}
			else
			{
				func_757(-1863040467, iParam1);
			}
			break;
		case 51:
			func_757(-2055943209, iParam1);
			break;
		case 58:
			if (func_102((*Global_1347702)[23]->f_15, 1))
			{
				func_757(1650066845, iParam1);
			}
			else
			{
				func_757(151370023, iParam1);
			}
			func_757(1426057961, iParam1);
			func_757(476379584, iParam1);
			break;
		case 59:
			func_757(-1638117866, iParam1);
			break;
		case 62:
			func_757(199541730, iParam1);
			break;
		case 63:
			func_757(1703485804, iParam1);
			func_757(-800449045, iParam1);
			break;
		case 65:
			func_757(-1678210868, iParam1);
			func_757(-1448238026, iParam1);
			func_757(-1200864845, iParam1);
			func_757(1473511536, iParam1);
			break;
		case 66:
			func_757(-1774490051, iParam1);
			func_757(-34645921, iParam1);
			func_757(174027075, iParam1);
			func_757(-1155999, iParam1);
			func_758(1);
			break;
		case 67:
			func_757(701612593, iParam1);
			func_757(-1069631343, iParam1);
			func_757(1673428882, iParam1);
			break;
		case 68:
			func_757(-739133286, iParam1);
			func_757(-2130089358, iParam1);
			func_757(2056190391, iParam1);
			func_757(1941753817, iParam1);
			func_758(0);
			break;
		case 70:
			func_757(-1217555753, iParam1);
			break;
		case 71:
			func_757(697048821, iParam1);
			break;
		case 73:
			func_757(-553148661, iParam1);
			break;
		case 75:
			func_757(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_757(1414263863, iParam1);
			}
			else
			{
				func_757(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_757(1835465936, iParam1);
				func_757(523715611, iParam1);
			}
			else if (func_759(78))
			{
				func_757(1420338873, iParam1);
			}
			else
			{
				func_757(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_757(10180941, iParam1);
			}
			else if (func_759(79))
			{
				func_757(768420635, iParam1);
			}
			else
			{
				func_757(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_757(-383601523, iParam1);
			}
			else
			{
				func_757(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_757(1606472408, iParam1);
			}
			else
			{
				func_757(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_757(-203571927, iParam1);
			}
			else
			{
				func_757(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_757(729886222, iParam1);
			}
			else
			{
				func_757(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_757(-714816362, iParam1);
			}
			else
			{
				func_757(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_757(-932932179, iParam1);
				func_757(-1458537240, iParam1);
			}
			else
			{
				func_757(-1764383885, iParam1);
				func_757(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_757(1741466706, iParam1);
			}
			else
			{
				func_757(1405815775, iParam1);
			}
			break;
		case 94:
			func_757(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_757(1905280979, iParam1);
			}
			else
			{
				func_757(-1966245299, iParam1);
			}
			func_757(721468880, iParam1);
			break;
		case 99:
			func_757(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_757(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_757(-1117781095, iParam1);
				}
				else
				{
					func_757(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_757(141494548, iParam1);
			}
			else
			{
				func_757(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_757(-369525697, iParam1);
			}
			else if (func_759(101))
			{
				func_757(1595015219, iParam1);
			}
			else
			{
				func_757(-321486961, iParam1);
			}
			break;
		case 103:
			func_757(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_757(793460477, iParam1);
				func_757(-1610242176, iParam1);
			}
			else if (func_759(103))
			{
				func_757(1830897187, iParam1);
			}
			else
			{
				func_757(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_757(1528309077, iParam1);
			}
			else if (func_759(104))
			{
				func_757(1864966105, iParam1);
			}
			else
			{
				func_757(-103336013, iParam1);
			}
			break;
		case 108:
			func_757(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_757(-1123227713, iParam1);
				func_757(-889574341, iParam1);
			}
			else
			{
				func_757(2065385917, iParam1);
				func_757(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_757(-887421691, iParam1);
			}
			else if (func_759(109))
			{
				func_757(-1318117949, iParam1);
			}
			else
			{
				func_757(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_757(284822762, iParam1);
				}
				else
				{
					func_757(-1425017554, iParam1);
				}
			}
			else if (func_759(110))
			{
				if (&Global_1357515 == 0)
				{
					func_757(553087292, iParam1);
				}
				else
				{
					func_757(-1766870331, iParam1);
					func_757(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_757(-1980598735, iParam1);
			}
			else
			{
				func_757(-442732098, iParam1);
				func_757(1955756409, iParam1);
			}
			break;
		case 115:
			func_757(394303528, iParam1);
			func_757(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_757(1182403394, iParam1);
			}
			else
			{
				func_757(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_757(924445424, iParam1);
			}
			else
			{
				func_757(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_757(430755273, iParam1);
				func_757(-1473879802, iParam1);
			}
			else
			{
				func_757(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_757(73885747, iParam1);
			}
			else if (func_759(117))
			{
				func_757(1559707913, iParam1);
			}
			else
			{
				func_757(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_757(-2103887972, iParam1);
			}
			else if (func_759(118))
			{
				func_757(-435828462, iParam1);
			}
			else
			{
				func_757(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_757(2054486196, iParam1);
			}
			else
			{
				func_757(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_757(-570086056, iParam1);
			}
			else if (func_759(121))
			{
				func_757(32337856, iParam1);
			}
			else
			{
				func_757(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_757(813493663, iParam1);
			}
			else if (func_759(122))
			{
				func_757(-2132763590, iParam1);
			}
			else
			{
				func_757(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_757(-66240572, iParam1);
				func_757(1563075046, iParam1);
			}
			else
			{
				func_757(-787011772, iParam1);
				func_757(-1523377438, iParam1);
			}
			break;
		case 127:
			func_757(61020800, iParam1);
			break;
		case 129:
			func_757(428985222, iParam1);
			break;
		case 131:
			func_757(-1393851036, iParam1);
			break;
		case 133:
			func_757(1559531342, iParam1);
			break;
		case 134:
			func_757(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_757(-1374407408, iParam1);
				}
				else
				{
					func_757(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_757(-472672138, iParam1);
				}
				else
				{
					func_757(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_757(-1678710489, iParam1);
			}
			else
			{
				func_757(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_757(1717582460, iParam1);
			}
			else
			{
				func_757(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_757(1568112362, iParam1);
				func_757(1388317526, iParam1);
			}
			else if (func_759(136))
			{
				func_757(-1597534828, iParam1);
				func_757(-1207918353, iParam1);
			}
			else
			{
				func_757(-1940891082, iParam1);
				func_757(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_757(448334530, iParam1);
				func_757(2145375502, iParam1);
			}
			else
			{
				func_757(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_757(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_757(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_757(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_757(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_757(-66616327, iParam1);
			}
			else
			{
				func_757(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_757(1862916706, iParam1);
			}
			else if (func_759(147))
			{
				func_757(675105199, iParam1);
			}
			else
			{
				func_757(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_757(174409701, iParam1);
			}
			else if (func_759(148))
			{
				func_757(-1730895475, iParam1);
			}
			else
			{
				func_757(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_757(1295237052, iParam1);
			}
			else if (func_759(149))
			{
				func_757(-788577684, iParam1);
			}
			else
			{
				func_757(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_560(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_27(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_762(iParam0);
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
					if (func_616((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_108(iParam0);
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
			iVar3 = func_108(iParam0);
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

int func_561(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_763(iParam0);
	iVar3 = func_764(iParam0);
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
				iVar1 = func_123();
				func_40(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_765(iParam0, 1);
			if (func_766(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_767(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_768(1, iParam0);
				}
				else
				{
					func_769(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_562(int iParam0, int iParam1)
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

int func_563(int iParam0, int iParam1, int iParam2)
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

void func_564(bool bParam0)
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

void func_565(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_770(iParam0, iParam1, bParam2);
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

int func_566(int iParam0, int iParam1)
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

bool func_567(int iParam0)
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

void func_568(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_24() != -1)
	{
		return;
	}
	if ((Global_36616 && func_771(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_772(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_773(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_774(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_773(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_569(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_775(func_111(iParam0));
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_571(int iParam0, bool bParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_26(0) != iParam0)
	{
		return;
	}
	if (func_776(iParam0))
	{
		if (bParam1)
		{
			func_777(-525676072);
		}
		else
		{
			func_778(-525676072);
		}
	}
}

int func_572(int iParam0)
{
	switch (func_27(iParam0))
	{
		case 1:
			iVar0 = func_108(iParam0);
			return func_779(iVar0);
		case 8:
			iVar1 = func_108(iParam0);
			if (func_110((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_780(iVar1);
			}
			break;
	}
	return -1;
}

void func_573(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_781(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_782();
		Global_1898077->f_9 = func_783(Global_1894899->f_2);
		func_784(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_574()
{
	if (!func_102((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_102((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_102((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_102((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_102((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_102((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_102((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_575()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_375())
	{
		return false;
	}
	if (!func_102((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_102((*Global_1835011)[2]->f_1, 1) && func_102((*Global_1347702)[120]->f_15, 1)) && !func_102((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_102((*Global_1835011)[37]->f_1, 1) && !func_102((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_102((*Global_1835011)[57]->f_1, 1) && !func_102((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_102((*Global_1835011)[26]->f_1, 1) && !func_102((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_102((*Global_1835011)[62]->f_1, 1) && func_102((*Global_1835011)[63]->f_1, 1)) && !func_102((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_102((*Global_1835011)[75]->f_1, 1) && !func_102((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_102((*Global_1835011)[76]->f_1, 1) && !func_102((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_102((*Global_1835011)[40]->f_1, 1) && func_102((*Global_1835011)[41]->f_1, 1)) && !func_102((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_102((*Global_1835011)[62]->f_1, 1) && func_102((*Global_1835011)[63]->f_1, 1)) && !func_102((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_102((*Global_1835011)[65]->f_1, 1) && func_102((*Global_1835011)[66]->f_1, 1)) && !func_102((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_576()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_785(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_577(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (!func_786(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_787(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_788(iParam0, bParam2);
	iVar2 = 0;
	if (func_789(iParam0, 0, 0) == 0)
	{
		if (func_790(iParam0))
		{
			iVar5 = func_791(iParam0);
			iVar6 = func_792(iVar5);
			iVar7 = func_793(iVar6) + 1;
			func_794(iVar5);
			if (func_795(38))
			{
				func_584(483, 0);
			}
			else
			{
				func_584(482, 0);
			}
			if (iVar7 == func_796(iVar6))
			{
				func_577(func_797(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_375() && func_798(4))
				{
					if (func_375() && (func_799(38) || func_795(38)))
					{
						func_801(38, func_797(iVar6), 0, 0, func_800(), 0, -1, 0);
						func_802(2);
					}
					else
					{
						func_801(38, func_797(iVar6), 0, 0, func_800(), 0, -1, 0);
						func_802(1);
					}
				}
			}
			else if (func_375() && func_798(4))
			{
				if (func_375() && (func_799(38) || func_795(38)))
				{
					func_801(38, 0, 0, 0, func_800(), 0, -1, 0);
					func_802(2);
				}
				else
				{
					func_801(38, 0, 0, 0, func_800(), 0, -1, 0);
					func_802(1);
				}
			}
			if (func_375() && func_798(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_375() && (func_799(38) || func_795(38)))
					{
						func_803(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_803(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_719(iParam0) == -1037537535)
	{
		if ((!func_804(iParam0, 866047851) && !func_804(iParam0, -1979000645)) && !func_804(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_805(iParam0, 8388608) && !func_372(28))
	{
		func_806(28);
	}
	if (!bVar3)
	{
		if (func_804(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_723(iParam0) == -1447088266)
			{
				iVar1 = func_808(func_807(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_24() == -1)
					{
						func_809(iVar1);
					}
					if (func_526(0) && func_400(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_527(iParam0, iVar0, iParam5);
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
					if (func_24() == -1)
					{
						func_809(iParam0);
					}
					if (func_526(0) && func_400(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_527(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_719(iParam0) == -427144552)
		{
			if (!func_810(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_719(iParam0) == 307971639 && func_731(iParam0))
		{
			if (!func_811(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_804(iParam0, 866047851))
		{
			func_812(iParam0);
		}
		else if (func_804(iParam0, 2000026003))
		{
			func_813(iParam0);
		}
		else if (func_804(iParam0, -103750053))
		{
			func_238(func_814(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_238(func_237(-717883113, 2091222383), iVar0);
		}
		else if (func_804(iParam0, -121341956) && !func_804(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_102((*Global_1835011)[4]->f_1, 1))
				{
					func_584(498, 0);
				}
			}
			if (func_804(iParam0, -2017733358) || func_804(iParam0, -1369131378))
			{
				func_815(iParam0);
			}
		}
		else if (func_804(iParam0, -136654233))
		{
			if (func_804(iParam0, -1021472396))
			{
			}
		}
		else if (func_804(iParam0, -1466706512) && func_804(iParam0, 1147021565))
		{
			func_584(484, 0);
		}
		else if (func_804(iParam0, 1147021565) && func_804(iParam0, -524514947))
		{
		}
		else if (func_804(iParam0, 554195525))
		{
		}
		else if (func_804(iParam0, 589988438))
		{
			if (func_816())
			{
				func_817(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_804(iParam0, 787083290) && func_804(iParam0, 949916894))
		{
			func_818(iParam0);
		}
		else if (func_804(iParam0, -1718133314))
		{
			func_819(iParam0);
		}
		else if (func_804(iParam0, -1738650224))
		{
			func_820(iParam0);
		}
		else if (func_804(iParam0, -1112814642) && func_804(iParam0, 949916894))
		{
			func_821(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_804(iParam0, 1841149704))
		{
			func_822();
		}
		else if (func_804(iParam0, 606799272))
		{
			func_823(iParam0, iParam1);
			func_824(iParam0);
		}
		else if (func_804(iParam0, -1112814642) && func_804(iParam0, -1697809989))
		{
			func_825(iParam0, 0, 0, 0);
		}
		else if (func_804(iParam0, -2017733358) || func_804(iParam0, -1369131378))
		{
			func_815(iParam0);
		}
		else if (func_804(iParam0, -1921346699))
		{
			if (func_24() != -1)
			{
				return false;
			}
			func_826(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_804(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_602(215778062, 1, 0))
					{
						func_577(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_602(670273567, 1, 0))
					{
						func_577(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_602(-967317137, 1, 0))
					{
						func_577(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_602(526074061, 1, 0))
					{
						func_577(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_602(-1045488665, 1, 0))
					{
						func_577(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_602(471514780, 1, 0))
					{
						func_577(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_804(iParam0, -839724752) && func_805(iParam0, 4))
		{
			if (!func_795(42))
			{
				func_827(iParam0);
			}
		}
		else if (func_804(iParam0, 1399091007))
		{
			func_828(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_804(iParam0, 1248798204))
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
				func_577(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_806(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_648(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_829(&iVar9, 0))
				{
					func_400(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_24() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_648(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_584(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_830();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_831();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_832();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_833();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_834();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_835(499813453, 854119837, 0);
				func_836(499813453, 0);
				func_837(1);
				break;
			case 2127812557:
				func_835(499813453, -1292544588, 0);
				func_836(499813453, 0);
				func_837(2);
				break;
			case 808991383:
				func_835(499813453, -1003325394, 0);
				func_836(499813453, 0);
				func_837(4);
				break;
			case 1134518629:
				func_835(666607663, -335460405, 0);
				func_836(666607663, 0);
				func_838(1);
				break;
			case 902940106:
				func_835(666607663, 903797617, 0);
				func_836(666607663, 0);
				func_838(2);
				break;
			case -418174898:
				func_835(666607663, 669728650, 0);
				func_836(666607663, 0);
				func_838(4);
				break;
			case -648114971:
				func_835(-220219788, 1214120047, 0);
				func_836(-220219788, 0);
				func_839(1);
				break;
			case 211153747:
				func_835(-220219788, 655769340, 0);
				func_836(-220219788, 0);
				func_839(2);
				break;
			case -32876996:
				func_835(-220219788, 885316185, 0);
				func_836(-220219788, 0);
				func_839(4);
				break;
			case 1191437462:
				func_835(218622660, -1491419385, 0);
				func_836(218622660, 0);
				func_840(1);
				break;
			case 1119149048:
				func_835(218622660, 1809565830, 0);
				func_836(218622660, 0);
				func_840(2);
				break;
			case 506073827:
				func_835(390004462, -628873767, 0);
				func_836(390004462, 0);
				func_841(1);
				break;
			case -1876986168:
				func_835(390004462, -405421956, 0);
				func_836(390004462, 0);
				func_841(2);
				break;
			case 2142623221:
				func_835(390004462, -1108972386, 0);
				func_836(390004462, 0);
				func_841(4);
				break;
			case 1508215381:
				func_835(6410548, 1053716392, 0);
				func_836(6410548, 0);
				func_842(1);
				break;
			case -888935280:
				func_835(6410548, 806507056, 0);
				func_836(6410548, 0);
				func_842(2);
				break;
			case -1252474566:
				func_835(6410548, 1571925350, 0);
				func_836(6410548, 0);
				func_842(4);
				break;
			case -1465702449:
				func_835(6410548, 1330352282, 0);
				func_836(6410548, 0);
				func_842(8);
				break;
			case -21093309:
				func_844(242, func_843(-21093309), 0);
				break;
			case 204375141:
				func_844(240, func_843(204375141), 0);
				break;
			case -417963070:
				func_844(241, func_843(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_845(594, 1934060482, 1, 1);
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
					func_845(594, 1110018439, 1, 1);
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
					func_845(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_845(594, -1228016946, 1, 1);
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
					func_845(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_845(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_584(488, 0);
				break;
			case 1613651027:
				func_584(491, 0);
				break;
			case -885810591:
				func_584(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_577(func_846(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_577(func_847(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_372(1))
				{
					func_584(487, 0);
				}
				break;
			case -898386032:
				func_584(486, 0);
				break;
			case -2035110427:
				if (func_24() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_584(496, 0);
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
		func_848(&iVar10);
		if (!func_849(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_526(0))
		{
			return true;
		}
		if (func_719(iParam0) == -1037537535)
		{
			func_850(iParam0);
		}
		if (func_804(iParam0, -1979000645))
		{
			func_851(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_526(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_577(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_852(iVar2, 0);
		}
	}
	Var35 = { func_853(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_854(iParam0);
	if (fParam6 > 0f)
	{
		if (func_804(iParam0, -839724752))
		{
			func_855(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_856(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_578(int iParam0)
{
	if (func_804(iParam0, 1989861793))
	{
		iVar0 = func_857(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_858(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_859(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_860(iVar14, iVar1);
					if (iVar15 != iParam0 && func_728(iVar15, 0))
					{
						if (func_861(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_862(iVar1);
				if (bVar13)
				{
					func_863(iParam0);
				}
				else
				{
					func_584(306, 0);
				}
			}
		}
	}
}

void func_579()
{
	if (func_24() != -1)
	{
		return;
	}
	func_864();
	func_865();
	func_866();
	func_867();
	func_868();
	func_869();
	func_870();
}

void func_580(int iParam0)
{
	func_871(iParam0, 1, 1, -142743235, 1);
	if (func_872(iParam0))
	{
		func_873(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_875(func_874(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_876(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_877() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_878(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_878(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_879(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_879(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_879(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_879(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_879(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_879(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_879(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_879(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_879(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_880(iVar8, iVar0))
				{
					func_881(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_880(iVar8, iVar0))
		{
			func_881(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_581()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_880(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_877() == -2125499975 || func_877() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_881(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_881(&vVar2, iVar5, iVar0);
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

void func_582()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_785(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_583(int iParam0, bool bParam1)
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
			if ((func_102((*Global_1835011)[59]->f_1, 1) || func_102((*Global_1347702)[1]->f_15, 1)) || func_290((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_754(403634348, 1))
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

void func_584(int iParam0, bool bParam1)
{
	func_360(iParam0, &iVar0, &iVar1);
	if (!func_882(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_883(iVar0, iVar1);
}

void func_585(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_875(iParam0, 1);
	func_884(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_884(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_885(17, iParam0, 0, 0, 0);
		}
	}
	if (func_24() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_884(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_884(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_586()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_785(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_587()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_785(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_588(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_520(iParam1, 1, 0) };
		iParam3 = func_886(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_887(iParam3);
	return func_648(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_589(int iParam0)
{
	if (!func_398(iParam0))
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

bool func_590(int iParam0, int iParam1)
{
	if (!func_888(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_889(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_890(Global_40.f_9910[iParam1], 4);
}

void func_591(int iParam0, int iParam1, bool bParam2)
{
	if (!func_888(iParam0))
	{
		return;
	}
	if (!func_267(iParam1))
	{
		return;
	}
	if (func_41(iParam1, 1))
	{
		return;
	}
	iVar0 = func_889(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_590(iParam0, -1))
	{
		return;
	}
	else
	{
		func_891(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_441(0, 17);
		}
	}
}

void func_592()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_785(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_593()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_785(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

void func_594()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_785(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_595()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_785(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_596()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_785(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_597()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_785(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_598()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_785(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_599()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_785(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_600(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_601(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_602(int iParam0, int iParam1, bool bParam2)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_719(iParam0);
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
		if (!func_892(iParam0, 1))
		{
			return false;
		}
	}
	return func_789(iParam0, 0, bParam2) >= iParam1;
}

void func_603(int iParam0)
{
	if (func_234(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_893(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_893(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_604()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_785(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_605()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_785(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_606()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_785(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_607()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_785(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_608()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_785(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_609()
{
	if (func_894() > 1)
	{
		func_895();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_584(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_584(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_584(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_584(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_584(452, 1);
		}
	}
}

bool func_610(int iParam0)
{
	return func_387(iParam0, 4, 1);
}

void func_611(int iParam0)
{
	func_896(iParam0, 4, 1);
}

void func_612(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_443(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_613(int iParam0)
{
	if (func_234(32768))
	{
		return;
	}
	if (!func_37(iParam0))
	{
		return;
	}
	func_236(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_27(iParam0))
	{
		case 1:
			func_238(func_237(909007663, -587839005), 1);
			iVar0 = func_108(iParam0);
			func_238(func_443(-634848880), 1);
			switch (func_779(iVar0))
			{
				case 0:
					func_238(func_237(909007663, 1325140787), 1);
					break;
				case 1:
					func_238(func_237(909007663, 2101241783), 1);
					break;
				case 2:
					func_238(func_237(909007663, -1296936294), 1);
					break;
				case 3:
					func_238(func_237(909007663, -798388728), 1);
					break;
				case 4:
					func_238(func_237(909007663, -1787586531), 1);
					break;
				case 5:
					func_238(func_237(909007663, -1002834519), 1);
					break;
				case 6:
					func_238(func_237(909007663, -50600144), 1);
					break;
				case 7:
					func_238(func_237(909007663, -348503123), 1);
					break;
				case 8:
					func_238(func_237(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_238(func_237(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_238(func_237(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_108(iParam0);
			if (func_110((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_238(func_443(-634848880), 1);
			}
			if (func_110((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_110((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_238(func_237(909007663, -587839005), 1);
				}
				else
				{
					func_238(func_237(909007663, -2049243343), 1);
				}
			}
			if (func_110((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_780(iVar1))
				{
					case 0:
						func_238(func_237(909007663, 1325140787), 1);
						break;
					case 1:
						func_238(func_237(909007663, 2101241783), 1);
						break;
					case 2:
						func_238(func_237(909007663, -1296936294), 1);
						break;
					case 3:
						func_238(func_237(909007663, -798388728), 1);
						break;
					case 4:
						func_238(func_237(909007663, -1787586531), 1);
						break;
					case 5:
						func_238(func_237(909007663, -1002834519), 1);
						break;
					case 6:
						func_238(func_237(909007663, -50600144), 1);
						break;
					case 7:
						func_238(func_237(909007663, -348503123), 1);
						break;
					case 8:
						func_238(func_237(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_238(func_237(909007663, 532323983), 1);
				}
			}
			else if (func_110((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_110((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_110((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_238(func_237(909007663, 551192206), 1);
				}
				else
				{
					func_238(func_237(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_614()
{
	if (func_24() != -1)
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
	if (!func_897(64))
	{
		return;
	}
	else if (func_80(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_25(0, 0, 1) || func_898()) || func_575())
	{
		return;
	}
	iVar0 = func_574();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_899(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_363(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_363(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_900(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_441(0, -1);
	}
	if (iVar2 > 0)
	{
		func_901("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_902(1, 0);
	Global_1956575->f_4 = 1;
}

void func_615(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_234(32768))
	{
		return;
	}
	func_903(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_904(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_616(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_905(iParam0);
}

int func_617(int iParam0, int iParam1)
{
	if (!func_906(iParam0))
	{
		return 0;
	}
	if (!func_375())
	{
		return 0;
	}
	if (!func_907(iParam0, &iVar0, &iVar1))
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

int func_618(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_908())
	{
		iVar2 = func_908();
	}
	iVar5 = func_909(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_111(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_111(iVar6) == 0)
			{
				return func_910(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_111(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_111(iVar6) == 0)
			{
				return func_910(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_910(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_911(1330954593, 0, -1);
		case 1:
			return func_911(1330954593, 0, -1);
		case 2:
			return func_911(1330954593, 0, -1) * 2;
		case 4:
			return func_911(1330954593, 0, -1);
		case 5:
			return func_911(1330954593, 0, -1);
		case 6:
			return func_911(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_911(1330954593, 0, -1) * 3;
		case 9:
			return func_911(1330954593, 0, -1) * 3;
		case 10:
			return func_911(1330954593, 0, -1) * 3;
		case 11:
			return func_911(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_620(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_24() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

char[] func_622(int iParam0)
{
	if (!func_37(iParam0))
	{
		return cVar0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_762(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_108(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_618(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_623(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_912();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_27(Global_1879514->f_1) == 1)
			{
				func_617(5, 1);
			}
			else if (func_27(Global_1879514->f_1) == 8 && (func_110((*Global_1347702)[func_108(Global_1879514->f_1)]->f_12, 1) || func_110((*Global_1347702)[func_108(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_617(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_624(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 16:
			return 1;
		case 36:
			return 2;
		case 79:
			return 3;
		case 125:
			return 4;
		case 127:
			return 5;
		case 118:
			return 6;
		case 129:
			return 7;
		case 114:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_626(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_627(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_628(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_629(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!func_406(Global_1393237->f_11[iParam0]->f_3))
	{
		func_913(Global_1393237->f_11[iParam0]->f_3, 0);
		_0x9851de7aec10b4e1(Global_1393237->f_11[iParam0]->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0] = -15;
	Global_1393237->f_11[iParam0]->f_2 = -1;
	Global_1393237->f_11[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1393237->f_11[iParam0]->f_6 = { 0f, 0f, 0f };
	Global_1393237->f_11[iParam0]->f_9 = 0f;
	if (func_914(iParam0, 8388608))
	{
		Global_1393237->f_11[iParam0]->f_10 = 8388608;
	}
	else
	{
		Global_1393237->f_11[iParam0]->f_10 = 0;
		if (Global_1393237->f_11[iParam0]->f_17 != func_915())
		{
		}
		Global_1393237->f_11[iParam0]->f_17 = func_915();
	}
	Global_1393237->f_11[iParam0]->f_11 = -1;
	Global_1393237->f_11[iParam0]->f_12 = 0;
	Global_1393237->f_11[iParam0]->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237->f_11[iParam0]->f_14[iVar0] = 0;
		iVar0++;
	}
	func_916(iParam0, 1);
	Global_1393237->f_11[iParam0]->f_29 = 0;
	if (iParam0 > 2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (does_blip_exist(&(Global_1393237->f_11[iParam0]->f_18[0])))
		{
			remove_blip(Global_1393237->f_11[iParam0]->f_18[0]);
		}
		if (does_blip_exist(&(Global_1393237->f_11[iParam0]->f_18[1])))
		{
			remove_blip(Global_1393237->f_11[iParam0]->f_18[1]);
		}
		set_this_script_can_remove_blips_created_by_any_script(false);
	}
	if (_0xf6a8a652a6b186cd(Global_1393237->f_11[iParam0]->f_21))
	{
		func_913(Global_1393237->f_11[iParam0]->f_3, 1);
	}
}

void func_630(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_631()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_917(iVar0, 128))
		{
			func_918(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_632()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_917(iVar0, 128) && func_917(iVar0, 1))
		{
			func_918(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_633(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_634()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_243(iVar0, 16777216))
		{
			if (!func_919(iVar0))
			{
				func_920(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_635(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_636(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_921(Global_1310750[iVar0], iParam0))
		{
			if (!func_922(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_923(iVar0) < func_924(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_925(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_637(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_926(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_926(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_926(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_926(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_926(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_926(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_926(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_638(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_338();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

char* func_639(char* sParam0)
{
	return sParam0;
}

void func_640(int iParam0, bool bParam1, int iParam2)
{
	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_290(iParam0) && !func_658(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_620(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_290(iParam0))
	{
		iParam2 = -1;
	}
	if (func_356(iParam0) == 3 || (func_356(iParam0) == 1 && _0x01f4d242765c6b24(func_620(iParam0))))
	{
		func_621(func_27(iParam0), func_620(iParam0), iParam2);
		if ((!func_37(Global_1572864->f_8) && !func_25(0, 1, 0)) && !func_80(&Global_1935630, 32768))
		{
			iVar0 = func_572(iParam0);
			if (iVar0 != -1)
			{
				func_573(0);
			}
			else if (func_27(iParam0) == 8)
			{
				iVar0 = func_574();
				if (iVar0 != -1)
				{
					func_573(0);
				}
			}
		}
	}
	func_549(iParam0, 0);
	if (func_26(0) == iParam0)
	{
		func_551(1);
		func_554(0);
		func_624(1);
	}
	func_571(iParam0, 1);
	func_550(iParam0);
}

bool func_641(int iParam0)
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

int func_642(var uParam0)
{
	return uParam0;
}

void func_643(int iParam0)
{
	if (!func_927(iParam0))
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

void func_644(int iParam0)
{
	func_928();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_645()
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

bool func_646(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_647(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_929(bParam0);
}

int func_648(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_520(iParam1, 1, 0) };
		iParam3 = func_886(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_930(iParam1, iParam2, func_875(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_931(1, (func_24() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_875(iParam3, 1)])
			{
				func_885(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_932(32768) && iParam1 != &Global_1946804->f_57[func_875(iParam3, 1)])
			{
				func_933();
				func_885(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_885(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_934(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_885(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_935(0);
			func_936(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_885(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_649(int iParam0, bool bParam1)
{
	Var0 = { func_520(iParam0, 0, 0) };
	Var5 = { func_524(iParam0, Var0, Var0.f_4, 0) };
	if (func_726(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_729(0), &Var5, bParam1);
}

void func_650(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_24() != -1;
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
			func_937(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_938(iParam1, 29, bVar4, 1, 0);
			func_938(iParam1, 31, bVar4, 1, 0);
			func_938(iParam1, 30, bVar4, 1, 0);
			func_938(iParam1, 22, bVar4, 1, 0);
			func_938(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_932(32768) && func_939(1108822547, 8)) && func_940(10, iParam3))
	{
		func_941(iParam1, 0, 1);
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
			iVar3 = func_942(iVar1, 1);
			if (func_939(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_940(iVar1, iParam3))
				{
				}
				else if ((func_939(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_939(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_938(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_943(iVar3, 1, 6);
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
								func_938(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_939(iVar3, 1))
							{
								func_944(iVar3, 1, 6);
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

int func_651(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0]);
	}
	return &(Global_42606[iParam0]);
}

int func_652(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_1;
	}
	return Global_42606[iParam0]->f_1;
}

void func_653(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_654(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_655(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

bool func_656(int iParam0)
{
	return func_214(iParam0) == 0;
}

int func_657(bool bParam0, bool bParam1, bool bParam2)
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

bool func_658(int iParam0)
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
		iVar0 = func_356(iParam0);
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

void func_659(int iParam0)
{
	if (!func_945(iParam0))
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

void func_660(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_627(iParam0, func_626(iParam0) + 1);
}

int func_661(int iParam0, int iParam1)
{
	iVar0 = func_752(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_946(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_947(iVar0, iParam1);
	return iParam1;
}

void func_662(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_663(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_664(bool bParam0)
{
	func_948(bParam0);
	func_949(bParam0);
	func_950(bParam0);
	func_951(bParam0);
	func_952(bParam0);
	func_953(bParam0);
	func_954(bParam0);
	func_955(bParam0);
}

void func_665(bool bParam0)
{
	if (func_24() != -1)
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
		func_584(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_584(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_956(1, bParam0, 1);
	func_834();
	Global_40.f_11095.f_43 = bParam0;
}

void func_666(int iParam0)
{
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_957(Global_1898077->f_7, Global_1898077->f_3);
}

void func_667(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_958(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_668(int iParam0)
{
	iVar0 = func_625(iParam0);
	return func_959(iVar0, 16);
}

void func_669(int iParam0, int iParam1)
{
	func_163(&(Global_40.f_11864[iParam0]->f_1), iParam1);
}

void func_670(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_960();
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
			func_961(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_671(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_672(bool bParam0)
{
	if (func_962(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_673(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_24() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_963(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_963(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_700(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_674(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_964(uParam0);
	}
}

bool func_675(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_700(iParam2);
	}
	else
	{
		iVar1 = func_699(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_700(iParam0);
	}
	else
	{
		iVar0 = func_699(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_635(*uParam1, 8388608))
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

float func_676(int iParam0, int iParam1)
{
	return func_178(iParam0, iParam1, 1, 1);
}

float func_677(var uParam0)
{
	return uParam0->f_26;
}

bool func_678(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_679(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_163(uParam0, 134217728);
	}
	else
	{
		func_164(uParam0, 134217728);
	}
}

void func_680()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_681(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_178(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_735(iVar0, 0)))
		{
			if (func_965(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_682(var uParam0)
{
	return uParam0->f_17;
}

bool func_683(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_635(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_684(var uParam0)
{
	return uParam0->f_18;
}

bool func_685(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_735(iVar0, 0)))
		{
			if (func_359(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_686(var uParam0)
{
	return uParam0->f_23;
}

int func_687(var uParam0)
{
	return uParam0->f_21;
}

int func_688(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_689(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_740(iParam0, vParam4, 0.5f))
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

int func_690(int iParam0)
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
	if (func_966(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_691(int iParam0)
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

bool func_692(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_404(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_693(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_404(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_694(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_404(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
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

bool func_695(int iParam0, int iParam1)
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

bool func_696(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_967(iParam0, 1, 0, 0) != 2055893578)
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

bool func_697(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_698(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_302(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_699(int iParam0)
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

int func_700(int iParam0)
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

int func_701(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_695(Global_35, &iVar1))
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
		fVar2 = func_178(iParam0, player_ped_id(), 0, 1);
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
		if (func_178(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_702(int iParam0, var uParam1, bool bParam2)
{
	func_962(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_703(uParam1, iVar0))
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
				if (!bParam2 || !func_703(uParam1, iVar1))
				{
					if (func_302(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_703(var uParam0, int iParam1)
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

bool func_704(int iParam0)
{
	if (func_31())
	{
		return false;
	}
	return func_102((*Global_1347702)[58]->f_15, 1);
}

int func_705(var uParam0)
{
	return uParam0->f_20;
}

int func_706(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_707(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			Jump @2718; //curOff = 2114
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2159
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			Jump @2718; //curOff = 2208
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2253
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2298
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2343
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2388
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2433
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			Jump @2718; //curOff = 2482
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			Jump @2718; //curOff = 2531
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2718; //curOff = 2580
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2625
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2670
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}

bool func_708(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_709(int iParam0)
{
	iVar0 = func_128(iParam0);
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

void func_710(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

int func_711(int iParam0)
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

void func_712(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

void func_713(int iParam0)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_968(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

bool func_714(int iParam0, int iParam1)
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

bool func_715(int iParam0, int iParam1)
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

bool func_716(int iParam0, int iParam1)
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
	if (!func_714(iParam0, iVar0))
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

void func_717(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<4> func_718(bool bParam0)
{
	return func_524(1328661203, func_969(), -1591664384, bParam0);
}

int func_719(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_720(bool bParam0)
{
	iVar0 = func_729(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_524(923904168, func_718(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_524(923904168, func_718(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_524(923904168, func_718(bParam0), -740156546, 0);
}

bool func_721(int iParam0, bool bParam1)
{
	if (func_723(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_372(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_722(bool bParam0)
{
	iVar0 = func_729(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_524(271701509, func_718(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_524(271701509, func_718(bParam0), 12999093, 0);
}

int func_723(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_724(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_723(iParam0);
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

bool func_725(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_729(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_726(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_524(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_729(bParam6), &Var0, 0);
	return uVar4;
}

bool func_727(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_729(0);
	*uParam1 = { func_524(iParam0, func_720(0), iParam3, 0) };
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

bool func_728(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_729(bool bParam0)
{
	if (func_24() == -1)
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

bool func_730(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_731(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

float func_732(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_279(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_970(uParam0);
	}
	return func_279(uParam0);
}

float func_733(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_734()
{
	iVar0 = func_118(func_123());
	iVar1 = func_119(func_123());
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

var func_735(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_736(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

float func_737(int iParam0)
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

int func_738(float fParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_971(iParam1) };
	vVar3 = { func_971(iParam2) };
	return func_972(fParam0, vVar0, vVar3, iParam2);
}

int func_739(float fParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_971(iParam1) };
	return func_972(fParam0, vVar0, vParam2, 0);
}

bool func_740(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_741(int iParam0)
{
	iVar0 = func_875(func_973(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_742(var uParam0)
{
	if (func_743(81053684, uParam0))
	{
		return true;
	}
	if (func_743(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_743(int iParam0, var uParam1)
{
	iVar1 = func_875(func_973(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_723(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_744()
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_974(661720433);
}

bool func_745()
{
	return Global_1347398->f_1 == 0;
}

void func_746(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_747()
{
	return Global_1347398->f_1 == 1000;
}

bool func_748()
{
	return Global_1347398->f_1 == 2000;
}

bool func_749()
{
	return Global_1347398->f_1 == 3000;
}

void func_750(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_751(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_975(iParam0);
	}
	else
	{
		func_976(iParam0, iParam1);
	}
	func_977();
}

int func_752(int iParam0)
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

int func_753(int iParam0)
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
	func_947(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_754(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_978(iParam0);
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

int func_755(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_767(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_756()
{
	return Global_40.f_11095.f_35;
}

void func_757(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_979(iParam0, 0);
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
		func_758(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_758(int iParam0)
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
			func_979(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_980(1);
	}
}

bool func_759(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_760()
{
	iVar0 = func_38((*Global_1347702)[9]->f_15);
	iVar1 = func_38((*Global_1835011)[69]->f_1);
	if (func_124(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_761(int iParam0)
{
	if (!func_945(iParam0))
	{
		return false;
	}
	return func_102((*Global_1835011)[iParam0]->f_1, 1);
}

int func_762(int iParam0)
{
	if (func_27(iParam0) == 1)
	{
		return func_108(iParam0);
	}
	return -1;
}

int func_763(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_981(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_982(iVar6);
	}
	return iVar5;
}

int func_764(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_983(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_765(int iParam0, bool bParam1)
{
	func_984(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_766(int iParam0)
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

void func_767(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_765(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_768(2, *uParam0);
		}
		else
		{
			func_769(2, *uParam0);
		}
	}
	func_985(uParam0);
}

void func_768(int iParam0, int iParam1)
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

void func_769(int iParam0, int iParam1)
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

void func_770(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_986(iParam0, iParam1, bParam2);
}

int func_771(int iParam0)
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

int func_772(int iParam0)
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

void func_773(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_987();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_988(iParam0);
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
	if (func_372(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_31())
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
	Global_40.f_11095.f_35 = func_563(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_987();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_989(iVar1);
		func_991(func_990(), 0, 4000);
		func_992(Global_40.f_11095.f_35);
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
		func_993(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_238(func_443(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_772(14))
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
					sParam4 = func_994(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_893(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_893(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_238(func_443(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_772(4))
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
					sParam4 = func_994(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_893(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_893(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_443(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_617(10, 1);
	}
}

void func_774(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_775(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_776(int iParam0)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (func_108(iParam0))
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
			switch (func_108(iParam0))
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

void func_777(int iParam0)
{
	iVar2 = func_729(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_723(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_996(func_995(iParam0), 6);
}

void func_778(int iParam0)
{
	iVar2 = func_729(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_723(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_997(func_995(iParam0), 6);
}

int func_779(int iParam0)
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

int func_780(int iParam0)
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

void func_781(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_782()
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

int func_783(int iParam0)
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

void func_784(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_785(int iParam0)
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

bool func_786(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_24() == -1)
	{
		if (func_998(iParam0) && func_999(iParam0))
		{
			func_1000(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_787(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1001(iParam0, iParam1);
	Var0 = { func_520(iParam0, 0, 1) };
	iVar5 = func_1002(iParam0, &Var0, 0, 0);
	iVar6 = func_1003(iParam0, 0);
	if ((iVar5 > 1 && !func_575()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_804(iParam0, -2051813666))
		{
			func_584(583, 1);
		}
		else
		{
			func_584(582, 0);
		}
	}
	if (func_1004(iParam0, &Var0, *iParam1, 0, 0))
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

void func_788(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_857(iParam0, -949239683))
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

int func_789(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_719(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1005(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1006(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_729(bParam2), iParam0, 0);
	return iVar2;
}

bool func_790(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_791(iParam0) != 0;
}

int func_791(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1007())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1008(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_792(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_793(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1007())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_792(iVar0))
		{
			if (func_602(func_1008(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_794(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1009(48);
	func_441(0, -1);
}

bool func_795(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_102((*Global_1347702)[iParam0]->f_15, 1);
}

int func_796(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_797(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_798(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_102((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_799(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_109(iParam0))
	{
		return false;
	}
	return func_290((*Global_1347702)[iParam0]->f_15);
}

int func_800()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_602(func_1010(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_801(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_375() && (func_799(38) || func_795(38)))
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
			if (func_375() && (func_799(39) || func_795(39)))
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
			iVar9 = func_1011(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_375() && (func_799(41) || func_795(41)))
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
			if (func_375() && (func_799(49) || func_795(49)))
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
			iVar9 = func_1011(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1012(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1013(iParam0, iVar13, iVar14))
	{
	}
	if (func_1014(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1015(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1016(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1017(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1018(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_802(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_803(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_375() && (func_799(38) || func_795(38)))
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
			if (func_375() && (func_799(39) || func_795(39)))
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
			if (func_375() && (func_799(49) || func_795(49)))
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
		if (func_375() && (func_799(38) || func_795(38)))
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
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_363(_create_var_string(2, sVar0), _create_var_string(2, func_1020(func_797(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_375() && (func_799(39) || func_795(39)))
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
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_375() && (func_799(49) || func_795(49)))
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
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1019(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_804(int iParam0, int iParam1)
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

bool func_805(int iParam0, int iParam1)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_806(int iParam0)
{
	if (!func_498(iParam0))
	{
		return;
	}
	func_1021(iParam0);
	func_1022(iParam0);
}

int func_807(int iParam0, bool bParam1)
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
	if (func_728(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1023(iVar0) || func_399(iVar0))
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

int func_808(int iParam0, bool bParam1)
{
	if (!func_728(iParam0, 0))
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

void func_809(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_398(iParam0))
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

bool func_810(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_808(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_24() == -1)
		{
			func_809(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1024(iVar0);
			}
		}
		if (!func_1004(iParam0, &uVar1, 1, 0, 0))
		{
			func_1000(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1025(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_400(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_400(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_400(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_31())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_402(iVar0))
				{
					func_400(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_400(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1026(Global_35, 2, 0, 1);
				if ((((func_398(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_372(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_398(iVar7) && func_372(24))
				{
					if (!func_400(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_400(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_400(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_584(480, 1);
	}
	return true;
}

bool func_811(int iParam0, int iParam1, int iParam2)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_398(iVar4))
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
	if (func_602(611073244, 1, 0) && iParam2 == -897553835)
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
		func_844(func_1027(iParam0), func_843(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_24() == -1)
		{
			if (func_102((*Global_1835011)[14]->f_1, 1))
			{
				func_584(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_526(0))
	{
		if (func_527(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_849(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_812(int iParam0)
{
	if ((iParam0 == -615217896 && !func_32()) || iParam0 != -615217896)
	{
		if (func_1028(Global_35, iParam0, &uVar0))
		{
			func_648(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_834();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_834();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_834();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_832();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_830();
			break;
	}
}

void func_813(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_830();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_831();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_832();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_833();
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
			func_834();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1029();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1030();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_814(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_815(int iParam0)
{
	bVar0 = func_804(iParam0, -2017733358);
	if (func_1031() < 3)
	{
		if (bVar0)
		{
			if (func_1033(func_1032(iParam0), iParam0))
			{
				func_844(79, func_843(func_1032(iParam0)), 1);
			}
			else
			{
				func_844(78, func_843(func_1032(iParam0)), 1);
			}
		}
		else
		{
			func_844(80, func_843(func_1034(iParam0)), 1);
		}
	}
}

bool func_816()
{
	if (((((func_1035(839908568, 400) || func_1035(-1134030454, 400)) || func_1035(623353496, 400)) || func_1035(-344413337, 400)) || func_1035(-1664948962, 400)) || func_1035(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_817(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_911(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1036(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1037(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_818(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_801(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_803(51, 0, 0, 0, 0, -1, 0);
			func_1038(8192);
			break;
		case 581047644:
			func_801(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_803(51, 0, 0, 0, 0, -1, 0);
			func_1038(524288);
			break;
		case -644199619:
			func_801(39, 0, 0, 0, 0, 0, 1, 0);
			func_803(39, 0, 0, 0, 0, -1, 0);
			func_1039(16);
			break;
		case 684296857:
			func_801(41, 0, 0, 0, 0, 0, 1, 0);
			func_803(41, 0, 0, 0, 0, -1, 0);
			func_1040(8);
			break;
		case 466137807:
			func_801(49, 0, 0, 0, 0, 0, 1, 0);
			func_803(49, 0, 0, 0, 0, -1, 0);
			func_1041(16);
			break;
		case -1087522507:
			func_801(43, 0, 0, -1791518714, func_1042(1), 0, -1, 0);
			func_1043(1);
			break;
		case -405829000:
			func_801(43, 0, 0, -2087881550, func_1042(2), 0, -1, 0);
			func_1043(2);
			break;
		case 378660860:
			func_801(43, 0, 0, 1908068621, func_1042(4), 0, -1, 0);
			func_1043(4);
			break;
		case 1566111097:
			func_801(43, 0, 0, 1611247019, func_1042(8), 0, -1, 0);
			func_1043(8);
			break;
		case 1276007140:
			func_801(43, 0, 0, 1319635688, func_1042(16), 0, -1, 0);
			func_1043(16);
			break;
	}
}

void func_819(int iParam0)
{
	if (func_1044() == 1)
	{
		if (func_795(39))
		{
			func_584(342, 0);
		}
		else
		{
			func_584(343, 0);
			func_1039(1);
		}
	}
	if (func_1044() >= 30)
	{
		func_584(344, 0);
	}
	func_801(39, 0, 0, 0, 0, 0, -1, 0);
	func_803(39, 0, 0, func_1044(), 30, 1, 0);
}

void func_820(int iParam0)
{
	if (func_1045() == 1)
	{
		if (func_795(49))
		{
			func_584(409, 0);
		}
		else
		{
			func_584(410, 0);
			func_1041(1);
		}
	}
	if (func_1045() >= 10)
	{
		func_584(411, 0);
	}
	func_801(49, 0, 0, 0, 0, 0, -1, 0);
	func_803(49, 0, 0, func_1045(), 10, 1, 0);
}

void func_821(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_584(437, 0);
			func_584(440, 0);
			func_1046(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_801(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_803(51, 0, 0, sVar0, func_1011(-949689219, 20), 1, 0);
			func_1038(1);
			func_104(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1046(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_801(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_803(51, 0, 0, sVar0, func_1011(-1248968496, 20), 1, 0);
			func_1038(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1046(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_801(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_803(51, 0, 0, sVar0, func_1011(1706369307, 20), 1, 0);
			func_1038(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1046(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_801(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_803(51, 0, 0, sVar0, func_1011(1520110311, 20), 1, 0);
			func_1038(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_584(438, 0);
			func_1046(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_801(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_803(51, 0, 0, sVar0, func_1011(-1992824800, 20), 1, 0);
			func_1038(32768);
			break;
		default:
			func_584(439, 0);
			break;
	}
}

void func_822()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_823(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_24() == -1)
	{
		if (!func_795(43))
		{
			if (iParam0 == 281887510)
			{
				func_584(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_584(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_584(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_584(400, 0);
			}
		}
		else if (func_804(iParam0, 412399755))
		{
			func_1047(-1791518714);
			if (func_1048() == 0)
			{
				func_441(0, 10);
				iVar1 = func_1049(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1050(iParam0) < func_1051(iParam0))
					{
						func_801(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_803(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_795(44))
		{
			if (iParam0 == -222563712)
			{
				func_584(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_584(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_584(401, 0);
			}
		}
		else if (func_804(iParam0, 709057512))
		{
			func_1047(-2087881550);
			if (func_1048() == 1)
			{
				func_441(0, 10);
				iVar1 = func_1049(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1050(iParam0) < func_1051(iParam0))
					{
						func_801(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_803(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_795(45))
		{
			if (iParam0 == 2116770557)
			{
				func_584(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_584(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_584(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_584(398, 0);
			}
		}
		else if (func_804(iParam0, -1478961327))
		{
			func_1047(1908068621);
			if (func_1048() == 2)
			{
				func_441(0, 10);
				iVar1 = func_1049(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1052(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1053(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1009(48);
					}
					if (func_1050(iParam0) < func_1051(iParam0))
					{
						func_801(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_803(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1050(iParam0) < func_1051(iParam0))
					{
						func_801(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_803(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_795(46))
		{
			if (iParam0 == 2085530337)
			{
				func_584(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_584(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_584(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_584(406, 0);
			}
		}
		else if (func_804(iParam0, -1238404098))
		{
			func_1047(1611247019);
			if (func_1048() == 3)
			{
				func_441(0, 10);
				iVar1 = func_1049(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1050(iParam0) < func_1051(iParam0))
					{
						func_801(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_803(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_795(47))
		{
			if (iParam0 == -1521783510)
			{
				func_584(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_584(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_584(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_584(403, 0);
			}
		}
		else if (func_804(iParam0, 1160548794))
		{
			func_1047(1319635688);
			if (func_1048() == 4)
			{
				func_441(0, 10);
				iVar1 = func_1049(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1050(iParam0) < func_1051(iParam0))
					{
						func_801(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_803(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_824(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1052(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1053(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1009(48);
		}
	}
}

void func_825(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_602(func_1054(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1055(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1056(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_826(int iParam0, int iParam1, int iParam2)
{
	if (func_24() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_817(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_817(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_817(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_817(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_817(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_817(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_817(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_817(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_817(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_817(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_817(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_817(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_817(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1057())
			{
				func_817(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_817(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_817(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_817(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_817(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_817(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_817(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_817(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_817(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_817(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_817(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_817(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_817(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_827(int iParam0)
{
	if (func_795(41))
	{
		func_584(363, 0);
	}
	else
	{
		func_584(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1058(-1865241121);
			func_1059(-642026005);
			func_1060(-642026005);
			func_441(0, 10);
			break;
		case -2108314374:
			func_1058(2117142684);
			func_1059(-940584364);
			func_1060(-940584364);
			func_441(0, 10);
			break;
		case -1193798153:
			func_1058(-1409326024);
			func_1059(1972645282);
			func_1060(1972645282);
			func_441(0, 10);
			break;
		case -787702678:
			func_1058(-641744968);
			func_1059(1667205433);
			func_1060(1667205433);
			func_441(0, 10);
			break;
		case -804542901:
			func_1058(-946988203);
			func_1059(1362715885);
			func_1060(1362715885);
			func_441(0, 10);
			break;
		case -1696275132:
			func_1058(-646136018);
			func_1059(1053540370);
			func_1060(1053540370);
			func_441(0, 10);
			break;
		case -161595323:
			func_1058(-955835837);
			func_1059(-1100103852);
			func_1060(-1100103852);
			func_441(0, 10);
			break;
		case -1114363619:
			func_1058(-179276075);
			func_1059(-1409869209);
			func_1060(-1409869209);
			func_441(0, 10);
			break;
		case -368407134:
			func_1058(-492711560);
			func_1059(-1760235357);
			func_1060(-1760235357);
			func_441(0, 10);
			break;
		case 1997759228:
			func_1058(1764383959);
			func_1059(-138366827);
			func_1060(-138366827);
			func_441(0, 10);
			break;
		case 1265573293:
			func_1058(317501533);
			func_1059(-1261163843);
			func_1060(-1261163843);
			func_441(0, 10);
			break;
		case -1030441283:
			func_1058(817753087);
			func_1059(-963523016);
			func_1060(-963523016);
			func_441(0, 10);
			break;
		case -1490884871:
			func_1058(576606016);
			func_1059(560825326);
			func_1060(560825326);
			func_441(0, 10);
			break;
		case -395458616:
			func_1058(814934957);
			func_1059(858269539);
			func_1060(858269539);
			break;
	}
}

void func_828(int iParam0, int iParam1)
{
	func_1061(iParam0, iParam1, &uVar0);
}

bool func_829(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1026(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1026(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1062("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1063(&Var3, iVar2, iVar0, iVar1))
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
						func_1064(iVar0);
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

void func_830()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_831()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_832()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_833()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_834()
{
	func_1065();
	func_1066();
	func_1067();
}

void func_835(int iParam0, int iParam1, bool bParam2)
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

void func_836(int iParam0, bool bParam1)
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
	func_1019(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_837(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_838(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_839(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_840(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_841(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_842(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_843(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_844(int iParam0, int iParam1, bool bParam2)
{
	func_360(iParam0, &iVar0, &iVar1);
	if (!func_882(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1068(iParam0, 1024))
	{
		return;
	}
	func_883(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_845(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_360(iParam0, &iVar0, &iVar1);
	if (!func_882(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1068(iParam0, 1024))
	{
		return;
	}
	func_883(iVar0, iVar1);
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

int func_846()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1007())
	{
		return func_847();
	}
	iVar4 = (func_1007() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1007())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1069(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1008(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_847()
{
	iVar0 = get_random_int_in_range(0, func_1007());
	return func_1008(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_848(int iParam0)
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

bool func_849(int iParam0, int iParam1, int iParam2)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_520(iParam0, 0, 1) };
	Var5 = { func_524(iParam0, Var0, Var0.f_4, 0) };
	return func_1070(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_850(int iParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	switch (func_723(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1071(81053684, 0) <= 0)
			{
				func_885(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_885(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1072(iParam0);
			if (func_1073(iVar0))
			{
				func_1074(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_885(30, iParam0, 0, 0, 0);
			}
			if (func_877() == -2125499975 || func_877() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_885(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_877() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_885(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1075(-525676072, 0))
			{
				if (func_1076(-525676072, &iVar1))
				{
					func_885(33, iVar1, 0, 0, 0);
				}
			}
			func_885(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1077(99217379))
		{
			func_648(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_806(24);
		if (func_829(&iVar2, 0))
		{
			func_400(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_851(int iParam0)
{
	if (func_804(iParam0, 943695443))
	{
		func_1078(0, iParam0);
	}
	else if (func_804(iParam0, -2096528786))
	{
		func_1078(1, iParam0);
	}
	else if (func_804(iParam0, -1094167013))
	{
		func_1078(2, iParam0);
	}
	else if (func_804(iParam0, 1936654645))
	{
		func_1078(3, iParam0);
	}
	else if (func_804(iParam0, 1306489306))
	{
		func_1078(4, iParam0);
	}
	else if (func_804(iParam0, 435762317))
	{
		func_1078(5, iParam0);
	}
	else if (func_804(iParam0, 1259363210))
	{
		func_1078(6, iParam0);
	}
	else if (func_804(iParam0, 881398259))
	{
		func_1078(7, iParam0);
	}
	else if (func_804(iParam0, -541549214))
	{
		func_1078(8, iParam0);
	}
	else if (func_804(iParam0, 130796156))
	{
		func_1078(-1, iParam0);
	}
}

int func_852(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1079(&Var4, 1356624740);
	return func_1080(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_853(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return Var0;
	}
	if (func_804(iParam0, -305066475))
	{
		if (func_24() == -1)
		{
			if (func_804(iParam0, -537818634))
			{
				return func_443(189951448);
			}
			else
			{
				return func_443(1176172851);
			}
		}
	}
	else if (func_804(iParam0, -537818634))
	{
		return func_443(-963660207);
	}
	if (func_804(iParam0, 2084895747))
	{
		return func_443(1694039471);
	}
	return Var2;
}

void func_854(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_24() == -1)
			{
				if (func_102((*Global_1835011)[4]->f_1, 1))
				{
					func_584(109, 1);
				}
			}
			break;
	}
}

void func_855(int iParam0, char* sParam1)
{
	sVar0 = func_1082(func_1081(0));
	func_893(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1083(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_856(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_728(iParam0, 0))
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
	if (!func_1084())
	{
		func_1085(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1086(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1086(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_805(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_719(iParam0);
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
	else if (!func_1087(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_374(_create_var_string(10, &cVar2, _create_var_string(0, func_843(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_804(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_843(iParam0));
	}
	func_893(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_857(int iParam0, int iParam1)
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

struct<10> func_858(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_859(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_860(int iParam0, int iParam1)
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

bool func_861(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1088(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1088(iParam0, Var2, 1))
				{
					if (func_1089(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1089(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_584(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_25(0, 0, 1))
		{
			func_441(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_862(int iParam0)
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

void func_863(int iParam0)
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
		func_584(iVar0, 0);
	}
}

void func_864()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1090(0);
			_unlock_set_unlocked(-121456797, false);
			func_1091();
		}
		return;
	}
	if (!func_102((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1092();
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
	func_1090(1);
}

void func_865()
{
	if (!func_102((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_577(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_866()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1093(0);
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
	if (!func_102((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1093(1);
}

void func_867()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1094(15000, 0, 0, 0, 1);
			func_1093(0);
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
	if (!func_102((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_903(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1093(1);
}

void func_868()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_602(1191437462, 1, 0) && !func_290((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_577(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1095(1))
			{
				func_840(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_602(1119149048, 1, 0) && !func_290((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_577(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1095(2))
			{
				func_840(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1095(4))
		{
			func_840(4);
		}
		if (func_1095(0))
		{
			func_1096(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_602(1191437462, 1, 0))
			{
				func_871(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_602(1119149048, 1, 0))
			{
				func_871(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1095(1))
		{
			func_1096(1);
		}
		if (func_1095(2))
		{
			func_1096(2);
		}
		if (func_1095(4))
		{
			func_1096(4);
		}
		if (!func_1095(0))
		{
			func_840(0);
		}
	}
}

void func_869()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_102((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1097() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_809(127400949);
		if (func_400(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1097() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1098(-2055673461, Var1, 1423542233);
		func_1098(-202131179, Var1, -1264898804);
		func_1098(2013836545, Var1, 1592019450);
		func_1098(1497476650, Var1, 1117400455);
		func_1098(1063571467, Var1, 1150213537);
		func_1098(2107224237, Var1, 1598825281);
		func_1098(1747981656, Var1, -712527121);
		func_1098(-1371140647, Var1, 454332195);
		func_1098(-19142973, Var1, 256105670);
		func_1098(-2074737817, Var1, -1328061889);
		func_1098(-1114256243, Var1, -782241404);
		func_1098(-1653277288, Var1, 1669853467);
		func_1098(1869398132, Var1, -1559225678);
		func_1098(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_543())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_398(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_372(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_372(24) && func_398(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_398(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_372(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_870()
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

int func_871(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1005(iParam0, 1);
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
			func_856(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_602(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_853(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_789(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_789(iParam0, 0, 0) - iParam1) < 0)
		{
			func_871(iParam0, func_789(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_719(iParam0) == -427144552)
	{
		if (!func_1099(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1100(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_526(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_856(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1101(iParam0, iParam1);
	return 1;
}

bool func_872(int iParam0)
{
	switch (func_723(iParam0))
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

void func_873(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_723(iParam0))
	{
		case -2061583405:
			bVar0 = func_1102(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1102(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1102(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1102(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1102(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1102(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1103();
	}
	if (bParam1)
	{
		func_1104(0, 0);
	}
}

int func_874(int iParam0)
{
	Var0 = { func_520(iParam0, 1, 0) };
	return func_886(Var0.f_4);
}

int func_875(int iParam0, int iParam1)
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

void func_876(int iParam0)
{
	if (func_24() == -1)
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
		iVar0 = func_875(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1105(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_877()
{
	return Global_1946804->f_1;
}

bool func_878(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1106(iParam6);
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
		func_1108(uParam0, func_1107(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_875(iVar3, 1);
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
							if (func_1109(iVar3) && func_1110(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1111(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_879(int iParam0, int iParam1)
{
	if (func_24() == -1)
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

int func_880(int iParam0, int iParam1)
{
	vVar0 = { func_879(iParam0, iParam1) };
	return vVar0.x;
}

void func_881(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_882(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1112(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1113(iParam0))
	{
		return false;
	}
	if (func_1114(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1068(iParam0, 1)) || func_234(32768))
	{
		if (!func_1068(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1115())
	{
		return false;
	}
	return true;
}

void func_883(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_884(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_885(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_937(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1116(Var0);
}

int func_886(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_942(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_887(int iParam0)
{
	func_1105(Global_1946804->f_1497.f_1[func_875(iParam0, 1)], 2, 6);
	func_1105(Global_1946804->f_1378.f_1[func_875(iParam0, 1)], 2, 6);
}

bool func_888(int iParam0)
{
	return iParam0 != 0;
}

int func_889(int iParam0)
{
	iVar0 = -1;
	if (!func_888(iParam0))
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

bool func_890(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_891(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_892(int iParam0, int iParam1)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1005(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1062("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1063(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_398(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1064(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1064(iVar1);
	}
	return false;
}

var func_893(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1117(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_894()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1118(iVar1);
		if (!_unlock_is_visible(func_1119(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_895()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1118(iVar0);
		if (!_unlock_is_visible(func_1119(iVar1)))
		{
			_unlock_set_visible(func_1119(iVar1), true);
		}
		iVar0++;
	}
}

void func_896(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_392(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_897(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_898()
{
	return (func_80(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_899(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_24() != -1)
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
	if (!func_728(iVar0, 0))
	{
		return 0;
	}
	if (!func_1120(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1121(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_804(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_520(iVar0, 0, 1) };
	iVar10 = func_1122(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1123(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1124(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_577(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1094(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_900(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_893(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_901(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_902(bool bParam0, bool bParam1)
{
	if (func_24() != -1)
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

void func_903(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1036(iParam0, sParam4, iParam5);
	}
	func_1037(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_904(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1125())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1125())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_620(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_108(iParam0);
	if (func_27(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1126(1, iVar1);
					func_1126(8, iVar1);
					func_1126(7, iVar1);
					break;
				case 12:
					func_1126(6, iVar1);
					break;
				case 53:
					func_1126(3, iVar1);
					func_1126(7, iVar1);
					func_1126(4, iVar1);
					break;
				case 20:
					func_1126(8, iVar1);
					break;
				case 19:
					func_1126(1, iVar1);
					func_1126(2, iVar1);
					break;
				case 24:
					func_1126(3, iVar1);
					func_1126(9, iVar1);
					func_1126(20, iVar1);
					break;
				case 28:
					func_1126(1, iVar1);
					break;
				case 34:
					func_1126(23, iVar1);
					func_1126(2, iVar1);
					func_1126(18, iVar1);
					break;
				case 29:
					func_1126(0, iVar1);
					func_1126(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1126(0, iVar1);
					func_1126(3, iVar1);
					func_1126(2, iVar1);
					func_1126(11, iVar1);
					func_1126(6, iVar1);
					func_1126(25, iVar1);
					func_1126(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1126(5, iVar1);
					break;
				case 63:
					func_1126(1, iVar1);
					func_1126(3, iVar1);
					break;
				case 37:
					func_1126(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_618(0, 10, 11, 2116153146))
			{
				func_1126(7, iVar1);
				func_1126(4, iVar1);
			}
			else if (iParam0 == func_618(0, 7, 11, -379687487))
			{
				func_1126(8, iVar1);
				func_1126(15, iVar1);
			}
			else if (iParam0 == func_618(0, 8, 11, -1386089015))
			{
				func_1126(3, iVar1);
			}
			else if (iParam0 == func_618(0, 11, 11, -1952009645))
			{
				func_1126(6, iVar1);
				func_1126(3, iVar1);
			}
			else if (iParam0 == func_618(0, 12, 11, 2065895756))
			{
				func_1126(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1127()));
	if (!func_357(629))
	{
		func_584(629, 0);
	}
}

int func_905(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_906(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_907(int iParam0, int iParam1, var uParam2)
{
	if (!func_906(iParam0))
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

int func_908()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_909(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_910(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1128(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_908())
	{
		return -1;
	}
	iVar0 = func_909(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_751(iVar1, 0);
	func_627(iVar1, 0);
	func_1129(iVar1, 0);
	func_1130(iVar1, 0);
	func_1131(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1132(iVar1, iParam4);
	}
	return iVar1;
}

int func_911(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_602(1811977508, 1, 0))
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
			if (func_728(iVar25, 0) && func_804(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_912()
{
	iVar0 = func_1133(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1134(iVar0))
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

void func_913(vector3 vParam0, int iParam3)
{
	if (func_406(vParam0))
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
			if (func_1135(vVar2, vParam0, 2f, 1))
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

bool func_914(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return func_635(Global_1393237->f_11[iParam0]->f_10, iParam1);
}

int func_915()
{
	return 0;
}

void func_916(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237->f_11[iParam0]->f_24 = iParam1;
	}
}

bool func_917(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_918(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_919(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_920(int iParam0, int iParam1)
{
	if (!func_240(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_921(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_922(int iParam0)
{
	if (!func_240(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_923(int iParam0)
{
	if (func_240(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_924(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			Jump @393; //curOff = 334
			fVar3 = 20f;
			Jump @393; //curOff = 344
			fVar3 = 25f;
			Jump @393; //curOff = 354
			fVar2 = -1f;
			Jump @393; //curOff = 360
			fVar3 = -5f;
			Jump @393; //curOff = 370
			fVar3 = -7f;
			Jump @393; //curOff = 380
			fVar3 = -8f;
			iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
			return iVar4;
		}

void func_925(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_926(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_926(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1136(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_24() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

bool func_927(int iParam0)
{
	return func_1137(iParam0, 2);
}

void func_928()
{
	Global_1911774 = 1;
}

void func_929(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_930(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1138();
	if (iParam2 == 39)
	{
		Var0 = { func_520(iParam0, 1, 0) };
		iParam2 = func_875(func_886(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_804(iParam0, 866047851) && func_1139(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_932(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1140(func_942(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1141(iParam2);
	func_1142(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1105(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1105(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1111(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1143(iParam0, iParam2, iParam1, func_24() != -1);
	if (bParam4)
	{
		func_1144(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1144(&(Global_1946804->f_1378), 1, 0);
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
				func_944(func_942(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_931(bool bParam0, bool bParam1, bool bParam2)
{
	func_1145(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_932(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_933()
{
	func_1146(&(Global_1946804->f_2776));
	func_1147(32768);
	func_944(1108822547, 8, 6);
}

int func_934(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_875(iParam0, 1);
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

void func_935(int iParam0)
{
	if (func_1148(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1149(Var0);
}

void func_936(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1149(Var0);
}

void func_937(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_938(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_942(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1150(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_set_ped_component_disabled(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_939(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_875(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_940(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_941(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_939(1108822547, 6))
	{
		if (bParam2)
		{
			func_938(iParam0, iVar0, func_24() != -1, 0, 0);
			func_943(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_944(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_942(int iParam0, int iParam1)
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

void func_943(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_875(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_875(iParam0, 1)])->f_10 || iParam1);
}

void func_944(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_875(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_875(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_875(iParam0, 1)])->f_10 && iParam1));
}

bool func_945(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_946(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_111(iParam0);
		func_1151(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_947(int iParam0, int iParam1)
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
			func_1152((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1152(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(&(Global_1898164->f_1[0])))
	{
		func_549(&(Global_1898164->f_1[0]), 3);
	}
}

void func_948(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_1153(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_949(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1153(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_950(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1153(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_951(bool bParam0)
{
	func_1153(Global_1956614, bParam0);
}

void func_952(bool bParam0)
{
	func_1153(&(Global_1415412->f_3), bParam0);
}

void func_953(bool bParam0)
{
	if (func_1154(Global_1934051->f_33))
	{
		func_1155(Global_1934051->f_33, 7148155);
	}
	func_1153(&(Global_1934051->f_33), bParam0);
}

void func_954(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1157(func_1156(iVar0));
		if (iVar1 != 0)
		{
			func_1155(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_1153((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_955(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_653(iVar0, -1);
		func_654(iVar0, 0);
		func_655(iVar0, 0);
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

void func_956(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_957(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_958(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

bool func_959(int iParam0, int iParam1)
{
	return func_635(Global_40.f_11864[iParam0]->f_1, iParam1);
}

bool func_960()
{
	if (func_1158())
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

void func_961(var uParam0, var uParam1)
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

bool func_962(bool bParam0, int iParam1, int iParam2)
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

int func_963(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, 0, 0))
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
	if (uParam0->f_6 == 3)
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

void func_964(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_164(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_163(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_965(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_359(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_966(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_967(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_968(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

struct<4> func_969()
{
	return Var0;
}

var func_970(var uParam0)
{
	return uParam0->f_25;
}

Vector3 func_971(int iParam0)
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
			vVar0.f_2 = func_1159(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_406(vVar0))
	{
	}
	return vVar0;
}

int func_972(float fParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	fParam0->f_4 = 0;
	switch (*fParam0)
	{
		case 0:
			func_1160(fParam0);
			fParam0->f_1 = start_shape_test_los_probe(vParam1, vParam4, 83, iParam7, 7);
			_0x04aa59ca40571c2e(fParam0->f_1, 15);
			*fParam0 = 1;
			break;
		case 1:
			if (get_shape_test_result(fParam0->f_1, &(fParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (fParam0->f_2 == 0)
				{
					*fParam0 = 3;
					return 1;
				}
				else
				{
					fParam0->f_4 = 1;
					*fParam0 = 0;
					return 0;
				}
			}
			else if (get_shape_test_result(fParam0->f_1, &(fParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*fParam0 = 3;
			}
			break;
		case 3:
			*fParam0 = 0;
			break;
	}
	return 0;
}

int func_973(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_886(iVar0);
}

var func_974(int iParam0)
{
	Var1 = { func_443(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_975(int iParam0)
{
	iVar0 = func_495(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1161(iVar0);
}

int func_976(int iParam0, int iParam1)
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
			func_1162(iVar2);
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

void func_977()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_978(int iParam0)
{
	func_984(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_979(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_980(1);
	}
}

void func_980(bool bParam0)
{
	if (bParam0)
	{
		func_163(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_164(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_981(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_982(int iParam0)
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

bool func_983(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_984(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1163(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_985(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_986(int iParam0, int iParam1, bool bParam2)
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

int func_987()
{
	iVar0 = func_756();
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

int func_988(int iParam0)
{
	if (func_24() != -1)
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
	fVar1 = func_1164(absf(fVar1) < 1f, func_1164(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_989(int iParam0)
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

int func_990()
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

void func_991(int iParam0, bool bParam1, int iParam2)
{
	func_1165((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1166(iParam0);
}

void func_992(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1167(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_993(bool bParam0)
{
	bVar3 = false;
	if (func_1168(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1169(iVar5, &iVar2, &iVar0))
			{
				if (!func_728(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1170(iVar2);
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
							if (func_719(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_987() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_987() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1171();
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

char* func_994(int iParam0)
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

int func_995(int iParam0)
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

void func_996(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_997(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_998(int iParam0)
{
	return func_719(iParam0) == -427144552;
}

bool func_999(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (func_805(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1004(iParam0, &uVar0, 1, 0, 0);
	}
	return func_602(iParam0, 1, 0);
}

void func_1000(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_719(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_808(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_399(iVar0))
	{
		if (func_24() == -1)
		{
			func_809(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_789(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_856(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1001(int iParam0, int iParam1)
{
	if (func_804(iParam0, 58855631))
	{
		func_1121(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1002(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	if (!func_526(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_729(bParam3), iParam0);
}

int func_1003(int iParam0, bool bParam1)
{
	if (func_731(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_729(bParam1), iParam0, 0);
}

bool func_1004(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1172(&iParam0);
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (!func_526(0))
	{
		bParam3 = true;
	}
	if (func_998(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_720(0) };
			Var4.f_9 = -1591664384;
			if (!func_522(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_523(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_721(iParam0, 1))
			{
				if (!func_522(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_523(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1173(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1002(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_726(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_729(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1005(int iParam0, int iParam1)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_719(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_804(iParam0, 1399091007))
	{
		func_1061(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1006(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1174(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1175(&Var0, func_720(0));
	}
	if (!func_1176(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1064(iVar14);
	return uVar15;
}

int func_1007()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1008(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1009(int iParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_1177(iParam0);
	fVar1 = func_1178(iParam0);
	if ((Global_1347477->f_117 || !func_372(31)) || !func_1179(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1180(iVar0) >= 7)
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
	func_1181(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_893(_create_var_string(6, func_1182(iParam0), fVar1), "itemtype_textures", func_1183(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1010(int iParam0)
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

int func_1011(int iParam0, int iParam1)
{
	if (!func_1184(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1012(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_800() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1185(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1186(), 12);
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
			else if (func_1044() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1187(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1044(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1188(), 13);
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
			else if (func_1045() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1189(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1045(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1011(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1013(int iParam0, int iParam1, int iParam2)
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

bool func_1014(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1015(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1016(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1190(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_602(iVar2, 1, 0) || func_1192(func_1191(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1020(func_1190(iVar0))), func_1020(func_1190(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1044() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1193(iVar0)), func_1193(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1187() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1193(iVar0)), func_1193(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1193(iVar0)), func_1193(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1054(iParam3, func_1194(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1050(iVar2) - iParam7) >= func_1011(iParam3, func_1195(iVar0));
				}
				else
				{
					bVar1 = func_1050(iVar2) >= func_1011(iParam3, func_1195(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1050(iVar2) + iParam7) >= func_1011(iParam3, func_1195(iVar0));
			}
			else
			{
				bVar1 = func_1050(iVar2) >= func_1011(iParam3, func_1195(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1196(iVar2)), func_1196(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1197(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1198(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1198(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1045() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1199(iVar0)), func_1199(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1189() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1199(iVar0)), func_1199(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1199(iVar0)), func_1199(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1054(iParam3, func_1194(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1050(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1200(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1200(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1201(iVar2)), func_1201(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1017(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1188() >= 13)
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

bool func_1018(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_37(func_26(0)) && ((func_1202(0) == 1 || func_1202(0) == 8) || func_1202(0) == 6))
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

var func_1019(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1020(int iParam0)
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

void func_1021(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1022(int iParam0)
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
			func_1203(1);
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
			func_1204(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1204(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1204(3);
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
			func_1205(1);
			break;
		case 34:
			func_1206(1);
			break;
		case 35:
			func_1207(1);
			break;
		case 36:
			break;
		case 37:
			func_1208(0);
			break;
		case 38:
			func_1209(0);
			break;
		case 39:
			func_1210(0);
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
			if ((!&Global_1879534 && func_375()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_363("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_584(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_375()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_363("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_584(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_375()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_363("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_584(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_375()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_363("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_584(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_24() == -1)
			{
				if (!func_1077(99217379) || func_1211(99217379) == 2110595215)
				{
					if (func_31())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_602(iVar0, 1, 0))
					{
						func_849(iVar0, 1, 752097756);
					}
					func_648(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_24() == -1)
			{
				if (!func_602(1013902307, 1, 0))
				{
					func_849(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_24() == -1)
			{
				if (!func_602(1013902307, 1, 0))
				{
					func_849(1013902307, 1, 752097756);
				}
				if (!func_602(142640135, 1, 0))
				{
					func_849(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_24() == -1)
			{
				if (!func_602(786809402, 1, 0))
				{
					func_849(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_24() == -1)
			{
				if (!func_602(786809402, 1, 0))
				{
					func_849(786809402, 1, 752097756);
				}
				if (!func_602(-518019409, 1, 0))
				{
					func_849(-518019409, 1, 752097756);
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
			func_1212();
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

bool func_1023(int iParam0)
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

void func_1024(int iParam0)
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
	iVar2 = func_123();
	func_40(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1025(int iParam0)
{
	if (func_1213(iParam0))
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

int func_1026(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1027(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_372(50))
			{
				if (!func_372(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_372(51))
			{
				if (!func_372(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1028(int iParam0, int iParam1, var uParam2)
{
	if (!func_728(iParam1, 0))
	{
		return false;
	}
	if (func_719(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_24() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_723(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_874(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_804(iParam1, 866047851))
	{
		iVar5 = func_875(iVar4, 1);
		if (func_1139(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_723(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_804(iParam1, -1638171711))
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
			if (func_743(1868067663, &uVar0))
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
				iVar10 = func_1214(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1214(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_723(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_804(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1215(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1029()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1030()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1031()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_602(func_1216(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1032(int iParam0)
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

bool func_1033(int iParam0, int iParam1)
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
	if (func_602(iVar0, 1, 0) && func_602(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1034(int iParam0)
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
			return 0;
		}

bool func_1035(int iParam0, int iParam1)
{
	iVar0 = func_1217(iParam0);
	if (iVar0 != -15)
	{
		func_40(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_41(iVar0, 1);
	}
	return false;
}

void func_1036(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_893(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1037(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1125())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_893(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1218(iVar0);
			func_1219(iVar0, 0, 0);
		}
		func_893(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_238(func_443(1644987397), iVar1);
	}
}

void func_1038(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1039(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1040(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1041(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1042(int iParam0)
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
	iVar1 = func_1050(iVar9);
	iVar2 = func_1050(iVar10);
	iVar3 = func_1050(iVar11);
	iVar5 = func_1051(iVar9);
	iVar6 = func_1051(iVar10);
	iVar7 = func_1051(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1050(iVar12);
		iVar8 = func_1051(iVar12);
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

void func_1043(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1044()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1220(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1045()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1046(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1200(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1200(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1200(iVar0))
		{
			*sParam2++;
		}
		if (func_1200(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1200(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1200(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1200(iVar0))
		{
			*sParam2++;
		}
		if (func_1200(iVar1))
		{
			*sParam2++;
		}
		if (func_1200(iVar0) && func_1200(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1200(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1200(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1200(iVar0))
		{
			*sParam2++;
		}
		if (func_1200(iVar1))
		{
			*sParam2++;
		}
		if (func_1200(iVar2))
		{
			*sParam2++;
		}
		if ((func_1200(iVar0) && func_1200(iVar1)) && func_1200(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1200(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1200(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1200(iVar0))
		{
			*sParam2++;
		}
		if (func_1200(iVar1))
		{
			*sParam2++;
		}
		if (func_1200(iVar2))
		{
			*sParam2++;
		}
		if (func_1200(iVar3))
		{
			*sParam2++;
		}
		if (((func_1200(iVar0) && func_1200(iVar1)) && func_1200(iVar2)) && func_1200(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1047(int iParam0)
{
	if (!func_1221(iParam0))
	{
		func_1223(func_1222(iParam0));
	}
}

int func_1048()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1221(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1049(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1050(iVar9);
	iVar2 = func_1050(iVar10);
	iVar3 = func_1050(iVar11);
	iVar5 = func_1051(iVar9);
	iVar6 = func_1051(iVar10);
	iVar7 = func_1051(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1050(iVar12);
		iVar8 = func_1051(iVar12);
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

int func_1050(int iParam0)
{
	if (func_602(iParam0, 1, 0))
	{
		iVar0 = func_789(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1051(int iParam0)
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

int func_1052(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1053(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1054(int iParam0, int iParam1)
{
	if (!func_1184(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1055(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1054(iParam1, 5) || iParam0 == func_1054(iParam1, 6)) || iParam0 == func_1054(iParam1, 7)) || iParam0 == func_1054(iParam1, 8)) || iParam0 == func_1054(iParam1, 9))
	{
		func_1046(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_801(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_803(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1056(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1054(iParam1, 5) || iParam0 == func_1054(iParam1, 6)) || iParam0 == func_1054(iParam1, 7)) || iParam0 == func_1054(iParam1, 8)) || iParam0 == func_1054(iParam1, 9))
	{
		if (func_1046(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_801(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_803(51, 0, 0, iVar0, func_1011(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_801(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_803(51, 0, 0, iVar0, func_1011(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1057()
{
	if (func_290((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1058(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1059(int iParam0)
{
	if (!func_1224(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1060(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1061(int iParam0, int iParam1, var uParam2)
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

bool func_1062(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_729(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1063(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1064(int iParam0)
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

float func_1065()
{
	if (func_1225())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1226(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1226(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1227();
	fVar2 = func_1228();
	fVar3 = func_1229();
	fVar4 = func_1230();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1231()));
	fVar7 = (func_1226(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1232(3, round((to_float(iVar8) * fVar10)), 0);
	func_1233(3, fVar9, fVar9 > 100f);
	return func_1234(fVar7, -100f, 100f);
}

float func_1066()
{
	if (func_1225())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1226(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1226(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1227();
	fVar2 = func_1228();
	fVar3 = func_1229();
	fVar4 = func_1230();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1231()));
	fVar7 = (func_1226(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1232(2, round((to_float(iVar8) * fVar10)), 0);
	func_1233(2, fVar9, fVar9 > 100f);
	return func_1234(fVar7, -100f, 100f);
}

float func_1067()
{
	if (func_1225())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1226(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1235())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1236())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1226(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1227();
	fVar2 = func_1228();
	fVar3 = func_1229();
	fVar4 = func_1230();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1231()));
	fVar7 = (func_1226(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1232(1, round((to_float(iVar8) * fVar10)), 0);
	func_1233(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1226(0);
	}
	return func_1234(fVar7, -100f, 100f);
}

bool func_1068(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1069(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1070(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_728(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1004(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_526(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_729(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1071(int iParam0, bool bParam1)
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
				return func_1237();
			}
			break;
	}
	return 0;
}

int func_1072(int iParam0)
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

bool func_1073(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1074(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	if (func_1238(iParam0))
	{
		return;
	}
	if (!func_1239(iParam0))
	{
		func_1240(iParam0, 1, 0);
	}
	iVar0 = func_1241(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1242(iParam0, 512))
		{
			func_885(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1243() && !bParam1) && !func_25(0, 0, 1))
	{
		func_901(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1244(iParam0, 6);
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_441(1, 4);
		}
	}
}

bool func_1075(int iParam0, bool bParam1)
{
	return func_1071(iParam0, 0) < func_1245(iParam0, bParam1);
}

bool func_1076(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_723(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1077(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_875(iParam0, 1)] != &Global_1946804->f_57[func_875(iParam0, 1)];
}

void func_1078(int iParam0, int iParam1)
{
	if (func_804(iParam1, 130796156))
	{
		func_1246(iParam1, 0);
	}
	else if (func_804(iParam1, 930141731))
	{
		func_1246(iParam1, 1);
		func_1247(iParam0);
	}
}

void func_1079(var uParam0, int iParam1)
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

int func_1080(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1248(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1249(uParam2, iParam0, Var1);
	return 1;
}

int func_1081(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1082(int iParam0)
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

int func_1083(int iParam0)
{
	if (!func_1250(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1084()
{
	return !&Global_1911774;
}

void func_1085(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1086(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1087(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1088(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_24() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1251(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1089(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (func_1251(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1090(bool bParam0)
{
	if (bParam0)
	{
		func_577(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1091();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1252(2032023096);
		func_580(-615217896);
		func_871(655868243, 1, 1, -142743235, 1);
		func_1254(146323340, func_1253());
		Var0 = { func_1255() };
		if (func_1256(&Var0) == -1387633835)
		{
			func_1257(&Var0);
			func_1258(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1259(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1260(iVar6) == 2010625508)
			{
				func_1261(iVar6, iVar7);
				func_1262(iVar6, iVar8);
				func_1263(iVar6, iVar9);
				func_1264(iVar6, 0);
				if (func_1265(iVar6))
				{
					func_1266(iVar6);
				}
				iVar10 = func_1267(iVar8);
				func_1268(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1091()
{
	if (!func_1269(-1898635967, func_1253(), 1))
	{
		return 0;
	}
	if (func_32())
	{
		if (!func_1269(146323340, func_1253(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1092()
{
	func_589(34411519);
	func_589(834124286);
	func_589(-570967010);
}

void func_1093(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_577(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_871(-1080874779, 3, 1, -142743235, 1);
		func_871(-223790555, 3, 1, -142743235, 1);
		func_871(1566032147, 3, 1, -142743235, 1);
		func_871(891311852, 5, 1, -142743235, 1);
		func_871(-1353737667, 5, 1, -142743235, 1);
		func_871(-330313895, 5, 1, -142743235, 1);
		func_871(-2051332199, 5, 1, -142743235, 1);
		func_871(1237770824, 5, 1, -142743235, 1);
		func_871(-1795542128, 3, 1, -142743235, 1);
		func_871(-1757588258, 3, 1, -142743235, 1);
		func_871(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1259(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1260(iVar0) == 153881023)
			{
				func_1261(iVar0, iVar1);
				func_1262(iVar0, iVar2);
				func_1263(iVar0, iVar3);
				func_1264(iVar0, 0);
				if (func_1265(iVar0))
				{
					func_1266(iVar0);
				}
				iVar4 = func_1267(iVar2);
				func_1268(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1091();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1094(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1270(iParam0);
	if (bParam3)
	{
		func_900(iParam0, sParam1, iParam2);
	}
}

bool func_1095(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1096(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1097()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1062("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1063(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_523(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1064(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1064(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1098(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1271(Param1, iParam5, &Var5, 0))
	{
		func_525(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1070(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1272(Var19, 1);
}

bool func_1099(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1174(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1175(&Var0, func_720(0));
	}
	if (!func_1176(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1063(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_525(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1064(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1100(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_520(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1273(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_524(iParam0, Var0, Var0.f_4, bParam4) };
	return func_525(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1101(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_804(iParam0, 606799272))
		{
			func_1274(iParam0, iParam1);
		}
		if (func_804(iParam0, -1112814642) && func_804(iParam0, -1697809989))
		{
			func_825(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1102(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1275(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_723(iParam0) != -999503751)
		{
			func_1276(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_723(iParam0) != -999503751)
	{
		func_1276(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1277(iParam0, 1);
	return 1;
}

void func_1103()
{
	if (func_24() == -1)
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

void func_1104(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1278(0);
	}
	if (bParam0)
	{
		func_937(8);
		func_937(512);
	}
	else
	{
		func_937(8);
		func_937(16);
	}
}

void func_1105(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1106(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_877();
	}
	if (func_24() == -1)
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

int func_1107(int iParam0)
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

void func_1108(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1279(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_942(iVar0, 1);
			if (func_940(iVar0, iParam1))
			{
				vVar4 = { func_879(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_939(iVar7, 4))
				{
					func_944(iVar7, 4, 6);
				}
			}
			else
			{
				func_943(iVar7, 4, 6);
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

bool func_1109(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_24() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1280(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1110(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1111(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_723(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_940(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1142(iVar1, iVar3);
		}
	}
	if (func_1077(-1586649372) && func_940(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1142(iVar1, iVar3);
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
						func_1142(iVar1, iVar3);
					}
				}
			}
			func_1281(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1281(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1142(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1281(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1142(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1142(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1281(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1281(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1142(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1281(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1142(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1142(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_723(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1142(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1215(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_723(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1142(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_804(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1142(iVar1, iVar3);
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
						func_1142(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1215(&(Global_1946804->f_1497.f_1[iVar1])) || func_804(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1142(iVar1, iVar3);
					}
				}
			}
			switch (func_723(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_723(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1142(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_723(&(uParam0->f_1[iVar1])) || func_804(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1142(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1112(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1113(int iParam0)
{
	if (func_24() != -1)
	{
		if (func_1068(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1068(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1114(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1068(iParam0, 65536) && !func_1068(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1068(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1068(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1115()
{
	return Global_1905944->f_5694;
}

void func_1116(struct<4> Param0)
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
			if (func_1282(Param0))
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
			func_1283(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_937(8);
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
			if (func_1282(Param0))
			{
				return;
			}
			func_1283(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_937(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_936(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1117(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1118(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1119(int iParam0)
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

bool func_1120(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_24() == -1)
	{
		if (func_998(iParam0))
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

int func_1121(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_728(iParam0, 0))
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

int func_1122(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1172(&iParam0);
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	if (!func_526(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1002(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_726(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_729(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1123(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_804(iParam0, -5284486))
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
		if (func_1284(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_857(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_860(iVar62, iVar61);
					if (func_728(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1123(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1123(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1284(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1124(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1285(1);
}

bool func_1125()
{
	if (func_32())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1126(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1286(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_583(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1286(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_583(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1127()
{
	return Global_40.f_4283.f_325;
}

bool func_1128(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1129(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1130(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1131(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1132(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1133(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	cVar0 = func_622(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1134(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

bool func_1135(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_1136(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1137(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_1138()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1139(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_804(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_804(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_804(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_804(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_804(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_804(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1140(int iParam0)
{
	func_944(iParam0, 8, 6);
}

void func_1141(int iParam0)
{
	func_1287(&(Global_1946804->f_2589), iParam0);
}

void func_1142(int iParam0, int iParam1)
{
	func_1288(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1143(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1289(0);
	if (iParam2 != 0 && func_1290(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1110(iParam0, func_942(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1144(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_24() != -1;
	iVar7 = func_1289(0);
	if (func_932(32768))
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
			iVar5 = func_942(iVar0, 1);
			if (func_939(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_939(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1214(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1291(uParam0);
				if (iVar3 > 0)
				{
					if (!func_932(524288))
					{
						func_937(524288);
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
							iVar5 = func_942(iVar0, 1);
							if (func_939(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_939(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1214(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1142(iVar0, iParam2);
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
					func_1147(524288);
				}
			}
		}
	}
}

void func_1145(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1292(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_24() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1293(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1241(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1241(Global_40.f_7729);
				Global_1946804->f_1378 = func_1241(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1294(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1104(0, 1);
	}
}

void func_1146(var uParam0)
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

void func_1147(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1148(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1149(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1282(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1282(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1283(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_937(8);
}

int func_1150(int iParam0)
{
	iVar0 = func_723(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

void func_1151(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_112(iParam0);
	*uParam1 = func_259(iParam0);
	*uParam2 = func_775(iParam0);
}

void func_1152(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_1153(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_653(*uParam0, -1);
		func_654(*uParam0, 0);
		func_655(*uParam0, 0);
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

bool func_1154(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_1155(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_1156(int iParam0)
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

int func_1157(int iParam0)
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

bool func_1158()
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

float func_1159(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1160(float fParam0)
{
	*fParam0 = 0;
	fParam0->f_2 = -1;
	fParam0->f_3 = 0;
	fParam0->f_4 = 0;
}

int func_1161(int iParam0)
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

int func_1162(int iParam0)
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

int func_1163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

float func_1164(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1165(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1295(bParam1);
	}
}

void func_1166(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1167(int iParam0)
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

bool func_1168(int iParam0)
{
	if (!func_1184(23, &vVar0))
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

bool func_1169(int iParam0, int iParam1, int iParam2)
{
	if (!func_1184(23, &Var0))
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

int func_1170(int iParam0)
{
	return iParam0;
}

int func_1171()
{
	iVar0 = func_987();
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

int func_1172(int iParam0)
{
	if (!func_728(*iParam0, 0))
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

bool func_1173(int iParam0, var uParam1, bool bParam2)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_520(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_521((386 + iVar29), 1);
		if (func_522(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_523(iParam0, &Var6, iVar5);
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

struct<14> func_1174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1175(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1176(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_729(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1177(int iParam0)
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

float func_1178(int iParam0)
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
			return func_1296(iParam0);
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
			return func_1296(iParam0);
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
			return func_1296(iParam0);
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

bool func_1179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_372(18);
		case 2:
			return func_372(20);
		case 1:
			return func_372(19);
		default:
			break;
	}
	return true;
}

int func_1180(int iParam0)
{
	return func_1297(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1181(int iParam0, float fParam1, bool bParam2)
{
	if (func_24() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_372(31))
	{
		return;
	}
	iVar0 = func_1180(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1180(iParam0);
	if (func_1298(iParam0) && func_1299(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1300(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1301(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_584(func_1302(iParam0), 0);
					}
					func_1303(iParam0, iVar2, iVar3);
					func_1304(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1182(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1183(int iParam0)
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

bool func_1184(int iParam0, var uParam1)
{
	if (!func_1305(iParam0))
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

int func_1185()
{
	return func_1306(Global_40.f_12019);
}

int func_1186()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1010(iVar1);
		if (func_602(iVar2, 1, 0) || func_1192(func_1191(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1187()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1307(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1188()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1197(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1189()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1190(int iParam0)
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

int func_1191(int iParam0)
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

bool func_1192(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1193(int iParam0)
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

int func_1194(int iParam0)
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

int func_1195(int iParam0)
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

char* func_1196(int iParam0)
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

bool func_1197(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1198(int iParam0)
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

char* func_1199(int iParam0)
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

bool func_1200(int iParam0)
{
	if (func_1308(iParam0) && func_602(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1309(iParam0) && func_1310(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1201(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_843(iParam0));
}

int func_1202(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1203(bool bParam0)
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

void func_1204(int iParam0)
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

void func_1205(bool bParam0)
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

void func_1206(bool bParam0)
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

void func_1207(bool bParam0)
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

void func_1208(bool bParam0)
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

void func_1209(bool bParam0)
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

void func_1210(bool bParam0)
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

int func_1211(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_875(iParam0, 1)]);
}

void func_1212()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1311();
		_unlock_set_unlocked(-1526891582, true);
		func_809(-916314281);
		func_849(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_809(494733111);
		func_849(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1213(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1214(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_875(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_932(524288))
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

bool func_1215(int iParam0)
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

int func_1216(int iParam0)
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

int func_1217(int iParam0)
{
	return func_1312(iParam0, -1);
}

void func_1218(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1313((Global_40.f_4283.f_325 + iParam0));
}

void func_1219(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1125())
	{
		func_893(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_893(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1220(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1221(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1222(int iParam0)
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

void func_1223(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1224(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1225()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1226(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1227()
{
	fVar0 = func_1314(13);
	iVar1 = func_1315(fVar0);
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

float func_1228()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1229()
{
	if (func_32())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1230()
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

float func_1231()
{
	return Global_1955565->f_3;
}

void func_1232(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1316(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1233(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1316(iParam0, 2, 0, 0);
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

float func_1234(float fParam0, float fParam1, float fParam2)
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

bool func_1235()
{
	return func_1314(12) <= -99f;
}

bool func_1236()
{
	return func_1314(12) >= 99f;
}

int func_1237()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_723(iVar1) == -999503751)
		{
			if (func_1317() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1238(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return false;
	}
	if (func_1242(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1239(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return false;
	}
	if (func_1242(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1240(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	if (!func_1239(iParam0))
	{
		func_1244(iParam0, 2);
		if (bParam2)
		{
			if (!func_25(0, 0, 1))
			{
				func_441(1, 4);
			}
		}
		if ((!func_1243() && !bParam1) && !func_25(0, 0, 1))
		{
			func_901(_create_var_string(10, "OUT_JOURN_ADD", func_1318(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1241(int iParam0)
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

bool func_1242(int iParam0, int iParam1)
{
	if (!func_1073(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1243()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1244(int iParam0, int iParam1)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1245(int iParam0, bool bParam1)
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

void func_1246(int iParam0, bool bParam1)
{
	iVar0 = func_1319(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_806(50);
			}
			else
			{
				func_806(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_806(51);
			}
			else
			{
				func_806(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1320(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_830();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_830();
			}
			break;
		case 3:
			func_806(24);
			if (bParam1)
			{
				if (!func_1320(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_830();
				}
			}
			break;
	}
}

void func_1247(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1321(0))
			{
				iVar0++;
			}
			if (func_1321(2))
			{
				iVar0++;
			}
			if (func_1321(4))
			{
				iVar0++;
			}
			if (!func_1322(16))
			{
				if (iVar0 == 1)
				{
					func_1323();
					func_584(456, 1);
					func_1324(16);
				}
			}
			if (!func_1322(32))
			{
				if (iVar0 >= 3)
				{
					func_1323();
					func_584(456, 1);
					func_1324(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1321(1))
			{
				iVar0++;
			}
			if (func_1321(3))
			{
				iVar0++;
			}
			if (func_1321(7))
			{
				iVar0++;
			}
			if (!func_1322(1))
			{
				if (iVar0 == 1)
				{
					func_1325();
					func_584(457, 1);
					func_1324(1);
				}
			}
			if (!func_1322(2))
			{
				if (iVar0 >= 3)
				{
					func_1325();
					func_584(457, 1);
					func_1324(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1321(5))
			{
				iVar0++;
			}
			if (func_1321(6))
			{
				iVar0++;
			}
			if (func_1321(8))
			{
				iVar0++;
			}
			if (!func_1322(4))
			{
				if (iVar0 == 1)
				{
					func_1326();
					func_584(455, 1);
					func_1324(4);
				}
			}
			if (!func_1322(8))
			{
				if (iVar0 >= 3)
				{
					func_1326();
					func_584(455, 1);
					func_1324(8);
				}
			}
			break;
	}
}

void func_1248(var uParam0)
{
	func_1079(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1079(uParam0, 617531372);
	}
	else
	{
		func_1079(uParam0, 291123060);
	}
}

void func_1249(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1327(uParam0))
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

bool func_1250(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1251(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_1252(int iParam0)
{
	func_871(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1328(iParam0, &uVar18);
	func_1329(iParam0, &uVar18, &iVar34, 1);
	if (func_877() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1330(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_873(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_871(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_723(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1330(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1330(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1330(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1330(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1330(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_873(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_875(func_874(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1331(&(Global_1946804->f_1616));
	func_878(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_879(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_879(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_879(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_879(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_879(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_879(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_879(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_879(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_879(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_880(&(iVar0[iVar36]), iVar35))
			{
				func_873(func_1332(iVar35), 1, 1);
				func_1333(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1279(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_881(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
							*Global_1946804->f_1497.f_1[iVar37] = { *Global_1946804->f_1616.f_1[iVar37] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36]])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1072(iParam0))
	{
		if (!func_1334(8))
		{
			if (func_877() == -2125499975)
			{
				if (bVar17)
				{
					func_878(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1335(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1336(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1072(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_878(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1335(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1336(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1072(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1072(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_1337(Global_40.f_7729, 4096);
					func_1244(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1338(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26796.f_627.f_1.f_1.f_1[&iVar0[iVar36]])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_878(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_878(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*Global_1946804->f_1616.f_1[8] = { *Global_26796.f_627.f_1.f_1.f_1[8] };
	*Global_1946804->f_1616.f_1[9] = { *Global_26796.f_627.f_1.f_1.f_1[9] };
	*Global_1946804->f_1616.f_1[0] = { *Global_26796.f_627.f_1.f_1.f_1[0] };
	*Global_1946804->f_1616.f_1[2] = { *Global_26796.f_627.f_1.f_1.f_1[2] };
	*Global_1946804->f_1616.f_1[3] = { *Global_26796.f_627.f_1.f_1.f_1[3] };
	*Global_1946804->f_1616.f_1[1] = { *Global_26796.f_627.f_1.f_1.f_1[1] };
	*Global_1946804->f_1616.f_1[5] = { *Global_26796.f_627.f_1.f_1.f_1[5] };
	*Global_1946804->f_1616.f_1[6] = { *Global_26796.f_627.f_1.f_1.f_1[6] };
	*Global_1946804->f_1616.f_1[7] = { *Global_26796.f_627.f_1.f_1.f_1[7] };
	Global_26796.f_627 = Global_1946804->f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar36] = { *Global_1946804->f_1616.f_1[iVar36] };
		iVar36++;
	}
}

struct<4> func_1253()
{
	Var0 = { func_718(0) };
	return func_524(856287005, Var0, -218846335, 0);
}

int func_1254(int iParam0, struct<4> Param1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_728(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_726(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1339(&uVar7);
					if (func_525(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1255()
{
	if (func_1340(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1340(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1340(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1340(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1340(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1340(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1256(var uParam0)
{
	return uParam0->f_1;
}

void func_1257(var uParam0)
{
	func_1341(uParam0);
	func_1343(uParam0, func_1342(-1346384396));
	func_1344(uParam0, func_1342(-712836614));
	func_1345(uParam0, func_1342(-1629133289));
	func_1346(uParam0, func_1342(1302066700));
	func_1347(uParam0, func_1342(599669344));
	func_1348(uParam0, func_1342(-1555511632));
}

void func_1258(struct<6> Param0)
{
	if (!func_1349(Param0.f_4, 1))
	{
	}
	if (!func_1349(Param0, 1))
	{
	}
	if (!func_1349(Param0.f_2, 1))
	{
	}
	if (!func_1349(Param0.f_5, 1))
	{
	}
	if (!func_1349(Param0.f_3, 1))
	{
	}
	if (!func_1349(Param0.f_1, 1))
	{
	}
}

int func_1259(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_375())
	{
		if (func_558())
		{
			bVar0 = false;
			if (!func_102((*Global_1835011)[15]->f_1, 1) && !func_372(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1350();
				*iParam1 = func_1351();
				*iParam2 = func_1352();
				return 1;
			}
			else
			{
				*iParam0 = func_1353();
				*iParam1 = func_1354();
				*iParam2 = func_1355();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_102((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1356();
				*iParam1 = func_1357();
				*iParam2 = func_1358();
				return 1;
			}
			else
			{
				*iParam0 = func_1359();
				*iParam1 = func_1360();
				*iParam2 = func_1361();
				return 1;
			}
		}
	}
	else if (func_558())
	{
		*iParam0 = func_1362();
		*iParam1 = func_1363();
		*iParam2 = func_1364();
		return 1;
	}
	else if (func_31())
	{
		*iParam0 = func_1365();
		*iParam1 = func_1366();
		*iParam2 = func_1367();
		return 1;
	}
	return 0;
}

int func_1260(int iParam0)
{
	iParam0 = func_1368(iParam0);
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

void func_1261(int iParam0, int iParam1)
{
	iParam0 = func_1368(iParam0);
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

void func_1262(int iParam0, int iParam1)
{
	iParam0 = func_1368(iParam0);
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

void func_1263(int iParam0, int iParam1)
{
	iParam0 = func_1368(iParam0);
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

void func_1264(int iParam0, int iParam1)
{
	iParam0 = func_1368(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_434 = iParam1;
}

bool func_1265(int iParam0)
{
	iVar0 = func_1369(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_718(0) };
	if (func_1370(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1266(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1371(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_525(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1267(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		case -1679658797:
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case 2130094044:
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
		case -2026265047:
			return -621245377;
		case -586898625:
			return 2125477381;
		case 937246805:
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case -1154406788:
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case 2119038574:
			return 2051021144;
		case 43825738:
			return 1924406350;
		case 2145697477:
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case 1861665605:
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case 802784330:
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1268(int iParam0, int iParam1)
{
	if (!func_728(iParam1, 0))
	{
		return 0;
	}
	if (!func_1372(iParam1))
	{
		return 0;
	}
	if (func_1265(iParam0))
	{
		return 0;
	}
	iVar0 = func_1369(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_718(0) };
	Var1.f_4 = iVar0;
	if (!func_1070(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1269(int iParam0, struct<4> Param1, bool bParam5)
{
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_728(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_726(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1339(&Var7);
					if (func_1070(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1272(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1270(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1285(1) < iParam0)
	{
		iParam0 = func_1285(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_443(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1271(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_729(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_725(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1272(struct<4> Param0, int iParam4)
{
	if (!func_526(0))
	{
		return func_1373(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_725(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_729(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1273(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_730(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_526(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_729(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1274(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_24() == -1)
	{
		if (func_795(43))
		{
			if (func_804(iParam0, 412399755))
			{
				func_1047(-1791518714);
				if (func_1048() == 0)
				{
					func_441(0, 10);
					iVar0 = func_1374(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1050(iParam0) < func_1051(iParam0))
						{
							func_801(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_795(44))
		{
			if (func_804(iParam0, 709057512))
			{
				func_1047(-2087881550);
				if (func_1048() == 1)
				{
					func_441(0, 10);
					iVar0 = func_1374(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1050(iParam0) < func_1051(iParam0))
						{
							func_801(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_795(45))
		{
			if (func_804(iParam0, -1478961327))
			{
				func_1047(1908068621);
				if (func_1048() == 2)
				{
					func_441(0, 10);
					iVar0 = func_1374(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1050(iParam0) < func_1051(iParam0))
						{
							func_801(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_795(46))
		{
			if (func_804(iParam0, -1238404098))
			{
				func_1047(1611247019);
				if (func_1048() == 3)
				{
					func_441(0, 10);
					iVar0 = func_1374(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1050(iParam0) < func_1051(iParam0))
						{
							func_801(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_795(47))
		{
			if (func_804(iParam0, 1160548794))
			{
				func_1047(1319635688);
				if (func_1048() == 4)
				{
					func_441(0, 10);
					iVar0 = func_1374(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1050(iParam0) < func_1051(iParam0))
						{
							func_801(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1275(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1276(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1375(iParam1);
	func_1376(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1377(&(uParam0->f_26), iVar1);
		if (func_1378(uParam0->f_26, &iVar0))
		{
			func_1379(iVar0, iVar1);
		}
	}
}

bool func_1277(int iParam0, int iParam1)
{
	Var0 = { func_520(iParam0, 0, 0) };
	Var5 = { func_524(iParam0, Var0, Var0.f_4, 0) };
	if (func_726(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_729(0), &Var5, iParam1);
	return true;
}

void func_1278(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1279(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1281(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1142(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1142(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1142(iVar2, iVar0);
		}
	}
}

bool func_1282(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1283(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

bool func_1284(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_1380(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1285(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

void func_1287(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1381(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1381(uParam0->f_2[iVar0], 1))
				{
					func_1382(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1288(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1383(uParam0, 1))
	{
		func_1384(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_1289(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_877();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1290(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1291(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1292(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_24() == -1)
	{
		func_881(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1385(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1293(int iParam0, int iParam1)
{
	if (func_24() == -1)
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

void func_1294(int iParam0, bool bParam1, int iParam2)
{
	func_1335(&(Global_1946804->f_1378), iParam0);
	func_1336(2, iParam0, 6);
	if (bParam1)
	{
		func_1104(0, 1);
	}
}

void func_1295(bool bParam0)
{
	func_1386(bParam0);
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

float func_1296(int iParam0)
{
	iVar4 = func_1177(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1297(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1387(iVar6) - func_1387(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1297(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1298(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1299(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1300(float fParam0, float fParam1)
{
	iVar0 = func_1297(fParam0);
	fVar1 = to_float(func_1387(iVar0));
	fVar2 = to_float(func_1387(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1301(int iParam0)
{
	if (func_1388(iParam0, &iVar0))
	{
		return func_1387(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1389())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1389())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1389())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1303(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1390(iParam0));
	sVar4 = func_1392(func_1391(iVar3, iParam2));
	sVar6 = func_1393(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1394(iParam0));
	iVar8 = func_1395(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1396(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_1019(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1397(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1304(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_1305(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1306(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1307(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_1309(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1310(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1398(&iVar0, 0, iVar95, &Var1) && !func_1398(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1399(iVar0, &Var1);
			if (func_728(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1311()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1400(Global_35, &uVar0);
	Var30 = { func_718(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1401(0);
	func_1402(7);
	func_1403(-1623728698, 1, 1, 0);
	if (func_877() == 1160113249)
	{
		func_1403(-763730846, 1, 1, 1);
		func_1403(-361635024, 1, 1, 1);
	}
	func_1404(Global_35, &uVar0);
}

int func_1312(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_729(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_261(&uVar6, iVar0);
	func_262(&uVar6, iVar1);
	func_263(&uVar6, iVar2);
	func_264(&uVar6, iVar3);
	func_265(&uVar6, iVar4);
	func_266(&uVar6, iVar5);
	return uVar6;
}

void func_1313(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_443(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

float func_1314(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1315(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1316(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1086(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1086(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1317()
{
	return Global_1946804->f_1497;
}

char* func_1318(int iParam0)
{
	iVar0 = func_1241(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1201(iVar0);
}

int func_1319(int iParam0)
{
	if (func_1405(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1406(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1407(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1408(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1320(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_602(func_1409(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1321(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_602(func_1410(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1322(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1323()
{
	if (func_24() != -1)
	{
		return;
	}
	func_849(1654063339, 1, 752097756);
	iVar0 = func_1180(1);
	func_1303(1, iVar0, 0);
}

void func_1324(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1325()
{
	if (func_24() != -1)
	{
		return;
	}
	func_849(1623931083, 1, 752097756);
	iVar0 = func_1180(2);
	func_1303(2, iVar0, 0);
}

void func_1326()
{
	if (func_24() != -1)
	{
		return;
	}
	func_849(-1845241476, 1, 752097756);
	iVar0 = func_1180(0);
	func_1303(0, iVar0, 0);
}

bool func_1327(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1328(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_1411(iParam0, func_877()))
	{
		return 0;
	}
	Var1 = func_1106(func_877());
	Var1.f_1 = iParam0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	while (_0xed4413cee1bf142c(&Var1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1329(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	Var5.f_9 = -1591664384;
	iVar19 = func_1106(func_877());
	Var20 = { func_1174(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1176(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1063(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1072(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1280(&(Global_1946804->f_964), iVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
					_0x91ded5dd64bb2691(&(Global_1946804->f_964));
					if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_1064(iVar0);
	return 1;
}

void func_1330(int iParam0, var uParam1)
{
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1275(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19 = (Global_26796.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26796.f_627.f_121[iVar0] = &Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_1331(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1332(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1412();
	}
	if (func_24() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1333(int iParam0)
{
	if (func_24() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_881(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0] = 0;
	Global_36638.f_45.f_350.f_26[iParam0]->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0];
		func_1385(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1334(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1335(var uParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_881(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1385(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1336(int iParam0, int iParam1, int iParam2)
{
	if (func_24() == -1)
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

void func_1337(int iParam0, int iParam1)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

int func_1338(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1241(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1332(iParam1);
	}
	if ((bParam3 && func_1242(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1411(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1337(Global_40.f_7729, 4096);
		func_1244(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_717(iParam0);
	}
	func_1413();
	if (!func_1414(iParam1))
	{
		func_1416(iVar0, iParam0, func_1415(iParam1), 1, 0, 1);
	}
	func_1417(iParam0);
	return 1;
}

void func_1339(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_1340(int iParam0, int iParam1)
{
	if (!func_1418(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1253() };
	*iParam1 = func_1419(Var0, iParam0, 0);
	if (!func_728(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1341(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1342(int iParam0)
{
	if (func_558())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737;
			case -712836614:
				return 1832924306;
			case -1629133289:
				return -960265739;
			case 1302066700:
				return 1484641439;
			case 599669344:
				return -1742648548;
			case -1555511632:
				return -288915854;
		}
	}
	else if (func_31())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398;
			case -712836614:
				return 540384851;
			case -1629133289:
				return 859626502;
			case 1302066700:
				return -415239647;
			case 599669344:
				return 1436607742;
			case -1555511632:
				return 691935155;
		}
	}
	return 0;
}

void func_1343(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1344(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1345(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1346(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1347(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1348(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1349(int iParam0, int iParam1)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (!func_1420(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1253() };
	Var14 = { func_524(iParam0, Var10, iVar9, 0) };
	if (func_1272(Var14, iParam1))
	{
		if (func_1421(iParam0))
		{
			if (func_1340(325139909, &iVar18))
			{
				if (func_1349(iVar18, 0))
				{
				}
			}
		}
		else if (func_1422(iParam0))
		{
			if (func_1340(325139909, &iVar19))
			{
				if (func_1349(iVar19, 0))
				{
				}
			}
			if (func_1340(986998820, &iVar20))
			{
				if (func_1349(iVar20, 0))
				{
				}
			}
			iVar21 = func_1423(iParam0);
			if (func_728(iVar21, 0))
			{
				if (func_1349(iVar21, 1))
				{
				}
			}
		}
		func_1424();
		return true;
	}
	return false;
}

int func_1350()
{
	return 1342496140;
}

int func_1351()
{
	return 446670976;
}

int func_1352()
{
	return 1;
}

int func_1353()
{
	return -868094182;
}

int func_1354()
{
	return 1074477367;
}

int func_1355()
{
	return 1;
}

int func_1356()
{
	return -997197050;
}

int func_1357()
{
	return -2063289686;
}

int func_1358()
{
	return 2;
}

int func_1359()
{
	return -868094182;
}

int func_1360()
{
	return 1074477367;
}

int func_1361()
{
	return 1;
}

int func_1362()
{
	return 1235275977;
}

int func_1363()
{
	return 2030804811;
}

int func_1364()
{
	return 1;
}

int func_1365()
{
	return 1974379573;
}

int func_1366()
{
	return 2024948086;
}

int func_1367()
{
	return 1;
}

int func_1368(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1370(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_729(bParam2), uParam0, iParam1);
}

bool func_1371(int iParam0, var uParam1)
{
	if (!func_1265(iParam0))
	{
		return false;
	}
	iVar0 = func_1369(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_718(0) };
	if (!func_1425(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1426(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_1372(int iParam0)
{
	return func_719(iParam0) == -1784221369;
}

int func_1373(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_725(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_719(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1427(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1428(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1429(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1430(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1431(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1432(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1374(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1050(iVar9);
	iVar2 = func_1050(iVar10);
	iVar3 = func_1050(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1050(iVar12);
	}
	iVar5 = func_1051(iVar9);
	iVar6 = func_1051(iVar10);
	iVar7 = func_1051(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1051(iVar12);
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

int func_1375(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1376(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1377(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1433(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1378(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1379(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1380(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

bool func_1381(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1382(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1383(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1384(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1385(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1386(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1387(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1388(int iParam0, int iParam1)
{
	return false;
}

bool func_1389()
{
	return false;
}

int func_1390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_729(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_729(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_729(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1391(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1392(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1393(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1395(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1396(int iParam0)
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

int func_1397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_1398(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1434(iParam1) && !func_1435(iParam1))
	{
		iVar0 = func_1436(iParam1);
	}
	else
	{
		return false;
	}
	func_1437(uParam3);
	iVar5 = func_1438(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_1399(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1439(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1440(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1400(int iParam0, var uParam1)
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
		if (func_398(iVar31))
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

void func_1401(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_728(iVar1, 0))
		{
			func_873(iVar1, 0, bParam0);
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

void func_1402(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_24() == -1)
	{
		func_1441(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_723(iVar2) != -999503751)
		{
			func_1442(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1277(iVar2, 0))
		{
			func_649(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1403(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1443(iParam0))
	{
		return;
	}
	iVar0 = func_723(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1444(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1444(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1444(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1444(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1444(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1444(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1445(0))
	{
		func_1446(iParam0, 1);
		if (func_877() == 1160113249)
		{
			func_1446(func_1445(-2125499975), 0);
		}
		else
		{
			func_1446(func_1445(1160113249), 0);
		}
	}
	func_1103();
	if (func_1447(iVar0))
	{
		_0x766315a564594401(func_729(0), iParam0, 0);
	}
	func_649(iParam0, bParam3);
	if (bParam2)
	{
		func_1104(0, 0);
	}
}

void func_1404(int iParam0, var uParam1)
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
				if (func_399(uParam1[iVar0]))
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

bool func_1405(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (func_804(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1406(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (func_804(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1407(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (func_804(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1408(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (func_804(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1409(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1448(iParam0);
		case 1:
			return func_1449(iParam0);
		case 2:
			return func_1450(iParam0);
		case 3:
			return func_1451(iParam0);
	}
	return 0;
}

int func_1410(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1452(iParam0);
		case 1:
			return func_1453(iParam0);
		case 2:
			return func_1454(iParam0);
		case 3:
			return func_1455(iParam0);
		case 4:
			return func_1456(iParam0);
		case 5:
			return func_1457(iParam0);
		case 6:
			return func_1458(iParam0);
		case 7:
			return func_1459(iParam0);
		case 8:
			return func_1460(iParam0);
	}
	return 0;
}

bool func_1411(int iParam0, int iParam1)
{
	iVar0 = func_1106(iParam1);
	func_1280(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

int func_1412()
{
	if (func_24() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1413()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_932(1))
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
	task_play_anim(Global_35, func_1461(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1147(1);
	remove_anim_dict(func_1461());
}

bool func_1414(int iParam0)
{
	return false;
}

int func_1415(int iParam0)
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
		default:
			break;
	}
	return 0;
}

void func_1416(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_1072(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_24() != -1)
	{
		return;
	}
	func_1138();
	if (bParam5)
	{
		if (!func_1462(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_932(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_933();
	}
	func_1463(iVar3, 1, 1, 1, 1, 1);
	func_885(31, 0, 0, 0, 0);
	func_935(0);
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
			func_885(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_885(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_650(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1417(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

bool func_1418(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_723(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1464(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_1419(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1271(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1420(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_723(iParam1);
		iVar5 = func_1464(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_520(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_524(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_729(0);
			Var37 = { func_520(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_524(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_723(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_1271(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_1421(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
	}
	if (func_804(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1422(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return false;
	}
	if (func_804(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1423(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		case -769274720:
			return -34331381;
		case 893370428:
			return -993578318;
		case 736792276:
			return 579268144;
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_1424()
{
	Var0 = { func_520(856287005, 0, 0) };
	Var5 = { func_524(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_723(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_1419(Var5, -415648720, 0);
	}
	if (!func_728(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1464(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1419(Var5, iVar11, 0);
			if (!func_728(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1422(iVar14) || func_1421(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1422(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1422(iVar14) && func_1465(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1466(iVar11, &Var16, 1))
									{
										if (!func_1272(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_1425(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_729(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1426(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_729(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

struct<28> func_1427(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_729(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1431(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1428(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 28))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1467(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1467(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1467(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1429(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_729(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1431(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1430(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 17))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1467(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1467(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1467(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1431(var uParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1432(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 16))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_1467(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1467(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1467(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1433(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1468(&(uParam0->f_3));
}

bool func_1434(int iParam0)
{
	iParam0 = func_1368(iParam0);
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

bool func_1435(int iParam0)
{
	iParam0 = func_1368(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1434(iParam0))
	{
		return false;
	}
	iVar0 = func_1436(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_1436(int iParam0)
{
	iParam0 = func_1368(iParam0);
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

void func_1437(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1439(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
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

bool func_1440(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1441(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1174(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1176(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_1064(iVar0);
	}
}

void func_1442(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1469(iParam2, *uParam0);
	func_1470(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1443(int iParam0)
{
	if (func_24() == -1)
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

int func_1444(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1275(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1277(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_723(iParam0) != -999503751)
	{
		func_1442(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1445(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_877();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1446(int iParam0, int iParam1)
{
	Var0 = { func_520(iParam0, 0, 0) };
	Var5 = { func_524(iParam0, Var0, Var0.f_4, 0) };
	if (func_726(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_729(0), &Var5);
	return 1;
}

bool func_1447(int iParam0)
{
	return func_1471(func_995(iParam0));
}

int func_1448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

char* func_1461()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1462(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1472(uParam0, iParam3, iParam2) && !func_878(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_932(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1140(1108822547);
		}
		else
		{
			func_1473(1108822547);
		}
	}
	func_1144(uParam0, 0, 0);
	func_1278(iParam5);
	return true;
}

void func_1463(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1412()) || bParam5)
		{
			func_1474();
		}
	}
	if (func_24() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1475(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1241(Global_40.f_7729);
				Global_1946804->f_1378 = func_1241(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1415(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1294(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1104(0, 1);
	}
	func_1278(0);
}

int func_1464(int iParam0)
{
	if (!func_728(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_723(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1465(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1466(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_1174(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1175(&Var2, func_1253());
	if (func_1176(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_1063(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_728(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1465(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_1064(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_1064(iVar0);
	}
	return false;
}

void func_1467(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227->f_1[iVar0]->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1476(iParam0, iParam1);
}

void func_1468(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1469(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1470(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1433(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_875(func_874(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1477(uParam0);
	}
}

bool func_1471(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1472(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1332(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1293(2, iParam1))
	{
		func_1478(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1473(int iParam0)
{
	func_943(iParam0, 8, 6);
}

void func_1474()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1475(int iParam0)
{
	iVar0 = func_1106(0);
	iVar1 = 0;
	func_1280(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

void func_1476(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224227 < 20)
	{
		Global_1224227 = &Global_1224227 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224227->f_1[iVar0] = { *(Global_1224227->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224227->f_1[(&Global_1224227 - 1)]) = { Var1 };
}

void func_1477(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1479(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1478(var uParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1]->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*uParam0->f_1[iVar0] = { *Global_26796.f_26[iParam1]->f_1.f_1[iVar0] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1]->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iVar0] };
		iVar0++;
	}
}

void func_1479(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1480(func_877());
	if (*uParam0)
	{
		func_1468(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_24() != -1, uParam2);
	*uParam0 = 1;
}

int func_1480(int iParam0)
{
	if (func_24() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

