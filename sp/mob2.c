void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_241 = 1;
	iLocal_242 = 2;
	iLocal_243 = 3;
	iLocal_244 = 4;
	iLocal_245 = 5;
	iLocal_246 = 6;
	iLocal_247 = 7;
	iLocal_248 = 25;
	iLocal_287 = 2;
	vLocal_727 = { 2747.294f, -1069.217f, 46.944f };
	vLocal_730 = { 2695.708f, -1061.576f, 46.905f };
	vLocal_733 = { 2725.716f, -1060.933f, 47.225f };
	vLocal_736 = { 2734.709f, -1086.076f, 45.9407f };
	vLocal_751 = { 0.75f, 2.5f, 0f };
	vLocal_754 = { func_1(7, 20) };
	vLocal_757 = { func_1(7, 21) };
	vLocal_760 = { func_1(7, 23) };
	iLocal_797 = -1;
	fLocal_808 = 1f;
	fLocal_809 = 2f;
	sLocal_821 = "OFFSCREEN_FORESHADOW_WOOD_STONE_CRASH";
	sLocal_822 = "OFFSCREEN_WOOD_STONE_CRASH";
	sLocal_823 = "POLICE_WHISTLE_MULTI";
	sLocal_824 = "MOB2_SOUNDSET";
	sLocal_825 = "PL_POLICE_DISCOVER_BODY_ALT";
	sLocal_826 = "pl_drunk";
	sLocal_827 = "pl_exit_left";
	sLocal_828 = "pl_exit_right";
	sLocal_829 = "pl_Lt_shoot";
	sLocal_830 = "pl_Rt_shoot";
	sLocal_831 = "mob2_intro_dutch";
	sLocal_832 = "mob2_intro_john";
	sLocal_833 = "mob2_ToCemetery_JohnMounts";
	sLocal_834 = "mob2_ToCemetery_JohnLeads";
	sLocal_835 = "mob2_JohnWalkCemetery";
	sLocal_836 = "mob2_InvestigateCemetery_JohnToMausoleum";
	sLocal_837 = "mob2_PoliceSearch_01East";
	sLocal_838 = "mob2_PoliceSearch_02Center";
	sLocal_839 = "mob2_PoliceSearch_03West";
	sLocal_840 = "mob2_PoliceSearch_04Exit";
	sLocal_841 = "mob2_PoliceSearch_05Exit";
	sLocal_842 = "mob2_RedHer_Drunk_ExitLeft";
	sLocal_843 = "mob2_RedHer_Drunk_ExitRight";
	sLocal_844 = "mob2_ToDutch_John";
	sLocal_845 = "mob2_JohnCombat";
	sLocal_846 = "mob2_Dutch_HorseWalk";
	sLocal_847 = "mob2_ArthurWalkMansion";
	sLocal_848 = "MOB2_INT_LIB_1";
	sLocal_850 = "G_M_M_UNIBRONTEGOONS_01";
	sLocal_851 = "G_M_M_UniBronteGoons_01^1";
	fLocal_1495 = 2f;
	fLocal_1496 = 10f;
	fLocal_1497 = 20f;
	fLocal_1498 = 10f;
	iLocal_1668 = 1;
	iLocal_1669 = 1;
	iLocal_1670 = 1;
	iLocal_1671 = 1;
	iLocal_1672 = 1;
	iLocal_1673 = 1;
	iLocal_1674 = 1;
	iLocal_1675 = 1;
	iLocal_1676 = 1;
	iLocal_1677 = 1;
	iLocal_1678 = 1;
	iLocal_1679 = 1;
	iLocal_1680 = 1;
	iLocal_1681 = 1;
	iLocal_1716 = 98537260;
	iLocal_1987 = -516807739;
	iLocal_1988 = -777091906;
	iLocal_1989 = 291427558;
	iLocal_1990 = 596190197;
	iLocal_1991 = -637058511;
	iLocal_1992 = -821998382;
	iLocal_1993 = 986162257;
	iLocal_1994 = 568349786;
	iLocal_1995 = 286634637;
	iLocal_1996 = -1939849033;
	iLocal_1997 = -1281804213;
	iLocal_1998 = -345078944;
	iLocal_1999 = -1583648841;
	iLocal_2000 = 1375261715;
	iLocal_2001 = -1109316634;
	iLocal_2002 = 354881770;
	iLocal_2003 = -1618074186;
	if (has_force_cleanup_occurred(4642))
	{
		func_2(&uLocal_2238, 1073741824);
		func_3(&uLocal_2238, 1);
		terminate_this_thread();
	}
	while (!func_4(64))
	{
		wait(0);
	}
	func_5(&uScriptParam_0, &uLocal_2238);
	func_6(&uLocal_2238);
	while (!func_7(&uLocal_2238, -2147483648))
	{
		func_8(&uLocal_2238);
		wait(0);
	}
	while (!func_3(&uLocal_2238, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

Vector3 func_1(int iParam0, int iParam1)
{
	return func_9(iParam0, iParam1);
}

void func_2(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_3(char[4] cParam0, bool bParam1)
{
	if (func_10(cParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_11(cParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_12(Global_43801))
		{
			func_13(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_15(func_14(cParam0->f_607), 0, 2);
		func_16();
		func_17(1);
		func_18(1, 0);
		func_19(cParam0, 1);
		func_20(0);
		_uilog_mark_all_entries_availability(0, "");
		Global_36605 = 0;
		func_21(3);
		if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
		{
			_set_scenario_type_enabled_hash(-2012097661, true);
		}
		terminate_this_thread();
	}
	if (!bParam1)
	{
		if (!func_7(cParam0, 1048576))
		{
			if (func_22() == 0)
			{
				func_23(0);
			}
			else if (func_24(cParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_24(cParam0) == 1 || func_24(cParam0) == 2)
					{
						if (func_25(&(cParam0->f_8269)) && func_26(&(cParam0->f_8269)))
						{
							func_27(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_28(&(cParam0->f_13118)))
					{
						func_29(&(cParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_2(cParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_7(cParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_30(cParam0, bVar1)) && !func_31()) && !func_7(cParam0, 80))
						{
							if (!bVar1)
							{
								func_32(cParam0);
							}
							return false;
						}
						if (func_7(cParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_24(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_33(cParam0))
								{
									cParam0->f_13104 = get_game_timer();
								}
							}
							if ((cParam0->f_13104 != -1 && get_game_timer() > cParam0->f_13104 + 4000) || bVar1)
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else if (func_24(cParam0) == 1)
						{
							if (func_30(cParam0, bVar1))
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						is_screen_fading_in();
						if (!is_screen_faded_out())
						{
							return false;
						}
					}
				}
			}
			else if (func_7(cParam0, 2))
			{
				if (!is_screen_faded_out())
				{
					if (!is_screen_fading_out())
					{
						do_screen_fade_out(1000);
					}
					return false;
				}
				if (_0x1b065a2bf7953815(1) == 1)
				{
					return false;
				}
			}
			if (!func_34() && func_24(cParam0) != 0)
			{
				func_38(cParam0, func_36(func_35(cParam0)), func_36(func_37(cParam0)), func_35(cParam0), func_37(cParam0));
			}
		}
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		if (check_ownership_of_anim_scene(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
	}
	func_2(cParam0, 1048576);
	if (!func_7(cParam0, 2097152))
	{
		if (!func_11(cParam0))
		{
			return false;
		}
		func_2(cParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_39(&(cParam0->f_8269));
	if (func_25(&(cParam0->f_8269)))
	{
		func_40(&(cParam0->f_8269));
	}
	set_gps_active(false);
	set_player_invincible(get_player_index(), false);
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	set_random_trains(false);
	func_41(1);
	func_42(1);
	_0xc5eb2755fa25f1e9(1);
	func_43(0);
	func_44();
	func_21(3);
	if (!func_7(cParam0, 8))
	{
		_display_hud_component(-1679307491);
		_display_hud_component(724769646);
	}
	func_17(1);
	func_45();
	func_46();
	set_mission_name(false, 0);
	func_47();
	_set_milliseconds_per_game_minute(2000);
	pause_clock(false, 0);
	_0x914071ff93af2692(player_id(), 1f);
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_48(cParam0);
	func_49(1, 0);
	func_50(2);
	if (!Global_1935630->f_12)
	{
		set_ped_config_flag(Global_35, 141, false);
		_0xaac0ee3b4999abb5(Global_35, false);
		_0xb832f1a686b9b810(Global_35, func_51(), 0);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		set_ped_config_flag(Global_35, 446, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
		func_52(Global_35);
		set_ped_config_flag(Global_35, 170, false);
		set_ped_config_flag(Global_35, 43, false);
		set_ped_config_flag(Global_35, 360, false);
	}
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(get_player_index());
	}
	set_everyone_ignore_player(get_player_index(), false);
	if (does_cam_exist(cParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(cParam0->f_609.f_2, false);
	}
	func_53(&(cParam0->f_10792));
	func_54();
	stop_gameplay_hint(true);
	func_41(1);
	func_55();
	if (func_56())
	{
		_0x2f9ac754fe179d58(0.3f);
	}
	func_57(0, 14);
	bVar2 = false;
	if (func_24(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_58(cParam0);
	}
	func_59(cParam0, 0, !bVar2, bVar2);
	func_60(cParam0, !bVar2);
	func_61(0);
	func_61(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_62(0);
	func_64(func_63(cParam0));
	func_65(func_63(cParam0));
	func_66(0);
	func_67(0);
	func_68(func_24(cParam0));
	func_69(cParam0);
	if (!bVar2)
	{
		func_18(1, 0);
	}
	if (func_24(cParam0) != 1)
	{
		func_70(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_71(1);
	func_72(0);
	func_73(Global_1935630, 2097152);
	func_20(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_24(cParam0) == 0)
	{
		func_74((*Global_1835011)[cParam0->f_607]->f_1);
	}
	func_75();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_24(cParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_7(cParam0, 4)) && !func_7(cParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_76(cParam0);
				func_77(cParam0);
				func_78();
				func_80(func_79(), 0);
				if (func_22() == 0)
				{
					func_81(0);
				}
				func_82(cParam0->f_607);
				bVar3 = func_83();
				if (!func_84(32768))
				{
					func_85(func_14(cParam0->f_607), !func_7(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_86(func_14(cParam0->f_607), bVar3);
				}
				func_19(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_87(cParam0));
				}
				func_16();
				if (func_84(32768))
				{
					do_screen_fade_out(0);
					func_88();
					func_89(0);
				}
				else if (func_7(cParam0, 2))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(0);
					}
					func_90(1);
					func_91();
					func_92(6);
					func_93(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_94(func_14(cParam0->f_607));
				func_95();
				if (func_24(cParam0) == 2)
				{
					func_97(func_96(-1876607090), 1);
				}
				_0x55f37f5f3f2475e1();
				_0x062b4a4a3396351d(get_player_index());
				_0x07e8b8b20570271c(get_player_index());
				break;
			case 5:
				if (func_22() == 0)
				{
					func_81(0);
				}
				func_95();
				Var4 = { func_96(-1876607090) };
				_0x0fee2561120f3333(&Var4);
				func_15(func_14(cParam0->f_607), 0, 2);
				break;
			default:
				func_85(func_14(cParam0->f_607), 1, 1, 0, 1);
				func_16();
				break;
		}
		if (func_24(cParam0) != 0)
		{
			Var6 = { func_98(cParam0) };
			func_99(func_14(cParam0->f_607), func_24(cParam0), &Var6, 0, 0, func_7(cParam0, 64));
		}
	}
	func_100(1);
	func_21(3);
	func_101(cParam0, 4096);
	return true;
}

bool func_4(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_5(var uParam0, char[4] cParam1)
{
	_0xed9582b3da8f02b4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = create_itemset(true);
	if (!func_22() == 0)
	{
		if (is_itemset_valid(Global_43616) && get_itemset_size(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < get_itemset_size(Global_43616))
			{
				iVar2 = get_indexed_item_in_itemset(iVar1, Global_43616);
				iVar3 = _get_entity_from_item(iVar2);
				if (((!is_entity_dead(iVar3) && is_entity_a_ped(iVar3)) && !is_in_itemset(iVar2, iVar0)) && get_ped_index_from_entity_index(iVar3) != Global_35)
				{
					add_to_itemset(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	func_102(cParam1);
	if (!func_22() == 0)
	{
		if (func_103(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!is_entity_dead(&(cParam1->f_7375.f_13[iVar4])) && is_entity_a_ped(&(cParam1->f_7375.f_13[iVar4]))) && !is_in_itemset(&(cParam1->f_7375.f_13[iVar4]), iVar0)) && get_ped_index_from_entity_index(&(cParam1->f_7375.f_13[iVar4])) != Global_35)
				{
					add_to_itemset(&(cParam1->f_7375.f_13[iVar4]), iVar0);
				}
				iVar4++;
			}
		}
	}
	if (get_itemset_size(iVar0) > 0)
	{
		_0xf008e0ba1fe1d644(get_itemset_size(iVar0));
	}
	destroy_itemset(iVar0);
	if (func_104())
	{
		func_105(cParam1, 4194304);
	}
	if (func_106())
	{
		func_105(cParam1, 8388608);
	}
	if (func_107())
	{
		if (!func_106() && !func_104())
		{
			func_105(cParam1, 4);
		}
		else
		{
			if (func_106())
			{
			}
			if (func_104())
			{
			}
		}
		func_109(cParam1, func_108());
	}
	func_110(cParam1, uParam0);
	func_111(cParam1);
	if (cParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((cParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_6(char[4] cParam0)
{
	cVar0 = func_112(cParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_113();
		func_114(&cVar0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_115(1);
	func_116();
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_47();
	func_42(func_117(cParam0));
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_118(func_79()))
	{
		_0x2161278c6322f740(16384, 0, 0, -1, -1, 0);
	}
	func_119(1, 0, 1);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	delete_all_trains();
	set_random_trains(false);
	func_41(0);
	func_120(cParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_121(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_122(cParam0, 16384) && (func_123(cParam0, func_35(cParam0), 2) || func_107()))
		{
			set_player_control(get_player_index(), false, 0, false);
		}
		clear_ped_wetness(Global_35);
		clear_ped_blood_damage(Global_35);
		remove_particle_fx_from_entity(Global_35);
		if (get_current_ped_weapon(Global_35, &iVar1, true, 0, false))
		{
			if ((((_0x2c83212a7aa51d3d(iVar1) || iVar1 == 1549070292) || iVar1 == 1030402560) || iVar1 == -135813381) || iVar1 == -351498939)
			{
				if (!func_107() && !func_123(cParam0, func_35(cParam0), 2))
				{
				}
			}
			else if (!func_124(iVar1) && !func_84(32768))
			{
				remove_weapon_from_ped(Global_35, iVar1, true, -142743235);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0xb832f1a686b9b810(Global_35, false, 0);
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
		func_125(cParam0);
	}
	func_72(1);
	func_41(0);
	func_126(cParam0, -1038436471);
	iLocal_125 = func_127(cParam0);
	iLocal_125 = iLocal_125;
	if (!Global_1935630->f_12)
	{
		if (!func_107())
		{
			Var2 = { func_36(func_35(cParam0)) };
			if (func_35(cParam0) != 0)
			{
				Var2 = { func_128(cParam0->f_607) };
			}
			if (!func_129(Var2))
			{
				func_105(cParam0, 1048576);
			}
			func_109(cParam0, 0);
			if (func_130(cParam0, 3) || func_131())
			{
				func_132(cParam0, func_128(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_133(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_109(cParam0, func_108());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[cParam0->f_607]->f_8), 0, func_134(func_35(cParam0)), func_107());
	}
	func_135(cParam0);
	func_136(cParam0, 0);
	func_137(cParam0, 0);
	if (!func_138(cParam0, func_35(cParam0)))
	{
		func_109(cParam0, 0);
	}
	func_139(cParam0);
	func_140(cParam0);
	func_141(cParam0);
	func_105(cParam0, 2097152);
	func_142(cParam0, func_35(cParam0), 134217728);
	if (func_84(32768))
	{
		func_2(cParam0, 4);
	}
	func_143(cParam0);
	func_144(cParam0, func_35(cParam0));
	func_145(func_63(cParam0));
	if (!func_122(cParam0, 65536))
	{
		func_146(func_63(cParam0));
	}
	func_147(cParam0, player_ped_id(), "ARTHUR", 0);
	func_148(cParam0);
	func_149(cParam0);
	func_150(cParam0);
	func_151(cParam0, 30f);
	func_152(cParam0, 40f);
	func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_100(0);
	_0xa6a3a3f96b8b030e();
	func_20(1);
	_uilog_mark_all_entries_availability(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_112(cParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_7(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_8(char[4] cParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_118(func_79()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_123(cParam0, func_35(cParam0), 16384))
	{
		func_154();
	}
	if (!func_10(cParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_10(cParam0, 2048))
	{
		func_155(1, 0);
	}
	switch (func_156(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_157(func_63(cParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_105(cParam0, 64);
			}
			func_158(cParam0, 0);
			func_159(cParam0);
			if (func_160(cParam0))
			{
				if (!is_entity_dead(func_161(cParam0)) && func_130(cParam0, 3))
				{
					freeze_entity_position(func_161(cParam0), false);
				}
				func_162(cParam0, 1);
			}
			if (func_7(cParam0, -2147483648))
			{
				func_162(cParam0, 2);
			}
			break;
		case 1:
			if (func_163(cParam0))
			{
				func_2(cParam0, -2147483648);
				func_162(cParam0, 2);
			}
			func_158(cParam0, func_164(cParam0, func_35(cParam0)) > 4);
			break;
		case 2:
			if (func_3(cParam0, 0))
			{
				func_2(cParam0, -2147483648);
				func_162(cParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_156(cParam0) < 2)
	{
	}
}

Vector3 func_9(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2654.905f, -1092.331f, 47.6211f;
				case 1:
					return 2654.468f, -1089.171f, 47.3474f;
				case 2:
					return 2655.111f, -1085.499f, 47.0788f;
				case 3:
					return 2656.097f, -1089.138f, 47.3672f;
				case 4:
					return 2769.529f, -1061.033f, 45.9406f;
				case 5:
					return 2765.671f, -1060.773f, 45.9406f;
				case 6:
					return 2695.919f, -1061.158f, 45.8905f;
				case 7:
					return 2772.293f, -1048.173f, 46.1173f;
				case 8:
					return 2774.499f, -1047.432f, 46.1173f;
				case 9:
					return 2679.835f, -1070.343f, 45.8905f;
				case 10:
					return 2723.053f, -1084.05f, 45.9047f;
				case 11:
					return 2708.864f, -1081.733f, 45.89f;
				case 12:
					return 2735.246f, -1052.564f, 45.9407f;
				case 13:
					return 2762.654f, -1065.569f, 45.8905f;
				case 14:
					return 2681.123f, -1070.978f, 45.8905f;
				case 15:
					return 2773.308f, -1060.042f, 45.9406f;
				case 16:
					return 2770.168f, -1048.808f, 45.9408f;
				case 17:
					return 2774.291f, -1048.932f, 45.9408f;
				case 18:
					return 2692.069f, -1068.648f, 45.8438f;
				case 19:
					return 2679.004f, -1070.425f, 48.0897f;
				case 20:
					return 2669.648f, -1074.253f, 46.0353f;
				case 21:
					return 2732.249f, -1074.502f, 46.1405f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2770.203f, -1047.469f, 46.1169f;
				case 1:
					return 2774.215f, -1047.474f, 46.1174f;
				case 2:
					return 2771.068f, -1050.409f, 46.1405f;
				case 3:
					return 2773.654f, -1050.181f, 45.9398f;
				case 4:
					return 2763.39f, -1058.77f, 45.9406f;
				case 5:
					return 2773.588f, -1065.09f, 45.9406f;
				case 6:
					return 2767.343f, -1059.985f, 46.1404f;
				case 7:
					return 2762.737f, -1067.5f, 45.9373f;
				case 8:
					return 2782.911f, -1085.784f, 45.9904f;
				case 9:
					return 2729.537f, -1067.722f, 45.9243f;
				case 10:
					return 2768.991f, -1077.767f, 45.8906f;
				case 11:
					return 2744.327f, -1059.633f, 45.9407f;
				case 12:
					return 2750.18f, -1067.313f, 45.8191f;
				case 13:
					return 2770.078f, -1063.868f, 46.9063f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2712.702f, -1066.13f, 46.0648f;
				case 1:
					return 2717.372f, -1068.214f, 46.2431f;
				case 2:
					return 2755.755f, -1067.262f, 45.8368f;
				case 3:
					return 2745.537f, -1081.217f, 45.9408f;
				case 4:
					return 2742.487f, -1064.206f, 45.9405f;
				case 5:
					return 2742.485f, -1063.831f, 45.9405f;
				case 6:
					return 2763.16f, -1062.638f, 45.9405f;
				case 7:
					return 2750.237f, -1059.173f, 45.9407f;
				case 8:
					return 2747.607f, -1061.616f, 45.9373f;
				case 9:
					return 2749.339f, -1049.909f, 45.9373f;
				case 10:
					return 2760.694f, -1059.31f, 45.9373f;
				case 11:
					return 2737.867f, -1068.233f, 45.8895f;
				case 12:
					return 2738.984f, -1074.213f, 45.9402f;
				case 13:
					return 2743.798f, -1059.146f, 45.8905f;
				case 14:
					return 2762.505f, -1059.874f, 46.1405f;
				case 15:
					return 2768.179f, -1076.425f, 45.8936f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2654.338f, -1083.591f, 47.0648f;
				case 1:
					return 2657.501f, -1086.889f, 47.2431f;
				case 2:
					return 2403.856f, -1216.125f, 44.565f;
				case 3:
					return 2412.708f, -1202.192f, 44.5917f;
				case 4:
					return 2412.475f, -1216.148f, 44.79f;
				case 5:
					return 2412.503f, -1219.647f, 44.8191f;
				case 6:
					return 2412.757f, -1198.959f, 44.5102f;
				case 7:
					return 2405.557f, -1219.992f, 44.711f;
				case 8:
					return 2405.246f, -1212.211f, 44.7326f;
				case 9:
					return 2412.51f, -1205.628f, 44.652f;
				case 10:
					return 2412.472f, -1219.397f, 45.0703f;
				case 11:
					return 2404.624f, -1216.114f, 44.8972f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2801.533f, -1062.101f, 32.1194f;
				case 1:
					return 2663.811f, -1016.464f, 53.1732f;
				case 2:
					return 2656.967f, -1091.932f, 47.8225f;
				case 3:
					return 2663.577f, -1074.062f, 44.3723f;
				case 4:
					return 2405.145f, -1217.136f, 44.6686f;
				case 5:
					return 2405.637f, -1214.856f, 44.6606f;
				case 6:
					return 2412.399f, -1205.733f, 44.6656f;
				case 7:
					return 2412.358f, -1202.054f, 44.5667f;
				case 8:
					return 2641.382f, -1001.059f, 42.6294f;
				case 9:
					return 2381.692f, -1220.09f, 46.1788f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2406.13f, -1217.54f, 44.6684f;
				case 1:
					return 2394.19f, -1216.801f, 45.5603f;
				case 2:
					return 2402.612f, -1215.862f, 44.989f;
				case 3:
					return 2392.486f, -1215.038f, 46.1553f;
				case 4:
					return 2396.172f, -1213.484f, 44.9667f;
				case 5:
					return 2412.094f, -1199.831f, 44.8496f;
				case 6:
					return 2411.916f, -1206.238f, 44.8402f;
				case 7:
					return 2412.802f, -1203.394f, 45.6996f;
				case 8:
					return 2410.937f, -1206.282f, 44.7836f;
				case 9:
					return 2411.305f, -1203.209f, 44.9809f;
				case 10:
					return 2410.765f, -1204.213f, 44.5807f;
				case 11:
					return 2405.458f, -1207.755f, 44.9112f;
				case 12:
					return 2407.009f, -1209.56f, 44.6501f;
				case 13:
					return 2408.131f, -1208.446f, 44.6569f;
				case 14:
					return 2404.857f, -1212.458f, 44.9245f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2449.89f, -1203.165f, 46.7766f;
				case 1:
					return 2406.075f, -1216.684f, 44.6452f;
				case 2:
					return 2405.882f, -1215.542f, 44.659f;
				case 3:
					return 2407.878f, -1218.173f, 44.6975f;
				case 4:
					return 2405.458f, -1217.891f, 44.6693f;
				case 5:
					return 2401.928f, -1216.341f, 44.7902f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2774.14f, -1079.245f, 46.3906f;
				case 1:
					return 2772.356f, -1081.304f, 45.8414f;
				case 2:
					return 2729.732f, -1067.965f, 45.9243f;
				case 3:
					return 2720.851f, -1067.208f, 45.9243f;
				case 4:
					return 2747.399f, -1087.223f, 45.8906f;
				case 5:
					return 2746.789f, -1089.931f, 45.9405f;
				case 6:
					return 2669.161f, -1072.899f, 45.6735f;
				case 7:
					return 2673.04f, -1070.357f, 46.874f;
				case 8:
					return 2673.682f, -1073.287f, 46.876f;
				case 9:
					return 2725.172f, -1067.344f, 46.2702f;
				case 10:
					return 2669.262f, -1053.565f, 45.8906f;
				case 11:
					return 2688.979f, -1068.094f, 45.8905f;
				case 12:
					return 2656.3f, -1089.662f, 47.3105f;
				case 13:
					return 2724.684f, -1114.448f, 48.5162f;
				case 14:
					return 2725.31f, -1020.242f, 43.7219f;
				case 15:
					return 2798.703f, -1063.817f, 44.3694f;
				case 16:
					return 2639.862f, -1079.463f, 49.3616f;
				case 17:
					return 2728.248f, -1070.474f, 45.9243f;
				case 18:
					return 2719f, -1067.626f, 45.8985f;
				case 19:
					return 2779.753f, -1089.965f, 45.8472f;
				case 20:
					return 2781.567f, -1092.06f, 45.8585f;
				case 21:
					return 2748.048f, -1092.516f, 46.71f;
				case 22:
					return 2747.507f, -1088.123f, 45.9408f;
				case 23:
					return 2764.018f, -1071.255f, 45.8439f;
				case 24:
					return 2758.032f, -1067.921f, 46.1769f;
				case 25:
					return 2760.36f, -1066.177f, 46.1033f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2725.198f, -1067.539f, 46.3997f;
				case 1:
					return 2772.604f, -1070.079f, 44.3073f;
				case 2:
					return 2782.639f, -1058.611f, 43.7264f;
				case 3:
					return 2784.523f, -1067.015f, 43.7264f;
				case 4:
					return 2774.684f, -1091.662f, 45.8906f;
				case 5:
					return 2725.434f, -1076.405f, 44.8977f;
				case 6:
					return 2447.88f, -1200.035f, 46.8266f;
				case 7:
					return 2725.373f, -1100.244f, 47.223f;
				case 8:
					return 2447.26f, -1200.916f, 46.6278f;
				case 9:
					return 2409.256f, -1216.001f, 44.7459f;
				case 10:
					return 2404.758f, -1240.843f, 41.212f;
				case 11:
					return 2416.311f, -1133.43f, 51.8044f;
				case 12:
					return 2468.909f, -1186.072f, 46.9388f;
				case 13:
					return 2490.258f, -1149.541f, 44.6629f;
				case 14:
					return 2674.417f, -1136.794f, 55.9362f;
				case 15:
					return 2578.577f, -1140.109f, 50.1594f;
				case 16:
					return 2884.313f, -1075.507f, 33.1037f;
				case 17:
					return 2607.259f, -1472.981f, 72.3137f;
				case 18:
					return 2717.58f, -1249.393f, 49.0637f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2412.768f, -1203.981f, 44.6411f;
				case 1:
					return 2412.857f, -1218.218f, 44.78f;
				case 2:
					return 2500.791f, -1162.096f, 48.1949f;
				case 3:
					return 2464.253f, -1187.555f, 46.7335f;
				case 4:
					return 2431.28f, -1181.367f, 45.2942f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2758.171f, -1091.667f, 45.8904f;
				case 1:
					return 2743.469f, -1089.266f, 45.9405f;
				case 2:
					return 2741.398f, -1088.275f, 46.3905f;
				case 3:
					return 2728.821f, -1087.285f, 46.1405f;
				case 4:
					return 2720.317f, -1086.607f, 45.8904f;
				case 5:
					return 2681.42f, -1091.757f, 46.8027f;
				case 6:
					return 2678.447f, -1084.103f, 45.8887f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2747.888f, -1060.573f, 45.9391f;
				case 1:
					return 2743.353f, -1060.523f, 45.9391f;
				case 2:
					return 2738.504f, -1059.834f, 45.9381f;
				case 3:
					return 2718.747f, -1073.54f, 45.9975f;
				case 4:
					return 2706.275f, -1069.079f, 45.947f;
				case 5:
					return 2738.513f, -1059.761f, 45.9383f;
				case 6:
					return 2714.109f, -1064.962f, 45.9494f;
				case 7:
					return 2706.129f, -1065.385f, 45.9368f;
				case 8:
					return 2747.561f, -1058.422f, 45.9407f;
				case 9:
					return 2743.181f, -1058.249f, 45.9407f;
				case 10:
					return 2719.088f, -1071.722f, 46.0028f;
				case 11:
					return 2705.935f, -1067.324f, 45.8447f;
				case 12:
					return 2738.335f, -1057.305f, 45.9402f;
				case 13:
					return 2738.337f, -1057.489f, 45.9401f;
				case 14:
					return 2713.941f, -1067.394f, 45.841f;
				case 15:
					return 2705.927f, -1067.296f, 45.8448f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2723.902f, -1069.206f, 46.6545f;
				case 1:
					return 2723.055f, -1067.341f, 46.6545f;
				case 2:
					return 2723.814f, -1065.412f, 46.9045f;
				case 3:
					return 2725.787f, -1070.158f, 46.6545f;
				case 4:
					return 2727.894f, -1069.292f, 46.7496f;
				case 5:
					return 2728.612f, -1067.354f, 46.4242f;
				case 6:
					return 2727.675f, -1065.153f, 46.6087f;
				case 7:
					return 2726.006f, -1064.6f, 46.9045f;
				case 8:
					return 2764.502f, -1056.678f, 45.9406f;
				case 9:
					return 2758.541f, -1054.269f, 45.9407f;
				case 10:
					return 2756.099f, -1057.107f, 45.9407f;
				case 11:
					return 2744.126f, -1059.806f, 45.9405f;
				case 12:
					return 2741.653f, -1065.128f, 45.93f;
				case 13:
					return 2737.808f, -1069.556f, 45.9293f;
				case 14:
					return 2735.637f, -1065.454f, 45.9542f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2744.59f, -1052.485f, 45.8905f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 2747.924f, -1060.725f, 46.1405f;
				case 1:
					return 2738.511f, -1057.782f, 46.1405f;
				case 2:
					return 2729.845f, -1050.326f, 46.6405f;
				case 3:
					return 2731.151f, -1053.563f, 46.3905f;
				case 4:
					return 2743.317f, -1065.012f, 46.3905f;
				case 5:
					return 2720.08f, -1060.072f, 46.8905f;
				case 6:
					return 2730.637f, -1069.497f, 46.8905f;
				case 7:
					return 2730.711f, -1065.501f, 46.8477f;
				case 8:
					return 2718.781f, -1073.5f, 46.0977f;
				case 9:
					return 2714.113f, -1065.078f, 46.8477f;
				case 10:
					return 2738.302f, -1064.977f, 47.0977f;
				case 11:
					return 2739.44f, -1069.5f, 46.8477f;
				case 12:
					return 2762.294f, -1078.084f, 47.0977f;
				case 13:
					return 2764.887f, -1083.698f, 46.8477f;
				case 14:
					return 2740.514f, -1074.489f, 46.8477f;
				case 15:
					return 2733.269f, -1086.745f, 46.8477f;
				case 16:
					return 2706.232f, -1069.275f, 46.8477f;
				case 17:
					return 2706.225f, -1065.365f, 46.8477f;
				case 18:
					return 2713.794f, -1051.116f, 46.8477f;
				case 19:
					return 2705.919f, -1052.21f, 46.8477f;
				case 20:
					return 2715.735f, -1085.706f, 46.8477f;
				case 21:
					return 2706.143f, -1076.491f, 46.8477f;
				case 22:
					return 2701.896f, -1081.102f, 46.8477f;
				case 23:
					return 2713.022f, -1075.265f, 46.8477f;
				case 24:
					return 2697.208f, -1069.379f, 46.8437f;
				case 25:
					return 2688.563f, -1065.629f, 46.8437f;
				case 26:
					return 2692.832f, -1069.068f, 46.8437f;
				case 27:
					return 2681.252f, -1067.552f, 46.8437f;
				case 28:
					return 2675.245f, -1073.776f, 46.8437f;
				case 29:
					return 2697.03f, -1089.322f, 46.8437f;
				case 30:
					return 2678.061f, -1083.807f, 46.8437f;
				case 31:
					return 2693.726f, -1053.032f, 46.8437f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2699.911f, -1045.312f, 46.3826f;
				case 1:
					return 2712.664f, -1092.774f, 46.8826f;
				case 2:
					return 2740.448f, -1045.597f, 46.6285f;
				case 3:
					return 2715.927f, -1049.778f, 46.8785f;
				case 4:
					return 2719.018f, -1091.9f, 46.8785f;
				case 5:
					return 2737.028f, -1094.575f, 46.8785f;
				case 6:
					return 2755.148f, -1089.308f, 46.8785f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1881.357f, -1834.353f, 42.2776f;
				case 1:
					return 1877.093f, -1844.032f, 42.5276f;
				case 2:
					return 1860.291f, -1834.868f, 41.7776f;
				case 3:
					return 1863.474f, -1835.987f, 41.5276f;
				case 4:
					return 1862.463f, -1833.72f, 41.7776f;
				case 5:
					return 1870.453f, -1831.664f, 41.5276f;
				case 6:
					return 1874.554f, -1841.422f, 42.0276f;
				case 7:
					return 1874.174f, -1843.236f, 42.5311f;
				case 8:
					return 1898.745f, -1848.148f, 41.5267f;
				case 9:
					return 1899.797f, -1846.507f, 41.5267f;
				case 10:
					return 1888.068f, -1856.13f, 41.7767f;
				case 11:
					return 1888.926f, -1855.313f, 41.7767f;
				case 12:
					return 1892.521f, -1854.4f, 42.2767f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 2686.671f, -1068.833f, 46.0937f;
				case 1:
					return 2686.584f, -1072.603f, 46.0937f;
				case 2:
					return 2705.259f, -1067.284f, 46.0937f;
				case 3:
					return 2705.139f, -1062.311f, 46.0937f;
				case 4:
					return 2713.196f, -1067.354f, 46.0937f;
				case 5:
					return 2713.248f, -1060.203f, 46.0937f;
				case 6:
					return 2725.173f, -1072.709f, 46.0936f;
				case 7:
					return 2717.775f, -1072.761f, 46.0936f;
				case 8:
					return 2725.366f, -1091.016f, 46.8633f;
				case 9:
					return 2734.375f, -1092.211f, 46.1133f;
				case 10:
					return 2738.038f, -1067.273f, 45.8633f;
				case 11:
					return 2738.009f, -1063.725f, 46.1133f;
				case 12:
					return 2760.97f, -1068.249f, 46.1032f;
				case 13:
					return 2763.646f, -1065.14f, 46.1032f;
				case 14:
					return 2778.816f, -1088.803f, 45.8532f;
				case 15:
					return 2782.696f, -1085.764f, 46.1032f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_10(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_11(char[4] cParam0)
{
	func_165();
	Global_1934765->f_271 = 0;
	func_166(0);
	func_167();
	if (!func_168(iVar1519, 2))
	{
		func_169(cParam0);
		func_170(&uLocal_1522, 2);
		return false;
	}
	func_171(0);
	func_172(0);
	func_173(0);
	func_174(1);
	func_175(1);
	func_176(cParam0);
	func_177();
	if (!func_168(iVar1519, 4))
	{
		func_178();
		func_170(&uLocal_1522, 4);
		return false;
	}
	func_179();
	if (func_24(cParam0) != 0)
	{
		func_180();
	}
	func_181();
	func_182();
	func_183();
	func_184();
	func_185();
	func_186();
	func_187();
	func_188();
	func_189(0);
	if (!func_168(iVar1519, 1))
	{
		func_190();
		func_170(&uLocal_1522, 1);
		return false;
	}
	set_create_random_cops(true);
	set_ped_reset_flag(Global_35, 168, false);
	if (!is_control_enabled(0, -719620017))
	{
		enable_control_action(0, -719620017, true);
	}
	remove_all_cover_blocking_areas();
	func_191();
	func_192(cParam0, bVar1638, 1);
	func_193(7);
	return true;
}

bool func_12(int iParam0)
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

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_12(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_194(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_195(iVar0);
	*iParam0 = 0;
}

int func_14(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_15(int iParam0, bool bParam1, int iParam2)
{
	if (!func_197(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_198(iParam0) && !func_199(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_198(iParam0))
	{
		iParam2 = -1;
	}
	if (func_201(iParam0) == 3 || (func_201(iParam0) == 1 && _0x01f4d242765c6b24(func_200(iParam0))))
	{
		func_203(func_202(iParam0), func_200(iParam0), iParam2);
		if ((!func_197(Global_1572864->f_8) && !func_204(0, 1, 0)) && !func_205(&Global_1935630, 32768))
		{
			iVar0 = func_206(iParam0);
			if (iVar0 != -1)
			{
				func_207(0);
			}
			else if (func_202(iParam0) == 8)
			{
				iVar0 = func_208();
				if (iVar0 != -1)
				{
					func_207(0);
				}
			}
		}
	}
	func_209(iParam0, 0);
	if (func_210(0) == iParam0)
	{
		func_42(1);
		func_211(0);
		func_212(1);
	}
	func_213(iParam0, 1);
	func_214(iParam0);
}

void func_16()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_215(0);
	func_216(0);
	func_66(0);
	func_67(0);
	func_217(0);
	func_218(1f);
}

void func_17(bool bParam0)
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
		func_219();
	}
	_0xa0cefcea390aab9b(0);
}

void func_18(bool bParam0, int iParam1)
{
	if (func_220())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_221())
		{
			func_115(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_19(char[4] cParam0, bool bParam1)
{
	Var0 = func_200(func_14(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_134(func_35(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_222(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_24(cParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[cParam0->f_607]->f_8), &Var0);
}

void func_20(int iParam0)
{
	Global_36580 = iParam0;
}

int func_21(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_223(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_22()
{
	return Global_1572887->f_12;
}

void func_23(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_24(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_25(var uParam0)
{
	return uParam0->f_2501;
}

bool func_26(var uParam0)
{
	return uParam0->f_2500;
}

void func_27(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_224((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_225((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_225((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_225((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_28(var uParam0)
{
	return func_226(*uParam0, 1);
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_28(uParam0))
	{
		func_227(uParam0);
	}
}

bool func_30(char[4] cParam0, bool bParam1)
{
	if (func_10(cParam0, 128) && func_31())
	{
		return true;
	}
	if (func_228(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_33(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_31()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_32(char[4] cParam0)
{
	func_229(!func_7(cParam0, 32), 1);
	func_2(cParam0, 32);
}

bool func_33(char[4] cParam0)
{
	return true;
}

bool func_34()
{
	return func_197(Global_1572864->f_8);
}

int func_35(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_231(&Var0, func_230(6, 0));
			break;
		case 1:
			func_231(&Var0, func_230(4, 4));
			break;
		case 2:
			func_231(&Var0, func_230(0, 2));
			break;
		case 3:
			func_231(&Var0, func_230(1, 2));
			break;
		case 4:
			func_231(&Var0, func_230(2, 0));
			break;
		case 5:
			func_231(&Var0, func_230(7, 0));
			break;
		case 6:
			func_231(&Var0, func_230(3, 0));
			break;
		case 7:
			func_231(&Var0, func_230(5, 0));
			break;
		case 25:
			func_231(&Var0, func_230(16, 4));
			break;
		default:
			Var0 = { Global_36 };
			break;
	}
	return Var0;
}

int func_37(char[4] cParam0)
{
	return func_232(cParam0, func_35(cParam0));
}

void func_38(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_215(0);
	func_233(func_14(cParam0->f_607), Var0, Var4, func_134(iParam9), func_134(iParam10));
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_224((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_234((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	_datafile_unload(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_235(iVar0, 4096);
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
	if (func_22() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_73(Global_1935630, 4194304);
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

void func_43(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_44()
{
	func_237();
	func_238();
	func_239();
	func_240();
}

void func_45()
{
	if (func_241())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_31())
		{
			func_242(1);
		}
	}
}

void func_46()
{
	Global_1894899->f_186 = 0;
	func_243();
}

void func_47()
{
	_uilog_clear_cached_objective();
}

void func_48(char[4] cParam0)
{
	if (func_22() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 0:
			break;
		case 1:
			break;
		case 31:
			_set_weather_type(-173507739, false, true, false, 0f, false);
			break;
	}
}

void func_49(int iParam0, int iParam1)
{
	func_244(1, iParam0, iParam1);
}

void func_50(int iParam0)
{
	switch (func_22())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_51()
{
	return (func_245() || func_56());
}

void func_52(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_53(var uParam0)
{
	func_246(uParam0);
	func_247(uParam0, 0);
	uParam0->f_1 = 0;
	func_45();
}

void func_54()
{
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		*Global_43619[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_55()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_248(iVar0);
		iVar0++;
	}
	func_249();
	func_250();
}

bool func_56()
{
	return Global_1894899 & 2 != 0;
}

void func_57(bool bParam0, int iParam1)
{
	if (func_251())
	{
		if (func_252(255))
		{
			if (!func_253(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_254(Global_1894899->f_2) && func_255(Global_1894899->f_2))
		{
			func_256(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_257(16);
			}
		}
		else if (func_254(Global_1894899->f_2) && !func_258(Global_1894899->f_2, 2))
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
		func_259(16);
		func_260();
		if (bVar0)
		{
			func_259(1);
		}
	}
}

void func_58(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_261(cParam0->f_5423[iVar0]))
		{
			if (!is_entity_dead(&(cParam0->f_5423[iVar0])))
			{
				if (is_entity_a_ped(&(cParam0->f_5423[iVar0])))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(&(cParam0->f_5423[iVar0])), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_262(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_263(cParam0->f_5421))
		{
			iVar1 = func_264(cParam0->f_5421, iVar0);
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(iVar1), false, true);
				}
			}
			iVar0++;
		}
	}
}

void func_59(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_265(iVar1))
		{
			bVar2 = Global_1360165[iVar0];
			func_266(cParam0, iVar1, bVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_60(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	bVar0 = func_267(cParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (is_entity_dead(bVar0) || is_ped_injured(bVar0))
	{
	}
	iVar1 = func_268(bVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_269(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_270(7);
		}
		else
		{
			func_271(bVar0, 0);
		}
		func_272(cParam0, 16);
		set_ped_config_flag(bVar0, 219, false);
	}
}

void func_61(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_274(iParam0, 32);
	func_275();
}

void func_62(bool bParam0)
{
	Global_1956584 = bParam0;
	if (bParam0)
	{
		_set_minimap_fow_should_update(false, 0);
	}
	else
	{
		_set_minimap_fow_should_update(true, 0);
	}
}

int func_63(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_64(int iParam0)
{
	Var0 = { func_276(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_65(int iParam0)
{
	Var0 = { func_277(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_66(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_217(1);
	}
}

void func_67(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_217(0);
	}
}

void func_68(int iParam0)
{
}

void func_69(char[4] cParam0)
{
	func_278(&(cParam0->f_13121));
}

void func_70(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_224((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_225((*uParam1)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_71(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_72(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_74(int iParam0)
{
	iVar0 = func_202(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_279(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_280(iVar1))
			{
				if (func_281(iVar1, 4))
				{
					func_282(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_283(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_279(iParam0);
		if (iVar3 == 59)
		{
			func_283(1);
		}
		else if (iVar3 == 61)
		{
			func_283(0);
		}
		else if (iVar3 == 83)
		{
			func_283(0);
		}
	}
}

void func_75()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_280(iVar0))
		{
			if (func_281(iVar0, 4))
			{
				if (func_281(iVar0, 16))
				{
					func_284(iVar0, 1);
				}
				if (func_281(iVar0, 8))
				{
					func_285(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_76(char[4] cParam0)
{
	if (func_22() == 0)
	{
		return;
	}
	iVar0 = func_35(cParam0);
	iVar1 = func_164(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_286(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_24(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_287(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_288(cParam0);
	}
}

void func_77(char[4] cParam0)
{
	iVar0 = 0;
	if (func_289(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_290(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_78()
{
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

int func_79()
{
	return Global_1894899->f_2;
}

void func_80(int iParam0, bool bParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	bVar0 = func_258(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_291(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_293(iParam0, func_292());
			func_294(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_295(iParam0, 67108864);
		func_293(iParam0, -15);
	}
	func_296(iParam0);
}

void func_81(bool bParam0)
{
	if (!bParam0)
	{
		func_297(11);
	}
	else
	{
		func_298(11);
	}
}

void func_82(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		func_300(262144, 5, 0, 1);
		func_301(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_302(101, 7, 1f, 0, 1);
			func_302(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_83()
{
	return Global_1572864->f_15;
}

bool func_84(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_197(iParam0))
	{
		return;
	}
	if (func_303(iParam0) == 4)
	{
		func_304(iParam0, func_292());
		if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
		{
			if (bParam3)
			{
				func_209(iParam0, 6);
			}
			else
			{
				func_209(iParam0, 5);
			}
			func_214(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_42(1);
	}
	iVar0 = func_202(iParam0);
	bVar1 = func_22() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_305(0, 2);
		if (!bVar1 && bParam1)
		{
			func_306();
		}
	}
	else
	{
		func_211(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_307(iParam0);
	}
	else
	{
		Var2 = { func_96(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_84(32768))
		{
			Var4 = { func_96(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_201(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_279(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_279(iParam0)]->f_8), true);
						}
					}
					else if ((func_279(iParam0) != 95 && func_279(iParam0) != 82) && !func_308((*Global_1347702)[func_279(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_279(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_279(iParam0)]->f_8), true);
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
		func_310(func_279(iParam0), iVar6, func_309());
	}
	else if (iVar0 == 8)
	{
		func_312(func_279(iParam0), iVar6, func_309(), func_311());
	}
	if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
	{
		iVar9 = func_313(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_314(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_315(func_279(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_316((iVar10 - 20), 0, iVar10);
					iVar11 = func_316((iVar11 - 10), 0, iVar11);
				}
				func_317(1);
				func_318(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_318(45, 0, 1);
				break;
			case 8:
				iVar10 = func_319(func_279(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_316((iVar10 - 20), 0, iVar10);
					iVar11 = func_316((iVar11 - 10), 0, iVar11);
				}
				func_318(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_320(func_279(iParam0)))
				{
					func_321(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_318(120, 0, 1);
				break;
			case 2:
				func_318(120, 0, 1);
				break;
			case 6:
				func_318(func_323(func_322(iParam0)), 0, 1);
				break;
			case 5:
				func_318(120, 0, 1);
				break;
		}
	}
	func_213(iParam0, 1);
	func_304(iParam0, func_292());
	func_214(iParam0);
	if ((!func_201(iParam0) == 0 && bParam1) && func_22() == -1)
	{
		iVar12 = func_206(iParam0);
		if (iVar12 != -1)
		{
			func_207(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_208();
			if (iVar12 != -1)
			{
				func_207(0);
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
				switch (func_279(iParam0))
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
				if (func_280(func_279(iParam0)) && func_308((*Global_1347702)[func_279(iParam0)]->f_12, 4))
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
				if (func_279(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_131();
				}
				break;
			case 8:
				if (func_279(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_131();
				}
				break;
		}
	}
	if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
	{
		if (bParam3)
		{
			func_209(iParam0, 6);
		}
		else
		{
			func_209(iParam0, 5);
		}
		func_214(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_279(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_324();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_325(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(-1267972061);
						func_325(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(1619534881);
						func_325(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(-755457379);
						func_325(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(1015404643);
						func_325(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(-1724192342);
						func_325(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(1310680212);
						func_325(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(-566881549);
						func_325(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(-1753730528);
						func_325(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(147796381);
						func_325(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(-378547623);
						func_325(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(829545206);
						func_325(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326(891318243);
						func_325(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327();
						func_328(967523420);
						func_329();
						func_330();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_331(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_325(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_332(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_332(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_333(304805134, 1, 1);
						if (!func_334((*Global_1347702)[21]->f_15, 1))
						{
							func_85((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_335();
						break;
					case 26:
						func_336();
						break;
					case 17:
						func_337(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_338())
						{
							func_339(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_340(-514575035, -1))
						{
							iVar15 = func_292();
							func_341(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_342(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_338())
						{
							func_339(1529685685);
						}
						break;
					case 34:
						if (func_338())
						{
							func_339(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_343();
						break;
					case 37:
						func_344();
						if (func_345())
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
						func_346();
						break;
					case 43:
						func_347();
						break;
					case 44:
						if (!func_334((*Global_1347702)[82]->f_15, 1))
						{
							func_85((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_334((*Global_1347702)[83]->f_15, 1))
						{
							func_85((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_348();
						break;
					case 59:
						func_349();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_350();
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
						func_351();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_332(451, 0);
						}
						if (!func_352(-1992824800))
						{
							if (func_352(1520110311))
							{
								iVar16 = func_292();
								func_341(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_342(1937177603, iVar16, 1);
							}
						}
						if (func_353(4))
						{
							if (!func_354(684296857, 1, 0))
							{
								iVar17 = func_292();
								func_341(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_342(-1439688706, iVar17, 1);
							}
						}
						func_325(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_355(89200);
						func_355(2300);
						func_355(2300);
						break;
					case 68:
						func_356();
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
						func_357();
						func_355(-139100);
						break;
					case 69:
						if (func_334((*Global_1347702)[9]->f_15, 1))
						{
							func_355(-6000);
						}
						break;
					case 70:
						func_355(23400);
						func_355(1900);
						func_355(-15000);
						break;
					case 71:
						func_355(-5500);
						break;
				}
				break;
			case 8:
				switch (func_279(iParam0))
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
						func_358();
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
						func_359();
						break;
					case 66:
						func_360();
						func_361();
						break;
					case 67:
						if (!func_362(6))
						{
							func_363(6);
						}
						if (!func_362(3))
						{
							func_363(3);
						}
						if (func_338())
						{
							func_339(1534638301);
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
						if (func_334((*Global_1835011)[69]->f_1, 1))
						{
							func_364(0);
							func_355(40500);
						}
						else
						{
							func_364(0);
							func_355(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_279(iParam0))
				{
					case 0:
						switch (func_322(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_365(iParam0);
		func_366();
		switch (iVar0)
		{
			case 1:
				switch (func_279(iParam0))
				{
					case 4:
						func_367(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_367(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_367(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_367(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_367(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_367(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_367(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_368(iParam0);
						func_367(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_367(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_367(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_354(-2046502963, 1, 0))
						{
							func_325(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_367(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_367(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_367(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_368(iParam0) == 0)
						{
							func_367(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_367(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_308((*Global_1347702)[func_279(iParam0)]->f_12, 536870912))
				{
					func_369(11, 1);
				}
				switch (func_279(iParam0))
				{
					case 109:
						func_367(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_369(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_367(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_367(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_367(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_367(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_370(0, 10, 11, 2116153146))
				{
					func_367(iParam0, func_368(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 7, 11, -379687487))
				{
					func_367(iParam0, func_371(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 8, 11, -1386089015))
				{
					func_367(iParam0, func_371(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 11, 11, -1952009645))
				{
					func_367(iParam0, func_371(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_370(0, 12, 11, 2065895756))
				{
					func_367(iParam0, func_371(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_201(iParam0) == 0)
			{
				if (func_200(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_200(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_203(func_202(iParam0), func_200(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_279(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_373(func_372(Global_1879514->f_1));
						if (iVar0 == 8 && func_279(iParam0) == 58)
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
						if (func_280(func_279(iParam0)) && func_308((*Global_1347702)[func_279(iParam0)]->f_12, 1))
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
			func_374(bParam2, iVar20);
		}
	}
	func_212(1);
	if ((bVar13 || func_131()) && (func_202(iParam0) == 1 || func_202(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_86(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_200(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_203(func_202(iParam0), func_200(iParam0), iVar0);
		if (func_84(32768))
		{
			iVar1 = func_202(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_370(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_375();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_199(iParam0))
	{
		func_15(iParam0, 0, 2);
	}
	else if (func_198(iParam0))
	{
		if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
		{
			if (bParam1)
			{
				func_209(iParam0, 6);
			}
			else
			{
				func_209(iParam0, 5);
			}
			func_214(iParam0);
		}
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_279(iParam0))
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
			switch (func_279(iParam0))
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

int func_87(char[4] cParam0)
{
	cVar0 = func_112(cParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_88()
{
	func_93(4112);
	func_92(6);
	vVar2 = { func_376((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_377(vVar2, uVar1, uVar0, 0);
	func_378(vVar2);
	Global_40.f_9.f_15 = func_379(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_89(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	func_93(32);
	if (iParam0 == 0)
	{
		func_93(16);
	}
	else if (iParam0 == 1)
	{
		func_93(8);
	}
	func_380();
	Global_43889 = 1;
}

void func_90(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_91()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_381(Var10, 0);
}

void func_92(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_93(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_94(int iParam0)
{
	if (!func_197(iParam0))
	{
		return;
	}
	if (iParam0 != func_210(0))
	{
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	iVar0 = func_202(iParam0);
	if (func_201(iParam0) == 3)
	{
		if (func_200(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_200(iParam0)))
		{
			if (func_202(iParam0) != 1 && func_202(iParam0) != 8)
			{
				func_203(func_202(iParam0), func_200(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_214(iParam0);
	func_42(1);
	func_211(0);
	func_209(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_317(1);
			func_318(15, 0, 1);
			break;
		case 4:
			func_318(10, 0, 1);
			break;
		case 8:
			func_318(10, 0, 1);
			break;
		case 9:
			func_318(10, 0, 1);
			break;
		case 2:
			func_318(10, 0, 1);
			break;
		case 6:
			func_318(10, 0, 1);
			break;
		case 5:
			func_318(10, 0, 1);
			break;
	}
	func_212(1);
}

void func_95()
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Local_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, Local_14);
		bVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(bVar2) && _0x88ad6cc10d8d35b2(bVar2)) && !_0xa7e51b53309eac97(bVar2))
		{
			delete_entity(&bVar2);
		}
		iVar0++;
	}
	destroy_itemset(Local_14);
}

struct<2> func_96(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_97(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<8> func_98(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_99(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_382(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_383(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_383(&(Global_1347343->f_11), 16384);
	}
	if (func_384() >= 2)
	{
		if (!func_382(Global_1347343->f_11, 16384))
		{
			func_383(&(Global_1347343->f_11), 8);
		}
		func_218(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_236(Global_1935630, 2048);
	func_385(bParam5);
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_101(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_102(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*cParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_386(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_205(&Global_1935630, 524288))
	{
		func_73(Global_1935630, 524288);
		func_387(cParam0, 67108864);
	}
}

int func_103(char[4] cParam0)
{
	return func_388(&(cParam0->f_7375));
}

bool func_104()
{
	return Global_1572864->f_14;
}

void func_105(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_106()
{
	return Global_1572864->f_13;
}

bool func_107()
{
	return func_389() != -1;
}

int func_108()
{
	return Global_1572864->f_9;
}

void func_109(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	settimera(0);
}

void func_110(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_390(cParam0);
	cParam0->f_634[0] = 66601;
	cParam0->f_634[1] = 66601;
	cParam0->f_637 = 0;
	func_392(cParam0, *uParam1);
	func_393(cParam0);
}

void func_111(char[4] cParam0)
{
	func_394(cParam0, 32);
	if (func_84(32768))
	{
		func_395(Global_35, func_230(6, 0), 2, 1073741824);
		_0x9587913b9e772d29(Global_35, 0);
	}
	if (func_107() || func_130(cParam0, 2))
	{
		if (does_entity_exist(iVar1646))
		{
			vVar0 = { get_entity_coords(iVar1646, true, false) };
		}
		if (!func_396(vVar0))
		{
			func_397(cParam0, vVar0);
		}
		else
		{
			func_397(cParam0, func_1(8, 12));
		}
	}
	if (!func_107() && !func_130(cParam0, 2))
	{
		iLocal_1641 = func_398(cParam0, 95866989, 0);
		iLocal_1642 = func_398(cParam0, 1944593012, 0);
		iLocal_1652 = func_398(cParam0, 1478983280, 0);
		if (!does_entity_exist(bVar1638))
		{
		}
		else
		{
			set_ped_config_flag(bVar1638, 307, true);
		}
		if (!does_entity_exist(bVar1639))
		{
		}
		if (!does_entity_exist(bVar1649))
		{
		}
		iLocal_1649 = func_222(7);
		_0xf74e134f40192884(iVar1646, 1);
		if (does_entity_exist(iVar1646))
		{
			vVar0 = { get_entity_coords(iVar1646, true, false) };
		}
		if (!func_396(vVar0))
		{
			func_397(cParam0, vVar0);
		}
		else
		{
			func_397(cParam0, func_1(8, 12));
		}
		func_147(cParam0, bVar1649, "MOB2_Guard", 0);
		func_153(cParam0, bVar1649, sVar847, 0, 0, 0, 0);
		func_153(cParam0, bVar1639, 0, 0, 0, 0, 0);
		func_153(cParam0, bVar1638, 0, 0, 0, 0, 0);
		func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
		StringCopy(&cVar3, "MOB2_WNT", 32);
		func_399(cParam0, 0, cVar3);
		func_400(cParam0, 1);
		func_105(cParam0, 16384);
		func_401(cParam0, 262144);
	}
}

char[] func_112(int iParam0)
{
	if (!func_196(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_113()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

void func_114(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_115(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_116()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_402(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_117(char[4] cParam0)
{
	switch (cParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return false;
	}
	return true;
}

bool func_118(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_258(iParam0, 33554432);
}

void func_119(bool bParam0, int iParam1, bool bParam2)
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
				bVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(bVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(bVar3));
					}
					else
					{
						delete_ped(&bVar3);
					}
				}
				else
				{
					clear_ped_tasks(bVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(bVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	destroy_itemset(iVar0);
}

void func_120(char[4] cParam0)
{
	if (func_22() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 31:
			_set_weather_type(-702816767, false, true, true, 45f, false);
			break;
	}
}

void func_121(int iParam0, bool bParam1)
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

bool func_122(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_123(char[4] cParam0, int iParam1, int iParam2)
{
	return func_168(cParam0->f_1[func_134(iParam1)]->f_11, iParam2);
}

bool func_124(int iParam0)
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

void func_125(char[4] cParam0)
{
	if (func_31())
	{
		func_403(&(cParam0->f_7375));
	}
}

void func_126(char[4] cParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_127(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_128(int iParam0)
{
	return func_404(iParam0);
}

bool func_129(struct<4> Param0)
{
	if (func_84(32768))
	{
		return true;
	}
	return func_405(Param0, Param0.f_3);
}

bool func_130(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_131()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (!func_406())
	{
		return false;
	}
	if (!func_334((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_334((*Global_1835011)[2]->f_1, 1) && func_334((*Global_1347702)[120]->f_15, 1)) && !func_334((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_334((*Global_1835011)[37]->f_1, 1) && !func_334((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_334((*Global_1835011)[57]->f_1, 1) && !func_334((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_334((*Global_1835011)[26]->f_1, 1) && !func_334((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_334((*Global_1835011)[62]->f_1, 1) && func_334((*Global_1835011)[63]->f_1, 1)) && !func_334((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_334((*Global_1835011)[75]->f_1, 1) && !func_334((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_334((*Global_1835011)[76]->f_1, 1) && !func_334((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_334((*Global_1835011)[40]->f_1, 1) && func_334((*Global_1835011)[41]->f_1, 1)) && !func_334((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_334((*Global_1835011)[62]->f_1, 1) && func_334((*Global_1835011)[63]->f_1, 1)) && !func_334((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_334((*Global_1835011)[65]->f_1, 1) && func_334((*Global_1835011)[66]->f_1, 1)) && !func_334((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_132(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_122(cParam0, 33554432))
	{
		return;
	}
	if (func_122(cParam0, 4096))
	{
		return;
	}
	if (func_396(vParam1))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		return;
	}
	if (is_screen_faded_in())
	{
		return;
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	if (is_valid_interior(get_interior_at_coords(vParam1)))
	{
		pin_interior_in_memory(get_interior_at_coords(vParam1));
		func_105(cParam0, 8);
	}
	func_105(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_227(&(cParam0->f_603));
}

void func_133(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_134(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_407();
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0)
		{
			return iVar0;
		}
		if (iVar0 == 26)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_135(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_87(cParam0)))
	{
		_uilog_remove_entry(2, func_87(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_87(cParam0)))
	{
		func_408(cParam0->f_607);
	}
}

void func_136(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_137(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_29(&(cParam0->f_600), 1);
}

bool func_138(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_12;
}

void func_139(char[4] cParam0)
{
	func_409(&(cParam0->f_638));
	func_410(&(cParam0->f_819));
	func_411(&(cParam0->f_1020));
	func_412(&(cParam0->f_1081));
	func_413(&(cParam0->f_1126));
	func_414(&(cParam0->f_5147));
	func_415(&(cParam0->f_1124));
	func_416(&(cParam0->f_5188));
	func_417(&(cParam0->f_5239));
	func_418(&(cParam0->f_5249));
	func_419(&(cParam0->f_5265));
	func_420(&(cParam0->f_5286));
}

void func_140(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_421(cParam0, -502353725, 67108863);
	func_421(cParam0, -447184114, 67108863);
	func_421(cParam0, 436323736, 67108863);
	func_421(cParam0, -1326909973, 67108863);
	func_421(cParam0, -419756450, 67108863);
	func_421(cParam0, 178323656, 67108863);
	func_421(cParam0, 319326044, 67108863);
	func_421(cParam0, -274058460, 67108863);
	func_421(cParam0, 1843407141, 67108863);
	func_421(cParam0, -2021891582, 67108863);
	func_421(cParam0, -1311287025, 67108863);
	func_421(cParam0, 681443655, 67108863);
	func_421(cParam0, 1478983280, 67108863);
	func_421(cParam0, -63103461, 126);
	func_421(cParam0, 2088541856, 126);
	func_421(cParam0, -1883388638, 126);
	func_421(cParam0, 1035510041, 126);
	func_421(cParam0, 871271813, 126);
	func_421(cParam0, -1448273283, 56);
	func_421(cParam0, 1966444740, 67108863);
	func_421(cParam0, 993083342, 67108863);
	func_421(cParam0, 98537260, 67108863);
	func_421(cParam0, 989669666, 67108863);
	func_421(cParam0, -2146356753, 32);
	func_421(cParam0, -1067338663, 67108863);
	func_421(cParam0, -502353725, 67108863);
	func_421(cParam0, -447184114, 67108863);
	func_421(cParam0, 436323736, 67108863);
	func_421(cParam0, -1326909973, 67108863);
	func_421(cParam0, -419756450, 67108863);
	func_421(cParam0, 178323656, 67108863);
	func_421(cParam0, 319326044, 67108863);
	func_421(cParam0, -274058460, 67108863);
	func_421(cParam0, 1843407141, 67108863);
	func_421(cParam0, -2021891582, 67108863);
	func_421(cParam0, -1311287025, 67108863);
	func_421(cParam0, 681443655, 67108863);
}

void func_141(char[4] cParam0)
{
	func_422(cParam0, cVar828, 1, 2, -1);
	func_422(cParam0, cVar844, 1, 2, -1);
	func_422(cParam0, cVar829, 1, 2, -1);
	func_422(cParam0, cVar830, 2, 2, -1);
	func_422(cParam0, cVar831, 2, 2, -1);
	func_422(cParam0, cVar832, 4, 2, -1);
	func_422(cParam0, cVar833, 12, 2, -1);
	func_422(cParam0, cVar839, 4, 2, -1);
	func_422(cParam0, cVar840, 4, 2, -1);
	func_422(cParam0, cVar842, 8, 2, -1);
	func_422(cParam0, cVar834, 96, 2, -1);
	func_422(cParam0, cVar835, 96, 2, -1);
	func_422(cParam0, cVar836, 96, 2, -1);
	func_422(cParam0, cVar837, 96, 2, -1);
	func_422(cParam0, cVar838, 96, 2, -1);
	func_422(cParam0, cVar841, 64, 2, -1);
	func_422(cParam0, "mob2_outro_ride_to_camp", 128, 2, -1);
	func_422(cParam0, cVar843, 128, 2, -1);
	func_423(cParam0, "script_story@mob2@leadin@int_b", 1);
	func_423(cParam0, "SCRIPT_STORY@MOB2@IG@IG_unapproved", 67108863);
	func_423(cParam0, "SCRIPT_STORY@MOB2@IG@IG_6_WALK_TALK", 4);
	func_423(cParam0, "MECH_DOORS@LOCKED@1HANDED", 32);
	func_423(cParam0, "AI_DAMAGE@DEAD@BASE", 32);
	func_424(cParam0, "script@story@mob2@leadin@int_a@retry_leadout", uLocal_1682[0], 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@mob2@leadin@int_c@base", uLocal_1710[0], 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@mob2@leadin@int_c@leadin_guard_l", uLocal_1710[1], 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@mob2@leadin@int_c@leadin_guard_r", uLocal_1710[2], 1, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_0_Gate_Enter@action", uLocal_1682[1], 1, 0, "PL_ACTION", 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_3@ig_3", uLocal_1682[3], 4, 0, 0, 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_4@ig_4", uLocal_1682[4], 4, 0, 0, 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_5@ig_5", uLocal_1682[5], 4, 0, 0, 0, 0);
	func_424(cParam0, "script@story@MOB2@ig@IG_30@IG30_John_Hold_Open_Gate", uLocal_1682[18], 4, 0, "pl_ENTER", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_29@IG29_Pick_Up_Robbers_Stash", uLocal_1682[17], 16, 0, "Pl_IG29_ROBBERS_STASH_ENTER", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_8@ig_8", uLocal_1682[7], 32, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_11@ig11_cemetery_drunk_guy", uLocal_1682[9], 4, 0, sVar823, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_14@ig14_John_Reacts", uLocal_1682[10], 4, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@ig_15@ig15_Bats_React_John", uLocal_1682[11], 4, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@ig_16@ig16_ActionLeft", uLocal_1682[12], 8, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@ig_16@ig16_ActionRight", uLocal_1682[13], 8, 0, 0, 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_20@ig20_run_to_gate", uLocal_1682[14], 32, 0, "pbl_run_back", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_23@IG23_Escape", uLocal_1682[16], 96, 0, "Pl_IG23_ESCAPE_TRANS_DOOR_2_P0", 0, 1);
	func_424(cParam0, "script@story@MOB2@ig@IG_22@IG22_Jack_On_Horse", uLocal_1682[15], 128, 0, "PL_IG22_JACK_ON_HORSE", 0, 1);
	func_424(cParam0, "script@story@MOB2@leadin@ext@base", uLocal_1682[19], 64, 1, 0, 0, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_424(cParam0, "script@story@MOB2@ig@ig_17_coverShoot@ig17_coverShoot", uLocal_1704[iVar0], 8, 0, 0, 0, 1);
		func_425(cParam0, &(uLocal_1704[iVar0]), cVar826, 8);
		func_425(cParam0, &(uLocal_1704[iVar0]), cVar827, 8);
		iVar0++;
	}
	func_426(cParam0, 67108863);
	func_421(cParam0, iVar1713, 6);
	func_427(cParam0, 379542007, 3, -1, 0);
	func_427(cParam0, -164645981, 32, -1, 0);
	func_427(cParam0, 1845102363, 64, -1, 0);
	func_428(cParam0, "Mob2", 6);
}

void func_142(char[4] cParam0, int iParam1, int iParam2)
{
	func_170(&(cParam0->f_1[func_134(iParam1)]->f_11), iParam2);
}

void func_143(char[4] cParam0)
{
}

void func_144(char[4] cParam0, int iParam1)
{
	func_429(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_145(int iParam0)
{
	Var0 = { func_276(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_146(int iParam0)
{
	Var0 = { func_277(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_147(char[4] cParam0, bool bParam1, char* sParam2, bool bParam3)
{
	func_430(&(cParam0->f_5310), bParam1, sParam2, bParam3);
}

void func_148(char[4] cParam0)
{
	if (!func_262(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_431() };
	}
}

void func_149(char[4] cParam0)
{
	if (!func_22() == 0 || network_is_host_of_this_script())
	{
		func_29(&(cParam0->f_603), 1);
	}
}

void func_150(char[4] cParam0)
{
}

void func_151(char[4] cParam0, float fParam1)
{
	func_432(&(cParam0->f_7375), fParam1);
}

void func_152(char[4] cParam0, float fParam1)
{
	func_433(&(cParam0->f_7375), fParam1);
}

void func_153(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_434(cParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_386(&(cParam0->f_10792), bParam1, sParam2, bParam6);
}

void func_154()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_155(bool bParam0, bool bParam1)
{
	if (_0x450769c833d58844() && (!bParam0 || !is_cinematic_cam_rendering()))
	{
		_0xc9caeaeec1256e54(-1679307491);
		if (!bParam1)
		{
			disable_control_action(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

int func_156(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_157(int iParam0)
{
	if (!func_196(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_158(char[4] cParam0, bool bParam1)
{
	if (!func_123(cParam0, func_35(cParam0), 134217728))
	{
		func_141(cParam0);
		func_142(cParam0, func_35(cParam0), 134217728);
	}
	if (bParam1 && !func_123(cParam0, func_37(cParam0), 536870912))
	{
		if (func_435(cParam0, func_37(cParam0), 0))
		{
			func_142(cParam0, func_37(cParam0), 536870912);
		}
	}
	if (func_10(cParam0, 8192))
	{
		if (!func_10(cParam0, 536870912))
		{
			if (func_436(&(cParam0->f_1126), func_35(cParam0)))
			{
				func_101(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_435(cParam0, func_35(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_101(cParam0, 8192);
	}
}

void func_159(char[4] cParam0)
{
	func_437(0, 1065353216);
}

bool func_160(char[4] cParam0)
{
	if (func_438(cParam0) < 1)
	{
		func_439(cParam0, func_130(cParam0, 3), !func_10(cParam0, 2097152), cParam0->f_5410, !func_10(cParam0, 32), 0);
		func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_122(cParam0, 4) && !func_107()) && !func_130(cParam0, 3))
	{
		if (!func_122(cParam0, 32))
		{
			if (func_22() == 0)
			{
				func_105(cParam0, 32);
			}
			else
			{
				func_441(cParam0);
			}
		}
		if (func_122(cParam0, 32))
		{
			func_442(cParam0);
		}
	}
	switch (func_438(cParam0))
	{
		case -1:
		case 0:
			func_443(cParam0, 1);
			break;
		case 1:
			if (func_444(cParam0))
			{
				if (func_122(cParam0, 4096))
				{
					func_443(cParam0, 2);
				}
				else
				{
					func_443(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_445(cParam0))
			{
				func_443(cParam0, 3);
			}
			break;
		case 3:
			if (func_446(cParam0))
			{
				func_443(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_161(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_162(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_163(char[4] cParam0)
{
	if (func_35(cParam0) == 26)
	{
		func_447(cParam0, 0);
		return true;
	}
	if (func_448(cParam0))
	{
		iVar0 = func_35(cParam0);
		func_109(cParam0, func_37(cParam0));
		if (func_35(cParam0) == 26)
		{
			func_447(cParam0, 0);
			return true;
		}
		else if (func_123(cParam0, iVar0, 128))
		{
			func_448(cParam0);
		}
	}
	return false;
}

int func_164(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_10;
}

void func_165()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Local_854[iVar0] > -1)
		{
			destroy_tracked_point(&(Local_854[iVar0]));
			Local_854[iVar0] = -1;
		}
		if (Local_854[iVar0]->f_1 > -1)
		{
			destroy_tracked_point(Local_854[iVar0]->f_1);
			Local_854[iVar0]->f_1 = -1;
		}
		if (Local_854[iVar0]->f_2 > -1)
		{
			destroy_tracked_point(Local_854[iVar0]->f_2);
			Local_854[iVar0]->f_2 = -1;
		}
		iVar0++;
	}
}

void func_166(int iParam0)
{
	Global_1934266->f_56 = iParam0;
}

void func_167()
{
	if (!_0x714a0ea7de1167be("Police_Whistle_Distant", sVar822))
	{
		_0x0f2a2175734926d8("Police_Whistle_Distant", sVar822);
	}
}

bool func_168(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_169(char[4] cParam0)
{
	func_449();
	func_450();
	func_451();
	if (!is_entity_dead(Global_35))
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_player_control(get_player_index(), true, 0, false);
		if (_0x2009f8ab7a5e9d6d(get_player_index()))
		{
			_0x12e09e278c6c29b7(get_player_index());
		}
		if (_0xd1f6b912785bfd35(get_player_index()))
		{
			_0x908d4b72854c8f62(get_player_index());
		}
	}
	_0xc67a4910425f11f1(player_id(), 0);
	func_452(Global_35);
	func_453(Global_35);
	_0x949b2f9ed2917f5d(Global_35, 2);
	set_ped_config_flag(Global_35, 334, false);
	set_ped_config_flag(Global_35, 301, false);
	if (!is_entity_dead(bVar1638))
	{
		_0x2b4ce170de09f346(bVar1638, 1718936990);
		set_ped_combat_attributes(bVar1638, 27, false);
	}
	set_ped_config_flag(bVar1638, 307, false);
	if (func_24(cParam0) == 0)
	{
		func_192(cParam0, bVar1639, 1);
		func_266(cParam0, 0, bVar1639, 0, 0, 0, 0);
		func_192(cParam0, bVar1638, 1);
		func_266(cParam0, 1, bVar1638, 0, 0, 0, 0);
		func_192(cParam0, bVar1640, 1);
		func_266(cParam0, 14, bVar1640, 0, 0, 0, 0);
		func_192(cParam0, bVar1641, 1);
		func_266(cParam0, 13, bVar1641, 0, 0, 0, 0);
		func_192(cParam0, bVar1642, 1);
		func_266(cParam0, 3, bVar1642, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(bVar1646, false);
		func_271(bVar1646, 0);
		func_454(iVar1647, 0, 1, 0, 0);
		func_454(iVar1648, 1, 1, 0, 0);
	}
	else
	{
		func_266(cParam0, 0, bVar1639, 0, 1, 0, 0);
		func_266(cParam0, 1, bVar1638, 0, 1, 0, 0);
		func_266(cParam0, 14, bVar1640, 0, 1, 0, 0);
		func_266(cParam0, 13, bVar1641, 0, 1, 0, 0);
		func_266(cParam0, 3, bVar1642, 0, 1, 0, 0);
		func_271(bVar1646, 0);
		func_454(iVar1647, 0, 1, 0, 0);
		func_454(iVar1648, 1, 1, 0, 0);
	}
	func_455();
	func_456();
	func_457();
	func_458();
	func_459();
	func_460(&(Local_14.f_34), 0);
	func_460(&(Local_14.f_29), 0);
	func_460(&(Local_14.f_83), 0);
	func_461();
	if (func_24(cParam0) != 0)
	{
		func_462(cParam0);
	}
}

void func_170(int iParam0, int iParam1)
{
	func_463(iParam0, iParam1);
}

void func_171(bool bParam0)
{
	if (bParam0)
	{
		if (_does_volume_exist(Local_150.f_16))
		{
			_0x19c7567d2f2287d6(Local_150.f_16, 15);
			_0xe9b168527b337bf0(uVar1638, Local_150.f_16);
		}
	}
	else if (_does_volume_exist(Local_150.f_16))
	{
		_0x2c87c3e1c7b96ee2(Local_150.f_16);
	}
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1562 = func_464(func_1(4, 0), func_1(4, 1), func_1(8, 0), vdist(func_1(4, 0), func_1(4, 1)), 0, 0);
		uLocal_1563 = func_465(Local_150.f_70, 0, 0, 0);
		uLocal_1570 = func_465(Local_150.f_67, 0, 0, 0);
		uLocal_1571 = func_465(Local_150.f_78, 0, 0, 0);
		uLocal_1572 = func_465(Local_150.f_68, 0, 0, 0);
		iLocal_1517 = 0;
		while (iVar1514 < 5)
		{
			vVar1 = { func_9(9, iVar1514) };
			fVar4 = func_466(9, iVar1514);
			iVar0 = _create_volume_box_with_custom_name(vVar1, 0f, 0f, 0f, 10f, 10f, 10f, "m_sbiGeneric");
			_0xa07cf1b21b56f041(iVar0, 0f, 0f, fVar4);
			uLocal_1564[iVar1514] = func_465(iVar0, 0, 0, 0);
			iLocal_1517 = iVar1514 + 1;
		}
	}
	else
	{
		if (_0x91a5f9cbebb9d936(uVar1559))
		{
			remove_scenario_blocking_area(uVar1559, false);
		}
		if (_0x91a5f9cbebb9d936(uVar1560))
		{
			remove_scenario_blocking_area(uVar1560, false);
		}
		iLocal_1517 = 0;
		while (iVar1514 < 5)
		{
			if (_0x91a5f9cbebb9d936(&(uLocal_1564[iVar1514])))
			{
				remove_scenario_blocking_area(&(uLocal_1564[iVar1514]), false);
			}
			iLocal_1517 = iVar1514 + 1;
		}
		if (_0x91a5f9cbebb9d936(uVar1567))
		{
			remove_scenario_blocking_area(uVar1567, false);
		}
		if (_0x91a5f9cbebb9d936(uVar1569))
		{
			remove_scenario_blocking_area(uVar1569, false);
		}
		if (_0x91a5f9cbebb9d936(uVar1568))
		{
			remove_scenario_blocking_area(uVar1568, false);
		}
		if (_0x91a5f9cbebb9d936(uVar1570))
		{
			remove_scenario_blocking_area(uVar1570, false);
		}
	}
}

void func_173(bool bParam0)
{
	if (bParam0)
	{
		func_41(0);
		_0xb56d41a694e42e86(Local_150.f_86, 10208, 0, 0, -1, -1, 0);
		_0xc1799fafd2fdf52b(Local_150.f_86, 0, 0, 0);
		_0xb03944057fd735ba(Local_150.f_86, 6, 0);
		_0xb03944057fd735ba(Local_150.f_89, 6, 0);
		func_467(Local_150.f_86, 0, 0, 1, 1, 0);
		func_468(Local_150.f_86, 0);
	}
	else
	{
		_0xd17672447692478e(Local_150.f_69, 0);
		_0xd17672447692478e(Local_150.f_86, 0);
		_0x5a4e1a41e3a02ad0(Local_150.f_86, 6, 0);
		_0x5a4e1a41e3a02ad0(Local_150.f_89, 6, 0);
		_0x74c2b3dc0b294102(Local_150.f_86);
		func_41(1);
	}
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		set_random_trains(true);
	}
	else
	{
		set_random_trains(false);
		_0x4c05b42a8d937796();
		delete_all_trains();
	}
}

void func_175(bool bParam0)
{
	func_469(5, bParam0);
	func_470(1, bParam0, 0);
}

void func_176(char[4] cParam0)
{
	display_radar(true);
	set_police_radar_blips(false);
	func_471(0);
	func_472(1);
	func_473(945612176, 1, 0);
	if (_is_imap_active(-741366935))
	{
		_remove_imap(-741366935);
	}
	if (!_is_imap_active(-800942395))
	{
		_request_imap(-800942395);
	}
	remove_model_hide(2698.51f, -1061.01f, 47.24f, 2f, -2046717337, 1);
	_0x9851de7aec10b4e1(func_1(8, 0), 100f, 1, 0);
}

void func_177()
{
	func_474(0);
}

void func_178()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (_does_volume_exist(&(Local_297[iVar0])))
		{
			_0x74c2b3dc0b294102(&(Local_297[iVar0]));
			_delete_volume(&(Local_297[iVar0]));
		}
		iVar0++;
	}
}

void func_179()
{
	func_475(&iLocal_1619);
	func_475(&iLocal_1620);
	func_475(&iLocal_1621);
	func_476(&iLocal_1622);
	iLocal_1517 = 0;
	while (iVar1515 < 6)
	{
		func_475(iLocal_1630[iVar1515]);
		iLocal_1517 = iVar1515 + 1;
	}
}

void func_180()
{
	clear_weather_type_persist();
	func_477(0, 1103626240);
}

void func_181()
{
	if (does_particle_fx_looped_exist(iVar1652))
	{
		stop_particle_fx_looped(iVar1652, false);
		remove_particle_fx_in_range(func_1(8, 5), 30f);
	}
}

void func_182()
{
	_0x3a77dae8b4fd7586(iVar1992, 0);
	_0x3a77dae8b4fd7586(iVar1993, 0);
	_0x3a77dae8b4fd7586(iVar1987, 0);
	_0x3a77dae8b4fd7586(iVar1988, 0);
	_0x3a77dae8b4fd7586(iVar1989, 1);
}

void func_183()
{
	_0x411189e51b8020ba(Global_35, "Cautious");
}

void func_184()
{
	if (does_entity_exist(iVar1639))
	{
		_0x411189e51b8020ba(iVar1639, "Cautious");
	}
}

void func_185()
{
	func_478(&(Local_14.f_90));
	func_478(&(Local_14.f_99));
	func_478(&(Local_14.f_104));
	if (does_entity_exist(iVar1614))
	{
		delete_entity(&uLocal_1616);
	}
}

void func_186()
{
	if (does_entity_exist(Global_35))
	{
		if (func_479(Global_35, 0))
		{
			_0xaac0ee3b4999abb5(Global_35, false);
		}
	}
	if (does_entity_exist(bVar1640))
	{
		if (func_479(bVar1640, 0))
		{
			_0xaac0ee3b4999abb5(bVar1640, false);
		}
	}
	if (does_entity_exist(bVar1639))
	{
		if (func_479(bVar1639, 0))
		{
			_0xaac0ee3b4999abb5(bVar1639, false);
		}
	}
}

void func_187()
{
	_0x22b3cabeddb538b2(player_id(), 0f);
	set_ped_config_flag(Global_35, 20, false);
}

void func_188()
{
	if (does_group_exist(iVar1558))
	{
		func_480(iVar1558);
	}
}

void func_189(bool bParam0)
{
	if (bParam0)
	{
		func_481(-503955743);
	}
	else
	{
		func_482(-503955743);
	}
}

void func_190()
{
	_delete_volume(Local_150);
	_delete_volume(Local_150.f_1);
	_delete_volume(Local_150.f_2);
	_delete_volume(Local_150.f_3);
	_delete_volume(Local_150.f_4);
	_delete_volume(Local_150.f_5);
	_delete_volume(Local_150.f_6);
	_delete_volume(Local_150.f_7);
	_delete_volume(Local_150.f_8);
	_delete_volume(Local_150.f_9);
	_delete_volume(Local_150.f_10);
	_delete_volume(Local_150.f_11);
	_delete_volume(Local_150.f_12);
	_delete_volume(Local_150.f_13);
	_delete_volume(Local_150.f_14);
	_delete_volume(Local_150.f_15);
	_delete_volume(Local_150.f_16);
	_delete_volume(Local_150.f_17);
	_delete_volume(Local_150.f_18);
	_delete_volume(Local_150.f_19);
	_delete_volume(Local_150.f_20);
	_delete_volume(Local_150.f_21);
	_delete_volume(Local_150.f_22);
	_delete_volume(Local_150.f_23);
	_delete_volume(Local_150.f_24);
	_delete_volume(Local_150.f_25);
	_delete_volume(Local_150.f_26);
	_delete_volume(Local_150.f_27);
	_delete_volume(Local_150.f_28);
	_delete_volume(Local_150.f_29);
	_delete_volume(Local_150.f_30);
	_delete_volume(Local_150.f_31);
	_delete_volume(Local_150.f_32);
	_delete_volume(Local_150.f_33);
	_delete_volume(Local_150.f_34);
	_delete_volume(Local_150.f_35);
	_delete_volume(Local_150.f_36);
	_delete_volume(Local_150.f_37);
	_delete_volume(Local_150.f_38);
	_delete_volume(Local_150.f_39);
	_delete_volume(Local_150.f_40);
	_delete_volume(Local_150.f_41);
	_delete_volume(Local_150.f_42);
	_delete_volume(Local_150.f_43);
	_delete_volume(Local_150.f_44);
	_delete_volume(Local_150.f_45);
	_delete_volume(Local_150.f_46);
	_delete_volume(Local_150.f_47);
	_delete_volume(Local_150.f_48);
	_delete_volume(Local_150.f_49);
	_delete_volume(Local_150.f_50);
	_delete_volume(Local_150.f_51);
	_delete_volume(Local_150.f_52);
	_delete_volume(Local_150.f_53);
	_delete_volume(Local_150.f_54);
	_delete_volume(Local_150.f_55);
	_delete_volume(Local_150.f_56);
	_delete_volume(Local_150.f_57);
	_delete_volume(Local_150.f_58);
	_delete_volume(Local_150.f_59);
	_delete_volume(Local_150.f_60);
	_delete_volume(Local_150.f_61);
	_delete_volume(Local_150.f_62);
	_delete_volume(Local_150.f_63);
	_delete_volume(Local_150.f_64);
	_delete_volume(Local_150.f_65);
	_delete_volume(Local_150.f_66);
	_delete_volume(Local_150.f_67);
	_delete_volume(Local_150.f_68);
	_delete_volume(Local_150.f_69);
	_delete_volume(Local_150.f_70);
	_delete_volume(Local_150.f_71);
	_delete_volume(Local_150.f_72);
	_delete_volume(Local_150.f_73);
	_delete_volume(Local_150.f_74);
	_delete_volume(Local_150.f_75);
	_delete_volume(Local_150.f_76);
	_delete_volume(Local_150.f_77);
	_delete_volume(Local_150.f_78);
	_delete_volume(Local_150.f_79);
	_delete_volume(Local_150.f_80);
	_delete_volume(Local_150.f_81);
	_delete_volume(Local_150.f_82);
	_delete_volume(Local_150.f_83);
	_delete_volume(Local_150.f_84);
	_delete_volume(Local_150.f_85);
	_delete_volume(Local_150.f_86);
	_delete_volume(Local_150.f_87);
	_delete_volume(Local_150.f_88);
	_delete_volume(Local_150.f_89);
}

void func_191()
{
	if (is_audio_scene_active("MOB2_Investigate_Noise_Scene"))
	{
		stop_audio_scene("MOB2_Investigate_Noise_Scene");
	}
	if (is_audio_scene_active("MOB2_Investigate_Noise_Final_Scene"))
	{
		stop_audio_scene("MOB2_Investigate_Noise_Final_Scene");
	}
}

void func_192(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(bParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(bParam1) && func_483(get_ped_index_from_entity_index(bParam1)));
	if (bVar0)
	{
		iVar1 = func_484(get_ped_index_from_entity_index(bParam1));
	}
	if (is_entity_a_ped(bParam1))
	{
		iVar2 = get_ped_index_from_entity_index(bParam1);
		if (bVar0)
		{
			func_485(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_486(cParam0, bParam1) && does_blip_exist(get_blip_from_entity(bParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(bParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(bParam1), 231194138);
		}
		else
		{
			func_487(bParam1);
		}
	}
	if (func_486(cParam0, bParam1))
	{
		func_488(cParam0, bParam1, 1024);
		if (bParam2)
		{
			func_489(cParam0, bParam1, 128);
		}
		else
		{
			func_488(cParam0, bParam1, 128);
		}
		if (func_490(cParam0, bParam1, &iVar3))
		{
			func_491(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_492(iVar1);
	}
}

void func_193(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_274(iParam0, 64);
	func_275();
}

int func_194(int iParam0)
{
	return iParam0;
}

void func_195(int iParam0)
{
	if (!func_493(iParam0))
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

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_197(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_198(int iParam0)
{
	iVar0 = func_303(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_199(int iParam0)
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
		iVar0 = func_201(iParam0);
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

int func_200(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_201(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_494(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_202(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0;
	}
	return func_496(func_495(iParam0));
}

void func_203(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_22() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_204(int iParam0, bool bParam1, bool bParam2)
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
		if (func_497())
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
		iVar0 = func_279(&(Global_1898164->f_1[0]));
		if (func_280(iVar0) && func_308((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_197(&(Global_1898164->f_1[0])))
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

bool func_205(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_206(int iParam0)
{
	switch (func_202(iParam0))
	{
		case 1:
			iVar0 = func_279(iParam0);
			return func_498(iVar0);
		case 8:
			iVar1 = func_279(iParam0);
			if (func_308((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_499(iVar1);
			}
			break;
	}
	return -1;
}

void func_207(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_22() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_500(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_501();
		Global_1898077->f_9 = func_502(Global_1894899->f_2);
		func_503(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_208()
{
	if (!func_334((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_334((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_334((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_334((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_334((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_334((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_334((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_209(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_504(iParam0, iParam1);
}

int func_210(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_211(bool bParam0)
{
	if (!bParam0 && func_505(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_212(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_213(int iParam0, bool bParam1)
{
	if (func_22() != -1)
	{
		return;
	}
	if (func_210(0) != iParam0)
	{
		return;
	}
	if (func_506(iParam0))
	{
		if (bParam1)
		{
			func_507(-525676072);
		}
		else
		{
			func_508(-525676072);
		}
	}
}

int func_214(int iParam0)
{
	return func_510(func_509(iParam0));
}

void func_215(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_216(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_217(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_218(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_219()
{
	if (func_12(Global_43801))
	{
		func_13(&Global_43801, 0, 0);
	}
}

bool func_220()
{
	return func_511(_0xc17f69e1418cd11f(3));
}

bool func_221()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_222(int iParam0)
{
	iParam0 = func_273(iParam0);
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

int func_223(int iParam0, int iParam1)
{
	if (!func_512(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_513(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_224(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_225(char* sParam0, bool bParam1)
{
	if (func_224(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_514(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_514(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_514(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_514(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_514(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_514(sParam0, 1);
		return true;
	}
	func_514(sParam0, 1);
	return false;
}

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_227(var uParam0)
{
	func_515(uParam0, 0f);
}

int func_228(var uParam0)
{
	if (!func_28(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_516(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_517() - round((uParam0->f_1 * 1000f)));
}

void func_229(bool bParam0, bool bParam1)
{
	if (((is_weapon_valid(Global_1935630->f_44) && _is_weapon_sniper(Global_1935630->f_44)) && get_ped_reset_flag(Global_35, 0)) && _0xa24c1d341c6e0d53(1, 1, 1))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && get_ped_reset_flag(Global_35, 0))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_518(0);
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		animpostfx_stop_all();
	}
	if (bParam1)
	{
		_trigger_mission_failed_cam();
	}
}

struct<4> func_230(int iParam0, int iParam1)
{
	return func_519(iParam0, iParam1);
}

void func_231(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_232(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_9;
}

void func_233(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_202(iParam0) == 1)
	{
		cVar0 = func_112(func_520(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_202(iParam0) == 8)
	{
		cVar0 = func_522(func_521(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_523(1, 1);
	func_524(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_66(0);
	func_67(0);
	func_218(1f);
}

void func_234(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_514(sParam0, 2);
}

void func_235(int iParam0, int iParam1)
{
	if (!func_525(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_237()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_238()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_239()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_240()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_241()
{
	return func_526(get_id_of_this_thread());
}

void func_242(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_527(bParam0);
}

void func_243()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_245()
{
	return (Global_1894899 & 1 != 0 && func_79() != -1);
}

void func_246(var uParam0)
{
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_849 = { Var1 };
	StringCopy(&(uParam0->f_849), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_865)
	{
		*uParam0->f_865[iVar0] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1912)
	{
		*uParam0->f_1912[iVar0] = { Var76 };
		iVar0++;
	}
	uParam0->f_2073 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		*uParam0->f_1406[iVar0] = { Var35 };
		*uParam0->f_1735[iVar0] = { Var86 };
		iVar0++;
	}
	uParam0->f_2074 = -1;
	uParam0->f_2155 = { Global_36 };
	uParam0->f_2158 = 0;
	uParam0->f_2159 = 0;
	uParam0->f_2078 = -1;
	uParam0->f_2079 = -1f;
	uParam0->f_2054 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2056.f_1 = 0;
	uParam0->f_2293 = 0;
	if (_0x927b810e43e99932(&(uParam0->f_2082)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_2082));
	}
}

void func_247(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_248(int iParam0)
{
	if (!func_528(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_249()
{
	func_529(64);
}

void func_250()
{
	Global_1310750->f_16072 = 0;
}

bool func_251()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_252(int iParam0)
{
	return func_253(23, iParam0);
}

bool func_253(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_530(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_531())
	{
		return func_530(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_530(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_254(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_255(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_258(iParam0, 8);
}

void func_256(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_257(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_258(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_259(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_260()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_258(iVar1, 1))
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
				if (func_22() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_258(iVar1, 2))
			{
				if (func_22() == -1)
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
				func_295(iVar1, 11);
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

bool func_261(var uParam0)
{
	if (func_532(uParam0, 1) || func_532(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_262(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_263(struct<2> Param0)
{
	if (!func_262(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_264(struct<2> Param0, int iParam2)
{
	if (!func_262(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_265(int iParam0)
{
	if (!func_533(iParam0))
	{
		return false;
	}
	if (!func_534(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_266(char[4] cParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_533(iParam1))
	{
		return;
	}
	if (!func_265(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_24(cParam0) != 0 && func_156(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(bParam2))
	{
		func_535(cParam0, bParam2);
		func_536(bParam2);
	}
	func_485(iParam1);
	func_537(iParam1, 0);
	func_538(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_267(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_268(bool bParam0)
{
	if (bParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_269(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_270(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_539(iParam0);
	if (func_540(iParam0))
	{
		if (func_269(iParam0) != iVar0)
		{
			return;
		}
	}
	func_541(iParam0);
	func_542(iParam0);
	bVar1 = func_222(iParam0);
	if (does_entity_exist(bVar1))
	{
		if (!is_entity_dead(bVar1) && !is_ped_injured(bVar1))
		{
		}
		if (!_0x88ad6cc10d8d35b2(bVar1))
		{
			set_entity_as_mission_entity(bVar1, true, true);
		}
		iVar2 = get_entity_model(bVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_543(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_544(iParam0);
	}
}

void func_271(bool bParam0, bool bParam1)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return;
	}
	if (!func_545(bParam0))
	{
		return;
	}
	iVar0 = func_268(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_61(iVar0);
	func_539(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_269(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_540(iVar0))
		{
			return;
		}
	}
	func_546(iVar0);
	set_ped_keep_task(bParam0, true);
	if (bParam1 && func_22() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(bParam0))
		{
			set_entity_as_mission_entity(bParam0, true, true);
		}
	}
}

void func_272(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_273(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_274(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

void func_275()
{
	if (func_547(0))
	{
		func_548(0);
	}
	if (func_547(1))
	{
		func_548(1);
	}
	if (func_547(5))
	{
		func_548(5);
	}
	if (func_547(6))
	{
		func_541(6);
	}
}

struct<2> func_276(int iParam0)
{
	MemCopy(&Var0, {func_112(iParam0)}, 2);
	return Var0;
}

struct<2> func_277(int iParam0)
{
	Var0 = { func_276(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_278(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_279(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_549(func_495(iParam0));
}

bool func_280(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_281(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_282(int iParam0, bool bParam1)
{
	iVar0 = func_550(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_551(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_551(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_551(iParam0)))
			{
				_uilog_remove_entry(2, func_551(iParam0));
			}
		}
	}
	func_552(iParam0, 4);
	func_552(iParam0, 8);
	func_552(iParam0, 16);
}

void func_283(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_280(iVar0))
		{
			if (func_281(iVar0, 4))
			{
				func_284(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_284(int iParam0, bool bParam1)
{
	if (!func_281(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_550(iParam0), func_551(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_550(iParam0), func_551(iParam0), 2, "");
		func_553(iParam0, 16);
	}
	else
	{
		if (func_281(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_550(iParam0), func_551(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_550(iParam0), func_551(iParam0), 0, "");
		}
		func_552(iParam0, 16);
	}
}

void func_285(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_281(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_550(iParam0), func_551(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_281(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_550(iParam0), func_551(iParam0), 1, "");
		}
		func_553(iParam0, 8);
	}
	else
	{
		if (func_281(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_550(iParam0), func_551(iParam0), 0, "");
		}
		func_552(iParam0, 8);
	}
}

int func_286(char[4] cParam0)
{
	if (func_122(cParam0, 8388608))
	{
		return 2;
	}
	if (func_122(cParam0, 4194304))
	{
		return 4;
	}
	if (func_122(cParam0, 4))
	{
		return 1;
	}
	if (func_130(cParam0, 1) && func_84(32768))
	{
		return 3;
	}
	return 0;
}

void func_287(int iParam0, int iParam1)
{
	if (func_547(0))
	{
		if (func_554(0))
		{
			func_555(0);
		}
	}
	if (func_547(1))
	{
		if (func_554(1))
		{
			func_555(1);
		}
	}
}

void func_288(char[4] cParam0)
{
	if (func_122(cParam0, 1))
	{
		return;
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		if (func_122(cParam0, 16))
		{
			func_60(cParam0, 0);
		}
		if (func_440(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_289(char[4] cParam0)
{
	return false;
	switch (cParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_290(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_556(iParam0, sParam4, iParam5);
	}
	func_557(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_291(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_292()
{
	return &Global_1899515;
}

void func_293(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_294(int iParam0, int iParam1)
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

void func_295(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_296(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	if (func_558(iParam0))
	{
		func_559(iParam0);
	}
	else
	{
		func_560(iParam0);
	}
}

int func_297(int iParam0)
{
	if (func_561(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)
{
	if (func_562(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_299(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1;
		case 3:
			return iParam1;
		case 11:
		case 12:
		case 13:
		case 14:
			return true;
		case 53:
			return true;
		case 24:
			return iParam1;
		case 23:
			return iParam1;
		case 21:
			return iParam1;
		case 26:
			return iParam1;
		case 35:
			return true;
		case 34:
			return iParam1;
		case 32:
			return iParam1;
		case 29:
			return true;
		case 31:
			return true;
		case 37:
			return iParam1;
		case 39:
			return iParam1;
		case 42:
			return iParam1;
		case 43:
			return iParam1;
		case 44:
			return iParam1;
		case 46:
			return iParam1;
		case 54:
			return true;
		case 50:
			return true;
		case 51:
			return iParam1;
		case 52:
			return true;
		case 49:
			return true;
		case 58:
			return iParam1;
		case 57:
			return true;
		case 59:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_300(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_563(Global_1310750[iVar0], iParam0))
		{
			if (!func_564(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_565(iVar0) < func_566(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_302(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_301(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_567();
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

void func_302(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_568(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_303(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_201(iParam0);
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_305(bool bParam0, int iParam1)
{
	if (!bParam0 && func_505(373691918))
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
	func_211(bParam0);
	return 1;
}

void func_306()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_533(iVar17))
		{
			bVar18 = func_569(iVar17);
			if (does_entity_exist(bVar18))
			{
				Var0.f_14 = bVar18;
				Var0.f_3 = bVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_570(&(Global_1359489->f_55));
	if (func_571(1777191912, 1))
	{
		func_572(1777191912, 1, 0);
	}
}

void func_307(int iParam0)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_574(iParam0, (func_573(iParam0) + shift_left(1, 16)));
}

bool func_308(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_309()
{
	return func_575() > 0;
}

void func_310(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_576(-1032423150, iParam1);
			break;
		case 18:
			func_576(294066959, iParam1);
			func_576(-1925639563, iParam1);
			func_576(-378582304, iParam1);
			func_576(-338306437, iParam1);
			break;
		case 20:
			func_576(437270255, iParam1);
			break;
		case 2:
			func_576(-304000413, iParam1);
			func_576(-533612796, iParam1);
			func_576(48036954, iParam1);
			break;
		case 23:
			func_576(193108691, iParam1);
			func_576(491732588, iParam1);
			func_576(671962088, iParam1);
			func_577(1);
			break;
		case 16:
			func_576(-1836056650, iParam1);
			func_576(-754657922, iParam1);
			func_576(-1752355838, iParam1);
			func_576(-1375324510, iParam1);
			break;
		case 59:
			func_576(-514392105, iParam1);
			func_576(-822060246, iParam1);
			if (func_578(146))
			{
				func_576(1372748575, iParam1);
			}
			func_577(1);
			break;
		case 76:
			func_576(1991352213, iParam1);
			if (func_579() == 0)
			{
				func_576(1852488616, iParam1);
			}
			else
			{
				func_576(-9866350, iParam1);
			}
			break;
		case 44:
			func_576(863852599, iParam1);
			func_576(1228374935, iParam1);
			func_576(1517889050, iParam1);
			func_576(830657578, iParam1);
			func_576(1901354958, iParam1);
			break;
		case 46:
			func_576(-582805654, iParam1);
			func_576(250378940, iParam1);
			func_576(-2143265426, iParam1);
			break;
		case 17:
			func_576(-941494139, iParam1);
			func_576(1641489521, iParam1);
			break;
		case 19:
			func_576(-1829423531, iParam1);
			func_576(-1590504752, iParam1);
			func_576(1357221321, iParam1);
			break;
		case 21:
			func_576(-1037992610, iParam1);
			func_576(-1286414399, iParam1);
			func_577(0);
			break;
		case 15:
			func_576(-1014460309, iParam1);
			func_576(-1030502825, iParam1);
			break;
		case 33:
			func_576(479388090, iParam1);
			func_576(-1396342239, iParam1);
			func_576(-619618632, iParam1);
			break;
		case 34:
			func_576(1193561641, iParam1);
			break;
		case 64:
			func_576(1363960851, iParam1);
			break;
		case 60:
			func_576(-1232453926, iParam1);
			func_576(-882833584, iParam1);
			break;
		case 73:
			func_576(2023205767, iParam1);
			break;
		case 74:
			func_576(-2135286513, iParam1);
			if (func_579() == 0)
			{
				func_576(33799444, iParam1);
			}
			else
			{
				func_576(-161343203, iParam1);
			}
			break;
		case 8:
			func_576(841639693, iParam1);
			func_576(358952323, iParam1);
			break;
		case 36:
			func_576(852538149, iParam1);
			func_576(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_576(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_576(1116039310, iParam1);
			}
			break;
		case 27:
			func_576(107633428, iParam1);
			func_576(335902282, iParam1);
			func_576(575673055, iParam1);
			func_576(-425944207, iParam1);
			break;
		case 28:
			func_576(-1941530250, iParam1);
			func_576(1399269304, iParam1);
			func_576(1839684664, iParam1);
			func_576(923168503, iParam1);
			func_576(-1485078322, iParam1);
			break;
		case 29:
			func_576(574995900, iParam1);
			func_576(-1691275407, iParam1);
			func_576(-1725307861, iParam1);
			break;
		case 31:
			func_576(-2108383238, iParam1);
			func_576(-1321828931, iParam1);
			func_576(-1632118592, iParam1);
			func_576(334938948, iParam1);
			break;
		case 4:
			func_576(115823701, iParam1);
			func_576(-1896939736, iParam1);
			func_576(-1830746356, iParam1);
			func_576(-1235169781, iParam1);
			func_577(0);
			break;
		case 6:
			func_576(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_576(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_576(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_576(-384176140, iParam1);
			}
			break;
		case 25:
			func_576(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_576(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_576(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_576(-1374849484, iParam1);
			}
			break;
		case 48:
			func_576(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_576(217772674, iParam1);
			}
			else
			{
				func_576(2071798160, iParam1);
			}
			if (func_580(51))
			{
				func_576(-792802286, iParam1);
			}
			break;
		case 49:
			func_576(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_576(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_576(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_576(1402120602, iParam1);
			}
			break;
		case 58:
			func_576(-1661934591, iParam1);
			break;
		case 50:
			func_576(-1713759426, iParam1);
			break;
		case 52:
			func_576(-314799932, iParam1);
			func_576(-462260432, iParam1);
			func_576(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_576(345256028, iParam1);
				func_576(-1635084094, iParam1);
			}
			else
			{
				func_576(114267347, iParam1);
			}
			break;
		case 32:
			func_576(615304157, iParam1);
			break;
		case 47:
			func_576(415434835, iParam1);
			break;
		case 69:
			func_576(1373465877, iParam1);
			if (func_334((*Global_1347702)[9]->f_15, 1))
			{
				func_576(-2058273527, iParam1);
			}
			break;
		case 70:
			func_576(451334985, iParam1);
			if (func_579() == 0)
			{
				func_576(-224150200, iParam1);
			}
			else
			{
				func_576(289012628, iParam1);
			}
			break;
		case 71:
			if (func_579() == 0)
			{
				func_576(-41692120, iParam1);
			}
			else
			{
				func_576(1537840678, iParam1);
			}
			break;
		case 37:
			func_576(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_576(1842132550, iParam1);
			}
			else
			{
				func_576(-785735240, iParam1);
			}
			func_576(-1605690566, iParam1);
			break;
		case 13:
			func_576(-731367459, iParam1);
			func_576(224176585, iParam1);
			func_576(-14545580, iParam1);
			break;
		case 53:
			func_576(1095274522, iParam1);
			break;
		case 54:
			func_576(-572027988, iParam1);
			break;
		case 56:
			func_576(1339307101, iParam1);
			func_576(2102267732, iParam1);
			break;
		case 57:
			func_576(710102686, iParam1);
			break;
		case 22:
			func_576(-1754368482, iParam1);
			func_576(-2071408557, iParam1);
			break;
		case 12:
			func_576(-181334543, iParam1);
			break;
		case 0:
			func_576(-2134669864, iParam1);
			func_576(-548289709, iParam1);
			func_576(-911271922, iParam1);
			func_576(-604455775, iParam1);
			break;
		case 1:
			func_577(1);
			break;
		case 3:
			if (func_345())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_576(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_576(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_311()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_312(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_576(-145926707, iParam1);
			func_576(-604922090, iParam1);
			func_576(-848690769, iParam1);
			break;
		case 1:
			func_576(-1477631591, iParam1);
			break;
		case 2:
			func_576(76112544, iParam1);
			break;
		case 9:
			func_576(1396404308, iParam1);
			func_576(-1357381228, iParam1);
			if (func_334((*Global_1835011)[69]->f_1, 1))
			{
				func_576(1902679064, iParam1);
			}
			else
			{
				func_576(-2146422425, iParam1);
			}
			break;
		case 22:
			func_576(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_576(-1934184559, iParam1);
				func_576(1281755988, iParam1);
			}
			else
			{
				func_576(-1745220872, iParam1);
				func_576(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_576(-1641504538, iParam1);
				func_576(-988014485, iParam1);
			}
			else if (func_578(26))
			{
				func_576(-343043950, iParam1);
				func_576(-640062214, iParam1);
			}
			else
			{
				func_576(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_576(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_576(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_576(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_576(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_576(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_576(1301690984, iParam1);
				}
			}
			else
			{
				func_576(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_576(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_576(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_576(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_576(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_576(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_576(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_576(-754570528, iParam1);
			}
			else
			{
				func_576(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_576(-2072125821, iParam1);
			}
			else
			{
				func_576(270040030, iParam1);
			}
			break;
		case 37:
			func_576(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_576(-505314737, iParam1);
				func_576(-1853052860, iParam1);
			}
			else
			{
				func_576(-1975624994, iParam1);
				func_576(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_576(1690231002, iParam1);
			}
			else
			{
				func_576(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_576(1225386280, iParam1);
			}
			else if (func_578(54))
			{
				func_576(-283235773, iParam1);
			}
			else
			{
				func_576(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_576(1355398007, iParam1);
			}
			else
			{
				func_576(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_576(574636806, iParam1);
			}
			else
			{
				func_576(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_576(821118338, iParam1);
			}
			else if (func_578(39))
			{
				func_576(846829260, iParam1);
			}
			else
			{
				func_576(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_368((*Global_1835011)[33]->f_1) == 1)
				{
					func_576(1422779093, iParam1);
				}
				else
				{
					func_576(-1769536986, iParam1);
				}
			}
			else
			{
				func_576(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_576(352134789, iParam1);
			}
			else if (func_578(43))
			{
				func_576(260723113, iParam1);
			}
			else
			{
				func_576(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_576(-457958799, iParam1);
			}
			else
			{
				func_576(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_578(41))
			{
				func_576(-546824600, iParam1);
			}
			else
			{
				func_576(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_576(1297261593, iParam1);
			}
			else
			{
				func_576(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_576(2068484886, iParam1);
			}
			else if (func_578(49))
			{
				func_576(-1489080639, iParam1);
				func_576(-2102244050, iParam1);
			}
			else
			{
				func_576(-1863040467, iParam1);
			}
			break;
		case 51:
			func_576(-2055943209, iParam1);
			break;
		case 58:
			if (func_334((*Global_1347702)[23]->f_15, 1))
			{
				func_576(1650066845, iParam1);
			}
			else
			{
				func_576(151370023, iParam1);
			}
			func_576(1426057961, iParam1);
			func_576(476379584, iParam1);
			break;
		case 59:
			func_576(-1638117866, iParam1);
			break;
		case 62:
			func_576(199541730, iParam1);
			break;
		case 63:
			func_576(1703485804, iParam1);
			func_576(-800449045, iParam1);
			break;
		case 65:
			func_576(-1678210868, iParam1);
			func_576(-1448238026, iParam1);
			func_576(-1200864845, iParam1);
			func_576(1473511536, iParam1);
			break;
		case 66:
			func_576(-1774490051, iParam1);
			func_576(-34645921, iParam1);
			func_576(174027075, iParam1);
			func_576(-1155999, iParam1);
			func_577(1);
			break;
		case 67:
			func_576(701612593, iParam1);
			func_576(-1069631343, iParam1);
			func_576(1673428882, iParam1);
			break;
		case 68:
			func_576(-739133286, iParam1);
			func_576(-2130089358, iParam1);
			func_576(2056190391, iParam1);
			func_576(1941753817, iParam1);
			func_577(0);
			break;
		case 70:
			func_576(-1217555753, iParam1);
			break;
		case 71:
			func_576(697048821, iParam1);
			break;
		case 73:
			func_576(-553148661, iParam1);
			break;
		case 75:
			func_576(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_576(1414263863, iParam1);
			}
			else
			{
				func_576(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_576(1835465936, iParam1);
				func_576(523715611, iParam1);
			}
			else if (func_578(78))
			{
				func_576(1420338873, iParam1);
			}
			else
			{
				func_576(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_576(10180941, iParam1);
			}
			else if (func_578(79))
			{
				func_576(768420635, iParam1);
			}
			else
			{
				func_576(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_576(-383601523, iParam1);
			}
			else
			{
				func_576(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_576(1606472408, iParam1);
			}
			else
			{
				func_576(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_576(-203571927, iParam1);
			}
			else
			{
				func_576(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_576(729886222, iParam1);
			}
			else
			{
				func_576(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_576(-714816362, iParam1);
			}
			else
			{
				func_576(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_576(-932932179, iParam1);
				func_576(-1458537240, iParam1);
			}
			else
			{
				func_576(-1764383885, iParam1);
				func_576(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_576(1741466706, iParam1);
			}
			else
			{
				func_576(1405815775, iParam1);
			}
			break;
		case 94:
			func_576(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_576(1905280979, iParam1);
			}
			else
			{
				func_576(-1966245299, iParam1);
			}
			func_576(721468880, iParam1);
			break;
		case 99:
			func_576(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_576(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_576(-1117781095, iParam1);
				}
				else
				{
					func_576(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_576(141494548, iParam1);
			}
			else
			{
				func_576(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_576(-369525697, iParam1);
			}
			else if (func_578(101))
			{
				func_576(1595015219, iParam1);
			}
			else
			{
				func_576(-321486961, iParam1);
			}
			break;
		case 103:
			func_576(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_576(793460477, iParam1);
				func_576(-1610242176, iParam1);
			}
			else if (func_578(103))
			{
				func_576(1830897187, iParam1);
			}
			else
			{
				func_576(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_576(1528309077, iParam1);
			}
			else if (func_578(104))
			{
				func_576(1864966105, iParam1);
			}
			else
			{
				func_576(-103336013, iParam1);
			}
			break;
		case 108:
			func_576(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_576(-1123227713, iParam1);
				func_576(-889574341, iParam1);
			}
			else
			{
				func_576(2065385917, iParam1);
				func_576(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_576(-887421691, iParam1);
			}
			else if (func_578(109))
			{
				func_576(-1318117949, iParam1);
			}
			else
			{
				func_576(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_576(284822762, iParam1);
				}
				else
				{
					func_576(-1425017554, iParam1);
				}
			}
			else if (func_578(110))
			{
				if (&Global_1357515 == 0)
				{
					func_576(553087292, iParam1);
				}
				else
				{
					func_576(-1766870331, iParam1);
					func_576(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_576(-1980598735, iParam1);
			}
			else
			{
				func_576(-442732098, iParam1);
				func_576(1955756409, iParam1);
			}
			break;
		case 115:
			func_576(394303528, iParam1);
			func_576(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_576(1182403394, iParam1);
			}
			else
			{
				func_576(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_576(924445424, iParam1);
			}
			else
			{
				func_576(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_576(430755273, iParam1);
				func_576(-1473879802, iParam1);
			}
			else
			{
				func_576(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_576(73885747, iParam1);
			}
			else if (func_578(117))
			{
				func_576(1559707913, iParam1);
			}
			else
			{
				func_576(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_576(-2103887972, iParam1);
			}
			else if (func_578(118))
			{
				func_576(-435828462, iParam1);
			}
			else
			{
				func_576(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_576(2054486196, iParam1);
			}
			else
			{
				func_576(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_576(-570086056, iParam1);
			}
			else if (func_578(121))
			{
				func_576(32337856, iParam1);
			}
			else
			{
				func_576(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_576(813493663, iParam1);
			}
			else if (func_578(122))
			{
				func_576(-2132763590, iParam1);
			}
			else
			{
				func_576(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_576(-66240572, iParam1);
				func_576(1563075046, iParam1);
			}
			else
			{
				func_576(-787011772, iParam1);
				func_576(-1523377438, iParam1);
			}
			break;
		case 127:
			func_576(61020800, iParam1);
			break;
		case 129:
			func_576(428985222, iParam1);
			break;
		case 131:
			func_576(-1393851036, iParam1);
			break;
		case 133:
			func_576(1559531342, iParam1);
			break;
		case 134:
			func_576(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_576(-1374407408, iParam1);
				}
				else
				{
					func_576(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_576(-472672138, iParam1);
				}
				else
				{
					func_576(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_576(-1678710489, iParam1);
			}
			else
			{
				func_576(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_576(1717582460, iParam1);
			}
			else
			{
				func_576(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_576(1568112362, iParam1);
				func_576(1388317526, iParam1);
			}
			else if (func_578(136))
			{
				func_576(-1597534828, iParam1);
				func_576(-1207918353, iParam1);
			}
			else
			{
				func_576(-1940891082, iParam1);
				func_576(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_576(448334530, iParam1);
				func_576(2145375502, iParam1);
			}
			else
			{
				func_576(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_576(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_576(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_576(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_576(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_576(-66616327, iParam1);
			}
			else
			{
				func_576(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_576(1862916706, iParam1);
			}
			else if (func_578(147))
			{
				func_576(675105199, iParam1);
			}
			else
			{
				func_576(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_576(174409701, iParam1);
			}
			else if (func_578(148))
			{
				func_576(-1730895475, iParam1);
			}
			else
			{
				func_576(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_576(1295237052, iParam1);
			}
			else if (func_578(149))
			{
				func_576(-788577684, iParam1);
			}
			else
			{
				func_576(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_313(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_202(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_520(iParam0);
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
					*iParam1 = -2060316038;
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
					if (func_368((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_279(iParam0);
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
					*iParam1 = -2060316038;
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
					*iParam1 = -2060316038;
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
					*iParam1 = -2060316038;
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
			iVar3 = func_279(iParam0);
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

int func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_581(iParam0);
	iVar3 = func_582(iParam0);
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
				iVar1 = func_292();
				func_341(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_583(iParam0, 1);
			if (func_584(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_585(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_586(1, iParam0);
				}
				else
				{
					func_587(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_315(int iParam0, int iParam1)
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

int func_316(int iParam0, int iParam1, int iParam2)
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

void func_317(bool bParam0)
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

void func_318(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_588(iParam0, iParam1, bParam2);
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

int func_319(int iParam0, int iParam1)
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

bool func_320(int iParam0)
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

void func_321(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_22() != -1)
	{
		return;
	}
	if ((Global_36616 && func_589(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_590(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_591(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_592(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_591(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_322(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_593(func_495(iParam0));
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_324()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_594(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_325(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (!func_596(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_597(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_598(iParam0, bParam2);
	iVar2 = 0;
	if (func_599(iParam0, 0, 0) == 0)
	{
		if (func_600(iParam0))
		{
			iVar5 = func_601(iParam0);
			iVar6 = func_602(iVar5);
			iVar7 = func_603(iVar6) + 1;
			func_604(iVar5);
			if (func_605(38))
			{
				func_332(483, 0);
			}
			else
			{
				func_332(482, 0);
			}
			if (iVar7 == func_606(iVar6))
			{
				func_325(func_607(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_406() && func_608(4))
				{
					if (func_406() && (func_609(38) || func_605(38)))
					{
						func_611(38, func_607(iVar6), 0, 0, func_610(), 0, -1, 0);
						func_612(2);
					}
					else
					{
						func_611(38, func_607(iVar6), 0, 0, func_610(), 0, -1, 0);
						func_612(1);
					}
				}
			}
			else if (func_406() && func_608(4))
			{
				if (func_406() && (func_609(38) || func_605(38)))
				{
					func_611(38, 0, 0, 0, func_610(), 0, -1, 0);
					func_612(2);
				}
				else
				{
					func_611(38, 0, 0, 0, func_610(), 0, -1, 0);
					func_612(1);
				}
			}
			if (func_406() && func_608(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_406() && (func_609(38) || func_605(38)))
					{
						func_613(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_613(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_614(iParam0) == -1037537535)
	{
		if ((!func_615(iParam0, 866047851) && !func_615(iParam0, -1979000645)) && !func_615(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_616(iParam0, 8388608) && !func_617(28))
	{
		func_618(28);
	}
	if (!bVar3)
	{
		if (func_615(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_619(iParam0) == -1447088266)
			{
				iVar1 = func_621(func_620(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_22() == -1)
					{
						func_622(iVar1);
					}
					if (func_623(0) && func_624(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_625(iParam0, iVar0, iParam5);
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
					if (func_22() == -1)
					{
						func_622(iParam0);
					}
					if (func_623(0) && func_624(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_625(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_614(iParam0) == -427144552)
		{
			if (!func_626(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_614(iParam0) == 307971639 && func_627(iParam0))
		{
			if (!func_628(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_615(iParam0, 866047851))
		{
			func_629(iParam0);
		}
		else if (func_615(iParam0, 2000026003))
		{
			func_630(iParam0);
		}
		else if (func_615(iParam0, -103750053))
		{
			func_97(func_631(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_97(func_632(-717883113, 2091222383), iVar0);
		}
		else if (func_615(iParam0, -121341956) && !func_615(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_334((*Global_1835011)[4]->f_1, 1))
				{
					func_332(498, 0);
				}
			}
			if (func_615(iParam0, -2017733358) || func_615(iParam0, -1369131378))
			{
				func_633(iParam0);
			}
		}
		else if (func_615(iParam0, -136654233))
		{
			if (func_615(iParam0, -1021472396))
			{
			}
		}
		else if (func_615(iParam0, -1466706512) && func_615(iParam0, 1147021565))
		{
			func_332(484, 0);
		}
		else if (func_615(iParam0, 1147021565) && func_615(iParam0, -524514947))
		{
		}
		else if (func_615(iParam0, 554195525))
		{
		}
		else if (func_615(iParam0, 589988438))
		{
			if (func_634())
			{
				func_635(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_615(iParam0, 787083290) && func_615(iParam0, 949916894))
		{
			func_636(iParam0);
		}
		else if (func_615(iParam0, -1718133314))
		{
			func_637(iParam0);
		}
		else if (func_615(iParam0, -1738650224))
		{
			func_638(iParam0);
		}
		else if (func_615(iParam0, -1112814642) && func_615(iParam0, 949916894))
		{
			func_639(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_615(iParam0, 1841149704))
		{
			func_640();
		}
		else if (func_615(iParam0, 606799272))
		{
			func_641(iParam0, iParam1);
			func_642(iParam0);
		}
		else if (func_615(iParam0, -1112814642) && func_615(iParam0, -1697809989))
		{
			func_643(iParam0, 0, 0, 0);
		}
		else if (func_615(iParam0, -2017733358) || func_615(iParam0, -1369131378))
		{
			func_633(iParam0);
		}
		else if (func_615(iParam0, -1921346699))
		{
			if (func_22() != -1)
			{
				return false;
			}
			func_644(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_615(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_354(215778062, 1, 0))
					{
						func_325(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_354(670273567, 1, 0))
					{
						func_325(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_354(-967317137, 1, 0))
					{
						func_325(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_354(526074061, 1, 0))
					{
						func_325(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_354(-1045488665, 1, 0))
					{
						func_325(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_354(471514780, 1, 0))
					{
						func_325(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_615(iParam0, -839724752) && func_616(iParam0, 4))
		{
			if (!func_605(42))
			{
				func_645(iParam0);
			}
		}
		else if (func_615(iParam0, 1399091007))
		{
			func_646(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_615(iParam0, 1248798204))
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
				func_325(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_618(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_647(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_648(&iVar9, 0))
				{
					func_624(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_22() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_647(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_332(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_649();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_650();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_651();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_652();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_653();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_654(499813453, 854119837, 0);
				func_655(499813453, 0);
				func_656(1);
				break;
			case 2127812557:
				func_654(499813453, -1292544588, 0);
				func_655(499813453, 0);
				func_656(2);
				break;
			case 808991383:
				func_654(499813453, -1003325394, 0);
				func_655(499813453, 0);
				func_656(4);
				break;
			case 1134518629:
				func_654(666607663, -335460405, 0);
				func_655(666607663, 0);
				func_657(1);
				break;
			case 902940106:
				func_654(666607663, 903797617, 0);
				func_655(666607663, 0);
				func_657(2);
				break;
			case -418174898:
				func_654(666607663, 669728650, 0);
				func_655(666607663, 0);
				func_657(4);
				break;
			case -648114971:
				func_654(-220219788, 1214120047, 0);
				func_655(-220219788, 0);
				func_658(1);
				break;
			case 211153747:
				func_654(-220219788, 655769340, 0);
				func_655(-220219788, 0);
				func_658(2);
				break;
			case -32876996:
				func_654(-220219788, 885316185, 0);
				func_655(-220219788, 0);
				func_658(4);
				break;
			case 1191437462:
				func_654(218622660, -1491419385, 0);
				func_655(218622660, 0);
				func_659(1);
				break;
			case 1119149048:
				func_654(218622660, 1809565830, 0);
				func_655(218622660, 0);
				func_659(2);
				break;
			case 506073827:
				func_654(390004462, -628873767, 0);
				func_655(390004462, 0);
				func_660(1);
				break;
			case -1876986168:
				func_654(390004462, -405421956, 0);
				func_655(390004462, 0);
				func_660(2);
				break;
			case 2142623221:
				func_654(390004462, -1108972386, 0);
				func_655(390004462, 0);
				func_660(4);
				break;
			case 1508215381:
				func_654(6410548, 1053716392, 0);
				func_655(6410548, 0);
				func_661(1);
				break;
			case -888935280:
				func_654(6410548, 806507056, 0);
				func_655(6410548, 0);
				func_661(2);
				break;
			case -1252474566:
				func_654(6410548, 1571925350, 0);
				func_655(6410548, 0);
				func_661(4);
				break;
			case -1465702449:
				func_654(6410548, 1330352282, 0);
				func_655(6410548, 0);
				func_661(8);
				break;
			case -21093309:
				func_663(242, func_662(-21093309), 0);
				break;
			case 204375141:
				func_663(240, func_662(204375141), 0);
				break;
			case -417963070:
				func_663(241, func_662(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_664(594, 1934060482, 1, 1);
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
					func_664(594, 1110018439, 1, 1);
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
					func_664(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_664(594, -1228016946, 1, 1);
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
					func_664(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_664(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_332(488, 0);
				break;
			case 1613651027:
				func_332(491, 0);
				break;
			case -885810591:
				func_332(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_325(func_665(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_325(func_666(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_617(1))
				{
					func_332(487, 0);
				}
				break;
			case -898386032:
				func_332(486, 0);
				break;
			case -2035110427:
				if (func_22() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_332(496, 0);
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
		func_667(&iVar10);
		if (!func_668(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_623(0))
		{
			return true;
		}
		if (func_614(iParam0) == -1037537535)
		{
			func_669(iParam0);
		}
		if (func_615(iParam0, -1979000645))
		{
			func_670(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_623(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_325(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_671(iVar2, 0);
		}
	}
	Var35 = { func_672(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_673(iParam0);
	if (fParam6 > 0f)
	{
		if (func_615(iParam0, -839724752))
		{
			func_674(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_675(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_326(int iParam0)
{
	if (func_615(iParam0, 1989861793))
	{
		iVar0 = func_676(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_677(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_678(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_679(iVar14, iVar1);
					if (iVar15 != iParam0 && func_595(iVar15, 0))
					{
						if (func_680(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_681(iVar1);
				if (bVar13)
				{
					func_682(iParam0);
				}
				else
				{
					func_332(306, 0);
				}
			}
		}
	}
}

void func_327()
{
	if (func_22() != -1)
	{
		return;
	}
	func_683();
	func_684();
	func_685();
	func_686();
	func_687();
	func_688();
	func_689();
}

void func_328(int iParam0)
{
	func_690(iParam0, 1, 1, -142743235, 1);
	if (func_691(iParam0))
	{
		func_692(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_694(func_693(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_695(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_696() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_697(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_697(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_698(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_698(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_698(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_698(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_698(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_698(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_698(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_698(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_698(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_699(iVar8, iVar0))
				{
					func_700(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_699(iVar8, iVar0))
		{
			func_700(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_329()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_699(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_696() == -2125499975 || func_696() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_700(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_700(&vVar2, iVar5, iVar0);
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

void func_330()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_594(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_331(int iParam0, bool bParam1)
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
			if ((func_334((*Global_1835011)[59]->f_1, 1) || func_334((*Global_1347702)[1]->f_15, 1)) || func_198((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_571(403634348, 1))
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

void func_332(int iParam0, bool bParam1)
{
	func_701(iParam0, &iVar0, &iVar1);
	if (!func_702(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_703(iVar0, iVar1);
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_694(iParam0, 1);
	func_704(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_704(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_705(17, iParam0, 0, 0, 0);
		}
	}
	if (func_22() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_704(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_704(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_334(int iParam0, bool bParam1)
{
	switch (func_303(iParam0))
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

void func_335()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_594(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_594(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_706(iParam1, 1, 0) };
		iParam3 = func_707(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_708(iParam3);
	return func_647(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_338()
{
	return _unlock_is_unlocked(99890643);
}

void func_339(int iParam0)
{
	if (!func_709(iParam0))
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

bool func_340(int iParam0, int iParam1)
{
	if (!func_710(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_711(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_712(Global_40.f_9910[iParam1], 4);
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_713(*iParam0);
	iVar1 = func_714(*iParam0);
	iVar2 = func_715(*iParam0);
	iVar3 = func_716(*iParam0);
	iVar4 = func_717(*iParam0);
	iVar5 = func_718(*iParam0);
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
	iVar6 = func_719(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_719(iVar1, iVar0);
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
	func_720(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(int iParam0, int iParam1, bool bParam2)
{
	if (!func_710(iParam0))
	{
		return;
	}
	if (!func_721(iParam1))
	{
		return;
	}
	if (func_722(iParam1, 1))
	{
		return;
	}
	iVar0 = func_711(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_340(iParam0, -1))
	{
		return;
	}
	else
	{
		func_723(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_204(0, 0, 1))
		{
			func_374(0, 17);
		}
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_594(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_594(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_345()
{
	return _unlock_is_unlocked(-121456797);
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_594(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_594(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_348()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_594(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_594(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_594(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_594(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_352(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_353(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_354(int iParam0, int iParam1, bool bParam2)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_614(iParam0);
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
		if (!func_724(iParam0, 1))
		{
			return false;
		}
	}
	return func_599(iParam0, 0, bParam2) >= iParam1;
}

void func_355(int iParam0)
{
	if (func_84(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_725(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_725(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_594(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_357()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_594(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_594(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_359()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_594(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_360()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_594(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_361()
{
	if (func_726() > 1)
	{
		func_727();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_332(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_332(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_332(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_332(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_332(452, 1);
		}
	}
}

bool func_362(int iParam0)
{
	return func_728(iParam0, 4, 1);
}

void func_363(int iParam0)
{
	func_729(iParam0, 4, 1);
}

void func_364(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_96(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_365(int iParam0)
{
	if (func_84(32768))
	{
		return;
	}
	if (!func_197(iParam0))
	{
		return;
	}
	func_236(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_202(iParam0))
	{
		case 1:
			func_97(func_632(909007663, -587839005), 1);
			iVar0 = func_279(iParam0);
			func_97(func_96(-634848880), 1);
			switch (func_498(iVar0))
			{
				case 0:
					func_97(func_632(909007663, 1325140787), 1);
					break;
				case 1:
					func_97(func_632(909007663, 2101241783), 1);
					break;
				case 2:
					func_97(func_632(909007663, -1296936294), 1);
					break;
				case 3:
					func_97(func_632(909007663, -798388728), 1);
					break;
				case 4:
					func_97(func_632(909007663, -1787586531), 1);
					break;
				case 5:
					func_97(func_632(909007663, -1002834519), 1);
					break;
				case 6:
					func_97(func_632(909007663, -50600144), 1);
					break;
				case 7:
					func_97(func_632(909007663, -348503123), 1);
					break;
				case 8:
					func_97(func_632(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_97(func_632(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_97(func_632(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_279(iParam0);
			if (func_308((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_97(func_96(-634848880), 1);
			}
			if (func_308((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_308((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_97(func_632(909007663, -587839005), 1);
				}
				else
				{
					func_97(func_632(909007663, -2049243343), 1);
				}
			}
			if (func_308((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_499(iVar1))
				{
					case 0:
						func_97(func_632(909007663, 1325140787), 1);
						break;
					case 1:
						func_97(func_632(909007663, 2101241783), 1);
						break;
					case 2:
						func_97(func_632(909007663, -1296936294), 1);
						break;
					case 3:
						func_97(func_632(909007663, -798388728), 1);
						break;
					case 4:
						func_97(func_632(909007663, -1787586531), 1);
						break;
					case 5:
						func_97(func_632(909007663, -1002834519), 1);
						break;
					case 6:
						func_97(func_632(909007663, -50600144), 1);
						break;
					case 7:
						func_97(func_632(909007663, -348503123), 1);
						break;
					case 8:
						func_97(func_632(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_97(func_632(909007663, 532323983), 1);
				}
			}
			else if (func_308((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_308((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_308((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_97(func_632(909007663, 551192206), 1);
				}
				else
				{
					func_97(func_632(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_366()
{
	if (func_22() != -1)
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
	if (!func_4(64))
	{
		return;
	}
	else if (func_205(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_204(0, 0, 1) || func_730()) || func_131())
	{
		return;
	}
	iVar0 = func_208();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_731(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_732(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_732(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_733(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_374(0, -1);
	}
	if (iVar2 > 0)
	{
		func_734("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_735(1, 0);
	Global_1956575->f_4 = 1;
}

void func_367(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_84(32768))
	{
		return;
	}
	func_290(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_736(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_368(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_737(iParam0);
}

int func_369(int iParam0, int iParam1)
{
	if (!func_738(iParam0))
	{
		return 0;
	}
	if (!func_406())
	{
		return 0;
	}
	if (!func_739(iParam0, &iVar0, &iVar1))
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

int func_370(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_740())
	{
		iVar2 = func_740();
	}
	iVar5 = func_741(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_495(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_495(iVar6) == 0)
			{
				return func_742(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_495(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_495(iVar6) == 0)
			{
				return func_742(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_742(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_743(1330954593, 0, -1);
		case 1:
			return func_743(1330954593, 0, -1);
		case 2:
			return func_743(1330954593, 0, -1) * 2;
		case 4:
			return func_743(1330954593, 0, -1);
		case 5:
			return func_743(1330954593, 0, -1);
		case 6:
			return func_743(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_743(1330954593, 0, -1) * 3;
		case 9:
			return func_743(1330954593, 0, -1) * 3;
		case 10:
			return func_743(1330954593, 0, -1) * 3;
		case 11:
			return func_743(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_372(int iParam0)
{
	if (!func_197(iParam0))
	{
		return cVar0;
	}
	switch (func_202(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_520(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_279(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_370(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_373(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_375();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_202(Global_1879514->f_1) == 1)
			{
				func_369(5, 1);
			}
			else if (func_202(Global_1879514->f_1) == 8 && (func_308((*Global_1347702)[func_279(Global_1879514->f_1)]->f_12, 1) || func_308((*Global_1347702)[func_279(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_369(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_374(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_744(&Global_0, 8);
	}
	if (!func_406() || func_22() != -1)
	{
		return;
	}
	func_744(&Global_0, 1);
}

int func_375()
{
	iVar0 = func_745(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_746(iVar0))
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

Vector3 func_376(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_747(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_396(vVar0))
	{
		vVar0 = { func_747(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_377(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_378(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_379(vector3 vParam0, int iParam3)
{
	iVar0 = func_79();
	if (func_254(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_748(vParam0, iParam3);
}

void func_380()
{
	func_749();
	func_750();
	func_751();
	_0x11b0a0b282fa9b10(0);
}

void func_381(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_752(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_753(&(Param0.f_10)))
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
			func_754(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_382(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_384()
{
	return Global_1572864->f_12;
}

void func_385(bool bParam0)
{
	if (func_511(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_755();
	Var1.f_3.f_3 = iVar0;
	if ((!func_756(Global_1347343->f_2) && !func_382(Global_1347343->f_11, 64)) || func_84(32768))
	{
		Var1.f_7 = func_757();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_382(Global_1347343->f_11, 1024) && !func_84(32768))
	{
		Var1.f_11 = func_758();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_382(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_759();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_760(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_761(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_383(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_383(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_386(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	func_762(uParam0);
	iVar0 = func_763(uParam0, bParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_764(bParam1);
		}
		iVar0 = func_765(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_766(uParam0);
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
		iVar0 = func_766(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0]->f_2 = bParam1;
	uParam0->f_3[iVar0]->f_1 = get_entity_model(bParam1);
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
	func_767(uParam0, 2);
}

void func_387(char[4] cParam0, int iParam1)
{
	func_768(&(cParam0->f_7375), iParam1);
}

int func_388(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar1])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_389()
{
	return func_520(func_769());
}

void func_390(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_407())
	{
		func_770(cParam0, iVar0);
		iVar0++;
	}
}

int func_391(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_392(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_393(char[4] cParam0)
{
	func_776(cParam0, iLocal_240, iLocal_241, 125222, 125249, 125693, 125743, 125820, "", 66112, -1);
	func_776(cParam0, iLocal_241, iLocal_242, 125979, 125988, 126041, 126157, 126532, "MOB2_INT", 66050, -1);
	func_776(cParam0, iLocal_242, iLocal_243, 126579, 126588, 126648, 126854, 127703, "", 576, -1);
	func_776(cParam0, iLocal_243, iLocal_244, 127864, 127873, 128228, 128347, 128687, "MOB2_MCS_1", 579, -1);
	func_776(cParam0, iLocal_244, iLocal_245, 128771, 128780, 128799, 129030, 129493, "", 576, -1);
	func_776(cParam0, iLocal_245, iLocal_246, 129545, 129554, 129608, 129714, 130529, "", 4672, -1);
	func_776(cParam0, iLocal_246, iLocal_247, 130586, 130595, 130736, 130897, 131179, "", 512, -1);
	func_776(cParam0, iLocal_247, iLocal_248, 131205, 131214, 131402, 131510, 132092, "MOB2_EXT", 578, -1);
	func_776(cParam0, iLocal_248, 26, 132129, 132138, 132240, 132414, 132423, "MOB2_EXT2", 578, -1);
}

void func_394(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_395(bool bParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_817(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_396(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_397(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

int func_398(char[4] cParam0, int iParam1, bool bParam2)
{
	bVar0 = func_818(cParam0, iParam1, bParam2);
	if (does_entity_exist(bVar0) && is_entity_a_ped(bVar0))
	{
		return get_ped_index_from_entity_index(bVar0);
	}
	return 0;
}

void func_399(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_134(iParam1)]->f_13 = { cParam2 };
}

void func_400(char[4] cParam0, int iParam1)
{
	Var0 = { func_819(&(cParam0->f_7375)) };
	if ((((func_820(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_821(cParam0, &Var0);
		func_822(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_122(cParam0, 16384))
		{
			func_823(&(cParam0->f_10792), Global_43805);
			func_767(&(cParam0->f_10792), 8);
		}
		func_247(&(cParam0->f_10792), iParam1);
		func_824(cParam0);
		func_101(cParam0, 2097152);
	}
}

void func_401(char[4] cParam0, int iParam1)
{
	func_767(&(cParam0->f_10792), iParam1);
}

void func_402(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_403(var uParam0)
{
	if (!func_825(uParam0, 4))
	{
		if (func_826(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_827(uParam0) };
		if (!func_826(uParam0->f_860, 524288))
		{
			func_828(&(uParam0->f_872));
		}
		func_829(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_830(uParam0, 0f, 0f, 0f);
		func_831(uParam0);
		func_832(uParam0);
		func_833(uParam0, 0f, 0f, 0f, 0, 0);
		func_834(uParam0);
		func_768(uParam0, 4);
		func_835(uParam0, 0);
		func_836(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_404(int iParam0)
{
	if (func_837(iParam0))
	{
		return func_838(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_405(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_523(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_839(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_840(0, 0);
		if (func_709(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_841(1, 0);
		}
	}
	else
	{
		func_841(1, 0);
	}
	func_216(0);
	func_524(0, vParam0, uParam3);
	return 1;
}

bool func_406()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_407()
{
	return 26;
}

void func_408(int iParam0)
{
	if (!func_196(iParam0))
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

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_842((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_843((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_844((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_845((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_846((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_847((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_416(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_848((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_849((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_418(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_850((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_419(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_851((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_852((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_421(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_853(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_854(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_422(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_855(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_856(&(cParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_819[iVar0] = cParam1;
	cParam0->f_819[iVar0]->f_4 = (cParam0->f_819[iVar0]->f_4 || iParam2);
	cParam0->f_819[iVar0]->f_1 = iParam3;
	cParam0->f_819[iVar0]->f_2 = iParam4;
}

void func_423(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_857(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_858(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_424(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_859(iParam3, func_35(cParam0)) && !func_859(iParam3, func_37(cParam0)))
	{
		return;
	}
	if (_does_anim_scene_exist(*uParam2))
	{
		return;
	}
	if (is_string_null_or_empty(cParam1))
	{
		return;
	}
	iVar0 = func_860(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_861(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*uParam2))
	{
		*uParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0]->f_1 = *uParam2;
	cParam0->f_1126[iVar0] = cParam1;
	cParam0->f_1126[iVar0]->f_3 = (cParam0->f_1126[iVar0]->f_3 || iParam3);
	cParam0->f_1126[iVar0]->f_65 = iParam6;
	cParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_862(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_425(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_859(iParam3, func_35(cParam0)) && !func_859(iParam3, func_37(cParam0)))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return;
	}
	if (_is_anim_scene_finished(iParam1, false))
	{
		return;
	}
	iVar0 = func_863(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_string_null_or_empty(&(cParam0->f_1126[iVar0]->f_4[iVar1])) && are_strings_equal(&(cParam0->f_1126[iVar0]->f_4[iVar1]), sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (is_string_null_or_empty(&(cParam0->f_1126[iVar0]->f_4[iVar1])))
		{
			cParam0->f_1126[iVar0]->f_4[iVar1] = sParam2;
			cParam0->f_1126[iVar0]->f_4[iVar1]->f_2 = (cParam0->f_1126[iVar0]->f_4[iVar1]->f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_426(char[4] cParam0, int iParam1)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	cParam0->f_1124.f_1 = (cParam0->f_1124.f_1 || iParam1);
}

void func_427(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_864(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_865(&(cParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5188[iVar0] = iParam1;
	cParam0->f_5188[iVar0]->f_1 = iParam3;
	cParam0->f_5188[iVar0]->f_2 = iParam4;
	cParam0->f_5188[iVar0]->f_4 = (cParam0->f_5188[iVar0]->f_4 || iParam2);
}

void func_428(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_866(&(cParam0->f_5239), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_867(&(cParam0->f_5239));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5239[iVar0] = cParam1;
	cParam0->f_5239[iVar0]->f_2 = (cParam0->f_5239[iVar0]->f_2 || iParam2);
}

void func_429(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_868((*uParam0)[iVar0]))
		{
			if (func_859((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_869((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_870((*uParam1)[iVar0]))
		{
			if (func_859((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_871((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_872((*uParam2)[iVar0]))
		{
			if (func_859((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_873((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_874((*uParam3)[iVar0]))
		{
			if (func_859((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_875((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		func_876(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877((*uParam5)[iVar0]))
		{
			if (func_859((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_878((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_879((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_859((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_880((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_881((*uParam6)[iVar0]))
		{
			if (func_859((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_882((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_883((*uParam7)[iVar0]))
		{
			if (func_859((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_884((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_885((*uParam8)[iVar0]))
		{
			if (func_859((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_886((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_887((*uParam9)[iVar0]))
		{
			if (func_859((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_888((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_889((*uParam10)[iVar0]))
		{
			if (func_859((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_890((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_891((*uParam11)[iVar0]))
		{
			if (func_859((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_892((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_430(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (is_entity_dead(bParam1))
	{
		return;
	}
	if (func_893(uParam0, bParam1, sParam2))
	{
		if (!is_ped_injured(bParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(bParam1)))
			{
				set_ped_can_play_ambient_anims(bParam1, bParam3);
			}
		}
	}
}

struct<2> func_431()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_432(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_433(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_434(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_894(&(cParam0->f_7375), bParam1, sParam2, iParam3, iParam4, bParam5);
	func_386(&(cParam0->f_10792), bParam1, sParam2, bParam6);
}

bool func_435(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_25(&(cParam0->f_8269)))
	{
		if (!func_123(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
			if (func_896(&(cParam0->f_8269), &cVar1, 0, func_134(iParam1), 1, 0))
			{
				if (func_26(&(cParam0->f_8269)))
				{
					func_897(&(cParam0->f_8269));
				}
				func_142(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_898(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_436(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_877((*uParam0)[iVar0]))
		{
			if (func_859((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_899((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_900((*uParam0)[iVar0]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_437(int iParam0, float fParam1)
{
	if (!is_entity_dead(Global_35))
	{
		if (!is_ped_on_mount(player_ped_id()))
		{
			set_ped_max_move_blend_ratio(player_ped_id(), fParam1);
		}
		else if (!is_entity_dead(get_mount(player_ped_id())))
		{
			set_ped_max_move_blend_ratio(get_mount(player_ped_id()), fParam1);
		}
	}
	if (!func_901(iParam0, 8))
	{
		disable_control_action(0, -640622144, false);
	}
	if (!func_901(iParam0, 4))
	{
		disable_control_action(0, -485697785, false);
	}
	if (!func_901(iParam0, 16))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
	}
	if (!func_901(iParam0, 128))
	{
		disable_control_action(0, -562475458, false);
	}
	if (!func_901(iParam0, 512))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
	if (!func_901(iParam0, 64))
	{
		disable_control_action(0, -620139643, false);
	}
	if (!(func_902(17) && func_903(Global_35, (*Global_1835011)[17]->f_18, 0) < 10f))
	{
		if (!func_901(iParam0, 2048))
		{
			disable_control_action(0, -822242784, false);
		}
	}
	if (!func_901(iParam0, 4096))
	{
		disable_control_action(0, -1664638556, false);
	}
	if (!is_entity_dead(Global_35))
	{
		if (!func_901(iParam0, 1024))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
		}
		if (!func_901(iParam0, 8))
		{
			set_ped_reset_flag(Global_35, 168, true);
		}
		set_ped_reset_flag(Global_35, 33, true);
		if (!func_901(iParam0, 32))
		{
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
	}
}

int func_438(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_439(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_122(cParam0, 2))
	{
		return true;
	}
	if (func_22() == 0)
	{
		return true;
	}
	if (does_entity_exist(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_904(func_63(cParam0));
	if (!func_31())
	{
		vVar2 = { func_128(cParam0->f_607) };
	}
	if (func_905(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_440(char[4] cParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_122(cParam0, 16777216))
		{
			if (!func_906(cParam0))
			{
				func_105(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = iParam2;
				Var0.f_6.f_1 = iParam3;
				Var0.f_6.f_2 = iParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				bVar12 = func_907(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_105(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(bVar12))
					{
						if (bVar12 == cParam0->f_5411)
						{
							func_105(cParam0, 16777216);
						}
						else if (func_908(bVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_909(bVar12))
							{
								_0x0348469daa17576c(bVar12);
							}
							clear_ped_tasks_immediately(bVar12, false, true);
							_set_entity_coords_and_heading(bVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!is_entity_dead(cParam0->f_5411))
		{
			return true;
		}
	}
	if (func_122(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_128(cParam0->f_607) };
	if (func_22() == 0)
	{
		request_model(func_127(cParam0), false);
		if (!has_model_loaded(func_127(cParam0)))
		{
			return false;
		}
		if (func_910(&iVar17, func_127(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			bVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_105(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = iParam2;
		Var18.f_6.f_1 = iParam3;
		Var18.f_6.f_2 = iParam4;
		Var18.f_9 = fParam5;
		if (func_122(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_122(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		bVar13 = func_907(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!func_122(cParam0, 16))
			{
				func_105(cParam0, 16);
			}
		}
	}
	if (does_entity_exist(bVar13))
	{
		cParam0->f_5411 = bVar13;
		cParam0->f_5412 = bVar13;
		func_911(cParam0, bParam1);
		if (!func_122(cParam0, 256))
		{
			if (!func_122(cParam0, 32768))
			{
				vVar14.x = iParam2;
				vVar14.f_1 = iParam3;
				vVar14.f_2 = iParam4;
				if ((!func_909(bVar13) || func_912(Global_35, bVar13, 1, 1) > 200f) && !func_396(vVar14))
				{
					if (!func_31())
					{
						freeze_entity_position(bVar13, false);
						func_817(bVar13, vVar14, fParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_441(char[4] cParam0)
{
	if (!func_122(cParam0, 32) && func_130(cParam0, 3))
	{
		if (func_913(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_105(cParam0, 32);
		}
	}
	if (!func_122(cParam0, 32))
	{
		if (func_914(&(cParam0->f_609), cParam0->f_607))
		{
			func_105(cParam0, 32);
		}
	}
}

void func_442(char[4] cParam0)
{
	if (!func_122(cParam0, 128))
	{
		if (func_122(cParam0, 16384))
		{
			func_915(cParam0);
			if (func_824(cParam0))
			{
				func_53(&(cParam0->f_10792));
				func_916(cParam0, 2097152);
				func_272(cParam0, 16384);
				func_105(cParam0, 128);
			}
			return;
		}
		if (func_130(cParam0, 1))
		{
			return;
		}
		if (func_122(cParam0, 64))
		{
			func_915(cParam0);
			MemCopy(&Var0, {func_157(func_63(cParam0))}, 4);
			if (func_917(cParam0, Var0))
			{
				if (func_438(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_105(cParam0, 128);
			}
		}
		else
		{
			if (func_438(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_105(cParam0, 128);
		}
	}
}

void func_443(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_444(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_918(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_439(cParam0, func_130(cParam0, 3), !func_10(cParam0, 2097152), cParam0->f_5410, !func_10(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_122(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_25(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
		if (func_919(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_130(cParam0, 1))
	{
		if (!func_28(&(cParam0->f_13115)))
		{
			func_29(&(cParam0->f_13115), 0);
		}
		if (func_920(&(cParam0->f_13115)) < 30f)
		{
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				iVar0 = 0;
			}
			if (Global_1935630->f_2 != Global_40.f_39 || (!Global_1935630->f_12 && get_entity_model(player_ped_id()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != &Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630->f_12 && !_0xa0bc8faed8cfeb3c(player_ped_id()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_445(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_920(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_84(32768) && func_921()) && func_920(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_122(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_128(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_128(cParam0->f_607)));
			func_272(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_922(0, 0);
		func_272(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_446(char[4] cParam0)
{
	func_923();
	Global_1934765->f_271 = 1;
	if (func_505(945612176))
	{
		func_473(945612176, 0, 0);
	}
	func_189(1);
	if (!func_168(iVar1515, 1024))
	{
		if (func_924(cParam0))
		{
			func_170(&uLocal_1518, 1024);
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iVar1515, 512))
	{
		if (func_925(cParam0))
		{
			func_170(&uLocal_1518, 512);
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iVar1515, 256))
	{
		if (func_926())
		{
			func_170(&uLocal_1518, 256);
		}
		else
		{
			return false;
		}
	}
	if (func_35(cParam0) > iLocal_241)
	{
		func_927(-1, 1);
	}
	if (func_35(cParam0) < iLocal_245)
	{
		func_928();
	}
	if (!func_929(cParam0))
	{
		return false;
	}
	func_175(0);
	func_930();
	func_171(1);
	func_931();
	func_932();
	func_172(1);
	func_174(0);
	func_933(cParam0);
	func_934(cParam0);
	func_935(cParam0);
	if (func_35(cParam0) > iLocal_241)
	{
		func_936(1);
	}
	func_937();
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_939(cParam0, 156181);
	func_941(cParam0, 156679);
	func_943(cParam0, 159184);
	return true;
}

void func_447(char[4] cParam0, int iParam1)
{
	func_68(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_448(char[4] cParam0)
{
	func_944(cParam0);
	func_945(cParam0);
	iVar0 = func_35(cParam0);
	iVar1 = func_37(cParam0);
	iVar2 = func_164(cParam0, iVar0);
	if (func_10(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_824(cParam0);
		}
	}
	func_946(cParam0);
	func_947(cParam0);
	func_948(cParam0);
	func_949(cParam0);
	func_950(cParam0);
	func_951(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_952(cParam0);
	}
	if ((func_35(cParam0) == 0 && iVar2 < 3) && func_286(cParam0) == 0)
	{
		func_442(cParam0);
	}
	if (func_123(cParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_76(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_953(cParam0, iVar0, 0))
			{
				if (func_954(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_954(cParam0, func_35(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_954(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_84(32768))
				{
					func_387(cParam0, 524288);
				}
				if (func_122(cParam0, 4))
				{
					if (!func_10(cParam0, 4))
					{
						func_955(cParam0, iVar0);
						func_101(cParam0, 4);
					}
					func_956(cParam0);
					func_957(cParam0, iVar0, 1);
				}
				else
				{
					func_957(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_918(cParam0))
			{
				if (func_958(cParam0))
				{
					if (func_10(cParam0, 4))
					{
						func_916(cParam0, 4);
					}
					func_957(cParam0, iVar0, 2);
				}
			}
			else if (func_959(cParam0) >= cParam0->f_13144)
			{
				if (func_10(cParam0, 4))
				{
					func_916(cParam0, 4);
				}
				func_957(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_953(cParam0, iVar0, 2))
			{
				if (!func_960(cParam0))
				{
					func_957(cParam0, iVar0, 4);
					if (func_961(cParam0, iVar0, iVar1))
					{
						func_957(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_962(cParam0);
					func_957(cParam0, iVar0, 3);
					if (func_963(cParam0, iVar0))
					{
						func_957(cParam0, iVar0, 4);
						if (func_961(cParam0, iVar0, iVar1))
						{
							func_957(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_964(cParam0))
			{
				func_963(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_963(cParam0, iVar0))
			{
				func_957(cParam0, iVar0, 4);
				if (func_961(cParam0, iVar0, iVar1))
				{
					func_957(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_961(cParam0, iVar0, iVar1))
			{
				func_957(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_22() == 0)
			{
				func_965(cParam0);
				func_966(cParam0, iVar0);
				func_967(cParam0);
				func_968(cParam0);
				if (func_123(cParam0, iVar1, 2))
				{
					if (func_969(cParam0, iVar1))
					{
						func_970(cParam0, iVar1);
					}
				}
			}
			if (func_953(cParam0, iVar0, 5))
			{
				if (func_953(cParam0, iVar0, 7))
				{
					if (!func_123(cParam0, func_35(cParam0), 67108864))
					{
						func_971(cParam0, func_35(cParam0));
					}
					func_972(cParam0, iVar1);
					func_945(cParam0);
					return true;
				}
				else
				{
					func_957(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_123(cParam0, func_35(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_123(cParam0, func_35(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_973(0);
					}
					func_142(cParam0, func_35(cParam0), 4194304);
				}
				if ((func_974(get_player_index(), 0, 0, 1) && !func_122(cParam0, 8192)) && !func_123(cParam0, func_35(cParam0), 8))
				{
					func_49(1, 0);
					func_975("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_976(cParam0))
					{
						func_957(cParam0, iVar0, 6);
					}
				}
				if (func_10(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_38(cParam0, func_36(iVar0), func_36(iVar1), iVar0, iVar1);
						func_916(cParam0, 268435456);
					}
				}
				if (func_122(cParam0, 1048576))
				{
					if (func_129(func_36(0)))
					{
						func_272(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_22() == 0)
			{
				func_965(cParam0);
				func_966(cParam0, iVar0);
				func_967(cParam0);
				func_968(cParam0);
				if (func_123(cParam0, func_37(cParam0), 2))
				{
					if (func_969(cParam0, func_37(cParam0)))
					{
						func_970(cParam0, func_37(cParam0));
					}
				}
			}
			if ((!func_974(get_player_index(), 0, 0, 1) || func_122(cParam0, 8192)) || func_123(cParam0, func_35(cParam0), 8))
			{
				if (func_953(cParam0, iVar0, 5))
				{
					if (func_977(cParam0))
					{
						func_957(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_977(cParam0);
					func_957(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_953(cParam0, iVar0, 5);
				func_978(cParam0);
			}
			break;
		case 7:
			if (func_953(cParam0, iVar0, 7))
			{
				if (!func_123(cParam0, func_35(cParam0), 67108864))
				{
					func_971(cParam0, func_35(cParam0));
				}
				func_972(cParam0, iVar1);
				func_945(cParam0);
				return true;
			}
			break;
		default:
			func_957(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_449()
{
	func_61(7);
}

void func_450()
{
	if (!is_entity_dead(Global_35))
	{
		func_183();
		set_ped_can_play_ambient_anims(Global_35, true);
	}
	if (!is_entity_dead(iVar1639))
	{
		func_184();
	}
}

void func_451()
{
	func_979(bVar1639, -1560168768, 0);
	func_979(bVar1639, -656563589, 0);
	func_979(bVar1640, -813527099, 0);
	func_979(bVar1639, 1718936990, 0);
}

void func_452(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		_0x411189e51b8020ba(iParam0, "Stealth");
	}
}

void func_453(bool bParam0)
{
	if (does_entity_exist(bParam0))
	{
		_0xa6f67bec53379a32(bParam0, "Handsup");
	}
}

void func_454(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_980(iParam1))
	{
		return;
	}
	bVar0 = func_981(iParam1);
	if (func_982(iParam1))
	{
		if (!func_983(iParam1))
		{
			return;
		}
	}
	func_984(iParam1, 39, 1);
	func_985(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_985(iParam1, 8, 0);
	if (does_entity_exist(bVar0))
	{
		if (!bParam2)
		{
			func_985(iParam1, 512, 1);
			set_ped_keep_task(bVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(bVar0, false);
			func_986(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_987(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_455()
{
	func_460(&(Local_14.f_52), 0);
	func_460(&(Local_14.f_62), 0);
}

void func_456()
{
	func_988(&iLocal_1652, 0);
}

void func_457()
{
	func_460(&(Local_14.f_7), 0);
}

void func_458()
{
	func_460(&(Local_14.f_20), 0);
}

void func_459()
{
	func_460(&(Local_14.f_68), 0);
}

void func_460(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_988((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_461()
{
	if (does_entity_exist(&(Local_14.f_74[0])))
	{
		delete_ped(Local_14.f_74[0]);
		iLocal_282 = 0;
	}
}

void func_462(char[4] cParam0)
{
	func_989(cParam0, &(Local_14.f_15[0]));
	func_989(cParam0, &(Local_14.f_15[1]));
	func_460(&(Local_14.f_15), 0);
}

void func_463(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_464(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11)
{
	vVar1 = { func_990(vParam0, vParam3, iParam10) };
	vVar4 = { func_991(vParam0, vParam3, iParam10) };
	func_992(vParam6, fParam9, iParam11);
	set_ped_non_creation_area(vVar1, vVar4);
	set_ped_paths_in_area(vVar1, vVar4, false, 0);
	iVar0 = add_scenario_blocking_area(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

var func_465(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_468(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

float func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 463.6737f;
				case 1:
					return 463.6737f;
				case 2:
					return 306.925f;
				case 3:
					return 319.7512f;
				case 4:
					return 281.6737f;
				case 5:
					return 308.6969f;
				case 6:
					return 181.6777f;
				case 7:
					return 357.674f;
				case 8:
					return 357.674f;
				case 9:
					return 281.6895f;
				case 10:
					return 319.3949f;
				case 11:
					return 181.3949f;
				case 12:
					return 9.394f;
				case 13:
					return 131.7373f;
				case 14:
					return 281.6709f;
				case 15:
					return 357.5857f;
				case 16:
					return 314.1625f;
				case 17:
					return 36.1625f;
				case 18:
					return 308.6436f;
				case 19:
					return 282.2121f;
				case 20:
					return 66.2835f;
				case 21:
					return 55.2644f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -179.8157f;
				case 3:
					return -179.8157f;
				case 4:
					return 363.6603f;
				case 5:
					return 0.6603f;
				case 6:
					return 360.6603f;
				case 7:
					return 308.5848f;
				case 8:
					return -50.7219f;
				case 9:
					return 271.674f;
				case 10:
					return 401.2313f;
				case 11:
					return 93.6913f;
				case 12:
					return 89.6913f;
				case 13:
					return -60.5778f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 613.6737f;
				case 1:
					return 441.6737f;
				case 2:
					return 272.4512f;
				case 3:
					return 268.4512f;
				case 4:
					return -3.0088f;
				case 5:
					return -3.0088f;
				case 6:
					return 0.9912f;
				case 7:
					return 268.9911f;
				case 8:
					return 2.9912f;
				case 9:
					return -91.0088f;
				case 10:
					return 88.9912f;
				case 11:
					return -139.1856f;
				case 12:
					return 188.6185f;
				case 13:
					return 292.6321f;
				case 14:
					return 80.6321f;
				case 15:
					return 219.6112f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 539.6737f;
				case 1:
					return 507.6737f;
				case 2:
					return -92.326f;
				case 3:
					return 269.8965f;
				case 4:
					return 265.8965f;
				case 5:
					return 269.8965f;
				case 6:
					return 267.8965f;
				case 7:
					return 37.8965f;
				case 8:
					return 153.8961f;
				case 9:
					return 267.4524f;
				case 10:
					return 272.0215f;
				case 11:
					return 90.4587f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -45.8913f;
				case 3:
					return 102.5816f;
				case 4:
					return 318.0707f;
				case 5:
					return 324.0707f;
				case 6:
					return 272.0707f;
				case 7:
					return 268.0707f;
				case 8:
					return 369.9954f;
				case 9:
					return -179.9556f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -34.326f;
				case 1:
					return 269.662f;
				case 2:
					return 270.9208f;
				case 3:
					return 270.9208f;
				case 4:
					return 234.9208f;
				case 5:
					return -90.326f;
				case 6:
					return 267.318f;
				case 7:
					return 271.318f;
				case 8:
					return 293.0165f;
				case 9:
					return 289.0165f;
				case 10:
					return 319.0165f;
				case 11:
					return 348.588f;
				case 12:
					return -33.6858f;
				case 13:
					return -33.6858f;
				case 14:
					return 324.4709f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 432.0707f;
				case 1:
					return 90.78f;
				case 2:
					return 95.98f;
				case 3:
					return 449.8871f;
				case 4:
					return 422.071f;
				case 5:
					return -90.0155f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 311.0828f;
				case 1:
					return 370.4965f;
				case 2:
					return 338.5735f;
				case 3:
					return 447.6609f;
				case 4:
					return 539.6609f;
				case 5:
					return -268.1506f;
				case 6:
					return 460.6656f;
				case 7:
					return 244.8f;
				case 8:
					return 317.52f;
				case 9:
					return 3.1256f;
				case 10:
					return 12.8111f;
				case 11:
					return -73.1889f;
				case 12:
					return 128.869f;
				case 13:
					return 2.7011f;
				case 14:
					return 0.7011f;
				case 15:
					return 4.7011f;
				case 16:
					return 18.7011f;
				case 17:
					return -41.8102f;
				case 18:
					return -91.8102f;
				case 19:
					return 221.0828f;
				case 20:
					return 401.0706f;
				case 21:
					return 267.0706f;
				case 22:
					return 539.0706f;
				case 23:
					return 219.0706f;
				case 24:
					return 273.2347f;
				case 25:
					return 298.5779f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 179.442f;
				case 1:
					return 325.3351f;
				case 2:
					return 204.7148f;
				case 3:
					return 269.0178f;
				case 4:
					return 217.1374f;
				case 5:
					return 357.674f;
				case 6:
					return 78.0707f;
				case 7:
					return 357.6737f;
				case 8:
					return 428.0967f;
				case 9:
					return 93.6376f;
				case 10:
					return 179.6376f;
				case 11:
					return -6.3624f;
				case 12:
					return 182.7806f;
				case 13:
					return 96.2177f;
				case 14:
					return 90.2177f;
				case 15:
					return 90.2177f;
				case 16:
					return 136.8442f;
				case 17:
					return 180.5672f;
				case 18:
					return 154.5672f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 269.9554f;
				case 1:
					return 271.6167f;
				case 2:
					return 266.8688f;
				case 3:
					return -10.5445f;
				case 4:
					return 178.2467f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 90f;
				case 2:
					return 90.4f;
				case 3:
					return 32.64f;
				case 4:
					return 55.76f;
				case 5:
					return 69.84f;
				case 6:
					return 49.68f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 268.9026f;
				case 1:
					return 269.44f;
				case 2:
					return 268.3899f;
				case 3:
					return 268.3899f;
				case 4:
					return 268.3899f;
				case 5:
					return 268.3899f;
				case 6:
					return 268.3899f;
				case 7:
					return 268.3899f;
				case 8:
					return 270.9404f;
				case 9:
					return 270.4614f;
				case 10:
					return 270.4614f;
				case 11:
					return 270.4614f;
				case 12:
					return 270.4614f;
				case 13:
					return 268.4614f;
				case 14:
					return 268.4614f;
				case 15:
					return 269.8529f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 102.6591f;
				case 1:
					return 90.2545f;
				case 2:
					return 84.3923f;
				case 3:
					return 89.0352f;
				case 4:
					return 95.3873f;
				case 5:
					return 92.6186f;
				case 6:
					return 123.9634f;
				case 7:
					return 88.9354f;
				case 8:
					return 87.8529f;
				case 9:
					return 89.8529f;
				case 10:
					return 89.8529f;
				case 11:
					return 180.0424f;
				case 12:
					return 92.0424f;
				case 13:
					return 86.0424f;
				case 14:
					return 88.0424f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 456.9599f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -91.076f;
				case 1:
					return -91.076f;
				case 2:
					return -87.076f;
				case 3:
					return -91.076f;
				case 4:
					return -89.076f;
				case 5:
					return -91.076f;
				case 6:
					return -91.076f;
				case 7:
					return -89.7425f;
				case 8:
					return -89.7425f;
				case 9:
					return -89.7425f;
				case 10:
					return -89.7425f;
				case 11:
					return 270.2574f;
				case 12:
					return 0.2575f;
				case 13:
					return -1.7425f;
				case 14:
					return 0.2575f;
				case 15:
					return 0.2575f;
				case 16:
					return 268.2574f;
				case 17:
					return 270.2574f;
				case 18:
					return 270.2574f;
				case 19:
					return 270.2574f;
				case 20:
					return 360.2574f;
				case 21:
					return -87.7425f;
				case 22:
					return 270.2574f;
				case 23:
					return 270.2574f;
				case 24:
					return -89.4326f;
				case 25:
					return -91.4326f;
				case 26:
					return -91.4326f;
				case 27:
					return -77.4326f;
				case 28:
					return -75.4326f;
				case 29:
					return 0.5674f;
				case 30:
					return 8.5674f;
				case 31:
					return 178.5674f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 85.6335f;
				case 1:
					return 87.6335f;
				case 2:
					return 88.3696f;
				case 3:
					return 92.3696f;
				case 4:
					return 92.3696f;
				case 5:
					return 92.3696f;
				case 6:
					return 92.3696f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 265.8907f;
				case 1:
					return 107.8907f;
				case 2:
					return 231.8907f;
				case 3:
					return 229.8907f;
				case 4:
					return 231.8907f;
				case 5:
					return 63.8907f;
				case 6:
					return 181.8907f;
				case 7:
					return 247.538f;
				case 8:
					return 235.843f;
				case 9:
					return 235.843f;
				case 10:
					return 231.843f;
				case 11:
					return 235.843f;
				case 12:
					return 145.843f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 279.6962f;
				case 1:
					return 277.6962f;
				case 2:
					return 271.6962f;
				case 3:
					return 277.6962f;
				case 4:
					return 269.6962f;
				case 5:
					return 361.6962f;
				case 6:
					return 184.9863f;
				case 7:
					return 179.1348f;
				case 8:
					return 1.0603f;
				case 9:
					return 3.0603f;
				case 10:
					return -90.9397f;
				case 11:
					return 1.0603f;
				case 12:
					return 232.3636f;
				case 13:
					return 304.3636f;
				case 14:
					return 40.3636f;
				case 15:
					return 314.3636f;
			}
			break;
	}
	return 0f;
}

void func_467(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_468(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_469(int iParam0, bool bParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_993(iParam0, iVar1);
		if (func_994(iVar0))
		{
			func_995(iVar0, bParam1);
		}
		iVar1++;
	}
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_997(iParam0, 4);
		}
		else
		{
			func_998(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_999(iParam0, 4);
	}
	else
	{
		func_1000(iParam0, 33554432);
	}
	_0x9b4e793b1cb6550a();
	func_1001(iParam0);
}

void func_471(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1717 = func_1002("MOB2_UC_PICKUP", -473983589, Local_150.f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		func_1003(&iLocal_1717, &(Local_14.f_99[0]));
	}
	else
	{
		func_13(&iLocal_1717, 1, 1);
		func_475(&iLocal_1620);
		func_170(&uLocal_1518, 128);
	}
}

void func_472(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iVar1984, 1, 0f, 0, 0, 0, 0, 0);
		func_1004(iVar1985, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iVar1984, 0, 0f, 0, 1, 0, 0, 0);
		func_1004(iVar1985, 0, 0f, 0, 1, 0, 0, 0);
	}
}

void func_473(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_481(1497516462);
			func_482(2016141805);
			func_482(1010885152);
			func_482(-502324015);
			break;
		case 2016141805:
			func_482(1497516462);
			func_481(2016141805);
			func_482(1010885152);
			func_482(-502324015);
			break;
		case 1010885152:
			func_482(1497516462);
			func_482(2016141805);
			func_481(1010885152);
			func_482(-502324015);
			break;
		case -502324015:
			func_482(1497516462);
			func_482(2016141805);
			func_482(1010885152);
			func_481(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_482(-538889627);
			func_482(-538880323);
			func_482(-1056767524);
			func_481(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1005();
			func_481(iParam0);
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
			func_1006();
			func_481(iParam0);
			break;
		case 2019386373:
			func_482(-664252410);
			func_482(2109952320);
			func_481(2019386373);
			break;
		case -664252410:
			func_482(2019386373);
			func_482(2109952320);
			func_481(-664252410);
			break;
		case 2109952320:
			func_482(2019386373);
			func_482(-664252410);
			func_481(2109952320);
			break;
		case -1674179981:
			func_482(-1835851517);
			func_482(-1838352012);
			func_481(-1674179981);
			break;
		case -1835851517:
			func_482(-1674179981);
			func_482(-1838352012);
			func_481(-1835851517);
			break;
		case -1838352012:
			func_482(-1674179981);
			func_482(-1835851517);
			func_481(-1838352012);
			break;
		case -1717960576:
			func_482(210001842);
			func_481(-1717960576);
			break;
		case 210001842:
			func_482(-1717960576);
			func_481(210001842);
			break;
		case -150493654:
			func_482(-1271608261);
			func_482(1846061697);
			func_482(-1145519186);
			func_481(-150493654);
			break;
		case -1271608261:
			func_482(-150493654);
			func_482(1846061697);
			func_482(-1145519186);
			func_481(-1271608261);
			break;
		case 1846061697:
			func_482(-150493654);
			func_482(-1271608261);
			func_482(-1145519186);
			func_481(1846061697);
			break;
		case -1145519186:
			func_482(-150493654);
			func_482(-1271608261);
			func_482(1846061697);
			func_481(-1145519186);
			break;
		case 1766284049:
			func_482(280705402);
			func_482(1926308480);
			func_481(1766284049);
			break;
		case 280705402:
			func_482(1766284049);
			func_482(1926308480);
			func_481(280705402);
			break;
		case 1926308480:
			func_482(1766284049);
			func_482(280705402);
			func_481(1926308480);
			Jump @2851; //curOff = 1203
			if (bParam1)
			{
				func_482(439465264);
				func_481(1609506757);
			}
			else
			{
				func_482(1609506757);
				func_482(439465264);
			}
			Jump @2851; //curOff = 1250
			if (func_505(1609506757))
			{
				if (bParam1)
				{
					func_481(439465264);
				}
				else
				{
					func_482(439465264);
				}
			}
			Jump @2851; //curOff = 1291
			func_482(-1612662716);
			func_481(1822001510);
			Jump @2851; //curOff = 1312
			func_482(1822001510);
			func_481(-1612662716);
			Jump @2851; //curOff = 1333
			func_482(1952610440);
			func_482(-223469678);
			func_482(-404698347);
			func_482(1517904467);
			func_481(1306158345);
			Jump @2851; //curOff = 1381
			func_482(1306158345);
			func_482(-223469678);
			func_482(-404698347);
			func_482(1517904467);
			func_481(1952610440);
			Jump @2851; //curOff = 1429
			func_482(1306158345);
			func_482(1952610440);
			func_482(-404698347);
			func_482(1517904467);
			func_481(-223469678);
			Jump @2851; //curOff = 1477
			func_482(1306158345);
			func_482(1952610440);
			func_482(-223469678);
			func_482(1517904467);
			func_481(-404698347);
			Jump @2851; //curOff = 1525
			func_482(1306158345);
			func_482(1952610440);
			func_482(-223469678);
			func_482(-404698347);
			func_481(1517904467);
			Jump @2851; //curOff = 1573
			func_482(931649776);
			func_482(-434590080);
			func_482(1743048395);
			func_482(449774763);
			func_481(1376646519);
			Jump @2851; //curOff = 1621
			func_482(1376646519);
			func_482(-434590080);
			func_482(1743048395);
			func_482(449774763);
			func_481(931649776);
			Jump @2851; //curOff = 1669
			func_482(1376646519);
			func_482(931649776);
			func_482(1743048395);
			func_482(449774763);
			func_481(-434590080);
			Jump @2851; //curOff = 1717
			func_482(1376646519);
			func_482(931649776);
			func_482(-434590080);
			func_482(449774763);
			func_481(1743048395);
			Jump @2851; //curOff = 1765
			func_482(1376646519);
			func_482(931649776);
			func_482(-434590080);
			func_482(1743048395);
			func_481(449774763);
			Jump @2851; //curOff = 1813
			func_482(38162571);
			func_482(1350391819);
			func_482(54073871);
			func_481(-1414537028);
			Jump @2851; //curOff = 1852
			func_482(-1414537028);
			func_482(1350391819);
			func_482(54073871);
			func_481(38162571);
			Jump @2851; //curOff = 1891
			func_482(-1414537028);
			func_482(38162571);
			func_482(54073871);
			func_481(1350391819);
			Jump @2851; //curOff = 1930
			func_482(-1414537028);
			func_482(38162571);
			func_482(1350391819);
			func_481(54073871);
			Jump @2851; //curOff = 1969
			func_481(198200492);
			func_482(-1124061431);
			func_482(52706132);
			func_482(-259123672);
			Jump @2851; //curOff = 2008
			func_482(198200492);
			func_481(-1124061431);
			func_482(52706132);
			func_482(-259123672);
			Jump @2851; //curOff = 2047
			func_482(198200492);
			func_482(-1124061431);
			func_481(52706132);
			func_482(-259123672);
			Jump @2851; //curOff = 2086
			func_482(198200492);
			func_482(-1124061431);
			func_482(52706132);
			func_481(-259123672);
			Jump @2851; //curOff = 2125
			func_481(-919512195);
			func_482(-1925798111);
			func_482(420709909);
			func_482(1703426636);
			Jump @2851; //curOff = 2164
			func_481(-1925798111);
			func_482(-919512195);
			func_482(420709909);
			func_482(1703426636);
			Jump @2851; //curOff = 2203
			func_481(420709909);
			func_482(-919512195);
			func_482(-1925798111);
			func_482(1703426636);
			Jump @2851; //curOff = 2242
			func_481(1703426636);
			func_482(-919512195);
			func_482(-1925798111);
			func_482(420709909);
			Jump @2851; //curOff = 2281
			func_481(-1223121209);
			func_482(630808005);
			Jump @2851; //curOff = 2302
			func_481(630808005);
			func_482(-1223121209);
			Jump @2851; //curOff = 2323
			func_481(1453909576);
			func_482(1643531967);
			Jump @2851; //curOff = 2344
			func_481(1643531967);
			func_482(1453909576);
			Jump @2851; //curOff = 2365
			func_481(0);
			func_482(473295046);
			func_482(-1738165526);
			Jump @2851; //curOff = 2391
			func_481(473295046);
			func_482(0);
			func_482(-1738165526);
			Jump @2851; //curOff = 2417
			func_481(-1738165526);
			func_482(0);
			func_482(473295046);
			Jump @2851; //curOff = 2443
			func_481(932909855);
			func_482(2051822093);
			Jump @2851; //curOff = 2464
			func_481(2051822093);
			func_482(932909855);
			Jump @2851; //curOff = 2485
			func_481(405586984);
			func_482(1509509592);
			func_482(-959357075);
			func_482(-1311865656);
			Jump @2851; //curOff = 2524
			func_481(1509509592);
			func_482(405586984);
			func_482(-959357075);
			func_482(-1311865656);
			Jump @2851; //curOff = 2563
			func_481(-959357075);
			func_482(1509509592);
			func_482(405586984);
			func_482(-1311865656);
			Jump @2851; //curOff = 2602
			func_481(-1311865656);
			func_482(1509509592);
			func_482(-959357075);
			func_482(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				func_481(-524145696);
			}
			else
			{
				func_482(-524145696);
			}
			func_482(1626481264);
			func_482(282809459);
			Jump @2851; //curOff = 2688
			func_481(282809459);
			func_482(1626481264);
			func_482(-524145696);
			Jump @2851; //curOff = 2718
			func_481(1626481264);
			func_482(-524145696);
			func_482(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				func_481(885203519);
			}
			else
			{
				func_482(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				func_481(-1080627546);
			}
			else
			{
				func_482(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!func_505(iParam0))
				{
					func_481(iParam0);
				}
			}
			else if (func_505(iParam0))
			{
				func_482(iParam0);
			}
		}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1575[0] = add_cover_point(func_1(1, 0), func_1007(1, 0), 0, 2, 1, false);
		iLocal_1575[1] = add_cover_point(func_1(1, 1), func_1007(1, 1), 1, 2, 1, false);
		iLocal_1575[2] = add_cover_point(func_1(1, 2), func_1007(1, 2), 0, 0, 0, false);
		iLocal_1575[3] = add_cover_point(func_1(1, 3), func_1007(1, 3), 2, 0, 0, false);
		iLocal_1580[0] = add_cover_point(func_1(11, 0), func_1007(11, 0), 1, 2, 1, false);
		iLocal_1580[1] = add_cover_point(func_1(11, 1), func_1007(11, 1), 1, 2, 1, false);
		iLocal_1580[3] = add_cover_point(func_1(11, 3), func_1007(11, 3), 1, 2, 1, false);
		iLocal_1580[4] = add_cover_point(func_1(11, 4), func_1007(11, 4), 1, 2, 1, false);
		iLocal_1580[5] = add_cover_point(func_1(11, 5), func_1007(11, 5), 1, 2, 1, false);
		iLocal_1580[6] = add_cover_point(func_1(11, 6), func_1007(11, 6), 2, 0, 1, false);
		iLocal_1580[7] = add_cover_point(func_1(11, 7), func_1007(11, 7), 0, 2, 1, false);
		iLocal_1597[8] = add_cover_point(func_1(12, 8), func_1007(12, 8), 0, 2, 1, false);
		iLocal_1597[9] = add_cover_point(func_1(12, 9), func_1007(12, 9), 2, 0, 1, false);
		iLocal_1597[10] = add_cover_point(func_1(12, 10), func_1007(12, 10), 2, 0, 1, false);
		iLocal_1597[11] = add_cover_point(func_1(12, 11), func_1007(12, 11), 0, 2, 1, false);
		iLocal_1597[12] = add_cover_point(func_1(12, 12), func_1007(12, 12), 1, 2, 1, false);
		iLocal_1597[13] = add_cover_point(func_1(12, 13), func_1007(12, 13), 0, 2, 1, false);
		iLocal_1597[14] = add_cover_point(func_1(12, 14), func_1007(12, 14), 0, 2, 1, false);
		iLocal_1597[0] = add_cover_point(func_1(12, 0), func_1007(12, 0), 3, 2, 1, false);
		iLocal_1597[1] = add_cover_point(func_1(12, 1), func_1007(12, 1), 3, 2, 1, false);
		iLocal_1597[2] = add_cover_point(func_1(12, 2), func_1007(12, 2), 1, 2, 1, false);
		iLocal_1597[3] = add_cover_point(func_1(12, 3), func_1007(12, 3), 3, 2, 1, false);
		iLocal_1597[4] = add_cover_point(func_1(12, 4), func_1007(12, 4), 3, 2, 1, false);
		iLocal_1597[5] = add_cover_point(func_1(12, 5), func_1007(12, 5), 3, 2, 1, false);
		iLocal_1597[6] = add_cover_point(func_1(12, 6), func_1007(12, 6), 1, 2, 1, false);
		iLocal_1597[7] = add_cover_point(func_1(12, 7), func_1007(12, 7), 3, 2, 1, false);
	}
	else
	{
		if (does_scripted_cover_point_exist_at_coords(func_1(1, 0), 0))
		{
			remove_cover_point(&(iLocal_1575[0]));
		}
		if (does_scripted_cover_point_exist_at_coords(func_1(1, 1), 0))
		{
			remove_cover_point(&(iLocal_1575[1]));
		}
		if (does_scripted_cover_point_exist_at_coords(func_1(1, 2), 0))
		{
			remove_cover_point(&(iLocal_1575[2]));
		}
		if (does_scripted_cover_point_exist_at_coords(func_1(1, 3), 0))
		{
			remove_cover_point(&(iLocal_1575[3]));
		}
		iLocal_1517 = 0;
		while (iVar1514 < 16)
		{
			if (does_scripted_cover_point_exist_at_coords(func_9(11, iVar1514), 0))
			{
				remove_cover_point(&(iLocal_1580[iVar1514]));
			}
			iLocal_1517 = iVar1514 + 1;
		}
		iLocal_1517 = 0;
		while (iVar1514 < 15)
		{
			if (does_scripted_cover_point_exist_at_coords(func_9(12, iVar1514), 0))
			{
				remove_cover_point(&(iLocal_1597[iVar1514]));
			}
			iLocal_1517 = iVar1514 + 1;
		}
	}
}

void func_475(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_476(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_475((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_477(bool bParam0, float fParam1)
{
	clear_bit(&(Global_1934765->f_301), 1);
	func_1008(bParam0, fParam1);
}

void func_478(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1009((*uParam0)[iVar0]);
		iVar0++;
	}
}

bool func_479(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_168(iVar0, 1))
	{
		if (is_ped_fatally_injured(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 2))
	{
		if (_is_ped_hogtied(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 8))
	{
		if (get_ped_config_flag(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_168(iVar0, 16))
	{
		if (!is_ped_on_mount(bParam0) && !is_ped_in_any_vehicle(bParam0, false))
		{
			return false;
		}
	}
	if (func_168(iVar0, 32))
	{
		if (is_entity_in_water(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 64))
	{
		if (_0xb655db7582aec805(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 128))
	{
		if (is_ped_ragdoll(bParam0))
		{
			return false;
		}
	}
	if (func_168(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_480(int iParam0)
{
	if (!does_group_exist(iParam0) || !_0x0455546f23ff08e4(iParam0))
	{
		return;
	}
	get_group_size(iParam0, &uVar0, &iVar2);
	if (iVar2 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = get_ped_as_group_member(iParam0, iVar1);
			if (does_entity_exist(iVar3))
			{
				if (!is_entity_dead(iVar3))
				{
					remove_ped_from_group(iVar3);
				}
			}
			iVar1++;
		}
	}
	remove_group(iParam0);
}

void func_481(int iParam0)
{
	iVar0 = func_1010(iParam0, 1);
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

void func_482(int iParam0)
{
	iVar0 = func_1010(iParam0, 1);
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

bool func_483(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_22() != -1)
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

int func_484(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_483(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_485(int iParam0)
{
	func_1011(iParam0, 8, 0);
}

bool func_486(char[4] cParam0, bool bParam1)
{
	return func_490(cParam0, bParam1, &uVar0);
}

void func_487(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(bParam0);
	func_475(&iVar0);
}

void func_488(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1012(cParam0->f_5423[iVar0], iParam2);
}

void func_489(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1013(cParam0->f_5423[iVar0], iParam2);
}

bool func_490(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_261(cParam0->f_5423[iVar0]))
		{
			if (&cParam0->f_5423[iVar0] == bParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_491(var uParam0)
{
	if (func_532(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_532(uParam0, 1024);
	if (func_532(uParam0, 128) || bVar0)
	{
		if (func_532(uParam0, 4096))
		{
			if (!func_532(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1013(uParam0, 2048);
				return;
			}
		}
		else if (func_532(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1012(uParam0, 2048);
		}
		if (func_532(uParam0, 512))
		{
			if (func_533(uParam0->f_10))
			{
				if (func_908(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1014(uParam0->f_10))
					{
						func_537(uParam0->f_10, 1);
						func_1015(uParam0->f_10, 0);
					}
				}
				else if ((func_1014(uParam0->f_10) && !bVar0) && !func_532(uParam0, 16384))
				{
					func_537(uParam0->f_10, 0);
					func_1015(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_908(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_908(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_532(uParam0, 512))
	{
		if (func_533(uParam0->f_10))
		{
			if (func_1014(uParam0->f_10))
			{
				func_537(uParam0->f_10, 0);
				func_1015(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_492(int iParam0)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1016(iParam0, 36, 1))
	{
		func_984(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1017(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_493(int iParam0)
{
	return func_1018(iParam0, 2);
}

int func_494(int iParam0)
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

int func_495(int iParam0)
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

int func_496(int iParam0)
{
	return iParam0 & 31;
}

bool func_497()
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

int func_498(int iParam0)
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

int func_499(int iParam0)
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

void func_500(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_501()
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

int func_502(int iParam0)
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

void func_503(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_504(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1019(iParam0);
	}
	else
	{
		func_1020(iParam0, iParam1);
	}
	func_1021();
}

bool func_505(int iParam0)
{
	iVar0 = func_1010(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_506(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_279(iParam0))
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
			switch (func_279(iParam0))
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

void func_507(int iParam0)
{
	iVar2 = func_1022(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_619(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1024(func_1023(iParam0), 6);
}

void func_508(int iParam0)
{
	iVar2 = func_1022(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_619(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1025(func_1023(iParam0), 6);
}

int func_509(int iParam0)
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

int func_510(int iParam0)
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
	func_1026(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_511(int iParam0)
{
	return iParam0 != 0;
}

bool func_512(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_513(int iParam0, var uParam1)
{
	if (!func_512(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1027(iParam0, *uParam1, 0);
	func_1028(uParam1);
	Global_1935183->f_24 = 1;
}

void func_514(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_515(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_567() - fParam1);
	func_1029(uParam0, 1);
	func_1030(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_516(var uParam0)
{
	return func_226(*uParam0, 2);
}

int func_517()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_518(bool bParam0)
{
	if (func_1031())
	{
		Global_1357509 = 1;
	}
	if (func_1032(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_519(int iParam0, int iParam1)
{
	Var0 = { func_9(iParam0, iParam1) };
	Var0.f_3 = func_466(iParam0, iParam1);
	return Var0;
}

int func_520(int iParam0)
{
	if (func_202(iParam0) == 1)
	{
		return func_279(iParam0);
	}
	return -1;
}

int func_521(int iParam0)
{
	if (func_202(iParam0) == 8)
	{
		return func_279(iParam0);
	}
	return -1;
}

char[] func_522(int iParam0)
{
	if (!func_280(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_523(int iParam0, bool bParam1)
{
	if (func_22() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_84(32768))
	{
		return;
	}
	if (!func_84(32768))
	{
		func_1033(1, bParam1);
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
	if (func_84(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_292();
	}
}

void func_524(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_379(vParam1, 1);
}

bool func_525(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_526(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_527(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_529(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_530(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_531()
{
	return Global_1109400->f_245;
}

bool func_532(var uParam0, int iParam1)
{
	return func_168(uParam0->f_64, iParam1);
}

bool func_533(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0)
{
	return func_728(iParam0, 16, 1);
}

void func_535(char[4] cParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(bParam1) && func_1034(cParam0, get_object_index_from_entity_index(bParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(bParam1));
	}
	if (does_blip_exist(cParam0->f_5423[iVar0]->f_8))
	{
		remove_blip(&(cParam0->f_5423[iVar0]->f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	_copy_memory(cParam0->f_5423[iVar0], cParam0->f_5423[(cParam0->f_13145 - 1)], 65);
	_copy_memory(cParam0->f_5423[(cParam0->f_13145 - 1)], &Var1, 65);
	cParam0->f_13145 = (cParam0->f_13145 - 1);
}

void func_536(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (!is_entity_dead(bParam0))
	{
		if (is_ped_in_group(bParam0))
		{
			remove_ped_from_group(bParam0);
		}
		set_ped_can_ragdoll(bParam0, true);
		set_ped_can_ragdoll_from_player_impact(bParam0, true);
	}
}

void func_537(int iParam0, bool bParam1)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1035(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1011(iParam0, 1, 0);
		}
	}
	func_1011(iParam0, 16, bParam1);
}

void func_538(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_533(iParam0))
	{
		return;
	}
	if (func_534(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_986(iParam0, 56, 1);
		func_29(&(Global_1359489->f_40), 1);
	}
	func_537(iParam0, 0);
	func_1011(iParam0, 4, 0);
	func_485(iParam0);
	func_1036(iParam0);
	func_984(iParam0, 37, 1);
	bVar0 = func_479(Global_1360165[iParam0], 0);
	iVar1 = func_1037(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1016(iParam0, 64, 1))
	{
		func_984(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_984(iParam0, 33, 1);
		func_984(iParam0, 34, 1);
		func_1038(iParam0, 1056964608, -1, 1061158912);
		func_1039(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_986(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_986(iParam0, 35, 1);
			if (bParam8)
			{
				func_986(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1040(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_984(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_986(iParam0, 33, 1);
		func_1039(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_29(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_570(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_986(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1041(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1016(iParam0, 45, 1))
	{
		func_984(iParam0, 45, 1);
	}
	func_1042(iParam0, 16, 1);
	func_984(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_479(func_981(iParam0), 0))
		{
			func_454(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_539(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_269(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_546(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_546(iParam0);
	}
}

bool func_540(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_541(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_542(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
}

bool func_543(int iParam0)
{
	if (!func_1043(iParam0))
	{
		return false;
	}
	if (!func_338())
	{
		return true;
	}
	return false;
}

void func_544(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_547(iParam0))
	{
		return;
	}
	bVar0 = func_222(iParam0);
	func_1044(iParam0);
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	iVar1 = get_entity_model(bVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_543(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&bVar0);
	func_1045(iParam0, 0);
	func_546(iParam0);
}

bool func_545(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
	}
	iVar0 = func_268(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_546(int iParam0)
{
	iParam0 = func_273(iParam0);
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

bool func_547(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_548(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	bVar0 = func_222(iParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(bVar0) || is_ped_injured(bVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(bVar0))
	{
		return;
	}
	if (func_1046(iParam0, 64))
	{
		func_541(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(bVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_617(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (bVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, bVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1047(&((*Global_1900383)[iParam0]->f_27));
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
		if (Global_1935630->f_40 == bVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_541(iParam0);
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
		if (func_1048(1) < 1)
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
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, bVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1049(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1046(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(bVar0);
	bVar10 = false;
	iVar11 = func_1050(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == bVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(bVar0, true, false) };
	fVar15 = func_1051(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1052(iParam0))
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
		fVar19 = _get_ped_remaining_revival_time(bVar0, true);
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
		func_1053((*Global_1900383)[iParam0]->f_26);
		func_1054((*Global_1900383)[iParam0]->f_26);
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
	if ((_get_saddle_horse_for_player(player_id()) == bVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_909(bVar0) && !bVar9)
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
	iVar21 = func_1048(iParam0);
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
		_0x44813684f72b563c(bVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(bVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(bVar0, iVar22);
	}
}

int func_549(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_550(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_551(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_552(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_553(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_554(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_547(iParam0))
	{
		return false;
	}
	iVar0 = func_222(iParam0);
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

void func_555(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_547(iParam0))
	{
		return;
	}
	iVar0 = func_222(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_556(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_725(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_557(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1055())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_725(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1056(iVar0);
			func_1057(iVar0, 0, 0);
		}
		func_725(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_97(func_96(1644987397), iVar1);
	}
}

bool func_558(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_258(iParam0, 67108864);
}

void func_559(int iParam0)
{
	StringCopy(&cVar0, func_1058(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1059(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_560(int iParam0)
{
	StringCopy(&cVar0, func_1058(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1059(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_561(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_562(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_563(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_564(int iParam0)
{
	if (!func_528(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_565(int iParam0)
{
	if (func_528(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_566(int iParam0)
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

float func_567()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_568(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1060(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_22() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

bool func_569(int iParam0)
{
	if (!func_980(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_570(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_571(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1061(iParam0);
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

int func_572(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_585(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_573(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_574(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_575()
{
	return Global_40.f_11095.f_35;
}

void func_576(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1062(iParam0, 0);
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
		func_577(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_577(int iParam0)
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
			func_1062(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1063(1);
	}
}

bool func_578(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_579()
{
	iVar0 = func_1064((*Global_1347702)[9]->f_15);
	iVar1 = func_1064((*Global_1835011)[69]->f_1);
	if (func_1065(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_580(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	return func_334((*Global_1835011)[iParam0]->f_1, 1);
}

int func_581(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1066(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1067(iVar6);
	}
	return iVar5;
}

int func_582(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1068(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_583(int iParam0, bool bParam1)
{
	func_1069(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_584(int iParam0)
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

void func_585(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_583(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_586(2, *uParam0);
		}
		else
		{
			func_587(2, *uParam0);
		}
	}
	func_1070(uParam0);
}

void func_586(int iParam0, int iParam1)
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

void func_587(int iParam0, int iParam1)
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

void func_588(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1071(iParam0, iParam1, bParam2);
}

int func_589(int iParam0)
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

int func_590(int iParam0)
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

void func_591(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1072();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1073(iParam0);
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
	if (func_617(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1074())
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
	Global_40.f_11095.f_35 = func_316(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1072();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1075(iVar1);
		func_1077(func_1076(), 0, 4000);
		func_1078(Global_40.f_11095.f_35);
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
		func_1079(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_97(func_96(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_590(14))
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
					sParam4 = func_1080(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_725(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_725(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_97(func_96(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_590(4))
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
					sParam4 = func_1080(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_725(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_725(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_96(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_369(10, 1);
	}
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_593(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_594(int iParam0)
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

bool func_595(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_596(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_22() == -1)
	{
		if (func_1081(iParam0) && func_1082(iParam0))
		{
			func_1083(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_597(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1084(iParam0, iParam1);
	Var0 = { func_706(iParam0, 0, 1) };
	iVar5 = func_1085(iParam0, &Var0, 0, 0);
	iVar6 = func_1086(iParam0, 0);
	if ((iVar5 > 1 && !func_131()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_615(iParam0, -2051813666))
		{
			func_332(583, 1);
		}
		else
		{
			func_332(582, 0);
		}
	}
	if (func_1087(iParam0, &Var0, *iParam1, 0, 0))
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

void func_598(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_676(iParam0, -949239683))
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

int func_599(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_614(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1088(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1089(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1022(bParam2), iParam0, 0);
	return iVar2;
}

bool func_600(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_601(iParam0) != 0;
}

int func_601(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1090())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1091(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_602(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_603(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1090())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_602(iVar0))
		{
			if (func_354(func_1091(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_604(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1092(48);
	func_374(0, -1);
}

bool func_605(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_334((*Global_1347702)[iParam0]->f_15, 1);
}

int func_606(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_607(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_608(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_334((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_609(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	return func_198((*Global_1347702)[iParam0]->f_15);
}

int func_610()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_354(func_1093(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_611(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_406() && (func_609(38) || func_605(38)))
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
			if (func_406() && (func_609(39) || func_605(39)))
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
			iVar9 = func_1094(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_406() && (func_609(41) || func_605(41)))
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
			if (func_406() && (func_609(49) || func_605(49)))
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
			iVar9 = func_1094(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1095(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1096(iParam0, iVar13, iVar14))
	{
	}
	if (func_1097(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1098(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1099(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1100(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1101(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_612(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_613(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_406() && (func_609(38) || func_605(38)))
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
			if (func_406() && (func_609(39) || func_605(39)))
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
			if (func_406() && (func_609(49) || func_605(49)))
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
		if (func_406() && (func_609(38) || func_605(38)))
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
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_732(_create_var_string(2, sVar0), _create_var_string(2, func_1103(func_607(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_406() && (func_609(39) || func_605(39)))
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
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_406() && (func_609(49) || func_605(49)))
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
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_614(int iParam0)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_615(int iParam0, int iParam1)
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

bool func_616(int iParam0, int iParam1)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_617(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return false;
	}
	return func_1105(iParam0);
}

void func_618(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	func_1106(iParam0);
	func_1107(iParam0);
}

int func_619(int iParam0)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_620(int iParam0, bool bParam1)
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
	if (func_595(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1108(iVar0) || func_124(iVar0))
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

int func_621(int iParam0, bool bParam1)
{
	if (!func_595(iParam0, 0))
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

void func_622(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_709(iParam0))
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

bool func_623(bool bParam0)
{
	if (func_22() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1022(bParam0));
}

bool func_624(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_706(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1109((386 + iVar28), 1);
			if (func_1110(iParam0, &Var0, iVar5, 0))
			{
				if (func_1111(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1112(iParam0, Var0, iVar5, 0) };
					func_1113(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_623(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_625(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1114(iParam0, iParam1);
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

bool func_625(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_627(iParam0))
	{
		return false;
	}
	if (!func_623(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_626(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_621(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_22() == -1)
		{
			func_622(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1115(iVar0);
			}
		}
		if (!func_1087(iParam0, &uVar1, 1, 0, 0))
		{
			func_1083(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1116(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_624(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_624(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_624(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1074())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1117(iVar0))
				{
					func_624(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_624(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1118(Global_35, 2, 0, 1);
				if ((((func_709(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_617(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_709(iVar7) && func_617(24))
				{
					if (!func_624(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_624(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_624(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_332(480, 1);
	}
	return true;
}

bool func_627(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_628(int iParam0, int iParam1, int iParam2)
{
	if (!func_627(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_709(iVar4))
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
	if (func_354(611073244, 1, 0) && iParam2 == -897553835)
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
		func_663(func_1119(iParam0), func_662(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_22() == -1)
		{
			if (func_334((*Global_1835011)[14]->f_1, 1))
			{
				func_332(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_623(0))
	{
		if (func_625(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_668(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_629(int iParam0)
{
	if ((iParam0 == -615217896 && !func_345()) || iParam0 != -615217896)
	{
		if (func_1120(Global_35, iParam0, &uVar0))
		{
			func_647(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_653();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_653();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_653();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_651();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_649();
			break;
	}
}

void func_630(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_649();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_650();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_651();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_652();
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
			func_653();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1121();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1122();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_631(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_632(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_633(int iParam0)
{
	bVar0 = func_615(iParam0, -2017733358);
	if (func_1123() < 3)
	{
		if (bVar0)
		{
			if (func_1125(func_1124(iParam0), iParam0))
			{
				func_663(79, func_662(func_1124(iParam0)), 1);
			}
			else
			{
				func_663(78, func_662(func_1124(iParam0)), 1);
			}
		}
		else
		{
			func_663(80, func_662(func_1126(iParam0)), 1);
		}
	}
}

bool func_634()
{
	if (((((func_1127(839908568, 400) || func_1127(-1134030454, 400)) || func_1127(623353496, 400)) || func_1127(-344413337, 400)) || func_1127(-1664948962, 400)) || func_1127(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_635(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_743(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_556(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_557(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_636(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_611(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_613(51, 0, 0, 0, 0, -1, 0);
			func_1128(8192);
			break;
		case 581047644:
			func_611(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_613(51, 0, 0, 0, 0, -1, 0);
			func_1128(524288);
			break;
		case -644199619:
			func_611(39, 0, 0, 0, 0, 0, 1, 0);
			func_613(39, 0, 0, 0, 0, -1, 0);
			func_1129(16);
			break;
		case 684296857:
			func_611(41, 0, 0, 0, 0, 0, 1, 0);
			func_613(41, 0, 0, 0, 0, -1, 0);
			func_1130(8);
			break;
		case 466137807:
			func_611(49, 0, 0, 0, 0, 0, 1, 0);
			func_613(49, 0, 0, 0, 0, -1, 0);
			func_1131(16);
			break;
		case -1087522507:
			func_611(43, 0, 0, -1791518714, func_1132(1), 0, -1, 0);
			func_1133(1);
			break;
		case -405829000:
			func_611(43, 0, 0, -2087881550, func_1132(2), 0, -1, 0);
			func_1133(2);
			break;
		case 378660860:
			func_611(43, 0, 0, 1908068621, func_1132(4), 0, -1, 0);
			func_1133(4);
			break;
		case 1566111097:
			func_611(43, 0, 0, 1611247019, func_1132(8), 0, -1, 0);
			func_1133(8);
			break;
		case 1276007140:
			func_611(43, 0, 0, 1319635688, func_1132(16), 0, -1, 0);
			func_1133(16);
			break;
	}
}

void func_637(int iParam0)
{
	if (func_1134() == 1)
	{
		if (func_605(39))
		{
			func_332(342, 0);
		}
		else
		{
			func_332(343, 0);
			func_1129(1);
		}
	}
	if (func_1134() >= 30)
	{
		func_332(344, 0);
	}
	func_611(39, 0, 0, 0, 0, 0, -1, 0);
	func_613(39, 0, 0, func_1134(), 30, 1, 0);
}

void func_638(int iParam0)
{
	if (func_1135() == 1)
	{
		if (func_605(49))
		{
			func_332(409, 0);
		}
		else
		{
			func_332(410, 0);
			func_1131(1);
		}
	}
	if (func_1135() >= 10)
	{
		func_332(411, 0);
	}
	func_611(49, 0, 0, 0, 0, 0, -1, 0);
	func_613(49, 0, 0, func_1135(), 10, 1, 0);
}

void func_639(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_332(437, 0);
			func_332(440, 0);
			func_1136(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_611(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_613(51, 0, 0, sVar0, func_1094(-949689219, 20), 1, 0);
			func_1128(1);
			func_473(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1136(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_611(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_613(51, 0, 0, sVar0, func_1094(-1248968496, 20), 1, 0);
			func_1128(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1136(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_611(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_613(51, 0, 0, sVar0, func_1094(1706369307, 20), 1, 0);
			func_1128(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1136(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_611(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_613(51, 0, 0, sVar0, func_1094(1520110311, 20), 1, 0);
			func_1128(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_332(438, 0);
			func_1136(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_611(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_613(51, 0, 0, sVar0, func_1094(-1992824800, 20), 1, 0);
			func_1128(32768);
			break;
		default:
			func_332(439, 0);
			break;
	}
}

void func_640()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_641(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_22() == -1)
	{
		if (!func_605(43))
		{
			if (iParam0 == 281887510)
			{
				func_332(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_332(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_332(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_332(400, 0);
			}
		}
		else if (func_615(iParam0, 412399755))
		{
			func_1137(-1791518714);
			if (func_1138() == 0)
			{
				func_374(0, 10);
				iVar1 = func_1139(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1140(iParam0) < func_1141(iParam0))
					{
						func_611(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_613(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_605(44))
		{
			if (iParam0 == -222563712)
			{
				func_332(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_332(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_332(401, 0);
			}
		}
		else if (func_615(iParam0, 709057512))
		{
			func_1137(-2087881550);
			if (func_1138() == 1)
			{
				func_374(0, 10);
				iVar1 = func_1139(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1140(iParam0) < func_1141(iParam0))
					{
						func_611(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_613(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_605(45))
		{
			if (iParam0 == 2116770557)
			{
				func_332(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_332(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_332(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_332(398, 0);
			}
		}
		else if (func_615(iParam0, -1478961327))
		{
			func_1137(1908068621);
			if (func_1138() == 2)
			{
				func_374(0, 10);
				iVar1 = func_1139(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1142(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1143(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1092(48);
					}
					if (func_1140(iParam0) < func_1141(iParam0))
					{
						func_611(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_613(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1140(iParam0) < func_1141(iParam0))
					{
						func_611(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_613(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_605(46))
		{
			if (iParam0 == 2085530337)
			{
				func_332(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_332(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_332(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_332(406, 0);
			}
		}
		else if (func_615(iParam0, -1238404098))
		{
			func_1137(1611247019);
			if (func_1138() == 3)
			{
				func_374(0, 10);
				iVar1 = func_1139(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1140(iParam0) < func_1141(iParam0))
					{
						func_611(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_613(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_605(47))
		{
			if (iParam0 == -1521783510)
			{
				func_332(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_332(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_332(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_332(403, 0);
			}
		}
		else if (func_615(iParam0, 1160548794))
		{
			func_1137(1319635688);
			if (func_1138() == 4)
			{
				func_374(0, 10);
				iVar1 = func_1139(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1140(iParam0) < func_1141(iParam0))
					{
						func_611(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_613(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_642(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1142(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1143(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1092(48);
		}
	}
}

void func_643(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_354(func_1144(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1145(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1146(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_644(int iParam0, int iParam1, int iParam2)
{
	if (func_22() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_635(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_635(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_635(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_635(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_635(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_635(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_635(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_635(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_635(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_635(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_635(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_635(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_635(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1147())
			{
				func_635(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_635(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_635(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_635(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_635(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_635(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_635(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_635(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_635(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_635(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_635(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_635(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_635(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_645(int iParam0)
{
	if (func_605(41))
	{
		func_332(363, 0);
	}
	else
	{
		func_332(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1148(-1865241121);
			func_1149(-642026005);
			func_1150(-642026005);
			func_374(0, 10);
			break;
		case -2108314374:
			func_1148(2117142684);
			func_1149(-940584364);
			func_1150(-940584364);
			func_374(0, 10);
			break;
		case -1193798153:
			func_1148(-1409326024);
			func_1149(1972645282);
			func_1150(1972645282);
			func_374(0, 10);
			break;
		case -787702678:
			func_1148(-641744968);
			func_1149(1667205433);
			func_1150(1667205433);
			func_374(0, 10);
			break;
		case -804542901:
			func_1148(-946988203);
			func_1149(1362715885);
			func_1150(1362715885);
			func_374(0, 10);
			break;
		case -1696275132:
			func_1148(-646136018);
			func_1149(1053540370);
			func_1150(1053540370);
			func_374(0, 10);
			break;
		case -161595323:
			func_1148(-955835837);
			func_1149(-1100103852);
			func_1150(-1100103852);
			func_374(0, 10);
			break;
		case -1114363619:
			func_1148(-179276075);
			func_1149(-1409869209);
			func_1150(-1409869209);
			func_374(0, 10);
			break;
		case -368407134:
			func_1148(-492711560);
			func_1149(-1760235357);
			func_1150(-1760235357);
			func_374(0, 10);
			break;
		case 1997759228:
			func_1148(1764383959);
			func_1149(-138366827);
			func_1150(-138366827);
			func_374(0, 10);
			break;
		case 1265573293:
			func_1148(317501533);
			func_1149(-1261163843);
			func_1150(-1261163843);
			func_374(0, 10);
			break;
		case -1030441283:
			func_1148(817753087);
			func_1149(-963523016);
			func_1150(-963523016);
			func_374(0, 10);
			break;
		case -1490884871:
			func_1148(576606016);
			func_1149(560825326);
			func_1150(560825326);
			func_374(0, 10);
			break;
		case -395458616:
			func_1148(814934957);
			func_1149(858269539);
			func_1150(858269539);
			break;
	}
}

void func_646(int iParam0, int iParam1)
{
	func_1151(iParam0, iParam1, &uVar0);
}

int func_647(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_706(iParam1, 1, 0) };
		iParam3 = func_707(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1152(iParam1, iParam2, func_694(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1153(1, (func_22() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_694(iParam3, 1)])
			{
				func_705(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1154(32768) && iParam1 != &Global_1946804->f_57[func_694(iParam3, 1)])
			{
				func_1155();
				func_705(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_705(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1156(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_705(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1157(0);
			func_1158(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_705(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_648(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1118(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1118(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1159("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1160(&Var3, iVar2, iVar0, iVar1))
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
						func_1161(iVar0);
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

void func_649()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_650()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_651()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_652()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_653()
{
	func_1162();
	func_1163();
	func_1164();
}

void func_654(int iParam0, int iParam1, bool bParam2)
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

void func_655(int iParam0, bool bParam1)
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
	func_1102(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_656(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_657(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_658(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_659(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_660(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_661(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_662(int iParam0)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_663(int iParam0, int iParam1, bool bParam2)
{
	func_701(iParam0, &iVar0, &iVar1);
	if (!func_702(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1165(iParam0, 1024))
	{
		return;
	}
	func_703(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_664(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_701(iParam0, &iVar0, &iVar1);
	if (!func_702(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1165(iParam0, 1024))
	{
		return;
	}
	func_703(iVar0, iVar1);
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

int func_665()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1090())
	{
		return func_666();
	}
	iVar4 = (func_1090() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1090())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1166(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1091(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_666()
{
	iVar0 = get_random_int_in_range(0, func_1090());
	return func_1091(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_667(int iParam0)
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

bool func_668(int iParam0, int iParam1, int iParam2)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_706(iParam0, 0, 1) };
	Var5 = { func_1112(iParam0, Var0, Var0.f_4, 0) };
	return func_1167(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_669(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	switch (func_619(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1168(81053684, 0) <= 0)
			{
				func_705(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_705(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1169(iParam0);
			if (func_1170(iVar0))
			{
				func_1171(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_705(30, iParam0, 0, 0, 0);
			}
			if (func_696() == -2125499975 || func_696() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_705(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_696() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_705(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1172(-525676072, 0))
			{
				if (func_1173(-525676072, &iVar1))
				{
					func_705(33, iVar1, 0, 0, 0);
				}
			}
			func_705(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1174(99217379))
		{
			func_647(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_618(24);
		if (func_648(&iVar2, 0))
		{
			func_624(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_670(int iParam0)
{
	if (func_615(iParam0, 943695443))
	{
		func_1175(0, iParam0);
	}
	else if (func_615(iParam0, -2096528786))
	{
		func_1175(1, iParam0);
	}
	else if (func_615(iParam0, -1094167013))
	{
		func_1175(2, iParam0);
	}
	else if (func_615(iParam0, 1936654645))
	{
		func_1175(3, iParam0);
	}
	else if (func_615(iParam0, 1306489306))
	{
		func_1175(4, iParam0);
	}
	else if (func_615(iParam0, 435762317))
	{
		func_1175(5, iParam0);
	}
	else if (func_615(iParam0, 1259363210))
	{
		func_1175(6, iParam0);
	}
	else if (func_615(iParam0, 881398259))
	{
		func_1175(7, iParam0);
	}
	else if (func_615(iParam0, -541549214))
	{
		func_1175(8, iParam0);
	}
	else if (func_615(iParam0, 130796156))
	{
		func_1175(-1, iParam0);
	}
}

int func_671(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1176(&Var4, 1356624740);
	return func_1177(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_672(int iParam0)
{
	if (!func_595(iParam0, 0))
	{
		return Var0;
	}
	if (func_615(iParam0, -305066475))
	{
		if (func_22() == -1)
		{
			if (func_615(iParam0, -537818634))
			{
				return func_96(189951448);
			}
			else
			{
				return func_96(1176172851);
			}
		}
	}
	else if (func_615(iParam0, -537818634))
	{
		return func_96(-963660207);
	}
	if (func_615(iParam0, 2084895747))
	{
		return func_96(1694039471);
	}
	return Var2;
}

void func_673(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_22() == -1)
			{
				if (func_334((*Global_1835011)[4]->f_1, 1))
				{
					func_332(109, 1);
				}
			}
			break;
	}
}

void func_674(int iParam0, char* sParam1)
{
	sVar0 = func_1179(func_1178(0));
	func_725(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1180(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_675(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_595(iParam0, 0))
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
	if (!func_1181())
	{
		func_1182(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1183(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1183(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_616(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_614(iParam0);
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
	else if (!func_1184(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1185(_create_var_string(10, &cVar2, _create_var_string(0, func_662(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_615(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_662(iParam0));
	}
	func_725(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_676(int iParam0, int iParam1)
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

struct<10> func_677(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_678(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_679(int iParam0, int iParam1)
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

bool func_680(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1186(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1186(iParam0, Var2, 1))
				{
					if (func_1187(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1187(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_332(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_204(0, 0, 1))
		{
			func_374(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_681(int iParam0)
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

void func_682(int iParam0)
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
		func_332(iVar0, 0);
	}
}

void func_683()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1188(0);
			_unlock_set_unlocked(-121456797, false);
			func_1189();
		}
		return;
	}
	if (!func_334((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1190();
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
	func_1188(1);
}

void func_684()
{
	if (!func_334((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_325(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_685()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1191(0);
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
	if (!func_334((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1191(1);
}

void func_686()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1192(15000, 0, 0, 0, 1);
			func_1191(0);
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
	if (!func_334((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_290(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1191(1);
}

void func_687()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_354(1191437462, 1, 0) && !func_198((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_325(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1193(1))
			{
				func_659(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_354(1119149048, 1, 0) && !func_198((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_325(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1193(2))
			{
				func_659(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1193(4))
		{
			func_659(4);
		}
		if (func_1193(0))
		{
			func_1194(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_354(1191437462, 1, 0))
			{
				func_690(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_354(1119149048, 1, 0))
			{
				func_690(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1193(1))
		{
			func_1194(1);
		}
		if (func_1193(2))
		{
			func_1194(2);
		}
		if (func_1193(4))
		{
			func_1194(4);
		}
		if (!func_1193(0))
		{
			func_659(0);
		}
	}
}

void func_688()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_334((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1195() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_622(127400949);
		if (func_624(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1195() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1196(-2055673461, Var1, 1423542233);
		func_1196(-202131179, Var1, -1264898804);
		func_1196(2013836545, Var1, 1592019450);
		func_1196(1497476650, Var1, 1117400455);
		func_1196(1063571467, Var1, 1150213537);
		func_1196(2107224237, Var1, 1598825281);
		func_1196(1747981656, Var1, -712527121);
		func_1196(-1371140647, Var1, 454332195);
		func_1196(-19142973, Var1, 256105670);
		func_1196(-2074737817, Var1, -1328061889);
		func_1196(-1114256243, Var1, -782241404);
		func_1196(-1653277288, Var1, 1669853467);
		func_1196(1869398132, Var1, -1559225678);
		func_1196(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_31())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_709(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_617(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_617(24) && func_709(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_709(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_617(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_689()
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

int func_690(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1088(iParam0, 1);
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
			func_675(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_354(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_672(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_599(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_599(iParam0, 0, 0) - iParam1) < 0)
		{
			func_690(iParam0, func_599(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_614(iParam0) == -427144552)
	{
		if (!func_1197(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1198(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_623(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_675(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1199(iParam0, iParam1);
	return 1;
}

bool func_691(int iParam0)
{
	switch (func_619(iParam0))
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

void func_692(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_619(iParam0))
	{
		case -2061583405:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1201();
	}
	if (bParam1)
	{
		func_1202(0, 0);
	}
}

int func_693(int iParam0)
{
	Var0 = { func_706(iParam0, 1, 0) };
	return func_707(Var0.f_4);
}

int func_694(int iParam0, int iParam1)
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

void func_695(int iParam0)
{
	if (func_22() == -1)
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
		iVar0 = func_694(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1203(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_696()
{
	return Global_1946804->f_1;
}

bool func_697(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1204(iParam6);
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
		func_1206(uParam0, func_1205(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_694(iVar3, 1);
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
							if (func_1207(iVar3) && func_1208(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1209(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_698(int iParam0, int iParam1)
{
	if (func_22() == -1)
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

int func_699(int iParam0, int iParam1)
{
	vVar0 = { func_698(iParam0, iParam1) };
	return vVar0.x;
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_701(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_702(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1210(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1211(iParam0))
	{
		return false;
	}
	if (func_1212(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1165(iParam0, 1)) || func_84(32768))
	{
		if (!func_1165(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1213())
	{
		return false;
	}
	return true;
}

void func_703(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_704(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_705(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1214(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1215(Var0);
}

struct<5> func_706(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1216(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_614(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1112(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1217(bParam1) };
			if (bParam2 && func_1218(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1110(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1110(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1111(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1219(bParam1) };
			switch (func_619(iParam0))
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
			if (func_1220(iParam0, -1823706425))
			{
				Var0 = { func_1112(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1220(iParam0, -1483207246))
			{
				Var0 = { func_1112(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1221(Var0, &Var27, bParam1, 0))
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

int func_707(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1222(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_708(int iParam0)
{
	func_1203(Global_1946804->f_1497.f_1[func_694(iParam0, 1)], 2, 6);
	func_1203(Global_1946804->f_1378.f_1[func_694(iParam0, 1)], 2, 6);
}

bool func_709(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_710(int iParam0)
{
	return iParam0 != 0;
}

int func_711(int iParam0)
{
	iVar0 = -1;
	if (!func_710(iParam0))
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

bool func_712(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_713(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1223(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_714(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_715(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_716(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_717(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_718(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_719(int iParam0, int iParam1)
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

void func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1224(iParam0, iParam6);
	func_1225(iParam0, iParam5);
	func_1226(iParam0, iParam4);
	func_1227(iParam0, iParam3);
	func_1228(iParam0, iParam2);
	func_1229(iParam0, iParam1);
}

bool func_721(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_718(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_717(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_716(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_713(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_714(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_715(iParam0);
	if (iVar5 < 1 || iVar5 > func_719(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_722(int iParam0, bool bParam1)
{
	return func_1065(func_292(), iParam0, bParam1);
}

void func_723(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_724(int iParam0, int iParam1)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1088(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1159("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1160(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_709(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1161(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1161(iVar1);
	}
	return false;
}

var func_725(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1230(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_726()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1231(iVar1);
		if (!_unlock_is_visible(func_1232(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_727()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1231(iVar0);
		if (!_unlock_is_visible(func_1232(iVar1)))
		{
			_unlock_set_visible(func_1232(iVar1), true);
		}
		iVar0++;
	}
}

bool func_728(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_980(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_729(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_533(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_730()
{
	return (func_205(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_731(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_22() != -1)
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
	if (!func_595(iVar0, 0))
	{
		return 0;
	}
	if (!func_1233(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1234(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_615(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_706(iVar0, 0, 1) };
	iVar10 = func_1235(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1236(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1237(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_325(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1192(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_732(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_733(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_725(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_734(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_735(bool bParam0, bool bParam1)
{
	if (func_22() != -1)
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

void func_736(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1055())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1055())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_200(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_279(iParam0);
	if (func_202(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1238(1, iVar1);
					func_1238(8, iVar1);
					func_1238(7, iVar1);
					break;
				case 12:
					func_1238(6, iVar1);
					break;
				case 53:
					func_1238(3, iVar1);
					func_1238(7, iVar1);
					func_1238(4, iVar1);
					break;
				case 20:
					func_1238(8, iVar1);
					break;
				case 19:
					func_1238(1, iVar1);
					func_1238(2, iVar1);
					break;
				case 24:
					func_1238(3, iVar1);
					func_1238(9, iVar1);
					func_1238(20, iVar1);
					break;
				case 28:
					func_1238(1, iVar1);
					break;
				case 34:
					func_1238(23, iVar1);
					func_1238(2, iVar1);
					func_1238(18, iVar1);
					break;
				case 29:
					func_1238(0, iVar1);
					func_1238(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1238(0, iVar1);
					func_1238(3, iVar1);
					func_1238(2, iVar1);
					func_1238(11, iVar1);
					func_1238(6, iVar1);
					func_1238(25, iVar1);
					func_1238(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1238(5, iVar1);
					break;
				case 63:
					func_1238(1, iVar1);
					func_1238(3, iVar1);
					break;
				case 37:
					func_1238(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_370(0, 10, 11, 2116153146))
			{
				func_1238(7, iVar1);
				func_1238(4, iVar1);
			}
			else if (iParam0 == func_370(0, 7, 11, -379687487))
			{
				func_1238(8, iVar1);
				func_1238(15, iVar1);
			}
			else if (iParam0 == func_370(0, 8, 11, -1386089015))
			{
				func_1238(3, iVar1);
			}
			else if (iParam0 == func_370(0, 11, 11, -1952009645))
			{
				func_1238(6, iVar1);
				func_1238(3, iVar1);
			}
			else if (iParam0 == func_370(0, 12, 11, 2065895756))
			{
				func_1238(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1239()));
	if (!func_1240(629))
	{
		func_332(629, 0);
	}
}

int func_737(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_738(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_739(int iParam0, int iParam1, int iParam2)
{
	if (!func_738(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*iParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*iParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*iParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*iParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*iParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*iParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*iParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*iParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*iParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*iParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*iParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*iParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*iParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*iParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*iParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*iParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*iParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_740()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_741(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_742(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1241(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_740())
	{
		return -1;
	}
	iVar0 = func_741(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_504(iVar1, 0);
	func_574(iVar1, 0);
	func_1242(iVar1, 0);
	func_1243(iVar1, 0);
	func_1244(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1245(iVar1, iParam4);
	}
	return iVar1;
}

int func_743(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_354(1811977508, 1, 0))
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
			if (func_595(iVar25, 0) && func_615(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_744(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_745(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0;
	}
	cVar0 = func_372(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_746(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_747(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1246(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1247() == 0 && !func_1248(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1249(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1250();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1251(Global_1310720->f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	_datafile_get_data_node_index(&uVar25, &Var15);
	while (_datafile_get_num_children(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		_datafile_get_data_node_index(&uVar26, &Var20);
		while (_datafile_get_num_children(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1252(iVar0, iVar1) };
			bVar11 = func_1253(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_396(vVar7)) && func_1254(iVar0, bParam8, iParam12)) && !func_1255(iVar0)) || bVar11)
			{
				if (func_1256(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = vdist(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					_0x748c5f51a18cb8f0(1);
					return vVar4;
				}
			}
		}
	}
}

int func_748(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1257(vParam0);
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

void func_749()
{
	disable_script_brain_set(1);
}

void func_750()
{
}

void func_751()
{
	disable_script_brain_set(2);
}

bool func_752(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_753(char* sParam0)
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

void func_754(int iParam0)
{
	if (func_752(iParam0, 1))
	{
		func_1258(1);
	}
}

int func_755()
{
	return -1904156936;
}

bool func_756(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	switch (func_202(iParam0))
	{
		case 1:
			iVar0 = func_279(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_279(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_757()
{
	return 166188472;
}

int func_758()
{
	return 2015838421;
}

int func_759()
{
	return 207908017;
}

var func_760(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_761(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_762(var uParam0)
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

int func_763(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_764(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return "";
	}
	if (is_entity_a_ped(bParam0))
	{
		return func_1259(get_ped_index_from_entity_index(bParam0));
	}
	else if (is_entity_an_object(bParam0))
	{
		return func_1260(get_object_index_from_entity_index(bParam0));
	}
	else if (is_entity_a_vehicle(bParam0))
	{
		return func_1261(get_vehicle_index_from_entity_index(bParam0));
	}
	return "";
}

int func_765(var uParam0, char* sParam1)
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

int func_766(var uParam0)
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

void func_767(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_768(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_769()
{
	return Global_1572864->f_8;
}

void func_770(char[4] cParam0, int iParam1)
{
	func_1262(cParam0, iParam1);
	func_1263(cParam0, iParam1, 26);
}

int func_771(char[4] cParam0)
{
	if (!func_122(cParam0, 16384))
	{
		func_1264(3);
	}
	return 1;
}

int func_772(char[4] cParam0)
{
	if (func_107() || func_130(cParam0, 2))
	{
		if (!_does_anim_scene_exist(&(uLocal_1682[0])))
		{
			return 0;
		}
		if (!_is_anim_scene_started(&(uLocal_1682[0]), false) && !_is_anim_scene_finished(&(uLocal_1682[0]), false))
		{
			return 0;
		}
		func_468(Local_150.f_68, 0);
	}
	func_1265(iVar1984, 1, 0);
	func_1265(iVar1985, 1, 0);
	if (!_does_volume_exist(&(uLocal_1655[0])))
	{
		uLocal_1655[0] = _0x0eb78c2b156635b1(665633627, get_entity_coords(iVar1639, true, false), 0f, 0f, 0f, 1f, 1f, 1.5f);
	}
	if (!_does_volume_exist(&(uLocal_1655[1])))
	{
		uLocal_1655[1] = _0x0eb78c2b156635b1(665633627, get_entity_coords(iVar1638, true, false), 0f, 0f, 0f, 1f, 1f, 1.5f);
	}
	func_1266(player_ped_id(), 1);
	if (func_84(32768))
	{
		if (!func_28(&uLocal_2187))
		{
			func_227(&uLocal_2187);
		}
		if (is_screen_faded_out())
		{
			if ((((func_903(Global_35, func_1(6, 0), 1) < 5f && iLocal_249 >= 2) && _does_anim_scene_exist(func_1267(cParam0))) && _is_anim_scene_started(func_1267(cParam0), false)) || func_228(&uLocal_2187) > 15000)
			{
				if (func_228(&uLocal_2187) > 15000)
				{
				}
				if (!func_28(&uLocal_2184))
				{
					func_227(&uLocal_2184);
				}
				if (func_228(&uLocal_2184) > 2000)
				{
					do_screen_fade_in(3000);
				}
				else
				{
					return 0;
				}
			}
			else
			{
				if (func_903(Global_35, func_1(6, 0), 1) > 5f)
				{
					func_395(Global_35, func_230(6, 0), 2, 1073741824);
					_0x9587913b9e772d29(Global_35, 0);
				}
				stop_gameplay_cam_shaking(true);
				return 0;
			}
		}
	}
	return 1;
}

int func_773(char[4] cParam0)
{
	func_472(1);
	func_1268(cParam0, "MultiStart");
	func_101(cParam0, 33554432);
	set_ped_config_flag(Global_35, 301, true);
	iLocal_257 = 0;
	return 1;
}

int func_774(char[4] cParam0)
{
	func_1269(cParam0);
	func_1270(cParam0);
	switch (func_1271(cParam0))
	{
		case 0:
			func_1272(cParam0, 0);
			if (iLocal_249 == 13)
			{
				func_136(cParam0, 1);
			}
			break;
		case 1:
			return 1;
	}
	return 0;
}

int func_775(var uParam0)
{
	set_player_control(get_player_index(), true, 0, false);
	set_ped_config_flag(Global_35, 301, false);
	return 1;
}

void func_776(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_142(cParam0, iParam1, iParam9);
	func_1273(cParam0, iParam1);
	func_1263(cParam0, iParam1, iParam2);
	func_1274(cParam0, &iParam3, iParam1, 0);
	func_1274(cParam0, &iParam4, iParam1, 2);
	func_1274(cParam0, &iParam5, iParam1, 4);
	func_1274(cParam0, &iParam6, iParam1, 5);
	func_1274(cParam0, &iParam7, iParam1, 7);
	func_957(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_399(cParam0, iParam1, cVar0);
	func_1275(cParam0, iParam1, iParam10);
}

int func_777(var uParam0)
{
	return 1;
}

int func_778(char[4] cParam0)
{
	func_935(cParam0);
	if (!func_10(cParam0, 8))
	{
	}
	func_189(1);
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
	iLocal_1523 = 0;
	return 1;
}

int func_779(char[4] cParam0)
{
	func_1276(cParam0, 0);
	func_133(func_1(4, 6), 20f, 1, 0, 0, 0, 0);
	func_462(cParam0);
	func_453(Global_35);
	func_1277(0);
	func_933(cParam0);
	func_1265(iVar1984, 1, 0);
	func_1265(iVar1985, 1, 0);
	func_472(1);
	func_189(0);
	func_1278(1);
	func_460(&(Local_14.f_83), 0);
	func_922(0, 0);
	do_screen_fade_in(2000);
	return 1;
}

int func_780(char[4] cParam0)
{
	func_1279(cParam0);
	func_1280(cParam0);
	switch (func_1271(cParam0))
	{
		case 0:
			if (func_1281(Global_35, bVar1646, 1))
			{
				func_1282(bVar1638, 1.25f, 0, 1045220557, 1, 1077936128, 10f, 15f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			}
			else if (is_waypoint_playback_going_on_for_ped(bVar1638, 0))
			{
				waypoint_playback_override_speed(bVar1638, 0f, 0, 0.2f, 0);
			}
			if (!func_168(iVar1516, 8))
			{
				if (func_1281(Global_35, bVar1646, 1))
				{
					func_137(cParam0, 2);
					func_1283(cParam0, bVar1638, 1105014447, 422991367, 1, 1);
					func_170(&uLocal_1519, 8);
				}
			}
			if (!func_168(iVar1515, 1))
			{
				if (func_1284(bVar1638, Local_150.f_2, 1, 0) && func_1284(Global_35, Local_150.f_2, 1, 0))
				{
					if (!func_1285(bVar1638) && !func_1281(Global_35, bVar1646, 0))
					{
						if (does_blip_exist(iVar1616))
						{
							func_475(&iLocal_1619);
						}
						func_29(&uLocal_2127, 0);
						func_136(cParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (func_1286(&uLocal_2127) > 1f && !func_1287())
			{
				func_188();
				if (does_entity_exist(bVar1638))
				{
					_0x0c6b89876262a99d(player_id(), bVar1638);
				}
				if (func_1288())
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_781(var uParam0)
{
	func_570(&uLocal_2136);
	func_188();
	if (does_entity_exist(bVar1638))
	{
		_0x0c6b89876262a99d(player_id(), bVar1638);
	}
	func_1289(0, 1);
	return 1;
}

int func_782(var uParam0)
{
	return 1;
}

int func_783(char[4] cParam0)
{
	func_935(cParam0);
	if (!func_10(cParam0, 8))
	{
		func_1290(cParam0);
	}
	if (!is_entity_dead(Global_35))
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	}
	return 1;
}

int func_784(char[4] cParam0)
{
	allow_sonar_blips(true);
	func_1291(3);
	func_192(cParam0, bVar1638, 1);
	func_936(1);
	func_474(1);
	func_1292(&uLocal_1527, 2);
	func_1292(&uLocal_1527, 4);
	func_1293(0);
	func_1294(0);
	iLocal_253 = 0;
	iLocal_257 = 0;
	iLocal_252 = 0;
	iLocal_1524 = 0;
	_0xb8de69d9473b7593(Global_35, 2);
	set_ped_config_flag(bVar1638, 174, false);
	func_1295(cParam0, "PL_Start_Left");
	func_1295(cParam0, "PL_Start_Right");
	func_1295(cParam0, "Multistart");
	func_101(cParam0, 33554432);
	func_387(cParam0, 65536);
	func_1296(cParam0);
	func_1298(cParam0, func_1297("PL_Start_Left"));
	func_227(&uLocal_2124);
	create_model_hide(2698.51f, -1061.01f, 47.24f, 2f, -2046717337, true);
	func_1288();
	return 1;
}

int func_785(char[4] cParam0)
{
	func_1299(cParam0);
	func_1300(cParam0);
	switch (func_1271(cParam0))
	{
		case 0:
			if (iLocal_251 == 0 || iLocal_251 == 6)
			{
				if (func_1284(player_ped_id(), Local_150.f_1, 1, 0))
				{
					func_227(&uLocal_2028);
					func_137(cParam0, 6);
					func_1301();
					func_136(cParam0, 1);
				}
			}
			break;
		case 1:
		case 2:
			func_1302(cParam0);
			if (func_1271(cParam0) == 1)
			{
				if (func_168(iVar1521, 262144) || is_entity_in_volume(Global_35, Local_150.f_65, true, 0))
				{
					func_136(cParam0, 2);
				}
			}
			if (is_entity_in_volume(Global_35, Local_150.f_7, true, 0) || is_entity_in_volume(Global_35, Local_150.f_8, true, 0))
			{
				if (!func_28(&uLocal_2043))
				{
					func_29(&uLocal_2043, 0);
				}
			}
			if (func_1286(&uLocal_2043) > 15f)
			{
				if (is_entity_in_volume(Global_35, Local_150.f_8, true, 0))
				{
					func_170(&uLocal_1518, 16777216);
				}
				else
				{
					func_170(&uLocal_1518, 8388608);
				}
				func_136(cParam0, 3);
			}
			if (func_903(Global_35, _0xf70f00013a62f866(Local_150.f_7), 1) < 10f || func_903(Global_35, _0xf70f00013a62f866(Local_150.f_8), 1) < 10f)
			{
				func_1303();
			}
			if (!func_168(iVar1518, 128))
			{
				if (func_903(Global_35, _0xf70f00013a62f866(Local_150.f_7), 1) < 7.5f || func_903(Global_35, _0xf70f00013a62f866(Local_150.f_8), 1) < 7.5f)
				{
					func_137(cParam0, 5);
					func_170(&uLocal_1521, 128);
				}
			}
			if (func_1304(cParam0, 0))
			{
				func_475(&iLocal_1619);
				func_227(&uLocal_2043);
				if (is_entity_in_volume(Global_35, Local_150.f_7, true, 0))
				{
					func_170(&uLocal_1518, 8388608);
				}
				else if (is_entity_in_volume(Global_35, Local_150.f_8, true, 0))
				{
					func_170(&uLocal_1518, 16777216);
				}
				if (!func_1305(Global_35))
				{
					_give_weapon_to_ped_2(Global_35, 379542007, 50, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					set_current_ped_weapon(Global_35, func_1306(Global_35), false, 0, false, false);
				}
				_hide_ped_weapons(Global_35, 1, false);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				func_136(cParam0, 3);
			}
			break;
		case 3:
			func_1302(cParam0);
			if (is_entity_in_volume(Global_35, Local_150.f_7, true, 0))
			{
				func_170(&uLocal_1518, 8388608);
			}
			else if (is_entity_in_volume(Global_35, Local_150.f_8, true, 0))
			{
				func_170(&uLocal_1518, 16777216);
			}
			if (func_1304(cParam0, 0) || func_1286(&uLocal_2043) > 10f)
			{
				func_1307(68);
				func_400(cParam0, 0);
				func_136(cParam0, 4);
			}
			break;
		case 4:
			if (is_entity_in_volume(Global_35, Local_150.f_7, true, 0))
			{
				func_170(&uLocal_1518, 8388608);
				func_1298(cParam0, func_1297("PL_Start_Left"));
			}
			else if (is_entity_in_volume(Global_35, Local_150.f_8, true, 0))
			{
				func_170(&uLocal_1518, 16777216);
				func_1298(cParam0, func_1297("PL_Start_Right"));
			}
			func_824(cParam0);
			if (func_1308())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_786(var uParam0)
{
	remove_model_hide(2698.51f, -1061.01f, 47.24f, 2f, -2046717337, 1);
	if (is_audio_scene_active("MOB2_Investigate_Noise_Scene"))
	{
		stop_audio_scene("MOB2_Investigate_Noise_Scene");
	}
	func_183();
	func_184();
	_0x949b2f9ed2917f5d(Global_35, 2);
	display_radar(true);
	display_hud(true);
	func_461();
	func_191();
	func_475(&iLocal_1619);
	func_460(&(Local_14.f_34), 0);
	func_478(&(Local_14.f_104));
	remove_cover_point(&(iLocal_1575[0]));
	remove_cover_point(&(iLocal_1575[1]));
	if (!is_control_enabled(0, -473983589))
	{
		enable_control_action(0, -473983589, true);
	}
	func_450();
	return 1;
}

int func_787(var uParam0)
{
	return 1;
}

int func_788(char[4] cParam0)
{
	func_935(cParam0);
	if (func_122(cParam0, 4))
	{
		func_170(&uLocal_1526, 1);
	}
	if (!func_10(cParam0, 8))
	{
		if (func_130(cParam0, 2) || func_130(cParam0, 1))
		{
			func_1298(cParam0, func_1297("PL_Start_Left"));
		}
		if (!func_1272(cParam0, 1))
		{
			return 0;
		}
		func_474(1);
		func_170(&uLocal_1518, 8388608);
		func_1290(cParam0);
	}
	func_1309(cParam0, &iLocal_1649, func_230(0, 0), 0, "m_pedPlayerHorse", 0);
	func_1309(cParam0, &bLocal_1651, func_230(0, 1), 0, "m_pedJohnHorse", 0);
	func_142(cParam0, func_35(cParam0), 4096);
	func_1310(cParam0, bVar1638, 8);
	func_1310(cParam0, Global_35, 8);
	func_387(cParam0, 65536);
	iLocal_1517 = 0;
	while (iVar1514 < 5)
	{
		func_1311(iVar1514, 0);
		iLocal_1517 = iVar1514 + 1;
	}
	display_radar(true);
	display_hud(true);
	allow_sonar_blips(true);
	func_1312(0);
	if (!_does_anim_scene_exist(cParam0->f_7375.f_804) || !_is_anim_scene_started(cParam0->f_7375.f_804, false))
	{
		if (has_ped_got_weapon(Global_35, 379542007, 0, false))
		{
			set_current_ped_weapon(Global_35, 379542007, true, 0, true, false);
		}
		else
		{
			iVar0 = func_840(0, 0);
			set_current_ped_weapon(Global_35, iVar0, true, 0, true, false);
		}
	}
	func_1313();
	return 1;
}

int func_789(char[4] cParam0)
{
	func_1314(0, 0);
	func_1315(0);
	func_227(&uLocal_2115);
	func_1316(cParam0, bVar1638, 8);
	func_1316(cParam0, Global_35, 8);
	func_979(bVar1638, 1718936990, 1);
	if (func_10(cParam0, 524288))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		func_170(&uLocal_1526, 262144);
	}
	_0x1a7a802b2301edc0(Global_35);
	func_1317();
	set_ped_using_action_mode(Global_35, true, -1, 0);
	return 1;
}

int func_790(char[4] cParam0)
{
	func_1318(cParam0);
	func_1319(cParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_479(&(Local_14.f_7[iVar0]), 0))
		{
			if (&iLocal_258[iVar0] >= 15 && &iLocal_258[iVar0] <= 16)
			{
				if (!is_entity_in_volume(&(Local_14.f_7[iVar0]), Local_150.f_1, true, 0) && func_912(Global_35, &(Local_14.f_7[iVar0]), 1, 1) > 50f)
				{
					if (!func_168(iVar1515, 8))
					{
						func_1320(cParam0, "MOB2_FAIL_GTAWY", "", 1, 0);
						func_170(&uLocal_1518, 8);
					}
				}
			}
		}
		iVar0++;
	}
	switch (func_1271(cParam0))
	{
		case 0:
			if (func_1286(&uLocal_2115) < 0.2f)
			{
			}
			else if (!func_168(iVar1523, 262144))
			{
				func_170(&uLocal_1526, 262144);
			}
			if (!func_168(iVar1523, 16384) && !is_entity_in_volume(Global_35, Local_150.f_18, true, 0))
			{
				func_170(&uLocal_1526, 16);
				func_170(&uLocal_1526, 256);
				func_170(&uLocal_1526, 16384);
			}
			if ((func_168(iVar1523, 4096) && iVar261 == 17) && !func_1287())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_791(char[4] cParam0)
{
	func_474(0);
	func_476(&iLocal_1622);
	func_1321(cParam0, bVar1638, 0, 1);
	set_ped_combat_attributes(bVar1638, 27, false);
	func_1322(1);
	if (is_ped_using_action_mode(Global_35))
	{
		set_ped_using_action_mode(Global_35, false, -1, 0);
	}
	func_165();
	func_979(bVar1638, -1560168768, 0);
	return 1;
}

int func_792(var uParam0)
{
	return 1;
}

int func_793(char[4] cParam0)
{
	func_935(cParam0);
	func_1323();
	return 1;
}

int func_794(char[4] cParam0)
{
	if (!func_10(cParam0, 8))
	{
		func_1290(cParam0);
		func_1324(bVar1638, 379542007, 1);
		_add_ammo_to_ped(bVar1638, 379542007, 6, 444010018);
	}
	func_142(cParam0, func_35(cParam0), 4096);
	func_1314(0, 0);
	func_1315(0);
	display_radar(true);
	display_hud(true);
	allow_sonar_blips(true);
	func_115(1);
	func_1325(0);
	if (!is_control_enabled(0, -473983589))
	{
		enable_control_action(0, -473983589, true);
	}
	func_137(cParam0, 0);
	func_136(cParam0, 0);
	func_1309(cParam0, &iLocal_1649, func_230(0, 0), 0, "m_pedPlayerHorse", 0);
	func_1309(cParam0, &bLocal_1651, func_230(0, 1), 0, "m_pedJohnHorse", 0);
	func_1326(func_1(0, 0), 10f, 0, 0);
	func_1327();
	func_1328();
	func_1329(bVar1638, Global_35, 3f, 1065353216);
	return 1;
}

int func_795(char[4] cParam0)
{
	func_1330(cParam0);
	func_1331(cParam0);
	switch (func_1271(cParam0))
	{
		case 0:
			func_1329(bVar1638, Global_35, 3f, 1065353216);
			if (func_912(Global_35, bVar1638, 1, 1) < 10f)
			{
				clear_ped_tasks(bVar1638, 1, 0);
				func_137(cParam0, 4);
				func_136(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1284(Global_35, Local_150.f_1, 1, 0))
			{
				func_227(&uLocal_2127);
				func_137(cParam0, 9);
				func_136(cParam0, 6);
			}
			if (func_903(Global_35, func_1(2, 15), 1) < 5f || iLocal_143 >= 5)
			{
				display_radar(true);
				display_hud(true);
				open_sequence_task(&uLocal_1613);
				task_follow_nav_mesh_to_coord(0, func_1(2, 15), 1f, -1, 0.25f, 0, 40000f);
				task_wander_in_area(0, func_1(1, 10), 3f, 2f, 5f, 0);
				close_sequence_task(iVar1610);
				task_perform_sequence(bVar1638, iVar1610);
				clear_sequence_task(&uLocal_1613);
				func_136(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1284(Global_35, Local_150.f_1, 1, 0))
			{
				func_227(&uLocal_2127);
				func_137(cParam0, 9);
				func_136(cParam0, 6);
			}
			if (iLocal_143 >= 7)
			{
				func_1322(1);
				func_471(0);
				func_137(cParam0, 7);
				func_136(cParam0, 3);
			}
			break;
		case 3:
			if (func_1286(&uLocal_2040) > 1f)
			{
				if (func_1332() && func_1333(-1, 1))
				{
					return 1;
				}
			}
			break;
		case 6:
			if (!func_1287() && func_1334(&uLocal_2127) > 1000)
			{
				clear_ped_tasks(bVar1638, 1, 0);
				func_170(&uLocal_1520, 134217728);
				func_1335(22);
				return func_1336(cParam0, 6, 1, 0, 0);
			}
			break;
	}
	return 0;
}

int func_796(var uParam0)
{
	func_475(&iLocal_1620);
	func_475(&iLocal_1621);
	set_entity_invincible(player_ped_id(), false);
	display_radar(true);
	display_hud(true);
	func_1325(1);
	func_1322(1);
	return 1;
}

int func_797(var uParam0)
{
	return 1;
}

int func_798(char[4] cParam0)
{
	func_935(cParam0);
	if (!func_10(cParam0, 8))
	{
		func_1290(cParam0);
		func_922(0, 0);
		func_1337();
		func_1314(0, 1);
	}
	func_42(0);
	return 1;
}

int func_799(var uParam0)
{
	iLocal_1525 = 0;
	iLocal_253 = 0;
	func_1335(0);
	func_1338(1);
	func_1339(0);
	func_1340(0);
	func_227(&uLocal_2142);
	vLocal_2235 = { func_1341(player_id()) };
	allow_sonar_blips(true);
	func_115(1);
	set_create_random_cops(false);
	func_1342(func_1(8, 18), 200f, 0);
	func_1289(0, 1);
	set_ped_config_flag(player_ped_id(), 299, true);
	return 1;
}

int func_800(char[4] cParam0)
{
	func_1343(cParam0);
	func_1344(cParam0);
	switch (func_1271(cParam0))
	{
		case 0:
			if (!func_168(iVar1515, 1048576))
			{
				if (func_1286(&uLocal_2016) > 15f)
				{
					if (func_1345(Global_35, 1109393408))
					{
						func_170(&uLocal_1518, 1048576);
					}
				}
			}
			if (!func_168(iVar1515, 2097152))
			{
				if (func_1286(&uLocal_2019) > 15f)
				{
					if (func_1345(Global_35, 1109393408))
					{
						func_170(&uLocal_1518, 2097152);
					}
				}
			}
			if (!func_168(iVar1515, 4194304))
			{
				if (func_1286(&uLocal_2022) > 15f)
				{
					if (func_1345(Global_35, 1109393408))
					{
						func_170(&uLocal_1518, 4194304);
					}
				}
			}
			if (!func_168(iVar1515, 2048))
			{
				_play_sound_from_position(sVar820, func_1(1, 9), sVar821, false, 0, true, 0);
				func_170(&uLocal_1518, 2048);
			}
			if (!func_28(&uLocal_2139))
			{
				func_227(&uLocal_2139);
			}
			else if (func_1286(&uLocal_2139) > IntToFloat(get_random_int_in_range(15, 20)))
			{
				func_1292(&uLocal_1518, 2048);
				func_227(&uLocal_2139);
			}
			if (func_168(iVar1522, 4))
			{
				func_29(&uLocal_2145, 0);
				func_137(cParam0, 9);
				func_136(cParam0, 1);
			}
			if (!func_1284(Global_35, Local_150.f_1, 1, 0))
			{
				func_1322(1);
				func_475(&iLocal_1619);
				func_227(&uLocal_2004);
				func_137(cParam0, 10);
				func_136(cParam0, 29);
			}
			break;
		case 1:
			if ((!func_1284(Global_35, Local_150.f_1, 1, 0) && !func_168(iVar1522, 4)) || func_1346(&(Local_14.f_20), 0) <= 0)
			{
				func_475(&iLocal_1619);
				func_227(&uLocal_2004);
				func_136(cParam0, 29);
			}
			else if (func_1286(&uLocal_2145) > 0.1f)
			{
				func_42(1);
				if (func_384() < 3)
				{
					func_43(0);
				}
				func_166(1);
				func_570(&uLocal_2145);
				func_136(cParam0, 2);
			}
			break;
		case 2:
			if (_get_ped_crouch_movement(bVar1638))
			{
				_set_ped_crouch_movement(bVar1638, false, 0, false);
			}
			_report_crime(player_id(), -493957506, 0, 0, true);
			func_170(&iLocal_1525, 8192);
			func_136(cParam0, 29);
			break;
		case 29:
			func_1347();
			if (!func_168(iVar1517, 16))
			{
				if (func_974(player_id(), 1, 0, 1))
				{
					if (func_1281(Global_35, bVar1646, 0))
					{
						func_137(cParam0, 25);
						func_170(&uLocal_1520, 16);
					}
				}
			}
			if (func_912(Global_35, bVar1638, 1, 1) > 200f && func_1284(bVar1638, Local_150.f_1, 1, 0))
			{
				func_817(bVar1638, 2649.457f, -1067.582f, 46.1831f, 9.0111f, 2, 1073741824);
			}
			if ((!func_1284(bVar1638, Local_150.f_1, 1, 0) || func_1348()) && !func_974(player_id(), 1, 0, 1))
			{
				func_452(Global_35);
				func_192(cParam0, bVar1638, 1);
				func_42(0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_801(var uParam0)
{
	set_ped_config_flag(player_ped_id(), 299, false);
	if (func_1284(Global_35, Local_150.f_76, 1, 0))
	{
		func_170(&uLocal_1519, 1);
	}
	func_476(&iLocal_1637);
	allow_sonar_blips(false);
	return 1;
}

int func_802(var uParam0)
{
	return 1;
}

int func_803(char[4] cParam0)
{
	func_935(cParam0);
	if (!func_10(cParam0, 8))
	{
		func_1290(cParam0);
		open_sequence_task(&uLocal_1613);
		task_mount_animal(0, bVar1648, 20000, -1, 2f, 1, 0, 0);
		task_follow_nav_mesh_to_coord(0, 2660.993f, -1097.54f, 47.9949f, 1f, 20000, 0.25f, 0, 40000f);
		close_sequence_task(iVar1610);
		task_perform_sequence(iVar1638, iVar1610);
		clear_sequence_task(&uLocal_1613);
		func_922(0, 0);
	}
	func_1349(func_1(3, 2), 20f, 4);
	return 1;
}

int func_804(char[4] cParam0)
{
	if (!func_1350(cParam0))
	{
		return 0;
	}
	func_1338(1);
	func_1351(0);
	if (!func_168(iVar1516, 1))
	{
		func_1352(cParam0);
		func_1295(cParam0, "MultiStart");
	}
	else
	{
		func_1268(cParam0, "MultiStart");
	}
	func_101(cParam0, 33554432);
	func_1292(&uLocal_1527, 2);
	func_1292(&uLocal_1527, 4);
	if (func_1272(cParam0, 2))
	{
	}
	func_570(&uLocal_2136);
	set_ped_reset_flag(Global_35, 168, true);
	func_472(1);
	display_radar(true);
	display_hud(true);
	if (_0x083d497d57b7400f(bVar1646))
	{
		freeze_entity_position(bVar1646, false);
	}
	return 1;
}

int func_805(char[4] cParam0)
{
	func_1353(cParam0);
	func_1354(cParam0);
	if (func_1272(cParam0, 2))
	{
	}
	switch (func_1271(cParam0))
	{
		case 0:
			func_1355(Global_35, func_1(3, 11), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (func_168(iVar1516, 1))
			{
				func_136(cParam0, 1);
			}
			if (func_1356(cParam0) == 51 || func_1356(cParam0) == -1)
			{
				func_1357(cParam0, Global_35, Local_150.f_24, 2, 2, "MISSION_MESSAGE_02");
			}
			if (is_entity_in_volume(Global_35, Local_150.f_72, true, 0))
			{
				func_1351(11);
				func_136(cParam0, 1);
			}
			if ((func_168(iVar1524, 2) && func_168(iVar1524, 4)) && !func_168(iVar1516, 1))
			{
				if (func_1304(cParam0, 0))
				{
					if (_0x1ecc76792f661cf5("MOB2_BACKTOB"))
					{
						pause_scripted_conversation("MOB2_BACKTOB", true, false, false, false);
					}
					func_400(cParam0, 0);
					return 1;
				}
			}
			break;
		case 1:
			return 1;
	}
	return 0;
}

int func_806(var uParam0)
{
	set_ped_reset_flag(Global_35, 168, false);
	func_475(&iLocal_1619);
	return 1;
}

int func_807(var uParam0)
{
	return 1;
}

int func_808(char[4] cParam0)
{
	func_935(cParam0);
	if (!func_10(cParam0, 8))
	{
		if (!func_1272(cParam0, 2))
		{
			return 0;
		}
		func_1309(cParam0, &iLocal_1649, func_230(5, 5), 0, "m_pedPlayerHorse", 0);
		func_395(bVar1638, func_230(5, 12), 2, 1073741824);
		func_395(bVar1640, func_230(5, 13), 2, 1073741824);
		func_395(bVar1639, func_230(5, 14), 2, 1073741824);
	}
	if (func_912(Global_35, bVar1638, 1, 1) > 200f)
	{
		func_395(bVar1638, func_230(5, 7), 2, 1073741824);
	}
	set_ped_config_flag(bVar1638, 167, false);
	set_ped_config_flag(iVar1648, 15, true);
	func_472(0);
	return 1;
}

int func_809(char[4] cParam0)
{
	iLocal_1666 = _create_volume_box(2234.45f, -1355.52f, 46.25164f, 0f, 0f, -20f, 100f, 10f, 4f);
	clear_area(2236.691f, -1355.848f, 44.1897f, 150f, 1048576);
	_0xc1799fafd2fdf52b(uVar1663, 0, 0, 0);
	func_101(cParam0, 33554432);
	func_1268(cParam0, "MultiStart");
	return 1;
}

int func_810(char[4] cParam0)
{
	func_1358(cParam0);
	func_1359(cParam0);
	switch (func_1271(cParam0))
	{
		case 0:
			if (!func_168(iVar1516, 32))
			{
				if (func_1281(Global_35, bVar1646, 1))
				{
					func_137(cParam0, 3);
					func_1283(cParam0, bVar1639, 1105014447, 422991367, 1, 1);
					func_170(&uLocal_1519, 32);
				}
			}
			if (!func_168(iVar1516, 536870912))
			{
				if (func_168(iVar1516, 32) && func_1281(Global_35, bVar1646, 1))
				{
					func_170(&uLocal_1519, 536870912);
				}
			}
			if ((func_1284(Global_35, Local_150.f_82, 1, 0) && !is_ped_on_mount(Global_35)) && !func_1287())
			{
				func_136(cParam0, 2);
			}
			if (iLocal_149 == 5 && iVar1550 == 39)
			{
				func_136(cParam0, 1);
			}
			break;
		case 1:
			func_1355(Global_35, func_1(16, 4), 0, 10f, 5f, 2f, 1f, 1, 1, 1, 0);
			if (!func_168(iVar1516, 32768))
			{
				if (func_903(bVar1639, func_1(16, 3), 1) < 15f)
				{
					iLocal_283 = 11;
					func_170(&uLocal_1519, 32768);
				}
			}
			if ((func_1284(Global_35, Local_150.f_82, 1, 0) && !is_ped_on_mount(Global_35)) && !func_1287())
			{
				func_136(cParam0, 2);
			}
			if (func_1284(bVar1639, Local_150.f_79, 1, 0) || func_1284(Global_35, Local_150.f_79, 1, 0))
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			if (((((iLocal_149 == 6 && iVar1550 == 40) && !func_1287()) && ((func_903(Global_35, func_1(16, 4), 1) < 5f || func_912(Global_35, bVar1639, 1, 1) < 5f) || func_912(Global_35, bVar1638, 1, 1) < 5f)) || (func_1284(Global_35, Local_150.f_79, 1, 0) && !func_1287())) || (func_1284(bVar1639, Local_150.f_79, 1, 0) && !func_1287()))
			{
				return 1;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_811(var uParam0)
{
	_0xd17672447692478e(uVar1663, 0);
	_remove_ped_from_mount(iVar1640, true, false);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	return 1;
}

int func_812(var uParam0)
{
	return 1;
}

int func_813(char[4] cParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (!func_1272(cParam0, 3))
	{
		return 0;
	}
	func_1041(9, 1, 1, 1, 0);
	func_1360(22, 45, 0, 1);
	if (!func_84(32768))
	{
		func_314(-404697685, 1137976064, -1212621019, -1, 1, 1, 0);
	}
	Global_1357549->f_1649 = 0;
	return 1;
}

int func_814(char[4] cParam0)
{
	if (!func_168(iVar1516, 1048576))
	{
		func_395(bVar1647, func_230(16, 8), 2, 1073741824);
		func_395(bVar1648, func_230(16, 9), 2, 1073741824);
		func_395(bVar1646, func_230(16, 4), 2, 1073741824);
		func_266(cParam0, 1, bVar1638, 0, 0, 0, 0);
		func_170(&uLocal_1519, 1048576);
	}
	func_1361(&(cParam0->f_7375), 2, 1);
	task_dismount_animal(bVar1638, 0, 0, 0, 0, 0);
	set_ped_config_flag(bVar1638, 167, false);
	task_dismount_animal(iVar1639, 0, 0, 0, 0, 0);
	set_ped_config_flag(iVar1639, 167, false);
	_set_ped_crouch_movement(iVar1641, false, 0, false);
	return 1;
}

int func_815(var uParam0)
{
	return 1;
}

int func_816(var uParam0)
{
	_set_milliseconds_per_game_minute(2000);
	return 1;
}

void func_817(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(bParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(bParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (bParam0 == func_1362(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1363(bParam0))
	{
		if (func_909(get_ped_index_from_entity_index(bParam0)))
		{
			_0x0348469daa17576c(bParam0);
		}
	}
	if (func_168(iParam5, 4) && is_entity_a_ped(bParam0))
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			bVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_817(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			bVar2 = get_mount(iVar1);
			if (does_entity_exist(bVar2) && !is_entity_dead(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_817(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_168(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(bParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(bParam0), false, true);
		}
	}
	if (func_168(iParam5, 2))
	{
		if (is_entity_a_vehicle(bParam0))
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_168(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_168(iParam5, 32), true);
			_0x9587913b9e772d29(bParam0, 0);
		}
	}
	else if (func_168(iParam5, 129))
	{
		if (func_168(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(bParam0, vParam1, func_168(iParam5, 32), true, true);
		set_entity_heading(bParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_168(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_168(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(bParam0), bVar3, 0, false);
		}
		if (func_1363(bParam0))
		{
			bVar6 = get_ped_index_from_entity_index(bParam0);
			_0x0348469daa17576c(bVar6);
			if (!func_168(iParam5, 32))
			{
				clear_ped_tasks(bVar6, 1, 0);
				task_stand_still(bVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(bParam0), 1);
		if (get_ped_index_from_entity_index(bParam0) == Global_35 && !func_168(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_818(char[4] cParam0, int iParam1, bool bParam2)
{
	if (!is_itemset_valid(Global_43616))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Global_43616))
	{
		bVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(bVar1))
		{
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1364()) && get_entity_model(bVar1) == iParam1)
			{
				if (!_0x88ad6cc10d8d35b2(bVar1))
				{
					set_entity_as_mission_entity(bVar1, true, true);
				}
				if (bParam2)
				{
					remove_from_itemset(get_indexed_item_in_itemset(iVar0, Global_43616), Global_43616);
				}
				return bVar1;
			}
		}
		iVar0++;
	}
	return false;
}

struct<8> func_819(var uParam0)
{
	Var0 = { func_1365(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_1366() };
	}
	return Var0;
}

bool func_820(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_821(char[4] cParam0, char[4] cParam1)
{
	func_1367(&(cParam0->f_7375), cParam1);
}

void func_822(char[4] cParam0)
{
	Var0 = { func_1368(cParam0, func_37(cParam0)) };
	func_1369(cParam0, &Var0);
}

void func_823(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1406[iParam1]->f_28 = 1;
		uParam0->f_2074 = iParam1;
		uParam0->f_2078 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_2159 = 1;
	}
}

bool func_824(char[4] cParam0)
{
	iVar0 = func_37(cParam0);
	if (func_164(cParam0, func_35(cParam0)) <= 3)
	{
		iVar0 = func_35(cParam0);
	}
	Var1 = { func_1368(cParam0, iVar0) };
	if (func_1371(&(cParam0->f_10792), Var1, func_1370(&(cParam0->f_10792)), 0))
	{
		func_142(cParam0, func_35(cParam0), 262144);
		if (func_820(&(cParam0->f_10792), 524288))
		{
			func_387(cParam0, 67108864);
			func_1372(&(cParam0->f_10792), 524288);
		}
		func_1373(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

bool func_825(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_826(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_827(var uParam0)
{
	return uParam0->f_862;
}

void func_828(var uParam0)
{
	if (func_1374(&iVar0))
	{
		if (func_595(iVar0, 0))
		{
			if (func_619(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_647(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_595(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_829(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_121(0, 0);
		func_1375(-1);
	}
	func_1376(1);
	set_entity_invincible(Global_35, true);
	if (!func_826(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_826(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_826(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_826(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_826(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_826(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_826(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_826(*iParam0, 4) && !func_826(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_826(*iParam0, 2048))
	{
		func_841(0, 0);
	}
	if (func_826(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_826(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_826(*iParam0, 8192))
	{
		func_1377();
	}
	if (!func_826(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_826(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_826(*iParam0, 1024))
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
		if (!func_826(*iParam0, 16))
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
						if (func_1378() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_396(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1379(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1380(2);
						func_1381(-1);
						func_1382(vVar3);
						func_1384(func_1383());
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
		bVar9 = get_mount(Global_35);
		if (!is_entity_dead(bVar9))
		{
			clear_ped_tasks(bVar9, 1, 0);
			task_stand_still(bVar9, -1);
		}
	}
	if (!func_826(*iParam0, 4096))
	{
		func_1385(Global_35);
	}
	if (!func_826(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_826(*iParam0, 2097152))
	{
		if (func_1386() || _0x50f124e6ef188b22(Global_35))
		{
			func_1387(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_830(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_831(var uParam0)
{
	if (func_825(uParam0, 2048) && !func_396(func_1388(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		bVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(bVar1) && ((bVar0 && is_entity_in_volume(bVar1, uParam0->f_4, true, 0)) || func_825(uParam0, -2147483648))) && get_mount(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(bVar1))
			{
				iVar2 |= 32;
			}
			func_817(bVar1, func_1388(uParam0), func_1389(uParam0), iVar2, 1073741824);
		}
		bVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(bVar3) && ((bVar0 && is_entity_in_volume(bVar3, uParam0->f_4, true, 0)) || func_825(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, bVar3, true))
		{
			func_817(bVar3, func_1388(uParam0), func_1389(uParam0), 2, 1073741824);
		}
	}
}

void func_832(var uParam0)
{
	if ((func_825(uParam0, 268435456) && !func_396(func_1388(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		bVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(bVar0))
		{
			vVar1 = { func_1388(uParam0) };
			func_817(bVar0, vVar1, func_1390(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(bVar0, 0f);
			set_entity_velocity(bVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(bVar0, 0f);
		}
	}
}

void func_833(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_396(vParam1))
	{
		func_1361(uParam0, 2048, 1);
	}
	else
	{
		func_768(uParam0, 2048);
		if (bParam5)
		{
			func_768(uParam0, -2147483648);
		}
	}
}

void func_834(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_804, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_1391(uParam0->f_13[iVar0], 8))
					{
						if (func_709(func_1118(iVar1, 0, 1, 0)))
						{
							if (!func_1392(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_709(func_1118(iVar1, 1, 1, 0)))
						{
							if (!func_1392(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_835(var uParam0, bool bParam1)
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

void func_836(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_22() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(bParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(bParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(bParam1, Global_1347477->f_190);
			}
			func_1214(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1393(bParam1, 29, bVar4, 1, 0);
			func_1393(bParam1, 31, bVar4, 1, 0);
			func_1393(bParam1, 30, bVar4, 1, 0);
			func_1393(bParam1, 22, bVar4, 1, 0);
			func_1393(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1154(32768) && func_1394(1108822547, 8)) && func_1395(10, iParam3))
	{
		func_1396(bParam1, 0, 1);
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
			iVar3 = func_1222(iVar1, 1);
			if (func_1394(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1395(iVar1, iParam3))
				{
				}
				else if ((func_1394(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1394(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1393(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1397(iVar3, 1, 6);
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
								func_1393(bParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1394(iVar3, 1))
							{
								func_1398(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(bParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(bParam1, bVar4);
							_update_ped_variation(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_837(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1399((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_838(int iParam0)
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

int func_839(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(bParam0) || !is_ped_human(bParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(bParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_840(int iParam0, int iParam1)
{
	return func_1400(&uVar0, iParam0, iParam1);
}

void func_841(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_709(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1401(1);
	}
}

void func_842(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_843(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_844(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_845(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_846(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_848(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_849(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_850(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_851(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_852(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_853(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_854(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_868((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_855(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_856(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_870((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_857(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_858(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_872((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_859(int iParam0, int iParam1)
{
	iVar0 = func_1402(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_860(var uParam0, char* sParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1) && (*uParam0)[iVar0]->f_1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_861(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_877((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_862(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_863(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]) && (*uParam0)[iVar0]->f_1 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_864(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0[iVar0] != 0)
		{
			if (uParam0[iVar0] == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_865(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_883((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_866(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_867(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_885((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_868(var uParam0)
{
	return *uParam0 != 0;
}

void func_869(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_870(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_871(var uParam0)
{
	if (!func_899(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				request_waypoint_recording(*uParam0);
				break;
			case 1:
				request_vehicle_recording(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_862(&(uParam0->f_3), 1);
	}
}

bool func_872(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_873(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_874(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_875(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_1403(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_876(var uParam0)
{
	if (func_899(*uParam0, 2))
	{
		return true;
	}
	if (!func_899(*uParam0, 1))
	{
		func_1404(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_862(uParam0, 2);
		return true;
	}
	return false;
}

bool func_877(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_878(var uParam0)
{
	if (!func_899(uParam0->f_2, 1))
	{
		if (func_1405(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1406(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_311())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1074())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_862(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_879(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_880(var uParam0, int iParam1)
{
	if (!func_899(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_881(var uParam0)
{
	return *uParam0 != 0;
}

void func_882(var uParam0)
{
	if (!func_899(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_862(&(uParam0->f_2), 1);
	}
}

bool func_883(var uParam0)
{
	return *uParam0 != 0;
}

void func_884(var uParam0)
{
	if (!func_899(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_862(&(uParam0->f_3), 1);
	}
}

bool func_885(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_886(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_887(var uParam0)
{
	return func_1407(*uParam0);
}

void func_888(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_889(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_890(var uParam0)
{
	if (!func_899(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_862(&(uParam0->f_2), 1);
	}
}

bool func_891(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_892(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_893(var uParam0, bool bParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = bParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_894(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(bParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(bParam1) && !bParam5))
	{
		if (does_entity_exist(bParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_764(bParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(bParam1))
		{
		}
		return;
	}
	iVar0 = func_1408(uParam0, bParam1);
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
		bVar1 = func_1409(uParam0, sParam2);
		if (does_entity_exist(bVar1) && bVar1 != bParam1)
		{
			func_1410(uParam0, bVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1411(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = bParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1412(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1413(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_895(int iParam0)
{
	if (!func_196(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_896(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_919(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_2502)
	{
		iVar20 = uParam0->f_2509;
		while (iVar20 <= (uParam0->f_2508 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			if (func_1414(uParam0, 0))
			{
				if (func_1415(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1416(uParam0, 1, &iVar0))
					{
					}
					if (func_1417(uParam0, 3, &cVar2))
					{
					}
					if (func_1416(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1416(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1416(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1416(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1416(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1418(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_514((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_514(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_514(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_224(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1418(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_514(uParam0->f_2243[uParam0->f_2507], 1048576);
							uParam0->f_2507++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2509 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_2502 = 1;
	}
	if (!func_26(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1414(uParam0, 12))
			{
				if (func_1416(uParam0, 13, &iVar0))
				{
				}
				if (func_1416(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (is_model_valid(iVar22) && iVar22 != 0)
			{
				uParam0->f_2484[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2511 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_2500 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	uParam0->f_2502 = 0;
	uParam0->f_2503 = 1;
	if (!bParam4)
	{
		func_40(uParam0);
	}
	return true;
}

void func_897(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_224((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_224((*uParam0)[iVar0], 1))
		{
			func_1419((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_898(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_868((*uParam0)[iVar1]))
		{
			if (func_859((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1420((*uParam0)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_870((*uParam1)[iVar1]))
		{
			if (func_859((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1421((*uParam1)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_872((*uParam2)[iVar1]))
		{
			if (func_859((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1422((*uParam2)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_874((*uParam3)[iVar1]))
		{
			if (func_859((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_875((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		if (!func_876(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_877((*uParam5)[iVar1]))
		{
			if (func_859((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1405((*uParam5)[iVar1]))
				{
					if (!func_900((*uParam5)[iVar1]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_877((*uParam5)[iVar1]))
		{
			if (func_859((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1405((*uParam5)[iVar1]))
				{
					if (func_900((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_879((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1423((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_881((*uParam6)[iVar1]))
		{
			if (func_859((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1424((*uParam6)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_883((*uParam7)[iVar1]))
		{
			if (func_859((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1425((*uParam7)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_885((*uParam8)[iVar1]))
		{
			if (func_859((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1426((*uParam8)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_887((*uParam9)[iVar1]))
		{
			if (func_859((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1427((*uParam9)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_889((*uParam10)[iVar1]))
		{
			if (func_859((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1428((*uParam10)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_891((*uParam11)[iVar1]))
		{
			if (func_859((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1429((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_899(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_900(var uParam0)
{
	if (func_899(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_2, 1))
	{
		func_878(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_862(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_901(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_902(int iParam0)
{
	if (!func_196(iParam0))
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

float func_903(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(bParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), vParam1, bParam4);
}

int func_904(int iParam0)
{
	if (!func_196(iParam0))
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

bool func_905(char[4] cParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_533(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*iParam2) && func_265(iParam1)) && func_1430(iParam1) == *iParam2)
	{
		return true;
	}
	*iParam2 = func_1431(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*iParam2))
	{
		func_1432(cParam0, *iParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1433(iParam1);
		return true;
	}
	return false;
}

bool func_906(char[4] cParam0)
{
	if (!func_396(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1434(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1434(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1434(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1434(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1434(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1434(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1434(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1434(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1434(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1434(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1434(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1434(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1434(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1434(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1434(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1434(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1434(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1434(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1434(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1434(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1434(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1434(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1434(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1434(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1434(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1434(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1434(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1434(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1434(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1434(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1434(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1434(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1434(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_396(cParam0->f_5417);
}

bool func_907(int iParam0, var uParam1)
{
	uParam1->f_10 = func_273(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return false;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return false;
	}
	if (*uParam1)
	{
		if (func_396(uParam1->f_6))
		{
		}
	}
	bVar0 = func_406();
	if (*uParam1)
	{
		if (bVar0 && !func_334((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1435(5))
			{
				func_544(5);
				func_1436(5);
				func_1381(0);
				func_1380(0);
			}
		}
	}
	if (func_1437(Global_36) == 8)
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_334((*Global_1835011)[37]->f_1, 1)) && !func_334((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_334((*Global_1835011)[43]->f_1, 1)) && !func_334((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_222(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_547(iVar1))
	{
		bVar3 = true;
		if (func_1438(iVar1))
		{
			bVar4 = true;
		}
		if (func_554(iVar1))
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
				func_555(uParam1->f_10);
				*iParam0 = 0;
				return false;
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
				return false;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1435(0) && func_1435(1))
			{
				func_1439(1, 0);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1440())
			{
				func_1441();
			}
			func_1381(0);
			func_1380(0);
			func_1382(uParam1->f_6);
		}
	}
	if (!func_547(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1442(uParam1->f_10) == 0 || func_1443(uParam1->f_10) == 0) || func_1444(uParam1->f_10) == 0)
			{
				func_1445(uParam1->f_10);
			}
			func_1446(uParam1->f_10);
			func_1447(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return false;
		}
		*iParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_222(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_547(iVar1))
	{
		bVar3 = true;
		if (func_1438(iVar1))
		{
			bVar4 = true;
		}
		if (func_554(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(bVar2))
			{
				freeze_entity_position(bVar2, false);
			}
			if (!func_396(uParam1->f_6))
			{
				set_entity_coords(bVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(bVar2, uParam1->f_9);
				_0x9587913b9e772d29(bVar2, 0);
			}
		}
	}
	if (func_1448(uParam1->f_10))
	{
		*iParam0 = 0;
		return false;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(bVar2))
			{
				*iParam0 = 0;
				return false;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != bVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1449(uParam1->f_10) };
			Var10 = { func_1450() };
			func_1451(bVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, bVar2);
			set_ped_config_flag(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return bVar2;
	}
	if (!func_540(uParam1->f_10))
	{
		set_entity_as_mission_entity(bVar2, true, true);
		func_1452(uParam1->f_10);
		if (uParam1->f_2 && !func_396(uParam1->f_6))
		{
			freeze_entity_position(bVar2, false);
			_0x0348469daa17576c(bVar2);
			set_entity_coords(bVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(bVar2, uParam1->f_9);
			_0x9587913b9e772d29(bVar2, 0);
		}
		*iParam0 = 2;
		return bVar2;
	}
	func_539(uParam1->f_10);
	if (func_540(uParam1->f_10))
	{
		iVar16 = func_269(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return false;
		}
	}
	*iParam0 = 2;
	return bVar2;
}

bool func_908(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(bParam0, bParam3, false), get_entity_coords(bParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_909(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(bParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_910(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1453(iParam1))
	{
		return false;
	}
	iVar0 = func_1454(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
	*iParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*iParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*iParam0, true);
		}
		return true;
	}
	return false;
}

void func_911(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(cParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(cParam0->f_5411))
		{
			set_entity_as_mission_entity(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(cParam0->f_5411, -1)) && !func_122(cParam0, 32768))
		{
			clear_ped_tasks(cParam0->f_5411, 1, 0);
		}
		if (!func_22() == 0)
		{
			set_ped_relationship_group_hash(cParam0->f_5411, 1030835986);
		}
		else
		{
			set_ped_relationship_group_hash(cParam0->f_5411, get_ped_relationship_group_default_hash(player_ped_id()));
			set_entity_can_be_damaged(cParam0->f_5411, false);
		}
		if (get_ped_config_flag(cParam0->f_5411, 136, true))
		{
			set_ped_config_flag(cParam0->f_5411, 136, false);
		}
	}
}

float func_912(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(bParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), get_entity_coords(bParam1, false, false), bParam2);
}

bool func_913(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			*iParam2 = 8;
			break;
		case 14:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 16:
			*iParam1 = 9;
			*iParam2 = 18;
			break;
		case 33:
			*iParam1 = 17;
			*iParam2 = 18;
			break;
		case 29:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 30:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case 20:
		case 26:
		case 37:
		case 40:
		case 54:
			*iParam1 = 22;
			*iParam2 = 5;
			break;
		case 11:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_914(var uParam0, int iParam1)
{
	switch (func_1455(uParam0))
	{
		case 0:
			if (!func_1456(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1457(uParam0, 1);
			break;
		case 1:
			func_1458(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_829(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1457(uParam0, 2);
			break;
		case 2:
			if (func_1459(uParam0))
			{
				func_992(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_29(&(uParam0->f_3), 1);
				func_1457(uParam0, 3);
			}
			break;
		case 3:
			if (func_920(&(uParam0->f_3)) >= 1f)
			{
				func_1457(uParam0, 4);
			}
			break;
		case 4:
			if (!func_31())
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (does_cam_exist(uParam0->f_2))
				{
					destroy_cam(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1460(&iVar1, 0);
			release_script_audio_bank();
			func_1457(uParam0, 0);
			return true;
	}
	return false;
}

void func_915(char[4] cParam0)
{
	if (!func_122(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_112(cParam0->f_607)}, 8);
		func_1461(&uVar0, 15000, 0, 0, 0, 1);
		func_105(cParam0, 524288);
	}
}

void func_916(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_917(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_10(cParam0, 16777216))
	{
		func_1462(cParam0);
		func_1463(cParam0);
		return true;
	}
	if (func_1464(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_156(cParam0) == 0)
	{
		func_945(cParam0);
	}
	if (func_31())
	{
		if (!func_10(cParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(cParam0->f_609.f_2))
			{
				destroy_cam(cParam0->f_609.f_2, false);
			}
			func_53(&(cParam0->f_10792));
			func_1465(cParam0);
			func_916(cParam0, 524288);
			func_1352(cParam0);
			func_151(cParam0, 30f);
			func_152(cParam0, 40f);
			func_101(cParam0, 262144);
		}
		if (!func_10(cParam0, 524288) && _0xef324e9550a394d5(cParam0->f_7375.f_804))
		{
			func_101(cParam0, 524288);
		}
	}
	return false;
}

bool func_918(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1466(func_63(cParam0), func_122(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1467(func_63(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1468(func_63(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_435(cParam0, func_35(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_122(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_895(cParam0->f_607)}, 3);
	if (!func_25(&(cParam0->f_8269)))
	{
		if (!func_919(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_919(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_2500 = 0;
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x7907969497ea92f5(uParam0->f_2495);
	if (!bVar0)
	{
		if (!_0x4f9e3ed7617123ac(get_hash_key(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_2495 = _0xca56dd6ab7a39f64(get_hash_key(sParam1));
		}
		else
		{
			uParam0->f_2495 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
		}
	}
	uParam0->f_2501 = _0x603ac35fd4602c76(uParam0->f_2495);
	if (!uParam0->f_2501)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_1469(uParam0);
	uParam0->f_2495.f_2 = 0;
	uParam0->f_2508 = _datafile_get_num_nodes(&(uParam0->f_2495));
	uParam0->f_2495.f_2 = 12;
	uParam0->f_2510 = _datafile_get_num_nodes(&(uParam0->f_2495));
	uParam0->f_2501 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

float func_920(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_516(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_567() - uParam0->f_1);
}

bool func_921()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_922(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_923()
{
	set_bit(&(Global_1934765->f_301), 1);
	func_1470();
}

bool func_924(char[4] cParam0)
{
	if (!does_entity_exist(bVar1638))
	{
		iLocal_1641 = func_161(cParam0);
		set_blocking_of_non_temporary_events(bVar1638, true);
		set_ped_config_flag(bVar1638, 307, true);
	}
	else
	{
		func_1471(bVar1638);
	}
	if (func_1472(cParam0))
	{
		if (!func_1276(cParam0, 1))
		{
			return false;
		}
	}
	if (func_1473(cParam0))
	{
		if (!func_1474(cParam0))
		{
			return false;
		}
	}
	if (func_35(cParam0) == iLocal_247 || func_35(cParam0) == iLocal_248)
	{
		if ((((!func_905(cParam0, 13, &uLocal_1644, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0) || !func_905(cParam0, 3, &uLocal_1645, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0)) || !func_905(cParam0, 15, &uLocal_1646, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0)) || !func_905(cParam0, 20, &uLocal_1647, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0)) || !func_905(cParam0, 5, &uLocal_1648, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0))
		{
			return false;
		}
	}
	if (does_entity_exist(bVar1638))
	{
		func_170(&uLocal_1528, 2);
	}
	if (func_1472(cParam0))
	{
		if (does_entity_exist(iVar1639))
		{
			func_170(&uLocal_1528, 1);
		}
	}
	else
	{
		func_170(&uLocal_1528, 1);
	}
	if (func_1473(cParam0))
	{
		if (does_entity_exist(iVar1640))
		{
			func_170(&uLocal_1528, 4);
		}
	}
	else
	{
		func_170(&uLocal_1528, 4);
	}
	if ((func_168(iVar1525, 2) && func_168(iVar1525, 1)) && func_168(iVar1525, 4))
	{
		return true;
	}
	return false;
}

bool func_925(char[4] cParam0)
{
	iLocal_1649 = func_267(cParam0);
	if (!func_168(iVar1516, 4))
	{
		if (does_entity_exist(bVar1646))
		{
			if (!func_486(cParam0, bVar1646))
			{
				func_1476(cParam0, bVar1646, 248044, 0, "HORSE_NME", 67108863, 1023, 3, -1);
			}
			vVar0 = { get_entity_coords(bVar1646, true, false) };
			fVar3 = get_entity_heading(bVar1646);
			if (func_440(cParam0, 1, vVar0.x, vVar0.y, vVar0.z, fVar3, 1, 1, 1))
			{
				clear_ped_tasks(bVar1646, 1, 0);
				task_stand_still(bVar1646, -1);
				if (!is_entity_on_screen(bVar1646) && !is_sphere_visible(func_1(4, 6), 5f))
				{
					func_395(bVar1646, func_230(4, 6), 2, 1073741824);
				}
				else
				{
					clear_ped_tasks(bVar1646, 1, 0);
					open_sequence_task(&uLocal_1613);
					_task_move_in_traffic_2(0, func_1(4, 6), 1073741824, 1f, 2, 0);
					close_sequence_task(iVar1610);
					task_perform_sequence(bVar1646, iVar1610);
					clear_sequence_task(&uLocal_1613);
				}
				func_170(&uLocal_1519, 4);
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (!func_486(cParam0, bVar1646))
			{
				func_1476(cParam0, bVar1646, 248044, 0, "HORSE_NME", 67108863, 1023, 3, -1);
			}
			if (func_440(cParam0, 1, 0, 0, 0, 0, 1, 1, 1))
			{
				func_170(&uLocal_1519, 4);
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(bVar1648))
	{
		bLocal_1651 = func_1477(1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (!func_486(cParam0, bVar1648))
		{
			func_1478(cParam0, bVar1648, bVar1638);
		}
	}
	if (func_1479(cParam0))
	{
		func_1480();
		if (!func_486(cParam0, bVar1647))
		{
			func_1478(cParam0, bVar1647, bVar1639);
		}
	}
	if (!does_entity_exist(bVar1646))
	{
	}
	if (!does_entity_exist(bVar1648))
	{
	}
	if (does_entity_exist(bVar1646) && does_entity_exist(bVar1648))
	{
		set_entity_load_collision_flag(bVar1646, 1);
		_0xba8818212633500a(bVar1648, 0, 1);
		_0xba8818212633500a(bVar1648, 3, 1);
		set_ped_config_flag(bVar1648, 324, true);
		if (func_1479(cParam0))
		{
			if (does_entity_exist(bVar1647))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_926()
{
	switch (iVar1713)
	{
		case 0:
			func_1481(-1, 1);
			if (does_entity_exist(&(Local_14.f_94[1])))
			{
				set_entity_visible(&(Local_14.f_94[1]), false);
				set_entity_collision(&(Local_14.f_94[1]), false, false);
			}
			if (does_entity_exist(&(Local_14.f_94[2])))
			{
			}
			iLocal_1715 = 1;
			break;
		case 1:
			if (!is_entity_dead(iVar1639))
			{
				iLocal_1715 = 2;
			}
			else
			{
				iLocal_1715 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_927(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_106))
	{
		Local_14.f_106 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_107[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_107[0] = create_object(-2021891582, 2675.034f, -1085.439f, 45.9037f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_107[0]), 0f, 0f, -78.828f, 2, true);
		freeze_entity_position(&(Local_14.f_107[0]), bParam1);
	}
	func_1482(&(Local_14.f_107[0]), Local_14);
	func_1482(&(Local_14.f_107[0]), Local_14.f_106);
	if (!does_entity_exist(&(Local_14.f_107[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_107[1] = create_object(-1311287025, 2674.634f, -1086.016f, 46.6464f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_107[1]), 0f, 0f, 9.1719f, 2, true);
		freeze_entity_position(&(Local_14.f_107[1]), bParam1);
	}
	func_1482(&(Local_14.f_107[1]), Local_14);
	func_1482(&(Local_14.f_107[1]), Local_14.f_106);
	if (!does_entity_exist(&(Local_14.f_107[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_107[2] = create_object(681443655, 2674.875f, -1085.903f, 46.6695f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_107[2]), 0f, 0f, -174.8276f, 2, true);
		freeze_entity_position(&(Local_14.f_107[2]), bParam1);
	}
	func_1482(&(Local_14.f_107[2]), Local_14);
	func_1482(&(Local_14.f_107[2]), Local_14.f_106);
}

void func_928()
{
	func_1483(-1, 1);
	if (does_entity_exist(&(Local_14.f_99[0])))
	{
		set_entity_load_collision_flag(&(Local_14.f_99[0]), 1);
	}
}

bool func_929(char[4] cParam0)
{
	if (((func_35(cParam0) == iLocal_242 || func_35(cParam0) == iLocal_243) || func_35(cParam0) == iLocal_244) || func_35(cParam0) == iLocal_245)
	{
		if (!func_1288())
		{
			return false;
		}
	}
	if (func_35(cParam0) == iLocal_243)
	{
		if (!func_1308())
		{
			return false;
		}
	}
	if (func_35(cParam0) == iLocal_247)
	{
		if (!func_1484(cParam0))
		{
			return false;
		}
	}
	if (func_35(cParam0) == iLocal_245 || func_35(cParam0) == iLocal_246)
	{
		if (!func_1332() || !func_1333(-1, 0))
		{
			return false;
		}
	}
	if (!is_entity_dead(Global_35))
	{
		func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
		func_147(cParam0, Global_35, "ARTHUR", 0);
		_0xb832f1a686b9b810(Global_35, true, 0);
	}
	if (func_35(cParam0) == iLocal_240 && !func_122(cParam0, 16384))
	{
		func_395(Global_35, func_230(6, 0), 2, 1073741824);
	}
	if (!is_entity_dead(bVar1638))
	{
		func_153(cParam0, bVar1638, 0, 0, 0, 0, 0);
		func_147(cParam0, bVar1638, "JOHN", 0);
		set_entity_load_collision_flag(bVar1638, 1);
		_0xb832f1a686b9b810(bVar1638, true, 0);
		request_ped_visibility_tracking(bVar1638);
		set_ped_flee_attributes(bVar1638, 512, true);
	}
	if (func_35(cParam0) == iLocal_240 && !func_122(cParam0, 16384))
	{
		func_395(bVar1638, func_230(8, 8), 2, 1073741824);
	}
	if (func_1472(cParam0))
	{
		func_1485(cParam0);
	}
	if (func_1473(cParam0))
	{
		func_1486(cParam0);
	}
	if (func_107() || func_130(cParam0, 2))
	{
		func_1309(cParam0, &iLocal_1649, func_230(4, 6), 1, "m_pedPlayerHorse", 0);
		func_1309(cParam0, &bLocal_1651, func_230(4, 7), 1, "m_pedJohnHorse", 0);
	}
	if (func_1479(cParam0))
	{
		func_1309(cParam0, &bLocal_1650, func_230(5, 6), 1, "m_pedDutchHorse", 0);
	}
	if ((func_107() || func_130(cParam0, 2)) || func_84(32768))
	{
		if (func_35(cParam0) == iLocal_240 || func_35(cParam0) == iLocal_241)
		{
			func_1487(cParam0);
		}
	}
	if (func_35(cParam0) == iLocal_245 || func_35(cParam0) == iLocal_246)
	{
		func_1308();
		func_1488();
	}
	if (func_35(cParam0) == iLocal_245 || func_35(cParam0) == iLocal_246)
	{
		func_1332();
	}
	if (func_35(cParam0) == iLocal_240 && !func_122(cParam0, 16384))
	{
		if (_is_anim_scene_loaded(&(uLocal_1682[0]), true, false))
		{
			set_anim_scene_entity(&(uLocal_1682[0]), func_1259(Global_35), Global_35, 0);
			set_anim_scene_entity(&(uLocal_1682[0]), func_1259(bVar1639), bVar1639, 0);
			set_anim_scene_entity(&(uLocal_1682[0]), func_1259(bVar1638), bVar1638, 0);
			start_anim_scene(&(uLocal_1682[0]));
			func_1489(-668482597, 4000, 0, 1, 1, 0, 0, 0);
		}
	}
	return true;
}

void func_930()
{
	Local_150 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_150, 2766.445f, -1060.891f, 50f, 0f, 0f, 0f, 53.59938f, 59.98342f, 12.70161f);
	_0x39816f6f94f385ad(Local_150, 2768.125f, -1095.421f, 50f, 0f, 0f, 0f, 45.21283f, 13.78917f, 12.70161f);
	Local_150.f_1 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_150.f_1, 2691.517f, -1101.42f, 46f, 0f, 0f, 0f, 24.39619f, 10.27114f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2726.445f, -1084.485f, 46f, 0f, 0f, 0f, 99.72315f, 31.02746f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2734.615f, -1060.969f, 46f, 0f, 0f, 0f, 106.5443f, 36.27919f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2770.35f, -1040.566f, 46f, 0f, 0f, 0f, 35.20702f, 13.77119f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2777.12f, -1088.037f, 46f, 0f, 0f, -45.27582f, 14.6144f, 15.66874f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2779.898f, -1083.683f, 46f, 0f, 0f, -21.41298f, 15.79406f, 3.219739f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2779.783f, -1081.461f, 46f, 0f, 0f, 0.894158f, 15.79406f, 8.521858f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2704.345f, -1095.974f, 46f, 0f, 0f, -46.2454f, 14.6144f, 15.66874f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2749.755f, -1044.163f, 46f, 0f, 0f, -44.3604f, 10.17864f, 19.34754f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2687.217f, -1075.746f, 46f, 0f, 0f, 12.25591f, 29.62963f, 55.60694f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2680.72f, -1056.614f, 46f, 0f, 0f, -45.00446f, 26.80289f, 12.58325f, 30f);
	_0x39816f6f94f385ad(Local_150.f_1, 2680.33f, -1056.116f, 46f, 0f, 0f, -89.84299f, 26.80289f, 9.291616f, 30f);
	Local_150.f_2 = _create_volume_box(2661.591f, -1080.236f, 46.1133f, 0f, 0f, 14.04536f, 27.00482f, 86.92451f, 12.67507f);
	Local_150.f_3 = _create_volume_box(2772.256f, -1044.587f, 43.79f, 0f, 0f, 0f, 4.65f, 4.269917f, 5.981722f);
	Local_150.f_4 = _create_volume_box(2772.16f, -1055.908f, 47.45916f, 0f, 0f, 0f, 40.32616f, 59.00209f, 17.75949f);
	Local_150.f_5 = _create_volume_box(2774.804f, -1078.791f, 46.39755f, 0f, 0f, -144.1501f, 3.355415f, 2.448405f, 4f);
	Local_150.f_6 = _create_volume_box(2772.211f, -1047.94f, 47.94102f, 0f, 0f, 0f, 10.80833f, 14.6587f, 4.81612f);
	Local_150.f_7 = _create_volume_box(2770.749f, -1048.325f, 47.71697f, 0f, 0f, 0f, 3.112043f, 2.4959f, 4.81612f);
	Local_150.f_8 = _create_volume_box(2773.797f, -1048.325f, 47.71697f, 0f, 0f, 0f, 3.112043f, 2.4959f, 4.81612f);
	Local_150.f_9 = _create_volume_box(2405.734f, -1216.449f, 46.03038f, 0f, 0f, 0f, 3.988122f, 7.905196f, 3.262241f);
	Local_150.f_10 = _create_volume_box(2410.57f, -1209.428f, 47.90817f, 0f, 0f, 0f, 13.72245f, 60.29237f, 11.21516f);
	Local_150.f_11 = _create_volume_box(2410.57f, -1225.452f, 47.90817f, 0f, 0f, 0f, 13.72245f, 22.33792f, 11.21516f);
	Local_150.f_12 = _create_volume_box(2410.57f, -1202.927f, 47.90817f, 0f, 0f, 0f, 13.72245f, 22.33792f, 11.21516f);
	Local_150.f_13 = _create_volume_box(2729.132f, -1064.572f, 49.93333f, 0f, 0f, -1.022042f, 194.5458f, 114.5264f, 22.98184f);
	Local_150.f_14 = _create_volume_box(2732.333f, -1064.629f, 49.93333f, 0f, 0f, -1.022042f, 318.8711f, 303.5874f, 36.52019f);
	Local_150.f_15 = _create_volume_box(2689.585f, -1071.949f, 49.93333f, 0f, 0f, -1.022042f, 52.63015f, 94.46494f, 22.98184f);
	Local_150.f_16 = _create_volume_box(2701.463f, -1063.539f, 45.8906f, 0f, 0f, 89.99998f, 4f, 4f, 4f);
	Local_150.f_17 = _create_volume_box(2676.431f, -1071.084f, 47.79126f, 0f, 0f, -75.95697f, 3.297274f, 2f, 4.130268f);
	Local_150.f_18 = _create_volume_box(2768.887f, -1054.395f, 45.47922f, 0f, 0f, 0f, 30.56107f, 23.0125f, 7.457741f);
	Local_150.f_19 = _create_volume_box(2753.139f, -1056.19f, 48.18089f, 0f, 0f, 89.99998f, 20f, 23.4097f, 7.449553f);
	Local_150.f_20 = _create_volume_box(2747.482f, -1058.899f, 46.9f, 0f, 0f, 89.99998f, 2.763692f, 1.697965f, 3f);
	Local_150.f_21 = _create_volume_box(2752.667f, -1050.073f, 46.76019f, 0f, 0f, 0f, 1.602766f, 2.370378f, 1.966626f);
	Local_150.f_22 = _create_volume_box(2755.085f, -1059.284f, 46.89237f, 0f, 0f, 0f, 1.913564f, 2.157714f, 2.094441f);
	Local_150.f_23 = _create_volume_box(2425.489f, -1184.662f, 45.0683f, 0f, 0f, -91.00002f, 10f, 10f, 10f);
	Local_150.f_24 = _create_volume_box(2645.629f, -1140.175f, 51.572f, -7.722898f, 0f, 90.70265f, 10f, 10f, 10f);
	Local_150.f_25 = _create_volume_box(2670.993f, -1072.029f, 46.48399f, 0f, 0f, 103.2813f, 7.741461f, 10.40339f, 7.653772f);
	Local_150.f_26 = _create_volume_box(2747.753f, -1068.039f, 50f, 0f, 0f, 0f, 31.7762f, 31.53695f, 10f);
	Local_150.f_27 = _create_volume_box(2747.441f, -1067.374f, 50f, 0f, 0f, 0f, 23.90321f, 4.242982f, 10f);
	Local_150.f_28 = _create_volume_box(2747.312f, -1067.313f, 50f, 0f, 0f, 0f, 10.18563f, 4.047863f, 10f);
	Local_150.f_29 = _create_volume_box(2747.312f, -1067.313f, 50f, 0f, 0f, 0f, 10.18563f, 4.047863f, 10f);
	Local_150.f_30 = _create_volume_box(2747.74f, -1071.59f, 46.84351f, 0f, 0f, 0f, 2.162073f, 4.43152f, 3.732756f);
	Local_150.f_31 = _create_volume_box(2747.928f, -1068.552f, 50f, 0f, 0f, 0f, 39.44786f, 42.07025f, 10f);
	Local_150.f_32 = _create_volume_box(2688.481f, -1060.237f, 50f, 0f, 0f, 0f, 30.93592f, 26.35114f, 10f);
	Local_150.f_33 = _create_volume_box(2691.998f, -1061.575f, 44.78821f, 0f, 0f, 0f, 14.86956f, 11.43432f, 3.7056f);
	Local_150.f_34 = _create_volume_box(2692.401f, -1059.322f, 50f, 0f, 0f, 0f, 12.58223f, 11.13946f, 10f);
	Local_150.f_35 = _create_volume_box(2692.401f, -1059.322f, 50f, 0f, 0f, 0f, 12.58223f, 11.13946f, 10f);
	Local_150.f_36 = _create_volume_box(2699.489f, -1060.43f, 48.20464f, 0f, 0f, 0f, 6.187867f, 4.174167f, 5.063269f);
	Local_150.f_37 = _create_volume_box(2693.587f, -1058.099f, 50f, 0f, 0f, 0.130864f, 41.42677f, 29.52586f, 10f);
	Local_150.f_38 = _create_volume_box(2723.685f, -1068.817f, 50f, 0f, 0f, 0f, 25.24707f, 30.87573f, 10f);
	Local_150.f_39 = _create_volume_box(2724.471f, -1069.358f, 50f, 0f, 0f, 0f, 16.01546f, 16.59595f, 10f);
	Local_150.f_40 = _create_volume_box(2724.767f, -1067.833f, 50f, 0f, 0f, 0f, 12.54276f, 13.49121f, 10f);
	Local_150.f_41 = _create_volume_box(2724.767f, -1067.833f, 50f, 0f, 0f, 0f, 12.54276f, 13.49121f, 10f);
	Local_150.f_42 = _create_volume_box(2725.381f, -1058.478f, 46.84572f, 0f, 0f, 0f, 3.614546f, 3.736441f, 5.097589f);
	Local_150.f_43 = _create_volume_box(2723.685f, -1068.708f, 50f, 0f, 0f, 0f, 33.53336f, 39.12537f, 10f);
	Local_150.f_44 = _create_volume_box(2736.405f, -1084.936f, 46.1557f, 0f, 0f, 0f, 25.24707f, 30.87573f, 10f);
	Local_150.f_45 = _create_volume_box(2736.405f, -1084.936f, 46.1557f, 0f, 0f, 0f, 16.01546f, 16.59595f, 10f);
	Local_150.f_46 = _create_volume_box(2736.405f, -1084.936f, 46.1557f, 0f, 0f, 0f, 12.54276f, 13.49121f, 10f);
	Local_150.f_47 = _create_volume_box(2736.405f, -1084.936f, 46.1557f, 0f, 0f, 0f, 12.54276f, 13.49121f, 10f);
	Local_150.f_48 = _create_volume_box(2736.405f, -1084.936f, 46.1557f, 0f, 0f, 0f, 3.614546f, 3.736441f, 5.097589f);
	Local_150.f_49 = _create_volume_box(2736.405f, -1084.936f, 46.1557f, 0f, 0f, 0f, 33.53336f, 39.12537f, 10f);
	Local_150.f_50 = _create_volume_box(2725.182f, -1084.627f, 50f, 0f, 0f, 0f, 24.19287f, 26.53831f, 10f);
	Local_150.f_51 = _create_volume_box(2725.674f, -1087.615f, 50f, 0f, 0f, 0f, 18.51106f, 20.42294f, 10f);
	Local_150.f_52 = _create_volume_box(2725.179f, -1083.629f, 50f, 0f, 0f, 0f, 11.40982f, 13.97086f, 10f);
	Local_150.f_53 = _create_volume_box(2725.182f, -1083.349f, 50f, 0f, 0f, 0f, 29.48554f, 29.27795f, 10f);
	Local_150.f_54 = _create_volume_box(2705.212f, -1079.679f, 50f, 0f, 0f, 0f, 23.37606f, 29.26615f, 10f);
	Local_150.f_55 = _create_volume_box(2705.936f, -1079.733f, 50f, 0f, 0f, 0f, 17.03393f, 25.26852f, 10f);
	Local_150.f_56 = _create_volume_box(2709.279f, -1085.606f, 50f, 0f, 0f, 0f, 8.060251f, 9.481291f, 10f);
	Local_150.f_57 = _create_volume_box(2705.817f, -1079.843f, 50f, 0f, 0f, 0f, 30.26506f, 34.58478f, 10f);
	Local_150.f_58 = _create_volume_box(2735.062f, -1056.805f, 50f, 0f, 0f, 0f, 19.04261f, 27.74255f, 10f);
	Local_150.f_59 = _create_volume_box(2735.166f, -1052.702f, 50f, 0f, 0f, 0f, 14.84876f, 19.49789f, 10f);
	Local_150.f_60 = _create_volume_box(2734.146f, -1049.196f, 50f, 0f, 0f, 0f, 10.1495f, 12.05168f, 10f);
	Local_150.f_61 = _create_volume_box(2734.823f, -1058.868f, 50f, 0f, 0f, 0f, 27.14623f, 31.9095f, 10f);
	Local_150.f_62 = _create_volume_box(2770.396f, -1057.827f, 50f, 0f, 0f, 0f, 30.97105f, 32.67823f, 10f);
	Local_150.f_63 = _create_volume_box(2771.218f, -1053.357f, 50f, 0f, 0f, 0f, 20.69017f, 21.17313f, 10f);
	Local_150.f_64 = _create_volume_box(2772.298f, -1045.897f, 46.89219f, 0f, 0f, 0f, 6.001956f, 7.024132f, 5.982779f);
	Local_150.f_65 = _create_volume_box(2771.121f, -1052.099f, 50f, 0f, 0f, 0f, 14.07686f, 13.38649f, 10f);
	Local_150.f_66 = _create_volume_box(2645.051f, -1140.681f, 53.95531f, 0f, 0f, -1.691257f, 67.15794f, 36.82006f, 12.67507f);
	Local_150.f_67 = _create_volume_box(2421.776f, -1208.078f, 47.64969f, 0f, 0f, -76.14962f, 25.95382f, 68.1385f, 8.302324f);
	Local_150.f_68 = _create_volume_box(2361.321f, -1218.033f, 52.0577f, 0f, 0f, 0.827867f, 94.15996f, 60.925f, 40.12043f);
	Local_150.f_69 = _create_volume_box(2565.147f, -1182.011f, 53.12092f, 0f, 0f, 0f, 346.0261f, 396.9107f, 31.2879f);
	Local_150.f_70 = _create_volume_box(2729.663f, -1071.616f, 48.41427f, 0f, 0f, 12.15461f, 130.1245f, 80.96568f, 20.63721f);
	Local_150.f_71 = _create_volume_box(2404.16f, -1217.79f, 49.37f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_150.f_72 = _create_volume_box(2392.088f, -1215.792f, 47.84814f, 0f, 0f, 0f, 21.14354f, 44.04832f, 9.523529f);
	Local_150.f_73 = _create_volume_box(2739.89f, -1061.66f, 46.525f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_150.f_74 = _create_volume_box(2742.314f, -1067.342f, 47.18917f, 0f, 0f, 0f, 20f, 5f, 3f);
	Local_150.f_75 = _create_volume_box(2404.16f, -1217.79f, 49.37f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_150.f_76 = _create_volume_box(2416.151f, -1212.563f, 50.95346f, 0f, 0f, 0f, 50.19735f, 82.66755f, 12.53847f);
	Local_150.f_77 = _create_volume_box(2739.89f, -1061.66f, 46.525f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_150.f_78 = _create_volume_box(2654.962f, -1091.367f, 48.24909f, 0f, 0f, 8.685748f, 6.321488f, 8.251133f, 7.178555f);
	Local_150.f_79 = _create_volume_box(1857.213f, -1832.833f, 45.07319f, 0f, 0f, -38.45396f, 17.31627f, 18.77564f, 8.671826f);
	Local_150.f_80 = _create_volume_cylinder(2770.706f, -1052.188f, 46.69385f, 0f, 0f, 0f, 9.393373f, 9.956676f, 3.505456f);
	Local_150.f_81 = _create_volume_cylinder(2772.187f, -1047.368f, 46.69385f, 0f, 0f, 0f, 4.636127f, 4.767484f, 3.505456f);
	Local_150.f_82 = _create_volume_box(1868.221f, -1841.365f, 44.44015f, 0f, 0f, -35f, 63.38898f, 60.24998f, 14.81617f);
	Local_150.f_83 = _create_volume_box(2375.355f, -1216.932f, 53.28643f, 0f, 0f, 0f, 27.72238f, 13.84044f, 15.8887f);
	Local_150.f_84 = _create_volume_box(2410.865f, -1140.014f, 49.17487f, 0f, 0f, 0f, 15.1769f, 31.40728f, 7.017286f);
	Local_150.f_85 = _create_volume_box(2671.588f, -1072.191f, 47.09362f, 0f, 0f, 13.00359f, 4.124132f, 2.444745f, 3.552912f);
	Local_150.f_86 = _create_volume_box(2416.151f, -1252.039f, 50.95346f, 0f, 0f, 0f, 85.4408f, 212.1412f, 17.56691f);
	Local_150.f_87 = _create_volume_box(2389.605f, -1216.131f, 46.90201f, 0f, 0f, 0f, 2.603298f, 3.451617f, 3.034395f);
	Local_150.f_88 = _create_volume_box(2667.793f, -1072.38f, 46.7164f, 0f, 0f, 12.93827f, 11.00204f, 10.14435f, 4.592989f);
	Local_150.f_89 = _create_volume_box(2288.06f, -1376.537f, 46.48327f, 0f, 0f, -19.66528f, 42.93776f, 31.62271f, 12.40493f);
}

void func_931()
{
	if (_does_volume_exist(Local_150.f_66))
	{
		_0x18262cafebb5fbe1(Local_150.f_66, 10208, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(Local_150.f_68))
	{
		_0x18262cafebb5fbe1(Local_150.f_68, 10208, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(Local_150.f_86))
	{
		_0x18262cafebb5fbe1(Local_150.f_86, 10208, 0, 0, -1, -1, 0);
	}
}

void func_932()
{
	Local_297[0]->f_1 = 0;
	Local_297[0]->f_2 = 1;
	Local_297[0]->f_12 = { 2404.069f, -1215.891f, 46.31672f };
	Local_297[0]->f_15 = { 0f, 0f, 0f };
	Local_297[0]->f_18 = { 2.763357f, 6.289732f, 3.619387f };
	Local_297[0]->f_3 = 272352;
	Local_297[0]->f_5 = 2;
	Local_297[1]->f_1 = 0;
	Local_297[1]->f_2 = 1;
	Local_297[1]->f_12 = { 2405.601f, -1216.843f, 45.58512f };
	Local_297[1]->f_15 = { 0f, 0f, 0f };
	Local_297[1]->f_18 = { 0.25f, 0.25f, 2.579534f };
	Local_297[1]->f_3 = 272352;
	Local_297[1]->f_5 = 2;
	Local_297[1]->f_6 = 665633627;
	Local_297[2]->f_1 = 0;
	Local_297[2]->f_2 = 1;
	Local_297[2]->f_12 = { 2405.601f, -1216.843f, 45.58512f };
	Local_297[2]->f_15 = { 0f, 0f, 0f };
	Local_297[2]->f_18 = { 0.25f, 0.25f, 2.579534f };
	Local_297[2]->f_3 = 272352;
	Local_297[2]->f_5 = 2;
	Local_297[2]->f_6 = 665633627;
	Local_297[3]->f_1 = 0;
	Local_297[3]->f_2 = 1;
	Local_297[3]->f_12 = { 2401.275f, -1215.065f, 45.76361f };
	Local_297[3]->f_15 = { 0f, 0f, -59.16722f };
	Local_297[3]->f_18 = { 1f, 1f, 2.680303f };
	Local_297[3]->f_3 = 272352;
	Local_297[3]->f_5 = 2;
	Local_297[4]->f_1 = 0;
	Local_297[4]->f_2 = 1;
	Local_297[4]->f_12 = { 2396.458f, -1218.894f, 45.76361f };
	Local_297[4]->f_15 = { 0f, 0f, 34.54268f };
	Local_297[4]->f_18 = { 1f, 1f, 2.680303f };
	Local_297[4]->f_3 = 272352;
	Local_297[4]->f_5 = 2;
	Local_297[5]->f_1 = 0;
	Local_297[5]->f_2 = 1;
	Local_297[5]->f_12 = { 2396.372f, -1215.171f, 45.76361f };
	Local_297[5]->f_15 = { 0f, 0f, -28.2477f };
	Local_297[5]->f_18 = { 1f, 1f, 2.680303f };
	Local_297[5]->f_3 = 272352;
	Local_297[5]->f_5 = 2;
	Local_297[6]->f_1 = 0;
	Local_297[6]->f_2 = 1;
	Local_297[6]->f_12 = { 2391.051f, -1219.432f, 47.07302f };
	Local_297[6]->f_15 = { 0.078021f, -0.1904f, 39.46975f };
	Local_297[6]->f_18 = { 1f, 1f, 2.680303f };
	Local_297[6]->f_3 = 272352;
	Local_297[6]->f_5 = 2;
	Local_297[7]->f_1 = 0;
	Local_297[7]->f_2 = 1;
	Local_297[7]->f_12 = { 2389.588f, -1214.656f, 47.08565f };
	Local_297[7]->f_15 = { 0.205492f, 0.010607f, -31.20254f };
	Local_297[7]->f_18 = { 1f, 1f, 2.680303f };
	Local_297[7]->f_3 = 272352;
	Local_297[7]->f_5 = 2;
	Local_297[8]->f_1 = 5;
	Local_297[8]->f_2 = 5;
	Local_297[8]->f_12 = { 2781.31f, -1091.896f, 47.16067f };
	Local_297[8]->f_15 = { 0f, 0f, 40.19773f };
	Local_297[8]->f_18 = { 2.501277f, 2.125461f, 2.969696f };
	Local_297[8]->f_3 = 272352;
	Local_297[8]->f_5 = 2;
	Local_297[9]->f_1 = 1;
	Local_297[9]->f_2 = 3;
	Local_297[9]->f_12 = { 2670.993f, -1072.029f, 46.48399f };
	Local_297[9]->f_15 = { 0f, 0f, 103.2813f };
	Local_297[9]->f_18 = { 7.741461f, 6.838384f, 7.653772f };
	Local_297[9]->f_3 = 272352;
	Local_297[9]->f_5 = 2;
	Local_297[10]->f_1 = 2;
	Local_297[10]->f_2 = 3;
	Local_297[10]->f_12 = { 2405.601f, -1216.843f, 45.58512f };
	Local_297[10]->f_15 = { 0f, 0f, 0f };
	Local_297[10]->f_18 = { 1.1f, 1.1f, 2.579534f };
	Local_297[10]->f_3 = 272352;
	Local_297[10]->f_5 = 2;
	Local_297[11]->f_1 = 1;
	Local_297[11]->f_2 = 5;
	Local_297[11]->f_3 = 262144;
	Local_297[11]->f_4 = 8192;
	Local_297[11]->f_5 = 8;
	Local_297[11]->f_10 = 0;
	Local_297[11] = Local_150.f_1;
	Local_297[12]->f_1 = 7;
	Local_297[12]->f_2 = 8;
	Local_297[12]->f_12 = { 2413.024f, -1203.285f, 45.07385f };
	Local_297[12]->f_15 = { 0f, 0f, 5.220977f };
	Local_297[12]->f_18 = { 3.617712f, 1.706487f, 3.94074f };
	Local_297[12]->f_3 = 272352;
	Local_297[12]->f_5 = 2;
	Local_297[13]->f_1 = 5;
	Local_297[13]->f_2 = 6;
	Local_297[13]->f_12 = { 2405.601f, -1216.843f, 45.58512f };
	Local_297[13]->f_15 = { 0f, 0f, 0f };
	Local_297[13]->f_18 = { 1.1f, 1.1f, 2.579534f };
	Local_297[13]->f_3 = 272352;
	Local_297[13]->f_5 = 2;
	Local_297[14]->f_1 = 5;
	Local_297[14]->f_2 = 6;
	Local_297[14]->f_12 = { 2766.128f, -1094.147f, 46.58687f };
	Local_297[14]->f_15 = { 0f, 0f, 2.952187f };
	Local_297[14]->f_18 = { 1.476244f, 1f, 2.789765f };
	Local_297[14]->f_3 = 272352;
	Local_297[14]->f_5 = 2;
	Local_297[14]->f_11 = 1;
	Local_297[15]->f_1 = 5;
	Local_297[15]->f_2 = 6;
	Local_297[15]->f_12 = { 2758.088f, -1092.49f, 46.58687f };
	Local_297[15]->f_15 = { 0f, 0f, -0.999685f };
	Local_297[15]->f_18 = { 3.212429f, 4.05217f, 2.789765f };
	Local_297[15]->f_3 = 272352;
	Local_297[15]->f_5 = 2;
	Local_297[16]->f_1 = 5;
	Local_297[16]->f_2 = 6;
	Local_297[16]->f_12 = { 2758.105f, -1091.454f, 46.58687f };
	Local_297[16]->f_15 = { 0f, 0f, -0.999685f };
	Local_297[16]->f_18 = { 3.212429f, 1.159122f, 2.789765f };
	Local_297[16]->f_3 = 272352;
	Local_297[16]->f_5 = 2;
	Local_297[16]->f_11 = 1;
	Local_297[17]->f_1 = 5;
	Local_297[17]->f_2 = 6;
	Local_297[17]->f_12 = { 2741.047f, -1088.523f, 46.58687f };
	Local_297[17]->f_15 = { 0f, 0f, -0.999685f };
	Local_297[17]->f_18 = { 1.156499f, 1.159122f, 2.789765f };
	Local_297[17]->f_3 = 272352;
	Local_297[17]->f_5 = 2;
	Local_297[17]->f_11 = 1;
	Local_297[18]->f_1 = 5;
	Local_297[18]->f_2 = 6;
	Local_297[18]->f_12 = { 2681.376f, -1091.123f, 47.13967f };
	Local_297[18]->f_15 = { 0f, 0f, 0f };
	Local_297[18]->f_18 = { 1.724107f, 1f, 3.134772f };
	Local_297[18]->f_3 = 272352;
	Local_297[18]->f_5 = 2;
	Local_297[18]->f_11 = 1;
	Local_297[19]->f_1 = 5;
	Local_297[19]->f_2 = 6;
	Local_297[19]->f_12 = { 2677.981f, -1083.604f, 46.58995f };
	Local_297[19]->f_15 = { 0f, 0f, 0f };
	Local_297[19]->f_18 = { 1.586464f, 1.298728f, 3.430743f };
	Local_297[19]->f_3 = 272352;
	Local_297[19]->f_5 = 2;
	Local_297[19]->f_11 = 1;
}

void func_933(char[4] cParam0)
{
	if (func_35(cParam0) == iLocal_241)
	{
		set_clock_time(21, 0, 0);
	}
	else if ((func_35(cParam0) == iLocal_242 || func_35(cParam0) == iLocal_243) || func_35(cParam0) == iLocal_244)
	{
		set_clock_time(21, 0, 0);
	}
	else if (func_35(cParam0) == iLocal_245)
	{
		set_clock_time(21, 0, 0);
	}
	else if (func_35(cParam0) == iLocal_246)
	{
		set_clock_time(21, 45, 0);
	}
	else if (func_35(cParam0) == iLocal_247)
	{
		set_clock_time(22, 15, 0);
	}
	else if (func_35(cParam0) == iLocal_248)
	{
		set_clock_time(0, 0, 0);
	}
}

void func_934(char[4] cParam0)
{
	if (func_35(cParam0) == iLocal_240 || func_35(cParam0) == iLocal_246)
	{
		func_472(1);
	}
	else
	{
		func_472(0);
	}
	if (func_35(cParam0) > iLocal_243)
	{
		func_1315(0);
	}
	else
	{
		func_1315(1);
	}
	if (func_35(cParam0) >= iLocal_242)
	{
		func_1490(0);
	}
	else
	{
		func_1490(1);
	}
	if (func_35(cParam0) >= iLocal_242)
	{
		func_1491(0);
	}
	else
	{
		func_1491(1);
	}
	if (func_35(cParam0) > iLocal_244)
	{
		func_1289(0, 1);
	}
	else
	{
		func_1289(1, 1);
	}
	func_1492(1);
	func_1493(1);
	if (func_35(cParam0) > iLocal_243)
	{
		func_1314(0, 0);
	}
	else
	{
		func_1314(1, 0);
	}
}

void func_935(char[4] cParam0)
{
	if (func_35(cParam0) == iLocal_240)
	{
		_set_weather_type(-702816767, true, true, true, 45f, false);
	}
	else if (func_35(cParam0) == iLocal_241)
	{
		_set_weather_type(-702816767, true, true, false, 0f, false);
	}
	else if ((((func_35(cParam0) == iLocal_242 || func_35(cParam0) == iLocal_243) || func_35(cParam0) == iLocal_244) || func_35(cParam0) == iLocal_245) || func_35(cParam0) == iLocal_246)
	{
		if (is_screen_faded_out())
		{
			_set_weather_type(-702816767, true, true, false, 0f, false);
		}
		else
		{
			_set_weather_type(-702816767, true, true, true, 20f, false);
		}
	}
	else if (func_35(cParam0) == iLocal_247 || func_35(cParam0) == iLocal_248)
	{
		if (is_screen_faded_out())
		{
			_set_weather_type(-702816767, true, true, false, 0f, false);
		}
		else
		{
			_set_weather_type(-702816767, true, true, true, 10f, false);
		}
	}
}

void func_936(bool bParam0)
{
	if (!does_particle_fx_looped_exist(iVar1651) && bParam0)
	{
		if (!func_168(iVar1517, 268435456))
		{
			iLocal_1654 = start_particle_fx_looped_at_coord("scr_mob2_fog_cem", func_1(8, 5), 0f, 0f, 0f, 1f, false, false, false, false);
			func_170(&uLocal_1520, 268435456);
		}
	}
	func_1491(0);
	func_1490(0);
	func_1004(iVar1999, 1, 0, 0, 0, 0, 0, 0);
	func_1004(iVar2000, 1, 0, 0, 0, 0, 0, 0);
	if (_is_imap_active(-800942395))
	{
		_remove_imap(-800942395);
	}
	if (!_is_imap_active(-741366935))
	{
		_request_imap(-741366935);
	}
}

void func_937()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_854[iVar0] = -1;
		Local_854[iVar0]->f_1 = -1;
		Local_854[iVar0]->f_2 = -1;
		iVar0++;
	}
}

int func_938(char[4] cParam0)
{
	func_1494();
	if (func_35(cParam0) == iLocal_241)
	{
		if (!is_entity_dead(Global_35) && is_ped_on_mount(Global_35))
		{
			_remove_ped_from_mount(Global_35, true, false);
			func_1309(cParam0, &iLocal_1649, func_230(4, 6), 1, "m_pedPlayerHorse", 0);
		}
	}
	else if (func_35(cParam0) == iLocal_243)
	{
	}
	else if (func_35(cParam0) == iLocal_247)
	{
		if (!is_entity_dead(bVar1638) && is_ped_on_mount(bVar1638))
		{
			_remove_ped_from_mount(bVar1638, true, false);
		}
		func_1309(cParam0, &bLocal_1650, func_230(5, 6), 1, "m_pedDutchHorse", 0);
		func_1309(cParam0, &bLocal_1651, func_230(5, 7), 1, "m_pedJohnHorse", 0);
	}
	else if (func_35(cParam0) == iLocal_248)
	{
		func_768(&(cParam0->f_7375), 2);
		func_1041(23, 1, 1, 1, 0);
		if (func_362(23))
		{
			func_1495(23);
		}
		if (!is_entity_dead(Global_35) && is_ped_on_mount(Global_35))
		{
			_remove_ped_from_mount(Global_35, true, false);
		}
		if (!is_entity_dead(bVar1638) && is_ped_on_mount(bVar1638))
		{
			_remove_ped_from_mount(bVar1638, true, false);
		}
		if (!is_entity_dead(bVar1639) && is_ped_on_mount(bVar1639))
		{
			_remove_ped_from_mount(bVar1639, true, false);
		}
		func_192(cParam0, bVar1639, 0);
		func_488(cParam0, bVar1639, 128);
		iVar0 = get_blip_from_entity(bVar1639);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		func_192(cParam0, bVar1638, 0);
		func_488(cParam0, bVar1638, 128);
		iVar0 = get_blip_from_entity(bVar1638);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		func_192(cParam0, bVar1640, 0);
		func_192(cParam0, bVar1641, 0);
		func_192(cParam0, bVar1642, 0);
		func_192(cParam0, bVar1641, 0);
		func_192(cParam0, bVar1644, 0);
		func_192(cParam0, bVar1643, 0);
	}
	return 1;
}

void func_939(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_105(cParam0, 2048);
}

int func_940(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_505(945612176))
	{
		func_473(945612176, 0, 0);
	}
	if (iVar0 == iLocal_241)
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
			{
				func_460(&(Local_14.f_83), 0);
				func_453(Global_35);
			}
		}
		if (!func_168(iVar1517, 512))
		{
			if (_does_anim_scene_exist(cParam0->f_7375.f_804))
			{
				if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
				{
					if (get_clock_hours() > 5 && get_clock_hours() < 21)
					{
						set_clock_time(20, 0, 0);
						pause_clock(false, 0);
						func_170(&uLocal_1520, 512);
					}
					else
					{
						set_clock_time(21, 0, 0);
						pause_clock(false, 0);
						func_170(&uLocal_1520, 512);
					}
				}
			}
		}
		else
		{
			func_1360(21, 0, 0, 0);
		}
		if (func_1496(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (func_479(Global_35, 0))
			{
				func_395(Global_35, func_230(4, 4), 2, 1073741824);
				func_1489(-668482597, 4000, 0, 1, 1, 0, 0, 0);
			}
		}
		if (func_1496(cParam0, bVar1638, 0, 0, 1, 1))
		{
			func_1309(cParam0, &iLocal_1649, func_230(4, 6), 1, "m_pedPlayerHorse", 0);
			func_1309(cParam0, &bLocal_1651, func_230(4, 7), 1, "m_pedJohnHorse", 0);
			func_1497(bVar1646, func_1(4, 6), 5f, 1);
			func_1497(bVar1648, func_1(4, 7), 5f, 1);
			func_395(bVar1638, func_230(4, 5), 2, 1073741824);
			force_ped_motion_state(bVar1638, -668482597, false, 1, true);
			open_sequence_task(&uLocal_1613);
			task_follow_waypoint_recording(false, sVar830, 0, 25608, -1, 0, 0, -1);
			if (!is_entity_dead(bVar1648))
			{
				task_mount_animal(0, bVar1648, 20000, -1, 1f, 1, 0, 0);
			}
			else
			{
				task_stand_still(0, -1);
			}
			close_sequence_task(iVar1610);
			task_perform_sequence(bVar1638, iVar1610);
			clear_sequence_task(&uLocal_1613);
		}
		if (func_1498(cParam0))
		{
			func_922(0, 0);
		}
	}
	else if (iVar0 == iLocal_243)
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
			{
				func_460(&(Local_14.f_29), 0);
			}
		}
		if (!func_168(iVar1515, 8388608) && !func_168(iVar1515, 16777216))
		{
			if (is_entity_in_volume(Global_35, Local_150.f_7, true, 0))
			{
				func_170(&uLocal_1518, 8388608);
			}
			else if (is_entity_in_volume(Global_35, Local_150.f_8, true, 0))
			{
				func_170(&uLocal_1518, 16777216);
			}
		}
		_0x140b3cb1d424a945(Global_35, 379542007);
		_0x72d4cb5db927009c(379542007, -1, 0);
		if (func_1496(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (func_479(Global_35, 0))
			{
				if (func_168(iVar1515, 8388608))
				{
					func_1499(get_entity_coords(&(Local_14.f_7[0]), true, false), 0);
					task_put_ped_directly_into_cover(Global_35, get_scripted_cover_point_coords(&(iLocal_1575[2])), -1, 0, 0f, 1, 0, &(iLocal_1575[2]), 0, 1, 0);
				}
				else if (func_168(iVar1515, 16777216))
				{
					func_1499(get_entity_coords(&(Local_14.f_7[1]), true, false), 0);
					task_put_ped_directly_into_cover(Global_35, get_scripted_cover_point_coords(&(iLocal_1575[3])), -1, 0, 0f, 1, 1, &(iLocal_1575[3]), 0, 1, 0);
				}
				_0x2208438012482a1a(Global_35, true, true);
			}
		}
		if (func_1496(cParam0, bVar1638, 0, 0, 1, 1))
		{
			if (func_479(bVar1638, 0))
			{
				if (func_168(iVar1515, 8388608))
				{
					func_395(bVar1638, func_230(1, 3), 2, 1073741824);
					task_put_ped_directly_into_cover(bVar1638, func_1(1, 3), -1, 0, 0f, 1, 1, &(iLocal_1575[3]), 0, 1, 0);
					iVar1 = _create_volume_sphere_with_custom_name(func_1(1, 3), 0f, 0f, 0f, 2f, 2f, 2f, "VOL_COMBAT_JOHNS_DEFENSIVE_AREA");
				}
				else if (func_168(iVar1515, 16777216))
				{
					func_395(bVar1638, func_230(1, 2), 2, 1073741824);
					task_put_ped_directly_into_cover(bVar1638, func_1(1, 2), -1, 0, 0f, 1, 0, &(iLocal_1575[2]), 0, 1, 0);
					iVar1 = _create_volume_sphere_with_custom_name(func_1(1, 2), 0f, 0f, 0f, 2f, 2f, 2f, "VOL_COMBAT_JOHNS_DEFENSIVE_AREA");
				}
				_0xfc3db99c8144cd81(bVar1638, iVar1, 1, 0, 0);
				_0x2208438012482a1a(bVar1638, true, false);
			}
		}
		if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
		{
			if (func_1500(cParam0) > 8500 && !func_168(iVar1523, 1))
			{
				func_170(&uLocal_1526, 1);
			}
			func_1501(cParam0);
		}
	}
	else if (iVar0 == iLocal_247)
	{
		func_1502(cParam0);
		if (!func_168(iVar1516, 16777216))
		{
			func_1309(cParam0, &bLocal_1651, func_230(5, 7), 1, "m_pedJohnHorse", 1);
			func_1309(cParam0, &bLocal_1650, func_230(5, 6), 1, "m_pedDutchHorse", 1);
			func_170(&uLocal_1519, 16777216);
		}
		if (!func_168(iVar1526, 1))
		{
			clear_area(func_1(5, 5), 100f, 56);
			func_170(&iLocal_1529, 1);
		}
		func_1503(1);
		if (is_ped_on_mount(Global_35))
		{
			_remove_ped_from_mount(Global_35, true, false);
		}
		if (func_903(bVar1646, func_1(5, 5), 1) > 1f)
		{
			func_1309(cParam0, &iLocal_1649, func_230(5, 5), 1, "m_pedPlayerHorse", 0);
		}
		if (func_1496(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1499(get_entity_coords(bVar1647, true, false), 1);
			Var2.f_4 = -1;
			Var2.f_8 = 2;
			Var2.f_9 = 1;
			Var2.f_10 = 1;
			Var2.f_11 = 1;
			Var2.f_13 = 1;
			Var2.f_14 = 2;
			Var2.f_15 = 2;
			Var2.f_16 = 3;
			Var2.f_19 = 3;
			Var2.f_20 = 1;
			Var2.f_21 = 3;
			Var2.f_22 = 3;
			Var2.f_3 = Global_35;
			Var2.f_14 = 2;
			Var2.f_15 = 2;
			_0x66f9eb44342bb4c5(bVar1639, &Var2);
			simulate_player_input_gait(player_id(), 1f, 2000, 0f, true, false);
		}
		if (func_1496(cParam0, bVar1639, 0, 0, 1, 1))
		{
			if (func_479(bVar1639, 0))
			{
				open_sequence_task(&uLocal_1613);
				task_follow_waypoint_recording(false, sVar843, 0, 0, -1, 0, 0, -1);
				task_mount_animal(0, bVar1647, 20000, -1, 1f, 1, 0, 0);
				close_sequence_task(iVar1610);
				task_perform_sequence(bVar1639, iVar1610);
				clear_sequence_task(&uLocal_1613);
				func_1504(&uLocal_1553, 37);
				_0x2208438012482a1a(bVar1639, false, false);
				if (!func_1505(cParam0, bVar1639, 128))
				{
					func_489(cParam0, bVar1639, 128);
				}
			}
		}
		if (func_1496(cParam0, bVar1638, 0, 0, 1, 1))
		{
			if (func_1502(cParam0))
			{
				if (func_479(bVar1638, 0))
				{
					open_sequence_task(&uLocal_1613);
					task_follow_nav_mesh_to_coord(0, func_1506(&(uLocal_1682[15]), "JohnMarston", "PL_IG22_JACK_ON_HORSE"), 1f, 20000, 0.75f, 1, func_1507(&(uLocal_1682[15]), "JohnMarston", "PL_IG22_JACK_ON_HORSE"));
					close_sequence_task(iVar1610);
					task_perform_sequence(bVar1638, iVar1610);
					clear_sequence_task(&uLocal_1613);
					func_1504(&uLocal_1552, 37);
					_0x2208438012482a1a(bVar1638, false, false);
				}
			}
		}
		if (func_1496(cParam0, bVar1640, 0, 0, 1, 1))
		{
			if (func_1502(cParam0))
			{
				if (func_479(bVar1640, 0))
				{
					open_sequence_task(&uLocal_1613);
					task_follow_nav_mesh_to_coord(0, func_1506(&(uLocal_1682[15]), "JackMarston", "PL_IG22_JACK_ON_HORSE"), 1f, 20000, 0.75f, 1, func_1507(&(uLocal_1682[15]), "JackMarston", "PL_IG22_JACK_ON_HORSE"));
					close_sequence_task(iVar1610);
					task_perform_sequence(bVar1640, iVar1610);
					clear_sequence_task(&uLocal_1613);
					func_1504(&uLocal_1554, 34);
					_0x2208438012482a1a(bVar1640, false, false);
					if (!func_1505(cParam0, bVar1640, 128))
					{
						func_489(cParam0, bVar1640, 128);
					}
				}
			}
		}
		if (func_1496(cParam0, &(Local_14.f_15[0]), cVar847, 0, 1, 1))
		{
			if (func_479(&(Local_14.f_15[0]), 0))
			{
				clear_ped_tasks(&(Local_14.f_15[0]), 1, 0);
				func_395(&(Local_14.f_15[0]), func_230(5, 2), 2, 1073741824);
				task_stand_still(&(Local_14.f_15[0]), -1);
				set_ped_keep_task(&(Local_14.f_15[0]), true);
			}
		}
		if (func_1496(cParam0, &(Local_14.f_15[1]), cVar848, 1478983280, 1, 1))
		{
			if (func_479(&(Local_14.f_15[1]), 0))
			{
				clear_ped_tasks(&(Local_14.f_15[1]), 1, 0);
				func_395(&(Local_14.f_15[1]), func_230(5, 3), 2, 1073741824);
				task_stand_still(&(Local_14.f_15[1]), -1);
				set_ped_keep_task(&(Local_14.f_15[1]), true);
			}
		}
		if (func_1498(cParam0))
		{
		}
	}
	else if (iVar0 == iLocal_248)
	{
		if (!func_168(iVar1517, 8388608))
		{
			if (has_anim_event_fired(bVar1647, 1662633531))
			{
				_0xcac43d060099ea72(bVar1647);
				func_170(&uLocal_1520, 8388608);
			}
		}
		if (!func_168(iVar1517, 16777216))
		{
			if (has_anim_event_fired(bVar1647, -186977424))
			{
				_0xc9151483cc06a414(bVar1647);
				func_170(&uLocal_1520, 16777216);
			}
		}
		if (func_1496(cParam0, bVar1639, "dutch", 0, 1, 1))
		{
			set_ped_config_flag(bVar1639, 167, false);
			func_1508(cParam0);
		}
		if (func_1496(cParam0, bVar1638, "JohnMarston", 0, 1, 1))
		{
			set_ped_config_flag(bVar1638, 167, false);
			func_266(cParam0, 1, bVar1638, 0, 0, 0, 0);
		}
		func_192(cParam0, bVar1639, 0);
		if (func_486(cParam0, bVar1639))
		{
			func_488(cParam0, bVar1639, 128);
		}
		iVar27 = get_blip_from_entity(bVar1639);
		if (does_blip_exist(iVar27))
		{
			remove_blip(&iVar27);
		}
		func_192(cParam0, bVar1638, 0);
		if (func_486(cParam0, bVar1638))
		{
			func_488(cParam0, bVar1638, 128);
		}
		iVar27 = get_blip_from_entity(bVar1638);
		if (does_blip_exist(iVar27))
		{
			remove_blip(&iVar27);
		}
		func_192(cParam0, bVar1640, 0);
		func_192(cParam0, bVar1641, 0);
		func_192(cParam0, bVar1642, 0);
		func_192(cParam0, bVar1641, 0);
		func_192(cParam0, bVar1644, 0);
		func_192(cParam0, bVar1643, 0);
	}
	return 1;
}

void func_941(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_105(cParam0, 1024);
}

int func_942(char[4] cParam0)
{
	switch (func_35(cParam0))
	{
		case 0:
			func_1509(cParam0, "MOB2_MAN", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 1:
			func_1509(cParam0, "MOB2_CEM_HORSE", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 2:
			func_1509(cParam0, "MOB2_INV", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 3:
			func_1509(cParam0, "MOB2_KILL", -1082130432, 0, 0, -1, -1, 0);
			if (!func_168(iVar1515, 8388608) && !func_168(iVar1515, 16777216))
			{
				func_170(&uLocal_1518, 8388608);
			}
			if (!func_168(iVar1523, 1))
			{
				func_170(&uLocal_1526, 1);
			}
			break;
		case 4:
			func_1509(cParam0, "MOB2_SRCH", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 5:
			func_1509(cParam0, "MOB2_ESC2", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 6:
			func_1509(cParam0, "MOB2_RTB", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 7:
			func_1509(cParam0, "MOB2_CEM_HORSE", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 25:
			if (!Global_1357549->f_1649)
			{
				return 0;
			}
			if (!func_1510(1, 0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_943(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_105(cParam0, 131072);
}

void func_944(char[4] cParam0)
{
	func_1511(cParam0);
	func_1512(cParam0);
	func_1513();
	func_1514(cParam0);
	func_1515(cParam0);
	func_1516(cParam0);
	func_1517(cParam0);
	func_1518(cParam0);
	func_1519(cParam0);
	if (!func_168(iVar1516, 268435456))
	{
		if (_get_number_of_references_of_script_with_name_hash(857750679) == 0)
		{
			func_173(1);
			func_170(&uLocal_1519, 268435456);
		}
	}
	func_1520(cParam0, func_35(cParam0));
	if (func_35(cParam0) == iLocal_241 || func_35(cParam0) == iLocal_242)
	{
		if (!func_964(cParam0))
		{
			func_1521();
		}
	}
	if (func_35(cParam0) < iLocal_243)
	{
		func_1522();
	}
	if (((func_35(cParam0) == iLocal_242 || func_35(cParam0) == iLocal_243) || func_35(cParam0) == iLocal_244) || func_35(cParam0) == iLocal_245)
	{
		func_1523();
	}
	if ((func_35(cParam0) == iLocal_243 || func_35(cParam0) == iLocal_244) || func_35(cParam0) == iLocal_245)
	{
		func_1524();
	}
	if (func_35(cParam0) == iLocal_240)
	{
		func_1525(cParam0);
	}
}

void func_945(char[4] cParam0)
{
	if (!func_25(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_123(cParam0, func_35(cParam0), 268435456))
	{
		return;
	}
	func_1526(cParam0);
}

void func_946(char[4] cParam0)
{
	if (!func_10(cParam0, 8388608))
	{
		if (func_164(cParam0, func_35(cParam0)) == 5 || func_164(cParam0, func_35(cParam0)) == 6)
		{
			if (!func_220())
			{
				if (func_920(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_227(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_947(char[4] cParam0)
{
	if (func_123(cParam0, func_35(cParam0), 8388608))
	{
		if (func_1527(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1528();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1529(cParam0, func_35(cParam0), 8388608);
		}
	}
}

void func_948(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_10(cParam0, 256))
	{
		return;
	}
	if (!func_10(cParam0, 1048576))
	{
		if (func_245() || func_56())
		{
			func_101(cParam0, 1048576);
		}
	}
	else if (!func_245() && !func_56())
	{
		func_916(cParam0, 1048576);
	}
	if (!func_10(cParam0, 134217728))
	{
		if ((func_10(cParam0, 1048576) && !func_123(cParam0, func_35(cParam0), 524288)) && !func_123(cParam0, func_35(cParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_101(cParam0, 134217728);
			}
		}
	}
	else if ((!func_10(cParam0, 1048576) || func_123(cParam0, func_35(cParam0), 524288)) || func_123(cParam0, func_35(cParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_916(cParam0, 134217728);
		}
	}
}

void func_949(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_123(cParam0, func_35(cParam0), 1) && !func_123(cParam0, func_35(cParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_950(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_123(cParam0, func_35(cParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_951(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = get_itemset_size(Local_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, Local_14));
		if (does_entity_exist(iVar3) && is_entity_dead(iVar3))
		{
			remove_from_itemset(iVar3, Local_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	cParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		cParam0->f_13179 = (get_itemset_size(Local_14) - 1);
	}
}

int func_952(char[4] cParam0)
{
	if ((func_22() != -1 || func_35(cParam0) == 25) || func_35(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_261(cParam0->f_5423[iVar0]))
		{
			func_491(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_953(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_134(iParam1);
	if (!func_1530(iVar0))
	{
		return false;
	}
	iVar1 = func_1531(iParam2);
	if (!func_1532(iVar1))
	{
		return false;
	}
	if (!func_1533(cParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(cParam0);
	Call_Loc(cParam0->f_1[iVar0][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

int func_954(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_21;
}

int func_955(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_956(char[4] cParam0)
{
	if (!func_22() == 0 || network_is_host_of_this_script())
	{
		func_227(&(cParam0->f_603));
	}
}

void func_957(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_134(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_958(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_28(&(cParam0->f_13109)))
	{
		func_29(&(cParam0->f_13109), 0);
	}
	else if (func_920(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_262(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_263(cParam0->f_5421))
		{
			iVar2 = func_264(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					bVar3 = func_1534(cParam0->f_5421, iVar1);
					if (!is_entity_dead(bVar3) && !_0xa0bc8faed8cfeb3c(bVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!is_entity_dead(iVar2) && is_entity_a_vehicle(iVar2)) && _is_draft_vehicle(get_vehicle_index_from_entity_index(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						bVar5 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar2), iVar4);
						if (!is_entity_dead(bVar5))
						{
							if (!_0xa0bc8faed8cfeb3c(bVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < get_itemset_size(Local_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, Local_14);
		iVar7 = _get_entity_from_item(iVar6);
		if (does_entity_exist(iVar7))
		{
			if (is_entity_a_ped(iVar7))
			{
				bVar8 = get_ped_index_from_entity_index(iVar7);
				if (!is_entity_dead(bVar8) && !_0xa0bc8faed8cfeb3c(bVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!is_entity_dead(iVar7) && is_entity_a_vehicle(iVar7)) && _is_draft_vehicle(get_vehicle_index_from_entity_index(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					bVar10 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar7), iVar9);
					if (!is_entity_dead(bVar10))
					{
						if (!_0xa0bc8faed8cfeb3c(bVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_959(char[4] cParam0)
{
	return func_920(&(cParam0->f_603));
}

bool func_960(char[4] cParam0)
{
	if ((func_122(cParam0, 4) || func_122(cParam0, 128)) && !func_104())
	{
		return false;
	}
	return true;
}

bool func_961(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_10(cParam0, -2147483648))
	{
		return true;
	}
	if (func_953(cParam0, iParam1, 4))
	{
		if (func_35(cParam0) != 25 && func_35(cParam0) != 26)
		{
			if (!func_10(cParam0, 512) && !func_122(cParam0, 4))
			{
				func_38(cParam0, func_36(iParam1), func_36(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_36(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_134(iParam2);
			}
		}
		func_1535(cParam0);
		if (func_1536(cParam0))
		{
			func_1537(cParam0);
		}
		if (func_123(cParam0, func_35(cParam0), 33554432) && func_10(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_916(cParam0, 524288);
		func_1538(&(cParam0->f_7375), 4);
		if (func_1527(cParam0))
		{
			func_142(cParam0, func_35(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1528();
		}
		return true;
	}
	return false;
}

void func_962(char[4] cParam0)
{
	func_1539(cParam0);
	if (func_123(cParam0, func_35(cParam0), 2))
	{
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	_set_milliseconds_per_game_minute(9999999);
}

bool func_963(char[4] cParam0, int iParam1)
{
	if (func_122(cParam0, 16384))
	{
		if (func_824(cParam0))
		{
			func_53(&(cParam0->f_10792));
			func_916(cParam0, 2097152);
			func_272(cParam0, 16384);
			func_105(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_10(cParam0, 4))
	{
		func_955(cParam0, iParam1);
		func_101(cParam0, 4);
	}
	Var0 = { func_1368(cParam0, iParam1) };
	if (func_123(cParam0, func_35(cParam0), 2))
	{
		if (func_10(cParam0, 2097152))
		{
			if (func_824(cParam0))
			{
				func_916(cParam0, 2097152);
				func_917(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_917(cParam0, Var0);
		}
	}
	else if (func_10(cParam0, 2097152))
	{
		if (func_824(cParam0))
		{
			func_916(cParam0, 2097152);
			func_1463(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_123(cParam0, func_35(cParam0), 2))
	{
		return func_917(cParam0, Var0);
	}
	return true;
}

bool func_964(char[4] cParam0)
{
	return func_1540(&(cParam0->f_7375));
}

void func_965(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1541(cParam0))
		{
			func_447(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1542(cParam0, cVar0);
			func_162(cParam0, 2);
		}
	}
}

int func_966(char[4] cParam0, int iParam1)
{
	if (((func_22() != -1 || func_35(cParam0) == 25) || func_35(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_123(cParam0, func_35(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_261(cParam0->f_5423[iVar1]))
		{
			if (func_1543(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1544(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_967(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1545(cParam0))
		{
			func_447(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1542(cParam0, cVar0);
			func_162(cParam0, 2);
		}
	}
}

void func_968(char[4] cParam0)
{
	switch (func_1546(&iVar0))
	{
		case 1:
			func_1547(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_197(iVar0) && iVar0 == func_14(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_969(char[4] cParam0, int iParam1)
{
	if (func_10(cParam0, 4194304))
	{
		return false;
	}
	if (!func_123(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_970(char[4] cParam0, int iParam1)
{
	if (func_10(cParam0, 16777216))
	{
		func_1462(cParam0);
		func_916(cParam0, 65536);
		return 0;
	}
	if (!func_123(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1368(cParam0, iParam1) };
	if (func_1548(cParam0, &Var0))
	{
		if (!func_10(cParam0, 65536))
		{
			func_101(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_971(char[4] cParam0, int iParam1)
{
	func_1549(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_232(cParam0, iParam1));
}

void func_972(char[4] cParam0, int iParam1)
{
	if (!func_123(cParam0, func_35(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_957(cParam0, iParam1, 2);
		func_136(cParam0, 0);
		func_137(cParam0, 0);
		func_101(cParam0, 8);
		func_916(cParam0, -2147483648);
		func_142(cParam0, func_35(cParam0), 67108864);
		func_916(cParam0, 4);
		func_916(cParam0, 8192);
		func_916(cParam0, 536870912);
		func_272(cParam0, 4);
		func_67(0);
		func_66(0);
		func_916(cParam0, 2);
		func_47();
		cParam0->f_5302 = 0;
		func_1550(cParam0);
		if ((func_37(cParam0) == 25 || func_37(cParam0) == 26) && func_84(32768))
		{
			func_387(cParam0, 524288);
		}
		if (func_22() == 0)
		{
			if (_0xb655db7582aec805(Global_35))
			{
				func_23(0);
				_0xf6262491c7704a63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1551(1, 1);
			}
		}
	}
}

void func_973(bool bParam0)
{
	if (!func_204(0, 0, 1) || bParam0)
	{
		iVar0 = func_1072();
		iVar1 = func_1075(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1552(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1552(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
		animpostfx_play("RespawnWithHonor");
		_0xf972f0ab16dc5260("RespawnWithHonor", 1, fVar3);
		_0xf972f0ab16dc5260("RespawnWithHonor", 2, fVar2);
		_0xf972f0ab16dc5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		animpostfx_play("RespawnMissionCheckpoint");
	}
}

bool func_974(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1553(bParam1, bParam2, bParam3);
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

var func_975(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1554(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1555(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1554(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_976(char[4] cParam0)
{
	func_170(&uLocal_1518, 1);
	func_475(&iLocal_1619);
	func_49(0, 0);
	if (func_35(cParam0) == iLocal_241)
	{
		iLocal_250 = 15;
	}
	else if (func_35(cParam0) == iLocal_246)
	{
		iLocal_278 = 12;
		func_136(cParam0, 2);
	}
	else if (!is_entity_dead(bVar1638))
	{
		_0x2b4ce170de09f346(bVar1638, 1718936990);
	}
	if (func_35(cParam0) == iLocal_245)
	{
		if (!func_1556(cParam0, "MOB2_JCPS", 1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_977(char[4] cParam0)
{
	func_1292(&uLocal_1518, 1);
	if (func_35(cParam0) == iLocal_241)
	{
		if (func_1356(cParam0) > 1)
		{
			if (!does_blip_exist(iVar1616))
			{
				iLocal_1619 = func_1557(408396114, func_1(4, 3), 1);
			}
		}
		iLocal_250 = 17;
	}
	if (func_35(cParam0) == iLocal_246)
	{
		if (func_1356(cParam0) > 1)
		{
			if (!does_blip_exist(iVar1616))
			{
				iLocal_1619 = func_1557(408396114, func_1(3, 2), 1);
				_blip_set_modifier(iVar1616, -1878373110);
			}
		}
		iLocal_278 = 4;
		func_136(cParam0, 0);
	}
	return true;
}

int func_978(char[4] cParam0)
{
	return 1;
}

void func_979(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		_0x1e017404784aa6a3(bParam0, iParam1);
		if (iParam1 == 1718936990)
		{
			_0x0d7fd6a55fd63aef(14, 3, 0);
			_0x0d7fd6a55fd63aef(19, 3, 0);
		}
		if ((iParam1 == -1560168768 || iParam1 == -656563589) || iParam1 == -813527099)
		{
			_0x0d7fd6a55fd63aef(25, 3, 1);
			_0x0d7fd6a55fd63aef(21, 3, 1);
			_0x0d7fd6a55fd63aef(14, 3, 1);
		}
	}
	else
	{
		_0x2b4ce170de09f346(bParam0, iParam1);
		if (iParam1 == -1560168768 || iParam1 == -656563589)
		{
			_0x660a8f876df1d4f8(25);
			_0x660a8f876df1d4f8(21);
			_0x660a8f876df1d4f8(14);
		}
	}
}

bool func_980(int iParam0)
{
	return iParam0 > -1;
}

bool func_981(int iParam0)
{
	if (!func_533(iParam0))
	{
		return false;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_982(int iParam0)
{
	if (!func_980(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_983(int iParam0)
{
	if (!func_980(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_984(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_980(iParam0))
		{
			return;
		}
	}
	func_1558(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_985(int iParam0, int iParam1, bool bParam2)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

void func_986(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_980(iParam0))
		{
			return;
		}
	}
	func_1558(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_987(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_980(iParam0))
	{
		return 0;
	}
	bVar0 = func_981(iParam0);
	if (func_479(bVar0, 0))
	{
		if (func_479(_get_rider_of_mount(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_982(iParam0)) || func_983(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(bVar0) && func_1559(player_ped_id(), bVar0, 1) < 10000f))
			{
				iVar1 = func_1560(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(bVar0))
					{
						set_entity_as_mission_entity(bVar0, true, true);
					}
					func_1561(iParam0);
					_0x7b204f88f6c3d287(func_1562(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1562(iParam0, 0));
					func_1563(iParam0);
				}
			}
			else
			{
				if (func_728(iParam0, 32768, 1))
				{
					iVar2 = func_1562(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&bVar0);
				}
				set_blocking_of_non_temporary_events(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_479((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_728(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1561(iParam0);
				_0x7b204f88f6c3d287(func_1562(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1562(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1561(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1564(iParam0, 0);
	return 1;
}

void func_988(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_989(char[4] cParam0, bool bParam1)
{
	func_1410(&(cParam0->f_7375), bParam1);
	func_1565(&(cParam0->f_10792), bParam1);
}

Vector3 func_990(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_991(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_992(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_993(int iParam0, int iParam1)
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

bool func_994(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_995(int iParam0, bool bParam1)
{
	if (!func_994(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1566(iParam0, 1);
	}
	else
	{
		func_1567(iParam0, 1);
	}
	func_1569(func_1568(iParam0), bParam1);
}

bool func_996(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_997(int iParam0, int iParam1)
{
	func_1570(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_998(int iParam0, int iParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_999(int iParam0, int iParam1)
{
	func_1571(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_1000(int iParam0, int iParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_1001(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_1002(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_1018(iVar0, 2))
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
		func_1572(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1003(int iParam0, bool bParam1)
{
	iVar0 = func_194(*iParam0);
	if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(bParam1), 0);
		return 1;
	}
	return 0;
}

void func_1004(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1573(iParam0, 0, 0);
	if (func_1574(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1575(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1576(iParam0, 1);
			}
			else
			{
				func_1577(iParam0, 1);
			}
		}
		else
		{
			func_1578(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1579())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1005()
{
	func_482(-939420910);
	func_482(-1187950766);
	func_482(356365161);
	func_482(753127042);
	func_482(-2038424081);
	func_482(1884271742);
	func_482(459290420);
}

void func_1006()
{
	func_482(704802028);
	func_482(588987611);
	func_482(2008888900);
	func_482(1649996811);
	func_482(227918160);
	func_482(168171957);
	func_482(1193080109);
	func_482(-491981251);
	func_482(-639037538);
	func_482(-618620429);
}

float func_1007(int iParam0, int iParam1)
{
	return func_466(iParam0, iParam1);
}

void func_1008(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1580();
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
	if (func_1581(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

void func_1009(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
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
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

int func_1010(int iParam0, int iParam1)
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

void func_1011(int iParam0, int iParam1, bool bParam2)
{
	if (!func_980(iParam0))
	{
		return;
	}
	func_1582(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_1012(var uParam0, int iParam1)
{
	func_1292(&(uParam0->f_64), iParam1);
}

void func_1013(var uParam0, int iParam1)
{
	func_170(&(uParam0->f_64), iParam1);
}

bool func_1014(int iParam0)
{
	if (!func_980(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_1015(int iParam0, bool bParam1)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1035(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1011(iParam0, 16, 0);
		}
	}
	func_1011(iParam0, 1, bParam1);
}

bool func_1016(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_980(iParam0))
		{
			return false;
		}
	}
	func_1558(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1017(int iParam0, var uParam1)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_1035(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_1583(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_1035(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_1035(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_1035(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_1035(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1584(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_569(iParam0));
	}
	if (does_blip_exist(*uParam1))
	{
		if (iVar0 != 0)
		{
			_blip_set_modifier(*uParam1, iVar0);
			if (iVar0 == -546708623)
			{
				_blip_set_modifier(*uParam1, 231194138);
			}
		}
		else
		{
			_set_blip_flash_style(*uParam1, iVar0);
		}
		if (bVar2 && !func_204(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_1035(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_1035(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_1035(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_331(iParam0, 0));
		}
	}
}

bool func_1018(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1019(int iParam0)
{
	iVar0 = func_494(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1585(iVar0);
}

int func_1020(int iParam0, int iParam1)
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
			func_1586(iVar2);
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

void func_1021()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1022(bool bParam0)
{
	if (func_22() == -1)
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

int func_1023(int iParam0)
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

void func_1024(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1025(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1026(int iParam0, int iParam1)
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
			func_1587((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1587(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_197(&(Global_1898164->f_1[0])))
	{
		func_209(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1027(int iParam0, int iParam1, bool bParam2)
{
	if (!func_512(iParam0))
	{
		return;
	}
	func_1588(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1028(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1029(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1030(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1031()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1032(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1589(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1033(bool bParam0, bool bParam1)
{
	if (func_22() == -1)
	{
		func_1590();
	}
	else
	{
		return;
	}
	func_1591();
	Global_40.f_9.f_14 = func_292();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1592())
		{
			func_378(Global_1310720->f_1);
		}
		else if (func_1593() == func_379(Global_36, 1) && func_1594() != 2)
		{
			func_378(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_378(Global_36);
		}
		func_1595(Global_36, &vVar0, &uVar4);
		if (!func_1592())
		{
			if (func_1596(vVar0, Global_36) < func_1596(Global_40.f_9.f_7, Global_36))
			{
				func_378(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_379(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1595(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_236(Global_1935630, 8192);
	}
	func_1597();
}

bool func_1034(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_261(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1035(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1036(int iParam0)
{
	func_986(iParam0, 36, 1);
}

int func_1037(int iParam0, bool bParam1)
{
	if (!func_533(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1598(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_1038(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_533(iParam0))
	{
		bVar1 = func_569(iParam0);
		if (!is_entity_dead(bVar1))
		{
			iVar0 = get_ped_max_health(bVar1);
			set_ped_config_flag(bVar1, 179, true);
			func_1599(iParam0);
		}
	}
	if (func_1016(iParam0, 5, 1))
	{
		set_ped_config_flag(func_569(iParam0), 137, true);
	}
}

void func_1039(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_984(iParam0, 50, 1);
		func_984(iParam0, 48, 1);
		func_984(iParam0, 49, 1);
		func_984(iParam0, 51, 1);
		func_984(iParam0, 52, 1);
		func_984(iParam0, 54, 1);
		func_984(iParam0, 55, 1);
	}
	else
	{
		func_986(iParam0, 50, 1);
		func_986(iParam0, 48, 1);
		func_986(iParam0, 49, 1);
		func_986(iParam0, 51, 1);
		if (bParam3)
		{
			func_986(iParam0, 54, 1);
		}
		else
		{
			func_984(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_986(iParam0, 52, 1);
			if (bParam3)
			{
				func_986(iParam0, 55, 1);
			}
		}
		else
		{
			func_984(iParam0, 52, 1);
			if (!bParam3)
			{
				func_984(iParam0, 55, 1);
			}
		}
	}
}

void func_1040(int iParam0, bool bParam1)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_569(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_569(iParam0), 204, false);
	}
}

void func_1041(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_533(iParam0))
	{
		return;
	}
	if (func_534(iParam0))
	{
		if (!func_265(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1016(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1037(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	bVar1 = func_569(iParam0);
	if (((does_entity_exist(bVar1) && func_1600(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(bVar1) && is_entity_attached(bVar1))
	{
		if (((is_ped_active_in_scenario(bVar1, 1) || _0x0c3cb2e600c8977d(bVar1, 1)) || is_ped_on_mount(bVar1)) || is_ped_in_any_vehicle(bVar1, false))
		{
			_0xf1c03a5352243a30(bVar1);
			clear_ped_tasks_immediately(bVar1, true, true);
		}
		detach_entity(bVar1, true, true);
	}
	if (bParam4)
	{
		func_986(iParam0, 2, 1);
	}
	else
	{
		func_1601(iParam0);
		func_986(iParam0, 1, 1);
	}
}

void func_1042(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_533(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1043(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

void func_1044(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_222(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1602(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!does_entity_exist(bVar7))
			{
			}
			else if (is_entity_a_mission_entity(bVar7) && !_0x88ad6cc10d8d35b2(bVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(bVar7))
				{
					set_entity_as_mission_entity(bVar7, true, true);
				}
				_0x0d0db2b6af19a987(&bVar7);
			}
		}
		iVar6++;
	}
}

void func_1045(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

bool func_1046(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

void func_1047(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1604(func_1603(255), 109029619));
	}
	else if (func_311())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1074();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1048(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_1049(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1604(func_1603(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_311())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1074())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1050(int iParam0)
{
	iParam0 = func_273(iParam0);
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

float func_1051(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1052(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1442(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1048(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1048(iParam0) + 1;
	fVar6 = func_1605(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1606(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1053(int iParam0)
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

void func_1054(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1055()
{
	if (func_345())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1056(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1607((Global_40.f_4283.f_325 + iParam0));
}

void func_1057(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1055())
	{
		func_725(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_725(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1058(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1059(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1060(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1061(int iParam0)
{
	func_1069(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1062(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1063(1);
	}
}

void func_1063(bool bParam0)
{
	if (bParam0)
	{
		func_1570(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1571(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1064(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -15;
	}
	return func_1608(iParam0);
}

bool func_1065(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_721(iParam1) || !func_721(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1066(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1067(int iParam0)
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

bool func_1068(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1069(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1609(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1070(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1071(int iParam0, int iParam1, bool bParam2)
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

int func_1072()
{
	iVar0 = func_575();
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

int func_1073(int iParam0)
{
	if (func_22() != -1)
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
	fVar1 = func_1552(absf(fVar1) < 1f, func_1552(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1074()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1075(int iParam0)
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

int func_1076()
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

void func_1077(int iParam0, bool bParam1, int iParam2)
{
	func_1610((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1611(iParam0);
}

void func_1078(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1612(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1079(bool bParam0)
{
	bVar3 = false;
	if (func_1613(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1614(iVar5, &iVar2, &iVar0))
			{
				if (!func_595(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1615(iVar2);
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
							if (func_614(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1072() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1072() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1616();
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

char* func_1080(int iParam0)
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

bool func_1081(int iParam0)
{
	return func_614(iParam0) == -427144552;
}

bool func_1082(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	if (func_616(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1087(iParam0, &uVar0, 1, 0, 0);
	}
	return func_354(iParam0, 1, 0);
}

void func_1083(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_614(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_621(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_124(iVar0))
	{
		if (func_22() == -1)
		{
			func_622(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_599(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_675(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1084(int iParam0, int iParam1)
{
	if (func_615(iParam0, 58855631))
	{
		func_1234(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1085(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	if (!func_623(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1022(bParam3), iParam0);
}

int func_1086(int iParam0, bool bParam1)
{
	if (func_627(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1022(bParam1), iParam0, 0);
}

bool func_1087(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1617(&iParam0);
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (!func_623(0))
	{
		bParam3 = true;
	}
	if (func_1081(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1217(0) };
			Var4.f_9 = -1591664384;
			if (!func_1110(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1111(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1218(iParam0, 1))
			{
				if (!func_1110(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1111(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1618(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1085(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1619(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1022(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1088(int iParam0, int iParam1)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_614(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_615(iParam0, 1399091007))
	{
		func_1151(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1089(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1620(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1621(&Var0, func_1217(0));
	}
	if (!func_1622(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1161(iVar14);
	return uVar15;
}

int func_1090()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1091(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1092(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	iVar0 = func_1623(iParam0);
	fVar1 = func_1624(iParam0);
	if ((Global_1347477->f_117 || !func_617(31)) || !func_1625(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1626(iVar0) >= 7)
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
	func_1627(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_725(_create_var_string(6, func_1628(iParam0), fVar1), "itemtype_textures", func_1629(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1093(int iParam0)
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

int func_1094(int iParam0, int iParam1)
{
	if (!func_1249(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1095(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_610() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1630(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1631(), 12);
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
			else if (func_1134() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1632(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1134(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1633(), 13);
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
			else if (func_1135() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1634(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1135(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1094(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1096(int iParam0, int iParam1, int iParam2)
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

bool func_1097(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1098(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1099(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1635(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_354(iVar2, 1, 0) || func_1637(func_1636(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1103(func_1635(iVar0))), func_1103(func_1635(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1134() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1638(iVar0)), func_1638(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1632() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1638(iVar0)), func_1638(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1638(iVar0)), func_1638(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1144(iParam3, func_1639(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1140(iVar2) - iParam7) >= func_1094(iParam3, func_1640(iVar0));
				}
				else
				{
					bVar1 = func_1140(iVar2) >= func_1094(iParam3, func_1640(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1140(iVar2) + iParam7) >= func_1094(iParam3, func_1640(iVar0));
			}
			else
			{
				bVar1 = func_1140(iVar2) >= func_1094(iParam3, func_1640(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1641(iVar2)), func_1641(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1642(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1643(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1643(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1135() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1644(iVar0)), func_1644(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1634() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1644(iVar0)), func_1644(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1644(iVar0)), func_1644(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1144(iParam3, func_1639(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1140(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1645(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1645(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1646(iVar2)), func_1646(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1100(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1633() >= 13)
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

bool func_1101(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_197(func_210(0)) && ((func_1647(0) == 1 || func_1647(0) == 8) || func_1647(0) == 6))
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

var func_1102(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1103(int iParam0)
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

bool func_1104(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1105(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1106(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1107(int iParam0)
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
			func_1648(1);
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
			func_1649(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1649(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1649(3);
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
			func_1650(1);
			break;
		case 34:
			func_1651(1);
			break;
		case 35:
			func_1652(1);
			break;
		case 36:
			break;
		case 37:
			func_1653(0);
			break;
		case 38:
			func_1654(0);
			break;
		case 39:
			func_1655(0);
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
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_732("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_332(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_732("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_332(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_732("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_332(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_732("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_332(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_22() == -1)
			{
				if (!func_1174(99217379) || func_1656(99217379) == 2110595215)
				{
					if (func_1074())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_354(iVar0, 1, 0))
					{
						func_668(iVar0, 1, 752097756);
					}
					func_647(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_22() == -1)
			{
				if (!func_354(1013902307, 1, 0))
				{
					func_668(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_22() == -1)
			{
				if (!func_354(1013902307, 1, 0))
				{
					func_668(1013902307, 1, 752097756);
				}
				if (!func_354(142640135, 1, 0))
				{
					func_668(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_22() == -1)
			{
				if (!func_354(786809402, 1, 0))
				{
					func_668(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_22() == -1)
			{
				if (!func_354(786809402, 1, 0))
				{
					func_668(786809402, 1, 752097756);
				}
				if (!func_354(-518019409, 1, 0))
				{
					func_668(-518019409, 1, 752097756);
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
			func_1657();
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

bool func_1108(int iParam0)
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

int func_1109(int iParam0, int iParam1)
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

bool func_1110(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1619(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1111(int iParam0, var uParam1, int iParam2)
{
	if (func_1658(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1112(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_595(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1022(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1113(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1659(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1221(*uParam1, &Var0, bParam6, 0))
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
	if (!func_623(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1022(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1114(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1660(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1115(int iParam0)
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
	iVar2 = func_292();
	func_341(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1116(int iParam0)
{
	if (func_1661(iParam0))
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

bool func_1117(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1118(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1119(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_617(50))
			{
				if (!func_617(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_617(51))
			{
				if (!func_617(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1120(int iParam0, int iParam1, var uParam2)
{
	if (!func_595(iParam1, 0))
	{
		return false;
	}
	if (func_614(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_22() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_619(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_693(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_615(iParam1, 866047851))
	{
		iVar5 = func_694(iVar4, 1);
		if (func_1662(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_619(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_615(iParam1, -1638171711))
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
			if (func_1663(1868067663, &uVar0))
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
				iVar10 = func_1664(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1664(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @777; //curOff = 584
				iVar3 = func_619(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_615(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1665(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1121()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1122()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1123()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_354(func_1666(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1124(int iParam0)
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

bool func_1125(int iParam0, int iParam1)
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
	if (func_354(iVar0, 1, 0) && func_354(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1126(int iParam0)
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

bool func_1127(int iParam0, int iParam1)
{
	iVar0 = func_1667(iParam0);
	if (iVar0 != -15)
	{
		func_341(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_722(iVar0, 1);
	}
	return false;
}

void func_1128(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1129(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1130(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1131(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_1132(int iParam0)
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
	iVar1 = func_1140(iVar9);
	iVar2 = func_1140(iVar10);
	iVar3 = func_1140(iVar11);
	iVar5 = func_1141(iVar9);
	iVar6 = func_1141(iVar10);
	iVar7 = func_1141(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1140(iVar12);
		iVar8 = func_1141(iVar12);
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

void func_1133(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1134()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1668(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1135()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1136(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1645(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1645(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1645(iVar0))
		{
			*sParam2++;
		}
		if (func_1645(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1645(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1645(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1645(iVar0))
		{
			*sParam2++;
		}
		if (func_1645(iVar1))
		{
			*sParam2++;
		}
		if (func_1645(iVar0) && func_1645(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1645(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1645(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1645(iVar0))
		{
			*sParam2++;
		}
		if (func_1645(iVar1))
		{
			*sParam2++;
		}
		if (func_1645(iVar2))
		{
			*sParam2++;
		}
		if ((func_1645(iVar0) && func_1645(iVar1)) && func_1645(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1645(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1645(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1645(iVar0))
		{
			*sParam2++;
		}
		if (func_1645(iVar1))
		{
			*sParam2++;
		}
		if (func_1645(iVar2))
		{
			*sParam2++;
		}
		if (func_1645(iVar3))
		{
			*sParam2++;
		}
		if (((func_1645(iVar0) && func_1645(iVar1)) && func_1645(iVar2)) && func_1645(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1137(int iParam0)
{
	if (!func_1669(iParam0))
	{
		func_1671(func_1670(iParam0));
	}
}

int func_1138()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1669(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1139(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1140(iVar9);
	iVar2 = func_1140(iVar10);
	iVar3 = func_1140(iVar11);
	iVar5 = func_1141(iVar9);
	iVar6 = func_1141(iVar10);
	iVar7 = func_1141(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1140(iVar12);
		iVar8 = func_1141(iVar12);
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

int func_1140(int iParam0)
{
	if (func_354(iParam0, 1, 0))
	{
		iVar0 = func_599(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1141(int iParam0)
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

int func_1142(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1143(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1144(int iParam0, int iParam1)
{
	if (!func_1249(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1145(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1144(iParam1, 5) || iParam0 == func_1144(iParam1, 6)) || iParam0 == func_1144(iParam1, 7)) || iParam0 == func_1144(iParam1, 8)) || iParam0 == func_1144(iParam1, 9))
	{
		func_1136(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_611(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_613(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1146(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1144(iParam1, 5) || iParam0 == func_1144(iParam1, 6)) || iParam0 == func_1144(iParam1, 7)) || iParam0 == func_1144(iParam1, 8)) || iParam0 == func_1144(iParam1, 9))
	{
		if (func_1136(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_611(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_613(51, 0, 0, iVar0, func_1094(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_611(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_613(51, 0, 0, iVar0, func_1094(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1147()
{
	if (func_198((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1148(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1149(int iParam0)
{
	if (!func_1672(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1150(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1151(int iParam0, int iParam1, var uParam2)
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

bool func_1152(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1673();
	if (iParam2 == 39)
	{
		Var0 = { func_706(iParam0, 1, 0) };
		iParam2 = func_694(func_707(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_615(iParam0, 866047851) && func_1662(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1154(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1674(func_1222(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1675(iParam2);
	func_1676(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1203(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1203(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1209(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1677(iParam0, iParam2, iParam1, func_22() != -1);
	if (bParam4)
	{
		func_1678(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1678(&(Global_1946804->f_1378), 1, 0);
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
				func_1398(func_1222(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1153(bool bParam0, bool bParam1, bool bParam2)
{
	func_1679(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1154(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1155()
{
	func_1680(&(Global_1946804->f_2776));
	func_1681(32768);
	func_1398(1108822547, 8, 6);
}

int func_1156(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_694(iParam0, 1);
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

void func_1157(int iParam0)
{
	if (func_1682(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1683(Var0);
}

void func_1158(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1683(Var0);
}

bool func_1159(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1022(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1160(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1161(int iParam0)
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

float func_1162()
{
	if (func_1684())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1685(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1685(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1686();
	fVar2 = func_1687();
	fVar3 = func_1688();
	fVar4 = func_1689();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1690()));
	fVar7 = (func_1685(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1691(3, round((to_float(iVar8) * fVar10)), 0);
	func_1692(3, fVar9, fVar9 > 100f);
	return func_1693(fVar7, -100f, 100f);
}

float func_1163()
{
	if (func_1684())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1685(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1685(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1686();
	fVar2 = func_1687();
	fVar3 = func_1688();
	fVar4 = func_1689();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1690()));
	fVar7 = (func_1685(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1691(2, round((to_float(iVar8) * fVar10)), 0);
	func_1692(2, fVar9, fVar9 > 100f);
	return func_1693(fVar7, -100f, 100f);
}

float func_1164()
{
	if (func_1684())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1685(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1694())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1695())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1685(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1686();
	fVar2 = func_1687();
	fVar3 = func_1688();
	fVar4 = func_1689();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1690()));
	fVar7 = (func_1685(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1691(1, round((to_float(iVar8) * fVar10)), 0);
	func_1692(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1685(0);
	}
	return func_1693(fVar7, -100f, 100f);
}

bool func_1165(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1166(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1167(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_595(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1087(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_623(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1022(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1168(int iParam0, bool bParam1)
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
				return func_1696();
			}
			break;
	}
	return 0;
}

int func_1169(int iParam0)
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

bool func_1170(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1171(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1170(iParam0))
	{
		return;
	}
	if (func_1697(iParam0))
	{
		return;
	}
	if (!func_1698(iParam0))
	{
		func_1699(iParam0, 1, 0);
	}
	iVar0 = func_1700(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1701(iParam0, 512))
		{
			func_705(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_221() && !bParam1) && !func_204(0, 0, 1))
	{
		func_734(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1702(iParam0, 6);
	if (bParam2)
	{
		if (!func_204(0, 0, 1))
		{
			func_374(1, 4);
		}
	}
}

bool func_1172(int iParam0, bool bParam1)
{
	return func_1168(iParam0, 0) < func_1703(iParam0, bParam1);
}

bool func_1173(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_619(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1174(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_694(iParam0, 1)] != &Global_1946804->f_57[func_694(iParam0, 1)];
}

void func_1175(int iParam0, int iParam1)
{
	if (func_615(iParam1, 130796156))
	{
		func_1704(iParam1, 0);
	}
	else if (func_615(iParam1, 930141731))
	{
		func_1704(iParam1, 1);
		func_1705(iParam0);
	}
}

void func_1176(var uParam0, int iParam1)
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

int func_1177(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1706(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1707(uParam2, iParam0, Var1);
	return 1;
}

int func_1178(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1179(int iParam0)
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

int func_1180(int iParam0)
{
	if (!func_1708(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1181()
{
	return !&Global_1911774;
}

void func_1182(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1183(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1184(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1185(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1186(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_22() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1709(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1187(int iParam0, int iParam1)
{
	if (func_22() != -1)
	{
		return false;
	}
	if (func_1709(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1188(bool bParam0)
{
	if (bParam0)
	{
		func_325(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1189();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1710(2032023096);
		func_328(-615217896);
		func_690(655868243, 1, 1, -142743235, 1);
		func_1712(146323340, func_1711());
		Var0 = { func_1450() };
		if (func_1713(&Var0) == -1387633835)
		{
			func_1714(&Var0);
			func_1715(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1716(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1443(iVar6) == 2010625508)
			{
				func_1717(iVar6, iVar7);
				func_1718(iVar6, iVar8);
				func_1719(iVar6, iVar9);
				func_1720(iVar6, 0);
				if (func_1721(iVar6))
				{
					func_1722(iVar6);
				}
				iVar10 = func_1723(iVar8);
				func_1724(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1189()
{
	if (!func_1725(-1898635967, func_1711(), 1))
	{
		return 0;
	}
	if (func_345())
	{
		if (!func_1725(146323340, func_1711(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1190()
{
	func_339(34411519);
	func_339(834124286);
	func_339(-570967010);
}

void func_1191(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_325(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_325(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_690(-1080874779, 3, 1, -142743235, 1);
		func_690(-223790555, 3, 1, -142743235, 1);
		func_690(1566032147, 3, 1, -142743235, 1);
		func_690(891311852, 5, 1, -142743235, 1);
		func_690(-1353737667, 5, 1, -142743235, 1);
		func_690(-330313895, 5, 1, -142743235, 1);
		func_690(-2051332199, 5, 1, -142743235, 1);
		func_690(1237770824, 5, 1, -142743235, 1);
		func_690(-1795542128, 3, 1, -142743235, 1);
		func_690(-1757588258, 3, 1, -142743235, 1);
		func_690(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1716(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1443(iVar0) == 153881023)
			{
				func_1717(iVar0, iVar1);
				func_1718(iVar0, iVar2);
				func_1719(iVar0, iVar3);
				func_1720(iVar0, 0);
				if (func_1721(iVar0))
				{
					func_1722(iVar0);
				}
				iVar4 = func_1723(iVar2);
				func_1724(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1189();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1192(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1726(iParam0);
	if (bParam3)
	{
		func_733(iParam0, sParam1, iParam2);
	}
}

bool func_1193(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1194(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1195()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1159("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1160(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1111(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1161(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1161(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1196(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1727(Param1, iParam5, &Var5, 0))
	{
		func_1113(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1167(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1728(Var19, 1);
}

bool func_1197(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1620(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1621(&Var0, func_1217(0));
	}
	if (!func_1622(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1160(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1113(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1161(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1198(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_706(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1729(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1112(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1113(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1199(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_615(iParam0, 606799272))
		{
			func_1730(iParam0, iParam1);
		}
		if (func_615(iParam0, -1112814642) && func_615(iParam0, -1697809989))
		{
			func_643(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1200(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1731(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_619(iParam0) != -999503751)
		{
			func_1732(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_619(iParam0) != -999503751)
	{
		func_1732(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1733(iParam0, 1);
	return 1;
}

void func_1201()
{
	if (func_22() == -1)
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

void func_1202(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1734(0);
	}
	if (bParam0)
	{
		func_1214(8);
		func_1214(512);
	}
	else
	{
		func_1214(8);
		func_1214(16);
	}
}

void func_1203(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1204(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_696();
	}
	if (func_22() == -1)
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

int func_1205(int iParam0)
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

void func_1206(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1735(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1222(iVar0, 1);
			if (func_1395(iVar0, iParam1))
			{
				vVar4 = { func_698(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1394(iVar7, 4))
				{
					func_1398(iVar7, 4, 6);
				}
			}
			else
			{
				func_1397(iVar7, 4, 6);
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

bool func_1207(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_22() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1736(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1208(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1209(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_619(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1395(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1676(iVar1, iVar3);
		}
	}
	if (func_1174(-1586649372) && func_1395(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1676(iVar1, iVar3);
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
						func_1676(iVar1, iVar3);
					}
				}
			}
			func_1737(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1737(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1676(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1737(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1676(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1676(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1737(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1737(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1676(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1737(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1676(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1676(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_619(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1676(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1665(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_619(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1676(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_615(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1676(iVar1, iVar3);
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
						func_1676(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1665(&(Global_1946804->f_1497.f_1[iVar1])) || func_615(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1676(iVar1, iVar3);
					}
				}
			}
			switch (func_619(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_619(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1676(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_619(&(uParam0->f_1[iVar1])) || func_615(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1676(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1210(int iParam0, int iParam1)
{
	if (func_22() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1211(int iParam0)
{
	if (func_22() != -1)
	{
		if (func_1165(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1165(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1212(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1165(iParam0, 65536) && !func_1165(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1165(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1165(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1213()
{
	return Global_1905944->f_5694;
}

void func_1214(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1215(struct<4> Param0)
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
			if (func_1738(Param0))
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
			func_1739(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1214(8);
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
			if (func_1738(Param0))
			{
				return;
			}
			func_1739(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1214(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1158(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1216(bool bParam0)
{
	return func_1112(1328661203, func_1740(), -1591664384, bParam0);
}

struct<4> func_1217(bool bParam0)
{
	iVar0 = func_1022(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1112(923904168, func_1216(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1112(923904168, func_1216(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1112(923904168, func_1216(bParam0), -740156546, 0);
}

bool func_1218(int iParam0, bool bParam1)
{
	if (func_619(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_617(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1219(bool bParam0)
{
	iVar0 = func_1022(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1112(271701509, func_1216(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1112(271701509, func_1216(bParam0), 12999093, 0);
}

bool func_1220(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_619(iParam0);
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

bool func_1221(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1022(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1222(int iParam0, int iParam1)
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

int func_1223(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1224(int iParam0, int iParam1)
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

void func_1225(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1226(int iParam0, int iParam1)
{
	iVar0 = func_714(*iParam0);
	iVar1 = func_713(*iParam0);
	if (iParam1 < 1 || iParam1 > func_719(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1227(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1228(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1229(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1230(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1231(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1232(int iParam0)
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

bool func_1233(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_22() == -1)
	{
		if (func_1081(iParam0))
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

int func_1234(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_595(iParam0, 0))
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

int func_1235(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1617(&iParam0);
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	if (!func_623(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1085(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1619(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1022(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1236(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_615(iParam0, -5284486))
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
		if (func_1741(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_676(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_679(iVar62, iVar61);
					if (func_595(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1236(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1236(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1741(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1237(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1742(1);
}

void func_1238(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1743(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_331(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1743(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_331(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1239()
{
	return Global_40.f_4283.f_325;
}

bool func_1240(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_22() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1241(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1242(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1243(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1244(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1245(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1246(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_406();
	bVar1 = false;
	if (bVar0 && !func_1744(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1744(37)) && !func_1744(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1744(43)) && !func_1744(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1444(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1444(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1247()
{
	return Global_40.f_1095.f_3054;
}

bool func_1248(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

bool func_1249(int iParam0, var uParam1)
{
	if (!func_1745(iParam0))
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

int func_1250()
{
	if (func_406())
	{
		if (!func_1744(3))
		{
			return func_1746(43);
		}
		if (func_1744(38) && !func_1744(43))
		{
			return func_1747(8);
		}
	}
	return 0;
}

bool func_1251(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1748(iParam0));
}

Vector3 func_1252(int iParam0, int iParam1)
{
	func_1249(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		_datafile_get_vector(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1253(int iParam0, int iParam1)
{
	if (_get_bounty_for_player(player_id()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_993(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1249(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1749(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1254(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1750(iParam0);
	if (func_505(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1255(int iParam0)
{
	if (!func_1249(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (_datafile_get_bool(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_1256(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1751(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1752(5))
	{
		if (func_1753(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1437(vParam0);
	if (bParam6)
	{
		iVar1 = func_379(vParam0, 1);
		if (func_118(iVar1) || func_1754(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1755(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1756())
	{
		if (func_1757(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1758(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_379(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1759(iParam3, iParam4))
	{
		return false;
	}
	if (func_1760(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1761(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_406())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1762(vParam0, bParam10) || func_1763(vParam0, bParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

int func_1257(vector3 vParam0)
{
	iVar0 = func_1764(vParam0, 0f, 0f, 0, 2);
	return func_1764(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1258(int iParam0)
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

char* func_1259(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_35)
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
	iVar0 = get_entity_model(bParam0);
	return func_1406(iVar0);
}

char* func_1260(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1765(iVar0);
}

char* func_1261(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_1262(char[4] cParam0, int iParam1)
{
	iVar0 = func_134(iParam1);
	if (!func_1530(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 66601;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1263(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_134(iParam1);
	if (func_1530(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1264(int iParam0)
{
	iLocal_249 = iParam0;
}

void func_1265(int iParam0, int iParam1, bool bParam2)
{
	func_1573(iParam0, 0, 0);
	if (func_1574(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_1266(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

int func_1267(char[4] cParam0)
{
	return func_1766(&(cParam0->f_10792));
}

void func_1268(char[4] cParam0, char[4] cParam1)
{
	func_1767(&(cParam0->f_7375), cParam1);
	func_387(cParam0, 33554432);
}

void func_1269(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			func_1509(cParam0, "MOB2_MAN", -1082130432, 0, 0, -1, -1, 0);
			func_137(cParam0, 51);
			break;
		case 1:
			func_1556(cParam0, "MOB2_MANSHRY1", 0, 0, 0);
			func_137(cParam0, -1);
			break;
		case 2:
			if (func_1556(cParam0, "MOB2_DENTER", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 3:
			if (func_1556(cParam0, "MOB2_HANDSUP", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1270(char[4] cParam0)
{
	func_1768(cParam0, 0, 30f, 75f, 0, 0, 1, 422991367);
	func_1769(cParam0);
	func_1770(cParam0, "MOB2_DFAIL", "MOB2_FAIL_LAW", &iLocal_1642, 0, 0);
}

bool func_1271(char[4] cParam0)
{
	return cParam0->f_598;
}

bool func_1272(char[4] cParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!func_168(iVar1523, 2))
			{
				func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1637, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1638, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1648, cVar846, 0, 0, 0, 0);
				func_170(&uLocal_1527, 2);
			}
			if (!func_168(iVar1523, 4))
			{
				if (func_1771(cParam0, bVar1610, iVar1983, "p_doorMansionGate01x^1") && func_1771(cParam0, bVar1611, iVar1984, "p_doorMansionGate01x"))
				{
					func_170(&uLocal_1527, 4);
					return true;
				}
			}
			break;
		case 1:
			if (!func_168(iVar1523, 2))
			{
				func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1637, 0, 0, 0, 0, 0);
				func_170(&uLocal_1527, 2);
			}
			if (!func_168(iVar1523, 4))
			{
				func_170(&uLocal_1527, 4);
				return true;
			}
			break;
		case 2:
			if (!func_168(iVar1523, 2))
			{
				func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1637, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1638, 0, 0, 0, 0, 0);
				func_153(cParam0, bVar1639, 0, 0, 0, 0, 0);
				func_153(cParam0, &(Local_14.f_15[0]), cVar846, 0, 0, 0, 1);
				func_153(cParam0, &(Local_14.f_15[1]), cVar847, 0, 0, 0, 1);
				if (does_entity_exist(&(Local_14.f_15[1])))
				{
					_give_weapon_to_ped_2(&(Local_14.f_15[1]), 1845102363, 6, true, false, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				func_1772(-1, 1);
				func_434(cParam0, &(Local_14.f_90[1]), "p_cigarlit01x", 0, 0, 0, 0);
				func_434(cParam0, &(Local_14.f_90[0]), "p_pebble01x", 0, 0, 0, 0);
				func_170(&uLocal_1527, 2);
			}
			if (!func_168(iVar1523, 4))
			{
				func_170(&uLocal_1527, 4);
				return true;
			}
			break;
		case 3:
			func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1637, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1638, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1639, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1645, "Horse_01", 0, 0, 0, 0);
			func_153(cParam0, bVar1646, "Horse_01^1", 0, 0, 0, 0);
			func_153(cParam0, bVar1647, "Horse_01^2", 0, 0, 0, 0);
			func_153(cParam0, bVar1640, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1641, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1644, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1643, 0, 0, 0, 0, 0);
			func_153(cParam0, bVar1642, 0, 0, 0, 0, 0);
			return true;
		default:
			return true;
	}
	return false;
}

void func_1273(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_134(iParam1)]->f_12 = 1;
}

void func_1274(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_134(iParam2);
	if (!func_1530(iVar0))
	{
		return;
	}
	iVar1 = func_1531(iParam3);
	if (!func_1532(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1275(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_134(iParam1)]->f_21 = iParam2;
}

bool func_1276(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		vVar0 = { func_1(8, 6) };
		if (func_905(cParam0, 0, &iLocal_1642, 0, vVar0.x, vVar0.y, vVar0.z, 0, 0, 0, 1, 0, 1, 0))
		{
			return true;
		}
	}
	else
	{
		func_1773(cParam0, bVar1638);
		func_266(cParam0, 0, bVar1638, 0, 1, 0, 1);
		return true;
	}
	return false;
}

void func_1277(int iParam0)
{
	iLocal_250 = iParam0;
}

void func_1278(int iParam0)
{
	Global_1357516 = iParam0;
	disable_control_action(0, -209515122, false);
}

void func_1279(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			func_1509(cParam0, "MOB2_CEM_HORSE", -1082130432, 0, 0, -1, -1, 0);
			func_1774();
			func_137(cParam0, 1);
			break;
		case 1:
			if (is_ped_on_mount(iVar1638))
			{
				if (func_1556(cParam0, "MOB2_JGO", 0, 0, 0))
				{
					func_137(cParam0, -1);
				}
			}
			break;
		case 2:
			func_1509(cParam0, "MOB2_FL_JN", -1082130432, 0, 0, -1, -1, 0);
			func_449();
			func_137(cParam0, -1);
			break;
		case 3:
			if (func_1556(cParam0, "MOB2_JMNT", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 10:
			if (func_1556(cParam0, "MOB2_JBNT1", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
	}
}

void func_1280(char[4] cParam0)
{
	func_1775(cParam0);
	func_1769(cParam0);
	func_1776(cParam0);
	func_1777(cParam0);
	func_1778();
}

bool func_1281(bool bParam0, bool bParam1, bool bParam2)
{
	if (does_entity_exist(bParam0) && !is_entity_dead(bParam0))
	{
		if (does_entity_exist(bParam1) && !is_entity_dead(bParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(bParam0, true) && get_mount(bParam0) == bParam1);
			}
			else
			{
				return (is_ped_on_mount(bParam0) && get_mount(bParam0) == bParam1);
			}
		}
	}
	return false;
}

void func_1282(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (does_entity_exist(bParam0))
	{
		if (!is_ped_injured(bParam0))
		{
			if (is_waypoint_playback_going_on_for_ped(bParam0, 0))
			{
				if (bParam4)
				{
					waypoint_playback_override_speed(bParam0, fParam1, iParam2, iParam3, 0);
				}
				set_enable_speed_restrain_for_waypoint_recording_leader(bParam0, 1);
				set_up_speed_restrain_information_for_player_follower(bParam0, iParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (is_ped_on_mount(player_ped_id()))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
}

int func_1283(char[4] cParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(bParam1))
	{
		return iVar0;
	}
	bVar1 = func_486(cParam0, bParam1);
	bVar2 = (is_entity_a_ped(bParam1) && func_483(get_ped_index_from_entity_index(bParam1)));
	if (bVar2)
	{
		iVar3 = func_484(get_ped_index_from_entity_index(bParam1));
	}
	if (bVar1)
	{
		func_489(cParam0, bParam1, 128);
		if (bParam4)
		{
			func_489(cParam0, bParam1, 1024);
		}
	}
	if (is_entity_a_ped(bParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(bParam1);
		if (bVar2)
		{
			func_1779(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_486(cParam0, bParam1) && does_blip_exist(iVar0))
		{
			_blip_set_modifier(iVar0, -546708623);
			if (bParam5)
			{
				_blip_set_modifier(iVar0, 231194138);
			}
		}
		else
		{
			if (!does_blip_exist(iVar0))
			{
				iVar0 = _blip_add_for_entity(iParam3, bParam1);
			}
			_blip_set_modifier(iVar0, -546708623);
			if (bParam5)
			{
				_blip_set_modifier(iVar0, 231194138);
			}
		}
	}
	if (bVar1)
	{
		if (func_490(cParam0, bParam1, &iVar4))
		{
			func_491(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_492(iVar3);
	}
	return iVar0;
}

bool func_1284(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(bParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(bParam0, iParam1, bParam2, iParam3);
}

bool func_1285(bool bParam0)
{
	if (is_ped_injured(bParam0))
	{
		return false;
	}
	return is_ped_on_mount(bParam0);
}

float func_1286(var uParam0)
{
	if (!func_28(uParam0))
	{
		return 0f;
	}
	if (func_516(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_567() - uParam0->f_1);
}

bool func_1287()
{
	return func_1780(1);
}

bool func_1288()
{
	if (!func_1781(-1, 1))
	{
		return false;
	}
	if (!func_1782(-1, 1))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!is_entity_dead(&(Local_14.f_52[iVar0])))
		{
			clear_ped_tasks(&(Local_14.f_52[iVar0]), 1, 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_52[iVar0]), true);
			set_ped_can_be_targetted(&(Local_14.f_52[iVar0]), false);
			task_stand_still(&(Local_14.f_52[iVar0]), -1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(Local_14.f_62[iVar0])))
		{
			clear_ped_tasks(&(Local_14.f_62[iVar0]), 1, 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_62[iVar0]), true);
			set_ped_can_be_targetted(&(Local_14.f_62[iVar0]), false);
			task_stand_still(&(Local_14.f_62[iVar0]), -1);
		}
		iVar0++;
	}
	return true;
}

void func_1289(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_168(iVar1516, 131072))
		{
			func_1004(iVar1990, 1, 0f, 0, 0, 0, 0, 0);
			func_1004(iVar1991, 1, 0f, 0, 0, 0, 0, 0);
			_0x3a77dae8b4fd7586(iVar1990, 1);
			_0x3a77dae8b4fd7586(iVar1991, 1);
			func_170(&uLocal_1520, 131072);
		}
	}
	else
	{
		if (bParam1)
		{
			func_1004(iVar1991, 0, -1f, 1, 1, 0, 0, 0);
			func_1004(iVar1990, 0, 1f, 0, 1, 0, 0, 0);
		}
		else
		{
			func_1004(iVar1991, 0, 0f, 0, 1, 0, 0, 0);
			func_1004(iVar1990, 0, 0f, 0, 1, 0, 0, 0);
		}
		_0x3a77dae8b4fd7586(iVar1990, 1);
		_0x3a77dae8b4fd7586(iVar1991, 1);
		func_1292(&uLocal_1520, 131072);
	}
}

void func_1290(char[4] cParam0)
{
	if (func_35(cParam0) == iLocal_241)
	{
		func_1783(func_230(4, 4));
		func_1784(&iLocal_1641, 1, func_230(4, 5), 1, 1);
		func_1784(&iLocal_1642, 0, func_230(4, 9), 1, 1);
	}
	else if (func_35(cParam0) == iLocal_242)
	{
		func_1783(func_230(0, 2));
		func_1784(&iLocal_1641, 1, func_230(0, 3), 1, 0);
	}
	else if (func_35(cParam0) == iLocal_243)
	{
		func_1783(func_230(1, 2));
		func_1784(&iLocal_1641, 1, func_230(1, 3), 1, 1);
	}
	else if (func_35(cParam0) == iLocal_244)
	{
		func_1783(func_230(2, 0));
		func_1784(&iLocal_1641, 1, func_230(2, 1), 1, 1);
	}
	else if (func_35(cParam0) == iLocal_245)
	{
		func_1783(func_230(7, 0));
		func_1784(&iLocal_1641, 1, func_230(7, 1), 1, 0);
	}
	else if (func_35(cParam0) == iLocal_246)
	{
		func_1783(func_230(3, 0));
		func_1784(&iLocal_1641, 1, func_230(3, 1), 1, 0);
	}
	else if (func_35(cParam0) == iLocal_247)
	{
	}
	if (func_35(cParam0) == iLocal_240)
	{
		func_1309(cParam0, &bLocal_1651, func_230(4, 7), 1, "m_pedJohnHorse", 0);
	}
	else if (func_35(cParam0) == iLocal_241)
	{
		func_1309(cParam0, &iLocal_1649, func_230(4, 6), 1, "m_pedPlayerHorse", 0);
		func_1309(cParam0, &bLocal_1651, func_230(4, 7), 1, "m_pedJohnHorse", 0);
	}
	else if (func_35(cParam0) == iLocal_247)
	{
		func_1309(cParam0, &iLocal_1649, func_230(5, 5), 1, "m_pedPlayerHorse", 0);
		func_1309(cParam0, &bLocal_1651, func_230(5, 7), 1, "m_pedJohnHorse", 0);
		func_1309(cParam0, &bLocal_1650, func_230(5, 6), 1, "m_pedDutchHorse", 0);
	}
	else
	{
		func_1309(cParam0, &iLocal_1649, func_230(0, 0), 1, "m_pedPlayerHorse", 0);
		func_1309(cParam0, &bLocal_1651, func_230(0, 1), 1, "m_pedJohnHorse", 0);
	}
}

void func_1291(int iParam0)
{
	Global_36606 = { func_1740() };
	Global_36610 = { func_1740() };
	Global_36605 = iParam0;
}

void func_1292(int iParam0, int iParam1)
{
	func_1785(iParam0, iParam1);
}

void func_1293(int iParam0)
{
	iLocal_251 = iParam0;
}

void func_1294(int iParam0)
{
	iLocal_279 = iParam0;
}

void func_1295(char[4] cParam0, char[4] cParam1)
{
	func_1786(&(cParam0->f_7375), cParam1, func_164(cParam0, func_35(cParam0)) != 5);
}

void func_1296(char[4] cParam0)
{
	func_1787(&(cParam0->f_7375));
}

struct<8> func_1297(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_1298(char[4] cParam0, struct<8> Param1)
{
	func_1788(&(cParam0->f_7375), Param1);
}

void func_1299(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			if (func_1556(cParam0, "MOB2_FL_JN", 4, 0, 0))
			{
				func_1283(cParam0, bVar1638, 1105014447, 422991367, 1, 1);
				func_137(cParam0, 51);
			}
			break;
		case 1:
			if (func_1556(cParam0, "MOB2_INV", 4, 0, 0))
			{
				func_192(cParam0, bVar1638, 1);
				if (does_blip_exist(iVar1616))
				{
					remove_blip(&iLocal_1619);
				}
				iLocal_1619 = func_1789(1259054292, Local_150.f_1, 1);
				_blip_set_modifier(iVar1616, -1833912565);
				func_137(cParam0, 51);
			}
			break;
		case 3:
			func_137(cParam0, 51);
			break;
		case 4:
			func_137(cParam0, 51);
			break;
		case 5:
			if (func_1556(cParam0, "MOB2_COVERA", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 6:
			if (func_1556(cParam0, "MOB2_JONLOOK", 0, 0, 0))
			{
				func_137(cParam0, 11);
			}
			break;
		case 7:
			if (func_1556(cParam0, "MOB2_STAYQUIET", 0, 2f, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 8:
			if (func_1556(cParam0, "MOB2_NOLEAD", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 9:
			if (func_1556(cParam0, "MOB2_DIST", 4, 0, 0))
			{
				if (does_blip_exist(iVar1616))
				{
					remove_blip(&iLocal_1619);
				}
				func_137(cParam0, -1);
			}
			break;
		case 10:
			func_1509(cParam0, "MOB2_INV", -1082130432, 0, 0, -1, -1, 0);
			if (does_blip_exist(iVar1616))
			{
				remove_blip(&iLocal_1619);
			}
			iLocal_1619 = func_1789(1259054292, Local_150.f_1, 1);
			_blip_set_modifier(iVar1616, -1833912565);
			func_137(cParam0, -1);
			break;
		case 11:
			if (!func_1287())
			{
				_uilog_clear_has_displayed_cached_objective();
				if (func_1556(cParam0, "MOB2_INV", 5, 0, 0))
				{
					func_137(cParam0, 7);
				}
			}
			break;
		case 12:
			if (!func_1287())
			{
				if (func_1556(cParam0, "MOB2_INV", 5, 0, 0))
				{
					func_137(cParam0, -1);
				}
			}
			break;
		case 30:
			func_137(cParam0, -1);
			break;
	}
}

void func_1300(char[4] cParam0)
{
	func_1790(cParam0);
	func_1770(cParam0, "MOB2_JFAIL", "MOB2_FAIL_SCARE", &iLocal_1641, 0, 0);
	if (func_122(cParam0, 4) || !func_10(cParam0, 8))
	{
		func_1791(cParam0, 0);
	}
	func_1792(cParam0);
	func_1793();
	func_1794(cParam0);
	func_1795(cParam0, 0);
	func_1796();
	func_1797();
	func_1798();
	func_1799();
}

void func_1301()
{
	_0x437c08db4febe2bd(Global_35, "Cautious", 1f, -1);
}

void func_1302(char[4] cParam0)
{
	iVar0 = func_37(cParam0);
	if (func_164(cParam0, func_35(cParam0)) <= 3)
	{
		iVar0 = func_35(cParam0);
	}
	Var1 = { func_1368(cParam0, iVar0) };
	func_1800(&(cParam0->f_10792), Var1, func_1370(&(cParam0->f_10792)));
}

void func_1303()
{
	if (!is_ped_injured(Global_35))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_35);
		if (does_entity_exist(iVar0) && is_entity_a_ped(iVar0))
		{
			if (get_script_task_status(Global_35, -208384378, true) != 0 && get_script_task_status(Global_35, -208384378, true) != 1)
			{
				_0x6569f31a01b4c097(get_ped_index_from_entity_index(iVar0), 0, 0);
				_0x6569f31a01b4c097(get_ped_index_from_entity_index(iVar0), 1, 0);
				_0x6569f31a01b4c097(get_ped_index_from_entity_index(iVar0), 6, 0);
				task_place_carried_entity_at_coord(Global_35, iVar0, get_entity_coords(Global_35, true, false), 1f, 1);
			}
		}
	}
}

bool func_1304(char[4] cParam0, bool bParam1)
{
	func_824(cParam0);
	if (((bParam1 && func_1801(&(cParam0->f_10792)) != 11) && !func_820(&(cParam0->f_10792), 131072)) && !func_820(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return func_1802(&(cParam0->f_10792));
}

bool func_1305(bool bParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar3 = func_1803(iVar0, 1);
		if (iVar3 != 0)
		{
			iVar2 = _0xdbc4b552b2ae9a83(bParam0, iVar3);
			if (is_weapon_valid(iVar2))
			{
				if (has_ped_got_weapon(bParam0, iVar2, 0, true))
				{
					if (_is_weapon_pistol(iVar2) || _is_weapon_revolver(iVar2))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 >= 1)
	{
		return true;
	}
	return false;
}

int func_1306(bool bParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar2 = func_1803(iVar0, 1);
		if (iVar2 != 0)
		{
			iVar1 = _0xdbc4b552b2ae9a83(bParam0, iVar2);
			if (is_weapon_valid(iVar1))
			{
				if (has_ped_got_weapon(bParam0, iVar1, 0, true))
				{
					if (_is_weapon_pistol(iVar1) || _is_weapon_revolver(iVar1))
					{
						return iVar1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1307(int iParam0)
{
	iLocal_252 = iParam0;
}

bool func_1308()
{
	if (!func_1804(-1, 1))
	{
		return false;
	}
	iLocal_1517 = 0;
	while (iVar1515 < 5)
	{
		if (!is_entity_dead(&(Local_14.f_7[iVar1515])))
		{
			_set_entity_health(&(Local_14.f_7[iVar1515]), 90, 0);
			set_ragdoll_blocking_flags(&(Local_14.f_7[iVar1515]), 1);
			set_ped_config_flag(&(Local_14.f_7[iVar1515]), 186, false);
			set_blocking_of_non_temporary_events(&(Local_14.f_7[iVar1515]), true);
			_0xae6004120c18df97(&(Local_14.f_7[iVar1515]), 0, 0);
			func_1805(&(Local_14.f_7[iVar1515]), -618550132, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_1805(&(Local_14.f_7[iVar1515]), 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_1806(&(Local_14.f_7[iVar1515]), 0);
			set_entity_visible(&(Local_14.f_7[iVar1515]), false);
			func_1807(&(Local_14.f_7[iVar1515]), 1);
			if (iVar1515 == 0)
			{
				func_1808(&(Local_14.f_7[iVar1515]), 1984);
			}
			if (iVar1515 == 1)
			{
				func_1808(&(Local_14.f_7[iVar1515]), 1972);
			}
			if (iVar1515 == 2)
			{
				func_1808(&(Local_14.f_7[iVar1515]), 1872);
			}
			if (iVar1515 == 3)
			{
				func_1808(&(Local_14.f_7[iVar1515]), 2002);
			}
			if (iVar1515 == 4)
			{
				func_1808(&(Local_14.f_7[iVar1515]), 1961);
			}
			set_ped_config_flag(&(Local_14.f_7[iVar1515]), 371, true);
			set_ped_config_flag(&(Local_14.f_7[iVar1515]), 233, true);
		}
		iLocal_1517 = iVar1515 + 1;
	}
	return true;
}

void func_1309(char[4] cParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, char* sParam7, bool bParam8)
{
	if (does_entity_exist(*bParam1) && !is_entity_dead(*bParam1))
	{
		if (bParam8)
		{
			iVar0 = _get_rider_of_mount(*bParam1, true);
			if (does_entity_exist(iVar0))
			{
				_remove_ped_from_mount(iVar0, true, false);
			}
		}
		func_395(*bParam1, vParam2, 2, 1073741824);
		set_animal_tuning_bool_param(*bParam1, 48, true);
		set_blocking_of_non_temporary_events(*bParam1, true);
		if (bParam6)
		{
			if (func_1497(*bParam1, vParam2, 3f, 1))
			{
			}
		}
		task_stand_still(*bParam1, -1);
		if (!func_486(cParam0, *bParam1))
		{
			if (are_strings_equal(sParam7, "m_pedDutchHorse"))
			{
				func_1478(cParam0, *bParam1, bVar1631);
			}
			else if (are_strings_equal(sParam7, "m_pedJohnHorse"))
			{
				func_1478(cParam0, *bParam1, bVar1630);
			}
		}
	}
}

void func_1310(char[4] cParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1408(&(cParam0->f_7375), bParam1);
	if (iVar0 != -1)
	{
		func_1412(cParam0->f_7375.f_13[iVar0], iParam2);
	}
}

void func_1311(int iParam0, int iParam1)
{
	iLocal_258[iParam0] = iParam1;
}

void func_1312(int iParam0)
{
	iLocal_264 = iParam0;
}

void func_1313()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (does_blip_exist(Local_129[iVar0]->f_1))
		{
			remove_blip(&(Local_129[iVar0]->f_1));
		}
		iVar0++;
	}
}

void func_1314(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_1004(iVar1996, 1, 0f, 0, 0, 0, 0, 0);
		func_1004(iVar1997, 1, 0f, 0, 0, 0, 0, 0);
	}
	else if (bParam1)
	{
		func_1004(iVar1996, 1, -1f, 1, 0, 0, 0, 0);
		func_1004(iVar1997, 1, 1f, 1, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iVar1996, 1, 0f, 1, 0, 0, 0, 0);
		func_1004(iVar1997, 1, 0f, 1, 0, 0, 0, 0);
	}
}

void func_1315(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iVar1989, 1, 0f, 0, 0, 0, 0, 0);
		func_1004(iVar1990, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iVar1989, 1, 1f, 1, 0, 0, 0, 0);
		func_1004(iVar1990, 1, -1f, 1, 0, 0, 0, 0);
	}
}

void func_1316(char[4] cParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1408(&(cParam0->f_7375), bParam1);
	if (iVar0 != -1)
	{
		func_1413(cParam0->f_7375.f_13[iVar0], iParam2);
	}
}

void func_1317()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_854[iVar0] = create_tracked_point();
		Local_854[iVar0]->f_3 = { func_519(14, iVar0) };
		vVar7 = { func_9(14, iVar0) };
		if (get_ground_z_for_3d_coord(vVar7, &uVar10, false))
		{
			vVar7.f_2 = uVar10;
			vVar7.f_2 = (vVar7.z + 1.5f);
		}
		set_tracked_point_info(&(Local_854[iVar0]), vVar7, 0.2f);
		Local_854[iVar0]->f_7 = { vVar7 };
		vVar1 = { func_1809(func_466(14, iVar0)) };
		vVar1 = { func_1810(vVar1) };
		vVar4 = { func_1811(vVar1, 0f, 0f, 1f) };
		Local_854[iVar0]->f_1 = create_tracked_point();
		Local_854[iVar0]->f_2 = create_tracked_point();
		Local_854[iVar0]->f_10 = { Local_854[iVar0]->f_7 + vVar4 * Vector(1f, 1f, 1f) };
		Local_854[iVar0]->f_13 = { Local_854[iVar0]->f_7 + vVar4 * Vector(-1f, -1f, -1f) * Vector(1f, 1f, 1f) };
		set_tracked_point_info(Local_854[iVar0]->f_1, Local_854[iVar0]->f_10, 0.2f);
		set_tracked_point_info(Local_854[iVar0]->f_2, Local_854[iVar0]->f_13, 0.2f);
		iVar0++;
	}
}

void func_1318(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			if (func_1556(cParam0, "MOB2_GNFT", 0, 0, 0))
			{
				func_137(cParam0, 1);
			}
			break;
		case 1:
			func_1509(cParam0, "MOB2_KILL", -1082130432, 0, 0, -1, -1, 0);
			func_137(cParam0, 14);
			break;
		case 2:
			if (iVar261 >= 3)
			{
				func_137(cParam0, 51);
			}
			break;
		case 3:
			if (func_1556(cParam0, "MOB2_GRAPL", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 4:
			if (func_912(Global_35, bVar1638, 1, 1) < 20f)
			{
				if (func_1556(cParam0, "MOB2_OKAY", 0, 0, 0))
				{
					func_137(cParam0, 51);
				}
			}
			else
			{
				func_137(cParam0, 51);
			}
			break;
		case 5:
			if (func_1556(cParam0, "MOB2_1LEFT", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 10:
			if (func_1556(cParam0, "MOB2_ROBFIGHT1", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 11:
			if (func_1556(cParam0, "MOB2_ROBFIGHT2", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 12:
			if (func_1556(cParam0, "MOB2_ROBFIGHT3", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 13:
			if (func_1556(cParam0, "MOB2_ROBFIGHT4", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 14:
			if (func_1556(cParam0, "MOB2_ARTFIGHT", 0, 0, 0))
			{
				func_137(cParam0, 2);
			}
			break;
	}
}

void func_1319(char[4] cParam0)
{
	func_1812(cParam0);
	func_1813(cParam0);
	func_1501(cParam0);
	func_1814();
}

void func_1320(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_447(cParam0, 2);
	}
	else
	{
		func_447(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1542(cParam0, cVar0);
	func_162(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_31()) && !func_7(cParam0, 80)) && bParam3)
	{
		func_32(cParam0);
	}
	func_29(&(cParam0->f_13118), 0);
}

void func_1321(char[4] cParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1) || is_entity_dead(bParam1))
	{
		return;
	}
	func_1815(bParam1, bParam2);
	if (bParam3 && func_490(cParam0, bParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_1505(cParam0, bParam1, 32))
			{
				func_489(cParam0, bParam1, 32);
			}
		}
		else if (func_1505(cParam0, bParam1, 32))
		{
			func_488(cParam0, bParam1, 32);
		}
	}
}

void func_1322(bool bParam0)
{
	if (func_221())
	{
		func_115(1);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (bParam0)
	{
		func_49(0, 0);
	}
}

void func_1323()
{
	iLocal_1517 = 0;
	while (iVar1515 < 5)
	{
		if (does_entity_exist(&(Local_14.f_7[iVar1515])))
		{
			func_1807(&(Local_14.f_7[iVar1515]), 1);
		}
		iLocal_1517 = iVar1515 + 1;
	}
}

void func_1324(bool bParam0, int iParam1, bool bParam2)
{
	if (!is_entity_dead(bParam0))
	{
		iVar0 = 4;
		if (bParam2)
		{
			iVar0 |= 1;
		}
		if (!has_ped_got_weapon(bParam0, iParam1, 0, false))
		{
			get_max_ammo(bParam0, &iVar1, iParam1);
			func_1816(bParam0, iParam1, iVar1, iVar0, 0, 1056964608, 1065353216, 0);
		}
		else if (bParam2)
		{
			func_1816(bParam0, iParam1, 0, iVar0, 0, 1056964608, 1065353216, 0);
		}
	}
}

void func_1325(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_1326(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1327()
{
	_0x22b3cabeddb538b2(player_id(), 0f);
	if (!is_entity_dead(bVar1639))
	{
		clear_ped_tasks(bVar1639, 1, 0);
		_set_entity_health(bVar1639, get_ped_max_health(bVar1639), 0);
		remove_ped_defensive_area(bVar1639, false);
		_0x2b4ce170de09f346(bVar1639, 1718936990);
		set_ped_config_flag(bVar1639, 130, false);
		set_current_ped_weapon(bVar1639, -1569615261, false, 0, false, false);
		open_sequence_task(&uLocal_1613);
		task_follow_to_offset_of_entity(0, Global_35, 1f, -5f, 0f, 1f, -1, 6f, 1, 1, 0, 0, 1);
		close_sequence_task(iVar1611);
		task_perform_sequence(bVar1639, iVar1611);
		clear_sequence_task(&uLocal_1613);
	}
}

void func_1328()
{
	if (func_1817(1, 0))
	{
		func_1818(1);
	}
}

void func_1329(bool bParam0, int iParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(bParam0) || is_entity_dead(bParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (!does_group_exist(iVar1555))
	{
		iLocal_1561 = get_player_group(player_id());
		if (!is_ped_group_member(bParam0, iVar1555, 0))
		{
			if (is_ped_in_group(bParam0))
			{
				remove_ped_from_group(bParam0);
			}
			set_ped_config_flag(iParam1, 279, true);
			set_ped_config_flag(bParam0, 279, true);
			set_ped_as_group_member(bParam0, iVar1555);
			set_group_formation(iVar1555, 6);
			_0x2917e634206b9e17(bParam0, 2);
			_0xcbd9ec60495c728c(iVar1555);
			set_ped_config_flag(bParam0, 156, true);
			set_ped_config_flag(iParam1, 155, true);
			set_ped_config_flag(bParam0, 333, true);
		}
	}
	else
	{
		if (!_0x878b68960c1c2a35(iParam1, iVar1555))
		{
			set_ped_as_group_leader(iParam1, iVar1555, false);
			set_ped_config_flag(iParam1, 279, true);
		}
		if (!is_ped_group_member(bParam0, iVar1555, 0))
		{
			set_ped_config_flag(bParam0, 279, true);
			set_ped_as_group_member(bParam0, iVar1555);
		}
	}
}

void func_1330(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 3:
			func_137(cParam0, -1);
			break;
		case 4:
			if (func_1556(cParam0, "MOB2_LOOT", 0, 1f, 0))
			{
				func_137(cParam0, 5);
			}
			break;
		case 5:
			if (func_1556(cParam0, "MOB2_SRCH", 4, 0, 0))
			{
				iLocal_1620 = _blip_add_for_radius(-1282792512, func_1(1, 10), 10f);
				_blip_set_modifier(iVar1617, -1833912565);
				_blip_set_modifier(iVar1617, 231194138);
				set_blip_name_from_text_file(iVar1617, "MOB2_BLIP_STASH");
				func_170(&uLocal_1519, 67108864);
				func_137(cParam0, 10);
			}
			break;
		case 6:
			if (func_1819(cParam0, "MOB2_FDLT_A", 0))
			{
				func_475(&iLocal_1620);
				iLocal_1620 = func_1820(408396114, &(Local_14.f_99[0]), 1);
				set_blip_name_from_text_file(iVar1617, "MOB2_BLIP_STASH");
				func_137(cParam0, 51);
			}
			break;
		case 7:
			if (func_1556(cParam0, "MOB2_FDLT", 0, 1f, 0))
			{
				func_137(cParam0, 8);
			}
			break;
		case 8:
			if (!func_1287())
			{
				func_29(&uLocal_2040, 0);
				func_137(cParam0, 51);
			}
			break;
		case 9:
			if (func_1556(cParam0, "MOB2_ELEAVE", 0, 0, 0))
			{
				func_137(cParam0, 51);
			}
			break;
		case 10:
			if (func_912(Global_35, &(Local_14.f_99[0]), 1, 1) > 5f)
			{
				if (!_0x1ecc76792f661cf5("MOB2_LOOT"))
				{
					func_1821(cParam0, "MOB2_CEM_LOOT", "MOB2_SRCH", 3, 1092616192);
				}
			}
			break;
	}
}

void func_1331(char[4] cParam0)
{
	func_1768(cParam0, 1, 100f, 200f, 0, 0, 1, 422991367);
	func_1822(cParam0);
	func_1823(cParam0);
	if (func_1271(cParam0) < 3)
	{
		func_1792(cParam0);
	}
	else
	{
		func_461();
	}
	func_1814();
}

bool func_1332()
{
	if (!func_1824(-1, 1))
	{
		return false;
	}
	iLocal_1517 = 0;
	while (iVar1515 < 6)
	{
		if (!is_entity_dead(&(Local_14.f_20[iVar1515])) && !&iLocal_1545[iVar1515])
		{
			set_ped_config_flag(&(Local_14.f_20[iVar1515]), 107, true);
			set_ped_config_flag(&(Local_14.f_20[iVar1515]), 186, false);
			request_ped_visibility_tracking(&(Local_14.f_20[iVar1515]));
			_0xae6004120c18df97(&(Local_14.f_20[iVar1515]), 0, 0);
			_give_weapon_to_ped_2(&(Local_14.f_20[iVar1515]), -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			func_1825(iVar1515);
			iLocal_1545[iVar1515] = 1;
			return false;
		}
		iLocal_1517 = iVar1515 + 1;
	}
	return true;
}

bool func_1333(int iParam0, bool bParam1)
{
	if (!func_262(Local_14.f_66))
	{
		Local_14.f_66 = { func_431() };
	}
	if (func_1826(&(Local_14.f_66), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_68[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_68[0] = func_1827(-2146356753, 2743.813f, -1089.411f, 46.2697f, 231.1972f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_68[0]), "HOUND_1");
		func_1828(Local_14.f_66, &(Local_14.f_68[0]));
		func_1482(&(Local_14.f_68[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_68[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_68[1] = func_1827(-2146356753, 2732.275f, -1068.012f, 46.2648f, 271.4041f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_68[1]), "HOUND_2");
		func_1828(Local_14.f_66, &(Local_14.f_68[1]));
		func_1482(&(Local_14.f_68[1]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_68[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_68[2] = func_1827(-2146356753, 2732.131f, -1067.062f, 46.2827f, 267.0482f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_68[2]), "HOUND_3");
		func_1828(Local_14.f_66, &(Local_14.f_68[2]));
		func_1482(&(Local_14.f_68[2]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1829(&(Local_14.f_66), 1);
	return true;
}

int func_1334(var uParam0)
{
	if (!func_28(uParam0))
	{
		return 0;
	}
	if (func_516(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_517() - round((uParam0->f_1 * 1000f)));
}

void func_1335(int iParam0)
{
	iLocal_266 = iParam0;
}

int func_1336(char[4] cParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_101(cParam0, 512);
	}
	func_1263(cParam0, func_35(cParam0), iParam1);
	if (bParam3)
	{
		func_957(cParam0, iParam1, 2);
	}
	if (bParam4)
	{
		func_1830(cParam0);
	}
	return 1;
}

void func_1337()
{
	func_1483(-1, 1);
	if (does_entity_exist(&(Local_14.f_99[0])))
	{
		delete_object(Local_14.f_99[0]);
	}
}

void func_1338(int iParam0)
{
	iLocal_1517 = 0;
	while (iVar1514 < 6)
	{
		func_1831(iVar1514, iParam0);
		iLocal_1517 = iVar1514 + 1;
	}
}

void func_1339(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1832(iVar0, iParam0);
		iVar0++;
	}
}

void func_1340(int iParam0)
{
	iLocal_265 = iParam0;
}

Vector3 func_1341(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_1342(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 32768;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1343(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			if (func_1556(cParam0, "MOB2_ENTPL", 0, 0, 0))
			{
				func_170(&iLocal_1525, 2);
				func_137(cParam0, 1);
			}
			break;
		case 1:
			if (func_1556(cParam0, "MOB2_ESC2", 4, 0, 0))
			{
				func_227(&uLocal_2010);
				func_1283(cParam0, bVar1638, 1105014447, 422991367, 1, 1);
				func_137(cParam0, 3);
			}
			break;
		case 2:
			func_137(cParam0, -1);
			break;
		case 3:
			func_227(&uLocal_2016);
			func_137(cParam0, 51);
			break;
		case 9:
			if (is_entity_in_volume(Global_35, Local_150.f_1, true, 0))
			{
				if (func_1556(cParam0, "MOB2_ESC", 5, 0, 0))
				{
					func_137(cParam0, 11);
				}
			}
			else
			{
				func_137(cParam0, -1);
			}
			func_192(cParam0, bVar1638, 1);
			break;
		case 10:
			if (is_entity_in_volume(bVar1638, Local_150.f_1, true, 0))
			{
				func_1509(cParam0, "MOB2_JN_WAIT", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, 51);
			}
			break;
		case 11:
			if (_0x285d36c5c72b0569(Global_35) < 5f || is_ped_shooting(Global_35))
			{
				if (func_1556(cParam0, "MOB2_ASHOOT", 1, 1f, 0))
				{
					func_137(cParam0, -1);
				}
			}
			else
			{
				func_137(cParam0, -1);
			}
			break;
		case 20:
			func_137(cParam0, -1);
			break;
		case 21:
			if (!func_1287())
			{
				func_227(&uLocal_2019);
				func_137(cParam0, 51);
			}
			break;
		case 22:
			if (func_1556(cParam0, "MOB2_COP1", 1, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 23:
			if (!func_1287())
			{
				func_227(&uLocal_2022);
				func_137(cParam0, 51);
			}
			break;
		case 24:
			if (func_1556(cParam0, "MOB2_ESCP", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 25:
			if (func_1556(cParam0, "MOB2_ESC", 5, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1344(char[4] cParam0)
{
	func_1769(cParam0);
	func_1350(cParam0);
	func_1833(cParam0);
	func_1834(cParam0);
	func_1835(cParam0);
	func_1836();
}

bool func_1345(bool bParam0, float fParam1)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	iLocal_1517 = 0;
	while (iVar1513 < 6)
	{
		if (func_912(bParam0, &(Local_14.f_20[iVar1513]), 1, 1) < fParam1)
		{
			return true;
		}
		iLocal_1517 = iVar1513 + 1;
	}
	return false;
}

int func_1346(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_479(uParam0[iVar1], iParam1))
		{
			if (is_ped_human(uParam0[iVar1]))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1347()
{
	func_1837();
	func_1838();
}

bool func_1348()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_479(&(Local_14.f_20[iVar0]), 0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_479(&(Local_14.f_68[iVar0]), 0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1349(vector3 vParam0, float fParam3, int iParam4)
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

bool func_1350(char[4] cParam0)
{
	if (!func_168(iVar1517, 1024))
	{
		if (func_1276(cParam0, 1))
		{
			func_1485(cParam0);
			func_170(&uLocal_1520, 1024);
			return false;
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iVar1517, 8192))
	{
		if (func_1480())
		{
			func_1309(cParam0, &bLocal_1650, func_230(3, 10), 1, "m_pedDutchHorse", 0);
			func_170(&uLocal_1520, 8192);
			return false;
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iVar1517, 2048))
	{
		if (func_1474(cParam0))
		{
			func_1486(cParam0);
			func_170(&uLocal_1520, 2048);
			return false;
		}
		else
		{
			return false;
		}
	}
	if (!func_168(iVar1517, 4096))
	{
		if (func_1484(cParam0))
		{
			func_170(&uLocal_1520, 4096);
			return false;
		}
		else
		{
			return false;
		}
	}
	if (func_168(iVar1516, 1))
	{
		func_1503(0);
	}
	return true;
}

void func_1351(int iParam0)
{
	iLocal_278 = iParam0;
}

void func_1352(char[4] cParam0)
{
	func_1839(&(cParam0->f_7375));
}

void func_1353(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			if (func_168(iVar1517, 134217728))
			{
				func_137(cParam0, 1);
			}
			if (!func_168(iVar1522, 8192))
			{
				if (func_912(Global_35, bVar1638, 1, 1) < 20f)
				{
					if (func_1556(cParam0, "MOB2_RTRN_WHIS", 0, 0, 0))
					{
						func_137(cParam0, 1);
					}
				}
				else
				{
					func_137(cParam0, 1);
				}
			}
			else
			{
				func_137(cParam0, 3);
			}
			break;
		case 1:
			if (func_1556(cParam0, "MOB2_RTB", 4, 0, 0))
			{
				func_449();
				if (!does_blip_exist(iVar1616))
				{
					iLocal_1619 = func_1557(408396114, func_1(3, 2), 1);
				}
				func_170(&uLocal_1520, 33554432);
				func_137(cParam0, 3);
			}
			break;
		case 2:
			if (func_1556(cParam0, "MOB2_BACKTOB", 0, 0, 0))
			{
				func_170(&uLocal_1521, 2);
				func_137(cParam0, 51);
			}
			break;
		case 3:
			if (func_912(Global_35, bVar1638, 1, 1) < 20f)
			{
				iVar0 = get_random_int_in_range(0, 2);
				if (iVar0 == 0)
				{
					if (func_1556(cParam0, "MOB2_JLST", 0, 0, 0))
					{
						func_137(cParam0, 4);
					}
				}
				else if (func_1556(cParam0, "MOB2_ALST", 0, 0, 0))
				{
					func_137(cParam0, 4);
				}
			}
			else
			{
				func_137(cParam0, 4);
			}
			break;
		case 4:
			if ((!func_1287() && func_912(Global_35, bVar1638, 1, 1) < 20f) && func_1556(cParam0, "MOB2_RTRN", 0, 2f, 0))
			{
				func_1509(cParam0, "MOB2_RTB", -1082130432, 0, 0, -1, -1, 0);
				if (!does_blip_exist(iVar1616))
				{
					iLocal_1619 = func_1557(408396114, func_1(3, 2), 1);
				}
				if (!func_168(iVar1518, 2))
				{
					func_137(cParam0, 2);
				}
			}
			else if (!func_1287() && func_912(Global_35, bVar1638, 1, 1) > 20f)
			{
				func_1509(cParam0, "MOB2_RTB", -1082130432, 0, 0, -1, -1, 0);
				if (!does_blip_exist(iVar1616))
				{
					iLocal_1619 = func_1557(408396114, func_1(3, 2), 1);
				}
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1354(char[4] cParam0)
{
	func_1840(cParam0);
	func_1769(cParam0);
	func_1776(cParam0);
	if (func_10(cParam0, 8) && !func_168(iVar1522, 4))
	{
		func_1834(cParam0);
	}
	func_1841(cParam0);
	func_1842();
	func_1843();
}

void func_1355(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(bParam0))
	{
		return;
	}
	if (!is_ped_human(bParam0))
	{
		return;
	}
	if (func_1844(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(bParam0, false);
	}
	fVar3 = func_903(bParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1845() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(bParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(bParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (bParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1846(bParam0, 501393341))
			{
				task_dismount_animal(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1846(bParam0, -828834893))
			{
				task_leave_any_vehicle(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_1356(char[4] cParam0)
{
	return cParam0->f_599;
}

int func_1357(char[4] cParam0, bool bParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!func_168(iVar1513, iParam3))
	{
		if (!is_entity_dead(bParam1))
		{
			if (is_entity_in_volume(bParam1, iParam2, true, 0))
			{
				func_137(cParam0, iParam4);
				func_170(&uLocal_1521, iParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_1358(char[4] cParam0)
{
	switch (func_1356(cParam0))
	{
		case 0:
			if (func_1819(cParam0, "MOB2_EXT_LO", 0))
			{
				func_1509(cParam0, "MOB2_CEM_HORSE", -1082130432, 0, 0, -1, -1, 0);
				func_1774();
				func_137(cParam0, -1);
			}
			break;
		case 1:
			if (is_ped_on_mount(iVar1639))
			{
				if (func_1556(cParam0, "MOB2_RTRNCAMP", 0, 0, 0))
				{
					func_137(cParam0, 5);
				}
			}
			break;
		case 2:
			if (func_1556(cParam0, "MOB2_SB_ARR", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
		case 3:
			if (func_1556(cParam0, "MOB2_RTSB", 4, 0, 0))
			{
				func_137(cParam0, 4);
			}
			break;
		case 4:
			if (func_1556(cParam0, "MOB2_HEADHOME", 1, 0, 0))
			{
				func_449();
				func_137(cParam0, 1);
			}
			break;
		case 5:
			if (func_1556(cParam0, "MOB2_JACKJOHN", 0, 0, 0))
			{
				func_170(&uLocal_1519, 1024);
				func_137(cParam0, -1);
			}
			break;
		case 6:
			break;
	}
}

void func_1359(char[4] cParam0)
{
	func_1847(cParam0);
	func_1769(cParam0);
	func_1776(cParam0);
	func_1848(cParam0);
	func_1849(cParam0);
	func_1850(cParam0);
	func_1851();
}

int func_1360(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = func_292();
	if (func_716(iVar0) > iParam0)
	{
		if (func_715(iVar0) + 1 > func_719(func_714(iVar0), func_713(iVar0)))
		{
			if (func_714(iVar0) == 11)
			{
				func_720(&iVar1, iParam2, iParam1, iParam0, 1, 0, func_713(iVar0) + 1);
			}
			else
			{
				func_720(&iVar1, iParam2, iParam1, iParam0, 1, func_714(iVar0) + 1, func_713(iVar0));
			}
		}
		else
		{
			func_720(&iVar1, iParam2, iParam1, iParam0, func_715(iVar0) + 1, func_714(iVar0), func_713(iVar0));
		}
	}
	else
	{
		func_720(&iVar1, iParam2, iParam1, iParam0, func_715(iVar0), func_714(iVar0), func_713(iVar0));
	}
	if (get_milliseconds_per_game_minute() != 9999999)
	{
		if (func_722(iVar1, 1))
		{
			_pause_clock_this_frame(true);
			_set_milliseconds_per_game_minute(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!func_722(iVar1, 1))
			{
				func_1852(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						_pause_clock_this_frame(true);
						_set_milliseconds_per_game_minute(9999999);
					}
					else
					{
						iVar8 = floor((2000f / (to_float(iVar3) / to_float(60))));
						_set_milliseconds_per_game_minute(iVar8);
					}
				}
				else if (get_milliseconds_per_game_minute() != 2000)
				{
					fVar9 = (IntToFloat((get_milliseconds_per_game_minute() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(get_milliseconds_per_game_minute()) - fVar9);
					if (absf((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					_set_milliseconds_per_game_minute(floor(fVar9));
				}
			}
		}
	}
	else if (!func_722(iVar1, 1))
	{
		_set_milliseconds_per_game_minute(2000);
	}
	return 0;
}

void func_1361(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1362(bool bParam0)
{
	return bParam0;
}

bool func_1363(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(bParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(bParam0);
	return _is_this_model_a_horse(iVar0);
}

char* func_1364()
{
	return "cutDeleteMe";
}

struct<8> func_1365(var uParam0)
{
	return uParam0->f_814;
}

struct<8> func_1366()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_1367(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_804, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_804, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_822[iVar0]) && are_strings_equal(sParam1, uParam0->f_822[iVar0]))
		{
			Var1 = { uParam0->f_806 };
			*uParam0->f_822[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_1767(uParam0, sParam1);
	func_1361(uParam0, 2097152, 1);
	func_768(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_804, sParam1, true);
}

struct<4> func_1368(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_13;
}

void func_1369(char[4] cParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		return;
	}
	if (!_is_anim_scene_loaded(cParam0->f_7375.f_804, true, false))
	{
		return;
	}
	StringCopy(&cVar0, sParam1, 32);
	func_1464(cVar0, &(cParam0->f_7375), cParam0);
}

int func_1370(var uParam0)
{
	return *uParam0;
}

bool func_1371(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_820(uParam0, 32768))
	{
		return true;
	}
	if (func_1853(uParam0) >= 3)
	{
		uParam0->f_2286 = func_974(get_player_index(), 0, 0, 1);
		uParam0->f_2287 = _is_ped_getting_into_a_mount_seat(Global_35, true);
		uParam0->f_2289 = is_ped_in_any_vehicle(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!is_entity_dead(Global_1935630->f_40))
			{
				uParam0->f_2288 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_2288 = get_mount(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = get_vehicle_ped_is_in(Global_35, true);
		}
		uParam0->f_2292 = get_interior_from_entity(Global_35);
		func_1854(uParam0);
	}
	if (func_1853(uParam0) < 10)
	{
		if (func_1853(uParam0) == 3)
		{
			func_1855(uParam0, iParam5, bParam6);
		}
		else if (func_1853(uParam0) > 3)
		{
			if (func_1370(uParam0) == 0)
			{
				if (!func_820(uParam0, 524288))
				{
					func_1856(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1857(uParam0, 4);
					func_1858(uParam0, 10);
					func_1859(uParam0, iParam5);
					return true;
				}
			}
			if (!func_820(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1860(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1861(0);
			func_1862();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1860(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1863(uParam0, uParam0->f_2074))
				{
					if (func_1801(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1864(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1864(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1865(uParam0);
			}
		}
	}
	bVar0 = func_1866(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_820(uParam0, 268435456) && bVar1) && !func_820(uParam0, 262144))
		{
			bVar3 = is_valid_interior(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = get_interior_at_coords(uParam0->f_1406[uParam0->f_2074]->f_1);
				if ((is_valid_interior(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_767(uParam0, 131072);
				func_767(uParam0, 268435456);
			}
		}
		if (func_1867(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1860(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1370(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1853(uParam0) == 3 || func_820(uParam0, 131072))
	{
		func_1868(uParam0);
		if (!func_820(uParam0, 262144))
		{
			if ((bVar0 && func_820(uParam0, 65536)) || func_820(uParam0, 131072))
			{
				func_767(uParam0, 32768);
				func_1857(uParam0, 4);
				func_1858(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1859(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1853(uParam0) >= 3)
	{
		func_1869(uParam0, iParam5);
		func_1870(uParam0);
		if (!func_1871(uParam0, 1))
		{
			func_1872(uParam0);
		}
		func_1873(uParam0);
	}
	switch (func_1853(uParam0))
	{
		case 0:
			func_1874(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1875(uParam0);
			break;
		case 2:
			func_1876(uParam0);
			break;
		case 3:
			if (func_1802(uParam0))
			{
				func_1877(2);
				func_1864(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_227(&(uParam0->f_2262));
				func_1857(uParam0, 1);
				func_1878();
				func_1858(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_820(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1853(uParam0) == 5)
			{
				if (func_1879(uParam0))
				{
					func_1857(uParam0, 2);
					func_1858(uParam0, 6);
				}
			}
			if (func_1853(uParam0) == 6)
			{
				if (func_1880(uParam0))
				{
					func_1857(uParam0, 3);
					func_1858(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1286(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1881(uParam0, iParam5))
				{
					if (func_1882(uParam0))
					{
						uParam0->f_2075 = func_1883(uParam0);
						func_227(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1857(uParam0, 6);
						func_1858(uParam0, 9);
					}
					else
					{
						func_1857(uParam0, 4);
						func_1858(uParam0, 10);
						func_1859(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1881(uParam0, iParam5))
			{
				func_1859(uParam0, iParam5);
				func_1858(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_1372(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1373(var uParam0, var uParam1)
{
	if (func_820(uParam1, 32768))
	{
		Var0 = { func_819(uParam0) };
		func_1367(uParam0, &Var0);
		if (func_820(uParam1, 131072))
		{
			func_768(uParam0, 268435456);
			if (func_396(uParam0->f_865))
			{
				uParam0->f_865 = { func_1884(uParam1, uParam1->f_2074) };
			}
			if (func_396(uParam0->f_862))
			{
				uParam0->f_862 = { func_1884(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_820(uParam1, 268435456))
		{
			func_1885(&(uParam0->f_860), 16384);
		}
	}
	else if (func_820(uParam1, 524288))
	{
		func_768(uParam0, 67108864);
		func_1372(uParam1, 524288);
	}
	if (func_1867(uParam1, 128))
	{
		func_768(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1860(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1885(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

bool func_1374(int iParam0)
{
	if (-1829635046 == func_1886(81053684))
	{
		if (func_1887(iParam0))
		{
			return true;
		}
	}
	else if (func_1663(-525676072, iParam0))
	{
		if (func_1887(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1375(int iParam0)
{
	if (func_22() != -1)
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

void func_1376(int iParam0)
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

void func_1377()
{
	iVar0 = func_1118(Global_35, 9, 1, 0);
	if (func_709(iVar0))
	{
		return;
	}
	iVar0 = func_1118(Global_35, 7, 1, 0);
	if (func_709(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1118(Global_35, 0, 1, 0);
	if (func_709(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1118(Global_35, 1, 1, 0);
	if (func_709(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1118(Global_35, 18, 1, 0);
	if (func_709(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1888();
	if (func_709(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1805(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1889(6291456, 0);
	if (func_709(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1805(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1378()
{
	return Global_1900383->f_393;
}

int func_1379(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1844(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_1380(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1381(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1382(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1383()
{
	return &Global_1899515;
}

void func_1384(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1385(int iParam0)
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

bool func_1386()
{
	return (func_1890() || func_1891());
}

void func_1387(bool bParam0)
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
	func_1892(0f);
	Global_1935436->f_11 = 1;
	if (func_311())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1893();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1388(var uParam0)
{
	return uParam0->f_865;
}

float func_1389(var uParam0)
{
	return uParam0->f_868;
}

float func_1390(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_1391(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1392(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1393(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1222(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1894(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(bParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
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
				_set_ped_component_disabled(bParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1394(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_694(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1395(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1396(bool bParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1394(1108822547, 6))
	{
		if (bParam2)
		{
			func_1393(bParam0, iVar0, func_22() != -1, 0, 0);
			func_1397(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(bParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1398(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(bParam0, false, true, true, true, false);
}

void func_1397(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_694(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_694(iParam0, 1)])->f_10 || iParam1);
}

void func_1398(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_694(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_694(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_694(iParam0, 1)])->f_10 && iParam1));
}

bool func_1399(var uParam0)
{
	if (func_1895(&(uParam0->f_29), 62))
	{
		switch (func_1896())
		{
			case 1:
				if (!func_1895(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1895(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1895(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1895(&(uParam0->f_29), 32))
				{
					if (func_1895(&(uParam0->f_29), 2))
					{
						if (func_716(func_292()) < 5)
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

int func_1400(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1897(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1159("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1160(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_709(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1897(iParam1, 512) && func_1658(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1897(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1897(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1897(iParam1, 33554432)))
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
		func_1161(iVar1);
	}
	if (func_709(iVar0))
	{
	}
	else if (!func_1897(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1400(uParam0, iParam1, iParam2);
	}
	else if (func_1897(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1401(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1402(int iParam0)
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
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

void func_1403(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

void func_1404(var uParam0)
{
	if (!func_899(*uParam0, 1))
	{
		request_ptfx_asset();
		func_862(uParam0, 1);
	}
}

bool func_1405(var uParam0)
{
	if (func_899(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
	{
		_get_anim_scene_origin(uParam0->f_1, &vVar0, &uVar3, 2);
		if (get_distance_between_coords(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

char* func_1406(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1407(int iParam0)
{
	return iParam0 != 0;
}

int func_1408(var uParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1409(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_1410(var uParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (&uParam0->f_13[iVar12] == bParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1412(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1413(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1414(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1415(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1416(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1416(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1416(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1416(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1416(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1416(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1416(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*iParam5 == 1 || *iParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_2503) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_1416(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1416(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1416(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1417(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1418(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_224((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1419(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_514(sParam0, 1);
}

bool func_1420(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_869(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1421(var uParam0)
{
	if (func_899(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_3, 1))
	{
		func_871(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_862(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_862(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1422(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_873(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1423(var uParam0, int iParam1)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam1, true, false))
	{
		return false;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_880(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1424(var uParam0)
{
	if (func_899(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_2, 1))
	{
		func_882(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_862(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1425(var uParam0)
{
	if (func_899(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_3, 1))
	{
		func_884(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_862(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1426(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_886(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1427(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_888(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1428(var uParam0)
{
	if (func_899(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_2, 1))
	{
		func_890(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_862(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1429(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_892(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1430(int iParam0)
{
	if (func_533(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1431(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_533(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_1016(iParam0, 2, 1))
			{
				func_984(iParam0, 2, 1);
			}
			if (func_728(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_986(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_538(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_479(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_479(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1898(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_986(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1899(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_986(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1899(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_1016(iParam0, 44, 0))
			{
				func_986(iParam0, 44, 0);
			}
			if (func_1900(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1899(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_984(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1039(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1901(iParam0, 0, 0, 1);
			}
			func_984(iParam0, 33, 1);
			func_984(iParam0, 34, 1);
			func_984(iParam0, 29, 1);
			if (!func_396(vVar0) && bParam7)
			{
				func_1899(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1899(iParam0, 4);
			}
			else
			{
				func_1899(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_1898(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_817(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_1899(iParam0, 4);
			}
			else
			{
				func_1899(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_1902(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1903(iParam0, iParam13, 0);
						func_1904(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1016(iParam0, 25, 0))
						{
							func_984(iParam0, 25, 0);
						}
						func_986(iParam0, 66, 0);
						func_1899(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1899(iParam0, 5);
				}
				func_986(iParam0, 28, 1);
			}
			else
			{
				func_1899(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1899(iParam0, 6);
			}
			break;
		case 6:
			if (func_479(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_1905(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1266(Global_1360165[iParam0], 1);
				}
			}
			func_1899(iParam0, 7);
		case 7:
			func_1039(iParam0, bParam9, bParam15, 0);
			func_1011(iParam0, 4, bParam11);
			func_1036(iParam0);
			if (bParam20)
			{
				if (func_1471(Global_1360165[iParam0]))
				{
				}
			}
			func_1906(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1899(iParam0, 0);
			func_729(iParam0, 16, 1);
			func_984(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1432(char[4] cParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1907(bParam1, bParam3, bParam4, bParam6);
	if (!func_122(cParam0, 512))
	{
		if (func_122(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1908(bParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1909(cParam0, bParam1, iParam2, func_331(iParam2, 0));
	func_489(cParam0, bParam1, 512);
	if (bParam5)
	{
		func_489(cParam0, bParam1, 128);
	}
	else
	{
		func_488(cParam0, bParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1433(int iParam0)
{
	if (!func_533(iParam0))
	{
		return;
	}
	bVar0 = func_569(iParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(bVar0, 0, 0f);
}

void func_1434(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1435(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1444(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1436(int iParam0)
{
	iParam0 = func_273(iParam0);
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
	func_1910(&Var0);
	func_1911(iParam0, Var0);
	func_1912(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1913(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1914(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1915(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1916(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1917(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1918(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1919(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1920(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1437(vector3 vParam0)
{
	return func_1921(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1438(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_547(iParam0))
	{
		return false;
	}
	iVar0 = func_222(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1439(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_541(iParam0);
	func_541(iParam0);
	func_1922(iParam0, iParam1);
	func_1923(iParam0, iParam1);
	func_1924(iParam0, iParam1);
	iVar1 = func_222(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1925(iVar1);
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
	iVar3 = func_222(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1925(iVar3);
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
	func_275();
}

bool func_1440()
{
	iVar0 = func_1378();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1441()
{
	bVar0 = func_1378();
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	delete_object(&bVar0);
	func_1926(0);
}

int func_1442(int iParam0)
{
	iParam0 = func_273(iParam0);
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

int func_1443(int iParam0)
{
	iParam0 = func_273(iParam0);
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

int func_1444(int iParam0)
{
	iParam0 = func_273(iParam0);
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

void func_1445(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1716(&iVar0, &iVar1, &iVar2);
	func_1717(iParam0, iVar0);
	func_1718(iParam0, iVar1);
	func_1719(iParam0, iVar2);
	func_1927(iParam0, 1);
	func_1928(iParam0, 1);
}

void func_1446(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1929(iParam0, 1);
}

void func_1447(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_273(iParam0);
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

bool func_1448(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1046(iParam0, 1);
}

struct<2> func_1449(int iParam0)
{
	iParam0 = func_273(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1930(iParam0, &uVar2))
	{
	}
	if (!func_1931(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1450()
{
	if (func_1932(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1932(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1932(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1932(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1932(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1932(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1451(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0))
	{
	}
	if (is_ped_injured(bParam0))
	{
	}
	if (is_ped_in_writhe(bParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(bParam0))
	{
		return;
	}
	func_1933(bParam0);
	func_1934(bParam0, uParam1);
	func_1935(bParam0);
	func_1936(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1937(bParam0, iParam3, 0);
	}
	_update_ped_variation(bParam0, false, true, true, true, true);
}

void func_1452(int iParam0)
{
	iParam0 = func_273(iParam0);
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

bool func_1453(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1454(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1455(var uParam0)
{
	return *uParam0;
}

bool func_1456(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1938(iParam0) };
	if (func_1844(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_913(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1939(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1457(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1458(var uParam0)
{
	destroy_cam(uParam0->f_2, false);
	uParam0->f_2 = create_cam("DEFAULT_SPLINE_CAMERA", false);
	iVar0 = 0;
	iVar1 = get_clock_hours();
	if (iVar1 > uParam0->f_6)
	{
		iVar0 = (iVar0 + (iVar1 - uParam0->f_6));
	}
	else
	{
		iVar0 = (iVar0 + (uParam0->f_6 - iVar1));
	}
	iVar0 *= 1000;
	iVar0 += 3000;
	iVar0 = (iVar0 / 2);
	add_cam_spline_node(uParam0->f_2, uParam0->f_8, uParam0->f_8.f_3, iVar0, 3, 2);
	add_cam_spline_node(uParam0->f_2, uParam0->f_8.f_6, uParam0->f_8.f_9, iVar0, 3, 2);
	set_cam_fov(uParam0->f_2, uParam0->f_8.f_12);
	set_cam_active(uParam0->f_2, true);
}

bool func_1459(var uParam0)
{
	switch (func_1940(uParam0))
	{
		case 0:
			uParam0->f_24 = func_292();
			iVar4 = func_292();
			func_1227(&iVar4, uParam0->f_6);
			func_1228(&iVar4, 0);
			func_1229(&iVar4, 0);
			if (func_1065(uParam0->f_24, iVar4, 1))
			{
				func_341(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1852(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1941(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1942(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1941(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1942(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_341(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_716(iVar4), func_717(iVar4), func_718(iVar4));
				func_1943(get_clock_hours());
				func_1944(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1460(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1945(2000);
	Global_16 = 0;
	func_1946();
	set_entity_invincible(Global_35, func_1947(*iParam0, 8));
	if (!func_1947(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1947(*iParam0, 2) || func_1947(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1947(*iParam0, 16))
	{
		func_242(1);
	}
	if (func_1947(*iParam0, 32))
	{
		func_647(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1948(-1623728698, 0);
	}
	func_836(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1461(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _0x2024f4f333095fb1(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1462(char[4] cParam0)
{
	if (func_825(&(cParam0->f_7375), 128) || func_825(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1949(&(cParam0->f_7375));
		func_1361(&(cParam0->f_7375), 128, 1);
		func_1361(&(cParam0->f_7375), 256, 1);
		func_1361(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1463(char[4] cParam0)
{
	func_1950(&(cParam0->f_7375));
}

bool func_1464(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1951(uParam4, &cParam0);
	if (func_825(uParam4, 2) && !func_825(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1952(uParam4) != 1)
	{
		func_1953(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1952(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1954(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1955(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1956(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1957(cParam5);
				}
				func_1955(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_123(cParam5, func_35(cParam5), 262144))
				{
					if (!func_825(uParam4, 2097152))
					{
						func_1839(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_10(cParam5, 8) || func_825(uParam4, 134217728)))
				{
				}
				else
				{
					func_1787(uParam4);
				}
				func_227(&(uParam4->f_1));
				func_1955(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1958(uParam4);
				if (!func_28(&(uParam4->f_1)))
				{
					func_29(&(uParam4->f_1), 0);
				}
				else if (func_920(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1955(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1959(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1955(uParam4, 4);
					}
					else if (!func_396(func_1960(uParam4)) && !func_1961(Global_35, func_1960(uParam4), 100f, 1, 1))
					{
						func_1376(1);
						start_player_teleport(get_player_index(), func_1960(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_920(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1955(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_286(cParam5) != 0 || (func_156(cParam5) == 1 && func_164(cParam5, func_35(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_18(1, 0);
						func_1954(uParam4, &cParam0, cParam5);
						func_1955(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_920(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1955(uParam4, 4);
			}
			break;
		case 3:
			func_403(uParam4);
			if (func_1956(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1957(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_825(uParam4, 512)))
			{
				if (!func_825(uParam4, 1024) && func_1962(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_825(uParam4, 512))
				{
					func_227(&(uParam4->f_1));
					func_768(uParam4, 512);
					func_1955(uParam4, 4);
				}
				else if (func_825(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1953(uParam4);
			}
			if (func_825(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1963(uParam4) - func_1964(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					if (_0xef324e9550a394d5(uParam4->f_804))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_1965(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1964(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1966(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1967(uParam4);
				return true;
			}
			else
			{
				if (func_825(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_227(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_768(uParam4, 512);
						func_1361(uParam4, 67108864, 1);
						func_1955(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_825(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1964(uParam4) <= 5000) && func_1964(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_825(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1460(&(uParam4->f_861), 0);
					func_768(uParam4, 536870912);
				}
				if (func_1964(uParam4) >= 5000 && func_1964(uParam4) <= (func_1963(uParam4) - 5000))
				{
					func_1968();
				}
			}
			break;
		case 6:
			if (func_1966(uParam4))
			{
				func_1967(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_825(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_804))
					{
						func_768(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					if (!_is_anim_scene_paused(uParam4->f_804))
					{
						set_anim_scene_paused(uParam4->f_804, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (func_156(cParam5) == 1 && func_164(cParam5, func_35(cParam5)) >= 3)
				{
					if (func_1969(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1955(uParam4, 3);
					}
					else if (func_920(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1955(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1956(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1955(uParam4, 3);
					}
					else if (func_920(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1955(uParam4, 3);
					}
				}
				if (func_1952(uParam4) == 3)
				{
					if (func_825(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1955(uParam4, 4);
			break;
	}
	return false;
}

void func_1465(char[4] cParam0)
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		bVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(bVar1))
		{
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1364()))
			{
				if (!_0x88ad6cc10d8d35b2(bVar1))
				{
					set_entity_as_mission_entity(bVar1, true, true);
				}
				delete_entity(&bVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

bool func_1466(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_276(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1970(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_277(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1971(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1467(int iParam0)
{
	MemCopy(&cVar0, {func_276(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1468(int iParam0)
{
	Var0 = { func_1467(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1469(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1972(iVar0));
		iVar0++;
	}
}

void func_1470()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

bool func_1471(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0))
	{
		return false;
	}
	if (!is_ped_human(bParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(bParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(bParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1472(char[4] cParam0)
{
	if ((((func_35(cParam0) == iLocal_240 || func_35(cParam0) == iLocal_241) || func_35(cParam0) == iLocal_246) || func_35(cParam0) == iLocal_247) || func_35(cParam0) == iLocal_248)
	{
		return true;
	}
	return false;
}

bool func_1473(char[4] cParam0)
{
	if ((func_35(cParam0) == iLocal_246 || func_35(cParam0) == iLocal_247) || func_35(cParam0) == iLocal_248)
	{
		return true;
	}
	return false;
}

bool func_1474(char[4] cParam0)
{
	vVar0 = { func_1(5, 4) };
	if (func_905(cParam0, 14, &uLocal_1643, 0, vVar0.x, vVar0.y, vVar0.z, 0, 1, -1648322231, 1, 0, 1, 0))
	{
		func_1040(14, 1);
		_set_ped_body_component(iVar1640, 1074183062);
		_update_ped_variation(iVar1640, false, true, true, true, false);
		return true;
	}
	return false;
}

bool func_1475(var uParam0)
{
	return *uParam0 == *uParam0;
}

void func_1476(char[4] cParam0, bool bParam1, int iParam2, bool bParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_486(cParam0, bParam1))
	{
		if (!func_1973(cParam0, bParam1, &iVar0))
		{
			if (!func_1974(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	func_1013(cParam0->f_5423[iVar0], 1);
	cParam0->f_5423[iVar0] = bParam1;
	if (is_entity_a_ped(bParam1) && is_ped_human(get_ped_index_from_entity_index(bParam1)))
	{
		func_1013(cParam0->f_5423[iVar0], 128);
	}
	if (does_entity_exist(bParam3))
	{
		if (func_1363(bParam3))
		{
			cParam0->f_5423[iVar0]->f_1 = bParam3;
			func_1013(cParam0->f_5423[iVar0], 4);
			func_1013(cParam0->f_5423[iVar0], 16);
		}
		else if (is_entity_a_vehicle(bParam3))
		{
			cParam0->f_5423[iVar0]->f_1 = bParam3;
			func_1013(cParam0->f_5423[iVar0], 4);
			func_1013(cParam0->f_5423[iVar0], 8);
		}
	}
	cParam0->f_5423[iVar0]->f_4 = sParam4;
	cParam0->f_5423[iVar0]->f_7 = iParam5;
	cParam0->f_5423[iVar0]->f_6 = iParam6;
	if (is_entity_a_ped(bParam1))
	{
		if (iParam8 == -1)
		{
			if (get_ped_index_from_entity_index(bParam1) == func_222(7))
			{
				cParam0->f_5423[iVar0]->f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0]->f_9 = func_1975(bParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0]->f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0]->f_10 = iParam8;
		}
		if (func_533(cParam0->f_5423[iVar0]->f_10))
		{
		}
	}
	cParam0->f_13145++;
	if (is_entity_an_object(bParam1))
	{
		if (_0x26054eb81ac0893b(get_object_index_from_entity_index(bParam1)))
		{
			_0x2dd42fad06e6f19e(get_object_index_from_entity_index(bParam1), 1, 1);
		}
	}
	else if (is_entity_a_ped(bParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			cParam0->f_5423[iVar0]->f_23[iVar1]->f_3 = 248044;
			iVar1++;
		}
		func_1976(cParam0, bParam1, 2, 4);
		func_1977(cParam0, bParam1, 2500, 8);
		func_1977(cParam0, bParam1, 2500, 512);
		func_1978(cParam0, bParam1, 5000, 512);
		if (cParam0->f_5423[iVar0]->f_9 == 14)
		{
			func_1979(cParam0, bParam1, -2147483648);
		}
	}
}

bool func_1477(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_980(iParam0))
	{
		return false;
	}
	bVar1 = func_1980(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(bVar1))
	{
		return false;
	}
	if (bParam6)
	{
		if (!is_entity_dead(bVar1) && _0xa0bc8faed8cfeb3c(bVar1))
		{
			return bVar1;
		}
	}
	else
	{
		return bVar1;
	}
	return false;
}

void func_1478(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (!does_entity_exist(bParam2))
	{
		return;
	}
	if (!func_490(cParam0, bParam2, &iVar0))
	{
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_261(cParam0->f_5423[iVar1]))
		{
			if (cParam0->f_5423[iVar1]->f_1 == bParam1)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1 && does_entity_exist(cParam0->f_5423[iVar0]->f_1))
	{
		cParam0->f_5423[iVar2]->f_1 = cParam0->f_5423[iVar0]->f_1;
	}
	cParam0->f_5423[iVar0]->f_1 = bParam1;
	func_1013(cParam0->f_5423[iVar0], 64);
	if (is_entity_a_vehicle(bParam1))
	{
		func_1013(cParam0->f_5423[iVar0], 8);
	}
	else if (func_1363(bParam1))
	{
		func_1013(cParam0->f_5423[iVar0], 16);
	}
}

bool func_1479(char[4] cParam0)
{
	if ((func_35(cParam0) == iLocal_246 || func_35(cParam0) == iLocal_247) || func_35(cParam0) == iLocal_248)
	{
		return true;
	}
	return false;
}

bool func_1480()
{
	if (!does_entity_exist(bVar1648))
	{
		bLocal_1650 = func_1477(0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (does_entity_exist(bVar1648))
	{
		_0xba8818212633500a(bVar1648, 3, 1);
		set_ped_config_flag(bVar1648, 324, true);
		return true;
	}
	return false;
}

void func_1481(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_93))
	{
		Local_14.f_93 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_94[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_94[0] = create_object(436323736, 2726.442f, -1059.803f, 47.091f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_94[0]), 0f, 0f, 34.19f, 2, true);
		freeze_entity_position(&(Local_14.f_94[0]), bParam1);
	}
	func_1482(&(Local_14.f_94[0]), Local_14);
	func_1482(&(Local_14.f_94[0]), Local_14.f_93);
	if (!does_entity_exist(&(Local_14.f_94[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_94[1] = create_object(-1326909973, 2726.406f, -1059.822f, 47.091f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_94[1]), 0f, 0f, 34.19f, 2, true);
		freeze_entity_position(&(Local_14.f_94[1]), bParam1);
	}
	func_1482(&(Local_14.f_94[1]), Local_14);
	func_1482(&(Local_14.f_94[1]), Local_14.f_93);
	if (!does_entity_exist(&(Local_14.f_94[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_94[2] = create_object(-419756450, 2736.788f, -1085.058f, 46.1405f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_94[2]), 0f, 0f, 88.4179f, 2, true);
		freeze_entity_position(&(Local_14.f_94[2]), bParam1);
	}
	func_1482(&(Local_14.f_94[2]), Local_14);
	func_1482(&(Local_14.f_94[2]), Local_14.f_93);
}

void func_1482(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_in_itemset(iParam0, iParam1))
		{
			add_to_itemset(iParam0, iParam1);
		}
	}
}

void func_1483(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_98))
	{
		Local_14.f_98 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_99[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_99[0] = create_object(178323656, 2775.019f, -1078.265f, 47.015f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_99[0]), 0f, 0f, -104.7691f, 2, true);
		freeze_entity_position(&(Local_14.f_99[0]), bParam1);
	}
	func_1482(&(Local_14.f_99[0]), Local_14);
	func_1482(&(Local_14.f_99[0]), Local_14.f_98);
	if (!does_entity_exist(&(Local_14.f_99[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_99[1] = create_object(319326044, 2775.476f, -1078.161f, 47.015f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_99[1]), 0f, 0f, 3.5933f, 2, true);
		freeze_entity_position(&(Local_14.f_99[1]), bParam1);
	}
	func_1482(&(Local_14.f_99[1]), Local_14);
	func_1482(&(Local_14.f_99[1]), Local_14.f_98);
	if (!does_entity_exist(&(Local_14.f_99[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_99[2] = create_object(-274058460, 2776.792f, -1069.078f, 45.8905f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_99[2]), 0f, 0f, 57.7365f, 2, true);
		freeze_entity_position(&(Local_14.f_99[2]), bParam1);
	}
	func_1482(&(Local_14.f_99[2]), Local_14);
	func_1482(&(Local_14.f_99[2]), Local_14.f_98);
}

bool func_1484(char[4] cParam0)
{
	if (!func_1981(-1, 1))
	{
		return false;
	}
	iLocal_1517 = 0;
	while (iVar1514 < 2)
	{
		if (!is_entity_dead(&(Local_14.f_15[iVar1514])))
		{
			clear_ped_tasks(&(Local_14.f_15[iVar1514]), 1, 0);
			task_stand_still(&(Local_14.f_15[iVar1514]), -1);
			set_blocking_of_non_temporary_events(&(Local_14.f_15[iVar1514]), true);
			if (iVar1514 == 0)
			{
				remove_weapon_from_ped(&(Local_14.f_15[0]), -1471716628, true, -142743235);
				func_395(&(Local_14.f_15[0]), func_230(5, 2), 2, 1073741824);
				_set_ped_body_component(&(Local_14.f_15[0]), 1146234389);
				_update_ped_variation(&(Local_14.f_15[0]), false, true, true, true, false);
			}
			else if (iVar1514 == 1)
			{
				func_395(&(Local_14.f_15[1]), func_230(5, 3), 2, 1073741824);
			}
		}
		iLocal_1517 = iVar1514 + 1;
	}
	return true;
}

void func_1485(char[4] cParam0)
{
	if (!is_entity_dead(bVar1639))
	{
		func_153(cParam0, bVar1639, "Dutch", 0, 0, 0, 0);
		func_147(cParam0, bVar1639, "DUTCH", 0);
		if (func_35(cParam0) >= 5)
		{
			if (func_1505(cParam0, bVar1639, 128))
			{
				func_488(cParam0, bVar1639, 128);
			}
		}
		func_1816(bVar1639, -95736505, 6, 0, 2, 1056964608, 1065353216, 0);
		func_1982(bVar1639);
		set_blocking_of_non_temporary_events(bVar1639, true);
		if (func_35(cParam0) == iLocal_246 || func_35(cParam0) == iLocal_247)
		{
			func_395(bVar1639, func_230(5, 1), 2, 1073741824);
			set_blocking_of_non_temporary_events(bVar1639, true);
		}
		if (func_35(cParam0) == iLocal_240 && !func_122(cParam0, 16384))
		{
			func_395(bVar1639, func_230(8, 6), 2, 1073741824);
		}
	}
}

void func_1486(char[4] cParam0)
{
	if (!is_entity_dead(bVar1640))
	{
		clear_ped_tasks(bVar1640, 1, 0);
		task_stand_still(bVar1640, -1);
		func_395(bVar1640, func_230(5, 4), 2, 1073741824);
		set_blocking_of_non_temporary_events(bVar1640, true);
		func_153(cParam0, bVar1640, 0, 0, 0, 0, 0);
		func_147(cParam0, bVar1640, "Jack", 0);
		if (func_1505(cParam0, bVar1640, 128))
		{
			func_488(cParam0, bVar1640, 128);
		}
	}
}

void func_1487(char[4] cParam0)
{
	func_1983(-1, 0);
	if (!is_entity_dead(&(Local_14.f_3[0])))
	{
		clear_ped_tasks(&(Local_14.f_3[0]), 1, 0);
		task_stand_still(&(Local_14.f_3[0]), -1);
		func_395(&(Local_14.f_3[0]), func_230(6, 5), 2, 1073741824);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[0]), true);
	}
	iLocal_1652 = &Local_14.f_3[0];
	_give_weapon_to_ped_2(bVar1649, 379542007, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	_set_ped_body_component(&(Local_14.f_3[0]), 1146234389);
	_update_ped_variation(&(Local_14.f_3[0]), false, true, true, true, false);
	func_153(cParam0, bVar1649, sVar847, 0, 0, 0, 0);
	func_147(cParam0, bVar1649, "MOB2_Guard", 0);
}

void func_1488()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_entity_dead(&(Local_14.f_7[iVar0])))
		{
			clear_ped_tasks(&(Local_14.f_7[iVar0]), 1, 0);
			if (iVar0 == 0)
			{
				func_395(&(Local_14.f_7[0]), func_230(8, 1), 2, 1073741824);
			}
			else if (iVar0 == 1)
			{
				func_395(&(Local_14.f_7[1]), func_230(8, 2), 2, 1073741824);
			}
			else if (iVar0 == 2)
			{
				func_395(&(Local_14.f_7[2]), func_230(8, 3), 2, 1073741824);
			}
			else if (iVar0 == 3)
			{
				func_395(&(Local_14.f_7[3]), func_230(8, 4), 2, 1073741824);
			}
			func_1984(&(Local_14.f_7[iVar0]), 1, 0);
		}
		iVar0++;
	}
}

void func_1489(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	force_ped_motion_state(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, get_entity_heading(Global_35), bParam6, bParam7);
	}
	else
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

void func_1490(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iVar1988, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iVar1988, 1, 1f, 1, 0, 0, 1, 0);
		_0x3a77dae8b4fd7586(iVar1988, 1);
	}
}

void func_1491(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iVar1986, 1, 0f, 0, 0, 0, 0, 0);
		func_1004(iVar1987, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iVar1986, 0, -1f, 1, 0, 0, 1, 0);
		func_1004(iVar1987, 0, -1f, 1, 0, 0, 1, 0);
		_0x3a77dae8b4fd7586(iVar1986, 1);
		_0x3a77dae8b4fd7586(iVar1987, 1);
	}
}

void func_1492(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iVar1993, 1, 0f, 0, 0, 0, 0, 0);
		func_1004(iVar1994, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1004(iVar1993, 0, 0f, 0, 1, 0, 0, 0);
		func_1004(iVar1994, 0, 0f, 0, 1, 0, 0, 0);
	}
}

void func_1493(bool bParam0)
{
	if (bParam0)
	{
		func_1004(iVar1995, 1, 0f, 0, 0, 0, 1, 0);
		func_1004(iVar1996, 1, 0f, 0, 0, 0, 1, 0);
	}
	else
	{
		func_1004(iVar1995, 0, 0f, 0, 1, 0, 0, 0);
		func_1004(iVar1996, 0, 0f, 0, 1, 0, 0, 0);
	}
	_0xc07b91b996c1de89(iVar1995, 0);
	_0xc07b91b996c1de89(iVar1996, 0);
}

void func_1494()
{
	iLocal_1529 = 0;
}

void func_1495(int iParam0)
{
	func_1042(iParam0, 4, 1);
}

int func_1496(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1985(cParam0, bParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_1497(bool bParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0))
	{
		return false;
	}
	if (is_ped_injured(bParam0))
	{
		return false;
	}
	func_992(vParam1, fParam4, 0);
	clear_ped_tasks(bParam0, 1, 0);
	iVar0 = -1805387726;
	iVar1 = _find_closest_active_scenario_point_of_type(vParam1, iVar0, fParam4, 1, false);
	if (_does_scenario_point_exist(iVar1))
	{
		_task_use_scenario_point(bParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		task_stand_still(bParam0, -1);
	}
	return true;
}

bool func_1498(char[4] cParam0)
{
	return func_1962(&(cParam0->f_7375), 1);
}

int func_1499(vector3 vParam0, bool bParam3)
{
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		set_gameplay_cam_relative_heading(0f, 1f);
		if (bParam3)
		{
			func_1986(vParam0);
		}
		func_1987(vParam0);
		return 1;
	}
	return 0;
}

int func_1500(char[4] cParam0)
{
	return func_1964(&(cParam0->f_7375));
}

void func_1501(char[4] cParam0)
{
	iLocal_1517 = 0;
	while (iVar1514 < 5)
	{
		if (is_entity_dead(&(Local_14.f_7[iVar1514])) && &iLocal_258[iVar1514] != 51)
		{
			if ((_0x06fa94c835787c64(&(Local_14.f_7[iVar1514])) && !func_1287()) && !func_168(iVar1517, 32768))
			{
				if (func_1556(cParam0, "MOB2_WELLDONE", 0, 0, 0))
				{
					func_1311(iVar1514, 51);
					func_170(&uLocal_1520, 32768);
				}
			}
			else
			{
				func_1311(iVar1514, 51);
			}
		}
		iLocal_1517 = iVar1514 + 1;
	}
	func_1988();
	if (!func_168(iVar1523, 2048))
	{
		if (func_1989(Local_14.f_5) < 5 || (get_closest_ped(func_1341(player_id()), 2.5f, 0, 1, &bVar0, 0, 1, 0, -1) && bVar0 != bVar1638))
		{
			func_170(&uLocal_1526, 2048);
		}
	}
	if (func_1989(Local_14.f_5) == 0 && !func_168(iVar1523, 4096))
	{
		func_170(&uLocal_1526, 4096);
	}
	if (func_1989(Local_14.f_5) == 1 && !func_168(iVar1523, 8388608))
	{
		func_137(cParam0, 5);
		func_170(&uLocal_1526, 8388608);
	}
	if (func_1989(Local_14.f_5) == 2 && !func_168(iVar1523, 524288))
	{
		func_170(&uLocal_1526, 524288);
	}
	iLocal_1517 = 0;
	while (iVar1514 < 5)
	{
		if (iLocal_1539[iVar1514] && _is_anim_scene_metadata_loaded(&(uLocal_1704[iVar1514]), false))
		{
			_0xdf7b5144e25cd3fe(&(uLocal_1704[iVar1514]), sVar827);
			_0xdf7b5144e25cd3fe(&(uLocal_1704[iVar1514]), sVar826);
			iLocal_1539[iVar1514] = 0;
		}
		switch (&iLocal_258[iVar1514])
		{
			case 0:
				set_ped_combat_movement(&(Local_14.f_7[iVar1514]), 1);
				set_ped_path_can_use_climbovers(&(Local_14.f_7[iVar1514]), false);
				request_ped_visibility_tracking(&(Local_14.f_7[iVar1514]));
				set_blocking_of_non_temporary_events(&(Local_14.f_7[iVar1514]), true);
				_set_entity_health(&(Local_14.f_7[iVar1514]), get_entity_max_health(&(Local_14.f_7[iVar1514]), false), 0);
				set_ped_accuracy(&(Local_14.f_7[iVar1514]), 20);
				func_1311(iVar1514, 1);
				break;
			case 1:
				if (func_168(iVar1523, 1))
				{
					set_entity_visible(&(Local_14.f_7[iVar1514]), true);
					set_ped_relationship_group_hash(&(Local_14.f_7[iVar1514]), 1269650476);
					register_hated_targets_around_ped(&(Local_14.f_7[iVar1514]), 200f);
					iLocal_1622[iVar1514] = _blip_add_for_entity(831283580, &(Local_14.f_7[iVar1514]));
					_blip_set_modifier(&(iLocal_1622[iVar1514]), 2096805056);
					func_227(vLocal_2068[iVar1514]);
					if (iVar1514 == 0)
					{
						func_1311(iVar1514, 4);
					}
					else if (iVar1514 == 1)
					{
						func_1311(iVar1514, 4);
					}
					else if (iVar1514 == 2)
					{
						func_1311(iVar1514, 2);
					}
					else if (iVar1514 == 3)
					{
						func_1311(iVar1514, 8);
					}
					else if (iVar1514 == 4)
					{
						func_1311(iVar1514, 8);
					}
				}
				break;
			case 4:
				set_entity_invincible(&(Local_14.f_7[iVar1514]), true);
				Local_2215 = { get_entity_coords(&(Local_14.f_7[iVar1514]), true, false) };
				Local_2215.f_3 = get_entity_heading(&(Local_14.f_7[iVar1514]));
				if (func_1990(cParam0))
				{
					if (iVar1514 == 0)
					{
						func_1991(&(Local_14.f_7[iVar1514]), Local_2215, Local_2215.f_3);
					}
					else if (iVar1514 == 1)
					{
						func_1992(&(Local_14.f_7[iVar1514]), Local_2215, Local_2215.f_3);
					}
					else
					{
						func_1311(iVar1514, 2);
					}
					func_1311(iVar1514, 5);
				}
				break;
			case 5:
				if ((iVar1514 == 0 && !_is_anim_scene_started(&(uLocal_1682[12]), false)) || (iVar1514 == 1 && !_is_anim_scene_started(&(uLocal_1682[13]), false)))
				{
					if (func_168(iVar1523, 2048))
					{
						func_1311(iVar1514, 8);
					}
					else
					{
						func_1311(iVar1514, 2);
					}
				}
				break;
			case 2:
				if (iVar1514 == 0)
				{
					*Local_2194[iVar1514] = { func_230(1, 4) };
				}
				else if (iVar1514 == 1)
				{
					*Local_2194[iVar1514] = { func_230(1, 5) };
				}
				else if (iVar1514 == 2)
				{
					*Local_2194[iVar1514] = { func_230(1, 6) };
				}
				else if (iVar1514 == 3)
				{
					*Local_2194[iVar1514] = { func_230(1, 7) };
				}
				else if (iVar1514 == 4)
				{
					*Local_2194[iVar1514] = { func_230(1, 13) };
				}
				register_target(bVar1638, &(Local_14.f_7[iVar1514]), 1);
				set_ped_sphere_defensive_area(&(Local_14.f_7[iVar1514]), *Local_2194[iVar1514], 2f, 0, 0, 0);
				func_227(vLocal_2068[iVar1514]);
				if (func_903(&(Local_14.f_7[iVar1514]), *Local_2194[iVar1514], 1) > 2f && !func_1993(&(Local_14.f_7[iVar1514])))
				{
					open_sequence_task(&uLocal_1613);
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, *Local_2194[iVar1514], Global_36, 2f, false, 2f, 2f, true, 1, 0, -687903391);
					close_sequence_task(iVar1610);
					task_perform_sequence(&(Local_14.f_7[iVar1514]), iVar1610);
					clear_sequence_task(&uLocal_1613);
					func_1311(iVar1514, 3);
				}
				else
				{
					func_1311(iVar1514, 6);
				}
				break;
			case 3:
				if (func_903(&(Local_14.f_7[iVar1514]), *Local_2194[iVar1514], 1) < 2f || (get_script_task_status(&(Local_14.f_7[iVar1514]), 242628503, true) != 0 && get_script_task_status(&(Local_14.f_7[iVar1514]), 242628503, true) != 1))
				{
					func_1311(iVar1514, 6);
					func_227(vLocal_2068[iVar1514]);
				}
				break;
			case 6:
				if (!func_1993(&(Local_14.f_7[iVar1514])))
				{
					set_entity_invincible(&(Local_14.f_7[iVar1514]), false);
					register_hated_targets_around_ped(&(Local_14.f_7[iVar1514]), 50f);
					open_sequence_task(&uLocal_1613);
					task_combat_hated_targets_around_ped(0, 200f, 0, 0);
					close_sequence_task(iVar1610);
					task_perform_sequence(&(Local_14.f_7[iVar1514]), iVar1610);
					clear_sequence_task(&uLocal_1613);
					func_1311(iVar1514, 7);
				}
				break;
			case 7:
				if (func_168(iVar1523, 2048))
				{
					func_1311(iVar1514, 8);
					if (iVar1514 == 0)
					{
						fLocal_812[iVar1514] = 0.5f;
					}
					else if (iVar1514 == 1)
					{
						fLocal_812[iVar1514] = 1f;
					}
					else if (iVar1514 == 2)
					{
						fLocal_812[iVar1514] = 0.25f;
					}
					else if (iVar1514 == 3)
					{
						fLocal_812[iVar1514] = 0.5f;
					}
					else if (iVar1514 == 4)
					{
						fLocal_812[iVar1514] = 0.5f;
					}
					func_227(vLocal_2068[iVar1514]);
				}
				break;
			case 8:
				if (func_1286(vLocal_2068[iVar1514]) > &fLocal_812[iVar1514] && !func_1993(&(Local_14.f_7[iVar1514])))
				{
					remove_ped_defensive_area(&(Local_14.f_7[iVar1514]), false);
					open_sequence_task(&uLocal_1613);
					if (iVar1514 == 0)
					{
						task_follow_nav_mesh_to_coord(0, func_1(1, 11), 3f, 20000, 0.25f, 0, 40000f);
					}
					else if (iVar1514 == 1)
					{
						task_follow_nav_mesh_to_coord(0, func_1(1, 8), 3f, 20000, 0.25f, 0, 40000f);
					}
					else if (iVar1514 == 2)
					{
						task_follow_nav_mesh_to_coord(0, func_1(1, 11), 3f, 20000, 0.25f, 0, 40000f);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, func_1(1, 12), 3f, 20000, 0.25f, 0, 40000f);
					}
					close_sequence_task(iVar1610);
					task_perform_sequence(&(Local_14.f_7[iVar1514]), iVar1610);
					clear_sequence_task(&uLocal_1613);
					func_227(vLocal_2068[iVar1514]);
					func_1311(iVar1514, 9);
				}
				break;
			case 9:
				if (!func_1994(&(Local_14.f_7[iVar1514]), 1435919172) && !func_1993(&(Local_14.f_7[iVar1514])))
				{
					func_1311(iVar1514, 15);
				}
				break;
			case 11:
				break;
			case 15:
				if (func_479(&(Local_14.f_7[iVar1514]), 0) && !func_1993(&(Local_14.f_7[iVar1514])))
				{
					iVar1 = 263429;
					_task_smart_flee_style_ped(&(Local_14.f_7[iVar1514]), Global_35, 3, iVar1, -1f, -1, 0);
					func_1995(iVar1514, 0);
					func_1311(iVar1514, 16);
				}
				break;
			case 16:
				if ((!is_tracked_ped_visible(&(Local_14.f_7[iVar1514])) && !has_entity_clear_los_to_entity(Global_35, &(Local_14.f_7[iVar1514]), 17)) && _0x511f1a683387c7e2(&(Local_14.f_7[iVar1514])) < 10)
				{
					if (func_28(vLocal_2068[iVar1514]))
					{
						if (func_1286(vLocal_2068[iVar1514]) > 1f)
						{
							func_1311(iVar1514, 13);
						}
					}
					else
					{
						func_227(vLocal_2068[iVar1514]);
					}
				}
				else
				{
					func_570(vLocal_2068[iVar1514]);
					if ((get_script_task_status(&(Local_14.f_7[iVar1514]), 518218985, true) != 0 && get_script_task_status(&(Local_14.f_7[iVar1514]), 518218985, true) != 1) && !is_ped_fleeing(&(Local_14.f_7[iVar1514])))
					{
						func_1311(iVar1514, 15);
					}
				}
				break;
			case 12:
				if ((!is_tracked_ped_visible(&(Local_14.f_7[iVar1514])) && !has_entity_clear_los_to_entity(Global_35, &(Local_14.f_7[iVar1514]), 17)) && _0x511f1a683387c7e2(&(Local_14.f_7[iVar1514])) < 10)
				{
					func_1311(iVar1514, 13);
				}
				else
				{
					func_1311(iVar1514, 15);
				}
				break;
			case 13:
				if (does_blip_exist(&(iLocal_1622[iVar1514])))
				{
					remove_blip(iLocal_1622[iVar1514]);
				}
				set_entity_invincible(&(Local_14.f_7[iVar1514]), true);
				set_entity_visible(&(Local_14.f_7[iVar1514]), false);
				freeze_entity_position(&(Local_14.f_7[iVar1514]), true);
				set_entity_collision(&(Local_14.f_7[iVar1514]), false, false);
				clear_ped_tasks_immediately(&(Local_14.f_7[iVar1514]), true, true);
				set_blocking_of_non_temporary_events(&(Local_14.f_7[iVar1514]), true);
				set_ped_config_flag(&(Local_14.f_7[iVar1514]), 169, true);
				func_227(vLocal_2068[iVar1514]);
				func_227(vLocal_2068[iVar1514]);
				func_1311(iVar1514, 14);
				break;
			case 14:
				if (func_1286(vLocal_2068[iVar1514]) > 1f)
				{
					if (func_1996(&(uLocal_1704[iVar1514])))
					{
						func_570(vLocal_2068[iVar1514]);
						func_1311(iVar1514, 17);
					}
				}
				break;
			case 17:
				if (func_28(&uLocal_2084) && func_1286(&uLocal_2084) > 1f)
				{
					func_1292(&uLocal_1526, 1048576);
					func_570(&uLocal_2084);
				}
				if (func_168(iVar1523, 524288) && !(func_168(iVar1523, 1048576) || func_168(iVar1523, 2097152)))
				{
					vLocal_742 = { get_offset_from_entity_in_world_coords(Global_35, 0f, -3f, 0f) };
					func_170(&uLocal_1526, 1048576);
					if (func_903(bVar1638, vLocal_742, 1) > 6f && absf(get_gameplay_cam_relative_heading()) < 90f)
					{
						iVar2 = 3167;
						iLocal_1499[iVar1514] = start_shape_test_los_probe(get_entity_coords(player_ped_id(), true, false), vLocal_742, iVar2, player_ped_id(), 7);
						func_1311(iVar1514, 22);
					}
				}
				else
				{
					iVar3 = 0;
					if (func_1997(get_entity_coords(Global_35, true, false), get_entity_coords(&(Local_14.f_7[iVar1514]), true, false), &iVar3, uVar1495, uVar1494))
					{
						iVar4 = 3167;
						iLocal_1499[iVar1514] = start_shape_test_los_probe(get_entity_coords(player_ped_id(), true, false), Local_854[iVar3]->f_7, iVar4, player_ped_id(), 7);
						iLocal_1505[iVar1514] = iVar3;
						Local_854[&iLocal_1505[iVar1514]]->f_19 = 1;
						func_1311(iVar1514, 18);
					}
				}
				break;
			case 18:
				iVar6 = -1;
				vVar7 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				iVar13 = 0;
				iVar5 = get_shape_test_result(&(iLocal_1499[iVar1514]), &iVar6, &vVar7, &vVar10, &iVar13);
				if (iVar5 == 2)
				{
					if (iVar6 > 0)
					{
						iVar14 = 0;
						iVar15 = 0;
						iVar14 = _0xdfe332a5da6fe7c9(Local_854[&iLocal_1505[iVar1514]]->f_1);
						iVar15 = _0xdfe332a5da6fe7c9(Local_854[&iLocal_1505[iVar1514]]->f_2);
						bVar16 = false;
						if (iVar14 > iVar15)
						{
							bVar16 = true;
						}
						vVar17 = { func_1809(Local_854[&iLocal_1505[iVar1514]]->f_3.f_3) };
						vVar20 = { func_1810(Local_854[&iLocal_1505[iVar1514]]->f_3 - get_entity_coords(player_ped_id(), true, false)) };
						fVar23 = func_1998(vVar20, vVar17);
						fVar24 = 0f;
						if (fVar23 > 0f)
						{
							bVar16 = !bVar16;
							vVar17 = { vVar17 * Vector(-1f, -1f, -1f) };
							fVar24 = get_heading_from_vector_2d(vVar17.x, vVar17.y);
						}
						else
						{
							fVar24 = Local_854[&iLocal_1505[iVar1514]]->f_3.f_3;
						}
						if (bVar16)
						{
							sVar25 = sVar826;
						}
						else
						{
							sVar25 = sVar827;
						}
						if (!does_blip_exist(&(iLocal_1622[iVar1514])))
						{
							iLocal_1622[iVar1514] = _blip_add_for_entity(831283580, &(Local_14.f_7[iVar1514]));
							_blip_set_modifier(&(iLocal_1622[iVar1514]), 2096805056);
						}
						func_817(&(Local_14.f_7[iVar1514]), Local_854[&iLocal_1505[iVar1514]]->f_7, fVar24, 2, 1073741824);
						func_1995(iVar1514, 1);
						set_entity_collision(&(Local_14.f_7[iVar1514]), true, false);
						set_entity_visible(&(Local_14.f_7[iVar1514]), true);
						set_entity_invincible(&(Local_14.f_7[iVar1514]), false);
						freeze_entity_position(&(Local_14.f_7[iVar1514]), false);
						set_ped_config_flag(&(Local_14.f_7[iVar1514]), 169, false);
						func_227(vLocal_2068[iVar1514]);
						func_1999(uLocal_1704[iVar1514], sVar25, iVar1514, Local_854[&iLocal_1505[iVar1514]]->f_3);
						if (!_0xa2cac9def0195e6f(1))
						{
							iVar26 = iVar1514;
							if (iVar1529 == iVar26)
							{
								if (iVar1529 != 0)
								{
									iVar26 = 0;
								}
							}
							if (iVar1514 == 0)
							{
								if (iVar1529 != 0)
								{
									iVar26 = func_2000();
								}
							}
							switch (iVar26)
							{
								case 0:
									if (!func_168(iVar1518, 4))
									{
										func_147(cParam0, &(Local_14.f_7[iVar26]), "MOB2_Robber1", 0);
										func_170(&uLocal_1521, 4);
									}
									func_137(cParam0, 10);
									break;
								case 1:
									if (!func_168(iVar1518, 8))
									{
										func_147(cParam0, &(Local_14.f_7[iVar26]), "MOB2_Robber2", 0);
										func_170(&uLocal_1521, 8);
									}
									func_137(cParam0, 11);
									break;
								case 2:
									if (!func_168(iVar1518, 16))
									{
										func_147(cParam0, &(Local_14.f_7[iVar26]), "MOB2_Robber3", 0);
										func_170(&uLocal_1521, 16);
									}
									func_137(cParam0, 12);
									break;
								case 3:
									if (!func_168(iVar1518, 32))
									{
										func_147(cParam0, &(Local_14.f_7[iVar26]), "MOB2_Robber4", 0);
										func_170(&uLocal_1521, 32);
									}
									func_137(cParam0, 13);
									break;
							}
						}
						func_1311(iVar1514, 19);
					}
				}
				else if (iVar5 == 1)
				{
				}
				else
				{
					Local_854[&iLocal_1505[iVar1514]]->f_19 = 0;
					func_1311(iVar1514, 17);
				}
				break;
			case 22:
				iVar28 = -1;
				vVar29 = { 0f, 0f, 0f };
				vVar32 = { 0f, 0f, 0f };
				iVar35 = 0;
				iVar27 = get_shape_test_result(&(iLocal_1499[iVar1514]), &iVar28, &vVar29, &vVar32, &iVar35);
				if (iVar27 == 2)
				{
					if (iVar28 == 0)
					{
						func_817(&(Local_14.f_7[iVar1514]), vLocal_742, func_1390(vLocal_742, func_1341(player_id()), 1), 2, 1073741824);
						iLocal_1536 = iVar1514;
						set_entity_collision(&(Local_14.f_7[iVar1514]), true, false);
						set_entity_visible(&(Local_14.f_7[iVar1514]), true);
						set_entity_invincible(&(Local_14.f_7[iVar1514]), false);
						freeze_entity_position(&(Local_14.f_7[iVar1514]), false);
						set_ped_config_flag(&(Local_14.f_7[iVar1514]), 169, false);
						func_1311(iVar1514, 23);
					}
				}
				else if (iVar27 == 1)
				{
				}
				else
				{
					func_227(&uLocal_2084);
					func_1311(iVar1514, 17);
				}
				break;
			case 23:
				set_current_ped_weapon(&(Local_14.f_7[iVar1514]), -1569615261, false, 0, false, false);
				open_sequence_task(&uLocal_1613);
				task_swap_weapon(false, 0, 0, 0, 0);
				task_grapple(0, Global_35, 0, 1, 3f, 1, 0);
				close_sequence_task(iVar1610);
				task_perform_sequence(&(Local_14.f_7[iVar1514]), iVar1610);
				clear_sequence_task(&uLocal_1613);
				func_170(&uLocal_1526, 2097152);
				func_1311(iVar1514, 24);
				break;
			case 24:
				if (!does_blip_exist(&(iLocal_1622[iVar1514])) && func_912(Global_35, &(Local_14.f_7[iVar1514]), 1, 1) < 1f)
				{
					if (!is_entity_dead(&(Local_14.f_7[iVar1514])))
					{
						iLocal_1622[iVar1514] = _blip_add_for_entity(831283580, &(Local_14.f_7[iVar1514]));
						_blip_set_modifier(&(iLocal_1622[iVar1514]), 2096805056);
					}
				}
				set_ped_reset_flag(&(Local_14.f_7[iVar1514]), 23, true);
				if (_0x3bdfcf25b58b0415(Global_35))
				{
					if (!func_168(iVar1515, 536870912))
					{
						func_137(cParam0, 3);
						func_170(&uLocal_1518, 536870912);
					}
				}
				if (get_script_task_status(&(Local_14.f_7[iVar1514]), 242628503, true) != 0 && get_script_task_status(&(Local_14.f_7[iVar1514]), 242628503, true) != 1)
				{
					func_1311(iVar1514, 23);
				}
				break;
			case 19:
				if (!_is_anim_scene_started(&(uLocal_1704[iVar1514]), false))
				{
					reset_anim_scene(&(uLocal_1704[iVar1514]), 0);
					load_anim_scene(&(uLocal_1704[iVar1514]));
					iLocal_1539[iVar1514] = 1;
					if (!is_ped_being_stealth_killed(&(Local_14.f_7[iVar1514])) && !is_entity_dead(&(Local_14.f_7[iVar1514])))
					{
						uLocal_1511[iVar1514] = &uLocal_1511[iVar1514] + 1;
						if (&uLocal_1511[iVar1514] < 3)
						{
							func_1311(iVar1514, 12);
						}
						else
						{
							func_1311(iVar1514, 20);
						}
					}
				}
				break;
			case 20:
				clear_ped_tasks(&(Local_14.f_7[iVar1514]), 1, 0);
				func_1995(iVar1514, 1);
				set_ped_combat_movement(&(Local_14.f_7[iVar1514]), 1);
				set_blocking_of_non_temporary_events(&(Local_14.f_7[iVar1514]), true);
				vVar36 = { 0f, 0f, 0f };
				if (!func_1993(&(Local_14.f_7[iVar1514])))
				{
					if (func_2001(get_entity_coords(&(Local_14.f_7[iVar1514]), true, false), &vVar36))
					{
						set_ped_sphere_defensive_area(&(Local_14.f_7[iVar1514]), vVar36, 3f, 1, 0, 0);
						_0xcf0b19806473d324(&(Local_14.f_7[iVar1514]), vVar36);
						open_sequence_task(&uLocal_1613);
						task_go_to_coord_while_aiming_at_entity(0, vVar36, bVar1638, 2f, 1, 0.5f, 0.5f, 1, 4, 0, -687903391, 20000, 0);
						task_combat_hated_targets_around_ped(0, 50f, 0, 0);
						close_sequence_task(iVar1610);
						task_perform_sequence(&(Local_14.f_7[iVar1514]), iVar1610);
						clear_sequence_task(&uLocal_1613);
					}
					else
					{
						open_sequence_task(&uLocal_1613);
						task_combat_hated_targets_around_ped(0, 50f, 0, 0);
						close_sequence_task(iVar1610);
						task_perform_sequence(&(Local_14.f_7[iVar1514]), iVar1610);
						clear_sequence_task(&uLocal_1613);
					}
				}
				func_227(vLocal_2068[iVar1514]);
				func_1311(iVar1514, 21);
				break;
			case 21:
				if (((func_2002(&(Local_14.f_7[iVar1514]), 1, 1, 1, 0, 0) || func_912(Global_35, &(Local_14.f_7[iVar1514]), 1, 1) < 5f) || func_912(Global_35, &(Local_14.f_7[iVar1514]), 1, 1) > 20f) || func_1286(vLocal_2068[iVar1514]) > 3f)
				{
					func_1311(iVar1514, 15);
				}
				break;
			case 49:
				if (!does_blip_exist(&(iLocal_1622[iVar1514])))
				{
					iLocal_1622[iVar1514] = _blip_add_for_entity(831283580, &(Local_14.f_7[iVar1514]));
				}
				clear_ped_tasks(&(Local_14.f_7[iVar1514]), 1, 0);
				freeze_entity_position(&(Local_14.f_7[iVar1514]), false);
				set_entity_visible(&(Local_14.f_7[iVar1514]), true);
				set_entity_invincible(&(Local_14.f_7[iVar1514]), false);
				set_entity_collision(&(Local_14.f_7[iVar1514]), true, false);
				set_ped_config_flag(&(Local_14.f_7[iVar1514]), 169, false);
				register_target(&(Local_14.f_7[iVar1514]), Global_35, 1);
				_0xd8736efda38edc5c(&(Local_14.f_7[iVar1514]), get_entity_coords(&(Local_14.f_7[iVar1514]), true, false), 200f);
				_set_entity_health(&(Local_14.f_7[iVar1514]), 80, 0);
				_0x1854217c640b39ec(&(Local_14.f_7[iVar1514]), Global_35, 0f, 0f, 0f, 10f, 0, 0);
				task_combat_hated_targets_in_area(&(Local_14.f_7[iVar1514]), get_entity_coords(Global_35, true, false), 200f, 0, 0);
				set_ped_combat_movement(&(Local_14.f_7[iVar1514]), 2);
				set_ped_combat_range(&(Local_14.f_7[iVar1514]), 0);
				set_ped_path_can_use_climbovers(&(Local_14.f_7[iVar1514]), false);
				func_1311(iVar1514, 50);
				break;
			case 51:
				if (iVar1533 == iVar1514)
				{
					if (func_168(iVar1515, 536870912))
					{
						if (!func_168(iVar1515, 1073741824))
						{
							func_137(cParam0, 4);
							func_170(&uLocal_1518, 1073741824);
						}
					}
				}
				if (!func_168(iVar1523, 32768))
				{
					if (is_entity_dead(&(Local_14.f_7[iVar1531])))
					{
						func_475(&iLocal_1628);
						func_170(&uLocal_1526, 32768);
					}
				}
				if (!func_168(iVar1523, 65536))
				{
					if (is_entity_dead(&(Local_14.f_7[iVar1530])))
					{
						func_475(&iLocal_1629);
						func_170(&uLocal_1526, 65536);
					}
				}
				break;
		}
		iLocal_1517 = iVar1514 + 1;
	}
}

bool func_1502(char[4] cParam0)
{
	bVar0 = true;
	switch (iVar1675)
	{
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_1682[15]), true, false))
			{
				bVar0 = false;
			}
			if (!func_2003(&(uLocal_1682[15]), "PL_IG22_JACK_ON_HORSE"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_1678 = 2;
			}
			break;
		case 2:
			iLocal_1678 = 3;
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_1682[15]), "JackMarston", iVar1640, 0);
			set_anim_scene_entity(&(uLocal_1682[15]), "JohnMarston", iVar1638, 0);
			set_anim_scene_entity(&(uLocal_1682[15]), "P_C_HORSE_01", iVar1648, 0);
			iLocal_1678 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1503(bool bParam0)
{
	if (does_entity_exist(iVar1638))
	{
		set_entity_visible(iVar1638, bParam0);
	}
	if (does_entity_exist(iVar1639))
	{
		set_entity_visible(iVar1639, bParam0);
	}
	if (does_entity_exist(iVar1640))
	{
		set_entity_visible(iVar1640, bParam0);
	}
	iLocal_1517 = 0;
	while (iVar1514 < 2)
	{
		if (does_entity_exist(&(Local_14.f_15[iVar1514])))
		{
			set_entity_visible(&(Local_14.f_15[iVar1514]), bParam0);
		}
		iLocal_1517 = iVar1514 + 1;
	}
}

void func_1504(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_1505(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	if (!func_490(cParam0, bParam1, &iVar0))
	{
		return false;
	}
	return func_532(cParam0->f_5423[iVar0], iParam2);
}

Vector3 func_1506(int iParam0, char* sParam1, char* sParam2)
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

float func_1507(int iParam0, char* sParam1, char* sParam2)
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

void func_1508(char[4] cParam0)
{
	func_266(cParam0, 3, bVar1642, 0, 0, 0, 0);
	func_266(cParam0, 13, bVar1641, 0, 0, 0, 0);
	func_266(cParam0, 14, bVar1640, 0, 0, 0, 0);
	func_266(cParam0, 0, bVar1639, 0, 0, 0, 0);
	func_266(cParam0, 15, bVar1643, 0, 0, 0, 0);
	func_266(cParam0, 20, bVar1644, 0, 0, 0, 0);
	func_266(cParam0, 5, bVar1645, 0, 0, 0, 0);
}

void func_1509(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1555(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_87(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_142(cParam0, func_35(cParam0), 33554432);
}

bool func_1510(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_2004(Global_1359489->f_11, bParam0, bParam1, bParam2))
	{
		if (Global_1359489->f_11 < 26)
		{
			iVar0 = Global_1359489->f_11;
			iVar0++;
			Global_1359489->f_11 = iVar0;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1511(char[4] cParam0)
{
	if (func_35(cParam0) == iLocal_245)
	{
		if (func_168(iVar1522, 64))
		{
			func_2005(cParam0, bVar1638, 1, 0);
		}
		else
		{
			func_2005(cParam0, bVar1638, 1, 1);
		}
	}
	else
	{
		func_2005(cParam0, bVar1638, 1, 1);
	}
}

void func_1512(char[4] cParam0)
{
	if ((((func_35(cParam0) == iLocal_240 || func_35(cParam0) == iLocal_241) || func_35(cParam0) == iLocal_242) || func_35(cParam0) == iLocal_245) || func_35(cParam0) == iLocal_244)
	{
		if (func_2006(7))
		{
			func_193(7);
		}
	}
	else if (func_35(cParam0) == iLocal_243)
	{
		if (func_974(player_id(), 1, 0, 1))
		{
			if (func_2006(7))
			{
				func_193(7);
			}
		}
		else if (!func_2006(7))
		{
			func_2007(7);
		}
	}
	else if (func_35(cParam0) == iLocal_246 || func_35(cParam0) == iLocal_247)
	{
		if (func_2006(7))
		{
			func_193(7);
		}
	}
}

void func_1513()
{
	if (_does_volume_exist(Local_150.f_1))
	{
		if (is_entity_in_volume(Global_35, Local_150.f_1, true, 0))
		{
			func_1861(0);
		}
	}
}

void func_1514(char[4] cParam0)
{
	if (func_35(cParam0) == iLocal_240)
	{
		func_1360(20, 0, 0, 0);
	}
	else if ((((func_35(cParam0) == iLocal_241 || func_35(cParam0) == iLocal_242) || func_35(cParam0) == iLocal_243) || func_35(cParam0) == iLocal_244) || func_35(cParam0) == iLocal_245)
	{
		func_1360(21, 0, 0, 0);
	}
	else if (func_35(cParam0) == iLocal_246)
	{
		func_1360(22, 0, 0, 0);
	}
	else if (func_35(cParam0) == iLocal_247)
	{
		func_1360(0, 0, 0, 0);
	}
}

void func_1515(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (iVar0 == iLocal_242)
	{
		disable_control_action(0, 1410711112, false);
	}
	if (iVar0 == iLocal_247)
	{
		_0x16752daa7e6d3f72(player_id());
		set_all_random_peds_flee_this_frame(player_id());
	}
	if ((iVar0 == iLocal_243 || iVar0 == iLocal_244) || func_1284(player_ped_id(), Local_150.f_1, 1, 0))
	{
		_0xc3abcfbc7d74afa5(Global_35, 0, 1);
	}
}

void func_1516(char[4] cParam0)
{
	if (func_479(Global_35, 0))
	{
		if (func_35(cParam0) == iLocal_242)
		{
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
		}
	}
}

void func_1517(char[4] cParam0)
{
	func_2008(cParam0);
	func_2009(cParam0);
}

void func_1518(char[4] cParam0)
{
	func_2010(cParam0);
	func_2011(cParam0);
}

void func_1519(char[4] cParam0)
{
	switch (iVar283)
	{
		case 0:
			iLocal_286 = 1;
			break;
		case 1:
			if ((func_35(cParam0) == iLocal_245 || func_35(cParam0) == iLocal_246) || iLocal_143 >= 6)
			{
				_play_sound_from_position("Police_Whistle_Distant", 2725.399f, -1100.067f, 52.77628f, sVar821, false, 0, true, 0);
				iLocal_286 = 2;
			}
			break;
		case 2:
			if ((is_ped_on_mount(Global_35) && func_35(cParam0) == iLocal_246) || func_35(cParam0) > iLocal_246)
			{
				iLocal_286 = 3;
			}
			break;
		case 3:
			func_167();
			iLocal_286 = 4;
			break;
		case 4:
			break;
	}
}

void func_1520(char[4] cParam0, int iParam1)
{
	if ((iParam1 == iLocal_240 || iParam1 == iLocal_241) || iParam1 == iLocal_245)
	{
		if (!func_168(iVar1515, 64))
		{
			func_2012(0.4f);
			func_170(&uLocal_1519, 64);
		}
		_0xf45e46deecf7df6e(6144, 0, 0, -1, -1);
		set_vehicle_density_multiplier_this_frame(0.4f);
		_0xab0d553fe20a6e25(0.4f);
		set_random_vehicle_density_multiplier_this_frame(0.4f);
		set_parked_vehicle_density_multiplier_this_frame(0.4f);
		set_scenario_ped_density_multiplier_this_frame(0.4f);
	}
	else if (iParam1 == iLocal_246)
	{
		if (!func_168(iVar1515, -2147483648))
		{
			func_2012(1f);
			func_170(&uLocal_1519, -2147483648);
		}
		_0xf45e46deecf7df6e(6144, 0, 0, -1, -1);
		set_vehicle_density_multiplier_this_frame(0.4f);
		_0xab0d553fe20a6e25(0.4f);
		set_random_vehicle_density_multiplier_this_frame(0.4f);
		set_parked_vehicle_density_multiplier_this_frame(0.4f);
		set_scenario_ped_density_multiplier_this_frame(0.4f);
	}
	else if (iParam1 == iLocal_247)
	{
		if (!func_168(iVar1515, 1073741824))
		{
			func_2012(0.8f);
			func_170(&uLocal_1519, 1073741824);
		}
		_0xf45e46deecf7df6e(6144, 0, 0, -1, -1);
		set_vehicle_density_multiplier_this_frame(0.4f);
		_0xab0d553fe20a6e25(0.4f);
		set_random_vehicle_density_multiplier_this_frame(0.4f);
		set_parked_vehicle_density_multiplier_this_frame(0.4f);
		set_scenario_ped_density_multiplier_this_frame(0.4f);
	}
	else if ((iParam1 == iLocal_242 || iParam1 == iLocal_243) || iParam1 == iLocal_244)
	{
		if (!func_168(iVar1515, 128))
		{
			func_2012(0f);
			func_170(&uLocal_1519, 128);
			func_1292(&uLocal_1519, 64);
		}
		_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
}

void func_1521()
{
	if (!is_entity_dead(Global_35))
	{
		_0xc6981aff6d2a71c2(Global_35);
		set_ped_reset_flag(Global_35, 94, true);
	}
	if (!is_entity_dead(iVar1639))
	{
		_0xc6981aff6d2a71c2(iVar1639);
		set_ped_reset_flag(iVar1639, 94, true);
	}
}

void func_1522()
{
	if (func_1284(Global_35, Local_150.f_88, 1, 0))
	{
		disable_control_action(0, -822242784, false);
		if (is_ped_on_mount(Global_35))
		{
			iVar0 = get_mount(Global_35);
			if (!is_entity_dead(iVar0))
			{
				iLocal_1653 = iVar0;
				if (get_script_task_status(Global_35, 501393341, true) != 0 && get_script_task_status(Global_35, 501393341, true) != 1)
				{
					set_ped_max_move_blend_ratio(iVar0, 1f);
					task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	if (does_entity_exist(bVar1651))
	{
		if (!is_entity_dead(bVar1651))
		{
			if (func_1284(bVar1651, Local_150.f_88, 1, 0))
			{
				if (get_script_task_status(bVar1651, 242628503, true) != 0 && get_script_task_status(bVar1651, 242628503, true) != 1)
				{
					open_sequence_task(&uLocal_1613);
					task_follow_nav_mesh_to_coord(0, func_1(0, 0), 1f, 20000, 0.25f, 1048580, func_1007(0, 0));
					close_sequence_task(iVar1611);
					task_perform_sequence(bVar1651, iVar1611);
					clear_sequence_task(&uLocal_1613);
				}
			}
		}
	}
}

void func_1523()
{
	if (does_entity_exist(Global_35) && is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (does_entity_exist(&(Local_14.f_52[iVar0])) && !is_entity_dead(&(Local_14.f_52[iVar0])))
		{
			if (func_912(Global_35, &(Local_14.f_52[iVar0]), 1, 1) < func_2013(iVar0) && is_entity_on_screen(&(Local_14.f_52[iVar0])))
			{
				if (!func_1994(&(Local_14.f_52[iVar0]), -1465725704))
				{
					task_fly_away(&(Local_14.f_52[iVar0]), Global_35);
				}
			}
		}
		iVar0++;
	}
	switch (iVar278)
	{
		case 0:
			func_2014(1);
			break;
		case 1:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (does_entity_exist(&(Local_14.f_62[iVar0])) && !is_entity_dead(&(Local_14.f_62[iVar0])))
				{
					if (func_912(Global_35, &(Local_14.f_62[iVar0]), 1, 1) < 10f)
					{
						func_2014(2);
					}
				}
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (does_entity_exist(&(Local_14.f_62[iVar0])) && !is_entity_dead(&(Local_14.f_62[iVar0])))
				{
					task_follow_nav_mesh_to_coord(&(Local_14.f_62[iVar0]), func_1(13, 0), 3f, 20000, 0.25f, 0, 40000f);
					func_2014(3);
				}
				iVar0++;
			}
			break;
		case 3:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (does_entity_exist(&(Local_14.f_62[iVar0])) && !is_entity_dead(&(Local_14.f_62[iVar0])))
				{
					if (get_script_task_status(&(Local_14.f_62[iVar0]), 713668775, true) == 8)
					{
						func_2014(4);
					}
				}
				iVar0++;
			}
			break;
		case 4:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (does_entity_exist(&(Local_14.f_62[iVar0])) && !is_entity_dead(&(Local_14.f_62[iVar0])))
				{
					task_wander_in_volume(&(Local_14.f_62[iVar0]), Local_150.f_1, 1077936128, 1086324736, 0);
					func_2014(5);
				}
				iVar0++;
			}
			break;
		case 5:
			break;
	}
}

void func_1524()
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_reset_flag(Global_35, 118, true);
	}
}

int func_1525(char[4] cParam0)
{
	if ((!func_479(bVar1639, 0) || !func_479(bVar1638, 0)) || !func_479(Global_35, 0))
	{
		return 0;
	}
	func_437(0, 1.5f);
	set_ped_max_move_blend_ratio(bVar1638, 1f);
	set_ped_max_move_blend_ratio(bVar1639, 1f);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1304887797, false);
	func_2015();
	func_1278(0);
	set_ped_reset_flag(Global_35, 175, true);
	func_2016(cParam0);
	func_2017();
	if (iLocal_249 < 9)
	{
		set_ped_reset_flag(Global_35, 229, true);
		set_ped_reset_flag(bVar1639, 229, true);
		set_ped_reset_flag(bVar1638, 229, true);
	}
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	switch (iLocal_249)
	{
		case 0:
			set_ped_config_flag(Global_35, 334, true);
			set_ped_config_flag(bVar1639, 390, true);
			set_ped_config_flag(bVar1638, 390, true);
			set_ped_config_flag(bVar1639, 375, true);
			set_ped_config_flag(bVar1638, 375, true);
			func_2018();
			func_1264(1);
			break;
		case 1:
			if (_does_anim_scene_exist(func_1267(cParam0)) && _is_anim_scene_started(func_1267(cParam0), false))
			{
				func_1264(2);
			}
			break;
		case 2:
			if (func_84(32768) || func_1304(cParam0, 1))
			{
				if (_does_anim_scene_exist(func_1267(cParam0)))
				{
					if (_0x005e6f28dd7ed58d(func_1267(cParam0), func_1259(bVar1639)) || _0xb89fcff19dafff28(func_1267(cParam0), func_1259(bVar1639)))
					{
						func_1264(5);
					}
				}
				else if (!func_84(32768))
				{
					func_1264(5);
				}
			}
			break;
		case 3:
			func_1264(4);
			break;
		case 4:
			if (_0x005e6f28dd7ed58d(&(uLocal_1682[0]), func_1259(bVar1639)))
			{
				func_1264(5);
			}
			break;
		case 5:
			if (get_script_task_status(Global_35, 242628503, true) == 1)
			{
				clear_ped_tasks(Global_35, 1, 0);
			}
			func_2019(&(uLocal_1655[0]));
			func_2019(&(uLocal_1655[1]));
			_0xc67a4910425f11f1(player_id(), 0);
			display_radar(true);
			display_hud(true);
			set_player_control(get_player_index(), true, 0, false);
			stop_gameplay_hint(false);
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
			if (func_1556(cParam0, sVar845, 0, 0, 0))
			{
				func_2020();
			}
			func_1283(cParam0, bVar1639, 1105014447, 422991367, 1, 1);
			func_2021(&Var0);
			func_2022(bVar1639, bVar1638, &Var0, func_1(6, 1), uVar828, 17420, 1, 7.5f, 0.25f, 1.8f, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
			func_2023(bVar1638, bVar1639, &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			func_2024(&uLocal_2219);
			func_1264(6);
			break;
		case 6:
			if (is_waypoint_playback_going_on_for_ped(bVar1639, 0))
			{
				func_2021(&Var0);
				func_2022(bVar1638, Global_35, &Var0, func_1(6, 2), uVar829, 17420, 1, 7.5f, 0.25f, 1.8f, 0.95f, 1092616192, -1, 1, 0, 0, 0, 1);
				func_2023(Global_35, bVar1638, &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 0.5f, 1, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1264(7);
			}
			break;
		case 7:
			if (func_2016(cParam0))
			{
				if (!func_168(iVar1516, 65536))
				{
					if (func_903(bVar1639, func_1506(&(uLocal_1682[1]), "dutch", "PL_ACTION"), 1) < 5f)
					{
						func_2022(bVar1639, bVar1638, &Var0, func_1506(&(uLocal_1682[1]), "dutch", "PL_ACTION"), uVar828, 16396, 0, 7.5f, 0.25f, 1.8f, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
						func_2023(bVar1638, bVar1639, &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
						func_2022(bVar1638, Global_35, &Var0, func_1506(&(uLocal_1682[1]), "JOHN", "PL_ACTION"), uVar829, 17420, 0, 7.5f, 0.25f, 1.8f, 0.95f, 1092616192, -1, 1, 0, 0, 0, 1);
						func_2023(Global_35, bVar1638, &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 0.5f, 1, 0, -1, 1, -1082130432, -1082130432, 1);
						func_170(&uLocal_1519, 65536);
					}
				}
			}
			func_2025(bVar1639, bVar1638, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_2025(bVar1638, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_2026(Global_35, bVar1638, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_2027(&uLocal_2219, bVar1638);
			if (func_903(bVar1639, func_1506(&(uLocal_1682[1]), "dutch", "PL_ACTION"), 1) > 10f)
			{
				if (func_912(bVar1638, bVar1639, 1, 1) > 7.5f)
				{
					if (_0x1ecc76792f661cf5(sVar845))
					{
						pause_scripted_conversation(sVar845, false, true, false, false);
						func_170(&uLocal_1519, 512);
					}
					else
					{
						func_2028(cParam0);
					}
				}
				else if (func_168(iVar1516, 512))
				{
					if (_0xd89504d9d7d5057d(sVar845) && _0xf01c570e0a0a1e67(sVar845))
					{
						restart_scripted_conversation(sVar845);
					}
					func_1292(&uLocal_1519, 512);
				}
			}
			if (func_903(bVar1639, func_1506(&(uLocal_1682[1]), "dutch", "PL_ACTION"), 1) <= 4f && func_903(bVar1638, func_1506(&(uLocal_1682[1]), "JOHN", "PL_ACTION"), 1) <= 4f)
			{
				_0x3946fc742ac305cd(player_id(), bVar1639, "Mob2_INT", 0f, 0f, 0f, bVar1639, 0);
				func_2029(bVar1639, 1);
				func_2029(bVar1638, 1);
				func_2030(Global_35, 1);
				func_2031(&uLocal_2219);
				func_1264(8);
			}
			break;
		case 8:
			open_sequence_task(&uLocal_1613);
			task_follow_nav_mesh_to_coord(0, func_1506(&(uLocal_1682[1]), "dutch", "PL_ACTION"), 1f, 20000, 0.25f, 4194304, func_1507(&(uLocal_1682[1]), "dutch", "PL_ACTION"));
			close_sequence_task(iVar1610);
			task_perform_sequence(bVar1639, iVar1610);
			clear_sequence_task(&uLocal_1613);
			open_sequence_task(&uLocal_1613);
			task_follow_nav_mesh_to_coord(0, func_1506(&(uLocal_1682[1]), "JOHN", "PL_ACTION"), 1f, 20000, 0.25f, 4194304, func_1507(&(uLocal_1682[1]), "JOHN", "PL_ACTION"));
			close_sequence_task(iVar1610);
			task_perform_sequence(bVar1638, iVar1610);
			clear_sequence_task(&uLocal_1613);
			func_1264(9);
			break;
		case 9:
			if (((get_script_task_status(bVar1639, 242628503, true) != 0 && get_script_task_status(bVar1639, 242628503, true) != 1) && get_script_task_status(bVar1638, 242628503, true) != 0) && get_script_task_status(bVar1638, 242628503, true) != 1)
			{
				if (func_2016(cParam0))
				{
					func_2032();
					func_2033(bVar1639);
					func_2033(bVar1638);
					func_1264(10);
				}
			}
			break;
		case 10:
			func_1303();
			func_1861(0);
			func_2034(Global_35, bVar1649);
			if (func_168(iVar1517, 256) || (_is_anim_scene_started(&(uLocal_1682[1]), false) && _get_anim_scene_time(&(uLocal_1682[1])) > 28f))
			{
				if (func_912(Global_35, bVar1639, 1, 1) > 4.9f)
				{
					if (get_script_task_status(Global_35, 242628503, true) != 0 && get_script_task_status(Global_35, 242628503, true) != 1)
					{
						open_sequence_task(&uLocal_1613);
						task_follow_waypoint_recording(false, sVar844, 0, 8, -1, 0, 0, -1);
						close_sequence_task(iVar1610);
						task_perform_sequence(Global_35, iVar1610);
						clear_sequence_task(&uLocal_1613);
					}
				}
			}
			if (func_912(Global_35, bVar1639, 1, 1) > 10f)
			{
				if (!is_gameplay_hint_active())
				{
					set_gameplay_entity_hint(bVar1639, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				}
			}
			else if (is_gameplay_hint_active())
			{
				stop_gameplay_hint(false);
			}
			if (_does_anim_scene_exist(&(uLocal_1682[1])))
			{
				if (_is_anim_scene_started(&(uLocal_1682[1]), false))
				{
					if (_get_anim_scene_time(&(uLocal_1682[1])) > 35f)
					{
						func_2035();
					}
				}
			}
			if (func_2036(cParam0))
			{
				_0xc67a4910425f11f1(player_id(), 0);
				func_453(bVar1638);
				func_453(bVar1639);
				func_453(Global_35);
				func_1264(13);
			}
			break;
		case 11:
			func_1264(12);
			break;
		case 12:
			if (!is_waypoint_playback_going_on_for_ped(bVar1639, 0) && !is_waypoint_playback_going_on_for_ped(bVar1638, 0))
			{
				set_ped_config_flag(Global_35, 334, false);
				set_ped_config_flag(bVar1639, 390, false);
				set_ped_config_flag(bVar1638, 390, false);
				set_ped_config_flag(bVar1639, 375, false);
				set_ped_config_flag(bVar1638, 375, false);
				func_1264(13);
			}
			break;
		case 13:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			break;
	}
	return 0;
}

void func_1526(char[4] cParam0)
{
	iVar16 = func_35(cParam0);
	iVar17 = func_134(iVar16);
	iVar18 = func_164(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_224(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2037(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1419(cParam0->f_8269[iVar19]);
				}
				else if (func_2038(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_234(cParam0->f_8269[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2504 - 1))
					{
						_copy_memory(cParam0->f_8269[iVar19], cParam0->f_8269[(cParam0->f_8269.f_2504 - 1)], 16);
						_copy_memory(cParam0->f_8269[cParam0->f_8269.f_2504], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2504 = (cParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2505)
		{
			if (func_224(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2039(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2040(cParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], 16);
						_copy_memory(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2505 = (cParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2506)
		{
			if (func_224(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2039(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_225(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_224(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2041(&(cParam0->f_8269));
						}
						if (iVar19 < (cParam0->f_8269.f_2506 - 1))
						{
							_copy_memory(cParam0->f_8269.f_1282[iVar19], cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1)], 16);
							_copy_memory(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1)], &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							_copy_memory(cParam0->f_8269.f_1282[iVar19], &uVar0, 16);
						}
						cParam0->f_8269.f_2506 = (cParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2507)
		{
			if (func_224(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2037(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2042(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_514(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2038(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2042(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_514(cParam0->f_8269.f_2243[iVar19], 2);
					if (iVar19 < (cParam0->f_8269.f_2507 - 1))
					{
						_copy_memory(cParam0->f_8269.f_2243[iVar19], cParam0->f_8269.f_2243[iVar19 + 1], 16);
						_copy_memory(cParam0->f_8269.f_2243[iVar19 + 1], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269.f_2243[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2507 = (cParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_1527(char[4] cParam0)
{
	if (func_123(cParam0, func_35(cParam0), 16777216))
	{
		return false;
	}
	if (!func_123(cParam0, func_35(cParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_1846(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1528()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1861(0);
	func_2015();
}

void func_1529(char[4] cParam0, int iParam1, int iParam2)
{
	func_1292(&(cParam0->f_1[func_134(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1530(int iParam0)
{
	return (iParam0 < func_407() && iParam0 >= 0);
}

int func_1531(int iParam0)
{
	if (iParam0 <= -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar0 == iParam0 || iVar0 == 8)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1532(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1533(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_134(iParam1);
	if (!func_1530(iVar0))
	{
		return false;
	}
	iVar1 = func_1531(iParam2);
	if (!func_1532(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1534(struct<2> Param0, int iParam2)
{
	if (!func_262(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1535(char[4] cParam0)
{
	func_2043(cParam0);
	if (func_286(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_286(cParam0) == 0 && !func_10(cParam0, 8))
	{
		func_915(cParam0);
	}
	func_53(&(cParam0->f_10792));
	func_2044(cParam0);
	func_2045(cParam0, 67108864);
	func_2045(cParam0, 8192);
	func_916(cParam0, 4);
	func_916(cParam0, 512);
	func_916(cParam0, 65536);
	func_916(cParam0, 1024);
	func_916(cParam0, 262144);
	func_916(cParam0, 16777216);
	func_916(cParam0, 64);
	func_272(cParam0, 128);
	func_101(cParam0, -2147483648);
	func_2046(cParam0, 1);
	if (func_122(cParam0, 4194304))
	{
		func_142(cParam0, func_35(cParam0), 1073741824);
	}
	func_272(cParam0, 4194304);
	func_272(cParam0, 8388608);
	if (!func_123(cParam0, func_35(cParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_22() == 0)
	{
		func_23(8);
		func_81(1);
	}
	if (func_123(cParam0, func_35(cParam0), 64) || !func_117(cParam0))
	{
		func_42(0);
	}
	else
	{
		func_42(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_10(cParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_570(&(cParam0->f_13106));
	func_227(&(cParam0->f_13112));
	func_2047(cParam0, func_123(cParam0, func_35(cParam0), 1));
	if (!func_123(cParam0, func_35(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_123(cParam0, func_35(cParam0), 32768))
	{
		func_242(1);
	}
	if (func_954(cParam0, func_37(cParam0)) != -1 && _0x62de46f061caa468() < func_954(cParam0, func_37(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_954(cParam0, func_37(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2048(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_123(cParam0, func_35(cParam0), 1))
	{
		func_236(Global_1935630, 2097152);
	}
	else
	{
		func_73(Global_1935630, 2097152);
	}
	func_2049(cParam0);
	if (func_35(cParam0) == 25 && func_84(32768))
	{
		func_2050(cParam0, 16);
	}
	if (func_123(cParam0, func_35(cParam0), 512))
	{
		func_2051(1f, 0f, 0f, 0f);
	}
	else
	{
		func_46();
	}
}

bool func_1536(char[4] cParam0)
{
	if (func_122(cParam0, 4) && !func_31())
	{
		return true;
	}
	return false;
}

void func_1537(char[4] cParam0)
{
	func_1957(cParam0);
}

void func_1538(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1413(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1539(char[4] cParam0)
{
	func_2052(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_101(cParam0, 1024);
	}
}

bool func_1540(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1541(char[4] cParam0)
{
	return true;
}

void func_1542(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1543(var uParam0, int iParam1)
{
	iVar0 = func_2053(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1544(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2054(cParam0, uParam1))
	{
		return 0;
	}
	if (func_533(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_491(uParam1);
	func_2055(uParam1);
	if (!bParam2)
	{
		func_2056(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2057(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2058(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2059(cParam0, uParam1);
	func_2060(uParam1);
	return 0;
}

bool func_1545(char[4] cParam0)
{
	return true;
}

int func_1546(int iParam0)
{
	iVar4 = -899457438;
	iVar5 = 0;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (_is_app_active(1433015236))
						{
							_close_app_by_hash(1433015236);
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*iParam0 = func_2061(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			_event_manager_pop_event(iVar4);
		}
	}
	return iVar5;
}

void func_1547(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1320(cParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1548(char[4] cParam0, char[4] cParam1)
{
	if (!func_123(cParam0, func_35(cParam0), 256))
	{
		if (!func_123(cParam0, func_35(cParam0), 65536))
		{
			if (func_2062(cParam1))
			{
				func_142(cParam0, func_35(cParam0), 131072);
			}
			func_142(cParam0, func_35(cParam0), 65536);
		}
		if (func_123(cParam0, func_35(cParam0), 131072))
		{
			if (!func_820(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2063(&(cParam0->f_7375), &(cParam0->f_10792));
				func_142(cParam0, func_35(cParam0), 256);
			}
		}
		else
		{
			func_142(cParam0, func_35(cParam0), 256);
		}
	}
	return func_1959(&(cParam0->f_7375), cParam1, (func_10(cParam0, 33554432) || (is_screen_faded_out() && !func_10(cParam0, 1073741824))), 1);
}

void func_1549(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_859((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2064(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2065(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2066((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_859((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2064(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2065(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2067((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_859((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2064(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2065(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2068((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_859((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2064(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2065(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2069((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		func_2064(&(uParam4->f_1), iParam12);
		if (func_2065(&(uParam4->f_1), iParam13))
		{
			func_2070(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_859((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2064(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2065(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2071((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_859((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2064(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2065(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2072((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_859((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2064(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2065(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2073((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_859((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2064(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2065(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2074((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_859((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2064(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2065(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2075((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_859((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2064(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2065(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2076((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_859((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2064(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2065(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2077((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1550(char[4] cParam0)
{
	iVar0 = func_2078(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1551(bool bParam0, bool bParam1)
{
	if (func_2079(255) == 4)
	{
		return;
	}
	if (func_396(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_297(0);
	}
	else
	{
		if (bParam1)
		{
			func_2080(0, 0, 0, 1);
		}
		func_298(0);
		func_2081(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2082(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2083(Global_1109400->f_389, 42);
	func_2084(Global_1109400->f_428, 42);
}

bool func_1552(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

bool func_1553(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return false;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

var func_1554(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1555(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2085(sParam1));
}

bool func_1556(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1287() || func_220())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_221())
	{
		return false;
	}
	else if (iParam2 == 6 && func_2086(sParam1))
	{
		func_570(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_29(&(cParam0->f_13106), 0);
	}
	if ((func_2087(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1819(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1819(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_570(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1819(cParam0, sParam1, 0);
						}
						else if (!func_1819(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_28(&(cParam0->f_13106)) && func_1819(cParam0, sParam1, 0))
						{
							func_29(&(cParam0->f_13106), 0);
							return false;
						}
						if (func_28(&(cParam0->f_13106)))
						{
							if (!_0x1ecc76792f661cf5(sParam1))
							{
								restart_scripted_conversation(sParam4);
								return true;
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam2 == 3)
				{
					func_1819(cParam0, sParam1, 0);
				}
				else if (!func_1819(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_2088(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_2088(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_734(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_115(1);
				func_734(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_115(1);
				func_2089(sParam1, 0, 0, 1);
				break;
		}
		func_570(&(cParam0->f_13106));
		return true;
	}
	return false;
}

int func_1557(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

int func_1558(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

float func_1559(int iParam0, bool bParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(bParam1, false, false));
	}
	return func_1596(get_entity_coords(iParam0, false, false), get_entity_coords(bParam1, false, false));
}

int func_1560(int iParam0, bool bParam1)
{
	if (!func_980(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_2090(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_1561(int iParam0)
{
	bVar0 = func_981(iParam0);
	if (!_is_ped_carrying(bVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(bVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		bVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(bVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(bVar3))
			{
				set_entity_as_mission_entity(bVar3, true, true);
			}
			_0x0d0db2b6af19a987(&bVar3);
		}
		iVar2++;
	}
}

int func_1562(int iParam0, bool bParam1)
{
	if (!func_980(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_2091(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_1563(int iParam0)
{
	if (!func_980(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_1564(int iParam0, int iParam1)
{
	if (!func_980(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_1565(var uParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	iVar0 = func_763(uParam0, bParam1);
	if (iVar0 == -1)
	{
		return;
	}
	Var1.f_10 = -1569615261;
	*uParam0->f_3[iVar0] = { Var1 };
}

void func_1566(int iParam0, int iParam1)
{
	if (!func_994(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_1567(int iParam0, int iParam1)
{
	if (!func_994(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_1568(int iParam0)
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

void func_1569(int iParam0, bool bParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if ((bParam1 && func_2092(iParam0, 512)) || (!bParam1 && !func_2092(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_998(iParam0, 512);
	}
	else
	{
		func_1000(iParam0, 512);
	}
	if (func_2093(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

void func_1570(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_1571(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_1572(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
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
	func_2094(iParam0, 1);
	func_2095(iParam0, 1);
	func_2096(iParam0, 128);
}

int func_1573(int iParam0, bool bParam1, bool bParam2)
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

bool func_1574(int iParam0)
{
	if (func_2097(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_1575(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_1574(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_1576(int iParam0, bool bParam1)
{
	if (func_1574(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1577(int iParam0, bool bParam1)
{
	if (func_1574(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1578(int iParam0, bool bParam1)
{
	if (func_1574(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1579()
{
	return true;
}

int func_1580()
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
		iVar3 = func_2098(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_1581(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		_0x243cede8f916b994();
		return 0;
	}
	iVar0 = func_2099(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_2100(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			_0xd3f943b88f55376a(iVar2);
		}
		else
		{
			_0x2916b30dc6c41179(iVar2);
		}
		iVar1++;
	}
	return func_2101(iParam0, bParam1, fParam2);
}

void func_1582(var uParam0, int iParam1, bool bParam2)
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

void func_1583(int iParam0)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (func_1014(iParam0))
	{
		iVar0 = func_2102(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
	}
}

int func_1584(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876;
		case 654481153:
			return -1575595762;
		case -2036347356:
			return 1243830185;
		case -1341684320:
			return 1243830185;
		case -1567081107:
			return -1650465405;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566;
		case -1739349092:
			return -1606321000;
		case -1511391406:
			return 1974815632;
		case 565221344:
			return 444204045;
		default:
			break;
	}
	return 0;
}

int func_1585(int iParam0)
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

int func_1586(int iParam0)
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

void func_1587(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1588(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2103(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1589(int iParam0)
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

void func_1590()
{
	if (func_22() != -1)
	{
		return;
	}
	if (!func_406())
	{
		return;
	}
	func_2104(&(Global_40.f_40));
}

void func_1591()
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

bool func_1592()
{
	return !func_396(Global_1310720->f_1);
}

int func_1593()
{
	return Global_40.f_4283.f_1;
}

int func_1594()
{
	return Global_40.f_4283.f_4;
}

void func_1595(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2105())
	{
		fVar0 = func_1051(vParam0, Global_40.f_6);
	}
	if (func_2106(33554432))
	{
		if (!func_2107(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1051(vParam0, Global_40.f_2);
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

float func_1596(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1597()
{
	if (!func_205(&Global_1935630, 8192))
	{
		return;
	}
	if (func_84(32768))
	{
		return;
	}
	func_73(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2108(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2108(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2108(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2108(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2108(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2108(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2108(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2108(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2108(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2109(10f, to_float(func_2108(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2109(5f, to_float(func_2108(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2109(25f, to_float(func_2110(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2109(1f, to_float(func_2110(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2109(6f, to_float(func_2110(64058978)))));
	fVar0 = (fVar0 + (3f * func_2109(1f, to_float(func_2110(795577402)))));
	iVar1 = func_2111();
	fVar0 = (fVar0 + (0.1111111f * func_2109(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2109(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2109(to_float(20), to_float(func_2113()))));
	if (func_2114(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2114(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2114(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2114(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2114(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2112(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2109(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2109(5f, to_float(func_2110(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2109(5f, to_float(func_2108(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1660(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1660(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1660(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1660(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1660(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1660(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2115(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2109((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2109(1f, to_float(func_2116(-2116919750)))));
	fVar5 = to_float(func_2117());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2109(5f, to_float(func_2110(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2109(1f, to_float(func_2110(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2109(1f, to_float(func_2110(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2109(1f, to_float(func_2110(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2109(1f, to_float(func_2108(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2109(1f, to_float(func_2108(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2109(1f, to_float(func_2108(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2109(1f, to_float(func_2108(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2109(1f, to_float(func_2108(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2109(1f, to_float(func_2108(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2109(1f, to_float(func_2108(978382515, 1015970717)))));
	Var6 = { func_96(1215094015) };
	fVar8 = func_2118(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_197(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_197(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_201(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2119(Global_1898330[iVar61]);
				}
				else
				{
					func_2120(iVar61, 0);
					if (func_202(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_200(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_200((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_200(&Global_1898437), &iVar9);
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

void func_1598(int iParam0)
{
	if (!func_980(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2121(iParam0);
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

void func_1599(int iParam0)
{
	if (func_533(iParam0))
	{
		if (does_entity_exist(func_569(iParam0)))
		{
			func_729(iParam0, 67108864, 1);
			func_984(iParam0, 19, 1);
		}
	}
}

float func_1600(int iParam0)
{
	if (!func_980(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1601(int iParam0)
{
	bVar0 = func_569(iParam0);
	iVar1 = func_1037(iParam0, 0);
	func_2122(iParam0, bVar0);
	if (does_entity_exist(bVar0))
	{
		if (!_0x88ad6cc10d8d35b2(bVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(bVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

int func_1602(int iParam0)
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

char* func_1603(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_253(37, iParam0))
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
	if (func_253(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1604(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1185(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1605(int iParam0)
{
	iParam0 = func_273(iParam0);
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

float func_1606(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1607(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_96(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1608(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1609(int iParam0, int iParam1)
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

void func_1610(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2123(bParam1);
	}
}

void func_1611(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1612(int iParam0)
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

bool func_1613(int iParam0)
{
	if (!func_1249(23, &vVar0))
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

bool func_1614(int iParam0, int iParam1, int iParam2)
{
	if (!func_1249(23, &Var0))
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

int func_1615(int iParam0)
{
	return iParam0;
}

int func_1616()
{
	iVar0 = func_1072();
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

int func_1617(int iParam0)
{
	if (!func_595(*iParam0, 0))
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

bool func_1618(int iParam0, var uParam1, bool bParam2)
{
	if (!func_595(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_706(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1109((386 + iVar29), 1);
		if (func_1110(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1111(iParam0, &Var6, iVar5);
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

int func_1619(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_595(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1112(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_1022(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1621(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1622(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1022(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1623(int iParam0)
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

float func_1624(int iParam0)
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
			return func_2124(iParam0);
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
			return func_2124(iParam0);
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
			return func_2124(iParam0);
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

bool func_1625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_617(18);
		case 2:
			return func_617(20);
		case 1:
			return func_617(19);
		default:
			break;
	}
	return true;
}

int func_1626(int iParam0)
{
	return func_2125(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1627(int iParam0, float fParam1, bool bParam2)
{
	if (func_22() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_617(31))
	{
		return;
	}
	iVar0 = func_1626(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1626(iParam0);
	if (func_2126(iParam0) && func_2127(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2128(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2129(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_332(func_2130(iParam0), 0);
					}
					func_2131(iParam0, iVar2, iVar3);
					func_2132(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1628(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1629(int iParam0)
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

int func_1630()
{
	return func_2133(Global_40.f_12019);
}

int func_1631()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1093(iVar1);
		if (func_354(iVar2, 1, 0) || func_1637(func_1636(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1632()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2134(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1633()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1642(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1634()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1635(int iParam0)
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

int func_1636(int iParam0)
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

bool func_1637(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1638(int iParam0)
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

int func_1639(int iParam0)
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

int func_1640(int iParam0)
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

char* func_1641(int iParam0)
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

bool func_1642(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1643(int iParam0)
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

char* func_1644(int iParam0)
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

bool func_1645(int iParam0)
{
	if (func_2135(iParam0) && func_354(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2136(iParam0) && func_2137(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1646(int iParam0)
{
	if (!func_595(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_662(iParam0));
}

int func_1647(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1648(bool bParam0)
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

void func_1649(int iParam0)
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

void func_1650(bool bParam0)
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

void func_1651(bool bParam0)
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

void func_1652(bool bParam0)
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

void func_1653(bool bParam0)
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

void func_1654(bool bParam0)
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

void func_1655(bool bParam0)
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

int func_1656(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_694(iParam0, 1)]);
}

void func_1657()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2138();
		_unlock_set_unlocked(-1526891582, true);
		func_622(-916314281);
		func_668(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_622(494733111);
		func_668(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1658(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1022(0);
	*uParam1 = { func_1112(iParam0, func_1217(0), iParam3, 0) };
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

bool func_1659(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1660(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1661(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1662(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_615(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_615(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_615(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_615(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_615(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_615(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1663(int iParam0, int iParam1)
{
	iVar1 = func_694(func_2139(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_619(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1664(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_694(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1154(524288))
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

bool func_1665(int iParam0)
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

int func_1666(int iParam0)
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

int func_1667(int iParam0)
{
	return func_2140(iParam0, -1);
}

bool func_1668(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1669(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1670(int iParam0)
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

void func_1671(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1672(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1673()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1674(int iParam0)
{
	func_1398(iParam0, 8, 6);
}

void func_1675(int iParam0)
{
	func_2141(&(Global_1946804->f_2589), iParam0);
}

void func_1676(int iParam0, int iParam1)
{
	func_2142(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1677(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2143(0);
	if (iParam2 != 0 && func_2144(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1208(iParam0, func_1222(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1678(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_22() != -1;
	iVar7 = func_2143(0);
	if (func_1154(32768))
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
			iVar5 = func_1222(iVar0, 1);
			if (func_1394(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1394(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1664(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2145(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1154(524288))
					{
						func_1214(524288);
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
							iVar5 = func_1222(iVar0, 1);
							if (func_1394(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1394(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1664(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1676(iVar0, iParam2);
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
					func_1681(524288);
				}
			}
		}
	}
}

void func_1679(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2146(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_22() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2147(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1700(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1700(Global_40.f_7729);
				Global_1946804->f_1378 = func_1700(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2148(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1202(0, 1);
	}
}

void func_1680(var uParam0)
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

void func_1681(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1682(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1683(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1738(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1738(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1739(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1214(8);
}

bool func_1684()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1685(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1686()
{
	fVar0 = func_2149(13);
	iVar1 = func_2150(fVar0);
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

float func_1687()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1688()
{
	if (func_345())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1689()
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

float func_1690()
{
	return Global_1955565->f_3;
}

void func_1691(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_2151(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1692(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_2151(iParam0, 2, 0, 0);
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

float func_1693(float fParam0, float fParam1, float fParam2)
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

bool func_1694()
{
	return func_2149(12) <= -99f;
}

bool func_1695()
{
	return func_2149(12) >= 99f;
}

int func_1696()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_619(iVar1) == -999503751)
		{
			if (func_2152() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1697(int iParam0)
{
	if (!func_1170(iParam0))
	{
		return false;
	}
	if (func_1701(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1698(int iParam0)
{
	if (!func_1170(iParam0))
	{
		return false;
	}
	if (func_1701(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1699(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1170(iParam0))
	{
		return;
	}
	if (!func_1698(iParam0))
	{
		func_1702(iParam0, 2);
		if (bParam2)
		{
			if (!func_204(0, 0, 1))
			{
				func_374(1, 4);
			}
		}
		if ((!func_221() && !bParam1) && !func_204(0, 0, 1))
		{
			func_734(_create_var_string(10, "OUT_JOURN_ADD", func_2153(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1700(int iParam0)
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

bool func_1701(int iParam0, int iParam1)
{
	if (!func_1170(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1702(int iParam0, int iParam1)
{
	if (!func_1170(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1703(int iParam0, bool bParam1)
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

void func_1704(int iParam0, bool bParam1)
{
	iVar0 = func_2154(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_618(50);
			}
			else
			{
				func_618(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_618(51);
			}
			else
			{
				func_618(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2155(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_649();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_649();
			}
			break;
		case 3:
			func_618(24);
			if (bParam1)
			{
				if (!func_2155(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_649();
				}
			}
			break;
	}
}

void func_1705(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2156(0))
			{
				iVar0++;
			}
			if (func_2156(2))
			{
				iVar0++;
			}
			if (func_2156(4))
			{
				iVar0++;
			}
			if (!func_2157(16))
			{
				if (iVar0 == 1)
				{
					func_2158();
					func_332(456, 1);
					func_2159(16);
				}
			}
			if (!func_2157(32))
			{
				if (iVar0 >= 3)
				{
					func_2158();
					func_332(456, 1);
					func_2159(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2156(1))
			{
				iVar0++;
			}
			if (func_2156(3))
			{
				iVar0++;
			}
			if (func_2156(7))
			{
				iVar0++;
			}
			if (!func_2157(1))
			{
				if (iVar0 == 1)
				{
					func_2160();
					func_332(457, 1);
					func_2159(1);
				}
			}
			if (!func_2157(2))
			{
				if (iVar0 >= 3)
				{
					func_2160();
					func_332(457, 1);
					func_2159(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2156(5))
			{
				iVar0++;
			}
			if (func_2156(6))
			{
				iVar0++;
			}
			if (func_2156(8))
			{
				iVar0++;
			}
			if (!func_2157(4))
			{
				if (iVar0 == 1)
				{
					func_2161();
					func_332(455, 1);
					func_2159(4);
				}
			}
			if (!func_2157(8))
			{
				if (iVar0 >= 3)
				{
					func_2161();
					func_332(455, 1);
					func_2159(8);
				}
			}
			break;
	}
}

void func_1706(var uParam0)
{
	func_1176(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1176(uParam0, 617531372);
	}
	else
	{
		func_1176(uParam0, 291123060);
	}
}

void func_1707(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2162(uParam0))
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

bool func_1708(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1709(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_595(iParam0, 0))
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

void func_1710(int iParam0)
{
	func_690(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2163(iParam0, &uVar18);
	func_2164(iParam0, &uVar18, &iVar34, 1);
	if (func_696() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2165(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_692(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_690(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_619(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2165(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2165(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2165(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2165(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2165(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_692(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_694(func_693(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2166(&(Global_1946804->f_1616));
	func_697(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_698(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_698(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_698(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_698(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_698(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_698(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_698(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_698(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_698(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_699(&(iVar0[iVar36]), iVar35))
			{
				func_692(func_2167(iVar35), 1, 1);
				func_2168(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1735(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_700(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1169(iParam0))
	{
		if (!func_2169(8))
		{
			if (func_696() == -2125499975)
			{
				if (bVar17)
				{
					func_697(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2170(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2171(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1169(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_697(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2170(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2171(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1169(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1169(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2172(Global_40.f_7729, 4096);
					func_1702(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_2173(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_697(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_697(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1711()
{
	Var0 = { func_1216(0) };
	return func_1112(856287005, Var0, -218846335, 0);
}

int func_1712(int iParam0, struct<4> Param1)
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
			if (func_595(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1619(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2174(&uVar7);
					if (func_1113(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1713(var uParam0)
{
	return uParam0->f_1;
}

void func_1714(var uParam0)
{
	func_2175(uParam0);
	func_2177(uParam0, func_2176(-1346384396));
	func_2178(uParam0, func_2176(-712836614));
	func_2179(uParam0, func_2176(-1629133289));
	func_2180(uParam0, func_2176(1302066700));
	func_2181(uParam0, func_2176(599669344));
	func_2182(uParam0, func_2176(-1555511632));
}

void func_1715(struct<6> Param0)
{
	if (!func_2183(Param0.f_4, 1))
	{
	}
	if (!func_2183(Param0, 1))
	{
	}
	if (!func_2183(Param0.f_2, 1))
	{
	}
	if (!func_2183(Param0.f_5, 1))
	{
	}
	if (!func_2183(Param0.f_3, 1))
	{
	}
	if (!func_2183(Param0.f_1, 1))
	{
	}
}

int func_1716(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_406())
	{
		if (func_311())
		{
			bVar0 = false;
			if (!func_334((*Global_1835011)[15]->f_1, 1) && !func_617(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_2184();
				*iParam1 = func_2185();
				*iParam2 = func_2186();
				return 1;
			}
			else
			{
				*iParam0 = func_2187();
				*iParam1 = func_2188();
				*iParam2 = func_2189();
				return 1;
			}
		}
		else if (func_1074())
		{
			if (!func_334((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2190();
				*iParam1 = func_2191();
				*iParam2 = func_2192();
				return 1;
			}
			else
			{
				*iParam0 = func_2193();
				*iParam1 = func_2194();
				*iParam2 = func_2195();
				return 1;
			}
		}
	}
	else if (func_311())
	{
		*iParam0 = func_2196();
		*iParam1 = func_2197();
		*iParam2 = func_2198();
		return 1;
	}
	else if (func_1074())
	{
		*iParam0 = func_2199();
		*iParam1 = func_2200();
		*iParam2 = func_2201();
		return 1;
	}
	return 0;
}

void func_1717(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

void func_1718(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

void func_1719(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

void func_1720(int iParam0, int iParam1)
{
	iParam0 = func_273(iParam0);
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

bool func_1721(int iParam0)
{
	{
	}