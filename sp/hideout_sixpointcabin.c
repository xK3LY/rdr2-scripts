void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_798 = -1;
	iLocal_824 = -1;
	uLocal_840 = uVar840;
	iLocal_838 = vScriptParam_0.z;
	if (func_1(Global_35, 0))
	{
		set_ped_reset_flag(Global_35, 54, true);
	}
	func_2();
	while (func_3())
	{
		if (get_game_timer() > iVar837)
		{
			iLocal_839 = get_game_timer() + 1000;
			iVar0 = iVar836;
			func_4(iVar838, &iLocal_838);
			switch (iVar836)
			{
				case 0:
					if (!Global_1879534->f_1)
					{
						bLocal_841 = !func_5(iVar838, 1);
						if (bVar839)
						{
						}
						iLocal_838 = 1;
					}
					break;
				case 1:
					iLocal_838 = 2;
					break;
				case 2:
					if (func_6(bVar839))
					{
						iLocal_838 = 4;
					}
					break;
				case 4:
					iLocal_838 = 6;
					break;
				case 6:
					if (func_7(iVar838, -1, -1, 0))
					{
						func_8(iVar838, 4);
						iLocal_838 = 7;
					}
					break;
				case 7:
					iLocal_838 = 8;
					break;
				case 8:
					func_9(iVar838);
					iLocal_838 = 9;
					break;
				case 9:
					if (iVar838 != 5)
					{
						func_10(Global_1898004);
						func_11(iVar838, Global_1898004, bVar839);
					}
					func_8(iVar838, 8);
					iLocal_838 = 10;
					break;
				case 10:
					if (!bVar839)
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
						iLocal_838 = 3;
					}
					else
					{
						iLocal_838 = 3;
					}
					break;
				case 3:
					if (!_0xcf45df50c7775f2a())
					{
						if (func_15(bVar839))
						{
							iLocal_838 = 11;
						}
					}
					break;
				case 11:
					if (!bVar839)
					{
						if (!func_16(iVar838))
						{
							iLocal_839 = 0;
						}
					}
					func_17(Global_1898004, iVar838);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iVar836)
			{
				iLocal_839 = 0;
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
	Local_29.f_215 = Local_15.f_4;
	add_cover_blocking_area(-22.69106f, 1231.646f, 171.9786f, -25.49326f, 1227.286f, 174.0642f, true, true, true, true);
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
	func_50(uParam1, Local_29.f_215, 1);
}

void func_12()
{
	if (func_34(63, 0) || func_51(128))
	{
		func_52(16384);
	}
	register_script_with_audio(0);
	clear_area(-67.7f, 1234.8f, 168.9f, 4f, 2560);
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
	func_62();
	func_63(&Local_29, 36, &sLocal_567, 25);
	_0x72d4cb5db927009c(-183018591, -1, 0);
	func_64(&(Local_29.f_155), 0);
	func_65(&(Local_29.f_155), 1);
	func_66(&(Local_29.f_155), 1);
	func_67(&(Local_29.f_155), 1);
	func_68(&(Local_29.f_155), 40);
	_0x113ef458ab6cda67(player_id(), 0.1f);
	Local_29.f_187 = 15000;
	func_70(&(Local_29.f_155), (func_69(&(Local_29.f_155)) - 10f));
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
	if (bParam0)
	{
		_remove_imap(1432023115);
		func_71(-2034257789, 0, 0);
	}
	else
	{
		_request_imap(1432023115);
		func_71(-2034257789, 1, 0);
	}
	if (_0x495cfab2924237c7("six_point_lights_on"))
	{
		_0x7c334ff4d9215912("six_point_lights_on");
	}
	if (does_scenario_group_exist("HIDEOUT_SIXPOINT_POST_COMBAT"))
	{
		set_scenario_group_enabled("HIDEOUT_SIXPOINT_POST_COMBAT", false);
	}
	if ((!func_72(63) && !func_73(63)) && !func_74(63))
	{
		if (Local_29.f_4 >= 0)
		{
			func_71(1982676972, 0, 0);
		}
		else
		{
			func_71(1982676972, 1, 0);
		}
	}
	func_75(202296518, 0, 0);
	return true;
}

bool func_16(int iParam0)
{
	switch (Local_29)
	{
		case 0:
			if (func_76(&Local_29, &uLocal_775, &uLocal_540, "SIXPT", 0) && func_77())
			{
				func_78(&Local_29, 1);
			}
			break;
		case 1:
			if (func_79(&Local_29, &Local_286, -1996978098, 0, iVar783))
			{
				Local_29.f_197 = 0;
				func_78(&Local_29, 2);
			}
			break;
		case 2:
			func_78(&Local_29, 5);
			break;
		case 5:
			func_80(Local_431[0], 841021282, 0);
			func_81(&Local_29, &Local_286, 0, iVar783);
			func_82(1);
			func_83();
			func_84(1);
			func_85();
			func_86();
			func_87(0);
			func_88(&Local_441);
			if (Local_29.f_4 < 0)
			{
				if (does_entity_exist(Local_441[6]->f_8))
				{
					delete_object(&(Local_441[6]->f_8));
				}
			}
			func_89();
			_0xc07b91b996c1de89(iVar822, 1);
			door_system_set_door_state(iVar822, 2);
			func_78(&Local_29, 6);
			break;
		case 6:
			if (Local_29.f_3 < 5)
			{
				if (func_90())
				{
					func_78(&Local_29, 7);
				}
				func_67(&(Local_29.f_155), 0);
				if (func_91(&Local_29, &Local_286, Local_29.f_199, 0, 0))
				{
					func_92();
					func_78(&Local_29, 7);
				}
				func_67(&(Local_29.f_155), 1);
			}
			break;
		case 7:
			func_93();
			break;
	}
	if (!func_94(&Local_29, 4))
	{
		if (Local_29 >= 6)
		{
			func_95(&Local_29, &Local_286);
			func_96();
			if (!func_97(16384))
			{
				func_98();
				if (func_99())
				{
					func_100();
				}
			}
		}
		func_101();
	}
	else
	{
		func_102(-455561245);
		func_103();
	}
	func_104(&Local_29);
	func_105();
	return false;
}

void func_17(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_106(&Global_1935630, 16384)) || func_106(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_107(uParam0, 1))
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
	bVar2 = func_108();
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
							if ((!func_109((*uParam0)[iVar3], 1) && func_110(iParam1)) && !func_111(iParam1, 16))
							{
								func_113(iParam1, func_112(), -1, 0, -1, 0);
								func_114((*uParam0)[iVar3], 1);
							}
							func_115(iParam1, 0);
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
		if (func_116() != bVar0)
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
			func_117();
			func_118(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_119(bVar0);
	if (func_24() == -1)
	{
		func_120((iParam1 == func_28() && bVar0));
	}
}

void func_18()
{
	func_121(uVar839);
	func_122(uVar839);
	if (func_24() == -1)
	{
		if (iVar838 != 5)
		{
			func_123(iVar838);
		}
	}
	if (iVar838 != 5)
	{
		func_124(iVar838);
		func_125(iVar838, 4);
		func_125(iVar838, 8);
		func_119(0);
		if (func_24() == -1)
		{
			func_120(0);
		}
	}
	func_126(0);
	if (func_28() == iVar838)
	{
		func_127(0);
	}
	if (func_128(func_36(iVar838), 1))
	{
		func_71(func_129(iVar838), 1, 0);
	}
	func_130(iVar838);
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
	iVar0 = func_131(iParam0);
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
		if (func_132())
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
		iVar0 = func_133(&(Global_1898164->f_1[0]));
		if (func_134(iVar0) && func_135((*Global_1347702)[iVar0]->f_12, 131072))
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
	return func_137(func_136(iParam0));
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
	if (!func_134(iParam0))
	{
		return false;
	}
	return func_128((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_30(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_128((*Global_1835011)[iParam0]->f_1, 1);
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
	if (!func_138(iParam0))
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
	return func_139(iParam0);
}

bool func_39(int iParam0)
{
	return iParam0 != -15;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_140(*iParam0);
	iVar1 = func_141(*iParam0);
	iVar2 = func_142(*iParam0);
	iVar3 = func_143(*iParam0);
	iVar4 = func_144(*iParam0);
	iVar5 = func_145(*iParam0);
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
	iVar6 = func_146(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_146(iVar1, iVar0);
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
	func_147(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_149(func_148(), iParam0, bParam1);
}

void func_42()
{
	Local_15 = _create_volume_box(-63.82038f, 1237.37f, 171.6454f, 0f, 0f, -59.52287f, 30f, 30f, 20f);
	Local_15.f_1 = _create_volume_cylinder(-34.83347f, 1228.841f, 169.1569f, 0f, 0f, 0f, 30f, 30f, 20f);
	Local_15.f_2 = _create_volume_box(-69.25819f, 1233.486f, 171.5531f, 0f, 0f, 30.12824f, 20.19127f, 35.73563f, 8.534721f);
	Local_15.f_3 = _create_volume_box(-62.79739f, 1237.852f, 171.2058f, 0f, 0f, 30.12824f, 9.461426f, 6.02771f, 3.008333f);
	Local_15.f_4 = _create_volume_cylinder(-35.90744f, 1223.403f, 162f, 0f, 0f, -20.99443f, 41.93496f, 40.96319f, 20f);
	Local_15.f_5 = _create_volume_cylinder(-34.44956f, 1222.662f, 172.7827f, 0f, 0f, 0f, 16f, 16f, 7.020916f);
	Local_15.f_6 = _create_volume_box(-61.75919f, 1232.9f, 171.5531f, 0f, 0f, 30.12824f, 25.52597f, 25.00609f, 8.534721f);
	Local_15.f_7 = _create_volume_cylinder(-28.77598f, 1228.862f, 173.0764f, 0f, 0f, 0f, 11.5f, 11.5f, 6f);
	Local_15.f_8 = _create_volume_box(-71.66011f, 1231.462f, 170.2555f, 0f, 0f, 29.96638f, 10.2195f, 12.99067f, 9.399186f);
	Local_15.f_9 = _create_volume_box(-34.70525f, 1232.307f, 172.9949f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_15.f_10 = _create_volume_box(-21.92492f, 1232.307f, 172.9949f, 0f, 0f, 0f, 15.56897f, 10f, 10f);
	Local_15.f_11 = _create_volume_box(-34.70525f, 1222.299f, 172.9949f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_15.f_12 = _create_volume_box(-24.37676f, 1222.299f, 172.9949f, 0f, 0f, 0f, 10.65925f, 10f, 10f);
	Local_15.f_13 = _create_volume_box(-72.90742f, 1231.863f, 168.8581f, 0f, 0f, -61.08905f, 3.406929f, 14.85746f, 4.510974f);
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
	if (!func_150(iParam0, 2))
	{
		return 0;
	}
	if (func_150(iParam0, 32) && !bParam1)
	{
		func_152(iParam0, _create_persistent_character(func_151(iParam0)));
		if (func_24() == -1)
		{
			if (func_150(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_153(iParam0));
				func_154(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_153(iParam0));
		}
		return 0;
	}
	if (!func_155(iParam0) && func_24() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_153(iParam0)))
	{
		func_154(iParam0, 128);
		return 1;
	}
	func_152(iParam0, _create_persistent_character(func_151(iParam0)));
	_0x4f81ead1de8fa19b(func_153(iParam0));
	if (func_150(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_153(iParam0));
		func_154(iParam0, 2048);
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
	if (!func_156(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

bool func_51(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

void func_52(int iParam0)
{
	iLocal_749 = (uVar746 || iParam0);
}

void func_53()
{
	Local_29.f_206 = "OBJ_KILL";
	Local_29.f_207 = "HIDEOUT_FLEE";
	Local_29.f_4 = func_157(&(Local_29.f_4), 36);
	if (func_97(16384))
	{
		Local_29.f_199 = 4;
		sVar0 = "NUM_ACTORS_LITE";
	}
	else
	{
		switch (Local_29.f_4)
		{
			case 0:
				Local_29.f_199 = 13;
				sVar0 = "NUM_ACTORS0";
				break;
			case 1:
				Local_29.f_199 = 16;
				sVar0 = "NUM_ACTORS1";
				break;
			case 2:
				Local_29.f_199 = 16;
				sVar0 = "NUM_ACTORS2";
				break;
			case 3:
				Local_29.f_199 = 16;
				sVar0 = "NUM_ACTORS3";
				break;
		}
	}
	Local_29.f_201 = (Local_29.f_199 + func_158());
	Local_29.f_189 = 3;
}

void func_54()
{
	sLocal_567[0] = "";
}

void func_55()
{
	Local_29.f_6.f_13 = "CUT_SP_DESC1";
	Local_29.f_6.f_14 = "CUT_SP_DESC2";
	Local_29.f_6.f_19 = 1;
	Local_29.f_6.f_20 = { -34.1f, 1229.1f, 180f };
	Local_29.f_6.f_23 = 5f;
	Local_29.f_6.f_24 = 4225f;
	Local_29.f_6.f_25 = 7225f;
	Local_29.f_6.f_27 = 0;
	Local_29.f_6.f_28 = 0;
	func_159();
}

void func_56()
{
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (func_97(16384) && iVar0 >= 4)
		{
			Local_286[iVar0] = 0;
		}
		else if (iVar0 == 10)
		{
			Local_286[iVar0] = 0;
		}
		else if ((iVar0 % 2) == 0)
		{
			Local_286[iVar0] = 347599949;
		}
		else
		{
			Local_286[iVar0] = 50483426;
		}
		iVar0++;
	}
	if (Local_29.f_4 < 1)
	{
		Local_286[4] = 0;
		Local_286[5] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_97(16384))
		{
			Local_431[iVar0] = 0;
		}
		else
		{
			Local_431[iVar0] = -1909449322;
		}
		iVar0++;
	}
	func_160(&uLocal_540, &(Local_286[0]));
	func_160(&uLocal_540, &(Local_286[1]));
	func_160(&uLocal_540, &(Local_431[0]));
	func_160(&uLocal_540, -1038436471);
	func_161();
}

void func_57()
{
	iVar0 = 0;
	while (iVar0 < iVar800)
	{
		iLocal_802[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar817)
	{
		iLocal_819[iVar0] = -1;
		iVar0++;
	}
}

void func_58()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		*Local_441[iVar0] = { func_162(12, iVar0) };
		Local_441[iVar0]->f_3.f_2 = func_163(12, iVar0);
		iVar0++;
	}
	Local_441[0]->f_7 = 480074467;
	*Local_441[0] = { func_164(12, 1) };
	Local_441[0]->f_3.f_2 = func_165(12, 1);
	Local_441[0]->f_12 = 1;
	Local_441[1]->f_7 = -1623912517;
	Local_441[1]->f_12 = 1;
	*Local_441[1] = { func_164(12, 2) };
	Local_441[1]->f_3.f_2 = func_165(12, 2);
	Local_441[2]->f_7 = 480074467;
	*Local_441[2] = { func_164(12, 3) };
	Local_441[2]->f_3.f_2 = func_165(12, 3);
	Local_441[3]->f_7 = 1843407141;
	*Local_441[3] = { func_164(12, 4) };
	Local_441[3]->f_3.f_2 = func_165(12, 4);
	Local_441[5]->f_7 = 986312695;
	*Local_441[5] = { func_164(12, 6) };
	Local_441[5]->f_3.f_2 = func_165(12, 6);
	Local_441[4]->f_7 = -1971689092;
	*Local_441[4] = { func_164(12, 5) };
	Local_441[4]->f_3.f_2 = func_165(12, 5);
	Local_441[6]->f_7 = -491982416;
	*Local_441[6] = { func_164(12, 8) };
	Local_441[6]->f_3.f_2 = func_165(12, 8);
	func_160(&uLocal_540, Local_441[0]->f_7);
	func_160(&uLocal_540, Local_441[1]->f_7);
	func_160(&uLocal_540, Local_441[3]->f_7);
	func_160(&uLocal_540, Local_441[5]->f_7);
	func_160(&uLocal_540, Local_441[4]->f_7);
	func_160(&uLocal_540, Local_441[6]->f_7);
	func_166();
	request_model(295806611, false);
	if (has_model_loaded(295806611))
	{
		iLocal_828 = get_closest_object_of_type(-61.978f, 1235.021f, 169.765f, 2f, 295806611, true, false, true);
		func_167(295806611, -61.978f, 1235.021f, 169.765f, &iLocal_828, 0, 0, 0);
		func_168(295806611, -61.978f, 1235.021f, 169.765f, &iLocal_828, 204375141, 1, 0, 0, -1733520123);
	}
}

void func_59()
{
	*Local_698[0] = { func_164(5, 0) + Vector(2f, 2f, 2f) };
	Local_698[0]->f_3 = 3f;
	*Local_698[1] = { func_164(5, 2) + Vector(2f, 2f, 2f) };
	Local_698[1]->f_3 = 3f;
	*Local_698[2] = { func_164(5, 4) + Vector(2f, 2f, 2f) };
	Local_698[2]->f_3 = 3f;
	*Local_698[3] = { func_164(5, 6) + Vector(2f, 2f, 2f) };
	Local_698[3]->f_3 = 3f;
	*Local_698[4] = { func_164(5, 8) + Vector(2f, 2f, 2f) };
	Local_698[4]->f_3 = 3f;
	*Local_698[5] = { func_164(5, 10) + Vector(2f, 2f, 2f) };
	Local_698[5]->f_3 = 3f;
}

void func_60()
{
	Local_634[0]->f_1 = { func_164(6, 0) };
	Local_634[0]->f_4 = func_165(6, 0);
	Local_634[0]->f_5 = 0;
	Local_634[0]->f_6 = 3;
	Local_634[0]->f_7 = 1;
	Local_634[1]->f_1 = { func_164(6, 1) };
	Local_634[1]->f_4 = func_165(6, 1);
	Local_634[1]->f_5 = 0;
	Local_634[1]->f_6 = 0;
	Local_634[1]->f_7 = 1;
	Local_634[2]->f_1 = { func_164(6, 2) };
	Local_634[2]->f_4 = func_165(6, 2);
	Local_634[2]->f_5 = 0;
	Local_634[2]->f_6 = 0;
	Local_634[2]->f_7 = 1;
	Local_634[3]->f_1 = { func_164(6, 3) };
	Local_634[3]->f_4 = func_165(6, 3);
	Local_634[3]->f_5 = 0;
	Local_634[3]->f_6 = 3;
	Local_634[3]->f_7 = 1;
	Local_634[4]->f_1 = { func_164(6, 4) };
	Local_634[4]->f_4 = func_165(6, 4);
	Local_634[4]->f_5 = 0;
	Local_634[4]->f_6 = 3;
	Local_634[4]->f_7 = 1;
	Local_634[5]->f_1 = { func_164(6, 5) };
	Local_634[5]->f_4 = func_165(6, 5);
	Local_634[5]->f_5 = 0;
	Local_634[5]->f_6 = 3;
	Local_634[5]->f_7 = 1;
	Local_634[6]->f_1 = { func_164(6, 6) };
	Local_634[6]->f_4 = func_165(6, 6);
	Local_634[6]->f_5 = 0;
	Local_634[6]->f_6 = 3;
	Local_634[6]->f_7 = 1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_169(Local_634[iVar0], 0);
		iVar0++;
	}
}

void func_61()
{
}

void func_62()
{
	if (func_97(16384))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_170(iVar0))
		{
			func_171(iVar0, 0, 1);
		}
		iVar0++;
	}
}

void func_63(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	func_172(128);
	iParam0->f_205 = iParam1;
	bVar0 = func_173(&(iParam0->f_5), 1048576);
	iParam0->f_202 = { func_174(iParam0->f_205, bVar0) };
	iParam0->f_187 = get_random_int_in_range(7502, 10000);
	if (iParam0->f_205 == 16)
	{
		func_175(iParam0->f_202, 120f, 0);
	}
	else
	{
		func_175(iParam0->f_202, 80f, 0);
	}
	func_176(iParam0, 1);
	func_177(&(iParam0->f_155));
	func_178(&(iParam0->f_155));
	func_179(&(iParam0->f_155));
	func_180(&(iParam0->f_155), 1);
	func_181(&(iParam0->f_155), to_float(iParam3));
	func_68(&(iParam0->f_155), 50);
	func_182(&(iParam0->f_155), 8f);
	func_183(sParam2);
	func_184(iParam0);
	if (!func_72(65))
	{
		func_185(iParam0);
	}
	func_186(iParam0);
	func_187(iParam0);
	func_188(&(iParam0->f_38), Global_35, "ARTHUR", 0);
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 1);
	}
	else
	{
		func_190(&(uParam0->f_1), 1);
	}
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 2);
	}
	else
	{
		func_189(uParam0, 2);
	}
}

void func_66(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 2048);
	}
	else
	{
		func_190(&(uParam0->f_1), 2048);
	}
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 4);
	}
	else
	{
		func_189(uParam0, 4);
	}
}

