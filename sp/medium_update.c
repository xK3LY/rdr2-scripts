void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = -1247606340;
	sLocal_25 = "beat_gang_camp_reminder";
	iLocal_26 = 23;
	sLocal_40 = "mech_skin@BUCK_BUTCHER";
	sLocal_41 = "PBL_BASE";
	sLocal_42 = "PBL_DUMP";
	sLocal_43 = "PBL_DROP_IN";
	network_set_script_is_safe_for_network_game();
	func_1(32);
	func_2(Var0[0]);
	func_3(Var0[1]);
	func_4(Var0[4]);
	func_5(Var0[2]);
	func_6(Var0[5]);
	func_7(Var0[3]);
	func_8(Var0[7]);
	func_9(Var0[8]);
	func_10(Var0[9]);
	func_11(Var0[6]);
	func_12(Var0[10]);
	func_13(Var0[11]);
	func_14(Var0[12]);
	func_15(Var0[13]);
	func_16(Var0[16]);
	func_17(Var0[15]);
	func_18(Var0[17]);
	func_19(Var0[14]);
	func_20(Var0[18]);
	func_21(Var0[19]);
	func_22(Var0[20]);
	func_23(Var0[21]);
	func_24(Var0[22]);
	func_25(Var0[23]);
	func_26(Var0[24]);
	func_27(Var0[25]);
	func_28(Var0[26]);
	func_29(Var0[27]);
	func_30(Var0[28]);
	func_31(Var0[29]);
	while (!func_32(256))
	{
		wait(0);
	}
	iVar211 = 0;
	while (iVar211 < Var0)
	{
		if (Var0[iVar211]->f_6 & 2 == 0)
		{
			func_33(&(Var0[iVar211]->f_6), 1);
		}
		else
		{
			Call_Loc(&Var0[iVar211]);
			func_34(&(Var0[iVar211]->f_6), 1);
		}
		iVar211++;
	}
	func_35(32);
	while (Global_1572887->f_8)
	{
		wait(0);
	}
	func_35(4);
	bVar212 = false;
	while (!bVar212)
	{
		Global_1935630->f_12 = is_entity_dead(Global_35);
		bVar212 = _0x9e4ef615e307fbbe();
		if (bVar212)
		{
		}
		else
		{
			fVar214 = 0f;
			iVar211 = 0;
			while (iVar211 < Var0)
			{
				_reset_script_time_within_frame();
				if (Var0[iVar211]->f_6 & 1 != 0)
				{
					Call_Loc(Var0[iVar211]->f_1);
				}
				fVar213 = _get_script_time_within_frame_in_microseconds();
				fVar214 = (fVar214 + fVar213);
				if (fVar214 >= 25f || func_36() != -1)
				{
					Global_1935630->f_12 = is_entity_dead(Global_35);
					fVar214 = 0f;
					bVar212 = _0x9e4ef615e307fbbe();
					if (bVar212)
					{
					}
					else
					{
						wait(0);
						iVar211++;
					}
					while (!_0x380ffa15b72408fb(10))
					{
						wait(0);
					}
					func_37(&Var0);
					terminate_this_thread();
				}
			}
		}
	}
}

void func_1(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

void func_2(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 2151;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "PLAYER MEDIUM", 24);
	uParam0->f_6 = 2;
}

void func_3(var uParam0)
{
	*uParam0 = 2526;
	uParam0->f_1 = 2555;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "OUTFIT", 24);
	uParam0->f_6 = 2;
}

void func_4(var uParam0)
{
	*uParam0 = 3002;
	uParam0->f_1 = 3087;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "GANGS", 24);
	uParam0->f_6 = 2;
}

void func_5(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 3293;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "FEED", 24);
	uParam0->f_6 = 2;
}

void func_6(var uParam0)
{
	*uParam0 = 3350;
	uParam0->f_1 = 3365;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "AMBUSHES", 24);
	uParam0->f_6 = 2;
}

void func_7(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 3823;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "SCRIPT_LAUNCHER", 24);
	uParam0->f_6 = 2;
}

void func_8(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 3884;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "LAW(M)", 24);
	uParam0->f_6 = 2;
}

void func_9(var uParam0)
{
	*uParam0 = 3896;
	uParam0->f_1 = 3949;
	uParam0->f_2 = 4179;
	StringCopy(&(uParam0->f_3), "LAW_OFFICES", 24);
	uParam0->f_6 = 2;
}

void func_10(var uParam0)
{
	*uParam0 = 4211;
	uParam0->f_1 = 4223;
	uParam0->f_2 = 4267;
	StringCopy(&(uParam0->f_3), "WAGON_FENCE", 24);
	uParam0->f_6 = 2;
}

void func_11(var uParam0)
{
	*uParam0 = 4279;
	uParam0->f_1 = 4318;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "PED ROAM", 24);
	uParam0->f_6 = 2;
}

void func_12(var uParam0)
{
	*uParam0 = 6258;
	uParam0->f_1 = 6266;
	uParam0->f_2 = 6335;
	StringCopy(&(uParam0->f_3), "AMB_VIG_VAL", 24);
	uParam0->f_6 = 2;
}

void func_13(var uParam0)
{
	*uParam0 = 6343;
	uParam0->f_1 = 6359;
	uParam0->f_2 = 6428;
	StringCopy(&(uParam0->f_3), "AMB_VIG_MNG", 24);
	uParam0->f_6 = 2;
}

void func_14(var uParam0)
{
	*uParam0 = 6436;
	uParam0->f_1 = 6444;
	uParam0->f_2 = 6693;
	StringCopy(&(uParam0->f_3), "CAMP_VIGNETTES", 24);
	uParam0->f_6 = 2;
}

void func_15(var uParam0)
{
	*uParam0 = 6705;
	uParam0->f_1 = 6762;
	uParam0->f_2 = 7457;
	StringCopy(&(uParam0->f_3), "FOCUS_VOLUMES", 24);
	uParam0->f_6 = 2;
}

void func_16(var uParam0)
{
	*uParam0 = 7490;
	uParam0->f_1 = 7502;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "PROPERTY", 24);
	uParam0->f_6 = 2;
}

void func_17(var uParam0)
{
	*uParam0 = 8000;
	uParam0->f_1 = 8025;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "BEAT LAUNCHER", 24);
	uParam0->f_6 = 2;
}

void func_18(var uParam0)
{
	*uParam0 = 8149;
	uParam0->f_1 = 8157;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "AGGRO CACHE", 24);
	uParam0->f_6 = 2;
}

void func_19(var uParam0)
{
	*uParam0 = 8357;
	uParam0->f_1 = 8380;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "SHOPKEEPERS", 24);
	uParam0->f_6 = 2;
}

void func_20(var uParam0)
{
	*uParam0 = 8846;
	uParam0->f_1 = 11016;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "POST OFFICES", 24);
	uParam0->f_6 = 2;
}

void func_21(var uParam0)
{
	*uParam0 = 11359;
	uParam0->f_1 = 11424;
	uParam0->f_2 = 11475;
	StringCopy(&(uParam0->f_3), "TOWN MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_22(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 11483;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "DEED MANAGER(M)", 24);
	uParam0->f_6 = 2;
}

void func_23(var uParam0)
{
	*uParam0 = 11802;
	uParam0->f_1 = 11972;
	uParam0->f_2 = 12053;
	StringCopy(&(uParam0->f_3), "TRAIN MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_24(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 12097;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "LEADIN MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_25(var uParam0)
{
	*uParam0 = 12331;
	uParam0->f_1 = 12394;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "RCM HANDLER", 24);
	uParam0->f_6 = 2;
}

void func_26(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 12394;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "RCM HANDLER_REPEAT", 24);
	uParam0->f_6 = 2;
}

void func_27(var uParam0)
{
	*uParam0 = 2143;
	uParam0->f_1 = 12757;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "HUD MEDIUM", 24);
	uParam0->f_6 = 2;
}

void func_28(var uParam0)
{
	*uParam0 = 12939;
	uParam0->f_1 = 12963;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "SPECIAL PEDS", 24);
	uParam0->f_6 = 2;
}

void func_29(var uParam0)
{
	*uParam0 = 13292;
	uParam0->f_1 = 13304;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "SALOON MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_30(var uParam0)
{
	*uParam0 = 13551;
	uParam0->f_1 = 13594;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "REPEATED_SOUNDS(M)", 24);
	uParam0->f_6 = 2;
}

void func_31(var uParam0)
{
	*uParam0 = 13669;
	uParam0->f_1 = 13677;
	uParam0->f_2 = 2143;
	StringCopy(&(uParam0->f_3), "DISTRICT KILL TIMER", 24);
	uParam0->f_6 = 2;
}

bool func_32(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_33(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

int func_36()
{
	return Global_1572887->f_12;
}

void func_37(int iParam0)
{
	func_98(iParam0);
}

void func_38()
{
}

void func_39()
{
	if (func_99(Global_1935630->f_44) && (_is_weapon_rifle(Global_1935630->f_44) || _is_weapon_repeater(Global_1935630->f_44)))
	{
		Global_1935630->f_45 = Global_1935630->f_44;
	}
	if (func_36() == -1)
	{
		if ((_0xb16223cb7da965f0(get_player_index()) && _0x1e8099f449abb0ba(get_player_index())) && !_0xc93a9a45430d484e(get_player_index()))
		{
			iVar0 = _get_deadeye_ability_level(get_player_index());
			if ((!func_100(590) && !func_101(590)) && iVar0 == 2)
			{
				func_102(590, 0);
			}
			else if ((!func_100(591) && !func_101(591)) && iVar0 == 3)
			{
				func_102(591, 0);
			}
			else if ((!func_100(592) && !func_101(592)) && iVar0 == 4)
			{
				func_102(592, 0);
			}
			else if ((!func_100(593) && !func_101(593)) && iVar0 == 5)
			{
				func_102(593, 0);
			}
		}
	}
	if (!is_entity_dead(Global_35))
	{
		if (func_103(0, 0, 1))
		{
			if (_0x336b3d200ab007cb(Global_35, Global_36, 50f, 0) > 0)
			{
				set_ped_config_flag(Global_35, 424, true);
			}
			else
			{
				set_ped_config_flag(Global_35, 424, false);
			}
		}
		else
		{
			set_ped_config_flag(Global_35, 424, false);
		}
	}
}

void func_40()
{
	if (!Global_40)
	{
		func_104(6, 1, 0);
		func_105(6, 1, 0);
	}
}

void func_41()
{
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (func_36() != -1)
	{
		return;
	}
	if (!Global_40 && !func_32(4096))
	{
		return;
	}
	if (!func_106())
	{
		return;
	}
	if (Global_1879534->f_1)
	{
		return;
	}
	if (&Global_1905941 != Global_40.f_7729 || func_107(&Global_1905941, 32768))
	{
		if ((!func_107(&Global_1905941, 4096) || func_107(&Global_1905941, 32768)) && (is_screen_faded_out() || !func_107(&Global_1905941, 8192)))
		{
			if (Global_35 != 0 && func_108(Global_35, &Global_1905941, 0, 0, 0))
			{
				func_109(Global_40.f_7729, 4096);
				func_110(&Global_1905941, 4096);
			}
			else
			{
				Global_1905943 = 0;
				Global_1905941 = Global_40.f_7729;
				func_109(&Global_1905941, 32768);
				func_109(&Global_1905941, 8192);
				decor_set_bool(Global_35, "playerChangeOutfits", false);
			}
		}
		if ((is_screen_faded_out() || !func_107(&Global_1905941, 8192)) && func_107(&Global_1905941, 4096))
		{
			Global_40.f_7729 = &Global_1905941;
			Global_1905943 = 0;
			func_111(&Global_1905941);
			func_112(&Global_1905941);
			decor_set_bool(Global_35, "playerChangeOutfits", false);
			func_109(&Global_1905941, 32768);
			if (func_107(&Global_1905941, 8192))
			{
				func_109(&Global_1905941, 8192);
				decor_set_bool(Global_35, "outfitChanged", true);
			}
		}
	}
	else if (Global_1905943 && is_screen_faded_in())
	{
		Global_1905943 = 0;
	}
}

void func_42()
{
	if (!network_is_in_session())
	{
		func_113();
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_114(iVar0, 0);
			iVar0++;
		}
		if (!func_115(65536, 2))
		{
			func_117(func_116(), 125f, "lemoyne_raider_church", 1, 0, 1, 0, -1082130432);
		}
	}
}

void func_43()
{
	if ((!does_entity_exist(Global_35) || Global_1935630->f_12) || network_is_in_session())
	{
		return;
	}
	switch (Global_1392135->f_58)
	{
		case 0:
			func_118();
			switch ((*Global_1392050)[&Global_1392135]->f_12)
			{
				case 0:
					func_119(&Global_1392135);
					func_120(&Global_1392135);
					break;
				case 1:
					func_121(&Global_1392135);
					break;
			}
			(*Global_1392050)[&Global_1392135]->f_12++;
			(*Global_1392050)[&Global_1392135]->f_12 = ((*Global_1392050)[&Global_1392135]->f_12 % 2);
			func_122();
			func_123(&Global_1392135);
			func_124();
			break;
		case 1:
			break;
	}
}

void func_44()
{
	if (Global_1900363->f_5 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_1900363[iVar0] != 0)
			{
				func_125(iVar0);
			}
			iVar0++;
		}
	}
}

void func_45()
{
	enable_dispatch_service(8, false);
}

void func_46()
{
	if (func_126() || func_127())
	{
		Global_1393447->f_3 = -1;
		func_128(0, 0);
	}
	if (func_129(Global_1393447, 1))
	{
		func_130(Global_1393447, 1);
		func_131(Global_1393447, 2);
		func_128(7, 0);
	}
	func_132();
	switch (func_133())
	{
		case 0:
			func_128(1, 0);
			break;
		case 1:
			Global_1393447->f_55 = -1;
			func_128(2, 1);
			break;
		case 2:
			if (func_134(0))
			{
				Global_1393447->f_55 = -1;
				func_128(4, 1);
			}
			break;
		case 4:
			if (func_135() && func_136(0))
			{
				func_128(5, 1);
			}
			else
			{
				func_128(1, 1);
			}
			break;
		case 5:
			if (func_138(func_137()))
			{
				sVar0 = func_139(Global_1393447->f_3);
				request_script(sVar0);
				Global_1393447->f_55 = -1;
				func_128(6, 0);
			}
			else
			{
				func_128(1, 1);
			}
			break;
		case 6:
			if (Global_1393447->f_55 <= 0)
			{
				Global_1393447->f_55 = func_140();
			}
			if (func_141())
			{
				func_128(7, 0);
			}
			else if (func_142())
			{
				sVar1 = func_139(Global_1393447->f_3);
				set_script_as_no_longer_needed(sVar1);
				func_143(-1);
				Global_1393447->f_3 = -1;
				Global_1393447->f_69 = 0;
				func_128(0, 0);
			}
			break;
		case 7:
			if (!func_144())
			{
				func_145(12f, 0, 0);
				if (func_129(Global_1393447, 2048))
				{
					func_128(8, 0);
				}
				else
				{
					func_128(0, 0);
				}
			}
			break;
		case 8:
			if (func_146())
			{
				func_130(Global_1393447, 2048);
				Global_1393447->f_55 = -1;
				func_130(Global_1393447, 1);
				func_128(0, 0);
			}
			break;
	}
}

void func_47()
{
	if (Global_1934603->f_161 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (!is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
			{
				func_147(iVar0);
			}
			iVar0++;
		}
	}
}

void func_48()
{
	func_148();
}

void func_49()
{
	func_149(0, 0);
	func_149(1, 0);
	func_149(2, !func_150(12));
	func_149(3, 0);
	func_149(5, func_151());
	func_149(6, 0);
}

void func_50()
{
	if (func_36() != -1)
	{
		return;
	}
	if (is_thread_active(Global_1395482->f_118, false))
	{
	}
	iVar0 = &Global_1395482;
	iVar1 = func_152(1);
	if (func_153(iVar1))
	{
	}
	if (does_entity_exist(iVar1))
	{
		if (is_ped_human(iVar1))
		{
			if (!(decor_exist_on(iVar1, "bIsCriminal") && decor_get_bool(iVar1, "bIsCriminal")))
			{
				iVar1 = 0;
			}
		}
	}
	if (!func_154(iVar0, 1024))
	{
		if (func_155(iVar0) == func_156())
		{
			if (func_157(player_id(), 0, 0, 1))
			{
				func_158(iVar0, 1024);
			}
		}
	}
	else if (func_155(iVar0) != func_156() || func_159())
	{
		func_160(iVar0, 1024);
	}
	if (func_161(iVar0))
	{
		func_162(iVar0, iVar1);
	}
	Global_1395482 = &Global_1395482 + 1;
	if (&Global_1395482 >= 7)
	{
		Global_1395482 = 0;
	}
}

void func_51()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_163(iVar0);
		iVar0++;
	}
}

void func_52()
{
	func_164();
}

void func_53()
{
	if (func_36() != -1)
	{
		return;
	}
	if (is_thread_active(Global_1415412->f_1, false))
	{
	}
	if (func_165())
	{
		func_166();
	}
}

void func_54()
{
	func_167();
}

void func_55()
{
	if (!is_itemset_valid(&Global_1396084))
	{
		Global_1396084 = create_itemset(true);
	}
	func_168(&(Global_1396084->f_3));
}

void func_56()
{
	clean_itemset(&Global_1396084);
	if (is_itemset_valid(&Global_1396084))
	{
		iVar0 = get_itemset_size(&Global_1396084);
	}
	if (iVar0 > Global_1396084->f_2)
	{
		_0xf008e0ba1fe1d644((iVar0 - Global_1396084->f_2));
		Global_1396084->f_2 = iVar0;
	}
	else if (iVar0 < Global_1396084->f_2)
	{
		_0x7d4e70a67a651c71((Global_1396084->f_2 - iVar0));
		Global_1396084->f_2 = iVar0;
	}
	if (iVar0 == 0)
	{
		return;
	}
	func_169(&(Global_1396084->f_3), 0);
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		iVar8 = 0;
		iVar6 = 0;
		iVar7 = 0;
		iVar5 = get_indexed_item_in_itemset(iVar16, &Global_1396084);
		if (_does_item_have_valid_base(iVar5))
		{
			iVar6 = _get_entity_from_item(iVar5);
		}
		if (does_entity_exist(iVar6) && !is_entity_dead(iVar6))
		{
			if (is_entity_an_object(iVar6))
			{
				iVar7 = get_object_index_from_entity_index(iVar6);
				set_entity_as_mission_entity(iVar7, true, true);
				iVar9 = func_170(iVar7);
				if (!does_entity_exist(iVar9))
				{
					remove_from_itemset(iVar7, &Global_1396084);
					set_object_as_no_longer_needed(&iVar7);
				}
			}
			else if (is_entity_a_ped(iVar6))
			{
				iVar8 = get_ped_index_from_entity_index(iVar6);
				if (!func_171(iVar8))
				{
					if ((((iVar12 != 2 && iVar12 != 3) && iVar12 != 10) && iVar12 != 11) && !func_172(iVar8, 518218985))
					{
						if (func_173(iVar8, 0, &(Global_1396084->f_3), &(Global_1396084->f_31), 0, 0))
						{
							clear_ped_tasks(iVar8, 1, 0);
							task_smart_flee_ped(iVar8, Global_35, 1000f, -1, 0, 1077936128, 0);
							func_174(iVar8, 10);
						}
					}
				}
				iVar12 = func_175(iVar8);
				iVar13 = func_176(iVar8);
				if (func_177(iVar8, 2))
				{
					if (is_entity_a_mission_entity(iVar8) && iVar12 > 0)
					{
						if (func_178(iVar8, 35f, 0, 0))
						{
							func_179(iVar8, 2);
						}
					}
				}
				switch (iVar12)
				{
					case 0:
						set_entity_as_mission_entity(iVar8, true, true);
						func_174(iVar8, 1);
					case 1:
						if (is_ped_in_any_vehicle(iVar8, false) && !func_177(iVar8, 1))
						{
							clear_ped_tasks(iVar8, 1, 0);
							task_leave_any_vehicle(iVar8, 0, 0);
							func_174(iVar8, 7);
						}
						else
						{
							switch (iVar13)
							{
								case 0:
									func_174(iVar8, 6);
									break;
								case 1:
									iVar10 = func_180(iVar8);
									if (does_entity_exist(iVar10))
									{
										iVar11 = get_entity_type(iVar10);
										if (iVar11 == 1)
										{
											if (!is_entity_dead(iVar10))
											{
												task_smart_flee_ped(iVar8, get_ped_index_from_entity_index(iVar10), 1000f, -1, 0, 1077936128, 0);
												func_174(iVar8, 3);
											}
										}
										else
										{
											vVar1 = { get_offset_from_entity_in_world_coords(iVar8, 0f, 3f, 0f) };
											task_smart_flee_coord(iVar8, vVar1, 1000f, -1, false, 1077936128);
											func_174(iVar8, 2);
										}
									}
									else
									{
										vVar1 = { get_offset_from_entity_in_world_coords(iVar8, 0f, 3f, 0f) };
										task_smart_flee_coord(iVar8, vVar1, 1000f, -1, false, 1077936128);
										func_174(iVar8, 2);
									}
									break;
								case 3:
									iVar11 = get_entity_type(iVar10);
									if (iVar11 == 1 || iVar11 == 2)
									{
										task_follow_to_offset_of_entity(iVar8, iVar10, 0f, -3f, 0f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
									}
									func_174(iVar8, 5);
									break;
								case 5:
								case 6:
									if (iVar13 == 6)
									{
										fVar17 = 1f;
									}
									else
									{
										fVar17 = 2f;
									}
									iVar14 = func_181(iVar8);
									if (func_182(iVar14))
									{
										func_183(iVar14, &vVar1, &fVar4);
										_task_move_in_traffic_2(iVar8, vVar1, 1073741824, fVar17, 0, 0);
									}
									func_174(iVar8, 4);
									break;
								case 4:
									func_184(iVar8, &vVar1, &fVar4);
									if (!func_185(vVar1))
									{
										_task_move_in_traffic_2(iVar8, vVar1, 1073741824, 2f, 0, 0);
									}
									func_174(iVar8, 4);
									break;
								case 2:
									if (func_173(iVar8, 0, &(Global_1396084->f_3), &(Global_1396084->f_31), 0, 0))
									{
										clear_ped_tasks(iVar8, 1, 0);
										task_smart_flee_ped(iVar8, Global_35, 1000f, -1, 0, 1077936128, 0);
										func_174(iVar8, 3);
									}
									break;
								case 7:
									vVar1 = { func_186(iVar8) };
									task_follow_nav_mesh_to_coord(iVar8, vVar1, 1f, -1, 0.25f, 4, 40000f);
									func_174(iVar8, 9);
									break;
								case 8:
									func_174(iVar8, 8);
									break;
								case 9:
									func_174(iVar8, 11);
									break;
							}
						}
						break;
					case 6:
						if (decor_exist_on(iVar8, "pedRoam_targetArea"))
						{
							func_184(iVar8, &vVar1, &fVar4);
							task_wander_in_area(iVar8, vVar1, fVar4, 1077936128, 1086324736, 0);
						}
						else if (decor_exist_on(iVar8, "pedRoam_targetRegion"))
						{
							vVar1 = { func_187(decor_get_int(iVar8, "pedRoam_targetRegion"), 1) };
							if (iVar13 == 6)
							{
								fVar18 = 1f;
							}
							else
							{
								fVar18 = 2f;
							}
							clear_sequence_task(&iVar15);
							open_sequence_task(&iVar15);
							task_follow_nav_mesh_to_coord(0, vVar1, fVar18, -1, 0.25f, 4, 40000f);
							task_wander_in_area(0, vVar1, 75f, 1077936128, 1086324736, 0);
							close_sequence_task(iVar15);
							task_perform_sequence(iVar8, iVar15);
							clear_sequence_task(&iVar15);
						}
						else
						{
							task_wander_standard(iVar8, 40000f, 0);
						}
						func_174(iVar8, 11);
						break;
					case 2:
						if (get_script_task_status(iVar8, 518218985, true) == 8)
						{
							func_174(iVar8, 1);
							func_188(iVar8, 0);
						}
						break;
					case 3:
						if (get_script_task_status(iVar8, 518218985, true) == 8)
						{
							func_174(iVar8, 1);
							func_188(iVar8, 0);
						}
						break;
					case 4:
						if (get_script_task_status(iVar8, -1665583462, true) == 8)
						{
							func_174(iVar8, 1);
							func_188(iVar8, 0);
						}
						break;
					case 5:
						if (get_script_task_status(iVar8, 1056466932, true) == 8)
						{
							func_174(iVar8, 1);
							func_188(iVar8, 0);
						}
						break;
					case 7:
						if (get_script_task_status(iVar8, -828834893, true) == 8)
						{
							if (iVar13 == 0)
							{
								func_174(iVar8, 6);
							}
							else
							{
								func_174(iVar8, 1);
							}
						}
						break;
					case 9:
						if (((!func_172(iVar8, -1518311320) && !func_172(iVar8, -1665583462)) && !func_172(iVar8, 713668775)) && !is_ped_using_any_scenario(iVar8))
						{
							_task_use_nearest_scenario_to_coord(iVar8, get_entity_coords(iVar8, false, false), 6f, 0, false, true, false, false);
						}
						break;
					case 8:
						if (get_script_task_status(iVar8, -982327190, true) != 1)
						{
							clear_ped_tasks(iVar8, 1, 0);
							task_stand_still(iVar8, -1);
						}
						break;
					case 10:
						set_blocking_of_non_temporary_events(iVar8, false);
						func_174(iVar8, 11);
						break;
					case 11:
						break;
					default:
						break;
				}
				bVar19 = false;
				vVar1 = { get_entity_coords(iVar8, true, false) };
				if (vdist(vVar1, Global_36) > 150f)
				{
					bVar19 = true;
				}
				else if (is_screen_faded_out() && func_189(Global_1396084->f_1, 1))
				{
					bVar19 = true;
				}
				else if (func_190(0))
				{
					bVar19 = true;
				}
				if (bVar19)
				{
					clear_ped_tasks(iVar8, 1, 0);
					task_wander_standard(iVar8, 40000f, 0);
					if (is_in_itemset(iVar8, &Global_1396084))
					{
						remove_from_itemset(iVar8, &Global_1396084);
					}
					if (is_entity_a_mission_entity(iVar8))
					{
						set_ped_as_no_longer_needed(&iVar8);
					}
					return;
				}
			}
		}
		else if (func_189(Global_1396084->f_1, 2))
		{
			if (does_entity_exist(iVar6))
			{
				if (is_entity_a_ped(iVar6))
				{
					iVar8 = get_ped_index_from_entity_index(iVar6);
					if (func_177(iVar8, 4))
					{
						func_179(iVar8, 4);
						func_191(&(Global_1396084->f_1), 2);
						func_192(7, 2048);
					}
				}
			}
		}
		iVar16++;
	}
	return;
}

void func_57()
{
}

void func_58()
{
	if (((!func_193() && func_194(0, 1)) && is_screen_faded_in()) || func_189(Global_1415419->f_3, 1))
	{
		iVar0 = func_195();
		if (iVar0 != -1)
		{
			func_196();
		}
	}
}

void func_59()
{
}

void func_60()
{
	Global_1415419->f_9754 = 0;
}

void func_61()
{
	if (((!func_193() && func_194(0, 1)) && is_screen_faded_in()) || func_189(Global_1415419->f_3, 1))
	{
		iVar0 = func_195();
		if (iVar0 != -1)
		{
			func_197();
		}
	}
}

void func_62()
{
}

void func_63()
{
}

void func_64()
{
	switch (func_198())
	{
		case 0:
			func_199(1);
			break;
		case 5:
			if (func_200())
			{
				func_201();
				func_199(2);
				return;
			}
			if (func_202())
			{
				func_199(3);
				return;
			}
			if (func_203())
			{
				func_204();
				func_199(4);
				return;
			}
			func_205();
			func_206();
			func_207();
			if (func_208() < 2)
			{
				if (!func_209())
				{
					func_210();
				}
				if (func_211(1358951864, 1))
				{
					if (func_208() == 0)
					{
						func_212(1358951864, 1, 0);
					}
				}
				if (func_213())
				{
					func_214();
				}
				func_215();
				if ((!func_193() && !func_216()) && is_player_control_on(player_id()))
				{
					func_217();
				}
				func_199(6);
				return;
			}
			else
			{
				if (func_209())
				{
					func_218();
					func_219();
				}
				if (func_220(2))
				{
					func_221(2, 3);
				}
			}
			break;
	}
}

void func_65()
{
	func_222();
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*Global_1955500)[iVar0]->f_1 = 0;
		(*Global_1955500)[iVar0]->f_2 = 0;
		(*Global_1955500)[iVar0] = 0;
		iVar0++;
	}
}

void func_67()
{
	iVar0 = func_223();
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	bVar5 = false;
	bVar6 = is_ped_injured(iVar0);
	bVar7 = (!bVar6 && is_ped_in_combat(iVar0, 0));
	bVar8 = (&Global_1955498 % 2) == false;
	bVar9 = (does_entity_exist(iVar0) && (is_ped_active_in_scenario(iVar0, 1) || is_ped_using_any_scenario(iVar0)));
	Global_1955498 = &Global_1955498 + 1;
	iVar4 = func_224(0, 0);
	if (iVar4 != -1)
	{
		if (!_does_volume_exist((*Global_1955500)[iVar4]->f_1) || !is_entity_in_volume(iVar0, (*Global_1955500)[iVar4]->f_1, true, 0))
		{
			func_225(iVar4, 1, 1);
			iVar4 = -1;
			bVar5 = true;
		}
	}
	if (iVar4 != -1 && bVar9)
	{
		func_225(iVar4, 1, 1);
		iVar4 = -1;
		bVar5 = true;
	}
	if (bVar9)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (_does_volume_exist((*Global_1955500)[iVar1]->f_1))
		{
			iVar2 = iVar1;
			if (!func_226(iVar1, 64))
			{
				if (!is_thread_active((*Global_1955500)[iVar1]->f_3, false))
				{
					if (iVar1 == iVar4)
					{
						func_225(-1, 1, 1);
						iVar4 = -1;
						bVar5 = true;
					}
					func_227(&iVar2, 1);
				}
				else
				{
					if (bVar7)
					{
						if (func_226(iVar1, 16))
						{
							if (iVar4 == iVar1)
							{
								func_225(-1, 1, 1);
								iVar4 = -1;
								bVar5 = true;
							}
							func_227(&iVar2, 1);
							Jump @546; //curOff = 344
						}
						else if (!func_226(iVar1, 1))
						{
							if (func_226(iVar1, 32))
							{
								func_228(iVar1, 1);
								if (iVar4 == iVar1)
								{
									func_225(-1, 1, 1);
									iVar4 = -1;
									bVar5 = true;
								}
							}
						}
					}
					if (iVar3 == -1)
					{
						if (!bVar5 && iVar1 != iVar4)
						{
							if ((!func_226(iVar3, 1) && _does_volume_exist((*Global_1955500)[iVar1]->f_1)) && is_entity_in_volume(iVar0, (*Global_1955500)[iVar1]->f_1, true, 0))
							{
								if (!is_entity_dead((*Global_1955500)[iVar1]->f_2) || !func_226(iVar1, 8))
								{
									if (!bVar7 || !(func_226(iVar1, 16) || func_226(iVar1, 32)))
									{
										iVar3 = iVar1;
									}
								}
							}
						}
					}
				}
				iVar1++;
				if (bVar5)
				{
					return;
				}
				if (iVar4 != -1)
				{
					if (func_226(iVar4, 1))
					{
						func_225(-1, 1, 1);
						return;
					}
					if (bVar8)
					{
						if (_0xa24c1d341c6e0d53(1, 1, 1))
						{
							if (func_229())
							{
								func_225(-1, 1, 1);
							}
							return;
						}
					}
					if (iVar3 != -1)
					{
						func_225(-1, 1, 1);
						return;
					}
				}
				else if ((iVar3 != -1 && !func_226(iVar3, 1)) && _does_volume_exist((*Global_1955500)[iVar3]->f_1))
				{
					func_225(-1, 1, 1);
					func_230(iVar3);
				}
			}
		}
	}
}

void func_68()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_227(&iVar0, 1);
		iVar0++;
	}
}

void func_69()
{
	func_231();
}

void func_70()
{
	if (func_232())
	{
		func_231();
		return;
	}
	iVar0 = func_233(func_156());
	if (Global_1395601->f_482 != -1 && Global_1395601->f_482 != iVar0)
	{
		if (func_234(Global_1395601->f_482))
		{
			func_235(Global_1395601->f_482);
			func_236(Global_1395601->f_482, 0);
			Global_1395601->f_482 = -1;
		}
	}
	if (!func_237(iVar0))
	{
		return;
	}
	if (!func_234(iVar0))
	{
		if (!func_238(iVar0))
		{
			if (!func_232())
			{
				func_236(iVar0, 1);
			}
		}
		return;
	}
	switch (Global_1395601->f_5[iVar0]->f_27)
	{
		case 0:
			if (func_238(iVar0))
			{
				if (func_239(iVar0))
				{
					if (func_240(Global_40.f_9384[iVar0]->f_1))
					{
						if (func_241(Global_40.f_9384[iVar0]->f_1, 1))
						{
							func_242(iVar0, 2);
						}
						else
						{
							func_243(256);
							func_242(iVar0, 1);
							Jump @301; //curOff = 269
							Global_1395601->f_482 = iVar0;
							func_244(iVar0);
							func_243(256);
							func_242(iVar0, 1);
							Jump @469; //curOff = 301
							if (func_238(iVar0))
							{
								if (!func_241(Global_40.f_9384[iVar0]->f_1, 1))
								{
									func_245(iVar0);
								}
								else
								{
									func_242(iVar0, 2);
								}
							}
							else
							{
								func_245(iVar0);
							}
							func_247(iVar0, !func_246(iVar0));
							Jump @469; //curOff = 372
							if (!is_entity_in_volume(Global_35, Global_1395601->f_5[iVar0]->f_23, true, 0) && func_248(Global_35, Global_1395601->f_5[iVar0]->f_15, 1) > 64f)
							{
								func_249(&(Global_40.f_9384[iVar0]->f_1));
								func_250();
								func_235(iVar0);
								func_242(iVar0, 0);
							}
						}
						Global_1395601->f_5[iVar0]->f_21 = 0;
						Global_1395601->f_5[iVar0]->f_22 = 0;
					}
				}
			}
			default:
				break;
	}
}

void func_71()
{
	Global_1327479 = -1;
	Global_1327479->f_1 = -1;
	func_251(0);
}

void func_72()
{
	if (func_103(0, 1, 1))
	{
		func_252();
		if (!func_253(&Global_1327479))
		{
			func_254();
		}
	}
	if (Global_16)
	{
		func_255(Global_1310750->f_16071, 0, 0, 0, 1);
	}
	if (!func_256())
	{
		func_254();
		return;
	}
	if (&Global_1327479 != -1)
	{
		if (!is_screen_faded_in())
		{
			return;
		}
		func_257();
	}
	else
	{
		iVar0 = func_258();
		if (func_259(iVar0))
		{
			func_260(iVar0, -1);
		}
	}
}

void func_73()
{
}

void func_74()
{
	if (Global_1935630->f_12 || (Global_1572887->f_12 == 0 && !func_261()))
	{
		Global_1935630->f_32 = 0;
		Global_1935630->f_24 = 0;
		Global_1935630->f_33 = 0;
		return;
	}
	if (Global_1572887->f_12 == -1 || does_entity_exist(Global_35))
	{
		Global_1935630->f_32 = func_262(Global_35);
		Global_1935630->f_33 = func_262(Global_1935630->f_41);
		Global_1935630->f_24 = _0x336b3d200ab007cb(Global_35, Global_36, 30f, 16900) > 0;
		if (!Global_1935630->f_24)
		{
			iVar0 = _0xd0b7aeb56229d317(Global_35);
			if (does_entity_exist(iVar0))
			{
				if (is_ped_human(iVar0))
				{
					if (!is_entity_a_mission_entity(iVar0))
					{
						Global_1935630->f_24 = 1;
					}
				}
			}
		}
	}
}

void func_75()
{
	func_263(&(Global_1393529->f_256));
	func_264();
}

void func_76()
{
	if (Global_1572887->f_8)
	{
		return;
	}
	if (func_265())
	{
		return;
	}
	if (Global_1914319->f_17371)
	{
		return;
	}
	func_266();
	if (!func_267())
	{
		func_268(Global_1914319->f_16855.f_1, &Global_1393529);
		Global_1393529 = -1;
		Global_1393529->f_1 = -1;
		if (func_269(&Global_1393529, 32))
		{
			clear_ped_tasks(Global_1393529->f_3, 1, 0);
			func_270(&Global_1393529);
		}
		if (func_271(Global_1393529->f_2) && func_272(Global_1393529->f_2))
		{
			func_273(Global_1393529->f_2, 0, 1, 0, 0);
		}
		return;
	}
	if (func_271(Global_1393529->f_2) && func_274(Global_1393529->f_2, 0))
	{
		return;
	}
	if (func_271(Global_1393529->f_2) && func_272(Global_1393529->f_2))
	{
		func_273(Global_1393529->f_2, 0, 1, 0, 0);
	}
	iVar0 = Global_1914319->f_16855.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_275(iVar0))
	{
		return;
	}
	if (func_276(Global_1914319->f_16855.f_1))
	{
		return;
	}
	if (!func_271(Global_1393529->f_2))
	{
		return;
	}
	if (!_0x800df3fc913355f3(func_277(Global_1393529->f_2)))
	{
		return;
	}
	Global_1393529->f_3 = func_278(Global_1393529->f_2);
	if (!does_entity_exist(Global_1393529->f_3) || is_ped_dead_or_dying(Global_1393529->f_3, true))
	{
		return;
	}
	if (func_279(&Global_1393529, Global_1914319->f_16855.f_1))
	{
		return;
	}
	if (!func_280(iVar0, &Global_1393529))
	{
		return;
	}
	if (!func_281(&Global_1393529))
	{
		func_283(&Global_1393529, func_282(Global_1393529->f_3, &Global_1393529));
	}
	func_284(iVar0, &Global_1393529, Global_1393529->f_3);
}

void func_77()
{
	if (!Global_40)
	{
		func_285();
		iVar0 = func_286(-2107709792, iVar0);
		iVar0 = func_286(67826924, iVar0 + 1);
		iVar0 = func_286(-696575547, iVar0 + 1);
		iVar0 = func_286(-2016375772, iVar0 + 1);
		iVar0 = func_286(2113332661, iVar0 + 1);
		iVar0 = func_286(-514575035, iVar0 + 1);
		iVar0 = func_286(-1244996045, iVar0 + 1);
		iVar0 = func_286(-991396754, iVar0 + 1);
		iVar0 = func_286(1762156465, iVar0 + 1);
		iVar0 = func_286(1962606963, iVar0 + 1);
		iVar0 = func_286(-1302413409, iVar0 + 1);
		iVar0 = func_286(-2117956200, iVar0 + 1);
		iVar0 = func_286(-1606411422, iVar0 + 1);
		iVar0 = func_286(-868152928, iVar0 + 1);
		Global_1392135->f_57 = iVar0;
		iVar0 = func_286(342256823, iVar0 + 1);
		iVar0 = func_286(-851354002, iVar0 + 1);
		iVar0 = func_286(-67093525, iVar0 + 1);
		iVar0 = func_286(1422814554, iVar0 + 1);
		iVar0 = func_286(574130223, iVar0 + 1);
		iVar0 = func_286(1864901133, iVar0 + 1);
		iVar0 = func_286(1058882040, iVar0 + 1);
		iVar0 = func_286(493551252, iVar0 + 1);
		iVar0 = func_286(-348579279, iVar0 + 1);
		iVar0 = func_286(-864886843, iVar0 + 1);
		iVar0 = func_286(-835919047, iVar0 + 1);
		iVar0 = func_286(-1461741409, iVar0 + 1);
		iVar0 = func_286(-1171899604, iVar0 + 1);
		iVar0 = func_286(-2094183125, iVar0 + 1);
		iVar0 = func_286(637833947, iVar0 + 1);
		iVar0 = func_286(1587512336, iVar0 + 1);
		iVar0 = func_286(1903471034, iVar0 + 1);
		iVar0 = func_286(-289037214, iVar0 + 1);
		iVar0 = func_286(24562116, iVar0 + 1);
		iVar0 = func_286(1923977296, iVar0 + 1);
		iVar0 = func_286(-2063321859, iVar0 + 1);
		iVar0 = func_286(-684598949, iVar0 + 1);
		iVar0 = func_286(-610344395, iVar0 + 1);
		iVar0 = func_286(1576953586, iVar0 + 1);
		iVar0 = func_286(800590438, iVar0 + 1);
		iVar0 = func_286(1083812905, iVar0 + 1);
		iVar0 = func_286(-1538559093, iVar0 + 1);
		iVar0 = func_286(638383844, iVar0 + 1);
		iVar0 = func_286(-128803984, iVar0 + 1);
		iVar0 = func_286(155999275, iVar0 + 1);
		iVar0 = func_286(2004802428, iVar0 + 1);
		iVar0 = func_286(354752202, iVar0 + 1);
		iVar0 = func_286(586920567, iVar0 + 1);
		iVar0 = func_286(814337427, iVar0 + 1);
		iVar0 = func_286(1044867342, iVar0 + 1);
		iVar0 = func_286(1438357478, iVar0 + 1);
		iVar0 = func_286(1666069259, iVar0 + 1);
		iVar0 = func_286(1880640671, iVar0 + 1);
		iVar0 = func_286(2111957042, iVar0 + 1);
		iVar0 = func_286(737920983, iVar0 + 1);
		iVar0 = func_286(532428087, iVar0 + 1);
		iVar0 = func_286(1587128567, iVar0 + 1);
		iVar0 = func_286(-1633624898, iVar0 + 1);
		iVar0 = func_286(-539445119, iVar0 + 1);
		iVar0 = func_286(935147511, iVar0 + 1);
		iVar0 = func_286(-1721442745, iVar0 + 1);
		iVar0 = func_286(-430348949, iVar0 + 1);
		iVar0 = func_286(1990687195, iVar0 + 1);
		iVar0 = func_286(1876338590, iVar0 + 1);
		iVar0 = func_286(-1201981258, iVar0 + 1);
		iVar0 = func_286(-1439688706, iVar0 + 1);
		iVar0 = func_286(454342041, iVar0 + 1);
		iVar0 = func_286(1776183232, iVar0 + 1);
		iVar0 = func_286(625192287, iVar0 + 1);
		iVar0 = func_286(-663213424, iVar0 + 1);
		iVar0 = func_286(-1216889033, iVar0 + 1);
		iVar0 = func_286(-694227340, iVar0 + 1);
		iVar0 = func_286(-1274236576, iVar0 + 1);
		iVar0 = func_286(-1891752288, iVar0 + 1);
		iVar0 = func_286(195991202, iVar0 + 1);
		iVar0 = func_286(-1802477152, iVar0 + 1);
		iVar0 = func_286(629212044, iVar0 + 1);
		iVar0 = func_286(-1088551381, iVar0 + 1);
		iVar0 = func_286(902400422, iVar0 + 1);
		iVar0 = func_286(132503497, iVar0 + 1);
		iVar0 = func_286(2097966721, iVar0 + 1);
		iVar0 = func_286(357682781, iVar0 + 1);
		iVar0 = func_286(525022729, iVar0 + 1);
		iVar0 = func_286(1888415385, iVar0 + 1);
		iVar0 = func_286(820923389, iVar0 + 1);
		iVar0 = func_286(-1364195504, iVar0 + 1);
		iVar0 = func_286(490715164, iVar0 + 1);
		iVar0 = func_286(1624058688, iVar0 + 1);
		iVar0 = func_286(-297604253, iVar0 + 1);
		iVar0 = func_286(80992195, iVar0 + 1);
		iVar0 = func_286(-1912108287, iVar0 + 1);
		iVar0 = func_286(862170164, iVar0 + 1);
		iVar0 = func_286(1159489890, iVar0 + 1);
		iVar0 = func_286(1742952658, iVar0 + 1);
		iVar0 = func_286(-312047843, iVar0 + 1);
		iVar0 = func_286(-209319508, iVar0 + 1);
		iVar0 = func_286(-1365096069, iVar0 + 1);
		iVar0 = func_286(1349193085, iVar0 + 1);
		iVar0 = func_286(1510569545, iVar0 + 1);
		iVar0 = func_286(108553817, iVar0 + 1);
		iVar0 = func_286(-1893113342, iVar0 + 1);
		iVar0 = func_286(-847652671, iVar0 + 1);
		iVar0 = func_286(1389261931, iVar0 + 1);
		iVar0 = func_286(1704846425, iVar0 + 1);
		iVar0 = func_286(2143524554, iVar0 + 1);
		iVar0 = func_286(-2085825957, iVar0 + 1);
		iVar0 = func_286(-781430867, iVar0 + 1);
		iVar0 = func_286(-252423373, iVar0 + 1);
		iVar0 = func_286(-1122690193, iVar0 + 1);
		iVar0 = func_286(-82440623, iVar0 + 1);
		iVar0 = func_286(-1756506062, iVar0 + 1);
		iVar0 = func_286(-470576974, iVar0 + 1);
		iVar0 = func_286(-555647500, iVar0 + 1);
		iVar0 = func_286(1643078537, iVar0 + 1);
		iVar0 = func_286(621657798, iVar0 + 1);
		iVar0 = func_286(-1672197260, iVar0 + 1);
		iVar0 = func_286(1668570650, iVar0 + 1);
		iVar0 = func_286(-367863043, iVar0 + 1);
		iVar0 = func_286(-1053663875, iVar0 + 1);
		iVar0 = func_286(1072459228, iVar0 + 1);
		iVar0 = func_286(2012270989, iVar0 + 1);
		iVar0 = func_286(-1919916807, iVar0 + 1);
		iVar0 = func_286(-1527937210, iVar0 + 1);
		iVar0 = func_286(1023274496, iVar0 + 1);
		iVar0 = func_286(1083783877, iVar0 + 1);
		iVar0 = func_286(1962670186, iVar0 + 1);
		iVar0 = func_286(159048959, iVar0 + 1);
		iVar0 = func_286(926558003, iVar0 + 1);
		iVar0 = func_286(-903787396, iVar0 + 1);
		iVar0 = func_286(-610546586, iVar0 + 1);
		iVar0 = func_286(-809278079, iVar0 + 1);
		iVar0 = func_286(1852299083, iVar0 + 1);
		iVar0 = func_286(-1280365516, iVar0 + 1);
		iVar0 = func_286(-201063178, iVar0 + 1);
		iVar0 = func_286(-1740575640, iVar0 + 1);
		iVar0 = func_286(-1557514058, iVar0 + 1);
		iVar0 = func_286(1260284942, iVar0 + 1);
		iVar0 = func_286(55401585, iVar0 + 1);
		iVar0 = func_286(-1780711023, iVar0 + 1);
		iVar0 = func_286(-543582966, iVar0 + 1);
		iVar0 = func_286(279920889, iVar0 + 1);
		iVar0 = func_286(1937177603, iVar0 + 1);
		iVar0 = func_286(309656256, iVar0 + 1);
		iVar0 = func_286(-143587147, iVar0 + 1);
	}
}

void func_78()
{
	if (Global_1430226->f_3)
	{
		iVar0 = 0;
		while (iVar0 < 180)
		{
			if (func_287(&(Global_40.f_9910[iVar0])) && func_288(&(Global_40.f_9910[iVar0])))
			{
				func_289(&(Global_40.f_9910[iVar0]));
			}
			iVar0++;
		}
		Global_1430226 = 0;
		Global_1430226->f_3 = 0;
	}
	else
	{
		if (func_287(&(Global_40.f_9910[&Global_1430226])) && func_288(&(Global_40.f_9910[&Global_1430226])))
		{
			func_289(&(Global_40.f_9910[&Global_1430226]));
		}
		Global_1430226 = &Global_1430226 + 1;
		if (&Global_1430226 >= 180)
		{
			Global_1430226 = 0;
		}
	}
	fVar2 = _get_script_time_within_frame_in_microseconds();
	iVar1 = Global_1430226->f_1;
	while (iVar1 <= 179)
	{
		if (func_287(&(Global_40.f_9910[iVar1])) && func_290(&(Global_40.f_9910[iVar1]), iVar1))
		{
			Global_1430226->f_2 = 1;
		}
		if ((_get_script_time_within_frame_in_microseconds() - fVar2) >= 25f)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar1 < 179)
	{
		Global_1430226->f_1 = iVar1 + 1;
	}
	else
	{
		if (Global_1430226->f_2)
		{
			func_291(&(Global_1430226->f_4), 1);
		}
		else
		{
			func_191(&(Global_1430226->f_4), 1);
		}
		Global_1430226->f_2 = 0;
		Global_1430226->f_1 = 0;
	}
}

void func_79()
{
	Global_1935183->f_3 = 0;
	Global_1935183->f_5 = 0;
	Global_1935183->f_1 = 13;
	Global_1935183 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1935183->f_6[iVar0] = 0;
		iVar0++;
	}
}

void func_80()
{
	if (func_36() != -1)
	{
		return;
	}
	if (Global_1935183->f_2)
	{
		return;
	}
	if (!func_292(player_ped_id(), 0))
	{
		return;
	}
	func_293();
}

void func_81()
{
}

void func_82()
{
	if (Global_1935630 & 1083392 != 0)
	{
		if (func_294(48))
		{
			func_298(func_295(48), 48, vdist2(func_296(48), Global_36), func_297(func_295(48)));
		}
		return;
	}
	if (!func_32(64))
	{
		return;
	}
	if (is_screen_faded_out())
	{
		return;
	}
	if (func_299())
	{
		return;
	}
	bVar2 = func_300(Global_1894899->f_2);
	iVar3 = func_301(Global_1894899->f_2);
	bVar4 = func_302(player_id(), 1, 0, 1);
	if (!is_entity_dead(Global_35))
	{
		iVar5 = _0x336b3d200ab007cb(Global_35, Global_36, 50f, 0);
	}
	iVar6 = func_303();
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_304(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					fVar7 = vdist2(func_296(iVar1), Global_36);
					if (!Global_1935630->f_12)
					{
						func_305(iVar1, bVar2, iVar3, iVar0, bVar4, iVar5, fVar7, iVar6);
						func_306(Global_1898330[iVar0], iVar1, iVar0, fVar7);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_83()
{
	func_307(1);
	func_308(0, 470037909);
	func_308(1, -904280534);
	func_308(2, 1824681511);
	func_308(3, -1438750434);
	func_308(4, 1824681511);
	func_308(8, -1083616881);
	func_308(9, -1083616881);
	func_308(10, -1083616881);
	func_308(11, 1936859429);
	func_308(12, -272646696);
	func_308(6, -41414424);
	func_308(7, 214708080);
	func_308(5, 218350989);
	func_309(6, 4);
	func_309(7, 4);
	func_309(5, 4);
	func_310();
}

void func_84()
{
	if (func_32(512))
	{
		func_311(Global_1430221->f_3);
		if (func_312(Global_1430221->f_3))
		{
			func_313();
		}
		func_314();
		Global_1430221->f_3++;
		if (Global_1430221->f_3 >= 12)
		{
			Global_1430221->f_3 = 0;
		}
	}
}

void func_85()
{
	set_random_trains(false);
	func_307(0);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		func_315(iVar0);
		iVar0++;
	}
}

void func_86()
{
	if (Global_43837 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_43837)
	{
		if (_does_anim_scene_exist(&(Global_43806[iVar0])))
		{
			if (!check_ownership_of_anim_scene(&(Global_43806[iVar0])))
			{
				take_ownership_of_anim_scene(&(Global_43806[iVar0]));
			}
			if (func_316(iVar0))
			{
				_delete_anim_scene(&(Global_43806[iVar0]));
				func_317();
				return;
			}
			if (!is_thread_active(Global_43806[iVar0]->f_1, false))
			{
				if ((_is_anim_scene_started(&(Global_43806[iVar0]), false) && _0xa9016536015de29d(&(Global_43806[iVar0]), "pl_breakout")) && !_0x1f0e401031e20146(&(Global_43806[iVar0]), "pl_breakout"))
				{
					_set_anim_scene_playback_list_bool(&(Global_43806[iVar0]), "pl_breakout", true);
				}
			}
			else
			{
				Global_43806[iVar0]->f_2 = get_game_timer();
			}
		}
		else if (Global_43806[iVar0]->f_2 != -1)
		{
			func_317();
			return;
		}
		iVar0++;
	}
}

void func_87()
{
	if (func_318())
	{
		if ((_0xe54dc27571d5edc4(1738654123) && !func_319(151, 0)) && !func_320(151))
		{
			func_321(151, 0);
		}
	}
}

void func_88()
{
	if (func_103(0, 1, 1))
	{
		return;
	}
	else if (&Global_1879534)
	{
		return;
	}
	else if (Global_43891)
	{
		return;
	}
	else if (func_322(1))
	{
		func_323();
		return;
	}
	iVar0 = -1;
	if (func_324())
	{
		iVar0 = func_325();
		if (iVar0 == -1)
		{
			return;
		}
	}
	bVar1 = is_screen_faded_out();
	iVar2 = func_326();
	if (bVar1)
	{
		iVar3 = 0;
		while (iVar3 < Global_40.f_450)
		{
			iVar4 = &Global_40.f_450[iVar3];
			if (func_327(iVar4))
			{
				if (!func_328((*Global_1347702)[iVar4]->f_15))
				{
					if (iVar0 != -1 && iVar0 != iVar4)
					{
					}
					else
					{
						func_329(iVar4, bVar1, iVar0, iVar2);
					}
				}
			}
			iVar3++;
		}
	}
	else
	{
		fVar5 = _get_script_time_within_frame_in_microseconds();
		fVar7 = 25f;
		while ((_get_script_time_within_frame_in_microseconds() - fVar5) < fVar7 || iVar6 == 0)
		{
			iVar6++;
			iVar8 = &Global_40.f_450[&Global_1430257];
			if (iVar8 > -1 && iVar8 < 200)
			{
				if (!func_328((*Global_1347702)[iVar8]->f_15))
				{
					if (iVar0 != -1 && iVar0 != iVar8)
					{
					}
					else
					{
						func_329(iVar8, bVar1, iVar0, iVar2);
					}
				}
			}
			Global_1430257 = &Global_1430257 + 1;
			if (&Global_1430257 >= Global_40.f_1094)
			{
				Global_1430257 = 0;
			}
		}
	}
}

void func_89()
{
	func_330();
	if (!_databinding_is_data_id_valid(Global_1935496->f_33))
	{
		func_331();
	}
	if (func_36() == -1)
	{
		if (!_databinding_is_data_id_valid(Global_1935496->f_35))
		{
			func_332();
		}
		else
		{
			_databinding_write_data_bool(Global_1935496->f_39, func_333());
			if (func_333())
			{
				if (((is_screen_faded_in() && is_player_control_on(player_id())) && !is_hud_hidden()) && !_0x66f35dd9d2b58579())
				{
					func_334();
					func_335(0);
				}
			}
		}
	}
	if (!_databinding_is_data_id_valid(Global_1935496->f_37))
	{
		func_336();
	}
	if (Global_1935496->f_26)
	{
		if (!_0xec7e480ff8bd0bed(Global_35))
		{
			_0xd962f8579d702db5();
			Global_1935496->f_26 = 0;
		}
	}
	func_337();
}

void func_90()
{
	func_338(Global_1396257);
	func_339(Global_1396257);
}

void func_91()
{
	if (Global_1415398->f_1)
	{
		return;
	}
	bVar0 = func_157(player_id(), 1, 0, 1);
	uVar1 = _0x0f230de0ddbe3649(player_id());
	iVar2 = 0;
	iVar3 = func_341(func_340(func_156()));
	if (is_thread_active((*Global_1396257)[15]->f_635, false) && func_156() == 26)
	{
		iVar3++;
	}
	if (Global_1415398->f_2 >= iVar3)
	{
		return;
	}
	if (Global_1415398->f_3 >= get_game_timer())
	{
		return;
	}
	if (func_343(func_342(), 1))
	{
		return;
	}
	while (iVar2 < 3)
	{
		func_344(&Global_1415398);
		if (&Global_1415398 == 12)
		{
			func_345(&Global_1415398, 1);
		}
		if (func_346(&Global_1415398) == func_342() || func_347(&Global_1415398) == func_156())
		{
			iVar2++;
			if (func_348(&Global_1415398, bVar0, uVar1))
			{
				iVar2 = 3;
			}
		}
		else
		{
			func_349(&Global_1415398);
			if (_is_tracked_point_valid((*Global_1396257)[&Global_1415398]->f_634))
			{
				destroy_tracked_point((*Global_1396257)[&Global_1415398]->f_634);
				(*Global_1396257)[&Global_1415398]->f_634 = 0;
			}
		}
		Global_1415398 = &Global_1415398 + 1;
		if (&Global_1415398 >= 30)
		{
			Global_1415398 = 0;
			iVar2 = 3;
		}
	}
}

void func_92()
{
	func_350();
}

void func_93()
{
	Global_1935369 = &Global_1935369 + 1;
	if (&Global_1935369 >= 3)
	{
		Global_1935369 = 0;
	}
	if (!func_351(&Global_1935369))
	{
		return;
	}
	func_352(&Global_1935369);
	func_353();
	func_355(func_354(func_156(), &Global_1935369));
	func_356();
	func_357(&Global_1935369);
	if (func_358(&Global_1935630, 2097152) || func_359(32768))
	{
		return;
	}
	if (is_thread_active(&(Global_1935369->f_42[&Global_1935369]), false) || is_thread_active(&(Global_1935369->f_46[&Global_1935369]), false))
	{
		func_360(&Global_1935369);
	}
	if (!is_thread_active(&(Global_1935369->f_46[&Global_1935369]), false))
	{
		if (func_361(&uVar0))
		{
			func_362();
		}
	}
	if (func_36() == -1)
	{
		if (!is_thread_active(&(Global_1935369->f_42[&Global_1935369]), false))
		{
			if (func_363())
			{
				func_364();
			}
		}
	}
	func_365();
}

void func_94()
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		(*Global_1956588)[iVar0] = -1;
		iVar0++;
	}
	Global_1956588->f_25 = 0;
}

void func_95()
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (Global_1956588[iVar0] != -1)
		{
			if (_0x84848e1c0fc67dbb(Global_1956588[iVar0]))
			{
				release_sound_id(Global_1956588[iVar0]);
				(*Global_1956588)[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_96()
{
}

void func_97()
{
	if ((((((((!func_366() || func_159()) || is_screen_faded_out()) || !func_292(Global_35, 0)) || func_36() != -1) || !func_367()) || Global_1879534->f_1) || Global_1879534) // PointerArith || func_359(128))
	{
		Global_1879534->f_45 = 0;
		return;
	}
	iVar0 = func_368(Global_36);
	switch (iVar0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
			if (get_game_timer() - Global_1879534->f_44) > get_random_int_in_range(1000, 5000)
			{
				vVar4 = { 0f, 0f, 0f };
				vVar1 = { get_gameplay_cam_rot(2) };
				iVar13 = 9999;
				if (Global_1879534->f_45 == 0)
				{
					vVar4 = { get_random_float_in_range(-1.2f, -1f), get_random_float_in_range(1f, 1.2f), 0.5f };
					iVar13 = 50;
				}
				else if (Global_1879534->f_45 == 1)
				{
					vVar4 = { get_random_float_in_range(1f, 1.2f), get_random_float_in_range(1f, 1.2f), 0.1f };
					iVar13 = 60;
				}
				else if (Global_1879534->f_45 == 2)
				{
					vVar4 = { get_random_float_in_range(-1.5f, -0.5f), get_random_float_in_range(1.5f, 0.5f), 0.3f };
					iVar13 = 20;
				}
				else if (Global_1879534->f_45 == 3)
				{
					vVar4 = { get_random_float_in_range(1f, 1.2f), get_random_float_in_range(1f, 1.2f), 0f };
					iVar13 = 50;
				}
				else if (Global_1879534->f_45 == 4)
				{
					vVar4 = { get_random_float_in_range(-0.4f, 0.4f), 0f, 0f };
					iVar13 = 60;
				}
				vVar7 = { _get_object_offset_from_coords(get_gameplay_cam_coord(), vVar1.z, 0f, -1f, 0f) };
				vVar10 = { get_ped_bone_coords(Global_35, 21030, vVar4) };
				shoot_single_bullet_between_coords(vVar7, vVar10, iVar13, true, 1402226560, 0, true, true, -1f, false);
				Global_1879534->f_44 = get_game_timer();
				Global_1879534->f_45++;
			}
			break;
		case 8:
			if (!func_369(40))
			{
				if (is_entity_in_angled_area(Global_35, 1502.698f, -7177.701f, 62.85856f, 1506.565f, -7189.896f, 65.72132f, 4f, false, true, 0))
				{
					func_370();
				}
			}
			break;
		default:
			Global_1879534->f_45 = 0;
			break;
	}
}

void func_98(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		Call_Loc((*iParam0)[iVar0]->f_2);
		iVar0++;
	}
}

bool func_99(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_100(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_36() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_101(int iParam0)
{
	func_371(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_102(int iParam0, bool bParam1)
{
	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_373(iVar0, iVar1);
}

bool func_103(int iParam0, bool bParam1, bool bParam2)
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
		if (func_374())
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
		iVar0 = func_375(&(Global_1898164->f_1[0]));
		if (func_327(iVar0) && func_376((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_304(&(Global_1898164->f_1[0])))
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

void func_104(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_377(iParam0))
	{
		return;
	}
	if (!func_378(iParam0))
	{
		func_110(iParam0, 2);
		if (bParam2)
		{
			if (!func_103(0, 0, 1))
			{
				func_379(1, 4);
			}
		}
		if ((!func_380() && !bParam1) && !func_103(0, 0, 1))
		{
			func_382(_create_var_string(10, "OUT_JOURN_ADD", func_381(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

void func_105(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_377(iParam0))
	{
		return;
	}
	if (func_383(iParam0))
	{
		return;
	}
	if (!func_378(iParam0))
	{
		func_104(iParam0, 1, 0);
	}
	iVar0 = func_384(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_107(iParam0, 512))
		{
			func_385(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_380() && !bParam1) && !func_103(0, 0, 1))
	{
		func_382(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_110(iParam0, 6);
	if (bParam2)
	{
		if (!func_103(0, 0, 1))
		{
			func_379(1, 4);
		}
	}
}

bool func_106()
{
	if (&Global_1835009)
	{
		return false;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		Global_40.f_39 = Global_1935630->f_2;
		return false;
	}
	if (is_entity_dead(Global_35))
	{
	}
	iVar1 = get_entity_model(Global_35);
	if (Global_1935630->f_2 == 0)
	{
		return true;
	}
	if (Global_1935630->f_2 == Global_40.f_39 && iVar1 == Global_40.f_39)
	{
		Global_40.f_39 = Global_1935630->f_2;
		return true;
	}
	if (is_player_teleport_active())
	{
		return false;
	}
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_script_task_status(Global_35, 501393341, false);
		if (iVar0 != 1 && iVar0 != 0)
		{
			task_dismount_animal(Global_35, 524288, 0, 0, 0, 0);
		}
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_script_task_status(Global_35, -828834893, false);
		if (iVar0 != 1 && iVar0 != 0)
		{
			task_leave_any_vehicle(Global_35, 0, 524288);
		}
		return false;
	}
	request_model(Global_1935630->f_2, false);
	if (!has_model_loaded(Global_1935630->f_2))
	{
		return false;
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
		func_386();
	}
	func_387(bVar2);
	Var5 = 117;
	Var5.f_118 = 45;
	func_388(player_ped_id(), &Var5);
	uVar169 = 29;
	func_389(player_ped_id(), &uVar169);
	func_390(Global_35);
	set_player_model(player_id(), Global_1935630->f_2, false);
	set_model_as_no_longer_needed(Global_1935630->f_2);
	Global_35 = get_player_ped(player_id());
	func_391(Global_35, Global_1935630->f_2);
	if (Global_40.f_39 != Global_1935630->f_2 && Global_40.f_39 != 0)
	{
		set_model_as_no_longer_needed(Global_40.f_39);
	}
	Global_40.f_39 = Global_1935630->f_2;
	func_392(Global_40.f_39, 999);
	if (bVar2)
	{
		func_393();
	}
	else if (bVar3)
	{
		func_394();
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return true;
	}
	if (Global_26796.f_775 != Global_1946804->f_1)
	{
		func_395(0, 0, 0, 1);
		func_396();
		func_397();
		Global_26796.f_774 = 0;
		Global_26796.f_776 = 0;
		func_398(1);
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
				func_399(&(Global_1946804->f_1378), 2020890174, &uVar4, 0, 0, 0, 0);
				Global_40.f_7729 = 6;
				break;
			case 1160113249:
				func_399(&(Global_1946804->f_1378), 1105329772, &uVar4, 0, 0, 0, 0);
				func_400();
				func_401(Global_35, 4, 4, 3, 0);
				func_402();
				func_403(Global_35, 3, 0);
				func_404();
				Global_40.f_7729 = 61;
				break;
		}
		func_405(-2124052603);
		func_406(-1, 1, 1, 0, 0, 0);
		func_407(-1, 1, 0, 6);
		if (!&Global_1905941 == Global_40.f_7729)
		{
			if (func_107(&Global_1905941, 32768))
			{
				Global_40.f_7729 = &Global_1905941;
				func_109(&Global_1905941, 32768);
			}
			else if (func_107(&Global_1905941, 1024))
			{
			}
			func_109(&Global_1905941, 1024);
		}
		func_408(1);
	}
	if (Global_40.f_7729 > -1 && Global_40.f_7729 <= 5)
	{
		if (func_409(2, Global_40.f_7729))
		{
			func_108(Global_35, Global_40.f_7729, 1, 0, 0);
		}
		else if (Global_1946804->f_1 == 1160113249)
		{
			func_108(Global_35, 62, 1, 0, 0);
		}
		else
		{
			func_108(Global_35, 6, 1, 0, 0);
		}
	}
	else if (func_410(func_384(Global_40.f_7729), Global_1946804->f_1))
	{
		func_108(Global_35, Global_40.f_7729, 1, 0, 0);
	}
	if (Global_1946804->f_1 == 1160113249)
	{
		func_411(func_384(Global_40.f_7729), 1, 1, 1);
	}
	func_412(Global_35, &Var5, 0);
	func_413(Global_35, &uVar169);
	set_current_ped_weapon(Global_35, func_414(256), false, 0, true, false);
	func_415();
	func_416(0);
	func_417(0, 1);
	func_418(0);
	func_419();
	func_420();
	func_421();
	Global_26796.f_775 = Global_1946804->f_1;
	return true;
}

bool func_107(int iParam0, int iParam1)
{
	if (!func_377(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_108(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_384(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_422(iParam1);
	}
	if ((bParam3 && func_107(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return true;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_410(iVar0, Global_1946804->f_1))
	{
		return false;
	}
	if (bParam2)
	{
		func_109(Global_40.f_7729, 4096);
		func_110(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_423(iParam0);
	}
	func_424();
	if (!func_425(iParam1))
	{
		func_427(iVar0, iParam0, func_426(iParam1), 1, 0, 1);
	}
	func_428(iParam0);
	return true;
}

void func_109(int iParam0, int iParam1)
{
	if (!func_377(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_110(int iParam0, int iParam1)
{
	if (!func_377(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_111(int iParam0)
{
	if (!func_377(iParam0))
	{
		return;
	}
}

void func_112(int iParam0)
{
	if (!func_377(iParam0))
	{
		return;
	}
	if (decor_exist_on(Global_35, "outfit_tags"))
	{
		decor_remove(Global_35, "outfit_tags");
	}
	decor_set_int(Global_35, "outfit_tags", Global_40.f_7157[iParam0]->f_2);
}

void func_113()
{
}

void func_114(int iParam0, bool bParam1)
{
	if (func_429(iParam0) == 0 || bParam1)
	{
		func_431(iParam0, func_430(iParam0), 0);
	}
}

bool func_115(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

Vector3 func_116()
{
	return 1593.4f, -1845.3f, 53.7f;
}

int func_117(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_185(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_432(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_433(iVar0, bParam8);
	return iVar0;
}

void func_118()
{
	if (!func_434(4))
	{
		if (func_435())
		{
			func_436();
			func_437(4);
		}
	}
}

void func_119(int iParam0)
{
	iVar0 = Global_40.f_9571[iParam0]->f_1;
	switch (iVar0)
	{
		case 1:
		case 2:
			func_438(iParam0);
			break;
		case 3:
			break;
	}
	if (iVar0 != Global_40.f_9571[iParam0]->f_1)
	{
		func_439(iParam0);
	}
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			break;
		case 1:
			break;
		case 0:
			func_440();
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_121(int iParam0)
{
	if (!func_115(1, iParam0))
	{
		if (func_441(iParam0))
		{
			func_442(iParam0, func_103(52, 0, 1));
		}
	}
}

void func_122()
{
	vVar0 = { func_116() };
	if (!Global_1392135->f_55)
	{
		if (func_342() == 11)
		{
			if (!func_115(65536, 2))
			{
				if (!Global_1392135->f_56)
				{
					if (func_443(Global_36, vVar0) < 150f)
					{
						Global_1392135->f_56 = 1;
						if (func_444())
						{
							Var3.f_6 = { vVar0 };
							Var13 = { Var3 };
							StringCopy(&(Var13.f_10), "gang_enc_lemoyne_church", 32);
							Var13.f_14 = 1024;
							Var13.f_15 = 1;
							func_445(Var13, 0);
							Global_1392135->f_55 = 1;
						}
					}
				}
				else if (func_443(Global_36, vVar0) > 155f)
				{
					Global_1392135->f_55 = 0;
					Global_1392135->f_56 = 0;
				}
			}
		}
	}
}

void func_123(int iParam0)
{
	bVar0 = false;
	if (func_446(func_342(), 0, 0, iVar1) == iParam0)
	{
		if (func_447(iParam0, 1, 0))
		{
			bVar0 = true;
			if (Global_1392135->f_3 == -1)
			{
				Global_1392135->f_3 = iParam0;
			}
		}
	}
	else
	{
		func_448(iParam0);
	}
	if (!bVar0)
	{
		if (Global_1392135->f_3 == iParam0)
		{
			Global_1392135->f_3 = -1;
		}
	}
}

void func_124()
{
	Global_1392135 = &Global_1392135 + 1;
	if (func_449())
	{
		while (!func_450(&Global_1392135))
		{
			Global_1392135 = &Global_1392135 + 1;
			if (&Global_1392135 > 5 || &Global_1392135 < 0)
			{
				Global_1392135 = 0;
			}
		}
	}
	else
	{
		while (!func_451(&Global_1392135))
		{
			Global_1392135 = &Global_1392135 + 1;
			if (&Global_1392135 > 5 || &Global_1392135 < 0)
			{
				Global_1392135 = 0;
			}
		}
	}
}

void func_125(int iParam0)
{
	if (_0x59fa676177dbe4c9(Global_1900363[iParam0]) == 4)
	{
		(*Global_1900363)[iParam0] = 0;
		Global_1900363->f_5 = (Global_1900363->f_5 - 1);
		if (Global_1900363->f_5 < 0)
		{
			Global_1900363->f_5 = 0;
		}
	}
}

int func_126()
{
	if (func_133() < 7)
	{
		if (func_452())
		{
			if (func_453())
			{
				if (func_133() != 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_127()
{
	if (func_133() < 7)
	{
		if (func_452())
		{
			if (func_454())
			{
				if (func_133() != 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	Global_1393447 = iParam0;
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_130(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_131(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_132()
{
	switch (&Global_1392135)
	{
		case 0:
			func_455();
			break;
		case 2:
			func_456();
			break;
		case 1:
			func_457();
			break;
		case 3:
			func_458();
			break;
		case 4:
			func_459();
			break;
		case 5:
			func_460();
			break;
	}
}

int func_133()
{
	return &Global_1393447;
}

bool func_134(int iParam0)
{
	if (!func_461())
	{
		func_462(17);
		return false;
	}
	if (!func_129(Global_1393447, 8))
	{
		if (func_103(6146, 1, 1))
		{
			func_462(3);
			return false;
		}
	}
	if (func_463())
	{
		func_462(14);
		return false;
	}
	if (iParam0 == 1)
	{
		return false;
	}
	if (!is_player_control_on(player_id()) || !is_screen_faded_in())
	{
		func_462(11);
		return false;
	}
	if (func_157(player_id(), 1, 0, 1) || Global_1935630->f_24)
	{
		Global_1393447->f_61 = func_140();
		func_462(12);
		return false;
	}
	else if (Global_1393447->f_61 > 0)
	{
		if ((func_140() - Global_1393447->f_61) <= 60000)
		{
			func_462(12);
			return false;
		}
		else
		{
			Global_1393447->f_61 = -1;
		}
	}
	return true;
}

int func_135()
{
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		func_462(21);
		return 0;
	}
	if (func_189(Global_1392581->f_3, 4) || is_player_riding_train(player_id()))
	{
		func_462(22);
		return 0;
	}
	if (!func_129(Global_1393447, 8))
	{
		if (func_103(6146, 1, 1))
		{
			func_462(3);
			return 0;
		}
	}
	return 1;
}

int func_136(int iParam0)
{
	Global_1393447->f_70 = 0;
	if (Global_1393447->f_3 == -1)
	{
		if (func_464())
		{
			if (!func_465())
			{
				Global_1393447->f_70 = 1;
			}
		}
		else if (!func_465())
		{
			return 0;
		}
		else
		{
			iVar0 = func_137();
			if (IntToFloat(&Global_1392135->f_5[iVar0]) > func_466())
			{
				func_462(20);
				return 0;
			}
		}
	}
	if (!func_129(Global_1393447, 8))
	{
		if (func_103(6146, 1, 1))
		{
			func_462(3);
			return 0;
		}
	}
	func_462(0);
	return 1;
}

int func_137()
{
	return Global_1393447->f_51;
}

bool func_138(int iParam0)
{
	if (Global_1430231->f_4)
	{
		func_462(21);
		return false;
	}
	if (func_189(Global_1392581->f_3, 4) || is_player_riding_train(player_id()))
	{
		func_462(22);
		return false;
	}
	if (!func_129(Global_1393447, 8))
	{
		if (func_103(6146, 1, 1))
		{
			func_462(3);
			return false;
		}
	}
	bVar0 = func_467();
	bVar1 = true;
	iVar5 = -1;
	iVar6 = -1;
	if (!Global_1393447->f_70)
	{
		if (!func_468(iParam0))
		{
			iVar3 = func_469(iParam0);
			iVar4 = func_470(iParam0);
		}
		iVar2 = iVar3;
		while (iVar2 <= iVar4)
		{
			if (func_471(iVar2, bVar0, bVar1))
			{
				func_472(&iVar5, &iVar6, iVar2);
			}
			iVar2++;
		}
		iVar2 = func_469(-1);
		while (iVar2 <= func_470(-1))
		{
			if (func_471(iVar2, bVar0, bVar1))
			{
				func_472(&iVar5, &iVar6, iVar2);
			}
			iVar2++;
		}
		switch (iParam0)
		{
			case 2:
				if (func_471(6, bVar0, bVar1))
				{
					func_472(&iVar5, &iVar6, 6);
				}
				if (func_471(42, bVar0, bVar1))
				{
					func_472(&iVar5, &iVar6, 6);
				}
				break;
			case 4:
				if (func_471(26, bVar0, bVar1))
				{
					func_472(&iVar5, &iVar6, 26);
				}
				break;
		}
	}
	if ((func_473() == 6 && func_342() == 10) && func_150(46))
	{
		iVar3 = func_469(10);
		iVar4 = func_470(10);
		iVar2 = iVar3;
		while (iVar2 <= iVar4)
		{
			if (func_471(iVar2, bVar0, bVar1))
			{
				func_472(&iVar5, &iVar6, iVar2);
			}
			iVar2++;
		}
	}
	if (iVar5 != -1)
	{
		Global_1393447->f_3 = iVar5;
		func_143(iVar6);
		return true;
	}
	return false;
}

char* func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ambush_odr_road_prec";
		case 1:
		case 2:
		case 36:
			return "ambush_odr_lookout_attack";
		case 3:
		case 4:
		case 38:
			return "ambush_odr_hso";
		case 5:
		case 35:
			return "ambush_odr_bridge_trap";
		case 6:
		case 42:
			return "ambush_odr_bridge_prevent";
		case 7:
		case 41:
			return "ambush_odr_bridge_ambush";
		case 8:
		case 40:
			return "ambush_odr_road_robbery";
		case 9:
		case 10:
		case 37:
			return "ambush_odr_ride_out";
		case 11:
			return "ambush_exc_scm_prec";
		case 12:
			return "ambush_exc_lookout_attack";
		case 15:
			return "ambush_exc_bridge_trap";
		case 13:
			return "ambush_exc_wagon_bomb";
		case 14:
			return "ambush_exc_wagon_turret";
		case 16:
			return "ambush_exc_hide_cover";
		case 17:
		case 39:
			return "ambush_exc_road_robbery";
		case 18:
			return "ambush_inb_forest";
		case 19:
			return "ambush_inb_forest";
		case 20:
			return "ambush_inb_harass";
		case 21:
			return "ambush_inb_forest_attack";
		case 22:
			return "ambush_inb_road_attack";
		case 23:
			return "ambush_inb_bridge_ambush";
		case 24:
			return "ambush_sav_corner";
		case 25:
			return "ambush_sav_tree_line";
		case 28:
			return "ambush_sav_lookout_attack";
		case 26:
			return "ambush_sav_river_ambush";
		case 27:
			return "ambush_sav_forest_attack";
		case 29:
			return "ambush_rnc_type1";
		case 30:
			return "ambush_rnc_type1";
		case 31:
			return "ambush_bnd_cliff1";
		case 32:
			return "ambush_bnd_sniper_attack";
		case 33:
			return "ambush_bnd_ridge_ambush";
		case 34:
			return "ambush_gen_night_rob";
		case 43:
			return "ambush_pnk_type1";
		default:
			break;
	}
	return "";
}

int func_140()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_141()
{
	sVar0 = func_139(Global_1393447->f_3);
	request_script(sVar0);
	if (has_script_loaded(sVar0))
	{
		Var1.f_3 = Global_1393447->f_3;
		Var1.f_4 = func_474();
		Var1 = { func_475(Global_1393447->f_3, Var1.f_4) };
		Var1.f_8 = func_129(Global_1393447, 8);
		Var1.f_5 = &Global_40.f_9632[Var1.f_3];
		Var1.f_7 = Global_1393447->f_69;
		func_130(Global_1393447, 2);
		func_130(Global_1393447, 8);
		Global_1393447->f_53 = start_new_script_with_args(sVar0, &Var1, 9, 1025);
		set_script_as_no_longer_needed(sVar0);
		func_143(-1);
		Global_1393447->f_69 = 0;
		Global_1393447->f_3 = -1;
		func_476(Var1.f_3);
		return true;
	}
	return false;
}

bool func_142()
{
	if (!func_129(Global_1393447, 8))
	{
		if (func_103(6146, 1, 1))
		{
			func_462(3);
			return true;
		}
	}
	if ((get_game_timer() - Global_1393447->f_55) > 10000)
	{
		return true;
	}
	return false;
}

void func_143(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	Global_1393447->f_54 = iParam0;
}

bool func_144()
{
	if (_does_thread_exist(Global_1393447->f_53))
	{
		if (is_thread_active(Global_1393447->f_53, false))
		{
			return true;
		}
	}
	return false;
}

void func_145(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_466();
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

bool func_146()
{
	if (Global_1393447->f_60 < func_466())
	{
		return true;
	}
	return false;
}

void func_147(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	bVar0 = false;
	if ((*Global_1934603)[iParam0]->f_15 == 1)
	{
		bVar0 = func_477(&((*Global_1934603)[iParam0]->f_10), *(*Global_1934603)[iParam0], (*Global_1934603)[iParam0]->f_14);
	}
	else
	{
		bVar0 = func_478(&((*Global_1934603)[iParam0]->f_10), (*Global_1934603)[iParam0]->f_14);
	}
	if (bVar0)
	{
		func_479(iParam0);
	}
}

void func_148()
{
	if (func_36() != -1)
	{
		return;
	}
	if (func_159())
	{
		Global_40.f_449 = func_480();
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((func_481(iVar0) && iVar0 != 5) && iVar0 != 4)
		{
			if (func_482(iVar0) < 25000)
			{
				Global_40.f_449 = func_480();
			}
			else
			{
				iVar0++;
			}
			func_483(Global_40.f_449, &uVar1, &uVar2, &uVar3, &iVar4, &uVar5, &uVar6);
			if (iVar4 >= 3)
			{
				func_484(12, 1);
			}
		}
	}
}

void func_149(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 |= 2;
	}
	Global_1395482->f_2[iParam0] = iVar0;
}

bool func_150(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_486((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_151()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_150(16) && !func_150(21))
	{
		return true;
	}
	return false;
}

int func_152(bool bParam0)
{
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	iVar1 = _get_first_entity_ped_is_carrying(Global_35);
	if (!does_entity_exist(iVar1))
	{
		if (func_487(Global_35))
		{
			iVar1 = func_488(Global_35);
		}
		else if (func_489(Global_35))
		{
			iVar1 = func_490(Global_35);
		}
		else if (func_491(Global_35))
		{
			iVar1 = func_492(Global_35);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		if (func_493(0))
		{
			iVar2 = func_494(0);
			if (does_entity_exist(iVar2))
			{
				iVar1 = _get_first_entity_ped_is_carrying(iVar2);
			}
		}
	}
	if (!does_entity_exist(iVar1))
	{
		if (func_493(1))
		{
			iVar3 = func_494(1);
			if (does_entity_exist(iVar3))
			{
				iVar1 = _get_first_entity_ped_is_carrying(iVar3);
			}
		}
	}
	if (!does_entity_exist(iVar1))
	{
		iVar4 = _get_last_mount(Global_35);
		if (does_entity_exist(iVar4))
		{
			iVar1 = _get_first_entity_ped_is_carrying(iVar4);
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
	if (!bParam0)
	{
		if (!(decor_exist_on(iVar0, "bIsCriminal") && decor_get_bool(iVar0, "bIsCriminal")))
		{
			return 0;
		}
	}
	return iVar0;
}

bool func_153(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0) || func_495(iParam0, "bIgnoreLawMissionEntity"))
		{
			if (func_495(iParam0, "bBeatPed"))
			{
				if (!_0x268b3aebf032a88d(iParam0) || func_495(iParam0, "pedRoam_bInPedRoam"))
				{
					if (!(func_495(iParam0, "bIsCriminal") && func_496()))
					{
						if (!func_498(func_497(iParam0), 0))
						{
							iVar0 = 1222652248;
							if (!func_495(iParam0, "bBeatCriminal"))
							{
								iVar0 = _get_default_relationship_group_hash(get_entity_model(iParam0));
							}
							set_ped_relationship_group_hash(iParam0, iVar0);
							set_ped_relationship_group_default_hash(iParam0, iVar0);
						}
						set_ped_config_flag(iParam0, 4, false);
						set_ped_config_flag(iParam0, 6, false);
						set_ped_config_flag(iParam0, 243, false);
						set_ped_config_flag(iParam0, 494, true);
						decor_set_bool(iParam0, "bBeatPed", false);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_154(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_155(int iParam0)
{
	if (!func_485(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 76;
		case 2:
			return 26;
		case 5:
			return 105;
		case 4:
			return 78;
		case 6:
			return 5;
		case 1:
			return 38;
		case 0:
			return 115;
		default:
			break;
	}
	return -1;
}

int func_156()
{
	return Global_1894899->f_2;
}

bool func_157(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_499(bParam1, bParam2, bParam3);
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

void func_158(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (!func_154(iParam0, iParam1))
	{
		Global_1395482->f_2[iParam0] = (Global_1395482->f_2[iParam0] || iParam1);
	}
}

bool func_159()
{
	if (func_36() == -1)
	{
		if (func_500() || func_501())
		{
			return true;
		}
	}
	else if (func_502(1, 255))
	{
		return true;
	}
	return false;
}

void func_160(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_154(iParam0, iParam1))
	{
		Global_1395482->f_2[iParam0] = (&Global_1395482->f_2[iParam0] - (Global_1395482->f_2[iParam0] && iParam1));
	}
}

bool func_161(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	if (!func_496())
	{
		return false;
	}
	if (is_thread_active(Global_1395482->f_118, false))
	{
		return false;
	}
	iVar0 = func_342();
	if (iParam0 != func_503(iVar0))
	{
		return false;
	}
	if (func_504(iParam0))
	{
		return false;
	}
	if (func_154(iParam0, 2))
	{
		return false;
	}
	if (func_157(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (func_154(iParam0, 1024))
	{
		return false;
	}
	if (func_36() == 0)
	{
		return false;
	}
	return true;
}

void func_162(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	sVar2 = func_505(iParam0);
	if (is_string_null_or_empty(sVar2))
	{
		return;
	}
	if (!Global_1935630->f_12)
	{
		if (!func_157(get_player_index(), 0, 0, 1))
		{
			if (does_entity_exist(iParam1))
			{
				bVar0 = true;
			}
		}
	}
	if (!is_thread_active(Global_1395482->f_118, false))
	{
		if (bVar0)
		{
			request_script(sVar2);
			if (has_script_loaded(sVar2))
			{
				Var3.f_1 = iParam0;
				Global_1395482->f_118 = start_new_script_with_args(sVar2, &Var3, 10, 1024);
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		set_script_as_no_longer_needed(sVar2);
	}
}

void func_163(int iParam0)
{
	if (!func_485(iParam0))
	{
		return;
	}
	Global_1395482->f_2[iParam0] = 0;
}

void func_164()
{
	Global_1415412 = 0;
}

bool func_165()
{
	if (func_36() == 0)
	{
		return false;
	}
	if (func_506())
	{
		return false;
	}
	if (!func_507(0))
	{
		return false;
	}
	if (!func_508())
	{
		return false;
	}
	if (is_thread_active(Global_1415412->f_1, false))
	{
		return false;
	}
	if (func_157(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (func_156() == 69)
	{
		if (!func_509(598, 0))
		{
			return false;
		}
		if (func_510(4))
		{
			return false;
		}
		if (func_511(4, 18, &uVar0))
		{
			return false;
		}
	}
	return true;
}

void func_166()
{
	bVar0 = false;
	bVar1 = false;
	sVar2 = "generic_wagon_fence_core";
	if (!Global_1935630->f_12)
	{
		if (func_507(0) && is_ped_in_any_vehicle(Global_35, false))
		{
			if (func_512(get_entity_model(get_vehicle_ped_is_in(Global_35, false))))
			{
				bVar0 = true;
			}
		}
	}
	if (!is_thread_active(Global_1415412->f_1, false))
	{
		if (bVar0)
		{
			request_script(sVar2);
			if (has_script_loaded(sVar2))
			{
				Global_1415412->f_1 = start_new_script_with_args(sVar2, &uVar3, 10, 1024);
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		set_script_as_no_longer_needed(sVar2);
	}
}

void func_167()
{
	Global_1415412 = 0;
}

void func_168(var uParam0)
{
	func_513(uParam0);
	func_514(uParam0);
	func_515(uParam0, 1);
	func_516(uParam0, 0);
	func_517(uParam0, 1);
	func_518(uParam0, 1);
	func_519(uParam0, 1);
	func_520(uParam0, 1);
	func_169(uParam0, 1);
	func_521(uParam0, 1);
	func_522(uParam0, 45);
	func_523(uParam0, 5f);
	func_524(uParam0, 500);
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 128);
	}
	else
	{
		func_291(&(uParam0->f_1), 128);
	}
}

int func_170(int iParam0)
{
	return decor_get_int(iParam0, "pedRoam_owner");
}

bool func_171(int iParam0)
{
	if (get_entity_model(iParam0) == -2075028835 || get_entity_model(iParam0) == -211291960)
	{
		if (((((func_319(30, 0) || func_319(31, 0)) || func_319(32, 0)) || func_319(33, 0)) || func_319(34, 0)) || func_319(35, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_172(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_173(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_525(uParam2, 1, iVar0);
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
			if (func_526(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_527(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_528(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_529(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_530(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_157(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_527(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_531(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_532(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_527(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_533(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_527(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_534(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_534(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_527(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_535(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_536(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_537(uParam2, 4000))
				{
					if ((func_538(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_539(uParam2, iParam0)) && func_540(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_527(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_538(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_539(uParam2, iParam0)) && func_540(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_541(iParam0, Global_1935630->f_41))
							{
								func_542();
								*uParam3 = 2;
								func_527(iParam0, uParam2, *uParam3);
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
						if (func_541(iParam0, Global_1935630->f_41))
						{
							func_542();
							*uParam3 = 2;
							func_527(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_543(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_140() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_542();
						*uParam3 = 2;
						func_527(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_544())
					{
						if (func_541(iParam0, Global_1935630->f_42))
						{
							func_542();
							*uParam3 = 2;
							func_527(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_545(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_527(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_546(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_547(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_527(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_548(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_549(uParam2, 4000))
				{
					if (func_550(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_527(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_551(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_527(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_552(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_527(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_174(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_state", iParam1);
}

int func_175(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_state"))
	{
		return decor_get_int(iParam0, "pedRoam_state");
	}
	return 0;
}

int func_176(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_behavior"))
	{
		return decor_get_int(iParam0, "pedRoam_behavior");
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
{
	iVar0 = func_553(iParam0);
	return (iVar0 && iParam1) != 0;
}

bool func_178(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_179(int iParam0, int iParam1)
{
	iVar0 = func_553(iParam0);
	iVar0 = (iVar0 - (iVar0 && iParam1));
	decor_set_int(iParam0, "pedRoam_flags", iVar0);
}

int func_180(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_target"))
	{
		return decor_get_int(iParam0, "pedRoam_target");
	}
	return 0;
}

int func_181(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_targetRegion"))
	{
		return decor_get_int(iParam0, "pedRoam_targetRegion");
	}
	return -1;
}

bool func_182(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_183(int iParam0, var uParam1, float fParam2)
{
	if (!func_182(iParam0))
	{
		*uParam1 = { Global_36 };
		if (!Global_1935630->f_12)
		{
			*fParam2 = get_entity_heading(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f };
			*fParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*fParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f };
			*fParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*fParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*fParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f };
			*fParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f };
			*fParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f };
			*fParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f };
			*fParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f };
			*fParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f };
			*fParam2 = 163f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*fParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f };
			*fParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*fParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*fParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*fParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*fParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*fParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f };
			*fParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f };
			*fParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f };
			*fParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f };
			*fParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*fParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f };
			*fParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*fParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*fParam2 = 90f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f };
			*fParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*fParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f };
			*fParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f };
			*fParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f };
			*fParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*fParam2 = 0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f };
			*fParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f };
			*fParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*fParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f };
			*fParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f };
			*fParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f };
			*fParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*fParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f };
			*fParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*fParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*fParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f };
			*fParam2 = 170f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*fParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*fParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f };
			*fParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f };
			*fParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f };
			*fParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f };
			*fParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*fParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*fParam2 = 0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*fParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*fParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f };
			*fParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f };
			*fParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*fParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*fParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*fParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*fParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*fParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f };
			*fParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f };
			*fParam2 = 0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f };
			*fParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f };
			*fParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*fParam2 = 0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*fParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f };
			*fParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f };
			*fParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*fParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*fParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*fParam2 = 0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f };
			*fParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f };
			*fParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*fParam2 = 0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f };
			*fParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f };
			*fParam2 = 14.4916f;
			return;
		case 109:
			if (network_is_in_session())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*fParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f };
				*fParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f };
			*fParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*fParam2 = 121f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f };
			*fParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f };
			*fParam2 = 353f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f };
			*fParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f };
			*fParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f };
			*fParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f };
			*fParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f };
			*fParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f };
			*fParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f };
			*fParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f };
			*fParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f };
			*fParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f };
			*fParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*fParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*fParam2 = 0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f };
			*fParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f };
			*fParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f };
			*fParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*fParam2 = 0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f };
			*fParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*fParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*fParam2 = 34.0605f;
			return;
		case 25:
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*fParam2 = 304.563f;
			return;
		default:
			break;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_3))
	{
		*uParam1 = { _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3) };
		vVar0 = { _0x18675bc914891122((*Global_1888801)[iParam0]->f_3) };
		*fParam2 = vVar0.z;
	}
}

void func_184(int iParam0, var uParam1, float fParam2)
{
	if (decor_exist_on(iParam0, "pedRoam_targetCoord"))
	{
		*uParam1 = { func_554(decor_get_int(iParam0, "pedRoam_targetCoord")) };
		uParam1->f_2 = decor_get_float(iParam0, "pedRoam_targetCoord_Z");
	}
	if (decor_exist_on(iParam0, "pedRoam_targetArea"))
	{
		*fParam2 = decor_get_float(iParam0, "pedRoam_targetArea");
	}
}

bool func_185(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_186(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_targetCoord"))
	{
		vVar0 = { func_554(decor_get_int(iParam0, "pedRoam_targetCoord")) };
		vVar0.f_2 = decor_get_float(iParam0, "pedRoam_targetCoord_Z");
		return vVar0;
	}
	return 0f, 0f, 0f;
}

Vector3 func_187(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_182(iParam0))
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

void func_188(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_behavior", iParam1);
}

bool func_189(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_190(int iParam0)
{
	return (Global_1935630 && (-1 - iParam0) & 40959) != 0;
}

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_192(int iParam0, int iParam1)
{
	if (func_555(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0]->f_4 = (Global_40.f_9422[iParam0]->f_4 || iParam1);
}

bool func_193()
{
	return Global_1898164->f_163;
}

bool func_194(bool bParam0, bool bParam1)
{
	if (&Global_1879534)
	{
		return false;
	}
	if (Global_1415419->f_6)
	{
		return true;
	}
	if (!Global_1415419->f_4)
	{
		return false;
	}
	if (bParam0)
	{
		if ((get_game_timer() - Global_1415419->f_9719) <= 5000)
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (get_game_timer() < Global_1415419->f_7 && get_game_timer() < Global_1415419->f_8)
		{
			return false;
		}
	}
	else if (Global_1415419->f_9718)
	{
		if (func_189(Global_1415419->f_3, 16))
		{
			return false;
		}
		if (get_game_timer() < Global_1415419->f_8)
		{
			return false;
		}
	}
	else
	{
		if (func_189(Global_1415419->f_3, 8))
		{
			return false;
		}
		if (get_game_timer() < Global_1415419->f_7)
		{
			return false;
		}
	}
	if (func_157(player_id(), 1, 0, 1))
	{
		return false;
	}
	return true;
}

int func_195()
{
	iVar0 = 0;
	iVar1 = 3;
	if (!Global_1415419->f_6)
	{
		if (Global_1415419->f_9718)
		{
			if (!func_556())
			{
				iVar0 = 0;
				iVar1 = 1;
			}
			else
			{
				iVar0 = 0;
				iVar1 = func_557(func_340(func_156()));
			}
		}
		else if (!func_556())
		{
			iVar0 = 2;
			iVar1 = 3;
		}
		else
		{
			iVar0 = func_557(func_340(func_156()));
			iVar1 = ((func_557(func_340(func_156())) + func_558(func_340(func_156()))) - 1);
		}
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (!Global_1415419->f_9721[iVar2]->f_2)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_196()
{
	if (!func_559(Global_1415419->f_9756))
	{
		return;
	}
	if (func_560())
	{
		if (func_561(&iVar0, func_156()))
		{
			iVar16 = 0;
			while (iVar16 < iVar0)
			{
				if (&iVar0[iVar16] != -1)
				{
					if (func_189(Global_1415419->f_19[&iVar0[iVar16]]->f_11, 8))
					{
						Jump @170; //curOff = 94
					}
					else if (func_562(&(iVar0[iVar16]), 1, 1))
					{
						func_291(&(Global_1415419->f_19[&iVar0[iVar16]]->f_11), 2);
						func_563(&(iVar0[iVar16]));
					}
					else
					{
						func_191(&(Global_1415419->f_19[&iVar0[iVar16]]->f_11), 2);
					}
				}
				iVar16++;
			}
			return;
		}
	}
	iVar17 = Global_1415419->f_9755;
	if (iVar17 > 247)
	{
		if (func_564())
		{
			iVar17 = 0;
		}
		else
		{
			iVar17 = 34;
		}
	}
	iVar18 = 0;
	while (iVar18 < 3)
	{
		if ((iVar18 + iVar17) > 247)
		{
		}
		else
		{
			if (func_189((Global_1415419->f_19[(iVar18 + iVar17)])->f_11, 8))
			{
				Jump @333; //curOff = 261
			}
			else if (func_562((iVar18 + iVar17), 1, 1))
			{
				func_291(&((Global_1415419->f_19[(iVar18 + iVar17)])->f_11), 2);
				func_563((iVar18 + iVar17));
			}
			else
			{
				func_191(&((Global_1415419->f_19[(iVar18 + iVar17)])->f_11), 2);
			}
			iVar18++;
		}
	}
	Global_1415419->f_9755 = (iVar18 + iVar17);
}

void func_197()
{
	if (!func_559(Global_1415419->f_9756))
	{
		return;
	}
	if (func_560())
	{
		if (func_561(&iVar0, func_156()))
		{
			iVar16 = 0;
			while (iVar16 < iVar0)
			{
				if (&iVar0[iVar16] != -1)
				{
					if (func_189(Global_1415419->f_19[&iVar0[iVar16]]->f_11, 2))
					{
						iVar17 = 0;
						if (func_565(&(iVar0[iVar16]), &iVar17, 0, 1, 1) == -1)
						{
							func_191(&(Global_1415419->f_19[&iVar0[iVar16]]->f_11), 1);
						}
						else
						{
							func_291(&(Global_1415419->f_19[&iVar0[iVar16]]->f_11), 1);
						}
					}
				}
				iVar16++;
			}
			return;
		}
	}
	iVar18 = Global_1415419->f_9754;
	if (iVar18 > 247 || iVar18 < 0)
	{
		if (func_564())
		{
			iVar18 = 0;
		}
		else
		{
			iVar18 = 34;
		}
	}
	iVar19 = iVar18 + 5;
	if (iVar19 > 247)
	{
		iVar19 = 247;
	}
	iVar21 = 0;
	iVar20 = iVar18;
	while (iVar20 <= iVar19)
	{
		if (func_189(Global_1415419->f_19[iVar20]->f_11, 2))
		{
			iVar22 = ((1 + Global_1415419->f_19[iVar20]->f_9) - Global_1415419->f_19[iVar20]->f_8);
			if ((iVar22 + iVar21) < 25)
			{
				iVar23 = 0;
				if (func_565(iVar20, &iVar23, 0, 1, 1) == -1)
				{
					func_191(&(Global_1415419->f_19[iVar20]->f_11), 1);
				}
				else
				{
					func_291(&(Global_1415419->f_19[iVar20]->f_11), 1);
				}
				iVar21 = (iVar21 + iVar23);
			}
		else
		{
			}
			else
			{
				iVar20++;
			}
			Global_1415419->f_9754 = iVar20;
		}
	}
}

int func_198()
{
	return Global_1327590->f_3;
}

void func_199(int iParam0)
{
	Global_1327590->f_3 = iParam0;
}

bool func_200()
{
	return Global_1327590->f_19621 != func_473();
}

void func_201()
{
	Global_1327590->f_19621 = func_473();
	Global_1327590->f_19682 = -1;
	switch (Global_1327590->f_19621)
	{
		case 1:
			func_566(-266920872, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
		case 2:
			func_566(-715535005, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
		case 3:
			func_566(289706151, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
		case 6:
			func_566(1156064998, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
	}
}

bool func_202()
{
	return Global_1359453->f_27;
}

bool func_203()
{
	return Global_1327590->f_19682 != get_clock_hours();
}

void func_204()
{
	Global_1327590->f_19682 = get_clock_hours();
	func_567(25);
}

void func_205()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] != -1)
		{
			if (!is_thread_active(Global_1327590->f_19547[iVar0]->f_2, false))
			{
				func_568(&(Global_1327590->f_19547[iVar0]));
				func_569(&(Global_1327590->f_19547[iVar0]));
				func_570(iVar0);
			}
		}
		iVar0++;
	}
}

void func_206()
{
	fVar0 = vdist2(Global_36, func_571(Global_1327590->f_19621));
	if (fVar0 < 10000f)
	{
		Global_1327590->f_1 = 0;
		return;
	}
	if (fVar0 < 62500f)
	{
		Global_1327590->f_1 = 1;
		return;
	}
	Global_1327590->f_1 = 2;
}

void func_207()
{
	switch (Global_1327590->f_19621)
	{
		case 1:
			if ((((func_211(2030928096, 1) || func_211(545240164, 1)) && !func_211(2137967386, 1)) && !func_211(108841201, 1)) && !func_572(543))
			{
				if (func_573(909007663, 2101241783) >= 3 && !func_574(5000))
				{
					func_566(108841201, 1017034651, -1212621019, -1, 1, 1, 0);
				}
			}
			if ((func_211(1141344854, 1) && !func_211(542655528, 1)) && !func_572(596))
			{
				if (vdist2(Global_36, func_571(Global_1327590->f_19621)) > 122500f)
				{
					func_566(542655528, 1017034651, -1212621019, -1, 1, 1, 0);
				}
			}
			if (((((func_211(-332258016, 1) && func_211(545240164, 1)) && func_211(1150653348, 1)) && !func_211(1469701481, 1)) && !func_211(-948342953, 1)) && !func_572(603))
			{
				func_566(-948342953, 1017034651, -1212621019, -1, 1, 1, 0);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 6:
			if ((func_211(-1757085331, 1) && !func_211(753501669, 1)) && !func_572(592))
			{
				if (func_575((*Global_1835011)[49]->f_1) == 1)
				{
					func_566(753501669, 1017034651, -469960592, -1, 1, 1, 0);
				}
			}
			break;
	}
}

int func_208()
{
	return Global_1327590->f_1;
}

bool func_209()
{
	return &Global_1327590;
}

void func_210()
{
	func_576(1);
	func_214();
	func_215();
	func_566(1358951864, 1017034651, 1120952528, -1, 1, 1, 0);
}

bool func_211(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_577(iParam0);
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

int func_212(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_578(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_213()
{
	if (func_579(Global_1327590->f_19686) || !func_579(Global_1327590->f_19687))
	{
		return true;
	}
	return false;
}

void func_214()
{
	func_580();
	func_581();
	func_582(1, 0);
}

void func_215()
{
	Global_1327590->f_19686 = func_480();
	Global_1327590->f_19687 = func_480();
	func_583(&(Global_1327590->f_19686), 0, 0, 1, 0, 0, 0, 0);
	func_584(&(Global_1327590->f_19687), 0, 0, 1, 0, 0, 0);
}

bool func_216()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_217()
{
	if (func_585(14) || func_585(15))
	{
		return;
	}
	if (func_211(1437607594, 1))
	{
		return;
	}
	func_586();
	if (func_587())
	{
		if (iLocal_14 == -1247606340)
		{
			func_588();
			iLocal_14 = func_589();
			if (iLocal_14 == -1247606340)
			{
				func_590();
			}
		}
		else
		{
			Var0 = -1;
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			if (!func_591(iLocal_14, &Var0))
			{
				iLocal_14 = -1247606340;
				return;
			}
			if (_0x947e43f544b6ab34(func_592(Var0), player_id(), 7, 10000) || _0x947e43f544b6ab34(func_592(Var0), player_id(), 6, 10000))
			{
				return;
			}
			if (!Var0.f_4 && (_0x947e43f544b6ab34(func_592(Var0.f_1), player_id(), 7, 10000) || _0x947e43f544b6ab34(func_592(Var0.f_1), player_id(), 6, 10000)))
			{
				return;
			}
			if (_0x947e43f544b6ab34(func_592(Var0), player_id(), 48, 60000))
			{
				return;
			}
			if (!Var0.f_4 && _0x947e43f544b6ab34(func_592(Var0.f_1), player_id(), 48, 60000))
			{
				return;
			}
			if (!func_594(func_593(iLocal_14)))
			{
				return;
			}
			if (!func_595(iLocal_14, Var0, Var0.f_1, Var0.f_5, 0))
			{
				iLocal_14 = -1247606340;
				return;
			}
			if (!func_596(iLocal_14, &Var0))
			{
				iLocal_14 = -1247606340;
				return;
			}
			func_597(round(6f), 0, 0);
			_text_database_delete(func_593(iLocal_14));
			iLocal_14 = -1247606340;
		}
	}
	else
	{
		func_588();
	}
	func_598();
}

void func_218()
{
	func_599("CPGENAU");
	func_599("CCOLTAU");
	func_599("CAHSAUD");
	func_599("CACCAUD");
	func_599("CASHBAU");
	func_599("CABVHAU");
	func_599("GUARGAU");
	func_599("RMD3AAU");
	func_599("MUD4AUD");
}

void func_219()
{
	func_576(0);
	Global_1327590->f_19734 = 0;
	func_600();
	Global_1327590->f_19742 = 0;
	Global_1327590->f_19745 = 0;
	func_601();
	Global_1327590->f_19683 = 0;
	func_602(1);
	func_603();
	func_604();
	func_605();
	func_606(0);
	if (func_211(1358951864, 1))
	{
		func_212(1358951864, 1, 0);
	}
}

bool func_220(int iParam0)
{
	if (&Global_1359453 != 8)
	{
		return false;
	}
	return func_607() == iParam0;
}

void func_221(int iParam0, int iParam1)
{
	if (func_220(iParam0))
	{
		Global_1359453->f_15 = iParam1;
	}
}

void func_222()
{
	if (func_608())
	{
		Global_1327590->f_10.f_12 = 1;
	}
}

int func_223()
{
	switch (func_36())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

int func_224(int iParam0, bool bParam1)
{
	iVar0 = func_223();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_225(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_223();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_224(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_226(iVar2, 512))
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

bool func_226(int iParam0, int iParam1)
{
	if (func_609(iParam0, 1, 1))
	{
		return func_610(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_227(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (*Global_1955500)[*iParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_224(1, 1) == *iParam0)
			{
				func_225(-1, 1, 1);
			}
			if (bParam1)
			{
				func_611((*Global_1955500)[*iParam0]->f_1);
			}
			(*Global_1955500)[*iParam0] = 0;
			(*Global_1955500)[*iParam0]->f_2 = 0;
			(*Global_1955500)[*iParam0]->f_3 = 0;
			*iParam0 = -1;
		}
	}
}

void func_228(int iParam0, int iParam1)
{
	if (func_609(iParam0, 1, 1))
	{
		func_612((*Global_1955500)[iParam0], iParam1);
	}
}

bool func_229()
{
	return func_613();
}

void func_230(int iParam0)
{
	if (func_609(iParam0, 1, 1))
	{
		iVar0 = func_223();
		iVar1 = (*Global_1955500)[iParam0]->f_2;
		bVar2 = func_226(iParam0, 4096);
		if (does_entity_exist(iVar1))
		{
			if (!bVar2)
			{
				task_look_at_entity(iVar0, iVar1, -1, 0, 51, 0);
				_0xaac0ee3b4999abb5(iVar0, iVar1);
			}
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!bVar2)
				{
					if (!is_entity_dead(iVar3))
					{
						task_look_at_entity(iVar3, iVar0, -1, 0, 51, 0);
					}
				}
				if (func_226(iParam0, 512) && !is_string_null_or_empty(&((*Global_1955500)[iParam0]->f_4)))
				{
					_0x3946fc742ac305cd(player_id(), iVar3, &((*Global_1955500)[iParam0]->f_4), (*Global_1955500)[iParam0]->f_12, (*Global_1955500)[iParam0]->f_15, 0);
				}
			}
			Global_1955499 = iParam0;
		}
	}
}

void func_231()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_235(iVar0);
		func_236(iVar0, 0);
		Global_1395601->f_482 = -1;
		iVar0++;
	}
}

bool func_232()
{
	if (Global_1395601->f_482 == -1)
	{
		return false;
	}
	if (func_614())
	{
		return false;
	}
	if (func_615(Global_1395601->f_482, &iVar0, &iVar1))
	{
		if (func_616(iVar1))
		{
			if (!func_271(Global_1914319->f_3[iVar1]->f_21))
			{
				return true;
			}
			if (!func_509(Global_1914319->f_3[iVar1]->f_21, 0))
			{
				return true;
			}
			if (func_279(iVar1, iVar0))
			{
				return true;
			}
		}
	}
	if (((Global_1935630->f_12 || network_is_game_in_progress()) || func_157(player_id(), 1, 0, 1)) || _0x69e181772886f48b(player_id()))
	{
		if (!is_entity_in_volume(Global_35, Global_1395601->f_5[Global_1395601->f_482]->f_23, true, 0) && func_248(Global_35, Global_1395601->f_5[Global_1395601->f_482]->f_15, 1) > 49f)
		{
			return true;
		}
	}
	return false;
}

int func_233(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_234(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	return Global_1395601->f_5[iParam0]->f_20;
}

void func_235(int iParam0)
{
	iVar0 = func_617(iParam0);
	if (func_618(iVar0) && !_0xcf45df50c7775f2a())
	{
		if (_is_imap_active(iVar0))
		{
			_remove_imap(iVar0);
		}
	}
	Global_1395601 = 0;
	func_619(iParam0);
	if (!func_103(242, 1, 1))
	{
		func_620(iParam0, 1);
	}
	Global_1395601->f_5[iParam0]->f_25 = 0f;
	Global_1395601->f_5[iParam0]->f_27 = 0;
	func_621(iParam0, 0);
	func_622(iParam0);
}

void func_236(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_20 = iParam1;
}

bool func_237(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_238(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 9:
			return true;
		case 11:
			return true;
		case 10:
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

bool func_239(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	return Global_40.f_9384[iParam0] & 1 != 0;
}

bool func_240(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_623(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_624(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_625(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_626(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_627(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_628(iParam0);
	if (iVar5 < 1 || iVar5 > func_629(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_241(int iParam0, bool bParam1)
{
	return func_630(func_480(), iParam0, bParam1);
}

void func_242(int iParam0, int iParam1)
{
	Global_1395601->f_5[iParam0]->f_27 = iParam1;
}

void func_243(int iParam0)
{
	Global_1395601->f_4 = (Global_1395601->f_4 - (Global_1395601->f_4 && iParam0));
}

void func_244(int iParam0)
{
	func_621(iParam0, 1);
	func_236(iParam0, 1);
}

void func_245(int iParam0)
{
	if (!func_292(Global_35, 0))
	{
		return;
	}
	if (func_185(Global_1395601->f_5[iParam0]->f_15))
	{
		return;
	}
	if (!func_246(iParam0))
	{
		if (!func_631(256))
		{
			func_250();
		}
		return;
	}
	if (func_632(iParam0))
	{
		func_619(iParam0);
	}
	else
	{
		func_633(iParam0);
	}
	if (func_32(64) && !func_634())
	{
		if (_does_volume_exist(Global_1395601->f_5[iParam0]->f_23))
		{
			if (_0x7fd78dfd0c5d7b9b(Global_1395601->f_5[iParam0]->f_23) != Global_35)
			{
				_0xd52df30355ea7c8e(Global_1395601->f_5[iParam0]->f_23, Global_35, 1);
			}
			if (is_entity_in_volume(Global_35, Global_1395601->f_5[iParam0]->f_23, true, 0))
			{
				if (!is_thread_active(Global_1395601->f_5[iParam0]->f_24, false))
				{
					request_script("property_use_core");
					if (has_script_loaded("property_use_core"))
					{
						Var0.f_5 = 8;
						Var0.f_14 = -1;
						Var0.f_22 = -1082130432;
						Var0.f_23 = -1;
						Var0.f_34 = 6;
						Var0.f_54.f_4 = 1;
						Var0.f_54.f_5 = 1;
						Var0.f_2 = Global_1395601->f_5[iParam0]->f_23;
						Global_1395601->f_5[iParam0]->f_24 = start_new_script_with_args("property_use_core", &Var0, 69, 6096);
						set_script_as_no_longer_needed("property_use_core");
					}
				}
			}
			else if (is_thread_active(Global_1395601->f_5[iParam0]->f_24, false))
			{
				fVar69 = vdist2(_0xf70f00013a62f866(Global_1395601->f_5[iParam0]->f_23), Global_36);
				if (Global_1395601->f_5[iParam0]->f_25 == 0f)
				{
					vVar70 = { _0x3e2a25b2416dd67e(Global_1395601->f_5[iParam0]->f_23) };
					if (vVar70.x >= vVar70.y)
					{
						fVar73 = vVar70.x;
					}
					else
					{
						fVar73 = vVar70.y;
					}
					Global_1395601->f_5[iParam0]->f_25 = (fVar73 + (fVar73 * fVar73));
				}
				if ((fVar69 > Global_1395601->f_5[iParam0]->f_25 && !func_635(iParam0, 131072)) && !func_635(iParam0, 524288))
				{
					func_250();
				}
			}
		}
	}
	func_636(iParam0);
}

bool func_246(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	if (func_635(iParam0, 2))
	{
		return false;
	}
	if (func_637(iParam0))
	{
		return false;
	}
	if (func_638(iParam0))
	{
		return false;
	}
	if (!func_234(iParam0))
	{
		return false;
	}
	return true;
}

void func_247(int iParam0, bool bParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	if (func_639(iParam0))
	{
		return;
	}
	if (bParam1 == 0)
	{
		if (_does_volume_exist(Global_1395601->f_5[iParam0]->f_23) && is_entity_in_volume(Global_35, Global_1395601->f_5[iParam0]->f_23, true, 0))
		{
			if (((((func_640(&Global_35) || _0x285d36c5c72b0569(Global_35) < 1f) || func_157(player_id(), 1, 0, 1)) || func_641(Global_35, 0)) || _0x69e181772886f48b(player_id())) || _0xd1f6b912785bfd35(player_id()))
			{
				Global_1395601->f_5[iParam0]->f_27 = 2;
				Global_1395601->f_4 |= 256;
				func_642(0);
				bParam1 = true;
			}
		}
	}
	if (bParam1)
	{
		if (!func_635(iParam0, 8192))
		{
			func_619(iParam0);
			func_620(iParam0, 1);
			func_621(iParam0, 0);
			func_643(iParam0, 8192);
			func_644(iParam0, 16384);
		}
	}
	else if (!func_635(iParam0, 16384))
	{
		func_633(iParam0);
		func_642(1);
		func_620(iParam0, 0);
		func_643(iParam0, 16384);
		func_644(iParam0, 8192);
	}
}

float func_248(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_645(vVar0, vParam1);
}

void func_249(var uParam0)
{
	*uParam0 = -15;
}

void func_250()
{
	Global_1395601->f_4 |= 256;
}

void func_251(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_252()
{
	iVar2 = func_646(0);
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_13321)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (Global_1310750->f_16071 != iVar1 || iVar2 != 2)
		{
			if (func_253(iVar1))
			{
			}
			else
			{
				func_647(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_253(int iParam0)
{
	if (!func_259(iParam0))
	{
		return false;
	}
	if (func_648(64) && func_649(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

void func_254()
{
	if (!func_259(&Global_1327479))
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
	func_251(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_255(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_650() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_259(iVar1) && !func_651(iVar1, iParam2)) && (!bParam3 || !func_253(iVar1))) && (!bParam4 || !func_652(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_647(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_256()
{
	if (Global_1310750->f_16075)
	{
		return true;
	}
	if (&Global_1327479 == -1)
	{
		if (Global_1310750->f_16111 + 5000 > get_game_timer() || Global_1310750->f_16111 <= 0)
		{
			if (!Global_1326862->f_4)
			{
				return false;
			}
		}
	}
	if (!func_185(Global_1310750->f_16106))
	{
		if (vdist(Global_1310750->f_16106, Global_36) > 750f)
		{
			func_653(240);
			Global_1310750->f_16106 = { 0f, 0f, 0f };
		}
	}
	if (!func_654())
	{
		return false;
	}
	if (Global_1310750->f_16077 != 0)
	{
		return false;
	}
	if (func_648(1))
	{
		return false;
	}
	if (func_300(func_156()) || func_343(func_342(), 1))
	{
		return false;
	}
	iVar1 = (get_game_timer() - _0x7fc667f6ddfbcdcc(player_id()));
	if (func_157(player_id(), 1, 0, 0) || iVar1 < 1000)
	{
		return false;
	}
	iVar0 = func_655();
	if ((iVar0 > 0 && iVar0 > (get_game_timer() - 30000)) || iVar1 < 5000)
	{
		if (!Global_1327479->f_8)
		{
			func_656(120, 0, 1);
			Global_1327479->f_8 = 1;
		}
		return false;
	}
	else
	{
		Global_1327479->f_8 = 0;
	}
	if (func_657())
	{
		return false;
	}
	if (-160924582 == Global_1935630->f_44)
	{
		return false;
	}
	if (Global_16 || Global_18)
	{
		return false;
	}
	if (func_658())
	{
		return false;
	}
	if (func_659())
	{
		return false;
	}
	if (func_358(&Global_1935630, 16384) || Global_1430231->f_4)
	{
		return false;
	}
	return true;
}

int func_257()
{
	Var0.f_6 = -1;
	if (is_ped_injured(Global_35))
	{
		return 0;
	}
	switch (Global_1327479->f_3)
	{
		case 0:
			if (!func_660(&Global_1327479, 0) && !Global_1310750->f_16075)
			{
				func_254();
				return 0;
			}
			if (!is_string_null_or_empty(&((*Global_1310750)[&Global_1327479]->f_40)))
			{
				Global_1327479->f_2 = func_661(func_651(&Global_1327479, 256));
				if (Global_1327479->f_2 == -1)
				{
					func_254();
					return 0;
				}
				request_script(&((*Global_1310750)[&Global_1327479]->f_40));
				Global_1327479->f_3 = 1;
			}
			break;
		case 2:
			break;
		case 1:
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				if (!func_253(&Global_1327479))
				{
					return 0;
				}
			}
			if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
			{
				iVar9 = 2048;
				if (network_is_game_in_progress())
				{
					iVar9 = 5500;
				}
				if (Global_1310750->f_16076)
				{
					func_662(&(Var0.f_2), 8);
				}
				if (Global_1327479->f_1 != player_id())
				{
					func_662(&(Var0.f_2), 4);
				}
				Var0 = &Global_1327479;
				Var0.f_1 = Global_1327479->f_1;
				Var0.f_6 = Global_1327479->f_10;
				Var0.f_3 = { Global_1310750->f_16103 };
				if (!func_663(&Global_1327479, 512))
				{
					Global_1310750->f_13321[Global_1327479->f_2]->f_5 = start_new_script_with_args(&((*Global_1310750)[&Global_1327479]->f_40), &Var0, 7, iVar9);
					func_664(&Global_1327479, Global_1327479->f_2);
					Global_1310750->f_13321[Global_1327479->f_2]->f_1 = Global_1327479->f_1;
				}
				set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
				func_665(&Global_1327479);
				if (func_666(&Global_1327479) != 1)
				{
					func_667(&Global_1327479, 1, 0, 5, 0, 0, 0, 1);
				}
				else
				{
					func_667(&Global_1327479, 1, 0, 1, 0, 0, 0, 0);
				}
				if (Global_1327479->f_7 > 3)
				{
					func_656(Global_1327479->f_7, 0, 0);
				}
				else
				{
					func_656(3, 0, 0);
				}
				func_254();
				Global_1310750->f_16075 = 0;
				Global_1310750->f_16076 = 0;
				Global_1310750->f_16103 = { 0f, 0f, 0f };
				Global_1327479 = -1;
				Global_1327479->f_1 = -1;
				Global_1327479->f_2 = -1;
				Global_1327479->f_10 = -1;
				Global_1327479->f_7 = -1;
			}
			break;
	}
	return 1;
}

int func_258()
{
	fVar0 = 0f;
	iVar1 = -1;
	func_668(&uVar2, &iVar3);
	iVar5 = uVar2;
	while (iVar5 <= iVar3)
	{
		iVar4 = &Global_1326862->f_11[iVar5];
		if ((((*Global_1310750)[iVar4]->f_54 > fVar0 && (*Global_1310750)[iVar4]->f_45) && !(*Global_1310750)[iVar4]->f_48) && func_669(iVar4))
		{
			fVar0 = (*Global_1310750)[iVar4]->f_54;
			iVar1 = iVar4;
		}
		iVar5++;
	}
	if (!func_259(iVar1))
	{
		return -1;
	}
	return iVar1;
}

bool func_259(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_260(int iParam0, int iParam1)
{
	iVar0 = 4;
	if (func_564())
	{
		iVar0 = 3;
	}
	if (func_670() >= iVar0)
	{
		return 0;
	}
	iVar1 = func_661(0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = player_id();
	}
	Global_1327479 = iParam0;
	Global_1327479->f_1 = iParam1;
	Global_1327479->f_2 = iVar1;
	func_251(0);
	return 1;
}

bool func_261()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_5;
}

int func_262(int iParam0)
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

void func_263(var uParam0)
{
	func_671(uParam0, 1, 1, 0);
	func_672(uParam0, 0);
	func_515(uParam0, 0);
	func_673(uParam0, 1);
	func_674(uParam0, 1);
	func_675(uParam0, 1);
	func_516(uParam0, 0);
	func_519(uParam0, 1);
}

void func_264()
{
	Global_1393529 = -1;
	Global_1393529->f_2 = -1;
	Global_1393529->f_3 = 0;
	Global_1393529->f_609 = 0;
	Global_1393529->f_610 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_1393529->f_4[iVar0] = 0;
		Global_1393529->f_41[iVar0] = 0;
		Global_1393529->f_77[iVar0] = 0;
		iVar0++;
	}
	Global_1393529->f_40 = 0;
}

bool func_265()
{
	return false;
}

void func_266()
{
	func_676();
	if (func_677())
	{
		if (!func_678(iLocal_30, &iVar0))
		{
			func_679();
			return;
		}
		if (func_680(iVar0))
		{
			return;
		}
		switch (iLocal_30)
		{
			case 10:
				func_681(iVar0, "CALL_OUT_GENERAL");
				break;
			case 22:
				sVar1 = func_682();
				if (!is_string_null_or_empty(sVar1))
				{
					func_681(iVar0, sVar1);
				}
				break;
			case 12:
				func_681(iVar0, "CALL_OUT_FRUIT_VEG");
				break;
			case 13:
				func_681(iVar0, "CALL_OUT_WRAPPED_MEATS");
				break;
			case 18:
				switch (get_random_int_in_range(0, 5))
				{
					case 0:
						func_681(iVar0, "CALL_OUT_MARKET_GARMENT");
						break;
					case 1:
						func_681(iVar0, "CALL_OUT_MARKET_EQUIPMENT");
						break;
					case 2:
						func_681(iVar0, "CALL_OUT_MARKET_CLOTHING");
						break;
					case 3:
						func_681(iVar0, "CALL_OUT_MARKET_SADDLE");
						break;
					case 4:
						func_681(iVar0, "CALL_OUT_MARKET_ITEMS");
						break;
				}
				break;
			case 17:
				switch (get_random_int_in_range(0, 4))
				{
					case 0:
						func_681(iVar0, "CALL_OUT_BAIT");
						break;
					case 1:
						func_681(iVar0, "CALL_OUT_FISHING_EQUIPMENT");
						break;
					case 2:
						func_681(iVar0, "CALL_OUT_NEUTRAL");
						break;
					case 3:
						if (is_ped_male(Global_35))
						{
							func_681(iVar0, "CALL_OUT_MALE");
						}
						else
						{
							func_681(iVar0, "CALL_OUT_NEUTRAL");
						}
						break;
				}
				break;
		}
		func_679();
	}
}

bool func_267()
{
	if (!func_292(Global_35, 0))
	{
		return false;
	}
	if (Global_1914319->f_16855 != -1)
	{
		Global_1393529 = Global_1914319->f_16855;
		Global_1393529->f_2 = Global_1914319->f_3[Global_1914319->f_16855]->f_21;
		return true;
	}
	return false;
}

void func_268(int iParam0, int iParam1)
{
	if (func_269(iParam1, 4096))
	{
		func_683(iParam1, 4096);
	}
	if (func_684(iParam0, 4096))
	{
		func_685(iParam0, 4096);
	}
}

bool func_269(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_270(int iParam0)
{
	if (func_36() != -1)
	{
		return;
	}
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (func_279(iParam0, Global_1914319->f_3[iParam0]->f_10))
	{
		return;
	}
	if (!func_269(iParam0, 32))
	{
		return;
	}
	if (func_687(iParam0, 2))
	{
		func_688(iParam0, 2);
	}
	if (func_687(iParam0, 4))
	{
		func_688(iParam0, 4);
	}
	if (func_269(iParam0, 8192))
	{
		func_683(iParam0, 8192);
	}
	if (!does_entity_exist(Global_1393529->f_3) || is_entity_dead(Global_1393529->f_3))
	{
		return;
	}
	Global_1393529->f_41[iParam0] = 0;
	if (func_687(iParam0, 16))
	{
		func_688(iParam0, 16);
		clear_ped_tasks(Global_1393529->f_3, 1, 0);
	}
	if (func_271(Global_1393529->f_2))
	{
		iVar0 = func_277(Global_1393529->f_2);
		if (_0x800df3fc913355f3(iVar0) && !_0xeb98b38ca60742d7(iVar0))
		{
			iVar1 = func_690(func_689(Global_1393529->f_3, 0));
			sVar2 = func_691(iVar1);
			func_692(func_689(Global_1393529->f_3, 0), 4096);
			if (compare_strings(_0xceb40b678e403759(iVar1), sVar2, false, -1) == 0)
			{
			}
			else
			{
				_0xa2b18ff8d39f6d87(iVar0);
				task_persistent_character(Global_1393529->f_3);
			}
		}
		func_683(iParam0, 32);
		func_688(iParam0, 32);
	}
}

bool func_271(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_272(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_273(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_271(iParam0))
	{
		return;
	}
	if (!func_693(iParam0, 1))
	{
		return;
	}
	if (!func_693(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_272(iParam0)) && func_694(iParam0))
	{
		return;
	}
	func_692(iParam0, 1);
	func_695(iParam0);
	if (func_696(func_690(iParam0)))
	{
		iVar0 = func_277(iParam0);
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
		func_692(iParam0, 16);
	}
	if (func_693(iParam0, 128) && !bParam3)
	{
		func_697(iParam0, 0);
	}
}

bool func_274(int iParam0, bool bParam1)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_271(iParam0))
	{
		return false;
	}
	if (!func_272(iParam0) && bParam1)
	{
		return false;
	}
	return func_693(iParam0, 1);
}

bool func_275(int iParam0)
{
	return !func_684(iParam0, 1);
}

bool func_276(int iParam0)
{
	return func_684(iParam0, 131072);
}

int func_277(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_278(int iParam0)
{
	iVar0 = func_277(iParam0);
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

bool func_279(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return false;
	}
	if (func_698(iParam1))
	{
		return false;
	}
	return func_684(Global_1914319->f_3[iParam0]->f_10, 1024);
}

bool func_280(int iParam0, int iParam1)
{
	if (Global_1393529->f_2 == -1)
	{
		return false;
	}
	bVar0 = func_616(iParam1);
	bVar1 = func_698(iParam0);
	bVar3 = (!func_699(iParam0) && !func_511(iParam1, iParam0, &uVar2));
	if (!does_entity_exist(Global_1393529->f_3))
	{
		if (bVar1 || (bVar3 && bVar0))
		{
			bVar4 = func_700(iParam0);
			if (iParam1 != 2 && iParam1 != 1)
			{
				func_701(Global_1393529->f_2, bVar4, 1);
			}
			Global_1393529->f_3 = func_278(Global_1393529->f_2);
			if (does_entity_exist(Global_1393529->f_3))
			{
				_0x6759bee6762e140b(func_277(Global_1393529->f_2));
				_0xf74e134f40192884(Global_1393529->f_3, 2);
				func_683(iParam1, 4096);
			}
		}
	}
	if (!does_entity_exist(Global_1393529->f_3) || is_entity_dead(Global_1393529->f_3))
	{
		return false;
	}
	Global_1914319->f_18905[iParam1] = _0x7cc2186c32d3540a(Global_1393529->f_3, player_id());
	if ((bVar1 || (bVar3 && bVar0)) && !func_279(iParam1, iParam0))
	{
		if (bVar0)
		{
			return true;
		}
		if (func_156() != func_702(iParam0))
		{
			_0xb65e7f733956cf25(func_277(Global_1393529->f_2));
		}
	}
	else
	{
		_0xb65e7f733956cf25(func_277(Global_1393529->f_2));
	}
	return false;
}

bool func_281(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_410;
}

bool func_282(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam1]->f_25))
	{
		if (func_703(iParam0, Global_1914319->f_3[iParam1]->f_25, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_283(int iParam0, bool bParam1)
{
	if (Global_1914319->f_3[iParam0]->f_410 != bParam1)
	{
		Global_1914319->f_3[iParam0]->f_410 = bParam1;
	}
}

void func_284(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2) || func_704(iParam2, 0))
	{
		return;
	}
	if (func_705(iParam1, iParam2))
	{
		return;
	}
	else
	{
		if (func_706(&Global_1393529))
		{
			if (func_269(&Global_1393529, 32))
			{
				func_270(&Global_1393529);
				func_683(&Global_1393529, 32);
			}
		}
		if (Global_1393529->f_607)
		{
			Global_1393529->f_606 = _get_scenario_point_ped_is_using(iParam2, false);
			func_270(&Global_1393529);
			Global_1393529->f_607 = 0;
		}
	}
}

void func_285()
{
	iVar0 = 0;
	while (iVar0 < 180)
	{
		Global_40.f_9910[iVar0] = 0;
		Global_40.f_9910[iVar0]->f_3 = -15;
		Global_40.f_9910[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_286(int iParam0, int iParam1)
{
	iVar1 = -1;
	if (!func_287(iParam0))
	{
		return -1;
	}
	if (func_707(iParam0) != -1)
	{
		return -1;
	}
	if ((iParam1 > -1 && iParam1 < 180) && &Global_40.f_9910[iVar0] == 0)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 180)
		{
			if (&Global_40.f_9910[iVar0] == 0)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	if (iVar1 != -1)
	{
		Global_40.f_9910[iVar1] = iParam0;
		Global_40.f_9910[iVar1]->f_1 = 0;
	}
	return iVar1;
}

bool func_287(int iParam0)
{
	return iParam0 != 0;
}

bool func_288(int iParam0)
{
	if (!func_287(iParam0))
	{
		return false;
	}
	iVar0 = func_707(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_708(Global_40.f_9910[iVar0], 2);
}

void func_289(int iParam0)
{
	if (!func_287(iParam0))
	{
		return;
	}
	iVar0 = func_707(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_290(iParam0, -1))
	{
		return;
	}
	else if (!func_288(iParam0))
	{
		return;
	}
	else if (func_709(iParam0) && !func_240(Global_40.f_9910[iVar0]->f_4))
	{
		return;
	}
	else if (!func_709(iParam0) || func_241(Global_40.f_9910[iVar0]->f_4, 1))
	{
		func_710(Global_40.f_9910[iVar0], 2);
		func_711(Global_40.f_9910[iVar0], 4);
		func_712(iParam0);
		if (!func_713(28))
		{
			func_714(28);
		}
	}
}

bool func_290(int iParam0, int iParam1)
{
	if (!func_287(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_707(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_708(Global_40.f_9910[iParam1], 4);
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_292(int iParam0, int iParam1)
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
	if (func_610(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_610(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_610(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_610(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_610(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_610(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_610(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_610(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_293()
{
	switch (Global_1935183->f_56)
	{
		case 0:
			if (&Global_1879534)
			{
				return;
			}
			if (!func_715())
			{
				return;
			}
			if (Global_1935183->f_25)
			{
				Global_1935183->f_25 = 0;
			}
			func_716(&(Global_1935183->f_3));
			if (func_717(Global_1935183->f_1))
			{
				if (!Global_1935183->f_60)
				{
					Global_1935183->f_25 = 1;
					Global_1935183->f_26 = 0;
				}
				Global_1935183->f_60 = 1;
			}
			if (func_718())
			{
				Global_1935183->f_26 = 0;
				Global_1935183->f_27 = 0;
				func_719(Global_1935183->f_1, -415041951);
				func_720(Global_1935183->f_1, -1600776215);
				func_721(Global_1935183->f_1, 0);
				func_722(Global_1935183->f_1);
				if (func_723(4))
				{
					func_724(4, 0, 1103626240);
				}
				iVar0 = 0;
				while (iVar0 < Global_1935183->f_37)
				{
					if (func_725(Global_1935183->f_1, *(*Global_40.f_11206[Global_1935183->f_1])[iVar0]))
					{
					}
					else
					{
						iVar0++;
					}
				}
			}
			func_726(1);
			break;
		case 1:
			Global_1935183->f_61 = 0;
			Global_1935183->f_57 = 0;
			iVar1 = get_interior_from_entity(Global_35);
			Global_1935183->f_4 = is_valid_interior(iVar1);
			if (Global_1935183->f_3)
			{
				func_727();
				func_721(Global_1935183->f_1, 1);
			}
			func_728(Global_1935183->f_1);
			func_726(3);
			break;
		case 3:
			if (func_729(Global_1935183->f_1))
			{
				if (Global_1935183->f_23 || Global_1935183->f_25)
				{
					func_730(Global_1935183->f_1, Global_40.f_11206[Global_1935183->f_1]);
					Global_1935183->f_37 = 0;
					iVar2 = 0;
					while (iVar2 < 5)
					{
						Global_1935183->f_31[iVar2] = func_731(Global_1935183->f_1, Global_40.f_11206[Global_1935183->f_1][iVar2]);
						if (Global_40.f_11206[Global_1935183->f_1][iVar2] == -1600776215)
						{
							Global_1935183->f_37 = iVar2;
						}
						else
						{
							iVar2++;
						}
					}
					if (Global_1935183->f_37 > 5)
					{
						Global_1935183->f_37 = 5;
					}
					else if (Global_1935183->f_37 <= 0)
					{
						Global_1935183->f_37 = 1;
					}
					Global_1935183->f_23 = 0;
					Global_1935183->f_24 = 0;
					func_726(4);
				}
				else if (func_717(Global_1935183->f_1))
				{
					func_726(7);
				}
				else
				{
					func_726(0);
				}
			}
			break;
		case 4:
			if (func_715())
			{
				iVar3 = 0;
				while (iVar3 < Global_1935183->f_37)
				{
					func_732(&(Global_1935183->f_31[iVar3]));
					iVar3++;
				}
				if (Global_1935183->f_24)
				{
					func_726(3);
				}
				else
				{
					func_726(5);
				}
			}
			break;
		case 5:
			iVar4 = 0;
			while (iVar4 < Global_1935183->f_37)
			{
				if (func_725(Global_1935183->f_1, *(*Global_40.f_11206[Global_1935183->f_1])[iVar4]))
				{
				}
				else
				{
					iVar4++;
				}
			}
			Global_1935183->f_27 = 0;
			if (Global_1935183->f_24)
			{
				func_726(3);
			}
			else
			{
				Global_1935183->f_58 = 0;
				func_726(6);
			}
			break;
		case 6:
			if (func_733())
			{
				func_734();
				if (func_717(Global_1935183->f_1))
				{
					func_726(7);
				}
				else
				{
					func_726(0);
				}
			}
			if (Global_1935183->f_24)
			{
				func_726(3);
			}
			iVar5 = func_156();
			if (iVar5 != -1)
			{
				iVar6 = func_340(iVar5);
				if (iVar6 != -1)
				{
					if (Global_1935183->f_1 != iVar6)
					{
						func_726(0);
					}
				}
			}
			break;
		case 7:
			func_726(8);
			break;
		case 8:
			if (!Global_1935183->f_3)
			{
				func_726(0);
				return;
			}
			if (!func_735(&(Global_1935183->f_64)))
			{
				func_736(&(Global_1935183->f_64), 1);
			}
			func_722(Global_1935183->f_1);
			func_737(Global_1935183->f_1);
			if (Global_1935183->f_24)
			{
				func_738(&(Global_1935183->f_64));
				func_726(3);
				return;
			}
			if (func_739(&(Global_1935183->f_64)) >= 1f)
			{
				func_738(&(Global_1935183->f_64));
				func_734();
				func_726(0);
			}
			break;
	}
}

bool func_294(int iParam0)
{
	if (!func_740(iParam0))
	{
		return false;
	}
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
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_295(int iParam0)
{
	if (!func_740(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

Vector3 func_296(int iParam0)
{
	if (func_741(iParam0))
	{
		return func_742(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_297(int iParam0)
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

void func_298(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if ((iParam1 == 31 && Global_12106[iParam0]->f_4 == 1) && (fParam2 > (300f * 300f) || func_743(iParam1, iParam3)))
	{
		Global_12106[iParam0]->f_4 = 0;
	}
	if (iParam1 == 45)
	{
		if (Global_12106[iParam0]->f_4 == 1)
		{
			if (func_320(58) || (fParam2 > (75f * 75f) || func_743(iParam1, iParam3)))
			{
				Global_12106[iParam0]->f_4 = 0;
			}
		}
	}
	if ((iParam1 == 17 && Global_12106[iParam0]->f_4 == 1) && (fParam2 > (50f * 50f) || func_743(iParam1, iParam3)))
	{
		Global_12106[iParam0]->f_4 = 0;
	}
	if ((iParam1 == 7 && Global_12106[iParam0]->f_4 == 1) && (fParam2 > (250f * 250f) || func_743(iParam1, iParam3)))
	{
		Global_12106[iParam0]->f_4 = 0;
	}
	if ((iParam1 == 22 && Global_12106[iParam0]->f_4 == 1) && (fParam2 > (300f * 300f) || func_743(iParam1, iParam3)))
	{
		Global_12106[iParam0]->f_4 = 0;
	}
	if (iParam1 == 48)
	{
		if (Global_12106[iParam0]->f_4 == 0)
		{
			if (!func_103(0, 0, 1))
			{
				if (fParam2 < (200f * 200f))
				{
					trigger_music_event("NTV1_APPROACH_START");
					Global_12106[iParam0]->f_4 = 1;
				}
			}
		}
		else if (func_103(0, 0, 1) || fParam2 > (250f * 250f))
		{
			trigger_music_event("NTV1_APPROACH_STOP");
			Global_12106[iParam0]->f_4 = 0;
		}
	}
}

bool func_299()
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_744())
	{
		return false;
	}
	if (!func_486((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_486((*Global_1835011)[2]->f_1, 1) && func_486((*Global_1347702)[120]->f_15, 1)) && !func_486((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_486((*Global_1835011)[37]->f_1, 1) && !func_486((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_486((*Global_1835011)[57]->f_1, 1) && !func_486((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_486((*Global_1835011)[26]->f_1, 1) && !func_486((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_486((*Global_1835011)[62]->f_1, 1) && func_486((*Global_1835011)[63]->f_1, 1)) && !func_486((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_486((*Global_1835011)[75]->f_1, 1) && !func_486((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_486((*Global_1835011)[76]->f_1, 1) && !func_486((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_486((*Global_1835011)[40]->f_1, 1) && func_486((*Global_1835011)[41]->f_1, 1)) && !func_486((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_486((*Global_1835011)[62]->f_1, 1) && func_486((*Global_1835011)[63]->f_1, 1)) && !func_486((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_486((*Global_1835011)[65]->f_1, 1) && func_486((*Global_1835011)[66]->f_1, 1)) && !func_486((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_300(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_745(iParam0, 33554432);
}

int func_301(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	if (iParam0 != func_156())
	{
		return 0;
	}
	if (!func_292(Global_35, 0))
	{
		return 0;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		if (!is_entity_in_volume(Global_35, (*Global_1888801)[iParam0]->f_5, true, 0))
		{
			return 0;
		}
	}
	else if (_does_volume_exist((*Global_1888801)[iParam0]->f_4))
	{
		if (!is_entity_in_volume(Global_35, (*Global_1888801)[iParam0]->f_4, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_302(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_157(iParam0, bParam1, bParam2, bParam3))
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

int func_303()
{
	if (func_746() == -1)
	{
		return -1;
	}
	return func_747(func_746());
}

bool func_304(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_305(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, float fParam6, int iParam7)
{
	iVar0 = 0;
	iVar1 = (*Global_1835011)[iParam0]->f_21;
	if (func_748(iParam0))
	{
	}
	else if ((*Global_1898346)[iParam3]->f_1 & 1024 != 0)
	{
		return 0;
	}
	if (Global_1894899->f_2 == iVar1)
	{
		if (bParam1 && bParam2)
		{
			if (!func_749((*Global_1835011)[iParam0], 2048))
			{
				iVar0 = 1;
				func_750((*Global_1835011)[iParam0], 2048);
			}
		}
		else if (func_749((*Global_1835011)[iParam0], 2048))
		{
			func_751((*Global_1835011)[iParam0], 2048);
		}
	}
	if (iParam0 == 7 || iParam0 == 17)
	{
		if (Global_1935630->f_16 && Global_1894899->f_2 == (*Global_1835011)[iParam0]->f_21)
		{
			if (!func_749((*Global_1835011)[iParam0], 8192))
			{
				iVar0 = 1;
				func_750((*Global_1835011)[iParam0], 8192);
			}
		}
		else if ((func_749((*Global_1835011)[iParam0], 8192) && fParam6 >= (250f * 250f)) && !func_752(iParam0, 1, 0))
		{
			func_753(iParam0);
			func_751((*Global_1835011)[iParam0], 8192);
		}
		if (iParam0 == 7)
		{
			iVar2 = 3;
		}
		else
		{
			iVar2 = 70;
		}
		if (func_240(Global_24887[iVar2]->f_1))
		{
			iVar3 = Global_24887[iVar2]->f_1;
			func_583(&iVar3, 0, 0, 0, 1, 0, 0, 0);
			if (!func_241(iVar3, 1))
			{
				if (!func_749((*Global_1835011)[iParam0], 8192))
				{
					iVar0 = 1;
					func_750((*Global_1835011)[iParam0], 8192);
				}
			}
			else if (func_749((*Global_1835011)[iParam0], 8192) && !func_752(iParam0, 1, 0))
			{
				func_753(iParam0);
				func_751((*Global_1835011)[iParam0], 8192);
			}
		}
	}
	if ((*Global_1835011)[iParam0]->f_63 & 16384 == 0)
	{
		if (iParam5 > 0 && fParam6 <= (50f * 50f))
		{
			iVar0 = 1;
			func_750((*Global_1835011)[iParam0], 16384);
		}
	}
	else if ((iParam5 <= 0 && (fParam6 >= ((*Global_1835011)[iParam0]->f_67 * (*Global_1835011)[iParam0]->f_67) || (func_182(iParam7) && iVar1 == iParam7))) && !func_752(iParam0, 1, 0))
	{
		func_753(iParam0);
		func_751((*Global_1835011)[iParam0], 16384);
	}
	if ((*Global_1835011)[iParam0]->f_63 & 32768 == 0)
	{
		if (bParam4)
		{
			iVar0 = 1;
			func_750((*Global_1835011)[iParam0], 32768);
			if ((iParam0 == 7 || iParam0 == 17) && Global_1894899->f_2 == (*Global_1835011)[iParam0]->f_21)
			{
				(*Global_1835011)[iParam0]->f_64 = func_480();
			}
		}
	}
	else if (!bParam4)
	{
		if (func_240((*Global_1835011)[iParam0]->f_64))
		{
			iVar4 = (*Global_1835011)[iParam0]->f_64;
			func_583(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			if (func_241(iVar4, 1))
			{
				(*Global_1835011)[iParam0]->f_64 = -15;
				func_751((*Global_1835011)[iParam0], 32768);
			}
		}
		else if (((fParam6 >= ((*Global_1835011)[iParam0]->f_67 * (*Global_1835011)[iParam0]->f_67) || fParam6 >= (500f * 500f)) || ((func_182(iParam7) && iVar1 == iParam7) && iParam0 != 18)) && !func_752(iParam0, 1, 0))
		{
			func_753(iParam0);
			func_751((*Global_1835011)[iParam0], 32768);
		}
	}
	if ((*Global_1835011)[iParam0]->f_63 & 1024 == 0)
	{
		if ((*Global_1898346)[iParam3]->f_1 & 4 != 0)
		{
			if (func_754(iParam0))
			{
				func_750((*Global_1835011)[iParam0], 1024);
				iVar0 = 1;
			}
		}
	}
	else if (fParam6 > (((*Global_1835011)[iParam0]->f_66 * 2f) * ((*Global_1835011)[iParam0]->f_66 * 2f)) && !func_752(iParam0, 1, 0))
	{
		func_753(iParam0);
		func_751((*Global_1835011)[iParam0], 1024);
		func_751((*Global_1835011)[iParam0], 65536);
	}
	return iVar0;
}

void func_306(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (!(*Global_1835011)[iParam1]->f_71)
	{
		func_298(iParam0, iParam1, fParam3, iParam2);
		if (func_748(iParam1))
		{
			if (!func_749((*Global_1835011)[iParam1], 2))
			{
				func_755((*Global_1835011)[iParam1]->f_1);
				func_750((*Global_1835011)[iParam1], 2);
				func_756(iParam1, iParam2, 1, 1, 1, fParam3, 0);
				if ((!func_100(608) && !func_101(608)) && ((func_749((*Global_1835011)[iParam1], 32768) || func_749((*Global_1835011)[iParam1], 2048)) || func_749((*Global_1835011)[iParam1], 8192)))
				{
					func_102(608, 0);
				}
			}
			func_757(iParam1, fParam3);
			return;
		}
		else if (func_749((*Global_1835011)[iParam1], 2))
		{
			if (func_758(iParam1, -1) && !(*Global_1835011)[iParam1]->f_70)
			{
				set_this_script_can_remove_blips_created_by_any_script(true);
				remove_blip(&((*Global_1835011)[iParam1]->f_27));
			}
			func_751((*Global_1835011)[iParam1], 2);
			if (func_759(iParam1) && Global_43891)
			{
			}
			else
			{
				func_760(iParam1, fParam3, iParam2, 0, 1);
			}
		}
	}
}

void func_307(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_309(iVar0, 4096);
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
	if (func_36() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_308(int iParam0, int iParam1)
{
	if (!func_761(iParam0))
	{
		return;
	}
	if ((*Global_1425371)[iParam0]->f_8 != iParam1)
	{
		(*Global_1425371)[iParam0]->f_8 = iParam1;
		func_309(iParam0, 32);
	}
}

void func_309(int iParam0, int iParam1)
{
	if (!func_761(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_310()
{
	iVar0 = 0;
	iVar1 = 1499637393;
	if (_0x86afc343cf7f0b34(iVar1, 1481.509f, 648.3527f, 91.52025f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 1);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = -760570040;
	if (_0x86afc343cf7f0b34(iVar1, 2464.65f, -1475.73f, 45.1415f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 0);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 0);
	}
	iVar0 = 0;
	iVar1 = -705539859;
	if (_0x86afc343cf7f0b34(iVar1, 2588.54f, -1482.19f, 45.2241f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 1);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = -1242669618;
	if (_0x86afc343cf7f0b34(iVar1, 2654.346f, -1477.19f, 45.04671f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 1);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = -705539859;
	if (_0x86afc343cf7f0b34(iVar1, 2659.782f, -435.5804f, 43.97608f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 0);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 0);
	}
	iVar0 = 0;
	iVar1 = -705539859;
	if (_0x86afc343cf7f0b34(iVar1, 2873.64f, 1199.61f, 44.2277f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 0);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 0);
	}
	iVar0 = 0;
	iVar1 = -988268728;
	if (_0x86afc343cf7f0b34(iVar1, -2175.864f, -2533.982f, 65.70784f, &iVar0))
	{
		_0xe6c5e2125eb210c1(iVar1, iVar0, 1);
		_0x3abfa128f5bf5a70(iVar1, iVar0, 1);
	}
}

void func_311(int iParam0)
{
	bVar0 = func_762(iParam0);
	if (func_763(iParam0, 32) || func_763(iParam0, 16384))
	{
		if (func_764(iParam0))
		{
			_0xa230a5dde12ed374((*Global_1425371)[iParam0]->f_1);
			(*Global_1425371)[iParam0]->f_1 = 0;
			func_765(iParam0, 32);
		}
		if (!_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
		{
			func_765(iParam0, 32);
		}
	}
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		iVar1 = _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
		if (does_entity_exist(iVar1))
		{
			if (!func_763(iParam0, 8192))
			{
				func_309(iParam0, 8192);
				if (func_763(iParam0, 4) && !func_763(iParam0, 512))
				{
					set_vehicle_is_considered_by_player(iVar1, false);
				}
			}
		}
		else
		{
			func_765(iParam0, 8192);
		}
		if (!Global_1430221->f_1 && !_does_thread_exist(&Global_1392581))
		{
			if ((!bVar0 && !func_763(iParam0, 8192)) && !func_312(iParam0))
			{
				if (func_763(iParam0, 65536))
				{
					if (func_766(Global_1392581->f_4[iParam0], 300f))
					{
						func_765(iParam0, 65536);
						func_765(iParam0, 2);
					}
					else
					{
						func_309(iParam0, 2);
					}
				}
				iVar2 = func_340(func_156());
				if (func_767(iVar2, -415041951, 1) && !func_763(iParam0, 2))
				{
					if (!func_763(iParam0, 16))
					{
						func_309(iParam0, 2);
					}
				}
				else if ((iVar2 != -1 && !func_767(iVar2, -415041951, 1)) && func_763(iParam0, 2))
				{
					if (!func_763(iParam0, 16) && !func_763(iParam0, 65536))
					{
						func_765(iParam0, 2);
					}
				}
			}
		}
		if (!Global_1430221->f_1)
		{
			if (func_763(iParam0, 2))
			{
				if (func_768(Global_35, _0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), 1) > 200f || is_screen_faded_out())
				{
					if (_0x0fddee66e3465726((*Global_1425371)[iParam0]->f_1))
					{
						_0x0d5fdf0d36fa10cd((*Global_1425371)[iParam0]->f_1);
					}
				}
			}
			else if (!func_763(iParam0, 2) && !Global_1430221->f_4)
			{
				if (_0x0fddee66e3465726((*Global_1425371)[iParam0]->f_1))
				{
					_0xe682002db1f30669((*Global_1425371)[iParam0]->f_1);
				}
			}
		}
		if (!func_763(iParam0, 1) && func_769(iParam0))
		{
			_0xa230a5dde12ed374((*Global_1425371)[iParam0]->f_1);
			(*Global_1425371)[iParam0]->f_1 = 0;
			func_765(iParam0, 16);
			return;
		}
		if (func_770(iParam0) && !bVar0)
		{
			vVar3 = { func_771(iParam0) };
		}
		if (func_185(vVar3))
		{
			vVar3 = { _0x1e8a921112891651((*Global_1425371)[iParam0]->f_1) };
		}
		iVar6 = _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
		if (bVar0)
		{
			if (does_entity_exist(Global_35) && does_entity_exist(iVar6))
			{
				if (is_ped_in_vehicle(Global_35, iVar6, false) || is_ped_on_specific_vehicle(Global_35, iVar6))
				{
					set_ped_max_move_blend_ratio(Global_35, 1f);
				}
			}
		}
		if (func_763(iParam0, 64))
		{
			if (func_443(Global_36, vVar3) > 500f)
			{
				Global_40.f_11029[iParam0]->f_1 = { vVar3 };
				func_308(iParam0, func_772(iParam0));
				func_765(iParam0, 64);
			}
		}
		func_773();
		if (func_774(iParam0))
		{
			_0xcaff2c9747103c02((*Global_1425371)[iParam0]->f_1, &iVar7, &iVar8);
			if (iVar7 == 0)
			{
				return;
			}
			if (!func_763(iParam0, 32768) && !func_763(iParam0, 16))
			{
				if (does_entity_exist(Global_35) && does_entity_exist(iVar6))
				{
					if (func_645(vVar3, 2697.358f, -1468.154f, 45.0602f) < 140625f)
					{
						_0x15206e88ff7617df((*Global_1425371)[iParam0]->f_1, 2.5f);
					}
					else
					{
						_0x15206e88ff7617df((*Global_1425371)[iParam0]->f_1, func_775(iParam0));
					}
				}
			}
			if ((*Global_1425371)[iParam0]->f_2 != iVar7 || (*Global_1425371)[iParam0]->f_2.f_1 != iVar8)
			{
				vVar9 = { _0x785639d89f8451ab(iVar7, iVar8) };
				func_776(iParam0, iVar7, iVar8, vVar9);
			}
			vVar9 = { (*Global_1425371)[iParam0]->f_2.f_2 };
			if ((*Global_1425371)[iParam0]->f_2 != 0)
			{
				if (func_443(vVar3, vVar9) < IntToFloat(func_777(iParam0)))
				{
					if (_0x2c46d2a591d8c322((*Global_1425371)[iParam0]->f_2, (*Global_1425371)[iParam0]->f_2.f_1, 1))
					{
						_0x3abfa128f5bf5a70((*Global_1425371)[iParam0]->f_2, (*Global_1425371)[iParam0]->f_2.f_1, (*Global_1425371)[iParam0]->f_2.f_5);
					}
				}
			}
		}
		return;
	}
	if (!func_763(iParam0, 1) && func_769(iParam0))
	{
		return;
	}
	if (func_778(iParam0) == 0)
	{
		return;
	}
	if (func_763(iParam0, 16384))
	{
		return;
	}
	if (!func_779(iParam0))
	{
		(*Global_1425371)[iParam0]->f_1 = 0;
	}
}

bool func_312(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 7:
			return true;
	}
	return false;
}

void func_313()
{
	if (!func_780())
	{
		func_309(6, 2);
		func_309(7, 2);
	}
	else
	{
		func_765(6, 2);
		func_765(7, 2);
	}
}

void func_314()
{
	iVar0[0] = 6;
	iVar0[1] = 7;
	iVar0[2] = 5;
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[&iVar0[iVar4]]->f_1))
		{
			iVar5 = _0x6e585a616abb8401((*Global_1425371)[&iVar0[iVar4]]->f_1);
			if (does_entity_exist(iVar5))
			{
				if (!func_763(&(iVar0[iVar4]), 8192))
				{
					func_309(&(iVar0[iVar4]), 8192);
					if (func_763(&(iVar0[iVar4]), 4) && !func_763(&(iVar0[iVar4]), 512))
					{
						set_vehicle_is_considered_by_player(iVar5, false);
					}
				}
			}
			else
			{
				func_765(&(iVar0[iVar4]), 8192);
			}
		}
		iVar4++;
	}
}

int func_315(int iParam0)
{
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		_0xa230a5dde12ed374((*Global_1425371)[iParam0]->f_1);
		(*Global_1425371)[iParam0]->f_1 = 0;
	}
	return 1;
}

bool func_316(int iParam0)
{
	if (_0xf94692eb9dc15d74(&(Global_43806[iParam0]), 0))
	{
		return true;
	}
	if (Global_43806[iParam0]->f_4)
	{
		return true;
	}
	if (!is_thread_active(Global_43806[iParam0]->f_1, false))
	{
		if (!_is_anim_scene_started(&(Global_43806[iParam0]), false))
		{
			return true;
		}
		if ((Global_43806[iParam0]->f_2 != 0 && Global_43806[iParam0]->f_3 > 0) && (get_game_timer() - Global_43806[iParam0]->f_2) >= Global_43806[iParam0]->f_3)
		{
			return true;
		}
	}
	return false;
}

void func_317()
{
	if (Global_43837 <= 0)
	{
		return;
	}
	if (Global_43837 == 1)
	{
		func_781();
		return;
	}
	Var0.f_2 = -1;
	iVar6 = (Global_43837 - 1);
	while (iVar6 >= 0)
	{
		if (_does_anim_scene_exist(&(Global_43806[iVar6])))
		{
			iVar7 = 0;
			while (iVar7 <= (iVar6 - 1))
			{
				if (!_does_anim_scene_exist(&(Global_43806[iVar7])))
				{
					*Global_43806[iVar7] = { *Global_43806[iVar6] };
					*Global_43806[iVar6] = { Var0 };
					Global_43837 = (Global_43837 - 1);
					return;
				}
				iVar7++;
			}
		}
		iVar6 = (iVar6 + -1);
	}
}

bool func_318()
{
	return _unlock_is_unlocked(99890643);
}

bool func_319(int iParam0, bool bParam1)
{
	if (func_36() != -1)
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

bool func_320(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_486((*Global_1347702)[iParam0]->f_15, 1);
}

int func_321(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_376((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_486((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_376((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_486((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_782(iParam0);
}

bool func_322(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_323()
{
	if (is_screen_faded_out())
	{
		return;
	}
	iVar0 = -1;
	fVar5 = 0f;
	fVar6 = 0f;
	iVar1 = 0;
	while (iVar1 < Global_40.f_450)
	{
		iVar7 = &Global_40.f_450[iVar1];
		if (func_327(iVar7))
		{
			if ((*Global_1347702)[iVar7]->f_13 & 16384 != 0)
			{
				Jump @245; //curOff = 77
			}
			else if ((*Global_1347702)[iVar7]->f_14 & 2 == 0)
			{
				Jump @245; //curOff = 99
			}
			else if ((*Global_1347702)[iVar7]->f_13 & 4096 == 0)
			{
				Jump @245; //curOff = 123
			}
			else
			{
				if ((*Global_1347702)[iVar7]->f_12 & 1048576 != 0 && (*Global_1347702)[iVar7]->f_13 & 2048 == 0)
				{
					vVar2 = { func_783(iVar7) };
				}
				else
				{
					vVar2 = { func_784(iVar7) };
				}
				fVar5 = vdist2(Global_36, vVar2);
				if (fVar5 <= 1225f)
				{
					if (fVar6 == 0f || fVar5 < fVar6)
					{
						fVar6 = fVar5;
						iVar0 = iVar7;
					}
				}
			}
		}
		iVar1++;
	}
	if (func_327(iVar0))
	{
		fVar5 = vdist2(func_784(iVar0), Global_36);
		bVar8 = does_blip_exist((*Global_1347702)[iVar0]->f_37);
		func_785(iVar0, bVar8, fVar5);
	}
}

bool func_324()
{
	return Global_1572864->f_8 != -1;
}

int func_325()
{
	return func_787(func_786());
}

int func_326()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_327(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_328(int iParam0)
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
		iVar0 = func_788(iParam0);
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

void func_329(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam0 != iParam2)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 8192 == 0)
		{
			if (func_789(iParam0))
			{
				func_790(iParam0, 0, 1, 1, 1);
				if ((*Global_1347702)[iParam0]->f_13 & 16384 == 0)
				{
					func_791(iParam0, 1);
					func_792(&((*Global_1347702)[iParam0]->f_13), 16384);
				}
				return;
			}
			else if ((*Global_1347702)[iParam0]->f_13 & 16384 != 0)
			{
				func_791(iParam0, 0);
				func_793(&((*Global_1347702)[iParam0]->f_13), 16384);
			}
		}
	}
	func_794(iParam0);
	vVar0 = { func_784(iParam0) };
	fVar3 = vdist2(Global_36, vVar0);
	bVar4 = does_blip_exist((*Global_1347702)[iParam0]->f_37);
	if (iParam0 != iParam2 && (*Global_1347702)[iParam0]->f_13 & 8192 == 0)
	{
		if (func_486((*Global_1347702)[iParam0]->f_15, 1))
		{
			func_790(iParam0, 1, 1, 1, 1);
			return;
		}
		if ((*Global_1347702)[iParam0]->f_14 & 2 != 0)
		{
			func_795(iParam0, bVar4, vVar0);
			func_785(iParam0, bVar4, fVar3);
		}
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			return;
		}
		if (func_796(iParam0))
		{
			func_797(iParam0);
		}
		else
		{
			return;
		}
		if ((*Global_1347702)[iParam0]->f_12 & 8388608 != 0)
		{
			iVar5 = func_798(iParam0);
			if (iVar5 != -1)
			{
				if (func_300(iVar5))
				{
					if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
					{
						if ((*Global_1347702)[iParam0]->f_14 & 32768 == 0)
						{
							func_799(iParam0, 32768);
							func_795(iParam0, bVar4, vVar0);
						}
					}
					func_790(iParam0, 0, 0, 0, 0);
					return;
				}
				else if (func_800(iVar5))
				{
					if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
					{
						if ((*Global_1347702)[iParam0]->f_14 & 32768 == 0)
						{
							func_799(iParam0, 32768);
							func_795(iParam0, bVar4, vVar0);
						}
					}
					func_790(iParam0, 0, 0, 0, 0);
					return;
				}
			}
		}
		if ((*Global_1347702)[iParam0]->f_45 != -1)
		{
			if (func_300((*Global_1347702)[iParam0]->f_45))
			{
				if ((*Global_1347702)[iParam0]->f_14 & 2048 == 0)
				{
					func_799(iParam0, 2048);
					func_795(iParam0, bVar4, vVar0);
				}
				func_790(iParam0, 0, 0, 0, 0);
				return;
			}
		}
		if ((*Global_1347702)[iParam0]->f_46 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 268435456 == 0)
			{
				if (!func_801(iParam3, (*Global_1347702)[iParam0]->f_46))
				{
					func_790(iParam0, 0, 1, 0, 0);
					return;
				}
			}
		}
		if ((*Global_1347702)[iParam0]->f_12 & 65536 == 0 && !func_802(iParam0))
		{
			func_803(iParam0);
			func_790(iParam0, 0, 0, 0, 0);
			return;
		}
		else if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			fVar6 = func_804(iParam0);
			if (iParam0 == 155)
			{
				fVar6 = (*Global_1347702)[iParam0]->f_19;
			}
			if (fVar3 > (fVar6 * fVar6) || !func_805(iParam0, bParam1))
			{
				func_793(&((*Global_1347702)[iParam0]->f_13), 16);
				if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					func_806(iParam0, vVar0, 1, 0);
				}
				else
				{
					func_807(iParam0);
				}
			}
			else
			{
				return;
			}
		}
		if (!bParam1)
		{
			if (!func_808(iParam0, 0, 1, 1, 1))
			{
				if ((*Global_1347702)[iParam0]->f_14 & 2 == 0)
				{
					func_790(iParam0, 0, 1, 0, 1);
				}
				return;
			}
		}
		if (func_805(iParam0, bParam1))
		{
			if (iParam0 == 24 && func_809((*Global_1347702)[24]->f_15) == 1)
			{
				if (fVar3 >= (250f * 250f))
				{
					func_810((*Global_1347702)[24]->f_15, 0);
				}
				else
				{
					fVar6 = 250f;
				}
			}
			else if (iParam0 == 134 && func_575((*Global_1347702)[134]->f_15) == 1)
			{
				if (fVar3 >= (350f * 350f))
				{
					func_811((*Global_1347702)[134]->f_15, 0);
				}
				else
				{
					fVar6 = 350f;
				}
			}
			else
			{
				fVar6 = func_804(iParam0);
			}
			if (fVar3 < (fVar6 * fVar6))
			{
				iVar7 = 1;
				if (func_812((*Global_1347702)[iParam0]->f_13, 32) || func_812((*Global_1347702)[iParam0]->f_13, 4096))
				{
					iVar7 = 0;
				}
				func_790(iParam0, 0, iVar7, 0, 0);
				return;
			}
			else
			{
				if ((*Global_1347702)[iParam0]->f_12 & 16384 != 0)
				{
					func_813(&((*Global_1347702)[iParam0]->f_12), 16384);
				}
				if ((*Global_1347702)[iParam0]->f_14 & 2 != 0)
				{
					func_814(iParam0, !bVar4, 1);
				}
			}
		}
		else
		{
			if ((*Global_1347702)[iParam0]->f_12 & 16384 != 0)
			{
				func_813(&((*Global_1347702)[iParam0]->f_12), 16384);
			}
			if ((*Global_1347702)[iParam0]->f_14 & 2 != 0)
			{
				func_814(iParam0, !bVar4, 1);
			}
		}
	}
	else if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		return;
	}
	fVar8 = func_815(iParam0);
	if ((fVar3 < (fVar8 * fVar8) || (*Global_1347702)[iParam0]->f_12 & 32 != 0) || iParam0 == iParam2)
	{
		if (!func_328((*Global_1347702)[iParam0]->f_15))
		{
			func_816((*Global_1347702)[iParam0]->f_15);
			if (func_817(iParam0, &iVar10, &iVar9))
			{
				func_818(iVar10, iVar9, 1, 977356591, -1);
			}
		}
		else if (func_819((*Global_1347702)[iParam0]->f_14, 2))
		{
		}
		else if (!bVar4)
		{
			func_806(iParam0, vVar0, 1, 0);
		}
	}
	else
	{
		if (func_328((*Global_1347702)[iParam0]->f_15))
		{
			if (fVar3 > ((*Global_1347702)[iParam0]->f_17 * (*Global_1347702)[iParam0]->f_17))
			{
				func_755((*Global_1347702)[iParam0]->f_15);
				func_820(iParam0, 0, 1, 1, 32);
			}
		}
		if ((*Global_1347702)[iParam0]->f_14 & 2 != 0)
		{
			func_814(iParam0, bVar4, 1);
			bVar4 = true;
		}
		if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_36 != -1822497728)
		{
			if (!bVar4)
			{
				func_806(iParam0, vVar0, 1, 0);
			}
		}
		else if (bVar4)
		{
			func_821(iParam0, 0);
		}
		if ((*Global_1347702)[iParam0]->f_12 & 1024 != 0)
		{
			func_813(&((*Global_1347702)[iParam0]->f_12), 1024);
		}
	}
}

void func_330()
{
	if (is_ped_injured(Global_35))
	{
		return;
	}
	bVar0 = ((does_entity_exist(Global_1935630->f_40) || is_ped_in_any_vehicle(Global_35, false)) || is_ped_in_any_train(Global_35));
	if (&Global_1911667 == 0)
	{
		bVar2 = func_564();
		if (func_157(player_id(), 1, 1, 1))
		{
			if (Global_1935630->f_23)
			{
				if (_0x717da2281df90855(player_id()) > 0f)
				{
					fVar3 = 25f;
				}
				else
				{
					fVar3 = 40f;
				}
				iVar4 = create_itemset(true);
				if (is_itemset_valid(iVar4))
				{
					_0x0c392db374655176(Global_36, fVar3, iVar4);
					if (get_itemset_size(iVar4) <= 0)
					{
						iVar1 = 2080113112;
					}
					else
					{
						iVar1 = -1943724816;
					}
					destroy_itemset(iVar4);
				}
			}
			else
			{
				iVar1 = -1986542417;
			}
		}
		else if (func_822())
		{
			iVar1 = -547506804;
		}
		else if ((Global_1572887->f_12 == -1 && bVar2) && func_824(func_823()))
		{
			iVar1 = -789269373;
		}
		else if (bVar2)
		{
			if (bVar0)
			{
				iVar1 = func_825(get_entity_speed(Global_35), 1, -280612398, 642254004);
			}
			else
			{
				iVar1 = func_825(get_entity_speed(Global_35), 0, -117986897, -2024960240);
			}
		}
		else if (bVar0)
		{
			iVar1 = func_825(get_entity_speed(Global_35), 1, 455950385, -1943724816);
		}
		else
		{
			iVar1 = func_825(get_entity_speed(Global_35), 0, -189036996, 347777538);
		}
	}
	else
	{
		iVar1 = &Global_1911667;
	}
	if (iVar1 == iLocal_39)
	{
		return;
	}
	iLocal_39 = iVar1;
	_0x9c113883487fd53c(iLocal_39, 0);
}

void func_331()
{
	if (Global_1935496->f_124)
	{
		Global_1935496->f_33 = _databinding_add_data_container_from_path("", "quick_select_satchel_shortcut");
		Global_1935496->f_33.f_1 = _databinding_add_data_bool(Global_1935496->f_33, "isAccessible", 1);
	}
}

void func_332()
{
	if (func_36() == -1 && Global_1935496->f_123)
	{
		Global_1935496->f_35 = _databinding_add_data_container_from_path("", "quick_select_journal_shortcut");
		Global_1935496->f_35.f_1 = _databinding_add_data_bool(Global_1935496->f_35, "isAccessible", 1);
		Global_1935496->f_39 = _databinding_add_data_bool(Global_1935496->f_35, "hasNewEntry", func_333());
	}
}

bool func_333()
{
	return func_189(Global_40.f_12019.f_42, 1);
}

void func_334()
{
	func_826("JOURNAL_NOTIFICATION", "ITEMTYPE_TEXTURES", -54790869, 0, 109029619, 0, 0, 0, 1);
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		func_291(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_191(&(Global_40.f_12019.f_42), 1);
	}
}

void func_336()
{
	if (func_36() == -1)
	{
		Global_1935496->f_37 = _databinding_add_data_container_from_path("", "quick_select_crafting_menu_shortcut");
		Global_1935496->f_37.f_1 = _databinding_add_data_bool(Global_1935496->f_37, "isAccessible", 1);
	}
}

void func_337()
{
	if (((Global_1935496->f_30 == -1838434463 || Global_1935496->f_30 == 2019377485) && !func_100(601)) && !func_380())
	{
		if (func_150(15))
		{
		}
		else if (func_827(0, 1))
		{
			func_382("TF_KIT_CAMP", 10000, 0, 0, 0, 1);
		}
		func_828(601);
	}
}

void func_338(var uParam0)
{
	(*(*uParam0)[0])[0]->f_1 = 4;
	(*(*uParam0)[0])[0]->f_40 = 5;
	(*(*uParam0)[0])[0]->f_42 = 1;
	(*(*uParam0)[0])[0]->f_43 = 1;
	(*(*uParam0)[0])[0]->f_46 = 5;
	(*(*uParam0)[0])[0]->f_45 = 3;
	(*(*uParam0)[0])[0]->f_27[0] = 1;
	(*(*uParam0)[0])[0]->f_27[1] = 2;
	(*(*uParam0)[0])[0]->f_27[2] = 3;
	(*(*uParam0)[0])[0]->f_27[3] = 4;
	(*(*uParam0)[0])[0]->f_27[4] = 5;
	(*(*uParam0)[0])[0]->f_27[5] = 6;
	(*(*uParam0)[0])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[0])[0], 32, 1);
	func_829((*(*uParam0)[0])[0], 8, 1);
	func_829((*(*uParam0)[0])[0], 2, 1);
	func_830(&((*(*uParam0)[0])[0]->f_19), 0);
	func_830(&((*(*uParam0)[0])[0]->f_20), 5);
	(*(*uParam0)[0])[1]->f_1 = 4;
	(*(*uParam0)[0])[1]->f_40 = 5;
	(*(*uParam0)[0])[1]->f_42 = 1;
	(*(*uParam0)[0])[1]->f_43 = 1;
	(*(*uParam0)[0])[1]->f_46 = 5;
	(*(*uParam0)[0])[1]->f_45 = 3;
	(*(*uParam0)[0])[1]->f_27[0] = 1;
	(*(*uParam0)[0])[1]->f_27[1] = 2;
	(*(*uParam0)[0])[1]->f_27[2] = 3;
	(*(*uParam0)[0])[1]->f_27[3] = 4;
	(*(*uParam0)[0])[1]->f_27[4] = 5;
	(*(*uParam0)[0])[1]->f_27[5] = 6;
	(*(*uParam0)[0])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[0])[1], 32, 1);
	func_829((*(*uParam0)[0])[1], 8, 1);
	func_829((*(*uParam0)[0])[1], 2, 1);
	func_830(&((*(*uParam0)[0])[1]->f_19), 0);
	func_830(&((*(*uParam0)[0])[1]->f_20), 5);
	(*(*uParam0)[0])[2]->f_1 = 4;
	(*(*uParam0)[0])[2]->f_40 = 5;
	(*(*uParam0)[0])[2]->f_42 = 1;
	(*(*uParam0)[0])[2]->f_43 = 1;
	(*(*uParam0)[0])[2]->f_46 = 5;
	(*(*uParam0)[0])[2]->f_45 = 3;
	(*(*uParam0)[0])[2]->f_27[0] = 1;
	(*(*uParam0)[0])[2]->f_27[1] = 2;
	(*(*uParam0)[0])[2]->f_27[2] = 3;
	(*(*uParam0)[0])[2]->f_27[3] = 4;
	(*(*uParam0)[0])[2]->f_27[4] = 5;
	(*(*uParam0)[0])[2]->f_27[5] = 6;
	(*(*uParam0)[0])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[0])[2], 32, 1);
	func_829((*(*uParam0)[0])[2], 8, 1);
	func_829((*(*uParam0)[0])[2], 2, 1);
	func_830(&((*(*uParam0)[0])[2]->f_19), 0);
	func_830(&((*(*uParam0)[0])[2]->f_20), 5);
	(*(*uParam0)[0])[3]->f_1 = 4;
	(*(*uParam0)[0])[3]->f_40 = 5;
	(*(*uParam0)[0])[3]->f_42 = 1;
	(*(*uParam0)[0])[3]->f_43 = 1;
	(*(*uParam0)[0])[3]->f_46 = 5;
	(*(*uParam0)[0])[3]->f_45 = 3;
	(*(*uParam0)[0])[3]->f_27[0] = 1;
	(*(*uParam0)[0])[3]->f_27[1] = 2;
	(*(*uParam0)[0])[3]->f_27[2] = 3;
	(*(*uParam0)[0])[3]->f_27[3] = 4;
	(*(*uParam0)[0])[3]->f_27[4] = 5;
	(*(*uParam0)[0])[3]->f_27[5] = 6;
	(*(*uParam0)[0])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[0])[3], 32, 1);
	func_829((*(*uParam0)[0])[3], 8, 1);
	func_829((*(*uParam0)[0])[3], 2, 1);
	func_830(&((*(*uParam0)[0])[3]->f_19), 0);
	func_830(&((*(*uParam0)[0])[3]->f_20), 5);
	(*(*uParam0)[0])[4]->f_1 = 4;
	(*(*uParam0)[0])[4]->f_40 = 5;
	(*(*uParam0)[0])[4]->f_42 = 1;
	(*(*uParam0)[0])[4]->f_43 = 1;
	(*(*uParam0)[0])[4]->f_46 = 5;
	(*(*uParam0)[0])[4]->f_45 = 3;
	(*(*uParam0)[0])[4]->f_27[0] = 1;
	(*(*uParam0)[0])[4]->f_27[1] = 2;
	(*(*uParam0)[0])[4]->f_27[2] = 3;
	(*(*uParam0)[0])[4]->f_27[3] = 4;
	(*(*uParam0)[0])[4]->f_27[4] = 5;
	(*(*uParam0)[0])[4]->f_27[5] = 6;
	(*(*uParam0)[0])[4]->f_27[6] = 0;
	func_829((*(*uParam0)[0])[4], 32, 1);
	func_829((*(*uParam0)[0])[4], 8, 1);
	func_829((*(*uParam0)[0])[4], 2, 1);
	func_830(&((*(*uParam0)[0])[4]->f_19), 0);
	func_830(&((*(*uParam0)[0])[4]->f_20), 5);
	(*(*uParam0)[0])[5]->f_1 = 4;
	(*(*uParam0)[0])[5]->f_40 = 5;
	(*(*uParam0)[0])[5]->f_42 = 1;
	(*(*uParam0)[0])[5]->f_43 = 1;
	(*(*uParam0)[0])[5]->f_45 = 3;
	(*(*uParam0)[0])[5]->f_27[0] = 1;
	(*(*uParam0)[0])[5]->f_27[1] = 2;
	(*(*uParam0)[0])[5]->f_27[2] = 3;
	(*(*uParam0)[0])[5]->f_27[3] = 4;
	(*(*uParam0)[0])[5]->f_27[4] = 5;
	(*(*uParam0)[0])[5]->f_27[5] = 6;
	(*(*uParam0)[0])[5]->f_27[6] = 0;
	func_829((*(*uParam0)[0])[5], 32, 1);
	func_829((*(*uParam0)[0])[5], 8, 1);
	func_829((*(*uParam0)[0])[5], 2, 1);
	func_830(&((*(*uParam0)[0])[5]->f_19), 0);
	func_830(&((*(*uParam0)[0])[5]->f_20), 5);
	(*(*uParam0)[1])[0]->f_1 = 4;
	(*(*uParam0)[1])[0]->f_16 = 60;
	(*(*uParam0)[1])[0]->f_2[0] = 28;
	(*(*uParam0)[1])[0]->f_40 = 2;
	(*(*uParam0)[1])[0]->f_42 = 1;
	(*(*uParam0)[1])[0]->f_44 = 7;
	(*(*uParam0)[1])[0]->f_45 = 0;
	(*(*uParam0)[1])[0]->f_27[0] = 1;
	(*(*uParam0)[1])[0]->f_27[1] = 2;
	(*(*uParam0)[1])[0]->f_27[2] = 3;
	(*(*uParam0)[1])[0]->f_27[3] = 4;
	(*(*uParam0)[1])[0]->f_27[4] = 5;
	(*(*uParam0)[1])[0]->f_27[5] = 6;
	(*(*uParam0)[1])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[1])[0], 8, 1);
	func_829((*(*uParam0)[1])[0], 2, 1);
	func_830(&((*(*uParam0)[1])[0]->f_19), 8);
	func_830(&((*(*uParam0)[1])[0]->f_20), 18);
	(*(*uParam0)[1])[1]->f_1 = 77;
	(*(*uParam0)[1])[1]->f_40 = 2;
	(*(*uParam0)[1])[1]->f_42 = 1;
	(*(*uParam0)[1])[1]->f_43 = 1;
	(*(*uParam0)[1])[1]->f_44 = 7;
	(*(*uParam0)[1])[1]->f_45 = 0;
	(*(*uParam0)[1])[1]->f_27[0] = 1;
	(*(*uParam0)[1])[1]->f_27[1] = 2;
	(*(*uParam0)[1])[1]->f_27[2] = 3;
	(*(*uParam0)[1])[1]->f_27[3] = 4;
	(*(*uParam0)[1])[1]->f_27[4] = 5;
	(*(*uParam0)[1])[1]->f_27[5] = 6;
	(*(*uParam0)[1])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[1])[1], 8, 1);
	func_829((*(*uParam0)[1])[1], 2, 1);
	func_830(&((*(*uParam0)[1])[1]->f_19), 8);
	func_830(&((*(*uParam0)[1])[1]->f_20), 18);
	(*(*uParam0)[2])[0]->f_1 = 60;
	(*(*uParam0)[2])[0]->f_40 = 4;
	(*(*uParam0)[2])[0]->f_42 = 1;
	(*(*uParam0)[2])[0]->f_43 = 1;
	(*(*uParam0)[2])[0]->f_44 = 7;
	(*(*uParam0)[2])[0]->f_45 = 0;
	(*(*uParam0)[2])[0]->f_46 = 4;
	(*(*uParam0)[2])[0]->f_12 = 75;
	(*(*uParam0)[2])[0]->f_13 = 16777216;
	(*(*uParam0)[2])[0]->f_14 = 75;
	(*(*uParam0)[2])[0]->f_15 = 15;
	(*(*uParam0)[2])[0]->f_27[0] = 1;
	(*(*uParam0)[2])[0]->f_27[1] = 2;
	(*(*uParam0)[2])[0]->f_27[2] = 3;
	(*(*uParam0)[2])[0]->f_27[3] = 4;
	(*(*uParam0)[2])[0]->f_27[4] = 5;
	(*(*uParam0)[2])[0]->f_27[5] = 6;
	(*(*uParam0)[2])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[2])[0], 8, 1);
	func_829((*(*uParam0)[2])[0], 2, 1);
	func_830(&((*(*uParam0)[2])[0]->f_19), 0);
	func_830(&((*(*uParam0)[2])[0]->f_20), 23);
	(*(*uParam0)[2])[1]->f_1 = 60;
	(*(*uParam0)[2])[1]->f_40 = 4;
	(*(*uParam0)[2])[1]->f_42 = 1;
	(*(*uParam0)[2])[1]->f_43 = 1;
	(*(*uParam0)[2])[1]->f_44 = 7;
	(*(*uParam0)[2])[1]->f_45 = 0;
	(*(*uParam0)[2])[1]->f_46 = 4;
	(*(*uParam0)[2])[1]->f_12 = 75;
	(*(*uParam0)[2])[1]->f_13 = 16777216;
	(*(*uParam0)[2])[1]->f_14 = 75;
	(*(*uParam0)[2])[1]->f_15 = 15;
	(*(*uParam0)[2])[1]->f_27[0] = 1;
	(*(*uParam0)[2])[1]->f_27[1] = 2;
	(*(*uParam0)[2])[1]->f_27[2] = 3;
	(*(*uParam0)[2])[1]->f_27[3] = 4;
	(*(*uParam0)[2])[1]->f_27[4] = 5;
	(*(*uParam0)[2])[1]->f_27[5] = 6;
	(*(*uParam0)[2])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[2])[1], 8, 1);
	func_829((*(*uParam0)[2])[1], 2, 1);
	func_830(&((*(*uParam0)[2])[1]->f_19), 0);
	func_830(&((*(*uParam0)[2])[1]->f_20), 23);
	(*(*uParam0)[3])[0]->f_1 = 4;
	(*(*uParam0)[3])[0]->f_16 = 60;
	(*(*uParam0)[3])[0]->f_40 = 2;
	(*(*uParam0)[3])[0]->f_42 = 1;
	(*(*uParam0)[3])[0]->f_44 = 7;
	(*(*uParam0)[3])[0]->f_45 = 0;
	(*(*uParam0)[3])[0]->f_27[0] = 1;
	(*(*uParam0)[3])[0]->f_27[1] = 2;
	(*(*uParam0)[3])[0]->f_27[2] = 3;
	(*(*uParam0)[3])[0]->f_27[3] = 4;
	(*(*uParam0)[3])[0]->f_27[4] = 5;
	(*(*uParam0)[3])[0]->f_27[5] = 6;
	(*(*uParam0)[3])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[3])[0], 8, 1);
	func_829((*(*uParam0)[3])[0], 2, 1);
	func_830(&((*(*uParam0)[3])[0]->f_19), 8);
	func_830(&((*(*uParam0)[3])[0]->f_20), 18);
	(*(*uParam0)[3])[1]->f_1 = 4;
	(*(*uParam0)[3])[1]->f_16 = 60;
	(*(*uParam0)[3])[1]->f_40 = 2;
	(*(*uParam0)[3])[1]->f_42 = 1;
	(*(*uParam0)[3])[1]->f_44 = 7;
	(*(*uParam0)[3])[1]->f_45 = 0;
	(*(*uParam0)[3])[1]->f_27[0] = 1;
	(*(*uParam0)[3])[1]->f_27[1] = 2;
	(*(*uParam0)[3])[1]->f_27[2] = 3;
	(*(*uParam0)[3])[1]->f_27[3] = 4;
	(*(*uParam0)[3])[1]->f_27[4] = 5;
	(*(*uParam0)[3])[1]->f_27[5] = 6;
	(*(*uParam0)[3])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[3])[1], 8, 1);
	func_829((*(*uParam0)[3])[1], 2, 1);
	func_830(&((*(*uParam0)[3])[1]->f_19), 8);
	func_830(&((*(*uParam0)[3])[1]->f_20), 18);
	(*(*uParam0)[3])[2]->f_1 = 60;
	(*(*uParam0)[3])[2]->f_40 = 2;
	(*(*uParam0)[3])[2]->f_42 = 1;
	(*(*uParam0)[3])[2]->f_43 = 1;
	(*(*uParam0)[3])[2]->f_44 = 7;
	(*(*uParam0)[3])[2]->f_45 = 0;
	(*(*uParam0)[3])[2]->f_27[0] = 1;
	(*(*uParam0)[3])[2]->f_27[1] = 2;
	(*(*uParam0)[3])[2]->f_27[2] = 3;
	(*(*uParam0)[3])[2]->f_27[3] = 4;
	(*(*uParam0)[3])[2]->f_27[4] = 5;
	(*(*uParam0)[3])[2]->f_27[5] = 6;
	(*(*uParam0)[3])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[3])[2], 8, 1);
	func_829((*(*uParam0)[3])[2], 2, 1);
	func_830(&((*(*uParam0)[3])[2]->f_19), 8);
	func_830(&((*(*uParam0)[3])[2]->f_20), 18);
	(*(*uParam0)[3])[3]->f_1 = 77;
	(*(*uParam0)[3])[3]->f_40 = 2;
	(*(*uParam0)[3])[3]->f_42 = 1;
	(*(*uParam0)[3])[3]->f_43 = 1;
	(*(*uParam0)[3])[3]->f_44 = 7;
	(*(*uParam0)[3])[3]->f_45 = 0;
	(*(*uParam0)[3])[3]->f_27[0] = 1;
	(*(*uParam0)[3])[3]->f_27[1] = 2;
	(*(*uParam0)[3])[3]->f_27[2] = 3;
	(*(*uParam0)[3])[3]->f_27[3] = 4;
	(*(*uParam0)[3])[3]->f_27[4] = 5;
	(*(*uParam0)[3])[3]->f_27[5] = 6;
	(*(*uParam0)[3])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[3])[3], 8, 1);
	func_829((*(*uParam0)[3])[3], 2, 1);
	func_830(&((*(*uParam0)[3])[3]->f_19), 8);
	func_830(&((*(*uParam0)[3])[3]->f_20), 18);
	(*(*uParam0)[4])[0]->f_1 = 4;
	(*(*uParam0)[4])[0]->f_40 = 3;
	(*(*uParam0)[4])[0]->f_42 = 7;
	(*(*uParam0)[4])[0]->f_44 = 7;
	(*(*uParam0)[4])[0]->f_27[0] = 1;
	(*(*uParam0)[4])[0]->f_27[1] = 2;
	(*(*uParam0)[4])[0]->f_27[2] = 3;
	(*(*uParam0)[4])[0]->f_27[3] = 4;
	(*(*uParam0)[4])[0]->f_27[4] = 5;
	(*(*uParam0)[4])[0]->f_27[5] = 6;
	(*(*uParam0)[4])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[4])[0], 8, 1);
	func_829((*(*uParam0)[4])[0], 2, 1);
	func_830(&((*(*uParam0)[4])[0]->f_19), 0);
	func_830(&((*(*uParam0)[4])[0]->f_20), 23);
	(*(*uParam0)[4])[1]->f_1 = 60;
	(*(*uParam0)[4])[1]->f_40 = 3;
	(*(*uParam0)[4])[1]->f_42 = 7;
	(*(*uParam0)[4])[1]->f_43 = 7;
	(*(*uParam0)[4])[1]->f_44 = 7;
	(*(*uParam0)[4])[1]->f_27[0] = 1;
	(*(*uParam0)[4])[1]->f_27[1] = 2;
	(*(*uParam0)[4])[1]->f_27[2] = 3;
	(*(*uParam0)[4])[1]->f_27[3] = 4;
	(*(*uParam0)[4])[1]->f_27[4] = 5;
	(*(*uParam0)[4])[1]->f_27[5] = 6;
	(*(*uParam0)[4])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[4])[1], 8, 1);
	func_829((*(*uParam0)[4])[1], 2, 1);
	func_830(&((*(*uParam0)[4])[1]->f_19), 0);
	func_830(&((*(*uParam0)[4])[1]->f_20), 23);
	(*(*uParam0)[6])[0]->f_1 = 77;
	(*(*uParam0)[6])[0]->f_40 = 3;
	(*(*uParam0)[6])[0]->f_21 = 1;
	(*(*uParam0)[6])[0]->f_22 = 1;
	(*(*uParam0)[6])[0]->f_27[0] = 1;
	(*(*uParam0)[6])[0]->f_27[1] = 2;
	(*(*uParam0)[6])[0]->f_27[2] = 3;
	(*(*uParam0)[6])[0]->f_27[3] = 4;
	(*(*uParam0)[6])[0]->f_27[4] = 5;
	(*(*uParam0)[6])[0]->f_27[5] = 6;
	(*(*uParam0)[6])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[6])[0], 8, 1);
	func_829((*(*uParam0)[6])[0], 2, 1);
	func_830(&((*(*uParam0)[6])[0]->f_19), 0);
	func_830(&((*(*uParam0)[6])[0]->f_20), 23);
	(*(*uParam0)[6])[1]->f_1 = 77;
	(*(*uParam0)[6])[1]->f_40 = 3;
	(*(*uParam0)[6])[1]->f_42 = 0;
	(*(*uParam0)[6])[1]->f_44 = 0;
	(*(*uParam0)[6])[1]->f_27[0] = 1;
	(*(*uParam0)[6])[1]->f_27[1] = 2;
	(*(*uParam0)[6])[1]->f_27[2] = 3;
	(*(*uParam0)[6])[1]->f_27[3] = 4;
	(*(*uParam0)[6])[1]->f_27[4] = 5;
	(*(*uParam0)[6])[1]->f_27[5] = 6;
	(*(*uParam0)[6])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[6])[1], 8, 1);
	func_829((*(*uParam0)[6])[1], 2, 1);
	func_829((*(*uParam0)[6])[1], 512, 1);
	func_830(&((*(*uParam0)[6])[1]->f_19), 0);
	func_830(&((*(*uParam0)[6])[1]->f_20), 23);
	(*(*uParam0)[7])[0]->f_1 = 4;
	(*(*uParam0)[7])[0]->f_16 = 60;
	(*(*uParam0)[7])[0]->f_40 = 3;
	(*(*uParam0)[7])[0]->f_42 = 3;
	(*(*uParam0)[7])[0]->f_44 = 7;
	(*(*uParam0)[7])[0]->f_27[0] = 1;
	(*(*uParam0)[7])[0]->f_27[1] = 2;
	(*(*uParam0)[7])[0]->f_27[2] = 3;
	(*(*uParam0)[7])[0]->f_27[3] = 4;
	(*(*uParam0)[7])[0]->f_27[4] = 5;
	(*(*uParam0)[7])[0]->f_27[5] = 6;
	(*(*uParam0)[7])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[7])[0], 8, 1);
	func_829((*(*uParam0)[7])[0], 2, 1);
	func_830(&((*(*uParam0)[7])[0]->f_19), 0);
	func_830(&((*(*uParam0)[7])[0]->f_20), 23);
	(*(*uParam0)[7])[1]->f_1 = 4;
	(*(*uParam0)[7])[1]->f_16 = 60;
	(*(*uParam0)[7])[1]->f_40 = 3;
	(*(*uParam0)[7])[1]->f_42 = 3;
	(*(*uParam0)[7])[1]->f_44 = 7;
	(*(*uParam0)[7])[1]->f_27[0] = 1;
	(*(*uParam0)[7])[1]->f_27[1] = 2;
	(*(*uParam0)[7])[1]->f_27[2] = 3;
	(*(*uParam0)[7])[1]->f_27[3] = 4;
	(*(*uParam0)[7])[1]->f_27[4] = 5;
	(*(*uParam0)[7])[1]->f_27[5] = 6;
	(*(*uParam0)[7])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[7])[1], 8, 1);
	func_829((*(*uParam0)[7])[1], 2, 1);
	func_830(&((*(*uParam0)[7])[1]->f_19), 0);
	func_830(&((*(*uParam0)[7])[1]->f_20), 23);
	(*(*uParam0)[7])[2]->f_1 = 4;
	(*(*uParam0)[7])[2]->f_16 = 60;
	(*(*uParam0)[7])[2]->f_40 = 3;
	(*(*uParam0)[7])[2]->f_42 = 3;
	(*(*uParam0)[7])[2]->f_44 = 7;
	(*(*uParam0)[7])[2]->f_27[0] = 1;
	(*(*uParam0)[7])[2]->f_27[1] = 2;
	(*(*uParam0)[7])[2]->f_27[2] = 3;
	(*(*uParam0)[7])[2]->f_27[3] = 4;
	(*(*uParam0)[7])[2]->f_27[4] = 5;
	(*(*uParam0)[7])[2]->f_27[5] = 6;
	(*(*uParam0)[7])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[7])[2], 8, 1);
	func_829((*(*uParam0)[7])[2], 2, 1);
	func_830(&((*(*uParam0)[7])[2]->f_19), 0);
	func_830(&((*(*uParam0)[7])[2]->f_20), 23);
	(*(*uParam0)[7])[3]->f_1 = 60;
	(*(*uParam0)[7])[3]->f_40 = 3;
	(*(*uParam0)[7])[3]->f_42 = 3;
	(*(*uParam0)[7])[3]->f_44 = 7;
	(*(*uParam0)[7])[3]->f_27[0] = 1;
	(*(*uParam0)[7])[3]->f_27[1] = 2;
	(*(*uParam0)[7])[3]->f_27[2] = 3;
	(*(*uParam0)[7])[3]->f_27[3] = 4;
	(*(*uParam0)[7])[3]->f_27[4] = 5;
	(*(*uParam0)[7])[3]->f_27[5] = 6;
	(*(*uParam0)[7])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[7])[3], 8, 1);
	func_829((*(*uParam0)[7])[3], 2, 1);
	func_830(&((*(*uParam0)[7])[3]->f_19), 0);
	func_830(&((*(*uParam0)[7])[3]->f_20), 23);
	(*(*uParam0)[7])[4]->f_1 = 60;
	(*(*uParam0)[7])[4]->f_40 = 3;
	(*(*uParam0)[7])[4]->f_42 = 3;
	(*(*uParam0)[7])[4]->f_44 = 7;
	(*(*uParam0)[7])[4]->f_27[0] = 1;
	(*(*uParam0)[7])[4]->f_27[1] = 2;
	(*(*uParam0)[7])[4]->f_27[2] = 3;
	(*(*uParam0)[7])[4]->f_27[3] = 4;
	(*(*uParam0)[7])[4]->f_27[4] = 5;
	(*(*uParam0)[7])[4]->f_27[5] = 6;
	(*(*uParam0)[7])[4]->f_27[6] = 0;
	func_829((*(*uParam0)[7])[4], 8, 1);
	func_829((*(*uParam0)[7])[4], 2, 1);
	func_830(&((*(*uParam0)[7])[4]->f_19), 0);
	func_830(&((*(*uParam0)[7])[4]->f_20), 23);
	(*(*uParam0)[5])[0]->f_17 = 55;
	(*(*uParam0)[5])[0]->f_40 = 4;
	(*(*uParam0)[5])[0]->f_42 = 0;
	(*(*uParam0)[5])[0]->f_44 = 0;
	(*(*uParam0)[5])[0]->f_27[0] = 1;
	(*(*uParam0)[5])[0]->f_27[1] = 2;
	(*(*uParam0)[5])[0]->f_27[2] = 3;
	(*(*uParam0)[5])[0]->f_27[3] = 4;
	(*(*uParam0)[5])[0]->f_27[4] = 5;
	(*(*uParam0)[5])[0]->f_27[5] = 6;
	(*(*uParam0)[5])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[5])[0], 8, 1);
	func_829((*(*uParam0)[5])[0], 2, 0);
	func_830(&((*(*uParam0)[5])[0]->f_19), 0);
	func_830(&((*(*uParam0)[5])[0]->f_20), 23);
	(*(*uParam0)[5])[1]->f_17 = 55;
	(*(*uParam0)[5])[1]->f_40 = 4;
	(*(*uParam0)[5])[1]->f_42 = 0;
	(*(*uParam0)[5])[1]->f_44 = 0;
	(*(*uParam0)[5])[1]->f_27[0] = 1;
	(*(*uParam0)[5])[1]->f_27[1] = 2;
	(*(*uParam0)[5])[1]->f_27[2] = 3;
	(*(*uParam0)[5])[1]->f_27[3] = 4;
	(*(*uParam0)[5])[1]->f_27[4] = 5;
	(*(*uParam0)[5])[1]->f_27[5] = 6;
	(*(*uParam0)[5])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[5])[1], 8, 1);
	func_829((*(*uParam0)[5])[1], 2, 0);
	func_830(&((*(*uParam0)[5])[1]->f_19), 0);
	func_830(&((*(*uParam0)[5])[1]->f_20), 23);
	(*(*uParam0)[8])[0]->f_1 = 4;
	(*(*uParam0)[8])[0]->f_2[0] = 34;
	(*(*uParam0)[8])[0]->f_40 = 2;
	(*(*uParam0)[8])[0]->f_42 = 1;
	(*(*uParam0)[8])[0]->f_44 = 7;
	(*(*uParam0)[8])[0]->f_45 = 0;
	(*(*uParam0)[8])[0]->f_27[0] = 1;
	(*(*uParam0)[8])[0]->f_27[1] = 2;
	(*(*uParam0)[8])[0]->f_27[2] = 3;
	(*(*uParam0)[8])[0]->f_27[3] = 4;
	(*(*uParam0)[8])[0]->f_27[4] = 5;
	(*(*uParam0)[8])[0]->f_27[5] = 6;
	(*(*uParam0)[8])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[8])[0], 8, 1);
	func_829((*(*uParam0)[8])[0], 2, 1);
	func_830(&((*(*uParam0)[8])[0]->f_19), 8);
	func_830(&((*(*uParam0)[8])[0]->f_20), 18);
	(*(*uParam0)[8])[1]->f_1 = 4;
	(*(*uParam0)[8])[1]->f_2[0] = 34;
	(*(*uParam0)[8])[1]->f_40 = 2;
	(*(*uParam0)[8])[1]->f_42 = 1;
	(*(*uParam0)[8])[1]->f_43 = 2;
	(*(*uParam0)[8])[1]->f_44 = 7;
	(*(*uParam0)[8])[1]->f_45 = 0;
	(*(*uParam0)[8])[1]->f_27[0] = 1;
	(*(*uParam0)[8])[1]->f_27[1] = 2;
	(*(*uParam0)[8])[1]->f_27[2] = 3;
	(*(*uParam0)[8])[1]->f_27[3] = 4;
	(*(*uParam0)[8])[1]->f_27[4] = 5;
	(*(*uParam0)[8])[1]->f_27[5] = 6;
	(*(*uParam0)[8])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[8])[1], 8, 1);
	func_829((*(*uParam0)[8])[1], 2, 1);
	func_830(&((*(*uParam0)[8])[1]->f_19), 8);
	func_830(&((*(*uParam0)[8])[1]->f_20), 18);
	(*(*uParam0)[9])[0]->f_1 = 6;
	(*(*uParam0)[9])[0]->f_16 = 60;
	(*(*uParam0)[9])[0]->f_40 = 4;
	(*(*uParam0)[9])[0]->f_42 = 1;
	(*(*uParam0)[9])[0]->f_43 = 0;
	(*(*uParam0)[9])[0]->f_44 = 7;
	(*(*uParam0)[9])[0]->f_45 = 0;
	(*(*uParam0)[9])[0]->f_27[0] = 1;
	(*(*uParam0)[9])[0]->f_27[1] = 2;
	(*(*uParam0)[9])[0]->f_27[2] = 3;
	(*(*uParam0)[9])[0]->f_27[3] = 4;
	(*(*uParam0)[9])[0]->f_27[4] = 5;
	(*(*uParam0)[9])[0]->f_27[5] = 6;
	(*(*uParam0)[9])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[9])[0], 32, 1);
	func_829((*(*uParam0)[9])[0], 8, 1);
	func_829((*(*uParam0)[9])[0], 2, 1);
	func_829((*(*uParam0)[9])[0], 512, 1);
	func_830(&((*(*uParam0)[9])[0]->f_19), 0);
	func_830(&((*(*uParam0)[9])[0]->f_20), 23);
	(*(*uParam0)[9])[1]->f_1 = 60;
	(*(*uParam0)[9])[1]->f_40 = 4;
	(*(*uParam0)[9])[1]->f_42 = 1;
	(*(*uParam0)[9])[1]->f_43 = 0;
	(*(*uParam0)[9])[1]->f_44 = 7;
	(*(*uParam0)[9])[1]->f_45 = 0;
	(*(*uParam0)[9])[1]->f_27[0] = 1;
	(*(*uParam0)[9])[1]->f_27[1] = 2;
	(*(*uParam0)[9])[1]->f_27[2] = 3;
	(*(*uParam0)[9])[1]->f_27[3] = 4;
	(*(*uParam0)[9])[1]->f_27[4] = 5;
	(*(*uParam0)[9])[1]->f_27[5] = 6;
	(*(*uParam0)[9])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[9])[1], 32, 1);
	func_829((*(*uParam0)[9])[1], 8, 1);
	func_829((*(*uParam0)[9])[1], 2, 1);
	func_829((*(*uParam0)[9])[1], 512, 1);
	func_830(&((*(*uParam0)[9])[1]->f_19), 0);
	func_830(&((*(*uParam0)[9])[1]->f_20), 23);
	(*(*uParam0)[10])[0]->f_1 = 4;
	(*(*uParam0)[10])[0]->f_16 = 60;
	(*(*uParam0)[10])[0]->f_40 = 2;
	(*(*uParam0)[10])[0]->f_42 = 1;
	(*(*uParam0)[10])[0]->f_44 = 7;
	(*(*uParam0)[10])[0]->f_45 = 0;
	(*(*uParam0)[10])[0]->f_27[0] = 1;
	(*(*uParam0)[10])[0]->f_27[1] = 2;
	(*(*uParam0)[10])[0]->f_27[2] = 3;
	(*(*uParam0)[10])[0]->f_27[3] = 4;
	(*(*uParam0)[10])[0]->f_27[4] = 5;
	(*(*uParam0)[10])[0]->f_27[5] = 6;
	(*(*uParam0)[10])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[10])[0], 8, 1);
	func_829((*(*uParam0)[10])[0], 2, 1);
	func_830(&((*(*uParam0)[10])[0]->f_19), 8);
	func_830(&((*(*uParam0)[10])[0]->f_20), 18);
	(*(*uParam0)[10])[1]->f_1 = 4;
	(*(*uParam0)[10])[1]->f_16 = 60;
	(*(*uParam0)[10])[1]->f_40 = 2;
	(*(*uParam0)[10])[1]->f_42 = 1;
	(*(*uParam0)[10])[1]->f_43 = 1;
	(*(*uParam0)[10])[1]->f_44 = 7;
	(*(*uParam0)[10])[1]->f_45 = 0;
	(*(*uParam0)[10])[1]->f_27[0] = 1;
	(*(*uParam0)[10])[1]->f_27[1] = 2;
	(*(*uParam0)[10])[1]->f_27[2] = 3;
	(*(*uParam0)[10])[1]->f_27[3] = 4;
	(*(*uParam0)[10])[1]->f_27[4] = 5;
	(*(*uParam0)[10])[1]->f_27[5] = 6;
	(*(*uParam0)[10])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[10])[1], 8, 1);
	func_829((*(*uParam0)[10])[1], 2, 1);
	func_830(&((*(*uParam0)[10])[1]->f_19), 8);
	func_830(&((*(*uParam0)[10])[1]->f_20), 18);
	(*(*uParam0)[10])[2]->f_1 = 60;
	(*(*uParam0)[10])[2]->f_40 = 2;
	(*(*uParam0)[10])[2]->f_42 = 1;
	(*(*uParam0)[10])[2]->f_44 = 7;
	(*(*uParam0)[10])[2]->f_45 = 0;
	(*(*uParam0)[10])[2]->f_27[0] = 1;
	(*(*uParam0)[10])[2]->f_27[1] = 2;
	(*(*uParam0)[10])[2]->f_27[2] = 3;
	(*(*uParam0)[10])[2]->f_27[3] = 4;
	(*(*uParam0)[10])[2]->f_27[4] = 5;
	(*(*uParam0)[10])[2]->f_27[5] = 6;
	(*(*uParam0)[10])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[10])[2], 8, 1);
	func_829((*(*uParam0)[10])[2], 2, 1);
	func_830(&((*(*uParam0)[10])[2]->f_19), 8);
	func_830(&((*(*uParam0)[10])[2]->f_20), 18);
	(*(*uParam0)[10])[3]->f_1 = 60;
	(*(*uParam0)[10])[3]->f_40 = 2;
	(*(*uParam0)[10])[3]->f_42 = 1;
	(*(*uParam0)[10])[3]->f_43 = 1;
	(*(*uParam0)[10])[3]->f_44 = 7;
	(*(*uParam0)[10])[3]->f_45 = 0;
	(*(*uParam0)[10])[3]->f_27[0] = 1;
	(*(*uParam0)[10])[3]->f_27[1] = 2;
	(*(*uParam0)[10])[3]->f_27[2] = 3;
	(*(*uParam0)[10])[3]->f_27[3] = 4;
	(*(*uParam0)[10])[3]->f_27[4] = 5;
	(*(*uParam0)[10])[3]->f_27[5] = 6;
	(*(*uParam0)[10])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[10])[3], 8, 1);
	func_829((*(*uParam0)[10])[3], 2, 1);
	func_830(&((*(*uParam0)[10])[3]->f_19), 8);
	func_830(&((*(*uParam0)[10])[3]->f_20), 18);
	(*(*uParam0)[11])[0]->f_1 = 4;
	(*(*uParam0)[11])[0]->f_16 = 60;
	(*(*uParam0)[11])[0]->f_2[0] = 72;
	(*(*uParam0)[11])[0]->f_2[1] = 17;
	(*(*uParam0)[11])[0]->f_8[0] = 57;
	(*(*uParam0)[11])[0]->f_40 = 3;
	(*(*uParam0)[11])[0]->f_42 = 7;
	(*(*uParam0)[11])[0]->f_44 = 7;
	(*(*uParam0)[11])[0]->f_45 = 0;
	(*(*uParam0)[11])[0]->f_27[0] = 1;
	(*(*uParam0)[11])[0]->f_27[1] = 2;
	(*(*uParam0)[11])[0]->f_27[2] = 3;
	(*(*uParam0)[11])[0]->f_27[3] = 4;
	(*(*uParam0)[11])[0]->f_27[4] = 5;
	(*(*uParam0)[11])[0]->f_27[5] = 6;
	(*(*uParam0)[11])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[11])[0], 8, 1);
	func_829((*(*uParam0)[11])[0], 2, 1);
	func_830(&((*(*uParam0)[11])[0]->f_19), 8);
	func_830(&((*(*uParam0)[11])[0]->f_20), 20);
	(*(*uParam0)[11])[1]->f_1 = 60;
	(*(*uParam0)[11])[1]->f_2[0] = 72;
	(*(*uParam0)[11])[1]->f_2[1] = 17;
	(*(*uParam0)[11])[1]->f_8[0] = 8;
	(*(*uParam0)[11])[1]->f_8[1] = 57;
	(*(*uParam0)[11])[1]->f_40 = 3;
	(*(*uParam0)[11])[1]->f_42 = 7;
	(*(*uParam0)[11])[1]->f_44 = 7;
	(*(*uParam0)[11])[1]->f_45 = 0;
	(*(*uParam0)[11])[1]->f_27[0] = 1;
	(*(*uParam0)[11])[1]->f_27[1] = 2;
	(*(*uParam0)[11])[1]->f_27[2] = 3;
	(*(*uParam0)[11])[1]->f_27[3] = 4;
	(*(*uParam0)[11])[1]->f_27[4] = 5;
	(*(*uParam0)[11])[1]->f_27[5] = 6;
	(*(*uParam0)[11])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[11])[1], 8, 1);
	func_829((*(*uParam0)[11])[1], 2, 1);
	func_830(&((*(*uParam0)[11])[1]->f_19), 8);
	func_830(&((*(*uParam0)[11])[1]->f_20), 20);
	(*(*uParam0)[12])[0]->f_1 = 4;
	(*(*uParam0)[12])[0]->f_16 = 60;
	(*(*uParam0)[12])[0]->f_40 = 4;
	(*(*uParam0)[12])[0]->f_42 = 1;
	(*(*uParam0)[12])[0]->f_44 = 7;
	(*(*uParam0)[12])[0]->f_45 = 0;
	(*(*uParam0)[12])[0]->f_27[0] = 1;
	(*(*uParam0)[12])[0]->f_27[1] = 2;
	(*(*uParam0)[12])[0]->f_27[2] = 3;
	(*(*uParam0)[12])[0]->f_27[3] = 4;
	(*(*uParam0)[12])[0]->f_27[4] = 5;
	(*(*uParam0)[12])[0]->f_27[5] = 6;
	(*(*uParam0)[12])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[12])[0], 8, 1);
	func_829((*(*uParam0)[12])[0], 32, 1);
	func_829((*(*uParam0)[12])[0], 512, 1);
	func_830(&((*(*uParam0)[12])[0]->f_19), 0);
	func_830(&((*(*uParam0)[12])[0]->f_20), 23);
	(*(*uParam0)[12])[1]->f_1 = 4;
	(*(*uParam0)[12])[1]->f_16 = 60;
	(*(*uParam0)[12])[1]->f_40 = 2;
	(*(*uParam0)[12])[1]->f_42 = 1;
	(*(*uParam0)[12])[1]->f_43 = 3;
	(*(*uParam0)[12])[1]->f_44 = 7;
	(*(*uParam0)[12])[1]->f_45 = 0;
	(*(*uParam0)[12])[1]->f_27[0] = 1;
	(*(*uParam0)[12])[1]->f_27[1] = 2;
	(*(*uParam0)[12])[1]->f_27[2] = 3;
	(*(*uParam0)[12])[1]->f_27[3] = 4;
	(*(*uParam0)[12])[1]->f_27[4] = 5;
	(*(*uParam0)[12])[1]->f_27[5] = 6;
	(*(*uParam0)[12])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[12])[1], 8, 1);
	func_829((*(*uParam0)[12])[1], 2, 1);
	func_829((*(*uParam0)[12])[1], 32, 1);
	func_830(&((*(*uParam0)[12])[1]->f_19), 0);
	func_830(&((*(*uParam0)[12])[1]->f_20), 23);
	(*(*uParam0)[12])[2]->f_1 = 60;
	(*(*uParam0)[12])[2]->f_40 = 4;
	(*(*uParam0)[12])[2]->f_42 = 1;
	(*(*uParam0)[12])[2]->f_44 = 7;
	(*(*uParam0)[12])[2]->f_43 = 3;
	(*(*uParam0)[12])[2]->f_45 = 0;
	(*(*uParam0)[12])[2]->f_27[0] = 1;
	(*(*uParam0)[12])[2]->f_27[1] = 2;
	(*(*uParam0)[12])[2]->f_27[2] = 3;
	(*(*uParam0)[12])[2]->f_27[3] = 4;
	(*(*uParam0)[12])[2]->f_27[4] = 5;
	(*(*uParam0)[12])[2]->f_27[5] = 6;
	(*(*uParam0)[12])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[12])[2], 8, 1);
	func_829((*(*uParam0)[12])[2], 32, 1);
	func_829((*(*uParam0)[12])[2], 512, 1);
	func_830(&((*(*uParam0)[12])[2]->f_19), 0);
	func_830(&((*(*uParam0)[12])[2]->f_20), 23);
	(*(*uParam0)[12])[3]->f_1 = 60;
	(*(*uParam0)[12])[3]->f_40 = 2;
	(*(*uParam0)[12])[3]->f_42 = 1;
	(*(*uParam0)[12])[3]->f_43 = 3;
	(*(*uParam0)[12])[3]->f_44 = 7;
	(*(*uParam0)[12])[3]->f_45 = 0;
	(*(*uParam0)[12])[3]->f_27[0] = 1;
	(*(*uParam0)[12])[3]->f_27[1] = 2;
	(*(*uParam0)[12])[3]->f_27[2] = 3;
	(*(*uParam0)[12])[3]->f_27[3] = 4;
	(*(*uParam0)[12])[3]->f_27[4] = 5;
	(*(*uParam0)[12])[3]->f_27[5] = 6;
	(*(*uParam0)[12])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[12])[3], 8, 1);
	func_829((*(*uParam0)[12])[3], 2, 1);
	func_829((*(*uParam0)[12])[3], 32, 1);
	func_830(&((*(*uParam0)[12])[3]->f_19), 0);
	func_830(&((*(*uParam0)[12])[3]->f_20), 23);
	(*(*uParam0)[13])[0]->f_1 = 4;
	(*(*uParam0)[13])[0]->f_2[0] = 5;
	(*(*uParam0)[13])[0]->f_2[1] = 69;
	(*(*uParam0)[13])[0]->f_35[0] = -423064657;
	(*(*uParam0)[13])[0]->f_35[1] = 557524588;
	(*(*uParam0)[13])[0]->f_35[2] = 1590600971;
	(*(*uParam0)[13])[0]->f_40 = 4;
	(*(*uParam0)[13])[0]->f_42 = 1;
	(*(*uParam0)[13])[0]->f_44 = 7;
	(*(*uParam0)[13])[0]->f_45 = 0;
	(*(*uParam0)[13])[0]->f_27[0] = 1;
	(*(*uParam0)[13])[0]->f_27[1] = 2;
	(*(*uParam0)[13])[0]->f_27[2] = 3;
	(*(*uParam0)[13])[0]->f_27[3] = 4;
	(*(*uParam0)[13])[0]->f_27[4] = 5;
	(*(*uParam0)[13])[0]->f_27[5] = 6;
	(*(*uParam0)[13])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[13])[0], 8, 1);
	func_829((*(*uParam0)[13])[0], 2, 1);
	func_829((*(*uParam0)[13])[0], 2048, 1);
	func_829((*(*uParam0)[13])[0], 4096, 1);
	func_830(&((*(*uParam0)[13])[0]->f_19), 12);
	func_830(&((*(*uParam0)[13])[0]->f_20), 6);
	(*(*uParam0)[14])[0]->f_1 = 4;
	(*(*uParam0)[14])[0]->f_16 = 60;
	(*(*uParam0)[14])[0]->f_40 = 2;
	(*(*uParam0)[14])[0]->f_42 = 1;
	(*(*uParam0)[14])[0]->f_44 = 7;
	(*(*uParam0)[14])[0]->f_45 = 0;
	(*(*uParam0)[14])[0]->f_27[0] = 1;
	(*(*uParam0)[14])[0]->f_27[1] = 2;
	(*(*uParam0)[14])[0]->f_27[2] = 3;
	(*(*uParam0)[14])[0]->f_27[3] = 4;
	(*(*uParam0)[14])[0]->f_27[4] = 5;
	(*(*uParam0)[14])[0]->f_27[5] = 6;
	(*(*uParam0)[14])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[14])[0], 8, 1);
	func_829((*(*uParam0)[14])[0], 2, 1);
	func_830(&((*(*uParam0)[14])[0]->f_19), 8);
	func_830(&((*(*uParam0)[14])[0]->f_20), 19);
	(*(*uParam0)[14])[1]->f_1 = 4;
	(*(*uParam0)[14])[1]->f_16 = 60;
	(*(*uParam0)[14])[1]->f_40 = 2;
	(*(*uParam0)[14])[1]->f_42 = 1;
	(*(*uParam0)[14])[1]->f_43 = 2;
	(*(*uParam0)[14])[1]->f_44 = 7;
	(*(*uParam0)[14])[1]->f_45 = 0;
	(*(*uParam0)[14])[1]->f_27[0] = 1;
	(*(*uParam0)[14])[1]->f_27[1] = 2;
	(*(*uParam0)[14])[1]->f_27[2] = 3;
	(*(*uParam0)[14])[1]->f_27[3] = 4;
	(*(*uParam0)[14])[1]->f_27[4] = 5;
	(*(*uParam0)[14])[1]->f_27[5] = 6;
	(*(*uParam0)[14])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[14])[1], 8, 1);
	func_829((*(*uParam0)[14])[1], 2, 1);
	func_830(&((*(*uParam0)[14])[1]->f_19), 8);
	func_830(&((*(*uParam0)[14])[1]->f_20), 19);
	(*(*uParam0)[14])[2]->f_1 = 4;
	(*(*uParam0)[14])[2]->f_16 = 60;
	(*(*uParam0)[14])[2]->f_40 = 2;
	(*(*uParam0)[14])[2]->f_42 = 1;
	(*(*uParam0)[14])[2]->f_43 = 2;
	(*(*uParam0)[14])[2]->f_44 = 7;
	(*(*uParam0)[14])[2]->f_45 = 0;
	(*(*uParam0)[14])[2]->f_27[0] = 1;
	(*(*uParam0)[14])[2]->f_27[1] = 2;
	(*(*uParam0)[14])[2]->f_27[2] = 3;
	(*(*uParam0)[14])[2]->f_27[3] = 4;
	(*(*uParam0)[14])[2]->f_27[4] = 5;
	(*(*uParam0)[14])[2]->f_27[5] = 6;
	(*(*uParam0)[14])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[14])[2], 8, 1);
	func_829((*(*uParam0)[14])[2], 2, 1);
	func_830(&((*(*uParam0)[14])[2]->f_19), 8);
	func_830(&((*(*uParam0)[14])[2]->f_20), 19);
	(*(*uParam0)[14])[3]->f_1 = 60;
	(*(*uParam0)[14])[3]->f_40 = 2;
	(*(*uParam0)[14])[3]->f_42 = 1;
	(*(*uParam0)[14])[3]->f_43 = 2;
	(*(*uParam0)[14])[3]->f_44 = 7;
	(*(*uParam0)[14])[3]->f_45 = 0;
	(*(*uParam0)[14])[3]->f_27[0] = 1;
	(*(*uParam0)[14])[3]->f_27[1] = 2;
	(*(*uParam0)[14])[3]->f_27[2] = 3;
	(*(*uParam0)[14])[3]->f_27[3] = 4;
	(*(*uParam0)[14])[3]->f_27[4] = 5;
	(*(*uParam0)[14])[3]->f_27[5] = 6;
	(*(*uParam0)[14])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[14])[3], 8, 1);
	func_829((*(*uParam0)[14])[3], 2, 1);
	func_830(&((*(*uParam0)[14])[3]->f_19), 8);
	func_830(&((*(*uParam0)[14])[3]->f_20), 19);
	(*(*uParam0)[15])[0]->f_1 = 4;
	(*(*uParam0)[15])[0]->f_42 = 3;
	(*(*uParam0)[15])[0]->f_40 = 3;
	(*(*uParam0)[15])[0]->f_43 = 2;
	(*(*uParam0)[15])[0]->f_44 = 7;
	(*(*uParam0)[15])[0]->f_45 = 0;
	(*(*uParam0)[15])[0]->f_27[0] = 1;
	(*(*uParam0)[15])[0]->f_27[1] = 2;
	(*(*uParam0)[15])[0]->f_27[2] = 3;
	(*(*uParam0)[15])[0]->f_27[3] = 4;
	(*(*uParam0)[15])[0]->f_27[4] = 5;
	(*(*uParam0)[15])[0]->f_27[5] = 6;
	(*(*uParam0)[15])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[15])[0], 8, 1);
	func_829((*(*uParam0)[15])[0], 2, 1);
	func_830(&((*(*uParam0)[15])[0]->f_19), 6);
	func_830(&((*(*uParam0)[15])[0]->f_20), 18);
	(*(*uParam0)[15])[1]->f_1 = 4;
	(*(*uParam0)[15])[1]->f_40 = 3;
	(*(*uParam0)[15])[1]->f_42 = 3;
	(*(*uParam0)[15])[1]->f_43 = 2;
	(*(*uParam0)[15])[1]->f_44 = 7;
	(*(*uParam0)[15])[1]->f_45 = 0;
	(*(*uParam0)[15])[1]->f_27[0] = 1;
	(*(*uParam0)[15])[1]->f_27[1] = 2;
	(*(*uParam0)[15])[1]->f_27[2] = 3;
	(*(*uParam0)[15])[1]->f_27[3] = 4;
	(*(*uParam0)[15])[1]->f_27[4] = 5;
	(*(*uParam0)[15])[1]->f_27[5] = 6;
	(*(*uParam0)[15])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[15])[1], 8, 1);
	func_829((*(*uParam0)[15])[1], 2, 1);
	func_830(&((*(*uParam0)[15])[1]->f_19), 6);
	func_830(&((*(*uParam0)[15])[1]->f_20), 18);
	(*(*uParam0)[15])[2]->f_1 = 4;
	(*(*uParam0)[15])[2]->f_40 = 3;
	(*(*uParam0)[15])[2]->f_42 = 3;
	(*(*uParam0)[15])[2]->f_43 = 2;
	(*(*uParam0)[15])[2]->f_44 = 7;
	(*(*uParam0)[15])[2]->f_45 = 0;
	(*(*uParam0)[15])[2]->f_27[0] = 1;
	(*(*uParam0)[15])[2]->f_27[1] = 2;
	(*(*uParam0)[15])[2]->f_27[2] = 3;
	(*(*uParam0)[15])[2]->f_27[3] = 4;
	(*(*uParam0)[15])[2]->f_27[4] = 5;
	(*(*uParam0)[15])[2]->f_27[5] = 6;
	(*(*uParam0)[15])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[15])[2], 8, 1);
	func_829((*(*uParam0)[15])[2], 2, 1);
	func_830(&((*(*uParam0)[15])[2]->f_19), 6);
	func_830(&((*(*uParam0)[15])[2]->f_20), 18);
	(*(*uParam0)[15])[3]->f_1 = 60;
	(*(*uParam0)[15])[3]->f_40 = 3;
	(*(*uParam0)[15])[3]->f_42 = 3;
	(*(*uParam0)[15])[3]->f_43 = 2;
	(*(*uParam0)[15])[3]->f_44 = 7;
	(*(*uParam0)[15])[3]->f_45 = 0;
	(*(*uParam0)[15])[3]->f_27[0] = 1;
	(*(*uParam0)[15])[3]->f_27[1] = 2;
	(*(*uParam0)[15])[3]->f_27[2] = 3;
	(*(*uParam0)[15])[3]->f_27[3] = 4;
	(*(*uParam0)[15])[3]->f_27[4] = 5;
	(*(*uParam0)[15])[3]->f_27[5] = 6;
	(*(*uParam0)[15])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[15])[3], 8, 1);
	func_829((*(*uParam0)[15])[3], 2, 1);
	func_830(&((*(*uParam0)[15])[3]->f_19), 6);
	func_830(&((*(*uParam0)[15])[3]->f_20), 18);
	(*(*uParam0)[16])[0]->f_1 = 4;
	(*(*uParam0)[16])[0]->f_2[0] = 27;
	(*(*uParam0)[16])[0]->f_40 = 4;
	(*(*uParam0)[16])[0]->f_42 = 1;
	(*(*uParam0)[16])[0]->f_44 = 7;
	(*(*uParam0)[16])[0]->f_45 = 0;
	(*(*uParam0)[16])[0]->f_27[0] = 1;
	(*(*uParam0)[16])[0]->f_27[1] = 2;
	(*(*uParam0)[16])[0]->f_27[2] = 3;
	(*(*uParam0)[16])[0]->f_27[3] = 4;
	(*(*uParam0)[16])[0]->f_27[4] = 5;
	(*(*uParam0)[16])[0]->f_27[5] = 6;
	(*(*uParam0)[16])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[16])[0], 8, 1);
	func_829((*(*uParam0)[16])[0], 2, 1);
	func_829((*(*uParam0)[16])[0], 4096, 1);
	func_830(&((*(*uParam0)[16])[0]->f_19), 9);
	func_830(&((*(*uParam0)[16])[0]->f_20), 21);
	(*(*uParam0)[16])[1]->f_1 = 4;
	(*(*uParam0)[16])[1]->f_2[0] = 27;
	(*(*uParam0)[16])[1]->f_40 = 4;
	(*(*uParam0)[16])[1]->f_42 = 1;
	(*(*uParam0)[16])[1]->f_43 = 2;
	(*(*uParam0)[16])[1]->f_44 = 7;
	(*(*uParam0)[16])[1]->f_45 = 0;
	(*(*uParam0)[16])[1]->f_27[0] = 1;
	(*(*uParam0)[16])[1]->f_27[1] = 2;
	(*(*uParam0)[16])[1]->f_27[2] = 3;
	(*(*uParam0)[16])[1]->f_27[3] = 4;
	(*(*uParam0)[16])[1]->f_27[4] = 5;
	(*(*uParam0)[16])[1]->f_27[5] = 6;
	(*(*uParam0)[16])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[16])[1], 8, 1);
	func_829((*(*uParam0)[16])[1], 2, 1);
	func_829((*(*uParam0)[16])[1], 4096, 1);
	func_830(&((*(*uParam0)[16])[1]->f_19), 9);
	func_830(&((*(*uParam0)[16])[1]->f_20), 21);
	(*(*uParam0)[16])[2]->f_1 = 4;
	(*(*uParam0)[16])[2]->f_2[0] = 27;
	(*(*uParam0)[16])[2]->f_40 = 4;
	(*(*uParam0)[16])[2]->f_42 = 1;
	(*(*uParam0)[16])[2]->f_43 = 2;
	(*(*uParam0)[16])[2]->f_44 = 7;
	(*(*uParam0)[16])[2]->f_45 = 0;
	(*(*uParam0)[16])[2]->f_27[0] = 1;
	(*(*uParam0)[16])[2]->f_27[1] = 2;
	(*(*uParam0)[16])[2]->f_27[2] = 3;
	(*(*uParam0)[16])[2]->f_27[3] = 4;
	(*(*uParam0)[16])[2]->f_27[4] = 5;
	(*(*uParam0)[16])[2]->f_27[5] = 6;
	(*(*uParam0)[16])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[16])[2], 8, 1);
	func_829((*(*uParam0)[16])[2], 2, 1);
	func_829((*(*uParam0)[16])[2], 4096, 1);
	func_830(&((*(*uParam0)[16])[2]->f_19), 9);
	func_830(&((*(*uParam0)[16])[2]->f_20), 21);
	(*(*uParam0)[16])[3]->f_1 = 4;
	(*(*uParam0)[16])[3]->f_2[0] = 27;
	(*(*uParam0)[16])[3]->f_40 = 4;
	(*(*uParam0)[16])[3]->f_42 = 1;
	(*(*uParam0)[16])[3]->f_43 = 2;
	(*(*uParam0)[16])[3]->f_44 = 7;
	(*(*uParam0)[16])[3]->f_45 = 0;
	(*(*uParam0)[16])[3]->f_27[0] = 1;
	(*(*uParam0)[16])[3]->f_27[1] = 2;
	(*(*uParam0)[16])[3]->f_27[2] = 3;
	(*(*uParam0)[16])[3]->f_27[3] = 4;
	(*(*uParam0)[16])[3]->f_27[4] = 5;
	(*(*uParam0)[16])[3]->f_27[5] = 6;
	(*(*uParam0)[16])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[16])[3], 8, 1);
	func_829((*(*uParam0)[16])[3], 2, 1);
	func_829((*(*uParam0)[16])[3], 4096, 1);
	func_830(&((*(*uParam0)[16])[3]->f_19), 9);
	func_830(&((*(*uParam0)[16])[3]->f_20), 21);
	(*(*uParam0)[17])[0]->f_1 = 4;
	(*(*uParam0)[17])[0]->f_40 = 2;
	(*(*uParam0)[17])[0]->f_35[0] = -423064657;
	(*(*uParam0)[17])[0]->f_35[1] = 557524588;
	(*(*uParam0)[17])[0]->f_35[2] = 1590600971;
	(*(*uParam0)[17])[0]->f_2[0] = 54;
	(*(*uParam0)[17])[0]->f_8[0] = 69;
	(*(*uParam0)[17])[0]->f_8[1] = 70;
	(*(*uParam0)[17])[0]->f_42 = 3;
	(*(*uParam0)[17])[0]->f_44 = 7;
	(*(*uParam0)[17])[0]->f_27[0] = 1;
	(*(*uParam0)[17])[0]->f_27[1] = 2;
	(*(*uParam0)[17])[0]->f_27[2] = 3;
	(*(*uParam0)[17])[0]->f_27[3] = 4;
	(*(*uParam0)[17])[0]->f_27[4] = 5;
	(*(*uParam0)[17])[0]->f_27[5] = 6;
	(*(*uParam0)[17])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[17])[0], 8, 1);
	func_829((*(*uParam0)[17])[0], 2, 1);
	func_829((*(*uParam0)[17])[0], 2048, 1);
	func_830(&((*(*uParam0)[17])[0]->f_19), 8);
	func_830(&((*(*uParam0)[17])[0]->f_20), 20);
	(*(*uParam0)[17])[1]->f_1 = 4;
	(*(*uParam0)[17])[1]->f_40 = 2;
	(*(*uParam0)[17])[1]->f_35[0] = -423064657;
	(*(*uParam0)[17])[1]->f_35[1] = 557524588;
	(*(*uParam0)[17])[1]->f_35[2] = 1590600971;
	(*(*uParam0)[17])[1]->f_2[0] = 54;
	(*(*uParam0)[17])[1]->f_8[0] = 69;
	(*(*uParam0)[17])[1]->f_8[1] = 70;
	(*(*uParam0)[17])[1]->f_42 = 3;
	(*(*uParam0)[17])[1]->f_44 = 7;
	(*(*uParam0)[17])[1]->f_27[0] = 1;
	(*(*uParam0)[17])[1]->f_27[1] = 2;
	(*(*uParam0)[17])[1]->f_27[2] = 3;
	(*(*uParam0)[17])[1]->f_27[3] = 4;
	(*(*uParam0)[17])[1]->f_27[4] = 5;
	(*(*uParam0)[17])[1]->f_27[5] = 6;
	(*(*uParam0)[17])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[17])[1], 8, 1);
	func_829((*(*uParam0)[17])[1], 2, 1);
	func_829((*(*uParam0)[17])[1], 2048, 1);
	func_830(&((*(*uParam0)[17])[1]->f_19), 8);
	func_830(&((*(*uParam0)[17])[1]->f_20), 20);
	(*(*uParam0)[18])[0]->f_1 = 4;
	(*(*uParam0)[18])[0]->f_2[0] = 11;
	(*(*uParam0)[18])[0]->f_40 = 2;
	(*(*uParam0)[18])[0]->f_42 = 1;
	(*(*uParam0)[18])[0]->f_44 = 7;
	(*(*uParam0)[18])[0]->f_45 = 0;
	(*(*uParam0)[18])[0]->f_27[0] = 1;
	(*(*uParam0)[18])[0]->f_27[1] = 2;
	(*(*uParam0)[18])[0]->f_27[2] = 3;
	(*(*uParam0)[18])[0]->f_27[3] = 4;
	(*(*uParam0)[18])[0]->f_27[4] = 5;
	(*(*uParam0)[18])[0]->f_27[5] = 6;
	(*(*uParam0)[18])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[18])[0], 8, 1);
	func_829((*(*uParam0)[18])[0], 2, 1);
	func_830(&((*(*uParam0)[18])[0]->f_19), 8);
	func_830(&((*(*uParam0)[18])[0]->f_20), 20);
	(*(*uParam0)[18])[1]->f_1 = 4;
	(*(*uParam0)[18])[1]->f_2[0] = 11;
	(*(*uParam0)[18])[1]->f_40 = 2;
	(*(*uParam0)[18])[1]->f_42 = 1;
	(*(*uParam0)[18])[1]->f_43 = 2;
	(*(*uParam0)[18])[1]->f_44 = 7;
	(*(*uParam0)[18])[1]->f_45 = 0;
	(*(*uParam0)[18])[1]->f_27[0] = 1;
	(*(*uParam0)[18])[1]->f_27[1] = 2;
	(*(*uParam0)[18])[1]->f_27[2] = 3;
	(*(*uParam0)[18])[1]->f_27[3] = 4;
	(*(*uParam0)[18])[1]->f_27[4] = 5;
	(*(*uParam0)[18])[1]->f_27[5] = 6;
	(*(*uParam0)[18])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[18])[1], 8, 1);
	func_829((*(*uParam0)[18])[1], 2, 1);
	func_830(&((*(*uParam0)[18])[1]->f_19), 8);
	func_830(&((*(*uParam0)[18])[1]->f_20), 20);
	(*(*uParam0)[18])[2]->f_1 = 4;
	(*(*uParam0)[18])[2]->f_2[0] = 11;
	(*(*uParam0)[18])[2]->f_40 = 2;
	(*(*uParam0)[18])[2]->f_42 = 1;
	(*(*uParam0)[18])[2]->f_43 = 2;
	(*(*uParam0)[18])[2]->f_44 = 7;
	(*(*uParam0)[18])[2]->f_45 = 0;
	(*(*uParam0)[18])[2]->f_27[0] = 1;
	(*(*uParam0)[18])[2]->f_27[1] = 2;
	(*(*uParam0)[18])[2]->f_27[2] = 3;
	(*(*uParam0)[18])[2]->f_27[3] = 4;
	(*(*uParam0)[18])[2]->f_27[4] = 5;
	(*(*uParam0)[18])[2]->f_27[5] = 6;
	(*(*uParam0)[18])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[18])[2], 8, 1);
	func_829((*(*uParam0)[18])[2], 2, 1);
	func_830(&((*(*uParam0)[18])[2]->f_19), 8);
	func_830(&((*(*uParam0)[18])[2]->f_20), 20);
	(*(*uParam0)[19])[0]->f_1 = 4;
	(*(*uParam0)[19])[0]->f_16 = 60;
	(*(*uParam0)[19])[0]->f_40 = 2;
	(*(*uParam0)[19])[0]->f_42 = 1;
	(*(*uParam0)[19])[0]->f_44 = 7;
	(*(*uParam0)[19])[0]->f_45 = 0;
	(*(*uParam0)[19])[0]->f_27[0] = 1;
	(*(*uParam0)[19])[0]->f_27[1] = 2;
	(*(*uParam0)[19])[0]->f_27[2] = 3;
	(*(*uParam0)[19])[0]->f_27[3] = 4;
	(*(*uParam0)[19])[0]->f_27[4] = 5;
	(*(*uParam0)[19])[0]->f_27[5] = 6;
	(*(*uParam0)[19])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[0], 8, 1);
	func_829((*(*uParam0)[19])[0], 2, 1);
	func_830(&((*(*uParam0)[19])[0]->f_19), 8);
	func_830(&((*(*uParam0)[19])[0]->f_20), 19);
	(*(*uParam0)[19])[1]->f_1 = 4;
	(*(*uParam0)[19])[1]->f_18 = 58;
	(*(*uParam0)[19])[1]->f_40 = 2;
	(*(*uParam0)[19])[1]->f_42 = 1;
	(*(*uParam0)[19])[1]->f_43 = 2;
	(*(*uParam0)[19])[1]->f_44 = 7;
	(*(*uParam0)[19])[1]->f_45 = 0;
	(*(*uParam0)[19])[1]->f_46 = 2;
	(*(*uParam0)[19])[1]->f_27[0] = 1;
	(*(*uParam0)[19])[1]->f_27[1] = 2;
	(*(*uParam0)[19])[1]->f_27[2] = 3;
	(*(*uParam0)[19])[1]->f_27[3] = 4;
	(*(*uParam0)[19])[1]->f_27[4] = 5;
	(*(*uParam0)[19])[1]->f_27[5] = 6;
	(*(*uParam0)[19])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[1], 8, 1);
	func_829((*(*uParam0)[19])[1], 2, 1);
	func_830(&((*(*uParam0)[19])[1]->f_19), 8);
	func_830(&((*(*uParam0)[19])[1]->f_20), 19);
	(*(*uParam0)[19])[2]->f_1 = 4;
	(*(*uParam0)[19])[2]->f_18 = 58;
	(*(*uParam0)[19])[2]->f_40 = 2;
	(*(*uParam0)[19])[2]->f_42 = 1;
	(*(*uParam0)[19])[2]->f_43 = 2;
	(*(*uParam0)[19])[2]->f_44 = 7;
	(*(*uParam0)[19])[2]->f_45 = 0;
	(*(*uParam0)[19])[2]->f_46 = 2;
	(*(*uParam0)[19])[2]->f_27[0] = 1;
	(*(*uParam0)[19])[2]->f_27[1] = 2;
	(*(*uParam0)[19])[2]->f_27[2] = 3;
	(*(*uParam0)[19])[2]->f_27[3] = 4;
	(*(*uParam0)[19])[2]->f_27[4] = 5;
	(*(*uParam0)[19])[2]->f_27[5] = 6;
	(*(*uParam0)[19])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[2], 8, 1);
	func_829((*(*uParam0)[19])[2], 2, 1);
	func_830(&((*(*uParam0)[19])[2]->f_19), 8);
	func_830(&((*(*uParam0)[19])[2]->f_20), 19);
	(*(*uParam0)[19])[3]->f_1 = 5;
	(*(*uParam0)[19])[3]->f_18 = 58;
	(*(*uParam0)[19])[3]->f_40 = 2;
	(*(*uParam0)[19])[3]->f_42 = 1;
	(*(*uParam0)[19])[3]->f_43 = 2;
	(*(*uParam0)[19])[3]->f_44 = 7;
	(*(*uParam0)[19])[3]->f_45 = 0;
	(*(*uParam0)[19])[3]->f_46 = 2;
	(*(*uParam0)[19])[3]->f_27[0] = 1;
	(*(*uParam0)[19])[3]->f_27[1] = 2;
	(*(*uParam0)[19])[3]->f_27[2] = 3;
	(*(*uParam0)[19])[3]->f_27[3] = 4;
	(*(*uParam0)[19])[3]->f_27[4] = 5;
	(*(*uParam0)[19])[3]->f_27[5] = 6;
	(*(*uParam0)[19])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[3], 8, 1);
	func_829((*(*uParam0)[19])[3], 2, 1);
	func_830(&((*(*uParam0)[19])[3]->f_19), 8);
	func_830(&((*(*uParam0)[19])[3]->f_20), 19);
	(*(*uParam0)[19])[4]->f_1 = 5;
	(*(*uParam0)[19])[4]->f_18 = 58;
	(*(*uParam0)[19])[4]->f_40 = 2;
	(*(*uParam0)[19])[4]->f_42 = 1;
	(*(*uParam0)[19])[4]->f_43 = 2;
	(*(*uParam0)[19])[4]->f_44 = 7;
	(*(*uParam0)[19])[4]->f_45 = 0;
	(*(*uParam0)[19])[4]->f_46 = 2;
	(*(*uParam0)[19])[4]->f_27[0] = 1;
	(*(*uParam0)[19])[4]->f_27[1] = 2;
	(*(*uParam0)[19])[4]->f_27[2] = 3;
	(*(*uParam0)[19])[4]->f_27[3] = 4;
	(*(*uParam0)[19])[4]->f_27[4] = 5;
	(*(*uParam0)[19])[4]->f_27[5] = 6;
	(*(*uParam0)[19])[4]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[4], 8, 1);
	func_829((*(*uParam0)[19])[4], 2, 1);
	func_830(&((*(*uParam0)[19])[4]->f_19), 8);
	func_830(&((*(*uParam0)[19])[4]->f_20), 19);
	(*(*uParam0)[19])[5]->f_17 = 58;
	(*(*uParam0)[19])[5]->f_16 = 60;
	(*(*uParam0)[19])[5]->f_40 = 2;
	(*(*uParam0)[19])[5]->f_42 = 1;
	(*(*uParam0)[19])[5]->f_43 = 2;
	(*(*uParam0)[19])[5]->f_44 = 7;
	(*(*uParam0)[19])[5]->f_45 = 0;
	(*(*uParam0)[19])[5]->f_46 = 2;
	(*(*uParam0)[19])[5]->f_27[0] = 1;
	(*(*uParam0)[19])[5]->f_27[1] = 2;
	(*(*uParam0)[19])[5]->f_27[2] = 3;
	(*(*uParam0)[19])[5]->f_27[3] = 4;
	(*(*uParam0)[19])[5]->f_27[4] = 5;
	(*(*uParam0)[19])[5]->f_27[5] = 6;
	(*(*uParam0)[19])[5]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[5], 8, 1);
	func_829((*(*uParam0)[19])[5], 2, 1);
	func_830(&((*(*uParam0)[19])[5]->f_19), 8);
	func_830(&((*(*uParam0)[19])[5]->f_20), 19);
	(*(*uParam0)[19])[6]->f_1 = 60;
	(*(*uParam0)[19])[6]->f_40 = 2;
	(*(*uParam0)[19])[6]->f_42 = 1;
	(*(*uParam0)[19])[6]->f_43 = 2;
	(*(*uParam0)[19])[6]->f_44 = 7;
	(*(*uParam0)[19])[6]->f_45 = 0;
	(*(*uParam0)[19])[6]->f_46 = 2;
	(*(*uParam0)[19])[6]->f_27[0] = 1;
	(*(*uParam0)[19])[6]->f_27[1] = 2;
	(*(*uParam0)[19])[6]->f_27[2] = 3;
	(*(*uParam0)[19])[6]->f_27[3] = 4;
	(*(*uParam0)[19])[6]->f_27[4] = 5;
	(*(*uParam0)[19])[6]->f_27[5] = 6;
	(*(*uParam0)[19])[6]->f_27[6] = 0;
	func_829((*(*uParam0)[19])[6], 8, 1);
	func_829((*(*uParam0)[19])[6], 2, 1);
	func_830(&((*(*uParam0)[19])[6]->f_19), 8);
	func_830(&((*(*uParam0)[19])[6]->f_20), 19);
	(*(*uParam0)[20])[0]->f_1 = 4;
	(*(*uParam0)[20])[0]->f_40 = 4;
	(*(*uParam0)[20])[0]->f_42 = 1;
	(*(*uParam0)[20])[0]->f_44 = 7;
	(*(*uParam0)[20])[0]->f_27[0] = 1;
	(*(*uParam0)[20])[0]->f_27[1] = 2;
	(*(*uParam0)[20])[0]->f_27[2] = 3;
	(*(*uParam0)[20])[0]->f_27[3] = 4;
	(*(*uParam0)[20])[0]->f_27[4] = 5;
	(*(*uParam0)[20])[0]->f_27[5] = 6;
	(*(*uParam0)[20])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[20])[0], 32, 1);
	func_829((*(*uParam0)[20])[0], 8, 1);
	func_829((*(*uParam0)[20])[0], 2, 1);
	func_830(&((*(*uParam0)[20])[0]->f_19), 0);
	func_830(&((*(*uParam0)[20])[0]->f_20), 23);
	(*(*uParam0)[20])[1]->f_1 = 4;
	(*(*uParam0)[20])[1]->f_40 = 4;
	(*(*uParam0)[20])[1]->f_42 = 1;
	(*(*uParam0)[20])[1]->f_44 = 7;
	(*(*uParam0)[20])[1]->f_43 = 1;
	(*(*uParam0)[20])[1]->f_27[0] = 1;
	(*(*uParam0)[20])[1]->f_27[1] = 2;
	(*(*uParam0)[20])[1]->f_27[2] = 3;
	(*(*uParam0)[20])[1]->f_27[3] = 4;
	(*(*uParam0)[20])[1]->f_27[4] = 5;
	(*(*uParam0)[20])[1]->f_27[5] = 6;
	(*(*uParam0)[20])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[20])[1], 32, 1);
	func_829((*(*uParam0)[20])[1], 8, 1);
	func_829((*(*uParam0)[20])[1], 2, 1);
	func_830(&((*(*uParam0)[20])[1]->f_19), 0);
	func_830(&((*(*uParam0)[20])[1]->f_20), 23);
	(*(*uParam0)[20])[2]->f_1 = 4;
	(*(*uParam0)[20])[2]->f_40 = 4;
	(*(*uParam0)[20])[2]->f_42 = 1;
	(*(*uParam0)[20])[2]->f_44 = 7;
	(*(*uParam0)[20])[2]->f_43 = 1;
	(*(*uParam0)[20])[2]->f_27[0] = 1;
	(*(*uParam0)[20])[2]->f_27[1] = 2;
	(*(*uParam0)[20])[2]->f_27[2] = 3;
	(*(*uParam0)[20])[2]->f_27[3] = 4;
	(*(*uParam0)[20])[2]->f_27[4] = 5;
	(*(*uParam0)[20])[2]->f_27[5] = 6;
	(*(*uParam0)[20])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[20])[2], 32, 1);
	func_829((*(*uParam0)[20])[2], 8, 1);
	func_829((*(*uParam0)[20])[2], 2, 1);
	func_830(&((*(*uParam0)[20])[2]->f_19), 0);
	func_830(&((*(*uParam0)[20])[2]->f_20), 23);
	(*(*uParam0)[20])[3]->f_1 = 4;
	(*(*uParam0)[20])[3]->f_40 = 4;
	(*(*uParam0)[20])[3]->f_42 = 1;
	(*(*uParam0)[20])[3]->f_44 = 7;
	(*(*uParam0)[20])[3]->f_43 = 1;
	(*(*uParam0)[20])[3]->f_27[0] = 1;
	(*(*uParam0)[20])[3]->f_27[1] = 2;
	(*(*uParam0)[20])[3]->f_27[2] = 3;
	(*(*uParam0)[20])[3]->f_27[3] = 4;
	(*(*uParam0)[20])[3]->f_27[4] = 5;
	(*(*uParam0)[20])[3]->f_27[5] = 6;
	(*(*uParam0)[20])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[20])[3], 32, 1);
	func_829((*(*uParam0)[20])[3], 8, 1);
	func_829((*(*uParam0)[20])[3], 2, 1);
	func_830(&((*(*uParam0)[20])[3]->f_19), 0);
	func_830(&((*(*uParam0)[20])[3]->f_20), 23);
	(*(*uParam0)[20])[4]->f_1 = 4;
	(*(*uParam0)[20])[4]->f_40 = 4;
	(*(*uParam0)[20])[4]->f_42 = 1;
	(*(*uParam0)[20])[4]->f_44 = 7;
	(*(*uParam0)[20])[4]->f_43 = 1;
	(*(*uParam0)[20])[4]->f_27[0] = 1;
	(*(*uParam0)[20])[4]->f_27[1] = 2;
	(*(*uParam0)[20])[4]->f_27[2] = 3;
	(*(*uParam0)[20])[4]->f_27[3] = 4;
	(*(*uParam0)[20])[4]->f_27[4] = 5;
	(*(*uParam0)[20])[4]->f_27[5] = 6;
	(*(*uParam0)[20])[4]->f_27[6] = 0;
	func_829((*(*uParam0)[20])[4], 32, 1);
	func_829((*(*uParam0)[20])[4], 8, 1);
	func_829((*(*uParam0)[20])[4], 2, 1);
	func_830(&((*(*uParam0)[20])[4]->f_19), 0);
	func_830(&((*(*uParam0)[20])[4]->f_20), 23);
	(*(*uParam0)[21])[0]->f_1 = 4;
	(*(*uParam0)[21])[0]->f_40 = 3;
	(*(*uParam0)[21])[0]->f_42 = 1;
	(*(*uParam0)[21])[0]->f_44 = 7;
	(*(*uParam0)[21])[0]->f_27[0] = 1;
	(*(*uParam0)[21])[0]->f_27[1] = 2;
	(*(*uParam0)[21])[0]->f_27[2] = 3;
	(*(*uParam0)[21])[0]->f_27[3] = 4;
	(*(*uParam0)[21])[0]->f_27[4] = 5;
	(*(*uParam0)[21])[0]->f_27[5] = 6;
	(*(*uParam0)[21])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[21])[0], 32, 1);
	func_829((*(*uParam0)[21])[0], 8, 1);
	func_829((*(*uParam0)[21])[0], 2, 1);
	func_830(&((*(*uParam0)[21])[0]->f_19), 0);
	func_830(&((*(*uParam0)[21])[0]->f_20), 23);
	(*(*uParam0)[21])[1]->f_1 = 4;
	(*(*uParam0)[21])[1]->f_40 = 3;
	(*(*uParam0)[21])[1]->f_42 = 1;
	(*(*uParam0)[21])[1]->f_44 = 7;
	(*(*uParam0)[21])[1]->f_43 = 2;
	(*(*uParam0)[21])[1]->f_27[0] = 1;
	(*(*uParam0)[21])[1]->f_27[1] = 2;
	(*(*uParam0)[21])[1]->f_27[2] = 3;
	(*(*uParam0)[21])[1]->f_27[3] = 4;
	(*(*uParam0)[21])[1]->f_27[4] = 5;
	(*(*uParam0)[21])[1]->f_27[5] = 6;
	(*(*uParam0)[21])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[21])[1], 32, 1);
	func_829((*(*uParam0)[21])[1], 8, 1);
	func_829((*(*uParam0)[21])[1], 2, 1);
	func_830(&((*(*uParam0)[21])[1]->f_19), 0);
	func_830(&((*(*uParam0)[21])[1]->f_20), 23);
	(*(*uParam0)[21])[2]->f_1 = 60;
	(*(*uParam0)[21])[2]->f_40 = 3;
	(*(*uParam0)[21])[2]->f_42 = 1;
	(*(*uParam0)[21])[2]->f_44 = 7;
	(*(*uParam0)[21])[2]->f_43 = 2;
	(*(*uParam0)[21])[2]->f_27[0] = 1;
	(*(*uParam0)[21])[2]->f_27[1] = 2;
	(*(*uParam0)[21])[2]->f_27[2] = 3;
	(*(*uParam0)[21])[2]->f_27[3] = 4;
	(*(*uParam0)[21])[2]->f_27[4] = 5;
	(*(*uParam0)[21])[2]->f_27[5] = 6;
	(*(*uParam0)[21])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[21])[2], 32, 1);
	func_829((*(*uParam0)[21])[2], 8, 1);
	func_829((*(*uParam0)[21])[2], 2, 1);
	func_830(&((*(*uParam0)[21])[2]->f_19), 0);
	func_830(&((*(*uParam0)[21])[2]->f_20), 23);
	(*(*uParam0)[22])[0]->f_1 = 60;
	(*(*uParam0)[22])[0]->f_40 = 4;
	(*(*uParam0)[22])[0]->f_42 = 1;
	(*(*uParam0)[22])[0]->f_44 = 7;
	(*(*uParam0)[22])[0]->f_45 = 0;
	(*(*uParam0)[22])[0]->f_12 = 76;
	(*(*uParam0)[22])[0]->f_13 = 1048576;
	(*(*uParam0)[22])[0]->f_27[0] = 1;
	(*(*uParam0)[22])[0]->f_27[1] = 2;
	(*(*uParam0)[22])[0]->f_27[2] = 3;
	(*(*uParam0)[22])[0]->f_27[3] = 4;
	(*(*uParam0)[22])[0]->f_27[4] = 5;
	(*(*uParam0)[22])[0]->f_27[5] = 6;
	(*(*uParam0)[22])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[22])[0], 8, 1);
	func_829((*(*uParam0)[22])[0], 2, 1);
	func_830(&((*(*uParam0)[22])[0]->f_19), 0);
	func_830(&((*(*uParam0)[22])[0]->f_20), 23);
	(*(*uParam0)[22])[1]->f_1 = 60;
	(*(*uParam0)[22])[1]->f_40 = 4;
	(*(*uParam0)[22])[1]->f_42 = 1;
	(*(*uParam0)[22])[1]->f_43 = 1;
	(*(*uParam0)[22])[1]->f_44 = 7;
	(*(*uParam0)[22])[1]->f_45 = 0;
	(*(*uParam0)[22])[1]->f_12 = 76;
	(*(*uParam0)[22])[1]->f_13 = 1048576;
	(*(*uParam0)[22])[1]->f_27[0] = 1;
	(*(*uParam0)[22])[1]->f_27[1] = 2;
	(*(*uParam0)[22])[1]->f_27[2] = 3;
	(*(*uParam0)[22])[1]->f_27[3] = 4;
	(*(*uParam0)[22])[1]->f_27[4] = 5;
	(*(*uParam0)[22])[1]->f_27[5] = 6;
	(*(*uParam0)[22])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[22])[1], 8, 1);
	func_829((*(*uParam0)[22])[1], 2, 1);
	func_830(&((*(*uParam0)[22])[1]->f_19), 0);
	func_830(&((*(*uParam0)[22])[1]->f_20), 23);
	(*(*uParam0)[22])[2]->f_1 = 60;
	(*(*uParam0)[22])[2]->f_40 = 4;
	(*(*uParam0)[22])[2]->f_42 = 1;
	(*(*uParam0)[22])[2]->f_43 = 1;
	(*(*uParam0)[22])[2]->f_44 = 7;
	(*(*uParam0)[22])[2]->f_45 = 0;
	(*(*uParam0)[22])[2]->f_12 = 76;
	(*(*uParam0)[22])[2]->f_13 = 1048576;
	(*(*uParam0)[22])[2]->f_27[0] = 1;
	(*(*uParam0)[22])[2]->f_27[1] = 2;
	(*(*uParam0)[22])[2]->f_27[2] = 3;
	(*(*uParam0)[22])[2]->f_27[3] = 4;
	(*(*uParam0)[22])[2]->f_27[4] = 5;
	(*(*uParam0)[22])[2]->f_27[5] = 6;
	(*(*uParam0)[22])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[22])[2], 8, 1);
	func_829((*(*uParam0)[22])[2], 2, 1);
	func_830(&((*(*uParam0)[22])[2]->f_19), 0);
	func_830(&((*(*uParam0)[22])[2]->f_20), 23);
	(*(*uParam0)[23])[0]->f_1 = 4;
	(*(*uParam0)[23])[0]->f_16 = 60;
	(*(*uParam0)[23])[0]->f_40 = 5;
	(*(*uParam0)[23])[0]->f_42 = 1;
	(*(*uParam0)[23])[0]->f_43 = 2;
	(*(*uParam0)[23])[0]->f_44 = 7;
	(*(*uParam0)[23])[0]->f_27[0] = 1;
	(*(*uParam0)[23])[0]->f_27[1] = 2;
	(*(*uParam0)[23])[0]->f_27[2] = 3;
	(*(*uParam0)[23])[0]->f_27[3] = 4;
	(*(*uParam0)[23])[0]->f_27[4] = 5;
	(*(*uParam0)[23])[0]->f_27[5] = 6;
	(*(*uParam0)[23])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[23])[0], 8, 1);
	func_829((*(*uParam0)[23])[0], 2, 1);
	func_830(&((*(*uParam0)[23])[0]->f_19), 20);
	func_830(&((*(*uParam0)[23])[0]->f_20), 4);
	(*(*uParam0)[23])[1]->f_1 = 60;
	(*(*uParam0)[23])[1]->f_40 = 5;
	(*(*uParam0)[23])[1]->f_42 = 1;
	(*(*uParam0)[23])[1]->f_43 = 2;
	(*(*uParam0)[23])[1]->f_44 = 7;
	(*(*uParam0)[23])[1]->f_27[0] = 1;
	(*(*uParam0)[23])[1]->f_27[1] = 2;
	(*(*uParam0)[23])[1]->f_27[2] = 3;
	(*(*uParam0)[23])[1]->f_27[3] = 4;
	(*(*uParam0)[23])[1]->f_27[4] = 5;
	(*(*uParam0)[23])[1]->f_27[5] = 6;
	(*(*uParam0)[23])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[23])[1], 8, 1);
	func_829((*(*uParam0)[23])[1], 2, 1);
	func_830(&((*(*uParam0)[23])[1]->f_19), 20);
	func_830(&((*(*uParam0)[23])[1]->f_20), 4);
	(*(*uParam0)[24])[0]->f_1 = 60;
	(*(*uParam0)[24])[0]->f_40 = 0;
	(*(*uParam0)[24])[0]->f_42 = 3;
	(*(*uParam0)[24])[0]->f_43 = 3;
	(*(*uParam0)[24])[0]->f_44 = 7;
	(*(*uParam0)[24])[0]->f_27[0] = 1;
	(*(*uParam0)[24])[0]->f_27[1] = 2;
	(*(*uParam0)[24])[0]->f_27[2] = 3;
	(*(*uParam0)[24])[0]->f_27[3] = 4;
	(*(*uParam0)[24])[0]->f_27[4] = 5;
	(*(*uParam0)[24])[0]->f_27[5] = 6;
	(*(*uParam0)[24])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[0], 8, 1);
	func_829((*(*uParam0)[24])[0], 2, 1);
	func_830(&((*(*uParam0)[24])[0]->f_19), 10);
	func_830(&((*(*uParam0)[24])[0]->f_20), 16);
	(*(*uParam0)[24])[1]->f_1 = 60;
	(*(*uParam0)[24])[1]->f_40 = 0;
	(*(*uParam0)[24])[1]->f_42 = 3;
	(*(*uParam0)[24])[1]->f_43 = 3;
	(*(*uParam0)[24])[1]->f_44 = 7;
	(*(*uParam0)[24])[1]->f_27[0] = 1;
	(*(*uParam0)[24])[1]->f_27[1] = 2;
	(*(*uParam0)[24])[1]->f_27[2] = 3;
	(*(*uParam0)[24])[1]->f_27[3] = 4;
	(*(*uParam0)[24])[1]->f_27[4] = 5;
	(*(*uParam0)[24])[1]->f_27[5] = 6;
	(*(*uParam0)[24])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[1], 8, 1);
	func_829((*(*uParam0)[24])[1], 2, 1);
	func_830(&((*(*uParam0)[24])[1]->f_19), 10);
	func_830(&((*(*uParam0)[24])[1]->f_20), 16);
	(*(*uParam0)[24])[2]->f_1 = 60;
	(*(*uParam0)[24])[2]->f_40 = 0;
	(*(*uParam0)[24])[2]->f_42 = 3;
	(*(*uParam0)[24])[2]->f_43 = 3;
	(*(*uParam0)[24])[2]->f_44 = 7;
	(*(*uParam0)[24])[2]->f_27[0] = 1;
	(*(*uParam0)[24])[2]->f_27[1] = 2;
	(*(*uParam0)[24])[2]->f_27[2] = 3;
	(*(*uParam0)[24])[2]->f_27[3] = 4;
	(*(*uParam0)[24])[2]->f_27[4] = 5;
	(*(*uParam0)[24])[2]->f_27[5] = 6;
	(*(*uParam0)[24])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[2], 8, 1);
	func_829((*(*uParam0)[24])[2], 2, 1);
	func_830(&((*(*uParam0)[24])[2]->f_19), 10);
	func_830(&((*(*uParam0)[24])[2]->f_20), 16);
	(*(*uParam0)[24])[3]->f_1 = 60;
	(*(*uParam0)[24])[3]->f_40 = 0;
	(*(*uParam0)[24])[3]->f_42 = 3;
	(*(*uParam0)[24])[3]->f_43 = 3;
	(*(*uParam0)[24])[3]->f_44 = 7;
	(*(*uParam0)[24])[3]->f_27[0] = 1;
	(*(*uParam0)[24])[3]->f_27[1] = 2;
	(*(*uParam0)[24])[3]->f_27[2] = 3;
	(*(*uParam0)[24])[3]->f_27[3] = 4;
	(*(*uParam0)[24])[3]->f_27[4] = 5;
	(*(*uParam0)[24])[3]->f_27[5] = 6;
	(*(*uParam0)[24])[3]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[3], 8, 1);
	func_829((*(*uParam0)[24])[3], 2, 1);
	func_830(&((*(*uParam0)[24])[3]->f_19), 10);
	func_830(&((*(*uParam0)[24])[3]->f_20), 16);
	(*(*uParam0)[24])[4]->f_1 = 60;
	(*(*uParam0)[24])[4]->f_40 = 0;
	(*(*uParam0)[24])[4]->f_42 = 3;
	(*(*uParam0)[24])[4]->f_43 = 3;
	(*(*uParam0)[24])[4]->f_44 = 7;
	(*(*uParam0)[24])[4]->f_27[0] = 1;
	(*(*uParam0)[24])[4]->f_27[1] = 2;
	(*(*uParam0)[24])[4]->f_27[2] = 3;
	(*(*uParam0)[24])[4]->f_27[3] = 4;
	(*(*uParam0)[24])[4]->f_27[4] = 5;
	(*(*uParam0)[24])[4]->f_27[5] = 6;
	(*(*uParam0)[24])[4]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[4], 8, 1);
	func_829((*(*uParam0)[24])[4], 2, 1);
	func_830(&((*(*uParam0)[24])[4]->f_19), 10);
	func_830(&((*(*uParam0)[24])[4]->f_20), 16);
	(*(*uParam0)[24])[5]->f_1 = 60;
	(*(*uParam0)[24])[5]->f_40 = 0;
	(*(*uParam0)[24])[5]->f_42 = 3;
	(*(*uParam0)[24])[5]->f_43 = 3;
	(*(*uParam0)[24])[5]->f_44 = 7;
	(*(*uParam0)[24])[5]->f_27[0] = 1;
	(*(*uParam0)[24])[5]->f_27[1] = 2;
	(*(*uParam0)[24])[5]->f_27[2] = 3;
	(*(*uParam0)[24])[5]->f_27[3] = 4;
	(*(*uParam0)[24])[5]->f_27[4] = 5;
	(*(*uParam0)[24])[5]->f_27[5] = 6;
	(*(*uParam0)[24])[5]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[5], 8, 1);
	func_829((*(*uParam0)[24])[5], 2, 1);
	func_830(&((*(*uParam0)[24])[5]->f_19), 10);
	func_830(&((*(*uParam0)[24])[5]->f_20), 16);
	(*(*uParam0)[24])[6]->f_1 = 60;
	(*(*uParam0)[24])[6]->f_40 = 0;
	(*(*uParam0)[24])[6]->f_42 = 3;
	(*(*uParam0)[24])[6]->f_43 = 3;
	(*(*uParam0)[24])[6]->f_44 = 7;
	(*(*uParam0)[24])[6]->f_27[0] = 1;
	(*(*uParam0)[24])[6]->f_27[1] = 2;
	(*(*uParam0)[24])[6]->f_27[2] = 3;
	(*(*uParam0)[24])[6]->f_27[3] = 4;
	(*(*uParam0)[24])[6]->f_27[4] = 5;
	(*(*uParam0)[24])[6]->f_27[5] = 6;
	(*(*uParam0)[24])[6]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[6], 8, 1);
	func_829((*(*uParam0)[24])[6], 2, 1);
	func_830(&((*(*uParam0)[24])[6]->f_19), 10);
	func_830(&((*(*uParam0)[24])[6]->f_20), 16);
	(*(*uParam0)[24])[7]->f_1 = 60;
	(*(*uParam0)[24])[7]->f_40 = 0;
	(*(*uParam0)[24])[7]->f_42 = 3;
	(*(*uParam0)[24])[7]->f_43 = 3;
	(*(*uParam0)[24])[7]->f_44 = 7;
	(*(*uParam0)[24])[7]->f_27[0] = 1;
	(*(*uParam0)[24])[7]->f_27[1] = 2;
	(*(*uParam0)[24])[7]->f_27[2] = 3;
	(*(*uParam0)[24])[7]->f_27[3] = 4;
	(*(*uParam0)[24])[7]->f_27[4] = 5;
	(*(*uParam0)[24])[7]->f_27[5] = 6;
	(*(*uParam0)[24])[7]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[7], 8, 1);
	func_829((*(*uParam0)[24])[7], 2, 1);
	func_830(&((*(*uParam0)[24])[7]->f_19), 10);
	func_830(&((*(*uParam0)[24])[7]->f_20), 16);
	(*(*uParam0)[24])[8]->f_1 = 60;
	(*(*uParam0)[24])[8]->f_40 = 0;
	(*(*uParam0)[24])[8]->f_42 = 3;
	(*(*uParam0)[24])[8]->f_43 = 3;
	(*(*uParam0)[24])[8]->f_44 = 7;
	(*(*uParam0)[24])[8]->f_27[0] = 1;
	(*(*uParam0)[24])[8]->f_27[1] = 2;
	(*(*uParam0)[24])[8]->f_27[2] = 3;
	(*(*uParam0)[24])[8]->f_27[3] = 4;
	(*(*uParam0)[24])[8]->f_27[4] = 5;
	(*(*uParam0)[24])[8]->f_27[5] = 6;
	(*(*uParam0)[24])[8]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[8], 8, 1);
	func_829((*(*uParam0)[24])[8], 2, 1);
	func_830(&((*(*uParam0)[24])[8]->f_19), 10);
	func_830(&((*(*uParam0)[24])[8]->f_20), 16);
	(*(*uParam0)[24])[9]->f_1 = 60;
	(*(*uParam0)[24])[9]->f_40 = 0;
	(*(*uParam0)[24])[9]->f_42 = 3;
	(*(*uParam0)[24])[9]->f_43 = 3;
	(*(*uParam0)[24])[9]->f_44 = 7;
	(*(*uParam0)[24])[9]->f_27[0] = 1;
	(*(*uParam0)[24])[9]->f_27[1] = 2;
	(*(*uParam0)[24])[9]->f_27[2] = 3;
	(*(*uParam0)[24])[9]->f_27[3] = 4;
	(*(*uParam0)[24])[9]->f_27[4] = 5;
	(*(*uParam0)[24])[9]->f_27[5] = 6;
	(*(*uParam0)[24])[9]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[9], 8, 1);
	func_829((*(*uParam0)[24])[9], 2, 1);
	func_830(&((*(*uParam0)[24])[9]->f_19), 10);
	func_830(&((*(*uParam0)[24])[9]->f_20), 16);
	(*(*uParam0)[24])[10]->f_1 = 60;
	(*(*uParam0)[24])[10]->f_40 = 0;
	(*(*uParam0)[24])[10]->f_42 = 3;
	(*(*uParam0)[24])[10]->f_43 = 3;
	(*(*uParam0)[24])[10]->f_44 = 7;
	(*(*uParam0)[24])[10]->f_27[0] = 1;
	(*(*uParam0)[24])[10]->f_27[1] = 2;
	(*(*uParam0)[24])[10]->f_27[2] = 3;
	(*(*uParam0)[24])[10]->f_27[3] = 4;
	(*(*uParam0)[24])[10]->f_27[4] = 5;
	(*(*uParam0)[24])[10]->f_27[5] = 6;
	(*(*uParam0)[24])[10]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[10], 8, 1);
	func_829((*(*uParam0)[24])[10], 2, 1);
	func_830(&((*(*uParam0)[24])[10]->f_19), 10);
	func_830(&((*(*uParam0)[24])[10]->f_20), 16);
	(*(*uParam0)[24])[11]->f_1 = 60;
	(*(*uParam0)[24])[11]->f_40 = 0;
	(*(*uParam0)[24])[11]->f_42 = 3;
	(*(*uParam0)[24])[11]->f_43 = 3;
	(*(*uParam0)[24])[11]->f_44 = 7;
	(*(*uParam0)[24])[11]->f_27[0] = 1;
	(*(*uParam0)[24])[11]->f_27[1] = 2;
	(*(*uParam0)[24])[11]->f_27[2] = 3;
	(*(*uParam0)[24])[11]->f_27[3] = 4;
	(*(*uParam0)[24])[11]->f_27[4] = 5;
	(*(*uParam0)[24])[11]->f_27[5] = 6;
	(*(*uParam0)[24])[11]->f_27[6] = 0;
	func_829((*(*uParam0)[24])[11], 8, 1);
	func_829((*(*uParam0)[24])[11], 2, 1);
	func_830(&((*(*uParam0)[24])[11]->f_19), 10);
	func_830(&((*(*uParam0)[24])[11]->f_20), 16);
	(*(*uParam0)[25])[0]->f_1 = 4;
	(*(*uParam0)[25])[0]->f_2[0] = 44;
	(*(*uParam0)[25])[0]->f_40 = 4;
	(*(*uParam0)[25])[0]->f_42 = 0;
	(*(*uParam0)[25])[0]->f_43 = 0;
	(*(*uParam0)[25])[0]->f_44 = 7;
	(*(*uParam0)[25])[0]->f_45 = 0;
	(*(*uParam0)[25])[0]->f_27[0] = 1;
	(*(*uParam0)[25])[0]->f_27[1] = 2;
	(*(*uParam0)[25])[0]->f_27[2] = 3;
	(*(*uParam0)[25])[0]->f_27[3] = 4;
	(*(*uParam0)[25])[0]->f_27[4] = 5;
	(*(*uParam0)[25])[0]->f_27[5] = 6;
	(*(*uParam0)[25])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[25])[0], 8, 1);
	func_829((*(*uParam0)[25])[0], 2, 1);
	func_830(&((*(*uParam0)[25])[0]->f_19), 0);
	func_830(&((*(*uParam0)[25])[0]->f_20), 23);
	(*(*uParam0)[25])[1]->f_1 = 4;
	(*(*uParam0)[25])[1]->f_2[0] = 44;
	(*(*uParam0)[25])[1]->f_40 = 4;
	(*(*uParam0)[25])[1]->f_42 = 1;
	(*(*uParam0)[25])[1]->f_43 = 2;
	(*(*uParam0)[25])[1]->f_44 = 7;
	(*(*uParam0)[25])[1]->f_45 = 0;
	(*(*uParam0)[25])[1]->f_27[0] = 1;
	(*(*uParam0)[25])[1]->f_27[1] = 2;
	(*(*uParam0)[25])[1]->f_27[2] = 3;
	(*(*uParam0)[25])[1]->f_27[3] = 4;
	(*(*uParam0)[25])[1]->f_27[4] = 5;
	(*(*uParam0)[25])[1]->f_27[5] = 6;
	(*(*uParam0)[25])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[25])[1], 8, 1);
	func_829((*(*uParam0)[25])[1], 2, 1);
	func_830(&((*(*uParam0)[25])[1]->f_19), 0);
	func_830(&((*(*uParam0)[25])[1]->f_20), 23);
	(*(*uParam0)[26])[0]->f_1 = 4;
	(*(*uParam0)[26])[0]->f_5[0] = 6;
	(*(*uParam0)[26])[0]->f_18 = 61;
	(*(*uParam0)[26])[0]->f_40 = 3;
	(*(*uParam0)[26])[0]->f_43 = 0;
	(*(*uParam0)[26])[0]->f_42 = 1;
	(*(*uParam0)[26])[0]->f_44 = 7;
	(*(*uParam0)[26])[0]->f_27[0] = 1;
	(*(*uParam0)[26])[0]->f_27[1] = 2;
	(*(*uParam0)[26])[0]->f_27[2] = 3;
	(*(*uParam0)[26])[0]->f_27[3] = 4;
	(*(*uParam0)[26])[0]->f_27[4] = 5;
	(*(*uParam0)[26])[0]->f_27[5] = 6;
	(*(*uParam0)[26])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[26])[0], 8, 1);
	func_829((*(*uParam0)[26])[0], 2, 1);
	func_829((*(*uParam0)[26])[0], 128, 1);
	func_829((*(*uParam0)[26])[0], 1024, 1);
	func_830(&((*(*uParam0)[26])[0]->f_19), 6);
	func_830(&((*(*uParam0)[26])[0]->f_20), 20);
	(*(*uParam0)[27])[0]->f_1 = 4;
	(*(*uParam0)[27])[0]->f_2[0] = 27;
	(*(*uParam0)[27])[0]->f_40 = 2;
	(*(*uParam0)[27])[0]->f_42 = 1;
	(*(*uParam0)[27])[0]->f_44 = 7;
	(*(*uParam0)[27])[0]->f_45 = 0;
	(*(*uParam0)[27])[0]->f_27[0] = 1;
	(*(*uParam0)[27])[0]->f_27[1] = 2;
	(*(*uParam0)[27])[0]->f_27[2] = 3;
	(*(*uParam0)[27])[0]->f_27[3] = 4;
	(*(*uParam0)[27])[0]->f_27[4] = 5;
	(*(*uParam0)[27])[0]->f_27[5] = 6;
	(*(*uParam0)[27])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[27])[0], 8, 1);
	func_829((*(*uParam0)[27])[0], 2, 1);
	func_830(&((*(*uParam0)[27])[0]->f_19), 10);
	func_830(&((*(*uParam0)[27])[0]->f_20), 18);
	(*(*uParam0)[27])[1]->f_1 = 4;
	(*(*uParam0)[27])[1]->f_2[0] = 27;
	(*(*uParam0)[27])[1]->f_40 = 2;
	(*(*uParam0)[27])[1]->f_42 = 1;
	(*(*uParam0)[27])[1]->f_43 = 2;
	(*(*uParam0)[27])[1]->f_44 = 7;
	(*(*uParam0)[27])[1]->f_45 = 0;
	(*(*uParam0)[27])[1]->f_27[0] = 1;
	(*(*uParam0)[27])[1]->f_27[1] = 2;
	(*(*uParam0)[27])[1]->f_27[2] = 3;
	(*(*uParam0)[27])[1]->f_27[3] = 4;
	(*(*uParam0)[27])[1]->f_27[4] = 5;
	(*(*uParam0)[27])[1]->f_27[5] = 6;
	(*(*uParam0)[27])[1]->f_27[6] = 0;
	func_829((*(*uParam0)[27])[1], 8, 1);
	func_829((*(*uParam0)[27])[1], 2, 1);
	func_830(&((*(*uParam0)[27])[1]->f_19), 10);
	func_830(&((*(*uParam0)[27])[1]->f_20), 18);
	(*(*uParam0)[27])[2]->f_1 = 4;
	(*(*uParam0)[27])[2]->f_2[0] = 27;
	(*(*uParam0)[27])[2]->f_40 = 2;
	(*(*uParam0)[27])[2]->f_42 = 1;
	(*(*uParam0)[27])[2]->f_43 = 2;
	(*(*uParam0)[27])[2]->f_44 = 7;
	(*(*uParam0)[27])[2]->f_45 = 0;
	(*(*uParam0)[27])[2]->f_27[0] = 1;
	(*(*uParam0)[27])[2]->f_27[1] = 2;
	(*(*uParam0)[27])[2]->f_27[2] = 3;
	(*(*uParam0)[27])[2]->f_27[3] = 4;
	(*(*uParam0)[27])[2]->f_27[4] = 5;
	(*(*uParam0)[27])[2]->f_27[5] = 6;
	(*(*uParam0)[27])[2]->f_27[6] = 0;
	func_829((*(*uParam0)[27])[2], 8, 1);
	func_829((*(*uParam0)[27])[2], 2, 1);
	func_830(&((*(*uParam0)[27])[2]->f_19), 10);
	func_830(&((*(*uParam0)[27])[2]->f_20), 18);
	(*(*uParam0)[28])[0]->f_1 = 4;
	(*(*uParam0)[28])[0]->f_40 = 4;
	(*(*uParam0)[28])[0]->f_42 = 1;
	(*(*uParam0)[28])[0]->f_43 = 2;
	(*(*uParam0)[28])[0]->f_44 = 7;
	(*(*uParam0)[28])[0]->f_45 = 0;
	(*(*uParam0)[28])[0]->f_27[0] = 1;
	(*(*uParam0)[28])[0]->f_27[1] = 2;
	(*(*uParam0)[28])[0]->f_27[2] = 3;
	(*(*uParam0)[28])[0]->f_27[3] = 4;
	(*(*uParam0)[28])[0]->f_27[4] = 5;
	(*(*uParam0)[28])[0]->f_27[5] = 6;
	(*(*uParam0)[28])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[28])[0], 8, 1);
	func_829((*(*uParam0)[28])[0], 2, 1);
	func_829((*(*uParam0)[28])[0], 4096, 1);
	func_830(&((*(*uParam0)[28])[0]->f_19), 0);
	func_830(&((*(*uParam0)[28])[0]->f_20), 23);
	(*(*uParam0)[29])[0]->f_23 = -890175011;
	(*(*uParam0)[29])[0]->f_40 = 4;
	(*(*uParam0)[29])[0]->f_42 = 1;
	(*(*uParam0)[29])[0]->f_43 = 2;
	(*(*uParam0)[29])[0]->f_44 = 7;
	(*(*uParam0)[29])[0]->f_45 = 0;
	(*(*uParam0)[29])[0]->f_27[0] = 1;
	(*(*uParam0)[29])[0]->f_27[1] = 2;
	(*(*uParam0)[29])[0]->f_27[2] = 3;
	(*(*uParam0)[29])[0]->f_27[3] = 4;
	(*(*uParam0)[29])[0]->f_27[4] = 5;
	(*(*uParam0)[29])[0]->f_27[5] = 6;
	(*(*uParam0)[29])[0]->f_27[6] = 0;
	func_829((*(*uParam0)[29])[0], 8, 1);
	func_829((*(*uParam0)[29])[0], 2, 1);
	func_829((*(*uParam0)[29])[0], 512, 1);
	func_830(&((*(*uParam0)[29])[0]->f_19), 0);
	func_830(&((*(*uParam0)[29])[0]->f_20), 1);
}

void func_339(var uParam0)
{
	(*uParam0)[0]->f_625 = 5;
	(*uParam0)[1]->f_625 = 1;
	(*uParam0)[2]->f_625 = 1;
	(*uParam0)[3]->f_625 = 3;
	(*uParam0)[4]->f_625 = 1;
	(*uParam0)[6]->f_625 = 1;
	(*uParam0)[7]->f_625 = 4;
	(*uParam0)[5]->f_625 = 1;
	(*uParam0)[8]->f_625 = 1;
	(*uParam0)[9]->f_625 = 1;
	(*uParam0)[10]->f_625 = 3;
	(*uParam0)[11]->f_625 = 1;
	(*uParam0)[12]->f_625 = 4;
	(*uParam0)[13]->f_625 = 1;
	(*uParam0)[14]->f_625 = 3;
	(*uParam0)[15]->f_625 = 3;
	(*uParam0)[16]->f_625 = 3;
	(*uParam0)[17]->f_625 = 1;
	(*uParam0)[18]->f_625 = 2;
	(*uParam0)[19]->f_625 = 6;
	(*uParam0)[20]->f_625 = 4;
	(*uParam0)[21]->f_625 = 2;
	(*uParam0)[22]->f_625 = 2;
	(*uParam0)[23]->f_625 = 1;
	(*uParam0)[24]->f_625 = 11;
	(*uParam0)[25]->f_625 = 1;
	(*uParam0)[26]->f_625 = 0;
	(*uParam0)[27]->f_625 = 1;
	(*uParam0)[28]->f_625 = 0;
	(*uParam0)[29]->f_625 = 0;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_341(int iParam0)
{
	if (!func_831(iParam0))
	{
		return 3;
	}
	if (iParam0 == 10)
	{
		return 1;
	}
	if (func_832())
	{
		return 1;
	}
	if (iParam0 == 13)
	{
		if (func_812((*Global_1347702)[117]->f_13, 64))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Global_40.f_11206[iParam0][iVar0])
		{
			case 623901469:
				return 1;
			case -1132827806:
				return 2;
			default:
				break;
		}
		iVar0++;
	}
	return 3;
}

int func_342()
{
	return Global_1897952->f_41;
}

bool func_343(int iParam0, bool bParam1)
{
	if (!func_559(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_833(iParam0, 8))
		{
			return false;
		}
	}
	if (func_833(iParam0, 1))
	{
		return true;
	}
	return false;
}

void func_344(int iParam0)
{
	if (does_entity_exist((*Global_1396257)[iParam0]->f_636))
	{
		if (decor_exist_on((*Global_1396257)[iParam0]->f_636, "bIsSpecialPed"))
		{
			iVar0 = decor_get_int((*Global_1396257)[iParam0]->f_636, "iSpecialPedID");
			if (iVar0 == iParam0)
			{
				if (!func_292((*Global_1396257)[iParam0]->f_636, 0))
				{
					func_834(iParam0);
					(*Global_1396257)[iParam0]->f_636 = 0;
				}
			}
			else
			{
				(*Global_1396257)[iParam0]->f_636 = 0;
			}
		}
		else
		{
			(*Global_1396257)[iParam0]->f_636 = 0;
		}
	}
}

void func_345(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 4:
			if ((((((func_646(0) == 1 || func_646(0) == 11) || func_646(0) == 7) || func_646(0) == 6) || func_646(0) == 8) || func_463()) || func_358(&Global_1935630, 2048))
			{
				return;
			}
			if (func_835(4, 16777216) && !func_835(4, 536870912))
			{
				sVar0 = func_836(4, 16777216);
				func_837(4, sVar0);
			}
			break;
		case 12:
			if (bParam1)
			{
				if (!func_835(iParam0, 4194304))
				{
					if (_0x729d52f61a5a9e22(1979337996) >= 30)
					{
						func_838(iParam0, 4194304, 1);
					}
				}
				else if (!func_835(iParam0, 8388608))
				{
					sVar0 = "spd_giant_birds";
					if (!is_ped_injured(Global_35))
					{
						if (_get_number_of_references_of_script_with_name_hash(get_hash_key(sVar0)) <= 0)
						{
							fVar1 = get_distance_between_coords(626.1385f, 2194.389f, 223.0786f, get_entity_coords(Global_35, true, false), false);
							if (func_839(Global_40.f_11623[iParam0]->f_2))
							{
								func_483(Global_40.f_11623[iParam0]->f_2, &uVar3, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8);
								if ((iVar6 >= 1 || iVar7 >= 1) || iVar8 >= 1)
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
							if (bVar2)
							{
								if (func_840(&((*Global_1396257)[iParam0]->f_626), 8192))
								{
									if (fVar1 >= 300f)
									{
										func_841(&((*Global_1396257)[iParam0]->f_626), 8192, 0);
									}
								}
							}
							if (((((((fVar1 <= 200f && bVar2) && func_842(1)) && func_150((*(*Global_1396257)[iParam0])[0]->f_1)) && !func_840(&((*Global_1396257)[iParam0]->f_626), 8192)) && func_646(0) != 1) && func_646(0) != 8) && is_screen_faded_in())
							{
								if (!func_840(&((*Global_1396257)[iParam0]->f_626), 4096))
								{
									request_script(sVar0);
									func_841(&((*Global_1396257)[iParam0]->f_626), 4096, 1);
								}
								if (has_script_loaded(sVar0))
								{
									start_new_script(sVar0, 512);
									set_script_as_no_longer_needed(sVar0);
									func_841(&((*Global_1396257)[iParam0]->f_626), 4096, 0);
								}
							}
							else if (func_840(&((*Global_1396257)[iParam0]->f_626), 4096))
							{
								set_script_as_no_longer_needed(sVar0);
								func_841(&((*Global_1396257)[iParam0]->f_626), 4096, 0);
							}
						}
					}
				}
			}
			break;
	}
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_342())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_342())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_342())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_342())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_342())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_342())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_342())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_156())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

bool func_348(int iParam0, bool bParam1, var uParam2)
{
	func_345(iParam0, 0);
	if (is_thread_active((*Global_1396257)[iParam0]->f_635, false))
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 16, 1);
		return false;
	}
	sVar0 = func_844(iParam0, func_843(iParam0));
	if (func_845(iParam0, func_843(iParam0), bParam1, uParam2))
	{
		if (!func_840(&((*Global_1396257)[iParam0]->f_626), 16))
		{
			if (!is_thread_active((*Global_1396257)[iParam0]->f_635, false))
			{
				if (!func_840(&((*Global_1396257)[iParam0]->f_626), 4))
				{
					request_script(sVar0);
					func_841(&((*Global_1396257)[iParam0]->f_626), 4, 1);
				}
				if (has_script_loaded(sVar0) && !is_screen_faded_out())
				{
					(*Global_1396257)[iParam0]->f_635 = start_new_script(sVar0, 1024);
					set_script_as_no_longer_needed(sVar0);
					func_841(&((*Global_1396257)[iParam0]->f_626), 2048, 0);
					func_841(&((*Global_1396257)[iParam0]->f_626), 4, 0);
					func_841(&((*Global_1396257)[iParam0]->f_626), 16, 1);
					if (_is_tracked_point_valid((*Global_1396257)[iParam0]->f_634))
					{
						destroy_tracked_point((*Global_1396257)[iParam0]->f_634);
						(*Global_1396257)[iParam0]->f_634 = 0;
					}
					Global_1415398->f_2++;
				}
				return true;
			}
			else
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 16, 1);
			}
		}
	}
	else
	{
		if (func_840(&((*Global_1396257)[iParam0]->f_626), 65536))
		{
			if (_is_tracked_point_valid((*Global_1396257)[iParam0]->f_634))
			{
				destroy_tracked_point((*Global_1396257)[iParam0]->f_634);
				(*Global_1396257)[iParam0]->f_634 = 0;
			}
			func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 0);
		}
		if (func_840(&((*Global_1396257)[iParam0]->f_626), 4))
		{
			set_script_as_no_longer_needed(sVar0);
		}
		func_841(&((*Global_1396257)[iParam0]->f_626), 4, 0);
		func_841(&((*Global_1396257)[iParam0]->f_626), 16, 0);
	}
	return false;
}

void func_349(int iParam0)
{
	if (!func_840(&((*Global_1396257)[iParam0]->f_626), 16))
	{
		return;
	}
	func_841(&((*Global_1396257)[iParam0]->f_626), 4, 0);
	func_841(&((*Global_1396257)[iParam0]->f_626), 16, 0);
	if (_does_volume_exist((*(*Global_1396257)[iParam0])[func_843(iParam0)]->f_47) && !Global_1935630->f_12)
	{
		if (!is_entity_in_volume(Global_35, (*(*Global_1396257)[iParam0])[func_843(iParam0)]->f_47, false, 0))
		{
			_delete_volume((*(*Global_1396257)[iParam0])[func_843(iParam0)]->f_47);
		}
	}
	if (!func_840(&((*Global_1396257)[iParam0]->f_626), 32))
	{
		if (func_846(iParam0, func_843(iParam0)))
		{
			func_841(&((*Global_1396257)[iParam0]->f_626), 32, 1);
		}
	}
}

void func_350()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_847(iVar0);
		iVar0++;
	}
}

bool func_351(int iParam0)
{
	switch (func_156())
	{
		case 76:
			if (iParam0 == 0 || iParam0 == 1)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 == 2 || iParam0 == 1)
			{
				return true;
			}
			break;
		case 120:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 115:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 38:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 92:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 105:
			if (iParam0 == 2)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_352(int iParam0)
{
	if (func_36() != -1)
	{
		return;
	}
	if (!func_848(Global_1935369->f_5[iParam0]->f_6))
	{
		return;
	}
	if (!func_849(iParam0, 1) && func_850(Global_1935369->f_5[iParam0]->f_5, 1, iParam0))
	{
		_0x18262cafebb5fbe1(Global_1935369->f_5[iParam0]->f_4, 10208, 0, 0, -1, func_851(Global_1935369->f_5[iParam0]->f_6), 0);
		_0xb56d41a694e42e86(Global_1935369->f_5[iParam0]->f_4, 10208, 0, 0, -1, func_851(Global_1935369->f_5[iParam0]->f_6), 0);
		func_852(Global_1935369->f_5[iParam0]->f_6, 0);
		func_853(Global_1935369->f_5[iParam0]->f_6, 1);
		vVar1 = { _0x3e2a25b2416dd67e(Global_1935369->f_5[iParam0]->f_4) };
		if (vVar1.x > vVar1.y)
		{
			fVar0 = vVar1.x;
		}
		else
		{
			fVar0 = vVar1.y;
		}
		fVar0 = (fVar0 * 0.85f);
		Global_1935369->f_5[iParam0]->f_8 = func_117(_0xf70f00013a62f866(Global_1935369->f_5[iParam0]->f_4), fVar0, "Saloon Lockdown", 1, 0, 0, 0, -1082130432);
		func_854(iParam0, 1);
	}
	else if (func_849(iParam0, 1) && !func_850(func_156(), 1, iParam0))
	{
		_0xa1cfb35069d23c23(Global_1935369->f_5[iParam0]->f_4);
		_0x74c2b3dc0b294102(Global_1935369->f_5[iParam0]->f_4);
		func_852(Global_1935369->f_5[iParam0]->f_6, 1);
		func_853(Global_1935369->f_5[iParam0]->f_6, 0);
		if (_0xf6a8a652a6b186cd(Global_1935369->f_5[iParam0]->f_8))
		{
			_0xfdfecc6ee4491e11(Global_1935369->f_5[iParam0]->f_8);
			Global_1935369->f_5[iParam0]->f_8 = 0;
		}
		func_855(iParam0, 1);
	}
}

void func_353()
{
	if (Global_1935369->f_5[&Global_1935369]->f_6 == -1 || func_185(Global_1935369->f_5[&Global_1935369]->f_1))
	{
		return;
	}
	if (func_36() == 0)
	{
		return;
	}
	if (!is_valid_interior(Global_1935369->f_5[&Global_1935369]->f_9) || !is_interior_ready(Global_1935369->f_5[&Global_1935369]->f_9))
	{
		Global_1935369->f_5[&Global_1935369]->f_9 = get_interior_at_coords(Global_1935369->f_5[&Global_1935369]->f_1);
		return;
	}
	if (func_849(&Global_1935369, 524288))
	{
		if (!func_849(&Global_1935369, 1048576))
		{
			uVar0 = _0x5d1c5d8e62e8ee1c(Global_1935369->f_5[&Global_1935369]->f_9);
			_0xbfcb17895bb99e4e(uVar0, 0);
			func_854(&Global_1935369, 1048576);
		}
	}
	else if (!func_849(&Global_1935369, 524288))
	{
		if (!func_849(&Global_1935369, 1048576))
		{
			uVar1 = _0x5d1c5d8e62e8ee1c(Global_1935369->f_5[&Global_1935369]->f_9);
			_0xbfcb17895bb99e4e(uVar1, 1);
			func_854(&Global_1935369, 1048576);
		}
	}
}

int func_354(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_355(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 9)
	{
		return;
	}
	if (&Global_1934051->f_94[iParam0])
	{
		if (!func_856(iParam0))
		{
			func_854(&Global_1935369, 4194304);
			func_855(&Global_1935369, 1024);
		}
		iVar0 = func_857(Global_1935369->f_5[&Global_1935369]->f_6);
		if ((((((func_850(Global_1935369->f_5[&Global_1935369]->f_5, 1, &Global_1935369) || func_849(&Global_1935369, 1)) || !func_271(iVar0)) || !func_509(iVar0, 1)) || func_157(get_player_index(), 1, 0, 1)) || func_849(&Global_1935369, 1024)) || func_849(&Global_1935369, 2048))
		{
			if (!func_849(&Global_1935369, 8192))
			{
				func_858(&(Global_1934051->f_23[iParam0]), 724623647);
				func_854(&Global_1935369, 8192);
			}
		}
		else
		{
			func_859(&(Global_1934051->f_23[iParam0]), 724623647);
			func_855(&Global_1935369, 8192);
		}
		if (func_860(iParam0))
		{
			if (!func_849(&Global_1935369, 16384))
			{
				func_858(&(Global_1934051->f_23[iParam0]), -1186550032);
				func_854(&Global_1935369, 16384);
			}
		}
		else if (func_849(&Global_1935369, 16384))
		{
			func_859(&(Global_1934051->f_23[iParam0]), -1186550032);
			func_855(&Global_1935369, 16384);
		}
	}
}

void func_356()
{
	if (func_36() == 0)
	{
		return;
	}
	if (Global_1935369->f_5[&Global_1935369]->f_6 == -1 || func_185(Global_1935369->f_5[&Global_1935369]->f_1))
	{
		return;
	}
	switch (Global_1935369->f_5[&Global_1935369]->f_6)
	{
		case 5:
			if (!func_861(&(Global_1899778->f_34[32])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[32]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[32]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
		case 6:
			if (!func_861(&(Global_1899778->f_34[19])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[19]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[19]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
		case 8:
			if (!func_861(&(Global_1899778->f_34[2])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[2]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[2]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
		case 0:
			if (!func_861(&(Global_1899778->f_34[0])) && !func_861(&(Global_1899778->f_34[23])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[0]), -1186550032);
				func_858(&(Global_1899778->f_34[23]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[0]), -1186550032);
				func_859(&(Global_1899778->f_34[23]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
		case 4:
			if (!func_861(&(Global_1899778->f_34[31])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[31]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[31]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
		case 2:
			if (!func_861(&(Global_1899778->f_34[27])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[27]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[27]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
		case 3:
			if (!func_861(&(Global_1899778->f_34[1])))
			{
				return;
			}
			if (!func_849(&Global_1935369, 65536) && !func_849(&Global_1935369, 32768))
			{
				func_858(&(Global_1899778->f_34[1]), -1186550032);
				func_854(&Global_1935369, 32768);
			}
			else if (func_849(&Global_1935369, 65536) && func_849(&Global_1935369, 32768))
			{
				func_859(&(Global_1899778->f_34[1]), -1186550032);
				func_855(&Global_1935369, 32768);
			}
			break;
	}
}

void func_357(int iParam0)
{
	if (!func_292(Global_1935369->f_5[iParam0]->f_10, 0))
	{
		iVar0 = _0x112ddf56300bc6e5(func_862(func_354(func_156(), iParam0)));
		if (_0x800df3fc913355f3(iVar0))
		{
			Global_1935369->f_5[iParam0]->f_10 = _0x31c70a716cae1fee(iVar0);
		}
		return;
	}
	else
	{
		if (!_0xea8f168a76a0b9bc(get_player_index(), Global_1935369->f_5[iParam0]->f_10, 7, 1))
		{
			_0xa3db37edf9a74635(get_player_index(), Global_1935369->f_5[iParam0]->f_10, 7, 1, 1);
		}
		if (!_0xea8f168a76a0b9bc(get_player_index(), Global_1935369->f_5[iParam0]->f_10, 4, 1))
		{
			_0xa3db37edf9a74635(get_player_index(), Global_1935369->f_5[iParam0]->f_10, 4, 1, 1);
		}
	}
	if (!func_863(iParam0))
	{
		return;
	}
	if (!func_849(iParam0, 16777216) && is_ped_fleeing(Global_1935369->f_5[iParam0]->f_10))
	{
		func_854(iParam0, 16777216);
	}
	if (!_does_volume_exist(Global_1935369->f_5[iParam0]->f_4))
	{
		return;
	}
	bVar1 = is_entity_in_volume(Global_1935369->f_5[iParam0]->f_10, Global_1935369->f_5[iParam0]->f_4, true, 0);
	if (!bVar1 && !func_849(iParam0, 131072))
	{
		func_854(iParam0, 131072);
		if (get_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 130, true))
		{
			set_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 130, false);
		}
		if (get_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 315, true))
		{
			set_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 315, false);
		}
		func_854(iParam0, 2097152);
	}
	else if (bVar1 && func_849(iParam0, 131072))
	{
		if (!get_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 130, true))
		{
			set_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 130, true);
		}
		if (!get_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 315, true))
		{
			set_ped_config_flag(Global_1935369->f_5[iParam0]->f_10, 315, true);
		}
		func_855(iParam0, 131072);
	}
}

bool func_358(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_359(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_360(int iParam0)
{
	if (is_entity_dead(player_ped_id()))
	{
		return;
	}
	if (!func_863(iParam0))
	{
		return;
	}
	if (!_does_volume_exist(Global_1935369->f_5[iParam0]->f_4))
	{
		return;
	}
	Global_1935369->f_5[iParam0] = is_entity_in_volume(player_ped_id(), Global_1935369->f_5[iParam0]->f_4, true, 0);
}

bool func_361(var uParam0)
{
	vVar0 = { func_864(&Global_1935369) };
	if (func_185(vVar0))
	{
		return false;
	}
	if (func_849(&Global_1935369, 1))
	{
		return false;
	}
	if (func_358(&Global_1935630, 2097152))
	{
		return false;
	}
	if (func_704(Global_35, 0))
	{
		return false;
	}
	if (is_ped_on_mount(Global_35))
	{
		return false;
	}
	if (!is_ped_ragdoll(Global_35) && is_ped_on_vehicle(Global_35, false))
	{
		return false;
	}
	*uParam0 = get_distance_between_coords(Global_36, vVar0, false);
	fVar3 = 30f;
	if (*uParam0 < fVar3)
	{
		return true;
	}
	return false;
}

void func_362()
{
	if (!is_thread_active(&(Global_1935369->f_46[&Global_1935369]), false))
	{
		if (has_script_loaded("saloon_dining"))
		{
			if (get_number_of_free_stacks_of_this_size(6005) > 0)
			{
				vVar0.x = Global_1935369->f_5[&Global_1935369]->f_6;
				vVar0.f_1 = &Global_1935369;
				vVar0.f_2 = { Global_1935369->f_5[&Global_1935369]->f_1 };
				Global_1935369->f_46[&Global_1935369] = start_new_script_with_args("saloon_dining", &vVar0, 5, 6005);
				set_script_as_no_longer_needed("saloon_dining");
			}
		}
		else
		{
			request_script("saloon_dining");
		}
	}
}

bool func_363()
{
	if (!func_863(&Global_1935369))
	{
		return false;
	}
	if (!&Global_1935369->f_5[&Global_1935369])
	{
		return false;
	}
	iVar0 = func_354(func_156(), &Global_1935369);
	switch (iVar0)
	{
		case 1:
		case 3:
		case 5:
			if (func_849(&Global_1935369, 1))
			{
				return false;
			}
			if (func_358(&Global_1935630, 2097152))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_364()
{
	if (!is_thread_active(&(Global_1935369->f_42[&Global_1935369]), false))
	{
		if (has_script_loaded("saloon_conversations"))
		{
			vVar0.x = Global_1935369->f_5[&Global_1935369]->f_6;
			vVar0.f_1 = &Global_1935369;
			vVar0.f_2 = { Global_1935369->f_5[&Global_1935369]->f_1 };
			Global_1935369->f_42[&Global_1935369] = start_new_script_with_args("saloon_conversations", &vVar0, 5, 1024);
			set_script_as_no_longer_needed("saloon_conversations");
		}
		else
		{
			request_script("saloon_conversations");
		}
	}
}

void func_365()
{
	switch (iLocal_163)
	{
		case 0:
			if (func_865())
			{
				iLocal_163 = 1;
			}
			break;
		case 1:
			if (Global_1935369->f_41 != func_156())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_611(&(Global_1935369->f_55[iVar0]));
					func_611(&(Global_1935369->f_58[iVar0]));
					func_611(&(Global_1935369->f_64[iVar0]));
					func_611(&(Global_1935369->f_61[iVar0]));
					iVar0++;
				}
				iLocal_163 = 0;
			}
			break;
	}
}

bool func_366()
{
	if (func_36() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_367()
{
	if (Global_1934266->f_56)
	{
		return false;
	}
	return true;
}

int func_368(vector3 vParam0)
{
	return func_866(_get_map_zone_at_coords(vParam0, 10));
}

bool func_369(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_867((*Global_1835011)[iParam0]->f_1);
}

void func_370()
{
	vVar0 = { get_gameplay_cam_rot(2) };
	Var3.f_8 = -1082130432;
	Var3 = { _get_object_offset_from_coords(get_gameplay_cam_coord(), vVar0.z, 0f, -1f, 0f) };
	Var3.f_3 = { get_ped_bone_coords(Global_35, 21030, 0f, 0f, 0f) };
	Var3.f_7 = 1000f;
	Var3.f_12 = 1;
	Var3.f_6 = 1402226560;
	_fire_single_bullet_ignore_entity_new(&Var3);
}

void func_371(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_372(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_868(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_869(iParam0))
	{
		return false;
	}
	if (func_870(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_871(iParam0, 1)) || func_359(32768))
	{
		if (!func_871(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_872())
	{
		return false;
	}
	return true;
}

void func_373(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_374()
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

int func_375(int iParam0)
{
	if (!func_304(iParam0))
	{
		return -1;
	}
	return func_874(func_873(iParam0));
}

bool func_376(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_377(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_378(int iParam0)
{
	if (!func_377(iParam0))
	{
		return false;
	}
	if (func_107(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_379(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_875(&Global_0, 8);
	}
	if (!func_744() || func_36() != -1)
	{
		return;
	}
	func_875(&Global_0, 1);
}

bool func_380()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

char* func_381(int iParam0)
{
	iVar0 = func_384(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_876(iVar0);
}

var func_382(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_383(int iParam0)
{
	if (!func_377(iParam0))
	{
		return false;
	}
	if (func_107(iParam0, 4))
	{
		return true;
	}
	return false;
}

int func_384(int iParam0)
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

void func_385(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_877(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_878(Var0);
}

void func_386()
{
	if (!is_ped_injured(Global_35))
	{
		set_ped_config_flag(Global_35, 265, true);
	}
	func_879(0, 5, 1, 1, 0);
	func_879(1, 5, 1, 1, 0);
	Global_40.f_11095.f_35 = 0;
	func_880(65, 1, 9, 0, 0, 0, 0, 0);
	func_881(13, 0f);
	Global_40.f_11095.f_40 = -100f;
	Global_40.f_11095.f_41 = 100f;
	Global_1347477->f_201 = 1;
	Global_1347477->f_184 = -1;
	Global_40.f_11095.f_67 = -1;
	Global_1347477->f_190 = 0;
	func_882(1, 0, 0);
	func_882(2, 0, 0);
	func_882(3, 0, 0);
}

void func_387(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_string(Global_1955569->f_5.f_2[iVar0]->f_1, func_883(iVar0, bParam0));
		_databinding_write_data_string(Global_1955569->f_5.f_2[iVar0]->f_2, func_884());
		iVar0++;
	}
}

void func_388(int iParam0, var uParam1)
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
		iVar166 = func_885(iVar0, 1);
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
	func_886(iParam0, &(uParam1->f_118));
}

void func_389(int iParam0, var uParam1)
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
		if (func_99(iVar31))
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

void func_390(int iParam0)
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

void func_391(var uParam0, int iParam1)
{
	iVar0 = func_887(iParam1);
	_0xb285ad0ec870b2df(uParam0, iVar0);
	func_888();
}

void func_392(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_36();
	}
	if (iVar0 == -1)
	{
		switch (iParam0)
		{
			case 225514697:
				func_889(-2125499975);
				break;
			case 11966224:
				func_889(1160113249);
				break;
			default:
				break;
		}
		return;
	}
	if (iParam0 == -171876066)
	{
		func_889(2026485318);
	}
	else if (iParam0 == -1481695040)
	{
		func_889(24043185);
	}
}

void func_393()
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
		func_890(iVar0);
		iVar0++;
	}
	if (does_entity_exist(Global_1900383->f_393))
	{
		delete_object(&(Global_1900383->f_393));
	}
	Global_40.f_1095.f_1[0]->f_8 = func_891();
	Global_40.f_1095.f_1[0]->f_9 = func_892();
	Global_40.f_1095.f_1[0]->f_10 = func_893();
	func_894(&Var2);
	func_895(0, Var2);
	func_896(0, 1);
	func_897(0);
	uVar4 = Global_40.f_1095.f_1[0]->f_9;
	iVar5 = 1;
	fVar6 = to_float(get_default_attribute_points_needed_for_rank(uVar4, 7, iVar5));
	Global_40.f_1095.f_1[0]->f_372 = iVar5;
	Global_40.f_1095.f_1[0]->f_372.f_1 = fVar6;
	func_898(&Var7);
	func_899(Var7);
	func_900(0);
	func_901(0);
	func_902(0f, 0f, 0f);
	func_903(-15);
}

void func_394()
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
		func_890(iVar0);
		iVar0++;
	}
	if (does_entity_exist(Global_1900383->f_393))
	{
		delete_object(&(Global_1900383->f_393));
	}
	Global_40.f_1095.f_1[0]->f_8 = func_904();
	Global_40.f_1095.f_1[0]->f_9 = func_905();
	Global_40.f_1095.f_1[0]->f_10 = func_906();
	func_894(&Var2);
	func_895(0, Var2);
	func_896(0, 1);
	func_897(0);
	uVar4 = Global_40.f_1095.f_1[0]->f_9;
	iVar5 = 1;
	fVar6 = to_float(get_default_attribute_points_needed_for_rank(uVar4, 7, iVar5));
	Global_40.f_1095.f_1[0]->f_372 = iVar5;
	Global_40.f_1095.f_1[0]->f_372.f_1 = fVar6;
	func_898(&Var7);
	func_899(Var7);
	func_900(0);
	func_901(0);
}

int func_395(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_907(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_908(iParam1);
	return func_909(iParam0, iVar0, bParam2, bParam2);
}

void func_396()
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
	func_910(8);
	func_910(16);
}

void func_397()
{
	func_911(&(Global_1946804->f_2776));
	func_910(32768);
	func_912(1108822547, 8, 6);
}

void func_398(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_913(iVar1, 0))
		{
			func_914(iVar1, 0, bParam0);
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

bool func_399(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_915(iParam6);
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
		func_917(uParam0, func_916(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_918(iVar3, 1);
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
							if (func_919(iVar3) && func_920(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_921(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

void func_400()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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
	func_922();
	func_923(iParam1, iParam2, iParam3);
	if ((iParam1 == 0 && iParam2 == 0) && iParam3 == 0)
	{
		func_924(iParam0, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_924(iParam0, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam4)
	{
		if (is_ped_a_player(iParam0))
		{
			func_385(1, 64, 0, 0, 0);
		}
		else
		{
			func_385(1, 64, 1, iParam0, 0);
		}
	}
	func_925(1);
}

void func_402()
{
	func_925(0);
	func_926(0, Global_1946804->f_2653, 0);
	func_926(1, Global_1946804->f_2654, 0);
	func_926(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	*Global_1946804->f_1497.f_1[iVar1] = { *Global_1946804->f_1378.f_1[iVar1] };
	*Global_1946804->f_1497.f_1[iVar2] = { *Global_1946804->f_1378.f_1[iVar2] };
	*Global_1946804->f_1497.f_1[iVar3] = { *Global_1946804->f_1378.f_1[iVar3] };
	func_927();
	func_928();
}

void func_403(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_40.f_7748.f_1;
	}
	func_922();
	func_929(iParam1);
	if (bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_385(1, 64, 0, 0, 0);
		}
		else
		{
			func_385(1, 64, 1, iParam0, 0);
		}
	}
	func_925(1);
}

void func_404()
{
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0];
	if (!func_930() && func_931(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0] = func_932(iVar1);
	}
	func_925(0);
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_933();
	Global_40.f_7748.f_2 = func_934();
	func_935(Global_1946804->f_2656, 0);
	func_936();
}

void func_405(int iParam0)
{
	if (func_36() == -1)
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
		iVar0 = func_918(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_937(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

void func_406(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_938()) || bParam5)
		{
			func_400();
		}
	}
	if (func_36() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_939(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_384(Global_40.f_7729);
				Global_1946804->f_1378 = func_384(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_426(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_940(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_941(0, 1);
	}
	func_925(0);
}

void func_407(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_942(&(Global_1946804->f_1497), iParam0);
	if (bParam2)
	{
		func_943(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_941(0, 1);
	}
}

void func_408(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 || iParam0);
}

bool func_409(int iParam0, int iParam1)
{
	if (func_36() == -1)
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

bool func_410(int iParam0, int iParam1)
{
	iVar0 = func_915(iParam1);
	func_944(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

void func_411(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_945(iParam0))
	{
		return;
	}
	iVar0 = func_946(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_947(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_947(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_947(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_947(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_947(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_947(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_948(0))
	{
		func_949(iParam0, 1);
		if (func_950() == 1160113249)
		{
			func_949(func_948(-2125499975), 0);
		}
		else
		{
			func_949(func_948(1160113249), 0);
		}
	}
	func_951();
	if (func_952(iVar0))
	{
		_0x766315a564594401(func_953(0), iParam0, 0);
	}
	func_954(iParam0, bParam3);
	if (bParam2)
	{
		func_941(0, 0);
	}
}

void func_412(int iParam0, var uParam1, bool bParam2)
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
		if (func_99(uParam1[iVar0]))
		{
			if (func_955(uParam1[iVar0]))
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
	func_956(iParam0, &(uParam1->f_118), 1);
}

void func_413(int iParam0, var uParam1)
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
				if (func_955(uParam1[iVar0]))
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

int func_414(int iParam0)
{
	iVar8 = func_957(&uVar0, iParam0, 0);
	iVar9 = func_958(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (func_959(iParam0, 256))
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
	if (_0xa2091482ed42ef85(Global_35, &uVar0) > _0xa2091482ed42ef85(Global_35, &uVar4) && !func_959(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_415()
{
	iVar0 = func_960();
	bVar1 = (!func_358(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
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
			func_961();
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
			if (!func_713(9))
			{
				set_ped_reset_flag(Global_35, 135, true);
			}
			if (!func_713(14))
			{
				set_ped_reset_flag(Global_35, 144, true);
			}
			if (!func_713(36))
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
			else if ((is_screen_faded_out() && func_299()) && !func_103(0, 0, 1))
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
		if (func_36() == -1 && _0x139efb0a71dd9011())
		{
			_uiprompt_enable_prompt_type_this_frame(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_416(bool bParam0)
{
	if (func_36() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_417(bool bParam0, bool bParam1)
{
	if (func_36() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_962();
	if (bParam1)
	{
		func_963(-1);
	}
}

void func_418(bool bParam0)
{
	if (func_36() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_964();
}

void func_419()
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (func_713(iVar0))
		{
			func_965(iVar0);
		}
		else
		{
			func_966(iVar0);
		}
		iVar0++;
	}
}

void func_420()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11095.f_11)
	{
		iVar1 = round(&(Global_40.f_11095.f_11[iVar0]));
		if (func_967(iVar0))
		{
			if (func_968(iVar0))
			{
				set_attribute_points(Global_35, iVar0, iVar1);
			}
			else
			{
				set_attribute_points(Global_35, iVar0, func_969(iVar1));
			}
		}
		iVar0++;
	}
}

void func_421()
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

int func_422(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_938();
	}
	if (func_36() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_423(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_424()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_970(1))
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
	task_play_anim(Global_35, func_971(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_910(1);
	remove_anim_dict(func_971());
}

bool func_425(int iParam0)
{
	return false;
}

int func_426(int iParam0)
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

void func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_972(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_36() != -1)
	{
		return;
	}
	func_922();
	if (bParam5)
	{
		if (!func_973(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_970(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_397();
	}
	func_406(iVar3, 1, 1, 1, 1, 1);
	func_385(31, 0, 0, 0, 0);
	func_974(0);
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
			func_385(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_385(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_975(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_428(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

int func_429(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return -1;
	}
	return Global_40.f_9571[iParam0]->f_1;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 1:
			return 2;
		case 0:
			return 2;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_431(int iParam0, int iParam1, bool bParam2)
{
	if (func_498(iParam0, 0))
	{
		Global_40.f_9571[iParam0]->f_1 = iParam1;
	}
}

bool func_432(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_433(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_434(int iParam0)
{
	return (Global_1392135->f_1 && iParam0) != 0;
}

bool func_435()
{
	if (Global_1392135->f_54 > 0)
	{
		iVar0 = (func_140() / 1000);
		if ((iVar0 - Global_1392135->f_54) > 960)
		{
			return true;
		}
	}
	return false;
}

void func_436()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if ((((func_651(iVar0, 16777216) && iVar0 != 94) && iVar0 != 96) && iVar0 != 99) && iVar0 != 77)
		{
			func_976(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_437(int iParam0)
{
	Global_1392135->f_1 = (Global_1392135->f_1 || iParam0);
}

void func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 2:
			break;
		case 1:
			break;
		case 4:
			break;
	}
	if (func_977(2, iParam0))
	{
		func_978(iParam0, 0);
	}
}

void func_439(int iParam0)
{
	if (func_498(iParam0, 0))
	{
		Global_40.f_9571[iParam0]->f_2 = 0;
	}
}

void func_440()
{
}

bool func_441(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_115(1, iParam0))
	{
		return true;
	}
	if (func_977(16, iParam0))
	{
		return true;
	}
	if (func_979(iParam0) >= 4)
	{
		if (_0x336b3d200ab007cb(Global_35, Global_36, 150f, 512) <= 0)
		{
			return true;
		}
	}
	return false;
}

void func_442(int iParam0, bool bParam1)
{
	if (!func_115(1, iParam0))
	{
		if (!func_498(iParam0, 0))
		{
		}
		func_980(16, iParam0);
		func_981(1, iParam0);
	}
}

float func_443(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_444()
{
	if (func_103(22530, 1, 1))
	{
		return false;
	}
	if (func_324())
	{
		return false;
	}
	if (func_982(2))
	{
		return false;
	}
	if (func_983() < 0)
	{
		return true;
	}
	fVar0 = ((func_466() - func_984()) - 60f);
	if (fVar0 < 0f)
	{
		return false;
	}
	return true;
}

void func_445(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_985(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_986(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_987(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_446(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bVar0 = (func_449() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

int func_447(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return Global_1392135->f_3 == iParam0;
	}
	else
	{
		return func_988(iParam0, Global_36, iParam2);
	}
	return 0;
}

void func_448(int iParam0)
{
	if (_does_volume_exist((*Global_1392050)[iParam0]->f_13))
	{
		_delete_volume((*Global_1392050)[iParam0]->f_13);
	}
}

bool func_449()
{
	if (func_36() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return false;
		case 3:
		case 4:
		case 5:
			return true;
	}
	return false;
}

bool func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
			return true;
		case 3:
		case 4:
			return false;
	}
	return false;
}

bool func_452()
{
	iVar0 = func_342();
	if (func_559(iVar0))
	{
		if (iVar0 != func_989())
		{
			if (func_989() == 1)
			{
				if (!func_990(512))
				{
					func_991(512);
				}
			}
			func_992(iVar0);
			return true;
		}
	}
	return false;
}

bool func_453()
{
	iVar0 = func_446(func_989(), 0, 0, 0);
	if (func_498(iVar0, 0))
	{
		if (iVar0 != func_137())
		{
			func_993(iVar0);
			return true;
		}
	}
	return false;
}

bool func_454()
{
	iVar0 = func_994(func_989());
	if (func_498(iVar0, 0))
	{
		if (func_994(func_989()) != func_995())
		{
			func_996(func_994(func_989()));
			return true;
		}
	}
	return false;
}

void func_455()
{
	if (&Global_1392135 != 0)
	{
		return;
	}
	func_997(0, 32, 2);
	switch (&Global_1392135->f_47[0])
	{
		case 0:
			if (func_998(0, 1))
			{
				if (!func_999(5, 0))
				{
					StringCopy(&cVar1, "Bridge Trap", 64);
					func_1000(0, 5, &cVar1, 0);
				}
				if (!func_1001(0, 0))
				{
					StringCopy(&cVar1, "ODR Road Precursor ", 64);
					iVar0 = 0;
					while (iVar0 < func_1002(0))
					{
						func_1000(0, 0, &cVar1, iVar0);
						iVar0++;
					}
				}
				func_1003(0, 1);
			}
			else if (func_193())
			{
				func_1003(0, 1);
			}
			break;
		case 1:
			if (func_998(0, 1))
			{
			}
			else
			{
				func_1004(0, 5, 0);
				iVar0 = 0;
				while (iVar0 < func_1002(0))
				{
					func_1004(0, 0, iVar0);
					iVar0++;
				}
				if (func_193())
				{
					func_1003(0, 3);
				}
				else
				{
					func_1003(0, 2);
				}
			}
			break;
		case 2:
			if (func_193())
			{
				func_1003(0, 3);
			}
			else if (func_998(0, 1))
			{
				func_1003(0, 0);
			}
			break;
		case 3:
			if (!func_193())
			{
				func_1003(0, 0);
			}
			break;
	}
}

void func_456()
{
	func_997(2, 64, 4);
}

void func_457()
{
	func_997(1, 128, 8);
	if (!func_1005(1, 1))
	{
		if (!func_129(Global_1393447, 128) && !func_990(8))
		{
			if (!func_129(Global_1393447, 4096) && func_446(func_342(), 0, 0, 0) == 1)
			{
				if (func_998(1, 1))
				{
					if (!func_999(18, 0))
					{
						vVar0 = { func_475(18, 0) };
						func_1006(vVar0, 256);
						func_117(vVar0, 120f, "Forest Ambush", 1, 0, 256, 0, -1082130432);
					}
					else
					{
						func_991(64);
					}
					func_131(Global_1393447, 4096);
				}
			}
			else if (!func_990(64) && func_129(Global_1393447, 4096))
			{
				if (func_999(18, 0) || func_1001(18, 0))
				{
					vVar0 = { func_475(18, 0) };
					func_1006(vVar0, 256);
					func_991(64);
					return;
				}
				if (!func_998(1, 1))
				{
					vVar0 = { func_475(18, 0) };
					func_1006(vVar0, 256);
					func_130(Global_1393447, 4096);
				}
			}
		}
	}
}

void func_458()
{
	func_997(3, 256, 16);
	if (func_1005(3, 1))
	{
		if (!func_129(Global_1393447, 16384) && !func_990(16))
		{
			if (func_998(3, 1) || func_998(4, 1))
			{
				vVar0 = { func_475(26, 0) };
				func_1006(vVar0, 256);
				func_117(vVar0, 120f, "River Ambush", 1, 0, 256, 0, -1082130432);
				func_131(Global_1393447, 16384);
			}
		}
		else if (!func_990(256))
		{
			if (func_999(26, 0) || func_1001(26, 0))
			{
				vVar0 = { func_475(26, 0) };
				func_1006(vVar0, 256);
				func_991(256);
				return;
			}
			if (!func_998(3, 1) && !func_998(4, 1))
			{
				vVar0 = { func_475(26, 0) };
				func_1006(vVar0, 256);
				func_130(Global_1393447, 16384);
			}
		}
	}
}

void func_459()
{
	func_997(4, 512, 32);
}

void func_460()
{
	func_997(5, 8192, 128);
}

bool func_461()
{
	return !func_129(Global_1393447, 1024);
}

void func_462(int iParam0)
{
	Global_1393447->f_1 = iParam0;
}

bool func_463()
{
	return Global_1310750->f_16077 != 0;
}

bool func_464()
{
	if (func_473() != 6)
	{
		return false;
	}
	if (func_193())
	{
		func_462(23);
		return false;
	}
	if (Global_1393447->f_60 > func_466())
	{
		func_462(9);
		return false;
	}
	if (!func_150(46))
	{
		return false;
	}
	return true;
}

bool func_465()
{
	if (func_193())
	{
		func_462(23);
		return false;
	}
	if ((func_466() - func_984()) < 30f)
	{
		func_462(3);
		return false;
	}
	if (!func_1007())
	{
		func_462(19);
		return false;
	}
	if (!func_1008(func_137()))
	{
		func_462(16);
		return false;
	}
	if (Global_1393447->f_60 > func_466())
	{
		func_462(9);
		return false;
	}
	return true;
}

float func_466()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_467()
{
	if (!does_entity_exist(Global_1935630->f_40))
	{
		return 0;
	}
	return 1;
}

bool func_468(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
}

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 18;
		case 2:
			return 11;
		case 3:
			return 24;
		case 4:
			return 29;
		case 5:
			return 31;
		case 10:
			return 43;
		default:
			break;
	}
	return 34;
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 23;
		case 2:
			return 17;
		case 3:
			return 28;
		case 4:
			return 30;
		case 5:
			return 33;
		case 10:
			return 43;
		default:
			break;
	}
	return 42;
}

bool func_471(int iParam0, bool bParam1, bool bParam2)
{
	if (func_1009(iParam0))
	{
		if (func_1010(iParam0, bParam1, bParam2))
		{
			if ((!func_999(iParam0, 1) && !func_1001(iParam0, 1)) && !func_1011(iParam0))
			{
				func_1012(iParam0);
				if (func_1013(iParam0, -1, 0) && func_1014(iParam0, func_474()))
				{
					Global_1393447->f_3 = iParam0;
					return true;
				}
			}
		}
	}
	return false;
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	if (*iParam0 == -1)
	{
		*iParam0 = iParam2;
		*iParam1 = func_474();
		fVar0 = get_distance_between_coords(Global_36, func_475(*iParam0, *iParam1), true);
	}
	else
	{
		fVar1 = get_distance_between_coords(Global_36, func_475(*iParam0, func_474()), true);
		if (fVar1 < fVar0)
		{
			*iParam0 = iParam2;
			*iParam1 = func_474();
			fVar0 = fVar1;
		}
	}
}

int func_473()
{
	return Global_40.f_4283;
}

int func_474()
{
	return Global_1393447->f_54;
}

Vector3 func_475(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 261.4119f, 168.1394f, 97.095f;
				case 1:
					return -71.9f, 314.6f, 108.1f;
				case 2:
					return -247.9203f, 499.8062f, 94.8408f;
				case 3:
					return -265.6117f, -258.6254f, 91.1275f;
				case 4:
					return 947.9633f, 392.5947f, 110.4447f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 36:
			switch (iParam1)
			{
				case 0:
					return 37.4f, 576f, 130.9528f;
				case 1:
					return 82.3596f, 414.8434f, 126.6896f;
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 38:
			switch (iParam1)
			{
				case 0:
					return -99.1603f, 295.7463f, 102.7589f;
				default:
					break;
			}
			break;
		case 6:
		case 42:
			switch (iParam1)
			{
				case 0:
					return -605.1606f, 415.9453f, 95.278f;
				case 1:
					return 647.687f, -566.0206f, 73.8882f;
				case 2:
					return 156.9574f, 589.7143f, 124.4553f;
				default:
					break;
			}
			break;
		case 5:
		case 35:
			switch (iParam1)
			{
				case 0:
					return -1110.081f, 126.4462f, 55.3198f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				default:
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				case 1:
					return 839.995f, -692.6373f, 66.1221f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 37:
			switch (iParam1)
			{
				case 0:
					return 340.1664f, 224.1398f, 101.5865f;
				case 1:
					return -368.3074f, 115.4362f, 40.7802f;
				case 2:
					return -1061.945f, -445.6989f, 80.26047f;
				case 3:
					return -1283.033f, 16.5433f, 53.7479f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				case 1:
					return 925.174f, -1145.063f, 53.314f;
				case 2:
					return 1426.139f, -1437.182f, 78.244f;
				case 3:
					return 1480.597f, -1043.651f, 54.8389f;
				case 4:
					return 2156.54f, -1319.13f, 41.4469f;
				case 5:
					return 1321.881f, -1679.864f, 66.872f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1497.896f, -719.2251f, 47.15442f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 925.6f, -1145f, 53f;
				case 1:
					return 1485.047f, -1042.127f, 52.9948f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1717.905f, -2066.761f, 42.9164f;
				case 1:
					return 1475.829f, -2229.839f, 42.6941f;
				case 2:
					return 2153.501f, -1302.344f, 42.1521f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1240.883f, -859.2491f, 69.91452f;
				case 1:
					return 991.1385f, -889.2033f, 70.3542f;
				default:
					break;
			}
			break;
		case 17:
		case 39:
			switch (iParam1)
			{
				case 0:
					return 2139.084f, -1322.471f, 41.6526f;
				case 1:
					return 2162.225f, -960.3032f, 41.7974f;
				case 2:
					return 1153.882f, -1502.448f, 52.6003f;
				case 3:
					return 1490.574f, -1001.085f, 48.9639f;
				case 4:
					return 1659.413f, -1597.443f, 55.4104f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 2355.17f, 1680.76f, 95.341f;
				case 1:
					return 2606.643f, 1809.042f, 91.94587f;
				case 2:
					return 2627.776f, 1314.441f, 113.6464f;
				case 3:
					return 2853.661f, 869.5517f, 49.258f;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 2466.44f, 1326.504f, 108.6252f;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 2737.724f, 836.7189f, 83.38937f;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2814.25f, 445.3571f, 63.1659f;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -2361.181f, -1483.392f, 140.8987f;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -1554.11f, -1211.528f, 73.6863f;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return -1298.058f, -1248.784f, 81.8463f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1424.421f, -956.7158f, 61.702f;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return -2089.884f, -1624.694f, 132.9787f;
				case 1:
					return -2169.37f, -1187.876f, 132.733f;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return -3285.6f, -2630.4f, 4.9f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -5233.051f, -2902.402f, 1.486f;
				default:
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return -3827.842f, -2983.152f, -7.33933f;
				case 1:
					return -4181.152f, -2308.259f, 0.004f;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 1903.304f, 1642.989f, 170.1826f;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 2386.82f, 751.7125f, 66.2341f;
				case 1:
					return 2678.968f, 268.3763f, 62.3124f;
				case 2:
					return 1904.455f, 498.3759f, 122.2237f;
				case 3:
					return 2832.23f, 927.7681f, 47.4658f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_476(var uParam0)
{
	Global_1393447->f_49 = uParam0;
}

int func_477(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)
{
	if (!does_script_exist(sParam0))
	{
		return 0;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return 0;
	}
	start_new_script_with_args(sParam0, &uParam1, 10, iParam11);
	set_script_as_no_longer_needed(sParam0);
	return 1;
}

int func_478(char* sParam0, int iParam1)
{
	if (!does_script_exist(sParam0))
	{
		return 0;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return 0;
	}
	start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return 1;
}

void func_479(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

int func_480()
{
	return &Global_1899515;
}

bool func_481(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_482(int iParam0)
{
	if (!func_481(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

void func_483(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1015(func_480(), iParam0, uParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

int func_484(int iParam0, int iParam1)
{
	if (!func_1016(iParam0))
	{
		return 0;
	}
	if (!func_744())
	{
		return 0;
	}
	if (!func_1017(iParam0, &iVar0, &iVar1))
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

bool func_485(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_486(int iParam0, bool bParam1)
{
	switch (func_1018(iParam0))
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

int func_487(int iParam0)
{
	return func_1019(iParam0, 6);
}

int func_488(int iParam0)
{
	iVar0 = func_1020(iParam0, 6);
	return iVar0;
}

int func_489(int iParam0)
{
	return func_1019(iParam0, 7);
}

int func_490(int iParam0)
{
	iVar0 = func_1020(iParam0, 7);
	return iVar0;
}

bool func_491(int iParam0)
{
	return (func_1019(iParam0, 4) || func_1019(iParam0, 5));
}

int func_492(int iParam0)
{
	iVar0 = func_1020(iParam0, 4);
	if (!does_entity_exist(iVar0))
	{
		iVar1 = func_1020(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

bool func_493(int iParam0)
{
	iParam0 = func_1021(iParam0);
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

int func_494(int iParam0)
{
	iParam0 = func_1021(iParam0);
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

bool func_495(int iParam0, char* sParam1)
{
	if (decor_exist_on(iParam0, sParam1))
	{
		return decor_get_bool(iParam0, sParam1);
	}
	return false;
}

bool func_496()
{
	if (!func_1022())
	{
		func_1023(2);
	}
	else
	{
		func_1024(2);
	}
	return func_1025();
}

int func_497(int iParam0)
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

bool func_498(int iParam0, bool bParam1)
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

int func_499(bool bParam0, bool bParam1, bool bParam2)
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

bool func_500()
{
	return func_358(&Global_1935630, 4096);
}

bool func_501()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1026(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1027())
	{
		return func_1026(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1026(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_503(int iParam0)
{
	if (!func_559(iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	switch (iParam0)
	{
		case 8:
			return -1;
		case 3:
		case 5:
		case 9:
			iVar0 = 3;
			break;
		case 6:
		case 10:
			iVar0 = 4;
			break;
		case 1:
		case 7:
			iVar0 = 2;
			break;
		case 0:
		case 2:
			iVar0 = 6;
			break;
		case 4:
		case 12:
			iVar0 = 1;
			break;
		case 11:
			iVar0 = 5;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 0;
			break;
	}
	if (func_1028(iVar0))
	{
		iVar0 = func_1029(iVar0);
	}
	return iVar0;
}

bool func_504(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return (func_103(0, 0, 1) && !func_154(iParam0, 1));
}

char* func_505(int iParam0)
{
	if (!func_485(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 3:
			return "law_office_val";
		case 2:
			return "law_office_stw";
		case 5:
			return "law_office_rho";
		case 4:
			return "law_office_asb";
		case 6:
			return "law_office_std";
		case 1:
			return "law_office_blw";
		case 0:
			return "law_office_twd";
		default:
			break;
	}
	return "";
}

bool func_506()
{
	return (func_103(0, 0, 1) && !func_1030(1));
}

bool func_507(bool bParam0)
{
	if (func_36() == 0)
	{
		return false;
	}
	if (!func_320(94))
	{
		return false;
	}
	if ((func_1031(92) || func_1032(92)) || func_1033(92))
	{
		return false;
	}
	if (func_1030(2) && !bParam0)
	{
		return false;
	}
	if (bParam0 && ((((_0x1811a02277a9e49d() || !is_ped_in_any_vehicle(Global_35, false)) || is_ped_in_any_taxi(Global_35)) || _0x4e76cb57222a00e5(Global_35) != -1) || !func_512(get_entity_model(get_vehicle_ped_is_in(Global_35, false)))))
	{
		return false;
	}
	return true;
}

bool func_508()
{
	iVar0 = func_342();
	if ((((((iVar0 == 0 || iVar0 == 2) || iVar0 == 11) || iVar0 == 9) || iVar0 == 10) || iVar0 == 3) || iVar0 == 6)
	{
		return true;
	}
	return false;
}

bool func_509(int iParam0, bool bParam1)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_271(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_277(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_278(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_277(iParam0));
}

bool func_510(int iParam0)
{
	if (!func_686(iParam0))
	{
		return false;
	}
	if (func_269(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_511(int iParam0, int iParam1, var uParam2)
{
	if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
	{
		if (func_157(player_id(), 1, 0, 1))
		{
			*uParam2 = 1;
			return true;
		}
	}
	if (func_684(iParam1, 1048576))
	{
		*uParam2 = 4;
		return true;
	}
	if (func_358(&Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return true;
	}
	if (func_279(iParam0, iParam1))
	{
		*uParam2 = 3;
		return true;
	}
	if (func_702(iParam1) == 105 && func_1034(21))
	{
		*uParam2 = 4;
		return true;
	}
	if (func_1035(iParam0, &iVar0))
	{
		if (!func_1036(iParam1))
		{
			if (Global_1393529->f_3 == iVar0 && func_173(Global_1393529->f_3, 0, &(Global_1393529->f_256), &(Global_1393529->f_284), 0, 0))
			{
				*uParam2 = 5;
				return true;
			}
			if (!func_1037(iParam0))
			{
				*uParam2 = 6;
				return true;
			}
			if (is_ped_fleeing(iVar0))
			{
				*uParam2 = 6;
				return true;
			}
			if (get_is_task_active(iVar0, 0))
			{
				*uParam2 = 7;
				return true;
			}
		}
	}
	else if (func_686(iParam0))
	{
		if (func_271(Global_1914319->f_3[iParam0]->f_21))
		{
			iVar1 = func_277(Global_1914319->f_3[iParam0]->f_21);
			if (iVar1 != 0 && !_0x4afc7288c77238b3(iVar1))
			{
				*uParam2 = 6;
				return true;
			}
		}
	}
	return false;
}

bool func_512(int iParam0)
{
	switch (iParam0)
	{
		case -2053881888:
		case -1866132622:
		case -1861840953:
		case -1826304690:
		case -1758092337:
		case -1753201617:
		case -1708097161:
		case -1544786211:
		case -1426151250:
		case -1347283941:
		case -1278978750:
		case -1100387700:
		case -1008287740:
		case -999004291:
		case -824257932:
		case -570691410:
		case -405196566:
		case -377157708:
		case -283162583:
		case -136833353:
		case 47200842:
		case 93893176:
		case 150966765:
		case 219205323:
		case 374792535:
		case 822759307:
		case 1016623270:
		case 1596452133:
		case 1745694728:
		case 1761016051:
		case 1770617692:
		case 1874711736:
		case 2109471093:
			return true;
		default:
			break;
	}
	return false;
}

void func_513(var uParam0)
{
	func_1039(uParam0, (func_1038(uParam0) - 6f));
	func_1040(uParam0, 1);
}

void func_514(var uParam0)
{
	func_516(uParam0, 0);
	func_517(uParam0, 0);
	func_515(uParam0, 1);
	func_518(uParam0, 1);
	func_169(uParam0, 0);
	func_1041(uParam0, 1);
	func_671(uParam0, 1, 1, 1);
}

void func_515(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 256);
	}
	else
	{
		func_291(&(uParam0->f_1), 256);
	}
}

void func_516(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 16384);
	}
	else
	{
		func_291(&(uParam0->f_1), 16384);
	}
}

void func_517(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 2048);
	}
	else
	{
		func_291(&(uParam0->f_1), 2048);
	}
}

void func_518(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 16);
	}
	else
	{
		func_191(uParam0, 67108864);
		func_191(uParam0, 16);
	}
}

void func_519(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 16);
	}
	else
	{
		func_291(&(uParam0->f_1), 16);
	}
}

void func_520(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 8);
	}
	else
	{
		func_191(uParam0, 8);
	}
}

void func_521(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 32);
	}
	else
	{
		func_191(uParam0, 32);
	}
}

void func_522(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_523(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_524(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_525(var uParam0, bool bParam1, int iParam2)
{
	func_1042(iParam2);
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
		uParam0->f_13 = func_1043(0);
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
							func_291(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1044(1))
						{
							func_291(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_1044(1) || *uParam0 & 8192 != 0))
				{
					func_191(uParam0, 33554432);
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
			if (func_1045(uParam0))
			{
				uParam0->f_15 = func_140();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_140() - uParam0->f_15) > 500)
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
	func_1046(uParam0);
}

bool func_526(int iParam0, var uParam1)
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
			if (!func_1047(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_1048(iParam0, iVar2) <= func_1049(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_527(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1050(iParam2, 1, 1, 1, 0))
	{
		func_291(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_1051(uParam1, 1);
	func_1052();
}

bool func_528(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_1053(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1054(uParam1);
			if (func_1055(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_1056(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1051(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_1051(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_529(int iParam0, int iParam1, var uParam2)
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
	if (func_1057(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1054(uParam2);
		if (func_1055(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_1056(uParam2)
				{
					func_1051(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_530(int iParam0, var uParam1)
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
	if (func_1047(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_1056(uParam1)
		{
			fVar3 = func_1054(uParam1);
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

bool func_531(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_140();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_532(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_1058(uParam2);
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
			if (func_540(uParam2, iParam1))
			{
				func_1051(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_533(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_1059(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_540(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_1051(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_534(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_1060(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_1051(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_1051(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1061(iParam1, vVar0, vVar4))
					{
						func_1051(uParam2, 1);
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
					func_1051(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1061(iParam1, vVar0, vVar7))
					{
						func_1051(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_535(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1047(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1062(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1063(&(Global_1935630->f_34[iVar0])))
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
			if (func_1064(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1065(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1066(uParam1, iParam0, fVar1, iVar0))
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

bool func_536(int iParam0, var uParam1)
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

bool func_537(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_140();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_538(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1067(iVar0, &iVar2))
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
	if (func_1068(iVar0, iParam0))
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

int func_539(var uParam0, int iParam1)
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

bool func_540(var uParam0, int iParam1)
{
	if (func_1069(uParam0))
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

bool func_541(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_1070(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_542()
{
}

bool func_543(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_1071(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_140();
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
						if (func_768(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_140();
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

bool func_544()
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
	if ((func_140() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_545(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_1049(uParam0);
	if (uParam0->f_12 > func_1038(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_1072(iParam1);
	iVar1 = func_1073(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_546(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1074(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_547(int iParam0, var uParam1)
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
		if (func_1075(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
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
					if (!func_1076(uParam1, iParam0))
					{
						if (func_768(iVar4, Global_36, 1) < 7f)
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

bool func_548(int iParam0, var uParam1)
{
	if (!func_1077(0))
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

bool func_549(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_140();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_550(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_551(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_140();
	}
	else if (func_140() - uParam1->f_4) > func_1078(uParam1)
	{
		return func_1079(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_552(var uParam0, int iParam1)
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

int func_553(int iParam0)
{
	if (decor_exist_on(iParam0, "pedRoam_flags"))
	{
		iVar0 = decor_get_int(iParam0, "pedRoam_flags");
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

Vector3 func_554(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

bool func_555(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0]->f_4 && iParam1) != 0;
}

bool func_556()
{
	return Global_1935183->f_60;
}

int func_557(int iParam0)
{
	if (!func_831(iParam0))
	{
		return 2;
	}
	if (iParam0 == 13)
	{
		if (func_812((*Global_1347702)[117]->f_13, 64))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Global_40.f_11206[iParam0][iVar0])
		{
			case 623901469:
				return 0;
			case -1132827806:
				return 0;
			default:
				break;
		}
		iVar0++;
	}
	return 2;
}

int func_558(int iParam0)
{
	if (!func_831(iParam0))
	{
		return 2;
	}
	if (iParam0 == 13)
	{
		if (func_812((*Global_1347702)[117]->f_13, 64))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Global_40.f_11206[iParam0][iVar0])
		{
			case 623901469:
				return 2;
			case -1132827806:
				return 2;
			default:
				break;
		}
		iVar0++;
	}
	return 2;
}

bool func_559(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_560()
{
	return Global_1935183->f_3;
}

bool func_561(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(*iParam0)[iVar0] = -1;
		iVar0++;
	}
	switch (iParam1)
	{
		case 76:
			if (func_767(13, -1779466334, 1))
			{
				(*iParam0)[0] = 15;
				(*iParam0)[1] = 28;
				return true;
			}
			if (func_767(13, 1601295776, 1))
			{
				(*iParam0)[0] = 15;
				(*iParam0)[1] = 7;
				return true;
			}
			if (func_767(13, -156236308, 1))
			{
				(*iParam0)[0] = 11;
				(*iParam0)[1] = 28;
				(*iParam0)[2] = 33;
				(*iParam0)[3] = 15;
				(*iParam0)[4] = 9;
				return true;
			}
			break;
		case 92:
			if (func_767(14, -156236308, 1))
			{
				(*iParam0)[0] = 182;
				(*iParam0)[1] = 13;
				return true;
			}
			break;
	}
	return false;
}

bool func_562(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1080(iParam0))
	{
		return false;
	}
	if (func_358(&Global_1935630, 2097152))
	{
		return false;
	}
	if (func_1081())
	{
		if (func_189(Global_1415419->f_3, 2))
		{
			if (!func_189(Global_1415419->f_19[iParam0]->f_11, 4))
			{
				return false;
			}
		}
		else if (func_189(Global_1415419->f_3, 4))
		{
			if (func_189(Global_1415419->f_19[iParam0]->f_11, 4))
			{
				return false;
			}
		}
	}
	if (bParam2)
	{
		if (Global_1415419->f_19[iParam0]->f_8 == -1)
		{
			return false;
		}
	}
	if (bParam1 && !func_1082(iParam0))
	{
		return false;
	}
	if (!func_579(Global_32074.f_2697.f_6[iParam0]->f_5))
	{
		return false;
	}
	if (func_1083(iParam0, 1))
	{
		return false;
	}
	if (!func_1084(Global_1415419->f_19[iParam0]->f_1))
	{
		return false;
	}
	if (!func_1085(Global_1415419->f_19[iParam0]->f_2))
	{
		return false;
	}
	return true;
}

void func_563(int iParam0)
{
	Global_1415419->f_19[iParam0]->f_3 = 1f;
	if (Global_32074.f_2697 > 0)
	{
		Global_1415419->f_19[iParam0]->f_3 = (Global_1415419->f_19[iParam0]->f_3 + ((1f - (to_float(Global_32074.f_2697.f_6[iParam0]->f_1) / to_float(Global_32074.f_2697))) * 1f));
	}
	if (Global_32074.f_2697.f_2 > 0)
	{
		Global_1415419->f_19[iParam0]->f_3 = (Global_1415419->f_19[iParam0]->f_3 + ((1f - (to_float(&(Global_32074.f_2697.f_6[iParam0])) / to_float(Global_32074.f_2697.f_2))) * 0.8f));
	}
	if (Global_32074.f_2697.f_1 > 0)
	{
		Global_1415419->f_19[iParam0]->f_3 = (Global_1415419->f_19[iParam0]->f_3 + ((1f - (to_float(Global_32074.f_2697.f_6[iParam0]->f_2) / to_float(Global_32074.f_2697.f_1))) * 1.5f));
	}
	if (Global_32074.f_2697.f_3 > 0)
	{
		Global_1415419->f_19[iParam0]->f_3 = (Global_1415419->f_19[iParam0]->f_3 + ((1f - (to_float(Global_32074.f_2697.f_6[iParam0]->f_3) / to_float(Global_32074.f_2697.f_3))) * 0.9f));
	}
}

bool func_564()
{
	return (Global_1894899 & 1 != 0 && func_156() != -1);
}

int func_565(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4)
{
	iVar1 = -1;
	fVar2 = 1E+09f;
	if ((Global_1415419->f_19[bParam0]->f_8 != -1 && Global_1415419->f_19[bParam0]->f_9 < 960) && Global_1415419->f_19[bParam0]->f_9 >= Global_1415419->f_19[bParam0]->f_8)
	{
		bVar3 = func_1086(bParam0);
		bVar3 = (bVar3 * bVar3);
		bVar4 = func_1087(bParam0);
		bVar4 = (bVar4 * bVar4);
		iVar0 = Global_1415419->f_19[bParam0]->f_8;
		while (iVar0 <= Global_1415419->f_19[bParam0]->f_9)
		{
			*iParam1++;
			if (!func_1088(bParam0, *Global_1415419->f_2996[iVar0]))
			{
			}
			else
			{
				fVar6 = vdist2(Global_36, *Global_1415419->f_2996[iVar0]);
				if (bParam2 && bParam0 != 34)
				{
					iVar5 = func_1089(Global_35, *Global_1415419->f_2996[iVar0], 1060437492);
					if (iVar5 == 1)
					{
					}
					else if (fVar6 < fVar2)
					{
						if (func_1090(*Global_1415419->f_2996[iVar0], fVar6, (bParam0 <= 33 || bParam0 == 72), fParam4, bVar3, bVar4, bParam0))
						{
							iVar1 = iVar0;
							fVar2 = fVar6;
							if (bParam3)
							{
							}
							else
							{
								iVar0++;
							}
							return iVar1;
						}
					}
				}
			}
		}
	}
}

int func_566(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_1091(iParam0);
	iVar3 = func_1092(iParam0);
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
				iVar1 = func_480();
				func_583(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_1093(iParam0, 1);
			if (func_1094(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_578(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1095(1, iParam0);
				}
				else
				{
					func_1096(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_567(int iParam0)
{
	Global_1327590->f_6 = 0;
	Global_1327590->f_7 = iParam0;
}

void func_568(int iParam0)
{
	if (!func_1097(iParam0))
	{
		return;
	}
	iVar0 = func_1098(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1327590->f_19622[iVar0]->f_1 = (Global_1327590->f_19622[iVar0]->f_1 - 1);
	if (Global_1327590->f_19622[iVar0]->f_1 < 0)
	{
	}
}

void func_569(int iParam0)
{
	if (!func_1097(iParam0))
	{
		return;
	}
	iVar0 = func_1098(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1327590->f_19622[iVar0]->f_3 = (Global_1327590->f_19622[iVar0]->f_3 - Global_1327590->f_23[iParam0]->f_13);
	if (Global_1327590->f_19622[iVar0]->f_3 < 0)
	{
	}
}

void func_570(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		Global_1327590->f_19547[iParam0] = -1;
		Global_1327590->f_19547[iParam0]->f_1 = 0;
		Global_1327590->f_19547[iParam0]->f_3 = 0;
		Global_1327590->f_19547[iParam0]->f_4 = 0;
		Global_1327590->f_2 = (Global_1327590->f_2 - 1);
	}
}

Vector3 func_571(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_1099();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_572(int iParam0)
{
	if (!func_1097(iParam0))
	{
		return false;
	}
	return Global_32074.f_4[iParam0]->f_3;
}

int func_573(int iParam0, int iParam1)
{
	Var1 = { func_1100(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_574(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_575(int iParam0)
{
	if (!func_304(iParam0))
	{
		return -1;
	}
	return func_1101(iParam0);
}

void func_576(int iParam0)
{
	Global_1327590 = iParam0;
}

bool func_577(int iParam0)
{
	func_1102(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_578(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1093(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1095(2, *uParam0);
		}
		else
		{
			func_1096(2, *uParam0);
		}
	}
	func_1103(uParam0);
}

bool func_579(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_580()
{
	iVar0 = 0;
	while (iVar0 < 673)
	{
		func_1104(iVar0);
		iVar0++;
	}
}

void func_581()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1105(iVar0);
		iVar0++;
	}
}

void func_582(bool bParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1106(iVar0, bParam0, iParam1);
		iVar0++;
	}
}

void func_583(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_626(*iParam0);
	iVar1 = func_627(*iParam0);
	iVar2 = func_628(*iParam0);
	iVar3 = func_625(*iParam0);
	iVar4 = func_624(*iParam0);
	iVar5 = func_623(*iParam0);
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
	iVar6 = func_629(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_629(iVar1, iVar0);
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
	func_1107(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_584(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_626(*iParam0);
	iVar1 = func_627(*iParam0);
	iVar2 = func_628(*iParam0);
	iVar3 = func_625(*iParam0);
	iVar4 = func_624(*iParam0);
	iVar5 = func_623(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_629(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1107(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_585(int iParam0)
{
	return Global_1327590->f_10 == iParam0;
}

void func_586()
{
	if (func_1108(-1762981608))
	{
		return;
	}
	if ((func_150(4) && !func_150(5)) && !func_713(45))
	{
		if (!_does_text_database_exist("CAHSAUD"))
		{
			_text_database_request("CAHSAUD");
			return;
		}
		iVar0 = (func_625(func_480()) * 60 + func_624(func_480()));
		if (iVar0 >= 540)
		{
			vVar1 = -1;
			vVar1.f_1 = -1;
			vVar1.f_2 = -1;
			if (func_591(-1762981608, &vVar1))
			{
				func_596(-1762981608, &vVar1);
			}
		}
	}
}

bool func_587()
{
	return func_579(Global_1327590->f_19739);
}

void func_588()
{
	if (func_1109(1))
	{
		if (func_292(Global_1327590->f_18196, 0))
		{
			set_ped_reset_flag(Global_1327590->f_18196, 184, true);
		}
		if (func_292(Global_1327590->f_18196.f_1, 0))
		{
			set_ped_reset_flag(Global_1327590->f_18196.f_1, 184, true);
		}
		return;
	}
	if (func_292(Global_1327590->f_18196, 0) && !is_any_speech_playing(Global_1327590->f_18196))
	{
		func_1110(Global_1327590->f_18196, 0);
		set_ped_can_use_auto_conversation_lookat(Global_1327590->f_18196, false);
		func_1112(func_1111(_0x32a1e3b83d501096(Global_1327590->f_18196)), 4096);
		set_ped_config_flag(Global_1327590->f_18196, 448, true);
		set_ped_reset_flag(Global_1327590->f_18196, 184, true);
		_0x15f4732c357b1d6d(Global_1327590->f_18196, player_id(), 9);
		_0x633f83b301c87994(Global_1327590->f_18196, 122);
		Global_1327590->f_18196 = 0;
	}
	if (func_292(Global_1327590->f_18196.f_1, 0) && !is_any_speech_playing(Global_1327590->f_18196.f_1))
	{
		if (!is_ped_a_player(Global_1327590->f_18196.f_1))
		{
			func_1110(Global_1327590->f_18196.f_1, 0);
		}
		set_ped_can_use_auto_conversation_lookat(Global_1327590->f_18196.f_1, false);
		func_1112(func_1111(_0x32a1e3b83d501096(Global_1327590->f_18196.f_1)), 4096);
		set_ped_config_flag(Global_1327590->f_18196.f_1, 448, true);
		set_ped_reset_flag(Global_1327590->f_18196.f_1, 184, true);
		_0x15f4732c357b1d6d(Global_1327590->f_18196.f_1, player_id(), 9);
		_0x633f83b301c87994(Global_1327590->f_18196.f_1, 122);
		Global_1327590->f_18196.f_1 = 0;
	}
}

int func_589()
{
	iVar0 = 0;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_5 = 10f;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (&Global_40.f_4283.f_578[iVar0] != -1247606340)
		{
			if ((!func_1108(&(Global_40.f_4283.f_578[iVar0])) && !func_1113(&(Global_40.f_4283.f_578[iVar0]))) && func_591(&(Global_40.f_4283.f_578[iVar0]), &Var1))
			{
				bVar7 = true;
				switch (&Global_40.f_4283.f_578[iVar0])
				{
					case -1762981608:
					case -985659031:
						bVar7 = false;
						break;
				}
				if (func_595(&(Global_40.f_4283.f_578[iVar0]), Var1, Var1.f_1, Var1.f_5, bVar7))
				{
					bVar8 = false;
					iVar9 = &Global_40.f_4283.f_578[iVar0];
					switch (&Global_40.f_4283.f_578[iVar0])
					{
						case -1811967943:
							if (are_strings_equal(Var1.f_3, "CACLM_KA1"))
							{
								if (!func_1114(iVar9, Var1, 19))
								{
									bVar8 = true;
								}
							}
							else
							{
								bVar8 = true;
							}
							break;
						case 1609505828:
							if (are_strings_equal(Var1.f_3, "CAHSO_KA5"))
							{
								if ((!func_1114(iVar9, Var1, 16) && !func_1114(iVar9, Var1, 0)) && !func_1114(iVar9, Var1, 15))
								{
									bVar8 = true;
								}
							}
							else
							{
								bVar8 = true;
							}
							break;
						case -630300921:
							if (!func_1114(iVar9, Var1, 11))
							{
								bVar8 = true;
							}
							break;
						case 1978595469:
							if (are_strings_equal(Var1.f_3, "CASHB_KA3"))
							{
								if (!func_1114(iVar9, Var1, 16) && !func_1114(iVar9, Var1, 0))
								{
									func_1115(&(Global_40.f_4283.f_578[iVar0]));
									bVar8 = true;
								}
							}
							else
							{
								bVar8 = true;
							}
							break;
						case -2134360406:
						case -1783049048:
							if (!func_1114(iVar9, Var1, 13))
							{
								bVar8 = true;
							}
							break;
						case -15667560:
							if (!func_1114(iVar9, Var1, 10))
							{
								bVar8 = true;
							}
							break;
						case 458209198:
							if (!func_1114(iVar9, Var1, 17))
							{
								bVar8 = true;
							}
							break;
						case -345142193:
						case 131363873:
							if (!func_1114(iVar9, Var1, 20))
							{
								bVar8 = true;
							}
							break;
						case -1457524782:
							iVar10 = func_592(Var1);
							if (func_292(iVar10, 0) && is_ped_active_in_scenario(iVar10, 0))
							{
								if (_get_scenario_point_type_ped_is_using(iVar10) != 1455795772)
								{
									bVar8 = true;
								}
							}
							break;
						case 343399240:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 1346867715:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 2132661455:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case -266767341:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 1920927356:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 1867545732:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 1095325127:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 276848212:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 318078354:
							func_1115(iVar9);
							bVar8 = true;
							break;
						case 777482866:
							func_1115(iVar9);
							bLocal_15 = true;
							bVar8 = true;
							break;
						case -450600951:
							if (!func_1109(1))
							{
								if (bLocal_15)
								{
									func_1115(iVar9);
									bVar8 = true;
									bLocal_15 = false;
								}
							}
							break;
						default:
							bVar8 = true;
							break;
					}
					if (bVar8)
					{
						func_1116(&Var1);
						return &(Global_40.f_4283.f_578[iVar0]);
					}
				}
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return -1247606340;
}

void func_590()
{
	if (!func_1117(10, 1, 1))
	{
		return;
	}
	iVar0 = func_625(func_480());
	if (iVar0 > 16 || iVar0 < 8)
	{
		return;
	}
	if (func_1118(10))
	{
		iVar1 = func_1119(10);
		if (_0x947e43f544b6ab34(iVar1, player_id(), 7, 10000))
		{
			return;
		}
		if (is_ped_active_in_scenario(iVar1, 1) && _get_scenario_point_type_ped_is_using(iVar1) == -1772467531)
		{
			if (func_1070(Global_35, iVar1, 1, 1) < 7f)
			{
				func_1120(iVar1, "KIERAN_FOODLINE_PRISONER", 1017772929, 0, 1, 0, 0, 1);
				func_597(round(6f), 0, 0);
			}
		}
	}
}

bool func_591(int iParam0, var uParam1)
{
	set_random_seed(get_game_timer());
	func_1121(uParam1);
	switch (iParam0)
	{
		case 1955306955:
			uParam1->f_4 = 1;
			*uParam1 = 3;
			uParam1->f_5 = 3f;
			switch (get_random_int_in_range(0, 4))
			{
				case 0:
					uParam1->f_3 = "CACLM_BAM1";
					break;
				case 1:
					uParam1->f_3 = "CACLM_BAM2";
					break;
				case 2:
					uParam1->f_3 = "CACLM_BAM3";
					break;
				default:
					uParam1->f_3 = "CALCM_BAM5";
					break;
			}
			break;
		case -1811967943:
			uParam1->f_4 = 1;
			*uParam1 = 20;
			uParam1->f_5 = 3f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CACLM_KA1";
					break;
				case 1:
					uParam1->f_3 = "CACLM_KA2";
					break;
				default:
					uParam1->f_3 = "CACLM_KA3";
					break;
			}
			break;
		case -1169825673:
			uParam1->f_4 = 1;
			*uParam1 = 20;
			uParam1->f_5 = 3f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CACLM_KA4";
					break;
				default:
					uParam1->f_3 = "CACLM_KA5";
					break;
			}
			break;
		case 449150154:
			*uParam1 = 20;
			uParam1->f_1 = 7;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CACLM_KAC";
			break;
		case 654047380:
			*uParam1 = 20;
			uParam1->f_1 = 2;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CACLM_KAJAV";
			break;
		case -1003948703:
			*uParam1 = 20;
			uParam1->f_1 = 1;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CACLM_KAJHN";
			break;
		case 479802912:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CACLM_KAM";
			break;
		case -1805561902:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 3f;
			uParam1->f_3 = "CACLM_KAMC";
			break;
		case -217429167:
			*uParam1 = 8;
			uParam1->f_1 = 20;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CACLM_KASEAN";
			break;
		case 1042598863:
			*uParam1 = 15;
			uParam1->f_1 = 20;
			uParam1->f_5 = 3f;
			uParam1->f_3 = "CACLM_KME";
			break;
		case 45270830:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CACLM_KMS";
			break;
		case 332041830:
			uParam1->f_4 = 1;
			*uParam1 = 9;
			uParam1->f_5 = 5f;
			switch (get_random_int_in_range(0, 4))
			{
				case 0:
					uParam1->f_3 = "CACLM_LA1";
					break;
				case 1:
					uParam1->f_3 = "CACLM_LA2";
					break;
				case 2:
					uParam1->f_3 = "CACLM_LA3";
					break;
				default:
					uParam1->f_3 = "CACLM_LA4";
					break;
			}
			break;
		case -1762981608:
			*uParam1 = 13;
			uParam1->f_1 = 14;
			uParam1->f_5 = 20f;
			switch (get_random_int_in_range(0, 4))
			{
				case 0:
					uParam1->f_3 = "CAHSO_ABICALL1";
					break;
				case 1:
					uParam1->f_3 = "CAHSO_ABICALL2";
					break;
				case 2:
					uParam1->f_3 = "CAHSO_ABICALL3";
					break;
				default:
					uParam1->f_3 = "CAHSO_ABICALL4";
					break;
			}
			break;
		case -1457524782:
			uParam1->f_4 = 1;
			*uParam1 = 3;
			uParam1->f_5 = 4f;
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					uParam1->f_3 = "CAHSO_BAI1";
					break;
				case 1:
					uParam1->f_3 = "CAHSO_BAI2";
					break;
				case 2:
					uParam1->f_3 = "CAHSO_BAI3";
					break;
				case 3:
					uParam1->f_3 = "CAHSO_BAI4";
					break;
				default:
					uParam1->f_3 = "CAHSO_BAI5";
					break;
			}
			break;
		case 1346867715:
			uParam1->f_4 = 1;
			*uParam1 = 3;
			uParam1->f_5 = 4f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CAHSO_BAM1";
					break;
				case 1:
					uParam1->f_3 = "CAHSO_BAM2";
					break;
				default:
					uParam1->f_3 = "CAHSO_BAM4";
					break;
			}
			break;
		case 885716452:
			uParam1->f_4 = 1;
			*uParam1 = 3;
			uParam1->f_5 = 4f;
			uParam1->f_3 = "CAHSO_BAM3";
			break;
		case 1573777166:
			*uParam1 = 3;
			uParam1->f_1 = 5;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CAHSO_BHS1";
					break;
				default:
					uParam1->f_3 = "CAHSO_BHSE1";
					break;
			}
			break;
		case 879109073:
			*uParam1 = 3;
			uParam1->f_1 = 5;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_BHSCOFF";
			break;
		case 810500501:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_BJM1";
			break;
		case 797453428:
			*uParam1 = 3;
			uParam1->f_1 = 20;
			uParam1->f_5 = 19f;
			uParam1->f_3 = "CAHSO_BKSLACK";
			break;
		case -1407056675:
			*uParam1 = 3;
			uParam1->f_1 = 8;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_BSEM1";
			break;
		case 62520498:
			*uParam1 = 3;
			uParam1->f_1 = 18;
			uParam1->f_5 = 3f;
			uParam1->f_3 = "CAHSO_BSTRE1";
			break;
		case 373783623:
			*uParam1 = 3;
			uParam1->f_1 = 21;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_BSWM1";
			break;
		case 1621833104:
			*uParam1 = 3;
			uParam1->f_1 = 4;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_BUE1";
			break;
		case -1696575454:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_5 = 5f;
			switch (get_random_int_in_range(0, 4))
			{
				case 0:
					uParam1->f_3 = "CAHSO_DUTMOL1";
					break;
				case 1:
					uParam1->f_3 = "CAHSO_DUTMOL2";
					break;
				case 2:
					uParam1->f_3 = "CAHSO_DUTMOL3";
					break;
				default:
					uParam1->f_3 = "CAHSO_DUTMOL4";
					break;
			}
			break;
		case 1609505828:
			uParam1->f_4 = 1;
			*uParam1 = 20;
			uParam1->f_5 = 5f;
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					uParam1->f_3 = "CAHSO_KA1";
					break;
				case 1:
					uParam1->f_3 = "CAHSO_KA2";
					break;
				case 2:
					uParam1->f_3 = "CAHSO_KA3";
					break;
				case 3:
					uParam1->f_3 = "CAHSO_KA4";
					break;
				default:
					uParam1->f_3 = "CAHSO_KA5";
					break;
			}
			break;
		case -1084058685:
			*uParam1 = 20;
			uParam1->f_1 = 7;
			uParam1->f_5 = 5f;
			uParam1->f_3 = "CAHSO_KAC";
			break;
		case -1664988496:
			*uParam1 = 20;
			uParam1->f_1 = 2;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KAJAV";
			break;
		case -1783049048:
			*uParam1 = 20;
			uParam1->f_1 = 1;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KAJHN";
			break;
		case -558327193:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KAM";
			break;
		case 286162706:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KAMC";
			break;
		case 1615285097:
			*uParam1 = 8;
			uParam1->f_1 = 20;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KASEAN";
			break;
		case -448599760:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KME";
			break;
		case 1132533427:
			*uParam1 = 20;
			uParam1->f_1 = 15;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KMV";
			break;
		case -1255675465:
			*uParam1 = 20;
			uParam1->f_1 = 22;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_KTV";
			break;
		case 588400727:
			uParam1->f_4 = 1;
			*uParam1 = 9;
			uParam1->f_5 = 5f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CAHSO_LA1";
					break;
				case 1:
					uParam1->f_3 = "CAHSO_LA3";
					break;
				default:
					uParam1->f_3 = "CAHSO_LA5";
					break;
			}
			break;
		case -1078406621:
			uParam1->f_4 = 1;
			*uParam1 = 9;
			uParam1->f_5 = 5f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CAHSO_LA2";
					break;
				default:
					uParam1->f_3 = "CAHSO_LA4";
					break;
			}
			break;
		case 815565122:
			*uParam1 = 17;
			uParam1->f_1 = 3;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_PBM1";
			break;
		case -968686824:
			*uParam1 = 17;
			uParam1->f_5 = 50f;
			uParam1->f_3 = "CAHSO_PK_PKIER1";
			break;
		case 383285357:
			uParam1->f_4 = 1;
			*uParam1 = 1;
			uParam1->f_5 = 5f;
			uParam1->f_3 = "CAHSO_POSTABI1";
			break;
		case 830931566:
			*uParam1 = 19;
			uParam1->f_1 = 3;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_SUBSLACK";
			break;
		case -1079521156:
			*uParam1 = 19;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_SUS_CALL1";
			break;
		case -1343084439:
			*uParam1 = 19;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAHSO_SUS_CALL2";
			break;
		case 1867545732:
			uParam1->f_4 = 1;
			*uParam1 = 11;
			uParam1->f_5 = 6f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CALCM_AFTR_SAD1";
					break;
				case 1:
					uParam1->f_3 = "CALCM_SAD1_EXC1";
					break;
				default:
					uParam1->f_3 = "CALCM_SAD1_EXC2";
					break;
			}
			break;
		case -15667560:
			uParam1->f_4 = 1;
			*uParam1 = 3;
			uParam1->f_5 = 8f;
			uParam1->f_3 = "CALCM_BAM4";
			break;
		case 1401557308:
			*uParam1 = 3;
			uParam1->f_1 = 5;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BHSCOFF";
			break;
		case 272086219:
			*uParam1 = 3;
			uParam1->f_1 = 5;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BHSM1";
			break;
		case -1460460052:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BJM1";
			break;
		case 2024713010:
			*uParam1 = 3;
			uParam1->f_1 = 20;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BKSLACK";
			break;
		case -433637084:
			*uParam1 = 3;
			uParam1->f_1 = 17;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BPM1";
			break;
		case 1920927356:
			*uParam1 = 3;
			uParam1->f_1 = 18;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BSTRE1";
			break;
		case 983580076:
			*uParam1 = 3;
			uParam1->f_1 = 19;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BSUSLACK";
			break;
		case 738590523:
			*uParam1 = 3;
			uParam1->f_1 = 21;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_BSWM1";
			break;
		case 1229011466:
			*uParam1 = 0;
			uParam1->f_1 = 16;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CALCM_DM_ARG1";
					break;
				case 1:
					uParam1->f_3 = "CALCM_DM_ARG2";
					break;
				default:
					uParam1->f_3 = "CALCM_DM_ARG3";
					break;
			}
			break;
		case 362685326:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 4))
			{
				case 0:
					uParam1->f_3 = "CALCM_DUTMOL1";
					break;
				case 1:
					uParam1->f_3 = "CALCM_DUTMOL2";
					break;
				case 2:
					uParam1->f_3 = "CALCM_DUTMOL3";
					break;
				default:
					uParam1->f_3 = "CALCM_DUTMOL4";
					break;
			}
			break;
		case 131363873:
			*uParam1 = 1;
			uParam1->f_1 = 8;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_JSME_AP";
			break;
		case -1918658020:
			uParam1->f_4 = 1;
			*uParam1 = 1;
			uParam1->f_5 = 6f;
			uParam1->f_3 = "CALCM_POST_DCH1";
			break;
		case 209623500:
			*uParam1 = 17;
			uParam1->f_1 = 11;
			uParam1->f_5 = 4f;
			uParam1->f_3 = "CALCM_SADIE1";
			break;
		case -245997622:
			*uParam1 = 8;
			uParam1->f_1 = 3;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_SNBM1";
			break;
		case 458209198:
			*uParam1 = 4;
			uParam1->f_1 = 3;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CALCM_UNBE1";
			break;
		case 1067835471:
			*uParam1 = 24;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_ARMY";
			break;
		case 1169428501:
			*uParam1 = 24;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_CLEAN";
			break;
		case 325766844:
			*uParam1 = 0;
			uParam1->f_1 = 25;
			uParam1->f_2 = 24;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_DUTCH";
			break;
		case -2045208178:
			*uParam1 = 25;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_GIRLS";
			break;
		case -331203775:
			*uParam1 = 25;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_JOB";
			break;
		case -1607268103:
			*uParam1 = 24;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_MISER";
			break;
		case 359325346:
			*uParam1 = 25;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_RAT";
			break;
		case 1172070118:
			*uParam1 = 25;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_TRAIN";
			break;
		case 343399240:
			*uParam1 = 25;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_UTP1";
			break;
		case 355130513:
			*uParam1 = 25;
			uParam1->f_1 = 6;
			uParam1->f_5 = 9f;
			uParam1->f_3 = "CAMB_BVH_WOOD";
			break;
		case 2069882687:
			*uParam1 = 2;
			uParam1->f_1 = 7;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CAMB_CLM_CJ_A";
					break;
				case 1:
					uParam1->f_3 = "CAMB_CLM_CJ_B";
					break;
				default:
					uParam1->f_3 = "CAMB_CLM_CJ_C";
					break;
			}
			break;
		case -289420007:
			*uParam1 = 1;
			uParam1->f_1 = 7;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CAMB_CLM_CJO1_A";
					break;
				default:
					uParam1->f_3 = "CAMB_CLM_CJO1_B";
					break;
			}
			break;
		case -362791308:
			*uParam1 = 1;
			uParam1->f_1 = 7;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CAMB_CLM_CJO2_A";
					break;
				case 1:
					uParam1->f_3 = "CAMB_CLM_CJO3_A";
					break;
				default:
					uParam1->f_3 = "CAMB_CLM_CJO3_B";
					break;
			}
			break;
		case -1097432820:
			*uParam1 = 9;
			uParam1->f_1 = 7;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CAMB_CLM_CL_A";
					break;
				default:
					uParam1->f_3 = "CAMB_CLM_CL_B";
					break;
			}
			break;
		case 1213187927:
			*uParam1 = 7;
			uParam1->f_1 = 8;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CAMB_CLM_CS_A";
					break;
				default:
					uParam1->f_3 = "CAMB_CLM_CS_B";
					break;
			}
			break;
		case 111292469:
			*uParam1 = 2;
			uParam1->f_1 = 5;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					uParam1->f_3 = "CAMB_CLM_JH_A";
					break;
				default:
					uParam1->f_3 = "CAMB_CLM_JH_C";
					break;
			}
			break;
		case -1145690235:
			*uParam1 = 2;
			uParam1->f_1 = 7;
			uParam1->f_5 = 9f;
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					uParam1->f_3 = "CAMB_HSO_CJ_A";
					break;
				case 1:
					uParam1->f_3 = "CAMB_HSO_CJ_B";
					Jump @4041; //curOff = 4027
					uParam1->f_3 = "CAMB_HSO_CJ_C";
					Jump @6028; //curOff = 4041
					*uParam1 = 1;
					uParam1->f_1 = 7;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_CJO1_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_CJO1_B";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_CJO1_C";
							break;
					}
					Jump @6028; //curOff = 4119
					*uParam1 = 1;
					uParam1->f_1 = 7;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_CJO3_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_CJO3_B";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_CJO3_C";
							break;
					}
					Jump @6028; //curOff = 4197
					*uParam1 = 9;
					uParam1->f_1 = 7;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_CL_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_CL_B";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_CL_C";
							break;
					}
					Jump @6028; //curOff = 4276
					*uParam1 = 8;
					uParam1->f_1 = 7;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_CS_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_CS_B";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_CS_C";
							break;
					}
					Jump @6028; //curOff = 4355
					*uParam1 = 13;
					uParam1->f_1 = 5;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 4))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_HA_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_HA_B";
							break;
						case 2:
							uParam1->f_3 = "CAMB_HSO_HA_C";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_HA_D";
							break;
					}
					Jump @6028; //curOff = 4451
					*uParam1 = 5;
					uParam1->f_1 = 18;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 5))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_HS_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_HS_B";
							break;
						case 2:
							uParam1->f_3 = "CAMB_HSO_HS_C";
							break;
						case 3:
							uParam1->f_3 = "CAMB_HSO_HS_D";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_HS_E";
							break;
					}
					Jump @6028; //curOff = 4564
					*uParam1 = 5;
					uParam1->f_1 = 14;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CAMB_HSO_JH_A";
							break;
						case 1:
							uParam1->f_3 = "CAMB_HSO_JH_B";
							break;
						default:
							uParam1->f_3 = "CAMB_HSO_JH_C";
							break;
					}
					Jump @6028; //curOff = 4643
					uParam1->f_4 = 1;
					*uParam1 = 3;
					uParam1->f_5 = 6f;
					switch (get_random_int_in_range(0, 4))
					{
						case 0:
							uParam1->f_3 = "CASHB_BAM1";
							break;
						case 1:
							uParam1->f_3 = "CASHB_BAM2";
							break;
						case 2:
							uParam1->f_3 = "CASHB_BAM4";
							break;
						default:
							uParam1->f_3 = "CASHB_BAM5";
							break;
					}
					Jump @6028; //curOff = 4734
					uParam1->f_4 = 1;
					*uParam1 = 3;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "CASHB_BAM3";
					Jump @6028; //curOff = 4759
					*uParam1 = 3;
					uParam1->f_1 = 5;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "CASHB_BHSM1";
					Jump @6028; //curOff = 4784
					*uParam1 = 3;
					uParam1->f_1 = 1;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "CASHB_BJ_ODR4";
					Jump @6028; //curOff = 4809
					uParam1->f_4 = 1;
					*uParam1 = 20;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "CASHB_KA1";
					Jump @6028; //curOff = 4835
					uParam1->f_4 = 1;
					*uParam1 = 20;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "CASHB_KA2";
					Jump @6028; //curOff = 4861
					uParam1->f_4 = 1;
					*uParam1 = 20;
					uParam1->f_5 = 6f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CASHB_KA3";
							break;
						case 1:
							uParam1->f_3 = "CASHB_KA4";
							break;
						default:
							uParam1->f_3 = "CASHB_KA5";
							break;
					}
					Jump @6028; //curOff = 4936
					*uParam1 = 20;
					uParam1->f_1 = 7;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "CASHB_KAC";
					Jump @6028; //curOff = 4966
					*uParam1 = 2;
					uParam1->f_1 = 20;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "CASHB_KAJAV";
					Jump @6028; //curOff = 4996
					*uParam1 = 20;
					uParam1->f_1 = 1;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "CASHB_KAJHN";
					Jump @6028; //curOff = 5026
					*uParam1 = 20;
					uParam1->f_1 = 15;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 2))
					{
						case 0:
							uParam1->f_3 = "CASHB_KAM";
							break;
						default:
							uParam1->f_3 = "CASHB_KAMC";
							break;
					}
					Jump @6028; //curOff = 5089
					*uParam1 = 20;
					uParam1->f_1 = 15;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 2))
					{
						case 0:
							uParam1->f_3 = "CASHB_KMS1";
							break;
						default:
							uParam1->f_3 = "CASHB_KMS2";
							break;
					}
					Jump @6028; //curOff = 5152
					*uParam1 = 22;
					uParam1->f_1 = 20;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "CASHB_KTE";
					Jump @6028; //curOff = 5183
					*uParam1 = 22;
					uParam1->f_1 = 20;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "CASHB_KTS";
					Jump @6028; //curOff = 5214
					uParam1->f_4 = 1;
					*uParam1 = 9;
					uParam1->f_5 = 6f;
					switch (get_random_int_in_range(0, 5))
					{
						case 0:
							uParam1->f_3 = "CASHB_LA1";
							break;
						case 1:
							uParam1->f_3 = "CASHB_LA2";
							break;
						case 2:
							uParam1->f_3 = "CASHB_LA3";
							break;
						case 3:
							uParam1->f_3 = "CASHB_LA4";
							break;
						default:
							uParam1->f_3 = "CASHB_LA5";
							break;
					}
					Jump @6028; //curOff = 5323
					*uParam1 = 16;
					uParam1->f_1 = 0;
					uParam1->f_5 = 7f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CCOLT_DUTMLL1";
							break;
						case 1:
							uParam1->f_3 = "CCOLT_DUTMLL2";
							break;
						default:
							uParam1->f_3 = "CCOLT_DUTMLL3";
							break;
					}
					Jump @6028; //curOff = 5398
					uParam1->f_4 = 1;
					*uParam1 = 0;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "CPGEN_DTBOX1";
					Jump @6028; //curOff = 5423
					*uParam1 = 19;
					uParam1->f_1 = 22;
					uParam1->f_5 = 15f;
					uParam1->f_3 = "CPGEN_SCHECK1";
					Jump @6028; //curOff = 5454
					*uParam1 = 19;
					uParam1->f_1 = 22;
					uParam1->f_2 = 20;
					uParam1->f_5 = 15f;
					uParam1->f_3 = "CPGEN_SCHECK2";
					Jump @6028; //curOff = 5491
					*uParam1 = 19;
					uParam1->f_1 = 20;
					uParam1->f_5 = 15f;
					uParam1->f_3 = "CPGEN_SCHECK3";
					Jump @6028; //curOff = 5522
					*uParam1 = 22;
					uParam1->f_1 = 2;
					uParam1->f_5 = 7f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CPGEN_TJBANT1";
							break;
						case 1:
							uParam1->f_3 = "CPGEN_TJBANT2";
							break;
						default:
							uParam1->f_3 = "CPGEN_TJBANT3";
							break;
					}
					Jump @6028; //curOff = 5597
					*uParam1 = 2;
					uParam1->f_1 = 22;
					uParam1->f_5 = 7f;
					switch (get_random_int_in_range(0, 4))
					{
						case 0:
							uParam1->f_3 = "CPGEN_TJGUIT1";
							break;
						case 1:
							uParam1->f_3 = "CPGEN_TJGUIT2";
							break;
						case 2:
							uParam1->f_3 = "CPGEN_TJGUIT3";
							break;
						default:
							uParam1->f_3 = "CPGEN_TJGUIT4";
							break;
					}
					Jump @6028; //curOff = 5689
					*uParam1 = 22;
					uParam1->f_1 = 20;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 4))
					{
						case 0:
							uParam1->f_3 = "CPGEN_TKEAT1";
							break;
						case 1:
							uParam1->f_3 = "CPGEN_TKEAT2";
							break;
						case 2:
							uParam1->f_3 = "CPGEN_TKEAT3";
							break;
						default:
							uParam1->f_3 = "CPGEN_TKEAT4";
							break;
					}
					Jump @6028; //curOff = 5786
					*uParam1 = 20;
					uParam1->f_1 = 22;
					uParam1->f_5 = 9f;
					switch (get_random_int_in_range(0, 3))
					{
						case 0:
							uParam1->f_3 = "CPGEN_TKWORK1";
							break;
						case 1:
							uParam1->f_3 = "CPGEN_TKWORK2";
							break;
						default:
							uParam1->f_3 = "CPGEN_TKWORK3";
							break;
					}
					Jump @6028; //curOff = 5866
					*uParam1 = 4;
					uParam1->f_1 = 20;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "CPGEN_UNCKAR1";
					Jump @6028; //curOff = 5896
					uParam1->f_4 = 1;
					*uParam1 = 2;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "GUARG_POSTFUS1";
					Jump @6028; //curOff = 5921
					uParam1->f_4 = 1;
					*uParam1 = 6;
					uParam1->f_5 = 6f;
					uParam1->f_3 = "GUARG_POSTGUA2";
					Jump @6028; //curOff = 5946
					uParam1->f_4 = 1;
					*uParam1 = 0;
					uParam1->f_5 = 7f;
					uParam1->f_3 = "MUD4_IG17_A";
					Jump @6028; //curOff = 5971
					uParam1->f_4 = 1;
					*uParam1 = 0;
					uParam1->f_5 = 7f;
					uParam1->f_3 = "MUD4_IG17_B";
					Jump @6028; //curOff = 5996
					*uParam1 = 1;
					uParam1->f_1 = 7;
					uParam1->f_5 = 9f;
					uParam1->f_3 = "RMUD3A_JCBNT";
					if (*uParam1 == -1)
					{
						func_1121(uParam1);
						return false;
					}
					if (is_string_null_or_empty(uParam1->f_3))
					{
						func_1121(uParam1);
						return false;
					}
					if (uParam1->f_1 == -1 && !uParam1->f_4)
					{
						return true;
					}
					if (uParam1->f_1 != -1 && uParam1->f_4)
					{
						return true;
					}
					return true;
				}

int func_592(int iParam0)
{
	if (!func_1122(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

char* func_593(int iParam0)
{
	switch (iParam0)
	{
		case -1332576287:
		case -1114736130:
		case -1112729059:
		case -985659031:
		case -680088106:
		case -49928042:
		case 597680464:
		case 667353761:
		case 1996407755:
			sVar0 = "CPGENAU";
			break;
		case -42041881:
			sVar0 = "CCOLTAU";
			break;
		case -1783049048:
		case -1762981608:
		case -1696575454:
		case -1664988496:
		case -1479920637:
		case -1457524782:
		case -1407056675:
		case -1343084439:
		case -1317542923:
		case -1255675465:
		case -1145690235:
		case -1084058685:
		case -1079521156:
		case -1078406621:
		case -1004747084:
		case -968686824:
		case -953531577:
		case -558327193:
		case -448599760:
		case 62520498:
		case 131363873:
		case 286162706:
		case 373783623:
		case 383285357:
		case 588400727:
		case 797453428:
		case 810500501:
		case 815565122:
		case 830931566:
		case 879109073:
		case 885716452:
		case 1089725084:
		case 1132533427:
		case 1346867715:
		case 1348106565:
		case 1356881482:
		case 1573777166:
		case 1609505828:
		case 1615285097:
		case 1621833104:
			sVar0 = "CAHSAUD";
			break;
		case -1918658020:
		case -1811967943:
		case -1805561902:
		case -1460460052:
		case -1169825673:
		case -1097432820:
		case -1003948703:
		case -433637084:
		case -362791308:
		case -289420007:
		case -245997622:
		case -217429167:
		case -15667560:
		case 45270830:
		case 111292469:
		case 209623500:
		case 272086219:
		case 332041830:
		case 362685326:
		case 449150154:
		case 458209198:
		case 479802912:
		case 654047380:
		case 738590523:
		case 983580076:
		case 1042598863:
		case 1213187927:
		case 1229011466:
		case 1401557308:
		case 1867545732:
		case 1920927356:
		case 1955306955:
		case 2024713010:
		case 2069882687:
			sVar0 = "CACCAUD";
			break;
		case -2134360406:
		case -1633137849:
		case -1379618186:
		case -630300921:
		case -345142193:
		case -327947127:
		case -266767341:
		case -78072296:
		case 1080890700:
		case 1095325127:
		case 1153720789:
		case 1185839882:
		case 1921371725:
		case 1978595469:
		case 2132661455:
			sVar0 = "CASHBAU";
			break;
		case -2045208178:
		case -1607268103:
		case -331203775:
		case 325766844:
		case 343399240:
		case 355130513:
		case 359325346:
		case 1067835471:
		case 1169428501:
		case 1172070118:
			sVar0 = "CABVHAU";
			break;
		case -1761128258:
		case 318078354:
			sVar0 = "GUARGAU";
			break;
		case 276848212:
			sVar0 = "RMD3AAU";
			break;
		case -450600951:
		case 777482866:
			sVar0 = "MUD4AUD";
			break;
	}
	return sVar0;
}

bool func_594(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return true;
	}
	if (_does_text_database_exist(sParam0))
	{
		if (!_0x3cf96e16265b7dc8(sParam0))
		{
			_text_database_request(sParam0);
		}
	}
	if (_text_database_has_loaded(sParam0))
	{
		return true;
	}
	return false;
}

bool func_595(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	iVar0 = func_1119(iParam1);
	if (does_entity_exist(iVar0))
	{
		if (func_1070(iVar0, Global_35, 1, 1) > 10f)
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (iParam2 == -1)
	{
		if (!func_1123(-1, 1))
		{
			return false;
		}
		iVar1 = Global_35;
		if (!func_1108(iParam0) && _0xa454d234e45bb6e5(iVar0, player_id()))
		{
			func_1124(iParam0);
			return false;
		}
	}
	else
	{
		iVar1 = func_1119(iParam2);
	}
	if (is_entity_dead(iVar0) || is_entity_dead(iVar1))
	{
		return false;
	}
	iVar2 = func_1125(iParam0, 1);
	iVar3 = func_1126(iParam0, 1);
	iVar4 = func_1125(iParam0, 0);
	iVar5 = func_1126(iParam0, 0);
	iVar4 = (iVar2 * 60 + iVar4);
	iVar5 = (iVar3 * 60 + iVar5);
	iVar6 = (func_625(func_480()) * 60 + func_624(func_480()));
	if (iVar2 > 0)
	{
		if (iVar6 < iVar4 || iVar6 > iVar5)
		{
			return false;
		}
	}
	if (iParam1 != -1)
	{
		if (func_1127(get_entity_coords(func_592(iParam1), true, false), 0, 2048, 0))
		{
			return false;
		}
	}
	if (iParam2 != -1)
	{
		if (func_1127(get_entity_coords(func_592(iParam2), true, false), 0, 2048, 0))
		{
			return false;
		}
	}
	if (iParam1 != -1)
	{
		if (!func_1117(iParam1, 1, 1))
		{
			return false;
		}
		if (func_1128(iParam1, 64) || func_1128(iParam1, 128))
		{
			return false;
		}
	}
	if (iParam2 != -1)
	{
		if (!func_1117(iParam2, 1, 1))
		{
			return false;
		}
		if (func_1128(iParam2, 64) || func_1128(iParam2, 128))
		{
			return false;
		}
	}
	if (_0x54b187f111d9c6f8(iVar0, 0) || is_any_speech_playing(iVar0))
	{
		return false;
	}
	if (_0x54b187f111d9c6f8(iVar1, 0) || is_any_speech_playing(iVar1))
	{
		return false;
	}
	if (bParam4)
	{
		if (iParam2 == -1)
		{
			if (is_ped_facing_ped(iVar0, iVar1, 40f) == 0)
			{
				return false;
			}
			if (!is_ped_active_in_scenario(iVar0, 0))
			{
				return false;
			}
		}
		else if (!is_ped_active_in_scenario(iVar0, 0) || !is_ped_active_in_scenario(iVar1, 0))
		{
			return false;
		}
	}
	if (func_1070(iVar0, iVar1, 1, 1) > fParam3)
	{
		return false;
	}
	return true;
}

bool func_596(int iParam0, int iParam1)
{
	if (iParam1->f_4)
	{
		if (!func_1129(iParam1))
		{
			return false;
		}
		func_1124(iParam0);
		func_1115(iParam0);
		return true;
	}
	if (!func_1130(iParam1))
	{
		return false;
	}
	func_1124(iParam0);
	return true;
}

void func_597(int iParam0, int iParam1, int iParam2)
{
	Global_1327590->f_19739 = &Global_1899515;
	func_583(&(Global_1327590->f_19739), 0, iParam0, iParam1, iParam2, 0, 0, 0);
}

int func_598()
{
	if (Global_1327590->f_19727.f_6 != iVar0)
	{
		if (func_241(Global_1327590->f_19727.f_6, 1))
		{
			if (!is_entity_dead(Global_1327590->f_19727.f_4) && !is_entity_dead(Global_1327590->f_19727.f_5))
			{
				func_1120(Global_1327590->f_19727.f_4, &(Global_1327590->f_19727), 1017772929, Global_1327590->f_19727.f_5, 1, 0, 0, 1);
				func_603();
				return 1;
			}
		}
	}
	return 0;
}

void func_599(char* sParam0)
{
	if (_does_text_database_exist(sParam0))
	{
		if (_text_database_has_loaded(sParam0))
		{
			_text_database_delete(sParam0);
		}
	}
}

void func_600()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1327590->f_19622[iVar0]->f_5 = 0;
		iVar0++;
	}
}

void func_601()
{
	Global_1327590->f_19744 = -1;
}

int func_602(int iParam0)
{
	if (Global_1327590->f_19685 == 0 && Global_1327590->f_19684 == 0)
	{
		return 0;
	}
	if ((iParam0 == Global_1327590->f_19685 || iParam0 == 1) || iParam0 == 20)
	{
		Global_1327590->f_19684 = 0;
		Global_1327590->f_19685 = 0;
		return 1;
	}
	return 0;
}

void func_603()
{
	StringCopy(&(Global_1327590->f_19727), "", 32);
	Global_1327590->f_19727.f_4 = 0;
	Global_1327590->f_19727.f_5 = 0;
	Global_1327590->f_19727.f_6 = uVar0;
}

void func_604()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		func_1131(iVar0);
		iVar0++;
	}
}

void func_605()
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&(Global_1327590->f_19615), &Var0, 6);
}

void func_606(int iParam0)
{
	Global_1327590->f_4 = iParam0;
}

int func_607()
{
	return &(Global_1359453->f_4[Global_1359453->f_3]);
}

bool func_608()
{
	return Global_1327590->f_10 != -1;
}

bool func_609(int iParam0, bool bParam1, bool bParam2)
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

bool func_610(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_611(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_612(var uParam0, int iParam1)
{
	func_1132(uParam0, iParam1);
}

bool func_613()
{
	return (&Global_1955499 > -1 && &Global_1955499 < 4);
}

bool func_614()
{
	return Global_1392040->f_6;
}

bool func_615(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 8:
			*iParam1 = 79;
			*iParam2 = 20;
			return true;
		case 9:
			*iParam1 = 52;
			*iParam2 = 33;
			return true;
		case 10:
			*iParam1 = 11;
			*iParam2 = 33;
			return true;
		case 11:
			*iParam1 = 33;
			*iParam2 = 33;
			return true;
		case 12:
			*iParam1 = 86;
			*iParam2 = 2;
			return true;
		case 13:
			*iParam1 = 0;
			*iParam2 = 6;
			return true;
		case 14:
			*iParam1 = 62;
			*iParam2 = 20;
			return true;
		case 16:
			*iParam1 = 90;
			*iParam2 = 3;
			return true;
		default:
			break;
	}
	return false;
}

bool func_616(int iParam0)
{
	if (func_1133())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_617(int iParam0)
{
	if (!func_237(iParam0))
	{
		return func_1134();
	}
	switch (iParam0)
	{
		case 4:
			return 607173790;
		case 0:
			return -1849681615;
		case 2:
			return 102652153;
		default:
			break;
	}
	return func_1134();
}

bool func_618(int iParam0)
{
	return iParam0 != 0;
}

void func_619(int iParam0)
{
	if (!func_238(iParam0))
	{
		return;
	}
	if (does_blip_exist(Global_1395601->f_5[iParam0]->f_26))
	{
		remove_blip(&(Global_1395601->f_5[iParam0]->f_26));
	}
}

void func_620(int iParam0, bool bParam1)
{
	if (_does_volume_exist(Global_1395601->f_5[iParam0]->f_23) && is_entity_in_volume(Global_35, Global_1395601->f_5[iParam0]->f_23, true, 0))
	{
		return;
	}
	if (func_103(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_1135(238680582, bParam1);
			break;
		case 9:
			func_1135(1555588463, bParam1);
			func_1135(1275780106, bParam1);
			func_1135(-833560428, bParam1);
			func_1135(-1601174253, bParam1);
			func_1135(-1295111793, bParam1);
			break;
		case 11:
			func_1135(-1482639045, bParam1);
			break;
		case 10:
			func_1135(254520182, bParam1);
			break;
		case 12:
			func_1135(1997650502, bParam1);
			break;
		case 13:
			func_1135(1335986638, bParam1);
			break;
		case 14:
			func_1135(1407130373, bParam1);
			break;
		case 16:
			func_1135(-1335647241, bParam1);
			break;
		case 15:
			func_1135(1731691513, !func_150(70));
			break;
	}
}

void func_621(int iParam0, bool bParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_40.f_9384[iParam0] |= 1;
	}
	else
	{
		Global_40.f_9384[iParam0] = (&Global_40.f_9384[iParam0] - Global_40.f_9384[iParam0] & 1);
	}
}

void func_622(int iParam0)
{
	if (!func_237(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = 0;
}

int func_623(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_624(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_625(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_626(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1136(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_627(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_628(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_629(int iParam0, int iParam1)
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

bool func_630(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_240(iParam1) || !func_240(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_631(int iParam0)
{
	return (Global_1395601->f_4 && iParam0) != 0;
}

bool func_632(int iParam0)
{
	return func_635(iParam0, 1048576);
}

void func_633(int iParam0)
{
	if (!func_238(iParam0))
	{
		return;
	}
	if (func_185(Global_1395601->f_5[iParam0]->f_15))
	{
		return;
	}
	if (!does_blip_exist(Global_1395601->f_5[iParam0]->f_26))
	{
		vVar0 = { Global_1395601->f_5[iParam0]->f_15 };
		Global_1395601->f_5[iParam0]->f_26 = _blip_add_for_coord(-972966383, vVar0);
		set_blip_sprite(Global_1395601->f_5[iParam0]->f_26, 1586273744, true);
	}
}

bool func_634()
{
	return false;
}

bool func_635(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0] && iParam1) != 0;
}

void func_636(int iParam0)
{
	if (func_1137() == 2)
	{
		return;
	}
	if (_0xcf45df50c7775f2a())
	{
		return;
	}
	if (func_1138(iParam0) && !&Global_1395601)
	{
		iVar0 = func_617(iParam0);
		if (func_618(iVar0))
		{
			_request_imap(iVar0);
		}
		Global_1395601 = 1;
	}
}

bool func_637(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	uVar0 = Global_1395601->f_5[iParam0]->f_21;
	return uVar0;
}

bool func_638(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	if (func_500())
	{
		return false;
	}
	iVar0 = 0;
	iVar1 = func_473();
	switch (iVar1)
	{
		case 1:
			if (func_211(-1461741225, 1))
			{
				bVar2 = true;
			}
			break;
		case 3:
			if (func_211(-404697685, 1))
			{
				bVar2 = true;
			}
			break;
	}
	if ((func_103(242, 1, 1) && !func_635(iParam0, 4)) && !bVar2)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_639(int iParam0)
{
	if ((((((((iParam0 == 0 || iParam0 == 15) || iParam0 == 2) || iParam0 == 1) || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 7) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_640(var uParam0)
{
	if (!func_292(*uParam0, 0))
	{
		return false;
	}
	return is_ped_shooting(*uParam0);
}

bool func_641(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_642(bool bParam0)
{
	if (func_744())
	{
		if (func_746() == 0)
		{
			bParam0 = false;
		}
		if (func_746() == 7)
		{
			if ((((((func_1034(61) || func_1034(62)) || func_1034(63)) || func_1034(64)) || func_1034(65)) || func_1034(66)) || func_1034(67))
			{
				bParam0 = false;
			}
		}
	}
	if (bParam0)
	{
		func_1139(1073741824);
	}
	else
	{
		func_1140(1073741824);
	}
}

void func_643(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (Global_40.f_9384[iParam0] || iParam1);
}

void func_644(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (&Global_40.f_9384[iParam0] - (Global_40.f_9384[iParam0] && iParam1));
}

float func_645(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_646(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_647(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_259(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_1141(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

bool func_648(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_649(int iParam0)
{
	return func_651(iParam0, Global_1310750->f_16072 | 64);
}

int func_650()
{
	return Global_1310750->f_16037;
}

bool func_651(int iParam0, int iParam1)
{
	if (!func_259(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_652(int iParam0)
{
	if (!func_259(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_653(int iParam0)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	iVar0 = iParam0 * 1000;
	Global_1327479->f_4 = (Global_1327479->f_4 - iVar0);
	Global_1327479->f_5 = (Global_1327479->f_5 - iVar0);
}

bool func_654()
{
	iVar0 = func_1142(func_156());
	if (iVar0 == 8)
	{
		iVar1 = func_1143(func_156());
		if (func_1144(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_1146(func_1145(0)))
	{
		return false;
	}
	if (func_1147())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

int func_655()
{
	return Global_1934266->f_67;
}

void func_656(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_1148(iParam0, iParam1, bParam2);
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

bool func_657()
{
	if (func_36() != -1)
	{
		return false;
	}
	if (((&Global_1430242 + Global_1430242->f_2) > 1 && func_564()) && Global_1310750->f_16037 >= 2)
	{
		return true;
	}
	return false;
}

bool func_658()
{
	if (func_319(58, 0))
	{
		if (func_156() == 5)
		{
			return true;
		}
	}
	return false;
}

bool func_659()
{
	return &Global_1935436 == 2;
}

bool func_660(int iParam0, bool bParam1)
{
	if (Global_17504.f_42[iParam0]->f_4 > 0)
	{
		return false;
	}
	if (bParam1)
	{
		if (!(*Global_1310750)[iParam0]->f_49)
		{
			return false;
		}
		if (!(*Global_1310750)[iParam0]->f_50)
		{
			return false;
		}
		if (!(*Global_1310750)[iParam0]->f_51)
		{
			return false;
		}
	}
	else
	{
		if ((*Global_1310750)[iParam0]->f_38 != 0)
		{
			if (!func_1084((*Global_1310750)[iParam0]->f_38))
			{
				return false;
			}
		}
		if (!func_1149(iParam0, Global_1310750[iParam0]))
		{
			return false;
		}
		func_1150(iParam0, &fVar0, &fVar1, &uVar2, 1);
		if (!func_651(iParam0, 512))
		{
			if (!func_1151(iParam0))
			{
				if (!func_663(iParam0, 64))
				{
					if (!func_1152(iParam0, fVar1, &((*Global_1310750)[iParam0]->f_63), 0, 0, 1, fVar0, 1))
					{
						return false;
					}
				}
			}
		}
	}
	if (func_663(iParam0, 524288))
	{
		return false;
	}
	if (!Global_17504.f_42[iParam0]->f_7)
	{
		return false;
	}
	if (Global_17504.f_42[iParam0]->f_6)
	{
		return false;
	}
	if (!func_663(iParam0, 32768))
	{
		if (func_651(iParam0, 1))
		{
			if (func_1154(iParam0, func_1153(func_342())))
			{
				return false;
			}
		}
		else if (func_1155(iParam0, func_1145(0)))
		{
			return false;
		}
	}
	if ((*Global_1310750)[iParam0]->f_48)
	{
		return false;
	}
	if (func_666(iParam0) == 7)
	{
		return false;
	}
	if (func_1156(Global_1310750[iParam0]))
	{
		return false;
	}
	if (!func_1157(iParam0, 1))
	{
		return false;
	}
	if (func_1158(iParam0))
	{
		return false;
	}
	if (!func_1085((*Global_1310750)[iParam0]->f_39))
	{
		return false;
	}
	if (func_663(iParam0, 1))
	{
		if (!func_1159(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_661(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_259(&(Global_1310750->f_13321[iVar0])))
		{
			if (!func_1160(iVar0) || bParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_662(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_663(int iParam0, int iParam1)
{
	if (!func_259(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_664(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	Global_1310750->f_13321[iParam1] = iParam0;
	(*Global_1310750)[iParam0]->f_48 = 1;
}

void func_665(int iParam0)
{
	Global_17504.f_1++;
	Global_17504.f_42[iParam0]->f_2++;
	(*Global_1310750)[iParam0]->f_110 |= 1;
}

int func_666(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_667(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_666(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_36() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

bool func_668(var uParam0, var uParam1)
{
	if (Global_1326862->f_3)
	{
		if (func_1147() || func_342() == -1)
		{
			Global_1326862->f_604 = 0;
			Global_1326862->f_605 = 0;
			return false;
		}
		iVar0 = func_1145(0);
		if (func_564())
		{
			if (iVar0 != 0)
			{
				iVar1 = func_1161(iVar0);
				*uParam0 = &Global_1326862->f_512[(17 + iVar1)];
				*uParam1 = &Global_1326862->f_558[(17 + iVar1)];
			}
			else
			{
				Global_1326862->f_604 = 0;
				Global_1326862->f_605 = 0;
				return false;
			}
		}
		else
		{
			*uParam0 = &Global_1326862->f_512[func_342()];
			*uParam1 = &Global_1326862->f_558[func_342()];
		}
	}
	Global_1326862->f_604 = *uParam0;
	Global_1326862->f_605 = *uParam1;
	return *uParam0 <= *uParam1;
}

bool func_669(int iParam0)
{
	if (func_663(iParam0, 2048))
	{
		return true;
	}
	if (func_663(iParam0, 4096))
	{
		return Global_1327479->f_5 < get_game_timer();
	}
	return Global_1327479->f_4 < get_game_timer();
}

int func_670()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_259(&(Global_1310750->f_13321[iVar0])))
		{
			iVar1++;
			if (func_663(&(Global_1310750->f_13321[iVar0]), 16384))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_671(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_291(uParam0, 268435456);
	}
	else
	{
		func_191(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_291(uParam0, 1073741824);
	}
	else
	{
		func_191(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_291(uParam0, 536870912);
	}
	else
	{
		func_191(uParam0, 536870912);
	}
}

void func_672(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_1162(uParam0, 1);
		func_520(uParam0, 1);
		func_518(uParam0, 1);
		func_521(uParam0, 1);
		func_1163(uParam0, 1);
		func_1164(uParam0, 1);
		func_1165(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_1162(uParam0, 0);
		func_520(uParam0, 0);
		func_518(uParam0, 0);
		func_521(uParam0, 0);
		func_1163(uParam0, 0);
		func_1164(uParam0, 0);
		func_1165(uParam0, 0);
	}
}

void func_673(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 4);
	}
	else
	{
		func_291(&(uParam0->f_1), 4);
	}
}

void func_674(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 2);
	}
	else
	{
		func_291(&(uParam0->f_1), 2);
	}
}

void func_675(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_191(&(uParam0->f_1), 8);
	}
	else
	{
		func_291(&(uParam0->f_1), 8);
	}
}

void func_676()
{
	if (!func_735(&(Local_32.f_4)))
	{
		func_1166(&(Local_32.f_4));
	}
	else if (func_739(&(Local_32.f_4)) > 30f)
	{
		if ((!func_1167() || !func_1168()) || !func_678(2, &iVar0))
		{
			Local_32.f_3 = 0;
			Local_32.f_2 = 0;
			Local_32.f_1 = 0;
			func_1166(&(Local_32.f_4));
			return;
		}
		if (func_680(iVar0))
		{
			return;
		}
		switch (Local_32.f_3)
		{
			case 0:
				if (_0xe887bd31d97793f6(Local_32.f_1))
				{
					Local_32.f_3 = 5;
					func_1169(iVar0, "ANNOUNCE_TRAIN_ARRIVAL");
				}
				else if (get_random_int_in_range(0, 4) < 3)
				{
					Local_32.f_3 = 3;
					func_1169(iVar0, "ANNOUNCE_NEXT_TRAIN_ARRIVAL");
				}
				else
				{
					Local_32.f_3 = 1;
					func_1166(&(Local_32.f_4));
					func_1169(iVar0, "ANNOUNCE_TRAIN_DELAY");
				}
				break;
			case 1:
				if (_0xe887bd31d97793f6(Local_32.f_1))
				{
					Local_32.f_3 = 5;
					func_1169(iVar0, "ANNOUNCE_TRAIN_ARRIVAL");
				}
				else
				{
					Local_32.f_3 = 2;
					func_1169(iVar0, "CHAT_TRAIN_DELAY");
				}
				break;
			case 2:
				if (_0xe887bd31d97793f6(Local_32.f_1))
				{
					Local_32.f_3 = 3;
					func_1169(iVar0, "CHAT_DELAYED_TRAIN_ARRIVAL");
				}
				break;
			case 3:
				if (_0xe887bd31d97793f6(Local_32.f_1))
				{
					Local_32.f_3 = 5;
					func_1169(iVar0, "ANNOUNCE_TRAIN_ARRIVAL");
					func_1166(&(Local_32.f_4));
				}
				break;
			case 5:
				break;
		}
	}
}

bool func_677()
{
	iVar0 = func_1170(0);
	iVar1 = 1;
	bVar2 = false;
	if (func_1171(iVar0) != -1)
	{
		iVar1 = 3;
		bVar2 = true;
	}
	if (!func_735(&uLocal_27))
	{
		func_736(&uLocal_27, 1);
	}
	if (bVar2)
	{
		if (func_739(&uLocal_27) < IntToFloat((20 * iVar1)))
		{
			return false;
		}
	}
	else if (func_739(&uLocal_27) < 20f)
	{
		return false;
	}
	return true;
}

bool func_678(int iParam0, int iParam1)
{
	iVar0 = func_1172(func_156(), iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		return false;
	}
	if (func_1173(iVar0))
	{
		return false;
	}
	if (iVar0 == 1 && is_thread_active((*Global_1396257)[17]->f_635, false))
	{
		return false;
	}
	if (func_616(iParam0))
	{
		return false;
	}
	*iParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	if (!func_292(*iParam1, 79))
	{
		return false;
	}
	if (func_1070(Global_35, *iParam1, 1, 1) > 35f)
	{
		return false;
	}
	if (!func_282(*iParam1, iParam0))
	{
		return false;
	}
	if (func_1174(*iParam1, 0, 0, 0))
	{
		return false;
	}
	return true;
}

void func_679()
{
	switch (iLocal_30)
	{
		case 10:
			iLocal_30 = 22;
			break;
		case 22:
			iLocal_30 = 12;
			break;
		case 12:
			iLocal_30 = 13;
			break;
		case 13:
			iLocal_30 = 18;
			break;
		case 18:
			iLocal_30 = 17;
			break;
		default:
			iLocal_30 = 10;
			break;
	}
}

bool func_680(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_1175();
	if (func_1176(iVar0))
	{
		if (func_1177(iVar0))
		{
			return true;
		}
	}
	return is_any_speech_playing(iParam0);
}

void func_681(int iParam0, char* sParam1)
{
	iVar0 = func_480();
	func_1178(iLocal_30);
	if (!func_687(iLocal_30, 64) && (func_625(iVar0) >= 23 && func_624(iVar0) > 30))
	{
		func_1120(iParam0, "END_SHIFT", 1541280898, 0, 1, func_1179(*Global_1393529->f_288[iLocal_30]), 0, 1);
		func_1180(iLocal_30, 64);
		func_688(iLocal_30, 128);
	}
	else if ((!func_687(iLocal_30, 128) && func_625(iVar0) >= 6) && func_625(iVar0) <= 8)
	{
		func_1120(iParam0, "START_SHIFT", 1541280898, 0, 1, func_1179(*Global_1393529->f_288[iLocal_30]), 0, 1);
		func_1180(iLocal_30, 128);
		func_688(iLocal_30, 64);
	}
	else if (!func_687(iLocal_30, 64))
	{
		if (func_625(iVar0) < 24 && func_625(iVar0) > 6)
		{
			iVar1 = func_1181(iLocal_30, 15);
			if (does_entity_exist(iVar1))
			{
			}
			func_1120(iParam0, sParam1, 1541280898, 0, 1, func_1179(*Global_1393529->f_288[iLocal_30]), 0, 1);
		}
	}
	func_1166(&uLocal_27);
}

char* func_682()
{
	switch (get_random_int_in_range(0, 4))
	{
		case 0:
		case 1:
			sVar0 = func_1182();
			if (!is_string_null_or_empty(sVar0))
			{
				return sVar0;
			}
		case 2:
			switch (func_156())
			{
				case 76:
					if (iLocal_31 == 0)
					{
						iLocal_31++;
						return "PAPERBOY_VALENTINE";
					}
					else if (iLocal_31 == 1)
					{
						iLocal_31 = 0;
						return "LOCAL_NEW_HANOVER_GAZETTE";
					}
					break;
				case 78:
					if (iLocal_31 == 0)
					{
						iLocal_31++;
						return "PAPERBOY_ANNESBURG";
					}
					else if (iLocal_31 == 1)
					{
						iLocal_31 = 0;
						return "LOCAL_NEW_HANOVER_GAZETTE";
					}
					break;
				case 92:
					if (iLocal_31 == 0)
					{
						iLocal_31++;
						return "PAPERBOY_VAN_HORN";
					}
					else if (iLocal_31 == 1)
					{
						iLocal_31 = 0;
						return "LOCAL_NEW_HANOVER_GAZETTE";
					}
					break;
				case 38:
					if (iLocal_31 == 0)
					{
						iLocal_31++;
						return "PAPERBOY_BLACKWATER";
					}
					else if (iLocal_31 == 1)
					{
						iLocal_31 = 0;
						return "LOCAL_BLACKWATER_LEDGER";
					}
					break;
				case 26:
					return "PAPERBOY_STRAWBERRY";
				case 5:
					if (iLocal_31 == 0)
					{
						iLocal_31++;
						return "PAPERBOY_SAINT_DENIS";
					}
					else if (iLocal_31 == 1)
					{
						iLocal_31++;
						return "LOCAL_SAINT_DENIS_TRIBUNE";
					}
					else if (iLocal_31 == 2)
					{
						iLocal_31 = 0;
						return "LOCAL_NEW_HANOVER_GAZETTE";
					}
					break;
				case 105:
					return "PAPERBOY_RHODES";
				default:
					return "READ_ALL_ABOUT_IT";
			}
			break;
		default:
			return "READ_ALL_ABOUT_IT";
	}
	return "READ_ALL_ABOUT_IT";
}

void func_683(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_684(int iParam0, int iParam1)
{
	if (!func_1176(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_685(int iParam0, int iParam1)
{
	if (!func_1176(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

bool func_686(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_687(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return false;
	}
	return (Global_1393529->f_77[iParam0] && iParam1) != 0;
}

void func_688(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return;
	}
	Global_1393529->f_77[iParam0] = (&Global_1393529->f_77[iParam0] - (Global_1393529->f_77[iParam0] && iParam1));
}

int func_689(int iParam0, bool bParam1)
{
	return func_1183(iParam0, Global_1894899->f_2, bParam1);
}

int func_690(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

char* func_691(int iParam0)
{
	switch (iParam0)
	{
		case -1472222264:
			return "Armadillo/AMD_GENERAL_STORE";
		case 852936895:
			return "Annesburg/Asb_Gunsmith";
		case 1193985110:
			return "Annesburg/Asb_Newspaper_Vendor";
		case 618535878:
			return "Blackwater/Blw_Barber";
		case -1337007991:
			return "Blackwater/Blw_Butcher";
		case 1479005205:
			return "Blackwater/Blw_General_Store";
		case -556457729:
			return "Blackwater/Blw_Newspaper";
		case 13133629:
			return "Blackwater/Blw_Photographer";
		case 914853768:
			return "Blackwater/Blw_Tailor";
		case 1443812975:
			return "EmeraldRanch/Emr_Son1";
		case 1908738551:
			return "Lagras/Lag_Mother1";
		case 1010118053:
			return "Rhodes/rhd_Butcher";
		case 1317192638:
			return "Rhodes/rhd_fence";
		case -877355938:
			return "Rhodes/rhd_general_store";
		case 1787522659:
			return "Rhodes/rhd_gunsmith";
		case 225456100:
			return "Rhodes/rhd_newspaper_vendor";
		case -533772707:
			return "SaintDenis/SDN_Barber";
		case 1709214177:
			return "SaintDenis/SDN_Butcher";
		case -1116668486:
			return "SaintDenis/SDN_Doctor";
		case 156473432:
			return "SaintDenis/SDN_Gen_Store_Shady";
		case 1659593009:
			return "SaintDenis/SDN_Gen_Store_Owner";
		case 1198640232:
			return "SaintDenis/SDN_Gunsmith";
		case -615386674:
			return "SaintDenis/SDN_Horse_Shop_Owner";
		case -650257138:
			return "SaintDenis/SDN_Tailor";
		case 135353273:
			return "SaintDenis/SDN_Market_Vendor1";
		case 986295353:
			return "SaintDenis/SDN_FrenchMarket_Vendor_1";
		case 1231178090:
			return "SaintDenis/SDN_FrenchMarket_Vendor_2";
		case -634913711:
			return "SaintDenis/SDN_Newspaper_Vendor";
		case -2098805802:
			return "SaintDenis/SDN_Photographer";
		case 1645786537:
			return "Strawberry/STR_Butcher";
		case 1943609607:
			return "Strawberry/Str_General_Store";
		case -1391735686:
			return "Strawberry/Str_Newspaper_Vendor";
		case -1456173883:
			return "Tumbleweed/TBL_BUTCHER";
		case 344419080:
			return "Tumbleweed/TBL_GENERAL_STORE_RESIDENT";
		case 1057927283:
			return "Tumbleweed/TBL_GUNSMITH_OWNER";
		case 1711355775:
			return "Valentine/Val_Barber";
		case 260410249:
			return "Valentine/Val_Butcher";
		case -1720522403:
			return "Valentine/Val_Doctor";
		case -1128080855:
			return "Valentine/Val_General_Store";
		case -1496211826:
			return "Valentine/Val_Gunsmith";
		case 895371587:
			return "Valentine/Val_Newspaper_Vendor";
		case 1677108849:
			return "VanHornTradingPost/vht_exotic_store";
		case -1760134268:
			return "WallaceStation/WAL_GENSHOPKEEPER";
		default:
			break;
	}
	return "";
	return "";
}

void func_692(int iParam0, int iParam1)
{
	if (func_36() != -1)
	{
		return;
	}
	if (!func_271(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_693(int iParam0, int iParam1)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_271(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_694(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_695(int iParam0)
{
	if (!func_271(iParam0))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_696(int iParam0)
{
	return iParam0 != 0;
}

int func_697(int iParam0, bool bParam1)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	if (!func_693(iParam0, 2))
	{
		return 0;
	}
	if (func_690(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_277(iParam0)))
	{
		return 1;
	}
	if (func_693(iParam0, 1) && !bParam1)
	{
		func_1184(iParam0, 128);
		return 1;
	}
	func_692(iParam0, 129);
	func_695(iParam0);
	_0xfc77c5b44d5ff7c0(func_277(iParam0));
	func_1185(iParam0, 0);
	return 1;
}

bool func_698(int iParam0)
{
	bVar0 = func_684(iParam0, 256);
	return bVar0;
}

bool func_699(int iParam0)
{
	return func_684(iParam0, 8388608);
}

bool func_700(int iParam0)
{
	return func_684(iParam0, 524288);
}

int func_701(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	if (!func_696(func_690(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_277(iParam0)))
	{
		func_1186(iParam0, 0);
		return 0;
	}
	if (func_509(iParam0, bParam2))
	{
		return 1;
	}
	if (func_693(iParam0, 32))
	{
		return 0;
	}
	if (!func_509(iParam0, 0))
	{
		return 0;
	}
	vVar0 = { _0x5ee6fccc9c832ca2(func_277(iParam0)) };
	if (!func_185(vVar0))
	{
		if (is_sphere_visible_to_another_machine(vVar0, 2.5f, 1120403456))
		{
			return 0;
		}
	}
	if (bParam1 && !func_509(iParam0, bParam2))
	{
		if (!func_1187(iParam0))
		{
			return 0;
		}
	}
	iVar3 = _0x0cadc3a977997472(func_277(iParam0), 0);
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_702(int iParam0)
{
	if (!func_1176(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_156() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
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
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
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
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_703(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_704(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

bool func_705(int iParam0, int iParam1)
{
	if (iParam0 != 1 && iParam0 != 2)
	{
		return false;
	}
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		return false;
	}
	if (is_ped_fleeing(iParam1) || func_1188(iParam1, 474215631))
	{
		return false;
	}
	bVar0 = false;
	if (func_1189(iParam0))
	{
		iVar3 = func_1172(func_156(), 2);
		iVar4 = func_1172(func_156(), 1);
		vVar5 = { func_1190(iVar3) };
		vVar8 = { func_1190(iVar4) };
		if (func_768(Global_35, vVar5, 1) < 2f)
		{
			iVar1 = 2;
			iVar2 = func_1191(2);
			if (!func_269(iVar1, 32))
			{
				func_1192(iVar1);
			}
			if ((_get_scenario_point_ped_is_using(iParam1, false) == iVar2 && func_768(iParam1, vVar5, 1) < 2f) || func_684(iVar3, 16777216))
			{
				Global_1393529->f_1 = iVar1;
				return true;
			}
			else
			{
				if (!func_172(iParam1, 242628503))
				{
					Global_1393529->f_1 = -1;
				}
				bVar0 = true;
			}
		}
		if (func_768(Global_35, vVar8, 1) < 2f)
		{
			iVar1 = 1;
			Global_1914319->f_3[1]->f_23 = Global_1914319->f_3[2]->f_23;
			iVar2 = func_1191(1);
			if (!func_269(iVar1, 32))
			{
				func_1192(iVar1);
			}
			if (_get_scenario_point_ped_is_using(iParam1, false) == iVar2 && func_768(iParam1, vVar8, 1) < 2f)
			{
				Global_1393529->f_1 = iVar1;
				return true;
			}
			else
			{
				if (!func_172(iParam1, 242628503))
				{
					Global_1393529->f_1 = -1;
				}
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (Global_1393529->f_1 == iVar1)
		{
			return true;
		}
		vVar12 = { _get_scenario_point_coords(iVar2, true) };
		open_sequence_task(&iVar11);
		if (func_768(iParam1, vVar12, 1) > 2f)
		{
			task_follow_nav_mesh_to_coord(0, vVar12, 1f, -1, 1f, 0, 40000f);
		}
		_task_use_scenario_point(0, iVar2, 0, 0, true, false, 0, false, -1f, false);
		close_sequence_task(iVar11);
		_0x62fdad5e01d2dd47(iParam1, get_entity_coords(Global_35, true, false), 1, 0);
		clear_ped_tasks(iParam1, 1, 0);
		task_perform_sequence(iParam1, iVar11);
		clear_sequence_task(&iVar11);
		Global_1393529->f_1 = iVar1;
	}
	else
	{
		if (Global_1393529->f_1 == 1)
		{
			return true;
		}
		if (func_1193(iParam0))
		{
			vVar16 = { _get_scenario_point_coords(iVar2, true) };
			open_sequence_task(&iVar15);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar15);
			_0x62fdad5e01d2dd47(iParam1, get_entity_coords(Global_35, true, false), 1, 0);
			clear_ped_tasks(iParam1, 1, 0);
			task_perform_sequence(iParam1, iVar15);
			clear_sequence_task(&iVar15);
			Global_1393529->f_1 = 1;
		}
	}
	return true;
}

bool func_706(int iParam0)
{
	bVar0 = func_269(iParam0, 512);
	return bVar0;
}

int func_707(int iParam0)
{
	iVar0 = -1;
	if (!func_287(iParam0))
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

bool func_708(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

bool func_709(int iParam0)
{
	iVar0 = func_707(iParam0);
	return !Global_40.f_9910[iVar0]->f_5;
}

void func_710(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_711(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_712(int iParam0)
{
	switch (iParam0)
	{
		case -1633624898:
			func_1194(39, 0, 0, 0, 0, 0, 0, 0);
			func_1195(39, 0, 0, 0, 0, -1, 0);
			func_1196(8);
			break;
		case -1439688706:
			func_1194(41, 0, 0, 0, 0, 0, 0, 0);
			func_1195(41, 0, 0, 0, 0, -1, 0);
			func_1197(4);
			break;
		case -430348949:
			func_1194(49, 0, 0, 0, 0, 0, 0, 0);
			func_1195(49, 0, 0, 0, 0, -1, 0);
			func_1198(8);
			break;
		case 1260284942:
			func_1194(51, 0, 0, -949689219, 0, 0, 7, 1);
			func_1195(51, 0, 0, 0, 0, -1, 0);
			func_1199(4);
			break;
		case 55401585:
			func_1194(51, 0, 0, -1248968496, 0, 0, 7, 1);
			func_1195(51, 0, 0, 0, 0, -1, 0);
			func_1199(32);
			break;
		case -1780711023:
			func_1194(51, 0, 0, 1706369307, 0, 0, 7, 1);
			func_1195(51, 0, 0, 0, 0, -1, 0);
			func_1199(256);
			break;
		case -543582966:
		case 1937177603:
			func_1194(51, 0, 0, 1520110311, 0, 0, 7, 1);
			func_1195(51, 0, 0, 0, 0, -1, 0);
			func_1199(2048);
			break;
		case 279920889:
			func_1194(51, 0, 0, 1520110311, 0, 0, 3, 0);
			func_1195(51, 0, 0, 0, 0, -1, 0);
			func_1199(4096);
			break;
		case 309656256:
			func_1194(51, 0, 0, -1992824800, 0, 0, 0, 0);
			func_1195(51, 0, 0, 0, 0, -1, 0);
			func_1199(262144);
			break;
	}
}

bool func_713(int iParam0)
{
	if (!func_1200(iParam0))
	{
		return false;
	}
	return func_1201(iParam0);
}

void func_714(int iParam0)
{
	if (!func_1200(iParam0))
	{
		return;
	}
	func_1202(iParam0);
	func_965(iParam0);
}

bool func_715()
{
	if (_0x7907969497ea92f5(Global_1935183->f_30))
	{
		if (!_0x603ac35fd4602c76(Global_1935183->f_30))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_716(var uParam0)
{
	iVar0 = func_340(func_156());
	if (iVar0 != -1)
	{
		Global_1935183->f_1 = iVar0;
		*uParam0 = 1;
		return;
	}
	else
	{
		*uParam0 = 0;
	}
	if (!Global_1935183->f_60)
	{
		if (Global_1935183->f_1 < 15)
		{
			Global_1935183->f_1++;
		}
		else
		{
			Global_1935183->f_1 = 0;
		}
	}
}

bool func_717(int iParam0)
{
	if (!func_560())
	{
		return false;
	}
	iVar0 = func_156();
	return iVar0 == func_1203(iParam0);
}

bool func_718()
{
	if (Global_1935183->f_60)
	{
		if (!Global_1935183->f_3)
		{
			Global_1935183->f_60 = 0;
			return true;
		}
	}
	return false;
}

int func_719(int iParam0, int iParam1)
{
	if (!func_831(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			func_1204(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_720(int iParam0, int iParam1)
{
	iVar0 = func_731(iParam0, iParam1);
	if (iVar0 != 0)
	{
		func_732(iVar0);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_721(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			_0x638fcfc6042a9473(1745897492, iParam1);
			break;
		case 8:
			_0x638fcfc6042a9473(-992361005, iParam1);
			_0x638fcfc6042a9473(735964222, iParam1);
			_0x638fcfc6042a9473(956587272, iParam1);
			break;
		case 9:
			_0x638fcfc6042a9473(-1949388465, iParam1);
			_0x638fcfc6042a9473(2074609971, iParam1);
			_0x638fcfc6042a9473(-1251075352, iParam1);
			_0x638fcfc6042a9473(336394734, iParam1);
			break;
		case 10:
			_0x638fcfc6042a9473(-1103569810, iParam1);
			_0x638fcfc6042a9473(2048843351, iParam1);
			_0x638fcfc6042a9473(-581513559, iParam1);
			_0x638fcfc6042a9473(-2069874135, iParam1);
			_0x638fcfc6042a9473(-2135638306, iParam1);
			break;
		case 13:
			_0x638fcfc6042a9473(1670175702, iParam1);
			_0x638fcfc6042a9473(-1828504739, iParam1);
			_0x638fcfc6042a9473(-1989426011, iParam1);
			_0x638fcfc6042a9473(-96086541, iParam1);
			_0x638fcfc6042a9473(-1263161369, iParam1);
			_0x638fcfc6042a9473(171102212, iParam1);
			_0x638fcfc6042a9473(946349591, iParam1);
			_0x638fcfc6042a9473(-1595848998, iParam1);
			_0x638fcfc6042a9473(2022297198, iParam1);
			_0x638fcfc6042a9473(-529460929, iParam1);
			_0x638fcfc6042a9473(1278447410, iParam1);
			_0x638fcfc6042a9473(1775186984, iParam1);
			break;
		case 14:
			_0x638fcfc6042a9473(1505553576, iParam1);
			_0x638fcfc6042a9473(928869916, iParam1);
			_0x638fcfc6042a9473(1609021087, iParam1);
			break;
	}
}

void func_722(int iParam0)
{
	if (func_1205(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_778(iVar0) != func_1206(iVar0))
			{
				func_308(iVar0, func_1206(iVar0));
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_778(iVar0) != func_772(iVar0))
			{
				func_308(iVar0, func_772(iVar0));
			}
			iVar0++;
		}
	}
}

bool func_723(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return false;
	}
	iVar0 = func_1207(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765->f_338;
}

void func_724(int iParam0, bool bParam1, float fParam2)
{
	func_1208(iParam0, bParam1, fParam2);
}

bool func_725(int iParam0, struct<5> Param1)
{
	if (!func_1209(iParam0, Param1))
	{
		if (func_717(iParam0) && Param1.f_1 != 1461274691)
		{
			return true;
		}
	}
	switch (iParam0)
	{
		case 1:
			switch (Param1)
			{
				case 557524588:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(1074873669, 1, 0);
					func_1210(-86199844, 1, 0);
					return true;
			}
			func_1210(1074873669, 0, 0);
			func_1210(-86199844, 0, 0);
			break;
		case 2:
			switch (Param1)
			{
				case 557524588:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(-1579419919, 1, 0);
					return true;
			}
			func_1210(-1579419919, 0, 0);
			break;
		case 8:
			switch (Param1)
			{
				case 557524588:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(478884033, 1, 0);
					func_1210(-191424539, 1, 0);
					return true;
			}
			func_1210(478884033, 0, 0);
			func_1210(-191424539, 0, 0);
			break;
		case 9:
			switch (Param1)
			{
				case 557524588:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(1660024373, 1, 0);
					func_1210(-1063147448, 1, 0);
					return true;
				case 1792646445:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(-950054349, 1, 0);
					func_1210(2639906, 1, 0);
					return true;
			}
			func_1210(-950054349, 0, 0);
			func_1210(2639906, 0, 0);
			func_1210(1660024373, 0, 0);
			func_1210(-1063147448, 0, 0);
			break;
		case 12:
			switch (Param1)
			{
				case 557524588:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(-80522843, 1, 0);
					func_1210(-1523910291, 1, 0);
					return true;
			}
			func_1210(-80522843, 0, 0);
			func_1210(-1523910291, 0, 0);
			break;
		case 13:
			switch (Param1)
			{
				case -423064657:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(-1151084372, 0, 0);
					func_1210(-1215445344, 1, 0);
					func_1210(-254562075, 1, 0);
					func_1210(320943355, 1, 0);
					func_1210(689024866, 1, 0);
					func_1210(1160698568, 1, 0);
					func_1210(1713221411, 1, 0);
					func_1210(300221584, 1, 0);
					func_1210(-220282381, 1, 0);
					func_1210(-1329135070, 1, 0);
					func_1210(-1763509974, 1, 0);
					return true;
				case 557524588:
					if (&Global_1935369->f_5[0])
					{
						return true;
					}
					func_1210(-1151084372, 0, 0);
					func_1210(-1215445344, 0, 0);
					func_1210(-254562075, 0, 0);
					func_1210(320943355, 0, 0);
					func_1210(689024866, 0, 0);
					func_1210(1160698568, 0, 0);
					func_1210(1713221411, 0, 0);
					func_1210(300221584, 0, 0);
					func_1210(-220282381, 0, 0);
					func_1210(-1329135070, 1, 0);
					if (!func_369(6))
					{
						func_1210(-1763509974, 1, 0);
					}
					else
					{
						func_1210(-1763509974, 0, 0);
					}
					return true;
				case 1792646445:
					if (&Global_1935369->f_5[1])
					{
						return true;
					}
					func_1210(224551212, 1, 0);
					func_1210(-397760715, 1, 0);
					return true;
			}
			func_1210(-1215445344, 0, 0);
			func_1210(-254562075, 0, 0);
			func_1210(320943355, 0, 0);
			func_1210(689024866, 0, 0);
			func_1210(1160698568, 0, 0);
			func_1210(1713221411, 0, 0);
			func_1210(300221584, 0, 0);
			func_1210(-220282381, 0, 0);
			func_1210(-1329135070, 0, 0);
			func_1210(-1763509974, 0, 0);
			func_1210(224551212, 0, 0);
			func_1210(-397760715, 0, 0);
			func_1210(-1151084372, 1, 0);
			return false;
		case 14:
			switch (Param1)
			{
				case 557524588:
					if (Global_1935183->f_4)
					{
						return true;
					}
					func_1210(-1206122982, 1, 0);
					func_1210(-666014935, 1, 0);
					return true;
			}
			func_1210(-1206122982, 0, 0);
			func_1210(-666014935, 0, 0);
			return false;
	}
	return false;
}

void func_726(int iParam0)
{
	Global_1935183->f_56 = iParam0;
}

void func_727()
{
	if (func_1211(Global_1935183->f_1))
	{
		_get_weather_type_transition(&uVar0, &uVar1, &uVar3);
		iVar2 = uVar1;
		if (!func_723(4))
		{
			if (func_1212(iVar2) && Global_1935183->f_1 != 12)
			{
				func_1213(1077154516, 4, 0, 1103626240);
				func_1214(1077154516, 0, 1103626240);
			}
			else
			{
				func_1213(-857562377, 4, 0, 1103626240);
				func_1214(-857562377, 0, 1103626240);
			}
		}
	}
	else if (func_723(4))
	{
		func_724(4, 0, 1103626240);
	}
}

int func_728(int iParam0)
{
	if (!func_831(iParam0))
	{
		return 0;
	}
	bVar0 = func_103(0, 0, 1);
	iVar1 = func_1203(iParam0);
	if (func_300(iVar1))
	{
		if (_0x8db104ccebcd58c5(func_1215(iParam0), player_id()) >= 4 && !bVar0)
		{
			if (!func_767(iParam0, -1751068532, 1) && !func_767(iParam0, 623901469, 1))
			{
				func_818(iParam0, -423064657, 1, -1784359682, -1);
			}
		}
		else
		{
			func_818(iParam0, 1590600971, 1, -1784359682, -1);
		}
		if (bVar0)
		{
			if (func_767(iParam0, -423064657, 1))
			{
				func_719(iParam0, -423064657);
			}
		}
	}
	else
	{
		if (func_767(iParam0, -423064657, 1))
		{
			func_719(iParam0, -423064657);
		}
		if (func_767(iParam0, 1590600971, 1))
		{
			func_719(iParam0, 1590600971);
		}
	}
	if (!func_745(iVar1, 2048))
	{
		if (!func_767(iParam0, -156236308, 1))
		{
			func_818(iParam0, -156236308, 0, -1784359682, -1);
		}
	}
	else if (func_767(iParam0, -156236308, 1))
	{
		func_719(iParam0, -156236308);
	}
	if (func_1216())
	{
		if (!func_767(iParam0, 1570236479, 1))
		{
			func_818(iParam0, 1570236479, 1, 1710500858, -1);
		}
	}
	else if (func_767(iParam0, 1570236479, 1))
	{
		func_719(iParam0, 1570236479);
	}
	if (!func_1217())
	{
		if (!func_767(iParam0, -415041951, 1))
		{
			func_818(iParam0, -415041951, 1, -1784359682, -1);
		}
	}
	else if (func_767(iParam0, -415041951, 1))
	{
		func_719(iParam0, -415041951);
	}
	if (iVar1 != 105 && iVar1 != 5)
	{
		iVar2 = func_354(iVar1, 0);
	}
	else
	{
		iVar2 = func_354(iVar1, 2);
	}
	iVar3 = func_354(iVar1, 1);
	if (iVar2 != -1)
	{
		iVar4 = func_277(func_857(iVar2));
		if (_0x800df3fc913355f3(iVar4) && _0xeb98b38ca60742d7(iVar4))
		{
			if (!func_767(iParam0, 557524588, 1) && func_1219(func_1218(iParam0, 557524588), 1) <= 2)
			{
				if (func_1220(iParam0, iVar2))
				{
					func_854(func_1221(iVar2), 524288);
					func_855(func_1221(iVar2), 1048576);
					func_818(iParam0, 557524588, 1, 1710500858, -1);
				}
			}
		}
		else if (_0x800df3fc913355f3(iVar4) && !_0xeb98b38ca60742d7(iVar4))
		{
			if (func_1222(iParam0))
			{
				if (func_767(iParam0, 557524588, 1) && func_1219(func_1218(iParam0, 557524588), 1) <= 2)
				{
					func_855(func_1221(iVar2), 524288);
					func_855(func_1221(iVar2), 1048576);
					func_719(iParam0, 557524588);
				}
			}
		}
	}
	if (iVar3 != -1)
	{
		iVar4 = func_277(func_857(iVar3));
		if (_0x800df3fc913355f3(iVar4) && _0xeb98b38ca60742d7(iVar4))
		{
			if (!func_767(iParam0, 1792646445, 1) && func_1219(func_1218(iParam0, 1792646445), 1) <= 2)
			{
				if (func_1220(iParam0, iVar3))
				{
					func_818(iParam0, 1792646445, 1, 1710500858, -1);
					func_854(func_1221(iVar3), 524288);
					func_855(func_1221(iVar3), 1048576);
				}
			}
		}
		else if (_0x800df3fc913355f3(iVar4) && !_0xeb98b38ca60742d7(iVar4))
		{
			if (func_1222(iParam0))
			{
				if (func_767(iParam0, 1792646445, 1) && func_1219(func_1218(iParam0, 1792646445), 1) <= 2)
				{
					func_719(iParam0, 1792646445);
					func_855(func_1221(iVar3), 524288);
					func_855(func_1221(iVar3), 1048576);
				}
			}
		}
	}
	return 1;
}

bool func_729(int iParam0)
{
	if (!func_831(iParam0))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (Global_1935183->f_24)
	{
		Global_1935183->f_23 = 1;
		return true;
	}
	if (Global_1935183->f_73[iParam0]->f_6 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			Global_1935183->f_73[iParam0]->f_3[iVar1] = Global_1935183->f_73[iParam0][iVar1];
			(*Global_1935183->f_73[iParam0])[iVar1] = 0;
			iVar1++;
		}
	}
	iVar1 = Global_1935183->f_73[iParam0]->f_6;
	if (Global_40.f_11206[iParam0][iVar1] != -1600776215)
	{
		if (((*Global_40.f_11206[iParam0])[iVar1]->f_4 != -15 && func_579((*Global_40.f_11206[iParam0])[iVar1]->f_4)) && ((*Global_40.f_11206[iParam0])[iVar1]->f_3 != 2 || func_1222(iParam0)))
		{
			func_1204(iParam0, (*Global_40.f_11206[iParam0])[iVar1]);
		}
		else
		{
			func_1223(iParam0, Global_40.f_11206[iParam0][iVar1], 1);
		}
	}
	if (Global_1935183->f_73[iParam0]->f_6 >= 4)
	{
		Global_1935183->f_73[iParam0]->f_6 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (&Global_1935183->f_73[iParam0]->f_3[iVar1] != Global_1935183->f_73[iParam0][iVar1])
			{
				bVar0 = true;
			}
			iVar1++;
		}
	}
	else
	{
		Global_1935183->f_73[iParam0]->f_6++;
		return false;
	}
	if (bVar0)
	{
		Global_1935183->f_23 = 1;
	}
	return true;
}

int func_730(int iParam0, var uParam1)
{
	if (!func_831(iParam0))
	{
		return 0;
	}
	iVar0 = 5;
	iVar1[0] = 48;
	iVar1[1] = 21;
	iVar1[2] = 7;
	iVar1[3] = 3;
	iVar1[4] = 1;
	iVar7 = 0;
	while (iVar7 < 5)
	{
		iVar8 = &iVar1[iVar7];
		while (iVar8 < iVar0)
		{
			Var9 = { *(*uParam1)[iVar8] };
			iVar14 = iVar8;
			while (iVar14 > 0 && func_1219((*uParam1)[iVar14]->f_1, 1) > func_1219(((*uParam1)[(iVar14 - 1)])->f_1, 1))
			{
				*(*uParam1)[iVar14] = { *((*uParam1)[(iVar14 - 1)]) };
				iVar14 = (iVar14 - 1);
				*(*uParam1)[iVar14] = { Var9 };
			}
			iVar8++;
		}
		iVar7++;
	}
	return 1;
}

int func_731(int iParam0, int iParam1)
{
	Var0 = Global_1935183->f_30;
	Var0.f_2 = 0;
	Var0.f_3 = func_1224(func_1203(iParam0));
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1;
		Var0.f_3 = iParam1;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return Var0.f_1;
		}
	}
	return 0;
}

int func_732(int iParam0)
{
	Var0 = Global_1935183->f_30;
	Var0.f_1 = iParam0;
	Var0.f_3 = 0;
	Var0.f_2 = 2;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar8 = _datafile_get_num_children(Var0, Var0.f_1);
		uVar7 = Var0.f_1;
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			Var0.f_2 = 3;
			Var0.f_3 = iVar9;
			if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
				func_1225(Var0, 4, &iVar5, 0);
				func_1226(Var0, 5, &bVar6, 0);
				if (_does_scenario_group_exist_hash(iVar5))
				{
					_set_scenario_group_enabled_hash(iVar5, bVar6);
				}
			}
			Var0.f_1 = uVar7;
			iVar9++;
		}
	}
	return 1;
}

bool func_733()
{
	if (!func_715())
	{
		return false;
	}
	switch (Global_1935183->f_58)
	{
		case 0:
			func_1227(func_1203(Global_1935183->f_1), &(Global_1935183->f_70), &(Global_1935183->f_71), 0, 0);
			Global_1935183->f_72 = Global_1935183->f_70;
			Global_1935183->f_58 = 1;
			break;
		case 1:
			if (is_screen_faded_out())
			{
				iVar2 = Global_1935183->f_71;
			}
			else if (Global_1935183->f_3)
			{
				iVar2 = 5;
			}
			else
			{
				iVar2 = 3;
			}
			iVar1 = (Global_1935183->f_72 + iVar2);
			if (iVar1 > Global_1935183->f_71)
			{
				iVar1 = Global_1935183->f_71;
			}
			iVar0 = Global_1935183->f_72;
			while (iVar0 <= iVar1)
			{
				Global_1935183->f_72 = iVar0;
				iVar3 = 0;
				while (iVar3 < Global_1935183->f_37)
				{
					if (func_1228(func_690(Global_1935183->f_72), &(Global_1935183->f_31[iVar3])))
					{
					}
					else
					{
						if (iVar3 >= (Global_1935183->f_37 - 1))
						{
							if (!func_693(Global_1935183->f_72, 4096))
							{
								iVar4 = func_731(Global_1935183->f_1, -1600776215);
								if (!func_1228(func_690(Global_1935183->f_72), iVar4))
								{
									_0x8b44273a92cd406c(func_690(Global_1935183->f_72));
								}
							}
						}
						iVar3++;
					}
				}
				iVar0++;
			}
			if (Global_1935183->f_72 >= Global_1935183->f_71)
			{
				Global_1935183->f_58 = 2;
			}
			break;
		case 2:
			Global_1935183->f_58 = 0;
			return true;
	}
	return false;
}

void func_734()
{
	Global_1935183->f_38[0] = 2;
	Global_1935183->f_38[1] = 1;
	Global_1935183->f_38[2] = 3;
	Global_1935183->f_38[3] = 5;
	Global_1935183->f_38[4] = 4;
}

bool func_735(var uParam0)
{
	return func_1229(*uParam0, 1);
}

void func_736(var uParam0, bool bParam1)
{
	if (bParam1 || !func_735(uParam0))
	{
		func_1166(uParam0);
	}
}

void func_737(int iParam0)
{
	if (!func_1230(iParam0))
	{
		return;
	}
	if (!func_723(4))
	{
		return;
	}
	iVar0 = func_1231(4);
	if (iVar0 == 1077154516)
	{
		func_1213(-857562377, 4, 0, 1103626240);
		func_1214(-857562377, 1, 1103626240);
	}
	else
	{
		func_1213(1077154516, 4, 0, 1103626240);
		func_1214(1077154516, 1, 1103626240);
	}
	Global_1935183->f_26 = 0;
}

void func_738(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_739(var uParam0)
{
	if (!func_735(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1232(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_466() - uParam0->f_1);
}

bool func_740(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_741(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1233((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_742(int iParam0)
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

bool func_743(int iParam0, int iParam1)
{
	if (func_748(iParam0))
	{
		return true;
	}
	if (func_1234())
	{
		return true;
	}
	if (func_1235(iParam1, 1024))
	{
		return true;
	}
	if (Global_1934266->f_60)
	{
		return true;
	}
	return false;
}

bool func_744()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_745(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_746()
{
	switch (func_36())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_747(int iParam0)
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

bool func_748(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

bool func_749(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_750(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

void func_751(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 - (uParam0->f_63 && iParam1));
}

bool func_752(int iParam0, bool bParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	iVar0 = func_1236(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_1237(iVar1, &iVar0))
		{
			iVar2 = func_592(func_1238(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_1239(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_1239(iVar1, 47, 1))
				{
					return true;
				}
				if (!_0x5102307ce88798eb(iVar2))
				{
					request_ped_visibility_tracking(iVar2);
				}
				if (is_tracked_ped_visible(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

void func_753(int iParam0)
{
	iVar0 = func_1236(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_1237(iVar1, &iVar0))
		{
			iVar2 = func_592(func_1238(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else if (_0x5102307ce88798eb(iVar2))
			{
				_0x3088634cf8c819cf(iVar2);
			}
		}
		iVar1++;
	}
}

bool func_754(int iParam0)
{
	if (iParam0 == 37)
	{
		return false;
	}
	if (iParam0 == 28)
	{
		if (_does_volume_exist((*Global_1835011)[iParam0]->f_61))
		{
			if (!func_1240(Global_35, _0xf70f00013a62f866((*Global_1835011)[iParam0]->f_61), ((*Global_1835011)[iParam0]->f_65 / 2f), 1, 1))
			{
				bVar0 = true;
			}
		}
		else if (!func_1240(Global_35, func_296(iParam0), ((*Global_1835011)[iParam0]->f_65 / 2f), 1, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (is_itemset_valid((*Global_1835011)[iParam0]->f_59))
		{
			iVar1 = 0;
			while (iVar1 < get_itemset_size((*Global_1835011)[iParam0]->f_59))
			{
				iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, (*Global_1835011)[iParam0]->f_59));
				if (!is_entity_dead(iVar2))
				{
					if (func_1241(Global_35, iVar2, ((*Global_1835011)[iParam0]->f_65 / 2f), 1))
					{
						bVar0 = false;
					}
				}
				else if (!func_1242(get_ped_index_from_entity_index(iVar2)))
				{
					return true;
				}
				iVar1++;
			}
			if (bVar0)
			{
				return false;
			}
		}
	}
	if (func_1243(iParam0))
	{
		return true;
	}
	if (func_1244((*Global_1835011)[iParam0]->f_58, (*Global_1835011)[iParam0]->f_61))
	{
		return true;
	}
	return false;
}

void func_755(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_304(iParam0))
	{
		return;
	}
	if (func_328(iParam0))
	{
		func_1245(iParam0, 0, 2);
	}
	iVar0 = func_297(iParam0);
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

void func_756(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_1246(iParam1))
	{
		iParam1 = func_297(func_295(iParam0));
		if (!func_1246(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_758(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_380())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_1247(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_758(iParam0, -1) && func_748(iParam0))
			{
				func_760(iParam0, fParam5, iParam1, bParam2, 1);
				func_750((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_759(iParam0)) && !Global_43891)
	{
		func_760(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_1235(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_369(iParam0)) && !func_1235(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_755((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_1248(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

void func_757(int iParam0, float fParam1)
{
	if (((fParam1 <= (10f * 10f) && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && !func_1249()) && func_749((*Global_1835011)[iParam0], 2))
	{
		if (func_749((*Global_1835011)[iParam0], 4096) && !func_1250((*Global_1835011)[iParam0], 8))
		{
			sVar0 = _create_var_string(2, "MISSION_MEMORY", (*Global_1835011)[iParam0]->f_27);
			func_382(sVar0, 10000, 0, 0, 0, 1);
			func_1251((*Global_1835011)[iParam0], 8);
		}
		else if (func_749((*Global_1835011)[iParam0], 1024) && !func_1250((*Global_1835011)[iParam0], 4))
		{
			sVar0 = _create_var_string(2, "MISSION_ANTAGONIZE", (*Global_1835011)[iParam0]->f_27);
			func_382(sVar0, 10000, 0, 0, 0, 1);
			func_1251((*Global_1835011)[iParam0], 4);
		}
		else if (func_749((*Global_1835011)[iParam0], 2048) && !func_1250((*Global_1835011)[iParam0], 2))
		{
			sVar0 = _create_var_string(2, "MISSION_WANTED_REGION", (*Global_1835011)[iParam0]->f_27);
			func_382(sVar0, 10000, 0, 0, 0, 1);
			func_1251((*Global_1835011)[iParam0], 2);
		}
		else if (func_749((*Global_1835011)[iParam0], 16384) && !func_1250((*Global_1835011)[iParam0], 16))
		{
			sVar0 = _create_var_string(2, "MISSION_COMBAT", (*Global_1835011)[iParam0]->f_27);
			func_382(sVar0, 10000, 0, 0, 0, 1);
			func_1251((*Global_1835011)[iParam0], 16);
		}
		else if (func_749((*Global_1835011)[iParam0], 32768) && !func_1250((*Global_1835011)[iParam0], 32))
		{
			if (func_240((*Global_1835011)[iParam0]->f_64) && (iParam0 == 7 || iParam0 == 17))
			{
				sVar0 = _create_var_string(2, "MISSION_PREV_WANTED_2", (*Global_1835011)[iParam0]->f_27);
			}
			else
			{
				sVar0 = _create_var_string(2, "MISSION_PREV_WANTED", (*Global_1835011)[iParam0]->f_27);
			}
			func_382(sVar0, 10000, 0, 0, 0, 1);
			func_1251((*Global_1835011)[iParam0], 32);
		}
	}
}

bool func_758(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_741(iParam0))
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

bool func_759(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

int func_760(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_359(32768))
	{
		return 0;
	}
	iVar0 = func_36();
	if ((bParam4 && func_1252(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_1252(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_380())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_1253(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_486((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_983()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_486((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_983()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_486((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_758(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_749((*Global_1835011)[iParam0], 2))
			{
				if (func_741(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_742(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_296(iParam0));
				}
			}
			else if (func_741(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_742(iParam0), func_1254(iParam0), func_1255(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_1256(iParam0), func_1257(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_741(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_1258(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_742(iParam0));
				bVar2 = true;
			}
		}
		else if (func_1259(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_296(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_296(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_296(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_741(iParam0))
			{
				func_1260(iParam2, 4194304);
			}
			else
			{
				func_1248(iParam2, 4194304);
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
		if (!func_1252(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_1259(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_1261(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_1259(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_749((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_747(Global_40.f_4283);
	if (func_182(iVar4) && func_861((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_1262(iVar4);
	}
	if (func_1263(iParam0, bVar5, iVar4))
	{
		func_1264((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_100(579))
	{
		func_1265(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_1252(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_1252(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_983()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_1266(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_758(iParam0, iVar0) || (fParam1 >= (func_1267(iParam0) * func_1267(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_382(&cVar7, 10000, 0, 0, 0, 1);
			func_1261(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

bool func_761(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_762(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_763(int iParam0, int iParam1)
{
	if (!func_761(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0] && iParam1) != 0;
}

bool func_764(int iParam0)
{
	if (!_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		return false;
	}
	if (Global_1430221->f_4)
	{
		return false;
	}
	iVar0 = _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
	if (is_screen_faded_out())
	{
		if (does_entity_exist(iVar0))
		{
			if (func_1268(Global_35, iVar0, (*Global_1425371)[iParam0]->f_8))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (does_entity_exist(iVar0))
	{
		return false;
	}
	return true;
}

void func_765(int iParam0, int iParam1)
{
	if (!func_761(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

bool func_766(var uParam0, float fParam1)
{
	if (func_1269(uParam0, fParam1))
	{
		func_738(uParam0);
		return true;
	}
	return false;
}

bool func_767(int iParam0, int iParam1, bool bParam2)
{
	if (!func_831(iParam0))
	{
		return false;
	}
	if (!func_1270(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_1271(iParam0, iParam1);
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

float func_768(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_769(int iParam0)
{
	if (func_36() != -1)
	{
		return true;
	}
	return func_744();
}

bool func_770(int iParam0)
{
	if (func_762(iParam0))
	{
		return false;
	}
	if (func_763(iParam0, 1028))
	{
		return false;
	}
	if (!func_763(iParam0, 4096) && get_clock_hours() != (*Global_1425371)[iParam0]->f_371)
	{
		func_309(iParam0, 4096);
	}
	if (!func_763(iParam0, 4096))
	{
		return false;
	}
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		iVar0 = _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
		if (does_entity_exist(iVar0) && (*Global_1425371)[iParam0]->f_8 != 0)
		{
			if (func_1268(Global_35, iVar0, (*Global_1425371)[iParam0]->f_8))
			{
				return false;
			}
		}
	}
	if (is_screen_faded_out())
	{
		return true;
	}
	if (!func_763(iParam0, 8192))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

Vector3 func_771(int iParam0)
{
	if (!func_1272(iParam0))
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_625(func_480());
	iVar1 = func_624(func_480());
	if (iVar1 > 45)
	{
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < (*Global_1425371)[iParam0]->f_9)
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (func_1273(iParam0, iVar2, iVar3))
			{
				if (iVar0 == &(*Global_1425371)[iParam0]->f_10[iVar2]->f_6[iVar3])
				{
					iVar4 = iVar2;
				}
				else
				{
					iVar3++;
				}
				iVar2++;
				if (_0xd1df5e54f4acbe1a((*Global_1425371)[iParam0]->f_1, (*Global_1425371)[iParam0]->f_10[iVar4]->f_1, (*Global_1425371)[iParam0]->f_10[iVar4]->f_4, 0, 0))
				{
					_0xd0ba1853d76683c8((*Global_1425371)[iParam0]->f_1, (*Global_1425371)[iParam0]->f_10[iVar4]->f_1, (*Global_1425371)[iParam0]->f_10[iVar4]->f_4);
					_0x34bcf6209b9668a7((*Global_1425371)[iParam0]->f_1, 1);
					func_765(iParam0, 4096);
					(*Global_1425371)[iParam0]->f_371 = iVar0;
					return (*Global_1425371)[iParam0]->f_10[iVar4]->f_1;
				}
				return 0f, 0f, 0f;
			}
		}
	}
}

int func_772(int iParam0)
{
	bVar0 = func_713(45);
	switch (iParam0)
	{
		case 0:
			if (bVar0)
			{
				return -512973841;
			}
			else
			{
				return 470037909;
			}
			break;
		case 1:
			return -904280534;
		case 3:
			return -1438750434;
		case 6:
			return -41414424;
		case 7:
			return 214708080;
		case 5:
			if (bVar0)
			{
				return -241284918;
			}
			else
			{
				return 218350989;
			}
			break;
		case 8:
			return -1083616881;
		case 9:
			return -1643549114;
		case 10:
			return -1865722934;
		case 11:
			return 1936859429;
		case 12:
			return -272646696;
		case 2:
		case 4:
			if (bVar0)
			{
				return -634462673;
			}
			else
			{
				return 1824681511;
			}
			break;
	}
	return 0;
}

void func_773()
{
	iVar0 = func_1274(Global_36, 0);
	if (!func_1275(iVar0))
	{
		return;
	}
	iVar1 = _0x6e585a616abb8401((*Global_1425371)[iVar0]->f_1);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return;
	}
	bVar2 = _0xe887bd31d97793f6(iVar1);
	if (bVar2)
	{
		func_309(iVar0, 2048);
	}
	if (bVar2 || (!bVar2 && func_763(iVar0, 2048)))
	{
		iVar3 = -1;
		iVar4 = -1;
		if (!bVar2)
		{
			func_1276(iVar0, &iVar3, &iVar4);
		}
		else
		{
			iVar3 = _0x86fa6d8b48667d75(iVar1);
			iVar4 = _0xaf787e081ac4a8ee(iVar1);
		}
		if (iVar3 == -1 || iVar4 == -1)
		{
			return;
		}
		iVar5 = _0x2963b5c1637e8a27(iVar1);
		if (!does_entity_exist(iVar5) || is_entity_dead(iVar5))
		{
			return;
		}
		if (is_any_speech_playing(iVar5) || is_horn_active(iVar1))
		{
			return;
		}
		sVar6 = func_1277();
		set_ambient_voice_name(iVar5, sVar6);
		if (func_762(iVar0))
		{
			if (iVar0 == 11)
			{
				sVar7 = func_1278(2);
			}
			else
			{
				switch (iVar3)
				{
					case 0:
						if (bVar2)
						{
							sVar7 = func_1278(4);
						}
						else
						{
							sVar7 = func_1278(2);
						}
						break;
					case 1:
						if (bVar2)
						{
							sVar7 = func_1278(4096);
						}
						else
						{
							sVar7 = func_1278(2);
						}
						break;
					case 2:
						if (bVar2)
						{
							sVar7 = func_1278(64);
						}
						else
						{
							sVar7 = func_1278(2048);
						}
						break;
					case 3:
						if (bVar2)
						{
							sVar7 = func_1278(32);
						}
						else
						{
							sVar7 = func_1278(8192);
						}
						break;
					case 4:
						if (bVar2)
						{
							sVar7 = func_1278(128);
						}
						else
						{
							sVar7 = func_1278(2);
						}
						break;
					case 5:
						if (bVar2)
						{
							sVar7 = func_1278(1024);
						}
						else
						{
							sVar7 = func_1278(2);
						}
						break;
					case 6:
						if (bVar2)
						{
							sVar7 = func_1278(16);
						}
						else
						{
							sVar7 = func_1278(512);
						}
						break;
					case 7:
						if (bVar2)
						{
							sVar7 = func_1278(8);
						}
						else
						{
							sVar7 = func_1278(256);
						}
						break;
				}
			}
			func_1279(iVar5, sVar7, sVar6);
		}
		else
		{
			if (iVar3 == -1 || iVar4 == -1)
			{
				return;
			}
			iVar8 = _0x9cc94a948eaf5372(iVar4, iVar3);
			switch (iVar4)
			{
				case 0:
					switch (iVar8)
					{
						case -2018498350:
							if (bVar2)
							{
								sVar7 = func_1280(32);
							}
							else
							{
								sVar7 = func_1280(4194304);
							}
							break;
						case -915618989:
							if (bVar2)
							{
								sVar7 = func_1280(16384);
							}
							else if (iVar0 == 0 || iVar0 == 2)
							{
								sVar7 = func_1280(262144);
							}
							else
							{
								sVar7 = func_1280(1048576);
							}
							break;
						case -1813294321:
							if (bVar2)
							{
								sVar7 = func_1280(16);
							}
							else
							{
								sVar7 = func_1280(134217728);
							}
							break;
						case 1575102585:
							if (bVar2)
							{
								sVar7 = func_1280(131072);
							}
							else if (iVar0 == 0 || iVar0 == 1)
							{
								sVar7 = func_1280(2);
							}
							else
							{
								sVar7 = "";
							}
							break;
						case 863374787:
							if (bVar2)
							{
								sVar7 = func_1280(64);
							}
							else if (iVar0 == 0 || iVar0 == 1)
							{
								sVar7 = func_1280(2);
							}
							else
							{
								sVar7 = "";
							}
							break;
						case 493881814:
							if (bVar2)
							{
								sVar7 = func_1280(4);
							}
							else
							{
								sVar7 = func_1280(524288);
							}
							break;
						case -1838172638:
							if (bVar2)
							{
								sVar7 = func_1280(512);
							}
							else
							{
								sVar7 = func_1280(32768);
							}
							break;
					}
					break;
				case 1:
					switch (iVar8)
					{
						case 1585115407:
							if (bVar2)
							{
								sVar7 = func_1280(8);
							}
							else
							{
								sVar7 = func_1280(4194304);
							}
							break;
					}
					break;
				case 2:
					switch (iVar8)
					{
						case -262340954:
							if (bVar2)
							{
								sVar7 = func_1280(128);
							}
							else
							{
								sVar7 = func_1280(65536);
							}
							break;
					}
					break;
				case 14:
					switch (iVar8)
					{
						case 1782343744:
							if (bVar2)
							{
								sVar7 = func_1280(512);
							}
							else
							{
								sVar7 = func_1280(32768);
							}
							break;
					}
					break;
			}
			if (is_string_null_or_empty(sVar7))
			{
				func_1279(iVar5, sVar7, sVar6);
			}
			if (!bVar2)
			{
				func_765(iVar0, 2048);
			}
		}
	}
}

bool func_774(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 5:
		case 6:
		case 7:
			return false;
		default:
			break;
	}
	return true;
}

float func_775(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11f;
		case 1:
			return 11f;
		case 2:
			return 11f;
		case 3:
			return 11f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 3.5f;
		case 9:
			return 3.5f;
		case 10:
			return 3.5f;
		case 11:
			return 3.5f;
		case 12:
			return 3.5f;
		case 5:
			return 0f;
		case 4:
			return 11f;
		default:
			break;
	}
	return 5f;
}

void func_776(int iParam0, int iParam1, int iParam2, vector3 vParam3)
{
	func_1281(12, &uVar0);
	iVar1 = func_1282(uVar0, iParam1, vParam3);
	if (iVar1 == 0)
	{
		return;
	}
	Var2 = uVar0;
	Var2.f_2 = -1956866776;
	Var2.f_3 = func_1283(iParam0);
	Var2.f_4 = iVar1;
	if (_datafile_get_data_node_index(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = -1817584937;
		_datafile_get_bool(&uVar7, &Var2);
		(*Global_1425371)[iParam0]->f_2 = iParam1;
		(*Global_1425371)[iParam0]->f_2.f_1 = iParam2;
		(*Global_1425371)[iParam0]->f_2.f_2 = { vParam3 };
		(*Global_1425371)[iParam0]->f_2.f_5 = uVar7;
	}
}

int func_777(int iParam0)
{
	if (func_762(iParam0))
	{
		return 12;
	}
	return 175;
}

int func_778(int iParam0)
{
	if (!func_761(iParam0))
	{
		return 0;
	}
	return (*Global_1425371)[iParam0]->f_8;
}

bool func_779(int iParam0)
{
	iVar0 = func_778(iParam0);
	vVar1 = { func_1284(iParam0) };
	iVar4 = func_1285(iParam0);
	if (!_0xf05dfaf1adfef2cd(iVar0, vVar1, iVar4, 0))
	{
		return false;
	}
	(*Global_1425371)[iParam0]->f_1 = _0x331cbd247fc5daa8(iVar0, vVar1, iVar4, func_1286(iParam0));
	if (_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		if (!_0xb4241ad8f5aee9ed((*Global_1425371)[iParam0]->f_1))
		{
			_0x15206e88ff7617df((*Global_1425371)[iParam0]->f_1, func_775(iParam0));
			_0x38e7dd70a242d5cb((*Global_1425371)[iParam0]->f_1, func_1287(iParam0));
			_0x63509ddf102e08e8((*Global_1425371)[iParam0]->f_1, func_1288(iParam0));
			if (func_762(iParam0))
			{
				_0x615b3b8e73634509((*Global_1425371)[iParam0]->f_1, 6f);
				_0x6b34be961f639e21((*Global_1425371)[iParam0]->f_1, 1);
			}
			else if (!func_763(iParam0, 4))
			{
				_0x427c919e9809e370((*Global_1425371)[iParam0]->f_1, func_1288(iParam0));
				_0x41365db586cd9e8e((*Global_1425371)[iParam0]->f_1, func_1289(iParam0));
				_0xd0aabe5b9f8fa589((*Global_1425371)[iParam0]->f_1, func_1290(iParam0));
				func_1291(iParam0);
			}
		}
		func_765(iParam0, 256);
		if (Global_1430221->f_1)
		{
			_0x0d5fdf0d36fa10cd((*Global_1425371)[iParam0]->f_1);
		}
	}
	return true;
}

bool func_780()
{
	if (func_36() != -1)
	{
		return false;
	}
	if ((((((func_103(0, 0, 1) || func_1034(54)) || func_294(54)) || func_369(54)) || func_319(69, 0)) || func_1033(69)) || func_1292(69))
	{
		return false;
	}
	if (func_1293(0, 2))
	{
		return false;
	}
	return true;
}

void func_781()
{
	Var0.f_2 = -1;
	iVar6 = 0;
	while (iVar6 < 5)
	{
		*Global_43806[iVar6] = { Var0 };
		iVar6++;
	}
	Global_43837 = 0;
}

int func_782(int iParam0)
{
	if (func_320(iParam0))
	{
		return 0;
	}
	if (func_319(iParam0, 0))
	{
		func_1294(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_1294(iParam0);
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

Vector3 func_783(int iParam0)
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

Vector3 func_784(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1295(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_785(int iParam0, bool bParam1, float fParam2)
{
	if (!bParam1)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 == 0 && (*Global_1347702)[iParam0]->f_13 & 32 == 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		fParam2 = vdist2(Global_36, func_783(iParam0));
	}
	if ((*Global_1347702)[iParam0]->f_13 & 512 != 0)
	{
		if (fParam2 > 225f)
		{
			iVar0 = _0xc17f69e1418cd11f(1);
			if (iVar0 != (*Global_1347702)[iParam0]->f_39)
			{
				_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_39, 0);
			}
			func_793(&((*Global_1347702)[iParam0]->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_1249())
		{
			return;
		}
		if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
		{
			sVar1 = _create_var_string(2, "RCM_INVALID_TOD", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		else if ((*Global_1347702)[iParam0]->f_14 & 1024 != 0)
		{
			sVar1 = _create_var_string(2, "MISSION_ANTAGONIZE", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		else if ((*Global_1347702)[iParam0]->f_14 & 4096 != 0)
		{
			sVar1 = _create_var_string(2, "MISSION_MEMORY", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		else if ((*Global_1347702)[iParam0]->f_14 & 2048 != 0)
		{
			sVar1 = _create_var_string(2, "MISSION_WANTED_REGION", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		else if ((*Global_1347702)[iParam0]->f_14 & 16384 != 0)
		{
			sVar1 = _create_var_string(2, "MISSION_PREV_WANTED", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		else if ((*Global_1347702)[iParam0]->f_14 & 8192 != 0)
		{
			sVar1 = _create_var_string(2, "MISSION_COMBAT", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		else if ((*Global_1347702)[iParam0]->f_14 & 32768 != 0)
		{
			sVar1 = _create_var_string(2, "MISSION_PREV_WANTED_2", (*Global_1347702)[iParam0]->f_37);
			(*Global_1347702)[iParam0]->f_39 = func_382(sVar1, 10000, 0, 0, 0, 1);
		}
		func_792(&((*Global_1347702)[iParam0]->f_13), 512);
	}
}

int func_786()
{
	return Global_1572864->f_8;
}

int func_787(int iParam0)
{
	if (func_1296(iParam0) == 8)
	{
		return func_375(iParam0);
	}
	return -1;
}

int func_788(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1297(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_789(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 8 != 0)
	{
		return true;
	}
	if (func_486((*Global_1835011)[43]->f_1, 1))
	{
		if (!func_486((*Global_1835011)[44]->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (func_486((*Global_1835011)[67]->f_1, 1))
		{
			if ((!func_486((*Global_1347702)[8]->f_15, 1) && !func_486((*Global_1835011)[69]->f_1, 1)) && iParam0 != 8)
			{
				if (does_script_exist(&((*Global_1835011)[67]->f_22)) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&((*Global_1835011)[67]->f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!func_1298(2) && !func_486((*Global_1347702)[61]->f_15, 1)) && func_486((*Global_1347702)[59]->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_1301(func_1299(65536), 0, 3, func_1300(65536));
		if (func_304(iVar1))
		{
			iVar0 = func_575(iVar1);
			if (!func_610(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_486((*Global_1835011)[14]->f_1, 1) && func_486((*Global_1347702)[62]->f_15, 1)) && func_486((*Global_1347702)[0]->f_15, 1)) && func_486((*Global_1347702)[94]->f_15, 1)) && func_486((*Global_1835011)[25]->f_1, 1)) && (func_486((*Global_1835011)[8]->f_1, 1) || (func_486((*Global_1347702)[98]->f_15, 1) && func_575((*Global_1347702)[98]->f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_486((*Global_1835011)[34]->f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_486((*Global_1347702)[41]->f_15, 1))
		{
			if (!func_1302(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_1303(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_486((*Global_1347702)[51]->f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_328((*Global_1835011)[21]->f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_809((*Global_1347702)[iParam0]->f_15) == 0)
		{
			if (func_1304() <= 160)
			{
				return true;
			}
			else
			{
				func_810((*Global_1347702)[iParam0]->f_15, 1);
			}
		}
		if (!func_320(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_328((*Global_1835011)[47]->f_1))
		{
			return true;
		}
		else if (func_328((*Global_1835011)[45]->f_1))
		{
			return true;
		}
		else if (func_319(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_328((*Global_1835011)[21]->f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_328((*Global_1835011)[20]->f_1))
		{
			return true;
		}
		else if (func_328((*Global_1835011)[21]->f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (get_game_timer() + 5000 < &Global_1898438)
		{
			return true;
		}
		else if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
		{
			return true;
		}
		else if (!is_thread_active((*Global_1347702)[113]->f_42, false) && func_1305())
		{
			if (func_1306("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_813(&((*Global_1347702)[iParam0]->f_12), 262144);
				func_1307(&((*Global_1347702)[iParam0]->f_12), 64);
				func_1308(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_211(-404697685, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_328((*Global_1835011)[69]->f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_328((*Global_1835011)[21]->f_1))
		{
			return true;
		}
	}
	return false;
}

void func_790(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		iParam2 = 1;
		iParam3 = 1;
		bParam4 = true;
	}
	if (func_328((*Global_1347702)[iParam0]->f_15))
	{
		func_755((*Global_1347702)[iParam0]->f_15);
	}
	func_820(iParam0, iParam2, iParam3, 1, 32);
	if (func_376((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_813(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (bParam4)
	{
		func_1309(iParam0);
	}
	if (bParam1 == 1)
	{
		func_1310(iParam0, 1);
	}
}

void func_791(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (func_1311(iVar0, 4))
	{
	}
	else
	{
		iVar1 = func_1296((*Global_1347702)[iParam0]->f_48);
		if (iVar1 != 8)
		{
			return;
		}
		iVar0 = func_375((*Global_1347702)[iParam0]->f_48);
		if (!func_327(iVar0))
		{
			return;
		}
		if (!func_1311(iVar0, 4))
		{
			return;
		}
	}
	func_1312(iVar0, bParam1);
}

void func_792(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_793(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_794(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	func_1294(iParam0);
	func_1313(iParam0);
	func_1314(iParam0);
	_0x748c5f51a18cb8f0(1);
	if (iParam0 == 4)
	{
		func_1315();
	}
	else if (iParam0 == 22)
	{
		func_1316();
	}
	else if (iParam0 == 27)
	{
		if (!func_1311(26, 64))
		{
			func_1317(26, 64);
			func_1318(26, 0);
			func_1319(26);
		}
	}
	else if (iParam0 == 28)
	{
		if (!func_1320(-789397228))
		{
			func_1321(-789397228);
		}
		if (!func_1320(1358491857))
		{
			func_1321(1358491857);
		}
	}
	else if (iParam0 == 43)
	{
		func_1322();
	}
	else if (iParam0 == 96)
	{
		if (iParam0 == func_325())
		{
		}
		else
		{
			func_1323();
		}
	}
	else if (iParam0 == 97)
	{
		func_1324(0);
	}
	else if (iParam0 == 112)
	{
		func_1325(0);
	}
}

void func_795(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_327(iParam0))
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
	func_1326(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_806(iParam0, func_783(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_806(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_806(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_792(&((*Global_1347702)[iParam0]->f_13), 4096);
}

bool func_796(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_48 == -1)
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_47 == 0)
	{
		return true;
	}
	iVar0 = func_1327(iParam0);
	return func_241(iVar0, 1);
}

void func_797(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_48 != -1 && (*Global_1347702)[iParam0]->f_47 != 0)
	{
		(*Global_1347702)[iParam0]->f_47 = 0;
		func_1328(iParam0);
	}
}

int func_798(int iParam0)
{
	if (iParam0 == 11 || iParam0 == 153)
	{
		return 26;
	}
	else if (iParam0 == 12 || iParam0 == 16)
	{
		return 5;
	}
	else if ((iParam0 == 13 || iParam0 == 154) || iParam0 == 15)
	{
		return 105;
	}
	else if (iParam0 == 14 || iParam0 == 135)
	{
		return 76;
	}
	else if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 155)
	{
		return 38;
	}
	else if (iParam0 == 19 || iParam0 == 20)
	{
		return 115;
	}
	return -1;
}

void func_799(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return;
	}
	func_1329(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_1329(&((*Global_1347702)[iParam0]->f_14), 2);
	func_1307(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_793(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_327(&(Global_40.f_450[iVar0])))
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

bool func_800(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_745(iParam0, 67108864);
}

bool func_801(int iParam0, int iParam1)
{
	return func_1330(iParam0, iParam1);
}

bool func_802(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_44 != -1)
	{
		if ((*Global_1347702)[iParam0]->f_44 != 0)
		{
			if (!func_1084((*Global_1347702)[iParam0]->f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_803(int iParam0)
{
	func_792(&((*Global_1347702)[iParam0]->f_13), 16);
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			func_806(iParam0, func_784(iParam0), 1, 0);
		}
		else
		{
			func_807(iParam0);
		}
	}
	else
	{
		func_821(iParam0, 0);
	}
}

float func_804(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_14 & 2 != 0)
	{
		return (*Global_1347702)[iParam0]->f_19;
	}
	else if ((*Global_1347702)[iParam0]->f_16 <= 50f)
	{
		return ((*Global_1347702)[iParam0]->f_16 - 20f);
	}
	return 50f;
}

bool func_805(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return false;
	}
	if ((((Global_1395601->f_4 & 1 != 0 || Global_1395601->f_4 & 2 != 0) || func_358(&Global_1935630, 131072)) || func_359(4096)) || func_358(&Global_1935630, 16384))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16384 != 0)
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_14 & 2 != 0)
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 4096 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1024 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return true;
	}
	if (iParam0 == 58)
	{
		return false;
	}
	return true;
}

void func_806(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_103(0, 0, 1))
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
	if (func_359(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_1331(iParam0);
	if (!bParam5 && func_1332(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_783(iParam0), (*Global_1347702)[iParam0]->f_18);
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
		func_1333(8);
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
	func_807(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_36() == -1)
	{
		func_1334(iParam0);
		iVar0 = func_747(Global_40.f_4283);
		if (func_182(iVar0) && func_861((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_1262(iVar0);
		}
		if (func_1335(iParam0, bVar1, iVar0))
		{
			func_1264((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
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
		func_792(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_1332(iParam0) || func_376((*Global_1347702)[iParam0]->f_12, 1)) || func_376((*Global_1347702)[iParam0]->f_12, 512)) || func_812((*Global_1347702)[iParam0]->f_13, 2048))
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
			func_792(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_1336(iParam0))
		{
			if (iParam0 == 97)
			{
				func_102(185, 0);
			}
			else
			{
				func_102(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_382(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_1317(iParam0, 2);
	}
}

void func_807(int iParam0)
{
	if (!func_1332(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_792(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_793(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

bool func_808(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((*Global_1347702)[iParam0]->f_12 & 32768 != 0)
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		return false;
	}
	if (!bParam3)
	{
		if (is_screen_faded_out())
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&(*Global_1347702)[iParam0]->f_29[iVar0] > -1 && &(*Global_1347702)[iParam0]->f_29[iVar0] < 27)
		{
			if (Global_40.f_4942[&(*Global_1347702)[iParam0]->f_29[iVar0]]->f_59 != 0)
			{
				if (Global_40.f_4942[&(*Global_1347702)[iParam0]->f_29[iVar0]]->f_59 != (*Global_1347702)[iParam0]->f_15)
				{
					return false;
				}
			}
			else if (func_1337(&((*Global_1347702)[iParam0]->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return false;
				}
				else if (!func_1338(&((*Global_1347702)[iParam0]->f_29[iVar0])))
				{
					return false;
				}
			}
			if (bParam4 && func_358(&Global_1935630, 4096))
			{
			}
			else if (func_1239(&((*Global_1347702)[iParam0]->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_1339(func_1119(&((*Global_1347702)[iParam0]->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_809(int iParam0)
{
	if (!func_304(iParam0))
	{
		return -1;
	}
	return func_1340(iParam0);
}

void func_810(int iParam0, int iParam1)
{
	if (!func_304(iParam0))
	{
		return;
	}
	func_1341(iParam0, iParam1);
}

void func_811(int iParam0, int iParam1)
{
	if (!func_304(iParam0))
	{
		return;
	}
	func_1342(iParam0, iParam1);
}

bool func_812(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_813(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_814(int iParam0, bool bParam1, int iParam2)
{
	if (!func_327(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = does_blip_exist((*Global_1347702)[iParam0]->f_37);
	}
	func_1343(&((*Global_1347702)[iParam0]->f_14));
	func_813(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_793(&((*Global_1347702)[iParam0]->f_13), 4096);
	if (bVar0)
	{
		if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_806(iParam0, func_783(iParam0), 0, 0);
			}
		}
		else if ((*Global_1347702)[iParam0]->f_18 > -1f)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_806(iParam0, func_784(iParam0), 0, 0);
			}
		}
		else
		{
			_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, 724623647);
		}
	}
}

float func_815(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_16 > 250f)
	{
		fVar0 = (*Global_1347702)[iParam0]->f_16;
	}
	else
	{
		fVar0 = 250f;
	}
	return fVar0;
}

int func_816(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1344(iParam0))
	{
		return -1;
	}
	if (func_36() != -1)
	{
		iVar2 = func_297(iParam0);
		if (iVar2 >= 0)
		{
			func_1345(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1346(iVar1, 1);
			func_1345(iParam0, 1);
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
		iVar2 = func_297(iParam0);
		if (iVar2 >= 0)
		{
			func_1345(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_304(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1346(iVar0, 1);
					func_1345(iParam0, 1);
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

bool func_817(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 143:
			*uParam2 = 1754500170;
			*uParam1 = 14;
			return true;
		default:
			break;
	}
	*uParam2 = -1600776215;
	*uParam1 = -1;
	return false;
}

int func_818(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_831(iParam0))
	{
		return 0;
	}
	iVar2 = func_1347(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			if (func_1219((*Global_40.f_11206[iParam0])[iVar0]->f_1, 1) > func_1219(iParam3, 1))
			{
				return 1;
			}
			(*Global_40.f_11206[iParam0])[iVar0]->f_2 = iParam2;
			(*Global_40.f_11206[iParam0])[iVar0]->f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_480();
				func_583(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(*Global_40.f_11206[iParam0])[iVar0]->f_4 = iVar1;
			(*Global_40.f_11206[iParam0])[iVar0]->f_3 = iVar2;
			func_1223(iParam0, iParam1, 1);
			Global_1935183->f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == -1600776215)
		{
			(*Global_40.f_11206[iParam0])[iVar0] = iParam1;
			(*Global_40.f_11206[iParam0])[iVar0]->f_2 = iParam2;
			(*Global_40.f_11206[iParam0])[iVar0]->f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_480();
				func_583(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(*Global_40.f_11206[iParam0])[iVar0]->f_4 = iVar1;
			(*Global_40.f_11206[iParam0])[iVar0]->f_3 = iVar2;
			func_1223(iParam0, iParam1, 1);
			Global_1935183->f_24 = 1;
			if (func_1348(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if ((*Global_40.f_11206[iParam0])[iVar3]->f_3 == iVar2 && Global_40.f_11206[iParam0][iVar3] != iParam1)
					{
						if ((Global_40.f_11206[iParam0][iVar3] == 557524588 || Global_40.f_11206[iParam0][iVar3] == 1792646445) && (iParam1 == 557524588 || iParam1 == 1792646445))
						{
							return 0;
						}
						func_1204(iParam0, (*Global_40.f_11206[iParam0])[iVar3]);
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_819(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_820(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1349(iParam0);
	}
	if (func_812((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_793(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_376((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_813(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_821(iParam0, 0);
	}
	func_1350(iParam0);
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

void func_821(int iParam0, bool bParam1)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_1343(&((*Global_1347702)[iParam0]->f_14));
		func_793(&((*Global_1347702)[iParam0]->f_13), 16);
		func_1326(iParam0);
		if ((!func_302(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_793(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_1351(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_799(iParam0, 16384);
			func_795(iParam0, 1, func_784(iParam0));
		}
	}
}

bool func_822()
{
	iVar0 = get_interior_from_entity(Global_35);
	if (!is_valid_interior(iVar0))
	{
		return false;
	}
	_get_interior_info(iVar0, &uVar1, &iVar4);
	switch (iVar4)
	{
		case -1212338017:
			return false;
		case 768224943:
			return false;
		case 1633500362:
			return false;
		case -1269216817:
			return false;
		case -1571304986:
			return false;
		case 1245139812:
			return false;
		case -803716508:
			return false;
		case 653987431:
			return false;
		case 1911907177:
			return false;
		case 1107105323:
			return false;
		case 37578405:
			return false;
		case -17417813:
			return false;
		default:
			break;
	}
	return true;
}

int func_823()
{
	return Global_40.f_4283.f_1;
}

bool func_824(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_745(iParam0, 8);
}

int func_825(float fParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		fVar0 = 2.5f;
		fVar1 = 7f;
	}
	else
	{
		fVar0 = 1f;
		fVar1 = 3f;
	}
	if (!(iLocal_39 == iParam2 || iLocal_39 == iParam3))
	{
		fVar0 = 0f;
	}
	if (fParam0 < (fVar1 - fVar0))
	{
		return iParam2;
	}
	else if (fParam0 >= (fVar1 + fVar0))
	{
		return iParam3;
	}
	return iLocal_39;
}

var func_826(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1352(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_827(bool bParam0, bool bParam1)
{
	if (func_36() == 0)
	{
		return _databinding_read_data_bool(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_1353())
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_491(Global_35))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_35))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1354())
	{
		if (bParam0)
		{
			if (func_473() != 8 && func_473() != 7)
			{
				func_382("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_382("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (does_entity_exist(iVar0))
		{
			if (!is_entity_dead(iVar0))
			{
				if (is_entity_in_air(iVar0, 1) || is_ped_swimming(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (is_entity_in_air(Global_35, 1) || is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_interior_scene())
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_157(player_id(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x26934083d3f2579c(player_id()))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (is_ped_active_in_scenario(Global_35, 1))
		{
			if (bParam0)
			{
				func_382("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (func_129(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_463())
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1355(-608558181) || _get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_minigame_in_progress())
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((is_ped_in_any_vehicle(Global_35, false) || (!is_ped_ragdoll(Global_35) && is_ped_on_vehicle(Global_35, false))) || is_ped_in_any_boat(Global_35)) || is_player_riding_train(player_id())) || is_ped_jacking(Global_35))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_103(0, 1, 1) && !func_1356(1))
	{
		if (bParam0)
		{
			if (func_369(15))
			{
				func_382("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_382("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (func_342() == 8)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1357(8388608))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1358(8388608))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_300(func_156()))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((func_564() || func_1142(func_156()) == 9) || func_1359(func_156())) && !func_1360())
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1361(Global_35))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1362())
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (get_distance_between_coords(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { _0x6de03bcc15e81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_1240(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1363(Global_36, 5f))
	{
		if (bParam0)
		{
			func_382("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (vdist2(Global_36, (*Global_1347702)[74]->f_24) < 144f && _get_number_of_references_of_script_with_name_hash(1822247127) > 0)
	{
		return false;
	}
	return true;
}

void func_828(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	func_371(iParam0, &uVar0, &uVar1);
	func_1364(&uVar0, &uVar1);
}

void func_829(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_291(uParam0, iParam1);
	}
	else
	{
		func_191(uParam0, iParam1);
	}
}

void func_830(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

bool func_831(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_832()
{
	return Global_1894899 & 512 != 0;
}

bool func_833(int iParam0, int iParam1)
{
	if (!func_559(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

void func_834(int iParam0)
{
	Global_40.f_11623[iParam0]->f_4 = func_480();
	Global_40.f_11623[iParam0]->f_7++;
	if ((Global_40.f_11623[iParam0]->f_7 >= 3 && Global_40.f_11623[iParam0]->f_6 < 1) && func_1366(func_1365(-1342635612)) < 5)
	{
		func_1367(func_1365(-1342635612), 1);
	}
}

bool func_835(int iParam0, int iParam1)
{
	return func_189(Global_40.f_11623[iParam0]->f_1, iParam1);
}

char* func_836(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 4194304:
					return "";
				case 16777216:
					return "spd_blindmancassidy_horse_buck";
				case 8388608:
					return "";
			}
			break;
		default:
			return "";
	}
	return "";
}

void func_837(int iParam0, char* sParam1)
{
	if (!func_840(&((*Global_1396257)[iParam0]->f_626), 16))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(sParam1)) <= 0)
		{
			if (!func_840(&((*Global_1396257)[iParam0]->f_626), 64))
			{
				request_script(sParam1);
				func_841(&((*Global_1396257)[iParam0]->f_626), 64, 1);
			}
			if (has_script_loaded(sParam1))
			{
				start_new_script(sParam1, 1024);
				set_script_as_no_longer_needed(sParam1);
				func_840(&((*Global_1396257)[iParam0]->f_626), 256);
			}
		}
		else
		{
			func_841(&((*Global_1396257)[iParam0]->f_626), 256, 1);
		}
	}
}

void func_838(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_291(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
	else
	{
		func_191(&(Global_40.f_11623[iParam0]->f_1), iParam1);
	}
}

bool func_839(int iParam0)
{
	return iParam0 != -15;
}

bool func_840(var uParam0, int iParam1)
{
	return func_189(*uParam0, iParam1);
}

void func_841(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_291(uParam0, iParam1);
	}
	else
	{
		func_191(uParam0, iParam1);
	}
}

bool func_842(int iParam0)
{
	iVar0 = func_326();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

int func_843(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

char* func_844(int iParam0, int iParam1)
{
	if (iParam1 == 12)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "spd_agnesdowd1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "spd_andershelgerson";
				case 1:
					return "spd_andershelgerson";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "spd_armadillotowncrier";
				case 1:
					return "spd_armadillotowncrier";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "spd_blandpreacher";
				case 1:
					return "spd_blandpreacher";
				case 2:
					return "spd_blandpreacher";
				case 3:
					return "spd_blandpreacher";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "spd_blindmancassidy1";
				case 1:
					return "spd_blindmancassidy1";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "spd_chelonianmaster1";
				case 1:
					return "spd_chelonianmaster1";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "spd_civilwarcommando";
				case 1:
					return "spd_civilwarcommando";
				case 2:
					return "spd_civilwarcommando";
				case 3:
					return "spd_civilwarcommando";
				case 4:
					return "spd_civilwarcommando";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "spd_crackpotrobot";
				case 1:
					return "spd_crackpotrobot";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "spd_dorotheawicklow1";
				case 1:
					return "spd_dorotheawicklow2";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "spd_endlessstrainer1";
				case 1:
					return "spd_endlessstrainer1";
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "spd_eugenicsproponent";
				case 1:
					return "spd_eugenicsproponent";
				case 2:
					return "spd_eugenicsproponent";
				case 3:
					return "spd_eugenicsproponent";
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "spd_gavin1";
				case 1:
					return "spd_gavin2";
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "spd_giant";
				case 1:
					return "spd_giant";
				case 2:
					return "spd_giant";
				case 3:
					return "spd_giant";
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "spd_grizzledjon1";
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return "spd_joebutler1";
				case 1:
					return "spd_joebutler2";
				case 2:
					return "spd_joebutler3";
				case 3:
					return "spd_joebutler4";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return "spd_lillianpowell1";
				case 1:
					return "spd_lillianpowell2";
				case 2:
					return "spd_lillianpowell3";
				case 3:
					return "spd_lillianpowell4";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return "spd_johnmadman";
				case 1:
					return "spd_johnmadman";
				case 2:
					return "spd_johnmadman";
				case 3:
					return "spd_johnmadman";
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return "spd_madscientist";
				case 1:
					return "spd_madscientist";
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return "spd_mayorofstrawberry1";
				case 1:
					return "spd_mayorofstrawberry1";
				case 2:
					return "spd_mayorofstrawberry1";
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return "spd_bummicky1";
				case 1:
					return "spd_bummicky2";
				case 2:
					return "spd_bummicky3";
				case 3:
					return "spd_bummicky4";
				case 4:
					return "spd_bummicky5";
				case 5:
					return "spd_bummicky6";
				case 6:
					return "spd_bummicky7";
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return "spd_philosopher1";
				case 1:
					return "spd_philosopher1";
				case 2:
					return "spd_philosopher1";
				case 3:
					return "spd_philosopher1";
				case 4:
					return "spd_philosopher1";
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return "spd_poorjoe1";
				case 1:
					return "spd_poorjoe1";
				case 2:
					return "spd_poorjoe1";
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return "spd_soothsayer1";
				case 1:
					return "spd_soothsayer1";
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return "spd_sheriffoftumbleweed";
				case 1:
					return "spd_sheriffoftumbleweed";
				case 2:
					return "spd_sheriffoftumbleweed";
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return "spd_sunworshipper1";
				case 1:
					return "spd_sunworshipper1";
				case 2:
					return "spd_sunworshipper1";
				case 3:
					return "spd_sunworshipper1";
				case 4:
					return "spd_sunworshipper1";
				case 5:
					return "spd_sunworshipper1";
				case 6:
					return "spd_sunworshipper1";
				case 7:
					return "spd_sunworshipper1";
				case 8:
					return "spd_sunworshipper1";
				case 9:
					return "spd_sunworshipper1";
				case 10:
					return "spd_sunworshipper1";
				case 11:
					return "spd_sunworshipper1";
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return "spd_swampweirdo1";
				case 1:
					return "spd_swampweirdo1";
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return "spd_thomasdowne1";
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return "spd_timothydonahue1";
				case 1:
					return "spd_timothydonahue2";
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return "spd_tinyhermit1";
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return "spd_vampire";
				default:
					break;
			}
			break;
		default:
			return "";
	}
	return "";
}

bool func_845(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar13 = func_347(iParam0);
	if ((*Global_1396257)[iParam0]->f_630)
	{
		return false;
	}
	if (iParam1 == 12)
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if ((*Global_1396257)[iParam0]->f_625 < iParam1)
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_16 != -1 && func_150((*(*Global_1396257)[iParam0])[iParam1]->f_16))
	{
		if ((*Global_1396257)[iParam0]->f_625 <= iParam1)
		{
			func_1368(iParam0, 12);
		}
		else
		{
			func_1368(iParam0, iParam1 + 1);
		}
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_18 != -1 && func_320((*(*Global_1396257)[iParam0])[iParam1]->f_18))
	{
		if ((*Global_1396257)[iParam0]->f_625 <= iParam1)
		{
			func_1368(iParam0, 12);
		}
		else
		{
			func_1368(iParam0, iParam1 + 1);
		}
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_46 > 1)
	{
		(*Global_1396257)[iParam0]->f_633 = func_1369(iParam0, iParam1);
	}
	if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 8))
	{
		if ((*(*Global_1396257)[iParam0])[iParam1]->f_46 > 1)
		{
			if (!func_1371(iParam0, iParam1, (*Global_1396257)[iParam0]->f_633))
			{
				return false;
			}
		}
		else if (!func_1371(iParam0, iParam1, 0))
		{
			return false;
		}
	}
	if (func_839((*(*Global_1396257)[iParam0])[iParam1]->f_19))
	{
		iVar10 = func_625((*(*Global_1396257)[iParam0])[iParam1]->f_19);
	}
	else
	{
		iVar10 = 0;
	}
	if (func_839((*(*Global_1396257)[iParam0])[iParam1]->f_20))
	{
		iVar11 = func_625((*(*Global_1396257)[iParam0])[iParam1]->f_20);
	}
	else
	{
		iVar11 = 23;
	}
	if (iVar10 > 0 || iVar11 < 23)
	{
		iVar12 = func_625(func_480());
		if (iVar10 < iVar11)
		{
			if (iVar12 < iVar10 || iVar12 >= iVar11)
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
		}
		else if (iVar12 >= iVar11 && iVar12 < iVar10)
		{
			func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
			return false;
		}
	}
	if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 128))
	{
		if (Global_40.f_11623[iParam0]->f_5 > 0 && !func_1372(iParam0, iParam1))
		{
			return false;
		}
	}
	else if (!func_1372(iParam0, iParam1))
	{
		return false;
	}
	if (Global_40.f_11623[iParam0]->f_7 >= 3)
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if (iParam0 != 12 || (iParam1 == 1 || iParam1 == 3))
	{
		if ((func_646(0) == 1 || func_646(0) == 8) || func_358(&Global_1935630, 2048))
		{
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_45 > 0)
			{
				(*Global_1396257)[iParam0]->f_627 = func_480();
			}
			if (!func_1370((*(*Global_1396257)[iParam0])[iParam1], 1024))
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
			else if (func_369(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_369(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
			{
			}
			else
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
		}
		if (((func_646(0) == 11 || func_646(0) == 7) || func_646(0) == 6) || func_358(&Global_1935630, 4))
		{
			func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
			return false;
		}
		iVar14 = func_341(func_340(func_156()));
		if (((((!func_320(62) && iVar13 == 76) && iParam0 != 26) && !is_thread_active((*Global_1396257)[26]->f_635, false)) && &Global_40.f_11623[26] != 12) && (iVar14 - Global_1415398->f_2) == 1)
		{
			if ((*(*Global_1396257)[26])[0]->f_44 > 0 && func_839(Global_40.f_11623[26]->f_4))
			{
				func_483(Global_40.f_11623[26]->f_4, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8, &iVar9);
				if ((iVar9 <= 0 && iVar8 <= 0) && iVar7 < (*(*Global_1396257)[26])[0]->f_44)
				{
				}
				else
				{
					func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
					return false;
				}
			}
			else if ((*(*Global_1396257)[26])[0]->f_42 > 0 && func_839(Global_40.f_11623[26]->f_2))
			{
				func_483(Global_40.f_11623[26]->f_2, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8, &iVar9);
				if ((iVar9 <= 0 && iVar8 <= 0) && iVar7 < (*(*Global_1396257)[26])[0]->f_42)
				{
				}
				else
				{
					func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
					return false;
				}
			}
			else
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
		}
		if ((*(*Global_1396257)[iParam0])[iParam1]->f_23 != 0)
		{
			if (!func_1373((*(*Global_1396257)[iParam0])[iParam1]->f_23))
			{
				return false;
			}
		}
	}
	bVar15 = false;
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
	{
		if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
		{
			if (((func_369(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_369(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_1034(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_1034(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
			{
				bVar15 = true;
			}
		}
		if (!bVar15)
		{
			if (!func_842((*(*Global_1396257)[iParam0])[iParam1]->f_40))
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_45 > 0 && func_839((*Global_1396257)[iParam0]->f_627))
	{
		func_483((*Global_1396257)[iParam0]->f_627, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8, &iVar9);
		if (((iVar9 <= 0 && iVar8 <= 0) && iVar7 <= 0) && iVar6 < (*(*Global_1396257)[iParam0])[iParam1]->f_45)
		{
			return false;
		}
	}
	if (func_358(&Global_1935630, 16384) || Global_1430231->f_4)
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 2))
	{
		if (bParam2 || bParam3)
		{
			return false;
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_1 != -1 && !func_150((*(*Global_1396257)[iParam0])[iParam1]->f_1))
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_17 != -1 && !func_320((*(*Global_1396257)[iParam0])[iParam1]->f_17))
	{
		func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
		return false;
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_21 != -1)
	{
		if (func_843((*(*Global_1396257)[iParam0])[iParam1]->f_21) <= (*(*Global_1396257)[iParam0])[iParam1]->f_22)
		{
			func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
			return false;
		}
	}
	if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 256))
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!func_835(iParam0, &((*(*Global_1396257)[iParam0])[iParam1]->f_24[iVar16])))
			{
				return false;
			}
			iVar16++;
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_11 != -1)
	{
		if (func_666((*(*Global_1396257)[iParam0])[iParam1]->f_11) == 1)
		{
			return false;
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_12 != -1 && (*(*Global_1396257)[iParam0])[iParam1]->f_13 != 0)
	{
		if (func_1374(iParam0))
		{
			if (!func_1375((*(*Global_1396257)[iParam0])[iParam1]->f_12, (*(*Global_1396257)[iParam0])[iParam1]->f_13))
			{
				return false;
			}
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_14 != -1 && (*(*Global_1396257)[iParam0])[iParam1]->f_15 != -1)
	{
		if (!func_1376((*(*Global_1396257)[iParam0])[iParam1]->f_14, (*(*Global_1396257)[iParam0])[iParam1]->f_15))
		{
			return false;
		}
	}
	if (iParam0 == 12)
	{
		if (!func_835(iParam0, 4194304))
		{
			return false;
		}
		else if (!func_835(iParam0, 8388608))
		{
			return false;
		}
	}
	iVar17 = 0;
	while (iVar17 < 2)
	{
		if (&(*(*Global_1396257)[iParam0])[iParam1]->f_2[iVar17] != -1)
		{
			if (func_1034(&((*(*Global_1396257)[iParam0])[iParam1]->f_2[iVar17])))
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
		}
		iVar17++;
	}
	iVar18 = 0;
	while (iVar18 < 2)
	{
		if (&(*(*Global_1396257)[iParam0])[iParam1]->f_8[iVar18] != -1)
		{
			if (func_319(&((*(*Global_1396257)[iParam0])[iParam1]->f_8[iVar18]), 0))
			{
				func_841(&((*Global_1396257)[iParam0]->f_626), 65536, 1);
				return false;
			}
		}
		iVar18++;
	}
	if ((iParam1 != 0 && (*(*Global_1396257)[iParam0])[iParam1]->f_43 > 0) && func_839(Global_40.f_11623[iParam0]->f_3))
	{
		func_483(Global_40.f_11623[iParam0]->f_3, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8, &iVar9);
		if ((iVar9 <= 0 && iVar8 <= 0) && iVar7 < (*(*Global_1396257)[iParam0])[iParam1]->f_43)
		{
			return false;
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_44 > 0 && func_839(Global_40.f_11623[iParam0]->f_4))
	{
		func_483(Global_40.f_11623[iParam0]->f_4, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8, &iVar9);
		if ((iVar9 <= 0 && iVar8 <= 0) && iVar7 < (*(*Global_1396257)[iParam0])[iParam1]->f_44)
		{
			return false;
		}
	}
	if ((*(*Global_1396257)[iParam0])[iParam1]->f_42 > 0 && func_839(Global_40.f_11623[iParam0]->f_2))
	{
		func_483(Global_40.f_11623[iParam0]->f_2, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8, &iVar9);
		if ((iVar9 <= 0 && iVar8 <= 0) && iVar7 < (*(*Global_1396257)[iParam0])[iParam1]->f_42)
		{
			return false;
		}
	}
	vVar0 = { func_1377(iParam0, iParam1, (*Global_1396257)[iParam0]->f_633) };
	if (!func_1370((*(*Global_1396257)[iParam0])[iParam1], 512))
	{
		if (!func_185(vVar0) && (!func_1370((*(*Global_1396257)[iParam0])[iParam1], 128) || Global_40.f_11623[iParam0]->f_5 > 0))
		{
			if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 4096))
			{
				if (_0x769bb7626b8cdb06(vVar0, 25f, 0, 0, 0))
				{
					return false;
				}
			}
			else if (func_1127(vVar0, 0, 0, 0))
			{
				return false;
			}
		}
	}
	if (!func_1370((*(*Global_1396257)[iParam0])[iParam1], 32))
	{
		bVar19 = false;
		if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 4096))
		{
			bVar19 = true;
			fVar20 = 10f;
		}
		else
		{
			fVar20 = 30f;
		}
		if (bVar19)
		{
			if (!func_1378(&((*Global_1396257)[iParam0]->f_634), vVar0, bVar19) && func_1240(Global_35, vVar0, 25f, 1, 1))
			{
				return false;
			}
		}
		else if (!func_1378(&((*Global_1396257)[iParam0]->f_634), vVar0, bVar19) && func_1240(Global_35, vVar0, 50f, 1, 1))
		{
			return false;
		}
		if (func_1240(Global_35, vVar0, fVar20, 1, 1))
		{
			return false;
		}
	}
	if (func_1370((*(*Global_1396257)[iParam0])[iParam1], 2048))
	{
		if (func_182(iVar13))
		{
			iVar21 = 0;
			while (iVar21 < 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_35[iVar21] == -1600776215)
				{
				}
				else if (func_767(func_340(iVar13), &((*(*Global_1396257)[iParam0])[iParam1]->f_35[iVar21]), 1))
				{
					return false;
				}
				iVar21++;
			}
		}
	}
	if (func_1379())
	{
		return false;
	}
	if (func_614())
	{
		return false;
	}
	return true;
}

bool func_846(int iParam0, int iParam1)
{
	if (func_1380(iParam0) == 0)
	{
		return true;
	}
	sVar0 = func_1381(iParam0, iParam1);
	iVar1 = get_hash_key(sVar0);
	if (iVar1 != 0)
	{
		_0x187d65f3aec5d679(func_1380(iParam0), sVar0);
	}
	return true;
}

void func_847(int iParam0)
{
	func_852(Global_1935369->f_5[iParam0]->f_6, 1);
	func_853(Global_1935369->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1935369->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1935369->f_5[iParam0]->f_8);
		Global_1935369->f_5[iParam0]->f_8 = 0;
	}
	func_855(iParam0, 8192);
	func_855(iParam0, 16384);
	func_855(iParam0, 32768);
	func_855(iParam0, 131072);
	func_855(iParam0, 16777216);
	func_855(iParam0, 524288);
	func_855(iParam0, 1048576);
	Global_1935369->f_5[iParam0]->f_10 = 0;
	Global_1935369->f_5[&Global_1935369]->f_9 = 0;
	Global_1935369->f_5[iParam0] = 0;
	Global_1935369->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1935369->f_5[iParam0]->f_4 = 0;
	Global_1935369->f_5[iParam0]->f_5 = -1;
	Global_1935369->f_5[iParam0]->f_6 = -1;
	Global_1935369->f_5[iParam0]->f_7 = 0;
}

bool func_848(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 3:
			return true;
		case 2:
			return true;
		case 1:
			return true;
		case 8:
			return true;
		case 4:
			return true;
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

bool func_849(int iParam0, int iParam1)
{
	return func_189(Global_1935369->f_5[iParam0]->f_7, iParam1);
}

bool func_850(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_340(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_767(iVar0, -423064657, 1))
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_767(iVar0, 557524588, 1) || func_767(iVar0, 1590600971, 1))
				{
					return true;
				}
				break;
			case 1:
				if (func_767(iVar0, 1792646445, 1) || func_767(iVar0, 1590600971, 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_851(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1540127150;
		default:
			break;
	}
	return -146477090;
	return -1;
}

void func_852(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	set_ambient_zone_state_persistent(sVar0, bParam1, true);
}

void func_853(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				set_portal_settings_override("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				remove_portal_settings_override("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_854(int iParam0, int iParam1)
{
	func_291(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

void func_855(int iParam0, int iParam1)
{
	func_191(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

bool func_856(int iParam0)
{
	if (iParam0 != 1)
	{
		return true;
	}
	if (func_369(73))
	{
		return false;
	}
	if (func_1292(77))
	{
		return false;
	}
	return true;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 443;
		case 0:
			return 508;
		case 4:
			return 351;
		case 7:
			return 432;
		default:
			break;
	}
	return -1;
}

void func_858(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		_blip_set_modifier(&(Global_36308[iParam0]), iParam1);
	}
}

void func_859(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

bool func_860(int iParam0)
{
	if (func_849(&Global_1935369, 262144))
	{
		return true;
	}
	if (func_849(&Global_1935369, 65536))
	{
		return true;
	}
	if (func_369(37))
	{
		return true;
	}
	if (func_369(14))
	{
		return true;
	}
	if (func_369(9))
	{
		return true;
	}
	if (func_369(59))
	{
		return true;
	}
	if (func_1292(143) && iParam0 == 8)
	{
		return true;
	}
	if (func_1031(2))
	{
		return true;
	}
	if (func_1034(14) && func_1382(18, 6))
	{
		return true;
	}
	return false;
}

bool func_861(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 49689699;
		case 6:
			return 1690461416;
		case 3:
			return -1792832235;
		case 2:
			return 785713260;
		case 1:
			return -2099882877;
		case 8:
			return 41051113;
		case 0:
			return -53891762;
		case 4:
			return 1016865322;
		case 7:
			return 19124873;
		default:
			break;
	}
	return 0;
}

bool func_863(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

Vector3 func_864(int iParam0)
{
	return Global_1935369->f_5[iParam0]->f_1;
}

bool func_865()
{
	Global_1935369->f_41 = func_156();
	switch (Global_1935369->f_41)
	{
		case 76:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_box_with_custom_name(-309.497f, 809.019f, 120.736f, 0f, 0f, 99.71499f, 20.984f, 11.92f, 5.626f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(-312.8126f, 805.6502f, 119.0267f, 0f, 0f, 9.450999f, 3.526598f, 5.756987f, 2.6f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(-313.5039f, 806.3469f, 118.5511f, 0f, 0f, 9.500049f, 1.307419f, 4.145394f, 2.622946f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1935369->f_64[0])))
			{
				Global_1935369->f_64[0] = _create_volume_box_with_custom_name(-309.419f, 809.032f, 122.29f, 0f, 0f, 99.715f, 23.304f, 12.404f, 2.649f, "Saloon-vBarDialogueMute");
			}
			if (!_does_volume_exist(&(Global_1935369->f_55[1])))
			{
				Global_1935369->f_55[1] = _create_volume_box_with_custom_name(-241.4293f, 769.837f, 118.2211f, 0f, 0f, 19.77785f, 7.545419f, 8.569216f, 2.435204f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[1])))
			{
				Global_1935369->f_58[1] = _create_volume_box_with_custom_name(-240.3409f, 769.9477f, 118.2175f, 0f, 0f, 18.79571f, 1.613768f, 3.334327f, 2.435204f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[1])))
			{
				Global_1935369->f_61[1] = _create_volume_box_with_custom_name(-238.8276f, 770.4627f, 118.2175f, 0f, 0f, 18.79571f, 1.613768f, 4.023208f, 2.435204f, "Saloon-vBarDialogueofflimit");
			}
			break;
		case 5:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_aggregate_with_custom_name("volSaloonFancyInterior");
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), 2628.751f, -1228.086f, 57.543f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 10.619f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), 2635.506f, -1227.165f, 57.543f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 10.619f);
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(2638.078f, -1224.9f, 53.60266f, 0f, 0f, 0f, 2.04147f, 7.113753f, 3.196584f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(2639.981f, -1225.526f, 53.603f, 0f, 0f, 0.405f, 1.646f, 6.014f, 2.6f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1935369->f_64[0])))
			{
				Global_1935369->f_64[0] = _create_volume_box_with_custom_name(2634.331f, -1226.95f, 59.453f, 0f, 0f, 0f, 14.202f, 14.405f, 7.921f, "Saloon-vBarDialogueMute");
			}
			if (!_does_volume_exist(&(Global_1935369->f_55[1])))
			{
				Global_1935369->f_55[1] = _create_volume_box_with_custom_name(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f, "Saloon-vBarDialogueSLUM");
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[1])))
			{
				Global_1935369->f_58[1] = _create_volume_box_with_custom_name(2793.41f, -1169.199f, 48.1851f, 0f, 0f, -30.34509f, 1.704269f, 3.946146f, 2.542513f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[1])))
			{
				Global_1935369->f_61[1] = _create_volume_box_with_custom_name(2792.76f, -1167.248f, 48.185f, 0f, 0f, -28.65f, 1.31f, 4.322f, 2.45f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1935369->f_64[1])))
			{
				Global_1935369->f_64[1] = _create_volume_box_with_custom_name(2801.979f, -1166.155f, 48.562f, 0f, 0f, -120.25f, 5.894f, 3.149f, 3.395f, "Saloon-vBarDialogueMute");
			}
			break;
		case 92:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(2948.501f, 527.229f, 45.24421f, 0f, 0f, 0f, 5.896486f, 4.004321f, 3.567921f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(2949.001f, 528.692f, 45.433f, 0f, -1.995f, 90.342f, 2.153f, 4.35f, 2.271f, "Saloon-vBarDialogueofflimit");
			}
			break;
		case 38:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_aggregate_with_custom_name("Blackwater - m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
				_0x5b7d7bf36d2de18b(&(Global_1935369->f_55[0]), -810.751f, -1315.745f, 42.73711f, 0f, 0f, 0f, 2.326748f, 2.142643f, 3.663574f);
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(-817.6462f, -1318.322f, 43.72745f, 0f, 0f, 0f, 5f, 5.5f, 3f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(-818.6908f, -1319.289f, 43.72745f, 0f, 0f, 0f, 3f, 3.5f, 3f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1935369->f_64[0])))
			{
				Global_1935369->f_64[0] = _create_volume_aggregate_with_custom_name("Saloon-vBarDialogueMute");
				_0x39816f6f94f385ad(&(Global_1935369->f_64[0]), -818.523f, -1319.681f, 48.053f, 0f, 0f, 90f, 17.124f, 16.624f, 4.813f);
				_0x39816f6f94f385ad(&(Global_1935369->f_64[0]), -823.943f, -1319.869f, 43.727f, 0f, 0f, 0f, 5.657f, 6.398f, 3.334f);
			}
			break;
		case 105:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_box_with_custom_name(1345.534f, -1375.4f, 82.904f, 0f, 0f, 80.2f, 11.601f, 14.755f, 7.028f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(1340.147f, -1374.74f, 80.38785f, 0f, 0f, -10.32368f, 4.458401f, 6.059777f, 2.440836f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(1339.3f, -1374.427f, 80.38785f, 0f, 0f, -10.32368f, 2.886978f, 2.606258f, 2.440836f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1935369->f_64[0])))
			{
				Global_1935369->f_64[0] = _create_volume_box_with_custom_name(1345.534f, -1375.4f, 84.92f, 0f, 0f, 80.2f, 11.982f, 15.553f, 3.692f, "Saloon-vBarDialogueMute");
			}
			break;
		case 115:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -5515.285f, -2908.166f, 0.249091f, 0f, 0.149389f, 30f, 10.09642f, 10.85884f, 6.224696f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -5513.722f, -2914.647f, 0.249091f, 0.161928f, 0.036374f, -15.07891f, 4.181654f, 4.925784f, 6.224696f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -5510.41f, -2913.841f, 0.249091f, 0f, 0.149389f, 30f, 7.684982f, 4.925784f, 6.224696f);
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(-5517.708f, -2907.638f, -1.703205f, 0f, 0f, 30f, 6.704566f, 1.488849f, 2.762703f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(-5519.191f, -2906.316f, -1.703f, 0f, 0f, -60.333f, 1.891f, 5.329f, 2.441f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1935369->f_64[0])))
			{
				Global_1935369->f_64[0] = _create_volume_box_with_custom_name(-5515.285f, -2908.166f, 1.855f, 0f, 0f, 30f, 10.292f, 10.992f, 3.432f, "Saloon-vBarDialogueMute");
			}
			break;
		case 120:
			if (!_does_volume_exist(&(Global_1935369->f_55[0])))
			{
				Global_1935369->f_55[0] = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -3706.318f, -2599.046f, -11.47613f, 0f, 0f, 45f, 4f, 6.394596f, 6f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -3701.312f, -2601.316f, -11.47613f, 0f, 0f, 0f, 8.3f, 3f, 6f);
				_0x39816f6f94f385ad(&(Global_1935369->f_55[0]), -3703.562f, -2591.62f, -11.47613f, 0f, 0f, 0f, 12.8f, 13f, 6f);
			}
			if (!_does_volume_exist(&(Global_1935369->f_58[0])))
			{
				Global_1935369->f_58[0] = _create_volume_box_with_custom_name(-3701.373f, -2594.598f, -13.4666f, 0f, 0f, 0f, 2f, 8f, 3f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1935369->f_61[0])))
			{
				Global_1935369->f_61[0] = _create_volume_box_with_custom_name(-3698.998f, -2596.996f, -13.467f, 0f, 0f, -0.443f, 2.4f, 11.579f, 2.441f, "Saloon-vBarDialogueofflimit");
			}
			break;
	}
	return true;
}

int func_866(int iParam0)
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

bool func_867(int iParam0)
{
	iVar0 = func_1018(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_868(int iParam0, int iParam1)
{
	if (func_36() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_869(int iParam0)
{
	if (func_36() != -1)
	{
		if (func_871(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_871(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_870(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_871(iParam0, 65536) && !func_871(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_871(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_871(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_871(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_872()
{
	return Global_1905944->f_5694;
}

int func_873(int iParam0)
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

int func_874(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_875(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

char* func_876(int iParam0)
{
	if (!func_913(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_1383(iParam0));
}

void func_877(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_878(struct<4> Param0)
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
			if (func_1384(Param0))
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
			func_1385(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_877(8);
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
			if (func_1384(Param0))
			{
				return;
			}
			func_1385(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_877(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1386(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_879(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = func_1387(iParam1);
	if (iParam0 == 0)
	{
		func_416(0);
	}
	else if (iParam0 == 2)
	{
		func_418(0);
	}
	else if (iParam0 == 1)
	{
		func_417(0, bParam3);
	}
	set_attribute_points(Global_35, iParam0, iVar0);
	Global_40.f_11095.f_11[iParam0] = to_float(iVar0);
	if (bParam2)
	{
		func_102(func_1388(iParam0), 0);
		func_1389(iParam0, iParam1, 0);
		func_1390(iParam0, 7000);
	}
}

void func_880(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1391();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1392(iParam0);
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
	if (func_713(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_449())
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
	Global_40.f_11095.f_35 = func_1393(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1391();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1394(iVar1);
		func_1396(func_1395(), 0, 4000);
		func_1397(Global_40.f_11095.f_35);
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
		func_1398(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_1367(func_1365(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1399(14))
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
					sParam4 = func_1400(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_826(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_826(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_1367(func_1365(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1399(4))
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
					sParam4 = func_1400(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_826(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_826(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1365(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_484(10, 1);
	}
}

void func_881(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_1401(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1402(1, bVar1, 1, sVar2);
		func_1403(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_969(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_1404();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_969(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_969(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_882(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_11, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_10, bParam2);
}

char* func_883(int iParam0, bool bParam1)
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

char* func_884()
{
	return "pausemenu_player";
}

int func_885(int iParam0, int iParam1)
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

void func_886(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = func_1405(iVar0);
		if (func_913(iVar1, 0))
		{
			(*uParam1)[iVar0] = get_ped_ammo_by_type(iParam0, iVar1);
		}
		iVar0++;
	}
}

int func_887(int iParam0)
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

void func_888()
{
	if (func_887(get_entity_model(Global_35)) == -676452144)
	{
		_0x2b4ce170de09f346(Global_35, 531055934);
		_0x2b4ce170de09f346(Global_35, -676452144);
		_0x1e017404784aa6a3(Global_35, 1862763509);
		_0x1e017404784aa6a3(Global_35, 455003611);
		_0x1e017404784aa6a3(Global_35, 487851963);
	}
}

void func_889(int iParam0)
{
	Global_1946804->f_1 = iParam0;
}

void func_890(int iParam0)
{
	iParam0 = func_1021(iParam0);
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
	func_894(&Var0);
	func_895(iParam0, Var0);
	func_1406(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1407(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1408(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1409(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1410(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1411(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1412(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1413(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1414(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_891()
{
	return -997197050;
}

int func_892()
{
	return -2063289686;
}

int func_893()
{
	return 2;
}

void func_894(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_895(int iParam0, struct<2> Param1)
{
	iParam0 = func_1021(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1415(iParam0, Param1))
	{
	}
	if (!func_1416(iParam0, Param1.f_1))
	{
	}
}

void func_896(int iParam0, int iParam1)
{
	iParam0 = func_1021(iParam0);
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

void func_897(int iParam0)
{
	Global_40.f_1095 = iParam0;
}

void func_898(var uParam0)
{
	func_1417(uParam0);
	func_1419(uParam0, func_1418(-1346384396));
	func_1420(uParam0, func_1418(-712836614));
	func_1421(uParam0, func_1418(-1629133289));
	func_1422(uParam0, func_1418(1302066700));
	func_1423(uParam0, func_1418(599669344));
	func_1424(uParam0, func_1418(-1555511632));
}

void func_899(struct<6> Param0)
{
	if (!func_1425(Param0.f_4, 1))
	{
	}
	if (!func_1425(Param0, 1))
	{
	}
	if (!func_1425(Param0.f_2, 1))
	{
	}
	if (!func_1425(Param0.f_5, 1))
	{
	}
	if (!func_1425(Param0.f_3, 1))
	{
	}
	if (!func_1425(Param0.f_1, 1))
	{
	}
}

void func_900(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_901(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_902(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

void func_903(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

int func_904()
{
	return -868094182;
}

int func_905()
{
	return 1074477367;
}

int func_906()
{
	return 1;
}

bool func_907(int iParam0)
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
	iVar0 = func_1426(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1427(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_1428(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

int func_908(int iParam0)
{
	Var1 = -961687407;
	if (func_36() == -1)
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
	return func_916(iVar0);
}

int func_909(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_385(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_385(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1429(0))
	{
	}
	func_975(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

void func_910(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_911(var uParam0)
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

void func_912(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_918(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_918(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_918(iParam0, 1)])->f_10 && iParam1));
}

bool func_913(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_914(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_946(iParam0))
	{
		case -2061583405:
			bVar0 = func_1430(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1430(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1430(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1430(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1430(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1430(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_951();
	}
	if (bParam1)
	{
		func_941(0, 0);
	}
}

int func_915(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_950();
	}
	if (func_36() == -1)
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

int func_916(int iParam0)
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

void func_917(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1431(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1432(iVar0, 1);
			if (func_1433(iVar0, iParam1))
			{
				vVar4 = { func_1434(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1435(iVar7, 4))
				{
					func_912(iVar7, 4, 6);
				}
			}
			else
			{
				func_1436(iVar7, 4, 6);
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

int func_918(int iParam0, int iParam1)
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

bool func_919(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_36() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_944(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_920(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_921(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_946(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1433(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1437(iVar1, iVar3);
		}
	}
	if (func_1438(-1586649372) && func_1433(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1437(iVar1, iVar3);
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
						func_1437(iVar1, iVar3);
					}
				}
			}
			func_1439(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1439(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1437(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1439(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1437(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1437(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1439(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1439(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1437(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1439(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1437(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1437(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_946(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1437(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1440(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_946(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1437(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_1441(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1437(iVar1, iVar3);
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
						func_1437(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1440(&(Global_1946804->f_1497.f_1[iVar1])) || func_1441(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1437(iVar1, iVar3);
					}
				}
			}
			switch (func_946(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_946(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1437(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_946(&(uParam0->f_1[iVar1])) || func_1441(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1437(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_922()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_923(int iParam0, int iParam1, int iParam2)
{
	iVar3 = 0;
	bVar2 = func_36() != -1;
	if (func_950() == 24043185)
	{
		iVar3 = 1;
	}
	iVar0 = func_1442(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_1443(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2653 = iParam0;
		}
		else if (func_1443(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1442(iParam0 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2653 = iParam0;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1444(0);
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
	iVar0 = func_1442(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_1443(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2654 = iParam1;
		}
		else if (func_1443(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1442(iParam1 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2654 = iParam1;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1444(1);
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
	iVar0 = func_1442(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_1443(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2655 = iParam2;
		}
		else if (func_1443(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1442(iParam2 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2655 = iParam2;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1444(2);
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

int func_924(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_918(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_950() == 24043185)
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_922();
	}
	if (iParam1 != 1155669136 && func_1443(&(Global_1946804->f_1378.f_1[iVar0]), iVar1, iParam1, func_36() != -1) == -1)
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
			func_385(17, iParam2, 0, 0, 0);
		}
		else
		{
			func_385(17, iParam2, 1, iParam0, 0);
		}
	}
	func_925(0);
	return 1;
}

void func_925(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_926(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1445(iParam0))
	{
		return;
	}
	if (!func_1446(iParam1))
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
		bVar2 = (&Global_40.f_7731[iParam0] < 7 && func_1447(iParam0));
		Global_40.f_7731[iParam0]->f_3 = func_480();
		func_1448(iParam0, &iVar0, &iVar1, bVar2);
		func_583(&(Global_40.f_7731[iParam0]->f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_927()
{
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (func_36() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			func_1449(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar4);
			func_1449(Global_1946804->f_1497.f_1[iVar1], iVar1, iVar4);
			func_1449(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar4);
			func_1449(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		func_1450(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar4);
		func_1450(Global_1946804->f_1497.f_1[iVar1], iVar1, iVar4);
		func_1450(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar4);
		func_1450(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar4);
		iVar4++;
	}
}

void func_928()
{
	iVar0 = func_480();
	func_583(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_1451(0) <= 1)
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
	if (func_1451(1) <= 1)
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
	if (func_1451(2) <= 1)
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

void func_929(int iParam0)
{
	func_1452(&(Global_1946804->f_1378), iParam0);
}

bool func_930()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_931(int iParam0)
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

int func_932(int iParam0)
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

void func_933()
{
	iVar0 = 1;
	if (func_36() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1449(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_1450(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
		iVar1++;
	}
}

var func_934()
{
	return &(Global_1946804->f_1497.f_1[1]);
}

void func_935(int iParam0, bool bParam1)
{
	if (!func_1453(iParam0))
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
		Global_40.f_7748.f_5 = func_480();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_1454());
		func_1455(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_583(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_936()
{
	if (func_1456() <= 3)
	{
		iVar0 = func_480();
		func_583(&iVar0, 0, 0, 0, 2, 0, 0, 0);
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

void func_937(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_938()
{
	if (func_36() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_939(int iParam0)
{
	iVar0 = func_915(0);
	iVar1 = 0;
	func_944(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

void func_940(int iParam0, bool bParam1, int iParam2)
{
	func_942(&(Global_1946804->f_1378), iParam0);
	func_943(2, iParam0, 6);
	if (bParam1)
	{
		func_941(0, 1);
	}
}

void func_941(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_925(0);
	}
	if (bParam0)
	{
		func_877(8);
		func_877(512);
	}
	else
	{
		func_877(8);
		func_877(16);
	}
}

void func_942(var uParam0, int iParam1)
{
	if (func_36() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1449(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1450(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_943(int iParam0, int iParam1, int iParam2)
{
	if (func_36() == -1)
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

void func_944(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_945(int iParam0)
{
	if (func_36() == -1)
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

int func_946(int iParam0)
{
	if (!func_913(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_947(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1457(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1458(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_946(iParam0) != -999503751)
	{
		func_1459(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_948(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_950();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_949(int iParam0, int iParam1)
{
	Var0 = { func_1460(iParam0, 0, 0) };
	Var5 = { func_1461(iParam0, Var0, Var0.f_4, 0) };
	if (func_1462(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_953(0), &Var5);
	return 1;
}

int func_950()
{
	return Global_1946804->f_1;
}

void func_951()
{
	if (func_36() == -1)
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

bool func_952(int iParam0)
{
	return func_1464(func_1463(iParam0));
}

int func_953(bool bParam0)
{
	if (func_36() == -1)
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

void func_954(int iParam0, bool bParam1)
{
	Var0 = { func_1460(iParam0, 0, 0) };
	Var5 = { func_1461(iParam0, Var0, Var0.f_4, 0) };
	if (func_1462(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_953(0), &Var5, bParam1);
}

bool func_955(int iParam0)
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

void func_956(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = func_1405(iVar0);
		if (func_913(iVar1, 0))
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

int func_957(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_959(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1465("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1466(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_99(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_959(iParam1, 512) && func_1467(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_959(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_959(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_959(iParam1, 33554432)))
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
		func_1468(iVar1);
	}
	if (func_99(iVar0))
	{
	}
	else if (!func_959(iParam1, 512))
	{
		iParam1 |= 512;
		return func_957(uParam0, iParam1, iParam2);
	}
	else if (func_959(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_958(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_959(iParam1, 128);
	if (func_1465("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1466(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_99(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_959(iParam1, 512) && func_1467(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_1469(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_959(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_959(iParam1, 4))) && (!func_1469(Var4.f_4) || func_959(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_959(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_959(iParam1, 1048576)))
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
		func_1468(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_959(iParam1, 512) && !func_959(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_958(uParam0, iParam1, iParam2);
	}
	else if (func_959(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

bool func_959(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_960()
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

void func_961()
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

void func_962()
{
}

void func_963(int iParam0)
{
	if (func_36() != -1)
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

void func_964()
{
	_0x95ee1dee1dcd9070(player_id(), 1);
	if (func_713(47))
	{
		_0xa63fcad3a6fec6d2(player_id(), 1);
	}
	else
	{
		_0xa63fcad3a6fec6d2(player_id(), 0);
	}
}

void func_965(int iParam0)
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
			func_1470(1);
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
			func_1471(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1471(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1471(3);
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
			func_1472(1);
			break;
		case 34:
			func_1473(1);
			break;
		case 35:
			func_1474(1);
			break;
		case 36:
			break;
		case 37:
			func_1475(0);
			break;
		case 38:
			func_1476(0);
			break;
		case 39:
			func_1477(0);
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
			if ((!&Global_1879534 && func_744()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1478("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_102(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_744()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1478("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_102(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_744()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1478("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_102(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_744()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1478("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_102(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_36() == -1)
			{
				if (!func_1438(99217379) || func_1479(99217379) == 2110595215)
				{
					if (func_449())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_1480(iVar0, 1, 0))
					{
						func_1481(iVar0, 1, 752097756);
					}
					func_1482(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_36() == -1)
			{
				if (!func_1480(1013902307, 1, 0))
				{
					func_1481(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_36() == -1)
			{
				if (!func_1480(1013902307, 1, 0))
				{
					func_1481(1013902307, 1, 752097756);
				}
				if (!func_1480(142640135, 1, 0))
				{
					func_1481(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_36() == -1)
			{
				if (!func_1480(786809402, 1, 0))
				{
					func_1481(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_36() == -1)
			{
				if (!func_1480(786809402, 1, 0))
				{
					func_1481(786809402, 1, 752097756);
				}
				if (!func_1480(-518019409, 1, 0))
				{
					func_1481(-518019409, 1, 752097756);
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
			func_1483();
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

void func_966(int iParam0)
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
			func_1470(0);
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
			func_1484(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 2);
			_uitutorial_set_rpg_icon_visibility(0, 2);
			func_1484(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 2);
			_uitutorial_set_rpg_icon_visibility(2, 2);
			func_1484(3);
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
			func_1472(0);
			break;
		case 34:
			func_1473(0);
			break;
		case 35:
			func_1474(0);
			break;
		case 36:
			break;
		case 37:
			func_1475(1);
			break;
		case 38:
			func_1476(1);
			break;
		case 39:
			func_1477(1);
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

bool func_967(int iParam0)
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

bool func_968(int iParam0)
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

int func_969(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

bool func_970(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

char* func_971()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_972(int iParam0)
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

bool func_973(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1485(uParam0, iParam3, iParam2) && !func_399(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_970(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1486(1108822547);
		}
		else
		{
			func_1487(1108822547);
		}
	}
	func_1488(uParam0, 0, 0);
	func_925(iParam5);
	return true;
}

void func_974(int iParam0)
{
	if (func_1489(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1490(Var0);
}

void func_975(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_36() != -1;
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
			func_877(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1491(iParam1, 29, bVar4, 1, 0);
			func_1491(iParam1, 31, bVar4, 1, 0);
			func_1491(iParam1, 30, bVar4, 1, 0);
			func_1491(iParam1, 22, bVar4, 1, 0);
			func_1491(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_970(32768) && func_1435(1108822547, 8)) && func_1433(10, iParam3))
	{
		func_1492(iParam1, 0, 1);
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
			iVar3 = func_1432(iVar1, 1);
			if (func_1435(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1433(iVar1, iParam3))
				{
				}
				else if ((func_1435(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1435(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1491(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1436(iVar3, 1, 6);
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
								func_1491(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1435(iVar3, 1))
							{
								func_912(iVar3, 1, 6);
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

void func_976(int iParam0, int iParam1)
{
	if (!func_259(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_977(int iParam0, int iParam1)
{
	return ((*Global_1392050)[iParam1]->f_1 && iParam0) != 0;
}

void func_978(int iParam0, bool bParam1)
{
	if (func_1005(iParam0, 1))
	{
		return;
	}
	if (!func_441(iParam0))
	{
		func_442(iParam0, bParam1);
	}
	func_431(iParam0, 3, bParam1);
	func_980(2, iParam0);
}

int func_979(int iParam0)
{
	if (func_498(iParam0, 0))
	{
		return Global_40.f_9571[iParam0]->f_2;
	}
	return -1;
}

void func_980(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_981(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

bool func_982(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0]->f_1 == 5;
}

int func_983()
{
	return &Global_1898438;
}

float func_984()
{
	return (to_float(func_983()) / 1000f);
}

bool func_985(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_986(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_987(int iParam0)
{
	if (func_985(iParam0, 1))
	{
		func_1493(1);
	}
}

bool func_988(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (!_does_volume_exist((*Global_1392050)[iParam0]->f_13))
	{
		func_1494(iParam0);
	}
	if (_does_volume_exist((*Global_1392050)[iParam0]->f_13))
	{
		if ((bParam4 || (!func_449() && func_451(iParam0))) || (func_449() && func_450(iParam0)))
		{
			return _0xf256a75210c5c0eb((*Global_1392050)[iParam0]->f_13, vParam1);
		}
	}
	else
	{
		switch (func_342())
		{
			case 13:
			case 14:
			case 15:
			case 16:
				if (iParam0 == 5)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_989()
{
	return Global_1393447->f_50;
}

bool func_990(int iParam0)
{
	return (Global_40.f_9632.f_191 && iParam0) != 0;
}

void func_991(int iParam0)
{
	Global_40.f_9632.f_191 = (Global_40.f_9632.f_191 || iParam0);
}

void func_992(int iParam0)
{
	Global_1393447->f_50 = iParam0;
}

void func_993(int iParam0)
{
	Global_1393447->f_51 = iParam0;
}

int func_994(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 12:
			return 7;
		case 3:
		case 9:
		case 10:
			return 8;
		case 0:
		case 2:
		case 11:
			return 9;
		default:
			break;
	}
	return -1;
}

int func_995()
{
	return Global_1393447->f_52;
}

void func_996(int iParam0)
{
	Global_1393447->f_52 = iParam0;
}

void func_997(int iParam0, int iParam1, int iParam2)
{
	switch (&Global_1392135->f_40[iParam0])
	{
		case 0:
			if ((func_998(iParam0, 0) || &Global_1392135->f_12[iParam0] > 0) || &Global_1392135->f_26[iParam0] > 0)
			{
				if (func_1495(iParam0))
				{
					func_1496(iParam0, 1);
				}
			}
			else if (func_1005(iParam0, 1))
			{
				Global_1392135->f_12[iParam0] = 0;
				Global_1392135->f_26[iParam0] = 0;
				func_1496(iParam0, 1);
			}
			else if (func_193())
			{
				func_1496(iParam0, 3);
			}
			break;
		case 1:
			if ((func_998(iParam0, 0) && &Global_1392135->f_19[iParam0] == 0) && &Global_1392135->f_33[iParam0] == 0)
			{
			}
			else if (func_1497(iParam0, 1))
			{
				if (func_193())
				{
					func_1496(iParam0, 3);
				}
				else
				{
					func_1496(iParam0, 2);
				}
			}
			break;
		case 2:
			if (func_193())
			{
				func_1496(iParam0, 3);
			}
			else if (func_998(iParam0, 0))
			{
				func_1496(iParam0, 0);
			}
			break;
		case 3:
			if (!func_193())
			{
				func_1496(iParam0, 0);
			}
			break;
	}
}

bool func_998(int iParam0, bool bParam1)
{
	if (!func_465())
	{
		return false;
	}
	if (func_446(func_342(), 0, 0, 0) != iParam0)
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_1005(iParam0, 1) && func_434(4))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_999(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (&Global_40.f_9632[iParam0] > 0)
		{
			if (&Global_40.f_9632[iParam0] >= func_1498(iParam0))
			{
				return true;
			}
			Var2 = { func_1365(85200619) };
			if (stat_id_get_int(&Var2, &uVar0))
			{
				iVar1 = _0x1e7384ab5d4f4581(uVar0);
				if (iVar1 >= Global_40.f_9632[iParam0]->f_3)
				{
					return false;
				}
			}
		}
	}
	return &Global_40.f_9632[iParam0] > 0;
}

void func_1000(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (iParam3 < 0)
	{
		iVar3 = &Global_1392135->f_26[iParam0];
	}
	else
	{
		iVar3 = iParam3;
	}
	if (iParam1 == 20 && &Global_1392135->f_26[iParam0] == 0)
	{
		vVar0 = { 2492.525f, 1326.504f, 112.8341f };
	}
	else if (iParam1 == 43 && &Global_1392135->f_26[iParam0] == 1)
	{
		vVar0 = { func_475(iParam1, iVar3) };
	}
	else
	{
		vVar0 = { func_475(iParam1, iVar3) };
	}
	StringIntConCat(sParam2, iParam1, 64);
	if (iParam3 >= 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_1006(vVar0, 256);
		if (iParam1 == 20 && iVar3 == 0)
		{
			func_117(vVar0, 115f, sParam2, 1, 0, 256, 0, -1082130432);
		}
		else if (iParam1 == 43 && &Global_1392135->f_26[iParam0] == 1)
		{
			func_117(vVar0, 130f, sParam2, 1, 0, 256, 0, -1082130432);
		}
		else
		{
			func_117(vVar0, func_1499(iParam1, iParam0, iVar3), sParam2, 1, 0, 256, 0, -1082130432);
		}
	}
}

bool func_1001(int iParam0, bool bParam1)
{
	if (func_999(iParam0, bParam1))
	{
		return true;
	}
	if (Global_40.f_9632[iParam0]->f_1 == 0)
	{
		return false;
	}
	if (!bParam1)
	{
		return Global_40.f_9632[iParam0]->f_1 > 0;
	}
	if (func_1011(iParam0))
	{
		return true;
	}
	return false;
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 38:
			return 1;
		case 0:
			return 5;
		case 6:
		case 42:
			return 3;
		case 9:
		case 10:
		case 37:
			return 4;
		case 1:
		case 2:
		case 36:
			return 2;
		case 41:
			return 2;
		case 40:
			return 1;
		case 13:
			return 2;
		case 14:
			return 3;
		case 16:
			return 2;
		case 11:
			return 6;
		case 17:
		case 39:
			return 5;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 4;
		case 27:
			return 2;
		case 33:
			return 2;
		case 43:
			return 4;
		default:
			break;
	}
	return 1;
}

void func_1003(int iParam0, int iParam1)
{
	Global_1392135->f_47[iParam0] = iParam1;
}

void func_1004(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		iVar3 = &Global_1392135->f_33[iParam0];
	}
	else
	{
		iVar3 = iParam2;
	}
	vVar0 = { func_475(iParam1, iVar3) };
	if (func_1127(vVar0, 0, 256, 0))
	{
		func_1006(vVar0, 256);
	}
}

bool func_1005(int iParam0, bool bParam1)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

void func_1006(vector3 vParam0, int iParam3)
{
	if (func_185(vParam0))
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
			if (func_1500(vVar2, vParam0, 2f, 1))
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

bool func_1007()
{
	if (!func_839(Global_40.f_9632.f_192))
	{
		return true;
	}
	func_483(Global_40.f_9632.f_192, &uVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if ((iVar3 > 0 || iVar4 > 0) || iVar5 > 0)
	{
		return true;
	}
	iVar6 = func_137();
	iVar7 = 0;
	iVar8 = 0;
	if (Global_40.f_9632.f_194 == 6 || Global_40.f_9632.f_194 == 42)
	{
		iVar7 = 4;
		iVar8 = 0;
	}
	else if (iVar6 == Global_40.f_9632.f_193)
	{
		if (func_1501(Global_40.f_9632.f_194))
		{
			iVar7 = 6;
			iVar8 = 0;
		}
		else if (Global_40.f_9571[iVar6]->f_1 == 3)
		{
			if (func_1502())
			{
				iVar7 = 9;
				iVar8 = 0;
			}
			else
			{
				switch (iVar6)
				{
					case 0:
						iVar7 = 12;
						iVar8 = 0;
						break;
					default:
						iVar7 = 10;
						iVar8 = 0;
						break;
				}
			}
		}
		else if (Global_40.f_9571[iVar6]->f_1 == 4 || Global_40.f_9571[iVar6]->f_1 == 5)
		{
			iVar7 = 15;
			iVar8 = 0;
		}
		else if (func_1502())
		{
			iVar7 = 9;
			iVar8 = 0;
		}
		else
		{
			switch (iVar6)
			{
				case 0:
					iVar7 = 12;
					iVar8 = 0;
					break;
				default:
					iVar7 = 10;
					iVar8 = 0;
					break;
			}
		}
	}
	else if (func_1502())
	{
		iVar7 = 9;
		iVar8 = 0;
	}
	else
	{
		switch (iVar6)
		{
			case 0:
				iVar7 = 12;
				iVar8 = 0;
				break;
			default:
				iVar7 = 10;
				iVar8 = 0;
				break;
		}
	}
	if (iVar2 >= iVar7 && iVar1 >= iVar8)
	{
		return true;
	}
	return false;
}

bool func_1008(int iParam0)
{
	fVar0 = func_466();
	iVar1 = 1;
	if (fVar0 < IntToFloat(Global_1392135->f_4))
	{
		iVar1 = 0;
	}
	if (iParam0 != -1)
	{
		if (fVar0 < IntToFloat(&Global_1392135->f_5[iParam0]))
		{
			iVar1 = 0;
		}
	}
	return iVar1;
}

bool func_1009(int iParam0)
{
	if (&Global_1393447->f_4[iParam0])
	{
		return true;
	}
	return false;
}

bool func_1010(int iParam0, bool bParam1, bool bParam2)
{
	bVar1 = func_1503(iParam0, &uVar0);
	if (!bParam1)
	{
		if (func_1504(iParam0))
		{
			func_462(1);
			bVar1 = false;
		}
	}
	if (!bParam2)
	{
		if (func_1505(iParam0))
		{
			func_462(8);
			bVar1 = false;
		}
	}
	if (!bVar1)
	{
	}
	return bVar1;
}

bool func_1011(int iParam0)
{
	Var2 = { func_1365(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		iVar1 = _0x1e7384ab5d4f4581(uVar0);
		if (iVar1 >= Global_40.f_9632[iParam0]->f_3)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1012(int iParam0)
{
	Global_40.f_9632[iParam0]->f_1 = 0;
	Global_40.f_9632[iParam0]->f_3 = 0;
}

int func_1013(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		iVar5 = func_1002(iParam0);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			vVar1 = { func_475(iParam0, iVar4) };
			fVar0 = func_443(Global_36, vVar1);
			if (!bParam2)
			{
			}
			if (func_1506(vVar1, fVar0))
			{
				if (!bParam2)
				{
					func_143(iVar4);
				}
				return 1;
			}
			iVar4++;
		}
	}
	else
	{
		vVar1 = { func_475(iParam0, iParam1) };
		fVar0 = func_443(Global_36, vVar1);
		if (func_1506(vVar1, fVar0))
		{
			if (!bParam2)
			{
				func_143(iParam1);
			}
			return 1;
		}
	}
	return 0;
}

int func_1014(int iParam0, int iParam1)
{
	vVar0 = { func_475(iParam0, iParam1) };
	if (func_1127(vVar0, 0, 0, 256))
	{
		func_1507(iParam0, iParam1);
		func_143(0);
		func_462(15);
		return 0;
	}
	switch (iParam0)
	{
		case 6:
		case 42:
			switch (iParam1)
			{
				case 2:
					if (Global_36.f_2 < vVar0.z)
					{
						return 0;
					}
					if (get_distance_between_coords(162.0976f, 596.399f, 124.4414f, Global_36, false) < 150f)
					{
						return 1;
					}
					if (get_distance_between_coords(127.386f, 543.3624f, 139.4092f, Global_36, false) < 105f)
					{
						if (func_999(1, 0))
						{
							return 1;
						}
					}
					return 0;
			}
			break;
		case 17:
		case 39:
			switch (iParam1)
			{
				case 0:
					if (func_1508(11) < 1)
					{
						return 0;
					}
					break;
			}
			break;
	}
	return 1;
}

void func_1015(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = func_627(iParam1);
		iVar1 = func_626(iParam0);
		iVar2 = (func_626(iParam0) - func_626(iParam1));
		iVar3 = (func_627(iParam0) - func_627(iParam1));
		iVar4 = (func_628(iParam0) - func_628(iParam1));
		iVar5 = (func_625(iParam0) - func_625(iParam1));
		iVar6 = (func_624(iParam0) - func_624(iParam1));
		iVar7 = (func_623(iParam0) - func_623(iParam1));
	}
	else
	{
		iVar0 = func_627(iParam0);
		iVar1 = func_626(iParam1);
		iVar2 = (func_626(iParam1) - func_626(iParam0));
		iVar3 = (func_627(iParam1) - func_627(iParam0));
		iVar4 = (func_628(iParam1) - func_628(iParam0));
		iVar5 = (func_625(iParam1) - func_625(iParam0));
		iVar6 = (func_624(iParam1) - func_624(iParam0));
		iVar7 = (func_623(iParam1) - func_623(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_629(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_1509(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_1016(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1017(int iParam0, int iParam1, var uParam2)
{
	if (!func_1016(iParam0))
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

int func_1018(int iParam0)
{
	if (!func_304(iParam0))
	{
		return -1;
	}
	return func_788(iParam0);
}

int func_1019(int iParam0, int iParam1)
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

int func_1020(int iParam0, int iParam1)
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

int func_1021(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_1022()
{
	if (func_449())
	{
		if (!func_150(69))
		{
			return false;
		}
	}
	else if (func_366())
	{
		if (!func_150(7))
		{
			return false;
		}
	}
	return true;
}

void func_1023(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 - (Global_1395482->f_10 && iParam0));
}

void func_1024(int iParam0)
{
	Global_1395482->f_10 = (Global_1395482->f_10 || iParam0);
}

bool func_1025()
{
	return func_1510(2);
}

bool func_1026(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1027()
{
	return Global_1109400->f_245;
}

bool func_1028(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	if (func_154(iParam0, 2))
	{
		if (iParam0 == 2 && func_150(12))
		{
			func_160(iParam0, 2);
		}
		else
		{
			return true;
		}
		if (iParam0 == 5)
		{
			if (!func_151())
			{
				func_160(iParam0, 2);
			}
			else
			{
				return true;
			}
		}
	}
	else if (iParam0 == 5)
	{
		if (func_151())
		{
			func_158(iParam0, 2);
			return true;
		}
	}
	iVar0 = func_155(iParam0);
	if (func_182(iVar0))
	{
		if (func_300(iVar0))
		{
			return true;
		}
	}
	iVar1 = func_1511(iParam0);
	if (func_559(iVar1))
	{
		iVar2 = func_1512(iVar1);
		if (func_481(iVar2))
		{
			if (func_1513(iVar2))
			{
				return true;
			}
			if (func_1513(iVar2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1029(int iParam0)
{
	if (!func_485(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = iParam0;
	while (iVar0 < 6 || iVar1 > 0)
	{
		if (iVar0 < 6)
		{
			iVar0++;
		}
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		if (!func_1028(iVar0))
		{
			iVar2 = iVar0;
		}
		else if (!func_1028(iVar1))
		{
			iVar2 = iVar1;
		}
	else
	{
		}
	}
	if (iVar2 == iParam0)
	{
		iVar2 = -1;
	}
	return iVar2;
}

bool func_1030(int iParam0)
{
	return (Global_1415412 && iParam0) != 0;
}

bool func_1031(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_867((*Global_1347702)[iParam0]->f_15);
}

bool func_1032(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_328((*Global_1347702)[iParam0]->f_15);
}

bool func_1033(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	if ((is_thread_active((*Global_1347702)[iParam0]->f_42, false) && !func_867((*Global_1347702)[iParam0]->f_15)) && !func_812((*Global_1347702)[iParam0]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_1034(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_328((*Global_1835011)[iParam0]->f_1);
}

bool func_1035(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return false;
	}
	if (func_36() != -1)
	{
		if (does_entity_exist(Global_1051260->f_48[iParam0]->f_19))
		{
			*iParam1 = get_ped_index_from_entity_index(Global_1051260->f_48[iParam0]->f_19);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		*iParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1036(int iParam0)
{
	if (!func_1176(iParam0))
	{
		return false;
	}
	return func_189(&(Global_1914319->f_18594[iParam0]), 1);
}

bool func_1037(int iParam0)
{
	if (iParam0 == 19)
	{
		return true;
	}
	if (iParam0 == 9)
	{
		return true;
	}
	if (func_36() == 0)
	{
		return func_703(Global_1051260->f_48[iParam0]->f_18, Global_1051260->f_48[iParam0]->f_30, 1, 0);
	}
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	if (iParam0 != 11)
	{
		if (!func_271(Global_1914319->f_3[iParam0]->f_21))
		{
			return false;
		}
		if (!func_509(Global_1914319->f_3[iParam0]->f_21, 0))
		{
			return false;
		}
	}
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		Global_1914319->f_3[iParam0]->f_23 = func_1514(Global_1914319->f_3[iParam0]->f_21);
		iVar0 = func_277(Global_1914319->f_3[iParam0]->f_21);
		if (!_does_item_have_valid_base(iVar0))
		{
			return false;
		}
		if (!_0x4afc7288c77238b3(iVar0))
		{
			return false;
		}
		if (!_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, func_1515(Global_1914319->f_3[iParam0]->f_21)))
		{
			return false;
		}
		return true;
	}
	iVar1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	if (func_510(iParam0))
	{
		return false;
	}
	if (!is_entity_dead(iVar1))
	{
		if (_0x856ce8fde2416602(iVar1))
		{
			return false;
		}
	}
	vVar2 = { get_entity_coords(Global_1914319->f_3[iParam0]->f_23, true, false) };
	if (!_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, vVar2))
	{
		return false;
	}
	return true;
}

float func_1038(var uParam0)
{
	return uParam0->f_24;
}

void func_1039(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_1040(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 1);
	}
	else
	{
		func_191(uParam0, 1);
	}
}

void func_1041(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 256);
	}
	else
	{
		func_191(uParam0, 256);
	}
}

void func_1042(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1516();
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
			func_1517(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_1043(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_1044(bool bParam0)
{
	if (func_1518(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_1045(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_36() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1519(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1519(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1073(iVar0) == -1)
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

void func_1046(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1520(uParam0);
	}
}

bool func_1047(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_1073(iParam2);
	}
	else
	{
		iVar1 = func_1072(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_1073(iParam0);
	}
	else
	{
		iVar0 = func_1072(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_189(*uParam1, 8388608))
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

float func_1048(int iParam0, int iParam1)
{
	return func_1070(iParam0, iParam1, 1, 1);
}

float func_1049(var uParam0)
{
	return uParam0->f_26;
}

bool func_1050(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1051(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 134217728);
	}
	else
	{
		func_191(uParam0, 134217728);
	}
}

void func_1052()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_1053(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_1070(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_1521(iVar0, 0)))
		{
			if (func_1522(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1054(var uParam0)
{
	return uParam0->f_17;
}

bool func_1055(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_189(*uParam0, 4194304))
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

int func_1056(var uParam0)
{
	return uParam0->f_18;
}

bool func_1057(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_1521(iVar0, 0)))
		{
			if (func_1523(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1058(var uParam0)
{
	return uParam0->f_23;
}

int func_1059(var uParam0)
{
	return uParam0->f_21;
}

int func_1060(var uParam0)
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

bool func_1061(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1524(iParam0, vParam4, 0.5f))
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

int func_1062(int iParam0)
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
	if (func_1525(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1063(int iParam0)
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

bool func_1064(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1526(iParam1))
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

bool func_1065(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1526(iParam1))
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

bool func_1066(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_1526(iParam1))
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

bool func_1067(int iParam0, int iParam1)
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

bool func_1068(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1527(iParam0, 1, 0, 0) != 2055893578)
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

bool func_1069(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_1070(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1071(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_768(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_1072(int iParam0)
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

int func_1073(int iParam0)
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

int func_1074(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_1067(Global_35, &iVar1))
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
		fVar2 = func_1070(iParam0, player_ped_id(), 0, 1);
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
		if (func_1070(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_1075(int iParam0, var uParam1, bool bParam2)
{
	func_1518(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1076(uParam1, iVar0))
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
				if (!bParam2 || !func_1076(uParam1, iVar1))
				{
					if (func_768(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1076(var uParam0, int iParam1)
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

bool func_1077(int iParam0)
{
	if (func_449())
	{
		return false;
	}
	return func_486((*Global_1347702)[58]->f_15, 1);
}

int func_1078(var uParam0)
{
	return uParam0->f_20;
}

int func_1079(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_1080(int iParam0)
{
	if (&Global_1415419->f_19[iParam0] != 0)
	{
		return true;
	}
	return false;
}

bool func_1081()
{
	return func_189(Global_1415419->f_3, 1);
}

bool func_1082(int iParam0)
{
	return Global_32074.f_2697.f_6[iParam0]->f_4;
}

bool func_1083(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419->f_9721[iVar0]->f_2)
		{
			if (&Global_1415419->f_9721[iVar0] == iParam0 || ((bParam1 && Global_1415419->f_19[iParam0]->f_5 != 0) && Global_1415419->f_19[&Global_1415419->f_9721[iVar0]]->f_5 == Global_1415419->f_19[iParam0]->f_5))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1084(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_625(func_480());
	if (func_189(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_189(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_189(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_189(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_189(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_189(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_189(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_189(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_189(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_189(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_189(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_189(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_189(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_189(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_189(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_189(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_189(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_1085(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_1528(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_1212(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_1529(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_1530(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_1531(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_1532(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_1533(iVar3))
	{
		return true;
	}
	return false;
}

float func_1086(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			fVar0 = 175f;
			break;
		case 37:
			fVar0 = 175f;
			break;
		case 199:
			fVar0 = 50f;
			break;
		case 52:
			return 200f;
		case 47:
			if (Global_1415419->f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 300f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
		case 44:
			if (Global_1415419->f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 150f;
			}
			break;
		default:
			if (func_564())
			{
				switch (func_156())
				{
					case 92:
						fVar0 = 175f;
						break;
					case 26:
						fVar0 = 150f;
						break;
					case 76:
						fVar0 = 150f;
						break;
					case 120:
						fVar0 = 150f;
						break;
					case 82:
						fVar0 = 150f;
						break;
					default:
						fVar0 = 80f;
						break;
				}
			}
			else
			{
				fVar0 = 175f;
			}
			break;
	}
	return fVar0;
}

float func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			fVar0 = 100f;
			break;
		case 37:
			fVar0 = 100f;
			break;
		case 199:
			fVar0 = 20f;
			break;
		default:
			if (func_564())
			{
				switch (func_156())
				{
					case 92:
						fVar0 = 16f;
						break;
					case 76:
						fVar0 = 16f;
						break;
					case 26:
						fVar0 = 16f;
						break;
					case 82:
						fVar0 = 16f;
						break;
					default:
						fVar0 = 25f;
						break;
				}
			}
			else
			{
				fVar0 = 50f;
			}
			break;
	}
	return fVar0;
}

bool func_1088(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 58:
		case 124:
		case 132:
		case 168:
		case 176:
		case 187:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
			return true;
		default:
			break;
	}
	if (absf((Global_36.f_2 - vParam1.z)) > 30f)
	{
		return false;
	}
	return true;
}

int func_1089(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1534(vVar3, vVar6);
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
	if (func_1535(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_1090(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (fParam3 == -1f)
	{
		bVar0 = vdist2(Global_36, vParam0);
	}
	else
	{
		bVar0 = fParam3;
	}
	if (bVar0 > bParam6)
	{
		return false;
	}
	if (bVar0 < bParam7)
	{
		return false;
	}
	if (!bParam5)
	{
		if (iParam8 != 34)
		{
			uVar5 = 1;
			if (!bParam4)
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
			}
			else
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
				iVar1[2] = 8;
			}
			if (_0x870e9981ed27c815(vParam0, &uVar5, &iVar1, 0))
			{
				return false;
			}
		}
		if (func_564())
		{
			if (bParam4)
			{
				fVar7 = 3f;
			}
			else
			{
				fVar7 = 60f;
			}
		}
		else if (((iParam8 == 15 || iParam8 == 7) || iParam8 == 28) || iParam8 == 34)
		{
			fVar7 = 3f;
		}
		else
		{
			fVar7 = 100f;
		}
		if (_0x769bb7626b8cdb06(vParam0, fVar7, 0, 8, 0))
		{
			return false;
		}
		if (func_1536(vParam0, fVar7))
		{
			return false;
		}
		if (func_1537(vParam0))
		{
			return false;
		}
	}
	return true;
}

int func_1091(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1225(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1538(iVar6);
	}
	return iVar5;
}

int func_1092(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1539(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1093(int iParam0, bool bParam1)
{
	func_1102(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_1094(int iParam0)
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

void func_1095(int iParam0, int iParam1)
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

void func_1096(int iParam0, int iParam1)
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

bool func_1097(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

int func_1098(int iParam0)
{
	if (!func_1097(iParam0))
	{
		return -1;
	}
	return Global_1327590->f_23[iParam0]->f_1;
}

Vector3 func_1099()
{
	if (func_150(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_150(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

struct<2> func_1100(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_1101(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_1102(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1540(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1103(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1104(int iParam0)
{
	Global_1327590->f_11465[iParam0]->f_5 = func_1541();
}

void func_1105(int iParam0)
{
	Global_1327590->f_19692[iParam0] = func_1541();
}

void func_1106(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_1327590->f_19622[iParam0]->f_9 = func_1541();
	if (bParam1)
	{
		Global_1327590->f_19622[iParam0]->f_10 = Global_1327590->f_19622[iParam0]->f_11;
	}
	if (iParam2 > 0)
	{
		func_583(&(Global_1327590->f_19622[iParam0]->f_9), 0, iParam2, 0, 0, 0, 0, 0);
	}
}

void func_1107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1542(iParam0, iParam6);
	func_1543(iParam0, iParam5);
	func_1544(iParam0, iParam4);
	func_830(iParam0, iParam3);
	func_1545(iParam0, iParam2);
	func_1546(iParam0, iParam1);
}

bool func_1108(int iParam0)
{
	iVar0 = func_1547(iParam0, 1);
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 <= (30 * iVar1 + 1))
		{
			if (iVar1 > 0)
			{
				iVar2 = (iVar0 - (30 * iVar1));
			}
			else
			{
				iVar2 = iVar0;
			}
			if (is_bit_set(&(Global_1327590->f_19746[iVar1]), iVar2))
			{
				return true;
			}
			return false;
		}
		iVar1++;
	}
	return false;
}

bool func_1109(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_1110(int iParam0, int iParam1)
{
	if (!func_292(iParam0, 0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, iParam1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, iParam1);
}

int func_1111(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((*Global_1360165)[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1112(int iParam0, int iParam1)
{
	if (!func_1118(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 - ((*Global_1360165)[iParam0]->f_140 && iParam1));
	(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 - ((*Global_1360165)[iParam0]->f_141 && iParam1));
}

bool func_1113(int iParam0)
{
	iVar0 = func_1547(iParam0, 1);
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 <= (30 * iVar1 + 1))
		{
			if (iVar1 > 0)
			{
				iVar2 = (iVar0 - (30 * iVar1));
			}
			else
			{
				iVar2 = iVar0;
			}
			if (is_bit_set(&(Global_23118.f_1651.f_111[iVar1]), iVar2))
			{
				return true;
			}
			return false;
		}
		iVar1++;
	}
	return false;
}

bool func_1114(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_592(iParam1);
	iVar1 = func_592(iParam2);
	if (func_292(iVar0, 0) && func_292(iVar1, 0))
	{
		if (func_1070(iVar0, iVar1, 1, 1) > 7f)
		{
			return true;
		}
	}
	return false;
}

void func_1115(int iParam0)
{
	iVar0 = func_1547(iParam0, 1);
	if (iVar0 <= 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 <= (30 * iVar1 + 1))
		{
			if (iVar1 > 0)
			{
				iVar2 = (iVar0 - (30 * iVar1));
			}
			else
			{
				iVar2 = iVar0;
			}
			if (!is_bit_set(&(Global_23118.f_1651.f_111[iVar1]), iVar2))
			{
				set_bit(Global_23118.f_1651.f_111[iVar1], iVar2);
			}
			return;
		}
		iVar1++;
	}
}

void func_1116(int iParam0)
{
	iVar0 = func_592(*iParam0);
	iVar1 = func_592(iParam0->f_1);
	if (func_292(iVar0, 0))
	{
		func_1548(*iParam0, Global_35, 28, 0, 0);
		set_ped_reset_flag(iVar0, 184, true);
	}
	if (func_292(iVar1, 0))
	{
		func_1548(iParam0->f_1, Global_35, 28, 0, 0);
		set_ped_reset_flag(iVar1, 184, true);
	}
}

bool func_1117(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1122(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_1239(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_292(func_592(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_1549(iParam0, 1, 0))
	{
		return false;
	}
	if (func_1239(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

bool func_1118(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1119(int iParam0)
{
	if (func_1118(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_1120(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1550(iParam0, &Var0);
}

void func_1121(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_3 = "";
	uParam0->f_4 = 0;
}

bool func_1122(int iParam0)
{
	return iParam0 > -1;
}

bool func_1123(int iParam0, bool bParam1)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (func_1551(iParam0))
	{
		return false;
	}
	if (bParam1 && !func_1552(iParam0))
	{
		if (_0x94132d7c8d3575c4(Global_35))
		{
			return false;
		}
		if (_0x54b187f111d9c6f8(Global_35, 1))
		{
			return false;
		}
		if (is_any_speech_playing(Global_35))
		{
			return false;
		}
	}
	if (_0x6fb76442469abd68(Global_35) >= 0.5f)
	{
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_35))
	{
		return false;
	}
	if (func_1553(1048576))
	{
		return false;
	}
	if (func_1554())
	{
		return false;
	}
	if (is_ped_using_any_scenario(Global_35))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_35);
		iVar1 = iVar0;
		if ((iVar1 != -447259824 && iVar1 != -1177373461) && iVar1 != -229964281)
		{
			return false;
		}
	}
	if (func_1555())
	{
		return false;
	}
	if (Global_1359489->f_361.f_59)
	{
		return false;
	}
	return true;
}

void func_1124(int iParam0)
{
	iVar0 = func_1547(iParam0, 1);
	if (iVar0 <= 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 <= (30 * iVar1 + 1))
		{
			if (iVar1 > 0)
			{
				iVar2 = (iVar0 - (30 * iVar1));
			}
			else
			{
				iVar2 = iVar0;
			}
			if (!is_bit_set(&(Global_1327590->f_19746[iVar1]), iVar2))
			{
				set_bit(Global_1327590->f_19746[iVar1], iVar2);
			}
			return;
		}
		iVar1++;
	}
}

int func_1125(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case -1247606340:
				return 0;
			case 1955306955:
				return 10;
			case -1811967943:
				return 12;
			case -1169825673:
				return 12;
			case 449150154:
				return 7;
			case 654047380:
				return 14;
			case -1003948703:
				return 7;
			case 479802912:
				return 13;
			case -1805561902:
				return 7;
			case -217429167:
				return 22;
			case 1042598863:
				return 18;
			case 45270830:
				return 8;
			case 332041830:
				return 10;
			case -1762981608:
				return 16;
			case -1457524782:
				return 10;
			case 1346867715:
				return 23;
			case 885716452:
				return 23;
			case 1573777166:
				return 17;
			case 879109073:
				return 9;
			case 810500501:
				return 23;
			case 797453428:
				return 15;
			case -1407056675:
				return 22;
			case 62520498:
				return 17;
			case 373783623:
				return 19;
			case 1621833104:
				return 17;
			case -1696575454:
				return 7;
			case 1609505828:
				return 13;
			case -1084058685:
				return 7;
			case -1664988496:
				return 8;
			case -1783049048:
				return 8;
			case -558327193:
				return 8;
			case 286162706:
				return 7;
			case 1615285097:
				return 8;
			case -448599760:
				return 18;
			case 1132533427:
				return 16;
			case -1255675465:
				return 16;
			case 588400727:
				return 15;
			case -1078406621:
				return 15;
			case 815565122:
				return 22;
			case -968686824:
				return 13;
			case 383285357:
				return 9;
			case 830931566:
				return 9;
			case -1079521156:
				return 7;
			case -1343084439:
				return 7;
			case 1867545732:
				return 22;
			case -15667560:
				return 10;
			case 1401557308:
				return 9;
			case 272086219:
				return 20;
			case -1460460052:
				return 19;
			case 2024713010:
				return 15;
			case -433637084:
				return 23;
			case 1920927356:
				return 17;
			case 983580076:
				return 9;
			case 738590523:
				return 13;
			case 1229011466:
				return 0;
			case 362685326:
				return 18;
			case 131363873:
				return 23;
			case -1918658020:
				return 9;
			case 209623500:
				return 10;
			case -245997622:
				return 19;
			case 458209198:
				return 17;
			case 1067835471:
				return 14;
			case 1169428501:
				return 11;
			case 325766844:
				return 13;
			case -2045208178:
				return 20;
			case -331203775:
				return 13;
			case -1607268103:
				return 11;
			case 359325346:
				return 15;
			case 1172070118:
				return 16;
			case 343399240:
				return 22;
			case 355130513:
				return 10;
			case 2069882687:
				return 18;
			case -289420007:
				return 11;
			case -362791308:
				return 11;
			case -1097432820:
				return 18;
			case 1213187927:
				return 18;
			case 111292469:
				return 15;
			case -1145690235:
				return 18;
			case -1317542923:
				return 11;
			case 1348106565:
				return 14;
			case -1004747084:
				return 18;
			case 1089725084:
				return 18;
			case 1356881482:
				return 14;
			case -953531577:
				return 4;
			case -1479920637:
				return 14;
			case 2132661455:
				return 14;
			case -345142193:
				return 14;
			case 1153720789:
				return 10;
			case 1095325127:
				return 22;
			case -630300921:
				return 14;
			case 1080890700:
				return 14;
			case 1978595469:
				return 14;
			case -1633137849:
				return 7;
			case 1921371725:
				return 8;
			case -2134360406:
				return 7;
			case -327947127:
				return 7;
			case -78072296:
				return 20;
			case -1379618186:
				return 18;
			case 1185839882:
				return 20;
			case -266767341:
				return 13;
			case -42041881:
				return 6;
			case 1996407755:
				return 10;
			case -1114736130:
				return 11;
			case -985659031:
				return 11;
			case -680088106:
				return 11;
			case -1332576287:
				return 21;
			case -49928042:
				return 10;
			case 667353761:
				return 19;
			case -1112729059:
				return 11;
			case 597680464:
				return 10;
			case 318078354:
				return 15;
			case -1761128258:
				return 9;
			case 777482866:
				return 0;
			case -450600951:
				return 0;
			case 276848212:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -1247606340:
				return 0;
			case 1955306955:
				return 25;
			case -1811967943:
				return 20;
			case -1169825673:
				return 20;
			case 449150154:
				return 30;
			case 654047380:
				return 0;
			case -1003948703:
				return 30;
			case 479802912:
				return 55;
			case -1805561902:
				return 30;
			case -217429167:
				return 5;
			case 1042598863:
				return 15;
			case 45270830:
				return 20;
			case 332041830:
				return 0;
			case -1762981608:
				return 0;
			case -1457524782:
				return 30;
			case 1346867715:
				return 5;
			case 885716452:
				return 5;
			case 1573777166:
				return 10;
			case 879109073:
				return 10;
			case 810500501:
				return 22;
			case 797453428:
				return 30;
			case -1407056675:
				return 5;
			case 62520498:
				return 45;
			case 373783623:
				return 15;
			case 1621833104:
				return 45;
			case -1696575454:
				return 30;
			case 1609505828:
				return 35;
			case -1084058685:
				return 30;
			case -1664988496:
				return 35;
			case -1783049048:
				return 35;
			case -558327193:
				return 35;
			case 286162706:
				return 30;
			case 1615285097:
				return 35;
			case -448599760:
				return 15;
			case 1132533427:
				return 55;
			case -1255675465:
				return 55;
			case 588400727:
				return 15;
			case -1078406621:
				return 15;
			case 815565122:
				return 25;
			case -968686824:
				return 0;
			case 383285357:
				return 0;
			case 830931566:
				return 0;
			case -1079521156:
				return 0;
			case -1343084439:
				return 0;
			case 1867545732:
				return 5;
			case -15667560:
				return 25;
			case 1401557308:
				return 0;
			case 272086219:
				return 20;
			case -1460460052:
				return 30;
			case 2024713010:
				return 30;
			case -433637084:
				return 45;
			case 1920927356:
				return 35;
			case 983580076:
				return 10;
			case 738590523:
				return 40;
			case 1229011466:
				return 0;
			case 362685326:
				return 30;
			case 131363873:
				return 15;
			case -1918658020:
				return 0;
			case 209623500:
				return 30;
			case -245997622:
				return 30;
			case 458209198:
				return 15;
			case 1067835471:
				return 45;
			case 1169428501:
				return 20;
			case 325766844:
				return 15;
			case -2045208178:
				return 15;
			case -331203775:
				return 5;
			case -1607268103:
				return 10;
			case 359325346:
				return 30;
			case 1172070118:
				return 5;
			case 343399240:
				return 25;
			case 355130513:
				return 15;
			case 2069882687:
				return 45;
			case -289420007:
				return 40;
			case -362791308:
				return 40;
			case -1097432820:
				return 45;
			case 1213187927:
				return 45;
			case 111292469:
				return 15;
			case -1145690235:
				return 45;
			case -1317542923:
				return 40;
			case 1348106565:
				return 0;
			case -1004747084:
				return 45;
			case 1089725084:
				return 45;
			case 1356881482:
				return 40;
			case -953531577:
				return 50;
			case -1479920637:
				return 40;
			case 2132661455:
				return 45;
			case -345142193:
				return 45;
			case 1153720789:
				return 15;
			case 1095325127:
				return 10;
			case -630300921:
				return 10;
			case 1080890700:
				return 10;
			case 1978595469:
				return 10;
			case -1633137849:
				return 30;
			case 1921371725:
				return 35;
			case -2134360406:
				return 30;
			case -327947127:
				return 30;
			case -78072296:
				return 30;
			case -1379618186:
				return 15;
			case 1185839882:
				return 30;
			case -266767341:
				return 10;
			case -42041881:
				return 0;
			case 1996407755:
				return 0;
			case -1114736130:
				return 0;
			case -985659031:
				return 0;
			case -680088106:
				return 0;
			case -1332576287:
				return 45;
			case -49928042:
				return 15;
			case 667353761:
				return 50;
			case -1112729059:
				return 0;
			case 597680464:
				return 45;
			case 318078354:
				return 34;
			case -1761128258:
				return 0;
			case 777482866:
				return 0;
			case -450600951:
				return 0;
			case 276848212:
				return 0;
			default:
				break;
		}
	}
	return 0;
}

int func_1126(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case -1247606340:
				return 0;
			case 1955306955:
				return 1;
			case -1811967943:
				return 20;
			case -1169825673:
				return 18;
			case 449150154:
				return 8;
			case 654047380:
				return 14;
			case -1003948703:
				return 8;
			case 479802912:
				return 14;
			case -1805561902:
				return 9;
			case -217429167:
				return 0;
			case 1042598863:
				return 20;
			case 45270830:
				return 9;
			case 332041830:
				return 22;
			case -1762981608:
				return 17;
			case -1457524782:
				return 17;
			case 1346867715:
				return 0;
			case 885716452:
				return 0;
			case 1573777166:
				return 17;
			case 879109073:
				return 9;
			case 810500501:
				return 1;
			case 797453428:
				return 15;
			case -1407056675:
				return 1;
			case 62520498:
				return 18;
			case 373783623:
				return 20;
			case 1621833104:
				return 18;
			case -1696575454:
				return 8;
			case 1609505828:
				return 23;
			case -1084058685:
				return 8;
			case -1664988496:
				return 9;
			case -1783049048:
				return 9;
			case -558327193:
				return 9;
			case 286162706:
				return 9;
			case 1615285097:
				return 9;
			case -448599760:
				return 20;
			case 1132533427:
				return 18;
			case -1255675465:
				return 18;
			case 588400727:
				return 22;
			case -1078406621:
				return 22;
			case 815565122:
				return 0;
			case -968686824:
				return 15;
			case 383285357:
				return 11;
			case 830931566:
				return 10;
			case -1079521156:
				return 9;
			case -1343084439:
				return 9;
			case 1867545732:
				return 23;
			case -15667560:
				return 0;
			case 1401557308:
				return 9;
			case 272086219:
				return 21;
			case -1460460052:
				return 21;
			case 2024713010:
				return 15;
			case -433637084:
				return 1;
			case 1920927356:
				return 18;
			case 983580076:
				return 9;
			case 738590523:
				return 15;
			case 1229011466:
				return 2;
			case 362685326:
				return 0;
			case 131363873:
				return 1;
			case -1918658020:
				return 11;
			case 209623500:
				return 12;
			case -245997622:
				return 21;
			case 458209198:
				return 18;
			case 1067835471:
				return 1;
			case 1169428501:
				return 1;
			case 325766844:
				return 20;
			case -2045208178:
				return 1;
			case -331203775:
				return 1;
			case -1607268103:
				return 1;
			case 359325346:
				return 1;
			case 1172070118:
				return 1;
			case 343399240:
				return 1;
			case 355130513:
				return 18;
			case 2069882687:
				return 20;
			case -289420007:
				return 13;
			case -362791308:
				return 13;
			case -1097432820:
				return 20;
			case 1213187927:
				return 20;
			case 111292469:
				return 16;
			case -1145690235:
				return 20;
			case -1317542923:
				return 13;
			case 1348106565:
				return 13;
			case -1004747084:
				return 14;
			case 1089725084:
				return 20;
			case 1356881482:
				return 16;
			case -953531577:
				return 5;
			case -1479920637:
				return 15;
			case 2132661455:
				return 20;
			case -345142193:
				return 20;
			case 1153720789:
				return 11;
			case 1095325127:
				return 1;
			case -630300921:
				return 20;
			case 1080890700:
				return 20;
			case 1978595469:
				return 20;
			case -1633137849:
				return 8;
			case 1921371725:
				return 9;
			case -2134360406:
				return 7;
			case -327947127:
				return 9;
			case -78072296:
				return 22;
			case -1379618186:
				return 20;
			case 1185839882:
				return 22;
			case -266767341:
				return 18;
			case -42041881:
				return 23;
			case 1996407755:
				return 18;
			case -1114736130:
				return 12;
			case -985659031:
				return 12;
			case -680088106:
				return 12;
			case -1332576287:
				return 0;
			case -49928042:
				return 11;
			case 667353761:
				return 20;
			case -1112729059:
				return 13;
			case 597680464:
				return 12;
			case 318078354:
				return 22;
			case -1761128258:
				return 20;
			case 777482866:
				return 23;
			case -450600951:
				return 23;
			case 276848212:
				return 23;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -1247606340:
				return 0;
			case 1955306955:
				return 0;
			case -1811967943:
				return 0;
			case -1169825673:
				return 0;
			case 449150154:
				return 10;
			case 654047380:
				return 35;
			case -1003948703:
				return 25;
			case 479802912:
				return 25;
			case -1805561902:
				return 15;
			case -217429167:
				return 50;
			case 1042598863:
				return 20;
			case 45270830:
				return 15;
			case 332041830:
				return 0;
			case -1762981608:
				return 30;
			case -1457524782:
				return 0;
			case 1346867715:
				return 30;
			case 885716452:
				return 30;
			case 1573777166:
				return 30;
			case 879109073:
				return 50;
			case 810500501:
				return 5;
			case 797453428:
				return 35;
			case -1407056675:
				return 5;
			case 62520498:
				return 45;
			case 373783623:
				return 45;
			case 1621833104:
				return 45;
			case -1696575454:
				return 30;
			case 1609505828:
				return 0;
			case -1084058685:
				return 25;
			case -1664988496:
				return 15;
			case -1783049048:
				return 40;
			case -558327193:
				return 40;
			case 286162706:
				return 40;
			case 1615285097:
				return 40;
			case -448599760:
				return 30;
			case 1132533427:
				return 15;
			case -1255675465:
				return 15;
			case 588400727:
				return 0;
			case -1078406621:
				return 0;
			case 815565122:
				return 30;
			case -968686824:
				return 0;
			case 383285357:
				return 0;
			case 830931566:
				return 15;
			case -1079521156:
				return 15;
			case -1343084439:
				return 15;
			case 1867545732:
				return 0;
			case -15667560:
				return 30;
			case 1401557308:
				return 50;
			case 272086219:
				return 5;
			case -1460460052:
				return 40;
			case 2024713010:
				return 40;
			case -433637084:
				return 5;
			case 1920927356:
				return 55;
			case 983580076:
				return 25;
			case 738590523:
				return 0;
			case 1229011466:
				return 0;
			case 362685326:
				return 0;
			case 131363873:
				return 15;
			case -1918658020:
				return 0;
			case 209623500:
				return 0;
			case -245997622:
				return 15;
			case 458209198:
				return 15;
			case 1067835471:
				return 0;
			case 1169428501:
				return 0;
			case 325766844:
				return 0;
			case -2045208178:
				return 0;
			case -331203775:
				return 0;
			case -1607268103:
				return 0;
			case 359325346:
				return 0;
			case 1172070118:
				return 0;
			case 343399240:
				return 0;
			case 355130513:
				return 0;
			case 2069882687:
				return 55;
			case -289420007:
				return 45;
			case -362791308:
				return 45;
			case -1097432820:
				return 35;
			case 1213187927:
				return 35;
			case 111292469:
				return 0;
			case -1145690235:
				return 55;
			case -1317542923:
				return 45;
			case 1348106565:
				return 45;
			case -1004747084:
				return 15;
			case 1089725084:
				return 55;
			case 1356881482:
				return 0;
			case -953531577:
				return 35;
			case -1479920637:
				return 30;
			case 2132661455:
				return 0;
			case -345142193:
				return 0;
			case 1153720789:
				return 20;
			case 1095325127:
				return 5;
			case -630300921:
				return 0;
			case 1080890700:
				return 0;
			case 1978595469:
				return 0;
			case -1633137849:
				return 15;
			case 1921371725:
				return 45;
			case -2134360406:
				return 45;
			case -327947127:
				return 25;
			case -78072296:
				return 0;
			case -1379618186:
				return 30;
			case 1185839882:
				return 0;
			case -266767341:
				return 0;
			case -42041881:
				return 0;
			case 1996407755:
				return 0;
			case -1114736130:
				return 15;
			case -985659031:
				return 15;
			case -680088106:
				return 15;
			case -1332576287:
				return 0;
			case -49928042:
				return 30;
			case 667353761:
				return 20;
			case -1112729059:
				return 55;
			case 597680464:
				return 45;
			case 318078354:
				return 0;
			case -1761128258:
				return 0;
			case 777482866:
				return 59;
			case -450600951:
				return 59;
			case 276848212:
				return 59;
			default:
				break;
		}
	}
	return 0;
}

bool func_1127(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_185(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1128(int iParam0, int iParam1)
{
	if (!func_1122(iParam0))
	{
		return false;
	}
	if (((*Global_1360165)[iParam0]->f_140 && iParam1) != 0)
	{
		return true;
	}
	if (((*Global_1360165)[iParam0]->f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

bool func_1129(int iParam0)
{
	iVar0 = func_592(*iParam0);
	if (!func_292(iVar0, 0) || !func_292(Global_35, 0))
	{
		return false;
	}
	func_1548(*iParam0, Global_35, 28, 0, 0);
	func_1556(iParam0, iVar0, Global_35);
	_0x15f4732c357b1d6d(iVar0, player_id(), 9);
	_0xe737d5f14304a2ec(iVar0, player_id(), 60000);
	uVar1 = 24;
	func_1558(&uVar1, iVar0, func_1557(*iParam0), 0);
	func_1558(&uVar1, Global_35, func_1401(func_366(), "ARTHUR", "JOHN"), 0);
	func_1559(&uVar1, iParam0->f_3, iVar0, Global_35, 0, 0, 1, 1);
	return true;
}

bool func_1130(int iParam0)
{
	iVar0 = func_1119(*iParam0);
	iVar1 = func_1119(iParam0->f_1);
	iVar2 = func_1119(iParam0->f_2);
	if (!func_292(iVar0, 0) || !func_292(iVar1, 0))
	{
		return false;
	}
	func_1548(*iParam0, Global_35, 28, 0, 0);
	func_1548(iParam0->f_1, Global_35, 28, 0, 0);
	func_1556(iParam0, iVar0, iVar1);
	if (vdist2(get_entity_coords(iVar0, true, false), get_entity_coords(Global_35, true, false)) < 56.25f)
	{
		_0x15f4732c357b1d6d(iVar0, player_id(), 9);
		_0x15f4732c357b1d6d(iVar1, player_id(), 9);
	}
	uVar3 = 24;
	func_1558(&uVar3, iVar0, func_1557(*iParam0), 0);
	func_1558(&uVar3, iVar1, func_1557(iParam0->f_1), 0);
	if (func_292(iVar2, 0))
	{
		func_1548(iParam0->f_2, Global_35, 28, 0, 0);
		func_1558(&uVar3, iVar2, func_1557(iParam0->f_2), 0);
	}
	func_1559(&uVar3, iParam0->f_3, iVar0, iVar1, 0, 0, 1, 1);
	return true;
}

void func_1131(int iParam0)
{
	if (!func_1560(iParam0))
	{
		return;
	}
	func_1561(iParam0);
	uVar0 = -1;
	_copy_memory(Global_1327590->f_19574[iParam0], &uVar0, 8);
}

void func_1132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1133()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_1134()
{
	return 0;
}

void func_1135(int iParam0, bool bParam1)
{
	if (func_1562(iParam0))
	{
		if (bParam1)
		{
			if (!func_1563(iParam0))
			{
				func_1564(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_1563(iParam0))
		{
			func_1565(iParam0, 1);
		}
	}
}

int func_1136(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_1137()
{
	return Global_40.f_4283.f_4;
}

bool func_1138(int iParam0)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
			return true;
		case 15:
			if (func_486((*Global_1347702)[2]->f_15, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1139(int iParam0)
{
	if (func_1358(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_1140(int iParam0)
{
	if (!func_1358(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_1141(int iParam0)
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

int func_1142(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_1143(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_1144(vector3 vParam0, int iParam3)
{
	if (!func_1566(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

int func_1145(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_1567(1, 0, 0);
	}
	else
	{
		iVar0 = func_156();
	}
	return func_1568(iVar0);
}

bool func_1146(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_1147()
{
	return Global_1894899 & 2 != 0;
}

void func_1148(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1569(iParam0, iParam1, bParam2);
}

bool func_1149(int iParam0, int iParam1)
{
	bVar0 = Global_1935630->f_11;
	if (func_666(iParam0) == 1)
	{
		return true;
	}
	if (func_663(iParam0, 16384))
	{
		if (func_832())
		{
			return false;
		}
	}
	if (iParam1 & 128 != 0)
	{
		if (bVar0)
		{
			return false;
		}
		if (func_1570(Global_36))
		{
			return false;
		}
	}
	if (iParam1 & -2147483648 != 0)
	{
		if (func_1571(32) > 0)
		{
			return false;
		}
	}
	if (iParam1 & 32 != 0)
	{
		if (func_1571(-2147483648) > 0)
		{
			return false;
		}
	}
	if (!func_663(iParam0, 1048576))
	{
		if (func_1044(1))
		{
			return false;
		}
	}
	if ((((iParam1 & 4194304 != 0 && Global_17504.f_5 != -1) && func_1572()) && !func_1573()) && !func_1574())
	{
		if (func_651(Global_17504.f_5, 4194304))
		{
			return false;
		}
	}
	if ((((iParam1 & 536870912 != 0 && Global_17504.f_6 != -1) && func_1575()) && !func_1573()) && !func_1574())
	{
		if (func_651(Global_17504.f_6, 536870912))
		{
			return false;
		}
	}
	if (func_449())
	{
		if (iParam1 & 32768 != 0)
		{
			return false;
		}
	}
	else if (iParam1 & 65536 != 0)
	{
		return false;
	}
	return true;
}

void func_1150(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	switch (func_1576(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*uParam1 = 225f;
				*uParam2 = 6400f;
			}
			else
			{
				*uParam1 = 225f;
				*uParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_651(iParam0, 1))
			{
				if (func_663(iParam0, 2))
				{
				}
			}
			func_1577(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = (*uParam1 * *uParam1);
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_1578(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = (*uParam1 * *uParam1);
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_1578(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = 7f;
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_1151(iParam0))
	{
		*uParam2 = 40000f;
	}
}

bool func_1151(int iParam0)
{
	if (func_651(iParam0, 1))
	{
		return false;
	}
	return (1 == func_666(iParam0) || 2 == func_666(iParam0));
}

bool func_1152(int iParam0, float fParam1, var uParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	iVar0 = 0;
	while (iVar0 < func_1579(iParam0))
	{
		vVar1 = { func_1580(iParam0, iVar0) };
		if (!func_185(vVar1))
		{
			if (!bParam5 || !func_1581(iParam0, iVar0))
			{
				if (bParam7)
				{
					fVar4 = func_645(Global_36, vVar1);
				}
				else
				{
					fVar4 = func_443(Global_36, vVar1);
				}
				if (fVar4 > fParam1 || (!func_1524(Global_35, vVar1, fParam4) && bParam3))
				{
					if (iVar5 != 18 && iVar5 != 19)
					{
						iVar5 = 17;
					}
				}
				else if (fVar4 < fParam6)
				{
					iVar5 = 18;
				}
				else if (func_1127(vVar1, 0, 0, 0))
				{
					iVar5 = 19;
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	*uParam2 = iVar5;
	return false;
}

int func_1153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

bool func_1154(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			return func_1582(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[0];
		case 0:
			return func_1582(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[1];
		case 2:
			return func_1582(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[3];
		case 1:
			return func_1582(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[4];
		case 4:
			return func_1582(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[8];
		case 5:
			return func_1582(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[13];
	}
	return false;
}

bool func_1155(int iParam0, int iParam1)
{
	iVar0 = func_1161(iParam1);
	iVar1 = (17 + iVar0);
	return func_1583(iParam0, iParam1) >= &(*Global_1310750)[iParam0]->f_64[iVar1];
}

bool func_1156(int iParam0)
{
	if (iParam0 & 32 != 0)
	{
		if (func_1571(32) >= 2)
		{
			return true;
		}
	}
	if (iParam0 & 128 != 0)
	{
		if (func_1571(128) >= 1)
		{
			return true;
		}
	}
	if (iParam0 & 4 != 0)
	{
		if (func_1571(4) >= 2)
		{
			return true;
		}
	}
	return false;
}

bool func_1157(int iParam0, int iParam1)
{
	iVar0 = (*Global_1310750)[iParam0]->f_4;
	iVar1 = (*Global_1310750)[iParam0]->f_4.f_2;
	if (iVar0 != -1)
	{
		if (!func_150(iVar0))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (!func_486((*Global_1347702)[iVar1]->f_15, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_1158(int iParam0)
{
	if (func_663(iParam0, 131072) && func_449())
	{
		return false;
	}
	iVar0 = (*Global_1310750)[iParam0]->f_4.f_1;
	iVar1 = (*Global_1310750)[iParam0]->f_4.f_3;
	if (iVar0 != -1)
	{
		if (func_150(iVar0))
		{
			return true;
		}
	}
	if (iVar1 != -1)
	{
		if (func_486((*Global_1347702)[iVar1]->f_15, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1159(int iParam0)
{
	iVar0 = func_342();
	switch (iParam0)
	{
		case 0:
			if (func_1584(0, iVar0) > 0)
			{
				if (((iVar0 == 4 || iVar0 == 7) || iVar0 == 9) || iVar0 == 10)
				{
					return false;
				}
			}
			return true;
		case 2:
			if (func_294(11) && func_342() == 1)
			{
				return false;
			}
			if (func_366() && func_342() == 4)
			{
				return false;
			}
			if (!is_ped_on_mount(Global_35))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (func_982(2) || func_1585(2))
			{
				return false;
			}
			return true;
		case 76:
			if (func_320(19))
			{
				return false;
			}
			else if (!func_1586(115, -1, 0))
			{
				return false;
			}
			if (func_320(68) && !func_150(59))
			{
				return false;
			}
			return true;
		case 6:
			if (iVar0 == -1)
			{
				return false;
			}
			if (iVar0 == 8)
			{
				if (func_1034(39))
				{
					return false;
				}
			}
			else if (!func_955(1845102363))
			{
				return false;
			}
			return true;
		case 7:
			if (func_366())
			{
				if (!func_150(7))
				{
					return false;
				}
			}
			else if (func_449())
			{
				if (!func_150(69))
				{
					return false;
				}
			}
			return true;
		case 31:
			if (func_564() || func_1353())
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 10:
			if (!func_449() && (func_1587(10, 0) == 2 || func_1587(10, 0) == 1))
			{
				return false;
			}
			if (func_449() && ((func_1587(10, 1) == 2 || func_1587(10, 0) == 1) || func_1587(10, 1) == 1))
			{
				return false;
			}
			return true;
		case 11:
			if (is_ped_in_any_vehicle(Global_35, true))
			{
				return false;
			}
			if (func_982(2) || func_1585(2))
			{
				return false;
			}
			return true;
		case 12:
			if (func_1508(12) < 3)
			{
				switch (func_342())
				{
					case 4:
					case 12:
						if (((!func_982(3) && !func_150(75)) && func_1588(12, 1) != 2) && func_449())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 1:
					case 3:
					case 9:
						if (((!func_982(0) && func_1588(12, 0) != 1) && !func_320(65)) && func_366())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 13:
					case 14:
					case 15:
					case 16:
						if ((!func_982(5) && func_1588(12, 2) != 3) && func_449())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
				}
			}
			break;
		case 79:
			if (func_1508(4) == 0 && func_1508(45) == 0)
			{
				return false;
			}
			switch (func_156())
			{
				case 76:
					if ((func_1588(45, 0) == 5 || func_1588(45, 0) == 6) && func_1588(45, 5) == 1)
					{
						if ((!func_449() && func_1588(45, 3) == 1) || (func_449() && func_1588(45, 3) == 2))
						{
							if (func_1589(45, 0) == 3)
							{
								return false;
							}
							else if (func_1590(45, 0, 1, 6))
							{
								if (func_1591())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 26:
					if (func_1588(4, 1) == 1)
					{
						if ((!func_449() && func_1588(4, 4) == 1) || (func_449() && func_1588(4, 4) == 2))
						{
							if (func_1589(4, 1) == 3)
							{
								return false;
							}
							else if (func_1590(4, 1, 1, 6))
							{
								if (func_1591())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 105:
					if ((func_1588(45, 2) == 5 || func_1588(45, 2) == 6) && func_1588(45, 6) == 1)
					{
						if ((!func_449() && func_1588(45, 4) == 1) || (func_449() && func_1588(45, 4) == 2))
						{
							if (func_1589(45, 2) == 3)
							{
								return false;
							}
							else if (func_1590(45, 2, 1, 6))
							{
								if (func_1591())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 78:
					if (func_1588(4, 0) == 1)
					{
						if ((!func_449() && func_1588(4, 3) == 1) || (func_449() && func_1588(4, 3) == 2))
						{
							if (func_1589(4, 0) == 3)
							{
								return false;
							}
							else if (func_1590(4, 0, 1, 6))
							{
								if (func_1591())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
			}
			return false;
		case 82:
			if (func_1077(0))
			{
				if (func_156() == 5 && func_1588(82, 0) == 1)
				{
					return false;
				}
				if (func_156() == 38 && func_1588(82, 1) == 1)
				{
					return false;
				}
			}
			return true;
		case 83:
			if (func_1592(75) <= 0)
			{
				return false;
			}
			if (func_1593())
			{
				return false;
			}
			return true;
		case 84:
			if (func_850(76, 1, 0))
			{
				return false;
			}
			if (func_767(func_340(76), 557524588, 1))
			{
				return false;
			}
			if (func_319(117, 0) || func_319(118, 0))
			{
				return false;
			}
			if (func_1508(84) >= 2)
			{
				return false;
			}
			if (func_1587(84, 0) == 2 || func_1587(84, 1) == 2)
			{
				return false;
			}
			if (func_1587(84, 0) == 3 || func_1587(84, 1) == 3)
			{
				return false;
			}
			if (func_1588(84, 2) == 1 && func_449())
			{
				return false;
			}
			if (func_366())
			{
				if (!func_150(7))
				{
					return false;
				}
			}
			if (func_1034(69))
			{
				return false;
			}
			else if (func_1034(9))
			{
				return false;
			}
			else if (func_1034(5))
			{
				return false;
			}
			return true;
		case 15:
			if (func_1588(15, 0) >= 1)
			{
				return false;
			}
			if (func_1589(15, 1) >= 3)
			{
				return false;
			}
			if (func_1588(15, 2) >= 1)
			{
				return false;
			}
			return true;
		case 86:
			if (func_156() != 78 && func_150(26))
			{
				return false;
			}
			return true;
		case 87:
			if (func_449())
			{
			}
			else if (func_1508(87) >= 2)
			{
				return false;
			}
			return true;
		case 16:
			if (func_1508(16) > 0)
			{
				return false;
			}
			if (!func_1480(688258043, 1, 0))
			{
				return false;
			}
			return true;
		case 90:
			iVar2 = func_156();
			iVar3 = func_1594(func_1515(904), 1);
			if (iVar2 == 92 && iVar3 == 92)
			{
				return false;
			}
			if (func_1595() == 0)
			{
				return false;
			}
			return true;
		case 89:
			iVar4 = func_156();
			if (func_850(iVar4, 1, 0))
			{
				return false;
			}
			if (func_1595() == 0)
			{
				return false;
			}
			if (func_1592(101) >= 1)
			{
				return true;
			}
			return false;
		case 88:
			iVar5 = func_156();
			if (func_850(iVar5, 1, 0))
			{
				return false;
			}
			if (iVar5 == 76)
			{
				if (func_1034(69))
				{
					return false;
				}
				else if (func_1034(9))
				{
					return false;
				}
				else if (func_1034(5))
				{
					return false;
				}
				else if (func_319(117, 0))
				{
					return false;
				}
				else if (func_319(118, 0))
				{
					return false;
				}
				if (func_1596(5))
				{
					return false;
				}
			}
			iVar6 = func_1594(func_1515(904), 1);
			if (iVar5 == 92)
			{
				if (iVar6 == 92)
				{
					return false;
				}
				if (func_1596(8))
				{
					return false;
				}
			}
			if (func_1595() == 0)
			{
				return false;
			}
			return true;
		case 17:
			if (func_294(56))
			{
				return false;
			}
			if (func_342() == 11 || func_342() == 0)
			{
				if (func_300(3) || func_800(3))
				{
					return false;
				}
			}
			else if (func_300(69) || func_800(69))
			{
				return false;
			}
			if (is_ped_on_mount(Global_35))
			{
				if (_is_ped_carrying(Global_1935630->f_40))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			return true;
		case 18:
			if (func_982(2))
			{
				return false;
			}
			return true;
		case 91:
			if (func_1592(75) <= 0)
			{
				return false;
			}
			return true;
		case 92:
			switch (func_342())
			{
				case 11:
					if (func_982(2) || func_1585(2))
					{
						return false;
					}
					if (func_1031(30))
					{
						return false;
					}
					return true;
				case 1:
				case 3:
				case 9:
					if (func_982(0))
					{
						return false;
					}
					return true;
			}
			return true;
		case 20:
			if (func_1034(13))
			{
				return false;
			}
			return true;
		case 23:
			if (func_1597() == 0)
			{
				return true;
			}
			return false;
		case 94:
			iVar7 = func_156();
			switch (iVar7)
			{
				case 26:
				case 76:
					if (func_982(0))
					{
						return false;
					}
					if (!func_745(76, 2048))
					{
						return false;
					}
					if (func_1598(99))
					{
						return false;
					}
					break;
				case 5:
				case 105:
					if (func_1598(96))
					{
						return false;
					}
					if (func_1598(77))
					{
						return false;
					}
					break;
			}
			return true;
		case 119:
			if (!func_320(152))
			{
				return false;
			}
			if (func_1599())
			{
				return false;
			}
			if (func_1600(iVar0))
			{
				return true;
			}
			break;
		case 27:
			if (!is_ped_on_mount(Global_35))
			{
				return false;
			}
			else
			{
				if (func_1589(27, 0) == 3)
				{
					return false;
				}
				if (func_1589(27, 1) == 3)
				{
					return false;
				}
				if (func_1589(27, 2) == 3)
				{
					return false;
				}
				if (func_1588(27, 0) >= 3)
				{
					return false;
				}
				if (func_1588(27, 1) >= 3)
				{
					return false;
				}
				if (func_1588(27, 2) >= 3)
				{
					return false;
				}
				if (get_attribute_rank(get_mount(Global_35), 4) < 2 && get_attribute_rank(get_mount(Global_35), 5) < 2)
				{
					return false;
				}
				if (func_1601(7) < 3)
				{
					return false;
				}
				if (func_342() == 3 || func_342() == 6)
				{
					if (func_150(56) && !func_150(60))
					{
						return false;
					}
				}
				if (func_342() == 11)
				{
					if (func_150(26) && !func_150(28))
					{
						return false;
					}
				}
				return true;
			}
			break;
		case 95:
			if (func_982(2))
			{
				return false;
			}
			return true;
		case 30:
			switch (func_342())
			{
				case 0:
				case 2:
					if (func_800(5) || func_300(5))
					{
						return false;
					}
					if (func_150(44))
					{
						if (!func_150(45) && !func_320(24))
						{
							if (func_1584(30, 2) == 0 && func_1584(30, 0) == 0)
							{
								return false;
							}
						}
					}
					if (func_279(0, 39))
					{
						return false;
					}
					if (func_510(0))
					{
						return false;
					}
					if (func_1173(39))
					{
						return false;
					}
					if (func_511(0, 39, &uVar8))
					{
						return false;
					}
					return true;
			}
			return true;
		case 32:
			if (func_1508(34) > 0 && func_1508(33) > 0)
			{
				if (func_1508(32) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 33:
			if (func_1587(33, 0) == 16)
			{
				return false;
			}
			else if (func_342() == 1 && func_768(Global_35, -1374.053f, -741.9763f, 90.7132f, 1) < 200f)
			{
				if (func_319(49, 0))
				{
					return false;
				}
				if (func_319(101, 0))
				{
					return false;
				}
			}
			else
			{
				return true;
			}
			return true;
		case 34:
			if (func_1508(33) > 0)
			{
				if (func_1508(34) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 37:
			switch (func_1153(func_342()))
			{
				case 1:
					if (func_449())
					{
						if (func_1588(37, 5) == 1)
						{
							return false;
						}
					}
					if (func_1587(37, 0) == 2)
					{
						return false;
					}
					break;
				case 3:
					if (func_449())
					{
						if (func_1588(37, 6) == 1)
						{
							return false;
						}
					}
					if (func_1587(37, 1) == 2)
					{
						return false;
					}
					break;
			}
			return true;
		case 97:
			if (func_342() == 1 && func_1034(11))
			{
				return false;
			}
			if (func_342() == 9 && !func_1602(0))
			{
				return false;
			}
			return true;
		case 98:
			if (func_156() == 76 && func_1588(98, 1) == 1)
			{
				return false;
			}
			if (func_156() == 92)
			{
				if (func_319(82, 0) || func_319(83, 0))
				{
					return false;
				}
			}
			return true;
		case 39:
			if (func_300(26) || func_800(26))
			{
				return false;
			}
			return true;
		case 28:
			if (func_150(22) && !func_150(27))
			{
				if (func_1603(-1063.709f, -520.2658f, 82.0255f, 1) < 110f || func_1603(-815.6782f, -520.9415f, 45.4979f, 1) < 110f)
				{
					return false;
				}
			}
			if (func_342() == 0 || func_342() == 11)
			{
				if ((*Global_1888801)[0]->f_1 > 0)
				{
					if ((*Global_1888801)[0]->f_1 + 900000) > get_game_timer()
					{
						return false;
					}
				}
			}
			if (func_342() == 1)
			{
				if ((*Global_1888801)[17]->f_1 > 0)
				{
					if ((*Global_1888801)[17]->f_1 + 900000) > get_game_timer()
					{
						return false;
					}
				}
				if (!func_449())
				{
					return false;
				}
			}
			return true;
		case 40:
			if (func_1604())
			{
				if (func_1605(func_342(), 1, 0) != 0)
				{
					return true;
				}
			}
			break;
		case 42:
			if (func_1587(42, 0) == 2 || func_1587(42, 1) == 2)
			{
				return false;
			}
			if (func_1508(42) >= 2)
			{
				return false;
			}
			return true;
		case 77:
			if (func_1598(94))
			{
				return false;
			}
			return true;
		case 96:
			if (func_1598(94))
			{
				return false;
			}
			return true;
		case 99:
			if (func_1592(99) >= 2)
			{
				return false;
			}
			if (func_1598(94))
			{
				return false;
			}
			return true;
		case 100:
			switch (func_342())
			{
				case 1:
					if (func_1587(100, 1) != 1 && func_449())
					{
						return true;
					}
					break;
				case 0:
				case 11:
					return false;
			}
			return false;
		case 44:
			if (func_1598(57))
			{
				return false;
			}
			switch (func_342())
			{
				case 1:
				case 3:
				case 9:
					if (func_982(0) || func_449())
					{
						return false;
					}
					break;
				case 11:
					if (func_982(2) || func_1585(2))
					{
						return false;
					}
					else if (func_1603(1624.51f, -1818.45f, 49.6045f, 1) < 225f)
					{
						if (has_script_loaded("gang_enc_lemoyne_church") || !func_115(65536, 2))
						{
							return false;
						}
					}
					break;
			}
			return true;
		case 101:
			if (func_982(2))
			{
				return false;
			}
			if (func_1606(92, 65536) || func_1607(92))
			{
				return true;
			}
			return false;
		case 102:
			switch (func_156())
			{
				case 76:
					if (func_1587(102, 1) == 1 && func_1587(102, 2) == 1)
					{
						return false;
					}
					break;
				case 26:
					if (func_1587(102, 0) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 103:
			if (func_1508(103) >= 2)
			{
				return false;
			}
			if (func_156() == 5)
			{
				if (!func_1608(6, -1))
				{
					return false;
				}
				if (func_768(Global_35, 2720.815f, -1283.54f, 48.638f, 1) < func_768(Global_35, 2551.768f, -1173.668f, 52.683f, 1))
				{
					if (func_319(77, 0))
					{
						return false;
					}
				}
			}
			else if (func_156() == 92)
			{
				if (func_319(143, 0))
				{
					return false;
				}
			}
			return true;
		case 45:
			if (func_342() == 9)
			{
				if (func_1587(45, 0) == 2)
				{
					return false;
				}
			}
			else if (func_342() == 11)
			{
				if (func_449())
				{
					if (func_1588(45, 4) == 1)
					{
						return false;
					}
				}
				if (func_1587(45, 2) == 2)
				{
					return false;
				}
			}
			return true;
		case 46:
			if (func_1508(46) >= 4 || func_1588(46, 0) == 1)
			{
				return false;
			}
			else if (func_1609() == 1 || (func_1609() == 3 && func_1147()))
			{
				return true;
			}
			break;
		case 48:
			return true;
		case 49:
			if (!is_ped_on_mount(Global_35))
			{
				return false;
			}
			if (!func_1117(2, 0, 0))
			{
				return false;
			}
			if (!func_1117(3, 0, 0))
			{
				return false;
			}
			iVar9 = get_game_timer();
			if ((iVar9 - Global_1357549->f_1484) >= 300000)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 50:
			if (func_1610())
			{
				return false;
			}
			if (func_482(func_1512(func_342())) > 0)
			{
				return false;
			}
			switch (Global_1393447->f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return false;
			}
			if (_get_number_of_references_of_script_with_name_hash(910719791) > 0)
			{
				return false;
			}
			return true;
		case 106:
			if (func_156() == 76)
			{
				if (func_319(26, 0) || func_319(27, 0))
				{
					if (func_319(117, 0) || func_319(118, 0))
					{
						return false;
					}
				}
				if (func_482(1) > 0)
				{
					return false;
				}
				if (func_1034(7))
				{
					return false;
				}
				if (func_1587(106, 1) != 7)
				{
					return true;
				}
				if (func_1587(87, 0) == 3 && func_1587(106, 3) != 7)
				{
					return true;
				}
				if (func_1587(84, 0) == 3 || func_1587(84, 1) == 3)
				{
					if (func_1587(106, 4) != 7)
					{
						if (!func_449())
						{
							return true;
						}
					}
				}
			}
			else if (func_156() == 105)
			{
				if (func_482(2) > 0)
				{
					return false;
				}
				if (func_1587(87, 0) == 3 && func_1587(106, 3) != 7)
				{
					return true;
				}
				else if (func_1587(87, 0) != 3)
				{
				}
				else if (func_1587(106, 3) == 7)
				{
				}
				if ((func_320(13) && func_1587(106, 5) == 3) && func_1587(106, 5) != 7)
				{
					if (func_1611(106, 5))
					{
						return true;
					}
				}
			}
			else if (func_156() == 5)
			{
				if (func_482(2) > 0)
				{
					return false;
				}
				if (func_320(12))
				{
					if (func_1587(106, 6) == 3)
					{
						if (func_1587(106, 6) != 7)
						{
							if (func_1611(106, 6))
							{
								return true;
							}
						}
					}
				}
				if (func_1587(30, 3) == 3 && func_1587(106, 7) != 7)
				{
					if (func_1611(106, 7))
					{
						return true;
					}
				}
			}
			else if (func_156() == 38)
			{
				if (func_482(3) > 0)
				{
					return false;
				}
				if ((func_320(18) && func_1587(106, 0) == 3) && func_1587(106, 0) != 7)
				{
					return true;
				}
				if ((func_320(17) && func_1587(106, 8) == 3) && func_1587(106, 8) != 7)
				{
					return true;
				}
			}
			return false;
		case 107:
			if (((func_319(77, 0) || func_319(106, 0)) || func_294(45)) || func_294(47))
			{
				return false;
			}
			return true;
		case 51:
			if (func_982(2) || func_1585(2))
			{
				return false;
			}
			return true;
		case 108:
			if (func_156() == 76)
			{
				if (func_1583(108, 2097152) > 0 && (func_982(0) || func_1585(0)))
				{
					return false;
				}
				if (func_850(76, 1, 0))
				{
					return false;
				}
				if (func_767(func_340(76), 557524588, 1))
				{
					return false;
				}
			}
			return true;
		case 57:
			if (func_1598(44))
			{
				return false;
			}
			if (iVar0 == -1)
			{
				return false;
			}
			if (func_1612(iVar0))
			{
				return false;
			}
			if (!func_1613(24))
			{
				return false;
			}
			return true;
		case 109:
			switch (func_342())
			{
				case 1:
					if (func_1588(109, 0) == 1)
					{
						return false;
					}
					break;
				case 10:
					if (func_1588(109, 0) == 1 && func_1588(109, 1) == 1)
					{
						return false;
					}
					break;
				case 11:
					if (func_1588(109, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 58:
			if ((func_319(119, 0) || func_1031(119)) && func_1603(-1006.029f, 458.253f, 55.49393f, 1) < 200f)
			{
				return false;
			}
			else if (!func_449() && func_1508(58) >= 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 110:
			if (func_319(77, 0))
			{
				return false;
			}
			if (func_294(47))
			{
				return false;
			}
			if (func_300(5))
			{
				return false;
			}
			if (func_850(5, 1, 0))
			{
				return false;
			}
			if (!func_449())
			{
				if (func_150(31))
				{
					return true;
				}
			}
			else if (func_150(73))
			{
				return true;
			}
			return false;
		case 60:
			if (iParam0 == 60)
			{
				switch (func_1153(func_342()))
				{
					case 1:
						if (func_1588(60, 0) < 2)
						{
							return true;
						}
						break;
					case 0:
						if (func_1588(60, 1) < 3)
						{
							return true;
						}
						break;
					case 4:
						if (func_1588(60, 2) < 2)
						{
							return true;
						}
						break;
				}
			}
			break;
		case 61:
			if (func_1508(46) >= 2 || func_1588(46, 0) == 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 59:
			if (!func_1614(Global_35, Global_1900383[func_1021(7)], 0))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 62:
			switch (func_1615())
			{
				case 1:
					if (func_1588(62, 0) == 1)
					{
						return false;
					}
					break;
				case 0:
				case 2:
					if (func_1588(62, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 111:
			switch (func_342())
			{
				case 9:
					if (func_850(76, 1, 0))
					{
						return false;
					}
					else if (func_369(14))
					{
						return false;
					}
					else if (func_150(71) && func_319(10, 0))
					{
						return false;
					}
					return true;
				case 4:
					if (!func_320(9))
					{
						return false;
					}
					if (func_1034(72))
					{
						return false;
					}
					if (func_1034(70))
					{
						return false;
					}
					if (func_1034(75))
					{
						return false;
					}
					if (!func_1117(4, 0, 0))
					{
						return false;
					}
					iVar10 = get_game_timer();
					if ((iVar10 - Global_1357549->f_1484) >= 300000)
					{
						return true;
					}
					else
					{
						return false;
					}
					return true;
				default:
					return true;
			}
			break;
		case 112:
			if (func_107(14, 4096))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 67:
			if (func_1508(67) >= 2)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 113:
			if (!func_1212(func_326()))
			{
				switch (func_156())
				{
					case 105:
						if (func_1588(113, 3) != 2 && !Global_1326862->f_611)
						{
							Global_1326862->f_611 = 1;
							return true;
						}
						else
						{
							Global_1326862->f_611 = 0;
							return false;
						}
						break;
					case 38:
						if (func_320(17) && func_1588(113, 4) != 3)
						{
							if (!Global_1326862->f_612)
							{
								func_1616(113, 4, func_480());
								Global_1326862->f_612 = 1;
							}
							if (Global_1326862->f_612)
							{
								if (func_1590(113, 4, 7, 0))
								{
									func_1617(113, 4, 3);
									return false;
								}
								else if (!func_1607(113))
								{
									if (func_1587(106, 8) == 3)
									{
										if (func_1587(106, 8) == 7)
										{
											Global_1326862->f_612 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862->f_612 = 0;
										return true;
									}
								}
							}
						}
						else if (func_320(18) && func_1588(113, 4) != 4)
						{
							if (!Global_1326862->f_613)
							{
								func_1616(113, 4, func_480());
								Global_1326862->f_613 = 1;
							}
							if (Global_1326862->f_613)
							{
								if (func_1590(113, 4, 7, 0))
								{
									func_1617(113, 4, 4);
									return false;
								}
								else if (!func_1607(113))
								{
									if (func_1587(106, 0) == 3)
									{
										if (func_1587(106, 0) == 7)
										{
											Global_1326862->f_613 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862->f_613 = 0;
										return true;
									}
								}
							}
						}
						else
						{
							return false;
						}
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 114:
			if (func_1618())
			{
				return true;
			}
			return false;
		case 116:
			if (func_1619(&uVar1))
			{
				return false;
			}
			if (func_156() == 76)
			{
				if (func_1620(76) >= 10)
				{
					if (!Global_1326862->f_614)
					{
						func_667(116, 1, 0, 0, 0, 1, 0, 1);
						func_1616(116, 1, func_480());
						Global_1326862->f_614 = 1;
					}
					else if (func_1590(116, 1, 8, 0))
					{
						return false;
					}
					else if (!func_1607(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (func_156() == 105)
			{
				if (func_1620(105) >= 10)
				{
					if (!Global_1326862->f_615)
					{
						func_667(116, 1, 0, 0, 0, 1, 0, 1);
						func_1616(116, 2, func_480());
						Global_1326862->f_615 = 1;
					}
					else if (func_1590(116, 2, 8, 0))
					{
						return false;
					}
					else if (!func_1607(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (func_156() == 78)
			{
				if (func_1620(78) >= 10)
				{
					if (!Global_1326862->f_616)
					{
						func_667(116, 1, 0, 0, 0, 1, 0, 1);
						func_1616(116, 3, func_480());
						Global_1326862->f_616 = 1;
					}
					else if (func_1590(116, 3, 8, 0))
					{
						return false;
					}
					else if (!func_1607(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
		case 117:
			if (func_1592(75) <= 0)
			{
				return false;
			}
			return true;
		case 115:
			if (func_1587(115, 0) == 3)
			{
				return false;
			}
			if (func_449())
			{
				if (func_1588(115, 4) == 1)
				{
					return false;
				}
			}
			if (func_1583(115, 2097152) >= 2)
			{
				return false;
			}
			if (func_1587(115, 0) == 2)
			{
				return false;
			}
			return true;
		case 63:
			switch (func_342())
			{
				case 1:
					if (func_449())
					{
						if (func_982(4))
						{
							return false;
						}
					}
					else
					{
						return false;
					}
					break;
			}
			return true;
		case 64:
			if (Global_1430231->f_4)
			{
				return false;
			}
			if (func_150(56) && !func_449())
			{
				return false;
			}
			if ((func_342() == 11 || func_342() == 0) || func_342() == 2)
			{
				if (func_982(2) || func_1585(2))
				{
					return false;
				}
			}
			else if (func_342() == 9)
			{
				if (func_982(0) || func_1585(0))
				{
					return false;
				}
			}
			iVar11 = func_1274(Global_36, 0);
			if (func_761(iVar11))
			{
				if (func_1621(iVar11, Global_36) <= 400f)
				{
					return false;
				}
			}
			return true;
		case 65:
			if (func_342() == 11)
			{
				if (func_150(26))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			break;
		case 66:
			if (!func_320(146))
			{
				return false;
			}
			if (func_1480(1134518629, 1, 0))
			{
				return false;
			}
			return true;
		case 105:
			if (func_156() == 38)
			{
				if (func_482(3) > 0)
				{
					return false;
				}
			}
			else if (func_156() == 5)
			{
				if (func_482(2) > 0)
				{
					return false;
				}
			}
			if (is_ped_on_mount(Global_35))
			{
				return false;
			}
			break;
		case 71:
			if (func_342() != 8)
			{
				if (func_1154(71, 2) || func_1154(71, 1))
				{
					return false;
				}
			}
			return true;
		case 118:
			if (func_156() == 38)
			{
				if (!func_320(8))
				{
					return false;
				}
			}
			return true;
		case 73:
			if (func_1587(73, 0) == 2)
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

bool func_1160(int iParam0)
{
	return 0 == iParam0;
}

int func_1161(int iParam0)
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

void func_1162(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 4);
	}
	else
	{
		func_191(uParam0, 4);
	}
}

void func_1163(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 64);
	}
	else
	{
		func_191(uParam0, 64);
	}
}

void func_1164(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 1024);
	}
	else
	{
		func_191(uParam0, 1024);
	}
}

void func_1165(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_291(uParam0, 1048576);
	}
	else
	{
		func_191(uParam0, 1048576);
	}
}

void func_1166(var uParam0)
{
	func_1622(uParam0, 0f);
}

bool func_1167()
{
	iVar0 = func_1172(func_156(), 2);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_1168()
{
	if (does_entity_exist(Local_32.f_1))
	{
		return true;
	}
	Local_32.f_3 = 0;
	Local_32.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if ((iVar0 == -1 || iVar0 == 5) || func_762(iVar0))
		{
		}
		else if (!_0x0516fae561276efc((*Global_1425371)[iVar0]->f_1))
		{
		}
		else
		{
			Local_32.f_1 = _0x6e585a616abb8401((*Global_1425371)[iVar0]->f_1);
			if (Local_32.f_1 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1169(int iParam0, char* sParam1)
{
	func_1178(1);
	func_1120(iParam0, sParam1, 1541280898, 0, 1, func_1179(*Global_1393529->f_288[1]), 0, 1);
}

int func_1170(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1171(int iParam0)
{
	if (func_1296(iParam0) != 4)
	{
		return -1;
	}
	return func_375(iParam0);
}

int func_1172(int iParam0, int iParam1)
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

bool func_1173(int iParam0)
{
	if (func_684(iParam0, 32768) || func_684(iParam0, 16384))
	{
		return true;
	}
	return false;
}

bool func_1174(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (func_322(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam2, iParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_1623(16);
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

int func_1175()
{
	if (func_1133())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_1176(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_1177(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_684(iParam0, 1073741824);
}

void func_1178(int iParam0)
{
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		return;
	}
	if (func_36() == -1)
	{
		if (!&Global_1393529->f_569[iParam0] == 1)
		{
			iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
			if (does_entity_exist(iVar0) && !func_704(iVar0, 0))
			{
				if (is_string_null_or_empty(func_1624(*Global_1393529->f_288[iParam0])))
				{
					switch (iParam0)
					{
						case 12:
						case 13:
						case 14:
							func_1625(iParam0, iVar0);
							break;
					}
				}
				if (!is_string_null_or_empty(func_1624(*Global_1393529->f_288[iParam0])))
				{
					set_ambient_voice_name(iVar0, Global_1393529->f_288[iParam0]);
					Global_1393529->f_569[iParam0] = 1;
				}
			}
		}
	}
}

int func_1179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_1180(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return;
	}
	if (!func_687(iParam0, iParam1))
	{
	}
	Global_1393529->f_77[iParam0] = (Global_1393529->f_77[iParam0] || iParam1);
}

int func_1181(int iParam0, int iParam1)
{
	iVar1 = create_itemset(true);
	if (iParam1 < 0)
	{
		if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
		{
			return 0;
		}
		_0x886171a12f400b89(Global_1914319->f_3[iParam0]->f_25, iVar1, 1);
	}
	else
	{
		_0x59b57c4b06531e1e(Global_1914319->f_3[iParam0]->f_11, to_float(iParam1), iVar1, 1);
	}
	if (is_itemset_valid(iVar1))
	{
	}
	else
	{
		return 0;
	}
	if (get_itemset_size(iVar1) <= 0)
	{
		destroy_itemset(iVar1);
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar0 = get_ped_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1)));
		if (does_entity_exist(iVar0))
		{
			if (is_ped_human(iVar0))
			{
				if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
				{
					if (iVar0 == get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23))
					{
						remove_from_itemset(iVar0, iVar1);
					}
					else
					{
						iVar3 = func_1626(Global_1914319->f_3[iParam0]->f_10);
						if (iVar3 != -1 && iVar0 == func_278(iVar3))
						{
							remove_from_itemset(iVar0, iVar1);
						}
					}
					iVar2++;
					if (get_itemset_size(iVar1) <= 0)
					{
						destroy_itemset(iVar1);
						return 0;
					}
					iVar0 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(get_random_int_in_range(0, get_itemset_size(iVar1)), iVar1));
					destroy_itemset(iVar1);
					return iVar0;
				}
			}
		}
	}
}

char* func_1182()
{
	iVar0 = (func_1627() - 1);
	iVar1 = func_1628(0, 1);
	if (iVar0 != iVar1)
	{
		return "";
	}
	switch (iVar0)
	{
		case 0:
			return "PAPERBOY_STORY_EDITION1";
		case 1:
			return "PAPERBOY_STORY_EDITION2";
		case 2:
			return "PAPERBOY_STORY_EDITION3";
		case 3:
			return "PAPERBOY_STORY_EDITION4";
		case 4:
			return "PAPERBOY_STORY_EDITION5";
		case 5:
			return "PAPERBOY_STORY_EDITION6";
		case 6:
			return "PAPERBOY_STORY_EDITION7";
		case 7:
			return "PAPERBO8_STORY_EDITION8";
		case 8:
			return "PAPERBOY_STORY_EDITION9";
		case 9:
			return "PAPERBOY_STORY_EDITION10";
		case 10:
			return "PAPERBOY_STORY_EDITION11";
		case 11:
			return "PAPERBOY_STORY_EDITION12";
		case 12:
			return "PAPERBOY_STORY_EDITION13";
		case 13:
			return "PAPERBOY_STORY_EDITION14";
	}
	return "";
}

int func_1183(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_1227(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_1629(iParam0, uVar0, iVar1, bParam2);
}

void func_1184(int iParam0, int iParam1)
{
	if (func_36() != -1)
	{
		return;
	}
	if (!func_271(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_1185(int iParam0, int iParam1)
{
	if (!func_271(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_1186(int iParam0, bool bParam1)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	if (!func_693(iParam0, 2))
	{
		return 0;
	}
	if (func_693(iParam0, 32) && !bParam1)
	{
		func_1185(iParam0, _create_persistent_character(func_690(iParam0)));
		if (func_36() == -1)
		{
			if (func_693(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_277(iParam0));
				func_692(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_277(iParam0));
		}
		return 0;
	}
	if (!func_1630(iParam0) && func_36() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_277(iParam0)))
	{
		func_692(iParam0, 128);
		return 1;
	}
	func_1185(iParam0, _create_persistent_character(func_690(iParam0)));
	_0x4f81ead1de8fa19b(func_277(iParam0));
	if (func_693(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_277(iParam0));
		func_692(iParam0, 2048);
	}
	return 1;
}

bool func_1187(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_277(iParam0)))
	{
		_0x49a8c2cd97815215(func_277(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_277(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_1188(int iParam0, int iParam1)
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

bool func_1189(int iParam0)
{
	if (func_36() == -1)
	{
		if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_26))
		{
			return false;
		}
		if (_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_26, Global_36))
		{
			return true;
		}
		if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_27))
		{
			if (_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_27, Global_36))
			{
				return true;
			}
		}
	}
	else
	{
		if (!_does_volume_exist(Global_1051260->f_48[iParam0]->f_31))
		{
			return false;
		}
		if (_0xf256a75210c5c0eb(Global_1051260->f_48[iParam0]->f_31, Global_36))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1190(int iParam0)
{
	if (!func_1176(iParam0))
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
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
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
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
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

int func_1191(int iParam0)
{
	if (iParam0 == 11)
	{
		return 0;
	}
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	if (func_704(iVar0, 0))
	{
		return 0;
	}
	iVar1 = 1041923169;
	iVar2 = func_1172(func_156(), iParam0);
	vVar3 = { func_1190(iVar2) };
	if (func_185(vVar3))
	{
		return 0;
	}
	if (func_1631(iVar2))
	{
		iVar1 = -1063116709;
	}
	else if (func_1632(iParam0))
	{
		switch (iVar2)
		{
			case 22:
				iVar1 = 830847823;
				break;
			case 4:
			case 5:
			case 34:
			case 55:
			case 67:
				iVar1 = 1904532698;
				break;
			case 27:
			case 41:
			case 82:
				iVar1 = 1041923169;
				break;
			case 10:
			case 18:
			case 26:
			case 38:
			case 60:
			case 62:
			case 63:
			case 72:
				iVar1 = 830847823;
				break;
			case 12:
			case 54:
				iVar1 = 830847823;
				break;
			case 92:
				iVar1 = 830847823;
				break;
			case 76:
				iVar1 = 1996775727;
				if (func_36() == -1)
				{
					vVar3 = { -363.67f, 795.4f, 115.24f };
				}
				break;
			case 9:
			case 79:
				iVar1 = 1041923169;
				break;
			case 69:
				iVar1 = -1571924583;
				break;
			case 2:
			case 3:
			case 14:
			case 15:
			case 20:
			case 21:
			case 23:
			case 24:
			case 30:
			case 31:
			case 45:
			case 46:
			case 65:
			case 77:
			case 78:
			case 85:
			case 86:
			case 88:
			case 89:
			case 99:
			case 100:
				iVar1 = 1041923169;
				break;
			case 68:
				iVar1 = -1001792074;
				break;
			case 25:
			case 36:
				iVar1 = 1041923169;
				break;
			case 48:
			case 49:
			case 50:
				iVar1 = 2087366558;
				break;
			case 1:
			case 16:
			case 32:
			case 51:
			case 64:
			case 80:
				iVar1 = 1951271908;
				break;
			case 126:
				iVar1 = -812435375;
				break;
			default:
				iVar1 = 830847823;
				break;
		}
	}
	if (iParam0 != 2 && iParam0 != 1)
	{
		if (func_1266(iVar0, iVar1))
		{
			return _get_scenario_point_ped_is_using(iVar0, false);
		}
	}
	if (!func_185(vVar3))
	{
		if (iVar1 == 1041923169)
		{
		}
		else if (iVar1 == 830847823)
		{
		}
		iVar6 = 0;
		while (iVar6 < 5)
		{
			iVar7 = _find_closest_active_scenario_point_of_type(vVar3, iVar1, (5.5f - IntToFloat((5 - iVar6))), 0, true);
			if (_does_scenario_point_exist(iVar7))
			{
				return iVar7;
			}
			iVar6++;
		}
	}
	return 0;
}

void func_1192(int iParam0)
{
	if (func_269(iParam0, 64))
	{
		return;
	}
	if (iParam0 == 11)
	{
		return;
	}
	if (!func_269(iParam0, 32) && func_271(Global_1393529->f_2))
	{
		if (!_0xeb98b38ca60742d7(func_277(Global_1393529->f_2)))
		{
			_0x406808610220405b(func_277(Global_1393529->f_2));
		}
		func_1633(iParam0, 32);
	}
	if (!func_1634(Global_1393529->f_3))
	{
		if ((!is_ped_active_in_scenario(Global_1393529->f_3, 0) && !func_1608(iParam0, -1)) && !func_274(Global_1393529->f_2, 0))
		{
			if (!func_281(iParam0))
			{
				fVar0 = vdist(get_entity_coords(Global_1393529->f_3, true, false), Global_1914319->f_3[iParam0]->f_11);
				if (fVar0 < 20f)
				{
					task_go_to_entity(Global_1393529->f_3, Global_35, -1, 1.5f, 1f, 2f, 0);
				}
			}
		}
	}
}

bool func_1193(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_28, Global_36);
}

void func_1194(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_744() && (func_1635(38) || func_1636(38)))
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
			if (func_744() && (func_1635(39) || func_1636(39)))
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
			iVar9 = func_1637(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_744() && (func_1635(41) || func_1636(41)))
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
			if (func_744() && (func_1635(49) || func_1636(49)))
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
			iVar9 = func_1637(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1638(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1639(iParam0, iVar13, iVar14))
	{
	}
	if (func_1640(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1641(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1642(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1643(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1644(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_744() && (func_1635(38) || func_1636(38)))
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
			if (func_744() && (func_1635(39) || func_1636(39)))
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
			if (func_744() && (func_1635(49) || func_1636(49)))
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
		if (func_744() && (func_1635(38) || func_1636(38)))
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
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1478(_create_var_string(2, sVar0), _create_var_string(2, func_1647(func_1646(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_744() && (func_1635(39) || func_1636(39)))
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
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_744() && (func_1635(49) || func_1636(49)))
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
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1645(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_1196(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1197(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1198(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

void func_1199(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_1200(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1201(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1202(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

int func_1203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 78;
		case 1:
			return 120;
		case 2:
			return 38;
		case 3:
			return 93;
		case 4:
			return 82;
		case 5:
			return 65;
		case 6:
			return 3;
		case 7:
			return 110;
		case 8:
			return 105;
		case 9:
			return 5;
		case 10:
			return 26;
		case 11:
			return 75;
		case 12:
			return 115;
		case 13:
			return 76;
		case 14:
			return 92;
		case 15:
			return 56;
		default:
			break;
	}
	return -1;
}

void func_1204(int iParam0, var uParam1)
{
	if (!func_831(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1223(iParam0, *uParam1, 0);
	func_1648(uParam1);
	Global_1935183->f_24 = 1;
}

bool func_1205(int iParam0)
{
	if (!func_831(iParam0))
	{
		return false;
	}
	if (!Global_1935183->f_3)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Global_40.f_11206[iParam0][iVar0])
		{
			case -1132827806:
			case -529686691:
			case 623901469:
				return true;
		}
		iVar0++;
	}
	return false;
}

int func_1206(int iParam0)
{
	bVar0 = func_713(45);
	switch (iParam0)
	{
		case 0:
			if (bVar0)
			{
				return 758531578;
			}
			else
			{
				return -88932423;
			}
			break;
		case 1:
			return 1249109148;
		case 3:
			return 1570318500;
		case 2:
		case 4:
			if (bVar0)
			{
				return -87873296;
			}
			else
			{
				return 1835641172;
			}
			break;
	}
	return func_772(iParam0);
}

int func_1207(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1208(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1207(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1649(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1650();
		}
		else
		{
			func_1651(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1652();
	}
}

bool func_1209(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1935183->f_25)
	{
		return true;
	}
	if (Global_1935183->f_27)
	{
		return true;
	}
	if (iParam0 == 9)
	{
		return true;
	}
	return false;
}

void func_1210(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1321(1497516462);
			func_1653(2016141805);
			func_1653(1010885152);
			func_1653(-502324015);
			break;
		case 2016141805:
			func_1653(1497516462);
			func_1321(2016141805);
			func_1653(1010885152);
			func_1653(-502324015);
			break;
		case 1010885152:
			func_1653(1497516462);
			func_1653(2016141805);
			func_1321(1010885152);
			func_1653(-502324015);
			break;
		case -502324015:
			func_1653(1497516462);
			func_1653(2016141805);
			func_1653(1010885152);
			func_1321(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1653(-538889627);
			func_1653(-538880323);
			func_1653(-1056767524);
			func_1321(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1654();
			func_1321(iParam0);
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
			func_1655();
			func_1321(iParam0);
			break;
		case 2019386373:
			func_1653(-664252410);
			func_1653(2109952320);
			func_1321(2019386373);
			break;
		case -664252410:
			func_1653(2019386373);
			func_1653(2109952320);
			func_1321(-664252410);
			break;
		case 2109952320:
			func_1653(2019386373);
			func_1653(-664252410);
			func_1321(2109952320);
			break;
		case -1674179981:
			func_1653(-1835851517);
			func_1653(-1838352012);
			func_1321(-1674179981);
			break;
		case -1835851517:
			func_1653(-1674179981);
			func_1653(-1838352012);
			func_1321(-1835851517);
			break;
		case -1838352012:
			func_1653(-1674179981);
			func_1653(-1835851517);
			func_1321(-1838352012);
			break;
		case -1717960576:
			func_1653(210001842);
			func_1321(-1717960576);
			break;
		case 210001842:
			func_1653(-1717960576);
			func_1321(210001842);
			break;
		case -150493654:
			func_1653(-1271608261);
			func_1653(1846061697);
			func_1653(-1145519186);
			func_1321(-150493654);
			break;
		case -1271608261:
			func_1653(-150493654);
			func_1653(1846061697);
			func_1653(-1145519186);
			func_1321(-1271608261);
			break;
		case 1846061697:
			func_1653(-150493654);
			func_1653(-1271608261);
			func_1653(-1145519186);
			func_1321(1846061697);
			break;
		case -1145519186:
			func_1653(-150493654);
			func_1653(-1271608261);
			func_1653(1846061697);
			func_1321(-1145519186);
			break;
		case 1766284049:
			func_1653(280705402);
			func_1653(1926308480);
			func_1321(1766284049);
			break;
		case 280705402:
			func_1653(1766284049);
			func_1653(1926308480);
			func_1321(280705402);
			break;
		case 1926308480:
			func_1653(1766284049);
			func_1653(280705402);
			func_1321(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1653(439465264);
				func_1321(1609506757);
			}
			else
			{
				func_1653(1609506757);
				func_1653(439465264);
			}
			break;
		case 439465264:
			if (func_1320(1609506757))
			{
				if (bParam1)
				{
					func_1321(439465264);
				}
				else
				{
					func_1653(439465264);
				}
			}
			break;
		case 1822001510:
			func_1653(-1612662716);
			func_1321(1822001510);
			break;
		case -1612662716:
			func_1653(1822001510);
			func_1321(-1612662716);
			break;
		case 1306158345:
			func_1653(1952610440);
			func_1653(-223469678);
			func_1653(-404698347);
			func_1653(1517904467);
			func_1321(1306158345);
			break;
		case 1952610440:
			func_1653(1306158345);
			func_1653(-223469678);
			func_1653(-404698347);
			func_1653(1517904467);
			func_1321(1952610440);
			break;
		case -223469678:
			func_1653(1306158345);
			func_1653(1952610440);
			func_1653(-404698347);
			func_1653(1517904467);
			func_1321(-223469678);
			break;
		case -404698347:
			func_1653(1306158345);
			func_1653(1952610440);
			func_1653(-223469678);
			func_1653(1517904467);
			func_1321(-404698347);
			break;
		case 1517904467:
			func_1653(1306158345);
			func_1653(1952610440);
			func_1653(-223469678);
			func_1653(-404698347);
			func_1321(1517904467);
			break;
		case 1376646519:
			func_1653(931649776);
			func_1653(-434590080);
			func_1653(1743048395);
			func_1653(449774763);
			func_1321(1376646519);
			break;
		case 931649776:
			func_1653(1376646519);
			func_1653(-434590080);
			func_1653(1743048395);
			func_1653(449774763);
			func_1321(931649776);
			break;
		case -434590080:
			func_1653(1376646519);
			func_1653(931649776);
			func_1653(1743048395);
			func_1653(449774763);
			func_1321(-434590080);
			break;
		case 1743048395:
			func_1653(1376646519);
			func_1653(931649776);
			func_1653(-434590080);
			func_1653(449774763);
			func_1321(1743048395);
			break;
		case 449774763:
			func_1653(1376646519);
			func_1653(931649776);
			func_1653(-434590080);
			func_1653(1743048395);
			func_1321(449774763);
			break;
		case -1414537028:
			func_1653(38162571);
			func_1653(1350391819);
			func_1653(54073871);
			func_1321(-1414537028);
			break;
		case 38162571:
			func_1653(-1414537028);
			func_1653(1350391819);
			func_1653(54073871);
			func_1321(38162571);
			break;
		case 1350391819:
			func_1653(-1414537028);
			func_1653(38162571);
			func_1653(54073871);
			func_1321(1350391819);
			break;
		case 54073871:
			func_1653(-1414537028);
			func_1653(38162571);
			func_1653(1350391819);
			func_1321(54073871);
			break;
		case 198200492:
			func_1321(198200492);
			func_1653(-1124061431);
			func_1653(52706132);
			func_1653(-259123672);
			break;
		case -1124061431:
			func_1653(198200492);
			func_1321(-1124061431);
			func_1653(52706132);
			func_1653(-259123672);
			break;
		case 52706132:
			func_1653(198200492);
			func_1653(-1124061431);
			func_1321(52706132);
			func_1653(-259123672);
			break;
		case -259123672:
			func_1653(198200492);
			func_1653(-1124061431);
			func_1653(52706132);
			func_1321(-259123672);
			break;
		case -919512195:
			func_1321(-919512195);
			func_1653(-1925798111);
			func_1653(420709909);
			func_1653(1703426636);
			break;
		case -1925798111:
			func_1321(-1925798111);
			func_1653(-919512195);
			func_1653(420709909);
			func_1653(1703426636);
			break;
		case 420709909:
			func_1321(420709909);
			func_1653(-919512195);
			func_1653(-1925798111);
			func_1653(1703426636);
			break;
		case 1703426636:
			func_1321(1703426636);
			func_1653(-919512195);
			func_1653(-1925798111);
			func_1653(420709909);
			break;
		case -1223121209:
			func_1321(-1223121209);
			func_1653(630808005);
			break;
		case 630808005:
			func_1321(630808005);
			func_1653(-1223121209);
			break;
		case 1453909576:
			func_1321(1453909576);
			func_1653(1643531967);
			break;
		case 1643531967:
			func_1321(1643531967);
			func_1653(1453909576);
			break;
		case 0:
			func_1321(0);
			func_1653(473295046);
			func_1653(-1738165526);
			break;
		case 473295046:
			func_1321(473295046);
			func_1653(0);
			func_1653(-1738165526);
			break;
		case -1738165526:
			func_1321(-1738165526);
			func_1653(0);
			func_1653(473295046);
			break;
		case 932909855:
			func_1321(932909855);
			func_1653(2051822093);
			break;
		case 2051822093:
			func_1321(2051822093);
			func_1653(932909855);
			break;
		case 405586984:
			func_1321(405586984);
			func_1653(1509509592);
			func_1653(-959357075);
			func_1653(-1311865656);
			break;
		case 1509509592:
			func_1321(1509509592);
			func_1653(405586984);
			func_1653(-959357075);
			func_1653(-1311865656);
			break;
		case -959357075:
			func_1321(-959357075);
			func_1653(1509509592);
			func_1653(405586984);
			func_1653(-1311865656);
			break;
		case -1311865656:
			func_1321(-1311865656);
			func_1653(1509509592);
			func_1653(-959357075);
			func_1653(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1321(-524145696);
			}
			else
			{
				func_1653(-524145696);
			}
			func_1653(1626481264);
			func_1653(282809459);
			break;
		case 282809459:
			func_1321(282809459);
			func_1653(1626481264);
			func_1653(-524145696);
			break;
		case 1626481264:
			func_1321(1626481264);
			func_1653(-524145696);
			func_1653(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1321(885203519);
			}
			else
			{
				func_1653(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1321(-1080627546);
			}
			else
			{
				func_1653(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_1320(iParam0))
				{
					func_1321(iParam0);
				}
			}
			else if (func_1320(iParam0))
			{
				func_1653(iParam0);
			}
			break;
	}
}

bool func_1211(int iParam0)
{
	if (func_103(2, 0, 1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 12:
			return true;
	}
	return false;
}

bool func_1212(int iParam0)
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
			return true;
		default:
			break;
	}
	return false;
}

void func_1213(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1656(iParam0, iParam1, bParam2, fParam3);
}

void func_1214(int iParam0, bool bParam1, float fParam2)
{
	func_1657(iParam0, bParam1, fParam2);
}

int func_1215(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 9:
			iVar0 = -896916581;
			break;
		case 10:
			iVar0 = -1545648199;
			break;
		case 2:
			iVar0 = -34953917;
			break;
		case 13:
			iVar0 = -379634634;
			break;
		case 0:
			iVar0 = 1827444358;
			break;
		case 14:
			iVar0 = 288297518;
			break;
		case 8:
			iVar0 = 1004478670;
			break;
	}
	return iVar0;
}

bool func_1216()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_1212(iVar3))
	{
		return true;
	}
	return false;
}

bool func_1217()
{
	if (_0x071769bcb24379e5() && !func_1658(2, 0))
	{
		return true;
	}
	return false;
}

int func_1218(int iParam0, int iParam1)
{
	if (!func_831(iParam0))
	{
		return 820723243;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			return (*Global_40.f_11206[iParam0])[iVar0]->f_1;
		}
		iVar0++;
	}
	return 820723243;
}

int func_1219(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2120502580:
			return 5;
		case -1784359682:
			return 1;
		case -518918701:
			return 3;
		case 820723243:
			return 0;
		case 977356591:
			return 4;
		case 1461274691:
			return 6;
		case 1710500858:
			return 2;
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

bool func_1220(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
			switch (iParam1)
			{
				case 5:
					if (func_767(iParam0, 623901469, 1) || func_767(iParam0, -1751068532, 1))
					{
						return false;
					}
					break;
			}
			break;
	}
	return true;
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_1222(int iParam0)
{
	if ((Global_1935183->f_25 || !func_717(iParam0)) || iParam0 == 9)
	{
		return true;
	}
	return false;
}

void func_1223(int iParam0, int iParam1, bool bParam2)
{
	if (!func_831(iParam0))
	{
		return;
	}
	func_1659(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

int func_1224(int iParam0)
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

bool func_1225(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1226(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_1227(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_36() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
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
			*uParam1 = 69;
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
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
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
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
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
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
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
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_1228(int iParam0, int iParam1)
{
	Var0 = Global_1935183->f_30;
	Var0.f_1 = iParam1;
	Var0.f_3 = iParam0;
	if (func_1660(Var0, 10, &uVar5, 0))
	{
		_0x187d65f3aec5d679(iParam0, &uVar5);
		return true;
	}
	return false;
}

bool func_1229(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1230(int iParam0)
{
	if (!Global_1935183->f_26)
	{
		return false;
	}
	if (!func_1661(iParam0))
	{
		Global_1935183->f_26 = 0;
		return false;
	}
	return true;
}

int func_1231(int iParam0)
{
	return func_1662(iParam0);
}

bool func_1232(var uParam0)
{
	return func_1229(*uParam0, 2);
}

bool func_1233(var uParam0)
{
	if (func_1252(&(uParam0->f_29), 62))
	{
		switch (func_1663())
		{
			case 1:
				if (!func_1252(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1252(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1252(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1252(&(uParam0->f_29), 32))
				{
					if (func_1252(&(uParam0->f_29), 2))
					{
						if (func_625(func_480()) < 5)
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

bool func_1234()
{
	return (func_358(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

bool func_1235(int iParam0, int iParam1)
{
	return (func_1246(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

int func_1236(int iParam0)
{
	if (!func_740(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_30;
}

bool func_1237(int iParam0, int iParam1)
{
	if (!func_1118(iParam0))
	{
		return false;
	}
	iVar0 = func_1664(iParam0);
	return (*iParam1 && iVar0) != 0;
}

int func_1238(int iParam0)
{
	if (!func_740(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

bool func_1239(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1122(iParam0))
		{
			return false;
		}
	}
	func_1665(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_1240(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_645(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1241(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_1242(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_36() != -1)
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

bool func_1243(int iParam0)
{
	if (!is_itemset_valid((*Global_1835011)[iParam0]->f_59))
	{
		return false;
	}
	iVar2 = get_itemset_size((*Global_1835011)[iParam0]->f_59);
	if (iVar2 <= 0)
	{
		return false;
	}
	iVar3 = iVar2;
	if (iVar3 > 3)
	{
		iVar3 = 3;
	}
	if ((*Global_1835011)[iParam0]->f_62 >= iVar2)
	{
		(*Global_1835011)[iParam0]->f_62 = 0;
	}
	while (iVar1 <= iVar3)
	{
		iVar0 = (*Global_1835011)[iParam0]->f_62;
		iVar8 = get_indexed_item_in_itemset(iVar0, (*Global_1835011)[iParam0]->f_59);
		iVar9 = iVar8;
		if (does_entity_exist(iVar9))
		{
			if (is_entity_a_ped(iVar9))
			{
				iVar10 = iVar9;
				iVar11 = _0xad17a18215dd23d6(iVar10, 1, 0);
				if (iVar11 > 0 && iVar11 <= 2000)
				{
					iVar12 = _0x796eecff0c6d39be(iVar10, 1, 0);
					if (iVar12 != -587661767 || Global_1935630->f_44 != 2055893578)
					{
						return true;
					}
				}
				if (is_projectile_type_within_distance(get_entity_coords(iVar9, true, false), -1504859554, 10f, true) || is_projectile_type_within_distance(get_entity_coords(iVar9, true, false), 1885857703, 10f, true))
				{
					return true;
				}
				if (is_ped_being_stealth_killed(iVar10))
				{
					return true;
				}
				if (get_melee_target_for_ped(Global_35) == iVar10)
				{
					return true;
				}
			}
		}
		iVar1++;
		(*Global_1835011)[iParam0]->f_62++;
		if ((*Global_1835011)[iParam0]->f_62 >= iVar2)
		{
			(*Global_1835011)[iParam0]->f_62 = 0;
		}
	}
	return false;
}

bool func_1244(int iParam0, int iParam1)
{
	if (func_1666(iParam0, iParam1))
	{
		return true;
	}
	if (!is_itemset_valid(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iParam0))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, iParam0));
		if (does_entity_exist(iVar1) && is_entity_a_vehicle(iVar1))
		{
			iVar2 = _0xe578c8ae173719b3(iVar1);
			if (has_entity_been_damaged_by_entity(iVar2, Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1245(int iParam0, bool bParam1, int iParam2)
{
	if (!func_304(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_867(iParam0) && !func_328(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_1667(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_867(iParam0))
	{
		iParam2 = -1;
	}
	if (func_788(iParam0) == 3 || (func_788(iParam0) == 1 && _0x01f4d242765c6b24(func_1667(iParam0))))
	{
		func_1668(func_1296(iParam0), func_1667(iParam0), iParam2);
		if ((!func_304(Global_1572864->f_8) && !func_103(0, 1, 0)) && !func_358(&Global_1935630, 32768))
		{
			iVar0 = func_1669(iParam0);
			if (iVar0 != -1)
			{
				func_1670(0);
			}
			else if (func_1296(iParam0) == 8)
			{
				iVar0 = func_1671();
				if (iVar0 != -1)
				{
					func_1670(0);
				}
			}
		}
	}
	func_1672(iParam0, 0);
	if (func_1170(0) == iParam0)
	{
		func_1673(1);
		func_1674(0);
		func_1675(1);
	}
	func_1676(iParam0, 1);
	func_1677(iParam0);
}

bool func_1246(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_1247(int iParam0)
{
	func_1678(1);
}

void func_1248(int iParam0, int iParam1)
{
	if (!func_1246(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

bool func_1249()
{
	return func_380();
}

bool func_1250(var uParam0, int iParam1)
{
	return (uParam0->f_69 && iParam1) != 0;
}

void func_1251(var uParam0, int iParam1)
{
	uParam0->f_69 = (uParam0->f_69 || iParam1);
}

bool func_1252(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_1253(int iParam0)
{
	if (func_36() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_486((*Global_1347702)[21]->f_15, 1);
		case 44:
			return func_486((*Global_1347702)[83]->f_15, 1);
	}
	return true;
}

Vector3 func_1254(int iParam0)
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

int func_1255(int iParam0)
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

Vector3 func_1256(int iParam0)
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

float func_1257(int iParam0)
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

Vector3 func_1258(int iParam0)
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

bool func_1259(int iParam0)
{
	return func_759(iParam0);
}

void func_1260(int iParam0, int iParam1)
{
	if (!func_1246(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_1261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1262(int iParam0)
{
	if (!func_1679(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_1680(iParam0))
		{
			if (vdist(Global_36, func_1681(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_1681(iParam0), false) <= func_1682();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_1682();
	}
	return func_1147();
}

bool func_1263(int iParam0, bool bParam1, int iParam2)
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

void func_1264(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_304(iParam0))
	{
		return;
	}
	switch (func_1296(iParam0))
	{
		case 1:
			iVar0 = func_375(iParam0);
			if (func_1683(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_758(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_758(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
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
				if (!func_1259(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_749((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_375(iParam0);
			if (func_1684(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_1331(iVar1))
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
				iVar2 = func_1331(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_1334(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

void func_1265(int iParam0, var uParam1, bool bParam2)
{
	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_871(iParam0, 1024))
	{
		return;
	}
	func_373(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

bool func_1266(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

float func_1267(int iParam0)
{
	return (func_1257(iParam0) / 2f);
}

bool func_1268(int iParam0, int iParam1, var uParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			iVar0 = 0;
			while (iVar0 < _0x635423d55ca84fc8(uParam2))
			{
				if (iVar1 == 0)
				{
					if (func_1685(iParam0, iParam1, iVar0))
					{
						iVar1 = 1;
					}
				}
				iVar0++;
			}
		}
	}
	return iVar1;
}

bool func_1269(var uParam0, float fParam1)
{
	if (!func_735(uParam0))
	{
		return false;
	}
	if (func_739(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_1270(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_1271(int iParam0, int iParam1)
{
	if (!func_831(iParam0))
	{
		return false;
	}
	func_1659(iParam1, &iVar0, &iVar1);
	return is_bit_set(Global_1935183->f_73[iParam0][iVar0], iVar1);
}

bool func_1272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1273(int iParam0, int iParam1, int iParam2)
{
	if (&(*Global_1425371)[iParam0]->f_10[iParam1] == 0)
	{
		return false;
	}
	if (&(*Global_1425371)[iParam0]->f_10[iParam1]->f_6[iParam2] == -1)
	{
		return false;
	}
	return true;
}

int func_1274(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_1686(iVar0))
		{
			fVar3 = func_1621(iVar0, vParam0);
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

bool func_1275(int iParam0)
{
	if (Global_1430221->f_2)
	{
		return false;
	}
	switch (iParam0)
	{
		case -1:
		case 5:
			return false;
		default:
			break;
	}
	return true;
}

void func_1276(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = -1;
	iVar2 = -1;
	fVar3 = 99999f;
	iVar5 = 0;
	while (iVar5 < 24)
	{
		if ((func_185((*Global_1425371)[iParam0]->f_10[iVar5]->f_1) || &(*Global_1425371)[iParam0]->f_10[iVar5] == 0) || !(*Global_1425371)[iParam0]->f_10[iVar5]->f_5)
		{
		}
		else
		{
			fVar4 = func_768(iVar0, (*Global_1425371)[iParam0]->f_10[iVar5]->f_1, 0);
			if (fVar4 < fVar3)
			{
				fVar3 = fVar4;
				iVar1 = iVar5;
				iVar2 = &(*Global_1425371)[iParam0]->f_10[iVar5];
			}
		}
		iVar5++;
	}
	if (iVar1 == -1 || iVar2 == 0)
	{
		*iParam2 = -1;
		*iParam1 = -1;
		return;
	}
	_0xd9bf3ed8efb67ea3(&((*Global_1425371)[iParam0]->f_10[iVar1]), (*Global_1425371)[iParam0]->f_10[iVar1]->f_1, iParam1);
	*iParam2 = _0x6c87f49bfa181db5((*Global_1425371)[iParam0]->f_10[iVar1]->f_1);
}

char* func_1277()
{
	return "0835_S_M_M_GenConductor_01_WHITE_01";
	return "0835_S_M_M_GenConductor_01_WHITE_02";
	return "0835_S_M_M_GenConductor_01_WHITE_03";
}

char* func_1278(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "CALL_OUT_NEUTRAL";
		case 4:
			return "TROLLEY_ARRIVAL_WAREHOUSE_DISTRICT";
		case 8:
			return "TROLLEY_ARRIVAL_COMMERICAL_DISTRICT";
		case 16:
			return "TROLLEY_ARRIVAL_MARKET_DISTRICT";
		case 32:
			return "TROLLEY_ARRIVAL_OLD_QUARTER";
		case 64:
			return "TROLLEY_ARRIVAL_MANSION_DISTRICT";
		case 128:
			return "TROLLEY_ARRIVAL_ST_FRANCES";
		case 256:
			return "TROLLEY_NEXT_WAREHOUSE_DISTRICT";
		case 512:
			return "TROLLEY_NEXT_COMMERICAL_DISTRICT";
		case 1024:
			return "TROLLEY_NEXT_MARKET_DISTRICT";
		case 2048:
			return "TROLLEY_NEXT_OLD_QUARTER";
		case 4096:
			return "TROLLEY_NEXT_MANSION_DISTRICT";
		case 8192:
			return "TROLLEY_NEXT_ST_FRANCES";
		default:
			break;
	}
	return "";
}

void func_1279(int iParam0, char* sParam1, int iParam2)
{
	if (!is_string_null_or_empty(sParam1))
	{
		if (does_entity_exist(iParam0))
		{
			func_1120(iParam0, sParam1, -1646070270, 0, 1, iParam2, 0, 1);
		}
	}
}

char* func_1280(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "LAST_CALL";
		case 4:
			return "TRAIN_ARRIVAL_ANNESBURG";
		case 8:
			return "TRAIN_ARRIVAL_EMERALD_RANCH";
		case 16:
			return "TRAIN_ARRIVAL_RIGGS_STATION";
		case 32:
			return "TRAIN_ARRIVAL_RHODES_STATION";
		case 64:
			return "TRAIN_ARRIVAL_WALLACE_STATION";
		case 128:
			return "TRAIN_ARRIVAL_VALENTINE";
		case 256:
			return "TRAIN_ARRIVAL_VAN_HORN";
		case 512:
			return "TRAIN_ARRIVAL_SAINT_DENIS";
		case 1024:
			return "TRAIN_ARRIVAL_ARMADILLO";
		case 2048:
			return "TRAIN_ARRIVAL_MACFARLANES_RANCH";
		case 4096:
			return "TRAIN_ARRIVAL_BENEDICT_POINT";
		case 8192:
			return "TRAIN_ARRIVAL_MERCER_STATION";
		case 16384:
			return "TRAIN_ARRIVAL_FLATNECK_STATION";
		case 32768:
			return "TRAIN_NEXT_ANNESBURG";
		case 65536:
			return "TRAIN_NEXT_EMERALD_RANCH";
		case 131072:
			return "TRAIN_NEXT_RIGGS_STATION";
		case 262144:
			return "TRAIN_NEXT_RHODES_STATION";
		case 524288:
			return "TRAIN_NEXT_WALLACE_STATION";
		case 1048576:
			return "TRAIN_NEXT_VALENTINE";
		case 2097152:
			return "TRAIN_NEXT_VAN_HORN";
		case 4194304:
			return "TRAIN_NEXT_SAINT_DENIS";
		case 8388608:
			return "TRAIN_NEXT_ARMADILLO";
		case 16777216:
			return "TRAIN_NEXT_MACFARLANES_RANCH";
		case 33554432:
			return "TRAIN_NEXT_BENEDICT_POINT";
		case 67108864:
			return "TRAIN_NEXT_MERCER_STATION";
		case 134217728:
			return "TRAIN_NEXT_FLATNECK_STATION";
		default:
			break;
	}
	return "";
}

bool func_1281(int iParam0, var uParam1)
{
	if (!func_1687(iParam0))
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

int func_1282(var uParam0, int iParam1, vector3 vParam2)
{
	Var0 = uParam0;
	Var0.f_2 = -608279732;
	Var0.f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	while (_datafile_get_num_children(Var0, Var0.f_1) > iVar5)
	{
		Var0.f_3 = iVar5;
		Var0.f_2 = -870751591;
		_datafile_get_vector(&vVar6, &Var0);
		if (func_443(vVar6, vParam2) < 4f)
		{
			Var0.f_2 = -853103500;
			_datafile_get_hash(&uVar9, &Var0);
			return uVar9;
		}
		iVar5++;
	}
	return 0;
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1039775954;
		case 1:
			return -580420112;
		case 2:
			return -108471572;
		case 3:
			return 197361505;
		case 8:
			return -1400482829;
		case 9:
			return 1953056159;
		case 10:
			return -2110594766;
		case 11:
			return 1754095026;
		case 12:
			return 978078073;
		case 4:
			return -1313449433;
		default:
			break;
	}
	return 0;
}

Vector3 func_1284(int iParam0)
{
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			vVar0 = { 2752.25f, -1437.35f, 45.0192f };
			break;
		case 1:
			vVar0 = { -136.92f, 659.5001f, 112.7411f };
			break;
		case 2:
			vVar0 = { -1314.14f, -239.042f, 100.096f };
			break;
		case 3:
			vVar0 = { 2987.239f, 1344.341f, 43.003f };
			break;
		case 8:
			vVar0 = { 2608.538f, -1203.883f, 52.3572f };
			break;
		case 9:
			vVar0 = { 2797.85f, -1184.51f, 46.2297f };
			break;
		case 10:
			vVar0 = { 2760.354f, -1369.4f, 45.4277f };
			break;
		case 11:
			vVar0 = { 2496.795f, -1190.73f, 48.3086f };
			break;
		case 12:
			vVar0 = { 2496.795f, -1190.73f, 48.3086f };
			break;
		case 6:
			vVar0 = { 2925.35f, 1328.81f, 43.1345f };
			break;
		case 7:
			vVar0 = { 2942.74f, 1380.84f, 43.0509f };
			break;
		case 5:
			vVar0 = { 2593.8f, -1477.2f, 45.3f };
			break;
		case 4:
			vVar0 = { -5242.14f, -35010.72f, -22.0345f };
			break;
	}
	return vVar0;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 7:
		case 8:
		case 9:
		case 10:
		case 12:
			return 1;
	}
	return 0;
}

int func_1286(int iParam0)
{
	return 0;
}

int func_1287(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	}
	return 0;
}

int func_1288(int iParam0)
{
	return 1;
}

float func_1289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 60f;
		default:
			break;
	}
	return 60f;
}

float func_1290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 90f;
		default:
			break;
	}
	return 60f;
}

void func_1291(int iParam0)
{
	if (!func_1272(iParam0))
	{
		return;
	}
	func_1281(12, &Var6);
	Var6.f_2 = 1830263756;
	Var6.f_3 = func_1283(iParam0);
	(*Global_1425371)[iParam0]->f_9 = 0;
	if (!_datafile_get_data_node_index(&(Var6.f_1), &Var6))
	{
		return;
	}
	while (_datafile_get_num_children(Var6, Var6.f_1) > iVar11)
	{
		Var6.f_3 = iVar11;
		Var6.f_2 = 530786772;
		_datafile_get_hash(&uVar0, &Var6);
		Var6.f_2 = -1642930494;
		_datafile_get_vector(&vVar1, &Var6);
		Var6.f_2 = -959168135;
		_datafile_get_bool(&uVar4, &Var6);
		Var6.f_2 = 1804008182;
		_datafile_get_bool(&uVar5, &Var6);
		func_1688(Var6, iVar11, iParam0, uVar0, vVar1, uVar4, uVar5);
		iVar11++;
	}
}

bool func_1292(int iParam0)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	if (!func_319(iParam0, 0))
	{
		return false;
	}
	if (func_812((*Global_1347702)[iParam0]->f_13, 64))
	{
		return true;
	}
	return false;
}

bool func_1293(int iParam0, int iParam1)
{
	if (!func_831(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1294(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_1118(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1689(&iVar0, func_1664(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_792(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1690(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_823()))
			{
				func_792(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_792(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

bool func_1295(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_575((*Global_1347702)[iParam0]->f_15) != 0)
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

int func_1296(int iParam0)
{
	if (!func_304(iParam0))
	{
		return 0;
	}
	return func_1691(func_873(iParam0));
}

int func_1297(int iParam0)
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

bool func_1298(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

int func_1299(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_1300(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_1301(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_1692())
	{
		iVar2 = func_1692();
	}
	iVar5 = func_1693(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_873(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_873(iVar6) == 0)
			{
				return func_1694(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_873(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_873(iVar6) == 0)
			{
				return func_1694(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_1694(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_1302(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_1303(int iParam0)
{
	return (Global_40.f_12019.f_26 && iParam0) != 0;
}

int func_1304()
{
	return Global_40.f_11095.f_35;
}

bool func_1305()
{
	if (vdist(Global_36, (*Global_1347702)[112]->f_24) < 300f)
	{
		return false;
	}
	else if (vdist(Global_36, (*Global_1347702)[113]->f_24) < 300f)
	{
		return false;
	}
	iVar0 = func_1695((*Global_1347702)[112]->f_15);
	func_583(&iVar0, 0, 0, 4, 0, 0, 0, 0);
	if (!func_630(func_480(), iVar0, 1))
	{
		return false;
	}
	iVar1 = func_1696(1);
	if (iVar1 > 1)
	{
		return false;
	}
	return true;
}

var func_1306(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1697(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1698(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1697(sVar0, iParam1, 0, 0, 1, 1);
}

void func_1307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1308(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (func_366())
	{
		func_1317(iParam0, 1);
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
		if (!func_359(32768))
		{
			if (chal_is_goal_active(-816321659, -1044347982))
			{
				chal_add_goal_progress_int_by_score_id(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_366())
		{
			(*Global_1347702)[iParam0]->f_35 = 104;
			(*Global_1347702)[104]->f_48 = (*Global_1347702)[iParam0]->f_15;
		}
	}
	func_1699(iParam0, 0, iParam3);
	if (func_327((*Global_1347702)[iParam0]->f_35))
	{
		func_1700((*Global_1347702)[iParam0]->f_35);
		if (iParam1 == 1)
		{
			func_321((*Global_1347702)[iParam0]->f_35, 0);
			if (func_1701(iParam0))
			{
				(*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_43 = (*Global_1347702)[iParam0]->f_43;
			}
		}
	}
	else
	{
		func_1702();
	}
	if (!func_376((*Global_1347702)[iParam0]->f_12, 1) && !func_376((*Global_1347702)[iParam0]->f_12, 33554432))
	{
		if (func_376((*Global_1347702)[iParam0]->f_12, 262144))
		{
			if (bParam5)
			{
				func_1703(iParam0);
			}
			bParam5 = false;
			cVar0 = func_1704((*Global_1347702)[iParam0]->f_15);
			if (!is_string_null_or_empty(&cVar0))
			{
				_0xe824ce7d13fcb300(get_hash_key(&cVar0), 2);
			}
			func_813(&((*Global_1347702)[iParam0]->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_376((*Global_1347702)[iParam0]->f_12, 4);
	}
	if (!func_359(32768))
	{
		func_1705((*Global_1347702)[iParam0]->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_1706((*Global_1347702)[iParam0]->f_15, bParam6);
	}
	func_1319(iParam0);
}

void func_1309(int iParam0)
{
	if (func_812((*Global_1347702)[iParam0]->f_13, 2))
	{
		func_793(&((*Global_1347702)[iParam0]->f_13), 2);
	}
}

void func_1310(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_793(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_820(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_327(&(Global_40.f_450[iVar1])))
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

bool func_1311(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_1312(int iParam0, bool bParam1)
{
	if (!func_1311(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_1707(iParam0), func_1708(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_1707(iParam0), func_1708(iParam0), 2, "");
		func_1317(iParam0, 16);
	}
	else
	{
		if (func_1311(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_1707(iParam0), func_1708(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_1707(iParam0), func_1708(iParam0), 0, "");
		}
		func_1709(iParam0, 16);
	}
}

void func_1313(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_20 <= 0f)
	{
		return;
	}
	MemCopy(&cVar0, {(*Global_1347702)[iParam0]->f_3}, 8);
	StringConCat(&cVar0, ".VolAmbScriptRestrict", 64);
	if (iParam0 == 91)
	{
		if (!_does_volume_exist((*Global_1347702)[iParam0]->f_41))
		{
			(*Global_1347702)[iParam0]->f_41 = _create_volume_box_with_custom_name(1526.396f, -1091.008f, -6.724f, 0f, 0f, 25f, 138.807f, 280.237f, 260.181f, &cVar0);
			func_1710((*Global_1347702)[iParam0]->f_41, &cVar0, 1, 0, 0, 0, -1f);
			func_1711((*Global_1347702)[iParam0]->f_41);
			_0xc1799fafd2fdf52b((*Global_1347702)[iParam0]->f_41, 0, 0, 0);
		}
	}
	else if (iParam0 == 129)
	{
		if (!_does_volume_exist((*Global_1347702)[iParam0]->f_41))
		{
			(*Global_1347702)[iParam0]->f_41 = _create_volume_cylinder_with_custom_name(func_784(iParam0), 0f, 0f, 0f, (*Global_1347702)[iParam0]->f_20, (*Global_1347702)[iParam0]->f_20, (*Global_1347702)[iParam0]->f_20, &cVar0);
			func_1710((*Global_1347702)[iParam0]->f_41, &cVar0, 1, 0, 0, 0, -1f);
			func_1711((*Global_1347702)[iParam0]->f_41);
			_0xc1799fafd2fdf52b((*Global_1347702)[iParam0]->f_41, 0, 0, 0);
		}
	}
	else if (!_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		(*Global_1347702)[iParam0]->f_41 = _create_volume_cylinder_with_custom_name(func_784(iParam0), 0f, 0f, 0f, (*Global_1347702)[iParam0]->f_20, (*Global_1347702)[iParam0]->f_20, (*Global_1347702)[iParam0]->f_20, &cVar0);
		func_1710((*Global_1347702)[iParam0]->f_41, &cVar0, 1, 0, 0, 0, -1f);
		func_1711((*Global_1347702)[iParam0]->f_41);
	}
}

int func_1314(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 128 != 0)
	{
		return 1;
	}
	(*Global_1347702)[iParam0]->f_45 = func_1594((*Global_1347702)[iParam0]->f_24, 1);
	func_792(&((*Global_1347702)[iParam0]->f_13), 128);
	return 1;
}

void func_1315()
{
	iVar0 = 4;
	if ((*Global_1347702)[iVar0]->f_12 & 16 != 0)
	{
		if (func_809((*Global_1347702)[iVar0]->f_15) == 1)
		{
			func_813(&((*Global_1347702)[iVar0]->f_12), 16);
		}
	}
}

void func_1316()
{
	iVar0 = 22;
	if ((*Global_1347702)[iVar0]->f_36 == -1822497728)
	{
		if (func_572(622))
		{
			(*Global_1347702)[iVar0]->f_36 = 332378857;
			func_792(&((*Global_1347702)[iVar0]->f_13), 1);
			func_821(iVar0, 0);
		}
	}
}

void func_1317(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_1318(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_1311(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_1707(iParam0), func_1708(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1311(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_1707(iParam0), func_1708(iParam0), 1, "");
		}
		func_1317(iParam0, 8);
	}
	else
	{
		if (func_1311(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_1707(iParam0), func_1708(iParam0), 0, "");
		}
		func_1709(iParam0, 8);
	}
}

void func_1319(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_1707(iParam0);
	if (iVar0 == 1)
	{
		if (_uilog_is_entry_registered(iVar0, func_1708(iParam0)))
		{
			_uilog_mark_mission_completed(func_1708(iParam0));
		}
		func_1709(iParam0, 4);
		func_1709(iParam0, 8);
		return;
	}
	else if (func_376((*Global_1347702)[iParam0]->f_12, 4))
	{
		func_1712(Global_1347702[iParam0]);
		func_1713(iParam0);
		if (_uilog_is_entry_registered(iVar0, func_1708(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_1698(0, &cVar1, 0, 0, -1, -1);
			func_1714(iParam0, &cVar1, cVar4, -1082130432);
			_uilog_set_entry_icon_texture(iVar0, func_1708(iParam0), get_hash_key("TOAST_MEDAL_COLLECTABLE"), get_hash_key("hud_toasts"));
		}
		func_1709(iParam0, 4);
		func_1709(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_1311(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_1311(iParam0, 16))
	{
		bVar6 = true;
	}
	func_1712(Global_1347702[iParam0]);
	func_1713(iParam0);
	MemCopy(&cVar1, {(*Global_1347702)[iParam0]->f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (func_1311(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (func_1311(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (does_text_label_exist(&cVar1))
	{
		cVar4 = func_1698(0, &cVar1, 0, 0, -1, -1);
		func_1714(iParam0, &cVar1, cVar4, -1082130432);
		if (func_1311(iParam0, 16) || bVar6)
		{
			func_1312(iParam0, 1);
		}
		if (func_1311(iParam0, 8) || bVar5)
		{
			func_1318(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_1698(0, &cVar1, 0, 0, -1, -1);
		func_1714(iParam0, &cVar1, cVar4, -1082130432);
		func_1318(iParam0, 1);
		if (func_1311(iParam0, 16) || bVar6)
		{
			func_1312(iParam0, 1);
		}
	}
}

bool func_1320(int iParam0)
{
	iVar0 = func_1715(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_1321(int iParam0)
{
	iVar0 = func_1715(iParam0, 1);
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

void func_1322()
{
	iVar0 = 43;
	if ((*Global_1347702)[iVar0]->f_36 == -1822497728)
	{
		if (func_1480(761240010, 1, 0))
		{
			(*Global_1347702)[iVar0]->f_36 = 2107943776;
			func_792(&((*Global_1347702)[iVar0]->f_13), 1);
			func_821(iVar0, 0);
		}
	}
}

void func_1323()
{
	iVar0 = 96;
	if ((*Global_1347702)[iVar0]->f_14 & 2 != 0)
	{
		return;
	}
	else if (is_thread_active((*Global_1347702)[iVar0]->f_42, false))
	{
		return;
	}
	iVar1 = 1026;
	if (func_1084(iVar1))
	{
		if ((*Global_1347702)[iVar0]->f_13 & 65536 != 0)
		{
			func_793(&((*Global_1347702)[iVar0]->f_13), 65536);
			func_821(iVar0, 0);
		}
	}
	else if ((*Global_1347702)[iVar0]->f_13 & 65536 == 0)
	{
		func_792(&((*Global_1347702)[iVar0]->f_13), 65536);
		func_821(iVar0, 0);
	}
}

void func_1324(bool bParam0)
{
	iVar0 = 97;
	if (func_809((*Global_1347702)[iVar0]->f_15) == 0)
	{
		if (func_572(597))
		{
		}
		else if (!func_486((*Global_1835011)[13]->f_1, 1))
		{
			return;
		}
		else if (!func_486((*Global_1835011)[6]->f_1, 1))
		{
			return;
		}
		else if (!func_486((*Global_1347702)[63]->f_15, 1))
		{
			return;
		}
		else if (func_1696(1) > 2)
		{
			return;
		}
		func_813(&((*Global_1347702)[iVar0]->f_12), 16);
		func_810((*Global_1347702)[iVar0]->f_15, 1);
		if (bParam0)
		{
			func_806(iVar0, func_784(iVar0), 0, 0);
		}
	}
	else
	{
		if ((*Global_1347702)[iVar0]->f_12 & 16 != 0)
		{
			func_813(&((*Global_1347702)[iVar0]->f_12), 16);
		}
		if (bParam0)
		{
			func_806(iVar0, func_784(iVar0), 0, 0);
		}
	}
}

void func_1325(bool bParam0)
{
	iVar0 = 112;
	if (func_809((*Global_1347702)[iVar0]->f_15) == 0)
	{
		if (func_572(603))
		{
		}
		else if (func_1696(1) > 1)
		{
			return;
		}
		func_813(&((*Global_1347702)[iVar0]->f_12), 16);
		func_810((*Global_1347702)[iVar0]->f_15, 1);
		if (bParam0)
		{
			func_806(iVar0, func_784(iVar0), 0, 0);
		}
	}
	else
	{
		if ((*Global_1347702)[iVar0]->f_12 & 16 != 0)
		{
			func_813(&((*Global_1347702)[iVar0]->f_12), 16);
		}
		if (bParam0)
		{
			func_806(iVar0, func_784(iVar0), 0, 0);
		}
	}
}

void func_1326(int iParam0)
{
	if (func_1716(179) || func_1716(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_1247(1);
			}
		}
	}
	if (func_101(179))
	{
		func_1717(179);
	}
	if (func_101(180))
	{
		func_1717(180);
	}
}

int func_1327(int iParam0)
{
	iVar0 = func_1695((*Global_1347702)[iParam0]->f_48);
	func_583(&iVar0, 0, 0, (*Global_1347702)[iParam0]->f_47, 0, 0, 0, 0);
	return iVar0;
}

int func_1328(int iParam0)
{
	iVar0 = func_1296((*Global_1347702)[iParam0]->f_48);
	if (iVar0 != 8)
	{
		return 0;
	}
	iVar1 = func_375((*Global_1347702)[iParam0]->f_48);
	if (!func_327(iVar1))
	{
		return 0;
	}
	MemCopy(&cVar2, {(*Global_1347702)[iVar1]->f_1}, 3);
	StringConCat(&cVar2, "_obj2", 24);
	if (does_text_label_exist(&cVar2) && _uilog_is_entry_registered(func_1707(iVar1), func_1708(iVar1)))
	{
		cVar5 = func_1698(0, &cVar2, 0, 0, -1, -1);
		func_1714(iVar1, &cVar2, cVar5, -1082130432);
		func_1317(iVar1, 32);
		func_1318(iVar1, 0);
		return 1;
	}
	return 0;
}

void func_1329(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1330(int iParam0, int iParam1)
{
	iVar0 = func_1718(iParam1, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return false;
	}
	iVar1 = func_1719(iParam0, 1);
	if (iVar1 < 0 || iVar1 > 31)
	{
		return false;
	}
	return is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1);
}

int func_1331(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_327(iParam0))
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

bool func_1332(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_327(iParam0))
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

void func_1333(int iParam0)
{
	switch (func_36())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_1334(int iParam0)
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

bool func_1335(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

bool func_1336(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_1337(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1122(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_1338(int iParam0)
{
	if (!func_1118(iParam0))
	{
		return false;
	}
	if (!func_1720(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

bool func_1339(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, float fParam5)
{
	if (!bParam4)
	{
		if (is_screen_faded_out() && !func_1721())
		{
			return true;
		}
	}
	if (!does_entity_exist(iParam0))
	{
		return true;
	}
	if (fParam1 == -1f)
	{
		fParam1 = vdist2(Global_36, get_entity_coords(iParam0, true, false));
		fParam2 = (fParam2 * fParam2);
		if (fParam5 != -1f)
		{
			fParam5 = (fParam5 * fParam5);
		}
	}
	if (fParam1 < fParam2)
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
		return iParam3;
	}
	else if (is_entity_occluded(iParam0))
	{
		return true;
	}
	else if (fParam5 != -1f && fParam1 >= fParam5)
	{
		if (_0x164cecc59e70df86(iParam0, 75f))
		{
			return false;
		}
	}
	else if (is_tracked_ped_visible(iParam0))
	{
		return false;
	}
	return true;
}

int func_1340(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

void func_1341(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1342(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1343(var uParam0)
{
	*uParam0 = 0;
}

bool func_1344(int iParam0)
{
	return func_1018(iParam0) == 0;
}

void func_1345(int iParam0, bool bParam1)
{
	if (!func_304(iParam0))
	{
		return;
	}
	if (!func_1344(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1667(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_1667(iParam0)))
		{
			_0xca41e86545413b5b(func_1296(iParam0), func_375(iParam0), func_1722(iParam0), func_1667(iParam0), Global_36);
		}
	}
	func_1672(iParam0, 1);
	bParam1 = bParam1;
}

void func_1346(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_873(Global_1898330[iParam0]);
		func_1723((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_1347(int iParam0)
{
	iVar0 = func_1724(iParam0, 1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = func_1724(func_1725(iVar3), 1);
		iVar2 = func_1724(func_1726(iVar3), 1);
		if (iVar0 >= iVar1)
		{
			if (iVar0 <= iVar2)
			{
				return iVar3;
			}
		}
		iVar3++;
	}
	return 0;
}

bool func_1348(int iParam0)
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
			return false;
		default:
			break;
	}
	return false;
}

void func_1349(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_1727((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_1350(int iParam0)
{
	if (func_817(iParam0, &iVar1, &iVar0))
	{
		if (func_767(iVar1, iVar0, 1))
		{
			func_719(iVar1, iVar0);
		}
	}
}

void func_1351(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_1352(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1353()
{
	return Global_1894899 & 4 != 0;
}

bool func_1354()
{
	return func_1553(512);
}

bool func_1355(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1356(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

bool func_1357(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_1358(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_1359(int iParam0)
{
	if (func_1142(iParam0) != 5)
	{
		return false;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1360()
{
	iVar0 = func_156();
	switch (iVar0)
	{
		case 3:
			return true;
		case 51:
			return true;
		case 41:
			return true;
		case 108:
			return true;
		case 44:
			return true;
		case 84:
			return true;
		case 103:
			return true;
		case 53:
			return true;
		case 73:
			return true;
		case 18:
			return true;
		case 0:
			return true;
		case 106:
			return true;
		case 47:
			return true;
		case 63:
			return true;
		case 24:
			return true;
		case 46:
			return true;
		case 107:
			return true;
		case 80:
			return true;
		case 85:
			return true;
		case 7:
			return true;
		case 82:
			return true;
		case 110:
			return true;
		case 120:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1361(int iParam0)
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

bool func_1362()
{
	iVar0 = func_156();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return false;
	}
	else
	{
		iVar1 = _create_volume_cylinder(vVar2, vVar5, vVar8);
		if (func_703(Global_35, iVar1, 1, 0))
		{
			func_611(iVar1);
			return true;
		}
		else
		{
			func_611(iVar1);
			return false;
		}
	}
	return false;
}

bool func_1363(vector3 vParam0, float fParam3)
{
	if (func_1728(vParam0, fParam3))
	{
		return true;
	}
	if (func_1729(vParam0, fParam3))
	{
		return true;
	}
	return false;
}

void func_1364(var uParam0, var uParam1)
{
	if (func_36() != -1)
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

struct<2> func_1365(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_1366(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_1367(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_1368(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

int func_1369(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!Global_1935630->f_12)
			{
				iVar6 = get_random_int_in_range(0, 5);
			}
			break;
		case 19:
			if (!Global_1935630->f_12)
			{
				vVar9 = { func_1377(iParam0, iParam1, 0) };
				fVar0[0] = func_248(Global_35, vVar9, 1);
				vVar9 = { func_1377(iParam0, iParam1, 1) };
				fVar0[1] = func_248(Global_35, vVar9, 1);
				if (&fVar0[0] < &fVar0[1])
				{
					iVar6 = 0;
				}
				else
				{
					iVar6 = 1;
				}
			}
			break;
		case 2:
			if (!Global_1935630->f_12)
			{
				vVar9 = { func_1377(iParam0, iParam1, 0) };
				fVar0[0] = func_248(Global_35, vVar9, 1);
				vVar9 = { func_1377(iParam0, iParam1, 1) };
				fVar0[1] = func_248(Global_35, vVar9, 1);
				vVar9 = { func_1377(iParam0, iParam1, 2) };
				fVar0[2] = func_248(Global_35, vVar9, 1);
				vVar9 = { func_1377(iParam0, iParam1, 3) };
				fVar0[3] = func_248(Global_35, vVar9, 1);
				iVar7 = 0;
				iVar8 = 1;
				while (iVar8 <= 3)
				{
					if (&fVar0[iVar8] < &fVar0[iVar7])
					{
						iVar7 = iVar8;
					}
					iVar8++;
				}
				iVar6 = iVar7;
			}
			break;
		default:
			iVar6 = 0;
			break;
	}
	return iVar6;
}

bool func_1370(var uParam0, int iParam1)
{
	return func_189(*uParam0, iParam1);
}

bool func_1371(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (_does_volume_exist((*(*Global_1396257)[iParam0])[iParam1]->f_47))
	{
		if (is_entity_in_volume(Global_35, (*(*Global_1396257)[iParam0])[iParam1]->f_47, true, 0))
		{
			return true;
		}
		if ((func_346(iParam0) != -1 && func_347(iParam0) == -1) && func_342() != (*Global_1396257)[iParam0]->f_628)
		{
			Var0 = { func_1730(iParam0, iParam1, func_342(), iParam2) };
			_0x541b8576615c33de((*(*Global_1396257)[iParam0])[iParam1]->f_47, Var0.f_2);
			_0xa46e98bdc407e23d((*(*Global_1396257)[iParam0])[iParam1]->f_47, Var0.f_8);
			(*Global_1396257)[iParam0]->f_628 = func_342();
			return false;
		}
		if (func_347(iParam0) != -1)
		{
			if (!func_1732(func_1731(func_347(iParam0)), _0xf70f00013a62f866((*(*Global_1396257)[iParam0])[iParam1]->f_47)))
			{
				Var12 = { func_1730(iParam0, iParam1, func_342(), iParam2) };
				_0x541b8576615c33de((*(*Global_1396257)[iParam0])[iParam1]->f_47, Var12.f_2);
				return false;
			}
		}
		if ((*(*Global_1396257)[iParam0])[iParam1]->f_46 > 1)
		{
			vVar24 = { func_1377(iParam0, iParam1, (*Global_1396257)[iParam0]->f_633) };
			if (!_0xf256a75210c5c0eb((*(*Global_1396257)[iParam0])[iParam1]->f_47, vVar24))
			{
				Var28 = { func_1730(iParam0, iParam1, func_342(), iParam2) };
				_0x541b8576615c33de((*(*Global_1396257)[iParam0])[iParam1]->f_47, Var28.f_2);
				return false;
			}
		}
	}
	else
	{
		Var40 = { func_1730(iParam0, iParam1, func_342(), iParam2) };
		func_1733(&((*(*Global_1396257)[iParam0])[iParam1]->f_47), Var40.f_1, Var40.f_2, Var40.f_5, Var40.f_8, Var40.f_11);
		return false;
	}
	return false;
}

bool func_1372(int iParam0, int iParam1)
{
	if ((((((get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[0] || get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[1]) || get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[2]) || get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[3]) || get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[4]) || get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[5]) || get_clock_day_of_week() == &(*(*Global_1396257)[iParam0])[iParam1]->f_27[6])
	{
		return true;
	}
	return false;
}

bool func_1373(int iParam0)
{
	return func_1734(iParam0, 2);
}

bool func_1374(int iParam0)
{
	if (22 == iParam0)
	{
		if (!func_1586(115, -1, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_1375(int iParam0, int iParam1)
{
	return func_1583(iParam0, iParam1) > 0;
}

bool func_1376(int iParam0, int iParam1)
{
	return func_1584(iParam0, iParam1) > 0;
}

struct<4> func_1377(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_346(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_347(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
			}
			switch (func_346(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0 = { 1702.736f, 2168.096f, 318.9191f };
					Var0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_346(15))
			{
				case 7:
				case 9:
					Var0 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_3 = 177.0399f;
					break;
				case 13:
					Var0 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_3 = 181.815f;
					break;
				case 10:
					Var0 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
				default:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_3 = 167.5016f;
					break;
				case 1:
					Var0 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_3 = 167.5016f;
					break;
				case 2:
					Var0 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
				case 1:
					Var0 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_3 = 145.05f;
					break;
				default:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					Var0 = { -5511.039f, -2929.552f, -3.278f };
					Var0.f_3 = -131.907f;
					break;
				case 1:
					Var0 = { -5497.666f, -2957.426f, -1.708f };
					Var0.f_3 = 12.912f;
					break;
				case 2:
					Var0 = { -5493.435f, -2940.703f, -1.471f };
					Var0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (func_346(23))
			{
				case 0:
					Var0 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_3 = 254.7072f;
					break;
				case 2:
					Var0 = { 2445.841f, -463.2956f, 41.1018f };
					Var0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_3 = 208.7791f;
					break;
				case 1:
					Var0 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_3 = 292.1099f;
					break;
				case 2:
					Var0 = { -2927.12f, -2860.494f, 85.7312f };
					Var0.f_3 = 123.2795f;
					break;
				case 3:
					Var0 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_3 = 332.5893f;
					break;
				case 4:
					Var0 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_3 = 260.2986f;
					break;
				case 5:
					Var0 = { -4399.393f, -3606.746f, 48.6452f };
					Var0.f_3 = 348.5519f;
					break;
				case 6:
					Var0 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_3 = 163.9257f;
					break;
				case 7:
					Var0 = { -5333.317f, -3534.569f, 2.0586f };
					Var0.f_3 = 306.198f;
					break;
				case 8:
					Var0 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_3 = 170.3096f;
					break;
				case 9:
					Var0 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_3 = 255.0981f;
					break;
				case 10:
					Var0 = { -4956.249f, -3198.202f, 26.3575f };
					Var0.f_3 = 292.8281f;
					break;
				case 11:
					Var0 = { -4594.695f, -3045.041f, 6.5776f };
					Var0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

bool func_1378(var uParam0, vector3 vParam1, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = create_tracked_point();
		if (*uParam0 == 0)
		{
		}
		set_tracked_point_info(*uParam0, vParam1, 1.5f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(*uParam0);
		if (iVar0 == -1)
		{
			return false;
		}
		if (bParam4)
		{
			if (iVar0 <= 500)
			{
				return true;
			}
		}
		else if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1379()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

int func_1380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 5:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return -1797882553;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 1328671773;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return -1718657912;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_1381(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 5:
					return "";
				case 6:
					return "";
				case 7:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "SaintDenis\DN_DorotheaWicklow";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return "Tumbleweed/TBL_SHERRIF";
				case 1:
					return "Tumbleweed/TBL_SHERRIF";
				case 2:
					return "Tumbleweed/TBL_SHERRIF";
				case 12:
					return "Tumbleweed/TBL_SHERRIF";
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 12:
					return "";
				default:
					break;
			}
			break;
		default:
			return "";
	}
	return "";
}

bool func_1382(int iParam0, int iParam1)
{
	return func_1735(get_clock_hours(), iParam0, iParam1);
}

int func_1383(int iParam0)
{
	if (!func_913(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

bool func_1384(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1385(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1386(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1490(Var0);
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

int func_1388(int iParam0)
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

void func_1389(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1736(iParam0));
	sVar4 = func_1738(func_1737(iVar3, iParam2));
	sVar6 = func_1739(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1740(iParam0));
	iVar8 = func_1741(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1742(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_1645(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1743(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1390(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1391()
{
	iVar0 = func_1304();
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

int func_1392(int iParam0)
{
	if (func_36() != -1)
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
	fVar1 = func_1744(absf(fVar1) < 1f, func_1744(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1393(int iParam0, int iParam1, int iParam2)
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

int func_1394(int iParam0)
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

int func_1395()
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

void func_1396(int iParam0, bool bParam1, int iParam2)
{
	func_1745((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1746(iParam0);
}

void func_1397(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1747(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1398(bool bParam0)
{
	bVar3 = false;
	if (func_1748(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1749(iVar5, &iVar2, &iVar0))
			{
				if (!func_913(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1750(iVar2);
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
							if (func_1751(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1391() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1391() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1752();
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

int func_1399(int iParam0)
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

char* func_1400(int iParam0)
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

char* func_1401(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_1402(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1403(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_1753(0, 1, bParam0, bParam1);
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

void func_1404()
{
	func_1754();
	func_1755();
	func_1756();
}

int func_1405(int iParam0)
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

void func_1406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1757((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1408(var uParam0)
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

void func_1409(var uParam0)
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

void func_1410(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1411(int iParam0, var uParam1)
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

void func_1412(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1413(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1414(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

bool func_1415(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1758(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_1461(iParam1, Var0, 1415981582, 0) };
	return func_1759(Var29, 1);
}

bool func_1416(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1758(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_1461(iParam1, Var0, -2119169513, 0) };
	return func_1759(Var29, 1);
}

void func_1417(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1418(int iParam0)
{
	if (func_366())
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
	else if (func_449())
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

void func_1419(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1420(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1421(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1422(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1423(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1424(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1425(int iParam0, int iParam1)
{
	if (!func_913(iParam0, 0))
	{
		return false;
	}
	if (!func_1760(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1761() };
	Var14 = { func_1461(iParam0, Var10, iVar9, 0) };
	if (func_1759(Var14, iParam1))
	{
		if (func_1762(iParam0))
		{
			if (func_1763(325139909, &iVar18))
			{
				if (func_1425(iVar18, 0))
				{
				}
			}
		}
		else if (func_1764(iParam0))
		{
			if (func_1763(325139909, &iVar19))
			{
				if (func_1425(iVar19, 0))
				{
				}
			}
			if (func_1763(986998820, &iVar20))
			{
				if (func_1425(iVar20, 0))
				{
				}
			}
			iVar21 = func_1765(iParam0);
			if (func_913(iVar21, 0))
			{
				if (func_1425(iVar21, 1))
				{
				}
			}
		}
		func_1766();
		return true;
	}
	return false;
}

int func_1426(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1427(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_1428(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

bool func_1429(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1432(iVar0, 1);
		if (!func_1435(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_1767(iVar0) == -1)
			{
				func_1437(iVar0, 0);
				func_1768(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_912(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0] = 0;
			Global_1946804->f_2456[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_1430(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1457(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_946(iParam0) != -999503751)
		{
			func_1769(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_946(iParam0) != -999503751)
	{
		func_1769(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1458(iParam0, 1);
	return 1;
}

bool func_1431(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_1432(int iParam0, int iParam1)
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

bool func_1433(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

Vector3 func_1434(int iParam0, int iParam1)
{
	if (func_36() == -1)
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

bool func_1435(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_918(iParam0, 1)])->f_10 && iParam1) != 0;
}

void func_1436(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_918(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_918(iParam0, 1)])->f_10 || iParam1);
}

void func_1437(int iParam0, int iParam1)
{
	func_1770(&(Global_1946804->f_2589), iParam0, iParam1);
}

bool func_1438(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_918(iParam0, 1)] != &Global_1946804->f_57[func_918(iParam0, 1)];
}

void func_1439(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1437(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1437(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1437(iVar2, iVar0);
		}
	}
}

bool func_1440(int iParam0)
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

bool func_1441(int iParam0, int iParam1)
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

int func_1442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
		case 1:
			return -2126063412;
		case 2:
			return -368305354;
		case 3:
			return -1500843424;
		case 4:
			return 2034750397;
		case 5:
			return -1689805015;
		case 6:
			return 1855421528;
		case 7:
			return -1844483462;
		case 8:
			return -618101597;
		case 9:
			return -516195177;
		case 10:
			return 1193363351;
		default:
			break;
	}
	return 0;
}

int func_1443(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_1444(int iParam0)
{
	if (func_950() == 1160113249)
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
			case 1:
				return 1336948195;
			case 2:
				return 216184750;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 2026761603;
		case 1:
			return -170715015;
		case 2:
			return -2022941088;
		default:
			break;
	}
	return 0;
}

bool func_1445(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_1446(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

bool func_1447(int iParam0)
{
	return Global_40.f_7731[iParam0]->f_4 > 0;
}

void func_1448(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (&Global_40.f_7731[iParam0])
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
		case 10:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1772(iParam1, iParam2, &uVar0, &uVar1, 0, func_1771(iParam0));
	}
}

void func_1449(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1450(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

int func_1451(int iParam0)
{
	return &(Global_40.f_7731[iParam0]);
}

void func_1452(var uParam0, int iParam1)
{
	iVar2 = 0;
	if (func_950() == 24043185)
	{
		iVar2 = 1;
	}
	iVar0 = func_1773(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && &uParam0->f_1[iVar1] != func_1774()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			uParam0->f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2656 = iParam1;
		}
		else if (func_1443(&(uParam0->f_1[iVar1]), iVar2, iVar0, func_36() != -1) != -1)
		{
			uParam0->f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2656 = iParam1;
		}
	}
}

bool func_1453(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

bool func_1454()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_1455(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1772(iParam1, iParam2, &uVar0, &uVar1, 0, func_1775());
	}
}

int func_1456()
{
	return Global_40.f_7748.f_1;
}

bool func_1457(int iParam0, int iParam1)
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

bool func_1458(int iParam0, int iParam1)
{
	Var0 = { func_1460(iParam0, 0, 0) };
	Var5 = { func_1461(iParam0, Var0, Var0.f_4, 0) };
	if (func_1462(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_953(0), &Var5, iParam1);
	return true;
}

void func_1459(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1776(iParam2, *uParam0);
	func_1777(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

struct<5> func_1460(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1778(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1751(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1461(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1779(bParam1) };
			if (bParam2 && func_1780(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1781(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1781(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1782(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1783(bParam1) };
			switch (func_946(iParam0))
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
			if (func_1784(iParam0, -1823706425))
			{
				Var0 = { func_1461(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1784(iParam0, -1483207246))
			{
				Var0 = { func_1461(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1785(Var0, &Var27, bParam1, 0))
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

struct<4> func_1461(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_913(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_953(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1462(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_913(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1461(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_953(bParam6), &Var0, 0);
	return uVar4;
}

int func_1463(int iParam0)
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

bool func_1464(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1465(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_953(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1466(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1467(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_953(0);
	*uParam1 = { func_1461(iParam0, func_1779(0), iParam3, 0) };
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

int func_1468(int iParam0)
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

bool func_1469(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_1470(bool bParam0)
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

void func_1471(int iParam0)
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

void func_1472(bool bParam0)
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

void func_1473(bool bParam0)
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

void func_1474(bool bParam0)
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

void func_1475(bool bParam0)
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

void func_1476(bool bParam0)
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

void func_1477(bool bParam0)
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

var func_1478(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_1479(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_918(iParam0, 1)]);
}

bool func_1480(int iParam0, int iParam1, bool bParam2)
{
	if (!func_913(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1751(iParam0);
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
		if (!func_1786(iParam0, 1))
		{
			return false;
		}
	}
	return func_1787(iParam0, 0, bParam2) >= iParam1;
}

bool func_1481(int iParam0, int iParam1, int iParam2)
{
	if (!func_913(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1460(iParam0, 0, 1) };
	Var5 = { func_1461(iParam0, Var0, Var0.f_4, 0) };
	return func_1788(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

int func_1482(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1460(iParam1, 1, 0) };
		iParam3 = func_1789(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1790(iParam1, iParam2, func_918(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1791(1, (func_36() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_918(iParam3, 1)])
			{
				func_385(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_970(32768) && iParam1 != &Global_1946804->f_57[func_918(iParam3, 1)])
			{
				func_397();
				func_385(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_385(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1792(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_385(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_974(0);
			func_1386(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_385(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1483()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1793();
		_unlock_set_unlocked(-1526891582, true);
		func_1794(-916314281);
		func_1481(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_1794(494733111);
		func_1481(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

void func_1484(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	uVar0 = &Global_1955569->f_5.f_2[iParam0];
	if (!_databinding_is_data_id_valid(uVar0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1955569->f_5.f_1, uVar0);
}

bool func_1485(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_422(iParam1) != iParam2)
	{
		return false;
	}
	if (func_409(2, iParam1))
	{
		func_1795(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1486(int iParam0)
{
	func_912(iParam0, 8, 6);
}

void func_1487(int iParam0)
{
	func_1436(iParam0, 8, 6);
}

void func_1488(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_36() != -1;
	iVar7 = func_1796(0);
	if (func_970(32768))
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
			iVar5 = func_1432(iVar0, 1);
			if (func_1435(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1435(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1797(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1798(uParam0);
				if (iVar3 > 0)
				{
					if (!func_970(524288))
					{
						func_877(524288);
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
							iVar5 = func_1432(iVar0, 1);
							if (func_1435(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1435(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1797(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1437(iVar0, iParam2);
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
					func_910(524288);
				}
			}
		}
	}
}

bool func_1489(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1490(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1384(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1384(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1385(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_877(8);
}

void func_1491(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1432(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1799(iParam4);
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

void func_1492(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1435(1108822547, 6))
	{
		if (bParam2)
		{
			func_1491(iParam0, iVar0, func_36() != -1, 0, 0);
			func_1436(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_912(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1493(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

void func_1494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			(*Global_1392050)[iParam0]->f_13 = _create_volume_aggregate_with_custom_name("GangTerritoryODR");
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, -2130.477f, 650.93f, 134f, 0f, 0f, -9.000001f, 550f, 290f, 400f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -1515.893f, 438.8593f, 123.8794f, 0f, 0f, -22.99999f, 998f, 473f, 800f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, -793.1203f, 320.4612f, 67.59668f, 0f, 0f, 22f, 725f, 604f, 400f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, -337.4048f, 658.247f, 151f, 0f, 0f, -5f, 421f, 576f, 400f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, 256.0334f, 1317.352f, 189.7937f, 0f, 0f, 18f, 693f, 492f, 400f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, 335.598f, 633.835f, 151f, 0f, 0f, 11.68f, 421f, 576f, 400f);
			break;
		case 1:
			(*Global_1392050)[iParam0]->f_13 = _create_volume_aggregate_with_custom_name("GangTerritoryINB");
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, 2309.554f, 1094.065f, 122.2573f, 0f, 0f, -7f, 311f, 357f, 400f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, 2448.154f, 1722.388f, 106.8464f, 0f, 0f, -15f, 329f, 503f, 400f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, 2373f, 1410.837f, 88f, 0f, 0f, -7.999999f, 323f, 274f, 399f);
			_0xbce668aaf83608be((*Global_1392050)[iParam0]->f_13, 2913.521f, 1417.039f, 51.85259f, 0f, 0f, -7.999999f, 1000f, 1000f, 399f);
			break;
		case 2:
			(*Global_1392050)[iParam0]->f_13 = _create_volume_box_with_custom_name(1444.124f, -1663.972f, 103f, 0f, 0f, 25f, 785f, 1402.462f, 800f, "GangTerritoryEXC");
			break;
		case 3:
			(*Global_1392050)[iParam0]->f_13 = _create_volume_aggregate_with_custom_name("GangTerritorySAV");
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -2316.826f, -1167.406f, 153.7127f, 0f, 0f, 30f, 676.5008f, 927.0109f, 163.3098f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -2192.601f, -1729.948f, 153.7126f, 0f, 0f, 28.40238f, 346.8922f, 176.3344f, 163.3098f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -2054.552f, -1804.523f, 153.7126f, 0f, 0f, -37.77114f, 316.7911f, 176.3344f, 163.3098f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -1966.271f, -1572.086f, 153.7126f, 0f, 0f, 98.67613f, 548.4231f, 322.8264f, 163.3098f);
			break;
		case 4:
			(*Global_1392050)[iParam0]->f_13 = _create_volume_aggregate_with_custom_name("GangTerritoryRAN");
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -1746.924f, 208.3046f, 220.6833f, 0f, 0f, 0f, 956.0742f, 1526.917f, 400f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -2682.787f, 256.4973f, 220.6833f, 0f, 0f, 0f, 956.0742f, 1427.599f, 400f);
			break;
		case 5:
			(*Global_1392050)[iParam0]->f_13 = _create_volume_aggregate_with_custom_name("GangTerritoryBND");
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -1425.634f, -2201.19f, 53.50934f, 0f, 0f, 0f, 296.6014f, 304.1389f, 89.12419f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -4672.855f, -3822.961f, 53.50933f, 0f, 0f, 91.0172f, 3000f, 6900f, 250.124f);
			_0x39816f6f94f385ad((*Global_1392050)[iParam0]->f_13, -4136.813f, -2096.956f, 53.50934f, 0f, 0f, 0f, 3500.01f, 600f, 300f);
			break;
		default:
			return;
	}
}

bool func_1495(int iParam0)
{
	if (&Global_1392135->f_5[iParam0] != 0)
	{
		if (IntToFloat(&Global_1392135->f_5[iParam0]) > func_466())
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			iVar1 = 10;
			StringCopy(&cVar3, "ODR Ambush ", 64);
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 17;
			StringCopy(&cVar3, "EXC Ambush ", 64);
			break;
		case 1:
			iVar0 = 18;
			iVar1 = 23;
			StringCopy(&cVar3, "INB Ambush ", 64);
			break;
		case 3:
			iVar0 = 24;
			iVar1 = 28;
			StringCopy(&cVar3, "SAV Ambush ", 64);
			break;
		case 4:
			iVar0 = 29;
			iVar1 = 30;
			StringCopy(&cVar3, "RNC Ambush ", 64);
			break;
		case 5:
			iVar0 = 31;
			iVar1 = 33;
			StringCopy(&cVar3, "BND Ambush ", 64);
			break;
	}
	iVar2 = (&Global_1392135->f_12[iParam0] + iVar0);
	if (func_1800(iVar2))
	{
		if (!func_999(iVar2, 0))
		{
			if (!func_1503(iVar2, &uVar11))
			{
				if (iVar2 >= iVar1)
				{
					Global_1392135->f_12[iParam0] = 0;
					Global_1392135->f_26[iParam0] = 0;
					return true;
				}
				Global_1392135->f_12[iParam0] = &Global_1392135->f_12[iParam0] + 1;
				Global_1392135->f_26[iParam0] = 0;
				return false;
			}
			func_1000(iParam0, iVar2, &cVar3, -1);
		}
	}
	if (&Global_1392135->f_26[iParam0] + 1 >= func_1002(iVar2))
	{
		Global_1392135->f_26[iParam0] = 0;
		Global_1392135->f_12[iParam0] = &Global_1392135->f_12[iParam0] + 1;
	}
	else
	{
		Global_1392135->f_26[iParam0] = &Global_1392135->f_26[iParam0] + 1;
	}
	if (iVar2 >= iVar1)
	{
		Global_1392135->f_12[iParam0] = 0;
		Global_1392135->f_26[iParam0] = 0;
		return true;
	}
	return false;
}

void func_1496(int iParam0, int iParam1)
{
	Global_1392135->f_40[iParam0] = iParam1;
}

bool func_1497(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			iVar1 = 10;
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 17;
			break;
		case 1:
			iVar0 = 18;
			iVar1 = 23;
			break;
		case 3:
			iVar0 = 24;
			iVar1 = 28;
			break;
		case 4:
			iVar0 = 29;
			iVar1 = 30;
			break;
		case 5:
			iVar0 = 31;
			iVar1 = 33;
			break;
	}
	iVar2 = (&Global_1392135->f_19[iParam0] + iVar0);
	if (func_1800(iVar2) && !func_1801(iVar2))
	{
		if ((func_999(iVar2, 0) || bParam1) || !func_1503(iVar2, &uVar3))
		{
			func_1004(iParam0, iVar2, -1);
		}
	}
	if (&Global_1392135->f_33[iParam0] + 1 >= func_1002(iVar2))
	{
		Global_1392135->f_33[iParam0] = 0;
		Global_1392135->f_19[iParam0] = &Global_1392135->f_19[iParam0] + 1;
	}
	else
	{
		Global_1392135->f_33[iParam0] = &Global_1392135->f_33[iParam0] + 1;
	}
	if (iVar2 >= iVar1)
	{
		Global_1392135->f_19[iParam0] = 0;
		Global_1392135->f_33[iParam0] = 0;
		iVar4 = 1;
	}
	else
	{
		iVar4 = 0;
	}
	return iVar4;
}

int func_1498(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

float func_1499(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
		case 3:
			return 150f;
		default:
			break;
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 3)
			{
				return 140f;
			}
			else
			{
				return 130f;
			}
			break;
		case 11:
			return 140f;
		default:
			return 175f;
	}
	return 175f;
}

bool func_1500(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_1501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1502()
{
	iVar0 = func_1391();
	return iVar0 <= -160;
}

bool func_1503(int iParam0, var uParam1)
{
	if (func_744())
	{
		if (!func_150(4))
		{
			return false;
		}
	}
	*uParam1 = func_1802(func_475(iParam0, 0), 0, 256, 0);
	iVar0 = 1;
	iVar1 = -1;
	if (!func_1008(func_1803(iParam0)))
	{
		iVar0 = 0;
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1805())
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 3:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1806(4))
			{
				iVar0 = 0;
				return false;
			}
			if (!*uParam1)
			{
				if (!func_150(5) && !func_150(6))
				{
					iVar0 = 0;
					return false;
				}
				if (!func_1807())
				{
					iVar0 = 0;
					return false;
				}
				if (Global_40.f_9571[0]->f_1 != 3)
				{
					iVar0 = 0;
					return false;
				}
			}
			break;
		case 4:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1808())
			{
				iVar0 = 0;
				return false;
			}
			if (!*uParam1)
			{
				if (!func_1807())
				{
					iVar0 = 0;
					return false;
				}
			}
			break;
		case 38:
			if (!func_1804())
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 1:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1806(2))
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 36))
			{
				iVar0 = 0;
				return false;
			}
			if (!*uParam1)
			{
				if (!func_1807())
				{
					iVar0 = 0;
					return false;
				}
				if (Global_40.f_9571[0]->f_1 != 3)
				{
					iVar0 = 0;
					return false;
				}
			}
			break;
		case 2:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1808())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 36))
			{
				iVar0 = 0;
				return false;
			}
			if (!*uParam1)
			{
				if (!func_1807())
				{
					iVar0 = 0;
					return false;
				}
			}
			break;
		case 36:
			if (!func_1807())
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 9:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1806(10))
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 37))
			{
				iVar0 = 0;
				return false;
			}
			if (func_1810(9) == (func_1002(9) - 1))
			{
				if (!func_990(512))
				{
					iVar0 = 0;
					return false;
				}
			}
			if (!*uParam1)
			{
				if (Global_40.f_9571[0]->f_1 != 3)
				{
					iVar0 = 0;
					return false;
				}
			}
			break;
		case 10:
			if (func_1808())
			{
				if (func_1810(9) == (func_1002(9) - 1) && !func_990(512))
				{
				}
				else
				{
					iVar0 = 0;
					return false;
				}
			}
			if (!func_1807())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 36))
			{
				iVar0 = 0;
				return false;
			}
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 37:
			if (!func_1807())
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 5:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 35))
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 35:
			break;
		case 6:
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 42))
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 42:
			break;
		case 7:
			if (func_294(11) && func_342() == 1)
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 41))
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 8:
			if (!func_1807())
			{
				iVar0 = 0;
			}
			if (func_1804())
			{
				iVar0 = 0;
				return false;
			}
			if (func_1809(0, 8))
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 40:
			break;
		case 41:
			if (func_294(11) && func_342() == 1)
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 11:
			if (Global_40.f_9571[2]->f_1 == 5)
			{
				iVar0 = 0;
			}
			if (func_999(11, 0) || func_486((*Global_1347702)[76]->f_15, 1))
			{
				iVar0 = 0;
			}
			break;
		case 12:
		case 15:
			if (Global_40.f_9571[2]->f_1 == 5)
			{
				iVar0 = 0;
			}
			else if (!func_1811())
			{
				iVar0 = 0;
			}
			break;
		case 14:
			if (Global_40.f_9571[2]->f_1 != 3 && Global_40.f_9571[2]->f_1 != 4)
			{
				iVar0 = 0;
			}
			iVar1 = func_1810(14);
			if (iVar1 == 2)
			{
				if (!func_999(17, 0) || Global_17504.f_42[11]->f_1 <= 0)
				{
					iVar0 = 0;
				}
			}
			if (!func_1811())
			{
				iVar0 = 0;
			}
			break;
		case 13:
		case 16:
			if (Global_40.f_9571[2]->f_1 != 3 && Global_40.f_9571[2]->f_1 != 4)
			{
				iVar0 = 0;
			}
			if (!func_1811())
			{
				iVar0 = 0;
			}
			break;
		case 17:
			if (func_1809(2, 39))
			{
				iVar0 = 0;
				return false;
			}
			iVar1 = func_1810(17);
			switch (iVar1)
			{
				case 0:
					if (Global_17504.f_42[11]->f_1 <= 0 || Global_40.f_9571[2]->f_1 == 4)
					{
						iVar0 = 0;
					}
					break;
				case 3:
					if (!func_1811())
					{
						iVar0 = 0;
					}
					break;
				case 4:
					if (func_151())
					{
						iVar0 = 0;
					}
					break;
			}
			break;
		case 39:
			iVar1 = func_1810(17);
			switch (iVar1)
			{
				case 0:
					if (Global_17504.f_42[11]->f_1 <= 0)
					{
						iVar0 = 0;
					}
					break;
				case 4:
					if (func_151())
					{
						iVar0 = 0;
					}
					break;
			}
			break;
		case 23:
			if (Global_40.f_9571[1]->f_1 != 3)
			{
				iVar0 = 0;
			}
			if (func_294(55))
			{
				iVar0 = 0;
			}
			break;
		case 18:
			break;
		case 19:
			if (!func_999(18, 0))
			{
				iVar0 = 0;
			}
			break;
		case 21:
			if (Global_40.f_9571[1]->f_1 != 3)
			{
				iVar0 = 0;
			}
			break;
		case 22:
			if (Global_40.f_9571[1]->f_1 != 3)
			{
				iVar0 = 0;
			}
			break;
		case 29:
			if (!func_449())
			{
				iVar0 = 0;
			}
			break;
		case 30:
			if (!func_449())
			{
				iVar0 = 0;
			}
			if (!func_999(29, 0))
			{
				iVar0 = 0;
			}
			break;
		case 24:
			if (!func_449())
			{
				iVar0 = 0;
			}
			break;
		case 25:
			if (!func_449())
			{
				iVar0 = 0;
			}
			if (func_486((*Global_1347702)[9]->f_15, 1))
			{
				iVar0 = 0;
				return false;
			}
			if (!func_1812())
			{
				iVar0 = 0;
			}
			break;
		case 28:
			if (!func_449())
			{
				iVar0 = 0;
				return false;
			}
			if (func_150(75))
			{
				iVar0 = 0;
				return false;
			}
			if (!func_1812())
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 26:
			if (!func_449())
			{
				iVar0 = 0;
				return false;
			}
			if (func_150(75))
			{
				iVar0 = 0;
				return false;
			}
			break;
		case 27:
			if (!func_449())
			{
				iVar0 = 0;
			}
			break;
		case 31:
		case 32:
		case 33:
			if (!func_449())
			{
				iVar0 = 0;
			}
			break;
		case 43:
			if (func_449())
			{
				return false;
			}
			if (func_473() != 6)
			{
				iVar0 = 0;
				return false;
			}
			if (!func_150(46))
			{
				iVar0 = 0;
				return false;
			}
			break;
	}
	return iVar0;
}

bool func_1504(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 36:
			return false;
		case 3:
		case 4:
		case 38:
			return true;
		case 5:
		case 35:
			return true;
		case 6:
		case 42:
			return false;
		case 7:
		case 41:
			return false;
		case 9:
		case 10:
		case 37:
			return false;
		case 11:
			return false;
		case 12:
			return false;
		case 13:
			return false;
		case 14:
			return false;
		case 15:
			return false;
		case 16:
			return false;
		case 17:
			return false;
		case 39:
			return false;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return true;
		case 22:
			return false;
		case 23:
			return false;
		case 24:
			return true;
		case 28:
			return false;
		case 25:
			return false;
		case 29:
			return true;
		case 30:
			return true;
		case 31:
			return false;
		case 34:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 36:
			return true;
		case 3:
		case 4:
		case 38:
			return true;
		case 5:
		case 35:
			return true;
		case 6:
		case 42:
			return true;
		case 9:
		case 10:
		case 37:
			return false;
		case 11:
			return false;
		case 12:
			return true;
		case 13:
			return false;
		case 14:
			return true;
		case 15:
			return false;
		case 16:
			return false;
		case 17:
			return false;
		case 39:
			return false;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return true;
		case 22:
			return true;
		case 23:
			return false;
		case 24:
			return true;
		case 29:
			return true;
		case 30:
			return true;
		case 31:
			return false;
		case 34:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1506(vector3 vParam0, float fParam3)
{
	if (fParam3 >= 200f)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (fParam3 > 100f && is_ped_heading_towards_position(Global_35, vParam0, 60f))
	{
		return true;
	}
	return false;
}

int func_1507(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 17:
		case 39:
			switch (iParam1)
			{
				case 0:
					bVar0 = true;
					break;
			}
			break;
	}
	if (bVar0)
	{
		vVar1 = { func_475(iParam0, iParam1) };
		if (func_1127(vVar1, 0, 16, 0))
		{
			func_1813(vVar1, 1137180672);
		}
	}
	return 0;
}

int func_1508(int iParam0)
{
	if (!func_259(iParam0))
	{
		return 0;
	}
	return &(Global_17504.f_42[iParam0]);
}

float func_1509(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_1510(int iParam0)
{
	return (Global_1395482->f_10 && iParam0) != 0;
}

int func_1511(int iParam0)
{
	if (!func_485(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 9;
		case 2:
			return 1;
		case 6:
			return 0;
		case 4:
			return 10;
		case 1:
			return 4;
		case 5:
			return 11;
		case 0:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_1512(int iParam0)
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

bool func_1513(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	if (func_482(iParam0) >= get_wanted_level_threshold(5))
	{
		return true;
	}
	return false;
}

int func_1514(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	if (!func_693(iParam0, 2))
	{
		return 0;
	}
	if (func_696(func_690(iParam0)))
	{
		return func_278(iParam0);
	}
	return _0xe76687023d8c8505(func_1814(iParam0), 0);
}

Vector3 func_1515(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_0x800df3fc913355f3(func_277(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return _0x5ee6fccc9c832ca2(func_277(iParam0));
}

bool func_1516()
{
	if (func_1815())
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

void func_1517(var uParam0, var uParam1)
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

bool func_1518(bool bParam0, int iParam1, int iParam2)
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

int func_1519(var uParam0)
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

void func_1520(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_191(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_291(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_1521(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1522(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1523(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1523(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1524(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_1525(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1526(int iParam0)
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

int func_1527(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1528(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1529(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1530(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1531(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1532(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1533(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

float func_1534(vector3 vParam0, vector3 vParam3)
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

bool func_1535(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_1536(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419->f_9721[iVar0]->f_2)
		{
			if (func_1500(vParam0, Global_1415419->f_9721[iVar0]->f_4, fParam3, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1537(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_32074.f_2697.f_1495[iVar0] != -1)
		{
			if (func_1500(vParam0, Global_32074.f_2697.f_1495[iVar0]->f_1, 1f, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_1538(int iParam0)
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

bool func_1539(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1540(int iParam0, int iParam1)
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

var func_1541()
{
	return &Global_1899515;
}

void func_1542(int iParam0, int iParam1)
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

void func_1543(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1544(int iParam0, int iParam1)
{
	iVar0 = func_627(*iParam0);
	iVar1 = func_626(*iParam0);
	if (iParam1 < 1 || iParam1 > func_629(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1545(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1546(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_1547(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2134360406:
			return 94;
		case -2045208178:
			return 64;
		case -1918658020:
			return 57;
		case -1811967943:
			return 2;
		case -1805561902:
			return 8;
		case -1783049048:
			return 29;
		case -1762981608:
			return 13;
		case -1761128258:
			return 111;
		case -1696575454:
			return 25;
		case -1664988496:
			return 28;
		case -1633137849:
			return 92;
		case -1607268103:
			return 66;
		case -1479920637:
			return 84;
		case -1460460052:
			return 48;
		case -1457524782:
			return 14;
		case -1407056675:
			return 21;
		case -1379618186:
			return 97;
		case -1343084439:
			return 43;
		case -1332576287:
			return 105;
		case -1317542923:
			return 78;
		case -1255675465:
			return 35;
		case -1247606340:
			return 0;
		case -1169825673:
			return 3;
		case -1145690235:
			return 77;
		case -1114736130:
			return 102;
		case -1112729059:
			return 108;
		case -1097432820:
			return 74;
		case -1084058685:
			return 27;
		case -1079521156:
			return 42;
		case -1078406621:
			return 37;
		case -1004747084:
			return 80;
		case -1003948703:
			return 6;
		case -985659031:
			return 103;
		case -968686824:
			return 39;
		case -953531577:
			return 83;
		case -680088106:
			return 104;
		case -630300921:
			return 89;
		case -558327193:
			return 30;
		case -450600951:
			return 113;
		case -448599760:
			return 33;
		case -433637084:
			return 50;
		case -362791308:
			return 73;
		case -345142193:
			return 86;
		case -331203775:
			return 65;
		case -327947127:
			return 95;
		case -289420007:
			return 72;
		case -266767341:
			return 99;
		case -245997622:
			return 59;
		case -217429167:
			return 9;
		case -78072296:
			return 96;
		case -49928042:
			return 106;
		case -42041881:
			return 100;
		case -15667560:
			return 45;
		case 45270830:
			return 11;
		case 62520498:
			return 22;
		case 111292469:
			return 76;
		case 131363873:
			return 56;
		case 209623500:
			return 58;
		case 272086219:
			return 47;
		case 276848212:
			return 114;
		case 286162706:
			return 31;
		case 318078354:
			return 110;
		case 325766844:
			return 63;
		case 332041830:
			return 12;
		case 343399240:
			return 69;
		case 355130513:
			return 70;
		case 359325346:
			return 67;
		case 362685326:
			return 55;
		case 373783623:
			return 23;
		case 383285357:
			return 40;
		case 449150154:
			return 4;
		case 458209198:
			return 60;
		case 479802912:
			return 7;
		case 588400727:
			return 36;
		case 597680464:
			return 109;
		case 654047380:
			return 5;
		case 667353761:
			return 107;
		case 738590523:
			return 53;
		case 777482866:
			return 112;
		case 797453428:
			return 20;
		case 810500501:
			return 19;
		case 815565122:
			return 38;
		case 830931566:
			return 41;
		case 879109073:
			return 18;
		case 885716452:
			return 16;
		case 983580076:
			return 52;
		case 1042598863:
			return 10;
		case 1067835471:
			return 61;
		case 1080890700:
			return 90;
		case 1089725084:
			return 81;
		case 1095325127:
			return 88;
		case 1132533427:
			return 34;
		case 1153720789:
			return 87;
		case 1169428501:
			return 62;
		case 1172070118:
			return 68;
		case 1185839882:
			return 98;
		case 1213187927:
			return 75;
		case 1229011466:
			return 54;
		case 1346867715:
			return 15;
		case 1348106565:
			return 79;
		case 1356881482:
			return 82;
		case 1401557308:
			return 46;
		case 1573777166:
			return 17;
		case 1609505828:
			return 26;
		case 1615285097:
			return 32;
		case 1621833104:
			return 24;
		case 1867545732:
			return 44;
		case 1920927356:
			return 51;
		case 1921371725:
			return 93;
		case 1955306955:
			return 1;
		case 1978595469:
			return 91;
		case 1996407755:
			return 101;
		case 2024713010:
			return 49;
		case 2069882687:
			return 71;
		case 2132661455:
			return 85;
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

void func_1548(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1118(iParam0))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	Var0.f_14 = func_592(iParam0);
	Var0 = uParam1;
	Var0.f_12 = iParam2;
	Var0.f_8 = 0;
	if (iParam3 != 0)
	{
		Var0.f_13 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	_0x88bc5f4aef77fc4e(&Var0, 17);
}

bool func_1549(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1122(iParam0))
	{
		return false;
	}
	if (func_1337(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_1337(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_1337(iParam0, 4, 1))
	{
		return false;
	}
	if (func_1239(iParam0, 33, 1))
	{
		return false;
	}
	if (func_1720(iParam0))
	{
		return false;
	}
	if (func_1816(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_1550(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_1551(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		if (func_1552(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_1552(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	return Global_1327590->f_19744 == iParam0;
}

bool func_1553(int iParam0)
{
	switch (func_36())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_1554()
{
	if (!_0xec7e480ff8bd0bed(Global_35))
	{
		return false;
	}
	iVar0 = _0x05a0100ea714db68(Global_35, 0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = get_entity_model(iVar0);
	if (!is_model_valid(iVar1))
	{
		return false;
	}
	if (((iVar1 == -82199229 || iVar1 == -1971689092) || iVar1 == -686064834) || iVar1 == 587066646)
	{
		return false;
	}
	return true;
}

bool func_1555()
{
	return is_bit_set(Global_1357549->f_1893, 0);
}

void func_1556(int iParam0, int iParam1, int iParam2)
{
	func_1110(iParam1, 1);
	if (!is_ped_a_player(iParam2))
	{
		func_1110(iParam2, 1);
	}
	Global_1327590->f_18196 = iParam1;
	Global_1327590->f_18196.f_1 = iParam2;
	Global_1327590->f_18196.f_2 = 1;
	func_1817(*iParam0, 4096, 1, -1);
	func_1817(iParam0->f_1, 4096, 1, -1);
	set_ped_can_use_auto_conversation_lookat(iParam1, true);
	set_ped_can_use_auto_conversation_lookat(iParam2, true);
	set_ped_config_flag(iParam1, 448, true);
	set_ped_config_flag(iParam2, 448, true);
}

char* func_1557(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH_BELL";
		case 7:
			return "CHARLES_SMITH";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "SUSAN";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE_ADLER";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLE_FLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

void func_1558(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1818(uParam0, iParam1, sParam2))
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

int func_1559(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_1070(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_1070(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_1166(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_1819(sParam1))
			{
				return 1;
			}
		}
		else if (func_1820(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1560(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < Global_1327590->f_19574);
}

void func_1561(int iParam0)
{
	if (!func_1560(iParam0))
	{
		return;
	}
	func_738(&(Global_1327590->f_19574[iParam0]->f_4));
}

bool func_1562(int iParam0)
{
	return iParam0 != 0;
}

bool func_1563(int iParam0)
{
	func_1821(iParam0, 0, 0);
	if (func_1822(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

void func_1564(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1821(iParam0, 0, 0);
	if (func_1822(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1823(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1824(iParam0, 1);
			}
			else
			{
				func_1825(iParam0, 1);
			}
		}
		else
		{
			func_1826(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1827())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1565(int iParam0, int iParam1)
{
	func_1564(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_1566(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_1567(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_1828(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_1568(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

void func_1569(int iParam0, int iParam1, bool bParam2)
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

bool func_1570(vector3 vParam0)
{
	if (func_185(vParam0))
	{
		return false;
	}
	fVar0 = func_1744(func_564(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

int func_1571(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = &Global_1310750->f_13321[iVar0];
		if (func_259(iVar2))
		{
			if (func_651(iVar2, iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1572()
{
	return Global_17504.f_9;
}

bool func_1573()
{
	return Global_17504.f_7;
}

bool func_1574()
{
	return Global_17504.f_8;
}

bool func_1575()
{
	return Global_17504.f_10;
}

int func_1576(int iParam0)
{
	if (func_651(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_342() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_651(iParam0, 2);
		bVar1 = func_651(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_564())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_1577(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}
	if (func_663(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = ceil((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_1578(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam1 = 240f;
	}
	else
	{
		*uParam1 = 215f;
	}
	*uParam0 = 110f;
	if (func_663(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = ceil((*uParam0 + 110f));
	}
	else if (func_663(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = ceil((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

int func_1579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

Vector3 func_1580(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_259(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_1579(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_1829(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

bool func_1581(int iParam0, int iParam1)
{
	iVar0 = (func_1829(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

int func_1582(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			iVar0 = func_1584(iParam0, 0);
			iVar0 = (iVar0 + func_1584(iParam0, 2));
			iVar0 = (iVar0 + func_1584(iParam0, 11));
			return iVar0;
		case 0:
			iVar0 = func_1584(iParam0, 1);
			iVar0 = (iVar0 + func_1584(iParam0, 7));
			iVar0 = (iVar0 + func_1584(iParam0, 6));
			iVar0 = (iVar0 + func_1584(iParam0, 12));
			return iVar0;
		case 2:
			iVar0 = func_1584(iParam0, 3);
			iVar0 = (iVar0 + func_1584(iParam0, 10));
			return iVar0;
		case 1:
			iVar0 = func_1584(iParam0, 4);
			iVar0 = (iVar0 + func_1584(iParam0, 9));
			return iVar0;
		case 4:
			return func_1584(iParam0, 8);
		case 5:
			iVar0 = func_1584(iParam0, 13);
			iVar0 = (iVar0 + func_1584(iParam0, 14));
			iVar0 = (iVar0 + func_1584(iParam0, 15));
			iVar0 = (iVar0 + func_1584(iParam0, 16));
			return iVar0;
		default:
			break;
	}
	return 0;
}

int func_1583(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_1161(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_1830(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2]->f_1;
	}
	return 0;
}

int func_1584(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		iVar0 = func_1830(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar0]->f_1;
	}
	return 0;
}

bool func_1585(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0]->f_1 == 4;
}

bool func_1586(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = false;
	if (iParam1 == -1)
	{
		bVar0 = true;
	}
	if (bVar0 || iParam1 == 0)
	{
		if (func_36() != -1)
		{
			return false;
		}
		if (func_103(0, 1, 1))
		{
			return false;
		}
		if (!func_1831(0))
		{
			return false;
		}
		if (!func_1832())
		{
			return false;
		}
		if (func_745(iParam0, 2097152))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_449())
			{
				return false;
			}
		}
		else if (iParam0 == 76)
		{
			if (func_150(14) && !func_150(17))
			{
				return false;
			}
			if (Global_1392235->f_2)
			{
				return false;
			}
		}
		else if (iParam0 == 26)
		{
			if (!func_150(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!func_150(27))
			{
				return false;
			}
			else if (func_319(31, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 5)
		{
			if (func_319(130, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!func_1833())
			{
				return false;
			}
		}
		if (func_449() && !func_150(69))
		{
			return false;
		}
		if (func_157(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_745(iParam0, 33554432))
		{
			return false;
		}
		if (func_800(iParam0))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 2)
	{
		if ((((((((((((func_319(11, 0) || func_319(12, 0)) || func_319(13, 0)) || func_319(153, 0)) || func_319(14, 0)) || func_319(154, 0)) || func_319(15, 0)) || func_319(16, 0)) || func_319(17, 0)) || func_319(18, 0)) || func_319(155, 0)) || func_319(19, 0)) || func_319(20, 0))
		{
			return false;
		}
		if (func_1834(iParam0) == -1)
		{
			return false;
		}
		if (!func_1835(iParam0))
		{
			return false;
		}
		if (Global_1392235->f_4)
		{
			return false;
		}
	}
	return true;
}

int func_1587(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		iVar0 = func_1588(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_1588(int iParam0, int iParam1)
{
	iVar0 = func_1836(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

int func_1589(int iParam0, int iParam1)
{
	iVar0 = func_1836(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_2;
	}
	return 0;
}

bool func_1590(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_480();
	iVar1 = func_1837(iParam0, iParam1);
	func_1015(iVar0, iVar1, &uVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7);
	if (iVar5 >= iParam2 && iParam2 > 0)
	{
		return true;
	}
	if (iVar4 > iParam3 && iParam3 > 0)
	{
		return true;
	}
	return false;
}

bool func_1591()
{
	switch (func_156())
	{
		case 76:
			iVar0 = 75;
			iVar1 = 6;
			break;
		case 26:
			iVar0 = 61;
			iVar1 = 3;
			break;
		case 78:
			iVar0 = 0;
			iVar1 = 6;
			break;
		case 105:
			iVar0 = 28;
			iVar1 = 3;
			break;
	}
	if (!func_1608(iVar1, -1))
	{
		return false;
	}
	if (func_1173(iVar0))
	{
		return false;
	}
	if (!func_275(iVar0))
	{
		return false;
	}
	if (func_279(iVar1, iVar0))
	{
		return false;
	}
	if (func_510(iVar1))
	{
		return false;
	}
	if (func_1173(iVar0))
	{
		return false;
	}
	if (func_511(iVar1, iVar0, &uVar2))
	{
		return false;
	}
	return true;
}

int func_1592(int iParam0)
{
	if (!func_259(iParam0))
	{
		return 0;
	}
	return Global_17504.f_42[iParam0]->f_1;
}

bool func_1593()
{
	if (func_1588(83, 0) == 1)
	{
		return true;
	}
	return false;
}

int func_1594(vector3 vParam0, int iParam3)
{
	iVar0 = func_156();
	if (func_182(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1838(vParam0, iParam3);
}

int func_1595()
{
	get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	if (!func_1839(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 3, false);
	}
	if (!func_1839(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	}
	if (!func_1839(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 1, false);
	}
	if (!func_1839(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_1839(&iVar0))
	{
		iVar0 = func_1840(268435584, 0);
	}
	if (!func_1839(&iVar0))
	{
		return 0;
	}
	return 1;
}

bool func_1596(int iParam0)
{
	if (!func_1841(iParam0))
	{
		return false;
	}
	iVar0 = func_1842(iParam0);
	iVar1 = func_1221(iParam0);
	if (!func_182(iVar0))
	{
		return false;
	}
	if (!func_863(iVar1))
	{
		return false;
	}
	if (func_156() == iVar0)
	{
		if (func_1843(iVar1))
		{
			return true;
		}
	}
	return false;
}

int func_1597()
{
	if ((func_193() || _is_ped_carrying(Global_35)) || func_157(player_id(), 1, 0, 1))
	{
		return 1;
	}
	iVar0 = 5400;
	if (func_294(26))
	{
		iVar0 = 600;
	}
	else if (func_319(68, 1))
	{
		iVar0 = 2400;
	}
	else if (func_294(57))
	{
		iVar0 = 1800;
	}
	if (Global_1359489->f_61 >= 3)
	{
		return 2;
	}
	else if (func_739(&(Global_1359489->f_55)) < IntToFloat(iVar0))
	{
		return 3;
	}
	else if (get_game_timer() < Global_1359489->f_60)
	{
		return 4;
	}
	else if (!func_1844())
	{
		return 5;
	}
	else if (!func_150(5))
	{
		return 6;
	}
	else
	{
		fVar1 = vdist(get_entity_coords(Global_35, true, false), func_571(func_473()));
		if (fVar1 <= 750f)
		{
			return 7;
		}
		return 0;
	}
	return -1;
}

bool func_1598(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_1599()
{
	return func_1845(7);
}

bool func_1600(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			iVar0 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 40;
			break;
		default:
			iVar0 = func_1846(iParam0, 0, 0, 119, 0);
			break;
	}
	return iVar0 != 0;
}

int func_1601(int iParam0)
{
	iParam0 = func_1021(iParam0);
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

bool func_1602(int iParam0)
{
	if (!func_1847(iParam0))
	{
		return true;
	}
	return func_486((*Global_1392626)[iParam0]->f_3, 1);
}

float func_1603(vector3 vParam0, int iParam3)
{
	return func_768(Global_35, vParam0, iParam3);
}

bool func_1604()
{
	switch (func_342())
	{
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 12:
			if (func_1587(40, 0) == 9 || func_1587(40, 8) == 16)
			{
				return false;
			}
			break;
		case 0:
		case 2:
		case 3:
		case 10:
		case 11:
			if (func_1587(40, 1) == 9 || func_1587(40, 9) == 16)
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1605(int iParam0, bool bParam1, int iParam2)
{
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	switch (iParam0)
	{
		case 1:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 5:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 12:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 9:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 4:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 11:
			iVar0[0] = 20;
			iVar0[1] = 5;
			break;
		case 0:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
		case 2:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
		case 3:
			iVar0[0] = 20;
			iVar0[1] = 3;
			iVar0[2] = 5;
			break;
		case 10:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
	}
	if (bParam1)
	{
		if (!func_1848(&(iVar0[0])) && &iVar0[0] != iParam2)
		{
			return &(iVar0[0]);
		}
		else if (!func_1848(&(iVar0[1])) && &iVar0[1] != iParam2)
		{
			return &(iVar0[1]);
		}
		else if (!func_1848(&(iVar0[2])) && &iVar0[2] != iParam2)
		{
			return &(iVar0[2]);
		}
	}
	else if (&iVar0[0] != iParam2)
	{
		return &(iVar0[0]);
	}
	else
	{
		return &(iVar0[1]);
	}
	return 0;
}

bool func_1606(int iParam0, int iParam1)
{
	return func_1849(iParam0, iParam1) > 0;
}

bool func_1607(int iParam0)
{
	if (!func_259(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

bool func_1608(int iParam0, int iParam1)
{
	bVar0 = true;
	if (func_36() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_1172(func_156(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		bVar0 = (func_1850(iParam1) || func_1084(func_1851(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = bVar0;
	}
	return bVar0;
}

int func_1609()
{
	if (!func_1852())
	{
		return -1;
	}
	return Global_1392135->f_3;
}

bool func_1610()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_150(16) && !func_150(21))
	{
		return true;
	}
	return false;
}

bool func_1611(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return false;
	}
	else if (func_449())
	{
		if ((func_1853(iParam0, iParam1) == 95866989 || iParam1 == 0) || iParam1 == 8)
		{
			return true;
		}
	}
	else if (func_1853(iParam0, iParam1) != 95866989)
	{
		return true;
	}
	return false;
}

bool func_1612(int iParam0)
{
	switch (func_1153(iParam0))
	{
		case 3:
			if (func_1854(func_1589(57, 0), 32))
			{
				return true;
			}
			break;
		default:
			if (func_1854(func_1588(57, 0), 32))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1613(int iParam0)
{
	if (func_150(59))
	{
		if (!func_150(67))
		{
			return false;
		}
	}
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar2 = 0;
		if (get_current_ped_weapon(Global_35, &iVar2, false, iVar1, false))
		{
			if (func_99(iVar2))
			{
				if (func_1787(iVar2, 1, 0) >= iParam0)
				{
					if (!bVar3)
					{
						if (_is_weapon_pistol(iVar2))
						{
							bVar3 = true;
							iVar0++;
						}
					}
					if (!bVar4)
					{
						if (_is_weapon_revolver(iVar2))
						{
							bVar4 = true;
							iVar0++;
						}
					}
					if (!bVar5)
					{
						if (_is_weapon_repeater(iVar2))
						{
							bVar5 = true;
							iVar0++;
						}
					}
					if (!bVar6)
					{
						if (_is_weapon_rifle(iVar2) && !_is_weapon_sniper(iVar2))
						{
							bVar6 = true;
							iVar0++;
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

bool func_1614(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

int func_1615()
{
	return func_1153(func_342());
}

void func_1616(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1855(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_5 = iParam2;
}

void func_1617(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1855(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

bool func_1618()
{
	if (func_1619(&uVar0))
	{
		return false;
	}
	if (!func_449())
	{
		if (func_1588(114, 1) != 1)
		{
			if (func_156() == 76)
			{
				if (func_150(5))
				{
					if (func_1588(114, 2) != 1)
					{
						func_1617(114, 2, 1);
						func_1616(114, 0, func_480());
						return false;
					}
					else if (func_1590(114, 0, 1, 0) && !func_1590(114, 0, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (func_1588(114, 2) != 1)
		{
			if (func_156() == 105)
			{
				if (func_150(21))
				{
					if (func_1588(114, 2) != 2)
					{
						func_1617(114, 2, 2);
						func_1616(114, 1, func_480());
						return false;
					}
					if (func_1590(114, 1, 1, 0) && !func_1590(114, 1, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (func_1588(114, 3) != 1)
		{
			if (func_156() == 5)
			{
				if (func_150(34))
				{
					if (func_1588(114, 2) != 3)
					{
						func_1617(114, 2, 3);
						func_1616(114, 2, func_480());
						return false;
					}
					if (func_1590(114, 2, 1, 0) && !func_1590(114, 2, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (func_1588(114, 4) != 1)
		{
			if (func_156() == 92)
			{
				if (func_150(55))
				{
					if (func_1588(114, 2) != 4)
					{
						func_1617(114, 2, 4);
						func_1616(114, 3, func_480());
						return false;
					}
					if (func_1590(114, 3, 1, 0) && !func_1590(114, 3, 8, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1619(var uParam0)
{
	if (-1829635046 == func_1856(81053684))
	{
		if (func_1857(uParam0))
		{
			return true;
		}
	}
	else if (func_1858(-525676072, uParam0))
	{
		if (func_1857(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_1620(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return Global_23118[iParam0]->f_10;
}

float func_1621(int iParam0, vector3 vParam1)
{
	if (func_1859(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

void func_1622(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_466() - fParam1);
	func_1860(uParam0, 1);
	func_1861(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1623(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

var func_1624(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_1625(int iParam0, int iParam1)
{
	iVar0 = -1406986790;
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = _0xb292203008ebbaac(iParam1);
	if (iVar0 == 788161705)
	{
		StringCopy(Global_1393529->f_288[iParam0], "0840_S_M_M_MarketVendor_01_BLACK_01", 64);
	}
	else if (get_random_int_in_range(0, 4) >= 2)
	{
		StringCopy(Global_1393529->f_288[iParam0], "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[iParam0], "0839_S_M_M_MarketVendor_01_WHITE_02", 64);
	}
}

int func_1626(int iParam0)
{
	switch (iParam0)
	{
		case 82:
			return 463;
		default:
			break;
	}
	return -1;
}

int func_1627()
{
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (&Global_40.f_9479[iVar0] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1628(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = 13;
		while (iVar0 >= 0)
		{
			if (&Global_40.f_9479[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0 = (iVar0 + -1);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			if (&Global_40.f_9479[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1629(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_690(iVar2) != 0 && _0x800df3fc913355f3(func_277(iVar2)))
		{
			if (func_277(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_1630(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	if (!func_693(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1631(int iParam0)
{
	if (!func_1176(iParam0))
	{
		return false;
	}
	if ((((((((((((((((iParam0 == 0 || iParam0 == 7) || iParam0 == 17) || iParam0 == 29) || iParam0 == 28) || iParam0 == 39) || iParam0 == 42) || iParam0 == 43) || iParam0 == 47) || iParam0 == 61) || iParam0 == 73) || iParam0 == 75) || iParam0 == 74) || iParam0 == 87) || iParam0 == 95) || iParam0 == 90) || iParam0 == 91)
	{
		return true;
	}
	return false;
}

bool func_1632(int iParam0)
{
	if (!func_686(iParam0))
	{
		return false;
	}
	if ((((((((((((((((iParam0 == 8 || iParam0 == 10) || iParam0 == 9) || iParam0 == 17) || iParam0 == 5) || iParam0 == 15) || iParam0 == 33) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14) || iParam0 == 18) || iParam0 == 19) || iParam0 == 22) || iParam0 == 20) || iParam0 == 2) || iParam0 == 1) || iParam0 == 21)
	{
		return true;
	}
	iVar0 = func_1172(func_156(), iParam0);
	if ((iVar0 == 27 || iVar0 == 18) || iVar0 == 98)
	{
		return true;
	}
	return false;
}

void func_1633(int iParam0, int iParam1)
{
	if (!func_686(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

bool func_1634(int iParam0)
{
	if ((is_ped_injured(iParam0) || is_ped_fatally_injured(iParam0)) || get_entity_health(iParam0) < get_entity_max_health(iParam0, false))
	{
		return true;
	}
	return false;
}

bool func_1635(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_867((*Global_1347702)[iParam0]->f_15);
}

bool func_1636(int iParam0)
{
	if (func_36() != -1)
	{
		return false;
	}
	return func_486((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1637(int iParam0, int iParam1)
{
	if (!func_1281(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1638(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1862() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1863(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1864(), 12);
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
			else if (func_1865() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1866(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1865(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1867(), 13);
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
			else if (func_1868() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1869(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1868(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1637(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1639(int iParam0, int iParam1, int iParam2)
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

bool func_1640(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1641(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1642(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1870(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_1480(iVar2, 1, 0) || func_1872(func_1871(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1647(func_1870(iVar0))), func_1647(func_1870(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1865() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1873(iVar0)), func_1873(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1866() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1873(iVar0)), func_1873(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1873(iVar0)), func_1873(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1875(iParam3, func_1874(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1876(iVar2) - iParam7) >= func_1637(iParam3, func_1877(iVar0));
				}
				else
				{
					bVar1 = func_1876(iVar2) >= func_1637(iParam3, func_1877(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1876(iVar2) + iParam7) >= func_1637(iParam3, func_1877(iVar0));
			}
			else
			{
				bVar1 = func_1876(iVar2) >= func_1637(iParam3, func_1877(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1878(iVar2)), func_1878(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1879(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1880(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1880(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1868() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1881(iVar0)), func_1881(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1869() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1881(iVar0)), func_1881(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1881(iVar0)), func_1881(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1875(iParam3, func_1874(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1876(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1882(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1882(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_876(iVar2)), func_876(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1643(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1867() >= 13)
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

bool func_1644(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_304(func_1170(0)) && ((func_646(0) == 1 || func_646(0) == 8) || func_646(0) == 6))
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

var func_1645(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_1646(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

char* func_1647(int iParam0)
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

void func_1648(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1649(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			_copy_memory(Global_1934765->f_318[iVar0], Global_1934765->f_318[iVar0 + 1], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_1650()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1651(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1652();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_1883(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1652()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_1884(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_1653(int iParam0)
{
	iVar0 = func_1715(iParam0, 1);
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

void func_1654()
{
	func_1653(-939420910);
	func_1653(-1187950766);
	func_1653(356365161);
	func_1653(753127042);
	func_1653(-2038424081);
	func_1653(1884271742);
	func_1653(459290420);
}

void func_1655()
{
	func_1653(704802028);
	func_1653(588987611);
	func_1653(2008888900);
	func_1653(1649996811);
	func_1653(227918160);
	func_1653(168171957);
	func_1653(1193080109);
	func_1653(-491981251);
	func_1653(-639037538);
	func_1653(-618620429);
}

void func_1656(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_1207(iParam1);
	if (iVar0 == -1)
	{
		func_1885(iParam0, iParam1, fParam3);
		func_1651(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_1649(iVar0);
		func_1885(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_1651(bParam2, fParam3);
		return;
	}
}

int func_1657(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_1718(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = _get_prev_weather_type_hash_name();
	iVar2 = func_1719(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = _get_next_weather_type_hash_name();
	iVar4 = func_1719(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	_0xdd560abef5d3784c(&iVar5, &iVar6);
	iVar7 = func_1719(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar2) && is_bit_set(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = _0x7f4ce164d9a11dfe();
		if (!is_bit_set(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_1886(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					_set_weather_type(iVar10, true, false, false, 0f, false);
				}
				else
				{
					_set_weather_type(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		case 1077154516:
			iVar11 = 1420204096;
			break;
		case 54488187:
			iVar11 = -702816767;
			break;
		case -1368127279:
			iVar11 = -173507739;
			break;
		case -1324765740:
			iVar11 = 1632247697;
			break;
		case 1620037762:
			iVar11 = 821931868;
			break;
		case -1119640448:
			iVar11 = 1632247697;
			break;
		case -857562377:
			iVar11 = 1632247697;
			break;
		case -1015925347:
			iVar11 = -173507739;
			break;
		case -193557170:
			iVar11 = 821931868;
			break;
		case -579939614:
			iVar11 = -1148613331;
			break;
		case 100010212:
			iVar11 = 821931868;
			break;
		case 880414984:
			iVar11 = 2082228755;
			break;
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		_set_weather_type(iVar11, true, false, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

bool func_1658(int iParam0, bool bParam1)
{
	if (func_1887(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_574(5000))
		{
			return true;
		}
	}
	switch (func_646(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_1659(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1724(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1660(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_1661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
	}
	return false;
}

int func_1662(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return &(Global_1934765->f_318[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_1663()
{
	return &Global_1899516;
}

int func_1664(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_1665(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1666(int iParam0, int iParam1)
{
	if (Global_1945917->f_6 >= 0 && (get_game_timer() - Global_1945917->f_6) <= 1000)
	{
		if (does_entity_exist(&Global_1945917))
		{
			if (is_entity_a_ped(&Global_1945917) && get_ped_index_from_entity_index(&Global_1945917) == Global_35)
			{
				if (_does_volume_exist(iParam1) && _0xf256a75210c5c0eb(iParam1, Global_1945917->f_3))
				{
					return true;
				}
				else if (((is_itemset_valid(iParam0) && does_entity_exist(Global_1945917->f_1)) && is_entity_a_ped(Global_1945917->f_1)) && is_in_itemset(Global_1945917->f_1, iParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_1667(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

void func_1668(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_36() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_1669(int iParam0)
{
	switch (func_1296(iParam0))
	{
		case 1:
			iVar0 = func_375(iParam0);
			return func_1888(iVar0);
		case 8:
			iVar1 = func_375(iParam0);
			if (func_376((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_1889(iVar1);
			}
			break;
	}
	return -1;
}

void func_1670(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_36() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_1890(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_1891();
		Global_1898077->f_9 = func_1892(Global_1894899->f_2);
		func_1893(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_1671()
{
	if (!func_486((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_486((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_486((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_486((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_486((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_486((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_486((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_1672(int iParam0, int iParam1)
{
	if (!func_304(iParam0))
	{
		return;
	}
	func_1894(iParam0, iParam1);
}

void func_1673(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1895(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_1896(Global_1935630, 4194304);
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

int func_1674(bool bParam0)
{
	if (!bParam0 && func_1320(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1675(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_1676(int iParam0, bool bParam1)
{
	if (func_36() != -1)
	{
		return;
	}
	if (func_1170(0) != iParam0)
	{
		return;
	}
	if (func_1897(iParam0))
	{
		if (bParam1)
		{
			func_1898(-525676072);
		}
		else
		{
			func_1899(-525676072);
		}
	}
}

int func_1677(int iParam0)
{
	return func_1901(func_1900(iParam0));
}

void func_1678(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_1679(int iParam0)
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

bool func_1680(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_1681(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_1682()
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

bool func_1683(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1263(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1684(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1335(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1685(int iParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			iVar0 = get_train_carriage(iParam1, iParam2);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				return is_ped_on_specific_vehicle(iParam0, iVar0);
			}
		}
	}
	return false;
}

bool func_1686(int iParam0)
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

bool func_1687(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1688(var uParam0, int iParam1, int iParam2, var uParam3, vector3 vParam4, var uParam7, var uParam8)
{
	Var0 = uParam0;
	Var0.f_2 = -1008236233;
	Var0.f_3 = func_1283(iParam2);
	Var0.f_4 = iParam1;
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return;
	}
	iVar16 = (*Global_1425371)[iParam2]->f_9;
	(*Global_1425371)[iParam2]->f_10[iVar16] = uParam3;
	(*Global_1425371)[iParam2]->f_10[iVar16]->f_1 = { vParam4 };
	(*Global_1425371)[iParam2]->f_10[iVar16]->f_4 = uParam7;
	(*Global_1425371)[iParam2]->f_10[iVar16]->f_5 = uParam8;
	while (_datafile_get_num_children(Var0, Var0.f_1) > iVar5)
	{
		iVar6[iVar5] = -1;
		iVar11[iVar5] = -1;
		Var0.f_3 = iVar5;
		Var0.f_2 = -1882285204;
		_datafile_get_int(iVar6[iVar5], &Var0);
		Var0.f_2 = 674301239;
		_datafile_get_int(iVar11[iVar5], &Var0);
		(*Global_1425371)[iParam2]->f_10[iVar16]->f_6[iVar5] = &iVar6[iVar5];
		(*Global_1425371)[iParam2]->f_10[iVar16]->f_6[iVar5]->f_1 = &iVar11[iVar5];
		iVar5++;
	}
	(*Global_1425371)[iParam2]->f_9++;
	if ((*Global_1425371)[iParam2]->f_10[iVar16]->f_5)
	{
		if (_0xd9bf3ed8efb67ea3(uParam3, vParam4, &uVar17))
		{
			_0x7408b5c66ba31adb((*Global_1425371)[iParam2]->f_1, uParam3, uVar17, &(iVar6[0]), &(iVar11[0]), &(iVar6[1]), &(iVar11[1]), &(iVar6[2]), &(iVar11[2]), &(iVar6[3]), &(iVar11[3]));
		}
	}
}

void func_1689(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_1690(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_36() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_103(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_1902(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1237(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_1903(iVar0, 512, 1);
			}
			else
			{
				func_1904(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_1691(int iParam0)
{
	return iParam0 & 31;
}

int func_1692()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1693(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_1694(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1905(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_1692())
	{
		return -1;
	}
	iVar0 = func_1693(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1894(iVar1, 0);
	func_1906(iVar1, 0);
	func_1342(iVar1, 0);
	func_1341(iVar1, 0);
	func_1907(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1908(iVar1, iParam4);
	}
	return iVar1;
}

int func_1695(int iParam0)
{
	if (!func_304(iParam0))
	{
		return -15;
	}
	return func_1909(iParam0);
}

int func_1696(bool bParam0)
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
						if (func_376((*Global_1347702)[iVar1]->f_12, 1))
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
							if (func_740(iVar2) && !func_759(iVar2))
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

var func_1697(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1698(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1910(sParam1));
}

void func_1699(int iParam0, int iParam1, int iParam2)
{
	func_1310(iParam0, iParam2);
	if (func_1032(iParam0))
	{
		func_755((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_867((*Global_1347702)[iParam0]->f_15))
		{
			func_1245((*Global_1347702)[iParam0]->f_15, 0, 2);
		}
	}
}

void func_1700(int iParam0)
{
	func_1702();
	if (!func_327(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0];
}

bool func_1701(int iParam0)
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
	else if (!func_796(iParam0))
	{
		return false;
	}
	fVar0 = vdist2(get_entity_coords((*Global_1347702)[iParam0]->f_43, false, false), func_784((*Global_1347702)[iParam0]->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return false;
	}
	return true;
}

void func_1702()
{
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_1911(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_327(iVar1) && Global_1347702[iVar1] == iVar0)
			{
				if (does_blip_exist((*Global_1347702)[iVar1]->f_37))
				{
					func_821(iVar1, 0);
					func_806(iVar1, func_784(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_1703(int iParam0)
{
	if (func_376((*Global_1347702)[iParam0]->f_12, 4))
	{
		iVar0 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_1912(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = get_hash_key("toast_log_blips");
	}
	if (func_376((*Global_1347702)[iParam0]->f_12, 67108864))
	{
		func_1478("MISSION_COMPLETE", &((*Global_1347702)[iParam0]->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		_uilog_set_pending_details_id(1, func_1708(iParam0));
		func_1645("MISSION_COMPLETE", &((*Global_1347702)[iParam0]->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

char[] func_1704(int iParam0)
{
	if (!func_304(iParam0))
	{
		return cVar0;
	}
	switch (func_1296(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_1913(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_375(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_1301(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_1705(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_304(iParam0))
	{
		return;
	}
	if (func_1018(iParam0) == 4)
	{
		func_1914(iParam0, func_480());
		if (!func_788(iParam0) == 5 && !func_788(iParam0) == 6)
		{
			if (bParam3)
			{
				func_1672(iParam0, 6);
			}
			else
			{
				func_1672(iParam0, 5);
			}
			func_1677(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_1673(1);
	}
	iVar0 = func_1296(iParam0);
	bVar1 = func_36() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_1915(0, 2);
		if (!bVar1 && bParam1)
		{
			func_1916();
		}
	}
	else
	{
		func_1674(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_1917(iParam0);
	}
	else
	{
		Var2 = { func_1365(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_359(32768))
		{
			Var4 = { func_1365(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_788(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_375(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_375(iParam0)]->f_8), true);
						}
					}
					else if ((func_375(iParam0) != 95 && func_375(iParam0) != 82) && !func_376((*Global_1347702)[func_375(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_375(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_375(iParam0)]->f_8), true);
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
		func_1919(func_375(iParam0), iVar6, func_1918());
	}
	else if (iVar0 == 8)
	{
		func_1920(func_375(iParam0), iVar6, func_1918(), func_366());
	}
	if (!func_788(iParam0) == 5 && !func_788(iParam0) == 6)
	{
		iVar9 = func_1921(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_566(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_1922(func_375(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1393((iVar10 - 20), 0, iVar10);
					iVar11 = func_1393((iVar11 - 10), 0, iVar11);
				}
				func_1923(1);
				func_656(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_656(45, 0, 1);
				break;
			case 8:
				iVar10 = func_1924(func_375(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1393((iVar10 - 20), 0, iVar10);
					iVar11 = func_1393((iVar11 - 10), 0, iVar11);
				}
				func_656(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_1925(func_375(iParam0)))
				{
					func_1926(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_656(120, 0, 1);
				break;
			case 2:
				func_656(120, 0, 1);
				break;
			case 6:
				func_656(func_1927(func_1722(iParam0)), 0, 1);
				break;
			case 5:
				func_656(120, 0, 1);
				break;
		}
	}
	func_1676(iParam0, 1);
	func_1914(iParam0, func_480());
	func_1677(iParam0);
	if ((!func_788(iParam0) == 0 && bParam1) && func_36() == -1)
	{
		iVar12 = func_1669(iParam0);
		if (iVar12 != -1)
		{
			func_1670(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_1671();
			if (iVar12 != -1)
			{
				func_1670(0);
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
				switch (func_375(iParam0))
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
				if (func_327(func_375(iParam0)) && func_376((*Global_1347702)[func_375(iParam0)]->f_12, 4))
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
				if (func_375(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_299();
				}
				break;
			case 8:
				if (func_375(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_299();
				}
				break;
		}
	}
	if (!func_788(iParam0) == 5 && !func_788(iParam0) == 6)
	{
		if (bParam3)
		{
			func_1672(iParam0, 6);
		}
		else
		{
			func_1672(iParam0, 5);
		}
		func_1677(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_375(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_1928();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_1929(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(-1267972061);
						func_1929(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(1619534881);
						func_1929(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(-755457379);
						func_1929(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(1015404643);
						func_1929(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(-1724192342);
						func_1929(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(1310680212);
						func_1929(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(-566881549);
						func_1929(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(-1753730528);
						func_1929(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(147796381);
						func_1929(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(-378547623);
						func_1929(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(829545206);
						func_1929(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1930(891318243);
						func_1929(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1931();
						func_1932(967523420);
						func_1933();
						func_1934();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_1935(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_1929(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_102(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_102(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_1936(304805134, 1, 1);
						if (!func_486((*Global_1347702)[21]->f_15, 1))
						{
							func_1705((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_1937();
						break;
					case 26:
						func_1938();
						break;
					case 17:
						func_1939(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_318())
						{
							func_1940(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_290(-514575035, -1))
						{
							iVar15 = func_480();
							func_583(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_1941(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_318())
						{
							func_1940(1529685685);
						}
						break;
					case 34:
						if (func_318())
						{
							func_1940(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_1942();
						break;
					case 37:
						func_1943();
						if (func_1944())
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
						func_1945();
						break;
					case 43:
						func_1946();
						break;
					case 44:
						if (!func_486((*Global_1347702)[82]->f_15, 1))
						{
							func_1705((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_486((*Global_1347702)[83]->f_15, 1))
						{
							func_1705((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_1947();
						break;
					case 59:
						func_1948();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_1949();
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
						func_1950();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_102(451, 0);
						}
						if (!func_1951(-1992824800))
						{
							if (func_1951(1520110311))
							{
								iVar16 = func_480();
								func_583(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_1941(1937177603, iVar16, 1);
							}
						}
						if (func_1302(4))
						{
							if (!func_1480(684296857, 1, 0))
							{
								iVar17 = func_480();
								func_583(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_1941(-1439688706, iVar17, 1);
							}
						}
						func_1929(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1929(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_1952(89200);
						func_1952(2300);
						func_1952(2300);
						break;
					case 68:
						func_1953();
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
						func_1954();
						func_1952(-139100);
						break;
					case 69:
						if (func_486((*Global_1347702)[9]->f_15, 1))
						{
							func_1952(-6000);
						}
						break;
					case 70:
						func_1952(23400);
						func_1952(1900);
						func_1952(-15000);
						break;
					case 71:
						func_1952(-5500);
						break;
				}
				break;
			case 8:
				switch (func_375(iParam0))
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
						{