void func_68(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

float func_69(var uParam0)
{
	return uParam0->f_24;
}

void func_70(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_71(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_191(1497516462);
			func_192(2016141805);
			func_192(1010885152);
			func_192(-502324015);
			break;
		case 2016141805:
			func_192(1497516462);
			func_191(2016141805);
			func_192(1010885152);
			func_192(-502324015);
			break;
		case 1010885152:
			func_192(1497516462);
			func_192(2016141805);
			func_191(1010885152);
			func_192(-502324015);
			break;
		case -502324015:
			func_192(1497516462);
			func_192(2016141805);
			func_192(1010885152);
			func_191(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_192(-538889627);
			func_192(-538880323);
			func_192(-1056767524);
			func_191(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_193();
			func_191(iParam0);
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
			func_194();
			func_191(iParam0);
			break;
		case 2019386373:
			func_192(-664252410);
			func_192(2109952320);
			func_191(2019386373);
			break;
		case -664252410:
			func_192(2019386373);
			func_192(2109952320);
			func_191(-664252410);
			break;
		case 2109952320:
			func_192(2019386373);
			func_192(-664252410);
			func_191(2109952320);
			break;
		case -1674179981:
			func_192(-1835851517);
			func_192(-1838352012);
			func_191(-1674179981);
			break;
		case -1835851517:
			func_192(-1674179981);
			func_192(-1838352012);
			func_191(-1835851517);
			break;
		case -1838352012:
			func_192(-1674179981);
			func_192(-1835851517);
			func_191(-1838352012);
			break;
		case -1717960576:
			func_192(210001842);
			func_191(-1717960576);
			break;
		case 210001842:
			func_192(-1717960576);
			func_191(210001842);
			break;
		case -150493654:
			func_192(-1271608261);
			func_192(1846061697);
			func_192(-1145519186);
			func_191(-150493654);
			break;
		case -1271608261:
			func_192(-150493654);
			func_192(1846061697);
			func_192(-1145519186);
			func_191(-1271608261);
			break;
		case 1846061697:
			func_192(-150493654);
			func_192(-1271608261);
			func_192(-1145519186);
			func_191(1846061697);
			break;
		case -1145519186:
			func_192(-150493654);
			func_192(-1271608261);
			func_192(1846061697);
			func_191(-1145519186);
			break;
		case 1766284049:
			func_192(280705402);
			func_192(1926308480);
			func_191(1766284049);
			break;
		case 280705402:
			func_192(1766284049);
			func_192(1926308480);
			func_191(280705402);
			break;
		case 1926308480:
			func_192(1766284049);
			func_192(280705402);
			func_191(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_192(439465264);
				func_191(1609506757);
			}
			else
			{
				func_192(1609506757);
				func_192(439465264);
			}
			break;
		case 439465264:
			if (func_195(1609506757))
			{
				if (bParam1)
				{
					func_191(439465264);
				}
				else
				{
					func_192(439465264);
				}
			}
			break;
		case 1822001510:
			func_192(-1612662716);
			func_191(1822001510);
			break;
		case -1612662716:
			func_192(1822001510);
			func_191(-1612662716);
			break;
		case 1306158345:
			func_192(1952610440);
			func_192(-223469678);
			func_192(-404698347);
			func_192(1517904467);
			func_191(1306158345);
			break;
		case 1952610440:
			func_192(1306158345);
			func_192(-223469678);
			func_192(-404698347);
			func_192(1517904467);
			func_191(1952610440);
			break;
		case -223469678:
			func_192(1306158345);
			func_192(1952610440);
			func_192(-404698347);
			func_192(1517904467);
			func_191(-223469678);
			break;
		case -404698347:
			func_192(1306158345);
			func_192(1952610440);
			func_192(-223469678);
			func_192(1517904467);
			func_191(-404698347);
			break;
		case 1517904467:
			func_192(1306158345);
			func_192(1952610440);
			func_192(-223469678);
			func_192(-404698347);
			func_191(1517904467);
			break;
		case 1376646519:
			func_192(931649776);
			func_192(-434590080);
			func_192(1743048395);
			func_192(449774763);
			func_191(1376646519);
			break;
		case 931649776:
			func_192(1376646519);
			func_192(-434590080);
			func_192(1743048395);
			func_192(449774763);
			func_191(931649776);
			break;
		case -434590080:
			func_192(1376646519);
			func_192(931649776);
			func_192(1743048395);
			func_192(449774763);
			func_191(-434590080);
			break;
		case 1743048395:
			func_192(1376646519);
			func_192(931649776);
			func_192(-434590080);
			func_192(449774763);
			func_191(1743048395);
			break;
		case 449774763:
			func_192(1376646519);
			func_192(931649776);
			func_192(-434590080);
			func_192(1743048395);
			func_191(449774763);
			break;
		case -1414537028:
			func_192(38162571);
			func_192(1350391819);
			func_192(54073871);
			func_191(-1414537028);
			break;
		case 38162571:
			func_192(-1414537028);
			func_192(1350391819);
			func_192(54073871);
			func_191(38162571);
			break;
		case 1350391819:
			func_192(-1414537028);
			func_192(38162571);
			func_192(54073871);
			func_191(1350391819);
			break;
		case 54073871:
			func_192(-1414537028);
			func_192(38162571);
			func_192(1350391819);
			func_191(54073871);
			break;
		case 198200492:
			func_191(198200492);
			func_192(-1124061431);
			func_192(52706132);
			func_192(-259123672);
			break;
		case -1124061431:
			func_192(198200492);
			func_191(-1124061431);
			func_192(52706132);
			func_192(-259123672);
			break;
		case 52706132:
			func_192(198200492);
			func_192(-1124061431);
			func_191(52706132);
			func_192(-259123672);
			break;
		case -259123672:
			func_192(198200492);
			func_192(-1124061431);
			func_192(52706132);
			func_191(-259123672);
			break;
		case -919512195:
			func_191(-919512195);
			func_192(-1925798111);
			func_192(420709909);
			func_192(1703426636);
			break;
		case -1925798111:
			func_191(-1925798111);
			func_192(-919512195);
			func_192(420709909);
			func_192(1703426636);
			break;
		case 420709909:
			func_191(420709909);
			func_192(-919512195);
			func_192(-1925798111);
			func_192(1703426636);
			break;
		case 1703426636:
			func_191(1703426636);
			func_192(-919512195);
			func_192(-1925798111);
			func_192(420709909);
			break;
		case -1223121209:
			func_191(-1223121209);
			func_192(630808005);
			break;
		case 630808005:
			func_191(630808005);
			func_192(-1223121209);
			break;
		case 1453909576:
			func_191(1453909576);
			func_192(1643531967);
			break;
		case 1643531967:
			func_191(1643531967);
			func_192(1453909576);
			break;
		case 0:
			func_191(0);
			func_192(473295046);
			func_192(-1738165526);
			break;
		case 473295046:
			func_191(473295046);
			func_192(0);
			func_192(-1738165526);
			break;
		case -1738165526:
			func_191(-1738165526);
			func_192(0);
			func_192(473295046);
			break;
		case 932909855:
			func_191(932909855);
			func_192(2051822093);
			break;
		case 2051822093:
			func_191(2051822093);
			func_192(932909855);
			break;
		case 405586984:
			func_191(405586984);
			func_192(1509509592);
			func_192(-959357075);
			func_192(-1311865656);
			break;
		case 1509509592:
			func_191(1509509592);
			func_192(405586984);
			func_192(-959357075);
			func_192(-1311865656);
			break;
		case -959357075:
			func_191(-959357075);
			func_192(1509509592);
			func_192(405586984);
			func_192(-1311865656);
			break;
		case -1311865656:
			func_191(-1311865656);
			func_192(1509509592);
			func_192(-959357075);
			func_192(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_191(-524145696);
			}
			else
			{
				func_192(-524145696);
			}
			func_192(1626481264);
			func_192(282809459);
			break;
		case 282809459:
			func_191(282809459);
			func_192(1626481264);
			func_192(-524145696);
			break;
		case 1626481264:
			func_191(1626481264);
			func_192(-524145696);
			func_192(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_191(885203519);
			}
			else
			{
				func_192(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_191(-1080627546);
			}
			else
			{
				func_192(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_195(iParam0))
				{
					func_191(iParam0);
				}
			}
			else if (func_195(iParam0))
			{
				func_192(iParam0);
			}
			break;
	}
}

bool func_72(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	return func_196((*Global_1347702)[iParam0]->f_15);
}

bool func_73(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if ((is_thread_active((*Global_1347702)[iParam0]->f_42, false) && !func_196((*Global_1347702)[iParam0]->f_15)) && !func_197((*Global_1347702)[iParam0]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	if (func_197((*Global_1347702)[iParam0]->f_13, 64))
	{
		return false;
	}
	if (func_73(iParam0))
	{
		return true;
	}
	if (func_198(iParam0))
	{
		if (func_199(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
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

int func_76(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		_0xed9582b3da8f02b4(iParam0->f_201);
	}
	else
	{
		_0xed9582b3da8f02b4(iParam0->f_199);
	}
	if (func_200(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && _0x5e420ff293ee5472())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	if (func_97(16384))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_170(iVar0))
		{
			if (!func_201(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_78(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		func_80((*iParam1)[iParam0->f_197], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return true;
	}
	return false;
}

void func_80(var uParam0, int iParam1, bool bParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = func_202(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_203(&(uParam0->f_7), 2))
	{
		if (func_203(&(uParam0->f_7), 8))
		{
			iVar0 = func_202(-1038436471, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			_set_ped_on_mount(uParam0->f_5, iVar0, -1, true);
		}
		set_blocking_of_non_temporary_events(uParam0->f_5, true);
		request_ped_visibility_tracking(uParam0->f_5);
		set_ped_relationship_group_hash(uParam0->f_5, iParam1);
		if (func_203(&(uParam0->f_7), 4))
		{
			set_ped_sphere_defensive_area(uParam0->f_5, uParam0->f_1, 2f, 1, 0, 0);
		}
		set_entity_visible(uParam0->f_5, !bParam2);
	}
	else
	{
		func_204(uParam0->f_5, 0, 0);
	}
	set_ped_keep_task(uParam0->f_5, true);
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_205((*iParam1)[iVar0]->f_5, 0, 1))
		{
			set_entity_visible((*iParam1)[iVar0]->f_5, true);
		}
		iVar0++;
	}
}

void func_82(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Local_29.f_199 - 1))
	{
		if (func_205(Local_286[iVar0]->f_5, 0, 1))
		{
			set_ped_config_flag(Local_286[iVar0]->f_5, 425, bParam0);
		}
		iVar0++;
	}
}

void func_83()
{
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (func_205(Local_286[iVar0]->f_5, 0, 1))
		{
			if (func_206(iVar0))
			{
				func_207(Local_286[iVar0], 1);
			}
			else
			{
				func_207(Local_286[iVar0], 0);
				_0xfc3db99c8144cd81(Local_286[iVar0]->f_5, Local_15.f_4, 0, false, 0);
			}
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 0, true);
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 13, true);
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 49, true);
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 42, true);
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 71, true);
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 47, true);
			set_ped_combat_attributes(Local_286[iVar0]->f_5, 50, true);
			set_ped_combat_movement(Local_286[iVar0]->f_5, 2);
			set_ped_combat_range(Local_286[iVar0]->f_5, 0);
			set_ped_path_can_use_climbovers(Local_286[iVar0]->f_5, false);
			set_ped_hearing_range(Local_286[iVar0]->f_5, 8f);
			decor_set_int(Local_286[iVar0]->f_5, "iDamageFrame", -1);
			_0x18ff3110cf47115d(Local_286[iVar0]->f_5, 1, 0);
			if (!func_206(iVar0))
			{
				set_ped_config_flag(Local_286[iVar0]->f_5, 246, true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_205(Local_431[iVar0]->f_5, 0, 1))
		{
			set_ped_path_can_use_climbovers(Local_431[iVar0]->f_5, false);
			set_ped_accuracy(Local_431[iVar0]->f_5, 10);
			set_ped_shoot_rate(Local_431[iVar0]->f_5, 150);
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	if (!func_97(16384))
	{
		func_208(Local_286[0]->f_5, Local_286[0]->f_1, 3f, 1, Local_15.f_3, 0, 0);
		func_208(Local_286[1]->f_5, Local_286[1]->f_1, 3f, 1, Local_15.f_3, 0, 0);
		func_209(Local_286[0]->f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		func_209(Local_286[1]->f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			func_209(Local_286[iVar0]->f_5, func_210(&(Local_286[iVar0])), 0);
			iVar0++;
		}
		iVar1 = 6;
		while (iVar1 <= 10)
		{
			if (func_205(Local_286[iVar1]->f_5, 0, 1))
			{
				if (iVar1 == 7)
				{
					if (func_211())
					{
						_task_start_scenario_in_place(Local_286[iVar1]->f_5, -866653503, 0, false, 0, -1f, false);
					}
					else
					{
						_task_start_scenario_in_place(Local_286[iVar1]->f_5, 1956542692, 0, false, 0, -1f, false);
					}
				}
				else if (iVar1 == 8)
				{
					_task_start_scenario_in_place(Local_286[iVar1]->f_5, 1285815972, 0, false, 0, -1f, false);
				}
				else
				{
					func_208(Local_286[iVar1]->f_5, Local_286[iVar1]->f_1, 12f, 1, Local_15.f_7, 0, 0);
				}
			}
			iVar1++;
		}
		if (func_205(Local_431[0]->f_5, 0, 1))
		{
			func_208(Local_431[0]->f_5, Local_431[0]->f_1, 12f, 1, Local_15.f_7, 0, 0);
		}
		if (func_99())
		{
			func_212();
		}
		else
		{
			iVar0 = iVar782;
			while (iVar0 <= iVar783)
			{
				if (func_205(Local_286[iVar0]->f_5, 0, 1))
				{
					func_208(Local_286[iVar0]->f_5, Local_286[iVar0]->f_1, 10f, 1, Local_15.f_7, 0, 0);
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (func_205(Local_286[0]->f_5, 0, 1))
		{
			func_209(Local_286[0]->f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		}
		if (func_205(Local_286[1]->f_5, 0, 1))
		{
			func_209(Local_286[1]->f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
		}
		if (func_205(Local_286[2]->f_5, 0, 1))
		{
			func_209(Local_286[2]->f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		}
		if (func_205(Local_286[3]->f_5, 0, 1))
		{
			func_209(Local_286[3]->f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_208(Local_286[iVar0]->f_5, Local_286[iVar0]->f_1, 4f, 3, Local_15.f_7, 0, 0);
			iVar0++;
		}
	}
}

void func_85()
{
	Local_729[0]->f_5 = 0f;
	*Local_729[0] = { -67.3032f, 1235.838f, 169.8232f };
	Local_729[0]->f_4 = 1;
	Local_729[0]->f_3 = -312814636;
}

void func_86()
{
	if (_does_scenario_group_exist_hash(-1016982061))
	{
		_set_scenario_group_enabled_hash(-1016982061, true);
	}
}

void func_87(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Local_29.f_199 - 1))
	{
		if (func_205(Local_286[iVar0]->f_5, 0, 1))
		{
			set_blocking_of_non_temporary_events(Local_286[iVar0]->f_5, bParam0);
			set_ped_config_flag(Local_286[iVar0]->f_5, 130, bParam0);
			_0xa3db37edf9a74635(player_id(), Local_286[iVar0]->f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_88(var uParam0)
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

void func_89()
{
	if (!func_213(iVar823))
	{
		iLocal_825 = 202296518;
		func_75(iVar823, 0, 0);
		func_214(iVar823, 1);
	}
}

bool func_90()
{
	fVar0 = get_distance_between_coords(Global_36, Local_29.f_6.f_20, true);
	if (!is_sphere_visible(Local_29.f_6.f_20, Local_29.f_6.f_23) && fVar0 > 65f)
	{
		return false;
	}
	if (is_sphere_visible(Local_29.f_6.f_20, Local_29.f_6.f_23) && fVar0 > 85f)
	{
		return false;
	}
	set_ambient_zone_list_state("AZL_Hideout_Six_Point_Cabin", true, true);
	func_52(65536);
	trigger_music_event("HIDEOUT_SPC_START");
	func_52(268435456);
	return true;
}

bool func_91(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_215((*iParam1)[iVar0]->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !get_ped_config_flag((*iParam1)[iVar0]->f_5, 9, false))
		{
			iParam0->f_192 = (*iParam1)[iVar0]->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (func_216(iParam0, (*iParam1)[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_92()
{
	if (!func_97(268435456))
	{
		trigger_music_event("HIDEOUT_SPC_START");
	}
	trigger_music_event("HIDEOUT_SPC_ALERT");
	iLocal_824 = func_217();
	if (!func_97(16384))
	{
		iVar0 = iVar787;
		while (iVar0 <= iVar784)
		{
			if (func_205(Local_286[iVar0]->f_5, 0, 1))
			{
				func_218(Local_286[iVar0]->f_5, Global_36, 3, 1, 1);
				fVar1 = func_219(Global_35, Local_286[iVar0]->f_5, 0, 1);
				if (iVar2 < 2)
				{
					set_ped_combat_range(Local_286[iVar0]->f_5, 0);
					iVar2++;
				}
				if (is_entity_in_volume(Local_286[iVar0]->f_5, Local_15.f_5, true, 0) && fVar1 > 18f)
				{
				}
				if (!is_ped_in_combat(Local_286[iVar0]->f_5, 0))
				{
					task_combat_hated_targets_around_ped(Local_286[iVar0]->f_5, 100f, 0, 66);
					func_220(Local_286[iVar0], 831283580, 0);
					set_ped_target_loss_response(Local_286[iVar0]->f_5, 2);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			task_combat_hated_targets_around_ped(Local_286[iVar0]->f_5, 100f, 0, 66);
			iVar0++;
		}
	}
	if (!func_97(134217728))
	{
		func_221(1);
	}
	func_222();
	func_87(1);
	func_223(&(Local_29.f_184), 1);
	func_224(&Local_29, 5);
}

void func_93()
{
	if (func_94(&Local_29, 5) && !func_225(&Local_29, 9))
	{
		Local_29.f_198 = func_226(&Local_286, Local_29.f_199, Local_29.f_199);
	}
	func_227();
	func_228();
	switch (Local_29.f_3)
	{
		case 0:
			if (func_229())
			{
				func_52(2);
				func_230();
				func_224(&Local_29, 1);
			}
			if (func_231(Global_35, Local_15.f_3, 1, 0))
			{
				func_224(&Local_29, 4);
			}
			break;
		case 1:
			if (func_230())
			{
				func_224(&Local_29, 4);
			}
			break;
		case 4:
			if (func_232())
			{
				func_92();
			}
			break;
		case 5:
			func_233();
			if (func_234())
			{
				func_224(&Local_29, 7);
			}
			break;
		case 7:
			func_224(&Local_29, 8);
			break;
		case 8:
			if (Local_29.f_198 == 0)
			{
				func_224(&Local_29, 9);
				_0xcc3edc5614b03f61(26);
			}
			break;
		case 9:
			if (func_236(&Local_29, &Local_286, 85, func_235(), 1))
			{
				func_224(&Local_29, 10);
				set_ambient_zone_list_state("AZL_Hideout_Six_Point_Cabin", false, true);
			}
			break;
		case 10:
			if (func_237(&Local_29))
			{
				func_238(0);
			}
			break;
	}
	if (Local_29.f_3 <= 5)
	{
		func_239();
		if (iVar750 < 5)
		{
			if (!func_97(33554432))
			{
				if (func_240() || is_explosion_in_sphere(25, -68.2645f, 1234.905f, 169.812f, 10f))
				{
					func_241();
				}
			}
		}
		if (Local_29.f_3 >= 1)
		{
			func_242();
		}
		func_243(&Local_286, &Local_29);
	}
	if (!func_94(&Local_29, 4))
	{
		func_244();
	}
	else
	{
		func_245();
	}
	func_246();
	if (!func_225(&Local_29, 9))
	{
		if (func_173(&(Local_29.f_5), 16384))
		{
			if (does_scenario_group_exist("HIDEOUT_SIXPOINT_POST_COMBAT"))
			{
				set_scenario_group_enabled("HIDEOUT_SIXPOINT_POST_COMBAT", true);
			}
			func_224(&Local_29, 9);
		}
	}
	func_247(&Local_286, &Local_29, 85, 8f);
}

bool func_94(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return false;
	}
	return true;
}

void func_95(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0->f_196 >= iParam0->f_199)
		{
			iParam0->f_196 = 0;
		}
		if (func_205((*iParam1)[iParam0->f_196]->f_5, 0, 1))
		{
			(*iParam1)[iVar0]->f_8 = func_219((*iParam1)[iParam0->f_196]->f_5, Global_35, 0, 1);
			if (*iParam1)[iVar0]->f_8 < func_248(iParam0)
			{
				if (!func_203(&((*iParam1)[iParam0->f_196]->f_7), 16))
				{
					func_249(&((*iParam1)[iParam0->f_196]->f_7), 32);
					func_250(&((*iParam1)[iParam0->f_196]->f_7), 16, 1);
				}
			}
			else if (!func_203(&((*iParam1)[iParam0->f_196]->f_7), 32))
			{
				func_249(&((*iParam1)[iParam0->f_196]->f_7), 16);
				func_250(&((*iParam1)[iParam0->f_196]->f_7), 32, 1);
			}
			if (!func_173(&(iParam0->f_5), 65536))
			{
				if (func_251((*iParam1)[iParam0->f_196]->f_5, 45f, 30f, (*iParam1)[iVar0]->f_8, 70f))
				{
					vVar1 = { get_entity_coords((*iParam1)[iParam0->f_196]->f_5, true, false) };
					func_252(&(iParam0->f_5), 65536);
				}
			}
		}
		iParam0->f_196++;
		iVar0++;
	}
}

void func_96()
{
	if (func_173(&(Local_29.f_5), 131072))
	{
		return;
	}
	if (!func_173(&(Local_29.f_5), 65536))
	{
		return;
	}
	iVar0 = iVar781;
	while (iVar0 <= iVar782)
	{
		if (func_205(Local_286[iVar0]->f_5, 0, 1))
		{
			func_220(Local_286[iVar0], 831283580, -662251075);
		}
		iVar0++;
	}
	iVar1 = 6;
	while (iVar1 <= 10)
	{
		if (func_205(Local_286[iVar1]->f_5, 0, 1))
		{
			func_220(Local_286[iVar1], 831283580, -662251075);
		}
		iVar1++;
	}
	if (iVar783 >= 0 && iVar784 >= 0)
	{
		iVar0 = iVar783;
		while (iVar0 <= iVar784)
		{
			if (func_205(Local_286[iVar0]->f_5, 0, 1))
			{
				func_220(Local_286[iVar0], 831283580, -662251075);
			}
			iVar0++;
		}
	}
	func_252(&(Local_29.f_5), 131072);
}

bool func_97(int iParam0)
{
	return (uVar746 && iParam0) != 0;
}

void func_98()
{
	if (!_does_anim_scene_exist(&(Local_551[0])))
	{
		return;
	}
	if (Local_29.f_4 <= 0)
	{
		return;
	}
	if (func_253(32))
	{
		return;
	}
	if ((!is_entity_dead(Local_286[4]->f_5) && does_entity_exist(Local_441[0]->f_8)) && _is_anim_scene_loaded(&(Local_551[0]), true, false))
	{
		func_254(0, "GUARD", Local_286[4]->f_5, 1);
		func_255(0, "LANTERN", Local_441[0]->f_8, 1);
		Local_551[0]->f_3 = "bBreakLoop1";
		Local_551[0]->f_4 = "bBreakLoop2";
		func_256(0, Local_551[0]->f_4, 1);
		func_257(0);
		func_258(&uLocal_759);
		func_259(32);
	}
}

bool func_99()
{
	if (Local_29.f_4 < 1)
	{
		return true;
	}
	return false;
}

void func_100()
{
	if (func_97(16384))
	{
		return;
	}
	switch (iVar753)
	{
		case 0:
			if (func_260(Local_286[iVar783]->f_5, &uLocal_742, &uLocal_747, &uLocal_748, 1.5f, 50f, 0f, 0, 40f, 1))
			{
				func_52(131072);
				func_261(1);
			}
			break;
		case 1:
			if (!func_97(2))
			{
				func_52(262144);
				func_261(2);
			}
			break;
		case 2:
			vVar1 = { func_262() };
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, vVar1, 1f, -1, 1f, 0, 40000f);
			task_use_nearest_scenario_chain_to_coord(0, vVar1, 5f, false, false, false, false);
			func_263(Local_286[iVar783]->f_5, &iVar0, 0, 0, 1, 1);
			vVar1 = { func_264() };
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, vVar1, 1f, -1, 1f, 0, 40000f);
			task_use_nearest_scenario_chain_to_coord(0, vVar1, 5f, false, false, false, false);
			func_263((Local_286[iVar783 + 1])->f_5, &iVar0, 2f, 0, 1, 1);
			func_261(3);
			break;
		case 3:
			break;
	}
}

void func_101()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		set_force_object_this_frame(func_265(iVar0), func_266(iVar0));
		iVar0++;
	}
}

void func_102(int iParam0)
{
	_0xde2c3b74d2b3705c(iParam0, 0);
}

void func_103()
{
	if (is_entity_in_volume(Global_35, Local_15.f_3, true, 0))
	{
		set_ped_reset_flag(Global_35, 41, true);
	}
}

void func_104(int iParam0)
{
	if (iParam0->f_195 == 0)
	{
		if (func_267(iParam0))
		{
		}
		if (func_268(Global_1888801[iParam0->f_205]) == 3)
		{
			if (func_205(Global_35, 0, 1))
			{
				set_ped_config_flag(Global_35, 141, true);
			}
		}
		func_269(iParam0);
	}
	if (!func_173(&(iParam0->f_5), 1073741824))
	{
		if (!func_270())
		{
			if (iParam0->f_3 >= 4 && iParam0->f_3 < 8)
			{
				func_271(iParam0, 1);
				func_272(iParam0, 1);
			}
		}
		else if (iParam0->f_3 >= 8)
		{
			func_271(iParam0, 0);
			func_273(0);
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

void func_105()
{
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_107(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_108()
{
	return func_106(&Global_1935630, 4096);
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_110(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_274(iParam0));
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_112()
{
	return Global_1897952->f_41;
}

void func_113(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_275())
	{
		return;
	}
	sVar1 = func_276(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_277(iParam4))
	{
		if (func_43(iParam0))
		{
			iParam4 = func_279(func_278(iParam0));
		}
		else
		{
			iParam4 = func_279(iParam1);
		}
	}
	if (func_277(iParam4))
	{
		iVar3 = func_280(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_282(func_281(iParam2));
	}
	else if ((func_283(iParam1, 2) || func_284(iParam4, 2)) && !Global_1894899->f_9)
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
		iVar4 = func_143(func_148());
		iVar5 = func_144(func_148());
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
				fVar7 = func_285(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_286(&cVar6, 109029619), sVar9, func_286(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_285(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_286(&cVar6, 109029619), func_286(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_287(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_114(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_115(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_24() == 0)
	{
		return;
	}
	if (func_288(128))
	{
		return;
	}
	if (!func_289(iParam0))
	{
		return;
	}
	if (func_35(iParam0, 32))
	{
		return;
	}
	func_8(iParam0, 32);
	func_290(Global_1935630, 8192);
	func_292(func_291(-1532769513, -36357794), 1);
	switch (func_278(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_292(func_291(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_292(func_291(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_292(func_291(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_292(func_291(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_292(func_291(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_292(func_291(-1532769513, -910218296), 1);
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
		func_8(iParam0, 64);
	}
}

bool func_116()
{
	return (Global_1894899 & 1 != 0 && func_293() != -1);
}

void func_117()
{
	if (!func_294(&Global_1327479))
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
	func_295(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_118(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_296() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_294(iVar1) && !func_297(iVar1, iParam2)) && (!bParam3 || !func_298(iVar1))) && (!bParam4 || !func_299(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_300(iVar0);
			}
		}
		iVar0++;
	}
}

void func_119(bool bParam0)
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

void func_120(bool bParam0)
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

void func_121(var uParam0)
{
}

void func_122(var uParam0)
{
	if ((!func_72(63) && !func_73(63)) && !func_74(63))
	{
		func_71(1982676972, 1, 0);
		func_71(-2034257789, 0, 0);
	}
}

void func_123(int iParam0)
{
	iVar0 = func_301(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_302(&(Global_1392240->f_1[iVar0]->f_6[iVar1]));
		Global_1392240->f_1[iVar0]->f_6[iVar1] = 0;
		iVar1++;
	}
}

void func_124(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_303(iVar0);
		}
		iVar0++;
	}
}

void func_125(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_126(bool bParam0)
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

void func_127(bool bParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_304(iVar0) && !func_305(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_306(iVar0, 33, 1) || !does_entity_exist(Global_1360165[iVar0])) || !is_entity_on_screen(Global_1360165[iVar0]))
			{
				func_307(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

bool func_128(int iParam0, bool bParam1)
{
	switch (func_268(iParam0))
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

int func_129(int iParam0)
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

void func_130(int iParam0)
{
	if (func_97(65536))
	{
		set_ambient_zone_list_state("AZL_Hideout_Six_Point_Cabin", false, true);
		func_308(65536);
	}
	unregister_script_with_audio();
	if (Local_29.f_205 != iParam0)
	{
		Local_29.f_205 = iParam0;
	}
	if (_0x5ac0944c156e5f44("six_point_lights_on"))
	{
		_0x527b97c203bb8606("six_point_lights_on");
	}
	func_302(iVar822);
	func_238(1);
}

int func_131(int iParam0)
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

bool func_132()
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

int func_133(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_309(func_136(iParam0));
}

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_136(int iParam0)
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

int func_137(int iParam0)
{
	return iParam0 & 31;
}

bool func_138(int iParam0)
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

int func_139(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_140(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_310(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_141(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_143(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_146(int iParam0, int iParam1)
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

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_311(iParam0, iParam6);
	func_312(iParam0, iParam5);
	func_313(iParam0, iParam4);
	func_314(iParam0, iParam3);
	func_315(iParam0, iParam2);
	func_316(iParam0, iParam1);
}

int func_148()
{
	return &Global_1899515;
}

bool func_149(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_317(iParam1) || !func_317(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_150(int iParam0, int iParam1)
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

int func_151(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_152(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_153(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_154(int iParam0, int iParam1)
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

bool func_155(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (!func_150(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_156(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

var func_157(var uParam0, int iParam1)
{
	*uParam0 = func_318(Global_1888801[iParam1]);
	if (*uParam0 >= 4)
	{
		*uParam0 = 3;
	}
	return *uParam0;
}

int func_158()
{
	if (func_97(16384))
	{
		return 0;
	}
	return 1;
}

void func_159()
{
	func_319(Local_253[0], -1.1753f, 1226.903f, 174.2086f, -0.9374f, 0.0294f, 84.0067f, 35.0253f, 0.2f);
	func_319(Local_253[1], -1.0785f, 1228.041f, 174.2081f, -0.9374f, 0.0294f, 86.9617f, 35.0253f, 0.2f);
	func_319(Local_253[2], -67.7526f, 1231.866f, 171.2625f, -0.9435f, -0.0094f, -42.3621f, 29.0226f, 0.2f);
	func_319(Local_253[3], -68.0185f, 1232.112f, 171.2624f, -0.9435f, -0.0094f, -44.4575f, 29.0226f, 0.2f);
}

void func_160(var uParam0, int iParam1)
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

void func_161()
{
	if (func_97(16384))
	{
		func_320(7, 0, 0);
		func_320(7, 1, 1);
		func_320(7, 2, 2);
		func_320(7, 3, 3);
	}
	else
	{
		func_321(0, 0, 0);
		func_321(0, 1, 1);
		func_321(0, 2, 2);
		func_321(0, 3, 9);
		func_321(0, 4, 3);
		func_321(0, 5, 4);
		func_321(0, 6, 5);
		func_321(0, 7, 6);
		func_321(0, 8, 7);
		func_321(0, 9, 8);
	}
	switch (Local_29.f_199)
	{
		case 13:
			iLocal_783 = 11;
			iLocal_784 = (iVar781 - 1);
			func_322(1, iVar781, iVar782);
			uLocal_785 = iVar782 + 1;
			iLocal_786 = (iVar783 + 2 - 1);
			func_323();
			break;
		case 16:
			iLocal_783 = 11;
			iLocal_784 = (iVar781 - 1);
			func_322(1, iVar781, iVar782);
			uLocal_785 = iVar782 + 1;
			iLocal_786 = (iVar783 + 2 - 1);
			Local_286[iVar783]->f_1 = { func_164(3, 7) };
			Local_286[iVar783]->f_4 = func_165(3, 7);
			Local_286[iVar784]->f_1 = { -60.6907f, 1218.982f, 171.065f };
			Local_286[iVar784]->f_4 = func_165(3, 5);
			uLocal_787 = iVar784 + 1;
			iLocal_788 = (iVar785 + 2 - 1);
			break;
		case 4:
			iLocal_783 = 4;
			iLocal_784 = (iVar781 - 1);
			func_322(1, iVar781, iVar782);
			uLocal_785 = iVar782 + 1;
			iLocal_786 = (iVar783 - 1);
			func_322(3, iVar783, iVar784);
			break;
	}
	iLocal_789 = 4;
	if (func_97(16384))
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		Local_431[iVar0]->f_1 = { func_162(4, iVar0) };
		Local_431[iVar0]->f_4 = func_163(4, iVar0);
		iVar0++;
	}
}

Vector3 func_162(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -60.0921f, 1238.496f, 169.7892f;
				case 1:
					return -65.8274f, 1237.815f, 169.7718f;
				case 2:
					return -63.1992f, 1240.423f, 169.8638f;
				case 3:
					return -20.2514f, 1201.776f, 173.0073f;
				case 4:
					return -45.081f, 1211.188f, 170.8305f;
				case 5:
					return -29.0562f, 1228.417f, 171.974f;
				case 6:
					return -27.5658f, 1228.423f, 172.0205f;
				case 7:
					return -25.7407f, 1230.621f, 172.0497f;
				case 8:
					return -27.0871f, 1233.887f, 171.9709f;
				case 9:
					return -60.0711f, 1236.221f, 169.7926f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -35.913f, 1231.742f, 171.8172f;
				case 1:
					return -27.679f, 1229.742f, 172.1358f;
				case 2:
					return -29.5813f, 1228.814f, 172.1861f;
				case 3:
					return -29.36f, 1233.266f, 172.2077f;
				case 4:
					return -37.1605f, 1229.521f, 171.8053f;
				case 5:
					return -19.8795f, 1234.373f, 171.8892f;
				case 6:
					return -29.5499f, 1221.048f, 172.2018f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -32.0774f, 1231.325f, 172.093f;
				case 1:
					return -21.8014f, 1234.167f, 172.119f;
				case 2:
					return -23.4203f, 1236.172f, 172.178f;
				case 3:
					return -20.3377f, 1226.162f, 172.2543f;
				case 4:
					return -23.8255f, 1225.183f, 172.1852f;
				case 5:
					return -25.0364f, 1225.057f, 172.2381f;
				case 6:
					return -26.8974f, 1220.639f, 172.2608f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -21.4474f, 1204.723f, 172.5686f;
				case 1:
					return -23.6206f, 1203.817f, 172.4f;
				case 2:
					return -40.6982f, 1194.733f, 170.6104f;
				case 3:
					return -42.3844f, 1195.365f, 170.4344f;
				case 4:
					return -62.4402f, 1206.165f, 167.6094f;
				case 5:
					return -63.0825f, 1208.596f, 167.8416f;
				case 6:
					return -51.2172f, 1261.65f, 171.4768f;
				case 7:
					return -49.5879f, 1262.588f, 171.5659f;
				case 8:
					return -18.2665f, 1259.888f, 171.8947f;
				case 9:
					return -16.5961f, 1259.329f, 171.9179f;
				case 10:
					return -0.0017f, 1236.806f, 171.903f;
				case 11:
					return 0.3675f, 1235.534f, 171.8479f;
				case 12:
					return 0.1197f, 1206.011f, 174.0529f;
				case 13:
					return -1.6852f, 1204.227f, 174.2121f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -31.0141f, 1232.704f, 171.945f;
				case 1:
					return -27.9542f, 1233.88f, 172.0988f;
				case 2:
					return -28.9327f, 1234.178f, 172.2224f;
				case 3:
					return -28.4374f, 1224.979f, 172.2381f;
				case 4:
					return -36.3424f, 1234.243f, 171.761f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -35.4976f, 1295.293f, 173.4056f;
				case 1:
					return -29.5097f, 1295.012f, 173.1073f;
				case 2:
					return 4.961f, 1166.168f, 174.5798f;
				case 3:
					return 4.4031f, 1172.669f, 174.1718f;
				case 4:
					return -95.426f, 1174.333f, 161.546f;
				case 5:
					return -92.6532f, 1167.358f, 161.6603f;
				case 6:
					return 10.0499f, 1274.08f, 173.6138f;
				case 7:
					return 14.6063f, 1276.69f, 172.5553f;
				case 8:
					return -52.7822f, 1149.34f, 164.8773f;
				case 9:
					return -46.305f, 1148.49f, 165.2613f;
				case 10:
					return -98.0388f, 1247.507f, 166.4168f;
				case 11:
					return -95.7664f, 1253.642f, 166.7171f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -62.3076f, 1237.153f, 169.77f;
				case 1:
					return -62.7273f, 1237.92f, 169.7704f;
				case 2:
					return -61.7331f, 1235.372f, 169.841f;
				case 3:
					return -59.0889f, 1237.213f, 169.8089f;
				case 4:
					return -63.3856f, 1234.635f, 169.8089f;
				case 5:
					return -65.1247f, 1234.541f, 169.8089f;
				case 6:
					return -64.664f, 1239.896f, 169.8089f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -69.1445f, 1231.214f, 169.315f;
				case 1:
					return -67.1511f, 1233.791f, 169.7785f;
				case 2:
					return -29.9526f, 1232.02f, 171.8965f;
				case 3:
					return -28.0641f, 1228.129f, 172.0005f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -25.0005f, 1250.3f, 171f;
				case 1:
					return -40.0654f, 1247.115f, 171.2f;
				case 2:
					return -24.3279f, 1214.071f, 172.23f;
				case 3:
					return -10.1556f, 1217.935f, 172.325f;
				case 4:
					return -53.4701f, 1225.347f, 169.8f;
				case 5:
					return -45.5631f, 1213.21f, 170.95f;
				case 6:
					return -11.6288f, 1229.373f, 171.8399f;
				case 7:
					return -18.664f, 1239.25f, 171.9962f;
				case 8:
					return -38.5096f, 1216.119f, 172.0419f;
				case 9:
					return -32.3295f, 1213.665f, 172.1012f;
				case 10:
					return -44.9822f, 1243.108f, 170.9895f;
				case 11:
					return -48.7546f, 1234.149f, 170.0224f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -27.9198f, 1219.89f, 172.1965f;
				case 1:
					return -34.0534f, 1221.116f, 172.1965f;
				case 2:
					return -38.0381f, 1231.894f, 171.6965f;
				case 3:
					return -32.49f, 1235.244f, 171.9181f;
				case 4:
					return -23.2956f, 1232.5f, 172.1965f;
				case 5:
					return -20.2697f, 1227.302f, 171.9524f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -26.087f, 1230.829f, 172.038f;
				case 1:
					return -26.999f, 1228.591f, 172.4684f;
				case 2:
					return -29.1613f, 1228.634f, 172.037f;
				case 3:
					return -27.0712f, 1235.367f, 171.956f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -70.469f, 1235.201f, 169.3448f;
				case 1:
					return -60.7599f, 1238.947f, 169.7786f;
				case 2:
					return -66.333f, 1234.696f, 169.779f;
				case 3:
					return -63.065f, 1234.333f, 169.7669f;
				case 4:
					return -64.9454f, 1239.65f, 169.7724f;
				case 5:
					return -67.3141f, 1232.168f, 169.8407f;
				case 6:
					return -69.2746f, 1233.385f, 169.3691f;
				case 7:
					return -65.4173f, 1221.93f, 169.8496f;
				case 8:
					return -5.2719f, 1234.409f, 172.1912f;
				case 9:
					return -51.4867f, 1222.796f, 170.1729f;
				case 10:
					return -10.0786f, 1220.014f, 172.8353f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -21.6306f, 1202.639f, 172.4661f;
				case 1:
					return -21.6032f, 1202.85f, 173.266f;
				case 2:
					return -18.0873f, 1212.031f, 172.556f;
				case 3:
					return -18.2533f, 1211.986f, 173.3724f;
				case 4:
					return -26.1533f, 1231.526f, 172.0271f;
				case 5:
					return -26.6633f, 1228.887f, 172.0427f;
				case 6:
					return -29.447f, 1228.442f, 171.964f;
				case 7:
					return -21.4106f, 1201.459f, 172.615f;
				case 8:
					return -61.936f, 1238.252f, 169.7717f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 109.2713f;
				case 1:
					return 188.2691f;
				case 2:
					return 188.2691f;
				case 3:
					return 24.9963f;
				case 4:
					return 439.2704f;
				case 5:
					return -39.8164f;
				case 6:
					return 30.1836f;
				case 7:
					return 78.1836f;
				case 8:
					return 160.1836f;
				case 9:
					return 50.1836f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 374.5135f;
				case 1:
					return 408.5135f;
				case 2:
					return -401.4865f;
				case 3:
					return -63.4865f;
				case 4:
					return -251.4865f;
				case 5:
					return -91.5135f;
				case 6:
					return 12.513f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -69.926f;
				case 1:
					return 308.1905f;
				case 2:
					return -60.1845f;
				case 3:
					return 109.313f;
				case 4:
					return 284.5135f;
				case 5:
					return 352.5135f;
				case 6:
					return 278.514f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 18f;
				case 1:
					return 39.8424f;
				case 2:
					return -27.4865f;
				case 3:
					return -359.4865f;
				case 4:
					return -421.4865f;
				case 5:
					return -67.2639f;
				case 6:
					return -171.2639f;
				case 7:
					return -139.2639f;
				case 8:
					return -227.2639f;
				case 9:
					return 162.7361f;
				case 10:
					return 86.7361f;
				case 11:
					return 106.7361f;
				case 12:
					return 30.7361f;
				case 13:
					return 48.7361f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -149.76f;
				case 1:
					return 126.514f;
				case 2:
					return 304.5135f;
				case 3:
					return 352.5135f;
				case 4:
					return 236.514f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 152f;
				case 1:
					return 185.798f;
				case 2:
					return 9f;
				case 3:
					return 29.798f;
				case 4:
					return -23f;
				case 5:
					return -32.202f;
				case 6:
					return 142.945f;
				case 7:
					return 148.945f;
				case 8:
					return -25.6459f;
				case 9:
					return -23.6459f;
				case 10:
					return 255.1421f;
				case 11:
					return 267.1421f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 108.8285f;
				case 1:
					return 120f;
				case 2:
					return 99.265f;
				case 3:
					return 209.6366f;
				case 4:
					return 207.6366f;
				case 5:
					return 121.6366f;
				case 6:
					return 29.6366f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 98f;
				case 1:
					return 4f;
				case 2:
					return -120f;
				case 3:
					return 373f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 22.6873f;
				case 1:
					return 22.6873f;
				case 2:
					return 22.6873f;
				case 3:
					return 22.6873f;
				case 4:
					return 22.6873f;
				case 5:
					return 22.6873f;
				case 6:
					return 142.945f;
				case 7:
					return 128.945f;
				case 8:
					return -25.6459f;
				case 9:
					return -1.6698f;
				case 10:
					return 227.1421f;
				case 11:
					return 243.1421f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0.1071f;
				case 1:
					return -25.8929f;
				case 2:
					return -109.8929f;
				case 3:
					return -167.8929f;
				case 4:
					return -229.8929f;
				case 5:
					return 90.1071f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 92.16f;
				case 1:
					return 50.4f;
				case 2:
					return -41.76f;
				case 3:
					return -12.24f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -236.5283f;
				case 1:
					return 100.41f;
				case 2:
					return -156.85f;
				case 3:
					return -272.05f;
				case 4:
					return 133.95f;
				case 5:
					return 121.1587f;
				case 6:
					return 123.1587f;
				case 7:
					return 92.6148f;
				case 8:
					return -25.3852f;
				case 9:
					return 148.6148f;
				case 10:
					return 160.6148f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 65.5104f;
				case 1:
					return 3.5104f;
				case 2:
					return 1f;
				case 3:
					return 5f;
				case 4:
					return 46.8542f;
				case 5:
					return 46.8542f;
				case 6:
					return 46.854f;
				case 7:
					return -173.52f;
				case 8:
					return 25.32f;
			}
			break;
	}
	return 0f;
}

Vector3 func_164(int iParam0, int iParam1)
{
	return func_162(iParam0, iParam1);
}

float func_165(int iParam0, int iParam1)
{
	return func_163(iParam0, iParam1);
}

void func_166()
{
	vLocal_833 = { -59.11848f, 1239.897f, 171.3898f };
}

bool func_167(int iParam0, vector3 vParam1, var uParam4, float fParam5, int iParam6, int iParam7)
{
	if (!does_entity_exist(*uParam4))
	{
		*uParam4 = func_324(iParam0, vParam1, iParam6, iParam7);
	}
	if (does_entity_exist(*uParam4))
	{
		return func_325(*uParam4, fParam5);
	}
	return false;
}

void func_168(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_326(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, uParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_169(var uParam0, bool bParam1)
{
	*uParam0 = add_cover_point(uParam0->f_1, uParam0->f_4, uParam0->f_6, uParam0->f_5, uParam0->f_7, bParam1);
}

bool func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Local_29.f_4 > 0)
			{
				return true;
			}
			break;
		case 1:
			if (Local_29.f_4 >= 0)
			{
				return true;
			}
			break;
		case 2:
			if (Local_29.f_4 >= 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_171(int iParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = func_327(iParam0);
	}
	func_329(Local_551[iParam0], func_328(iParam0), sParam1, bParam2);
}

void func_172(int iParam0)
{
	Global_1898091 = (&Global_1898091 - (Global_1898091 && iParam0));
}

bool func_173(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

Vector3 func_174(int iParam0, bool bParam1)
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
	if (get_distance_between_coords(vVar0, _0xf70f00013a62f866(func_330(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_175(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_176(int iParam0, bool bParam1)
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
	if (func_173(&(iParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_252(&(iParam0->f_5), 262144);
	}
	else
	{
		func_331(&(iParam0->f_5), 262144);
	}
	set_ambient_zone_state(sVar0, bParam1, true);
	set_ambient_zone_state_persistent(sVar0, true, true);
}

void func_177(var uParam0)
{
	func_70(uParam0, (func_69(uParam0) - 6f));
	func_332(uParam0, 1);
}

void func_178(var uParam0)
{
	func_333(uParam0, 0);
	func_66(uParam0, 0);
	func_180(uParam0, 1);
	func_334(uParam0, 1);
	func_335(uParam0, 0);
	func_336(uParam0, 1);
	func_337(uParam0, 1, 1, 1);
}

void func_179(var uParam0)
{
	func_338(uParam0, 1);
	func_65(uParam0, 1);
	func_339(uParam0, 1);
}

void func_180(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 256);
	}
	else
	{
		func_190(&(uParam0->f_1), 256);
	}
}

void func_181(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_182(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_183(char* sParam0)
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

void func_184(int iParam0)
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

void func_185(int iParam0)
{
}

void func_186(int iParam0)
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

void func_187(int iParam0)
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
		Var1 = { func_291(953441746, iVar0) };
		stat_id_get_int(&Var1, &(iParam0->f_200));
	}
}

void func_188(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_340(uParam0, iParam1, sParam2))
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

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_191(int iParam0)
{
	iVar0 = func_341(iParam0, 1);
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

void func_192(int iParam0)
{
	iVar0 = func_341(iParam0, 1);
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

void func_193()
{
	func_192(-939420910);
	func_192(-1187950766);
	func_192(356365161);
	func_192(753127042);
	func_192(-2038424081);
	func_192(1884271742);
	func_192(459290420);
}

void func_194()
{
	func_192(704802028);
	func_192(588987611);
	func_192(2008888900);
	func_192(1649996811);
	func_192(227918160);
	func_192(168171957);
	func_192(1193080109);
	func_192(-491981251);
	func_192(-639037538);
	func_192(-618620429);
}

bool func_195(int iParam0)
{
	iVar0 = func_341(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_196(int iParam0)
{
	iVar0 = func_268(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_198(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	return func_342((*Global_1347702)[iParam0]->f_15);
}

bool func_199(int iParam0)
{
	if (func_343((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_344(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_345(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

int func_200(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			func_346(uParam1);
			func_347(uParam2);
			if (is_string_null_or_empty(sParam3) || func_348(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!func_349(uParam1))
			{
				return 0;
			}
			if (!func_350(uParam2))
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

int func_201(int iParam0)
{
	return func_351(&(Local_551[iParam0]), func_328(iParam0));
}

int func_202(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_352(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_203(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_204(int iParam0, bool bParam1, bool bParam2)
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

bool func_205(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_1(iParam0, iParam1);
}

bool func_206(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_207(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_250(&(uParam0->f_7), 1, 0);
	}
	else
	{
		func_249(&(uParam0->f_7), 1);
	}
}

void func_208(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	if (!func_205(iParam0, 0, 1))
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
	func_263(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_209(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_205(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 347599949:
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case 50483426:
			if (func_211())
			{
				return "0357_G_M_M_UniDuster_02_WHITE_01";
			}
			else
			{
				return "0361_G_M_M_UniDuster_03_WHITE_01";
			}
			break;
		case 0:
			return "";
	}
	return "0355_G_M_M_UniDuster_01_WHITE_01";
}

bool func_211()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_212()
{
	if ((iVar783 < 0 || iVar783 + 1 < 0) || iVar784 < 0)
	{
		return;
	}
	if (func_205(Local_286[iVar783]->f_5, 0, 1))
	{
		func_188(&(Local_29.f_38), Local_286[iVar783]->f_5, "ODR_PED4", 1);
		iVar1 = -258459266;
		vVar2 = { get_entity_coords(Local_286[iVar783]->f_5, true, false) };
		fVar5 = get_entity_heading(Local_286[iVar783]->f_5);
		uVar0 = create_scenario_point(iVar1, vVar2, fVar5, 0, 0, 1);
		_task_start_scenario_in_place_2(Local_286[iVar783]->f_5, uVar0, 0, 0, false, -1f, false);
		set_ped_combat_range(Local_286[iVar783]->f_5, 0);
	}
	if (func_205((Local_286[iVar783 + 1])->f_5, 0, 1))
	{
		func_188(&(Local_29.f_38), (Local_286[iVar783 + 1])->f_5, "ODR_PED5", 1);
		iVar1 = 1978275899;
		vVar2 = { get_entity_coords((Local_286[iVar783 + 1])->f_5, true, false) };
		fVar5 = get_entity_heading((Local_286[iVar783 + 1])->f_5);
		uVar0 = create_scenario_point(iVar1, vVar2, fVar5, 0, 0, 1);
		_task_start_scenario_in_place_2((Local_286[iVar783 + 1])->f_5, uVar0, 0, 0, false, -1f, false);
		set_ped_combat_range((Local_286[iVar783 + 1])->f_5, 0);
	}
}

bool func_213(int iParam0)
{
	if (func_353(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_214(int iParam0, int iParam1)
{
	func_354(iParam0, 1, 0, 0, 1, 0, 0, 0);
}

bool func_215(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_355(uParam2, 1, iVar0);
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
			if (func_356(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_357(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_358(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_359(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_360(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_361(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_357(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_362(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_363(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_357(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_364(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_357(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_365(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_365(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_357(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_366(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_367(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_368(uParam2, 4000))
				{
					if ((func_369(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_370(uParam2, iParam0)) && func_371(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_357(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_369(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_370(uParam2, iParam0)) && func_371(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_372(iParam0, Global_1935630->f_41))
							{
								func_373();
								*uParam3 = 2;
								func_357(iParam0, uParam2, *uParam3);
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
						if (func_372(iParam0, Global_1935630->f_41))
						{
							func_373();
							*uParam3 = 2;
							func_357(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_374(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_217() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_373();
						*uParam3 = 2;
						func_357(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_375())
					{
						if (func_372(iParam0, Global_1935630->f_42))
						{
							func_373();
							*uParam3 = 2;
							func_357(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_376(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_357(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_377(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_378(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_357(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_379(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_380(uParam2, 4000))
				{
					if (func_381(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_357(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_382(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_357(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_383(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_357(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_216(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < func_384(1))
	{
		iVar1 = func_385(iVar0);
		if (func_386(iVar1))
		{
			iVar2 = func_387(iVar1);
			if (does_entity_exist(iVar2))
			{
				if (does_entity_exist(uParam1->f_5))
				{
					if (func_205(iVar2, 0, 1))
					{
						if (has_entity_been_damaged_by_entity(uParam1->f_5, iVar2, 1, 1))
						{
							return true;
						}
					}
					if (func_205(uParam1->f_5, 0, 1))
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

int func_217()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_218(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
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
	if (func_388(vParam1))
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

float func_219(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_220(var uParam0, int iParam1, int iParam2)
{
	func_389(uParam0, iParam1, iParam2);
}

void func_221(bool bParam0)
{
	if (func_97(134217728))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_205(Local_431[iVar0]->f_5, 0, 1))
		{
			func_218(Local_431[iVar0]->f_5, Global_36, 2, 1, 1);
			open_sequence_task(&iVar1);
			if (bParam0)
			{
			}
			_task_smart_flee_style_ped(0, Global_35, 1, 0, 1000f, 6000, 0);
			_task_smart_flee_style_ped(0, Global_35, 3, 0, 1000f, -1, 0);
			func_263(Local_431[iVar0]->f_5, &iVar1, (0.25f * IntToFloat(iVar0)), (0.25f * IntToFloat(iVar0)), 1, 1);
		}
		iVar0++;
	}
	func_52(134217728);
}

void func_222()
{
	func_390();
}

void func_223(var uParam0, bool bParam1)
{
	if (bParam1 || !func_391(uParam0))
	{
		func_258(uParam0);
	}
}

void func_224(int iParam0, int iParam1)
{
	if (iParam1 == iParam0->f_3)
	{
	}
	iParam0->f_3 = iParam1;
}

bool func_225(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return false;
	}
	return true;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_205((*iParam0)[iVar0]->f_5, 0, 1))
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

void func_227()
{
	if (func_97(16384))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_392(iVar0);
		iVar0++;
	}
}

void func_228()
{
	if (func_393() == 0 && !func_97(2097152))
	{
		trigger_music_event("HIDEOUT_SPC_CABIN");
		func_52(2097152);
	}
	if (!func_97(524288))
	{
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			if (!is_ped_fleeing(Local_286[iVar0]->f_5))
			{
				if (func_205(Local_286[iVar0]->f_5, 0, 1))
				{
					return;
				}
			}
			iVar0++;
		}
		trigger_music_event("HIDEOUT_SPC_ALL_DEAD");
		func_52(524288);
	}
}

bool func_229()
{
	if (!func_394())
	{
		func_181(&(Local_29.f_155), 18f);
	}
	else
	{
		func_181(&(Local_29.f_155), 25f);
	}
	if (!func_395(&Local_29, &Local_286, 30f, 1))
	{
		func_67(&(Local_29.f_155), 0);
	}
	else
	{
		func_67(&(Local_29.f_155), 1);
	}
	iVar0 = 0;
	iVar1 = (Local_29.f_199 - 1);
	func_396(&(Local_29.f_155), 0);
	func_397(&(Local_29.f_155), 0);
	func_180(&(Local_29.f_155), 0);
	Local_29.f_190 = func_398();
	func_396(&(Local_29.f_155), 1);
	func_397(&(Local_29.f_155), 1);
	func_180(&(Local_29.f_155), 1);
	if (Local_29.f_190 == -1)
	{
		Local_29.f_190 = func_399();
	}
	if (Local_29.f_190 == -1)
	{
		if (func_91(&Local_29, &Local_286, Local_29.f_199, iVar0, iVar1))
		{
			Local_29.f_190 = func_401(&Local_286, func_400(&(Local_29.f_155)), 1);
		}
	}
	if (Local_29.f_190 > -1)
	{
		if (func_402("ROB_11"))
		{
			func_403("ROB_11", 0, 0);
		}
		else if (func_402("ROB_12"))
		{
			func_403("ROB_12", 0, 0);
		}
		else if (func_402("ROB_21"))
		{
			func_403("ROB_21", 0, 0);
		}
		else if (func_402("ROB_22"))
		{
			func_403("ROB_22", 0, 0);
		}
		if (func_402("GUARDTALK"))
		{
			func_403("GUARDTALK", 0, 0);
		}
		if (func_402("SIX_COUPLE"))
		{
			func_403("SIX_COUPLE", 0, 0);
		}
		func_404(1, 1, 0);
		func_220(Local_286[Local_29.f_190], 831283580, 0);
		Local_29.f_192 = Local_286[Local_29.f_190]->f_5;
		if (Local_29.f_192 == Local_286[4]->f_5)
		{
			func_405();
		}
		func_218(Local_29.f_192, Global_36, 3, 1, 1);
		func_67(&(Local_29.f_155), 1);
		return true;
	}
	return false;
}

bool func_230()
{
	if (!func_205(Local_286[Local_29.f_190]->f_5, 0, 0))
	{
		if (iVar749 < 2)
		{
			if (!func_406())
			{
				Local_29.f_190 = -1;
				Local_29.f_192 = 0;
				func_407(0);
				func_224(&Local_29, 0);
				return false;
			}
		}
	}
	if (Local_29.f_190 < 0)
	{
	}
	else
	{
		switch (iVar749)
		{
			case 0:
				if (func_205(Local_286[Local_29.f_190]->f_5, 0, 0))
				{
					func_408(Local_29.f_205);
					Local_29.f_192 = Local_286[Local_29.f_190]->f_5;
					if (Local_29.f_192 == Local_286[4]->f_5 && !is_entity_dead(Local_286[4]->f_5))
					{
						if (!func_253(8192))
						{
							return false;
						}
						else
						{
							iLocal_782 = 1;
							func_407(1);
							return false;
						}
					}
					task_look_at_entity(Local_29.f_192, Global_35, 7500, 0, 51, 0);
					_0xe7fa07624574b79a(Local_29.f_192, Global_35, 3, 2, 3f, 1, 0, 0, 0);
					func_218(Local_29.f_192, Global_36, 3, 1, 1);
					func_407(1);
				}
				break;
			case 1:
				if ((((func_409(Local_29.f_192, &iLocal_782, -1, 0) && !is_ped_getting_up(Local_29.f_192)) || _is_ped_lassoed(Local_29.f_192)) || func_406()) || func_97(33554432))
				{
					iLocal_782 = 0;
					func_410((*Global_1347702)[63]->f_15, 1);
					func_220(Local_286[Local_29.f_190], 831283580, 0);
					if (_is_ped_lassoed(Local_29.f_192))
					{
						bVar0 = true;
					}
					else
					{
						bVar0 = func_411();
					}
					if (bVar0)
					{
						func_407(2);
					}
				}
				break;
			case 2:
				if (func_412())
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_231(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_232()
{
	switch (iVar827)
	{
		case 0:
			func_413();
			if (func_97(16384))
			{
				func_414(&Local_29, &Local_286, 0, (Local_29.f_199 - 1), 1f, 2f);
			}
			else
			{
				func_414(&Local_29, &Local_286, 4, 9, 1f, 2f);
			}
			iLocal_829 = 1;
			break;
		case 1:
			if (!func_391(&uLocal_795))
			{
				func_221(1);
				func_223(&uLocal_795, 0);
			}
			else if (func_415(&uLocal_795, 0f))
			{
				iLocal_829 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_233()
{
	if (!func_173(&(Local_29.f_5), 2048))
	{
		if (func_416(0, 1, 0, 0))
		{
			func_252(&(Local_29.f_5), 2048);
		}
	}
}

bool func_234()
{
	switch (iVar751)
	{
		case 0:
			func_417();
			func_418(1);
			break;
		case 1:
			func_418(2);
			break;
		case 2:
			if (func_393() < 3)
			{
				func_419();
				if (func_205(Local_286[0]->f_5, 0, 1))
				{
					func_220(Local_286[0], 831283580, 0);
				}
				func_418(3);
			}
			break;
		case 3:
			func_418(4);
			break;
		case 4:
			if (iVar797 > 1)
			{
				if (func_97(16384))
				{
					if (func_393() == 0)
					{
						func_52(64);
						func_418(5);
					}
				}
				else if (func_420(&Local_29, &Local_286, func_393()) || func_226(&Local_286, Local_29.f_198, Local_29.f_198) <= 0)
				{
					func_52(64);
					func_418(5);
				}
			}
			else
			{
				iVar0 = 4;
				while (iVar0 <= 9)
				{
					if (func_205(Local_286[iVar0]->f_5, 0, 1))
					{
						func_220(Local_286[iVar0], 831283580, 0);
						_0x8acc0506743a8a5c(Local_286[iVar0]->f_5, 1307780291, 1, -1082130432);
						open_sequence_task(&iVar1);
						task_go_to_coord_while_aiming_at_entity_using_combat_style(0, -69.8029f, 1231.87f, 169.2659f, Global_35, 3f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 66);
						func_263(Local_286[iVar0]->f_5, &iVar1, 0, 0, 1, 1);
					}
					iVar0++;
				}
				func_52(64);
				func_418(5);
			}
			break;
		case 5:
			return true;
	}
	if (!func_97(64))
	{
		if (func_97(16))
		{
			func_52(64);
		}
	}
	if (!func_97(512))
	{
		if (func_97(128))
		{
			if (func_421(&Local_29, &uLocal_615, &Local_286, iVar785, iVar786))
			{
				func_52(512);
			}
		}
	}
	return false;
}

bool func_235()
{
	return true;
}

bool func_236(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_422(iParam1, iParam0))
	{
		return false;
	}
	if (!func_173(&(iParam0->f_5), 256))
	{
		set_ped_config_flag(Global_35, 141, false);
		func_423(iParam0);
		func_424(iParam0);
		if (bParam4)
		{
			func_425(iParam0->f_205, bParam3, 0);
		}
		func_176(iParam0, 0);
		func_252(&(iParam0->f_5), 256);
		func_252(&(iParam0->f_5), 8);
	}
	return true;
}

bool func_237(int iParam0)
{
	if (!func_173(&(iParam0->f_5), 256) && !func_426())
	{
		iVar0 = func_36(iParam0->f_205);
		if (func_268(iVar0) == 3 || func_268(iVar0) == 4)
		{
			func_427(iParam0->f_205);
			func_252(&(iParam0->f_5), 4096);
		}
		func_428("H_HIDE_FAIL", 7500, 0, 1, 0, 0, -1, -1, 0);
		func_252(&(iParam0->f_5), 256);
		return true;
	}
	return false;
}

void func_238(bool bParam0)
{
	Local_29 = 7;
	func_429(&uLocal_765);
	if (bParam0)
	{
		remove_all_cover_blocking_areas();
		func_430(&Local_286, &Local_29, &uLocal_540, get_id_of_this_thread(), "SIXPT");
	}
}

void func_239()
{
	iVar0 = iVar787;
	while (iVar0 <= iVar784)
	{
		if (!does_blip_exist(Local_286[iVar0]->f_6))
		{
			if (func_205(Local_286[iVar0]->f_5, 0, 1))
			{
				if (is_ped_in_combat(Local_286[iVar0]->f_5, 0))
				{
					func_220(Local_286[iVar0], 831283580, 0);
					set_bit(&uLocal_830, iVar0);
				}
				else if (Local_29.f_3 > 0)
				{
					if (!is_bit_set(iVar828, iVar0))
					{
						if (func_431(Local_286[iVar0]->f_5))
						{
							func_218(Local_286[iVar0]->f_5, Global_36, 3, 1, 1);
							task_combat_hated_targets_around_ped(Local_286[iVar0]->f_5, 100f, 0, 66);
							set_bit(&uLocal_830, iVar0);
						}
						else if (iVar1 < 5)
						{
							if (func_432(Local_286[iVar0]->f_5, Global_35, 1, 20f, 0))
							{
								task_combat_hated_targets_around_ped(Local_286[iVar0]->f_5, 100f, 0, 66);
								set_bit(&uLocal_830, iVar0);
							}
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_240()
{
	if (func_433(iVar823) > 0.75f)
	{
		return true;
	}
	if (func_434(Global_35, -68.2114f, 1234.923f, 169.8118f, 50f, 1, 1))
	{
		if (func_435(iVar823, 23))
		{
			return true;
		}
	}
	if (is_entity_in_volume(Global_35, Local_15.f_3, true, 0))
	{
		return true;
	}
	return false;
}

void func_241()
{
	func_52(33554432);
	if (Local_29.f_3 <= 8 && !func_422(&Local_286, &Local_29))
	{
		func_52(1048576);
	}
	_0xf1c03a5352243a30(Local_286[0]->f_5);
	task_combat_hated_targets_around_ped(Local_286[0]->f_5, 100f, 0, 66);
	func_436(0);
	_0xf1c03a5352243a30(Local_286[1]->f_5);
	task_combat_hated_targets_around_ped(Local_286[1]->f_5, 100f, 0, 66);
	func_437(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (func_205(Local_286[0]->f_5, 0, 1))
	{
		func_438(Local_286[0]->f_5, Local_286[0]->f_5, "OPENS_FIRE", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	func_439(5);
}

void func_242()
{
	func_413();
	iVar0 = iVar787;
	while (iVar0 <= iVar784)
	{
		if (func_440(iVar0, &uLocal_830))
		{
			func_218(Local_286[iVar0]->f_5, Global_36, 3, 1, 1);
			task_combat_hated_targets_around_ped(Local_286[iVar0]->f_5, 100f, 0, 66);
			set_bit(&uLocal_830, iVar0);
		}
		iVar0++;
	}
	if (!func_97(134217728))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_440(iVar0, &uLocal_836))
			{
				func_221(1);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_243(int iParam0, int iParam1)
{
	if (!func_441(iParam1->f_205) && !func_106(&Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (does_entity_exist((*iParam0)[iVar0]->f_5))
			{
				if (has_entity_been_damaged_by_entity((*iParam0)[iVar0]->f_5, Global_35, 1, 1))
				{
					func_442(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_244()
{
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (!func_203(&(Local_286[iVar0]->f_7), 2))
		{
			if (does_entity_exist(Local_286[iVar0]->f_5))
			{
				if (is_ped_dead_or_dying(Local_286[iVar0]->f_5, true))
				{
					iLocal_826 = func_217();
					iLocal_802[iVar819] = iVar0;
					uLocal_821 = iVar819 + 1;
					func_250(&(Local_286[iVar0]->f_7), 2, 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_203(&(Local_431[iVar0]->f_7), 2))
		{
			if (does_entity_exist(Local_431[iVar0]->f_5))
			{
				if (is_ped_dead_or_dying(Local_431[iVar0]->f_5, true))
				{
					iLocal_826 = func_217();
					iLocal_819[iVar820] = iVar0;
					uLocal_822 = iVar820 + 1;
					func_250(&(Local_431[iVar0]->f_7), 2, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_245()
{
	if (!func_173(&(Local_29.f_5), 16384))
	{
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			if (func_205(Local_286[iVar0]->f_5, 0, 1))
			{
				if (!is_ped_fleeing(Local_286[iVar0]->f_5))
				{
					return;
				}
			}
			iVar0++;
		}
		func_252(&(Local_29.f_5), 16384);
	}
}

void func_246()
{
	if (is_entity_in_volume(Global_35, Local_15.f_3, true, 0))
	{
		if (_0x5407b7288d0478b7(Global_35, 0) == 0)
		{
			set_ped_max_move_blend_ratio(Global_35, 1.2f);
		}
	}
	if (bVar830)
	{
		return;
	}
	if (!func_205(Global_35, 0, 1))
	{
		return;
	}
	if (has_ped_got_weapon(Global_35, 1845102363, 0, false))
	{
		func_443(&iLocal_831);
		iLocal_832 = 1;
		return;
	}
	if (is_entity_in_volume(Global_35, Local_15.f_3, true, 0))
	{
		func_444();
	}
}

void func_247(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar1 = func_173(&(iParam1->f_5), 128);
	iVar0 = 0;
	while (iVar0 < iParam1->f_199)
	{
		func_445((*iParam0)[iVar0], iParam1->f_202, iParam2, &(iParam1->f_211), iParam3, bVar1);
		iVar0++;
	}
}

float func_248(int iParam0)
{
	return 18f;
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_250(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

bool func_251(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_446(iParam0, Global_36, 1);
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

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_253(int iParam0)
{
	return (uVar747 && iParam0) != 0;
}

void func_254(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	func_447(Local_551[iParam0], sParam1, iParam2, func_328(iParam0), bParam3);
}

void func_255(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	func_448(Local_551[iParam0], sParam1, iParam2, func_328(iParam0), bParam3);
}

void func_256(int iParam0, char* sParam1, bool bParam2)
{
	func_449(Local_551[iParam0], sParam1, bParam2, func_328(iParam0));
}

void func_257(int iParam0)
{
	func_450(&(Local_551[iParam0]), func_328(iParam0));
}

void func_258(var uParam0)
{
	func_451(uParam0, 0f);
}

void func_259(int iParam0)
{
	iLocal_750 = (uVar747 || iParam0);
}

bool func_260(int iParam0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_452(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
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
	if (func_453(iParam0, fParam5))
	{
		if (func_454(vVar0, iParam0, uParam1, iParam2, uParam3, fParam4, fParam5, bParam7, fParam9))
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

void func_261(int iParam0)
{
	iLocal_755 = iParam0;
}

Vector3 func_262()
{
	return func_164(11, 9);
}

void func_263(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

Vector3 func_264()
{
	if (func_455(Global_36, -37.4308f, 1177.769f, 170.9882f) < func_455(Global_36, -4.3009f, 1259.238f, 172.7533f))
	{
		return func_164(11, 8);
	}
	return func_164(11, 10);
}

Vector3 func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -29.81839f, 1228.388f, 172.554f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.8f;
		default:
			break;
	}
	return -1f;
}

bool func_267(int iParam0)
{
	if (!func_173(&(iParam0->f_5), 1024))
	{
		if (_0xf256a75210c5c0eb(iParam0->f_215, Global_36))
		{
			if (func_205(Global_35, 0, 1))
			{
				func_456(iParam0, 1);
				func_252(&(iParam0->f_5), 1024);
				return true;
			}
		}
	}
	else if (!_0xf256a75210c5c0eb(iParam0->f_215, Global_36) && func_268(Global_1888801[iParam0->f_205]) != 3)
	{
		if (func_205(Global_35, 0, 1))
		{
			func_456(iParam0, 0);
			func_331(&(iParam0->f_5), 1024);
			return true;
		}
	}
	return false;
}

int func_268(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_343(iParam0);
}

void func_269(int iParam0)
{
	if (func_457(302))
	{
		return;
	}
	if (func_28() == iParam0->f_205)
	{
		return;
	}
	if (!func_458(iParam0->f_205))
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
	if (func_173(&(iParam0->f_5), 1024))
	{
		if (func_459(iParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_460(302, &iVar0, &iVar1);
			func_461(iVar0, iVar1);
			func_462(&iVar0, &iVar1);
			func_463("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_270()
{
	return func_51(2);
}

void func_271(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_464(iParam0, 1);
		func_465(2);
	}
	else
	{
		if (func_51(2))
		{
			func_464(iParam0, 0);
		}
		func_172(2);
	}
}

void func_272(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_173(&(iParam0->f_5), 32768))
		{
			_0xde5faa741a781f73(player_id(), 1);
			func_252(&(iParam0->f_5), 32768);
		}
	}
	else if (func_173(&(iParam0->f_5), 32768))
	{
		_0xde5faa741a781f73(player_id(), 0);
		func_331(&(iParam0->f_5), 32768);
	}
}

void func_273(bool bParam0)
{
	if (bParam0)
	{
		if (!func_466())
		{
			func_465(8);
		}
	}
	else if (func_466())
	{
		func_172(8);
	}
}

bool func_274(int iParam0)
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

bool func_275()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_467())
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

char* func_276(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_468(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_470(func_469(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_471(iParam0) || func_472(45))
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

bool func_277(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_278(int iParam0)
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

int func_279(int iParam0)
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

int func_280(int iParam0)
{
	if (!func_277(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_281(int iParam0)
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

char* func_282(int iParam0)
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

bool func_283(int iParam0, int iParam1)
{
	if (!func_473(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_284(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

float func_285(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_286(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_474(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_287(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_288(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_289(int iParam0)
{
	if (func_471(iParam0))
	{
		if (!func_472(45))
		{
			return false;
		}
	}
	iVar0 = func_278(iParam0);
	if (func_475())
	{
		if (!func_128((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_290(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_291(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_292(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_293()
{
	return Global_1894899->f_2;
}

bool func_294(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_295(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_296()
{
	return Global_1310750->f_16037;
}

bool func_297(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_298(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	if (func_476(64) && func_477(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_299(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_300(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_294(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_478(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_301(int iParam0)
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

void func_302(int iParam0)
{
	if (func_213(iParam0) && func_479())
	{
		remove_door_from_system(iParam0);
	}
}

void func_303(int iParam0)
{
	if (func_47(Global_1914319->f_3[iParam0]->f_21) && func_480(Global_1914319->f_3[iParam0]->f_21))
	{
		func_481(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_482(Global_1914319->f_3[iParam0]->f_10, 0);
	func_483(iParam0, 536870912);
	iVar1 = func_484(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_302(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_485(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_486(iParam0, 0);
}

bool func_304(int iParam0)
{
	return func_487(iParam0, 16, 1);
}

bool func_305(int iParam0)
{
	return func_306(iParam0, 32, 1);
}

bool func_306(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_488(iParam0))
		{
			return false;
		}
	}
	func_489(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_307(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(func_490(iParam0)))
	{
		func_491(iParam0, 4, 1);
		func_491(iParam0, 17, 1);
		func_491(iParam0, 1, 1);
		func_491(iParam0, 2, 1);
		return;
	}
	if (!func_386(iParam0))
	{
		return;
	}
	if (func_305(iParam0) && !bParam2)
	{
		return;
	}
	if (func_304(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && does_entity_exist(func_490(iParam0))) && func_492(iParam0) < 5000f) && !is_screen_faded_out())
	{
		return;
	}
	func_491(iParam0, 4, 1);
	func_491(iParam0, 17, 1);
	func_491(iParam0, 1, 1);
	func_491(iParam0, 2, 1);
	func_493(iParam0, func_490(iParam0));
	func_494(iParam0, 1, 1, 1, bParam4);
}

void func_308(int iParam0)
{
	iLocal_749 = (iVar746 - (iVar746 && iParam0));
}

int func_309(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_310(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_311(int iParam0, int iParam1)
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

void func_312(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_313(int iParam0, int iParam1)
{
	iVar0 = func_141(*iParam0);
	iVar1 = func_140(*iParam0);
	if (iParam1 < 1 || iParam1 > func_146(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_314(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_315(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_316(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_317(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_145(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_143(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_140(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_141(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_146(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_318(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return shift_right(func_495(iParam0) & 2147418112, 16);
}

void func_319(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8)
{
	uParam0->f_2 = { vParam1 };
	uParam0->f_5 = { vParam4 };
	*uParam0 = fParam7;
	uParam0->f_1 = fParam8;
}

void func_320(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { func_162(iParam0, iParam1) };
	fVar3 = func_163(iParam0, iParam1);
	Local_286[iParam2]->f_1 = { vVar0 };
	Local_286[iParam2]->f_4 = fVar3;
}

void func_321(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	func_320(iParam0, iVar0, iParam1);
}

void func_322(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_320(iParam0, (iVar0 - iParam1), iVar0);
		iVar0++;
	}
}

void func_323()
{
	fVar1 = 999.9f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		fVar0 = get_distance_between_coords(Global_36, func_162(3, iVar3), false);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			iVar2 = iVar3;
		}
		iVar3 += 2;
	}
	func_320(3, iVar2, iVar783);
	func_320(3, iVar2 + 1, iVar783 + 1);
}

int func_324(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	request_model(iParam0, false);
	if (!has_model_loaded(iParam0))
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iParam4) && iParam5 != 0)
	{
		iParam4 = _find_closest_active_scenario_point_of_type(vParam1, iParam5, 1f, 0, false);
	}
	if (_does_scenario_point_exist(iParam4))
	{
		if (_0xea31f199a73801d3(iParam4))
		{
			iVar1 = _get_scenario_point_entity(iParam4, "CONTAINER");
			if (is_entity_an_object(iVar1))
			{
				iVar0 = get_object_index_from_entity_index(iVar1);
			}
		}
	}
	else
	{
		iVar0 = get_closest_object_of_type(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

bool func_325(int iParam0, float fParam1)
{
	return decor_set_float(iParam0, "fLoot_money", fParam1);
}

void func_326(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!does_entity_exist(*iParam10))
	{
		*iParam10 = func_324(iParam0, vParam1, iParam13, iParam14);
	}
	if (does_entity_exist(*iParam10))
	{
		if (!func_388(vParam4) || !func_388(vParam7))
		{
			func_496(*iParam10, vParam4, vParam7);
		}
		func_497(*iParam10, iParam11, iParam12, iParam15);
	}
}

char* func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE";
		case 2:
			return "PBL_ACTION";
		default:
			break;
	}
	return "";
}

char[] func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@hideout@sixpoint@guard";
		case 1:
			return "script@hideout@sixpoint@cabincover";
		case 2:
			return "script@hideout@sixpoint@cabinstorm";
		default:
			break;
	}
	return "INVALID ANIM SCENE";
}

void func_329(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		*uParam0 = _create_anim_scene(sParam1, 0, sParam2, false, true);
	}
	if (_is_anim_scene_loaded(*uParam0, true, false))
	{
		return;
	}
	load_anim_scene(*uParam0);
}

int func_330(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_331(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_332(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 1);
	}
	else
	{
		func_189(uParam0, 1);
	}
}

void func_333(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 16384);
	}
	else
	{
		func_190(&(uParam0->f_1), 16384);
	}
}

void func_334(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 16);
	}
	else
	{
		func_189(uParam0, 67108864);
		func_189(uParam0, 16);
	}
}

void func_335(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 128);
	}
	else
	{
		func_190(&(uParam0->f_1), 128);
	}
}

void func_336(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 256);
	}
	else
	{
		func_189(uParam0, 256);
	}
}

void func_337(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_190(uParam0, 268435456);
	}
	else
	{
		func_189(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_190(uParam0, 1073741824);
	}
	else
	{
		func_189(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_190(uParam0, 536870912);
	}
	else
	{
		func_189(uParam0, 536870912);
	}
}

void func_338(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 512);
	}
	else
	{
		func_189(uParam0, 512);
	}
}

void func_339(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 8);
	}
	else
	{
		func_189(uParam0, 8);
	}
}

bool func_340(var uParam0, int iParam1, char* sParam2)
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

int func_341(int iParam0, int iParam1)
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

bool func_342(int iParam0)
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
		iVar0 = func_343(iParam0);
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

int func_343(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_498(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_344(int iParam0)
{
	if (func_27(iParam0) == 8)
	{
		return func_133(iParam0);
	}
	return -1;
}

Vector3 func_345(int iParam0)
{
	if (!func_134(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_499(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_346(var uParam0)
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

void func_347(var uParam0)
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

bool func_348(char* sParam0, char* sParam1)
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

bool func_349(var uParam0)
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

bool func_350(var uParam0)
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

int func_351(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 0;
	}
	if (!_is_anim_scene_loaded(iParam0, true, false))
	{
		return 0;
	}
	return 1;
}

void func_352(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_500(iParam1))
		{
			func_501(iParam0, 41788943);
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
			func_502(iParam0, 0, 1);
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
			func_503(iParam0, 0);
			bVar0 = true;
		}
		func_504(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_353(int iParam0)
{
	return iParam0 != 0;
}

void func_354(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_75(iParam0, 0, 0);
	if (func_213(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_505(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_506(iParam0, 1);
			}
			else
			{
				func_507(iParam0, 1);
			}
		}
		else
		{
			func_508(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_509())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_355(var uParam0, bool bParam1, int iParam2)
{
	func_510(iParam2);
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
		uParam0->f_13 = func_511(0);
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
							func_190(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_512(1))
						{
							func_190(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_512(1) || *uParam0 & 8192 != 0))
				{
					func_189(uParam0, 33554432);
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
			if (func_513(uParam0))
			{
				uParam0->f_15 = func_217();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_217() - uParam0->f_15) > 500)
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
	func_514(uParam0);
}

bool func_356(int iParam0, var uParam1)
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
			if (!func_515(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_516(iParam0, iVar2) <= func_517(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_357(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_518(iParam2, 1, 1, 1, 0))
	{
		func_190(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_519(uParam1, 1);
	func_520();
}

bool func_358(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_521(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_522(uParam1);
			if (func_523(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_524(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_519(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_519(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_359(int iParam0, int iParam1, var uParam2)
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
	if (func_525(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_522(uParam2);
		if (func_523(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_524(uParam2)
				{
					func_519(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_360(int iParam0, var uParam1)
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
	if (func_515(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_524(uParam1)
		{
			fVar3 = func_522(uParam1);
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

bool func_361(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_526(bParam1, bParam2, bParam3);
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

bool func_362(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_217();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_363(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_527(uParam2);
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
			if (func_371(uParam2, iParam1))
			{
				func_519(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_364(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_528(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_371(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_519(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_365(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_529(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_519(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_519(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_530(iParam1, vVar0, vVar4))
					{
						func_519(uParam2, 1);
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
					func_519(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_530(iParam1, vVar0, vVar7))
					{
						func_519(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_366(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_515(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_531(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_532(&(Global_1935630->f_34[iVar0])))
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
			if (func_533(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_534(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_535(uParam1, iParam0, fVar1, iVar0))
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

bool func_367(int iParam0, var uParam1)
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

bool func_368(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_217();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_369(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_536(iVar0, &iVar2))
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
	if (func_537(iVar0, iParam0))
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

int func_370(var uParam0, int iParam1)
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

bool func_371(var uParam0, int iParam1)
{
	if (func_538(uParam0))
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

bool func_372(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_219(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_373()
{
}

bool func_374(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_539(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_217();
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
						if (func_446(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_217();
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

bool func_375()
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
	if ((func_217() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_376(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_517(uParam0);
	if (uParam0->f_12 > func_69(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_540(iParam1);
	iVar1 = func_541(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_377(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_542(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_378(int iParam0, var uParam1)
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
		if (func_543(iParam0, uParam1, 1))
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
					if (!func_544(uParam1, iParam0))
					{
						if (func_446(iVar4, Global_36, 1) < 7f)
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

bool func_379(int iParam0, var uParam1)
{
	if (!func_545(0))
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

bool func_380(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_217();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_381(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_382(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_217();
	}
	else if (func_217() - uParam1->f_4) > func_546(uParam1)
	{
		return func_547(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_383(var uParam0, int iParam1)
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

int func_384(bool bParam0)
{
	if (bParam0)
	{
		return func_548(Global_1359489->f_4);
	}
	get_group_size(func_549(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_549(), iVar3);
		if (func_550(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_385(int iParam0)
{
	if (!func_488(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_384(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

bool func_386(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_387(int iParam0)
{
	if (func_386(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_388(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_389(var uParam0, int iParam1, int iParam2)
{
	if (!func_205(uParam0->f_5, 0, 0) || decor_exist_on(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (does_blip_exist(uParam0->f_6))
	{
		func_443(&(uParam0->f_6));
	}
	uParam0->f_6 = _blip_add_for_entity(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		_blip_set_modifier(uParam0->f_6, iParam2);
	}
}

void func_390()
{
	_0x88544c0e3291dcae(1);
	func_520();
}

bool func_391(bool bParam0)
{
	return func_551(*bParam0, 1);
}

void func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_552();
			break;
		case 1:
			if (func_94(&Local_29, 4) && Local_29.f_4 >= 0)
			{
				func_553();
			}
			break;
		case 2:
			if (func_94(&Local_29, 4) && Local_29.f_4 >= 0)
			{
				func_554();
			}
			break;
	}
}

int func_393()
{
	iVar0 = Local_29.f_198;
	if (!func_97(16384) && func_205(Local_286[0]->f_5, 0, 1))
	{
		iVar0 = (iVar0 - 1);
		if (iVar797 <= 1)
		{
			if (func_205(Local_286[1]->f_5, 0, 1))
			{
				iVar0 = (iVar0 - 1);
			}
			if (func_205(Local_286[2]->f_5, 0, 1))
			{
				iVar0 = (iVar0 - 1);
			}
			if (func_205(Local_286[3]->f_5, 0, 1))
			{
				iVar0 = (iVar0 - 1);
			}
		}
	}
	return iVar0;
}

bool func_394()
{
	if (is_entity_in_volume(Global_35, Local_15.f_1, true, 0) || is_entity_in_volume(Global_35, Local_15, true, 0))
	{
		return true;
	}
	return false;
}

bool func_395(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < iParam0->f_199)
	{
		if (!bParam3 || func_205((*iParam1)[iVar1]->f_5, 0, 1))
		{
			fVar0 = func_446((*iParam1)[iVar1]->f_5, Global_36, 1);
			if (fVar0 < fParam2)
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_396(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 2);
	}
	else
	{
		func_190(&(uParam0->f_1), 2);
	}
}

void func_397(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 4);
	}
	else
	{
		func_190(&(uParam0->f_1), 4);
	}
}

int func_398()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_97(16384))
		{
			if (Local_29.f_191 >= iVar284 || Local_29.f_191 < 4)
			{
				Local_29.f_191 = 4;
			}
		}
		else if (Local_29.f_191 >= Local_29.f_199 || Local_29.f_191 < 0)
		{
			Local_29.f_191 = 0;
		}
		if (does_entity_exist(Local_286[Local_29.f_191]->f_5))
		{
			if (func_555(Local_286[Local_29.f_191]->f_5, &(Local_29.f_155), &(Local_29.f_183), 0))
			{
				if (!func_97(16384))
				{
					if (func_556(Local_29.f_183, 1, 1, 1, 0))
					{
						if (iVar0 >= 6 && iVar0 <= 9)
						{
							if (func_446(Local_286[Local_29.f_191]->f_5, Global_36, 0) > 20f)
							{
								Local_29.f_183 = 0;
								Local_29.f_191++;
							}
							else if (Local_29.f_183 == 262144)
							{
								if (func_446(Local_286[Local_29.f_191]->f_5, Global_36, 0) > 20f)
								{
									Local_29.f_183 = 0;
									Local_29.f_191++;
								}
								else
								{
									return Local_29.f_191;
									Local_29.f_191++;
								}
								iVar0++;
								return -1;
							}
						}
					}
				}
			}
		}
	}
}

int func_399()
{
	iVar0 = iVar787;
	while (iVar0 <= iVar784)
	{
		if (func_205(Local_286[iVar0]->f_5, 0, 1))
		{
			vVar2 = { get_entity_coords(Local_286[iVar0]->f_5, true, false) };
			iVar1 = 0;
			while (iVar1 < iVar819)
			{
				if (func_557(Local_286[iVar0]->f_5, Local_286[&iLocal_802[iVar1]]->f_5, vVar2, 0))
				{
					uLocal_827 = Local_286[&iLocal_802[iVar1]]->f_5;
					return iVar0;
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < iVar820)
			{
				if (func_557(Local_286[iVar0]->f_5, Local_431[&iLocal_819[iVar1]]->f_5, vVar2, 0))
				{
					uLocal_827 = Local_286[&iLocal_819[iVar1]]->f_5;
					return iVar0;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_400(var uParam0)
{
	return uParam0->f_10;
}

int func_401(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!bParam2 || func_205((*iParam0)[iVar0]->f_5, 0, 1))
		{
			if ((*iParam0)[iVar0]->f_5 == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_402(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_403(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_404(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_405()
{
	if (is_entity_dead(Local_286[4]->f_5))
	{
		func_558(0);
		return;
	}
	switch (iVar752)
	{
		case 1:
			func_558(0);
			break;
		case 6:
		case 8:
			func_560(0, func_559(12));
			func_561(12);
			break;
		default:
			vVar1 = { func_562(Global_35, 1065353216) };
			iVar0 = func_563(Local_286[4]->f_5, vVar1, 1060437492);
			if (iVar0 == 3)
			{
				func_560(0, func_559(9));
				func_561(9);
			}
			else if (iVar0 == 2)
			{
				func_560(0, func_559(10));
				func_561(10);
			}
			else if (iVar0 == 0)
			{
				func_560(0, func_559(11));
				func_561(11);
			}
			break;
	}
}

bool func_406()
{
	if ((Local_29.f_183 == 256 || Local_29.f_183 == 2) || Local_29.f_183 == 4)
	{
		return true;
	}
	func_564(&(Local_29.f_155), 0);
	iVar0 = iVar787;
	while (iVar0 <= iVar784)
	{
		if (iVar0 != Local_29.f_190)
		{
			if (func_205(Local_286[iVar0]->f_5, 0, 1))
			{
				if (func_215(Local_286[iVar0]->f_5, 0, &(Local_29.f_155), &(Local_29.f_183), 0, 0))
				{
					if (!func_205(Local_286[Local_29.f_190]->f_5, 0, 1))
					{
						Local_29.f_190 = iVar0;
						Local_29.f_192 = Local_286[iVar0]->f_5;
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	func_564(&(Local_29.f_155), 1);
	if (func_565())
	{
		return true;
	}
	return false;
}

void func_407(int iParam0)
{
	iLocal_751 = iParam0;
}

void func_408(int iParam0)
{
	if (!func_43(iParam0))
	{
		return;
	}
}

bool func_409(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!*iParam1)
	{
		open_sequence_task(&iVar0);
		task_turn_ped_to_face_entity(0, Global_35, 0, 3f, 0.55f, -1082130432);
		task_turn_ped_to_face_entity(0, Global_35, iParam2, 2f, 0.2f, -1082130432);
		close_sequence_task(iVar0);
		if (bParam3)
		{
			_task_perform_sequence_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			task_perform_sequence(iParam0, iVar0);
		}
		clear_sequence_task(&iVar0);
		*iParam1 = 1;
	}
	if ((get_script_task_status(iParam0, 242628503, true) == 1 && get_sequence_progress(iParam0) == 1) || get_script_task_status(iParam0, 242628503, true) != 1)
	{
		return true;
	}
	return false;
}

void func_410(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_566(iParam0, iParam1);
}

int func_411()
{
	iVar1 = func_567();
	func_218(Local_29.f_192, Global_36, 3, 1, 1);
	if (Local_29.f_192 == Local_286[4]->f_5)
	{
		if (!func_253(8192))
		{
			return 0;
		}
	}
	open_sequence_task(&iVar0);
	if (Local_29.f_192 != Local_286[0]->f_5 && Local_29.f_192 != Local_286[1]->f_5)
	{
		if (Local_29.f_192 != Local_286[4]->f_5)
		{
			task_turn_ped_to_face_entity(0, Global_35, 2000, -1f, -1f, -1082130432);
		}
		if (iVar1 > -1)
		{
			task_follow_nav_mesh_to_coord(0, func_162(9, iVar1), 3f, 20000, 0.25f, 0, func_163(9, iVar1));
			task_follow_nav_mesh_to_coord(0, func_162(9, (iVar1 + 2 % 6)), 2f, 20000, 0.25f, 0, func_163(9, (iVar1 + 1 % 6)));
			if (!func_568())
			{
				task_follow_nav_mesh_to_coord(0, func_162(9, (iVar1 + 4 % 6)), 2f, 20000, 0.25f, 0, func_163(9, (iVar1 + 2 % 6)));
			}
		}
		else
		{
			task_swap_weapon(0, 1, 0, 0, 0);
			func_569(0, Global_35, 1500);
			task_aim_gun_at_entity(0, Global_35, 2000, 0, 1);
		}
	}
	task_combat_hated_targets_around_ped(0, 100f, 0, 66);
	func_263(Local_29.f_192, &iVar0, 0, 0, 1, 1);
	if (func_568())
	{
		func_438(Local_29.f_192, Local_29.f_192, "ARRIVAL_COMBAT_TRAP_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		func_438(Local_29.f_192, Local_29.f_192, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	return 1;
}

bool func_412()
{
	if (func_97(16384))
	{
		return true;
	}
	if (func_416(-6f, 1, 0, 0))
	{
		return true;
	}
	if (((Local_29.f_183 == 256 || Local_29.f_183 == 4) || func_565()) || is_entity_in_volume(Global_35, Local_15.f_7, true, 0))
	{
		return true;
	}
	return false;
}

void func_413()
{
	func_570();
}

void func_414(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5)
{
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (does_entity_exist(iParam0->f_192) && func_205((*iParam1)[iVar0]->f_5, 0, 1))
		{
			if ((*iParam1)[iVar0]->f_5 != iParam0->f_192)
			{
				fVar2[iVar0] = func_219((*iParam1)[iVar0]->f_5, iParam0->f_192, 0, 1);
				if (&fVar2[iVar0] > fVar32)
				{
					fVar32 = &fVar2[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		bVar35 = false;
		if ((*iParam1)[iVar0]->f_5 == iParam0->f_192)
		{
		}
		else if (!func_205((*iParam1)[iVar0]->f_5, 0, 1))
		{
		}
		else
		{
			func_218((*iParam1)[iVar0]->f_5, Global_36, 3, 0, 3);
			fVar17[iVar0] = (&fVar2[iVar0] / fVar32);
			fVar33 = (&fVar17[iVar0] * fParam4);
			fVar34 = (&fVar17[iVar0] * fParam5);
			if (func_571((*iParam1)[iVar0]->f_5))
			{
				bVar35 = true;
			}
			else if (is_ped_facing_ped((*iParam1)[iVar0]->f_5, Global_35, 70f))
			{
				fVar33 = (fVar33 / 2f);
				fVar34 = (fVar34 / 2f);
			}
			else if (is_ped_using_any_scenario(Local_286[iVar0]->f_5))
			{
				fVar33 = 0f;
				fVar34 = 0.5f;
			}
			if (!bVar35)
			{
				_0xe7fa07624574b79a((*iParam1)[iVar0]->f_5, Global_35, 3, 2, 3f, 1, 0, 0, 0);
				open_sequence_task(&iVar1);
				if (!is_ped_facing_ped((*iParam1)[iVar0]->f_5, Global_35, 40f) || &fVar2[iVar0] > 20f)
				{
					if (func_211())
					{
					}
					else
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
				}
				else
				{
					task_swap_weapon(0, 1, 0, 0, 0);
					task_aim_gun_at_entity(0, Global_35, 500, 0, 1);
				}
				task_combat_hated_targets_around_ped(0, 100f, 0, 66);
				func_263((*iParam1)[iVar0]->f_5, &iVar1, fVar33, fVar34, 1, 1);
			}
			else
			{
				open_sequence_task(&iVar1);
				task_combat_hated_targets_around_ped(0, 100f, 0, 66);
				func_263((*iParam1)[iVar0]->f_5, &iVar1, fVar33, fVar34, 1, 1);
			}
		}
		iVar0++;
	}
}

bool func_415(bool bParam0, float fParam1)
{
	if (!func_391(bParam0))
	{
		return false;
	}
	if (func_572(bParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_416(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_573(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_574(fParam0))
	{
		return false;
	}
	return true;
}

void func_417()
{
	func_575(Local_286[6]->f_5, Local_15.f_12, 0, 0);
	func_575(Local_286[7]->f_5, Local_15.f_11, 0, 0);
	func_575(Local_286[8]->f_5, Local_15.f_9, 0, 0);
	func_575(Local_286[9]->f_5, Local_15.f_10, 0, 0);
}

void func_418(int iParam0)
{
	iLocal_753 = iParam0;
}

void func_419()
{
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (func_205(Local_286[iVar0]->f_5, 0, 1))
		{
			if (iVar0 > 3)
			{
				set_ped_combat_movement(Local_286[iVar0]->f_5, 2);
			}
		}
		iVar0++;
	}
}

bool func_420(int iParam0, int iParam1, int iParam2)
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
			func_576((*iParam1)[iVar1], iParam0->f_207, &uVar2, iVar1, vVar3);
			iVar1++;
		}
		if (!func_391(&(iParam0->f_211)))
		{
			func_223(&(iParam0->f_211), 0);
		}
		func_252(&(iParam0->f_5), 128);
		return true;
	}
	return false;
}

bool func_421(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		iVar1 = (iVar0 - iParam3);
		if ((*uParam1)[iVar1]->f_4 != 6)
		{
			iVar0 = 9000;
		}
		else if (iVar0 == iParam4)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		iVar1 = (iVar0 - iParam3);
		func_577(iParam0, (*uParam1)[iVar1], (*iParam2)[iVar0], iVar0, 0);
		iVar0++;
	}
	return false;
}

bool func_422(int iParam0, int iParam1)
{
	if (!func_173(&(iParam1->f_5), 33554432))
	{
		if (func_578(iParam0) <= 0)
		{
			func_252(&(iParam1->f_5), 33554432);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_423(int iParam0)
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
		Var4 = { func_291(953441746, iVar2) };
		stat_id_get_int(&Var4, &iVar3);
		if (iVar3 >= (iParam0->f_200 + iParam0->f_199))
		{
			func_579(iVar0, 1);
		}
		else
		{
			func_579(iVar1, 1);
		}
	}
}

void func_424(int iParam0)
{
	if (func_384(1) <= 0)
	{
		return;
	}
}

void func_425(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	func_580(iVar0, 1, bParam1, 0, 1);
	func_581(iParam0, -1);
	if (bParam2)
	{
		if (func_318(iVar0) >= 1)
		{
			func_582(iVar0, (func_318(iVar0) - 1));
		}
	}
	else
	{
		func_583(0, 12);
		iVar1 = func_584(iParam0);
		if (func_318(iVar0) <= 1)
		{
			func_292(func_585(64058978), 1);
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
				Global_1393237->f_192[iVar1] = (func_217() / 1000);
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
			func_587(func_586(iParam0, 1), 350f, 0);
			func_588(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

bool func_426()
{
	return func_589(_0xc17f69e1418cd11f(3));
}

void func_427(int iParam0)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	if (iVar0 != func_26(0))
	{
		func_590(iVar0);
	}
	else
	{
		func_590(iVar0);
	}
}

var func_428(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_591(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_592(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_591(sVar0, iParam1, 0, 0, 1, 1);
}

void func_429(var uParam0)
{
	if (func_593(*uParam0))
	{
		func_594(uParam0, 1, 1);
	}
}

void func_430(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
{
	if (!func_173(&(iParam1->f_5), 8) && !func_173(&(iParam1->f_5), 4))
	{
		iVar0 = func_36(iParam1->f_205);
		if (is_entity_dead(player_ped_id()))
		{
			if (func_196(iVar0))
			{
				if (!func_173(&(iParam1->f_5), 4096))
				{
					func_595(iParam1, 1);
					func_252(&(iParam1->f_5), 4096);
				}
				func_427(iParam1->f_205);
			}
		}
		else if (func_196(iVar0))
		{
			func_595(iParam1, 0);
			func_596(iParam1->f_205, iParam1->f_198);
			func_252(&(iParam1->f_5), 4);
		}
	}
	func_176(iParam1, 0);
	func_272(iParam1, 0);
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		func_443(&((*iParam0)[iVar1]->f_6));
		if ((is_screen_faded_out() || (func_219((*iParam0)[iVar1]->f_5, Global_35, 0, 0) > 60f && is_entity_occluded((*iParam0)[iVar1]->f_5))) || func_219((*iParam0)[iVar1]->f_5, Global_35, 0, 0) > 100f)
		{
			func_597(&((*iParam0)[iVar1]->f_5));
		}
		iVar1++;
	}
	func_594(&(iParam1->f_214), 1, 1);
	func_598(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!is_string_null_or_empty(sParam4))
	{
		_text_database_delete(sParam4);
	}
	render_script_cams(false, false, 3000, true, false, 0);
	func_599(&uVar2, 0);
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
	else if (_does_volume_exist(func_330(iParam1->f_205)))
	{
		_0xa1cfb35069d23c23(func_330(iParam1->f_205));
		_0x74c2b3dc0b294102(func_330(iParam1->f_205));
	}
	set_ped_config_flag(Global_35, 141, false);
	func_271(iParam1, 0);
	func_273(0);
	func_600(Global_1935630, 32);
	terminate_this_thread();
}

bool func_431(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return ((_0xc8d523bf5bbd3808(iParam0, -587661767) || _0xc8d523bf5bbd3808(iParam0, -1507090758)) || _0xc8d523bf5bbd3808(iParam0, -1102089407));
}

bool func_432(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_601(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_602(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

float func_433(int iParam0)
{
	func_75(iParam0, 0, 0);
	if (func_213(iParam0))
	{
		return door_system_get_open_ratio(iParam0);
	}
	return -1f;
}

bool func_434(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_455(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_435(int iParam0, int iParam1)
{
	if (func_24() == 0)
	{
		return false;
	}
	func_75(iParam0, 0, 0);
	if (func_213(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, 0);
		if (iVar0 != 0)
		{
			return _0x0943113e02322164(get_object_index_from_entity_index(iVar0), iParam1);
		}
	}
	return false;
}

void func_436(int iParam0)
{
	if (!func_205(Local_286[iParam0]->f_5, 0, 1))
	{
		return;
	}
	remove_ped_defensive_area(Local_286[iParam0]->f_5, false);
	_0xfc3db99c8144cd81(Local_286[iParam0]->f_5, Local_15.f_3, 0, false, 0);
	set_ped_combat_attributes(Local_286[iParam0]->f_5, 12, false);
	set_combat_float(Local_286[iParam0]->f_5, 1, 1f);
	set_combat_float(Local_286[iParam0]->f_5, 3, 4f);
	set_combat_float(Local_286[iParam0]->f_5, 0, 0f);
}

void func_437(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_438(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_603(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_439(int iParam0)
{
	iLocal_752 = iParam0;
}

bool func_440(int iParam0, var uParam1)
{
	if (iParam0 == Local_29.f_190)
	{
		return false;
	}
	if (is_bit_set(*uParam1, iParam0))
	{
		return false;
	}
	if (!func_571(Local_286[iParam0]->f_5))
	{
		if (does_entity_exist(iVar823) && does_entity_exist(Local_286[iParam0]->f_5))
		{
			if (func_219(Local_286[iParam0]->f_5, iVar823, 0, 1) < 7f)
			{
				return true;
			}
			if (func_604(Local_286[iParam0]->f_5, iVar823, 100f))
			{
				if (func_605(Local_286[iParam0]->f_5, iVar823, get_entity_coords(Local_286[iParam0]->f_5, true, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_441(int iParam0)
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
	return func_196(iVar0);
}

void func_442(int iParam0)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_606(iParam0, 57, func_586(iParam0, 1), 0);
	set_this_script_can_remove_blips_created_by_any_script(false);
	if (func_268(iVar0) != 4)
	{
		func_290(Global_1935630, 32);
	}
	if (func_128(iVar0, 1))
	{
		func_607(iVar0);
	}
	iVar1 = func_584(iParam0);
	if (iVar1 != -1)
	{
		func_588(0, iVar1, 0, 12, 0);
	}
	func_608(iParam0);
	func_609(iVar0, 1);
	func_610(iVar0, 1, func_361(player_id(), 1, 0, 1));
	func_611(iParam0);
	func_583(0, 12);
}

void func_443(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_444()
{
	if (!does_blip_exist(iVar829))
	{
		iLocal_831 = _blip_add_for_coord(-1383961727, vLocal_833);
	}
}

void func_445(var uParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (does_blip_exist(uParam0->f_6))
	{
		if (func_205(uParam0->f_5, 0, 1))
		{
			if (!func_612(uParam0))
			{
				if (get_script_task_status(uParam0->f_5, 518218985, true) == 1 || bParam7)
				{
					if (func_613(uParam0->f_5, vParam1, 1) > IntToFloat((iParam4 * iParam4)))
					{
						remove_blip(&(uParam0->f_6));
					}
					else if (func_415(bParam5, fParam6))
					{
						remove_blip(&(uParam0->f_6));
						if (func_446(uParam0->f_5, vParam1, 1) < IntToFloat((iParam4 / 3)))
						{
						}
					}
				}
			}
		}
	}
}

float func_446(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_447(var uParam0, char* sParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!func_205(iParam2, 0, 1))
		{
			return;
		}
	}
	set_anim_scene_entity(*uParam0, sParam1, iParam2, 0);
}

void func_448(var uParam0, char* sParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	if (is_entity_dead(iParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam1, iParam2, 0);
	set_entity_visible(iParam2, bParam4);
}

void func_449(var uParam0, char* sParam1, bool bParam2, char[4] cParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (_0x6f1f0b17109309da(*uParam0, sParam1))
	{
		set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
	}
}

void func_450(int iParam0, char[4] cParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	start_anim_scene(iParam0);
}

void func_451(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_614() - fParam1);
	func_615(uParam0, 1);
	func_616(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_452(int iParam0, int iParam1, bool bParam2)
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
	return func_455(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_453(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_452(player_ped_id(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_454(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
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
				fVar2 = func_617(iParam10);
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
			bVar0 = func_618(uParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_619(uParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_614();
		}
		else if ((func_614() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
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

float func_455(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_456(int iParam0, bool bParam1)
{
	if (iParam0->f_205 != 9)
	{
		set_ped_config_flag(Global_35, 141, bParam1);
	}
}

bool func_457(int iParam0)
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

bool func_458(int iParam0)
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

bool func_459(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_460(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_461(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_462(int iParam0, int iParam1)
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

var func_463(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_464(int iParam0, bool bParam1)
{
	iVar0 = 0;
	func_620(&iVar0, 0);
	func_620(&iVar0, 17);
	func_620(&iVar0, 28);
	if (bParam1)
	{
		_0x3caad93fa5b9579a(iParam0->f_215, 2, iVar0);
	}
	else if (_does_volume_exist(iParam0->f_215))
	{
		_0x7274f84b1501b523(iParam0->f_215);
	}
}

void func_465(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

bool func_466()
{
	return func_51(8);
}

bool func_467()
{
	if (func_24() != 0)
	{
		return true;
	}
	return true;
}

char* func_468(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_469(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_621(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_470(int iParam0)
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

bool func_471(int iParam0)
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

bool func_472(int iParam0)
{
	if (!func_622(iParam0))
	{
		return false;
	}
	return func_623(iParam0);
}

bool func_473(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_474(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_475()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_476(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_477(int iParam0)
{
	return func_297(iParam0, Global_1310750->f_16072 | 64);
}

void func_478(int iParam0)
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

bool func_479()
{
	return true;
}

bool func_480(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_481(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (!func_150(iParam0, 1))
	{
		return;
	}
	if (!func_150(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_480(iParam0)) && func_624(iParam0))
	{
		return;
	}
	func_154(iParam0, 1);
	func_625(iParam0);
	if (func_626(func_151(iParam0)))
	{
		iVar0 = func_153(iParam0);
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
		func_154(iParam0, 16);
	}
	if (func_150(iParam0, 128) && !bParam3)
	{
		func_627(iParam0, 0);
	}
}

void func_482(int iParam0, bool bParam1)
{
	if (!func_628(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_629(iParam0, 1024))
		{
			func_630(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_629(iParam0, 1024))
	{
		func_631(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_632(iParam0);
}

void func_483(int iParam0, int iParam1)
{
	if (!func_633(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

int func_484(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_485(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_486(int iParam0, bool bParam1)
{
	if (!func_633(iParam0))
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

bool func_487(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_488(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_488(int iParam0)
{
	return iParam0 > -1;
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_490(int iParam0)
{
	if (!func_488(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_491(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_488(iParam0))
		{
			return;
		}
	}
	func_489(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

float func_492(int iParam0)
{
	if (!func_488(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_493(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_634(iParam1);
	}
}

void func_494(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_386(iParam0))
	{
		return;
	}
	if (func_304(iParam0))
	{
		if (!func_635(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_306(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_636(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_490(iParam0);
	if (((does_entity_exist(iVar1) && func_492(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_637(iParam0, 2, 1);
	}
	else
	{
		func_638(iParam0);
		func_637(iParam0, 1, 1);
	}
}

int func_495(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_496(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_float(iParam0, "loot_item_offset1x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset1y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset1z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient1x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient1y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_float(iParam0, "loot_item_offset2x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset2y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset2z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient2x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient2y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_497(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_639(iParam0);
		func_640(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_498(int iParam0)
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

bool func_499(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_641((*Global_1347702)[iParam0]->f_15) != 0)
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

bool func_500(int iParam0)
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

void func_501(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_642(iParam0, iParam1))
		{
			if (func_643(iParam0, iParam1))
			{
				if (func_644(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_645(iParam0);
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

void func_502(int iParam0, int iParam1, bool bParam2)
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

void func_503(int iParam0, bool bParam1)
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

void func_504(int iParam0, int iParam1)
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

void func_505(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_213(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_506(int iParam0, bool bParam1)
{
	if (func_213(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_507(int iParam0, bool bParam1)
{
	if (func_213(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_508(int iParam0, bool bParam1)
{
	if (func_213(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_509()
{
	return true;
}

void func_510(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_646();
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
			func_647(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_511(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_512(bool bParam0)
{
	if (func_648(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_513(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_24() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_649(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_649(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_541(iVar0) == -1)
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

void func_514(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_650(uParam0);
	}
}

bool func_515(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_541(iParam2);
	}
	else
	{
		iVar1 = func_540(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_541(iParam0);
	}
	else
	{
		iVar0 = func_540(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_651(*uParam1, 8388608))
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

float func_516(int iParam0, int iParam1)
{
	return func_219(iParam0, iParam1, 1, 1);
}

float func_517(var uParam0)
{
	return uParam0->f_26;
}

bool func_518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_519(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(uParam0, 134217728);
	}
	else
	{
		func_189(uParam0, 134217728);
	}
}

void func_520()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_521(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_219(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_652(iVar0, 0)))
		{
			if (func_653(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_522(var uParam0)
{
	return uParam0->f_17;
}

bool func_523(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_651(*uParam0, 4194304))
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

int func_524(var uParam0)
{
	return uParam0->f_18;
}

bool func_525(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_652(iVar0, 0)))
		{
			if (func_459(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_526(bool bParam0, bool bParam1, bool bParam2)
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

float func_527(var uParam0)
{
	return uParam0->f_23;
}

int func_528(var uParam0)
{
	return uParam0->f_21;
}

int func_529(var uParam0)
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

bool func_530(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_654(iParam0, vParam4, 0.5f))
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

int func_531(int iParam0)
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
	if (func_655(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_532(int iParam0)
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

bool func_533(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_571(iParam1))
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

bool func_534(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_571(iParam1))
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

bool func_535(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_571(iParam1))
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

bool func_536(int iParam0, int iParam1)
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

bool func_537(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_656(iParam0, 1, 0, 0) != 2055893578)
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

bool func_538(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_539(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_446(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_540(int iParam0)
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

int func_541(int iParam0)
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

int func_542(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_536(Global_35, &iVar1))
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
		fVar2 = func_219(iParam0, player_ped_id(), 0, 1);
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
		if (func_219(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_543(int iParam0, var uParam1, bool bParam2)
{
	func_648(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_544(uParam1, iVar0))
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
				if (!bParam2 || !func_544(uParam1, iVar1))
				{
					if (func_446(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_544(var uParam0, int iParam1)
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

bool func_545(int iParam0)
{
	if (func_31())
	{
		return false;
	}
	return func_128((*Global_1347702)[58]->f_15, 1);
}

int func_546(var uParam0)
{
	return uParam0->f_20;
}

int func_547(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_548(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_657(&iVar1, -2147483648);
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

int func_549()
{
	return get_player_group(get_player_index());
}

bool func_550(int iParam0)
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

bool func_551(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_552()
{
	if (!_does_anim_scene_exist(&(Local_551[0])))
	{
		return;
	}
	if (is_entity_dead(Local_286[4]->f_5))
	{
		_delete_anim_scene(&(Local_551[0]));
		return;
	}
	func_658(iVar752);
	switch (iVar752)
	{
		case 0:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 1:
			if (func_253(128))
			{
				if (func_659(2))
				{
					func_660(2, 1);
				}
			}
			break;
		case 2:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 3:
			if (func_253(128))
			{
				if (func_659(5))
				{
					func_660(5, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(8))
				{
					func_660(8, 0);
				}
			}
			else if (func_253(1024))
			{
				if (func_659(4))
				{
					func_660(4, 0);
				}
			}
			break;
		case 4:
			if (func_253(128))
			{
				if (func_659(5))
				{
					func_660(5, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(8))
				{
					func_660(8, 0);
				}
			}
			else if (func_253(1024))
			{
				if (func_659(4))
				{
					func_660(4, 0);
				}
			}
			break;
		case 5:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 6:
			if (func_253(128))
			{
				if (func_659(7))
				{
					func_660(7, 1);
				}
			}
			break;
		case 7:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 8:
			if (func_253(128))
			{
				if (func_659(7))
				{
					func_660(7, 1);
				}
			}
			break;
		case 9:
			if (!Local_551[0]->f_2)
			{
				func_560(0, func_559(9));
			}
			else if (func_661(0, func_559(9)))
			{
				func_662(0, func_559(9), 1);
				func_256(0, Local_551[0]->f_3, 1);
				func_256(0, Local_551[0]->f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 10:
			if (!Local_551[0]->f_2)
			{
				func_560(0, func_559(10));
			}
			else if (func_661(0, func_559(10)))
			{
				func_662(0, func_559(10), 1);
				func_256(0, Local_551[0]->f_3, 1);
				func_256(0, Local_551[0]->f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 11:
			if (!Local_551[0]->f_2)
			{
				func_560(0, func_559(11));
			}
			else if (func_661(0, func_559(11)))
			{
				func_662(0, func_559(11), 1);
				func_256(0, Local_551[0]->f_3, 1);
				func_256(0, Local_551[0]->f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 12:
			if (!Local_551[0]->f_2)
			{
				func_560(0, func_559(12));
			}
			else if (func_661(0, func_559(12)))
			{
				func_662(0, func_559(12), 1);
				func_256(0, Local_551[0]->f_3, 1);
				func_256(0, Local_551[0]->f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 13:
			if (!is_entity_dead(Local_286[4]->f_5) && has_anim_event_fired(Local_286[4]->f_5, 811542464))
			{
				_delete_anim_scene(&(Local_551[0]));
			}
			break;
	}
}

void func_553()
{
	switch (iVar756)
	{
		case 0:
			if (!is_entity_dead(Local_286[3]->f_5))
			{
				func_663();
				func_664(1, "PBL_RIFLE");
				func_664(1, "PBL_PISTOL");
				register_target(Local_286[3]->f_5, Global_35, 0);
				func_665(1);
			}
			break;
		case 1:
			if (func_661(1, "PBL_RIFLE") && func_661(1, "PBL_PISTOL"))
			{
				clear_ped_tasks(Local_286[3]->f_5, 1, 0);
				sVar0 = func_666();
				vVar1 = { func_667(1, "Ped", sVar0) };
				fVar4 = func_668(1, "Ped", sVar0);
				open_sequence_task(&iVar5);
				task_go_straight_to_coord(0, vVar1, 2f, 20000, fVar4, 0.15f, 0);
				func_263(Local_286[3]->f_5, &iVar5, 0, 0, 1, 1);
				func_664(1, sVar0);
				func_665(2);
			}
			break;
		case 2:
			func_663();
			sVar0 = func_666();
			if ((func_669() && func_661(1, sVar0)) && is_entity_in_volume(Global_35, Local_15.f_13, false, 0))
			{
				func_662(1, sVar0, 1);
				func_257(1);
				if (func_205(Local_286[3]->f_5, 0, 1))
				{
					func_220(Local_286[3], 831283580, 0);
				}
				func_665(3);
			}
			break;
		case 3:
			if (func_253(32768) || func_253(65536))
			{
				func_665(4);
				return;
			}
			if (is_entity_dead(Local_286[3]->f_5))
			{
				if (does_entity_exist(Local_441[6]->f_8) && has_anim_event_fired(Local_441[6]->f_8, -199945954))
				{
					func_670(1, "Ped", Local_286[3]->f_5);
					func_259(65536);
				}
				else
				{
					func_259(65536);
				}
			}
			if (!func_253(65536) && func_671(1))
			{
				set_ped_combat_attributes(Local_286[3]->f_5, 0, true);
				func_207(Local_286[3], 1);
				set_ped_sphere_defensive_area(Local_286[3]->f_5, get_entity_coords(Local_286[3]->f_5, true, false), 1f, 1, 0, 0);
				open_sequence_task(&iVar6);
				task_put_ped_directly_into_cover(0, get_entity_coords(Local_286[3]->f_5, true, false), 3, 1, 0, 0, 0, &(Local_634[1]), 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 66);
				func_263(Local_286[3]->f_5, &iVar6, 0, 0, 1, 1);
				func_259(32768);
			}
			break;
		case 4:
			break;
	}
}

void func_554()
{
	switch (iVar754)
	{
		case 0:
			if (((((!is_entity_dead(Local_286[0]->f_5) && !func_97(33554432)) && !func_231(Global_35, Local_15.f_3, 1, 0)) && func_205(Local_286[0]->f_5, 0, 1)) && func_205(Local_286[1]->f_5, 0, 1)) && func_205(Local_286[2]->f_5, 0, 1))
			{
				clear_ped_tasks(Local_286[0]->f_5, 1, 0);
				func_672(Local_286[0]->f_5, -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
				func_673(Local_286[0]->f_5, func_164(11, 2), func_165(11, 2), 2, 1073741824);
				if (!is_entity_dead(Local_286[1]->f_5))
				{
					clear_ped_tasks(Local_286[1]->f_5, 1, 0);
					func_672(Local_286[1]->f_5, -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
					func_673(Local_286[1]->f_5, func_164(11, 3), func_165(11, 3), 2, 1073741824);
				}
				if (!is_entity_dead(Local_286[2]->f_5))
				{
					clear_ped_tasks(Local_286[2]->f_5, 1, 0);
					func_672(Local_286[2]->f_5, -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
					func_673(Local_286[2]->f_5, func_164(11, 4), func_165(11, 4), 2, 1073741824);
				}
				func_674(1);
			}
			else
			{
				func_674(3);
				func_52(33554432);
			}
			break;
		case 1:
			func_675();
			if (func_97(33554432) || func_231(Global_35, Local_15.f_3, 1, 0))
			{
				func_558(2);
				func_674(5);
			}
			else if (func_253(131072) && func_231(Global_35, Local_15.f_2, 1, 0))
			{
				func_676(iVar823, 1);
				func_257(2);
				trigger_music_event("HIDEOUT_SPC_DOOR_BURST");
				func_674(2);
			}
			break;
		case 2:
			if (!func_253(1048576))
			{
				if (!is_entity_dead(Local_286[0]->f_5))
				{
					if (func_677(Local_286[0]->f_5, &(Local_551[2]), "PEDA", 0, 0, 1, 0))
					{
						set_ped_combat_attributes(Local_286[0]->f_5, 71, false);
						func_220(Local_286[0], 831283580, 0);
						func_436(0);
						open_sequence_task(&iVar0);
						task_combat_ped(0, Global_35, 100663296, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 66);
						func_263(Local_286[0]->f_5, &iVar0, 0, 0, 1, 1);
						set_ped_combat_range(Local_286[0]->f_5, 0);
						set_ped_sphere_defensive_area(Local_286[0]->f_5, func_164(11, 5), 1f, 0, 0, 0);
						func_259(1048576);
					}
				}
				else
				{
					func_670(2, "PEDA", Local_286[0]->f_5);
					func_259(1048576);
				}
			}
			if (!func_253(2097152))
			{
				if (!is_entity_dead(Local_286[1]->f_5))
				{
					if (func_677(Local_286[1]->f_5, &(Local_551[2]), "PEDB", 0, 0, 1, 0))
					{
						set_ped_combat_attributes(Local_286[1]->f_5, 71, false);
						func_220(Local_286[1], 831283580, 0);
						func_436(1);
						open_sequence_task(&iVar0);
						task_combat_ped(0, Global_35, 100663296, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 66);
						func_263(Local_286[1]->f_5, &iVar0, 0, 0, 1, 1);
						set_ped_combat_range(Local_286[1]->f_5, 0);
						set_ped_sphere_defensive_area(Local_286[1]->f_5, func_164(11, 0), 1f, 0, 0, 0);
						func_259(2097152);
					}
				}
				else
				{
					if (func_253(262144))
					{
						func_670(2, "PEDB", Local_286[1]->f_5);
					}
					func_259(2097152);
				}
			}
			if (!func_253(4194304))
			{
				if (!is_entity_dead(Local_286[2]->f_5))
				{
					if (func_677(Local_286[2]->f_5, &(Local_551[2]), "PEDC", 0, 0, 1, 0))
					{
						set_ped_combat_attributes(Local_286[2]->f_5, 71, false);
						func_220(Local_286[2], 831283580, 0);
						func_436(2);
						open_sequence_task(&iVar0);
						task_combat_ped(0, Global_35, 100663296, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 66);
						func_263(Local_286[2]->f_5, &iVar0, 0, 0, 1, 1);
						set_ped_combat_range(Local_286[2]->f_5, 0);
						set_ped_sphere_defensive_area(Local_286[2]->f_5, func_164(11, 6), 1f, 0, 0, 0);
						func_259(4194304);
					}
				}
				else
				{
					if (func_253(524288))
					{
						func_670(2, "PEDC", Local_286[2]->f_5);
					}
					func_259(4194304);
				}
			}
			if ((func_253(1048576) && func_253(2097152)) && func_253(4194304))
			{
				func_258(&uLocal_762);
				func_674(3);
			}
			break;
		case 3:
			if (!is_entity_in_volume(Global_35, Local_15.f_3, true, 0) && !func_97(33554432))
			{
				if (func_415(&uLocal_762, 4f))
				{
					if (func_205(Local_286[0]->f_5, 0, 1))
					{
						_0xfc3db99c8144cd81(Local_286[0]->f_5, Local_15.f_8, 0, false, 0);
					}
					if (func_205(Local_286[1]->f_5, 0, 1))
					{
						_0xfc3db99c8144cd81(Local_286[1]->f_5, Local_15.f_8, 0, false, 0);
					}
					if (func_205(Local_286[2]->f_5, 0, 1))
					{
						_0xfc3db99c8144cd81(Local_286[2]->f_5, Local_15.f_8, 0, false, 0);
					}
					func_674(4);
				}
			}
			else if (func_97(33554432))
			{
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (func_205(Local_286[iVar1]->f_5, 0, 1))
					{
						open_sequence_task(&iVar0);
						_0x9238a3d970bbb0a9(Local_286[iVar1]->f_5, -820192119);
						if (iVar1 == 0 || iVar1 == 2)
						{
							task_combat_ped(0, Global_35, 16384, 0);
							task_combat_hated_targets_around_ped(0, 100f, 0, 66);
						}
						else
						{
							task_combat_ped(0, Global_35, 16384, 0);
							task_combat_hated_targets_around_ped(0, 100f, 0, 66);
						}
						func_263(Local_286[iVar1]->f_5, &iVar0, 0, 0, 1, 1);
						func_220(Local_286[iVar1], 831283580, 0);
					}
					iVar1++;
				}
				if (func_568())
				{
					func_438(Local_286[0]->f_5, Local_286[0]->f_5, "ARRIVAL_COMBAT_TRAP_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_438(Local_286[0]->f_5, Local_286[0]->f_5, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_674(5);
			}
			break;
		case 4:
			if (func_415(&uLocal_762, 6f))
			{
				if (func_205(Local_286[0]->f_5, 0, 1))
				{
					_0xfc3db99c8144cd81(Local_286[0]->f_5, Local_15.f_4, 0, false, 0);
					set_ped_combat_range(Local_286[0]->f_5, 0);
					set_ped_combat_movement(Local_286[0]->f_5, 2);
				}
				if (func_205(Local_286[1]->f_5, 0, 1))
				{
					_0xfc3db99c8144cd81(Local_286[1]->f_5, Local_15.f_4, 0, false, 0);
					set_ped_combat_range(Local_286[1]->f_5, 0);
					set_ped_combat_movement(Local_286[1]->f_5, 2);
				}
				if (func_205(Local_286[2]->f_5, 0, 1))
				{
					_0xfc3db99c8144cd81(Local_286[2]->f_5, Local_15.f_4, 0, false, 0);
					set_ped_combat_range(Local_286[2]->f_5, 0);
					set_ped_combat_movement(Local_286[2]->f_5, 2);
				}
				func_674(5);
			}
			break;
		case 5:
			break;
	}
}

bool func_555(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_5)
	{
		func_355(uParam1, 0, iVar0);
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
				if (func_368(uParam1, 4000))
				{
					if ((func_369(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_370(uParam1, iParam0)) && func_371(uParam1, iParam0))
					{
						func_373();
						*uParam2 = 2;
						func_357(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_368(uParam1, 4000))
				{
					if ((func_369(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_370(uParam1, iParam0)) && func_371(uParam1, iParam0))
					{
						func_373();
						*uParam2 = 2;
						func_357(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_372(iParam0, Global_1935630->f_41))
							{
								func_373();
								*uParam2 = 2;
								func_357(iParam0, uParam1, *uParam2);
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
						if (func_372(iParam0, Global_1935630->f_41))
						{
							func_373();
							*uParam2 = 2;
							func_357(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_375())
					{
						if (func_372(iParam0, Global_1935630->f_42))
						{
							func_373();
							*uParam2 = 2;
							func_357(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_362(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_363(Global_35, iParam0, uParam1))
					{
						func_373();
						*uParam2 = 4;
						func_357(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_364(Global_35, iParam0, uParam1))
					{
						func_373();
						*uParam2 = 256;
						func_357(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_678(iParam0, uParam1))
			{
				func_373();
				*uParam2 = 131072;
				func_357(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_679(iParam0, uParam1))
			{
				func_373();
				*uParam2 = 262144;
				func_357(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	return !func_518(iParam0, iParam1, iParam2, iParam3, iParam4);
}

bool func_557(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	if (iVar818 > 0)
	{
		if (func_217() > iVar818 + 500)
		{
			if (func_219(iParam0, iParam1, 0, 1) < 7f)
			{
				return true;
			}
			if (bParam5 || func_604(iParam0, iParam1, 100f))
			{
				if (func_605(iParam0, iParam1, vParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_558(int iParam0)
{
	func_680(&(Local_551[iParam0]), func_328(iParam0));
}

char[] func_559(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_Base";
		case 1:
			return "PBL_STAND_UP";
		case 2:
			return "PBL_SIT_DOWN";
		case 3:
			return "PBL_FALL_ASLEEP";
		case 4:
			return "PBL_AWAKEN";
		case 5:
			return "PBL_WAKE";
		case 6:
			return "PBL_LANTERN_CHECK";
		case 7:
			return "PBL_LANTERN_SIT";
		case 8:
			return "PBL_SLEEP_LANTERN";
		case 9:
			return "PBL_BREAK_LEFT";
		case 10:
			return "PBL_BREAK_RIGHT";
		case 11:
			return "PBL_BREAK_FRONT";
		case 12:
			return "PBL_LANTERN_BREAK";
		default:
			break;
	}
	return "PBL_BASE";
}

void func_560(int iParam0, char[4] cParam1)
{
	func_681(&(Local_551[iParam0]), cParam1, func_328(iParam0));
	Local_551[iParam0]->f_2 = 1;
	Local_551[iParam0]->f_1 = cParam1;
}

void func_561(int iParam0)
{
	iLocal_754 = iParam0;
}

Vector3 func_562(int iParam0, float fParam1)
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
	func_682(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_563(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_683(vVar3, vVar6);
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
	if (func_684(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_564(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_189(&(uParam0->f_1), 8);
	}
	else
	{
		func_190(&(uParam0->f_1), 8);
	}
}

bool func_565()
{
	uVar1 = func_652(Global_35, 0);
	bVar2 = (_0x5809dbca0a37c82b(uVar1) && _0xea522f991e120d45(uVar1));
	if (Local_29.f_183 == 2 && !bVar2)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (!bVar2)
		{
			if (func_205(Local_286[iVar0]->f_5, 0, 1))
			{
				if (_0x09d7afd3716da8e1(Local_286[iVar0]->f_5, 3000))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_566(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

int func_567()
{
	vVar0 = { get_entity_coords(Local_29.f_192, true, false) };
	fVar24 = 999.9f;
	iVar25 = -1;
	iVar22 = 0;
	while (iVar22 < 6)
	{
		*vVar3[iVar22] = { func_162(9, iVar22) };
		iVar22++;
	}
	if (get_distance_between_coords(vVar0, _0xf70f00013a62f866(Local_15.f_7), false) < 11f)
	{
		return -1;
	}
	iVar22 = 0;
	while (iVar22 < 6)
	{
		fVar23 = func_685(vVar0, *vVar3[iVar22]);
		if (fVar23 < fVar24)
		{
			iVar25 = iVar22;
			fVar24 = fVar23;
		}
		iVar22++;
	}
	return iVar25;
}

bool func_568()
{
	if (func_143(func_148()) >= 0 && func_143(func_148()) < 8)
	{
		return false;
	}
	return true;
}

int func_569(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_570()
{
	if (!func_253(8192))
	{
		if (func_677(Local_286[4]->f_5, &(Local_551[0]), "GUARD", 0, 0, 1, 0))
		{
			func_259(8192);
		}
	}
}

bool func_571(int iParam0)
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

float func_572(bool bParam0)
{
	if (!func_391(bParam0))
	{
		return bParam0->f_1;
	}
	if (func_686(bParam0))
	{
		return bParam0->f_2;
	}
	return (func_614() - bParam0->f_1);
}

bool func_573(int iParam0, bool bParam1)
{
	if (func_205(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_574(float fParam0)
{
	if (func_687(1))
	{
		return true;
	}
	if (func_391(&uLocal_0) && !func_688(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_575(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, bParam3);
		_0xfc3db99c8144cd81(iParam0, uParam1, iParam2, bParam3, 0);
	}
}

void func_576(var uParam0, char* sParam1, var uParam2, int iParam3, vector3 vParam4)
{
	if (!is_entity_dead(uParam0->f_5))
	{
		if (get_script_task_status(uParam0->f_5, 518218985, true) != 1)
		{
			if (!func_612(uParam0))
			{
				if (!func_388(vParam4))
				{
					open_sequence_task(&iVar0);
					_task_flee_from_ped(0, Global_35, vParam4, -1f, -1, 5120, 1077936128, 0);
					func_263(uParam0->f_5, &iVar0, 0, 0, 1, 1);
				}
				if (is_string_null_or_empty(sParam1))
				{
					*uParam2 = 1;
				}
				if (!*uParam2)
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_438(uParam0->f_5, Global_35, sParam1, "", 70f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					*uParam2 = 1;
				}
			}
			set_ped_keep_task(uParam0->f_5, true);
		}
	}
}

void func_577(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (uParam1->f_4 == 6)
	{
		return;
	}
	else if (!func_205(uParam2->f_5, 0, 1))
	{
		uParam1->f_4 = 6;
		return;
	}
	else if (get_script_task_status(uParam2->f_5, -2117564886, true) == 1 || get_script_task_status(uParam2->f_5, -219932022, true) == 1)
	{
		uParam1->f_4 = 6;
		return;
	}
	switch (uParam1->f_4)
	{
		case 0:
			func_689(&(uParam2->f_5));
			if (func_690(uParam2, 0, 0, bParam4, 0, 0))
			{
				if (func_388(uParam1->f_1))
				{
					set_ped_sphere_defensive_area(uParam2->f_5, Global_36, 12f, 0, 0, 0);
				}
				else
				{
					set_ped_sphere_defensive_area(uParam2->f_5, uParam1->f_1, 4f, 1, 0, 0);
				}
			}
			if (uParam1->f_6 <= 0)
			{
				uParam1->f_6 = get_random_int_in_range((uParam1->f_7 - 8), uParam1->f_7);
			}
			uParam1->f_4 = 1;
			break;
		case 1:
			if (func_691(iParam0, uParam1, uParam2))
			{
				if (is_ped_on_mount(uParam2->f_5))
				{
					*uParam1 = get_mount(uParam2->f_5);
					uParam1->f_4 = 2;
				}
				else
				{
					uParam1->f_4 = 5;
				}
			}
			break;
		case 2:
			if (func_692(uParam2->f_5, &(uParam1->f_8), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				if (!func_388(uParam1->f_1))
				{
					remove_ped_defensive_area(uParam2->f_5, false);
				}
				func_693(&(uParam2->f_5));
				uParam1->f_4 = 5;
			}
			break;
		case 5:
			func_694(uParam1);
			task_combat_ped(uParam2->f_5, Global_35, 0, 0);
			uParam1->f_4 = 6;
			break;
		case 6:
			break;
	}
}

int func_578(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (does_blip_exist((*iParam0)[iVar0]->f_6) && func_205((*iParam0)[iVar0]->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_579(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_695(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_696())
	{
		iVar1 = 0;
	}
	func_697(iParam0, iVar1);
}

void func_580(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (func_268(iParam0) == 4)
	{
		func_698(iParam0, func_148());
		if (!func_343(iParam0) == 5 && !func_343(iParam0) == 6)
		{
			if (bParam3)
			{
				func_699(iParam0, 6);
			}
			else
			{
				func_699(iParam0, 5);
			}
			func_700(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_701(1);
	}
	iVar0 = func_27(iParam0);
	bVar1 = func_24() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_702(0, 2);
		if (!bVar1 && bParam1)
		{
			func_703();
		}
	}
	else
	{
		func_704(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_705(iParam0);
	}
	else
	{
		Var2 = { func_585(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_288(32768))
		{
			Var4 = { func_585(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_343(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_133(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_133(iParam0)]->f_8), true);
						}
					}
					else if ((func_133(iParam0) != 95 && func_133(iParam0) != 82) && !func_135((*Global_1347702)[func_133(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_133(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_133(iParam0)]->f_8), true);
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
		func_707(func_133(iParam0), iVar6, func_706());
	}
	else if (iVar0 == 8)
	{
		func_709(func_133(iParam0), iVar6, func_706(), func_708());
	}
	if (!func_343(iParam0) == 5 && !func_343(iParam0) == 6)
	{
		iVar9 = func_710(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_711(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_712(func_133(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_713((iVar10 - 20), 0, iVar10);
					iVar11 = func_713((iVar11 - 10), 0, iVar11);
				}
				func_714(1);
				func_715(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_715(45, 0, 1);
				break;
			case 8:
				iVar10 = func_716(func_133(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_713((iVar10 - 20), 0, iVar10);
					iVar11 = func_713((iVar11 - 10), 0, iVar11);
				}
				func_715(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_717(func_133(iParam0)))
				{
					func_718(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_715(120, 0, 1);
				break;
			case 2:
				func_715(120, 0, 1);
				break;
			case 6:
				func_715(func_720(func_719(iParam0)), 0, 1);
				break;
			case 5:
				func_715(120, 0, 1);
				break;
		}
	}
	func_721(iParam0, 1);
	func_698(iParam0, func_148());
	func_700(iParam0);
	if ((!func_343(iParam0) == 0 && bParam1) && func_24() == -1)
	{
		iVar12 = func_722(iParam0);
		if (iVar12 != -1)
		{
			func_723(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_724();
			if (iVar12 != -1)
			{
				func_723(0);
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
				switch (func_133(iParam0))
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
				if (func_134(func_133(iParam0)) && func_135((*Global_1347702)[func_133(iParam0)]->f_12, 4))
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
				if (func_133(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_725();
				}
				break;
			case 8:
				if (func_133(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_725();
				}
				break;
		}
	}
	if (!func_343(iParam0) == 5 && !func_343(iParam0) == 6)
	{
		if (bParam3)
		{
			func_699(iParam0, 6);
		}
		else
		{
			func_699(iParam0, 5);
		}
		func_700(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_133(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_726();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_727(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(-1267972061);
						func_727(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(1619534881);
						func_727(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(-755457379);
						func_727(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(1015404643);
						func_727(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(-1724192342);
						func_727(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(1310680212);
						func_727(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(-566881549);
						func_727(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(-1753730528);
						func_727(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(147796381);
						func_727(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(-378547623);
						func_727(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(829545206);
						func_727(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_728(891318243);
						func_727(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_729();
						func_730(967523420);
						func_731();
						func_732();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_733(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_727(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_734(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_734(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_735(304805134, 1, 1);
						if (!func_128((*Global_1347702)[21]->f_15, 1))
						{
							func_580((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_736();
						break;
					case 26:
						func_737();
						break;
					case 17:
						func_738(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_33())
						{
							func_739(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_740(-514575035, -1))
						{
							iVar15 = func_148();
							func_40(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_741(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_33())
						{
							func_739(1529685685);
						}
						break;
					case 34:
						if (func_33())
						{
							func_739(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_742();
						break;
					case 37:
						func_743();
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
						func_744();
						break;
					case 43:
						func_745();
						break;
					case 44:
						if (!func_128((*Global_1347702)[82]->f_15, 1))
						{
							func_580((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_128((*Global_1347702)[83]->f_15, 1))
						{
							func_580((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_746();
						break;
					case 59:
						func_747();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_748();
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
						func_749();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_734(451, 0);
						}
						if (!func_750(-1992824800))
						{
							if (func_750(1520110311))
							{
								iVar16 = func_148();
								func_40(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_741(1937177603, iVar16, 1);
							}
						}
						if (func_751(4))
						{
							if (!func_752(684296857, 1, 0))
							{
								iVar17 = func_148();
								func_40(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_741(-1439688706, iVar17, 1);
							}
						}
						func_727(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_753(89200);
						func_753(2300);
						func_753(2300);
						break;
					case 68:
						func_754();
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
						func_755();
						func_753(-139100);
						break;
					case 69:
						if (func_128((*Global_1347702)[9]->f_15, 1))
						{
							func_753(-6000);
						}
						break;
					case 70:
						func_753(23400);
						func_753(1900);
						func_753(-15000);
						break;
					case 71:
						func_753(-5500);
						break;
				}
				break;
			case 8:
				switch (func_133(iParam0))
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
						func_756();
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
						func_757();
						break;
					case 66:
						func_758();
						func_759();
						break;
					case 67:
						if (!func_760(6))
						{
							func_761(6);
						}
						if (!func_760(3))
						{
							func_761(3);
						}
						if (func_33())
						{
							func_739(1534638301);
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
						if (func_128((*Global_1835011)[69]->f_1, 1))
						{
							func_762(0);
							func_753(40500);
						}
						else
						{
							func_762(0);
							func_753(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_133(iParam0))
				{
					case 0:
						switch (func_719(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_763(iParam0);
		func_764();
		switch (iVar0)
		{
			case 1:
				switch (func_133(iParam0))
				{
					case 4:
						func_765(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_765(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_765(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_765(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_765(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_765(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_765(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_641(iParam0);
						func_765(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_765(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_765(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_752(-2046502963, 1, 0))
						{
							func_727(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_765(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_765(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_765(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_641(iParam0) == 0)
						{
							func_765(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_765(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_135((*Global_1347702)[func_133(iParam0)]->f_12, 536870912))
				{
					func_766(11, 1);
				}
				switch (func_133(iParam0))
				{
					case 109:
						func_765(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_766(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_765(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_765(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_765(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_765(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_767(0, 10, 11, 2116153146))
				{
					func_765(iParam0, func_641(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_767(0, 7, 11, -379687487))
				{
					func_765(iParam0, func_768(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_767(0, 8, 11, -1386089015))
				{
					func_765(iParam0, func_768(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_767(0, 11, 11, -1952009645))
				{
					func_765(iParam0, func_768(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_767(0, 12, 11, 2065895756))
				{
					func_765(iParam0, func_768(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_343(iParam0) == 0)
			{
				if (func_769(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_769(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_770(func_27(iParam0), func_769(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_133(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_772(func_771(Global_1879514->f_1));
						if (iVar0 == 8 && func_133(iParam0) == 58)
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
						if (func_134(func_133(iParam0)) && func_135((*Global_1347702)[func_133(iParam0)]->f_12, 1))
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
			func_583(bParam2, iVar20);
		}
	}
	func_773(1);
	if ((bVar13 || func_725()) && (func_27(iParam0) == 1 || func_27(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_581(int iParam0, int iParam1)
{
	iVar0 = func_774(iParam0);
	Global_40.f_11864[iVar0] = iParam1;
}

void func_582(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	iVar0 = func_495(iParam0) & 65535;
	iVar1 = shift_left(iParam1, 16);
	func_775(iParam0, (iVar1 + iVar0));
}

void func_583(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_776(&Global_0, 8);
	}
	if (!func_475() || func_24() != -1)
	{
		return;
	}
	func_776(&Global_0, 1);
}

int func_584(int iParam0)
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

struct<2> func_585(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

Vector3 func_586(int iParam0, bool bParam1)
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

void func_587(vector3 vParam0, float fParam3, int iParam4)
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
			func_777(iVar0);
		}
		iVar0++;
	}
}

void func_588(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_778(Global_1393447, 1);
	func_779();
	func_780();
	func_781((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_217() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_782();
		if (iParam1 == -1)
		{
			if (func_651(iParam0, 1))
			{
				func_783(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_651(iParam0, 2))
			{
				func_783(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_651(iParam0, 4))
			{
				func_783(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_784(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_785(to_float(iVar0), 1, 0);
	}
	else
	{
		func_785((to_float(200) / 3f), 1, 0);
	}
}

bool func_589(int iParam0)
{
	return iParam0 != 0;
}

void func_590(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (iParam0 != func_26(0))
	{
		return;
	}
	if (func_769(iParam0) == 0)
	{
	}
	iVar0 = func_27(iParam0);
	if (func_343(iParam0) == 3)
	{
		if (func_769(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_769(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
			{
				func_770(func_27(iParam0), func_769(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_700(iParam0);
	func_701(1);
	func_704(0);
	func_699(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_714(1);
			func_715(15, 0, 1);
			break;
		case 4:
			func_715(10, 0, 1);
			break;
		case 8:
			func_715(10, 0, 1);
			break;
		case 9:
			func_715(10, 0, 1);
			break;
		case 2:
			func_715(10, 0, 1);
			break;
		case 6:
			func_715(10, 0, 1);
			break;
		case 5:
			func_715(10, 0, 1);
			break;
	}
	func_773(1);
}

var func_591(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_592(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_786(sParam1));
}

bool func_593(int iParam0)
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

void func_594(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_593(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_787(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_788(iVar0);
	*uParam0 = 0;
}

void func_595(int iParam0, bool bParam1)
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

void func_596(int iParam0, int iParam1)
{
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	iVar1 = func_584(iParam0);
	if (iVar1 != -1)
	{
		(*Global_1392050)[iVar1]->f_1 |= 16;
	}
	func_789(iVar0, 0, 2);
	func_581(iParam0, iParam1);
}

void func_597(int* iParam0)
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

void func_598(var uParam0)
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

void func_599(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_790(2000);
	Global_16 = 0;
	func_791();
	set_entity_invincible(Global_35, func_792(*uParam0, 8));
	if (!func_792(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_792(*uParam0, 2) || func_792(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_792(*uParam0, 16))
	{
		func_793(1);
	}
	if (func_792(*uParam0, 32))
	{
		func_794(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_795(-1623728698, 0);
	}
	func_796(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_600(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_601(int iParam0, int iParam1, float fParam2)
{
	return func_654(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_602(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_603(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_116())
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
				if (func_797(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_219(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_258(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_798(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_310(func_799(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_604(int iParam0, int iParam1, float fParam2)
{
	fVar0 = get_entity_heading(iParam0);
	vVar1 = { get_entity_coords(iParam0, false, false) };
	vVar4 = { get_entity_coords(iParam1, false, false) };
	fVar7 = func_800(vVar1, vVar4, 1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar7 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar7 > (fVar0 - fParam2) && fVar7 < (fVar0 + fParam2))
	{
		return true;
	}
	return false;
}

bool func_605(int iParam0, int iParam1, vector3 vParam2)
{
	if (is_shocking_event_in_sphere(869302489, vParam2, 13f))
	{
		if (_0x7f9b9791d4cb71f6(iParam0, iParam1, true, 0) == 1)
		{
			return true;
		}
	}
	if (func_219(iParam0, iParam1, 0, 1) < 10f)
	{
		return true;
	}
	return false;
}

void func_606(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_801(iVar0) == iParam0 && func_802(iVar0) == iParam1)
		{
			func_803(iVar0, -1);
			func_804(iVar0, 0);
			func_805(iVar0, 0);
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

void func_607(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_699(iParam0, 0);
}

void func_608(int iParam0)
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

void func_609(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_806(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_769(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_769(iParam0)))
		{
			_0xca41e86545413b5b(func_27(iParam0), func_133(iParam0), func_719(iParam0), func_769(iParam0), Global_36);
		}
	}
	func_699(iParam0, 1);
	bParam1 = bParam1;
}

void func_610(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_342(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (bParam1)
	{
		if (func_769(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_769(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_807(func_133(iParam0));
			}
			if (func_24() != 0)
			{
				_0xb2a38826e5886e83(func_769(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_769(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_808(iParam0);
	if (!func_37(func_26(0)))
	{
		func_699(iParam0, 3);
		func_701(bParam2);
		if (func_24() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_704(1);
		}
		func_809(iParam0, -1);
		if (bParam1 && !func_288(2))
		{
			func_776(&Global_0, 1024);
		}
		if (func_24() == -1)
		{
			func_810(&(Global_1347343->f_11), 536870912);
			func_811(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_812(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_813(0);
			}
		}
		if (func_24() == -1)
		{
			iVar1 = func_722(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_724();
				switch (iVar1)
				{
					case 0:
						func_814(0);
						break;
					case 1:
						func_814(1);
						break;
					case 2:
						func_814(2);
						break;
					case 3:
						func_814(3);
						break;
					case 4:
						func_814(4);
						break;
					case 5:
						func_814(5);
						break;
					case 6:
						func_814(5);
						break;
					case 7:
						func_814(7);
						break;
					case 8:
						func_814(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_133(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_814(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_133(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_814(11);
						break;
					default:
						iVar1 = func_724();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_815(0);
									break;
								case 1:
									func_815(1);
									break;
								case 2:
									func_815(2);
									break;
								case 3:
									func_815(3);
									break;
								case 4:
									func_815(4);
									break;
								case 5:
									func_815(5);
									break;
								case 6:
									func_815(5);
									break;
								case 7:
									func_815(7);
									break;
								case 8:
									func_815(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_773(1);
	}
	else
	{
		func_809(iParam0, -1);
		func_699(iParam0, 4);
	}
	func_721(iParam0, 0);
}

void func_611(int iParam0)
{
	if (func_816(iParam0))
	{
		return;
	}
	iVar0 = func_774(iParam0);
	func_817(iVar0, 16);
}

bool func_612(var uParam0)
{
	if (func_203(&(uParam0->f_7), 1))
	{
		return true;
	}
	return false;
}

float func_613(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_455(vVar0, vParam1);
}

float func_614()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_615(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_616(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_617(int iParam0)
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

int func_618(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_818(iParam1) };
	vVar3 = { func_818(iParam2) };
	return func_819(uParam0, vVar0, vVar3, iParam2);
}

int func_619(var uParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_818(iParam1) };
	return func_819(uParam0, vVar0, vParam2, 0);
}

void func_620(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

bool func_621(vector3 vParam0, int iParam3)
{
	func_820(iParam3, &vVar0, &Var3, &uVar6);
	if (func_821(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_623(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_624(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_625(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	iVar0 = func_822(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_626(int iParam0)
{
	return iParam0 != 0;
}

int func_627(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_150(iParam0, 2))
	{
		return 0;
	}
	if (func_151(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_153(iParam0)))
	{
		return 1;
	}
	if (func_150(iParam0, 1) && !bParam1)
	{
		func_823(iParam0, 128);
		return 1;
	}
	func_154(iParam0, 129);
	func_625(iParam0);
	_0xfc77c5b44d5ff7c0(func_153(iParam0));
	func_152(iParam0, 0);
	return 1;
}

bool func_628(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_629(int iParam0, int iParam1)
{
	if (!func_628(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_630(int iParam0, int iParam1)
{
	if (!func_628(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_631(int iParam0, int iParam1)
{
	if (!func_628(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_632(int iParam0)
{
	func_825(func_824(iParam0));
}

bool func_633(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_634(int iParam0)
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

bool func_635(int iParam0)
{
	if (!func_386(iParam0))
	{
		return false;
	}
	if (!func_304(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_636(int iParam0, bool bParam1)
{
	if (!func_386(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_826(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_637(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_488(iParam0))
		{
			return;
		}
	}
	func_489(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_638(int iParam0)
{
	iVar0 = func_490(iParam0);
	iVar1 = func_636(iParam0, 0);
	func_493(iParam0, iVar0);
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

int func_639(int iParam0)
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

var func_640(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_641(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_827(iParam0);
}

bool func_642(int iParam0, int iParam1)
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

bool func_643(int iParam0, int iParam1)
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

bool func_644(int iParam0, int iParam1)
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
	if (!func_642(iParam0, iVar0))
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

void func_645(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_646()
{
	if (func_828())
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

void func_647(var uParam0, var uParam1)
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

bool func_648(bool bParam0, int iParam1, int iParam2)
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

int func_649(var uParam0)
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

void func_650(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_189(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_190(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_651(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

var func_652(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_653(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_459(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_654(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_655(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_656(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_657(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_658(int iParam0)
{
	func_829();
	if (!func_253(64))
	{
		func_830(512);
		func_830(256);
		func_830(128);
		func_830(1024);
		func_830(2048);
		fLocal_794 = get_random_float_in_range(15f, 30f);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 7:
				if (func_831(16))
				{
					if (func_211())
					{
						func_259(512);
					}
					else
					{
						func_259(2048);
					}
					func_259(64);
				}
				break;
			case 1:
			case 6:
			case 8:
				func_259(128);
				func_259(64);
				break;
			case 3:
			case 4:
				if (func_831(16))
				{
					iVar0 = get_random_int_in_range(0, 3);
					if (iVar0 == 0)
					{
						func_259(128);
					}
					else if (iVar0 == 1)
					{
						func_259(2048);
					}
					else
					{
						func_259(1024);
					}
				}
				else
				{
					func_259(128);
				}
				func_259(64);
				break;
		}
	}
}

bool func_659(int iParam0)
{
	if (!Local_551[0]->f_2)
	{
		func_560(0, func_559(iParam0));
	}
	else if (func_832(&uLocal_759) >= fVar791 && func_661(0, func_559(iParam0)))
	{
		return true;
	}
	return false;
}

void func_660(int iParam0, bool bParam1)
{
	if (func_253(4096))
	{
		func_258(&uLocal_759);
		func_833(0, bParam1);
		func_830(4096);
		func_830(64);
		Local_551[0]->f_2 = 0;
		func_561(iParam0);
	}
}

bool func_661(int iParam0, char[4] cParam1)
{
	if (func_834(&(Local_551[iParam0]), cParam1, func_328(iParam0)))
	{
		return true;
	}
	return false;
}

void func_662(int iParam0, char[4] cParam1, bool bParam2)
{
	func_835(&(Local_551[iParam0]), cParam1, bParam2, func_328(iParam0));
}

void func_663()
{
	if (!_does_anim_scene_exist(&(Local_551[1])))
	{
		return;
	}
	if (func_253(16384))
	{
		return;
	}
	if ((!is_entity_dead(Local_286[3]->f_5) && does_entity_exist(Local_441[6]->f_8)) && _is_anim_scene_loaded(&(Local_551[1]), true, false))
	{
		func_672(Local_286[3]->f_5, -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
		func_254(1, "Ped", Local_286[3]->f_5, 1);
		func_255(1, "table", Local_441[6]->f_8, 1);
		func_259(16384);
	}
}

void func_664(int iParam0, char[4] cParam1)
{
	func_681(&(Local_551[iParam0]), cParam1, func_328(iParam0));
	Local_551[iParam0]->f_2 = 1;
}

void func_665(int iParam0)
{
	iLocal_758 = iParam0;
}

char* func_666()
{
	if (!func_205(Local_286[3]->f_5, 0, 1))
	{
		return "PBL_PISTOL";
	}
	get_current_ped_weapon(Local_286[3]->f_5, &iVar0, true, 0, false);
	if (_is_weapon_two_handed(iVar0))
	{
		return "PBL_RIFLE";
	}
	else if (_is_weapon_one_handed(iVar0))
	{
		return "PBL_PISTOL";
	}
	else
	{
		func_672(Local_286[3]->f_5, -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
	}
	return "PBL_PISTOL";
}

Vector3 func_667(int iParam0, char[4] cParam1, char* sParam2)
{
	return func_836(&(Local_551[iParam0]), cParam1, sParam2);
}

float func_668(int iParam0, char[4] cParam1, char* sParam2)
{
	return func_837(&(Local_551[iParam0]), cParam1, sParam2);
}

bool func_669()
{
	if ((iVar754 > 1 || func_838()) && !is_entity_in_volume(Global_35, Local_15.f_3, true, 0))
	{
		return true;
	}
	return false;
}

void func_670(int iParam0, char* sParam1, var uParam2)
{
	func_839(&(Local_551[iParam0]), func_328(iParam0), sParam1, uParam2);
}

int func_671(int iParam0)
{
	return func_840(&(Local_551[iParam0]), func_328(iParam0));
}

int func_672(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_841(iParam3, 1);
	bVar1 = func_841(iParam3, 2);
	bVar2 = !func_841(iParam3, 4);
	bVar3 = func_841(iParam3, 8);
	bVar4 = !func_841(iParam3, 16);
	bVar5 = func_841(iParam3, 32);
	bVar6 = func_841(iParam3, 64);
	return func_842(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_673(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_843(Global_35) && is_player_teleport_active())
	{
	}
	if (func_844(iParam0))
	{
		if (func_845(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_19(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_673(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_673(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_19(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_19(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_19(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_19(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_19(iParam5, 129))
	{
		if (func_19(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_19(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_19(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_19(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_844(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_19(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_19(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_674(int iParam0)
{
	iLocal_756 = iParam0;
}

void func_675()
{
	if (!_does_anim_scene_exist(&(Local_551[2])))
	{
		return;
	}
	if (func_253(131072))
	{
		return;
	}
	if ((!is_entity_dead(Local_286[0]->f_5) && does_entity_exist(func_846(iVar823, 0, 0))) && _is_anim_scene_loaded(&(Local_551[2]), true, false))
	{
		func_254(2, "PEDA", Local_286[0]->f_5, 1);
		if (!is_entity_dead(Local_286[1]->f_5))
		{
			func_259(262144);
			func_254(2, "PEDB", Local_286[1]->f_5, 1);
		}
		if (!is_entity_dead(Local_286[2]->f_5))
		{
			func_259(524288);
			func_254(2, "PEDC", Local_286[2]->f_5, 1);
		}
		func_255(2, "Door", func_846(iVar823, 0, 0), 1);
		func_259(131072);
	}
}

void func_676(int iParam0, int iParam1)
{
	func_354(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_677(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_847(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

bool func_678(int iParam0, var uParam1)
{
	fVar0 = func_848(uParam1);
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
		fVar2 = func_849(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_850())
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

bool func_679(int iParam0, var uParam1)
{
	if (func_571(iParam0))
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

void func_680(int iParam0, char[4] cParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	_delete_anim_scene(iParam0);
}

void func_681(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (_0x0df57f86fe71dbe5(iParam0, sParam1) || _0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return;
	}
	_0xdf7b5144e25cd3fe(iParam0, sParam1);
}

Vector3 func_682(vector3 vParam0)
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

float func_683(vector3 vParam0, vector3 vParam3)
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

bool func_684(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_685(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_686(bool bParam0)
{
	return func_551(*bParam0, 2);
}

bool func_687(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_688(bool bParam0, float fParam1)
{
	if (func_415(bParam0, fParam1))
	{
		func_851(bParam0);
		return true;
	}
	return false;
}

void func_689(var uParam0)
{
	if (is_ped_on_mount(*uParam0))
	{
		set_ped_accuracy(*uParam0, floor((0.1f * IntToFloat(get_ped_accuracy(*uParam0)))));
	}
}

bool func_690(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (func_205(uParam0->f_5, 0, 1))
	{
		iVar0 = get_best_ped_weapon(uParam0->f_5, false, false);
		if (!func_203(&(uParam0->f_7), 512))
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
						func_852(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				task_combat_ped(0, Global_35, iParam5, 0);
				func_263(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
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
				func_389(uParam0, 831283580, 0);
			}
		}
		return true;
	}
	return false;
}

bool func_691(int iParam0, var uParam1, var uParam2)
{
	if (!func_388(uParam1->f_1))
	{
		if (is_entity_at_coord(uParam2->f_5, uParam1->f_1, 4f, 4f, 4f, false, false, 0))
		{
			return true;
		}
		if (!func_853(&(uParam1->f_5), 1))
		{
			return false;
		}
	}
	fVar1 = func_446(uParam2->f_5, Global_36, 0);
	fVar0 = func_446(uParam2->f_5, iParam0->f_202, 0);
	if (fVar0 < IntToFloat(uParam1->f_6))
	{
		return true;
	}
	if (fVar1 < 17f)
	{
		return true;
	}
	if (func_432(uParam2->f_5, Global_35, 1, (17f + 5f), 0))
	{
		return true;
	}
	return false;
}

bool func_692(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_19(*iParam1, 128))
	{
		if (!func_854(iParam0, 1245594896))
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
	if (func_19(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_855(iVar2))
			{
				return false;
			}
			if (!func_854(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_856(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_19(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_651(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_857(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_19(*iParam1, 4))
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
	if (func_19(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_855(iVar2))
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
		if (!func_651(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_651(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_651(iParam2, 8192))
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
		if (func_19(*iParam1, 2336))
		{
			if (!func_855(iVar2))
			{
			}
			if (func_858(iVar2, *iParam1))
			{
				func_859(iParam1, 32);
				func_859(iParam1, 256);
				func_859(iParam1, 2048);
				func_857(iParam1, 512);
				func_857(iParam1, 1024);
				func_857(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_19(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_855(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_859(iParam1, 64);
			}
		}
		if (func_651(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_651(iParam2, 1024))) || func_651(iParam2, 8)) && !func_19(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_857(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_651(iParam2, 4096)) && !func_19(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_857(iParam1, 2048);
			func_857(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_651(iParam2, 32)) && !func_19(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_857(iParam1, 256);
			func_857(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_857(iParam1, 64);
		}
		else if (!func_651(iParam2, 1))
		{
			if (!func_651(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_856(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_19(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_857(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_857(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_651(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_857(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_651(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_857(iParam1, 8);
	}
	return false;
}

void func_693(var uParam0)
{
	set_ped_accuracy(*uParam0, floor(((1f / 0.1f) * IntToFloat(get_ped_accuracy(*uParam0)))));
}

void func_694(var uParam0)
{
	if (func_205(*uParam0, 0, 1))
	{
		set_ped_relationship_group_hash(*uParam0, -767591988);
		set_blocking_of_non_temporary_events(*uParam0, false);
	}
}

bool func_695(var uParam0)
{
	if (-1829635046 == func_860(81053684))
	{
		if (func_861(uParam0))
		{
			return true;
		}
	}
	else if (func_862(-525676072, uParam0))
	{
		if (func_861(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_696()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_697(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_863();
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
	iVar4 = func_713(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_713(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_864())
		{
			func_865(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_866())
		{
			func_865(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_867())
		{
			func_865(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_868())
	{
		func_865(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_292(func_585(661720433), iVar1);
	iVar10 = func_863();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

void func_698(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

void func_699(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_869(iParam0, iParam1);
}

int func_700(int iParam0)
{
	return func_871(func_870(iParam0));
}

void func_701(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_600(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_290(Global_1935630, 4194304);
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

int func_702(bool bParam0, int iParam1)
{
	if (!bParam0 && func_195(373691918))
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
	func_704(bParam0);
	return 1;
}

void func_703()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_386(iVar17))
		{
			iVar18 = func_490(iVar17);
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
	func_851(&(Global_1359489->f_55));
	if (func_872(1777191912, 1))
	{
		func_873(1777191912, 1, 0);
	}
}

int func_704(bool bParam0)
{
	if (!bParam0 && func_195(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_705(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_775(iParam0, (func_495(iParam0) + shift_left(1, 16)));
}

bool func_706()
{
	return func_874() > 0;
}

void func_707(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_875(-1032423150, iParam1);
			break;
		case 18:
			func_875(294066959, iParam1);
			func_875(-1925639563, iParam1);
			func_875(-378582304, iParam1);
			func_875(-338306437, iParam1);
			break;
		case 20:
			func_875(437270255, iParam1);
			break;
		case 2:
			func_875(-304000413, iParam1);
			func_875(-533612796, iParam1);
			func_875(48036954, iParam1);
			break;
		case 23:
			func_875(193108691, iParam1);
			func_875(491732588, iParam1);
			func_875(671962088, iParam1);
			func_876(1);
			break;
		case 16:
			func_875(-1836056650, iParam1);
			func_875(-754657922, iParam1);
			func_875(-1752355838, iParam1);
			func_875(-1375324510, iParam1);
			break;
		case 59:
			func_875(-514392105, iParam1);
			func_875(-822060246, iParam1);
			if (func_877(146))
			{
				func_875(1372748575, iParam1);
			}
			func_876(1);
			break;
		case 76:
			func_875(1991352213, iParam1);
			if (func_878() == 0)
			{
				func_875(1852488616, iParam1);
			}
			else
			{
				func_875(-9866350, iParam1);
			}
			break;
		case 44:
			func_875(863852599, iParam1);
			func_875(1228374935, iParam1);
			func_875(1517889050, iParam1);
			func_875(830657578, iParam1);
			func_875(1901354958, iParam1);
			break;
		case 46:
			func_875(-582805654, iParam1);
			func_875(250378940, iParam1);
			func_875(-2143265426, iParam1);
			break;
		case 17:
			func_875(-941494139, iParam1);
			func_875(1641489521, iParam1);
			break;
		case 19:
			func_875(-1829423531, iParam1);
			func_875(-1590504752, iParam1);
			func_875(1357221321, iParam1);
			break;
		case 21:
			func_875(-1037992610, iParam1);
			func_875(-1286414399, iParam1);
			func_876(0);
			break;
		case 15:
			func_875(-1014460309, iParam1);
			func_875(-1030502825, iParam1);
			break;
		case 33:
			func_875(479388090, iParam1);
			func_875(-1396342239, iParam1);
			func_875(-619618632, iParam1);
			break;
		case 34:
			func_875(1193561641, iParam1);
			break;
		case 64:
			func_875(1363960851, iParam1);
			break;
		case 60:
			func_875(-1232453926, iParam1);
			func_875(-882833584, iParam1);
			break;
		case 73:
			func_875(2023205767, iParam1);
			break;
		case 74:
			func_875(-2135286513, iParam1);
			if (func_878() == 0)
			{
				func_875(33799444, iParam1);
			}
			else
			{
				func_875(-161343203, iParam1);
			}
			break;
		case 8:
			func_875(841639693, iParam1);
			func_875(358952323, iParam1);
			break;
		case 36:
			func_875(852538149, iParam1);
			func_875(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_875(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_875(1116039310, iParam1);
			}
			break;
		case 27:
			func_875(107633428, iParam1);
			func_875(335902282, iParam1);
			func_875(575673055, iParam1);
			func_875(-425944207, iParam1);
			break;
		case 28:
			func_875(-1941530250, iParam1);
			func_875(1399269304, iParam1);
			func_875(1839684664, iParam1);
			func_875(923168503, iParam1);
			func_875(-1485078322, iParam1);
			break;
		case 29:
			func_875(574995900, iParam1);
			func_875(-1691275407, iParam1);
			func_875(-1725307861, iParam1);
			break;
		case 31:
			func_875(-2108383238, iParam1);
			func_875(-1321828931, iParam1);
			func_875(-1632118592, iParam1);
			func_875(334938948, iParam1);
			break;
		case 4:
			func_875(115823701, iParam1);
			func_875(-1896939736, iParam1);
			func_875(-1830746356, iParam1);
			func_875(-1235169781, iParam1);
			func_876(0);
			break;
		case 6:
			func_875(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_875(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_875(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_875(-384176140, iParam1);
			}
			break;
		case 25:
			func_875(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_875(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_875(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_875(-1374849484, iParam1);
			}
			break;
		case 48:
			func_875(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_875(217772674, iParam1);
			}
			else
			{
				func_875(2071798160, iParam1);
			}
			if (func_879(51))
			{
				func_875(-792802286, iParam1);
			}
			break;
		case 49:
			func_875(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_875(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_875(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_875(1402120602, iParam1);
			}
			break;
		case 58:
			func_875(-1661934591, iParam1);
			break;
		case 50:
			func_875(-1713759426, iParam1);
			break;
		case 52:
			func_875(-314799932, iParam1);
			func_875(-462260432, iParam1);
			func_875(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_875(345256028, iParam1);
				func_875(-1635084094, iParam1);
			}
			else
			{
				func_875(114267347, iParam1);
			}
			break;
		case 32:
			func_875(615304157, iParam1);
			break;
		case 47:
			func_875(415434835, iParam1);
			break;
		case 69:
			func_875(1373465877, iParam1);
			if (func_128((*Global_1347702)[9]->f_15, 1))
			{
				func_875(-2058273527, iParam1);
			}
			break;
		case 70:
			func_875(451334985, iParam1);
			if (func_878() == 0)
			{
				func_875(-224150200, iParam1);
			}
			else
			{
				func_875(289012628, iParam1);
			}
			break;
		case 71:
			if (func_878() == 0)
			{
				func_875(-41692120, iParam1);
			}
			else
			{
				func_875(1537840678, iParam1);
			}
			break;
		case 37:
			func_875(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_875(1842132550, iParam1);
			}
			else
			{
				func_875(-785735240, iParam1);
			}
			func_875(-1605690566, iParam1);
			break;
		case 13:
			func_875(-731367459, iParam1);
			func_875(224176585, iParam1);
			func_875(-14545580, iParam1);
			break;
		case 53:
			func_875(1095274522, iParam1);
			break;
		case 54:
			func_875(-572027988, iParam1);
			break;
		case 56:
			func_875(1339307101, iParam1);
			func_875(2102267732, iParam1);
			break;
		case 57:
			func_875(710102686, iParam1);
			break;
		case 22:
			func_875(-1754368482, iParam1);
			func_875(-2071408557, iParam1);
			break;
		case 12:
			func_875(-181334543, iParam1);
			break;
		case 0:
			func_875(-2134669864, iParam1);
			func_875(-548289709, iParam1);
			func_875(-911271922, iParam1);
			func_875(-604455775, iParam1);
			break;
		case 1:
			func_876(1);
			break;
		case 3:
			if (func_32())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_875(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_875(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_708()
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

void func_709(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_875(-145926707, iParam1);
			func_875(-604922090, iParam1);
			func_875(-848690769, iParam1);
			break;
		case 1:
			func_875(-1477631591, iParam1);
			break;
		case 2:
			func_875(76112544, iParam1);
			break;
		case 9:
			func_875(1396404308, iParam1);
			func_875(-1357381228, iParam1);
			if (func_128((*Global_1835011)[69]->f_1, 1))
			{
				func_875(1902679064, iParam1);
			}
			else
			{
				func_875(-2146422425, iParam1);
			}
			break;
		case 22:
			func_875(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_875(-1934184559, iParam1);
				func_875(1281755988, iParam1);
			}
			else
			{
				func_875(-1745220872, iParam1);
				func_875(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_875(-1641504538, iParam1);
				func_875(-988014485, iParam1);
			}
			else if (func_877(26))
			{
				func_875(-343043950, iParam1);
				func_875(-640062214, iParam1);
			}
			else
			{
				func_875(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_875(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_875(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_875(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_875(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_875(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_875(1301690984, iParam1);
				}
			}
			else
			{
				func_875(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_875(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_875(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_875(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_875(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_875(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_875(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_875(-754570528, iParam1);
			}
			else
			{
				func_875(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_875(-2072125821, iParam1);
			}
			else
			{
				func_875(270040030, iParam1);
			}
			break;
		case 37:
			func_875(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_875(-505314737, iParam1);
				func_875(-1853052860, iParam1);
			}
			else
			{
				func_875(-1975624994, iParam1);
				func_875(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_875(1690231002, iParam1);
			}
			else
			{
				func_875(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_875(1225386280, iParam1);
			}
			else if (func_877(54))
			{
				func_875(-283235773, iParam1);
			}
			else
			{
				func_875(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_875(1355398007, iParam1);
			}
			else
			{
				func_875(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_875(574636806, iParam1);
			}
			else
			{
				func_875(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_875(821118338, iParam1);
			}
			else if (func_877(39))
			{
				func_875(846829260, iParam1);
			}
			else
			{
				func_875(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_641((*Global_1835011)[33]->f_1) == 1)
				{
					func_875(1422779093, iParam1);
				}
				else
				{
					func_875(-1769536986, iParam1);
				}
			}
			else
			{
				func_875(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_875(352134789, iParam1);
			}
			else if (func_877(43))
			{
				func_875(260723113, iParam1);
			}
			else
			{
				func_875(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_875(-457958799, iParam1);
			}
			else
			{
				func_875(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_877(41))
			{
				func_875(-546824600, iParam1);
			}
			else
			{
				func_875(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_875(1297261593, iParam1);
			}
			else
			{
				func_875(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_875(2068484886, iParam1);
			}
			else if (func_877(49))
			{
				func_875(-1489080639, iParam1);
				func_875(-2102244050, iParam1);
			}
			else
			{
				func_875(-1863040467, iParam1);
			}
			break;
		case 51:
			func_875(-2055943209, iParam1);
			break;
		case 58:
			if (func_128((*Global_1347702)[23]->f_15, 1))
			{
				func_875(1650066845, iParam1);
			}
			else
			{
				func_875(151370023, iParam1);
			}
			func_875(1426057961, iParam1);
			func_875(476379584, iParam1);
			break;
		case 59:
			func_875(-1638117866, iParam1);
			break;
		case 62:
			func_875(199541730, iParam1);
			break;
		case 63:
			func_875(1703485804, iParam1);
			func_875(-800449045, iParam1);
			break;
		case 65:
			func_875(-1678210868, iParam1);
			func_875(-1448238026, iParam1);
			func_875(-1200864845, iParam1);
			func_875(1473511536, iParam1);
			break;
		case 66:
			func_875(-1774490051, iParam1);
			func_875(-34645921, iParam1);
			func_875(174027075, iParam1);
			func_875(-1155999, iParam1);
			func_876(1);
			break;
		case 67:
			func_875(701612593, iParam1);
			func_875(-1069631343, iParam1);
			func_875(1673428882, iParam1);
			break;
		case 68:
			func_875(-739133286, iParam1);
			func_875(-2130089358, iParam1);
			func_875(2056190391, iParam1);
			func_875(1941753817, iParam1);
			func_876(0);
			break;
		case 70:
			func_875(-1217555753, iParam1);
			break;
		case 71:
			func_875(697048821, iParam1);
			break;
		case 73:
			func_875(-553148661, iParam1);
			break;
		case 75:
			func_875(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_875(1414263863, iParam1);
			}
			else
			{
				func_875(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_875(1835465936, iParam1);
				func_875(523715611, iParam1);
			}
			else if (func_877(78))
			{
				func_875(1420338873, iParam1);
			}
			else
			{
				func_875(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_875(10180941, iParam1);
			}
			else if (func_877(79))
			{
				func_875(768420635, iParam1);
			}
			else
			{
				func_875(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_875(-383601523, iParam1);
			}
			else
			{
				func_875(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_875(1606472408, iParam1);
			}
			else
			{
				func_875(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_875(-203571927, iParam1);
			}
			else
			{
				func_875(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_875(729886222, iParam1);
			}
			else
			{
				func_875(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_875(-714816362, iParam1);
			}
			else
			{
				func_875(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_875(-932932179, iParam1);
				func_875(-1458537240, iParam1);
			}
			else
			{
				func_875(-1764383885, iParam1);
				func_875(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_875(1741466706, iParam1);
			}
			else
			{
				func_875(1405815775, iParam1);
			}
			break;
		case 94:
			func_875(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_875(1905280979, iParam1);
			}
			else
			{
				func_875(-1966245299, iParam1);
			}
			func_875(721468880, iParam1);
			break;
		case 99:
			func_875(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_875(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_875(-1117781095, iParam1);
				}
				else
				{
					func_875(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_875(141494548, iParam1);
			}
			else
			{
				func_875(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_875(-369525697, iParam1);
			}
			else if (func_877(101))
			{
				func_875(1595015219, iParam1);
			}
			else
			{
				func_875(-321486961, iParam1);
			}
			break;
		case 103:
			func_875(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_875(793460477, iParam1);
				func_875(-1610242176, iParam1);
			}
			else if (func_877(103))
			{
				func_875(1830897187, iParam1);
			}
			else
			{
				func_875(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_875(1528309077, iParam1);
			}
			else if (func_877(104))
			{
				func_875(1864966105, iParam1);
			}
			else
			{
				func_875(-103336013, iParam1);
			}
			break;
		case 108:
			func_875(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_875(-1123227713, iParam1);
				func_875(-889574341, iParam1);
			}
			else
			{
				func_875(2065385917, iParam1);
				func_875(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_875(-887421691, iParam1);
			}
			else if (func_877(109))
			{
				func_875(-1318117949, iParam1);
			}
			else
			{
				func_875(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_875(284822762, iParam1);
				}
				else
				{
					func_875(-1425017554, iParam1);
				}
			}
			else if (func_877(110))
			{
				if (&Global_1357515 == 0)
				{
					func_875(553087292, iParam1);
				}
				else
				{
					func_875(-1766870331, iParam1);
					func_875(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_875(-1980598735, iParam1);
			}
			else
			{
				func_875(-442732098, iParam1);
				func_875(1955756409, iParam1);
			}
			break;
		case 115:
			func_875(394303528, iParam1);
			func_875(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_875(1182403394, iParam1);
			}
			else
			{
				func_875(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_875(924445424, iParam1);
			}
			else
			{
				func_875(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_875(430755273, iParam1);
				func_875(-1473879802, iParam1);
			}
			else
			{
				func_875(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_875(73885747, iParam1);
			}
			else if (func_877(117))
			{
				func_875(1559707913, iParam1);
			}
			else
			{
				func_875(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_875(-2103887972, iParam1);
			}
			else if (func_877(118))
			{
				func_875(-435828462, iParam1);
			}
			else
			{
				func_875(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_875(2054486196, iParam1);
			}
			else
			{
				func_875(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_875(-570086056, iParam1);
			}
			else if (func_877(121))
			{
				func_875(32337856, iParam1);
			}
			else
			{
				func_875(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_875(813493663, iParam1);
			}
			else if (func_877(122))
			{
				func_875(-2132763590, iParam1);
			}
			else
			{
				func_875(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_875(-66240572, iParam1);
				func_875(1563075046, iParam1);
			}
			else
			{
				func_875(-787011772, iParam1);
				func_875(-1523377438, iParam1);
			}
			break;
		case 127:
			func_875(61020800, iParam1);
			break;
		case 129:
			func_875(428985222, iParam1);
			break;
		case 131:
			func_875(-1393851036, iParam1);
			break;
		case 133:
			func_875(1559531342, iParam1);
			break;
		case 134:
			func_875(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_875(-1374407408, iParam1);
				}
				else
				{
					func_875(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_875(-472672138, iParam1);
				}
				else
				{
					func_875(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_875(-1678710489, iParam1);
			}
			else
			{
				func_875(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_875(1717582460, iParam1);
			}
			else
			{
				func_875(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_875(1568112362, iParam1);
				func_875(1388317526, iParam1);
			}
			else if (func_877(136))
			{
				func_875(-1597534828, iParam1);
				func_875(-1207918353, iParam1);
			}
			else
			{
				func_875(-1940891082, iParam1);
				func_875(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_875(448334530, iParam1);
				func_875(2145375502, iParam1);
			}
			else
			{
				func_875(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_875(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_875(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_875(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_875(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_875(-66616327, iParam1);
			}
			else
			{
				func_875(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_875(1862916706, iParam1);
			}
			else if (func_877(147))
			{
				func_875(675105199, iParam1);
			}
			else
			{
				func_875(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_875(174409701, iParam1);
			}
			else if (func_877(148))
			{
				func_875(-1730895475, iParam1);
			}
			else
			{
				func_875(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_875(1295237052, iParam1);
			}
			else if (func_877(149))
			{
				func_875(-788577684, iParam1);
			}
			else
			{
				func_875(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_710(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_27(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_880(iParam0);
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
					if (func_641((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_133(iParam0);
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
			iVar3 = func_133(iParam0);
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

int func_711(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_881(iParam0);
	iVar3 = func_882(iParam0);
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
				iVar1 = func_148();
				func_40(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_883(iParam0, 1);
			if (func_884(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_885(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_886(1, iParam0);
				}
				else
				{
					func_887(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_712(int iParam0, int iParam1)
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

int func_713(int iParam0, int iParam1, int iParam2)
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

void func_714(bool bParam0)
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

void func_715(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_888(iParam0, iParam1, bParam2);
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

int func_716(int iParam0, int iParam1)
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

bool func_717(int iParam0)
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

void func_718(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_24() != -1)
	{
		return;
	}
	if ((Global_36616 && func_889(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_890(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_891(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_892(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_891(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_719(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_893(func_136(iParam0));
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_721(int iParam0, bool bParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_26(0) != iParam0)
	{
		return;
	}
	if (func_894(iParam0))
	{
		if (bParam1)
		{
			func_895(-525676072);
		}
		else
		{
			func_896(-525676072);
		}
	}
}

int func_722(int iParam0)
{
	switch (func_27(iParam0))
	{
		case 1:
			iVar0 = func_133(iParam0);
			return func_897(iVar0);
		case 8:
			iVar1 = func_133(iParam0);
			if (func_135((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_898(iVar1);
			}
			break;
	}
	return -1;
}

void func_723(bool bParam0)
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
		func_899(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_900();
		Global_1898077->f_9 = func_901(Global_1894899->f_2);
		func_902(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_724()
{
	if (!func_128((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_128((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_128((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_128((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_128((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_128((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_128((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_725()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_475())
	{
		return false;
	}
	if (!func_128((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_128((*Global_1835011)[2]->f_1, 1) && func_128((*Global_1347702)[120]->f_15, 1)) && !func_128((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_128((*Global_1835011)[37]->f_1, 1) && !func_128((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_128((*Global_1835011)[57]->f_1, 1) && !func_128((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_128((*Global_1835011)[26]->f_1, 1) && !func_128((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_128((*Global_1835011)[62]->f_1, 1) && func_128((*Global_1835011)[63]->f_1, 1)) && !func_128((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_128((*Global_1835011)[75]->f_1, 1) && !func_128((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_128((*Global_1835011)[76]->f_1, 1) && !func_128((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_128((*Global_1835011)[40]->f_1, 1) && func_128((*Global_1835011)[41]->f_1, 1)) && !func_128((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_128((*Global_1835011)[62]->f_1, 1) && func_128((*Global_1835011)[63]->f_1, 1)) && !func_128((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_128((*Global_1835011)[65]->f_1, 1) && func_128((*Global_1835011)[66]->f_1, 1)) && !func_128((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_726()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_903(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_727(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (!func_905(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_906(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_907(iParam0, bParam2);
	iVar2 = 0;
	if (func_908(iParam0, 0, 0) == 0)
	{
		if (func_909(iParam0))
		{
			iVar5 = func_910(iParam0);
			iVar6 = func_911(iVar5);
			iVar7 = func_912(iVar6) + 1;
			func_913(iVar5);
			if (func_914(38))
			{
				func_734(483, 0);
			}
			else
			{
				func_734(482, 0);
			}
			if (iVar7 == func_915(iVar6))
			{
				func_727(func_916(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_475() && func_917(4))
				{
					if (func_475() && (func_918(38) || func_914(38)))
					{
						func_920(38, func_916(iVar6), 0, 0, func_919(), 0, -1, 0);
						func_921(2);
					}
					else
					{
						func_920(38, func_916(iVar6), 0, 0, func_919(), 0, -1, 0);
						func_921(1);
					}
				}
			}
			else if (func_475() && func_917(4))
			{
				if (func_475() && (func_918(38) || func_914(38)))
				{
					func_920(38, 0, 0, 0, func_919(), 0, -1, 0);
					func_921(2);
				}
				else
				{
					func_920(38, 0, 0, 0, func_919(), 0, -1, 0);
					func_921(1);
				}
			}
			if (func_475() && func_917(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_475() && (func_918(38) || func_914(38)))
					{
						func_922(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_922(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_923(iParam0) == -1037537535)
	{
		if ((!func_924(iParam0, 866047851) && !func_924(iParam0, -1979000645)) && !func_924(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_925(iParam0, 8388608) && !func_472(28))
	{
		func_926(28);
	}
	if (!bVar3)
	{
		if (func_924(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_927(iParam0) == -1447088266)
			{
				iVar1 = func_929(func_928(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_24() == -1)
					{
						func_930(iVar1);
					}
					if (func_931(0) && func_932(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_933(iParam0, iVar0, iParam5);
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
						func_930(iParam0);
					}
					if (func_931(0) && func_932(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_933(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_923(iParam0) == -427144552)
		{
			if (!func_934(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_923(iParam0) == 307971639 && func_935(iParam0))
		{
			if (!func_936(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_924(iParam0, 866047851))
		{
			func_937(iParam0);
		}
		else if (func_924(iParam0, 2000026003))
		{
			func_938(iParam0);
		}
		else if (func_924(iParam0, -103750053))
		{
			func_292(func_939(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_292(func_291(-717883113, 2091222383), iVar0);
		}
		else if (func_924(iParam0, -121341956) && !func_924(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_128((*Global_1835011)[4]->f_1, 1))
				{
					func_734(498, 0);
				}
			}
			if (func_924(iParam0, -2017733358) || func_924(iParam0, -1369131378))
			{
				func_940(iParam0);
			}
		}
		else if (func_924(iParam0, -136654233))
		{
			if (func_924(iParam0, -1021472396))
			{
			}
		}
		else if (func_924(iParam0, -1466706512) && func_924(iParam0, 1147021565))
		{
			func_734(484, 0);
		}
		else if (func_924(iParam0, 1147021565) && func_924(iParam0, -524514947))
		{
		}
		else if (func_924(iParam0, 554195525))
		{
		}
		else if (func_924(iParam0, 589988438))
		{
			if (func_941())
			{
				func_942(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_924(iParam0, 787083290) && func_924(iParam0, 949916894))
		{
			func_943(iParam0);
		}
		else if (func_924(iParam0, -1718133314))
		{
			func_944(iParam0);
		}
		else if (func_924(iParam0, -1738650224))
		{
			func_945(iParam0);
		}
		else if (func_924(iParam0, -1112814642) && func_924(iParam0, 949916894))
		{
			func_946(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_924(iParam0, 1841149704))
		{
			func_947();
		}
		else if (func_924(iParam0, 606799272))
		{
			func_948(iParam0, iParam1);
			func_949(iParam0);
		}
		else if (func_924(iParam0, -1112814642) && func_924(iParam0, -1697809989))
		{
			func_950(iParam0, 0, 0, 0);
		}
		else if (func_924(iParam0, -2017733358) || func_924(iParam0, -1369131378))
		{
			func_940(iParam0);
		}
		else if (func_924(iParam0, -1921346699))
		{
			if (func_24() != -1)
			{
				return false;
			}
			func_951(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_924(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_752(215778062, 1, 0))
					{
						func_727(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_752(670273567, 1, 0))
					{
						func_727(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_752(-967317137, 1, 0))
					{
						func_727(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_752(526074061, 1, 0))
					{
						func_727(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_752(-1045488665, 1, 0))
					{
						func_727(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_752(471514780, 1, 0))
					{
						func_727(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_924(iParam0, -839724752) && func_925(iParam0, 4))
		{
			if (!func_914(42))
			{
				func_952(iParam0);
			}
		}
		else if (func_924(iParam0, 1399091007))
		{
			func_953(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_924(iParam0, 1248798204))
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
				func_727(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_926(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_794(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_954(&iVar9, 0))
				{
					func_932(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_24() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_794(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_734(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_955();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_956();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_957();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_958();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_959();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_960(499813453, 854119837, 0);
				func_961(499813453, 0);
				func_962(1);
				break;
			case 2127812557:
				func_960(499813453, -1292544588, 0);
				func_961(499813453, 0);
				func_962(2);
				break;
			case 808991383:
				func_960(499813453, -1003325394, 0);
				func_961(499813453, 0);
				func_962(4);
				break;
			case 1134518629:
				func_960(666607663, -335460405, 0);
				func_961(666607663, 0);
				func_963(1);
				break;
			case 902940106:
				func_960(666607663, 903797617, 0);
				func_961(666607663, 0);
				func_963(2);
				break;
			case -418174898:
				func_960(666607663, 669728650, 0);
				func_961(666607663, 0);
				func_963(4);
				break;
			case -648114971:
				func_960(-220219788, 1214120047, 0);
				func_961(-220219788, 0);
				func_964(1);
				break;
			case 211153747:
				func_960(-220219788, 655769340, 0);
				func_961(-220219788, 0);
				func_964(2);
				break;
			case -32876996:
				func_960(-220219788, 885316185, 0);
				func_961(-220219788, 0);
				func_964(4);
				break;
			case 1191437462:
				func_960(218622660, -1491419385, 0);
				func_961(218622660, 0);
				func_965(1);
				break;
			case 1119149048:
				func_960(218622660, 1809565830, 0);
				func_961(218622660, 0);
				func_965(2);
				break;
			case 506073827:
				func_960(390004462, -628873767, 0);
				func_961(390004462, 0);
				func_966(1);
				break;
			case -1876986168:
				func_960(390004462, -405421956, 0);
				func_961(390004462, 0);
				func_966(2);
				break;
			case 2142623221:
				func_960(390004462, -1108972386, 0);
				func_961(390004462, 0);
				func_966(4);
				break;
			case 1508215381:
				func_960(6410548, 1053716392, 0);
				func_961(6410548, 0);
				func_967(1);
				break;
			case -888935280:
				func_960(6410548, 806507056, 0);
				func_961(6410548, 0);
				func_967(2);
				break;
			case -1252474566:
				func_960(6410548, 1571925350, 0);
				func_961(6410548, 0);
				func_967(4);
				break;
			case -1465702449:
				func_960(6410548, 1330352282, 0);
				func_961(6410548, 0);
				func_967(8);
				break;
			case -21093309:
				func_969(242, func_968(-21093309), 0);
				break;
			case 204375141:
				func_969(240, func_968(204375141), 0);
				break;
			case -417963070:
				func_969(241, func_968(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_970(594, 1934060482, 1, 1);
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
					func_970(594, 1110018439, 1, 1);
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
					func_970(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_970(594, -1228016946, 1, 1);
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
					func_970(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_970(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_734(488, 0);
				break;
			case 1613651027:
				func_734(491, 0);
				break;
			case -885810591:
				func_734(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_727(func_971(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_727(func_972(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_472(1))
				{
					func_734(487, 0);
				}
				break;
			case -898386032:
				func_734(486, 0);
				break;
			case -2035110427:
				if (func_24() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_734(496, 0);
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
		func_973(&iVar10);
		if (!func_974(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_931(0))
		{
			return true;
		}
		if (func_923(iParam0) == -1037537535)
		{
			func_975(iParam0);
		}
		if (func_924(iParam0, -1979000645))
		{
			func_976(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_931(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_727(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_977(iVar2, 0);
		}
	}
	Var35 = { func_978(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_979(iParam0);
	if (fParam6 > 0f)
	{
		if (func_924(iParam0, -839724752))
		{
			func_980(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_981(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_728(int iParam0)
{
	if (func_924(iParam0, 1989861793))
	{
		iVar0 = func_982(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_983(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_984(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_985(iVar14, iVar1);
					if (iVar15 != iParam0 && func_904(iVar15, 0))
					{
						if (func_986(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_987(iVar1);
				if (bVar13)
				{
					func_988(iParam0);
				}
				else
				{
					func_734(306, 0);
				}
			}
		}
	}
}

void func_729()
{
	if (func_24() != -1)
	{
		return;
	}
	func_989();
	func_990();
	func_991();
	func_992();
	func_993();
	func_994();
	func_995();
}

void func_730(int iParam0)
{
	func_996(iParam0, 1, 1, -142743235, 1);
	if (func_997(iParam0))
	{
		func_998(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1000(func_999(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1001(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_1002() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1003(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1003(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_1004(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_1004(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_1004(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_1004(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_1004(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_1004(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_1004(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_1004(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_1004(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1005(iVar8, iVar0))
				{
					func_1006(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1005(iVar8, iVar0))
		{
			func_1006(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_731()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1005(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_1002() == -2125499975 || func_1002() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1006(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1006(&vVar2, iVar5, iVar0);
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

void func_732()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_903(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_733(int iParam0, bool bParam1)
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
			if ((func_128((*Global_1835011)[59]->f_1, 1) || func_128((*Global_1347702)[1]->f_15, 1)) || func_196((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_872(403634348, 1))
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

void func_734(int iParam0, bool bParam1)
{
	func_460(iParam0, &iVar0, &iVar1);
	if (!func_1007(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1008(iVar0, iVar1);
}

void func_735(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_1000(iParam0, 1);
	func_1009(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_1009(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_1010(17, iParam0, 0, 0, 0);
		}
	}
	if (func_24() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1009(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_1009(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_736()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_903(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_737()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_903(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_738(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1011(iParam1, 1, 0) };
		iParam3 = func_1012(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1013(iParam3);
	return func_794(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_739(int iParam0)
{
	if (!func_1014(iParam0))
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

bool func_740(int iParam0, int iParam1)
{
	if (!func_1015(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1016(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1017(Global_40.f_9910[iParam1], 4);
}

void func_741(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1015(iParam0))
	{
		return;
	}
	if (!func_317(iParam1))
	{
		return;
	}
	if (func_41(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_740(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1018(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_583(0, 17);
		}
	}
}

void func_742()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_903(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_743()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_903(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

void func_744()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_903(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_745()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_903(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_746()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_903(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_747()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_903(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_748()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_903(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_749()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_903(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_750(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_751(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_752(int iParam0, int iParam1, bool bParam2)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_923(iParam0);
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
		if (!func_1019(iParam0, 1))
		{
			return false;
		}
	}
	return func_908(iParam0, 0, bParam2) >= iParam1;
}

void func_753(int iParam0)
{
	if (func_288(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1020(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1020(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_754()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_903(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_755()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_903(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_756()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_903(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_757()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_903(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_758()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_903(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_759()
{
	if (func_1021() > 1)
	{
		func_1022();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_734(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_734(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_734(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_734(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_734(452, 1);
		}
	}
}

bool func_760(int iParam0)
{
	return func_487(iParam0, 4, 1);
}

void func_761(int iParam0)
{
	func_1023(iParam0, 4, 1);
}

void func_762(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_585(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_763(int iParam0)
{
	if (func_288(32768))
	{
		return;
	}
	if (!func_37(iParam0))
	{
		return;
	}
	func_290(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_27(iParam0))
	{
		case 1:
			func_292(func_291(909007663, -587839005), 1);
			iVar0 = func_133(iParam0);
			func_292(func_585(-634848880), 1);
			switch (func_897(iVar0))
			{
				case 0:
					func_292(func_291(909007663, 1325140787), 1);
					break;
				case 1:
					func_292(func_291(909007663, 2101241783), 1);
					break;
				case 2:
					func_292(func_291(909007663, -1296936294), 1);
					break;
				case 3:
					func_292(func_291(909007663, -798388728), 1);
					break;
				case 4:
					func_292(func_291(909007663, -1787586531), 1);
					break;
				case 5:
					func_292(func_291(909007663, -1002834519), 1);
					break;
				case 6:
					func_292(func_291(909007663, -50600144), 1);
					break;
				case 7:
					func_292(func_291(909007663, -348503123), 1);
					break;
				case 8:
					func_292(func_291(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_292(func_291(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_292(func_291(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_133(iParam0);
			if (func_135((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_292(func_585(-634848880), 1);
			}
			if (func_135((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_135((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_292(func_291(909007663, -587839005), 1);
				}
				else
				{
					func_292(func_291(909007663, -2049243343), 1);
				}
			}
			if (func_135((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_898(iVar1))
				{
					case 0:
						func_292(func_291(909007663, 1325140787), 1);
						break;
					case 1:
						func_292(func_291(909007663, 2101241783), 1);
						break;
					case 2:
						func_292(func_291(909007663, -1296936294), 1);
						break;
					case 3:
						func_292(func_291(909007663, -798388728), 1);
						break;
					case 4:
						func_292(func_291(909007663, -1787586531), 1);
						break;
					case 5:
						func_292(func_291(909007663, -1002834519), 1);
						break;
					case 6:
						func_292(func_291(909007663, -50600144), 1);
						break;
					case 7:
						func_292(func_291(909007663, -348503123), 1);
						break;
					case 8:
						func_292(func_291(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_292(func_291(909007663, 532323983), 1);
				}
			}
			else if (func_135((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_135((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_135((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_292(func_291(909007663, 551192206), 1);
				}
				else
				{
					func_292(func_291(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_764()
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
	if (!func_1024(64))
	{
		return;
	}
	else if (func_106(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_25(0, 0, 1) || func_1025()) || func_725())
	{
		return;
	}
	iVar0 = func_724();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_1026(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_463(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_463(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1027(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_583(0, -1);
	}
	if (iVar2 > 0)
	{
		func_1028("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1029(1, 0);
	Global_1956575->f_4 = 1;
}

void func_765(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_288(32768))
	{
		return;
	}
	func_1030(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_1031(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_766(int iParam0, int iParam1)
{
	if (!func_1032(iParam0))
	{
		return 0;
	}
	if (!func_475())
	{
		return 0;
	}
	if (!func_1033(iParam0, &iVar0, &iVar1))
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

int func_767(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_1034())
	{
		iVar2 = func_1034();
	}
	iVar5 = func_1035(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_136(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_136(iVar6) == 0)
			{
				return func_1036(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_136(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_136(iVar6) == 0)
			{
				return func_1036(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_1036(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1037(1330954593, 0, -1);
		case 1:
			return func_1037(1330954593, 0, -1);
		case 2:
			return func_1037(1330954593, 0, -1) * 2;
		case 4:
			return func_1037(1330954593, 0, -1);
		case 5:
			return func_1037(1330954593, 0, -1);
		case 6:
			return func_1037(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_1037(1330954593, 0, -1) * 3;
		case 9:
			return func_1037(1330954593, 0, -1) * 3;
		case 10:
			return func_1037(1330954593, 0, -1) * 3;
		case 11:
			return func_1037(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_769(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

void func_770(int iParam0, int iParam1, int iParam2)
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

char[] func_771(int iParam0)
{
	if (!func_37(iParam0))
	{
		return cVar0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_880(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_133(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_767(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_772(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_1038();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_27(Global_1879514->f_1) == 1)
			{
				func_766(5, 1);
			}
			else if (func_27(Global_1879514->f_1) == 8 && (func_135((*Global_1347702)[func_133(Global_1879514->f_1)]->f_12, 1) || func_135((*Global_1347702)[func_133(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_766(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_773(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_774(int iParam0)
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

void func_775(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_776(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_777(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!func_388(Global_1393237->f_11[iParam0]->f_3))
	{
		func_1039(Global_1393237->f_11[iParam0]->f_3, 0);
		_0x9851de7aec10b4e1(Global_1393237->f_11[iParam0]->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0] = -15;
	Global_1393237->f_11[iParam0]->f_2 = -1;
	Global_1393237->f_11[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1393237->f_11[iParam0]->f_6 = { 0f, 0f, 0f };
	Global_1393237->f_11[iParam0]->f_9 = 0f;
	if (func_1040(iParam0, 8388608))
	{
		Global_1393237->f_11[iParam0]->f_10 = 8388608;
	}
	else
	{
		Global_1393237->f_11[iParam0]->f_10 = 0;
		if (Global_1393237->f_11[iParam0]->f_17 != func_1041())
		{
		}
		Global_1393237->f_11[iParam0]->f_17 = func_1041();
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
	func_1042(iParam0, 1);
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
		func_1039(Global_1393237->f_11[iParam0]->f_3, 1);
	}
}

void func_778(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_779()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1043(iVar0, 128))
		{
			func_1044(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_780()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1043(iVar0, 128) && func_1043(iVar0, 1))
		{
			func_1044(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_781(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_782()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_297(iVar0, 16777216))
		{
			if (!func_1045(iVar0))
			{
				func_1046(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_783(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_1047(Global_1310750[iVar0], iParam0))
		{
			if (!func_1048(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1049(iVar0) < func_1050(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_1051(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_784(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_1052(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_1052(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_1052(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_1052(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_1052(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_1052(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_1052(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_785(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_614();
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

char* func_786(char* sParam0)
{
	return sParam0;
}

int func_787(var uParam0)
{
	return uParam0;
}

void func_788(int iParam0)
{
	if (!func_1053(iParam0))
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

void func_789(int iParam0, bool bParam1, int iParam2)
{
	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_196(iParam0) && !func_342(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_769(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_196(iParam0))
	{
		iParam2 = -1;
	}
	if (func_343(iParam0) == 3 || (func_343(iParam0) == 1 && _0x01f4d242765c6b24(func_769(iParam0))))
	{
		func_770(func_27(iParam0), func_769(iParam0), iParam2);
		if ((!func_37(Global_1572864->f_8) && !func_25(0, 1, 0)) && !func_106(&Global_1935630, 32768))
		{
			iVar0 = func_722(iParam0);
			if (iVar0 != -1)
			{
				func_723(0);
			}
			else if (func_27(iParam0) == 8)
			{
				iVar0 = func_724();
				if (iVar0 != -1)
				{
					func_723(0);
				}
			}
		}
	}
	func_699(iParam0, 0);
	if (func_26(0) == iParam0)
	{
		func_701(1);
		func_704(0);
		func_773(1);
	}
	func_721(iParam0, 1);
	func_700(iParam0);
}

void func_790(int iParam0)
{
	func_1054();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_791()
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

bool func_792(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_793(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1055(bParam0);
}

int func_794(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1011(iParam1, 1, 0) };
		iParam3 = func_1012(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1056(iParam1, iParam2, func_1000(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1057(1, (func_24() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1000(iParam3, 1)])
			{
				func_1010(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1058(32768) && iParam1 != &Global_1946804->f_57[func_1000(iParam3, 1)])
			{
				func_1059();
				func_1010(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1010(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1060(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1010(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1061(0);
			func_1062(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1010(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_795(int iParam0, bool bParam1)
{
	Var0 = { func_1011(iParam0, 0, 0) };
	Var5 = { func_1063(iParam0, Var0, Var0.f_4, 0) };
	if (func_1064(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_1065(0), &Var5, bParam1);
}

void func_796(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1066(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1067(iParam1, 29, bVar4, 1, 0);
			func_1067(iParam1, 31, bVar4, 1, 0);
			func_1067(iParam1, 30, bVar4, 1, 0);
			func_1067(iParam1, 22, bVar4, 1, 0);
			func_1067(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1058(32768) && func_1068(1108822547, 8)) && func_1069(10, iParam3))
	{
		func_1070(iParam1, 0, 1);
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
			iVar3 = func_1071(iVar1, 1);
			if (func_1068(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1069(iVar1, iParam3))
				{
				}
				else if ((func_1068(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1068(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1067(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1072(iVar3, 1, 6);
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
								func_1067(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1068(iVar3, 1))
							{
								func_1073(iVar3, 1, 6);
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

float func_797(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_219(Global_35, iParam0, bParam1, bParam2);
}

bool func_798(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_799(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1074(iParam0, &Var0);
}

float func_800(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_801(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0]);
	}
	return &(Global_42606[iParam0]);
}

int func_802(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_1;
	}
	return Global_42606[iParam0]->f_1;
}

void func_803(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_804(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_805(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

bool func_806(int iParam0)
{
	return func_268(iParam0) == 0;
}

void func_807(int iParam0)
{
	if (!func_1075(iParam0))
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

void func_808(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_775(iParam0, func_495(iParam0) + 1);
}

int func_809(int iParam0, int iParam1)
{
	iVar0 = func_870(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_1076(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_1077(iVar0, iParam1);
	return iParam1;
}

void func_810(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_811(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_812(bool bParam0)
{
	func_1078(bParam0);
	func_1079(bParam0);
	func_1080(bParam0);
	func_1081(bParam0);
	func_1082(bParam0);
	func_1083(bParam0);
	func_1084(bParam0);
	func_1085(bParam0);
}

void func_813(bool bParam0)
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
		func_734(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_734(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_1086(1, bParam0, 1);
	func_959();
	Global_40.f_11095.f_43 = bParam0;
}

void func_814(int iParam0)
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
	func_1087(Global_1898077->f_7, Global_1898077->f_3);
}

void func_815(int iParam0)
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
	func_1088(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_816(int iParam0)
{
	iVar0 = func_774(iParam0);
	return func_1089(iVar0, 16);
}

void func_817(int iParam0, int iParam1)
{
	func_190(&(Global_40.f_11864[iParam0]->f_1), iParam1);
}

Vector3 func_818(int iParam0)
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
			vVar0.f_2 = func_1090(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_388(vVar0))
	{
	}
	return vVar0;
}

int func_819(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_1091(uParam0);
			uParam0->f_1 = start_shape_test_los_probe(vParam1, vParam4, 83, iParam7, 7);
			_0x04aa59ca40571c2e(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (get_shape_test_result(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (get_shape_test_result(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

void func_820(int iParam0, var uParam1, var uParam2, var uParam3)
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
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_821(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_822(int iParam0)
{
	iVar0 = func_153(iParam0);
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

void func_823(int iParam0, int iParam1)
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

int func_824(int iParam0)
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

void func_825(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

void func_826(int iParam0)
{
	if (!func_488(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_1092(iParam0);
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

int func_827(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_828()
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

void func_829()
{
	if (!func_253(4096))
	{
		if (!is_entity_dead(Local_286[4]->f_5))
		{
			if (has_anim_event_fired(Local_286[4]->f_5, -216541277))
			{
				func_259(4096);
			}
		}
	}
}

void func_830(int iParam0)
{
	iLocal_750 = (iVar747 - (iVar747 && iParam0));
}

bool func_831(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_143(func_148());
	if (func_651(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_651(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_651(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_651(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_651(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_651(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_651(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_651(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_651(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_651(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_651(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_651(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_651(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_651(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_651(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_651(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_651(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

float func_832(var uParam0)
{
	if (!func_391(uParam0))
	{
		return 0f;
	}
	if (func_686(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_614() - uParam0->f_1);
}

int func_833(int iParam0, bool bParam1)
{
	if (func_661(iParam0, Local_551[iParam0]->f_1))
	{
		func_662(iParam0, Local_551[iParam0]->f_1, 1);
		if (bParam1)
		{
			func_1093(iParam0);
		}
		return 1;
	}
	return 0;
}

bool func_834(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	return _0x23e33cb9f4a3f547(iParam0, sParam1);
}

void func_835(int iParam0, char* sParam1, bool bParam2, char[4] cParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(iParam0, sParam1, bParam2);
}

Vector3 func_836(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_837(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 40000f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3.f_2;
	}
	return 40000f;
}

bool func_838()
{
	if ((func_205(Local_286[0]->f_5, 0, 1) && func_205(Local_286[1]->f_5, 0, 1)) && func_205(Local_286[2]->f_5, 0, 1))
	{
		return false;
	}
	return true;
}

void func_839(int iParam0, char[4] cParam1, char* sParam2, var uParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	remove_anim_scene_entity(iParam0, sParam2, uParam3);
}

int func_840(int iParam0, char[4] cParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 0;
	}
	if (!_is_anim_scene_finished(iParam0, false))
	{
		return 0;
	}
	return 1;
}

bool func_841(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_842(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_1014(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_1014(iVar4) && iVar4 != iVar0)
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
	if (func_24() == -1 && !func_1094(iVar0))
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
				if (func_1094(-183018591))
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
		if (iParam0 != Global_35 && func_1014(iVar0))
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
		func_932(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1095(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1096(iVar0))
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

int func_843(var uParam0)
{
	return uParam0;
}

bool func_844(int iParam0)
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

bool func_845(int iParam0)
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

int func_846(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1097(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!is_entity_an_object(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

bool func_847(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

float func_848(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_69(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1098(uParam0);
	}
	return func_69(uParam0);
}

float func_849(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_850()
{
	iVar0 = func_143(func_148());
	iVar1 = func_144(func_148());
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

void func_851(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

void func_852(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
			if (_is_weapon_one_handed(func_652(iParam0, 0)) || _is_weapon_two_handed(func_652(iParam0, 0)))
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

bool func_853(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_854(int iParam0, int iParam1)
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

bool func_855(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (does_entity_exist(Global_35))
	{
		if (!is_entity_dead(Global_35) && !is_ped_injured(Global_35))
		{
			if (_get_rider_of_mount(iParam0, false) == Global_35)
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, 1002303471, false);
				disable_control_action(0, 1520437207, false);
			}
		}
	}
	set_ped_max_move_blend_ratio(iParam0, 0f);
	if (func_854(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_856(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_684(vVar0, vVar3, vParam1);
}

void func_857(int iParam0, int iParam1)
{
	func_1099(iParam0, iParam1);
}

bool func_858(int iParam0, int iParam1)
{
	if (!func_854(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_19(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_19(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_19(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_859(int iParam0, int iParam1)
{
	func_657(iParam0, iParam1);
}

int func_860(int iParam0)
{
	iVar0 = func_1000(func_1100(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_861(var uParam0)
{
	if (func_862(81053684, uParam0))
	{
		return true;
	}
	if (func_862(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_862(int iParam0, var uParam1)
{
	iVar1 = func_1000(func_1100(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_927(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_863()
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_1101(661720433);
}

bool func_864()
{
	return Global_1347398->f_1 == 0;
}

void func_865(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_866()
{
	return Global_1347398->f_1 == 1000;
}

bool func_867()
{
	return Global_1347398->f_1 == 2000;
}

bool func_868()
{
	return Global_1347398->f_1 == 3000;
}

void func_869(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1102(iParam0);
	}
	else
	{
		func_1103(iParam0, iParam1);
	}
	func_1104();
}

int func_870(int iParam0)
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

int func_871(int iParam0)
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
	func_1077(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_872(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1105(iParam0);
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

int func_873(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_885(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_874()
{
	return Global_40.f_11095.f_35;
}

void func_875(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1106(iParam0, 0);
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
		func_876(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_876(int iParam0)
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
			func_1106(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1107(1);
	}
}

bool func_877(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_878()
{
	iVar0 = func_38((*Global_1347702)[9]->f_15);
	iVar1 = func_38((*Global_1835011)[69]->f_1);
	if (func_149(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_879(int iParam0)
{
	if (!func_1075(iParam0))
	{
		return false;
	}
	return func_128((*Global_1835011)[iParam0]->f_1, 1);
}

int func_880(int iParam0)
{
	if (func_27(iParam0) == 1)
	{
		return func_133(iParam0);
	}
	return -1;
}

int func_881(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1108(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1109(iVar6);
	}
	return iVar5;
}

int func_882(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1110(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_883(int iParam0, bool bParam1)
{
	func_1111(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_884(int iParam0)
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

void func_885(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_883(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_886(2, *uParam0);
		}
		else
		{
			func_887(2, *uParam0);
		}
	}
	func_1112(uParam0);
}

void func_886(int iParam0, int iParam1)
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

void func_887(int iParam0, int iParam1)
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

void func_888(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1113(iParam0, iParam1, bParam2);
}

int func_889(int iParam0)
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

int func_890(int iParam0)
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

void func_891(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1114();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1115(iParam0);
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
	if (func_472(6))
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
	Global_40.f_11095.f_35 = func_713(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1114();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1116(iVar1);
		func_1118(func_1117(), 0, 4000);
		func_1119(Global_40.f_11095.f_35);
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
		func_1120(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_292(func_585(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_890(14))
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
					func_1020(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1020(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_292(func_585(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_890(4))
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
					func_1020(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1020(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_585(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_766(10, 1);
	}
}

void func_892(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_893(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_894(int iParam0)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (func_133(iParam0))
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
			switch (func_133(iParam0))
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

void func_895(int iParam0)
{
	iVar2 = func_1065(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_927(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1123(func_1122(iParam0), 6);
}

void func_896(int iParam0)
{
	iVar2 = func_1065(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_927(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1124(func_1122(iParam0), 6);
}

int func_897(int iParam0)
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

int func_898(int iParam0)
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

void func_899(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_900()
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

int func_901(int iParam0)
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

void func_902(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_903(int iParam0)
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

bool func_904(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_905(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_24() == -1)
	{
		if (func_1125(iParam0) && func_1126(iParam0))
		{
			func_1127(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_906(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1128(iParam0, iParam1);
	Var0 = { func_1011(iParam0, 0, 1) };
	iVar5 = func_1129(iParam0, &Var0, 0, 0);
	iVar6 = func_1130(iParam0, 0);
	if ((iVar5 > 1 && !func_725()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_924(iParam0, -2051813666))
		{
			func_734(583, 1);
		}
		else
		{
			func_734(582, 0);
		}
	}
	if (func_1131(iParam0, &Var0, *iParam1, 0, 0))
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

void func_907(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_982(iParam0, -949239683))
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

int func_908(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_923(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1132(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1133(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1065(bParam2), iParam0, 0);
	return iVar2;
}

bool func_909(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_910(iParam0) != 0;
}

int func_910(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1134())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1135(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_911(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_912(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1134())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_911(iVar0))
		{
			if (func_752(func_1135(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_913(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1136(48);
	func_583(0, -1);
}

bool func_914(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_128((*Global_1347702)[iParam0]->f_15, 1);
}

int func_915(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_916(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_917(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_128((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_918(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	return func_196((*Global_1347702)[iParam0]->f_15);
}

int func_919()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_752(func_1137(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_920(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_475() && (func_918(38) || func_914(38)))
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
			if (func_475() && (func_918(39) || func_914(39)))
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
			iVar9 = func_1138(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_475() && (func_918(41) || func_914(41)))
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
			if (func_475() && (func_918(49) || func_914(49)))
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
			iVar9 = func_1138(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1139(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1140(iParam0, iVar13, iVar14))
	{
	}
	if (func_1141(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1142(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1143(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1144(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1145(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_921(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_922(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_475() && (func_918(38) || func_914(38)))
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
			if (func_475() && (func_918(39) || func_914(39)))
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
			if (func_475() && (func_918(49) || func_914(49)))
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
		if (func_475() && (func_918(38) || func_914(38)))
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
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_463(_create_var_string(2, sVar0), _create_var_string(2, func_1147(func_916(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_475() && (func_918(39) || func_914(39)))
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
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_475() && (func_918(49) || func_914(49)))
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
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1146(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_923(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_924(int iParam0, int iParam1)
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

bool func_925(int iParam0, int iParam1)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_926(int iParam0)
{
	if (!func_622(iParam0))
	{
		return;
	}
	func_1148(iParam0);
	func_1149(iParam0);
}

int func_927(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_928(int iParam0, bool bParam1)
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
	if (func_904(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1150(iVar0) || func_1094(iVar0))
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

int func_929(int iParam0, bool bParam1)
{
	if (!func_904(iParam0, 0))
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

void func_930(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1014(iParam0))
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

bool func_931(bool bParam0)
{
	if (func_24() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1065(bParam0));
}

bool func_932(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1011(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1151((386 + iVar28), 1);
			if (func_1152(iParam0, &Var0, iVar5, 0))
			{
				if (func_1153(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1063(iParam0, Var0, iVar5, 0) };
					func_1154(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_931(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_933(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1155(iParam0, iParam1);
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

bool func_933(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_935(iParam0))
	{
		return false;
	}
	if (!func_931(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_934(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_929(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_24() == -1)
		{
			func_930(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1156(iVar0);
			}
		}
		if (!func_1131(iParam0, &uVar1, 1, 0, 0))
		{
			func_1127(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1157(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_932(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_932(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_932(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
				else if (!func_1096(iVar0))
				{
					func_932(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_932(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1158(Global_35, 2, 0, 1);
				if ((((func_1014(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_472(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_1014(iVar7) && func_472(24))
				{
					if (!func_932(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_932(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_932(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_734(480, 1);
	}
	return true;
}

bool func_935(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_936(int iParam0, int iParam1, int iParam2)
{
	if (!func_935(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_1014(iVar4))
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
	if (func_752(611073244, 1, 0) && iParam2 == -897553835)
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
		func_969(func_1159(iParam0), func_968(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_24() == -1)
		{
			if (func_128((*Global_1835011)[14]->f_1, 1))
			{
				func_734(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_931(0))
	{
		if (func_933(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_974(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_937(int iParam0)
{
	if ((iParam0 == -615217896 && !func_32()) || iParam0 != -615217896)
	{
		if (func_1160(Global_35, iParam0, &uVar0))
		{
			func_794(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_959();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_959();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_959();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_957();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_955();
			break;
	}
}

void func_938(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_955();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_956();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_957();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_958();
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
			func_959();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1161();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1162();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_939(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_940(int iParam0)
{
	bVar0 = func_924(iParam0, -2017733358);
	if (func_1163() < 3)
	{
		if (bVar0)
		{
			if (func_1165(func_1164(iParam0), iParam0))
			{
				func_969(79, func_968(func_1164(iParam0)), 1);
			}
			else
			{
				func_969(78, func_968(func_1164(iParam0)), 1);
			}
		}
		else
		{
			func_969(80, func_968(func_1166(iParam0)), 1);
		}
	}
}

bool func_941()
{
	if (((((func_1167(839908568, 400) || func_1167(-1134030454, 400)) || func_1167(623353496, 400)) || func_1167(-344413337, 400)) || func_1167(-1664948962, 400)) || func_1167(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_942(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_1037(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1168(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1169(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_943(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_920(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_922(51, 0, 0, 0, 0, -1, 0);
			func_1170(8192);
			break;
		case 581047644:
			func_920(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_922(51, 0, 0, 0, 0, -1, 0);
			func_1170(524288);
			break;
		case -644199619:
			func_920(39, 0, 0, 0, 0, 0, 1, 0);
			func_922(39, 0, 0, 0, 0, -1, 0);
			func_1171(16);
			break;
		case 684296857:
			func_920(41, 0, 0, 0, 0, 0, 1, 0);
			func_922(41, 0, 0, 0, 0, -1, 0);
			func_1172(8);
			break;
		case 466137807:
			func_920(49, 0, 0, 0, 0, 0, 1, 0);
			func_922(49, 0, 0, 0, 0, -1, 0);
			func_1173(16);
			break;
		case -1087522507:
			func_920(43, 0, 0, -1791518714, func_1174(1), 0, -1, 0);
			func_1175(1);
			break;
		case -405829000:
			func_920(43, 0, 0, -2087881550, func_1174(2), 0, -1, 0);
			func_1175(2);
			break;
		case 378660860:
			func_920(43, 0, 0, 1908068621, func_1174(4), 0, -1, 0);
			func_1175(4);
			break;
		case 1566111097:
			func_920(43, 0, 0, 1611247019, func_1174(8), 0, -1, 0);
			func_1175(8);
			break;
		case 1276007140:
			func_920(43, 0, 0, 1319635688, func_1174(16), 0, -1, 0);
			func_1175(16);
			break;
	}
}

void func_944(int iParam0)
{
	if (func_1176() == 1)
	{
		if (func_914(39))
		{
			func_734(342, 0);
		}
		else
		{
			func_734(343, 0);
			func_1171(1);
		}
	}
	if (func_1176() >= 30)
	{
		func_734(344, 0);
	}
	func_920(39, 0, 0, 0, 0, 0, -1, 0);
	func_922(39, 0, 0, func_1176(), 30, 1, 0);
}

void func_945(int iParam0)
{
	if (func_1177() == 1)
	{
		if (func_914(49))
		{
			func_734(409, 0);
		}
		else
		{
			func_734(410, 0);
			func_1173(1);
		}
	}
	if (func_1177() >= 10)
	{
		func_734(411, 0);
	}
	func_920(49, 0, 0, 0, 0, 0, -1, 0);
	func_922(49, 0, 0, func_1177(), 10, 1, 0);
}

void func_946(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_734(437, 0);
			func_734(440, 0);
			func_1178(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_920(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_922(51, 0, 0, sVar0, func_1138(-949689219, 20), 1, 0);
			func_1170(1);
			func_71(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1178(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_920(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_922(51, 0, 0, sVar0, func_1138(-1248968496, 20), 1, 0);
			func_1170(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1178(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_920(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_922(51, 0, 0, sVar0, func_1138(1706369307, 20), 1, 0);
			func_1170(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1178(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_920(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_922(51, 0, 0, sVar0, func_1138(1520110311, 20), 1, 0);
			func_1170(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_734(438, 0);
			func_1178(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_920(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_922(51, 0, 0, sVar0, func_1138(-1992824800, 20), 1, 0);
			func_1170(32768);
			break;
		default:
			func_734(439, 0);
			break;
	}
}

void func_947()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_948(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_24() == -1)
	{
		if (!func_914(43))
		{
			if (iParam0 == 281887510)
			{
				func_734(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_734(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_734(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_734(400, 0);
			}
		}
		else if (func_924(iParam0, 412399755))
		{
			func_1179(-1791518714);
			if (func_1180() == 0)
			{
				func_583(0, 10);
				iVar1 = func_1181(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1182(iParam0) < func_1183(iParam0))
					{
						func_920(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_922(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_914(44))
		{
			if (iParam0 == -222563712)
			{
				func_734(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_734(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_734(401, 0);
			}
		}
		else if (func_924(iParam0, 709057512))
		{
			func_1179(-2087881550);
			if (func_1180() == 1)
			{
				func_583(0, 10);
				iVar1 = func_1181(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1182(iParam0) < func_1183(iParam0))
					{
						func_920(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_922(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_914(45))
		{
			if (iParam0 == 2116770557)
			{
				func_734(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_734(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_734(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_734(398, 0);
			}
		}
		else if (func_924(iParam0, -1478961327))
		{
			func_1179(1908068621);
			if (func_1180() == 2)
			{
				func_583(0, 10);
				iVar1 = func_1181(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1184(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1185(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1136(48);
					}
					if (func_1182(iParam0) < func_1183(iParam0))
					{
						func_920(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_922(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1182(iParam0) < func_1183(iParam0))
					{
						func_920(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_922(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_914(46))
		{
			if (iParam0 == 2085530337)
			{
				func_734(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_734(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_734(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_734(406, 0);
			}
		}
		else if (func_924(iParam0, -1238404098))
		{
			func_1179(1611247019);
			if (func_1180() == 3)
			{
				func_583(0, 10);
				iVar1 = func_1181(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1182(iParam0) < func_1183(iParam0))
					{
						func_920(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_922(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_914(47))
		{
			if (iParam0 == -1521783510)
			{
				func_734(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_734(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_734(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_734(403, 0);
			}
		}
		else if (func_924(iParam0, 1160548794))
		{
			func_1179(1319635688);
			if (func_1180() == 4)
			{
				func_583(0, 10);
				iVar1 = func_1181(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1182(iParam0) < func_1183(iParam0))
					{
						func_920(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_922(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_949(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1184(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1185(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1136(48);
		}
	}
}

void func_950(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_752(func_1186(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1187(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1188(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_951(int iParam0, int iParam1, int iParam2)
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
				func_942(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_942(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_942(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_942(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_942(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_942(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_942(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_942(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_942(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_942(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_942(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_942(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_942(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1189())
			{
				func_942(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_942(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_942(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_942(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_942(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_942(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_942(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_942(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_942(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_942(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_942(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_942(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_942(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_952(int iParam0)
{
	if (func_914(41))
	{
		func_734(363, 0);
	}
	else
	{
		func_734(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1190(-1865241121);
			func_1191(-642026005);
			func_1192(-642026005);
			func_583(0, 10);
			break;
		case -2108314374:
			func_1190(2117142684);
			func_1191(-940584364);
			func_1192(-940584364);
			func_583(0, 10);
			break;
		case -1193798153:
			func_1190(-1409326024);
			func_1191(1972645282);
			func_1192(1972645282);
			func_583(0, 10);
			break;
		case -787702678:
			func_1190(-641744968);
			func_1191(1667205433);
			func_1192(1667205433);
			func_583(0, 10);
			break;
		case -804542901:
			func_1190(-946988203);
			func_1191(1362715885);
			func_1192(1362715885);
			func_583(0, 10);
			break;
		case -1696275132:
			func_1190(-646136018);
			func_1191(1053540370);
			func_1192(1053540370);
			func_583(0, 10);
			break;
		case -161595323:
			func_1190(-955835837);
			func_1191(-1100103852);
			func_1192(-1100103852);
			func_583(0, 10);
			break;
		case -1114363619:
			func_1190(-179276075);
			func_1191(-1409869209);
			func_1192(-1409869209);
			func_583(0, 10);
			break;
		case -368407134:
			func_1190(-492711560);
			func_1191(-1760235357);
			func_1192(-1760235357);
			func_583(0, 10);
			break;
		case 1997759228:
			func_1190(1764383959);
			func_1191(-138366827);
			func_1192(-138366827);
			func_583(0, 10);
			break;
		case 1265573293:
			func_1190(317501533);
			func_1191(-1261163843);
			func_1192(-1261163843);
			func_583(0, 10);
			break;
		case -1030441283:
			func_1190(817753087);
			func_1191(-963523016);
			func_1192(-963523016);
			func_583(0, 10);
			break;
		case -1490884871:
			func_1190(576606016);
			func_1191(560825326);
			func_1192(560825326);
			func_583(0, 10);
			break;
		case -395458616:
			func_1190(814934957);
			func_1191(858269539);
			func_1192(858269539);
			break;
	}
}

void func_953(int iParam0, int iParam1)
{
	func_1193(iParam0, iParam1, &uVar0);
}

bool func_954(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1158(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1158(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1194("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1195(&Var3, iVar2, iVar0, iVar1))
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
						func_1196(iVar0);
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

void func_955()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_956()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_957()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_958()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_959()
{
	func_1197();
	func_1198();
	func_1199();
}

void func_960(int iParam0, int iParam1, bool bParam2)
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

void func_961(int iParam0, bool bParam1)
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
	func_1146(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_962(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_963(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_964(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_965(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_966(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_967(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_968(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_969(int iParam0, int iParam1, bool bParam2)
{
	func_460(iParam0, &iVar0, &iVar1);
	if (!func_1007(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1200(iParam0, 1024))
	{
		return;
	}
	func_1008(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_970(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_460(iParam0, &iVar0, &iVar1);
	if (!func_1007(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1200(iParam0, 1024))
	{
		return;
	}
	func_1008(iVar0, iVar1);
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

int func_971()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1134())
	{
		return func_972();
	}
	iVar4 = (func_1134() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1134())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1201(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1135(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_972()
{
	iVar0 = get_random_int_in_range(0, func_1134());
	return func_1135(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_973(int iParam0)
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

bool func_974(int iParam0, int iParam1, int iParam2)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1011(iParam0, 0, 1) };
	Var5 = { func_1063(iParam0, Var0, Var0.f_4, 0) };
	return func_1202(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_975(int iParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	switch (func_927(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1203(81053684, 0) <= 0)
			{
				func_1010(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1010(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1204(iParam0);
			if (func_1205(iVar0))
			{
				func_1206(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1010(30, iParam0, 0, 0, 0);
			}
			if (func_1002() == -2125499975 || func_1002() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1010(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1002() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1010(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1207(-525676072, 0))
			{
				if (func_1208(-525676072, &iVar1))
				{
					func_1010(33, iVar1, 0, 0, 0);
				}
			}
			func_1010(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1209(99217379))
		{
			func_794(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_926(24);
		if (func_954(&iVar2, 0))
		{
			func_932(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_976(int iParam0)
{
	if (func_924(iParam0, 943695443))
	{
		func_1210(0, iParam0);
	}
	else if (func_924(iParam0, -2096528786))
	{
		func_1210(1, iParam0);
	}
	else if (func_924(iParam0, -1094167013))
	{
		func_1210(2, iParam0);
	}
	else if (func_924(iParam0, 1936654645))
	{
		func_1210(3, iParam0);
	}
	else if (func_924(iParam0, 1306489306))
	{
		func_1210(4, iParam0);
	}
	else if (func_924(iParam0, 435762317))
	{
		func_1210(5, iParam0);
	}
	else if (func_924(iParam0, 1259363210))
	{
		func_1210(6, iParam0);
	}
	else if (func_924(iParam0, 881398259))
	{
		func_1210(7, iParam0);
	}
	else if (func_924(iParam0, -541549214))
	{
		func_1210(8, iParam0);
	}
	else if (func_924(iParam0, 130796156))
	{
		func_1210(-1, iParam0);
	}
}

int func_977(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1211(&Var4, 1356624740);
	return func_1212(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_978(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return Var0;
	}
	if (func_924(iParam0, -305066475))
	{
		if (func_24() == -1)
		{
			if (func_924(iParam0, -537818634))
			{
				return func_585(189951448);
			}
			else
			{
				return func_585(1176172851);
			}
		}
	}
	else if (func_924(iParam0, -537818634))
	{
		return func_585(-963660207);
	}
	if (func_924(iParam0, 2084895747))
	{
		return func_585(1694039471);
	}
	return Var2;
}

void func_979(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_24() == -1)
			{
				if (func_128((*Global_1835011)[4]->f_1, 1))
				{
					func_734(109, 1);
				}
			}
			break;
	}
}

void func_980(int iParam0, char* sParam1)
{
	sVar0 = func_1214(func_1213(0));
	func_1020(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1215(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_981(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_904(iParam0, 0))
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
	if (!func_1216())
	{
		func_1217(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1218(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1218(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_925(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_923(iParam0);
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
	else if (!func_1219(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_474(_create_var_string(10, &cVar2, _create_var_string(0, func_968(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_924(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_968(iParam0));
	}
	func_1020(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_982(int iParam0, int iParam1)
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

struct<10> func_983(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_984(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_985(int iParam0, int iParam1)
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

bool func_986(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1220(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1220(iParam0, Var2, 1))
				{
					if (func_1221(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1221(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_734(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_25(0, 0, 1))
		{
			func_583(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_987(int iParam0)
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

void func_988(int iParam0)
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
		func_734(iVar0, 0);
	}
}

void func_989()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1222(0);
			_unlock_set_unlocked(-121456797, false);
			func_1223();
		}
		return;
	}
	if (!func_128((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1224();
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
	func_1222(1);
}

void func_990()
{
	if (!func_128((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_727(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_991()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1225(0);
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
	if (!func_128((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1225(1);
}

void func_992()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1226(15000, 0, 0, 0, 1);
			func_1225(0);
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
	if (!func_128((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_1030(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1225(1);
}

void func_993()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_752(1191437462, 1, 0) && !func_196((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_727(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1227(1))
			{
				func_965(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_752(1119149048, 1, 0) && !func_196((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_727(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1227(2))
			{
				func_965(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1227(4))
		{
			func_965(4);
		}
		if (func_1227(0))
		{
			func_1228(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_752(1191437462, 1, 0))
			{
				func_996(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_752(1119149048, 1, 0))
			{
				func_996(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1227(1))
		{
			func_1228(1);
		}
		if (func_1227(2))
		{
			func_1228(2);
		}
		if (func_1227(4))
		{
			func_1228(4);
		}
		if (!func_1227(0))
		{
			func_965(0);
		}
	}
}

void func_994()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_128((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1229() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_930(127400949);
		if (func_932(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1229() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1230(-2055673461, Var1, 1423542233);
		func_1230(-202131179, Var1, -1264898804);
		func_1230(2013836545, Var1, 1592019450);
		func_1230(1497476650, Var1, 1117400455);
		func_1230(1063571467, Var1, 1150213537);
		func_1230(2107224237, Var1, 1598825281);
		func_1230(1747981656, Var1, -712527121);
		func_1230(-1371140647, Var1, 454332195);
		func_1230(-19142973, Var1, 256105670);
		func_1230(-2074737817, Var1, -1328061889);
		func_1230(-1114256243, Var1, -782241404);
		func_1230(-1653277288, Var1, 1669853467);
		func_1230(1869398132, Var1, -1559225678);
		func_1230(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_696())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_1014(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_472(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_472(24) && func_1014(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_1014(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_472(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_995()
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

int func_996(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1132(iParam0, 1);
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
			func_981(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_752(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_978(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_908(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_908(iParam0, 0, 0) - iParam1) < 0)
		{
			func_996(iParam0, func_908(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_923(iParam0) == -427144552)
	{
		if (!func_1231(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1232(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_931(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_981(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1233(iParam0, iParam1);
	return 1;
}

bool func_997(int iParam0)
{
	switch (func_927(iParam0))
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

void func_998(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_927(iParam0))
	{
		case -2061583405:
			bVar0 = func_1234(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1234(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1234(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1234(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1234(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1234(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1235();
	}
	if (bParam1)
	{
		func_1236(0, 0);
	}
}

int func_999(int iParam0)
{
	Var0 = { func_1011(iParam0, 1, 0) };
	return func_1012(Var0.f_4);
}

int func_1000(int iParam0, int iParam1)
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

void func_1001(int iParam0)
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
		iVar0 = func_1000(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1237(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_1002()
{
	return Global_1946804->f_1;
}

bool func_1003(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1238(iParam6);
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
		func_1240(uParam0, func_1239(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1000(iVar3, 1);
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
							if (func_1241(iVar3) && func_1242(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1243(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_1004(int iParam0, int iParam1)
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

int func_1005(int iParam0, int iParam1)
{
	vVar0 = { func_1004(iParam0, iParam1) };
	return vVar0.x;
}

void func_1006(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

bool func_1007(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1244(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1245(iParam0))
	{
		return false;
	}
	if (func_1246(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1200(iParam0, 1)) || func_288(32768))
	{
		if (!func_1200(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1247())
	{
		return false;
	}
	return true;
}

void func_1008(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1009(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1010(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1066(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1248(Var0);
}

struct<5> func_1011(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1249(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_923(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1063(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1250(bParam1) };
			if (bParam2 && func_1251(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1152(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1152(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1153(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1252(bParam1) };
			switch (func_927(iParam0))
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
			if (func_1253(iParam0, -1823706425))
			{
				Var0 = { func_1063(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1253(iParam0, -1483207246))
			{
				Var0 = { func_1063(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1254(Var0, &Var27, bParam1, 0))
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

int func_1012(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1071(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_1013(int iParam0)
{
	func_1237(Global_1946804->f_1497.f_1[func_1000(iParam0, 1)], 2, 6);
	func_1237(Global_1946804->f_1378.f_1[func_1000(iParam0, 1)], 2, 6);
}

bool func_1014(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_1015(int iParam0)
{
	return iParam0 != 0;
}

int func_1016(int iParam0)
{
	iVar0 = -1;
	if (!func_1015(iParam0))
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

bool func_1017(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1018(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1019(int iParam0, int iParam1)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1132(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1194("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1195(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1014(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1196(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1196(iVar1);
	}
	return false;
}

var func_1020(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1255(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1021()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1256(iVar1);
		if (!_unlock_is_visible(func_1257(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1022()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1256(iVar0);
		if (!_unlock_is_visible(func_1257(iVar1)))
		{
			_unlock_set_visible(func_1257(iVar1), true);
		}
		iVar0++;
	}
}

void func_1023(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_386(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_1024(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_1025()
{
	return (func_106(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_1026(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_904(iVar0, 0))
	{
		return 0;
	}
	if (!func_1258(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1259(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_924(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_1011(iVar0, 0, 1) };
	iVar10 = func_1260(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1261(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1262(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_727(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1226(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1027(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1020(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_1028(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1029(bool bParam0, bool bParam1)
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

void func_1030(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1168(iParam0, sParam4, iParam5);
	}
	func_1169(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1031(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1263())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1263())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_769(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_133(iParam0);
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
					func_1264(1, iVar1);
					func_1264(8, iVar1);
					func_1264(7, iVar1);
					break;
				case 12:
					func_1264(6, iVar1);
					break;
				case 53:
					func_1264(3, iVar1);
					func_1264(7, iVar1);
					func_1264(4, iVar1);
					break;
				case 20:
					func_1264(8, iVar1);
					break;
				case 19:
					func_1264(1, iVar1);
					func_1264(2, iVar1);
					break;
				case 24:
					func_1264(3, iVar1);
					func_1264(9, iVar1);
					func_1264(20, iVar1);
					break;
				case 28:
					func_1264(1, iVar1);
					break;
				case 34:
					func_1264(23, iVar1);
					func_1264(2, iVar1);
					func_1264(18, iVar1);
					break;
				case 29:
					func_1264(0, iVar1);
					func_1264(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1264(0, iVar1);
					func_1264(3, iVar1);
					func_1264(2, iVar1);
					func_1264(11, iVar1);
					func_1264(6, iVar1);
					func_1264(25, iVar1);
					func_1264(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1264(5, iVar1);
					break;
				case 63:
					func_1264(1, iVar1);
					func_1264(3, iVar1);
					break;
				case 37:
					func_1264(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_767(0, 10, 11, 2116153146))
			{
				func_1264(7, iVar1);
				func_1264(4, iVar1);
			}
			else if (iParam0 == func_767(0, 7, 11, -379687487))
			{
				func_1264(8, iVar1);
				func_1264(15, iVar1);
			}
			else if (iParam0 == func_767(0, 8, 11, -1386089015))
			{
				func_1264(3, iVar1);
			}
			else if (iParam0 == func_767(0, 11, 11, -1952009645))
			{
				func_1264(6, iVar1);
				func_1264(3, iVar1);
			}
			else if (iParam0 == func_767(0, 12, 11, 2065895756))
			{
				func_1264(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1265()));
	if (!func_457(629))
	{
		func_734(629, 0);
	}
}

bool func_1032(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1033(int iParam0, int iParam1, var uParam2)
{
	if (!func_1032(iParam0))
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

int func_1034()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1035(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_1036(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1266(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_1034())
	{
		return -1;
	}
	iVar0 = func_1035(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_869(iVar1, 0);
	func_775(iVar1, 0);
	func_566(iVar1, 0);
	func_1267(iVar1, 0);
	func_1268(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1269(iVar1, iParam4);
	}
	return iVar1;
}

int func_1037(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_752(1811977508, 1, 0))
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
			if (func_904(iVar25, 0) && func_924(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_1038()
{
	iVar0 = func_1270(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1271(iVar0))
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

void func_1039(vector3 vParam0, int iParam3)
{
	if (func_388(vParam0))
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
			if (func_1272(vVar2, vParam0, 2f, 1))
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

bool func_1040(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return func_651(Global_1393237->f_11[iParam0]->f_10, iParam1);
}

int func_1041()
{
	return 0;
}

void func_1042(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237->f_11[iParam0]->f_24 = iParam1;
	}
}

bool func_1043(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_1044(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_1045(int iParam0)
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

void func_1046(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_1047(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1048(int iParam0)
{
	if (!func_294(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_1049(int iParam0)
{
	if (func_294(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_1050(int iParam0)
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
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_1051(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_1052(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_1052(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1273(iParam0) == 1 && bParam7)
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

bool func_1053(int iParam0)
{
	return func_1274(iParam0, 2);
}

void func_1054()
{
	Global_1911774 = 1;
}

void func_1055(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_1056(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1275();
	if (iParam2 == 39)
	{
		Var0 = { func_1011(iParam0, 1, 0) };
		iParam2 = func_1000(func_1012(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_924(iParam0, 866047851) && func_1276(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1058(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1277(func_1071(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1278(iParam2);
	func_1279(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1237(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1237(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1243(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1280(iParam0, iParam2, iParam1, func_24() != -1);
	if (bParam4)
	{
		func_1281(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1281(&(Global_1946804->f_1378), 1, 0);
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
				func_1073(func_1071(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1057(bool bParam0, bool bParam1, bool bParam2)
{
	func_1282(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1058(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1059()
{
	func_1283(&(Global_1946804->f_2776));
	func_1284(32768);
	func_1073(1108822547, 8, 6);
}

int func_1060(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_1000(iParam0, 1);
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

void func_1061(int iParam0)
{
	if (func_1285(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1286(Var0);
}

void func_1062(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1286(Var0);
}

struct<4> func_1063(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_904(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1065(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1064(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1063(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_1065(bParam6), &Var0, 0);
	return uVar4;
}

int func_1065(bool bParam0)
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

void func_1066(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1067(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1071(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1287(iParam4);
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

bool func_1068(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1000(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1069(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1070(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1068(1108822547, 6))
	{
		if (bParam2)
		{
			func_1067(iParam0, iVar0, func_24() != -1, 0, 0);
			func_1072(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1073(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_1071(int iParam0, int iParam1)
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

void func_1072(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1000(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1000(iParam0, 1)])->f_10 || iParam1);
}

void func_1073(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1000(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1000(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_1000(iParam0, 1)])->f_10 && iParam1));
}

bool func_1074(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_1075(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_1076(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_136(iParam0);
		func_1288(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_1077(int iParam0, int iParam1)
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
			func_1289((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1289(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(&(Global_1898164->f_1[0])))
	{
		func_699(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1078(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_1290(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_1079(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1290(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_1080(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1290(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_1081(bool bParam0)
{
	func_1290(Global_1956614, bParam0);
}

void func_1082(bool bParam0)
{
	func_1290(&(Global_1415412->f_3), bParam0);
}

void func_1083(bool bParam0)
{
	if (func_1291(Global_1934051->f_33))
	{
		func_1292(Global_1934051->f_33, 7148155);
	}
	func_1290(&(Global_1934051->f_33), bParam0);
}

void func_1084(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1294(func_1293(iVar0));
		if (iVar1 != 0)
		{
			func_1292(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_1290((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_1085(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_803(iVar0, -1);
		func_804(iVar0, 0);
		func_805(iVar0, 0);
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

void func_1086(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_1087(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_1088(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

bool func_1089(int iParam0, int iParam1)
{
	return func_651(Global_40.f_11864[iParam0]->f_1, iParam1);
}

float func_1090(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1091(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_1092(int iParam0)
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

void func_1093(int iParam0)
{
	bVar0 = func_1295(iParam0, Local_551[iParam0]->f_3);
	bVar1 = func_1295(iParam0, Local_551[iParam0]->f_4);
	func_256(iParam0, Local_551[iParam0]->f_3, !bVar0);
	func_256(iParam0, Local_551[iParam0]->f_4, !bVar1);
}

bool func_1094(int iParam0)
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

void func_1095(int iParam0, int iParam1, float fParam2)
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

bool func_1096(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1097(int iParam0, int iParam1)
{
	func_75(iParam0, 0, 0);
	if (func_213(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

var func_1098(var uParam0)
{
	return uParam0->f_25;
}

void func_1099(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1100(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1012(iVar0);
}

var func_1101(int iParam0)
{
	Var1 = { func_585(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1102(int iParam0)
{
	iVar0 = func_498(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1296(iVar0);
}

int func_1103(int iParam0, int iParam1)
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
			func_1297(iVar2);
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

void func_1104()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_1105(int iParam0)
{
	func_1111(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1106(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1107(1);
	}
}

void func_1107(bool bParam0)
{
	if (bParam0)
	{
		func_190(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_189(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_1108(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1109(int iParam0)
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

bool func_1110(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1111(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1298(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1112(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1113(int iParam0, int iParam1, bool bParam2)
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

int func_1114()
{
	iVar0 = func_874();
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

int func_1115(int iParam0)
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
	fVar1 = func_1299(absf(fVar1) < 1f, func_1299(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1116(int iParam0)
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

int func_1117()
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

void func_1118(int iParam0, bool bParam1, int iParam2)
{
	func_1300((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1301(iParam0);
}

void func_1119(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1302(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1120(bool bParam0)
{
	bVar3 = false;
	if (func_1303(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1304(iVar5, &iVar2, &iVar0))
			{
				if (!func_904(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1305(iVar2);
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
							if (func_923(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1114() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1114() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1306();
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

int func_1122(int iParam0)
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

void func_1123(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1124(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_1125(int iParam0)
{
	return func_923(iParam0) == -427144552;
}

bool func_1126(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (func_925(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1131(iParam0, &uVar0, 1, 0, 0);
	}
	return func_752(iParam0, 1, 0);
}

void func_1127(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_923(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_929(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_1094(iVar0))
	{
		if (func_24() == -1)
		{
			func_930(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_908(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_981(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1128(int iParam0, int iParam1)
{
	if (func_924(iParam0, 58855631))
	{
		func_1259(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1129(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	if (!func_931(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1065(bParam3), iParam0);
}

int func_1130(int iParam0, bool bParam1)
{
	if (func_935(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1065(bParam1), iParam0, 0);
}

bool func_1131(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1307(&iParam0);
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (!func_931(0))
	{
		bParam3 = true;
	}
	if (func_1125(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1250(0) };
			Var4.f_9 = -1591664384;
			if (!func_1152(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1153(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1251(iParam0, 1))
			{
				if (!func_1152(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1153(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1308(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1129(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1064(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1065(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1132(int iParam0, int iParam1)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_923(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_924(iParam0, 1399091007))
	{
		func_1193(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1133(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1309(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1310(&Var0, func_1250(0));
	}
	if (!func_1311(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1196(iVar14);
	return uVar15;
}

int func_1134()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1135(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1136(int iParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_1312(iParam0);
	fVar1 = func_1313(iParam0);
	if ((Global_1347477->f_117 || !func_472(31)) || !func_1314(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1315(iVar0) >= 7)
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
	func_1316(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1020(_create_var_string(6, func_1317(iParam0), fVar1), "itemtype_textures", func_1318(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1137(int iParam0)
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

int func_1138(int iParam0, int iParam1)
{
	if (!func_1319(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1139(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_919() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1320(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1321(), 12);
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
			else if (func_1176() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1322(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1176(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1323(), 13);
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
			else if (func_1177() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1324(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1177(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1138(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1140(int iParam0, int iParam1, int iParam2)
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

bool func_1141(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1142(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1325(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_752(iVar2, 1, 0) || func_1327(func_1326(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1147(func_1325(iVar0))), func_1147(func_1325(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1176() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1328(iVar0)), func_1328(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1322() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1328(iVar0)), func_1328(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1328(iVar0)), func_1328(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1186(iParam3, func_1329(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1182(iVar2) - iParam7) >= func_1138(iParam3, func_1330(iVar0));
				}
				else
				{
					bVar1 = func_1182(iVar2) >= func_1138(iParam3, func_1330(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1182(iVar2) + iParam7) >= func_1138(iParam3, func_1330(iVar0));
			}
			else
			{
				bVar1 = func_1182(iVar2) >= func_1138(iParam3, func_1330(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1331(iVar2)), func_1331(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1332(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1333(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1333(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1177() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1334(iVar0)), func_1334(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1324() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1334(iVar0)), func_1334(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1334(iVar0)), func_1334(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1186(iParam3, func_1329(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1182(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1335(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1335(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1336(iVar2)), func_1336(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1144(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1323() >= 13)
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

bool func_1145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_37(func_26(0)) && ((func_1337(0) == 1 || func_1337(0) == 8) || func_1337(0) == 6))
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

var func_1146(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1147(int iParam0)
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

void func_1148(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1149(int iParam0)
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
			func_1338(1);
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
			func_1339(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1339(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1339(3);
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
			func_1340(1);
			break;
		case 34:
			func_1341(1);
			break;
		case 35:
			func_1342(1);
			break;
		case 36:
			break;
		case 37:
			func_1343(0);
			break;
		case 38:
			func_1344(0);
			break;
		case 39:
			func_1345(0);
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
			if ((!&Global_1879534 && func_475()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_463("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_734(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_475()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_463("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_734(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_475()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_463("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_734(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_475()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_463("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_734(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_24() == -1)
			{
				if (!func_1209(99217379) || func_1346(99217379) == 2110595215)
				{
					if (func_31())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_752(iVar0, 1, 0))
					{
						func_974(iVar0, 1, 752097756);
					}
					func_794(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_24() == -1)
			{
				if (!func_752(1013902307, 1, 0))
				{
					func_974(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_24() == -1)
			{
				if (!func_752(1013902307, 1, 0))
				{
					func_974(1013902307, 1, 752097756);
				}
				if (!func_752(142640135, 1, 0))
				{
					func_974(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_24() == -1)
			{
				if (!func_752(786809402, 1, 0))
				{
					func_974(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_24() == -1)
			{
				if (!func_752(786809402, 1, 0))
				{
					func_974(786809402, 1, 752097756);
				}
				if (!func_752(-518019409, 1, 0))
				{
					func_974(-518019409, 1, 752097756);
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
			func_1347();
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

bool func_1150(int iParam0)
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

int func_1151(int iParam0, int iParam1)
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

bool func_1152(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1064(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1153(int iParam0, var uParam1, int iParam2)
{
	if (func_1348(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_1154(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1349(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1254(*uParam1, &Var0, bParam6, 0))
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
	if (!func_931(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1065(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1155(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1350(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1156(int iParam0)
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
	iVar2 = func_148();
	func_40(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1157(int iParam0)
{
	if (func_1351(iParam0))
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

int func_1158(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1159(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_472(50))
			{
				if (!func_472(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_472(51))
			{
				if (!func_472(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1160(int iParam0, int iParam1, var uParam2)
{
	if (!func_904(iParam1, 0))
	{
		return false;
	}
	if (func_923(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_24() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_927(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_999(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_924(iParam1, 866047851))
	{
		iVar5 = func_1000(iVar4, 1);
		if (func_1276(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_927(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_924(iParam1, -1638171711))
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
			if (func_862(1868067663, &uVar0))
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
				iVar10 = func_1352(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1352(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_927(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_924(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1353(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1161()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1162()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1163()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_752(func_1354(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1164(int iParam0)
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

bool func_1165(int iParam0, int iParam1)
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
	if (func_752(iVar0, 1, 0) && func_752(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1166(int iParam0)
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

bool func_1167(int iParam0, int iParam1)
{
	iVar0 = func_1355(iParam0);
	if (iVar0 != -15)
	{
		func_40(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_41(iVar0, 1);
	}
	return false;
}

void func_1168(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1020(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1169(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1263())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1020(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1356(iVar0);
			func_1357(iVar0, 0, 0);
		}
		func_1020(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_292(func_585(1644987397), iVar1);
	}
}

void func_1170(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1171(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1172(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1173(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1174(int iParam0)
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
	iVar1 = func_1182(iVar9);
	iVar2 = func_1182(iVar10);
	iVar3 = func_1182(iVar11);
	iVar5 = func_1183(iVar9);
	iVar6 = func_1183(iVar10);
	iVar7 = func_1183(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1182(iVar12);
		iVar8 = func_1183(iVar12);
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

void func_1175(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1176()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1358(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1177()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1178(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (iParam0 == -949689219)
			{
				if (bParam3)
				{
					if (func_1335(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (func_1335(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (func_1335(iVar0))
				{
					*sParam2++;
				}
				if (func_1335(iVar0))
				{
					return true;
				}
			}
			else if (iParam0 == -1248968496)
			{
				if (bParam3)
				{
					if (func_1335(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (func_1335(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (func_1335(iVar0))
				{
					*sParam2++;
				}
				if (func_1335(iVar1))
				{
					*sParam2++;
				}
				if (func_1335(iVar0) && func_1335(iVar1))
				{
					return true;
				}
			}
			else if (iParam0 == 1706369307)
			{
				if (bParam3)
				{
					if (func_1335(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (func_1335(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (func_1335(iVar0))
				{
					*sParam2++;
				}
				if (func_1335(iVar1))
				{
					*sParam2++;
				}
				if (func_1335(iVar2))
				{
					*sParam2++;
				}
				if ((func_1335(iVar0) && func_1335(iVar1)) && func_1335(iVar2))
				{
					return true;
				}
			}
			else
			{
				if (bParam3)
				{
					if (func_1335(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (func_1335(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (func_1335(iVar0))
				{
					*sParam2++;
				}
				if (func_1335(iVar1))
				{
					*sParam2++;
				}
				if (func_1335(iVar2))
				{
					*sParam2++;
				}
				if (func_1335(iVar3))
				{
					*sParam2++;
				}
				if (((func_1335(iVar0) && func_1335(iVar1)) && func_1335(iVar2)) && func_1335(iVar3))
				{
					return true;
				}
			}
			return false;
		}

void func_1179(int iParam0)
{
	if (!func_1359(iParam0))
	{
		func_1361(func_1360(iParam0));
	}
}

int func_1180()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1359(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1181(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1182(iVar9);
	iVar2 = func_1182(iVar10);
	iVar3 = func_1182(iVar11);
	iVar5 = func_1183(iVar9);
	iVar6 = func_1183(iVar10);
	iVar7 = func_1183(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1182(iVar12);
		iVar8 = func_1183(iVar12);
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

int func_1182(int iParam0)
{
	if (func_752(iParam0, 1, 0))
	{
		iVar0 = func_908(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1183(int iParam0)
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

int func_1184(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1185(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1186(int iParam0, int iParam1)
{
	if (!func_1319(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1187(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1186(iParam1, 5) || iParam0 == func_1186(iParam1, 6)) || iParam0 == func_1186(iParam1, 7)) || iParam0 == func_1186(iParam1, 8)) || iParam0 == func_1186(iParam1, 9))
	{
		func_1178(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_920(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_922(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1188(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1186(iParam1, 5) || iParam0 == func_1186(iParam1, 6)) || iParam0 == func_1186(iParam1, 7)) || iParam0 == func_1186(iParam1, 8)) || iParam0 == func_1186(iParam1, 9))
	{
		if (func_1178(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_920(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_922(51, 0, 0, iVar0, func_1138(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_920(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_922(51, 0, 0, iVar0, func_1138(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1189()
{
	if (func_196((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1190(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1191(int iParam0)
{
	if (!func_1362(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1192(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1193(int iParam0, int iParam1, var uParam2)
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

bool func_1194(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1065(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1195(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1196(int iParam0)
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

float func_1197()
{
	if (func_1363())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1364(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1364(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1365();
	fVar2 = func_1366();
	fVar3 = func_1367();
	fVar4 = func_1368();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1369()));
	fVar7 = (func_1364(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1370(3, round((to_float(iVar8) * fVar10)), 0);
	func_1371(3, fVar9, fVar9 > 100f);
	return func_1372(fVar7, -100f, 100f);
}

float func_1198()
{
	if (func_1363())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1364(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1364(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1365();
	fVar2 = func_1366();
	fVar3 = func_1367();
	fVar4 = func_1368();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1369()));
	fVar7 = (func_1364(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1370(2, round((to_float(iVar8) * fVar10)), 0);
	func_1371(2, fVar9, fVar9 > 100f);
	return func_1372(fVar7, -100f, 100f);
}

float func_1199()
{
	if (func_1363())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1364(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1373())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1374())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1364(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1365();
	fVar2 = func_1366();
	fVar3 = func_1367();
	fVar4 = func_1368();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1369()));
	fVar7 = (func_1364(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1370(1, round((to_float(iVar8) * fVar10)), 0);
	func_1371(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1364(0);
	}
	return func_1372(fVar7, -100f, 100f);
}

bool func_1200(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1201(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1202(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_904(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1131(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_931(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1065(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1203(int iParam0, bool bParam1)
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
				return func_1375();
			}
			break;
	}
	return 0;
}

int func_1204(int iParam0)
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

bool func_1205(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1206(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1205(iParam0))
	{
		return;
	}
	if (func_1376(iParam0))
	{
		return;
	}
	if (!func_1377(iParam0))
	{
		func_1378(iParam0, 1, 0);
	}
	iVar0 = func_1379(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1380(iParam0, 512))
		{
			func_1010(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1381() && !bParam1) && !func_25(0, 0, 1))
	{
		func_1028(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1382(iParam0, 6);
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_583(1, 4);
		}
	}
}

bool func_1207(int iParam0, bool bParam1)
{
	return func_1203(iParam0, 0) < func_1383(iParam0, bParam1);
}

bool func_1208(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_927(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1209(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1000(iParam0, 1)] != &Global_1946804->f_57[func_1000(iParam0, 1)];
}

void func_1210(int iParam0, int iParam1)
{
	if (func_924(iParam1, 130796156))
	{
		func_1384(iParam1, 0);
	}
	else if (func_924(iParam1, 930141731))
	{
		func_1384(iParam1, 1);
		func_1385(iParam0);
	}
}

void func_1211(var uParam0, int iParam1)
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

int func_1212(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1386(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1387(uParam2, iParam0, Var1);
	return 1;
}

int func_1213(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1214(int iParam0)
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

int func_1215(int iParam0)
{
	if (!func_1388(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1216()
{
	return !&Global_1911774;
}

void func_1217(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1218(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1219(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1220(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_24() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1389(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1221(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (func_1389(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1222(bool bParam0)
{
	if (bParam0)
	{
		func_727(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1223();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1390(2032023096);
		func_730(-615217896);
		func_996(655868243, 1, 1, -142743235, 1);
		func_1392(146323340, func_1391());
		Var0 = { func_1393() };
		if (func_1394(&Var0) == -1387633835)
		{
			func_1395(&Var0);
			func_1396(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1397(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1398(iVar6) == 2010625508)
			{
				func_1399(iVar6, iVar7);
				func_1400(iVar6, iVar8);
				func_1401(iVar6, iVar9);
				func_1402(iVar6, 0);
				if (func_1403(iVar6))
				{
					func_1404(iVar6);
				}
				iVar10 = func_1405(iVar8);
				func_1406(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1223()
{
	if (!func_1407(-1898635967, func_1391(), 1))
	{
		return 0;
	}
	if (func_32())
	{
		if (!func_1407(146323340, func_1391(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1224()
{
	func_739(34411519);
	func_739(834124286);
	func_739(-570967010);
}

void func_1225(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_727(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_996(-1080874779, 3, 1, -142743235, 1);
		func_996(-223790555, 3, 1, -142743235, 1);
		func_996(1566032147, 3, 1, -142743235, 1);
		func_996(891311852, 5, 1, -142743235, 1);
		func_996(-1353737667, 5, 1, -142743235, 1);
		func_996(-330313895, 5, 1, -142743235, 1);
		func_996(-2051332199, 5, 1, -142743235, 1);
		func_996(1237770824, 5, 1, -142743235, 1);
		func_996(-1795542128, 3, 1, -142743235, 1);
		func_996(-1757588258, 3, 1, -142743235, 1);
		func_996(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1397(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1398(iVar0) == 153881023)
			{
				func_1399(iVar0, iVar1);
				func_1400(iVar0, iVar2);
				func_1401(iVar0, iVar3);
				func_1402(iVar0, 0);
				if (func_1403(iVar0))
				{
					func_1404(iVar0);
				}
				iVar4 = func_1405(iVar2);
				func_1406(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1223();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1226(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1408(iParam0);
	if (bParam3)
	{
		func_1027(iParam0, sParam1, iParam2);
	}
}

bool func_1227(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1228(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1229()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1194("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1195(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1153(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1196(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1196(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1230(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1409(Param1, iParam5, &Var5, 0))
	{
		func_1154(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1202(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1410(Var19, 1);
}

bool func_1231(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1309(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1310(&Var0, func_1250(0));
	}
	if (!func_1311(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1195(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1154(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1196(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1232(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1011(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1411(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1063(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1154(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1233(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_924(iParam0, 606799272))
		{
			func_1412(iParam0, iParam1);
		}
		if (func_924(iParam0, -1112814642) && func_924(iParam0, -1697809989))
		{
			func_950(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1234(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1413(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_927(iParam0) != -999503751)
		{
			func_1414(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_927(iParam0) != -999503751)
	{
		func_1414(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1415(iParam0, 1);
	return 1;
}

void func_1235()
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

void func_1236(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1416(0);
	}
	if (bParam0)
	{
		func_1066(8);
		func_1066(512);
	}
	else
	{
		func_1066(8);
		func_1066(16);
	}
}

void func_1237(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1238(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1002();
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

int func_1239(int iParam0)
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

void func_1240(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1417(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1071(iVar0, 1);
			if (func_1069(iVar0, iParam1))
			{
				vVar4 = { func_1004(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1068(iVar7, 4))
				{
					func_1073(iVar7, 4, 6);
				}
			}
			else
			{
				func_1072(iVar7, 4, 6);
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

bool func_1241(int iParam0)
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
	func_1418(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1242(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1243(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_927(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1069(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1279(iVar1, iVar3);
		}
	}
	if (func_1209(-1586649372) && func_1069(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1279(iVar1, iVar3);
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
						func_1279(iVar1, iVar3);
					}
				}
			}
			func_1419(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1419(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1279(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1419(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1279(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1279(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1419(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1419(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1279(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1419(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1279(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1279(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_927(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1279(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1353(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_927(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1279(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_924(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1279(iVar1, iVar3);
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
						func_1279(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1353(&(Global_1946804->f_1497.f_1[iVar1])) || func_924(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1279(iVar1, iVar3);
					}
				}
			}
			switch (func_927(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_927(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1279(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_927(&(uParam0->f_1[iVar1])) || func_924(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1279(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1244(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1245(int iParam0)
{
	if (func_24() != -1)
	{
		if (func_1200(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1200(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1246(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1200(iParam0, 65536) && !func_1200(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1200(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1200(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1247()
{
	return Global_1905944->f_5694;
}

void func_1248(struct<4> Param0)
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
			if (func_1420(Param0))
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
			func_1421(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1066(8);
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
			if (func_1420(Param0))
			{
				return;
			}
			func_1421(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1066(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1062(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1249(bool bParam0)
{
	return func_1063(1328661203, func_1422(), -1591664384, bParam0);
}

struct<4> func_1250(bool bParam0)
{
	iVar0 = func_1065(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1063(923904168, func_1249(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1063(923904168, func_1249(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1063(923904168, func_1249(bParam0), -740156546, 0);
}

bool func_1251(int iParam0, bool bParam1)
{
	if (func_927(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_472(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1252(bool bParam0)
{
	iVar0 = func_1065(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1063(271701509, func_1249(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1063(271701509, func_1249(bParam0), 12999093, 0);
}

bool func_1253(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_927(iParam0);
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

bool func_1254(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1065(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_1255(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1256(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1257(int iParam0)
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

bool func_1258(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_24() == -1)
	{
		if (func_1125(iParam0))
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

int func_1259(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_904(iParam0, 0))
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

int func_1260(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1307(&iParam0);
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	if (!func_931(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1129(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1064(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1065(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1261(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_924(iParam0, -5284486))
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
		if (func_1423(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_982(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_985(iVar62, iVar61);
					if (func_904(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1423(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1262(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1424(1);
}

bool func_1263()
{
	if (func_32())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1264(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1425(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_733(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1425(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_733(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1265()
{
	return Global_40.f_4283.f_325;
}

bool func_1266(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1267(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1268(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1269(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1270(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	cVar0 = func_771(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1271(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

bool func_1272(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_1273(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1274(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_1275()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1276(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_924(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_924(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_924(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_924(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_924(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_924(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1277(int iParam0)
{
	func_1073(iParam0, 8, 6);
}

void func_1278(int iParam0)
{
	func_1426(&(Global_1946804->f_2589), iParam0);
}

void func_1279(int iParam0, int iParam1)
{
	func_1427(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1280(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1428(0);
	if (iParam2 != 0 && func_1429(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1242(iParam0, func_1071(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1281(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_24() != -1;
	iVar7 = func_1428(0);
	if (func_1058(32768))
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
			iVar5 = func_1071(iVar0, 1);
			if (func_1068(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1068(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1352(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1430(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1058(524288))
					{
						func_1066(524288);
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
							iVar5 = func_1071(iVar0, 1);
							if (func_1068(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1068(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1352(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1279(iVar0, iParam2);
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
					func_1284(524288);
				}
			}
		}
	}
}

void func_1282(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1431(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_24() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1432(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1379(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1379(Global_40.f_7729);
				Global_1946804->f_1378 = func_1379(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1433(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1236(0, 1);
	}
}

void func_1283(var uParam0)
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

void func_1284(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1285(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1286(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1420(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1420(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1421(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1066(8);
}

int func_1287(int iParam0)
{
	iVar0 = func_927(iParam0);
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

void func_1288(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_137(iParam0);
	*uParam1 = func_309(iParam0);
	*uParam2 = func_893(iParam0);
}

void func_1289(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_1290(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_803(*uParam0, -1);
		func_804(*uParam0, 0);
		func_805(*uParam0, 0);
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

bool func_1291(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_1292(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_1293(int iParam0)
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

int func_1294(int iParam0)
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

bool func_1295(int iParam0, char[4] cParam1)
{
	return func_1434(&(Local_551[iParam0]), cParam1, func_328(iParam0));
}

int func_1296(int iParam0)
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

int func_1297(int iParam0)
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

int func_1298(int iParam0, int iParam1)
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

float func_1299(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1300(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1435(bParam1);
	}
}

void func_1301(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1302(int iParam0)
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

bool func_1303(int iParam0)
{
	if (!func_1319(23, &vVar0))
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

bool func_1304(int iParam0, int iParam1, int iParam2)
{
	if (!func_1319(23, &Var0))
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

int func_1305(int iParam0)
{
	return iParam0;
}

int func_1306()
{
	iVar0 = func_1114();
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

int func_1307(int iParam0)
{
	if (!func_904(*iParam0, 0))
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

bool func_1308(int iParam0, var uParam1, bool bParam2)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_1011(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1151((386 + iVar29), 1);
		if (func_1152(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1153(iParam0, &Var6, iVar5);
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

struct<14> func_1309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1310(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1311(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1065(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1312(int iParam0)
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

float func_1313(int iParam0)
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
			return func_1436(iParam0);
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
			return func_1436(iParam0);
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
			return func_1436(iParam0);
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

bool func_1314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(18);
		case 2:
			return func_472(20);
		case 1:
			return func_472(19);
		default:
			break;
	}
	return true;
}

int func_1315(int iParam0)
{
	return func_1437(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1316(int iParam0, float fParam1, bool bParam2)
{
	if (func_24() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_472(31))
	{
		return;
	}
	iVar0 = func_1315(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1315(iParam0);
	if (func_1438(iParam0) && func_1439(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1440(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1441(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_734(func_1442(iParam0), 0);
					}
					func_1443(iParam0, iVar2, iVar3);
					func_1444(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1317(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1318(int iParam0)
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

bool func_1319(int iParam0, var uParam1)
{
	if (!func_1445(iParam0))
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

int func_1320()
{
	return func_1446(Global_40.f_12019);
}

int func_1321()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1137(iVar1);
		if (func_752(iVar2, 1, 0) || func_1327(func_1326(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1322()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1447(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1323()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1332(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1324()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1325(int iParam0)
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

int func_1326(int iParam0)
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

bool func_1327(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1328(int iParam0)
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

int func_1329(int iParam0)
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

int func_1330(int iParam0)
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

char* func_1331(int iParam0)
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

bool func_1332(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1333(int iParam0)
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

char* func_1334(int iParam0)
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

bool func_1335(int iParam0)
{
	if (func_1448(iParam0) && func_752(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1449(iParam0) && func_1450(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1336(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_968(iParam0));
}

int func_1337(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1338(bool bParam0)
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

void func_1339(int iParam0)
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

void func_1340(bool bParam0)
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

void func_1341(bool bParam0)
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

void func_1342(bool bParam0)
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

void func_1343(bool bParam0)
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

void func_1344(bool bParam0)
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

void func_1345(bool bParam0)
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

int func_1346(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1000(iParam0, 1)]);
}

void func_1347()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1451();
		_unlock_set_unlocked(-1526891582, true);
		func_930(-916314281);
		func_974(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_930(494733111);
		func_974(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1348(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1065(0);
	*uParam1 = { func_1063(iParam0, func_1250(0), iParam3, 0) };
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

bool func_1349(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1350(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1351(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1352(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_1000(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1058(524288))
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

bool func_1353(int iParam0)
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

int func_1354(int iParam0)
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

int func_1355(int iParam0)
{
	return func_1452(iParam0, -1);
}

void func_1356(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1453((Global_40.f_4283.f_325 + iParam0));
}

void func_1357(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1263())
	{
		func_1020(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1020(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1358(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1359(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1360(int iParam0)
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

void func_1361(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1362(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1363()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1364(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1365()
{
	fVar0 = func_1454(13);
	iVar1 = func_1455(fVar0);
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

float func_1366()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1367()
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

float func_1368()
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

float func_1369()
{
	return Global_1955565->f_3;
}

void func_1370(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1456(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1371(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1456(iParam0, 2, 0, 0);
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

float func_1372(float fParam0, float fParam1, float fParam2)
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

bool func_1373()
{
	return func_1454(12) <= -99f;
}

bool func_1374()
{
	return func_1454(12) >= 99f;
}

int func_1375()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_927(iVar1) == -999503751)
		{
			if (func_1457() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1376(int iParam0)
{
	if (!func_1205(iParam0))
	{
		return false;
	}
	if (func_1380(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1377(int iParam0)
{
	if (!func_1205(iParam0))
	{
		return false;
	}
	if (func_1380(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1378(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1205(iParam0))
	{
		return;
	}
	if (!func_1377(iParam0))
	{
		func_1382(iParam0, 2);
		if (bParam2)
		{
			if (!func_25(0, 0, 1))
			{
				func_583(1, 4);
			}
		}
		if ((!func_1381() && !bParam1) && !func_25(0, 0, 1))
		{
			func_1028(_create_var_string(10, "OUT_JOURN_ADD", func_1458(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1379(int iParam0)
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

bool func_1380(int iParam0, int iParam1)
{
	if (!func_1205(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1381()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1382(int iParam0, int iParam1)
{
	if (!func_1205(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1383(int iParam0, bool bParam1)
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

void func_1384(int iParam0, bool bParam1)
{
	iVar0 = func_1459(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_926(50);
			}
			else
			{
				func_926(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_926(51);
			}
			else
			{
				func_926(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1460(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_955();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_955();
			}
			break;
		case 3:
			func_926(24);
			if (bParam1)
			{
				if (!func_1460(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_955();
				}
			}
			break;
	}
}

void func_1385(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1461(0))
			{
				iVar0++;
			}
			if (func_1461(2))
			{
				iVar0++;
			}
			if (func_1461(4))
			{
				iVar0++;
			}
			if (!func_1462(16))
			{
				if (iVar0 == 1)
				{
					func_1463();
					func_734(456, 1);
					func_1464(16);
				}
			}
			if (!func_1462(32))
			{
				if (iVar0 >= 3)
				{
					func_1463();
					func_734(456, 1);
					func_1464(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1461(1))
			{
				iVar0++;
			}
			if (func_1461(3))
			{
				iVar0++;
			}
			if (func_1461(7))
			{
				iVar0++;
			}
			if (!func_1462(1))
			{
				if (iVar0 == 1)
				{
					func_1465();
					func_734(457, 1);
					func_1464(1);
				}
			}
			if (!func_1462(2))
			{
				if (iVar0 >= 3)
				{
					func_1465();
					func_734(457, 1);
					func_1464(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1461(5))
			{
				iVar0++;
			}
			if (func_1461(6))
			{
				iVar0++;
			}
			if (func_1461(8))
			{
				iVar0++;
			}
			if (!func_1462(4))
			{
				if (iVar0 == 1)
				{
					func_1466();
					func_734(455, 1);
					func_1464(4);
				}
			}
			if (!func_1462(8))
			{
				if (iVar0 >= 3)
				{
					func_1466();
					func_734(455, 1);
					func_1464(8);
				}
			}
			break;
	}
}

void func_1386(var uParam0)
{
	func_1211(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1211(uParam0, 617531372);
	}
	else
	{
		func_1211(uParam0, 291123060);
	}
}

void func_1387(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1467(uParam0))
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

bool func_1388(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1389(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_904(iParam0, 0))
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

void func_1390(int iParam0)
{
	func_996(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1468(iParam0, &uVar18);
	func_1469(iParam0, &uVar18, &iVar34, 1);
	if (func_1002() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1470(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_998(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_996(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_927(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1470(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1470(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1470(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1470(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1470(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_998(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_1000(func_999(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1471(&(Global_1946804->f_1616));
	func_1003(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_1004(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_1004(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_1004(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_1004(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_1004(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_1004(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_1004(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_1004(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_1004(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_1005(&(iVar0[iVar36]), iVar35))
			{
				func_998(func_1472(iVar35), 1, 1);
				func_1473(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1417(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_1006(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1204(iParam0))
	{
		if (!func_1474(8))
		{
			if (func_1002() == -2125499975)
			{
				if (bVar17)
				{
					func_1003(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1475(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1476(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1204(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_1003(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1475(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1476(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1204(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1204(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_1477(Global_40.f_7729, 4096);
					func_1382(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1478(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_1003(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_1003(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1391()
{
	Var0 = { func_1249(0) };
	return func_1063(856287005, Var0, -218846335, 0);
}

int func_1392(int iParam0, struct<4> Param1)
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
			if (func_904(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1064(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1479(&uVar7);
					if (func_1154(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1393()
{
	if (func_1480(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1480(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1480(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1480(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1480(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1480(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1394(var uParam0)
{
	return uParam0->f_1;
}

void func_1395(var uParam0)
{
	func_1481(uParam0);
	func_1483(uParam0, func_1482(-1346384396));
	func_1484(uParam0, func_1482(-712836614));
	func_1485(uParam0, func_1482(-1629133289));
	func_1486(uParam0, func_1482(1302066700));
	func_1487(uParam0, func_1482(599669344));
	func_1488(uParam0, func_1482(-1555511632));
}

void func_1396(struct<6> Param0)
{
	if (!func_1489(Param0.f_4, 1))
	{
	}
	if (!func_1489(Param0, 1))
	{
	}
	if (!func_1489(Param0.f_2, 1))
	{
	}
	if (!func_1489(Param0.f_5, 1))
	{
	}
	if (!func_1489(Param0.f_3, 1))
	{
	}
	if (!func_1489(Param0.f_1, 1))
	{
	}
}

int func_1397(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_475())
	{
		if (func_708())
		{
			bVar0 = false;
			if (!func_128((*Global_1835011)[15]->f_1, 1) && !func_472(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1490();
				*iParam1 = func_1491();
				*iParam2 = func_1492();
				return 1;
			}
			else
			{
				*iParam0 = func_1493();
				*iParam1 = func_1494();
				*iParam2 = func_1495();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_128((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1496();
				*iParam1 = func_1497();
				*iParam2 = func_1498();
				return 1;
			}
			else
			{
				*iParam0 = func_1499();
				*iParam1 = func_1500();
				*iParam2 = func_1501();
				return 1;
			}
		}
	}
	else if (func_708())
	{
		*iParam0 = func_1502();
		*iParam1 = func_1503();
		*iParam2 = func_1504();
		return 1;
	}
	else if (func_31())
	{
		*iParam0 = func_1505();
		*iParam1 = func_1506();
		*iParam2 = func_1507();
		return 1;
	}
	return 0;
}

int func_1398(int iParam0)
{
	iParam0 = func_1508(iParam0);
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

void func_1399(int iParam0, int iParam1)
{
	iParam0 = func_1508(iParam0);
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

void func_1400(int iParam0, int iParam1)
{
	iParam0 = func_1508(iParam0);
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

void func_1401(int iParam0, int iParam1)
{
	iParam0 = func_1508(iParam0);
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

void func_1402(int iParam0, int iParam1)
{
	iParam0 = func_1508(iParam0);
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

bool func_1403(int iParam0)
{
	iVar0 = func_1509(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1249(0) };
	if (func_1510(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1404(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1511(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1154(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1405(int iParam0)
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

int func_1406(int iParam0, int iParam1)
{
	if (!func_904(iParam1, 0))
	{
		return 0;
	}
	if (!func_1512(iParam1))
	{
		return 0;
	}
	if (func_1403(iParam0))
	{
		return 0;
	}
	iVar0 = func_1509(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1249(0) };
	Var1.f_4 = iVar0;
	if (!func_1202(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1407(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_904(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1064(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1479(&Var7);
					if (func_1202(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1410(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1408(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1424(1) < iParam0)
	{
		iParam0 = func_1424(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_585(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1409(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_1065(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1254(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1410(struct<4> Param0, int iParam4)
{
	if (!func_931(0))
	{
		return func_1513(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1254(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_1065(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1411(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1349(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_931(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_1065(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1412(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_24() == -1)
	{
		if (func_914(43))
		{
			if (func_924(iParam0, 412399755))
			{
				func_1179(-1791518714);
				if (func_1180() == 0)
				{
					func_583(0, 10);
					iVar0 = func_1514(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1182(iParam0) < func_1183(iParam0))
						{
							func_920(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_914(44))
		{
			if (func_924(iParam0, 709057512))
			{
				func_1179(-2087881550);
				if (func_1180() == 1)
				{
					func_583(0, 10);
					iVar0 = func_1514(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1182(iParam0) < func_1183(iParam0))
						{
							func_920(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_914(45))
		{
			if (func_924(iParam0, -1478961327))
			{
				func_1179(1908068621);
				if (func_1180() == 2)
				{
					func_583(0, 10);
					iVar0 = func_1514(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1182(iParam0) < func_1183(iParam0))
						{
							func_920(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_914(46))
		{
			if (func_924(iParam0, -1238404098))
			{
				func_1179(1611247019);
				if (func_1180() == 3)
				{
					func_583(0, 10);
					iVar0 = func_1514(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1182(iParam0) < func_1183(iParam0))
						{
							func_920(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_914(47))
		{
			if (func_924(iParam0, 1160548794))
			{
				func_1179(1319635688);
				if (func_1180() == 4)
				{
					func_583(0, 10);
					iVar0 = func_1514(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1182(iParam0) < func_1183(iParam0))
						{
							func_920(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1413(int iParam0, int iParam1)
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

void func_1414(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1515(iParam1);
	func_1516(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1517(&(uParam0->f_26), iVar1);
		if (func_1518(uParam0->f_26, &iVar0))
		{
			func_1519(iVar0, iVar1);
		}
	}
}

bool func_1415(int iParam0, int iParam1)
{
	Var0 = { func_1011(iParam0, 0, 0) };
	Var5 = { func_1063(iParam0, Var0, Var0.f_4, 0) };
	if (func_1064(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_1065(0), &Var5, iParam1);
	return true;
}

void func_1416(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1417(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1418(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1419(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1279(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1279(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1279(iVar2, iVar0);
		}
	}
}

bool func_1420(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1421(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1422()
{
	return Var0;
}

bool func_1423(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_904(iParam0, 0))
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
		func_1520(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1424(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1425(int iParam0)
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

void func_1426(var uParam0, int iParam1)
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
			if ((func_1521(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1521(uParam0->f_2[iVar0], 1))
				{
					func_1522(uParam0->f_2[iVar0], 2, 6);
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

void func_1427(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1523(uParam0, 1))
	{
		func_1524(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_1428(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1002();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1429(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_1430(var uParam0)
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

void func_1431(int iParam0, bool bParam1, bool bParam2)
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
		func_1006(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1525(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1432(int iParam0, int iParam1)
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

void func_1433(int iParam0, bool bParam1, int iParam2)
{
	func_1475(&(Global_1946804->f_1378), iParam0);
	func_1476(2, iParam0, 6);
	if (bParam1)
	{
		func_1236(0, 1);
	}
}

bool func_1434(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (_0x6f1f0b17109309da(iParam0, sParam1))
	{
		return get_anim_scene_bool(iParam0, sParam1);
	}
	return false;
}

void func_1435(bool bParam0)
{
	func_1526(bParam0);
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

float func_1436(int iParam0)
{
	iVar4 = func_1312(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1437(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1527(iVar6) - func_1527(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1437(float fParam0)
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

int func_1438(int iParam0)
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

int func_1439(int iParam0)
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

int func_1440(float fParam0, float fParam1)
{
	iVar0 = func_1437(fParam0);
	fVar1 = to_float(func_1527(iVar0));
	fVar2 = to_float(func_1527(iVar0 + 1));
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

int func_1441(int iParam0)
{
	if (func_1528(iParam0, &iVar0))
	{
		return func_1527(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1529())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1529())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1529())
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

int func_1442(int iParam0)
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

void func_1443(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1530(iParam0));
	sVar4 = func_1532(func_1531(iVar3, iParam2));
	sVar6 = func_1533(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1534(iParam0));
	iVar8 = func_1535(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1536(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_1146(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1537(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1444(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_1445(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1446(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1447(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1448(int iParam0)
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

int func_1449(int iParam0)
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

int func_1450(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1538(&iVar0, 0, iVar95, &Var1) && !func_1538(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1539(iVar0, &Var1);
			if (func_904(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1451()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1540(Global_35, &uVar0);
	Var30 = { func_1249(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1541(0);
	func_1542(7);
	func_1543(-1623728698, 1, 1, 0);
	if (func_1002() == 1160113249)
	{
		func_1543(-763730846, 1, 1, 1);
		func_1543(-361635024, 1, 1, 1);
	}
	func_1544(Global_35, &uVar0);
}

int func_1452(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_1065(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_311(&uVar6, iVar0);
	func_312(&uVar6, iVar1);
	func_313(&uVar6, iVar2);
	func_314(&uVar6, iVar3);
	func_315(&uVar6, iVar4);
	func_316(&uVar6, iVar5);
	return uVar6;
}

void func_1453(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_585(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

float func_1454(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1455(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1456(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1218(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1218(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1457()
{
	return Global_1946804->f_1497;
}

char* func_1458(int iParam0)
{
	iVar0 = func_1379(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1336(iVar0);
}

int func_1459(int iParam0)
{
	if (func_1545(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1546(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1547(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1548(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1460(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_752(func_1549(iVar0, iParam0), 1, 0))
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

bool func_1461(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_752(func_1550(iVar0, iParam0), 1, 0))
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

bool func_1462(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1463()
{
	if (func_24() != -1)
	{
		return;
	}
	func_974(1654063339, 1, 752097756);
	iVar0 = func_1315(1);
	func_1443(1, iVar0, 0);
}

void func_1464(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1465()
{
	if (func_24() != -1)
	{
		return;
	}
	func_974(1623931083, 1, 752097756);
	iVar0 = func_1315(2);
	func_1443(2, iVar0, 0);
}

void func_1466()
{
	if (func_24() != -1)
	{
		return;
	}
	func_974(-1845241476, 1, 752097756);
	iVar0 = func_1315(0);
	func_1443(0, iVar0, 0);
}

bool func_1467(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1468(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_1551(iParam0, func_1002()))
	{
		return 0;
	}
	Var1 = func_1238(func_1002());
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

int func_1469(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	Var5.f_9 = -1591664384;
	iVar19 = func_1238(func_1002());
	Var20 = { func_1309(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1311(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1195(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1204(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1418(&(Global_1946804->f_964), iVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
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
	func_1196(iVar0);
	return 1;
}

void func_1470(int iParam0, var uParam1)
{
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1413(iVar2, &iVar0))
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

void func_1471(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1472(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1552();
	}
	if (func_24() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1473(int iParam0)
{
	if (func_24() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_1006(&uVar1, iVar0, iParam0);
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
		func_1525(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1474(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1475(var uParam0, int iParam1)
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
			func_1006(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1525(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1476(int iParam0, int iParam1, int iParam2)
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

void func_1477(int iParam0, int iParam1)
{
	if (!func_1205(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

int func_1478(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1379(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1472(iParam1);
	}
	if ((bParam3 && func_1380(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1551(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1477(Global_40.f_7729, 4096);
		func_1382(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_645(iParam0);
	}
	func_1553();
	if (!func_1554(iParam1))
	{
		func_1556(iVar0, iParam0, func_1555(iParam1), 1, 0, 1);
	}
	func_1557(iParam0);
	return 1;
}

void func_1479(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_1480(int iParam0, int iParam1)
{
	if (!func_1558(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1391() };
	*iParam1 = func_1559(Var0, iParam0, 0);
	if (!func_904(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1481(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1482(int iParam0)
{
	if (func_708())
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

void func_1483(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1484(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1485(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1486(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1487(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1488(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1489(int iParam0, int iParam1)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (!func_1560(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1391() };
	Var14 = { func_1063(iParam0, Var10, iVar9, 0) };
	if (func_1410(Var14, iParam1))
	{
		if (func_1561(iParam0))
		{
			if (func_1480(325139909, &iVar18))
			{
				if (func_1489(iVar18, 0))
				{
				}
			}
		}
		else if (func_1562(iParam0))
		{
			if (func_1480(325139909, &iVar19))
			{
				if (func_1489(iVar19, 0))
				{
				}
			}
			if (func_1480(986998820, &iVar20))
			{
				if (func_1489(iVar20, 0))
				{
				}
			}
			iVar21 = func_1563(iParam0);
			if (func_904(iVar21, 0))
			{
				if (func_1489(iVar21, 1))
				{
				}
			}
		}
		func_1564();
		return true;
	}
	return false;
}

int func_1490()
{
	return 1342496140;
}

int func_1491()
{
	return 446670976;
}

int func_1492()
{
	return 1;
}

int func_1493()
{
	return -868094182;
}

int func_1494()
{
	return 1074477367;
}

int func_1495()
{
	return 1;
}

int func_1496()
{
	return -997197050;
}

int func_1497()
{
	return -2063289686;
}

int func_1498()
{
	return 2;
}

int func_1499()
{
	return -868094182;
}

int func_1500()
{
	return 1074477367;
}

int func_1501()
{
	return 1;
}

int func_1502()
{
	return 1235275977;
}

int func_1503()
{
	return 2030804811;
}

int func_1504()
{
	return 1;
}

int func_1505()
{
	return 1974379573;
}

int func_1506()
{
	return 2024948086;
}

int func_1507()
{
	return 1;
}

int func_1508(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1509(int iParam0)
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

int func_1510(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_1065(bParam2), uParam0, iParam1);
}

bool func_1511(int iParam0, var uParam1)
{
	if (!func_1403(iParam0))
	{
		return false;
	}
	iVar0 = func_1509(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1249(0) };
	if (!func_1565(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1566(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_1512(int iParam0)
{
	return func_923(iParam0) == -1784221369;
}

int func_1513(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1254(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_923(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1567(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1568(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1569(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1570(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1571(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1572(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1514(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1182(iVar9);
	iVar2 = func_1182(iVar10);
	iVar3 = func_1182(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1182(iVar12);
	}
	iVar5 = func_1183(iVar9);
	iVar6 = func_1183(iVar10);
	iVar7 = func_1183(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1183(iVar12);
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

int func_1515(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1516(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1517(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1573(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1518(int iParam0, int iParam1)
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

void func_1519(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1520(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_1521(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1522(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1523(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1524(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1525(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1526(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1527(int iParam0)
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

bool func_1528(int iParam0, int iParam1)
{
	return false;
}

bool func_1529()
{
	return false;
}

int func_1530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_1065(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_1065(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_1065(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1531(int iParam0, int iParam1)
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

char* func_1532(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1533(int iParam0)
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

char* func_1534(int iParam0)
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

int func_1535(int iParam0)
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

int func_1536(int iParam0)
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

int func_1537(int iParam0)
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

bool func_1538(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1574(iParam1) && !func_1575(iParam1))
	{
		iVar0 = func_1576(iParam1);
	}
	else
	{
		return false;
	}
	func_1577(uParam3);
	iVar5 = func_1578(iParam2);
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

void func_1539(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1579(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1580(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1540(int iParam0, var uParam1)
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
		if (func_1014(iVar31))
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

void func_1541(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_904(iVar1, 0))
		{
			func_998(iVar1, 0, bParam0);
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

void func_1542(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_24() == -1)
	{
		func_1581(352481484);
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
		if (func_927(iVar2) != -999503751)
		{
			func_1582(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1415(iVar2, 0))
		{
			func_795(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1543(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1583(iParam0))
	{
		return;
	}
	iVar0 = func_927(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1584(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1584(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1584(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1584(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1584(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1584(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1585(0))
	{
		func_1586(iParam0, 1);
		if (func_1002() == 1160113249)
		{
			func_1586(func_1585(-2125499975), 0);
		}
		else
		{
			func_1586(func_1585(1160113249), 0);
		}
	}
	func_1235();
	if (func_1587(iVar0))
	{
		_0x766315a564594401(func_1065(0), iParam0, 0);
	}
	func_795(iParam0, bParam3);
	if (bParam2)
	{
		func_1236(0, 0);
	}
}

void func_1544(int iParam0, var uParam1)
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
				if (func_1094(uParam1[iVar0]))
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

bool func_1545(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (func_924(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1546(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (func_924(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1547(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (func_924(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1548(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (func_924(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1549(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1588(iParam0);
		case 1:
			return func_1589(iParam0);
		case 2:
			return func_1590(iParam0);
		case 3:
			return func_1591(iParam0);
	}
	return 0;
}

int func_1550(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1592(iParam0);
		case 1:
			return func_1593(iParam0);
		case 2:
			return func_1594(iParam0);
		case 3:
			return func_1595(iParam0);
		case 4:
			return func_1596(iParam0);
		case 5:
			return func_1597(iParam0);
		case 6:
			return func_1598(iParam0);
		case 7:
			return func_1599(iParam0);
		case 8:
			return func_1600(iParam0);
	}
	return 0;
}

bool func_1551(int iParam0, int iParam1)
{
	iVar0 = func_1238(iParam1);
	func_1418(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

int func_1552()
{
	if (func_24() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1553()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_1058(1))
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
	task_play_anim(Global_35, func_1601(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1284(1);
	remove_anim_dict(func_1601());
}

bool func_1554(int iParam0)
{
	return false;
}

int func_1555(int iParam0)
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

void func_1556(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_1204(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_24() != -1)
	{
		return;
	}
	func_1275();
	if (bParam5)
	{
		if (!func_1602(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_1058(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_1059();
	}
	func_1603(iVar3, 1, 1, 1, 1, 1);
	func_1010(31, 0, 0, 0, 0);
	func_1061(0);
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
			func_1010(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_1010(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_796(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1557(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

bool func_1558(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_927(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1604(iParam0);
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

int func_1559(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1409(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1560(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_927(iParam1);
		iVar5 = func_1604(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_1011(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_1063(iParam1, *uParam4, uParam4->f_4, 0) };
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
			iVar34 = func_1065(0);
			Var37 = { func_1011(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_1063(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_927(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_1409(Var42, Var6.f_9, &Var20, 0))
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

bool func_1561(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
	}
	if (func_924(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1562(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return false;
	}
	if (func_924(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1563(int iParam0)
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

int func_1564()
{
	Var0 = { func_1011(856287005, 0, 0) };
	Var5 = { func_1063(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_927(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_1559(Var5, -415648720, 0);
	}
	if (!func_904(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1604(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1559(Var5, iVar11, 0);
			if (!func_904(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1562(iVar14) || func_1561(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1562(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1562(iVar14) && func_1605(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1606(iVar11, &Var16, 1))
									{
										if (!func_1410(Var16, 1))
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

bool func_1565(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1065(bParam7);
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

bool func_1566(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_1065(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

struct<28> func_1567(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_1065(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1571(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1568(int iParam0, var uParam1, bool bParam2)
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
					func_1607(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1607(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1607(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1569(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_1065(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1571(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1570(int iParam0, var uParam1, bool bParam2)
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
					func_1607(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1607(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1607(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1571(var uParam0)
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

int func_1572(int iParam0, var uParam1, bool bParam2)
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
					func_1607(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1607(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1607(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1573(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1608(&(uParam0->f_3));
}

bool func_1574(int iParam0)
{
	iParam0 = func_1508(iParam0);
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

bool func_1575(int iParam0)
{
	iParam0 = func_1508(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1574(iParam0))
	{
		return false;
	}
	iVar0 = func_1576(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_1576(int iParam0)
{
	iParam0 = func_1508(iParam0);
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

void func_1577(var uParam0)
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

int func_1578(int iParam0)
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

void func_1579(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1580(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1581(int iParam0)
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
	Var2 = { func_1309(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1311(&Var2, &iVar0, &iVar1, 0))
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
		func_1196(iVar0);
	}
}

void func_1582(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1609(iParam2, *uParam0);
	func_1610(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1583(int iParam0)
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

int func_1584(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1413(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1415(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_927(iParam0) != -999503751)
	{
		func_1582(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1585(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1002();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1586(int iParam0, int iParam1)
{
	Var0 = { func_1011(iParam0, 0, 0) };
	Var5 = { func_1063(iParam0, Var0, Var0.f_4, 0) };
	if (func_1064(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_1065(0), &Var5);
	return 1;
}

bool func_1587(int iParam0)
{
	return func_1611(func_1122(iParam0));
}

int func_1588(int iParam0)
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

int func_1589(int iParam0)
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

int func_1590(int iParam0)
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

int func_1591(int iParam0)
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

int func_1592(int iParam0)
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

int func_1593(int iParam0)
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

int func_1594(int iParam0)
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

int func_1595(int iParam0)
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

int func_1596(int iParam0)
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

int func_1597(int iParam0)
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

int func_1598(int iParam0)
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

int func_1599(int iParam0)
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

int func_1600(int iParam0)
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

char* func_1601()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1602(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1612(uParam0, iParam3, iParam2) && !func_1003(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_1058(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1277(1108822547);
		}
		else
		{
			func_1613(1108822547);
		}
	}
	func_1281(uParam0, 0, 0);
	func_1416(iParam5);
	return true;
}

void func_1603(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1552()) || bParam5)
		{
			func_1614();
		}
	}
	if (func_24() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1615(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1379(Global_40.f_7729);
				Global_1946804->f_1378 = func_1379(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1555(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1433(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1236(0, 1);
	}
	func_1416(0);
}

int func_1604(int iParam0)
{
	if (!func_904(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_927(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1605(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1606(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_1309(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1310(&Var2, func_1391());
	if (func_1311(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_1195(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_904(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1605(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_1196(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_1196(iVar0);
	}
	return false;
}

void func_1607(int iParam0, int iParam1)
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
	func_1616(iParam0, iParam1);
}

void func_1608(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1609(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1610(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1573(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1000(func_999(iParam1), 1);
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
		func_1617(uParam0);
	}
}

bool func_1611(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1612(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1472(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1432(2, iParam1))
	{
		func_1618(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1613(int iParam0)
{
	func_1072(iParam0, 8, 6);
}

void func_1614()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1615(int iParam0)
{
	iVar0 = func_1238(0);
	iVar1 = 0;
	func_1418(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

void func_1616(int iParam0, int iParam1)
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

void func_1617(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1619(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1618(var uParam0, int iParam1)
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

void func_1619(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1620(func_1002());
	if (*uParam0)
	{
		func_1608(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_24() != -1, uParam2);
	*uParam0 = 1;
}

int func_1620(int iParam0)
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
