void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 686051865;
	iLocal_18 = -1466017978;
	iLocal_19 = 1101050871;
	iLocal_20 = -989220241;
	iLocal_21 = -607723543;
	iLocal_22 = 51410678;
	iLocal_23 = -1421951598;
	iLocal_24 = -1038436471;
	iLocal_25 = -1473388640;
	iLocal_26 = -969349845;
	iLocal_27 = -2102031605;
	iLocal_28 = -308302453;
	iLocal_29 = 867074004;
	iLocal_30 = 49321906;
	iLocal_31 = 799179000;
	iLocal_32 = 61143397;
	iLocal_33 = 1502991738;
	iLocal_34 = 541872060;
	iLocal_35 = 1907611;
	iLocal_36 = 2041771180;
	iLocal_37 = 478342158;
	iLocal_38 = 78404028;
	iLocal_39 = 140163364;
	iLocal_40 = 1626106086;
	iLocal_41 = -1542030359;
	iLocal_42 = 1539235365;
	iLocal_43 = 1185443229;
	iLocal_44 = 1710012350;
	iLocal_45 = -173642316;
	iLocal_46 = 2050454952;
	iLocal_47 = 1146914213;
	iLocal_48 = -283162583;
	iLocal_49 = -283162583;
	iLocal_50 = 133961016;
	iLocal_51 = 662578349;
	iLocal_52 = 987342453;
	iLocal_53 = 1610552357;
	iLocal_54 = -1021554967;
	iLocal_55 = 41200892;
	iLocal_56 = -336173860;
	sLocal_57 = "mar7_mission_route";
	sLocal_58 = "mar7_wayne_to_nils";
	cLocal_59 = "mar7_wayne_taken";
	sLocal_60 = "mar7_into_woods_02";
	sLocal_61 = "mar7_into_woods_03";
	sLocal_62 = "mar7_back_to_road";
	sLocal_63 = "pl_leadin";
	sLocal_64 = "pl_flinch_B";
	sLocal_65 = "pl_flinch_L";
	sLocal_66 = "pl_flinch_R";
	sLocal_67 = "pl_quick_exit";
	sLocal_68 = "pl_IG1_Shoot_Front";
	sLocal_69 = "pl_IG1_Shoot_Front_Low";
	sLocal_70 = "pl_IG1_Shoot_Left";
	sLocal_71 = "pl_IG1_Shoot_Left_Low";
	sLocal_72 = "pl_IG1_Shoot_Right";
	sLocal_73 = "pl_IG1_Shoot_Right_Low";
	sLocal_74 = "script_story@mar7@ig@ig6_wayne_to_wagon";
	sLocal_75 = "ig6_wayne_to_wagon_help_ig_mrwayne";
	sLocal_76 = "s_idle";
	sLocal_77 = "s_IG1_Idle01";
	sLocal_78 = "W_SP_BowArrow_Arrow";
	sLocal_79 = "W_SP_BowArrow";
	sLocal_80 = "G_M_M_UNIMOUNTAINMEN_01";
	sLocal_81 = "catalogue01x_ct";
	sLocal_82 = "cata_mp_stamp_ct";
	sLocal_83 = "UI_DOC_BUILDCAT";
	sLocal_84 = "UI_LETTER_MARSTON_BANK";
	fLocal_187 = 0f;
	vLocal_188 = { 0f, 0f, 0f };
	vLocal_191 = { -869.7763f, -1313.859f, 42.01419f };
	vLocal_194 = { -848.7404f, -1325.763f, 42.28732f };
	vLocal_197 = { -1981.244f, -1636.021f, 116.2002f };
	vLocal_200 = { -1643.358f, -1358.962f, 82.96524f };
	vLocal_203 = { -1985.605f, -1633.742f, 116.1678f };
	vLocal_206 = { -1985.678f, -1633.366f, 117.4885f };
	vLocal_209 = { 0f, 0.15f, 0.1f };
	vLocal_212 = { 1.1053f, -3.52572f, 98.737f };
	vLocal_1640 = { -2023.895f, -1418.728f, 121.8056f };
	fLocal_1643 = 25f;
	vLocal_1644 = { -1971.623f, -1395.637f, 115.4426f };
	fLocal_1647 = 28f;
	vLocal_1648 = { -1990.383f, -1420.253f, 115.896f };
	fLocal_1651 = 5f;
	vLocal_1693 = { -1894.332f, -1461.941f, 104.6321f };
	vLocal_1696 = { -1886.59f, -1464.48f, 102.8992f };
	vLocal_1699 = { -1872.512f, -1470.243f, 99.86195f };
	vLocal_1702 = { -1848.661f, -1466.933f, 96.80234f };
	iLocal_1707 = 9;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1729, 1073741824);
		func_2(&uLocal_1729, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1729);
	func_5(&uLocal_1729);
	while (!func_6(&uLocal_1729, -2147483648))
	{
		func_7(&uLocal_1729);
		wait(0);
	}
	while (!func_2(&uLocal_1729, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	uParam0->f_5309 = (uParam0->f_5309 || iParam1);
}

bool func_2(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_9(uParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_13(func_12(uParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(uParam0, 1);
		func_18(0);
		_uilog_mark_all_entries_availability(0, "");
		Global_36605 = 0;
		func_19(3);
		if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
		{
			_set_scenario_type_enabled_hash(-2012097661, true);
		}
		terminate_this_thread();
	}
	if (!bParam1)
	{
		if (!func_6(uParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(uParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_22(uParam0) == 1 || func_22(uParam0) == 2)
					{
						if (func_23(&(uParam0->f_8269)) && func_24(&(uParam0->f_8269)))
						{
							func_25(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(uParam0->f_13118)))
					{
						func_27(&(uParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_1(uParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_6(uParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_28(uParam0, bVar1)) && !func_29()) && !func_6(uParam0, 80))
						{
							if (!bVar1)
							{
								func_30(uParam0);
							}
							return false;
						}
						if (func_6(uParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_22(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (func_31(uParam0))
								{
									uParam0->f_13104 = get_game_timer();
								}
							}
							if ((uParam0->f_13104 != -1 && get_game_timer() > uParam0->f_13104 + 4000) || bVar1)
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else if (func_22(uParam0) == 1)
						{
							if (func_28(uParam0, bVar1))
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
			else if (func_6(uParam0, 2))
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
			if (!func_32() && func_22(uParam0) != 0)
			{
				func_36(uParam0, func_34(func_33(uParam0)), func_34(func_35(uParam0)), func_33(uParam0), func_35(uParam0));
			}
		}
	}
	if (_does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		if (check_ownership_of_anim_scene(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
	}
	func_1(uParam0, 1048576);
	if (!func_6(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		func_1(uParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_37(&(uParam0->f_8269));
	if (func_23(&(uParam0->f_8269)))
	{
		func_38(&(uParam0->f_8269));
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
	func_39(1);
	func_40(1);
	_0xc5eb2755fa25f1e9(1);
	func_41(0);
	func_42();
	func_19(3);
	if (!func_6(uParam0, 8))
	{
		_display_hud_component(-1679307491);
		_display_hud_component(724769646);
	}
	func_15(1);
	func_43();
	func_44();
	set_mission_name(false, 0);
	func_45();
	_set_milliseconds_per_game_minute(2000);
	pause_clock(false, 0);
	_0x914071ff93af2692(player_id(), 1f);
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_46(uParam0);
	func_47(1, 0);
	func_48(2);
	if (!Global_1935630->f_12)
	{
		set_ped_config_flag(Global_35, 141, false);
		_0xaac0ee3b4999abb5(Global_35, 0);
		_0xb832f1a686b9b810(Global_35, func_49(), 0);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		set_ped_config_flag(Global_35, 446, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
		func_50(Global_35);
		set_ped_config_flag(Global_35, 170, false);
		set_ped_config_flag(Global_35, 43, false);
		set_ped_config_flag(Global_35, 360, false);
	}
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(get_player_index());
	}
	set_everyone_ignore_player(get_player_index(), false);
	if (does_cam_exist(uParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_609.f_2, false);
	}
	func_51(&(uParam0->f_10792));
	func_52();
	stop_gameplay_hint(true);
	func_39(1);
	func_53();
	if (func_54())
	{
		_0x2f9ac754fe179d58(0.3f);
	}
	func_55(0, 14);
	bVar2 = false;
	if (func_22(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(uParam0);
	}
	func_57(uParam0, 0, !bVar2, bVar2);
	func_58(uParam0, !bVar2);
	func_59(0);
	func_59(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_60(0);
	func_62(func_61(uParam0));
	func_63(func_61(uParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(uParam0));
	func_67(uParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(uParam0) != 1)
	{
		func_68(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_22(uParam0) == 0)
	{
		func_72((*Global_1835011)[uParam0->f_607]->f_1);
	}
	func_73();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(uParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_6(uParam0, 4)) && !func_6(uParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_74(uParam0);
				func_75(uParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(uParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(uParam0->f_607), !func_6(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(uParam0->f_607), bVar3);
				}
				func_17(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_85(uParam0));
				}
				func_14();
				if (func_82(32768))
				{
					do_screen_fade_out(0);
					func_86();
					func_87(0);
				}
				else if (func_6(uParam0, 2))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(0);
					}
					func_88(1);
					func_89();
					func_90(6);
					func_91(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_92(func_12(uParam0->f_607));
				func_93();
				if (func_22(uParam0) == 2)
				{
					func_95(func_94(-1876607090), 1);
				}
				_0x55f37f5f3f2475e1();
				_0x062b4a4a3396351d(get_player_index());
				_0x07e8b8b20570271c(get_player_index());
				break;
			case 5:
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_93();
				Var4 = { func_94(-1876607090) };
				_0x0fee2561120f3333(&Var4);
				func_13(func_12(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(uParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(uParam0) != 0)
		{
			Var6 = { func_96(uParam0) };
			func_97(func_12(uParam0->f_607), func_22(uParam0), &Var6, 0, 0, func_6(uParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(uParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, var uParam1)
{
	_0xed9582b3da8f02b4(20);
	uParam1->f_608 = uParam0->f_1;
	iVar0 = create_itemset(true);
	if (!func_20() == 0)
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
	func_100(uParam1);
	if (!func_20() == 0)
	{
		if (func_101(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!is_entity_dead(&(uParam1->f_7375.f_13[iVar4])) && is_entity_a_ped(&(uParam1->f_7375.f_13[iVar4]))) && !is_in_itemset(&(uParam1->f_7375.f_13[iVar4]), iVar0)) && get_ped_index_from_entity_index(&(uParam1->f_7375.f_13[iVar4])) != Global_35)
				{
					add_to_itemset(&(uParam1->f_7375.f_13[iVar4]), iVar0);
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
	if (func_102())
	{
		func_103(uParam1, 4194304);
	}
	if (func_104())
	{
		func_103(uParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(uParam1, 4);
		}
		else
		{
			if (func_104())
			{
			}
			if (func_102())
			{
			}
		}
		func_107(uParam1, func_106());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((uParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_5(var uParam0)
{
	cVar0 = func_110(uParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (uParam0->f_607 != 77)
	{
		func_111();
		func_112(&cVar0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_113(1);
	func_114();
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_45();
	func_40(func_115(uParam0));
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0x2161278c6322f740(16384, 0, 0, -1, -1, 0);
	}
	func_117(1, 0, 1);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	delete_all_trains();
	set_random_trains(false);
	func_39(0);
	func_118(uParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_120(uParam0, 16384) && (func_121(uParam0, func_33(uParam0), 2) || func_105()))
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
				if (!func_105() && !func_121(uParam0, func_33(uParam0), 2))
				{
				}
			}
			else if (!func_122(iVar1) && !func_82(32768))
			{
				remove_weapon_from_ped(Global_35, iVar1, true, -142743235);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0xb832f1a686b9b810(Global_35, false, 0);
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
		func_123(uParam0);
	}
	func_70(1);
	func_39(0);
	func_124(uParam0, -1038436471);
	iLocal_15 = func_125(uParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(uParam0)) };
			if (func_33(uParam0) != 0)
			{
				Var2 = { func_126(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(uParam0, 1048576);
			}
			func_107(uParam0, 0);
			if (func_128(uParam0, 3) || func_129())
			{
				func_130(uParam0, func_126(uParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_131(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_107(uParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[uParam0->f_607]->f_8), 0, func_132(func_33(uParam0)), func_105());
	}
	func_133(uParam0);
	func_134(uParam0, 0);
	func_135(uParam0, 0);
	if (!func_136(uParam0, func_33(uParam0)))
	{
		func_107(uParam0, 0);
	}
	func_137(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	func_103(uParam0, 2097152);
	func_140(uParam0, func_33(uParam0), 134217728);
	if (func_82(32768))
	{
		func_1(uParam0, 4);
	}
	func_141(uParam0);
	func_142(uParam0, func_33(uParam0));
	func_143(func_61(uParam0));
	if (!func_120(uParam0, 65536))
	{
		func_144(func_61(uParam0));
	}
	func_145(uParam0, player_ped_id(), "ARTHUR", 0);
	func_146(uParam0);
	func_147(uParam0);
	func_148(uParam0);
	func_149(uParam0, 30f);
	func_150(uParam0, 40f);
	func_151(uParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	_0xa6a3a3f96b8b030e();
	func_18(1);
	_uilog_mark_all_entries_availability(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = func_110(uParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0->f_5309 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_121(uParam0, func_33(uParam0), 16384))
	{
		func_152();
	}
	if (!func_8(uParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(uParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(uParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(uParam0, 64);
			}
			func_156(uParam0, 0);
			func_157(uParam0);
			if (func_158(uParam0))
			{
				if (!is_entity_dead(func_159(uParam0)) && func_128(uParam0, 3))
				{
					freeze_entity_position(func_159(uParam0), false);
				}
				func_160(uParam0, 1);
			}
			if (func_6(uParam0, -2147483648))
			{
				func_160(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 2);
			}
			func_156(uParam0, func_162(uParam0, func_33(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_154(uParam0) < 2)
	{
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0->f_5307 && iParam1) != 0;
}

bool func_9(var uParam0)
{
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
	func_168();
	func_169();
	func_170(uParam0);
	func_171(uParam0);
	if (func_172(func_22(uParam0)))
	{
		func_173(uParam0->f_607, 3, 12, 0);
	}
	return true;
}

bool func_10(int iParam0)
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

void func_11(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_10(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_174(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_175(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_177(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_178(iParam0) && !func_179(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_180(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_178(iParam0))
	{
		iParam2 = -1;
	}
	if (func_181(iParam0) == 3 || (func_181(iParam0) == 1 && _0x01f4d242765c6b24(func_180(iParam0))))
	{
		func_183(func_182(iParam0), func_180(iParam0), iParam2);
		if ((!func_177(Global_1572864->f_8) && !func_184(0, 1, 0)) && !func_185(&Global_1935630, 32768))
		{
			iVar0 = func_186(iParam0);
			if (iVar0 != -1)
			{
				func_187(0);
			}
			else if (func_182(iParam0) == 8)
			{
				iVar0 = func_188();
				if (iVar0 != -1)
				{
					func_187(0);
				}
			}
		}
	}
	func_189(iParam0, 0);
	if (func_190(0) == iParam0)
	{
		func_40(1);
		func_191(0);
		func_192(1);
	}
	func_193(iParam0, 1);
	func_194(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_195(0);
	func_196(0);
	func_64(0);
	func_65(0);
	func_197(0);
	func_198(1f);
}

void func_15(bool bParam0)
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
		func_199();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_200())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_201())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_180(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_202(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(uParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[uParam0->f_607]->f_8), &Var0);
}

void func_18(int iParam0)
{
	Global_36580 = iParam0;
}

int func_19(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_203(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_22(var uParam0)
{
	return uParam0->f_10783;
}

bool func_23(var uParam0)
{
	return uParam0->f_2501;
}

bool func_24(var uParam0)
{
	return uParam0->f_2500;
}

void func_25(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_204((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_205((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_205((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_205((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_206(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_207(uParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_208(&(uParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(uParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_29()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_30(var uParam0)
{
	func_209(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_177(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_211(&Var0, func_210(0, 0));
			break;
		case 1:
			func_211(&Var0, func_210(1, 0));
			break;
		case 2:
			func_211(&Var0, func_210(2, 0));
			break;
		case 3:
			func_211(&Var0, func_210(3, 0));
			break;
		case 4:
			func_211(&Var0, func_210(4, 0));
			break;
		case 5:
			func_211(&Var0, func_210(5, 0));
			break;
		case 6:
			func_211(&Var0, func_210(6, 0));
			break;
		case 7:
			func_211(&Var0, func_210(7, 0));
			break;
		case 8:
			func_211(&Var0, func_210(8, 0));
			break;
		case 25:
			func_211(&Var0, func_210(9, 0));
			break;
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_212(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_195(0);
	func_213(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_204((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_214((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_38(var uParam0)
{
	_datafile_unload(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_39(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_215(iVar0, 4096);
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
	if (func_20() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_71(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_216(Global_1935630, 4194304);
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

void func_41(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_42()
{
	func_217();
	func_218();
	func_219();
	func_220();
}

void func_43()
{
	if (func_221())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_222(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_223();
}

void func_45()
{
	_uilog_clear_cached_objective();
}

void func_46(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
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

void func_47(int iParam0, int iParam1)
{
	func_224(1, iParam0, iParam1);
}

void func_48(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_49()
{
	return (func_225() || func_54());
}

void func_50(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_51(var uParam0)
{
	func_226(uParam0);
	func_227(uParam0, 0);
	uParam0->f_1 = 0;
	func_43();
}

void func_52()
{
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		*Global_43619[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_228(iVar0);
		iVar0++;
	}
	func_229();
	func_230();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_231())
	{
		if (func_232(255))
		{
			if (!func_233(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_234(Global_1894899->f_2) && func_235(Global_1894899->f_2))
		{
			func_236(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_237(16);
			}
		}
		else if (func_234(Global_1894899->f_2) && !func_238(Global_1894899->f_2, 2))
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
		func_239(16);
		func_240();
		if (bVar0)
		{
			func_239(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_241(uParam0->f_5423[iVar0]))
		{
			if (!is_entity_dead(&(uParam0->f_5423[iVar0])))
			{
				if (is_entity_a_ped(&(uParam0->f_5423[iVar0])))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(&(uParam0->f_5423[iVar0])), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_242(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_243(uParam0->f_5421))
		{
			iVar1 = func_244(uParam0->f_5421, iVar0);
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

void func_57(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_245(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_246(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_247(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_248(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_249(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_250(7);
		}
		else
		{
			func_251(iVar0, 0);
		}
		func_252(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_254(iParam0, 32);
	func_255();
}

void func_60(bool bParam0)
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

int func_61(var uParam0)
{
	return uParam0->f_607;
}

void func_62(int iParam0)
{
	Var0 = { func_256(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_257(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_64(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_197(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_197(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_258(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_204((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_205((*uParam1)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_69(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_70(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_72(int iParam0)
{
	iVar0 = func_182(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_259(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_260(iVar1))
			{
				if (func_261(iVar1, 4))
				{
					func_262(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_263(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_259(iParam0);
		if (iVar3 == 59)
		{
			func_263(1);
		}
		else if (iVar3 == 61)
		{
			func_263(0);
		}
		else if (iVar3 == 83)
		{
			func_263(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_260(iVar0))
		{
			if (func_261(iVar0, 4))
			{
				if (func_261(iVar0, 16))
				{
					func_264(iVar0, 1);
				}
				if (func_261(iVar0, 8))
				{
					func_265(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(uParam0);
	iVar1 = func_162(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_266(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_267(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_268(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_269(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_270(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_76()
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

int func_77()
{
	return Global_1894899->f_2;
}

void func_78(int iParam0, bool bParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	bVar0 = func_238(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_271(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_273(iParam0, func_272());
			func_274(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_275(iParam0, 67108864);
		func_273(iParam0, -15);
	}
	func_276(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_277(11);
	}
	else
	{
		func_278(11);
	}
}

void func_80(int iParam0)
{
	if (func_279(iParam0, 0))
	{
		func_280(262144, 5, 0, 1);
		func_281(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_282(101, 7, 1f, 0, 1);
			func_282(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_81()
{
	return Global_1572864->f_15;
}

bool func_82(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_177(iParam0))
	{
		return;
	}
	if (func_283(iParam0) == 4)
	{
		func_284(iParam0, func_272());
		if (!func_181(iParam0) == 5 && !func_181(iParam0) == 6)
		{
			if (bParam3)
			{
				func_189(iParam0, 6);
			}
			else
			{
				func_189(iParam0, 5);
			}
			func_194(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_182(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_285(0, 2);
		if (!bVar1 && bParam1)
		{
			func_286();
		}
	}
	else
	{
		func_191(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_287(iParam0);
	}
	else
	{
		Var2 = { func_94(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_82(32768))
		{
			Var4 = { func_94(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_181(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_259(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_259(iParam0)]->f_8), true);
						}
					}
					else if ((func_259(iParam0) != 95 && func_259(iParam0) != 82) && !func_288((*Global_1347702)[func_259(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_259(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_259(iParam0)]->f_8), true);
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
		func_290(func_259(iParam0), iVar6, func_289());
	}
	else if (iVar0 == 8)
	{
		func_292(func_259(iParam0), iVar6, func_289(), func_291());
	}
	if (!func_181(iParam0) == 5 && !func_181(iParam0) == 6)
	{
		iVar9 = func_293(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_294(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_295(func_259(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_296((iVar10 - 20), 0, iVar10);
					iVar11 = func_296((iVar11 - 10), 0, iVar11);
				}
				func_297(1);
				func_298(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_298(45, 0, 1);
				break;
			case 8:
				iVar10 = func_299(func_259(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_296((iVar10 - 20), 0, iVar10);
					iVar11 = func_296((iVar11 - 10), 0, iVar11);
				}
				func_298(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_300(func_259(iParam0)))
				{
					func_301(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_298(120, 0, 1);
				break;
			case 2:
				func_298(120, 0, 1);
				break;
			case 6:
				func_298(func_303(func_302(iParam0)), 0, 1);
				break;
			case 5:
				func_298(120, 0, 1);
				break;
		}
	}
	func_193(iParam0, 1);
	func_284(iParam0, func_272());
	func_194(iParam0);
	if ((!func_181(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_186(iParam0);
		if (iVar12 != -1)
		{
			func_187(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_188();
			if (iVar12 != -1)
			{
				func_187(0);
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
				switch (func_259(iParam0))
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
				if (func_260(func_259(iParam0)) && func_288((*Global_1347702)[func_259(iParam0)]->f_12, 4))
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
				if (func_259(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_259(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_181(iParam0) == 5 && !func_181(iParam0) == 6)
	{
		if (bParam3)
		{
			func_189(iParam0, 6);
		}
		else
		{
			func_189(iParam0, 5);
		}
		func_194(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_259(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_304();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_305(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(-1267972061);
						func_305(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(1619534881);
						func_305(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(-755457379);
						func_305(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(1015404643);
						func_305(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(-1724192342);
						func_305(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(1310680212);
						func_305(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(-566881549);
						func_305(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(-1753730528);
						func_305(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(147796381);
						func_305(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(-378547623);
						func_305(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(829545206);
						func_305(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_306(891318243);
						func_305(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307();
						func_308(967523420);
						func_309();
						func_310();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_311(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_305(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_312(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_312(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_313(304805134, 1, 1);
						if (!func_314((*Global_1347702)[21]->f_15, 1))
						{
							func_83((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_315();
						break;
					case 26:
						func_316();
						break;
					case 17:
						func_317(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_318())
						{
							func_319(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_320(-514575035, -1))
						{
							iVar15 = func_272();
							func_321(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_322(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_318())
						{
							func_319(1529685685);
						}
						break;
					case 34:
						if (func_318())
						{
							func_319(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_323();
						break;
					case 37:
						func_324();
						if (func_325())
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
						func_326();
						break;
					case 43:
						func_327();
						break;
					case 44:
						if (!func_314((*Global_1347702)[82]->f_15, 1))
						{
							func_83((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_314((*Global_1347702)[83]->f_15, 1))
						{
							func_83((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_328();
						break;
					case 59:
						func_329();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_330();
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
						func_331();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_312(451, 0);
						}
						if (!func_332(-1992824800))
						{
							if (func_332(1520110311))
							{
								iVar16 = func_272();
								func_321(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_322(1937177603, iVar16, 1);
							}
						}
						if (func_333(4))
						{
							if (!func_334(684296857, 1, 0))
							{
								iVar17 = func_272();
								func_321(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_322(-1439688706, iVar17, 1);
							}
						}
						func_305(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_335(89200);
						func_335(2300);
						func_335(2300);
						break;
					case 68:
						func_336();
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
						func_337();
						func_335(-139100);
						break;
					case 69:
						if (func_314((*Global_1347702)[9]->f_15, 1))
						{
							func_335(-6000);
						}
						break;
					case 70:
						func_335(23400);
						func_335(1900);
						func_335(-15000);
						break;
					case 71:
						func_335(-5500);
						break;
				}
				break;
			case 8:
				switch (func_259(iParam0))
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
						func_338();
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
						func_339();
						break;
					case 66:
						func_340();
						func_341();
						break;
					case 67:
						if (!func_342(6))
						{
							func_343(6);
						}
						if (!func_342(3))
						{
							func_343(3);
						}
						if (func_318())
						{
							func_319(1534638301);
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
						if (func_314((*Global_1835011)[69]->f_1, 1))
						{
							func_344(0);
							func_335(40500);
						}
						else
						{
							func_344(0);
							func_335(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_259(iParam0))
				{
					case 0:
						switch (func_302(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_345(iParam0);
		func_346();
		switch (iVar0)
		{
			case 1:
				switch (func_259(iParam0))
				{
					case 4:
						func_347(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_347(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_347(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_347(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_347(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_347(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_347(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_348(iParam0);
						func_347(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_347(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_347(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_334(-2046502963, 1, 0))
						{
							func_305(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_347(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_347(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_347(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_348(iParam0) == 0)
						{
							func_347(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_347(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_288((*Global_1347702)[func_259(iParam0)]->f_12, 536870912))
				{
					func_349(11, 1);
				}
				switch (func_259(iParam0))
				{
					case 109:
						func_347(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_349(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_347(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_347(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_347(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_347(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_350(0, 10, 11, 2116153146))
				{
					func_347(iParam0, func_348(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_350(0, 7, 11, -379687487))
				{
					func_347(iParam0, func_351(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_350(0, 8, 11, -1386089015))
				{
					func_347(iParam0, func_351(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_350(0, 11, 11, -1952009645))
				{
					func_347(iParam0, func_351(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_350(0, 12, 11, 2065895756))
				{
					func_347(iParam0, func_351(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_181(iParam0) == 0)
			{
				if (func_180(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_180(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_183(func_182(iParam0), func_180(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_259(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_353(func_352(Global_1879514->f_1));
						if (iVar0 == 8 && func_259(iParam0) == 58)
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
						if (func_260(func_259(iParam0)) && func_288((*Global_1347702)[func_259(iParam0)]->f_12, 1))
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
			func_354(bParam2, iVar20);
		}
	}
	func_192(1);
	if ((bVar13 || func_129()) && (func_182(iParam0) == 1 || func_182(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_180(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_183(func_182(iParam0), func_180(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_182(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_350(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_355();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_179(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_178(iParam0))
	{
		if (!func_181(iParam0) == 5 && !func_181(iParam0) == 6)
		{
			if (bParam1)
			{
				func_189(iParam0, 6);
			}
			else
			{
				func_189(iParam0, 5);
			}
			func_194(iParam0);
		}
	}
	switch (func_182(iParam0))
	{
		case 1:
			switch (func_259(iParam0))
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
			switch (func_259(iParam0))
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

int func_85(var uParam0)
{
	cVar0 = func_110(uParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_86()
{
	func_91(4112);
	func_90(6);
	vVar2 = { func_356((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_357(vVar2, uVar1, uVar0, 0);
	func_358(vVar2);
	Global_40.f_9.f_15 = func_359(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_87(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	func_91(32);
	if (iParam0 == 0)
	{
		func_91(16);
	}
	else if (iParam0 == 1)
	{
		func_91(8);
	}
	func_360();
	Global_43889 = 1;
}

void func_88(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_89()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_361(Var10, 0);
}

void func_90(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_91(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_92(int iParam0)
{
	if (!func_177(iParam0))
	{
		return;
	}
	if (iParam0 != func_190(0))
	{
		return;
	}
	if (func_180(iParam0) == 0)
	{
	}
	iVar0 = func_182(iParam0);
	if (func_181(iParam0) == 3)
	{
		if (func_180(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_180(iParam0)))
		{
			if (func_182(iParam0) != 1 && func_182(iParam0) != 8)
			{
				func_183(func_182(iParam0), func_180(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_194(iParam0);
	func_40(1);
	func_191(0);
	func_189(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_297(1);
			func_298(15, 0, 1);
			break;
		case 4:
			func_298(10, 0, 1);
			break;
		case 8:
			func_298(10, 0, 1);
			break;
		case 9:
			func_298(10, 0, 1);
			break;
		case 2:
			func_298(10, 0, 1);
			break;
		case 6:
			func_298(10, 0, 1);
			break;
		case 5:
			func_298(10, 0, 1);
			break;
	}
	func_192(1);
}

void func_93()
{
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iLocal_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, iLocal_14);
		iVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(iVar2) && _0x88ad6cc10d8d35b2(iVar2)) && !_0xa7e51b53309eac97(iVar2))
		{
			delete_entity(&iVar2);
		}
		iVar0++;
	}
	destroy_itemset(iLocal_14);
}

struct<2> func_94(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<8> func_96(var uParam0)
{
	return uParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_362(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_363(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_363(&(Global_1347343->f_11), 16384);
	}
	if (func_364() >= 2)
	{
		if (!func_362(Global_1347343->f_11, 16384))
		{
			func_363(&(Global_1347343->f_11), 8);
		}
		func_198(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_216(Global_1935630, 2048);
	func_365(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 || iParam1);
}

void func_100(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*uParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_366(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_185(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_367(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_368(&(uParam0->f_7375));
}

bool func_102()
{
	return Global_1572864->f_14;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864->f_13;
}

bool func_105()
{
	return func_369() != -1;
}

int func_106()
{
	return Global_1572864->f_9;
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_597 = iParam1;
	settimera(0);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_370(uParam0);
	uParam0->f_634[0] = 56267;
	uParam0->f_634[1] = 56267;
	uParam0->f_637 = 0;
	func_372(uParam0, *uParam1);
	func_373(uParam0);
}

void func_109(var uParam0)
{
	func_374(uParam0, 50);
	func_376(uParam0, func_375(0, 7));
}

char[] func_110(int iParam0)
{
	if (!func_176(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_111()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

void func_112(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_113(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_114()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_377(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(var uParam0)
{
	switch (uParam0->f_607)
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

bool func_116(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	return func_238(iParam0, 33554432);
}

void func_117(bool bParam0, int iParam1, bool bParam2)
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

void func_118(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
	{
		case 31:
			_set_weather_type(-702816767, false, true, true, 45f, false);
			break;
	}
}

void func_119(int iParam0, bool bParam1)
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

bool func_120(var uParam0, int iParam1)
{
	return (uParam0->f_5308 && iParam1) != 0;
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	return func_378(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
}

bool func_122(int iParam0)
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

void func_123(var uParam0)
{
	if (func_29())
	{
		func_379(&(uParam0->f_7375));
	}
}

void func_124(var uParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	uParam0->f_8268 = iParam1;
}

int func_125(var uParam0)
{
	return uParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_380(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_381(Param0, Param0.f_3);
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_382())
	{
		return false;
	}
	if (!func_314((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_314((*Global_1835011)[2]->f_1, 1) && func_314((*Global_1347702)[120]->f_15, 1)) && !func_314((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_314((*Global_1835011)[37]->f_1, 1) && !func_314((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_314((*Global_1835011)[57]->f_1, 1) && !func_314((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_314((*Global_1835011)[26]->f_1, 1) && !func_314((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_314((*Global_1835011)[62]->f_1, 1) && func_314((*Global_1835011)[63]->f_1, 1)) && !func_314((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_314((*Global_1835011)[75]->f_1, 1) && !func_314((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_314((*Global_1835011)[76]->f_1, 1) && !func_314((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_314((*Global_1835011)[40]->f_1, 1) && func_314((*Global_1835011)[41]->f_1, 1)) && !func_314((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_314((*Global_1835011)[62]->f_1, 1) && func_314((*Global_1835011)[63]->f_1, 1)) && !func_314((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_314((*Global_1835011)[65]->f_1, 1) && func_314((*Global_1835011)[66]->f_1, 1)) && !func_314((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_130(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_120(uParam0, 33554432))
	{
		return;
	}
	if (func_120(uParam0, 4096))
	{
		return;
	}
	if (func_383(vParam1))
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
		func_103(uParam0, 8);
	}
	func_103(uParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_207(&(uParam0->f_603));
}

void func_131(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_132(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_384();
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

void func_133(var uParam0)
{
	if (_uilog_is_entry_registered(2, func_85(uParam0)))
	{
		_uilog_remove_entry(2, func_85(uParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(uParam0)))
	{
		func_385(uParam0->f_607);
	}
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_598 = iParam1;
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_599 = iParam1;
	func_27(&(uParam0->f_600), 1);
}

bool func_136(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(var uParam0)
{
	func_386(&(uParam0->f_638));
	func_387(&(uParam0->f_819));
	func_388(&(uParam0->f_1020));
	func_389(&(uParam0->f_1081));
	func_390(&(uParam0->f_1126));
	func_391(&(uParam0->f_5147));
	func_392(&(uParam0->f_1124));
	func_393(&(uParam0->f_5188));
	func_394(&(uParam0->f_5239));
	func_395(&(uParam0->f_5249));
	func_396(&(uParam0->f_5265));
	func_397(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
}

int func_139(var uParam0)
{
	func_398(uParam0, iLocal_25, 1);
	func_398(uParam0, iLocal_26, 1);
	func_398(uParam0, iLocal_27, 1);
	func_398(uParam0, iLocal_28, 1);
	func_398(uParam0, iLocal_29, 1);
	func_398(uParam0, iLocal_30, 1);
	func_398(uParam0, iLocal_42, 1);
	func_398(uParam0, iLocal_22, 6);
	func_398(uParam0, iLocal_31, 6);
	func_398(uParam0, iLocal_32, 6);
	func_398(uParam0, iLocal_34, 6);
	func_398(uParam0, iLocal_35, 6);
	func_398(uParam0, iLocal_36, 6);
	func_398(uParam0, iLocal_37, 6);
	func_398(uParam0, iLocal_43, 524288);
	func_398(uParam0, iLocal_39, 1);
	func_398(uParam0, iLocal_40, 67108863);
	func_398(uParam0, iLocal_41, 67108863);
	func_398(uParam0, iLocal_44, 67108863);
	func_398(uParam0, iLocal_45, 67108863);
	func_398(uParam0, iLocal_46, 67108863);
	func_398(uParam0, iLocal_50, 524798);
	func_398(uParam0, iLocal_47, 40);
	func_398(uParam0, iLocal_51, 524796);
	func_398(uParam0, iLocal_52, 524796);
	func_398(uParam0, iLocal_53, 524784);
	func_398(uParam0, iLocal_38, 524544);
	func_398(uParam0, iLocal_23, 67108863);
	func_398(uParam0, iLocal_24, 67108863);
	func_398(uParam0, iLocal_18, 67108863);
	func_398(uParam0, iLocal_19, 67108863);
	func_398(uParam0, iLocal_17, 1);
	func_398(uParam0, iLocal_20, 1);
	func_398(uParam0, iLocal_21, 1);
	func_398(uParam0, iLocal_48, 67108863);
	func_398(uParam0, iLocal_49, 67108863);
	func_399(uParam0, iLocal_54, 1);
	func_399(uParam0, iLocal_55, 67108863);
	func_399(uParam0, iLocal_56, 67108863);
	func_400(uParam0, -974480336, 67108863);
	func_400(uParam0, 1532774697, 67108863);
	func_401(uParam0, sLocal_57, 67108863, 2, -1);
	func_401(uParam0, sLocal_58, 2, 2, -1);
	func_401(uParam0, cLocal_59, 48, 2, -1);
	func_401(uParam0, sLocal_60, 48, 2, -1);
	func_401(uParam0, sLocal_61, 64, 2, -1);
	func_401(uParam0, sLocal_62, 128, 2, -1);
	func_402(uParam0, sLocal_74, 384);
	func_403(uParam0, "script@story@mar7@ig@ig0_approach@ig0_approach_wayne", &iLocal_177, 2, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@leadin@mcs1@leadin", &iLocal_174, 6, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@leadin@mcs1@leadin", &iLocal_175, 4, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@leadin@mcs2@leadin", &iLocal_176, 12, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig4_wayne_to_cover@ig4_wayne_to_cover", &iLocal_180, 24, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig1_up_tree@ig1_up_tree", &(Local_1026[0]->f_14), 48, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig1_up_tree@ig1_up_tree", &(Local_1026[1]->f_14), 48, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig7_foundwayne@ig7_foundwayne_player", &iLocal_182, 64, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig7_foundwayne@ig7_foundwayne_charles", &iLocal_183, 64, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig2_pick_up@ig2_pick_up", &iLocal_178, 64, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig3_drop_off@ig3_drop_off", &iLocal_179, 128, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@ig@ig6_wayne_to_wagon@ig6_wayne_to_wagon", &iLocal_181, 384, 0, 0, 0, 1);
	func_403(uParam0, "script@story@mar7@leadin@ext@uncle_asleep", &iLocal_184, 524544, 0, 0, 0, 1);
	func_404(uParam0, iLocal_179, "pl_IG3_drop_off_tools_turn", 128);
	func_404(uParam0, iLocal_179, "pl_IG3_drop_off_tools_back_right", 128);
	func_404(uParam0, iLocal_179, "pl_IG3_drop_off_tools_back_left", 128);
	return 1;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_405(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_99(uParam0, 33554432);
	func_103(uParam0, 2);
	if (func_33(uParam0) == 0)
	{
		func_406();
	}
}

void func_142(var uParam0, int iParam1)
{
	func_407(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_256(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_257(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_408(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_242(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_409() };
	}
}

void func_147(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(uParam0->f_603), 1);
	}
}

void func_148(var uParam0)
{
}

void func_149(var uParam0, float fParam1)
{
	func_410(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_411(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_412(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_366(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_152()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_153(bool bParam0, bool bParam1)
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

int func_154(var uParam0)
{
	return *uParam0;
}

Vector3 func_155(int iParam0)
{
	if (!func_176(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_156(var uParam0, bool bParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 134217728))
	{
		func_139(uParam0);
		func_140(uParam0, func_33(uParam0), 134217728);
	}
	if (bParam1 && !func_121(uParam0, func_35(uParam0), 536870912))
	{
		if (func_413(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_414(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_413(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

int func_157(var uParam0)
{
	return 1;
}

bool func_158(var uParam0)
{
	if (func_415(uParam0) < 1)
	{
		func_416(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_417(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(uParam0, 4) && !func_105()) && !func_128(uParam0, 3))
	{
		if (!func_120(uParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(uParam0, 32);
			}
			else
			{
				func_418(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_419(uParam0);
		}
	}
	switch (func_415(uParam0))
	{
		case -1:
		case 0:
			func_420(uParam0, 1);
			break;
		case 1:
			if (func_421(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_420(uParam0, 2);
				}
				else
				{
					func_420(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_422(uParam0))
			{
				func_420(uParam0, 3);
			}
			break;
		case 3:
			if (func_423(uParam0))
			{
				func_420(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_159(var uParam0)
{
	return uParam0->f_5408;
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_161(var uParam0)
{
	if (func_33(uParam0) == 26)
	{
		func_424(uParam0, 0);
		return true;
	}
	if (func_425(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_424(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_425(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163()
{
	if (func_426(iLocal_110, 0))
	{
		func_427(iLocal_110);
		set_ped_combat_attributes(iLocal_110, 27, false);
		set_ped_config_flag(iLocal_110, 279, false);
		set_ped_config_flag(iLocal_110, 156, true);
		set_ped_config_flag(iLocal_110, 249, false);
		set_ped_config_flag(iLocal_110, 333, false);
		set_ped_config_flag(iLocal_110, 454, false);
	}
}

void func_164()
{
	if (func_426(Global_35, 0))
	{
		func_428(7);
		func_428(1);
		clear_ped_tasks(Global_35, 1, 0);
		clear_ped_secondary_task(Global_35);
		set_player_control(get_player_index(), true, 0, false);
		_0x0751d461f06e41ce(get_player_index(), 10, 0, 0);
		_0x3a50753042b6891b(Global_35, "p_toolBox01x_PH_L_HAND");
		set_ped_config_flag(Global_35, 159, false);
		set_ped_config_flag(Global_35, 454, false);
		set_ped_config_flag(Global_35, 249, false);
		set_ped_config_flag(Global_35, 43, false);
		_0x6569f31a01b4c097(Global_35, 2, 1);
		_0x6569f31a01b4c097(Global_35, 3, 1);
		_0x18ff3110cf47115d(Global_35, 9, 1);
	}
}

void func_165()
{
	remove_model_hide(vLocal_203, 2.5f, iLocal_32, 0);
	_0x243cede8f916b994();
	_0x4f57397388e1dff8();
	if (_0xc276fe69dda22bad(iLocal_239))
	{
		remove_cover_point(iLocal_239);
	}
	if (_0xc276fe69dda22bad(iLocal_240))
	{
		remove_cover_point(iLocal_240);
	}
	func_429(sLocal_81);
	func_429(sLocal_82);
	func_430();
	func_431(0);
	func_432(0);
	func_433();
	func_434(0, 0, 1103626240);
	func_435(38, 1);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_436(&iLocal_237);
}

void func_166()
{
	func_437();
	if (_does_volume_exist(iLocal_219))
	{
		_0xd17672447692478e(iLocal_219, 0);
		_0x74c2b3dc0b294102(iLocal_219);
		_0xa1cfb35069d23c23(iLocal_219);
	}
	if (_does_volume_exist(iLocal_230))
	{
		_0x74c2b3dc0b294102(iLocal_230);
	}
	if (_does_volume_exist(iLocal_223))
	{
		_0x74c2b3dc0b294102(iLocal_223);
		_0xa1cfb35069d23c23(iLocal_223);
	}
	if (_0x91a5f9cbebb9d936(uLocal_232))
	{
		remove_scenario_blocking_area(uLocal_232, false);
	}
	if (_0x91a5f9cbebb9d936(uLocal_233))
	{
		remove_scenario_blocking_area(uLocal_233, false);
	}
	if (_0x91a5f9cbebb9d936(uLocal_234))
	{
		remove_scenario_blocking_area(uLocal_234, false);
	}
	if (_0x91a5f9cbebb9d936(uLocal_235))
	{
		remove_scenario_blocking_area(uLocal_235, false);
	}
	if (_0x91a5f9cbebb9d936(uLocal_236))
	{
		remove_scenario_blocking_area(uLocal_236, false);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_225 - 1))
	{
		func_438(&(iLocal_225[iVar0]));
		iVar0++;
	}
	func_438(iLocal_217);
	func_438(iLocal_218);
	func_438(iLocal_219);
	func_438(iLocal_220);
	func_438(iLocal_221);
	func_438(iLocal_222);
	func_438(iLocal_223);
	func_438(iLocal_224);
	func_438(iLocal_228);
	func_438(iLocal_229);
	func_438(iLocal_230);
	func_438(iLocal_231);
}

void func_167()
{
	func_439(&iLocal_109);
	func_439(&iLocal_114);
	func_439(&iLocal_115);
	func_440(&iLocal_156);
	func_440(&iLocal_157);
	func_440(&iLocal_158);
	func_440(&iLocal_159);
	func_440(&iLocal_161);
	func_440(&iLocal_160);
}

void func_168()
{
	func_439(&iLocal_113);
	func_440(&iLocal_162);
	func_440(&iLocal_163);
	func_440(&iLocal_164);
	func_440(&iLocal_164);
	func_440(&iLocal_165);
	func_440(&iLocal_166);
	func_440(&iLocal_167);
}

void func_169()
{
	func_441(&Local_257, 1);
	func_441(&Local_438, 1);
	func_441(&Local_559, 1);
	func_441(&Local_600, 1);
	func_441(&Local_641, 1);
	func_441(&Local_762, 1);
	func_441(&Local_823, 1);
	func_441(&Local_904, 1);
	func_441(&Local_965, 1);
	func_439(&Local_1006);
	func_442(0);
	func_436(&iLocal_1637);
	func_436(&iLocal_1638);
}

void func_170(var uParam0)
{
	if (func_22(uParam0) == 0 || func_22(uParam0) == 5)
	{
		func_406();
	}
	func_246(uParam0, 7, iLocal_110, 0, 0, 1, 0);
	func_246(uParam0, 4, iLocal_116, 0, 0, 1, 0);
	func_439(&iLocal_111);
	func_439(&iLocal_112);
	func_439(&iLocal_113);
	func_440(&iLocal_169);
	func_440(&iLocal_171);
	func_440(&iLocal_172);
	func_440(&iLocal_173);
	func_440(&iLocal_170);
	func_440(&iLocal_168);
	func_443();
}

void func_171(var uParam0)
{
	func_444(uParam0, 33554432);
	func_252(uParam0, 2);
}

bool func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
	}
	return false;
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_445(0, iParam1, 0, iParam2, iParam3);
}

int func_174(int iParam0)
{
	return iParam0;
}

void func_175(int iParam0)
{
	if (!func_446(iParam0))
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

bool func_176(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_177(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_178(int iParam0)
{
	iVar0 = func_283(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_179(int iParam0)
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
		iVar0 = func_181(iParam0);
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

int func_180(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_181(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_447(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_182(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	return func_449(func_448(iParam0));
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_184(int iParam0, bool bParam1, bool bParam2)
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
		if (func_450())
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
		iVar0 = func_259(&(Global_1898164->f_1[0]));
		if (func_260(iVar0) && func_288((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_177(&(Global_1898164->f_1[0])))
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

bool func_185(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_186(int iParam0)
{
	switch (func_182(iParam0))
	{
		case 1:
			iVar0 = func_259(iParam0);
			return func_451(iVar0);
		case 8:
			iVar1 = func_259(iParam0);
			if (func_288((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_452(iVar1);
			}
			break;
	}
	return -1;
}

void func_187(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_453(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_454();
		Global_1898077->f_9 = func_455(Global_1894899->f_2);
		func_456(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_188()
{
	if (!func_314((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_314((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_314((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_314((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_314((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_314((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_314((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_189(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	func_457(iParam0, iParam1);
}

int func_190(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_191(bool bParam0)
{
	if (!bParam0 && func_458(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_192(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_193(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_190(0) != iParam0)
	{
		return;
	}
	if (func_459(iParam0))
	{
		if (bParam1)
		{
			func_460(-525676072);
		}
		else
		{
			func_461(-525676072);
		}
	}
}

int func_194(int iParam0)
{
	return func_463(func_462(iParam0));
}

void func_195(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_196(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_197(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_198(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_199()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_200()
{
	return func_464(_0xc17f69e1418cd11f(3));
}

bool func_201()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_202(int iParam0)
{
	iParam0 = func_253(iParam0);
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

int func_203(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_466(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_204(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_205(char* sParam0, bool bParam1)
{
	if (func_204(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_467(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_467(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_467(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_467(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_467(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_467(sParam0, 1);
		return true;
	}
	func_467(sParam0, 1);
	return false;
}

bool func_206(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_207(var uParam0)
{
	func_468(uParam0, 0f);
}

int func_208(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_469(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_470() - round((uParam0->f_1 * 1000f)));
}

void func_209(bool bParam0, bool bParam1)
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
		func_471(0);
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

struct<4> func_210(int iParam0, int iParam1)
{
	return func_472(iParam0, iParam1);
}

void func_211(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_212(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_213(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_182(iParam0) == 1)
	{
		cVar0 = func_110(func_473(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_182(iParam0) == 8)
	{
		cVar0 = func_475(func_474(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_476(1, 1);
	func_477(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_198(1f);
}

void func_214(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_467(sParam0, 2);
}

void func_215(int iParam0, int iParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_217()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_218()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_219()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_220()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_221()
{
	return func_479(get_id_of_this_thread());
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_480(bParam0);
}

void func_223()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_225()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_226(var uParam0)
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

void func_227(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_228(int iParam0)
{
	if (!func_481(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_229()
{
	func_482(64);
}

void func_230()
{
	Global_1310750->f_16072 = 0;
}

bool func_231()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_232(int iParam0)
{
	return func_233(23, iParam0);
}

bool func_233(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_483(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_484())
	{
		return func_483(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_483(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_234(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_235(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	return func_238(iParam0, 8);
}

void func_236(int iParam0, int iParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_237(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_238(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_239(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_240()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_238(iVar1, 1))
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
				if (func_20() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_238(iVar1, 2))
			{
				if (func_20() == -1)
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
				func_275(iVar1, 11);
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

bool func_241(var uParam0)
{
	if (func_485(uParam0, 1) || func_485(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_242(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_243(struct<2> Param0)
{
	if (!func_242(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_244(struct<2> Param0, int iParam2)
{
	if (!func_242(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_245(int iParam0)
{
	if (!func_486(iParam0))
	{
		return false;
	}
	if (!func_487(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_486(iParam1))
	{
		return;
	}
	if (!func_245(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(uParam0) != 0 && func_154(uParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_488(uParam0, iParam2);
		func_489(iParam2);
	}
	func_490(iParam1);
	func_491(iParam1, 0);
	func_492(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_247(var uParam0)
{
	return uParam0->f_5411;
}

int func_248(int iParam0)
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

int func_249(int iParam0)
{
	iParam0 = func_253(iParam0);
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

void func_250(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_493(iParam0);
	if (func_494(iParam0))
	{
		if (func_249(iParam0) != iVar0)
		{
			return;
		}
	}
	func_495(iParam0);
	func_496(iParam0);
	iVar1 = func_202(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (!is_entity_dead(iVar1) && !is_ped_injured(iVar1))
		{
		}
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
		iVar2 = get_entity_model(iVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_497(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_498(iParam0);
	}
}

void func_251(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_499(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_493(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_249(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_494(iVar0))
		{
			return;
		}
	}
	func_500(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_252(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_253(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_254(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

void func_255()
{
	if (func_501(0))
	{
		func_502(0);
	}
	if (func_501(1))
	{
		func_502(1);
	}
	if (func_501(5))
	{
		func_502(5);
	}
	if (func_501(6))
	{
		func_495(6);
	}
}

struct<2> func_256(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_257(int iParam0)
{
	Var0 = { func_256(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_258(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_259(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_503(func_448(iParam0));
}

bool func_260(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_261(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_262(int iParam0, bool bParam1)
{
	iVar0 = func_504(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_505(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_505(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_505(iParam0)))
			{
				_uilog_remove_entry(2, func_505(iParam0));
			}
		}
	}
	func_506(iParam0, 4);
	func_506(iParam0, 8);
	func_506(iParam0, 16);
}

void func_263(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_260(iVar0))
		{
			if (func_261(iVar0, 4))
			{
				func_264(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (!func_261(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_504(iParam0), func_505(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 2, "");
		func_507(iParam0, 16);
	}
	else
	{
		if (func_261(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 0, "");
		}
		func_506(iParam0, 16);
	}
}

void func_265(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_261(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_504(iParam0), func_505(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_261(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 1, "");
		}
		func_507(iParam0, 8);
	}
	else
	{
		if (func_261(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 0, "");
		}
		func_506(iParam0, 8);
	}
}

int func_266(var uParam0)
{
	if (func_120(uParam0, 8388608))
	{
		return 2;
	}
	if (func_120(uParam0, 4194304))
	{
		return 4;
	}
	if (func_120(uParam0, 4))
	{
		return 1;
	}
	if (func_128(uParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_267(int iParam0, int iParam1)
{
	if (func_501(0))
	{
		if (func_508(0))
		{
			func_509(0);
		}
	}
	if (func_501(1))
	{
		if (func_508(1))
		{
			func_509(1);
		}
	}
}

void func_268(var uParam0)
{
	if (func_120(uParam0, 1))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_5411))
	{
		if (func_120(uParam0, 16))
		{
			func_58(uParam0, 0);
		}
		if (func_417(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_269(var uParam0)
{
	return false;
	switch (uParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_270(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_510(iParam0, sParam4, iParam5);
	}
	func_511(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_271(int iParam0)
{
	if (!func_234(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_272()
{
	return &Global_1899515;
}

void func_273(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_274(int iParam0, int iParam1)
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

void func_275(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_276(int iParam0)
{
	if (!func_234(iParam0))
	{
		return;
	}
	if (func_512(iParam0))
	{
		func_513(iParam0);
	}
	else
	{
		func_514(iParam0);
	}
}

int func_277(int iParam0)
{
	if (func_515(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	if (func_516(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, int iParam1)
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

void func_280(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_517(Global_1310750[iVar0], iParam0))
		{
			if (!func_518(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_519(iVar0) < func_520(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_282(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_281(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_521();
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

void func_282(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_522(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_283(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_181(iParam0);
}

void func_284(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_285(bool bParam0, int iParam1)
{
	if (!bParam0 && func_458(373691918))
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
	func_191(bParam0);
	return 1;
}

void func_286()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_486(iVar17))
		{
			iVar18 = func_523(iVar17);
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
	func_524(&(Global_1359489->f_55));
	if (func_525(1777191912, 1))
	{
		func_526(1777191912, 1, 0);
	}
}

void func_287(int iParam0)
{
	if (!func_177(iParam0))
	{
		return;
	}
	func_528(iParam0, (func_527(iParam0) + shift_left(1, 16)));
}

bool func_288(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_289()
{
	return func_529() > 0;
}

void func_290(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_530(-1032423150, iParam1);
			break;
		case 18:
			func_530(294066959, iParam1);
			func_530(-1925639563, iParam1);
			func_530(-378582304, iParam1);
			func_530(-338306437, iParam1);
			break;
		case 20:
			func_530(437270255, iParam1);
			break;
		case 2:
			func_530(-304000413, iParam1);
			func_530(-533612796, iParam1);
			func_530(48036954, iParam1);
			break;
		case 23:
			func_530(193108691, iParam1);
			func_530(491732588, iParam1);
			func_530(671962088, iParam1);
			func_531(1);
			break;
		case 16:
			func_530(-1836056650, iParam1);
			func_530(-754657922, iParam1);
			func_530(-1752355838, iParam1);
			func_530(-1375324510, iParam1);
			break;
		case 59:
			func_530(-514392105, iParam1);
			func_530(-822060246, iParam1);
			if (func_532(146))
			{
				func_530(1372748575, iParam1);
			}
			func_531(1);
			break;
		case 76:
			func_530(1991352213, iParam1);
			if (func_533() == 0)
			{
				func_530(1852488616, iParam1);
			}
			else
			{
				func_530(-9866350, iParam1);
			}
			break;
		case 44:
			func_530(863852599, iParam1);
			func_530(1228374935, iParam1);
			func_530(1517889050, iParam1);
			func_530(830657578, iParam1);
			func_530(1901354958, iParam1);
			break;
		case 46:
			func_530(-582805654, iParam1);
			func_530(250378940, iParam1);
			func_530(-2143265426, iParam1);
			break;
		case 17:
			func_530(-941494139, iParam1);
			func_530(1641489521, iParam1);
			break;
		case 19:
			func_530(-1829423531, iParam1);
			func_530(-1590504752, iParam1);
			func_530(1357221321, iParam1);
			break;
		case 21:
			func_530(-1037992610, iParam1);
			func_530(-1286414399, iParam1);
			func_531(0);
			break;
		case 15:
			func_530(-1014460309, iParam1);
			func_530(-1030502825, iParam1);
			break;
		case 33:
			func_530(479388090, iParam1);
			func_530(-1396342239, iParam1);
			func_530(-619618632, iParam1);
			break;
		case 34:
			func_530(1193561641, iParam1);
			break;
		case 64:
			func_530(1363960851, iParam1);
			break;
		case 60:
			func_530(-1232453926, iParam1);
			func_530(-882833584, iParam1);
			break;
		case 73:
			func_530(2023205767, iParam1);
			break;
		case 74:
			func_530(-2135286513, iParam1);
			if (func_533() == 0)
			{
				func_530(33799444, iParam1);
			}
			else
			{
				func_530(-161343203, iParam1);
			}
			break;
		case 8:
			func_530(841639693, iParam1);
			func_530(358952323, iParam1);
			break;
		case 36:
			func_530(852538149, iParam1);
			func_530(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_530(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(1116039310, iParam1);
			}
			break;
		case 27:
			func_530(107633428, iParam1);
			func_530(335902282, iParam1);
			func_530(575673055, iParam1);
			func_530(-425944207, iParam1);
			break;
		case 28:
			func_530(-1941530250, iParam1);
			func_530(1399269304, iParam1);
			func_530(1839684664, iParam1);
			func_530(923168503, iParam1);
			func_530(-1485078322, iParam1);
			break;
		case 29:
			func_530(574995900, iParam1);
			func_530(-1691275407, iParam1);
			func_530(-1725307861, iParam1);
			break;
		case 31:
			func_530(-2108383238, iParam1);
			func_530(-1321828931, iParam1);
			func_530(-1632118592, iParam1);
			func_530(334938948, iParam1);
			break;
		case 4:
			func_530(115823701, iParam1);
			func_530(-1896939736, iParam1);
			func_530(-1830746356, iParam1);
			func_530(-1235169781, iParam1);
			func_531(0);
			break;
		case 6:
			func_530(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_530(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_530(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(-384176140, iParam1);
			}
			break;
		case 25:
			func_530(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_530(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_530(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(-1374849484, iParam1);
			}
			break;
		case 48:
			func_530(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_530(217772674, iParam1);
			}
			else
			{
				func_530(2071798160, iParam1);
			}
			if (func_534(51))
			{
				func_530(-792802286, iParam1);
			}
			break;
		case 49:
			func_530(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_530(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_530(1402120602, iParam1);
			}
			break;
		case 58:
			func_530(-1661934591, iParam1);
			break;
		case 50:
			func_530(-1713759426, iParam1);
			break;
		case 52:
			func_530(-314799932, iParam1);
			func_530(-462260432, iParam1);
			func_530(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_530(345256028, iParam1);
				func_530(-1635084094, iParam1);
			}
			else
			{
				func_530(114267347, iParam1);
			}
			break;
		case 32:
			func_530(615304157, iParam1);
			break;
		case 47:
			func_530(415434835, iParam1);
			break;
		case 69:
			func_530(1373465877, iParam1);
			if (func_314((*Global_1347702)[9]->f_15, 1))
			{
				func_530(-2058273527, iParam1);
			}
			break;
		case 70:
			func_530(451334985, iParam1);
			if (func_533() == 0)
			{
				func_530(-224150200, iParam1);
			}
			else
			{
				func_530(289012628, iParam1);
			}
			break;
		case 71:
			if (func_533() == 0)
			{
				func_530(-41692120, iParam1);
			}
			else
			{
				func_530(1537840678, iParam1);
			}
			break;
		case 37:
			func_530(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_530(1842132550, iParam1);
			}
			else
			{
				func_530(-785735240, iParam1);
			}
			func_530(-1605690566, iParam1);
			break;
		case 13:
			func_530(-731367459, iParam1);
			func_530(224176585, iParam1);
			func_530(-14545580, iParam1);
			break;
		case 53:
			func_530(1095274522, iParam1);
			break;
		case 54:
			func_530(-572027988, iParam1);
			break;
		case 56:
			func_530(1339307101, iParam1);
			func_530(2102267732, iParam1);
			break;
		case 57:
			func_530(710102686, iParam1);
			break;
		case 22:
			func_530(-1754368482, iParam1);
			func_530(-2071408557, iParam1);
			break;
		case 12:
			func_530(-181334543, iParam1);
			break;
		case 0:
			func_530(-2134669864, iParam1);
			func_530(-548289709, iParam1);
			func_530(-911271922, iParam1);
			func_530(-604455775, iParam1);
			break;
		case 1:
			func_531(1);
			break;
		case 3:
			if (func_325())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_530(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_530(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_291()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_292(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_530(-145926707, iParam1);
			func_530(-604922090, iParam1);
			func_530(-848690769, iParam1);
			break;
		case 1:
			func_530(-1477631591, iParam1);
			break;
		case 2:
			func_530(76112544, iParam1);
			break;
		case 9:
			func_530(1396404308, iParam1);
			func_530(-1357381228, iParam1);
			if (func_314((*Global_1835011)[69]->f_1, 1))
			{
				func_530(1902679064, iParam1);
			}
			else
			{
				func_530(-2146422425, iParam1);
			}
			break;
		case 22:
			func_530(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_530(-1934184559, iParam1);
				func_530(1281755988, iParam1);
			}
			else
			{
				func_530(-1745220872, iParam1);
				func_530(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_530(-1641504538, iParam1);
				func_530(-988014485, iParam1);
			}
			else if (func_532(26))
			{
				func_530(-343043950, iParam1);
				func_530(-640062214, iParam1);
			}
			else
			{
				func_530(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_530(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_530(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_530(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_530(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_530(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_530(1301690984, iParam1);
				}
			}
			else
			{
				func_530(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_530(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_530(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_530(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_530(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_530(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_530(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_530(-754570528, iParam1);
			}
			else
			{
				func_530(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_530(-2072125821, iParam1);
			}
			else
			{
				func_530(270040030, iParam1);
			}
			break;
		case 37:
			func_530(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_530(-505314737, iParam1);
				func_530(-1853052860, iParam1);
			}
			else
			{
				func_530(-1975624994, iParam1);
				func_530(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_530(1690231002, iParam1);
			}
			else
			{
				func_530(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_530(1225386280, iParam1);
			}
			else if (func_532(54))
			{
				func_530(-283235773, iParam1);
			}
			else
			{
				func_530(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_530(1355398007, iParam1);
			}
			else
			{
				func_530(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_530(574636806, iParam1);
			}
			else
			{
				func_530(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_530(821118338, iParam1);
			}
			else if (func_532(39))
			{
				func_530(846829260, iParam1);
			}
			else
			{
				func_530(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_348((*Global_1835011)[33]->f_1) == 1)
				{
					func_530(1422779093, iParam1);
				}
				else
				{
					func_530(-1769536986, iParam1);
				}
			}
			else
			{
				func_530(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_530(352134789, iParam1);
			}
			else if (func_532(43))
			{
				func_530(260723113, iParam1);
			}
			else
			{
				func_530(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_530(-457958799, iParam1);
			}
			else
			{
				func_530(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_532(41))
			{
				func_530(-546824600, iParam1);
			}
			else
			{
				func_530(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_530(1297261593, iParam1);
			}
			else
			{
				func_530(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_530(2068484886, iParam1);
			}
			else if (func_532(49))
			{
				func_530(-1489080639, iParam1);
				func_530(-2102244050, iParam1);
			}
			else
			{
				func_530(-1863040467, iParam1);
			}
			break;
		case 51:
			func_530(-2055943209, iParam1);
			break;
		case 58:
			if (func_314((*Global_1347702)[23]->f_15, 1))
			{
				func_530(1650066845, iParam1);
			}
			else
			{
				func_530(151370023, iParam1);
			}
			func_530(1426057961, iParam1);
			func_530(476379584, iParam1);
			break;
		case 59:
			func_530(-1638117866, iParam1);
			break;
		case 62:
			func_530(199541730, iParam1);
			break;
		case 63:
			func_530(1703485804, iParam1);
			func_530(-800449045, iParam1);
			break;
		case 65:
			func_530(-1678210868, iParam1);
			func_530(-1448238026, iParam1);
			func_530(-1200864845, iParam1);
			func_530(1473511536, iParam1);
			break;
		case 66:
			func_530(-1774490051, iParam1);
			func_530(-34645921, iParam1);
			func_530(174027075, iParam1);
			func_530(-1155999, iParam1);
			func_531(1);
			break;
		case 67:
			func_530(701612593, iParam1);
			func_530(-1069631343, iParam1);
			func_530(1673428882, iParam1);
			break;
		case 68:
			func_530(-739133286, iParam1);
			func_530(-2130089358, iParam1);
			func_530(2056190391, iParam1);
			func_530(1941753817, iParam1);
			func_531(0);
			break;
		case 70:
			func_530(-1217555753, iParam1);
			break;
		case 71:
			func_530(697048821, iParam1);
			break;
		case 73:
			func_530(-553148661, iParam1);
			break;
		case 75:
			func_530(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_530(1414263863, iParam1);
			}
			else
			{
				func_530(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_530(1835465936, iParam1);
				func_530(523715611, iParam1);
			}
			else if (func_532(78))
			{
				func_530(1420338873, iParam1);
			}
			else
			{
				func_530(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_530(10180941, iParam1);
			}
			else if (func_532(79))
			{
				func_530(768420635, iParam1);
			}
			else
			{
				func_530(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_530(-383601523, iParam1);
			}
			else
			{
				func_530(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_530(1606472408, iParam1);
			}
			else
			{
				func_530(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_530(-203571927, iParam1);
			}
			else
			{
				func_530(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_530(729886222, iParam1);
			}
			else
			{
				func_530(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_530(-714816362, iParam1);
			}
			else
			{
				func_530(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_530(-932932179, iParam1);
				func_530(-1458537240, iParam1);
			}
			else
			{
				func_530(-1764383885, iParam1);
				func_530(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_530(1741466706, iParam1);
			}
			else
			{
				func_530(1405815775, iParam1);
			}
			break;
		case 94:
			func_530(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_530(1905280979, iParam1);
			}
			else
			{
				func_530(-1966245299, iParam1);
			}
			func_530(721468880, iParam1);
			break;
		case 99:
			func_530(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_530(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_530(-1117781095, iParam1);
				}
				else
				{
					func_530(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_530(141494548, iParam1);
			}
			else
			{
				func_530(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_530(-369525697, iParam1);
			}
			else if (func_532(101))
			{
				func_530(1595015219, iParam1);
			}
			else
			{
				func_530(-321486961, iParam1);
			}
			break;
		case 103:
			func_530(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_530(793460477, iParam1);
				func_530(-1610242176, iParam1);
			}
			else if (func_532(103))
			{
				func_530(1830897187, iParam1);
			}
			else
			{
				func_530(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_530(1528309077, iParam1);
			}
			else if (func_532(104))
			{
				func_530(1864966105, iParam1);
			}
			else
			{
				func_530(-103336013, iParam1);
			}
			break;
		case 108:
			func_530(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_530(-1123227713, iParam1);
				func_530(-889574341, iParam1);
			}
			else
			{
				func_530(2065385917, iParam1);
				func_530(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_530(-887421691, iParam1);
			}
			else if (func_532(109))
			{
				func_530(-1318117949, iParam1);
			}
			else
			{
				func_530(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_530(284822762, iParam1);
				}
				else
				{
					func_530(-1425017554, iParam1);
				}
			}
			else if (func_532(110))
			{
				if (&Global_1357515 == 0)
				{
					func_530(553087292, iParam1);
				}
				else
				{
					func_530(-1766870331, iParam1);
					func_530(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_530(-1980598735, iParam1);
			}
			else
			{
				func_530(-442732098, iParam1);
				func_530(1955756409, iParam1);
			}
			break;
		case 115:
			func_530(394303528, iParam1);
			func_530(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_530(1182403394, iParam1);
			}
			else
			{
				func_530(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_530(924445424, iParam1);
			}
			else
			{
				func_530(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_530(430755273, iParam1);
				func_530(-1473879802, iParam1);
			}
			else
			{
				func_530(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_530(73885747, iParam1);
			}
			else if (func_532(117))
			{
				func_530(1559707913, iParam1);
			}
			else
			{
				func_530(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_530(-2103887972, iParam1);
			}
			else if (func_532(118))
			{
				func_530(-435828462, iParam1);
			}
			else
			{
				func_530(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_530(2054486196, iParam1);
			}
			else
			{
				func_530(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_530(-570086056, iParam1);
			}
			else if (func_532(121))
			{
				func_530(32337856, iParam1);
			}
			else
			{
				func_530(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_530(813493663, iParam1);
			}
			else if (func_532(122))
			{
				func_530(-2132763590, iParam1);
			}
			else
			{
				func_530(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_530(-66240572, iParam1);
				func_530(1563075046, iParam1);
			}
			else
			{
				func_530(-787011772, iParam1);
				func_530(-1523377438, iParam1);
			}
			break;
		case 127:
			func_530(61020800, iParam1);
			break;
		case 129:
			func_530(428985222, iParam1);
			break;
		case 131:
			func_530(-1393851036, iParam1);
			break;
		case 133:
			func_530(1559531342, iParam1);
			break;
		case 134:
			func_530(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_530(-1374407408, iParam1);
				}
				else
				{
					func_530(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_530(-472672138, iParam1);
				}
				else
				{
					func_530(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_530(-1678710489, iParam1);
			}
			else
			{
				func_530(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_530(1717582460, iParam1);
			}
			else
			{
				func_530(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_530(1568112362, iParam1);
				func_530(1388317526, iParam1);
			}
			else if (func_532(136))
			{
				func_530(-1597534828, iParam1);
				func_530(-1207918353, iParam1);
			}
			else
			{
				func_530(-1940891082, iParam1);
				func_530(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_530(448334530, iParam1);
				func_530(2145375502, iParam1);
			}
			else
			{
				func_530(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_530(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_530(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_530(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_530(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_530(-66616327, iParam1);
			}
			else
			{
				func_530(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_530(1862916706, iParam1);
			}
			else if (func_532(147))
			{
				func_530(675105199, iParam1);
			}
			else
			{
				func_530(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_530(174409701, iParam1);
			}
			else if (func_532(148))
			{
				func_530(-1730895475, iParam1);
			}
			else
			{
				func_530(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_530(1295237052, iParam1);
			}
			else if (func_532(149))
			{
				func_530(-788577684, iParam1);
			}
			else
			{
				func_530(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_293(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_182(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_473(iParam0);
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
					if (func_348((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_259(iParam0);
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
			iVar3 = func_259(iParam0);
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

int func_294(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_535(iParam0);
	iVar3 = func_536(iParam0);
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
				iVar1 = func_272();
				func_321(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_537(iParam0, 1);
			if (func_538(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_539(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_540(1, iParam0);
				}
				else
				{
					func_541(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_295(int iParam0, int iParam1)
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

int func_296(int iParam0, int iParam1, int iParam2)
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

void func_297(bool bParam0)
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

void func_298(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_542(iParam0, iParam1, bParam2);
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

int func_299(int iParam0, int iParam1)
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

bool func_300(int iParam0)
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

void func_301(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_543(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_544(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_545(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_546(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_545(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_302(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_547(func_448(iParam0));
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_304()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_548(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (!func_550(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_551(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_552(iParam0, bParam2);
	iVar2 = 0;
	if (func_553(iParam0, 0, 0) == 0)
	{
		if (func_554(iParam0))
		{
			iVar5 = func_555(iParam0);
			iVar6 = func_556(iVar5);
			iVar7 = func_557(iVar6) + 1;
			func_558(iVar5);
			if (func_559(38))
			{
				func_312(483, 0);
			}
			else
			{
				func_312(482, 0);
			}
			if (iVar7 == func_560(iVar6))
			{
				func_305(func_561(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_382() && func_562(4))
				{
					if (func_382() && (func_563(38) || func_559(38)))
					{
						func_565(38, func_561(iVar6), 0, 0, func_564(), 0, -1, 0);
						func_566(2);
					}
					else
					{
						func_565(38, func_561(iVar6), 0, 0, func_564(), 0, -1, 0);
						func_566(1);
					}
				}
			}
			else if (func_382() && func_562(4))
			{
				if (func_382() && (func_563(38) || func_559(38)))
				{
					func_565(38, 0, 0, 0, func_564(), 0, -1, 0);
					func_566(2);
				}
				else
				{
					func_565(38, 0, 0, 0, func_564(), 0, -1, 0);
					func_566(1);
				}
			}
			if (func_382() && func_562(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_382() && (func_563(38) || func_559(38)))
					{
						func_567(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_567(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_568(iParam0) == -1037537535)
	{
		if ((!func_569(iParam0, 866047851) && !func_569(iParam0, -1979000645)) && !func_569(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_570(iParam0, 8388608) && !func_571(28))
	{
		func_572(28);
	}
	if (!bVar3)
	{
		if (func_569(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_573(iParam0) == -1447088266)
			{
				iVar1 = func_575(func_574(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_576(iVar1);
					}
					if (func_577(0) && func_578(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_579(iParam0, iVar0, iParam5);
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
					if (func_20() == -1)
					{
						func_576(iParam0);
					}
					if (func_577(0) && func_578(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_579(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_568(iParam0) == -427144552)
		{
			if (!func_580(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_568(iParam0) == 307971639 && func_581(iParam0))
		{
			if (!func_582(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_569(iParam0, 866047851))
		{
			func_583(iParam0);
		}
		else if (func_569(iParam0, 2000026003))
		{
			func_584(iParam0);
		}
		else if (func_569(iParam0, -103750053))
		{
			func_95(func_585(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_586(-717883113, 2091222383), iVar0);
		}
		else if (func_569(iParam0, -121341956) && !func_569(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_314((*Global_1835011)[4]->f_1, 1))
				{
					func_312(498, 0);
				}
			}
			if (func_569(iParam0, -2017733358) || func_569(iParam0, -1369131378))
			{
				func_587(iParam0);
			}
		}
		else if (func_569(iParam0, -136654233))
		{
			if (func_569(iParam0, -1021472396))
			{
			}
		}
		else if (func_569(iParam0, -1466706512) && func_569(iParam0, 1147021565))
		{
			func_312(484, 0);
		}
		else if (func_569(iParam0, 1147021565) && func_569(iParam0, -524514947))
		{
		}
		else if (func_569(iParam0, 554195525))
		{
		}
		else if (func_569(iParam0, 589988438))
		{
			if (func_588())
			{
				func_589(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_569(iParam0, 787083290) && func_569(iParam0, 949916894))
		{
			func_590(iParam0);
		}
		else if (func_569(iParam0, -1718133314))
		{
			func_591(iParam0);
		}
		else if (func_569(iParam0, -1738650224))
		{
			func_592(iParam0);
		}
		else if (func_569(iParam0, -1112814642) && func_569(iParam0, 949916894))
		{
			func_593(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_569(iParam0, 1841149704))
		{
			func_594();
		}
		else if (func_569(iParam0, 606799272))
		{
			func_595(iParam0, iParam1);
			func_596(iParam0);
		}
		else if (func_569(iParam0, -1112814642) && func_569(iParam0, -1697809989))
		{
			func_597(iParam0, 0, 0, 0);
		}
		else if (func_569(iParam0, -2017733358) || func_569(iParam0, -1369131378))
		{
			func_587(iParam0);
		}
		else if (func_569(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_598(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_569(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_334(215778062, 1, 0))
					{
						func_305(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_334(670273567, 1, 0))
					{
						func_305(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_334(-967317137, 1, 0))
					{
						func_305(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_334(526074061, 1, 0))
					{
						func_305(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_334(-1045488665, 1, 0))
					{
						func_305(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_334(471514780, 1, 0))
					{
						func_305(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_569(iParam0, -839724752) && func_570(iParam0, 4))
		{
			if (!func_559(42))
			{
				func_599(iParam0);
			}
		}
		else if (func_569(iParam0, 1399091007))
		{
			func_600(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_569(iParam0, 1248798204))
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
				func_305(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_572(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_601(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_602(&iVar9, 0))
				{
					func_578(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_601(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_312(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_603();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_604();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_605();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_606();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_607();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_608(499813453, 854119837, 0);
				func_609(499813453, 0);
				func_610(1);
				break;
			case 2127812557:
				func_608(499813453, -1292544588, 0);
				func_609(499813453, 0);
				func_610(2);
				break;
			case 808991383:
				func_608(499813453, -1003325394, 0);
				func_609(499813453, 0);
				func_610(4);
				break;
			case 1134518629:
				func_608(666607663, -335460405, 0);
				func_609(666607663, 0);
				func_611(1);
				break;
			case 902940106:
				func_608(666607663, 903797617, 0);
				func_609(666607663, 0);
				func_611(2);
				break;
			case -418174898:
				func_608(666607663, 669728650, 0);
				func_609(666607663, 0);
				func_611(4);
				break;
			case -648114971:
				func_608(-220219788, 1214120047, 0);
				func_609(-220219788, 0);
				func_612(1);
				break;
			case 211153747:
				func_608(-220219788, 655769340, 0);
				func_609(-220219788, 0);
				func_612(2);
				break;
			case -32876996:
				func_608(-220219788, 885316185, 0);
				func_609(-220219788, 0);
				func_612(4);
				break;
			case 1191437462:
				func_608(218622660, -1491419385, 0);
				func_609(218622660, 0);
				func_613(1);
				break;
			case 1119149048:
				func_608(218622660, 1809565830, 0);
				func_609(218622660, 0);
				func_613(2);
				break;
			case 506073827:
				func_608(390004462, -628873767, 0);
				func_609(390004462, 0);
				func_614(1);
				break;
			case -1876986168:
				func_608(390004462, -405421956, 0);
				func_609(390004462, 0);
				func_614(2);
				break;
			case 2142623221:
				func_608(390004462, -1108972386, 0);
				func_609(390004462, 0);
				func_614(4);
				break;
			case 1508215381:
				func_608(6410548, 1053716392, 0);
				func_609(6410548, 0);
				func_615(1);
				break;
			case -888935280:
				func_608(6410548, 806507056, 0);
				func_609(6410548, 0);
				func_615(2);
				break;
			case -1252474566:
				func_608(6410548, 1571925350, 0);
				func_609(6410548, 0);
				func_615(4);
				break;
			case -1465702449:
				func_608(6410548, 1330352282, 0);
				func_609(6410548, 0);
				func_615(8);
				break;
			case -21093309:
				func_617(242, func_616(-21093309), 0);
				break;
			case 204375141:
				func_617(240, func_616(204375141), 0);
				break;
			case -417963070:
				func_617(241, func_616(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_618(594, 1934060482, 1, 1);
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
					func_618(594, 1110018439, 1, 1);
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
					func_618(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_618(594, -1228016946, 1, 1);
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
					func_618(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_618(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_312(488, 0);
				break;
			case 1613651027:
				func_312(491, 0);
				break;
			case -885810591:
				func_312(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_305(func_619(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_305(func_620(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_571(1))
				{
					func_312(487, 0);
				}
				break;
			case -898386032:
				func_312(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_312(496, 0);
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
		func_621(&iVar10);
		if (!func_622(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_577(0))
		{
			return true;
		}
		if (func_568(iParam0) == -1037537535)
		{
			func_623(iParam0);
		}
		if (func_569(iParam0, -1979000645))
		{
			func_624(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_577(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_305(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_625(iVar2, 0);
		}
	}
	Var35 = { func_626(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_627(iParam0);
	if (fParam6 > 0f)
	{
		if (func_569(iParam0, -839724752))
		{
			func_628(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_629(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_306(int iParam0)
{
	if (func_569(iParam0, 1989861793))
	{
		iVar0 = func_630(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_631(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_632(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_633(iVar14, iVar1);
					if (iVar15 != iParam0 && func_549(iVar15, 0))
					{
						if (func_634(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_635(iVar1);
				if (bVar13)
				{
					func_636(iParam0);
				}
				else
				{
					func_312(306, 0);
				}
			}
		}
	}
}

void func_307()
{
	if (func_20() != -1)
	{
		return;
	}
	func_637();
	func_638();
	func_639();
	func_640();
	func_641();
	func_642();
	func_643();
}

void func_308(int iParam0)
{
	func_644(iParam0, 1, 1, -142743235, 1);
	if (func_645(iParam0))
	{
		func_646(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_648(func_647(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_649(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_650() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_651(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_651(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_652(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_652(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_652(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_652(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_652(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_652(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_652(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_652(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_652(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_653(iVar8, iVar0))
				{
					func_654(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_653(iVar8, iVar0))
		{
			func_654(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_309()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_653(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_650() == -2125499975 || func_650() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_654(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_654(&vVar2, iVar5, iVar0);
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

void func_310()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_548(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_311(int iParam0, bool bParam1)
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
			if ((func_314((*Global_1835011)[59]->f_1, 1) || func_314((*Global_1347702)[1]->f_15, 1)) || func_178((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_525(403634348, 1))
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

void func_312(int iParam0, bool bParam1)
{
	func_655(iParam0, &iVar0, &iVar1);
	if (!func_656(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_657(iVar0, iVar1);
}

void func_313(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_648(iParam0, 1);
	func_658(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_658(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_659(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_658(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_658(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_314(int iParam0, bool bParam1)
{
	switch (func_283(iParam0))
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

void func_315()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_548(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_316()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_548(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_317(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_660(iParam1, 1, 0) };
		iParam3 = func_661(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_662(iParam3);
	return func_601(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_318()
{
	return _unlock_is_unlocked(99890643);
}

void func_319(int iParam0)
{
	if (!func_663(iParam0))
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

bool func_320(int iParam0, int iParam1)
{
	if (!func_664(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_665(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_666(Global_40.f_9910[iParam1], 4);
}

void func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_667(*iParam0);
	iVar1 = func_668(*iParam0);
	iVar2 = func_669(*iParam0);
	iVar3 = func_670(*iParam0);
	iVar4 = func_671(*iParam0);
	iVar5 = func_672(*iParam0);
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
	iVar6 = func_673(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_673(iVar1, iVar0);
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
	func_674(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_322(int iParam0, int iParam1, bool bParam2)
{
	if (!func_664(iParam0))
	{
		return;
	}
	if (!func_675(iParam1))
	{
		return;
	}
	if (func_676(iParam1, 1))
	{
		return;
	}
	iVar0 = func_665(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_320(iParam0, -1))
	{
		return;
	}
	else
	{
		func_677(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_184(0, 0, 1))
		{
			func_354(0, 17);
		}
	}
}

void func_323()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_548(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_324()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_548(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_325()
{
	return _unlock_is_unlocked(-121456797);
}

void func_326()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_548(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_327()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_548(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_328()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_548(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_329()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_548(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_330()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_548(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_331()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_548(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_332(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_333(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_334(int iParam0, int iParam1, bool bParam2)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_568(iParam0);
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
		if (!func_678(iParam0, 1))
		{
			return false;
		}
	}
	return func_553(iParam0, 0, bParam2) >= iParam1;
}

void func_335(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_679(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_679(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_548(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_548(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_548(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_548(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_548(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_341()
{
	if (func_680() > 1)
	{
		func_681();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_312(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_312(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_312(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_312(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_312(452, 1);
		}
	}
}

bool func_342(int iParam0)
{
	return func_682(iParam0, 4, 1);
}

void func_343(int iParam0)
{
	func_683(iParam0, 4, 1);
}

void func_344(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_345(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_177(iParam0))
	{
		return;
	}
	func_216(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_182(iParam0))
	{
		case 1:
			func_95(func_586(909007663, -587839005), 1);
			iVar0 = func_259(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_451(iVar0))
			{
				case 0:
					func_95(func_586(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_586(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_586(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_586(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_586(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_586(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_586(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_586(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_586(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_586(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_586(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_259(iParam0);
			if (func_288((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_288((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_288((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_586(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_586(909007663, -2049243343), 1);
				}
			}
			if (func_288((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_452(iVar1))
				{
					case 0:
						func_95(func_586(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_586(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_586(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_586(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_586(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_586(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_586(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_586(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_586(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_586(909007663, 532323983), 1);
				}
			}
			else if (func_288((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_288((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_288((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_586(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_586(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_346()
{
	if (func_20() != -1)
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
	if (!func_3(64))
	{
		return;
	}
	else if (func_185(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_184(0, 0, 1) || func_684()) || func_129())
	{
		return;
	}
	iVar0 = func_188();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_685(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_686(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_686(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_687(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_354(0, -1);
	}
	if (iVar2 > 0)
	{
		func_688("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_689(1, 0);
	Global_1956575->f_4 = 1;
}

void func_347(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_270(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_690(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_348(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -1;
	}
	return func_691(iParam0);
}

int func_349(int iParam0, int iParam1)
{
	if (!func_692(iParam0))
	{
		return 0;
	}
	if (!func_382())
	{
		return 0;
	}
	if (!func_693(iParam0, &iVar0, &iVar1))
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

int func_350(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_694())
	{
		iVar2 = func_694();
	}
	iVar5 = func_695(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_448(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_448(iVar6) == 0)
			{
				return func_696(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_448(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_448(iVar6) == 0)
			{
				return func_696(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_696(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_697(1330954593, 0, -1);
		case 1:
			return func_697(1330954593, 0, -1);
		case 2:
			return func_697(1330954593, 0, -1) * 2;
		case 4:
			return func_697(1330954593, 0, -1);
		case 5:
			return func_697(1330954593, 0, -1);
		case 6:
			return func_697(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_697(1330954593, 0, -1) * 3;
		case 9:
			return func_697(1330954593, 0, -1) * 3;
		case 10:
			return func_697(1330954593, 0, -1) * 3;
		case 11:
			return func_697(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_352(int iParam0)
{
	if (!func_177(iParam0))
	{
		return cVar0;
	}
	switch (func_182(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_473(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_259(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_350(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_353(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_355();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_182(Global_1879514->f_1) == 1)
			{
				func_349(5, 1);
			}
			else if (func_182(Global_1879514->f_1) == 8 && (func_288((*Global_1347702)[func_259(Global_1879514->f_1)]->f_12, 1) || func_288((*Global_1347702)[func_259(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_349(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_354(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_698(&Global_0, 8);
	}
	if (!func_382() || func_20() != -1)
	{
		return;
	}
	func_698(&Global_0, 1);
}

int func_355()
{
	iVar0 = func_699(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_700(iVar0))
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

Vector3 func_356(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_701(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_383(vVar0))
	{
		vVar0 = { func_701(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_357(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_358(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_359(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_234(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_702(vParam0, iParam3);
}

void func_360()
{
	func_703();
	func_704();
	func_705();
	_0x11b0a0b282fa9b10(0);
}

void func_361(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_706(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_707(&(Param0.f_10)))
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
			func_708(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_362(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_363(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_364()
{
	return Global_1572864->f_12;
}

void func_365(bool bParam0)
{
	if (func_464(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_709();
	Var1.f_3.f_3 = iVar0;
	if ((!func_710(Global_1347343->f_2) && !func_362(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_711();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_362(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_712();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_362(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_713();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_714(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_715(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_363(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_363(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_366(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_716(uParam0);
	iVar0 = func_717(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_718(iParam1);
		}
		iVar0 = func_719(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_720(uParam0);
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
		iVar0 = func_720(uParam0);
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
	func_721(uParam0, 2);
}

void func_367(var uParam0, int iParam1)
{
	func_722(&(uParam0->f_7375), iParam1);
}

int func_368(var uParam0)
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

int func_369()
{
	return func_473(func_723());
}

void func_370(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_384())
	{
		func_724(uParam0, iVar0);
		iVar0++;
	}
}

int func_371(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_372(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_373(var uParam0)
{
	func_730(uParam0, 0, 1, 104040, 104059, 104196, 104313, 104511, "MAR7_INT", 514, -1);
	func_730(uParam0, 1, 2, 104662, 104755, 104833, 104927, 105356, "", 512, -1);
	func_730(uParam0, 2, 3, 105426, 105504, 105764, 105924, 106183, "MAR7_MCS1", 2, -1);
	func_730(uParam0, 3, 4, 106242, 106416, 107121, 107445, 107784, "MAR7_MCS2", 66, -1);
	func_730(uParam0, 4, 5, 107933, 108083, 108371, 108529, 108813, "MAR7_MCS3", 66, -1);
	func_730(uParam0, 5, 6, 108847, 109096, 109194, 109354, 109813, "", 66, -1);
	func_730(uParam0, 6, 7, 109879, 110033, 110198, 110486, 110586, "", 64, -1);
	func_730(uParam0, 7, 8, 110668, 110785, 111086, 111237, 112021, "", 576, -1);
	func_730(uParam0, 8, 25, 112072, 112164, 112197, 112320, 112579, "", 512, -1);
	func_730(uParam0, 25, 26, 112617, 112687, 112852, 112887, 112924, "MAR7_EXT", 66, -1);
}

void func_374(var uParam0, int iParam1)
{
	uParam0->f_13105 = iParam1;
}

Vector3 func_375(int iParam0, int iParam1)
{
	return func_776(iParam0, iParam1);
}

void func_376(var uParam0, vector3 vParam1)
{
	uParam0->f_5413 = { vParam1 };
}

void func_377(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_378(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_379(var uParam0)
{
	if (!func_777(uParam0, 4))
	{
		if (func_778(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_779(uParam0) };
		if (!func_778(uParam0->f_860, 524288))
		{
			func_780(&(uParam0->f_872));
		}
		func_781(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_782(uParam0, 0f, 0f, 0f);
		func_783(uParam0);
		func_784(uParam0);
		func_785(uParam0, 0f, 0f, 0f, 0, 0);
		func_786(uParam0);
		func_722(uParam0, 4);
		func_787(uParam0, 0);
		func_788(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_380(int iParam0)
{
	if (func_789(iParam0))
	{
		return func_790(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_381(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_476(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_791(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_792(0, 0);
		if (func_663(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_793(1, 0);
		}
	}
	else
	{
		func_793(1, 0);
	}
	func_196(0);
	func_477(0, vParam0, uParam3);
	return 1;
}

bool func_382()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_383(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_384()
{
	return 26;
}

void func_385(int iParam0)
{
	if (!func_176(iParam0))
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

void func_386(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_794((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_387(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_795((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_388(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_796((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_389(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_797((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_390(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_798((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_391(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_799((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_392(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_393(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_800((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_394(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_801((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_395(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_802((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_803((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_804((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_805(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_806(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_399(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_807(&(uParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_808(&(uParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5147[iVar0] = iParam1;
	uParam0->f_5147[iVar0]->f_3 = (uParam0->f_5147[iVar0]->f_3 || iParam2);
}

void func_400(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_809(&(uParam0->f_5249), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_810(&(uParam0->f_5249));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5249[iVar0] = iParam1;
	uParam0->f_5249[iVar0]->f_2 = (uParam0->f_5249[iVar0]->f_2 || iParam2);
}

void func_401(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_811(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_812(&(uParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_819[iVar0] = cParam1;
	uParam0->f_819[iVar0]->f_4 = (uParam0->f_819[iVar0]->f_4 || iParam2);
	uParam0->f_819[iVar0]->f_1 = iParam3;
	uParam0->f_819[iVar0]->f_2 = iParam4;
}

void func_402(var uParam0, char[4] cParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_813(&(uParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_814(&(uParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1020[iVar0] = cParam1;
	uParam0->f_1020[iVar0]->f_2 = (uParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_403(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_815(iParam3, func_33(uParam0)) && !func_815(iParam3, func_35(uParam0)))
	{
		return;
	}
	if (_does_anim_scene_exist(*iParam2))
	{
		return;
	}
	if (is_string_null_or_empty(cParam1))
	{
		return;
	}
	iVar0 = func_816(&(uParam0->f_1126), cParam1, *iParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_817(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*iParam2))
	{
		*iParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	uParam0->f_1126[iVar0]->f_1 = *iParam2;
	uParam0->f_1126[iVar0] = cParam1;
	uParam0->f_1126[iVar0]->f_3 = (uParam0->f_1126[iVar0]->f_3 || iParam3);
	uParam0->f_1126[iVar0]->f_65 = iParam6;
	uParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_818(&(uParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_404(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_815(iParam3, func_33(uParam0)) && !func_815(iParam3, func_35(uParam0)))
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
	iVar0 = func_819(&(uParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1126[iVar0]->f_4[iVar1])) && are_strings_equal(&(uParam0->f_1126[iVar0]->f_4[iVar1]), sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (is_string_null_or_empty(&(uParam0->f_1126[iVar0]->f_4[iVar1])))
		{
			uParam0->f_1126[iVar0]->f_4[iVar1] = sParam2;
			uParam0->f_1126[iVar0]->f_4[iVar1]->f_2 = (uParam0->f_1126[iVar0]->f_4[iVar1]->f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_405(int iParam0, int iParam1)
{
	func_820(iParam0, iParam1);
}

void func_406()
{
	Global_43838 = 0;
}

void func_407(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_821((*uParam0)[iVar0]))
		{
			if (func_815((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_822((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_823((*uParam1)[iVar0]))
		{
			if (func_815((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_824((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_825((*uParam2)[iVar0]))
		{
			if (func_815((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_826((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_827((*uParam3)[iVar0]))
		{
			if (func_815((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_828((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_815(uParam4->f_1, iParam12))
	{
		func_829(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_830((*uParam5)[iVar0]))
		{
			if (func_815((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_831((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_830((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_832((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_815((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_833((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_834((*uParam6)[iVar0]))
		{
			if (func_815((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_835((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_836((*uParam7)[iVar0]))
		{
			if (func_815((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_837((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_838((*uParam8)[iVar0]))
		{
			if (func_815((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_839((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_840((*uParam9)[iVar0]))
		{
			if (func_815((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_841((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_842((*uParam10)[iVar0]))
		{
			if (func_815((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_843((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_844((*uParam11)[iVar0]))
		{
			if (func_815((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_845((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_846(uParam0, iParam1, sParam2))
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

struct<2> func_409()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_410(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_411(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_412(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_847(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_366(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_413(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_848(uParam0->f_607)}, 3);
			if (func_849(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_850(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_851(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_414(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_830((*uParam0)[iVar0]))
		{
			if (func_815((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_852((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_853((*uParam0)[iVar0]))
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

int func_415(var uParam0)
{
	return uParam0->f_596;
}

bool func_416(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_120(uParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (does_entity_exist(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_854(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_855(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_417(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_856(uParam0))
			{
				func_103(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_857(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_858(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_859(iVar12))
							{
								_0x0348469daa17576c(iVar12);
							}
							clear_ped_tasks_immediately(iVar12, false, true);
							_set_entity_coords_and_heading(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!is_entity_dead(uParam0->f_5411))
		{
			return true;
		}
	}
	if (func_120(uParam0, 1))
	{
		return true;
	}
	vVar14 = { func_126(uParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_125(uParam0), false);
		if (!has_model_loaded(func_125(uParam0)))
		{
			return false;
		}
		if (func_860(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			func_103(uParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (func_120(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_857(&iVar29, &Var18);
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
			if (!func_120(uParam0, 16))
			{
				func_103(uParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		func_861(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_859(iVar13) || func_862(Global_35, iVar13, 1, 1) > 200f) && !func_383(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_863(iVar13, vVar14, fParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_418(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_864(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_865(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_419(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_866(uParam0);
			if (func_867(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_444(uParam0, 2097152);
				func_252(uParam0, 16384);
				func_103(uParam0, 128);
			}
			return;
		}
		if (func_128(uParam0, 1))
		{
			return;
		}
		if (func_120(uParam0, 64))
		{
			func_866(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_868(uParam0, Var0))
			{
				if (func_415(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_415(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_420(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_421(var uParam0)
{
	iVar0 = 1;
	if (!func_869(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_416(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_417(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_848(uParam0->f_607)}, 3);
		if (func_870(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(uParam0, 1))
	{
		if (!func_26(&(uParam0->f_13115)))
		{
			func_27(&(uParam0->f_13115), 0);
		}
		if (func_871(&(uParam0->f_13115)) < 30f)
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

bool func_422(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_871(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_872()) && func_871(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_252(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_873(0, 0);
		func_252(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_423(var uParam0)
{
	if (!func_874(uParam0))
	{
		return false;
	}
	if (!func_875(uParam0))
	{
		return false;
	}
	if (!func_876(uParam0))
	{
		return false;
	}
	if (!func_877(uParam0))
	{
		return false;
	}
	if (!func_878(uParam0))
	{
		return false;
	}
	if (!func_879(uParam0))
	{
		return false;
	}
	if (!func_880(uParam0))
	{
		return false;
	}
	if (!func_881(uParam0))
	{
		return false;
	}
	if (!func_882(uParam0))
	{
		return false;
	}
	if (!func_883())
	{
		return false;
	}
	func_884(uParam0);
	func_885(uParam0);
	func_886();
	return true;
}

void func_424(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_425(var uParam0)
{
	func_887(uParam0);
	func_888(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_867(uParam0);
		}
	}
	func_889(uParam0);
	func_890(uParam0);
	func_891(uParam0);
	func_892(uParam0);
	func_893(uParam0);
	func_894(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_895(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_266(uParam0) == 0)
	{
		func_419(uParam0);
	}
	if (func_121(uParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_896(uParam0, iVar0, 0))
			{
				if (func_897(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_897(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_897(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_367(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_898(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_899(uParam0);
					func_900(uParam0, iVar0, 1);
				}
				else
				{
					func_900(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_869(uParam0))
			{
				if (func_901(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_444(uParam0, 4);
					}
					func_900(uParam0, iVar0, 2);
				}
			}
			else if (func_902(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_444(uParam0, 4);
				}
				func_900(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_896(uParam0, iVar0, 2))
			{
				if (!func_903(uParam0))
				{
					func_900(uParam0, iVar0, 4);
					if (func_904(uParam0, iVar0, iVar1))
					{
						func_900(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_905(uParam0);
					func_900(uParam0, iVar0, 3);
					if (func_906(uParam0, iVar0))
					{
						func_900(uParam0, iVar0, 4);
						if (func_904(uParam0, iVar0, iVar1))
						{
							func_900(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_907(uParam0))
			{
				func_906(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_906(uParam0, iVar0))
			{
				func_900(uParam0, iVar0, 4);
				if (func_904(uParam0, iVar0, iVar1))
				{
					func_900(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_904(uParam0, iVar0, iVar1))
			{
				func_900(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_908(uParam0);
				func_909(uParam0, iVar0);
				func_910(uParam0);
				func_911(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_912(uParam0, iVar1))
					{
						func_913(uParam0, iVar1);
					}
				}
			}
			if (func_896(uParam0, iVar0, 5))
			{
				if (func_896(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_914(uParam0, func_33(uParam0));
					}
					func_915(uParam0, iVar1);
					func_888(uParam0);
					return true;
				}
				else
				{
					func_900(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_916(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_917(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_918("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_919(uParam0))
					{
						func_900(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_444(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_252(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_908(uParam0);
				func_909(uParam0, iVar0);
				func_910(uParam0);
				func_911(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_912(uParam0, func_35(uParam0)))
					{
						func_913(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_917(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_896(uParam0, iVar0, 5))
				{
					if (func_920(uParam0))
					{
						func_900(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_920(uParam0);
					func_900(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_896(uParam0, iVar0, 5);
				func_921(uParam0);
			}
			break;
		case 7:
			if (func_896(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_914(uParam0, func_33(uParam0));
				}
				func_915(uParam0, iVar1);
				func_888(uParam0);
				return true;
			}
			break;
		default:
			func_900(uParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_426(int iParam0, int iParam1)
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
	if (func_378(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_378(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_378(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_378(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_378(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_378(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_378(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_378(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_427(int iParam0)
{
	if (_0x5102307ce88798eb(iParam0))
	{
		_0x3088634cf8c819cf(iParam0);
	}
}

void func_428(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_254(iParam0, 64);
	func_255();
}

void func_429(char* sParam0)
{
	if (is_named_rendertarget_registered(sParam0))
	{
		release_named_rendertarget(sParam0);
	}
}

void func_430()
{
	if (_does_streamed_texture_dict_exist(sLocal_83))
	{
		set_streamed_texture_dict_as_no_longer_needed(sLocal_83);
	}
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		create_model_hide_excluding_script_objects(vLocal_203, 2.5f, iLocal_32, false);
		set_entity_completely_disable_collision(iLocal_163, true, false);
	}
	else
	{
		remove_model_hide(vLocal_203, 2.5f, iLocal_32, 0);
		set_entity_completely_disable_collision(iLocal_163, false, false);
	}
}

void func_432(bool bParam0)
{
	if (bParam0)
	{
		create_model_hide_excluding_script_objects(vLocal_203, 2.5f, iLocal_33, false);
	}
	else
	{
		remove_model_hide(vLocal_203, 2.5f, iLocal_33, 0);
	}
}

void func_433()
{
	func_922(&uLocal_241, 0);
	func_922(&uLocal_242, 0);
	func_922(&uLocal_243, 0);
	func_922(&uLocal_244, 0);
}

void func_434(int iParam0, bool bParam1, float fParam2)
{
	func_923(iParam0, bParam1, fParam2);
}

void func_435(int iParam0, bool bParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_924(iParam0, iVar1);
		if (func_925(iVar0))
		{
			func_926(iVar0, bParam1);
		}
		iVar1++;
	}
}

void func_436(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_437()
{
	if (_does_volume_exist(iLocal_221))
	{
		_0xd17672447692478e(iLocal_221, 0);
		_0x74c2b3dc0b294102(iLocal_221);
		_0xa1cfb35069d23c23(iLocal_221);
		_delete_volume(iLocal_221);
	}
	if (_does_volume_exist(iLocal_222))
	{
		_0xd17672447692478e(iLocal_222, 0);
		_0x74c2b3dc0b294102(iLocal_222);
		_0xa1cfb35069d23c23(iLocal_222);
		_delete_volume(iLocal_222);
	}
	if (_does_volume_exist(iLocal_220))
	{
		_0xd17672447692478e(iLocal_220, 0);
		_delete_volume(iLocal_220);
	}
	if (_does_volume_exist(iLocal_218))
	{
		_0x74c2b3dc0b294102(iLocal_218);
		_0xa1cfb35069d23c23(iLocal_218);
		_delete_volume(iLocal_218);
	}
	func_438(iLocal_217);
}

void func_438(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_439(int* iParam0)
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

void func_440(int* iParam0)
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

void func_441(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1 || func_426(uParam0[iVar0], 0))
		{
			(*uParam0)[iVar0]->f_19 = 0;
			func_427(uParam0[iVar0]);
			func_927(&((*uParam0)[iVar0]->f_2));
			func_439((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_442(bool bParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iVar1023 - 1))
	{
		if (bParam0 || func_426(&(Local_1026[iVar0]), 0))
		{
			Local_1026[iVar0]->f_16 = 0;
			func_927(&(Local_1026[iVar0]->f_2));
			func_440(&(Local_1026[iVar0]->f_4));
			func_439(Local_1026[iVar0]);
		}
		iVar0++;
	}
}

void func_443()
{
	func_928();
	func_929(&uLocal_119, 0);
	if (does_entity_exist(iLocal_118))
	{
		delete_vehicle(&iLocal_118);
	}
	func_929(&uLocal_127, 0);
	if (does_entity_exist(iLocal_126))
	{
		delete_vehicle(&iLocal_126);
	}
	func_930();
	func_931();
}

void func_444(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

void func_445(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_932(Global_1393447, 1);
	func_933();
	func_934();
	func_935((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_470() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_936();
		if (iParam1 == -1)
		{
			if (func_937(iParam0, 1))
			{
				func_280(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_937(iParam0, 2))
			{
				func_280(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_937(iParam0, 4))
			{
				func_280(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_938(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_281(to_float(iVar0), 1, 0);
	}
	else
	{
		func_281((to_float(200) / 3f), 1, 0);
	}
}

bool func_446(int iParam0)
{
	return func_939(iParam0, 2);
}

int func_447(int iParam0)
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

int func_448(int iParam0)
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

int func_449(int iParam0)
{
	return iParam0 & 31;
}

bool func_450()
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

int func_451(int iParam0)
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

int func_452(int iParam0)
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

void func_453(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_454()
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

int func_455(int iParam0)
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

void func_456(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_457(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_940(iParam0);
	}
	else
	{
		func_941(iParam0, iParam1);
	}
	func_942();
}

bool func_458(int iParam0)
{
	iVar0 = func_943(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_459(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	switch (func_182(iParam0))
	{
		case 1:
			switch (func_259(iParam0))
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
			switch (func_259(iParam0))
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

void func_460(int iParam0)
{
	iVar2 = func_944(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_946(func_945(iParam0), 6);
}

void func_461(int iParam0)
{
	iVar2 = func_944(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_947(func_945(iParam0), 6);
}

int func_462(int iParam0)
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

int func_463(int iParam0)
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
	func_948(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_464(int iParam0)
{
	return iParam0 != 0;
}

bool func_465(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_466(int iParam0, var uParam1)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_949(iParam0, *uParam1, 0);
	func_950(uParam1);
	Global_1935183->f_24 = 1;
}

void func_467(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_468(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_521() - fParam1);
	func_951(uParam0, 1);
	func_952(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_469(var uParam0)
{
	return func_206(*uParam0, 2);
}

int func_470()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_471(bool bParam0)
{
	if (func_953())
	{
		Global_1357509 = 1;
	}
	if (func_954(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_472(int iParam0, int iParam1)
{
	Var0 = { func_776(iParam0, iParam1) };
	Var0.f_3 = func_955(iParam0, iParam1);
	return Var0;
}

int func_473(int iParam0)
{
	if (func_182(iParam0) == 1)
	{
		return func_259(iParam0);
	}
	return -1;
}

int func_474(int iParam0)
{
	if (func_182(iParam0) == 8)
	{
		return func_259(iParam0);
	}
	return -1;
}

char[] func_475(int iParam0)
{
	if (!func_260(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_476(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_82(32768))
	{
		return;
	}
	if (!func_82(32768))
	{
		func_956(1, bParam1);
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
	if (func_82(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_272();
	}
}

void func_477(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_359(vParam1, 1);
}

bool func_478(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_479(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_480(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_481(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_482(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_483(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_484()
{
	return Global_1109400->f_245;
}

bool func_485(var uParam0, int iParam1)
{
	return func_378(uParam0->f_64, iParam1);
}

bool func_486(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_487(int iParam0)
{
	return func_682(iParam0, 16, 1);
}

void func_488(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_957(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_958(uParam0, get_object_index_from_entity_index(iParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(iParam1));
	}
	if (does_blip_exist(uParam0->f_5423[iVar0]->f_8))
	{
		remove_blip(&(uParam0->f_5423[iVar0]->f_8));
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
	_copy_memory(uParam0->f_5423[iVar0], uParam0->f_5423[(uParam0->f_13145 - 1)], 65);
	_copy_memory(uParam0->f_5423[(uParam0->f_13145 - 1)], &Var1, 65);
	uParam0->f_13145 = (uParam0->f_13145 - 1);
}

void func_489(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_group(iParam0))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_can_ragdoll(iParam0, true);
		set_ped_can_ragdoll_from_player_impact(iParam0, true);
	}
}

void func_490(int iParam0)
{
	func_959(iParam0, 8, 0);
}

void func_491(int iParam0, bool bParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_961(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_959(iParam0, 1, 0);
		}
	}
	func_959(iParam0, 16, bParam1);
}

void func_492(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_486(iParam0))
	{
		return;
	}
	if (func_487(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_962(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_491(iParam0, 0);
	func_959(iParam0, 4, 0);
	func_490(iParam0);
	func_963(iParam0);
	func_964(iParam0, 37, 1);
	bVar0 = func_426(Global_1360165[iParam0], 0);
	iVar1 = func_965(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_966(iParam0, 64, 1))
	{
		func_964(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_964(iParam0, 33, 1);
		func_964(iParam0, 34, 1);
		func_967(iParam0, 1056964608, -1, 1061158912);
		func_968(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_962(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_962(iParam0, 35, 1);
			if (bParam8)
			{
				func_962(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_969(iParam0, 0);
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
		func_964(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_962(iParam0, 33, 1);
		func_968(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_524(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_962(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_970(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_966(iParam0, 45, 1))
	{
		func_964(iParam0, 45, 1);
	}
	func_971(iParam0, 16, 1);
	func_964(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_426(func_972(iParam0), 0))
		{
			func_973(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_493(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_249(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_500(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_500(iParam0);
	}
}

bool func_494(int iParam0)
{
	iParam0 = func_253(iParam0);
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

void func_495(int iParam0)
{
	iParam0 = func_253(iParam0);
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

void func_496(int iParam0)
{
	iParam0 = func_253(iParam0);
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

bool func_497(int iParam0)
{
	if (!func_974(iParam0))
	{
		return false;
	}
	if (!func_318())
	{
		return true;
	}
	return false;
}

void func_498(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	iVar0 = func_202(iParam0);
	func_975(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_497(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_976(iParam0, 0);
	func_500(iParam0);
}

bool func_499(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_248(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_500(int iParam0)
{
	iParam0 = func_253(iParam0);
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

bool func_501(int iParam0)
{
	iParam0 = func_253(iParam0);
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

void func_502(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_202(iParam0);
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
	if (func_977(iParam0, 64))
	{
		func_495(iParam0);
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
	bVar3 = func_571(42);
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
				func_978(&((*Global_1900383)[iParam0]->f_27));
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
		func_495(iParam0);
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
		if (func_979(1) < 1)
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
		func_980(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_977(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_981(iParam0);
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
	fVar15 = func_982(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_983(iParam0))
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
		func_984((*Global_1900383)[iParam0]->f_26);
		func_985((*Global_1900383)[iParam0]->f_26);
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
	if (func_859(iVar0) && !bVar9)
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
	iVar21 = func_979(iParam0);
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

int func_503(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_504(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_505(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_506(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_507(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_508(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_501(iParam0))
	{
		return false;
	}
	iVar0 = func_202(iParam0);
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

void func_509(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	iVar0 = func_202(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_510(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_511(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_986())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_679(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_987(iVar0);
			func_988(iVar0, 0, 0);
		}
		func_679(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_95(func_94(1644987397), iVar1);
	}
}

bool func_512(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	return func_238(iParam0, 67108864);
}

void func_513(int iParam0)
{
	StringCopy(&cVar0, func_989(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_990(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_514(int iParam0)
{
	StringCopy(&cVar0, func_989(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_990(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_515(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_516(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_518(int iParam0)
{
	if (!func_481(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_519(int iParam0)
{
	if (func_481(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_520(int iParam0)
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

float func_521()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_522(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_991(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_20() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_523(int iParam0)
{
	if (!func_960(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_524(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_525(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_992(iParam0);
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

int func_526(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_539(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_527(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_528(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_529()
{
	return Global_40.f_11095.f_35;
}

void func_530(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_993(iParam0, 0);
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
		func_531(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_531(int iParam0)
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
			func_993(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_994(1);
	}
}

bool func_532(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_533()
{
	iVar0 = func_995((*Global_1347702)[9]->f_15);
	iVar1 = func_995((*Global_1835011)[69]->f_1);
	if (func_996(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_534(int iParam0)
{
	if (!func_176(iParam0))
	{
		return false;
	}
	return func_314((*Global_1835011)[iParam0]->f_1, 1);
}

int func_535(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_997(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_998(iVar6);
	}
	return iVar5;
}

int func_536(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_999(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_537(int iParam0, bool bParam1)
{
	func_1000(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_538(int iParam0)
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

void func_539(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_537(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_540(2, *uParam0);
		}
		else
		{
			func_541(2, *uParam0);
		}
	}
	func_1001(uParam0);
}

void func_540(int iParam0, int iParam1)
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

void func_541(int iParam0, int iParam1)
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

void func_542(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1002(iParam0, iParam1, bParam2);
}

int func_543(int iParam0)
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

int func_544(int iParam0)
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

void func_545(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1003();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1004(iParam0);
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
	if (func_571(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1005())
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
	Global_40.f_11095.f_35 = func_296(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1003();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1006(iVar1);
		func_1008(func_1007(), 0, 4000);
		func_1009(Global_40.f_11095.f_35);
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
		func_1010(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_95(func_94(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_544(14))
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
					sParam4 = func_1011(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_544(4))
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
					sParam4 = func_1011(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_94(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_349(10, 1);
	}
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_547(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_548(int iParam0)
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

bool func_549(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_550(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1012(iParam0) && func_1013(iParam0))
		{
			func_1014(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_551(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1015(iParam0, iParam1);
	Var0 = { func_660(iParam0, 0, 1) };
	iVar5 = func_1016(iParam0, &Var0, 0, 0);
	iVar6 = func_1017(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_569(iParam0, -2051813666))
		{
			func_312(583, 1);
		}
		else
		{
			func_312(582, 0);
		}
	}
	if (func_1018(iParam0, &Var0, *iParam1, 0, 0))
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

void func_552(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_630(iParam0, -949239683))
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

int func_553(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_568(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1019(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1020(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_944(bParam2), iParam0, 0);
	return iVar2;
}

bool func_554(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_555(iParam0) != 0;
}

int func_555(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1021())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1022(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_556(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_557(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1021())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_556(iVar0))
		{
			if (func_334(func_1022(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_558(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1023(48);
	func_354(0, -1);
}

bool func_559(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_314((*Global_1347702)[iParam0]->f_15, 1);
}

int func_560(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_561(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_562(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_314((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_563(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_260(iParam0))
	{
		return false;
	}
	return func_178((*Global_1347702)[iParam0]->f_15);
}

int func_564()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_334(func_1024(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_565(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_382() && (func_563(38) || func_559(38)))
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
			if (func_382() && (func_563(39) || func_559(39)))
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
			iVar9 = func_1025(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_382() && (func_563(41) || func_559(41)))
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
			if (func_382() && (func_563(49) || func_559(49)))
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
			iVar9 = func_1025(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1026(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1027(iParam0, iVar13, iVar14))
	{
	}
	if (func_1028(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1029(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1030(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1031(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1032(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_566(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_567(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_382() && (func_563(38) || func_559(38)))
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
			if (func_382() && (func_563(39) || func_559(39)))
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
			if (func_382() && (func_563(49) || func_559(49)))
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
		if (func_382() && (func_563(38) || func_559(38)))
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
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_686(_create_var_string(2, sVar0), _create_var_string(2, func_1034(func_561(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_382() && (func_563(39) || func_559(39)))
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
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_382() && (func_563(49) || func_559(49)))
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
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1033(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_568(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_569(int iParam0, int iParam1)
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

bool func_570(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_571(int iParam0)
{
	if (!func_1035(iParam0))
	{
		return false;
	}
	return func_1036(iParam0);
}

void func_572(int iParam0)
{
	if (!func_1035(iParam0))
	{
		return;
	}
	func_1037(iParam0);
	func_1038(iParam0);
}

int func_573(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_574(int iParam0, bool bParam1)
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
	if (func_549(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1039(iVar0) || func_122(iVar0))
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

int func_575(int iParam0, bool bParam1)
{
	if (!func_549(iParam0, 0))
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

void func_576(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_663(iParam0))
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

bool func_577(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_944(bParam0));
}

bool func_578(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_660(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1040((386 + iVar28), 1);
			if (func_1041(iParam0, &Var0, iVar5, 0))
			{
				if (func_1042(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1043(iParam0, Var0, iVar5, 0) };
					func_1044(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_577(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_579(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1045(iParam0, iParam1);
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

bool func_579(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_581(iParam0))
	{
		return false;
	}
	if (!func_577(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_575(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_576(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1046(iVar0);
			}
		}
		if (!func_1018(iParam0, &uVar1, 1, 0, 0))
		{
			func_1014(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1047(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_578(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_578(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_578(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1005())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1048(iVar0))
				{
					func_578(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_578(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1049(Global_35, 2, 0, 1);
				if ((((func_663(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_571(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_663(iVar7) && func_571(24))
				{
					if (!func_578(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_578(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_578(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_312(480, 1);
	}
	return true;
}

bool func_581(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_582(int iParam0, int iParam1, int iParam2)
{
	if (!func_581(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_663(iVar4))
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
	if (func_334(611073244, 1, 0) && iParam2 == -897553835)
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
		func_617(func_1050(iParam0), func_616(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_314((*Global_1835011)[14]->f_1, 1))
			{
				func_312(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_577(0))
	{
		if (func_579(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_622(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_583(int iParam0)
{
	if ((iParam0 == -615217896 && !func_325()) || iParam0 != -615217896)
	{
		if (func_1051(Global_35, iParam0, &uVar0))
		{
			func_601(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_607();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_607();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_607();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_605();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_603();
			break;
	}
}

void func_584(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_603();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_604();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_605();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_606();
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
			func_607();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1052();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1053();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_585(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_586(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_587(int iParam0)
{
	bVar0 = func_569(iParam0, -2017733358);
	if (func_1054() < 3)
	{
		if (bVar0)
		{
			if (func_1056(func_1055(iParam0), iParam0))
			{
				func_617(79, func_616(func_1055(iParam0)), 1);
			}
			else
			{
				func_617(78, func_616(func_1055(iParam0)), 1);
			}
		}
		else
		{
			func_617(80, func_616(func_1057(iParam0)), 1);
		}
	}
}

bool func_588()
{
	if (((((func_1058(839908568, 400) || func_1058(-1134030454, 400)) || func_1058(623353496, 400)) || func_1058(-344413337, 400)) || func_1058(-1664948962, 400)) || func_1058(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_589(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_697(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_510(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_511(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_590(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_565(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_567(51, 0, 0, 0, 0, -1, 0);
			func_1059(8192);
			break;
		case 581047644:
			func_565(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_567(51, 0, 0, 0, 0, -1, 0);
			func_1059(524288);
			break;
		case -644199619:
			func_565(39, 0, 0, 0, 0, 0, 1, 0);
			func_567(39, 0, 0, 0, 0, -1, 0);
			func_1060(16);
			break;
		case 684296857:
			func_565(41, 0, 0, 0, 0, 0, 1, 0);
			func_567(41, 0, 0, 0, 0, -1, 0);
			func_1061(8);
			break;
		case 466137807:
			func_565(49, 0, 0, 0, 0, 0, 1, 0);
			func_567(49, 0, 0, 0, 0, -1, 0);
			func_1062(16);
			break;
		case -1087522507:
			func_565(43, 0, 0, -1791518714, func_1063(1), 0, -1, 0);
			func_1064(1);
			break;
		case -405829000:
			func_565(43, 0, 0, -2087881550, func_1063(2), 0, -1, 0);
			func_1064(2);
			break;
		case 378660860:
			func_565(43, 0, 0, 1908068621, func_1063(4), 0, -1, 0);
			func_1064(4);
			break;
		case 1566111097:
			func_565(43, 0, 0, 1611247019, func_1063(8), 0, -1, 0);
			func_1064(8);
			break;
		case 1276007140:
			func_565(43, 0, 0, 1319635688, func_1063(16), 0, -1, 0);
			func_1064(16);
			break;
	}
}

void func_591(int iParam0)
{
	if (func_1065() == 1)
	{
		if (func_559(39))
		{
			func_312(342, 0);
		}
		else
		{
			func_312(343, 0);
			func_1060(1);
		}
	}
	if (func_1065() >= 30)
	{
		func_312(344, 0);
	}
	func_565(39, 0, 0, 0, 0, 0, -1, 0);
	func_567(39, 0, 0, func_1065(), 30, 1, 0);
}

void func_592(int iParam0)
{
	if (func_1066() == 1)
	{
		if (func_559(49))
		{
			func_312(409, 0);
		}
		else
		{
			func_312(410, 0);
			func_1062(1);
		}
	}
	if (func_1066() >= 10)
	{
		func_312(411, 0);
	}
	func_565(49, 0, 0, 0, 0, 0, -1, 0);
	func_567(49, 0, 0, func_1066(), 10, 1, 0);
}

void func_593(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_312(437, 0);
			func_312(440, 0);
			func_1067(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1025(-949689219, 20), 1, 0);
			func_1059(1);
			func_1068(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1067(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1025(-1248968496, 20), 1, 0);
			func_1059(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1067(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1025(1706369307, 20), 1, 0);
			func_1059(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1067(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1025(1520110311, 20), 1, 0);
			func_1059(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_312(438, 0);
			func_1067(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1025(-1992824800, 20), 1, 0);
			func_1059(32768);
			break;
		default:
			func_312(439, 0);
			break;
	}
}

void func_594()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_595(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_559(43))
		{
			if (iParam0 == 281887510)
			{
				func_312(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_312(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_312(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_312(400, 0);
			}
		}
		else if (func_569(iParam0, 412399755))
		{
			func_1069(-1791518714);
			if (func_1070() == 0)
			{
				func_354(0, 10);
				iVar1 = func_1071(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1072(iParam0) < func_1073(iParam0))
					{
						func_565(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_559(44))
		{
			if (iParam0 == -222563712)
			{
				func_312(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_312(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_312(401, 0);
			}
		}
		else if (func_569(iParam0, 709057512))
		{
			func_1069(-2087881550);
			if (func_1070() == 1)
			{
				func_354(0, 10);
				iVar1 = func_1071(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1072(iParam0) < func_1073(iParam0))
					{
						func_565(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_559(45))
		{
			if (iParam0 == 2116770557)
			{
				func_312(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_312(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_312(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_312(398, 0);
			}
		}
		else if (func_569(iParam0, -1478961327))
		{
			func_1069(1908068621);
			if (func_1070() == 2)
			{
				func_354(0, 10);
				iVar1 = func_1071(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1074(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1075(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1023(48);
					}
					if (func_1072(iParam0) < func_1073(iParam0))
					{
						func_565(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1072(iParam0) < func_1073(iParam0))
					{
						func_565(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_559(46))
		{
			if (iParam0 == 2085530337)
			{
				func_312(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_312(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_312(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_312(406, 0);
			}
		}
		else if (func_569(iParam0, -1238404098))
		{
			func_1069(1611247019);
			if (func_1070() == 3)
			{
				func_354(0, 10);
				iVar1 = func_1071(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1072(iParam0) < func_1073(iParam0))
					{
						func_565(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_559(47))
		{
			if (iParam0 == -1521783510)
			{
				func_312(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_312(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_312(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_312(403, 0);
			}
		}
		else if (func_569(iParam0, 1160548794))
		{
			func_1069(1319635688);
			if (func_1070() == 4)
			{
				func_354(0, 10);
				iVar1 = func_1071(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1072(iParam0) < func_1073(iParam0))
					{
						func_565(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_596(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1074(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1075(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1023(48);
		}
	}
}

void func_597(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_334(func_1076(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1077(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1078(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_598(int iParam0, int iParam1, int iParam2)
{
	if (func_20() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_589(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_589(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_589(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_589(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_589(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_589(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_589(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_589(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_589(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_589(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_589(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_589(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_589(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1079())
			{
				func_589(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_589(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_589(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_589(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_589(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_589(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_589(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_589(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_589(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_589(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_589(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_589(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_589(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_599(int iParam0)
{
	if (func_559(41))
	{
		func_312(363, 0);
	}
	else
	{
		func_312(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1080(-1865241121);
			func_1081(-642026005);
			func_1082(-642026005);
			func_354(0, 10);
			break;
		case -2108314374:
			func_1080(2117142684);
			func_1081(-940584364);
			func_1082(-940584364);
			func_354(0, 10);
			break;
		case -1193798153:
			func_1080(-1409326024);
			func_1081(1972645282);
			func_1082(1972645282);
			func_354(0, 10);
			break;
		case -787702678:
			func_1080(-641744968);
			func_1081(1667205433);
			func_1082(1667205433);
			func_354(0, 10);
			break;
		case -804542901:
			func_1080(-946988203);
			func_1081(1362715885);
			func_1082(1362715885);
			func_354(0, 10);
			break;
		case -1696275132:
			func_1080(-646136018);
			func_1081(1053540370);
			func_1082(1053540370);
			func_354(0, 10);
			break;
		case -161595323:
			func_1080(-955835837);
			func_1081(-1100103852);
			func_1082(-1100103852);
			func_354(0, 10);
			break;
		case -1114363619:
			func_1080(-179276075);
			func_1081(-1409869209);
			func_1082(-1409869209);
			func_354(0, 10);
			break;
		case -368407134:
			func_1080(-492711560);
			func_1081(-1760235357);
			func_1082(-1760235357);
			func_354(0, 10);
			break;
		case 1997759228:
			func_1080(1764383959);
			func_1081(-138366827);
			func_1082(-138366827);
			func_354(0, 10);
			break;
		case 1265573293:
			func_1080(317501533);
			func_1081(-1261163843);
			func_1082(-1261163843);
			func_354(0, 10);
			break;
		case -1030441283:
			func_1080(817753087);
			func_1081(-963523016);
			func_1082(-963523016);
			func_354(0, 10);
			break;
		case -1490884871:
			func_1080(576606016);
			func_1081(560825326);
			func_1082(560825326);
			func_354(0, 10);
			break;
		case -395458616:
			func_1080(814934957);
			func_1081(858269539);
			func_1082(858269539);
			break;
	}
}

void func_600(int iParam0, int iParam1)
{
	func_1083(iParam0, iParam1, &uVar0);
}

int func_601(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_660(iParam1, 1, 0) };
		iParam3 = func_661(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1084(iParam1, iParam2, func_648(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1085(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_648(iParam3, 1)])
			{
				func_659(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1086(32768) && iParam1 != &Global_1946804->f_57[func_648(iParam3, 1)])
			{
				func_1087();
				func_659(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_659(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1088(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_659(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1089(0);
			func_1090(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_659(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_602(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1049(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1049(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1091("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1092(&Var3, iVar2, iVar0, iVar1))
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
						func_1093(iVar0);
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

void func_603()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_604()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_605()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_606()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_607()
{
	func_1094();
	func_1095();
	func_1096();
}

void func_608(int iParam0, int iParam1, bool bParam2)
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

void func_609(int iParam0, bool bParam1)
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
	func_1033(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_610(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_611(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_612(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_613(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_614(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_615(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_616(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_617(int iParam0, int iParam1, bool bParam2)
{
	func_655(iParam0, &iVar0, &iVar1);
	if (!func_656(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1097(iParam0, 1024))
	{
		return;
	}
	func_657(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_618(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_655(iParam0, &iVar0, &iVar1);
	if (!func_656(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1097(iParam0, 1024))
	{
		return;
	}
	func_657(iVar0, iVar1);
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

int func_619()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1021())
	{
		return func_620();
	}
	iVar4 = (func_1021() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1021())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1098(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1022(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_620()
{
	iVar0 = get_random_int_in_range(0, func_1021());
	return func_1022(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_621(int iParam0)
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

bool func_622(int iParam0, int iParam1, int iParam2)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_660(iParam0, 0, 1) };
	Var5 = { func_1043(iParam0, Var0, Var0.f_4, 0) };
	return func_1099(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_623(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_573(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1100(81053684, 0) <= 0)
			{
				func_659(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_659(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1101(iParam0);
			if (func_1102(iVar0))
			{
				func_1103(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_659(30, iParam0, 0, 0, 0);
			}
			if (func_650() == -2125499975 || func_650() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_659(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_650() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_659(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1104(-525676072, 0))
			{
				if (func_1105(-525676072, &iVar1))
				{
					func_659(33, iVar1, 0, 0, 0);
				}
			}
			func_659(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1106(99217379))
		{
			func_601(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_572(24);
		if (func_602(&iVar2, 0))
		{
			func_578(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_624(int iParam0)
{
	if (func_569(iParam0, 943695443))
	{
		func_1107(0, iParam0);
	}
	else if (func_569(iParam0, -2096528786))
	{
		func_1107(1, iParam0);
	}
	else if (func_569(iParam0, -1094167013))
	{
		func_1107(2, iParam0);
	}
	else if (func_569(iParam0, 1936654645))
	{
		func_1107(3, iParam0);
	}
	else if (func_569(iParam0, 1306489306))
	{
		func_1107(4, iParam0);
	}
	else if (func_569(iParam0, 435762317))
	{
		func_1107(5, iParam0);
	}
	else if (func_569(iParam0, 1259363210))
	{
		func_1107(6, iParam0);
	}
	else if (func_569(iParam0, 881398259))
	{
		func_1107(7, iParam0);
	}
	else if (func_569(iParam0, -541549214))
	{
		func_1107(8, iParam0);
	}
	else if (func_569(iParam0, 130796156))
	{
		func_1107(-1, iParam0);
	}
}

int func_625(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1108(&Var4, 1356624740);
	return func_1109(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_626(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return Var0;
	}
	if (func_569(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_569(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_569(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_569(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_627(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_314((*Global_1835011)[4]->f_1, 1))
				{
					func_312(109, 1);
				}
			}
			break;
	}
}

void func_628(int iParam0, char* sParam1)
{
	sVar0 = func_1111(func_1110(0));
	func_679(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1112(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_629(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_549(iParam0, 0))
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
	if (!func_1113())
	{
		func_1114(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1115(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1115(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_570(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_568(iParam0);
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
	else if (!func_1116(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1117(_create_var_string(10, &cVar2, _create_var_string(0, func_616(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_569(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_616(iParam0));
	}
	func_679(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_630(int iParam0, int iParam1)
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

struct<10> func_631(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_632(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_633(int iParam0, int iParam1)
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

bool func_634(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1118(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1118(iParam0, Var2, 1))
				{
					if (func_1119(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1119(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_312(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_184(0, 0, 1))
		{
			func_354(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_635(int iParam0)
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

void func_636(int iParam0)
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
		func_312(iVar0, 0);
	}
}

void func_637()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1120(0);
			_unlock_set_unlocked(-121456797, false);
			func_1121();
		}
		return;
	}
	if (!func_314((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1122();
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
	func_1120(1);
}

void func_638()
{
	if (!func_314((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_305(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_639()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1123(0);
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
	if (!func_314((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1123(1);
}

void func_640()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1124(15000, 0, 0, 0, 1);
			func_1123(0);
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
	if (!func_314((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_270(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1123(1);
}

void func_641()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_334(1191437462, 1, 0) && !func_178((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_305(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1125(1))
			{
				func_613(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_334(1119149048, 1, 0) && !func_178((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_305(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1125(2))
			{
				func_613(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1125(4))
		{
			func_613(4);
		}
		if (func_1125(0))
		{
			func_1126(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_334(1191437462, 1, 0))
			{
				func_644(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_334(1119149048, 1, 0))
			{
				func_644(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1125(1))
		{
			func_1126(1);
		}
		if (func_1125(2))
		{
			func_1126(2);
		}
		if (func_1125(4))
		{
			func_1126(4);
		}
		if (!func_1125(0))
		{
			func_613(0);
		}
	}
}

void func_642()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_314((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1127() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_576(127400949);
		if (func_578(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1127() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1128(-2055673461, Var1, 1423542233);
		func_1128(-202131179, Var1, -1264898804);
		func_1128(2013836545, Var1, 1592019450);
		func_1128(1497476650, Var1, 1117400455);
		func_1128(1063571467, Var1, 1150213537);
		func_1128(2107224237, Var1, 1598825281);
		func_1128(1747981656, Var1, -712527121);
		func_1128(-1371140647, Var1, 454332195);
		func_1128(-19142973, Var1, 256105670);
		func_1128(-2074737817, Var1, -1328061889);
		func_1128(-1114256243, Var1, -782241404);
		func_1128(-1653277288, Var1, 1669853467);
		func_1128(1869398132, Var1, -1559225678);
		func_1128(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_663(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_571(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_571(24) && func_663(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_663(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_571(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_643()
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

int func_644(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1019(iParam0, 1);
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
			func_629(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_334(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_626(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_553(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_553(iParam0, 0, 0) - iParam1) < 0)
		{
			func_644(iParam0, func_553(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_568(iParam0) == -427144552)
	{
		if (!func_1129(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1130(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_577(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_629(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1131(iParam0, iParam1);
	return 1;
}

bool func_645(int iParam0)
{
	switch (func_573(iParam0))
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

void func_646(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_573(iParam0))
	{
		case -2061583405:
			bVar0 = func_1132(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1132(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1132(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1132(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1132(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1132(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1133();
	}
	if (bParam1)
	{
		func_1134(0, 0);
	}
}

int func_647(int iParam0)
{
	Var0 = { func_660(iParam0, 1, 0) };
	return func_661(Var0.f_4);
}

int func_648(int iParam0, int iParam1)
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

void func_649(int iParam0)
{
	if (func_20() == -1)
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
		iVar0 = func_648(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1135(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_650()
{
	return Global_1946804->f_1;
}

bool func_651(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1136(iParam6);
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
		func_1138(uParam0, func_1137(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_648(iVar3, 1);
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
							if (func_1139(iVar3) && func_1140(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1141(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_652(int iParam0, int iParam1)
{
	if (func_20() == -1)
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

int func_653(int iParam0, int iParam1)
{
	vVar0 = { func_652(iParam0, iParam1) };
	return vVar0.x;
}

void func_654(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_656(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1142(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1143(iParam0))
	{
		return false;
	}
	if (func_1144(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1097(iParam0, 1)) || func_82(32768))
	{
		if (!func_1097(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1145())
	{
		return false;
	}
	return true;
}

void func_657(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_658(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_659(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1146(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1147(Var0);
}

struct<5> func_660(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1148(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_568(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1043(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1149(bParam1) };
			if (bParam2 && func_1150(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1041(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1041(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1042(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1151(bParam1) };
			switch (func_573(iParam0))
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
			if (func_1152(iParam0, -1823706425))
			{
				Var0 = { func_1043(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1152(iParam0, -1483207246))
			{
				Var0 = { func_1043(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1153(Var0, &Var27, bParam1, 0))
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

int func_661(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1154(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_662(int iParam0)
{
	func_1135(Global_1946804->f_1497.f_1[func_648(iParam0, 1)], 2, 6);
	func_1135(Global_1946804->f_1378.f_1[func_648(iParam0, 1)], 2, 6);
}

bool func_663(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_664(int iParam0)
{
	return iParam0 != 0;
}

int func_665(int iParam0)
{
	iVar0 = -1;
	if (!func_664(iParam0))
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

bool func_666(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_667(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1155(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_668(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_669(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_670(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_671(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_672(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_673(int iParam0, int iParam1)
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

void func_674(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1156(iParam0, iParam6);
	func_1157(iParam0, iParam5);
	func_1158(iParam0, iParam4);
	func_1159(iParam0, iParam3);
	func_1160(iParam0, iParam2);
	func_1161(iParam0, iParam1);
}

bool func_675(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_672(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_671(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_670(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_667(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_668(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_669(iParam0);
	if (iVar5 < 1 || iVar5 > func_673(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_676(int iParam0, bool bParam1)
{
	return func_996(func_272(), iParam0, bParam1);
}

void func_677(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_678(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1019(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1091("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1092(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_663(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1093(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1093(iVar1);
	}
	return false;
}

var func_679(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1162(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_680()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1163(iVar1);
		if (!_unlock_is_visible(func_1164(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_681()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1163(iVar0);
		if (!_unlock_is_visible(func_1164(iVar1)))
		{
			_unlock_set_visible(func_1164(iVar1), true);
		}
		iVar0++;
	}
}

bool func_682(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_960(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_683(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_486(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_684()
{
	return (func_185(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_685(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_20() != -1)
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
	if (!func_549(iVar0, 0))
	{
		return 0;
	}
	if (!func_1165(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1166(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_569(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_660(iVar0, 0, 1) };
	iVar10 = func_1167(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1168(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1169(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_305(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1124(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_686(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_687(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_688(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_689(bool bParam0, bool bParam1)
{
	if (func_20() != -1)
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

void func_690(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_986())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_986())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_180(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_259(iParam0);
	if (func_182(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_182(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1170(1, iVar1);
					func_1170(8, iVar1);
					func_1170(7, iVar1);
					break;
				case 12:
					func_1170(6, iVar1);
					break;
				case 53:
					func_1170(3, iVar1);
					func_1170(7, iVar1);
					func_1170(4, iVar1);
					break;
				case 20:
					func_1170(8, iVar1);
					break;
				case 19:
					func_1170(1, iVar1);
					func_1170(2, iVar1);
					break;
				case 24:
					func_1170(3, iVar1);
					func_1170(9, iVar1);
					func_1170(20, iVar1);
					break;
				case 28:
					func_1170(1, iVar1);
					break;
				case 34:
					func_1170(23, iVar1);
					func_1170(2, iVar1);
					func_1170(18, iVar1);
					break;
				case 29:
					func_1170(0, iVar1);
					func_1170(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1170(0, iVar1);
					func_1170(3, iVar1);
					func_1170(2, iVar1);
					func_1170(11, iVar1);
					func_1170(6, iVar1);
					func_1170(25, iVar1);
					func_1170(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1170(5, iVar1);
					break;
				case 63:
					func_1170(1, iVar1);
					func_1170(3, iVar1);
					break;
				case 37:
					func_1170(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_350(0, 10, 11, 2116153146))
			{
				func_1170(7, iVar1);
				func_1170(4, iVar1);
			}
			else if (iParam0 == func_350(0, 7, 11, -379687487))
			{
				func_1170(8, iVar1);
				func_1170(15, iVar1);
			}
			else if (iParam0 == func_350(0, 8, 11, -1386089015))
			{
				func_1170(3, iVar1);
			}
			else if (iParam0 == func_350(0, 11, 11, -1952009645))
			{
				func_1170(6, iVar1);
				func_1170(3, iVar1);
			}
			else if (iParam0 == func_350(0, 12, 11, 2065895756))
			{
				func_1170(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1171()));
	if (!func_1172(629))
	{
		func_312(629, 0);
	}
}

int func_691(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_692(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_693(int iParam0, int iParam1, var uParam2)
{
	if (!func_692(iParam0))
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

int func_694()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_695(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_696(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1173(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_694())
	{
		return -1;
	}
	iVar0 = func_695(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_457(iVar1, 0);
	func_528(iVar1, 0);
	func_1174(iVar1, 0);
	func_1175(iVar1, 0);
	func_1176(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1177(iVar1, iParam4);
	}
	return iVar1;
}

int func_697(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_334(1811977508, 1, 0))
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
			if (func_549(iVar25, 0) && func_569(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_698(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_699(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	cVar0 = func_352(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_700(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_701(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1178(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1179() == 0 && !func_1180(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1181(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1182();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1183(Global_1310720->f_21))
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
			vVar7 = { func_1184(iVar0, iVar1) };
			bVar11 = func_1185(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_383(vVar7)) && func_1186(iVar0, bParam8, iParam12)) && !func_1187(iVar0)) || bVar11)
			{
				if (func_1188(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = vdist(vParam0, vVar7);
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

int func_702(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1189(vParam0);
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

void func_703()
{
	disable_script_brain_set(1);
}

void func_704()
{
}

void func_705()
{
	disable_script_brain_set(2);
}

bool func_706(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_707(char* sParam0)
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

void func_708(int iParam0)
{
	if (func_706(iParam0, 1))
	{
		func_1190(1);
	}
}

int func_709()
{
	return -1904156936;
}

bool func_710(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	switch (func_182(iParam0))
	{
		case 1:
			iVar0 = func_259(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_259(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_711()
{
	return 166188472;
}

int func_712()
{
	return 2015838421;
}

int func_713()
{
	return 207908017;
}

var func_714(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_715(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_716(var uParam0)
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

int func_717(var uParam0, int iParam1)
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

char* func_718(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1191(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1192(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1193(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_719(var uParam0, char* sParam1)
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

int func_720(var uParam0)
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

void func_721(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_722(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_723()
{
	return Global_1572864->f_8;
}

void func_724(var uParam0, int iParam1)
{
	func_1194(uParam0, iParam1);
	func_1195(uParam0, iParam1, 26);
}

bool func_725(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_726(var uParam0)
{
	if (!func_120(uParam0, 4))
	{
		if (!func_875(uParam0))
		{
			return false;
		}
		if (!func_877(uParam0))
		{
			return false;
		}
		if (!func_1196())
		{
			return false;
		}
		if (!func_1197(sLocal_81))
		{
			return false;
		}
		if (!func_1197(sLocal_82))
		{
			return false;
		}
	}
	if (func_120(uParam0, 4))
	{
		if (!func_1198(0))
		{
			return false;
		}
		func_873(0, 0);
	}
	func_1199(uParam0);
	func_1200();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_727(var uParam0)
{
	if (!func_1198(0))
	{
		return false;
	}
	func_1201(uParam0, iLocal_110, 1105014447, 422991367, 1, 1);
	freeze_entity_position(iLocal_118, false);
	freeze_entity_position(iLocal_126, false);
	func_429(sLocal_81);
	func_429(sLocal_82);
	func_430();
	func_167();
	func_930();
	func_1202();
	func_1203(7, iLocal_110, 1);
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_728(var uParam0)
{
	func_1204(uParam0);
	func_1205(iLocal_110, Global_35, sLocal_57, 1097859072, (45f + 10f), 1095237632);
	func_1207(iLocal_126, iLocal_118, 1073741824, 1101004800, 1095237632, 1075838976, func_1206(iLocal_126, sLocal_57, 2));
	func_1208();
	func_1202();
	switch (func_1209(uParam0))
	{
		case 0:
			if (func_1211(func_1210(sLocal_57, 194)))
			{
				if (!func_858(iLocal_118, iLocal_126, 15f, 1))
				{
					func_1212(1);
					func_134(uParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1206(iLocal_126, sLocal_57, 129))
			{
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_729(var uParam0)
{
	func_167();
	return uParam0->f_607 == uParam0->f_607;
}

void func_730(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1213(uParam0, iParam1);
	func_1195(uParam0, iParam1, iParam2);
	func_1214(uParam0, &iParam3, iParam1, 0);
	func_1214(uParam0, &iParam4, iParam1, 2);
	func_1214(uParam0, &iParam5, iParam1, 4);
	func_1214(uParam0, &iParam6, iParam1, 5);
	func_1214(uParam0, &iParam7, iParam1, 7);
	func_900(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1215(uParam0, iParam1, cVar0);
	func_1216(uParam0, iParam1, iParam10);
}

bool func_731(var uParam0)
{
	if (!func_1198(0))
	{
		return false;
	}
	func_1217(iLocal_118, func_210(1, 1), 2, 1073741824);
	func_1217(iLocal_126, func_210(1, 2), 2, 1073741824);
	force_entity_ai_and_animation_update(iLocal_118, true);
	force_entity_ai_and_animation_update(iLocal_126, true);
	func_873(0, 0);
	func_1212(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_732(var uParam0)
{
	if (!func_876(uParam0))
	{
		return false;
	}
	if (!func_878(uParam0))
	{
		return false;
	}
	if (!func_881(uParam0))
	{
		return false;
	}
	func_1218(iLocal_174, 1);
	func_1219();
	start_anim_scene(iLocal_174);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_733(var uParam0)
{
	if (!func_1211(func_1210(sLocal_57, 194)))
	{
		return false;
	}
	func_1201(uParam0, iLocal_110, 1105014447, 422991367, 1, 1);
	set_anim_scene_bool(iLocal_174, "Loop_Props", true, false);
	func_1203(7, iLocal_110, 1);
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_734(var uParam0)
{
	func_1220(uParam0);
	func_1221(Global_35, get_entity_coords(iLocal_113, true, false), 0, 10f, 8.5f, 6.5f, 3.5f, 1, 1, 1, 0);
	func_1205(iLocal_110, Global_35, sLocal_57, 1097859072, (45f + 10f), 1095237632);
	func_1207(iLocal_126, iLocal_118, 1073741824, 1101004800, 1095237632, 1075838976, 1);
	func_1208();
	func_1222();
	func_1223(uParam0);
	func_1224(uParam0);
	switch (func_1209(uParam0))
	{
		case 0:
			if (func_1206(iLocal_118, sLocal_57, 192))
			{
				if (func_1206(iLocal_126, sLocal_57, 192) || !func_1225(Global_35, iLocal_126, 0))
				{
					func_1212(0);
					func_1226(uParam0, 3, 0);
					func_1227(uParam0, iLocal_110, 1);
					func_135(uParam0, 51);
					func_134(uParam0, 1);
				}
			}
			break;
		case 1:
			func_27(&uLocal_250, 0);
			if (func_1228(&uLocal_250) > 2.5f || !func_1225(Global_35, iLocal_126, 0))
			{
				if (func_1229(iLocal_113, 422991367, "MAR7_NILS", 1, -401963276, 1))
				{
					func_134(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_1225(Global_35, iLocal_126, 0))
			{
				func_1230();
				func_134(uParam0, 3);
			}
			break;
		case 3:
			func_1231(uParam0);
			break;
		case 29:
			_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
			if (_does_anim_scene_exist(iLocal_174))
			{
				if (_is_anim_scene_started(iLocal_174, false))
				{
					if (_0x1f0e401031e20146(iLocal_174, sLocal_63))
					{
						_0x36559148b78853b3(1, 0, 0);
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

bool func_735(var uParam0)
{
	_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
	func_524(&uLocal_250);
	if (_0xe62754d09354f6cf(iLocal_126) == 0)
	{
		_0xe01f55b2896f6b37(iLocal_126, 1);
	}
	_0x27e3f2b57209fa54(iLocal_126, 0);
	func_1203(7, iLocal_110, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_736(var uParam0)
{
	func_1217(iLocal_118, func_210(2, 1), 2, 1073741824);
	func_1217(iLocal_126, func_210(2, 2), 2, 1073741824);
	if (!func_1198(0))
	{
		return false;
	}
	func_431(1);
	func_432(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_737(var uParam0)
{
	_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
	func_1221(Global_35, get_entity_coords(iLocal_113, true, false), 0, 10f, 8.5f, 6.5f, 3.5f, 1, 1, 1, 0);
	if (!func_876(uParam0))
	{
		return false;
	}
	if (!func_878(uParam0))
	{
		return false;
	}
	if (!func_881(uParam0))
	{
		return false;
	}
	if (func_120(uParam0, 4))
	{
		func_1217(iLocal_113, func_210(2, 5), 2, 1073741824);
		func_1217(iLocal_118, func_210(2, 3), 2, 1073741824);
		func_1232(get_entity_coords(iLocal_118, true, false));
	}
	else if (!func_1233())
	{
		return false;
	}
	func_1234(iLocal_113);
	func_1235(uParam0);
	func_1218(iLocal_175, 0);
	_set_vehicle_exclusive_driver_2(iLocal_126, Global_35, 0);
	set_entity_visible(iLocal_138, false);
	set_entity_visible(iLocal_140, false);
	func_785(&(uParam0->f_7375), -1952.48f, -1629.02f, 115.1924f, 12.18f, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_738(var uParam0)
{
	if (!func_1198(0))
	{
		return false;
	}
	if (!func_1211(func_1236(sLocal_57)))
	{
		return false;
	}
	func_431(0);
	func_1212(1);
	func_1237(iLocal_118, 1, -1082130432, 0);
	set_entity_visible(iLocal_138, true);
	set_entity_visible(iLocal_140, true);
	start_anim_scene(iLocal_175);
	set_anim_scene_bool(iLocal_175, "Loop_Props", true, false);
	func_1201(uParam0, iLocal_110, 1105014447, 422991367, 1, 1);
	func_1238(iLocal_118);
	func_1239(&Local_257);
	func_1239(&Local_438);
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_739(var uParam0)
{
	func_1240(uParam0);
	func_1241(uParam0);
	func_1205(iLocal_110, Global_35, sLocal_57, 1097859072, 1106247680, 1095237632);
	func_1207(iLocal_126, iLocal_118, 1073741824, 1101004800, 1095237632, 1075838976, 0);
	switch (func_1209(uParam0))
	{
		case 0:
			func_27(&uLocal_85, 0);
			if (func_1228(&uLocal_85) > 2.5f)
			{
				clear_ped_tasks(Global_35, 1, 0);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (func_1206(iLocal_118, sLocal_57, 215) || func_1206(iLocal_126, sLocal_57, 210))
			{
				if (func_1242())
				{
					func_1243(uParam0, 131072);
					func_1243(uParam0, 65536);
					func_135(uParam0, 51);
					func_134(uParam0, 29);
				}
			}
			break;
		case 29:
			if (_does_anim_scene_exist(iLocal_176))
			{
				if (_is_anim_scene_started(iLocal_176, false))
				{
					disable_control_action(0, -17122892, false);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_740(var uParam0)
{
	disable_control_action(0, -17122892, false);
	func_1212(0);
	func_1244(0.6f);
	func_1245();
	func_168();
	_0x27e3f2b57209fa54(iLocal_118, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_741(var uParam0)
{
	_0xf7ea250b9a919e03(659662656, Global_35);
	_0x140b3cb1d424a945(Global_35, -1569615261);
	_0x140b3cb1d424a945(Global_35, get_best_ped_weapon(Global_35, false, true));
	_0x140b3cb1d424a945(iLocal_110, -1);
	func_1217(iLocal_118, func_210(3, 2), 2, 1073741824);
	func_1217(iLocal_126, func_210(3, 4), 2, 1073741824);
	if (!func_881(uParam0))
	{
		return false;
	}
	if (!func_120(uParam0, 4))
	{
		if (!func_1198(0))
		{
			return false;
		}
	}
	func_873(0, 0);
	func_1237(iLocal_118, 1, -1082130432, 0);
	set_current_ped_weapon(iLocal_110, -1098045850, true, 0, false, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_742(var uParam0)
{
	disable_control_action(0, -17122892, false);
	request_collision_at_coord(func_375(3, 0));
	if (func_120(uParam0, 4))
	{
		if (!func_1246())
		{
			return false;
		}
		if (!func_1247())
		{
			return false;
		}
		if (!func_1248(&Local_257))
		{
			return false;
		}
		if (!func_1248(&Local_438))
		{
			return false;
		}
		if (!_0x6bfbdc46139c45ab(func_375(3, 0)))
		{
			return false;
		}
		clear_ped_tasks_immediately(Global_35, true, true);
		clear_ped_tasks_immediately(iLocal_110, true, true);
		clear_ped_tasks_immediately(iLocal_111, true, true);
		func_1217(Global_35, func_210(3, 0), 2, 1073741824);
		func_1217(iLocal_110, func_210(3, 8), 2, 1073741824);
		func_1217(iLocal_111, func_210(3, 1), 2, 1073741824);
		func_1217(iLocal_118, func_210(3, 3), 2, 1073741824);
		func_1217(iLocal_126, func_210(3, 5), 2, 1073741824);
		func_1232(func_375(10, 32));
	}
	else
	{
		func_1249();
		if (!func_1250())
		{
			return false;
		}
		func_1251();
		if (!func_1252())
		{
			return false;
		}
		func_1253(uParam0);
		func_1254(&(uParam0->f_7375), iLocal_110, 8);
		func_1254(&(uParam0->f_7375), &(Local_257[0]), 8);
		func_1254(&(uParam0->f_7375), &(Local_257[1]), 8);
		func_1243(uParam0, 131072);
		func_1243(uParam0, 65536);
	}
	_0x2a10538d0a005e81(iLocal_217, 1);
	iLocal_239 = add_cover_point(-2003.177f, -1415.928f, 116.2957f, 87f, 3, 0, 0, false);
	iLocal_240 = add_cover_point(-2002.643f, -1412.246f, 116.3299f, 87f, 3, 0, 0, false);
	set_ped_config_flag(iLocal_110, 156, false);
	set_ped_config_flag(Global_35, 454, true);
	set_ped_config_flag(iLocal_110, 454, true);
	set_ped_config_flag(iLocal_111, 454, true);
	set_anim_scene_origin(iLocal_180, vLocal_188, vLocal_188, 2);
	attach_anim_scene_to_entity(iLocal_180, iLocal_126, 0);
	_0xf7ea250b9a919e03(659662656, Global_35);
	_hide_ped_weapons(Global_35, 2, true);
	_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
	_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 1);
	_0x140b3cb1d424a945(Global_35, get_best_ped_weapon(Global_35, false, true));
	_0x140b3cb1d424a945(iLocal_110, -1098045850);
	func_1255(1);
	set_ped_sphere_defensive_area(iLocal_111, _get_object_offset_from_coords(func_375(3, 10), func_1256(3, 10), -0.5f, 0f, -1f), 1.15f, true, false, 0);
	set_ped_sphere_defensive_area(iLocal_111, func_375(3, 0) - Vector(1f, 0f, 0f), 1.15f, false, true, 0);
	_0xd730281e496621fb(iLocal_110, -1370000800);
	set_entity_only_damaged_by_player(iLocal_112, true);
	func_1257();
	func_1258();
	func_1259();
	func_928();
	func_436(&iLocal_1637);
	func_436(&iLocal_1638);
	func_1227(uParam0, iLocal_110, 1);
	_0x201b8ed4ff7fe9f5(iLocal_118);
	set_audio_flag("DisableSubtitleDistancePriorityFiltering", true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_743(var uParam0)
{
	if (!func_1246())
	{
		return false;
	}
	if (!func_1247())
	{
		return false;
	}
	set_ped_config_flag(Global_35, 454, false);
	set_ped_config_flag(iLocal_110, 454, false);
	set_ped_config_flag(iLocal_111, 454, false);
	set_vehicle_forward_speed(iLocal_118, 0f);
	set_vehicle_forward_speed(iLocal_126, 0f);
	set_vehicle_handbrake(iLocal_118, true);
	set_vehicle_handbrake(iLocal_126, true);
	_0x41cda90ee3450921(iLocal_118);
	_0x41cda90ee3450921(iLocal_126);
	_set_vehicle_exclusive_driver_2(iLocal_118, iLocal_111, 0);
	_set_vehicle_exclusive_driver_2(iLocal_126, iLocal_111, 0);
	set_vehicle_is_considered_by_player(iLocal_118, false);
	set_vehicle_is_considered_by_player(iLocal_126, false);
	_0x1a7a802b2301edc0(Global_35);
	_0x1a7a802b2301edc0(iLocal_110);
	_0x986f7a51ee3e1f92(iLocal_111, 1);
	func_1260(iLocal_112, 1);
	set_entity_only_damaged_by_player(iLocal_112, true);
	set_ped_config_flag(iLocal_112, 16, true);
	set_ped_can_ragdoll(iLocal_112, false);
	stop_ped_speaking(iLocal_112, true);
	set_current_ped_weapon(&(Local_438[5]), Local_438[5]->f_6, true, 0, false, false);
	func_1217(&(Local_438[5]), func_472(Local_438[5]->f_8, Local_438[5]->f_16), 2, 1073741824);
	func_1261(Local_438[5], 1);
	func_1257();
	func_1262(uParam0);
	func_1239(&Local_641);
	func_1239(&Local_559);
	func_1239(&Local_600);
	func_1263(&Local_1026);
	func_135(uParam0, 1);
	func_134(uParam0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_744(var uParam0)
{
	func_1264(uParam0);
	func_1265(uParam0);
	func_1266(uParam0);
	func_1267(uParam0);
	func_1268(&Local_257, 0);
	func_1268(&Local_438, 0);
	func_1269();
	func_1270();
	func_1271();
	func_1272();
	func_1273(uParam0, iLocal_110, 1103626240, 0);
	func_1273(uParam0, iLocal_111, 1103626240, 1);
	switch (func_1209(uParam0))
	{
		case 0:
			if ((func_1274(&Local_257) <= 0 && func_1274(&Local_438) <= 0) || iVar1671 == 6)
			{
				func_134(uParam0, 1);
			}
			break;
		case 1:
			func_27(&uLocal_85, 0);
			if (func_1228(&uLocal_85) > 2.5f)
			{
				func_524(&uLocal_85);
				if (iVar1669 < 4)
				{
					iLocal_1672 = 4;
				}
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (!_0x1ecc76792f661cf5("MAR7_CRETREAT") && !_0x1204eb53a5fbc63d())
			{
				func_27(&uLocal_85, 0);
				if (iVar1669 == 5 || func_1228(&uLocal_85) > 5f)
				{
					func_524(&uLocal_85);
					func_1275();
					func_134(uParam0, 29);
				}
			}
			break;
		case 29:
			_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
			func_27(&uLocal_85, 0);
			if (func_1228(&uLocal_85) > 1f)
			{
				func_1275();
				return 1;
			}
			break;
	}
	return 0;
}

bool func_745(var uParam0)
{
	set_ped_config_flag(iLocal_110, 156, true);
	set_entity_invincible(iLocal_111, false);
	func_1276(&iLocal_112);
	func_1277(&Local_257);
	func_1277(&Local_438);
	func_1278(uParam0, iLocal_110);
	func_1278(uParam0, iLocal_111);
	func_524(&uLocal_1619);
	func_524(&uLocal_1622);
	func_524(&uLocal_1625);
	func_524(&uLocal_1631);
	func_524(&uLocal_85);
	clear_ped_tasks(iLocal_110, 1, 0);
	remove_ped_defensive_area(iLocal_110, false);
	remove_ped_defensive_area(iLocal_110, true);
	clear_ped_tasks(iLocal_111, 1, 0);
	remove_ped_defensive_area(iLocal_111, false);
	remove_ped_defensive_area(iLocal_111, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_746(var uParam0)
{
	func_1217(iLocal_118, func_210(3, 3), 2, 1073741824);
	func_1217(iLocal_126, func_210(3, 5), 2, 1073741824);
	func_1217(Global_35, func_210(4, 0), 2, 1073741824);
	func_1217(iLocal_110, func_210(4, 1), 2, 1073741824);
	func_1217(iLocal_111, func_210(4, 2), 2, 1073741824);
	func_1217(iLocal_112, func_210(4, 3), 2, 1073741824);
	func_1237(iLocal_118, 1, -1082130432, 0);
	set_audio_flag("DisableSubtitleDistancePriorityFiltering", true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_747(var uParam0)
{
	_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
	if (!func_881(uParam0))
	{
		return false;
	}
	if (!func_1279())
	{
		return false;
	}
	if (!func_120(uParam0, 4))
	{
		if (!func_1280())
		{
			return false;
		}
	}
	else
	{
		func_1217(Global_35, func_210(4, 0), 2, 1073741824);
		func_1217(iLocal_110, func_210(4, 1), 2, 1073741824);
		func_1217(iLocal_111, func_210(4, 2), 2, 1073741824);
		if (!func_1281())
		{
			return false;
		}
		if (!func_1282())
		{
			return false;
		}
		if (!func_1248(&Local_600))
		{
			return false;
		}
	}
	func_437();
	_hide_ped_weapons(Global_35, 2, true);
	func_1234(iLocal_112);
	func_1283(uParam0);
	set_ped_config_flag(&(Local_600[1]), 16, true);
	set_entity_proofs(&(Local_600[1]), 5, false);
	_0x2ba918c823b8ba56(&(Local_600[1]), 1f);
	set_entity_max_health(&(Local_600[1]), 5000);
	_set_entity_health(&(Local_600[1]), 5000, 0);
	_0xff745b0346e19e2c(-421224518);
	set_entity_invincible(iLocal_112, true);
	func_1284(iLocal_112);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_748(var uParam0)
{
	func_1285();
	func_1237(iLocal_118, 0, -1082130432, 0);
	func_441(&Local_559, 1);
	func_1217(iLocal_169, func_210(6, 2), 2, 1073741824);
	freeze_entity_position(iLocal_169, true);
	_0x7d654266025e921b(-632030841);
	_0x7d654266025e921b(-1392528840);
	request_ped_visibility_tracking(iLocal_112);
	request_ped_visibility_tracking(&(Local_600[0]));
	request_ped_visibility_tracking(&(Local_600[1]));
	iLocal_237 = func_1286(408396114, func_375(4, 8), 25f, 1);
	func_27(&uLocal_85, 0);
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_749(var uParam0)
{
	func_1287(uParam0);
	func_1221(Global_35, func_375(4, 10), 0, 20f, 10f, 4f, 0f, 1, 1, 1, 0);
	func_1288(iLocal_110, 2f);
	func_1288(&(Local_600[0]), 3f);
	func_1288(&(Local_600[1]), 3f);
	func_1289(uParam0);
	func_1290(uParam0);
	func_1291(uParam0);
	func_1292(uParam0);
	func_1268(&Local_641, 0);
	switch (func_1209(uParam0))
	{
		case 0:
			if (func_1293())
			{
				func_1294();
			}
			if (func_1228(&uLocal_85) > 45f)
			{
				func_1295(uParam0, "MAR7_LOST_THIEVES", "", 1, 0);
			}
			if ((func_1296(Global_35, func_375(4, 10), func_375(6, 2)) || func_1297(Global_35, func_375(4, 8), 25f, 1, 0)) || func_1297(iLocal_110, func_375(4, 8), 25f, 1, 0))
			{
				func_524(&uLocal_85);
				func_436(&iLocal_237);
				func_135(uParam0, 51);
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_750(var uParam0)
{
	func_1298(iLocal_110);
	set_audio_flag("DisableSubtitleDistancePriorityFiltering", false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_751(var uParam0)
{
	func_1217(Global_35, func_210(5, 0), 2, 1073741824);
	func_1217(iLocal_110, func_210(5, 1), 2, 1073741824);
	func_1217(iLocal_111, func_210(4, 2), 2, 1073741824);
	func_1217(iLocal_118, func_210(3, 3), 2, 1073741824);
	func_1217(iLocal_126, func_210(3, 5), 2, 1073741824);
	func_1217(iLocal_169, func_210(6, 2), 2, 1073741824);
	freeze_entity_position(iLocal_169, true);
	func_1299(&iLocal_112, &iLocal_126, 0, 1);
	func_1300();
	set_current_ped_weapon(Global_35, get_best_ped_weapon(Global_35, false, true), true, 0, false, false);
	task_swap_weapon(Global_35, 1, 1, 0, 0);
	task_put_ped_directly_into_cover(Global_35, func_375(5, 0), -1, 0, 0, 1, 0, 0, 0, 1, 0);
	set_current_ped_weapon(iLocal_110, -1098045850, true, 0, false, false);
	task_swap_weapon(iLocal_110, 1, 1, 0, 0);
	task_put_ped_directly_into_cover(iLocal_110, func_375(5, 1), -1, 1, 0, 1, 1, 0, 0, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_752(var uParam0)
{
	if (!func_881(uParam0))
	{
		return false;
	}
	if (!func_1281())
	{
		return false;
	}
	if (!func_1301())
	{
		return false;
	}
	if (!func_1282())
	{
		return false;
	}
	if (func_120(uParam0, 4))
	{
		if (!func_1248(&Local_641))
		{
			return false;
		}
	}
	func_1285();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_753(var uParam0)
{
	func_1302(&Local_641, 0.5f, 2.5f);
	func_1303(&Local_641, 3);
	func_1304(&Local_1026, 1);
	func_1305(Local_1026[0], 1);
	func_1305(Local_1026[1], 1);
	set_ped_sphere_defensive_area(iLocal_110, func_375(5, 1), (3f * 0.5f), false, false, 0);
	set_ped_sphere_defensive_area(iLocal_110, func_375(5, 0), (3f * 0.5f), false, true, 0);
	func_1239(&Local_762);
	func_1239(&Local_823);
	func_1239(&Local_904);
	func_1239(&Local_965);
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_754(var uParam0)
{
	func_1306(uParam0);
	func_1307(&Local_641);
	func_1308(uParam0, &Local_641, &Local_1586, 1109393408);
	func_1292(uParam0);
	func_1268(&Local_641, func_1274(&Local_641) <= 2);
	func_1268(&Local_762, 0);
	func_1268(&Local_823, 0);
	func_1309();
	func_1273(uParam0, iLocal_110, 1103626240, 0);
	func_1310();
	if (func_1293())
	{
		func_1294();
	}
	switch (func_1209(uParam0))
	{
		case 0:
			func_27(&uLocal_85, 0);
			if ((func_1228(&uLocal_85) > 25f || func_1297(Global_35, func_375(4, 9), 10f, 1, 0)) || func_1274(&Local_641) < ceil((IntToFloat(6 + 2) * 0.75f)))
			{
				task_combat_hated_targets(iLocal_110, -1f);
				set_ped_sphere_defensive_area(iLocal_110, func_375(4, 9), (3f + 1.5f), false, false, 0);
				set_ped_sphere_defensive_area(iLocal_110, get_offset_from_entity_in_world_coords(iLocal_173, 0.75f, 0f, 1f), 3f, false, true, 0);
				func_524(&uLocal_85);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			func_1311();
			if (func_1312() <= 0)
			{
				if (func_1274(&Local_641) <= 0)
				{
					func_1313(iLocal_110, func_210(6, 1), 1f, 20000, 1048576000, 0);
					func_135(uParam0, 51);
					func_134(uParam0, 29);
				}
				else if (func_1274(&Local_641) <= 1)
				{
					func_27(&uLocal_1619, 0);
					if (func_1228(&uLocal_1619) > 10f)
					{
						func_524(&uLocal_1619);
						func_1303(&Local_641, 10);
						func_135(uParam0, 51);
						func_134(uParam0, 29);
					}
				}
			}
			break;
		case 29:
			func_27(&uLocal_85, 0);
			if (func_1228(&uLocal_85) > 2.5f)
			{
				func_524(&uLocal_85);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_755(var uParam0)
{
	func_1294();
	func_524(&uLocal_1625);
	func_524(&uLocal_1619);
	func_524(&uLocal_1622);
	func_524(&uLocal_1631);
	func_1278(uParam0, iLocal_110);
	remove_ped_defensive_area(iLocal_110, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_756(var uParam0)
{
	func_1217(Global_35, func_210(6, 0), 2, 1073741824);
	func_1217(iLocal_110, func_210(6, 1), 2, 1073741824);
	func_1217(iLocal_111, func_210(4, 2), 2, 1073741824);
	func_1217(iLocal_118, func_210(3, 3), 2, 1073741824);
	func_1217(iLocal_126, func_210(3, 5), 2, 1073741824);
	func_1217(iLocal_169, func_210(6, 2), 2, 1073741824);
	freeze_entity_position(iLocal_169, true);
	set_current_ped_weapon(iLocal_110, -1098045850, true, 0, false, false);
	func_1300();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_757(var uParam0)
{
	if (!func_881(uParam0))
	{
		return false;
	}
	if (func_1314(8))
	{
		func_1217(Global_35, func_210(6, 10), 2, 1073741824);
		func_1217(iLocal_110, func_210(6, 9), 2, 1073741824);
	}
	else
	{
		if (!func_1315())
		{
			return false;
		}
		if (!func_1316())
		{
			return false;
		}
		if (!func_1317())
		{
			return false;
		}
		if (!func_1318())
		{
			return false;
		}
	}
	set_current_ped_weapon(&(Local_823[3]), Local_823[3]->f_6, true, 0, false, false);
	func_1261(Local_823[3], 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_758(var uParam0)
{
	Local_1305[21]->f_4 = 1;
	Local_1431[5]->f_4 = 1;
	Local_1431[6]->f_4 = 1;
	if (func_1314(8))
	{
		iLocal_1708 = 6;
		iLocal_1706 = 5;
		iLocal_1707 = 0;
		iLocal_1709 = 4;
		iLocal_1705 = 21;
		func_1203(7, iLocal_110, 1);
		func_135(uParam0, 7);
	}
	else
	{
		open_sequence_task(&iLocal_215);
		task_follow_waypoint_recording(0, sLocal_61, 0, 67136512, 10, 0, 0, -1);
		task_go_straight_to_coord(0, func_375(6, 4), 2f, 20000, 40000f, 1.25f, 1);
		task_put_ped_directly_into_cover(0, func_375(6, 4), 3000, 1, 0.5f, 1, 1, 0, 1, 0, 0);
		close_sequence_task(iLocal_215);
		task_perform_sequence(iLocal_110, iLocal_215);
		if (func_120(uParam0, 4) || func_128(uParam0, 1))
		{
			func_1319(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
		}
		func_1201(uParam0, iLocal_110, 1105014447, 422991367, 1, 1);
		func_135(uParam0, 1);
	}
	func_145(uParam0, &(Local_762[0]), "SAV_PED6", 0);
	func_145(uParam0, &(Local_762[1]), "SAV_PED5", 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_759(var uParam0)
{
	set_ped_reset_flag(Global_35, 245, true);
	func_1320(uParam0);
	func_1321(uParam0);
	func_1322(uParam0);
	func_1323(uParam0);
	func_1324(uParam0);
	func_1325();
	func_1326();
	func_1268(&Local_762, 0);
	func_1268(&Local_823, 0);
	func_1268(&Local_904, 0);
	func_1268(&Local_965, 0);
	func_1327();
	func_1328();
	return func_1329();
}

bool func_760(var uParam0)
{
	func_1244(1f);
	func_427(iLocal_110);
	func_1330(iLocal_118);
	func_1330(iLocal_126);
	func_1331(iLocal_110);
	func_1278(uParam0, iLocal_110);
	func_436(&iLocal_237);
	func_524(&uLocal_1625);
	func_524(&uLocal_85);
	func_524(&uLocal_1631);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_761(var uParam0)
{
	func_1217(Global_35, func_210(7, 0), 2, 1073741824);
	func_1217(iLocal_110, func_210(7, 1), 2, 1073741824);
	func_1217(iLocal_112, func_210(7, 2), 2, 1073741824);
	func_1217(iLocal_111, func_210(4, 2), 2, 1073741824);
	func_1217(iLocal_169, func_210(6, 2), 2, 1073741824);
	func_1332(Global_35);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_762(var uParam0)
{
	_0xff745b0346e19e2c(1361896662);
	_request_scenario_type(-22664287, 15, 0, 0);
	if (!_0xb8f52a3f84a7cc59(1361896662))
	{
		return false;
	}
	if (!_has_scenario_type_loaded(-22664287, false))
	{
		return false;
	}
	if (!func_881(uParam0))
	{
		return false;
	}
	func_1330(iLocal_118);
	func_1330(iLocal_126);
	func_1217(iLocal_118, func_210(7, 3), 2, 1073741824);
	func_1217(iLocal_126, func_210(7, 4), 2, 1073741824);
	func_1333(Global_35);
	set_entity_visible(iLocal_112, true);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	_hide_ped_weapons(Global_35, 2, true);
	func_1334(Global_35, 1);
	set_current_ped_weapon(iLocal_110, -1569615261, true, 0, false, false);
	_hide_ped_weapons(iLocal_110, 2, true);
	func_1335(iLocal_110, 1, 1361896662);
	set_current_ped_weapon(iLocal_111, -1569615261, true, 0, false, false);
	_hide_ped_weapons(iLocal_111, 2, true);
	func_1298(iLocal_111);
	_set_vehicle_exclusive_driver_2(iLocal_118, iLocal_111, 0);
	_set_vehicle_exclusive_driver_2(iLocal_126, iLocal_111, 0);
	func_1336(iLocal_111, -22664287, -1992.865f, -1399.721f, 115.9053f, -105f, 0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_763(var uParam0)
{
	func_1337();
	func_1338();
	set_anim_scene_origin(iLocal_181, vLocal_188, vLocal_188, 2);
	attach_anim_scene_to_entity(iLocal_181, iLocal_126, 0);
	set_anim_scene_origin(iLocal_179, vLocal_188, vLocal_188, 2);
	attach_anim_scene_to_entity(iLocal_179, iLocal_118, 0);
	set_vehicle_is_considered_by_player(iLocal_118, true);
	set_ped_leg_ik_mode(iLocal_112, 0);
	_0x201b8ed4ff7fe9f5(iLocal_126);
	iLocal_237 = func_1339(408396114, iLocal_118, 1);
	if (func_120(uParam0, 4))
	{
		func_1319(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
	}
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_764(var uParam0)
{
	func_1340(uParam0);
	func_1341();
	func_1325();
	func_1326();
	func_1342();
	func_1343();
	func_1344();
	switch (func_1209(uParam0))
	{
		case 0:
			if (func_1206(Global_35, sLocal_62, 105) || func_1297(Global_35, _0xf70f00013a62f866(iLocal_224), 15f, 1, 1))
			{
				iLocal_1720 = func_1345("MAR7_UC_WAGON", -473983589, iLocal_224, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				func_1346(iVar1717, 1, 1);
				func_1347(iVar1717, 1, 1);
				func_1348(&iLocal_1720, iLocal_169);
				func_1349(uParam0, 14, 2.5f);
				func_135(uParam0, 6);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			func_1221(Global_35, _0xf70f00013a62f866(iLocal_224), 0, 9f, 6f, 3f, 1f, 1, 1, 1, 0);
			if (func_1350(Global_35, iLocal_224, 0, 1))
			{
				if (func_10(iVar1717))
				{
					_uiprompt_set_ambient_group_this_frame(iLocal_169, 2.5f, 3, 1, 0, "MAR7_TOOLS", 0);
					if (func_1351(iVar1717, 1))
					{
						iLocal_1721 = func_1352();
						_0xdd1232b332cbb9e7(3, 1, 0);
						_set_vehicle_exclusive_driver_2(iLocal_118, 0, 0);
						set_anim_scene_int(iLocal_179, "iSelection", iVar1718, false);
						task_enter_anim_scene(Global_35, iLocal_179, "JOHN", func_1353(iVar1718), 1069379748, 1, 2, 20000, -1082130432);
						func_11(&iLocal_1720, 1, 1);
						func_436(&iLocal_237);
						func_134(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (func_1354(iLocal_179))
			{
				func_1334(Global_35, 0);
				freeze_entity_position(iLocal_118, true);
				set_entity_no_collision_entity(iLocal_169, iLocal_118, false);
				set_entity_no_collision_entity(Global_35, iLocal_118, false);
				func_1226(uParam0, 15, 0);
				func_134(uParam0, 3);
			}
			break;
		case 3:
			if (func_1355(iLocal_179) || _0x005e6f28dd7ed58d(iLocal_179, "p_toolBox01x"))
			{
				freeze_entity_position(iLocal_118, false);
				set_entity_no_collision_entity(Global_35, iLocal_118, true);
				func_1237(iLocal_118, 1, -1082130432, 0);
				func_134(uParam0, 4);
			}
			break;
		case 4:
			func_1349(uParam0, 15, 12f);
			func_1227(uParam0, iLocal_110, 1);
			iLocal_237 = _blip_add_for_entity(631964804, iLocal_118);
			_blip_set_modifier(iLocal_237, -401963276);
			set_blip_name_from_text_file(iLocal_237, "MAR7_WAGON");
			func_134(uParam0, 5);
			break;
		case 5:
			if (func_1225(iLocal_110, iLocal_118, 0))
			{
				if (func_1225(Global_35, iLocal_118, 0))
				{
					func_134(uParam0, 29);
				}
			}
			else if (func_1225(Global_35, iLocal_118, 0))
			{
				func_134(uParam0, 6);
			}
			break;
		case 6:
			func_436(&iLocal_237);
			func_1201(uParam0, iLocal_110, 1105014447, 422991367, 1, 1);
			func_1349(uParam0, 16, 1f);
			func_134(uParam0, 7);
			break;
		case 7:
			if (!func_1225(Global_35, iLocal_118, 0))
			{
				func_134(uParam0, 4);
			}
			else if (func_1225(iLocal_110, iLocal_118, 0))
			{
				func_1230();
				func_135(uParam0, 51);
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_765(var uParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0x41cda90ee3450921(iLocal_126);
	func_1245();
	func_436(&iLocal_237);
	func_1227(uParam0, iLocal_110, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_766(var uParam0)
{
	func_1217(iLocal_118, func_210(7, 3), 2, 1073741824);
	func_1217(iLocal_126, func_210(7, 4), 2, 1073741824);
	if (!func_1198(1))
	{
		return false;
	}
	func_1237(iLocal_118, 1, -1082130432, 0);
	func_1356(0);
	func_873(0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	if (!func_881(uParam0))
	{
		return false;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(var uParam0)
{
	if (!func_1357(uParam0))
	{
		return false;
	}
	if (!func_879(uParam0))
	{
		return false;
	}
	func_1262(uParam0);
	_0x27e3f2b57209fa54(iLocal_118, 0);
	iLocal_237 = func_1358(408396114, func_375(9, 2), 1);
	_blip_set_modifier(iLocal_237, -1878373110);
	func_1203(7, iLocal_110, 1);
	func_1359();
	func_1360(iLocal_184);
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_769(var uParam0)
{
	func_1361(uParam0);
	func_1362(uParam0);
	func_1363();
	func_1364();
	func_1365();
	func_1366();
	switch (func_1209(uParam0))
	{
		case 0:
			if (func_1367(1089470464))
			{
				set_player_control(get_player_index(), false, 256, false);
				bring_vehicle_to_halt(iLocal_118, 1f, -1, false);
				_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
				_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 1);
				_hide_ped_weapons(Global_35, 2, false);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
			func_27(&uLocal_85, 0);
			if (func_1228(&uLocal_85) > 8f || ((get_entity_speed(iLocal_118) < 2f && !_0x1ecc76792f661cf5("MAR7_BEECHERS")) && func_1228(&uLocal_85) > 1f))
			{
				func_524(&uLocal_85);
				func_134(uParam0, 29);
			}
			break;
		case 29:
			_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
			return 1;
	}
	return 0;
}

bool func_770(var uParam0)
{
	_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
	func_436(&iLocal_237);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_771(var uParam0)
{
	func_1217(iLocal_118, func_210(9, 2), 2, 1073741824);
	func_1217(iLocal_126, func_210(9, 3), 2, 1073741824);
	if (!func_1198(1))
	{
		return false;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_772(var uParam0)
{
	_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
	if (!func_1357(uParam0))
	{
		return false;
	}
	if (!func_879(uParam0))
	{
		return false;
	}
	if (!func_1368())
	{
		return false;
	}
	func_930();
	func_1237(iLocal_118, 0, -1082130432, 0);
	func_1369(uParam0);
	func_1217(iLocal_117, func_210(9, 1), 2, 1073741824);
	task_stand_still(iLocal_117, -1);
	freeze_entity_position(iLocal_117, false);
	_hide_ped_weapons(Global_35, 2, true);
	_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
	_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_773(var uParam0)
{
	func_134(uParam0, 29);
	func_135(uParam0, 51);
	return uParam0->f_607 == uParam0->f_607;
}

int func_774(var uParam0)
{
	func_1370(uParam0);
	switch (func_1209(uParam0))
	{
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_775(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

Vector3 func_776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -872.8604f, -1317.282f, 42.1858f;
				case 1:
					return -865.0912f, -1307.016f, 42.0141f;
				case 2:
					return -867.549f, -1320.503f, 42.5074f;
				case 3:
					return -861.7782f, -1321.397f, 42.5074f;
				case 4:
					return -862.9655f, -1319.227f, 42.5074f;
				case 5:
					return -848.8048f, -1333.051f, 42.5074f;
				case 6:
					return -848.4974f, -1320.168f, 42.5074f;
				case 7:
					return -891.4622f, -1305.496f, 43.4772f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1594.402f, -1739.262f, 80.7425f;
				case 1:
					return -1687.173f, -1717.708f, 86.4153f;
				case 2:
					return -1673.385f, -1719.609f, 85.6653f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1959.5f, -1616.71f, 116.4199f;
				case 1:
					return -1956.177f, -1611.968f, 115.9454f;
				case 2:
					return -1954.447f, -1620.477f, 115.832f;
				case 3:
					return -1957.896f, -1602.546f, 115.9312f;
				case 4:
					return -1984.457f, -1635.535f, 116.8687f;
				case 5:
					return -1971.093f, -1616.752f, 117.0908f;
				case 6:
					return -1978.789f, -1626.74f, 116.3687f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1993.812f, -1424.857f, 117.0419f;
				case 1:
					return -1992.986f, -1403.008f, 117.089f;
				case 2:
					return -2002.953f, -1449.816f, 113.6397f;
				case 3:
					return -1994.698f, -1402.462f, 116.8723f;
				case 4:
					return -1997.482f, -1476.563f, 112.3897f;
				case 5:
					return -1990.551f, -1429.522f, 116.8694f;
				case 6:
					return -2004.51f, -1413.931f, 116.8931f;
				case 7:
					return -1989.08f, -1414.861f, 116.3546f;
				case 8:
					return -2002.695f, -1414.743f, 117.1714f;
				case 9:
					return -1983.264f, -1415.155f, 115.3596f;
				case 10:
					return -1993.947f, -1421.681f, 117.0419f;
				case 11:
					return -1985.426f, -1423.487f, 116.304f;
				case 12:
					return -1980.879f, -1425.307f, 115.9065f;
				case 13:
					return -2016.508f, -1452.557f, 118.0188f;
				case 14:
					return -2013.88f, -1448.99f, 116.7963f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1983.726f, -1424.673f, 116.5932f;
				case 1:
					return -1985.295f, -1419.544f, 116.2075f;
				case 2:
					return -1998.079f, -1418.368f, 116.3492f;
				case 3:
					return -1976.724f, -1430.909f, 115.8555f;
				case 4:
					return -2095.408f, -1431.373f, 128.62f;
				case 5:
					return -2096.71f, -1431.175f, 128.62f;
				case 6:
					return -2097.799f, -1429.887f, 128.62f;
				case 7:
					return -2099.317f, -1429.831f, 128.62f;
				case 8:
					return -1918.89f, -1440.39f, 104.39f;
				case 9:
					return -1914.332f, -1443.393f, 104.736f;
				case 10:
					return -1932.334f, -1443.491f, 108.042f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1931.148f, -1442.826f, 107.0287f;
				case 1:
					return -1930.739f, -1444.275f, 107.0287f;
				case 2:
					return -1908.915f, -1427.847f, 109.55f;
				case 3:
					return -1904.532f, -1450.989f, 109.91f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1925.655f, -1445.56f, 106.0743f;
				case 1:
					return -1914.749f, -1448.299f, 105.9343f;
				case 2:
					return -1811.719f, -1459.896f, 92.1078f;
				case 3:
					return -1890.592f, -1460.231f, 105.195f;
				case 4:
					return -1892.921f, -1462.989f, 105.4638f;
				case 5:
					return -1877.886f, -1464.966f, 101.2161f;
				case 6:
					return -1881.384f, -1467.812f, 101.9661f;
				case 7:
					return -1855.801f, -1465.375f, 97.9621f;
				case 8:
					return -1859.503f, -1473.036f, 98.5351f;
				case 9:
					return -1841.887f, -1464.376f, 97.6892f;
				case 10:
					return -1840.94f, -1468.025f, 96.9888f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1811.253f, -1457.913f, 92.7587f;
				case 1:
					return -1815.684f, -1453.909f, 94.1155f;
				case 2:
					return -1813.992f, -1457.313f, 93.0752f;
				case 3:
					return -1993.031f, -1397.892f, 116.1397f;
				case 4:
					return -1999.016f, -1408.665f, 116.3897f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1989.942f, -1400.375f, 116.9571f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1620.663f, -1350.064f, 82.9813f;
				case 1:
					return -1667.398f, -1331.911f, 83.8042f;
				case 2:
					return -1616.526f, -1344.485f, 82.8919f;
				case 3:
					return -1619.193f, -1332.992f, 82.8173f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2007.734f, -1408.224f, 117.4311f;
				case 1:
					return -2007.902f, -1428.362f, 117.0102f;
				case 2:
					return -2008.14f, -1412.758f, 118.2372f;
				case 3:
					return -1970.557f, -1411.062f, 113.8495f;
				case 4:
					return -1973.644f, -1409.961f, 113.8932f;
				case 5:
					return -2014.624f, -1432.971f, 118.1103f;
				case 6:
					return -2014.502f, -1430.372f, 118.0272f;
				case 7:
					return -1989.714f, -1396.595f, 116.9312f;
				case 8:
					return -2018.024f, -1432.755f, 119.7278f;
				case 9:
					return -2021.299f, -1413.709f, 121.8104f;
				case 10:
					return -1972.904f, -1403.989f, 116.9963f;
				case 11:
					return -1977.895f, -1405.158f, 115.6775f;
				case 12:
					return -1965.974f, -1407.249f, 115.0725f;
				case 13:
					return -2019.752f, -1446.97f, 118.4364f;
				case 14:
					return -2011.693f, -1444.175f, 116.1927f;
				case 15:
					return -2022.439f, -1438.817f, 121.8312f;
				case 16:
					return -2010.412f, -1427.418f, 117.4192f;
				case 17:
					return -2011.237f, -1419.995f, 118.4253f;
				case 18:
					return -2016.369f, -1409.486f, 119.9332f;
				case 19:
					return -2015.156f, -1437.756f, 119.2368f;
				case 20:
					return -2025.359f, -1422.175f, 122.916f;
				case 21:
					return -2016.575f, -1416.462f, 120.6227f;
				case 22:
					return -2006.493f, -1404.843f, 117.4515f;
				case 23:
					return -2014.663f, -1449.773f, 117.0358f;
				case 24:
					return -1970.346f, -1400.336f, 116.3256f;
				case 25:
					return -1975.695f, -1401.341f, 117.0114f;
				case 26:
					return -1975.801f, -1396.303f, 116.6659f;
				case 27:
					return -1966.175f, -1403.525f, 114.7108f;
				case 28:
					return -1980.034f, -1400.658f, 116.1234f;
				case 29:
					return -2038.892f, -1429.181f, 125.2623f;
				case 30:
					return -2033.038f, -1404.615f, 123.0021f;
				case 31:
					return -2044.316f, -1416.925f, 126.0421f;
				case 32:
					return -2019.802f, -1422.647f, 120.8091f;
				case 33:
					return -2011.17f, -1407.916f, 118.5437f;
				case 34:
					return -2009.638f, -1434.928f, 116.6218f;
				case 35:
					return -1986.576f, -1406.77f, 115.8409f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1903.634f, -1426.44f, 105.826f;
				case 1:
					return -1902.466f, -1430.66f, 106.4127f;
				case 2:
					return -1898.678f, -1438.863f, 104.4471f;
				case 3:
					return -1896.309f, -1446.55f, 105.7776f;
				case 4:
					return -1892.618f, -1448.84f, 104.9075f;
				case 5:
					return -1899.816f, -1434.11f, 105.6168f;
				case 6:
					return -1903.436f, -1452.956f, 105.6609f;
				case 7:
					return -1897.34f, -1443.101f, 104.9023f;
				case 8:
					return -1911.21f, -1424.03f, 106.1552f;
				case 9:
					return -1917.95f, -1430.705f, 105.6633f;
				case 10:
					return -1904.104f, -1441.18f, 104.9298f;
				case 11:
					return -1908.981f, -1432.609f, 106.3693f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1879.713f, -1468.762f, 101.8315f;
				case 1:
					return -1875.838f, -1465.933f, 101.2515f;
				case 2:
					return -1862.956f, -1465.625f, 98.7038f;
				case 3:
					return -1861.555f, -1482.477f, 99.2465f;
				case 4:
					return -1856.17f, -1473.456f, 98.101f;
				case 5:
					return -1854.931f, -1482.423f, 99.0026f;
				case 6:
					return -1850.39f, -1470.099f, 98.0379f;
				case 7:
					return -1855.05f, -1463.719f, 98.6399f;
				case 8:
					return -1872.821f, -1479.268f, 101.0575f;
				case 9:
					return -1867.349f, -1463.296f, 100.133f;
				case 10:
					return -1861.778f, -1475.618f, 99.3328f;
				case 11:
					return -1860.956f, -1468.135f, 99.5807f;
				case 12:
					return -1844.33f, -1472.83f, 98.3125f;
				case 13:
					return -1849.817f, -1479.579f, 99.0766f;
				case 14:
					return -1848.472f, -1478.13f, 99.1148f;
				case 15:
					return -1849.046f, -1464.764f, 98.1174f;
				case 16:
					return -1838.24f, -1467.535f, 96.7102f;
				case 17:
					return -1838.771f, -1463.701f, 97.1925f;
				case 18:
					return -1839.09f, -1477.565f, 98.1571f;
				case 19:
					return -1842.944f, -1467.28f, 97.2815f;
				case 20:
					return -1838.817f, -1473.585f, 98.1554f;
				case 21:
					return -1857.342f, -1483.013f, 99.2191f;
				case 22:
					return -1869.377f, -1475.552f, 100.2816f;
				case 23:
					return -1860.551f, -1470.89f, 98.716f;
				case 24:
					return -1887.412f, -1475.458f, 103.2054f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1812.871f, -1458.687f, 92.9525f;
				case 1:
					return -1815.692f, -1467.292f, 95.3901f;
				case 2:
					return -1826.485f, -1455.877f, 94.3594f;
				case 3:
					return -1820.796f, -1471.174f, 96.3376f;
				case 4:
					return -1818.982f, -1459.151f, 93.7443f;
				case 5:
					return -1825.62f, -1465.085f, 95.6378f;
				case 6:
					return -1832.121f, -1459.867f, 95.0107f;
				case 7:
					return -1830.4f, -1472.226f, 96.8018f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_777(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_778(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_779(var uParam0)
{
	return uParam0->f_862;
}

void func_780(var uParam0)
{
	if (func_1371(&iVar0))
	{
		if (func_549(iVar0, 0))
		{
			if (func_573(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_601(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_549(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_781(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1372(-1);
	}
	func_1373(1);
	set_entity_invincible(Global_35, true);
	if (!func_778(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_778(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_778(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_778(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_778(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_778(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_778(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_778(*iParam0, 4) && !func_778(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_778(*iParam0, 2048))
	{
		func_793(0, 0);
	}
	if (func_778(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_778(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_778(*iParam0, 8192))
	{
		func_1374();
	}
	if (!func_778(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_778(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_778(*iParam0, 1024))
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
		if (!func_778(*iParam0, 16))
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
						if (func_1375() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_383(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1376(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1377(2);
						func_1378(-1);
						func_1379(vVar3);
						func_1381(func_1380());
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
	if (!func_778(*iParam0, 4096))
	{
		func_1382(Global_35);
	}
	if (!func_778(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_778(*iParam0, 2097152))
	{
		if (func_1383() || _0x50f124e6ef188b22(Global_35))
		{
			func_1384(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_782(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_783(var uParam0)
{
	if (func_777(uParam0, 2048) && !func_383(func_1385(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_777(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_863(iVar1, func_1385(uParam0), func_1386(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_777(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_863(iVar3, func_1385(uParam0), func_1386(uParam0), 2, 1073741824);
		}
	}
}

void func_784(var uParam0)
{
	if ((func_777(uParam0, 268435456) && !func_383(func_1385(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1385(uParam0) };
			func_863(iVar0, vVar1, func_1387(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_785(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_383(vParam1))
	{
		func_1388(uParam0, 2048, 1);
	}
	else
	{
		func_722(uParam0, 2048);
		if (bParam5)
		{
			func_722(uParam0, -2147483648);
		}
	}
}

void func_786(var uParam0)
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
					if (!func_1389(uParam0->f_13[iVar0], 8))
					{
						if (func_663(func_1049(iVar1, 0, 1, 0)))
						{
							if (!func_1390(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_663(func_1049(iVar1, 1, 1, 0)))
						{
							if (!func_1390(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_787(var uParam0, bool bParam1)
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

void func_788(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_20() != -1;
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
			func_1146(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1391(iParam1, 29, bVar4, 1, 0);
			func_1391(iParam1, 31, bVar4, 1, 0);
			func_1391(iParam1, 30, bVar4, 1, 0);
			func_1391(iParam1, 22, bVar4, 1, 0);
			func_1391(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1086(32768) && func_1392(1108822547, 8)) && func_1393(10, iParam3))
	{
		func_1394(iParam1, 0, 1);
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
			iVar3 = func_1154(iVar1, 1);
			if (func_1392(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1393(iVar1, iParam3))
				{
				}
				else if ((func_1392(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1392(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1391(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1395(iVar3, 1, 6);
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
								func_1391(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1392(iVar3, 1))
							{
								func_1396(iVar3, 1, 6);
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

bool func_789(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1397((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_790(int iParam0)
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

int func_791(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_792(int iParam0, int iParam1)
{
	return func_1398(&uVar0, iParam0, iParam1);
}

void func_793(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_663(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1399(1);
	}
}

void func_794(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_795(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_797(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_798(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_799(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_800(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_801(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_802(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_803(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_804(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_805(var uParam0, int iParam1)
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

int func_806(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_821((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_807(var uParam0, int iParam1)
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

int func_808(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_834((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_809(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_1400(uParam0[iVar0]))
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

int func_810(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_840((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_811(var uParam0, char* sParam1)
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

int func_812(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_823((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_813(var uParam0, char* sParam1)
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

int func_814(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_825((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_815(int iParam0, int iParam1)
{
	iVar0 = func_1401(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_816(var uParam0, char* sParam1, int iParam2)
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

int func_817(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_830((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_818(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_819(var uParam0, int iParam1)
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

void func_820(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_821(var uParam0)
{
	return *uParam0 != 0;
}

void func_822(var uParam0)
{
	if (!func_852(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_818(&(uParam0->f_1), 1);
	}
}

bool func_823(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_824(var uParam0)
{
	if (!func_852(uParam0->f_3, 1))
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
		func_818(&(uParam0->f_3), 1);
	}
}

bool func_825(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_826(var uParam0)
{
	if (!func_852(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_818(&(uParam0->f_1), 1);
	}
}

bool func_827(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_828(var uParam0)
{
	if (func_852(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_1, 1))
	{
		func_1402(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_829(var uParam0)
{
	if (func_852(*uParam0, 2))
	{
		return true;
	}
	if (!func_852(*uParam0, 1))
	{
		func_1403(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_818(uParam0, 2);
		return true;
	}
	return false;
}

bool func_830(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_831(var uParam0)
{
	if (!func_852(uParam0->f_2, 1))
	{
		if (func_1404(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1405(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_291())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1005())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_818(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_832(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_833(var uParam0, int iParam1)
{
	if (!func_852(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_818(&(uParam0->f_1), 1);
	}
}

bool func_834(var uParam0)
{
	return *uParam0 != 0;
}

void func_835(var uParam0)
{
	if (!func_852(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_818(&(uParam0->f_2), 1);
	}
}

bool func_836(var uParam0)
{
	return *uParam0 != 0;
}

void func_837(var uParam0)
{
	if (!func_852(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_818(&(uParam0->f_3), 1);
	}
}

bool func_838(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_839(var uParam0)
{
	if (!func_852(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_818(&(uParam0->f_1), 1);
	}
}

bool func_840(var uParam0)
{
	return func_1400(*uParam0);
}

void func_841(var uParam0)
{
	if (!func_852(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_818(&(uParam0->f_1), 1);
	}
}

bool func_842(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_843(var uParam0)
{
	if (!func_852(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_818(&(uParam0->f_2), 1);
	}
}

bool func_844(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_845(var uParam0)
{
	if (!func_852(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_818(&(uParam0->f_1), 1);
	}
}

bool func_846(var uParam0, int iParam1, char* sParam2)
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

void func_847(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_718(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1406(uParam0, iParam1);
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
		iVar1 = func_1407(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1408(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1409(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1410(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1411(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_848(int iParam0)
{
	if (!func_176(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_849(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_870(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1412(uParam0, 0))
			{
				if (func_1413(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1414(uParam0, 1, &iVar0))
					{
					}
					if (func_1415(uParam0, 3, &cVar2))
					{
					}
					if (func_1414(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1414(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1414(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1414(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1414(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1416(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_467((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_467(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_467(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_204(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1416(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_467(uParam0->f_2243[uParam0->f_2507], 1048576);
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
	if (!func_24(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1412(uParam0, 12))
			{
				if (func_1414(uParam0, 13, &iVar0))
				{
				}
				if (func_1414(uParam0, 14, &iVar1))
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
		func_38(uParam0);
	}
	return true;
}

void func_850(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_204((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_204((*uParam0)[iVar0], 1))
		{
			func_1417((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_851(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_821((*uParam0)[iVar1]))
		{
			if (func_815((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1418((*uParam0)[iVar1]))
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
		if (func_823((*uParam1)[iVar1]))
		{
			if (func_815((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1419((*uParam1)[iVar1]))
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
		if (func_825((*uParam2)[iVar1]))
		{
			if (func_815((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1420((*uParam2)[iVar1]))
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
		if (func_827((*uParam3)[iVar1]))
		{
			if (func_815((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_828((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_815(uParam4->f_1, iParam12))
	{
		if (!func_829(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_830((*uParam5)[iVar1]))
		{
			if (func_815((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1404((*uParam5)[iVar1]))
				{
					if (!func_853((*uParam5)[iVar1]))
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
		if (func_830((*uParam5)[iVar1]))
		{
			if (func_815((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1404((*uParam5)[iVar1]))
				{
					if (func_853((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_832((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1421((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_834((*uParam6)[iVar1]))
		{
			if (func_815((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1422((*uParam6)[iVar1]))
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
		if (func_836((*uParam7)[iVar1]))
		{
			if (func_815((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1423((*uParam7)[iVar1]))
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
		if (func_838((*uParam8)[iVar1]))
		{
			if (func_815((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1424((*uParam8)[iVar1]))
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
		if (func_840((*uParam9)[iVar1]))
		{
			if (func_815((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1425((*uParam9)[iVar1]))
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
		if (func_842((*uParam10)[iVar1]))
		{
			if (func_815((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1426((*uParam10)[iVar1]))
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
		if (func_844((*uParam11)[iVar1]))
		{
			if (func_815((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1427((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_852(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_853(var uParam0)
{
	if (func_852(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_2, 1))
	{
		func_831(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_818(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_854(int iParam0)
{
	if (!func_176(iParam0))
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

bool func_855(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_486(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*iParam2) && func_245(iParam1)) && func_1428(iParam1) == *iParam2)
	{
		return true;
	}
	*iParam2 = func_1429(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*iParam2))
	{
		func_1430(uParam0, *iParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1431(iParam1);
		return true;
	}
	return false;
}

bool func_856(var uParam0)
{
	if (!func_383(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1432(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1432(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1432(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1432(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1432(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1432(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1432(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1432(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1432(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1432(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1432(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1432(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1432(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1432(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1432(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1432(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1432(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1432(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1432(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1432(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1432(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1432(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1432(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1432(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1432(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1432(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1432(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1432(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1432(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1432(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1432(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1432(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1432(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_383(uParam0->f_5417);
}

int func_857(int iParam0, var uParam1)
{
	uParam1->f_10 = func_253(uParam1->f_10);
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
		if (func_383(uParam1->f_6))
		{
		}
	}
	bVar0 = func_382();
	if (*uParam1)
	{
		if (bVar0 && !func_314((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1433(5))
			{
				func_498(5);
				func_1434(5);
				func_1378(0);
				func_1377(0);
			}
		}
	}
	if (func_1435(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_314((*Global_1835011)[37]->f_1, 1)) && !func_314((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_314((*Global_1835011)[43]->f_1, 1)) && !func_314((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_202(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_501(iVar1))
	{
		bVar3 = true;
		if (func_1436(iVar1))
		{
			bVar4 = true;
		}
		if (func_508(iVar1))
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
				func_509(uParam1->f_10);
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
			if (!func_1433(0) && func_1433(1))
			{
				func_1437(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1438())
			{
				func_1439();
			}
			func_1378(0);
			func_1377(0);
			func_1379(uParam1->f_6);
		}
	}
	if (!func_501(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1440(uParam1->f_10) == 0 || func_1441(uParam1->f_10) == 0) || func_1442(uParam1->f_10) == 0)
			{
				func_1443(uParam1->f_10);
			}
			func_1444(uParam1->f_10);
			func_1445(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_202(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_501(iVar1))
	{
		bVar3 = true;
		if (func_1436(iVar1))
		{
			bVar4 = true;
		}
		if (func_508(iVar1))
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
			if (!func_383(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1446(uParam1->f_10))
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
			Var8 = { func_1447(uParam1->f_10) };
			Var10 = { func_1448() };
			func_1449(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_494(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1450(uParam1->f_10);
		if (uParam1->f_2 && !func_383(uParam1->f_6))
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
	func_493(uParam1->f_10);
	if (func_494(uParam1->f_10))
	{
		iVar16 = func_249(uParam1->f_10);
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

bool func_858(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_859(int iParam0)
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

bool func_860(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1451(iParam1))
	{
		return false;
	}
	iVar0 = func_1452(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_861(var uParam0, bool bParam1)
{
	if (!is_entity_dead(uParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(uParam0->f_5411))
		{
			set_entity_as_mission_entity(uParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(uParam0->f_5411, -1)) && !func_120(uParam0, 32768))
		{
			clear_ped_tasks(uParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
		{
			set_ped_relationship_group_hash(uParam0->f_5411, 1030835986);
		}
		else
		{
			set_ped_relationship_group_hash(uParam0->f_5411, get_ped_relationship_group_default_hash(player_ped_id()));
			set_entity_can_be_damaged(uParam0->f_5411, false);
		}
		if (get_ped_config_flag(uParam0->f_5411, 136, true))
		{
			set_ped_config_flag(uParam0->f_5411, 136, false);
		}
	}
}

float func_862(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_863(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1453(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1454(iParam0))
	{
		if (func_859(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_378(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_863(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_863(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_378(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_378(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_378(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_378(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_378(iParam5, 129))
	{
		if (func_378(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_378(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_378(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_378(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1454(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_378(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_378(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_864(int iParam0, int iParam1, int iParam2)
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

bool func_865(var uParam0, int iParam1)
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
			func_781(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1457(uParam0, 2);
			break;
		case 2:
			if (func_1459(uParam0))
			{
				func_1460(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1457(uParam0, 3);
			}
			break;
		case 3:
			if (func_871(&(uParam0->f_3)) >= 1f)
			{
				func_1457(uParam0, 4);
			}
			break;
		case 4:
			if (!func_29())
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (does_cam_exist(uParam0->f_2))
				{
					destroy_cam(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1461(&iVar1, 0);
			release_script_audio_bank();
			func_1457(uParam0, 0);
			return true;
	}
	return false;
}

void func_866(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1462(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_867(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1463(uParam0, iVar0) };
	if (func_1465(&(uParam0->f_10792), Var1, func_1464(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1466(&(uParam0->f_10792), 524288))
		{
			func_367(uParam0, 67108864);
			func_1467(&(uParam0->f_10792), 524288);
		}
		func_1468(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_868(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1469(uParam0);
		func_1470(uParam0);
		return true;
	}
	if (func_1471(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_888(uParam0);
	}
	if (func_29())
	{
		if (!func_8(uParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(uParam0->f_609.f_2))
			{
				destroy_cam(uParam0->f_609.f_2, false);
			}
			func_51(&(uParam0->f_10792));
			func_1472(uParam0);
			func_444(uParam0, 524288);
			func_1473(uParam0);
			func_149(uParam0, 30f);
			func_150(uParam0, 40f);
			func_99(uParam0, 262144);
		}
		if (!func_8(uParam0, 524288) && _0xef324e9550a394d5(uParam0->f_7375.f_804))
		{
			func_99(uParam0, 524288);
		}
	}
	return false;
}

bool func_869(var uParam0)
{
	iVar0 = 1;
	if (!func_1474(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1475(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1476(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_413(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_848(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_870(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_870(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1477(uParam0);
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

float func_871(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_469(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_521() - uParam0->f_1);
}

bool func_872()
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

void func_873(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_874(var uParam0)
{
	if (!bLocal_186)
	{
		if (!does_entity_exist(iLocal_109))
		{
			iLocal_109 = func_1478(uParam0, "AlbertCakeEsquire", 1);
			if (does_entity_exist(iLocal_109))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_156))
		{
			iLocal_156 = func_1479(uParam0, "p_pen01x", 1);
			if (does_entity_exist(iLocal_156))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_157))
		{
			iLocal_157 = func_1479(uParam0, "p_amb_clipboard_01", 1);
			if (does_entity_exist(iLocal_157))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_158))
		{
			iLocal_158 = func_1479(uParam0, "p_cs_book03x", 1);
			if (does_entity_exist(iLocal_158))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_159))
		{
			iLocal_159 = func_1479(uParam0, "p_cs_catalogue01x", 1);
			if (does_entity_exist(iLocal_159))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_160))
		{
			iLocal_160 = func_1479(uParam0, "P_CS_LETTER03X", 1);
			if (does_entity_exist(iLocal_160))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_161))
		{
			iLocal_161 = func_1479(uParam0, "p_cigarbox01x", 1);
			if (does_entity_exist(iLocal_161))
			{
				return false;
			}
		}
		if (!does_entity_exist(iLocal_110))
		{
			iLocal_110 = func_1478(uParam0, "CharlesSmith", 1);
			if (does_entity_exist(iLocal_110))
			{
				func_1480(iLocal_110);
				freeze_entity_position(iLocal_110, false);
				return false;
			}
		}
		if (!does_entity_exist(iLocal_114))
		{
			iLocal_114 = func_1478(uParam0, "A_M_M_BLWLABORER_01", 1);
			if (does_entity_exist(iLocal_114))
			{
				func_1480(iLocal_114);
				func_1217(iLocal_114, func_210(0, 3), 2, 1073741824);
				freeze_entity_position(iLocal_114, false);
				return false;
			}
		}
		if (!does_entity_exist(iLocal_115))
		{
			iLocal_115 = func_1478(uParam0, "A_M_M_BLWLABORER_01^1", 1);
			if (does_entity_exist(iLocal_115))
			{
				func_1480(iLocal_115);
				func_1217(iLocal_114, func_210(0, 4), 2, 1073741824);
				freeze_entity_position(iLocal_115, false);
				return false;
			}
		}
		if (!does_entity_exist(iLocal_111))
		{
			iLocal_111 = func_1478(uParam0, "MRDEVON", 1);
			if (does_entity_exist(iLocal_111))
			{
				func_1480(iLocal_111);
				func_1217(iLocal_114, func_210(0, 3), 2, 1073741824);
				freeze_entity_position(iLocal_111, false);
				set_entity_invincible(iLocal_111, false);
				return false;
			}
		}
		if (!does_entity_exist(iLocal_112))
		{
			iLocal_112 = func_1478(uParam0, "MRWAYNE", 1);
			if (does_entity_exist(iLocal_112))
			{
				func_1480(iLocal_112);
				func_1217(iLocal_114, func_210(0, 4), 2, 1073741824);
				freeze_entity_position(iLocal_112, false);
				set_entity_invincible(iLocal_112, false);
				return false;
			}
		}
		if (!does_entity_exist(iLocal_118))
		{
			iLocal_118 = func_1481(uParam0, "wagon02x^1", 1);
			if (does_entity_exist(iLocal_118))
			{
				func_1480(iLocal_118);
				return false;
			}
		}
		if (!does_entity_exist(iLocal_126))
		{
			iLocal_126 = func_1481(uParam0, "wagon02x", 1);
			if (does_entity_exist(iLocal_126))
			{
				func_1480(iLocal_126);
				return false;
			}
		}
		if (!does_entity_exist(&(iLocal_142[0])))
		{
			iLocal_142[0] = func_1479(uParam0, "p_lumber09_piece01x", 1);
			if (does_entity_exist(&(iLocal_142[0])))
			{
				func_1480(&(iLocal_142[0]));
				return false;
			}
		}
		if (!does_entity_exist(&(iLocal_142[1])))
		{
			iLocal_142[1] = func_1479(uParam0, "p_lumber09_piece01x^1", 1);
			if (does_entity_exist(&(iLocal_142[1])))
			{
				func_1480(&(iLocal_142[1]));
				return false;
			}
		}
		if (!does_entity_exist(&(iLocal_142[2])))
		{
			iLocal_142[2] = func_1479(uParam0, "p_lumber09_piece01x^2", 1);
			if (does_entity_exist(&(iLocal_142[2])))
			{
				func_1480(&(iLocal_142[2]));
				return false;
			}
		}
		if (!does_entity_exist(&(iLocal_142[3])))
		{
			iLocal_142[3] = func_1479(uParam0, "p_lumber09_piece01x^3", 1);
			if (does_entity_exist(&(iLocal_142[3])))
			{
				func_1480(&(iLocal_142[3]));
				return false;
			}
		}
		if (!does_entity_exist(&(iLocal_142[4])))
		{
			iLocal_142[4] = func_1479(uParam0, "p_lumber09_piece01x^4", 1);
			if (does_entity_exist(&(iLocal_142[4])))
			{
				func_1480(&(iLocal_142[4]));
				return false;
			}
		}
		if (!does_entity_exist(&(iLocal_142[5])))
		{
			iLocal_142[5] = func_1479(uParam0, "p_lumber09_piece01x^5", 1);
			if (does_entity_exist(&(iLocal_142[5])))
			{
				func_1480(&(iLocal_142[5]));
				return false;
			}
		}
		bLocal_186 = true;
	}
	return true;
}

bool func_875(var uParam0)
{
	if (func_33(uParam0) == 0)
	{
		if (!func_1482())
		{
			return false;
		}
		if (!func_1483(uParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_876(var uParam0)
{
	if (func_33(uParam0) > 0 && func_33(uParam0) <= 2)
	{
		if (!func_1484())
		{
			return false;
		}
	}
	return true;
}

bool func_877(var uParam0)
{
	if (func_33(uParam0) == 0)
	{
		if (!func_120(uParam0, 4))
		{
			if (!does_entity_exist(iLocal_156))
			{
				if (has_model_loaded(iLocal_25))
				{
					iLocal_156 = create_object(iLocal_25, vLocal_191, true, true, false, false, true);
					if (does_entity_exist(iLocal_156))
					{
						set_entity_invincible(iLocal_156, true);
						set_entity_collision(iLocal_156, false, false);
						freeze_entity_position(iLocal_156, true);
					}
				}
				return false;
			}
			if (!does_entity_exist(iLocal_157))
			{
				if (has_model_loaded(iLocal_26))
				{
					iLocal_157 = create_object(iLocal_26, vLocal_191, true, true, false, false, true);
					if (does_entity_exist(iLocal_157))
					{
						set_entity_invincible(iLocal_157, true);
						set_entity_collision(iLocal_157, false, false);
						freeze_entity_position(iLocal_157, true);
					}
				}
				return false;
			}
			if (!does_entity_exist(iLocal_158))
			{
				if (has_model_loaded(iLocal_27))
				{
					iLocal_158 = create_object(iLocal_27, vLocal_191, true, true, false, false, true);
					if (does_entity_exist(iLocal_158))
					{
						set_entity_invincible(iLocal_158, true);
						set_entity_collision(iLocal_158, false, false);
						freeze_entity_position(iLocal_158, true);
					}
				}
				return false;
			}
			if (!does_entity_exist(iLocal_159))
			{
				if (has_model_loaded(iLocal_28))
				{
					iLocal_159 = create_object(iLocal_28, vLocal_191, true, true, false, false, true);
					if (does_entity_exist(iLocal_159))
					{
						set_entity_invincible(iLocal_159, true);
						set_entity_collision(iLocal_159, false, false);
						freeze_entity_position(iLocal_159, true);
					}
				}
				return false;
			}
			if (!does_entity_exist(iLocal_160))
			{
				if (has_model_loaded(iLocal_29))
				{
					iLocal_160 = create_object(iLocal_29, vLocal_191, true, true, false, false, true);
					if (does_entity_exist(iLocal_160))
					{
						set_entity_invincible(iLocal_160, true);
						set_entity_collision(iLocal_160, false, false);
						freeze_entity_position(iLocal_160, true);
					}
				}
				return false;
			}
			if (!does_entity_exist(iLocal_161))
			{
				if (has_model_loaded(iLocal_30))
				{
					iLocal_161 = create_object(iLocal_30, vLocal_191, true, true, false, false, true);
					if (does_entity_exist(iLocal_161))
					{
						set_entity_invincible(iLocal_161, true);
						set_entity_collision(iLocal_161, false, false);
						freeze_entity_position(iLocal_161, true);
					}
				}
				return false;
			}
			if (!has_model_loaded(iLocal_42))
			{
				return false;
			}
			else
			{
				if (!does_entity_exist(&(iLocal_142[0])))
				{
					iLocal_142[0] = create_object(iLocal_42, vLocal_194, true, true, false, false, true);
					return false;
				}
				if (!does_entity_exist(&(iLocal_142[1])))
				{
					iLocal_142[1] = create_object(iLocal_42, vLocal_194, true, true, false, false, true);
					return false;
				}
				if (!does_entity_exist(&(iLocal_142[2])))
				{
					iLocal_142[2] = create_object(iLocal_42, vLocal_194, true, true, false, false, true);
					return false;
				}
				if (!does_entity_exist(&(iLocal_142[3])))
				{
					iLocal_142[3] = create_object(iLocal_42, vLocal_194, true, true, false, false, true);
					return false;
				}
				if (!does_entity_exist(&(iLocal_142[4])))
				{
					iLocal_142[4] = create_object(iLocal_42, vLocal_194, true, true, false, false, true);
					return false;
				}
				if (!does_entity_exist(&(iLocal_142[5])))
				{
					iLocal_142[5] = create_object(iLocal_42, vLocal_194, true, true, false, false, true);
					return false;
				}
			}
		}
	}
	return true;
}

bool func_878(var uParam0)
{
	if (func_33(uParam0) == 1 || func_33(uParam0) == 2)
	{
		if (!does_entity_exist(iLocal_162))
		{
			if (has_model_loaded(iLocal_31))
			{
				iLocal_162 = create_object(iLocal_31, vLocal_197, true, true, false, false, true);
			}
			return false;
		}
		if (!does_entity_exist(iLocal_163))
		{
			if (has_model_loaded(iLocal_32))
			{
				iLocal_163 = create_object(iLocal_32, vLocal_197, true, true, false, false, true);
			}
			return false;
		}
		else if (is_entity_visible(iLocal_163))
		{
			set_entity_completely_disable_collision(iLocal_163, false, false);
			set_entity_visible(iLocal_163, false);
		}
		if (!does_entity_exist(iLocal_164))
		{
			if (has_model_loaded(iLocal_34))
			{
				iLocal_164 = create_object(iLocal_34, vLocal_197, true, true, false, false, true);
			}
			return false;
		}
		if (!does_entity_exist(iLocal_165))
		{
			if (has_model_loaded(iLocal_35))
			{
				iLocal_165 = create_object(iLocal_35, vLocal_206, true, true, false, false, true);
			}
			return false;
		}
		if (!does_entity_exist(iLocal_166))
		{
			if (has_model_loaded(iLocal_36))
			{
				iLocal_166 = create_object(iLocal_36, vLocal_197, true, true, false, false, true);
			}
			return false;
		}
		if (!does_entity_exist(iLocal_167))
		{
			if (has_model_loaded(iLocal_37))
			{
				iLocal_167 = create_object(iLocal_37, vLocal_197, true, true, false, false, true);
			}
			return false;
		}
	}
	return true;
}

bool func_879(var uParam0)
{
	if (func_33(uParam0) > 7)
	{
		if (!does_entity_exist(iLocal_168))
		{
			if (has_model_loaded(iLocal_38))
			{
				iLocal_168 = create_object(iLocal_38, vLocal_200, true, true, false, false, true);
			}
			return false;
		}
	}
	return true;
}

bool func_880(var uParam0)
{
	if (!func_1485(uParam0))
	{
		return false;
	}
	return true;
}

bool func_881(var uParam0)
{
	if (func_33(uParam0) >= 1)
	{
		if (!does_entity_exist(iLocal_169))
		{
			if (has_model_loaded(iLocal_50))
			{
				iLocal_169 = create_object(iLocal_50, func_375(2, 6), true, true, false, false, true);
				_0x7e3f546acfe6c8d9(iLocal_169);
				set_entity_no_collision_entity(iLocal_169, iLocal_118, false);
				set_entity_no_collision_entity(iLocal_169, iLocal_136, false);
				set_entity_proofs(iLocal_169, 9, false);
			}
			return false;
		}
	}
	if (func_33(uParam0) >= 2)
	{
		if (!does_entity_exist(iLocal_171))
		{
			if (has_model_loaded(iLocal_51))
			{
				iLocal_171 = create_object(iLocal_51, func_375(3, 6), true, true, false, false, true);
				func_1486(iLocal_171, -2004.51f, -1413.93f, 116.6f, 0f, -8f, 173.4f);
				set_entity_lod_dist(iLocal_171, 200);
			}
			return false;
		}
		if (!does_entity_exist(iLocal_172))
		{
			if (has_model_loaded(iLocal_52))
			{
				iLocal_172 = create_object(iLocal_52, func_375(3, 7), true, true, false, false, true);
				func_1486(iLocal_172, -1989.08f, -1414.86f, 115.65f, 6f, 7.5f, 44.27f);
				set_entity_lod_dist(iLocal_172, 200);
			}
			return false;
		}
	}
	if (func_33(uParam0) >= 4)
	{
		if (!does_entity_exist(iLocal_173))
		{
			if (has_model_loaded(iLocal_53))
			{
				iLocal_173 = create_object(iLocal_53, func_375(4, 8), true, true, false, false, true);
				func_1486(iLocal_173, -1918.89f, -1440.39f, 104.3f, 10f, -6f, -180f);
			}
			return false;
		}
	}
	return true;
}

bool func_882(var uParam0)
{
	if (!func_1487(uParam0))
	{
		return false;
	}
	if (!func_1488(uParam0))
	{
		return false;
	}
	if (!func_1489(uParam0))
	{
		return false;
	}
	return true;
}

bool func_883()
{
	_text_database_request("bch2aud");
	return _text_database_has_loaded("bch2aud");
}

void func_884(var uParam0)
{
	func_1491(uParam0, 245887);
	func_1493(uParam0, 245920);
	func_1495(uParam0, 246040);
}

void func_885(var uParam0)
{
	if (func_33(uParam0) > 2 && func_33(uParam0) < 7)
	{
		func_1244(0.6f);
	}
	func_1496(uParam0);
	func_1497(uParam0);
	func_1498(uParam0);
	func_1499();
	func_1500();
	func_1501(-2000794023);
	func_1501(-722030448);
	func_1501(2111816145);
	func_1502(471442861, 0, 1f, 1, 0, 0, 1, 0);
	func_1502(410623597, 1, 0f, 0, 0, 0, 1, 0);
	func_1502(1333038182, 1, 0f, 0, 0, 0, 1, 0);
	func_435(38, 0);
}

void func_886()
{
	Local_1570[0]->f_1 = "MAR7_SK5ATTACK";
	Local_1570[0]->f_2 = "SAV_PED6";
	Local_1570[0]->f_3 = 3;
	Local_1570[1]->f_1 = "MAR7_SK5FIGHT1";
	Local_1570[1]->f_2 = "SAV_PED6";
	Local_1570[1]->f_3 = 2;
	Local_1570[2]->f_1 = "MAR7_SK6FIGHT1";
	Local_1570[2]->f_2 = "SAV_PED5";
	Local_1570[2]->f_3 = 2;
	Local_1586[0]->f_1 = "MAR7_SK5FIGHT2";
	Local_1586[0]->f_2 = "SAV_PED6";
	Local_1586[0]->f_3 = 3;
	Local_1586[1]->f_1 = "MAR7_SK6FIGHT2";
	Local_1586[1]->f_2 = "SAV_PED5";
	Local_1586[1]->f_3 = 3;
	Local_1597[0]->f_1 = "MAR7_SK6WOODS";
	Local_1597[0]->f_2 = "SAV_PED5";
	Local_1597[0]->f_3 = 3;
	Local_1597[1]->f_1 = "MAR7_SK5WOODS";
	Local_1597[1]->f_2 = "SAV_PED6";
	Local_1597[1]->f_3 = 3;
	Local_1597[2]->f_1 = "MAR7_SK5TAUNT";
	Local_1597[2]->f_2 = "SAV_PED6";
	Local_1597[2]->f_3 = 3;
	Local_1613[0]->f_1 = "MAR7_SK6VSJOHN";
	Local_1613[0]->f_2 = "SAV_PED5";
	Local_1613[0]->f_3 = 2;
	func_1503();
}

void func_887(var uParam0)
{
	func_1504();
	func_1505(uParam0);
	func_1506(uParam0);
	func_1507(0);
	if (func_33(uParam0) > 1 && func_33(uParam0) < 8)
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_1508(uParam0);
}

void func_888(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1509(uParam0);
}

void func_889(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_200())
			{
				if (func_871(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_207(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_890(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1510(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1511();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1512(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_891(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(uParam0, 256))
	{
		return;
	}
	if (!func_8(uParam0, 1048576))
	{
		if (func_225() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_225() && !func_54())
	{
		func_444(uParam0, 1048576);
	}
	if (!func_8(uParam0, 134217728))
	{
		if ((func_8(uParam0, 1048576) && !func_121(uParam0, func_33(uParam0), 524288)) && !func_121(uParam0, func_33(uParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_99(uParam0, 134217728);
			}
		}
	}
	else if ((!func_8(uParam0, 1048576) || func_121(uParam0, func_33(uParam0), 524288)) || func_121(uParam0, func_33(uParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_444(uParam0, 134217728);
		}
	}
}

void func_892(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(uParam0, func_33(uParam0), 1) && !func_121(uParam0, func_33(uParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_893(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_894(var uParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = get_itemset_size(iLocal_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iLocal_14));
		if (does_entity_exist(iVar3) && is_entity_dead(iVar3))
		{
			remove_from_itemset(iVar3, iLocal_14);
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
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (get_itemset_size(iLocal_14) - 1);
	}
}

int func_895(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_241(uParam0->f_5423[iVar0]))
		{
			func_1513(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_896(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1514(iVar0))
	{
		return false;
	}
	iVar1 = func_1515(iParam2);
	if (!func_1516(iVar1))
	{
		return false;
	}
	if (!func_1517(uParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_1[iVar0][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

int func_897(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_898(var uParam0, int iParam1)
{
	return 1;
}

void func_899(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_207(&(uParam0->f_603));
	}
}

void func_900(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_901(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_871(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_242(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_243(uParam0->f_5421))
		{
			iVar2 = func_244(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1518(uParam0->f_5421, iVar1);
					if (!is_entity_dead(iVar3) && !_0xa0bc8faed8cfeb3c(iVar3))
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
						iVar5 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar2), iVar4);
						if (!is_entity_dead(iVar5))
						{
							if (!_0xa0bc8faed8cfeb3c(iVar5))
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
	while (iVar1 < get_itemset_size(iLocal_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, iLocal_14);
		iVar7 = _get_entity_from_item(iVar6);
		if (does_entity_exist(iVar7))
		{
			if (is_entity_a_ped(iVar7))
			{
				iVar8 = get_ped_index_from_entity_index(iVar7);
				if (!is_entity_dead(iVar8) && !_0xa0bc8faed8cfeb3c(iVar8))
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
					iVar10 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar7), iVar9);
					if (!is_entity_dead(iVar10))
					{
						if (!_0xa0bc8faed8cfeb3c(iVar10))
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

float func_902(var uParam0)
{
	return func_871(&(uParam0->f_603));
}

bool func_903(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_904(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_896(uParam0, iParam1, 4))
	{
		if (func_33(uParam0) != 25 && func_33(uParam0) != 26)
		{
			if (!func_8(uParam0, 512) && !func_120(uParam0, 4))
			{
				func_36(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1519(uParam0);
		if (func_1520(uParam0))
		{
			func_1521(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_444(uParam0, 524288);
		func_1522(&(uParam0->f_7375), 4);
		if (func_1510(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1511();
		}
		return true;
	}
	return false;
}

void func_905(var uParam0)
{
	func_1523(uParam0);
	if (func_121(uParam0, func_33(uParam0), 2))
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

bool func_906(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_867(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_444(uParam0, 2097152);
			func_252(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_898(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1463(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_867(uParam0))
			{
				func_444(uParam0, 2097152);
				func_868(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_868(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_867(uParam0))
		{
			func_444(uParam0, 2097152);
			func_1470(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_868(uParam0, Var0);
	}
	return true;
}

bool func_907(var uParam0)
{
	return func_1524(&(uParam0->f_7375));
}

void func_908(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1525(uParam0))
		{
			func_424(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1526(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_909(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_241(uParam0->f_5423[iVar1]))
		{
			if (func_1527(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1528(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_910(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1529(uParam0))
		{
			func_424(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1526(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_911(var uParam0)
{
	switch (func_1530(&iVar0))
	{
		case 1:
			func_1531(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_177(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_912(var uParam0, int iParam1)
{
	if (func_8(uParam0, 4194304))
	{
		return false;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_913(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1469(uParam0);
		func_444(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1463(uParam0, iParam1) };
	if (func_1532(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_914(var uParam0, int iParam1)
{
	func_1533(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_212(uParam0, iParam1));
}

void func_915(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_900(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_444(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_444(uParam0, 4);
		func_444(uParam0, 8192);
		func_444(uParam0, 536870912);
		func_252(uParam0, 4);
		func_65(0);
		func_64(0);
		func_444(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1534(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_367(uParam0, 524288);
		}
		if (func_20() == 0)
		{
			if (_0xb655db7582aec805(Global_35))
			{
				func_21(0);
				_0xf6262491c7704a63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1535(1, 1);
			}
		}
	}
}

void func_916(bool bParam0)
{
	if (!func_184(0, 0, 1) || bParam0)
	{
		iVar0 = func_1003();
		iVar1 = func_1006(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1536(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1536(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_917(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1537(bParam1, bParam2, bParam3);
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

var func_918(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1538(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1539(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1538(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_919(var uParam0)
{
	return true;
}

bool func_920(var uParam0)
{
	return true;
}

int func_921(var uParam0)
{
	return 1;
}

void func_922(var uParam0, int iParam1)
{
	if (func_1540(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_923(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1541(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1542(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1543();
		}
		else
		{
			func_1544(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1545();
	}
}

int func_924(int iParam0, int iParam1)
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

bool func_925(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_926(int iParam0, bool bParam1)
{
	if (!func_925(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1546(iParam0, 1);
	}
	else
	{
		func_1547(iParam0, 1);
	}
	func_1549(func_1548(iParam0), bParam1);
}

void func_927(var uParam0)
{
	if (_0x43e4da469541a9c9(*uParam0))
	{
		_0x3972f78a78b5d9df(*uParam0);
	}
}

void func_928()
{
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(player_id());
	}
	if (does_group_exist(iLocal_238))
	{
		remove_group(iLocal_238);
	}
}

void func_929(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_1550((*uParam0)[iVar0], 1, 0, 1);
		}
		else
		{
			func_439((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_930()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_142 - 1))
	{
		func_440(iLocal_142[iVar0]);
		iVar0++;
	}
}

void func_931()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_149 - 1))
	{
		func_440(iLocal_149[iVar0]);
		iVar0++;
	}
}

void func_932(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_933()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1551(iVar0, 128))
		{
			func_1552(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_934()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1551(iVar0, 128) && func_1551(iVar0, 1))
		{
			func_1552(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_935(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_936()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_1553(iVar0, 16777216))
		{
			if (!func_1554(iVar0))
			{
				func_1555(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_937(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_938(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_522(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_522(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_522(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_522(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_522(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_522(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_522(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

bool func_939(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_940(int iParam0)
{
	iVar0 = func_447(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1556(iVar0);
}

int func_941(int iParam0, int iParam1)
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
			func_1557(iVar2);
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

void func_942()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_943(int iParam0, int iParam1)
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

int func_944(bool bParam0)
{
	if (func_20() == -1)
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

int func_945(int iParam0)
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

void func_946(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_947(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_948(int iParam0, int iParam1)
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
			func_1558((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1558(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_177(&(Global_1898164->f_1[0])))
	{
		func_189(&(Global_1898164->f_1[0]), 3);
	}
}

void func_949(int iParam0, int iParam1, bool bParam2)
{
	if (!func_465(iParam0))
	{
		return;
	}
	func_1559(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_950(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_951(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_952(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_953()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_954(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1560(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_955(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -122f;
				case 1:
					return 61.7726f;
				case 2:
					return 58.3239f;
				case 3:
					return 430.3239f;
				case 4:
					return 84.3239f;
				case 5:
					return 180.3239f;
				case 6:
					return 176.3239f;
				case 7:
					return 127.3046f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 66.0273f;
				case 1:
					return 99.602f;
				case 2:
					return 71.602f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 8.2742f;
				case 1:
					return 12.92f;
				case 2:
					return 12.27f;
				case 3:
					return 16.81f;
				case 4:
					return -87.3675f;
				case 5:
					return 105.8824f;
				case 6:
					return -133.3675f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 81.2555f;
				case 1:
					return 55.4193f;
				case 2:
					return 6.4362f;
				case 3:
					return -40.94f;
				case 4:
					return 12.4362f;
				case 5:
					return -45.23f;
				case 6:
					return 173.2032f;
				case 7:
					return -315.4533f;
				case 8:
					return 83.865f;
				case 9:
					return 0.6902f;
				case 10:
					return 81.2555f;
				case 11:
					return -25.3098f;
				case 12:
					return 334.0914f;
				case 13:
					return 207.12f;
				case 14:
					return 204.6901f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 240.2561f;
				case 1:
					return -105.9133f;
					Jump @902; //curOff = 800
					return -7.1779f;
					Jump @902; //curOff = 811
					return 55.8781f;
					Jump @902; //curOff = 822
					return 332.8221f;
					Jump @902; //curOff = 833
					return 332.8221f;
					Jump @902; //curOff = 844
					return 335.9842f;
					Jump @902; //curOff = 855
					return 338.1799f;
					Jump @902; //curOff = 866
					return -176.2665f;
					Jump @902; //curOff = 877
					return 274.183f;
					Jump @902; //curOff = 888
					return 272.3097f;
					Jump @2806; //curOff = 902
					switch (iParam1)
					{
						case 0:
							return 290.4375f;
						case 1:
							return 291.083f;
						case 2:
							return 107.274f;
						case 3:
							return 65.924f;
					}
					Jump @2806; //curOff = 981
					switch (iParam1)
					{
						case 0:
							return 246.8252f;
						case 1:
							return 216.4993f;
						case 2:
							return 160.2f;
						case 3:
							return 254.0301f;
						case 4:
							return 225.8318f;
						case 5:
							return 230.1153f;
						case 6:
							return 228.1153f;
						case 7:
							return 277.3927f;
						case 8:
							return 241.1541f;
						case 9:
							return 288.4877f;
						case 10:
							return 265.9754f;
					}
					Jump @2806; //curOff = 1179
					switch (iParam1)
					{
						case 0:
							return 60.2652f;
						case 1:
							return 231.2299f;
						case 2:
							return 379.8079f;
						case 3:
							return -41.5638f;
						case 4:
							return -23.5638f;
					}
					Jump @2806; //curOff = 1275
					switch (iParam1)
					{
						case 0:
							return 28.2766f;
					}
					Jump @2806; //curOff = 1303
					switch (iParam1)
					{
						case 0:
							return 92.4226f;
						case 1:
							return 327.4801f;
						case 2:
							return 144.8294f;
						case 3:
							return 188.9863f;
					}
					Jump @2806; //curOff = 1382
					switch (iParam1)
					{
						case 0:
							return 313.0666f;
						case 1:
							return 301.4308f;
						case 2:
							return 229.5843f;
						case 3:
							return 125.3014f;
						case 4:
							return 126.614f;
						case 5:
							return 297.2525f;
						case 6:
							return 261.5789f;
						case 7:
							return 194.6958f;
						case 8:
							return 290.0192f;
						case 9:
							return 257.5793f;
						case 10:
							return 147.0597f;
						case 11:
							return 167.598f;
						case 12:
							return 126.6123f;
						case 13:
							return 288.727f;
						case 14:
							return 306.1181f;
						case 15:
							return 296.7022f;
						case 16:
							return 287.2451f;
						case 17:
							return 250.431f;
						case 18:
							return 267.0461f;
						case 19:
							return 281.2749f;
						case 20:
							return 290.8905f;
						case 21:
							return 251.6667f;
						case 22:
							return 221.4139f;
						case 23:
							return 320.2209f;
						case 24:
							return 144.9486f;
						case 25:
							return 165.481f;
						case 26:
							return 158.3912f;
						case 27:
							return 143.6593f;
						case 28:
							return 179.5738f;
						case 29:
							return 278.6595f;
						case 30:
							return 237.5849f;
						case 31:
							return 269.4312f;
						case 32:
							return 268.384f;
						case 33:
							return 226.593f;
						case 34:
							return 300.2757f;
						case 35:
							return 219.2414f;
					}
					Jump @2806; //curOff = 2005
					switch (iParam1)
					{
						case 0:
							return 120.0636f;
						case 1:
							return 129.7977f;
						case 2:
							return 98.9353f;
						case 3:
							return 80.026f;
						case 4:
							return 102.724f;
						case 5:
							return 109.5364f;
						case 6:
							return 51.2812f;
						case 7:
							return 87.9034f;
						case 8:
							return 166.4955f;
						case 9:
							return 144.3627f;
						case 10:
							return 112.3365f;
						case 11:
							return 135.213f;
					}
					Jump @2806; //curOff = 2220
					switch (iParam1)
					{
						case 0:
							return 66.9996f;
						case 1:
							return 74.8487f;
						case 2:
							return 78.2584f;
						case 3:
							return 55.6701f;
						case 4:
							return 73.156f;
						case 5:
							return 72.4125f;
						case 6:
							return 77.5728f;
						case 7:
							return 79.156f;
						case 8:
							return 55.2789f;
						case 9:
							return 101.3921f;
						case 10:
							return 61.2679f;
						case 11:
							return 87.3982f;
						case 12:
							return 62.4802f;
						case 13:
							return 53.9649f;
						case 14:
							return 57.9186f;
						case 15:
							return 110.7591f;
						case 16:
							return 105.8066f;
						case 17:
							return 110.7008f;
						case 18:
							return 71.1094f;
						case 19:
							return 99.6638f;
						case 20:
							return 64.2774f;
						case 21:
							return -33.1604f;
						case 22:
							return 39.5246f;
						case 23:
							return 81.9527f;
						case 24:
							return 14.0937f;
					}
					Jump @2806; //curOff = 2656
					switch (iParam1)
					{
						case 0:
							return 95.3275f;
						case 1:
							return 84.9023f;
						case 2:
							return 130.4579f;
						case 3:
							return 81.6102f;
						case 4:
							return 160.68f;
						case 5:
							return 94.4234f;
						case 6:
							return 139.2514f;
						case 7:
							return 74.835f;
					}
					return 0f;
				}

void func_956(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1561();
	}
	else
	{
		return;
	}
	func_1562();
	Global_40.f_9.f_14 = func_272();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1563())
		{
			func_358(Global_1310720->f_1);
		}
		else if (func_1564() == func_359(Global_36, 1) && func_1565() != 2)
		{
			func_358(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_358(Global_36);
		}
		func_1566(Global_36, &vVar0, &uVar4);
		if (!func_1563())
		{
			if (func_1567(vVar0, Global_36) < func_1567(Global_40.f_9.f_7, Global_36))
			{
				func_358(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_359(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1566(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_216(Global_1935630, 8192);
	}
	func_1568();
}

bool func_957(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_241(uParam0->f_5423[iVar0]))
		{
			if (&uParam0->f_5423[iVar0] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_958(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_241(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_959(int iParam0, int iParam1, bool bParam2)
{
	if (!func_960(iParam0))
	{
		return;
	}
	func_1569(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_960(int iParam0)
{
	return iParam0 > -1;
}

bool func_961(int iParam0, int iParam1)
{
	return (*iParam0 && iParam1) != 0;
}

void func_962(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_960(iParam0))
		{
			return;
		}
	}
	func_1570(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_963(int iParam0)
{
	func_962(iParam0, 36, 1);
}

void func_964(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_960(iParam0))
		{
			return;
		}
	}
	func_1570(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_965(int iParam0, bool bParam1)
{
	if (!func_486(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1571(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_966(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_960(iParam0))
		{
			return false;
		}
	}
	func_1570(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_967(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_486(iParam0))
	{
		iVar1 = func_523(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1572(iParam0);
		}
	}
	if (func_966(iParam0, 5, 1))
	{
		set_ped_config_flag(func_523(iParam0), 137, true);
	}
}

void func_968(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_960(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_964(iParam0, 50, 1);
		func_964(iParam0, 48, 1);
		func_964(iParam0, 49, 1);
		func_964(iParam0, 51, 1);
		func_964(iParam0, 52, 1);
		func_964(iParam0, 54, 1);
		func_964(iParam0, 55, 1);
	}
	else
	{
		func_962(iParam0, 50, 1);
		func_962(iParam0, 48, 1);
		func_962(iParam0, 49, 1);
		func_962(iParam0, 51, 1);
		if (bParam3)
		{
			func_962(iParam0, 54, 1);
		}
		else
		{
			func_964(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_962(iParam0, 52, 1);
			if (bParam3)
			{
				func_962(iParam0, 55, 1);
			}
		}
		else
		{
			func_964(iParam0, 52, 1);
			if (!bParam3)
			{
				func_964(iParam0, 55, 1);
			}
		}
	}
}

void func_969(int iParam0, bool bParam1)
{
	if (!func_960(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_523(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_523(iParam0), 204, false);
	}
}

void func_970(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_486(iParam0))
	{
		return;
	}
	if (func_487(iParam0))
	{
		if (!func_245(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_966(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_965(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_523(iParam0);
	if (((does_entity_exist(iVar1) && func_1573(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_962(iParam0, 2, 1);
	}
	else
	{
		func_1574(iParam0);
		func_962(iParam0, 1, 1);
	}
}

void func_971(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_486(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_972(int iParam0)
{
	if (!func_486(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_973(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_960(iParam1))
	{
		return;
	}
	iVar0 = func_972(iParam1);
	if (func_1575(iParam1))
	{
		if (!func_1576(iParam1))
		{
			return;
		}
	}
	func_964(iParam1, 39, 1);
	func_1577(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1577(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1577(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_962(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1578(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_974(int iParam0)
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

void func_975(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_202(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1579(iVar6);
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

void func_976(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

bool func_977(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

void func_978(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1581(func_1580(255), 109029619));
	}
	else if (func_291())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1005();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_979(int iParam0)
{
	iParam0 = func_253(iParam0);
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

void func_980(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1581(func_1580(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_291())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1005())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_981(int iParam0)
{
	iParam0 = func_253(iParam0);
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

float func_982(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_983(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1440(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_979(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_979(iParam0) + 1;
	fVar6 = func_1582(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1583(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_984(int iParam0)
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

void func_985(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_986()
{
	if (func_325())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_987(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1584((Global_40.f_4283.f_325 + iParam0));
}

void func_988(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_986())
	{
		func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_989(int iParam0)
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

char* func_990(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_991(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_992(int iParam0)
{
	func_1000(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_993(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_994(1);
	}
}

void func_994(bool bParam0)
{
	if (bParam0)
	{
		func_1585(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1586(&(Global_40.f_12019.f_42), 1);
	}
}

int func_995(int iParam0)
{
	if (!func_177(iParam0))
	{
		return -15;
	}
	return func_1587(iParam0);
}

bool func_996(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_675(iParam1) || !func_675(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_997(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_998(int iParam0)
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

bool func_999(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1000(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1588(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1001(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1002(int iParam0, int iParam1, bool bParam2)
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

int func_1003()
{
	iVar0 = func_529();
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

int func_1004(int iParam0)
{
	if (func_20() != -1)
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
	fVar1 = func_1536(absf(fVar1) < 1f, func_1536(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1005()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1006(int iParam0)
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

int func_1007()
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

void func_1008(int iParam0, bool bParam1, int iParam2)
{
	func_1589((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1590(iParam0);
}

void func_1009(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1591(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1010(bool bParam0)
{
	bVar3 = false;
	if (func_1592(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1593(iVar5, &iVar2, &iVar0))
			{
				if (!func_549(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1594(iVar2);
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
							if (func_568(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1003() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1003() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1595();
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

char* func_1011(int iParam0)
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

bool func_1012(int iParam0)
{
	return func_568(iParam0) == -427144552;
}

bool func_1013(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_570(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1018(iParam0, &uVar0, 1, 0, 0);
	}
	return func_334(iParam0, 1, 0);
}

void func_1014(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_568(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_575(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_576(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_553(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_629(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1015(int iParam0, int iParam1)
{
	if (func_569(iParam0, 58855631))
	{
		func_1166(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1016(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!func_577(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_944(bParam3), iParam0);
}

int func_1017(int iParam0, bool bParam1)
{
	if (func_581(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_944(bParam1), iParam0, 0);
}

bool func_1018(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1596(&iParam0);
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (!func_577(0))
	{
		bParam3 = true;
	}
	if (func_1012(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1149(0) };
			Var4.f_9 = -1591664384;
			if (!func_1041(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1042(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1150(iParam0, 1))
			{
				if (!func_1041(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1042(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1597(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1016(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1598(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_944(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1019(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_568(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_569(iParam0, 1399091007))
	{
		func_1083(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1020(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1599(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1600(&Var0, func_1149(0));
	}
	if (!func_1601(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1093(iVar14);
	return uVar15;
}

int func_1021()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1022(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1023(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1602(iParam0);
	fVar1 = func_1603(iParam0);
	if ((Global_1347477->f_117 || !func_571(31)) || !func_1604(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1605(iVar0) >= 7)
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
	func_1606(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_679(_create_var_string(6, func_1607(iParam0), fVar1), "itemtype_textures", func_1608(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1024(int iParam0)
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

int func_1025(int iParam0, int iParam1)
{
	if (!func_1181(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1026(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_564() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1609(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1610(), 12);
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
			else if (func_1065() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1611(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1065(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1612(), 13);
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
			else if (func_1066() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1613(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1066(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1025(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1027(int iParam0, int iParam1, int iParam2)
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

bool func_1028(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1029(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1030(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1614(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_334(iVar2, 1, 0) || func_1616(func_1615(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1034(func_1614(iVar0))), func_1034(func_1614(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1065() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1617(iVar0)), func_1617(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1611() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1617(iVar0)), func_1617(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1617(iVar0)), func_1617(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1076(iParam3, func_1618(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1072(iVar2) - iParam7) >= func_1025(iParam3, func_1619(iVar0));
				}
				else
				{
					bVar1 = func_1072(iVar2) >= func_1025(iParam3, func_1619(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1072(iVar2) + iParam7) >= func_1025(iParam3, func_1619(iVar0));
			}
			else
			{
				bVar1 = func_1072(iVar2) >= func_1025(iParam3, func_1619(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1620(iVar2)), func_1620(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1621(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1622(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1622(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1066() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1623(iVar0)), func_1623(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1613() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1623(iVar0)), func_1623(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1623(iVar0)), func_1623(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1076(iParam3, func_1618(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1072(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1624(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1624(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1625(iVar2)), func_1625(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1031(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1612() >= 13)
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

bool func_1032(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_177(func_190(0)) && ((func_1626(0) == 1 || func_1626(0) == 8) || func_1626(0) == 6))
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

var func_1033(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1034(int iParam0)
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

bool func_1035(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1036(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1037(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1038(int iParam0)
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
			func_1627(1);
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
			func_1628(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1628(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1628(3);
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
			func_1629(1);
			break;
		case 34:
			func_1630(1);
			break;
		case 35:
			func_1631(1);
			break;
		case 36:
			break;
		case 37:
			func_1632(0);
			break;
		case 38:
			func_1633(0);
			break;
		case 39:
			func_1634(0);
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
			if ((!&Global_1879534 && func_382()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_312(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_382()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_312(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_382()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_312(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_382()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_312(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1106(99217379) || func_1635(99217379) == 2110595215)
				{
					if (func_1005())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_334(iVar0, 1, 0))
					{
						func_622(iVar0, 1, 752097756);
					}
					func_601(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_334(1013902307, 1, 0))
				{
					func_622(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_334(1013902307, 1, 0))
				{
					func_622(1013902307, 1, 752097756);
				}
				if (!func_334(142640135, 1, 0))
				{
					func_622(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_334(786809402, 1, 0))
				{
					func_622(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_334(786809402, 1, 0))
				{
					func_622(786809402, 1, 752097756);
				}
				if (!func_334(-518019409, 1, 0))
				{
					func_622(-518019409, 1, 752097756);
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
			func_1636();
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

bool func_1039(int iParam0)
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

int func_1040(int iParam0, int iParam1)
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

bool func_1041(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1598(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1042(int iParam0, var uParam1, int iParam2)
{
	if (func_1637(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1043(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_549(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_944(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1044(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1638(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1153(*uParam1, &Var0, bParam6, 0))
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
	if (!func_577(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_944(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1045(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1639(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1046(int iParam0)
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
	iVar2 = func_272();
	func_321(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1047(int iParam0)
{
	if (func_1640(iParam0))
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

bool func_1048(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1049(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1050(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_571(50))
			{
				if (!func_571(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_571(51))
			{
				if (!func_571(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1051(int iParam0, int iParam1, var uParam2)
{
	if (!func_549(iParam1, 0))
	{
		return false;
	}
	if (func_568(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_573(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_647(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_569(iParam1, 866047851))
	{
		iVar5 = func_648(iVar4, 1);
		if (func_1641(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_573(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_569(iParam1, -1638171711))
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
			if (func_1642(1868067663, &uVar0))
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
				iVar10 = func_1643(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1643(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_573(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_569(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1644(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1052()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1053()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1054()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_334(func_1645(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1055(int iParam0)
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

bool func_1056(int iParam0, int iParam1)
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
	if (func_334(iVar0, 1, 0) && func_334(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1057(int iParam0)
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

bool func_1058(int iParam0, int iParam1)
{
	iVar0 = func_1646(iParam0);
	if (iVar0 != -15)
	{
		func_321(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_676(iVar0, 1);
	}
	return false;
}

void func_1059(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1060(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1061(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1062(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1063(int iParam0)
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
	iVar1 = func_1072(iVar9);
	iVar2 = func_1072(iVar10);
	iVar3 = func_1072(iVar11);
	iVar5 = func_1073(iVar9);
	iVar6 = func_1073(iVar10);
	iVar7 = func_1073(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1072(iVar12);
		iVar8 = func_1073(iVar12);
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

void func_1064(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1065()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1647(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1066()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1067(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1624(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1624(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1624(iVar0))
		{
			*sParam2++;
		}
		if (func_1624(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1624(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1624(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1624(iVar0))
		{
			*sParam2++;
		}
		if (func_1624(iVar1))
		{
			*sParam2++;
		}
		if (func_1624(iVar0) && func_1624(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1624(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1624(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1624(iVar0))
		{
			*sParam2++;
		}
		if (func_1624(iVar1))
		{
			*sParam2++;
		}
		if (func_1624(iVar2))
		{
			*sParam2++;
		}
		if ((func_1624(iVar0) && func_1624(iVar1)) && func_1624(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1624(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1624(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1624(iVar0))
		{
			*sParam2++;
		}
		if (func_1624(iVar1))
		{
			*sParam2++;
		}
		if (func_1624(iVar2))
		{
			*sParam2++;
		}
		if (func_1624(iVar3))
		{
			*sParam2++;
		}
		if (((func_1624(iVar0) && func_1624(iVar1)) && func_1624(iVar2)) && func_1624(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1068(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1648(1497516462);
			func_1649(2016141805);
			func_1649(1010885152);
			func_1649(-502324015);
			break;
		case 2016141805:
			func_1649(1497516462);
			func_1648(2016141805);
			func_1649(1010885152);
			func_1649(-502324015);
			break;
		case 1010885152:
			func_1649(1497516462);
			func_1649(2016141805);
			func_1648(1010885152);
			func_1649(-502324015);
			break;
		case -502324015:
			func_1649(1497516462);
			func_1649(2016141805);
			func_1649(1010885152);
			func_1648(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1649(-538889627);
			func_1649(-538880323);
			func_1649(-1056767524);
			func_1648(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1650();
			func_1648(iParam0);
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
			func_1651();
			func_1648(iParam0);
			break;
		case 2019386373:
			func_1649(-664252410);
			func_1649(2109952320);
			func_1648(2019386373);
			break;
		case -664252410:
			func_1649(2019386373);
			func_1649(2109952320);
			func_1648(-664252410);
			break;
		case 2109952320:
			func_1649(2019386373);
			func_1649(-664252410);
			func_1648(2109952320);
			break;
		case -1674179981:
			func_1649(-1835851517);
			func_1649(-1838352012);
			func_1648(-1674179981);
			break;
		case -1835851517:
			func_1649(-1674179981);
			func_1649(-1838352012);
			func_1648(-1835851517);
			break;
		case -1838352012:
			func_1649(-1674179981);
			func_1649(-1835851517);
			func_1648(-1838352012);
			break;
		case -1717960576:
			func_1649(210001842);
			func_1648(-1717960576);
			break;
		case 210001842:
			func_1649(-1717960576);
			func_1648(210001842);
			break;
		case -150493654:
			func_1649(-1271608261);
			func_1649(1846061697);
			func_1649(-1145519186);
			func_1648(-150493654);
			break;
		case -1271608261:
			func_1649(-150493654);
			func_1649(1846061697);
			func_1649(-1145519186);
			func_1648(-1271608261);
			break;
		case 1846061697:
			func_1649(-150493654);
			func_1649(-1271608261);
			func_1649(-1145519186);
			func_1648(1846061697);
			break;
		case -1145519186:
			func_1649(-150493654);
			func_1649(-1271608261);
			func_1649(1846061697);
			func_1648(-1145519186);
			break;
		case 1766284049:
			func_1649(280705402);
			func_1649(1926308480);
			func_1648(1766284049);
			break;
		case 280705402:
			func_1649(1766284049);
			func_1649(1926308480);
			func_1648(280705402);
			break;
		case 1926308480:
			func_1649(1766284049);
			func_1649(280705402);
			func_1648(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1649(439465264);
				func_1648(1609506757);
			}
			else
			{
				func_1649(1609506757);
				func_1649(439465264);
			}
			break;
		case 439465264:
			if (func_458(1609506757))
			{
				if (bParam1)
				{
					func_1648(439465264);
				}
				else
				{
					func_1649(439465264);
				}
			}
			break;
		case 1822001510:
			func_1649(-1612662716);
			func_1648(1822001510);
			break;
		case -1612662716:
			func_1649(1822001510);
			func_1648(-1612662716);
			break;
		case 1306158345:
			func_1649(1952610440);
			func_1649(-223469678);
			func_1649(-404698347);
			func_1649(1517904467);
			func_1648(1306158345);
			break;
		case 1952610440:
			func_1649(1306158345);
			func_1649(-223469678);
			func_1649(-404698347);
			func_1649(1517904467);
			func_1648(1952610440);
			break;
		case -223469678:
			func_1649(1306158345);
			func_1649(1952610440);
			func_1649(-404698347);
			func_1649(1517904467);
			func_1648(-223469678);
			break;
		case -404698347:
			func_1649(1306158345);
			func_1649(1952610440);
			func_1649(-223469678);
			func_1649(1517904467);
			func_1648(-404698347);
			break;
		case 1517904467:
			func_1649(1306158345);
			func_1649(1952610440);
			func_1649(-223469678);
			func_1649(-404698347);
			func_1648(1517904467);
			break;
		case 1376646519:
			func_1649(931649776);
			func_1649(-434590080);
			func_1649(1743048395);
			func_1649(449774763);
			func_1648(1376646519);
			break;
		case 931649776:
			func_1649(1376646519);
			func_1649(-434590080);
			func_1649(1743048395);
			func_1649(449774763);
			func_1648(931649776);
			break;
		case -434590080:
			func_1649(1376646519);
			func_1649(931649776);
			func_1649(1743048395);
			func_1649(449774763);
			func_1648(-434590080);
			break;
		case 1743048395:
			func_1649(1376646519);
			func_1649(931649776);
			func_1649(-434590080);
			func_1649(449774763);
			func_1648(1743048395);
			break;
		case 449774763:
			func_1649(1376646519);
			func_1649(931649776);
			func_1649(-434590080);
			func_1649(1743048395);
			func_1648(449774763);
			break;
		case -1414537028:
			func_1649(38162571);
			func_1649(1350391819);
			func_1649(54073871);
			func_1648(-1414537028);
			break;
		case 38162571:
			func_1649(-1414537028);
			func_1649(1350391819);
			func_1649(54073871);
			func_1648(38162571);
			break;
		case 1350391819:
			func_1649(-1414537028);
			func_1649(38162571);
			func_1649(54073871);
			func_1648(1350391819);
			break;
		case 54073871:
			func_1649(-1414537028);
			func_1649(38162571);
			func_1649(1350391819);
			func_1648(54073871);
			break;
		case 198200492:
			func_1648(198200492);
			func_1649(-1124061431);
			func_1649(52706132);
			func_1649(-259123672);
			break;
		case -1124061431:
			func_1649(198200492);
			func_1648(-1124061431);
			func_1649(52706132);
			func_1649(-259123672);
			break;
		case 52706132:
			func_1649(198200492);
			func_1649(-1124061431);
			func_1648(52706132);
			func_1649(-259123672);
			break;
		case -259123672:
			func_1649(198200492);
			func_1649(-1124061431);
			func_1649(52706132);
			func_1648(-259123672);
			break;
		case -919512195:
			func_1648(-919512195);
			func_1649(-1925798111);
			func_1649(420709909);
			func_1649(1703426636);
			break;
		case -1925798111:
			func_1648(-1925798111);
			func_1649(-919512195);
			func_1649(420709909);
			func_1649(1703426636);
			break;
		case 420709909:
			func_1648(420709909);
			func_1649(-919512195);
			func_1649(-1925798111);
			func_1649(1703426636);
			break;
		case 1703426636:
			func_1648(1703426636);
			func_1649(-919512195);
			func_1649(-1925798111);
			func_1649(420709909);
			break;
		case -1223121209:
			func_1648(-1223121209);
			func_1649(630808005);
			break;
		case 630808005:
			func_1648(630808005);
			func_1649(-1223121209);
			break;
		case 1453909576:
			func_1648(1453909576);
			func_1649(1643531967);
			break;
		case 1643531967:
			func_1648(1643531967);
			func_1649(1453909576);
			break;
		case 0:
			func_1648(0);
			func_1649(473295046);
			func_1649(-1738165526);
			break;
		case 473295046:
			func_1648(473295046);
			func_1649(0);
			func_1649(-1738165526);
			break;
		case -1738165526:
			func_1648(-1738165526);
			func_1649(0);
			func_1649(473295046);
			break;
		case 932909855:
			func_1648(932909855);
			func_1649(2051822093);
			break;
		case 2051822093:
			func_1648(2051822093);
			func_1649(932909855);
			break;
		case 405586984:
			func_1648(405586984);
			func_1649(1509509592);
			func_1649(-959357075);
			func_1649(-1311865656);
			break;
		case 1509509592:
			func_1648(1509509592);
			func_1649(405586984);
			func_1649(-959357075);
			func_1649(-1311865656);
			break;
		case -959357075:
			func_1648(-959357075);
			func_1649(1509509592);
			func_1649(405586984);
			func_1649(-1311865656);
			break;
		case -1311865656:
			func_1648(-1311865656);
			func_1649(1509509592);
			func_1649(-959357075);
			func_1649(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1648(-524145696);
			}
			else
			{
				func_1649(-524145696);
			}
			func_1649(1626481264);
			func_1649(282809459);
			break;
		case 282809459:
			func_1648(282809459);
			func_1649(1626481264);
			func_1649(-524145696);
			break;
		case 1626481264:
			func_1648(1626481264);
			func_1649(-524145696);
			func_1649(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1648(885203519);
			}
			else
			{
				func_1649(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1648(-1080627546);
			}
			else
			{
				func_1649(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_458(iParam0))
				{
					func_1648(iParam0);
				}
			}
			else if (func_458(iParam0))
			{
				func_1649(iParam0);
			}
			break;
	}
}

void func_1069(int iParam0)
{
	if (!func_1652(iParam0))
	{
		func_1654(func_1653(iParam0));
	}
}

int func_1070()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1652(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1071(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1072(iVar9);
	iVar2 = func_1072(iVar10);
	iVar3 = func_1072(iVar11);
	iVar5 = func_1073(iVar9);
	iVar6 = func_1073(iVar10);
	iVar7 = func_1073(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1072(iVar12);
		iVar8 = func_1073(iVar12);
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

int func_1072(int iParam0)
{
	if (func_334(iParam0, 1, 0))
	{
		iVar0 = func_553(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1073(int iParam0)
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

int func_1074(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1075(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1076(int iParam0, int iParam1)
{
	if (!func_1181(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1077(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1076(iParam1, 5) || iParam0 == func_1076(iParam1, 6)) || iParam0 == func_1076(iParam1, 7)) || iParam0 == func_1076(iParam1, 8)) || iParam0 == func_1076(iParam1, 9))
	{
		func_1067(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_565(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_567(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1078(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1076(iParam1, 5) || iParam0 == func_1076(iParam1, 6)) || iParam0 == func_1076(iParam1, 7)) || iParam0 == func_1076(iParam1, 8)) || iParam0 == func_1076(iParam1, 9))
	{
		if (func_1067(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_565(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_567(51, 0, 0, iVar0, func_1025(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_565(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_567(51, 0, 0, iVar0, func_1025(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1079()
{
	if (func_178((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1080(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1081(int iParam0)
{
	if (!func_1655(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1082(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1083(int iParam0, int iParam1, var uParam2)
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

bool func_1084(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1656();
	if (iParam2 == 39)
	{
		Var0 = { func_660(iParam0, 1, 0) };
		iParam2 = func_648(func_661(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_569(iParam0, 866047851) && func_1641(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1086(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1657(func_1154(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1658(iParam2);
	func_1659(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1135(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1135(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1141(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1660(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1661(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1661(&(Global_1946804->f_1378), 1, 0);
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
				func_1396(func_1154(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1085(bool bParam0, bool bParam1, bool bParam2)
{
	func_1662(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1086(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1087()
{
	func_1663(&(Global_1946804->f_2776));
	func_1664(32768);
	func_1396(1108822547, 8, 6);
}

int func_1088(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_648(iParam0, 1);
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

void func_1089(int iParam0)
{
	if (func_1665(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1666(Var0);
}

void func_1090(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1666(Var0);
}

bool func_1091(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_944(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1092(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1093(int iParam0)
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

float func_1094()
{
	if (func_1667())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1668(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1668(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1669();
	fVar2 = func_1670();
	fVar3 = func_1671();
	fVar4 = func_1672();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1673()));
	fVar7 = (func_1668(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1674(3, round((to_float(iVar8) * fVar10)), 0);
	func_1675(3, fVar9, fVar9 > 100f);
	return func_1676(fVar7, -100f, 100f);
}

float func_1095()
{
	if (func_1667())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1668(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1668(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1669();
	fVar2 = func_1670();
	fVar3 = func_1671();
	fVar4 = func_1672();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1673()));
	fVar7 = (func_1668(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1674(2, round((to_float(iVar8) * fVar10)), 0);
	func_1675(2, fVar9, fVar9 > 100f);
	return func_1676(fVar7, -100f, 100f);
}

float func_1096()
{
	if (func_1667())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1668(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1677())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1678())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1668(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1669();
	fVar2 = func_1670();
	fVar3 = func_1671();
	fVar4 = func_1672();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1673()));
	fVar7 = (func_1668(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1674(1, round((to_float(iVar8) * fVar10)), 0);
	func_1675(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1668(0);
	}
	return func_1676(fVar7, -100f, 100f);
}

bool func_1097(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1098(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1099(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_549(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1018(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_577(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_944(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1100(int iParam0, bool bParam1)
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
				return func_1679();
			}
			break;
	}
	return 0;
}

int func_1101(int iParam0)
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

bool func_1102(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1103(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1102(iParam0))
	{
		return;
	}
	if (func_1680(iParam0))
	{
		return;
	}
	if (!func_1681(iParam0))
	{
		func_1682(iParam0, 1, 0);
	}
	iVar0 = func_1683(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1684(iParam0, 512))
		{
			func_659(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_201() && !bParam1) && !func_184(0, 0, 1))
	{
		func_688(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1685(iParam0, 6);
	if (bParam2)
	{
		if (!func_184(0, 0, 1))
		{
			func_354(1, 4);
		}
	}
}

bool func_1104(int iParam0, bool bParam1)
{
	return func_1100(iParam0, 0) < func_1686(iParam0, bParam1);
}

bool func_1105(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1106(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_648(iParam0, 1)] != &Global_1946804->f_57[func_648(iParam0, 1)];
}

void func_1107(int iParam0, int iParam1)
{
	if (func_569(iParam1, 130796156))
	{
		func_1687(iParam1, 0);
	}
	else if (func_569(iParam1, 930141731))
	{
		func_1687(iParam1, 1);
		func_1688(iParam0);
	}
}

void func_1108(var uParam0, int iParam1)
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

int func_1109(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1689(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1690(uParam2, iParam0, Var1);
	return 1;
}

int func_1110(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1111(int iParam0)
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

int func_1112(int iParam0)
{
	if (!func_1691(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1113()
{
	return !&Global_1911774;
}

void func_1114(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1115(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1116(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1117(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1118(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1692(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1119(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1692(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1120(bool bParam0)
{
	if (bParam0)
	{
		func_305(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1121();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1693(2032023096);
		func_308(-615217896);
		func_644(655868243, 1, 1, -142743235, 1);
		func_1695(146323340, func_1694());
		Var0 = { func_1448() };
		if (func_1696(&Var0) == -1387633835)
		{
			func_1697(&Var0);
			func_1698(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1699(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1441(iVar6) == 2010625508)
			{
				func_1700(iVar6, iVar7);
				func_1701(iVar6, iVar8);
				func_1702(iVar6, iVar9);
				func_1703(iVar6, 0);
				if (func_1704(iVar6))
				{
					func_1705(iVar6);
				}
				iVar10 = func_1706(iVar8);
				func_1707(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1121()
{
	if (!func_1708(-1898635967, func_1694(), 1))
	{
		return 0;
	}
	if (func_325())
	{
		if (!func_1708(146323340, func_1694(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1122()
{
	func_319(34411519);
	func_319(834124286);
	func_319(-570967010);
}

void func_1123(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_305(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_644(-1080874779, 3, 1, -142743235, 1);
		func_644(-223790555, 3, 1, -142743235, 1);
		func_644(1566032147, 3, 1, -142743235, 1);
		func_644(891311852, 5, 1, -142743235, 1);
		func_644(-1353737667, 5, 1, -142743235, 1);
		func_644(-330313895, 5, 1, -142743235, 1);
		func_644(-2051332199, 5, 1, -142743235, 1);
		func_644(1237770824, 5, 1, -142743235, 1);
		func_644(-1795542128, 3, 1, -142743235, 1);
		func_644(-1757588258, 3, 1, -142743235, 1);
		func_644(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1699(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1441(iVar0) == 153881023)
			{
				func_1700(iVar0, iVar1);
				func_1701(iVar0, iVar2);
				func_1702(iVar0, iVar3);
				func_1703(iVar0, 0);
				if (func_1704(iVar0))
				{
					func_1705(iVar0);
				}
				iVar4 = func_1706(iVar2);
				func_1707(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1121();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1124(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1709(iParam0);
	if (bParam3)
	{
		func_687(iParam0, sParam1, iParam2);
	}
}

bool func_1125(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1126(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1127()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1091("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1092(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1042(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1093(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1093(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1128(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1710(Param1, iParam5, &Var5, 0))
	{
		func_1044(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1099(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1711(Var19, 1);
}

bool func_1129(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1599(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1600(&Var0, func_1149(0));
	}
	if (!func_1601(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1092(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1044(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1093(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1130(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_660(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1712(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1043(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1044(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1131(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_569(iParam0, 606799272))
		{
			func_1713(iParam0, iParam1);
		}
		if (func_569(iParam0, -1112814642) && func_569(iParam0, -1697809989))
		{
			func_597(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1132(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1714(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_573(iParam0) != -999503751)
		{
			func_1715(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_573(iParam0) != -999503751)
	{
		func_1715(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1716(iParam0, 1);
	return 1;
}

void func_1133()
{
	if (func_20() == -1)
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

void func_1134(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1717(0);
	}
	if (bParam0)
	{
		func_1146(8);
		func_1146(512);
	}
	else
	{
		func_1146(8);
		func_1146(16);
	}
}

void func_1135(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1136(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_650();
	}
	if (func_20() == -1)
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

int func_1137(int iParam0)
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

void func_1138(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1718(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1154(iVar0, 1);
			if (func_1393(iVar0, iParam1))
			{
				vVar4 = { func_652(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1392(iVar7, 4))
				{
					func_1396(iVar7, 4, 6);
				}
			}
			else
			{
				func_1395(iVar7, 4, 6);
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

bool func_1139(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_20() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1719(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1140(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1141(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_573(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1393(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1659(iVar1, iVar3);
		}
	}
	if (func_1106(-1586649372) && func_1393(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1659(iVar1, iVar3);
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
						func_1659(iVar1, iVar3);
					}
				}
			}
			func_1720(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1720(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1659(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1720(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1720(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1720(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1720(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1659(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_573(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1644(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_573(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_569(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
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
						func_1659(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1644(&(Global_1946804->f_1497.f_1[iVar1])) || func_569(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
			}
			switch (func_573(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_573(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_573(&(uParam0->f_1[iVar1])) || func_569(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1142(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1143(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1097(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1097(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1144(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1097(iParam0, 65536) && !func_1097(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1097(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1097(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1145()
{
	return Global_1905944->f_5694;
}

void func_1146(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1147(struct<4> Param0)
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
			if (func_1721(Param0))
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
			func_1722(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1146(8);
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
			if (func_1721(Param0))
			{
				return;
			}
			func_1722(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1146(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1090(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1148(bool bParam0)
{
	return func_1043(1328661203, func_1723(), -1591664384, bParam0);
}

struct<4> func_1149(bool bParam0)
{
	iVar0 = func_944(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1043(923904168, func_1148(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1043(923904168, func_1148(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1043(923904168, func_1148(bParam0), -740156546, 0);
}

bool func_1150(int iParam0, bool bParam1)
{
	if (func_573(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_571(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1151(bool bParam0)
{
	iVar0 = func_944(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1043(271701509, func_1148(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1043(271701509, func_1148(bParam0), 12999093, 0);
}

bool func_1152(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_573(iParam0);
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

bool func_1153(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_944(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1154(int iParam0, int iParam1)
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

int func_1155(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1156(int iParam0, int iParam1)
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

void func_1157(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1158(int iParam0, int iParam1)
{
	iVar0 = func_668(*iParam0);
	iVar1 = func_667(*iParam0);
	if (iParam1 < 1 || iParam1 > func_673(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1159(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1160(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1161(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1162(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1163(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1164(int iParam0)
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

bool func_1165(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1012(iParam0))
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

int func_1166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_549(iParam0, 0))
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

int func_1167(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1596(&iParam0);
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!func_577(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1016(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1598(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_944(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1168(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_569(iParam0, -5284486))
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
		if (func_1724(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_630(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_633(iVar62, iVar61);
					if (func_549(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1168(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1168(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1724(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1169(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1725(1);
}

void func_1170(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1726(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_311(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1726(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_311(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1171()
{
	return Global_40.f_4283.f_325;
}

bool func_1172(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1173(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1174(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1175(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1176(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1177(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1178(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_382();
	bVar1 = false;
	if (bVar0 && !func_1727(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1727(37)) && !func_1727(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1727(43)) && !func_1727(44))
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
		if (func_1442(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1442(1) == 1)
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

int func_1179()
{
	return Global_40.f_1095.f_3054;
}

bool func_1180(int iParam0)
{
	iParam0 = func_253(iParam0);
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

bool func_1181(int iParam0, var uParam1)
{
	if (!func_1728(iParam0))
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

int func_1182()
{
	if (func_382())
	{
		if (!func_1727(3))
		{
			return func_1729(43);
		}
		if (func_1727(38) && !func_1727(43))
		{
			return func_1730(8);
		}
	}
	return 0;
}

bool func_1183(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1731(iParam0));
}

Vector3 func_1184(int iParam0, int iParam1)
{
	func_1181(15, &Var0);
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

int func_1185(int iParam0, int iParam1)
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
	iVar0 = func_924(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1181(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1732(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1186(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1733(iParam0);
	if (func_458(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1187(int iParam0)
{
	if (!func_1181(15, &Var0))
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

bool func_1188(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1734(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1735(5))
	{
		if (func_1736(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1435(vParam0);
	if (bParam6)
	{
		iVar1 = func_359(vParam0, 1);
		if (func_116(iVar1) || func_1737(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1738(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1739())
	{
		if (func_1740(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1741(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_359(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1742(iParam3, iParam4))
	{
		return false;
	}
	if (func_1743(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1744(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_382())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1745(vParam0, iParam10) || func_1746(vParam0, iParam10))
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

int func_1189(vector3 vParam0)
{
	iVar0 = func_1747(vParam0, 0f, 0f, 0, 2);
	return func_1747(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1190(int iParam0)
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

char* func_1191(int iParam0)
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
	return func_1405(iVar0);
}

char* func_1192(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1748(iVar0);
}

char* func_1193(int iParam0)
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

void func_1194(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1514(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 56267;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1195(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1514(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

bool func_1196()
{
	if (_does_streamed_texture_dict_exist(sLocal_83))
	{
		request_streamed_texture_dict(sLocal_83, false);
		if (!has_streamed_texture_dict_loaded(sLocal_83))
		{
			return false;
		}
	}
	return true;
}

bool func_1197(char* sParam0)
{
	if (!is_named_rendertarget_registered(sParam0))
	{
		register_named_rendertarget(sParam0, false);
		link_named_rendertarget(iLocal_28);
		if (is_named_rendertarget_linked(iLocal_28))
		{
		}
		else
		{
			if (is_named_rendertarget_registered(sParam0))
			{
				release_named_rendertarget(sParam0);
			}
			return false;
		}
	}
	return true;
}

bool func_1198(bool bParam0)
{
	request_vehicle_asset(iLocal_48, 35);
	request_vehicle_asset(iLocal_49, 35);
	if (has_vehicle_asset_loaded(iLocal_48) && has_vehicle_asset_loaded(iLocal_49))
	{
		if (!bParam0)
		{
			if (!func_1225(iLocal_110, iLocal_118, 0))
			{
				func_1299(&iLocal_110, &iLocal_118, -1, 1);
			}
			if (!func_1225(iLocal_111, iLocal_118, 0))
			{
				func_1299(&iLocal_111, &iLocal_118, 0, 1);
			}
			if (!func_1225(Global_35, iLocal_126, 0))
			{
				func_1299(&Global_35, &iLocal_126, -1, 1);
			}
			if (!func_1225(iLocal_112, iLocal_126, 0))
			{
				func_1299(&iLocal_112, &iLocal_126, 0, 1);
			}
		}
		else
		{
			if (!func_1225(Global_35, iLocal_118, 0))
			{
				func_1299(&Global_35, &iLocal_118, -1, 1);
			}
			if (!func_1225(iLocal_110, iLocal_118, 0))
			{
				func_1299(&iLocal_110, &iLocal_118, 0, 1);
			}
			if (!func_1225(iLocal_111, iLocal_126, 0))
			{
				func_1299(&iLocal_111, &iLocal_126, -1, 1);
			}
			if (!func_1225(iLocal_112, iLocal_126, 0))
			{
				func_1299(&iLocal_112, &iLocal_126, 0, 1);
			}
		}
	}
	return (((((is_ped_in_any_vehicle(Global_35, false) && is_ped_in_any_vehicle(iLocal_110, false)) && is_ped_in_any_vehicle(iLocal_111, false)) && is_ped_in_any_vehicle(iLocal_112, false)) && has_vehicle_asset_loaded(iLocal_48)) && has_vehicle_asset_loaded(iLocal_49));
}

void func_1199(var uParam0)
{
	func_151(uParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(uParam0, iLocal_109, "AlbertCakeEsquire", 0, 0, 0, 0);
	func_151(uParam0, iLocal_110, "CharlesSmith", 0, 0, 0, 0);
	func_151(uParam0, iLocal_114, "A_M_M_BLWLABORER_01", 0, 0, 0, 0);
	func_151(uParam0, iLocal_115, "A_M_M_BLWLABORER_01^1", 0, 0, 0, 0);
	func_151(uParam0, iLocal_111, "MRDEVON", 0, 0, 0, 0);
	func_151(uParam0, iLocal_112, "MRWAYNE", 0, 0, 0, 0);
	func_151(uParam0, &(uLocal_127[1]), "HORSE_01", 0, 0, 0, 0);
	func_151(uParam0, &(uLocal_127[0]), "Horse_01^1", 0, 0, 0, 0);
	func_151(uParam0, &(uLocal_119[0]), "Horse_01^2", 0, 0, 0, 0);
	func_151(uParam0, &(uLocal_119[1]), "Horse_01^3", 0, 0, 0, 0);
	func_412(uParam0, iLocal_126, "wagon02x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_118, "wagon02x^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_156, "p_pen01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_157, "p_amb_clipboard_01", 0, 0, 0, 0);
	func_412(uParam0, iLocal_158, "p_cs_book03x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_159, "p_cs_catalogue01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_160, "P_CS_LETTER03X", 0, 0, 0, 0);
	func_412(uParam0, iLocal_161, "p_cigarbox01x", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_142[0]), "p_lumber09_piece01x", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_142[1]), "p_lumber09_piece01x^1", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_142[2]), "p_lumber09_piece01x^2", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_142[3]), "p_lumber09_piece01x^3", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_142[4]), "p_lumber09_piece01x^4", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_142[5]), "p_lumber09_piece01x^5", 0, 0, 0, 0);
}

void func_1200()
{
	if (is_named_rendertarget_registered(sLocal_82))
	{
		set_text_render_id(get_named_rendertarget_render_id(sLocal_82));
		_0x9d37eb5003e0f2cf(get_named_rendertarget_render_id(sLocal_82), 1);
		draw_rect(0.5f, 0.5f, 2f, 2f, 0, 0, 0, 255, false, true);
	}
}

int func_1201(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1749(uParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1750(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1751(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1752(uParam0, iParam1, 128);
		if (bParam4)
		{
			func_1752(uParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1753(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1749(uParam0, iParam1) && does_blip_exist(iVar0))
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
				iVar0 = _blip_add_for_entity(iParam3, iParam1);
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
		if (func_957(uParam0, iParam1, &iVar4))
		{
			func_1513(uParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1754(iVar3);
	}
	return iVar0;
}

void func_1202()
{
	if ((!does_entity_exist(iLocal_136) || !does_entity_exist(iLocal_138)) || !does_entity_exist(iLocal_140))
	{
		if (func_1755(iLocal_118, &iLocal_136, &iLocal_138, &iLocal_140))
		{
			func_1756(iLocal_136, 500);
			func_1756(iLocal_138, 500);
			func_1756(iLocal_140, 500);
		}
	}
}

void func_1203(int iParam0, int iParam1, bool bParam2)
{
	func_969(iParam0, !bParam2);
	set_blocking_of_non_temporary_events(iParam1, !bParam2);
}

void func_1204(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 1, 8f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_LEAVE_TOWN", 2.5f, 1073741824, 0, 0))
			{
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (func_1759(19))
			{
				if (!func_1297(iLocal_118, func_375(0, 5), 7.5f, 1, 1))
				{
					func_1230();
				}
			}
			else
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_1206(iLocal_126, sLocal_57, 12))
			{
				if (func_1758(uParam0, "MAR7_JOURNEY_01", 0, 1073741824, 0, 0))
				{
					func_135(uParam0, 5);
				}
			}
			break;
		case 5:
			func_1760(iLocal_110, "MAR7_JOURNEY_01", 1, 1);
			if (func_1206(iLocal_126, sLocal_57, 112))
			{
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (!_0x1ecc76792f661cf5("MAR7_JOURNEY_01"))
			{
				func_135(uParam0, 7);
			}
			else if (!_0xf01c570e0a0a1e67("MAR7_JOURNEY_01"))
			{
				pause_scripted_conversation("MAR7_JOURNEY_01", true, false, true, true);
			}
			break;
		case 7:
			if (func_1758(uParam0, "MAR7_RIGHT", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 8);
			}
			break;
		case 8:
			if (!_0x1ecc76792f661cf5("MAR7_RIGHT") && !is_ped_in_combat(iLocal_110, 0))
			{
				restart_scripted_conversation("MAR7_JOURNEY_01");
				func_135(uParam0, 51);
			}
			break;
		case 51:
			func_1760(iLocal_110, "MAR7_JOURNEY_01", 1, 1);
			break;
	}
}

void func_1205(int iParam0, int iParam1, char* sParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_in_any_vehicle(iParam0, false))
	{
		return;
	}
	fVar0 = (_0x3acc128510142b9d(sParam2, get_entity_coords(iParam0, true, false)) - _0x3acc128510142b9d(sParam2, get_entity_coords(iParam1, true, false)));
	if (fVar0 <= 0f)
	{
		fVar0 = 0.1f;
	}
	fVar1 = (fParam5 * (fParam3 / fVar0));
	if (fVar0 > fParam4 || !func_1225(iParam1, iLocal_126, 0))
	{
		_0x104d9a7b1c0d0783(get_vehicle_ped_is_in(iParam0, false), 0f);
	}
	else
	{
		_0x104d9a7b1c0d0783(get_vehicle_ped_is_in(iParam0, false), fVar1);
	}
}

bool func_1206(int iParam0, char* sParam1, int iParam2)
{
	waypoint_recording_get_closest_waypoint(sParam1, get_entity_coords(iParam0, true, false), &iVar0);
	return iVar0 >= iParam2;
}

void func_1207(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6)
{
	if (does_entity_exist(iParam0) && does_entity_exist(iParam1))
	{
		fVar0 = func_862(iParam0, iParam1, 0, 1);
		fVar1 = func_1676((fParam2 * (fVar0 / fParam3)), 0.101f, 3f);
		if (bParam6)
		{
			if (fVar0 < fParam4)
			{
				fVar1 = 0f;
				if (!_0x404527bc03da0e6c(iParam0))
				{
					bring_vehicle_to_halt(iParam0, fParam5, -1, false);
				}
			}
			else if (_0x404527bc03da0e6c(iParam0))
			{
				_0x7c06330bfdda182e(iParam0);
			}
		}
		else if (_0x404527bc03da0e6c(iParam0))
		{
			_0x7c06330bfdda182e(iParam0);
		}
		func_1761(iParam0, fVar1);
	}
}

void func_1208()
{
	if (func_1225(iLocal_112, iLocal_126, 0))
	{
		if (!func_1206(iLocal_126, sLocal_57, 192))
		{
			if (!func_1762(iLocal_112, 1199744105))
			{
				if (_0x2963b5c1637e8a27(iLocal_126) == iLocal_112 && func_1225(Global_35, iLocal_126, 0))
				{
					if (func_1763(iLocal_126, 5))
					{
						_0x27e3f2b57209fa54(iLocal_126, 1);
						_task_vehicle_drive_to_destination(iLocal_112, iLocal_126, func_1210(sLocal_57, 192), (12.5f + 5f), 69730435, 1, 5f, 2.5f, 0);
					}
					else
					{
						_0xfc7f71cf49f70b6b(Global_35);
					}
				}
			}
			else if (_0x2963b5c1637e8a27(iLocal_126) != iLocal_112 || !func_1225(Global_35, iLocal_126, 0))
			{
				_0x27e3f2b57209fa54(iLocal_126, 0);
				clear_ped_tasks(iLocal_112, 1, 0);
			}
		}
		else if (_0x2963b5c1637e8a27(iLocal_126) == iLocal_112)
		{
			if (func_1762(iLocal_112, 1199744105))
			{
				if (func_1206(iLocal_126, sLocal_57, 193) || get_entity_speed(iLocal_126) < 1f)
				{
					clear_ped_tasks(iLocal_112, 1, 0);
				}
			}
			else if (func_1225(Global_35, iLocal_126, 0))
			{
				_0xfc7f71cf49f70b6b(Global_35);
			}
		}
		else
		{
			_set_vehicle_exclusive_driver_2(iLocal_126, Global_35, 0);
		}
	}
}

int func_1209(var uParam0)
{
	return uParam0->f_598;
}

Vector3 func_1210(char* sParam0, int iParam1)
{
	vVar0 = { 0f, 0f, 0f };
	waypoint_recording_get_coord(sParam0, iParam1, &vVar0);
	return vVar0;
}

bool func_1211(vector3 vParam0)
{
	if (func_426(iLocal_110, 0) && func_426(Global_35, 0))
	{
		if (!does_group_exist(iLocal_238))
		{
			iLocal_238 = create_group(0);
			set_group_formation(iLocal_238, 4);
			_0x97c475212b327666(iLocal_238, 1);
			set_ped_config_flag(iLocal_110, 279, true);
			set_ped_as_group_leader(iLocal_110, iLocal_238, false);
			_0x0e9e95fdedcc9d35(iLocal_110, 0, 0);
			_0xac22aa6df4d1c1de(get_player_index(), iLocal_110, 0f, 0f, 2, 2, 0);
			_0x086549f3b0381cb1(get_player_index(), 1);
			return false;
		}
		else if (!func_1762(iLocal_110, 1199744105))
		{
			_task_vehicle_drive_to_destination(iLocal_110, iLocal_118, vParam0, 12.5f, 69730435, 1, 5f, 2.5f, 1);
			return false;
		}
		return true;
	}
	return false;
}

void func_1212(bool bParam0)
{
	if (func_426(iLocal_112, 0))
	{
		if (bParam0)
		{
			_0x1e017404784aa6a3(iLocal_112, -1657665939);
		}
		else
		{
			_0x2b4ce170de09f346(iLocal_112, -1657665939);
		}
		_0x0d7fd6a55fd63aef(8, 3, bParam0);
		_0x0d7fd6a55fd63aef(26, 3, bParam0);
		_0x0d7fd6a55fd63aef(13, 3, bParam0);
		_0x0d7fd6a55fd63aef(12, 3, bParam0);
		_0x0d7fd6a55fd63aef(10, 3, bParam0);
		_0x0d7fd6a55fd63aef(21, 3, bParam0);
		_0x0d7fd6a55fd63aef(3, 3, bParam0);
		_0x0d7fd6a55fd63aef(5, 3, bParam0);
	}
}

void func_1213(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1214(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1514(iVar0))
	{
		return;
	}
	iVar1 = func_1515(iParam3);
	if (!func_1516(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1215(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1216(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1217(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_863(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1218(int iParam0, bool bParam1)
{
	set_anim_scene_entity(iParam0, "Nils", iLocal_113, 0);
	set_anim_scene_entity(iParam0, "MRWAYNE", iLocal_112, 0);
	set_anim_scene_entity(iParam0, "p_axe02x", iLocal_162, 0);
	set_anim_scene_entity(iParam0, "p_grindingwheel01x", iLocal_164, 0);
	set_anim_scene_entity(iParam0, "p_mallet01x", iLocal_166, 0);
	set_anim_scene_entity(iParam0, "p_sawHand01x", iLocal_167, 0);
	if (bParam1)
	{
		set_anim_scene_entity(iParam0, "p_toolbox01x", iLocal_169, 0);
	}
}

void func_1219()
{
	set_anim_scene_entity(iLocal_177, "JOHN", Global_35, 0);
	set_anim_scene_entity(iLocal_177, "IG_mrwayne", iLocal_112, 0);
}

void func_1220(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			if (func_120(uParam0, 4) || func_128(uParam0, 1))
			{
				func_1349(uParam0, 2, 1f);
			}
			else
			{
				func_1226(uParam0, 2, 0);
			}
			func_135(uParam0, 2);
			break;
		case 2:
			if (!_0x1ecc76792f661cf5("MAR7_RIGHT") && !is_ped_in_combat(iLocal_110, 0))
			{
				if (_0xf01c570e0a0a1e67("MAR7_JOURNEY_01"))
				{
					restart_scripted_conversation("MAR7_JOURNEY_01");
				}
				func_135(uParam0, 3);
			}
			break;
		case 3:
			func_1760(iLocal_110, "MAR7_JOURNEY_01", 1, 1);
			if (!_0xd89504d9d7d5057d("MAR7_JOURNEY_01"))
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_1758(uParam0, "MAR7_JOURNEY_02", 1f, 1073741824, 0, 1))
			{
				func_135(uParam0, 5);
			}
			break;
		case 5:
			func_1760(iLocal_110, "MAR7_JOURNEY_02", 1, 1);
			break;
		case 6:
			if (func_1355(iLocal_177))
			{
				if (func_1209(uParam0) == 29)
				{
					func_135(uParam0, 51);
				}
				else if (func_1758(uParam0, "MAR7_TO_NILS", 0, 1073741824, 0, 0))
				{
					func_135(uParam0, 51);
				}
			}
			break;
	}
}

void func_1221(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_1764(vParam1, 0f, 0f, 0f))
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
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_1765(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1766() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
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
			set_ped_max_move_blend_ratio(iParam0, 1f);
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
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1762(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1762(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

void func_1222()
{
	if (_does_anim_scene_exist(iLocal_174))
	{
		if (_is_anim_scene_started(iLocal_174, false))
		{
			if (_0x3ab6c7b0bb0df4b1(iLocal_113, iLocal_174))
			{
				if (is_explosion_in_sphere(-1, get_entity_coords(iLocal_113, true, false), (6.5f * 2f)))
				{
					if (!_0x1f0e401031e20146(iLocal_174, sLocal_67))
					{
						if (!_0x23e33cb9f4a3f547(iLocal_174, sLocal_67))
						{
							_0xdf7b5144e25cd3fe(iLocal_174, sLocal_67);
						}
						else
						{
							_set_anim_scene_playback_list_bool(iLocal_174, sLocal_67, false);
							iLocal_246 = 5;
						}
					}
				}
				else if (_0x9c81338b2e62ce0a(get_player_index(), iLocal_113, 1000))
				{
					switch (func_1767(iLocal_113, Global_35, 1060437492))
					{
						case 3:
							if (_0x8d81e7824b7753f7(iLocal_174, sLocal_76, 1))
							{
								if (!_0x23e33cb9f4a3f547(iLocal_174, sLocal_65))
								{
									_0xdf7b5144e25cd3fe(iLocal_174, sLocal_65);
								}
								else
								{
									_set_anim_scene_playback_list_bool(iLocal_174, sLocal_65, false);
								}
							}
							break;
						case 2:
							if (_0x8d81e7824b7753f7(iLocal_174, sLocal_76, 1))
							{
								if (!_0x23e33cb9f4a3f547(iLocal_174, sLocal_66))
								{
									_0xdf7b5144e25cd3fe(iLocal_174, sLocal_66);
								}
								else
								{
									_set_anim_scene_playback_list_bool(iLocal_174, sLocal_66, false);
								}
							}
							break;
						case 0:
						case 1:
							if (_0x8d81e7824b7753f7(iLocal_174, sLocal_76, 1))
							{
								if (!_0x23e33cb9f4a3f547(iLocal_174, sLocal_64))
								{
									_0xdf7b5144e25cd3fe(iLocal_174, sLocal_64);
								}
								else
								{
									_set_anim_scene_playback_list_bool(iLocal_174, sLocal_64, false);
								}
							}
							break;
					}
				}
			}
			else if (!func_1762(iLocal_113, 518218985))
			{
				task_smart_flee_ped(iLocal_113, Global_35, 1000f, 100000, 0, 1077936128, 0);
				iLocal_246 = 5;
			}
		}
	}
}

void func_1223(var uParam0)
{
	switch (iVar253)
	{
		case 0:
			if (func_1225(iLocal_112, iLocal_126, 0))
			{
				iLocal_256 = 1;
			}
			break;
		case 1:
			if (func_1206(iLocal_126, sLocal_57, 177))
			{
				func_1768();
				iLocal_256 = 2;
			}
			break;
		case 2:
			if (func_1206(iLocal_126, sLocal_57, 183))
			{
				if (_0x1ecc76792f661cf5("MAR7_JOURNEY_02"))
				{
					stop_scripted_conversation("MAR7_JOURNEY_02", true, true);
					func_135(uParam0, -1);
				}
				else if (func_1758(uParam0, "MAR7_IG0_A", 0, 1073741824, 0, 1))
				{
					task_look_at_entity(Global_35, iLocal_113, 5000, 0, 51, 0);
					func_135(uParam0, -1);
					iLocal_256 = 3;
				}
			}
			break;
		case 3:
			if (func_1206(iLocal_118, sLocal_57, 192))
			{
				if (func_1206(iLocal_126, sLocal_57, 191))
				{
					if (func_1758(uParam0, "MAR7_IG0_B", 0, 1073741824, 0, 1))
					{
						iLocal_256 = 4;
					}
				}
				else if (!func_1225(Global_35, iLocal_126, 0))
				{
					iLocal_256 = 4;
				}
			}
			break;
		case 4:
			if (!_0x1ecc76792f661cf5("MAR7_IG0_B"))
			{
				if (func_1229(iLocal_113, 422991367, "MAR7_NILS", 1, -401963276, 1))
				{
					func_1226(uParam0, 3, 1);
					iLocal_256 = 5;
				}
			}
			break;
		case 5:
			if (!func_1225(Global_35, iLocal_126, 0) && is_vehicle_stopped(iLocal_126))
			{
				iLocal_256 = 6;
			}
			break;
		case 6:
			if (func_1225(iLocal_112, iLocal_126, 0))
			{
				if (is_vehicle_stopped(iLocal_126))
				{
					if (!func_1762(iLocal_112, 242628503))
					{
						open_sequence_task(&iLocal_216);
						task_leave_vehicle(0, iLocal_126, 131072, 0);
						task_follow_waypoint_recording(0, sLocal_58, 0, 25600, -1, 0, 0, -1);
						close_sequence_task(iLocal_216);
						task_perform_sequence(iLocal_112, iLocal_216);
						clear_sequence_task(&iLocal_216);
					}
				}
			}
			else
			{
				task_look_at_entity(iLocal_112, Global_35, -1, 0, 51, 0);
				iLocal_256 = 7;
			}
			break;
		case 7:
			if (_does_anim_scene_exist(iLocal_177))
			{
				if (!_is_anim_scene_finished(iLocal_177, false) && !_is_anim_scene_started(iLocal_177, false))
				{
					if (func_858(Global_35, iLocal_113, 25f, 1) && !func_858(iLocal_112, iLocal_113, 8.5f, 1))
					{
						task_look_at_entity(iLocal_112, iLocal_113, -1, 0, 51, 0);
						start_anim_scene(iLocal_177);
						func_135(uParam0, 6);
					}
				}
			}
			if (!func_1762(iLocal_112, 242628503) && !func_1762(iLocal_112, 658540077))
			{
				if (!func_1769(iLocal_112, sLocal_58))
				{
					task_follow_waypoint_recording(iLocal_112, sLocal_58, 0, 25600, -1, 0, 0, -1);
				}
			}
			else
			{
				func_1770(iLocal_112, Global_35, sLocal_58, 5f, 2.5f, 1, 1f, 1f);
			}
			func_1221(Global_35, get_entity_coords(iLocal_113, true, false), 0, 10f, 8.5f, 6.5f, 3.5f, 1, 1, 1, 0);
			break;
		case 8:
			break;
	}
}

void func_1224(var uParam0)
{
	if (func_1209(uParam0) != 29)
	{
		if (func_1297(Global_35, get_entity_coords(iLocal_113, true, false), 6.5f, 1, 0) && func_1771(Global_35) < (func_1771(iLocal_113) + 1f))
		{
			func_27(&uLocal_250, 0);
			if (func_1225(iLocal_112, iLocal_126, 0))
			{
				if (!func_1762(iLocal_112, 451360105))
				{
					task_leave_vehicle(iLocal_112, iLocal_126, 131072, 0);
				}
			}
			if (func_1228(&uLocal_250) > 5f || func_1297(iLocal_112, get_entity_coords(iLocal_113, true, false), 6.5f, 1, 0))
			{
				if (!_0x1f0e401031e20146(iLocal_174, sLocal_63))
				{
					if (!_0x23e33cb9f4a3f547(iLocal_174, sLocal_63))
					{
						if (!_0x0df57f86fe71dbe5(iLocal_174, sLocal_63))
						{
							_0xdf7b5144e25cd3fe(iLocal_174, sLocal_63);
						}
					}
					else
					{
						_0x36559148b78853b3(1, 1, 1);
						_set_anim_scene_playback_list_bool(iLocal_174, sLocal_63, false);
						iLocal_256 = 8;
						func_135(uParam0, 51);
						func_134(uParam0, 29);
					}
				}
			}
		}
	}
}

bool func_1225(int iParam0, int iParam1, bool bParam2)
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

void func_1226(var uParam0, int iParam1, bool bParam2)
{
	func_1773(uParam0, func_1772(iParam1), -1082130432, 0, 0, -1, -1, 0);
	func_524(&uLocal_97);
	iLocal_247 = iParam1;
	fLocal_187 = 0f;
	if (bParam2)
	{
		func_1774();
	}
}

void func_1227(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1750(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1751(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_490(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1749(uParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1775(iParam1);
		}
	}
	if (func_1749(uParam0, iParam1))
	{
		func_1776(uParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1752(uParam0, iParam1, 128);
		}
		else
		{
			func_1776(uParam0, iParam1, 128);
		}
		if (func_957(uParam0, iParam1, &iVar3))
		{
			func_1513(uParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1754(iVar1);
	}
}

float func_1228(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_469(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_521() - uParam0->f_1);
}

bool func_1229(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			_0xedd964b7984ac291(iVar0, iParam1);
			if (iParam4 != 0)
			{
				_blip_set_modifier(iVar0, iParam4);
			}
			if (bParam3)
			{
				set_blip_name_from_text_file(iVar0, sParam2);
			}
			return true;
		}
		else if (bParam5)
		{
			iVar0 = _blip_add_for_entity(iParam1, iParam0);
			if (bParam3)
			{
				set_blip_name_from_text_file(iVar0, sParam2);
			}
		}
	}
	return false;
}

void func_1230()
{
	if (func_26(&uLocal_97))
	{
		func_524(&uLocal_97);
	}
}

void func_1231(var uParam0)
{
	if (func_426(Global_35, 0) && func_426(iLocal_110, 0))
	{
		if (does_entity_exist(iLocal_118))
		{
			if (func_1297(Global_35, get_entity_coords(iLocal_118, true, false), 9.5f, 1, 0) && !_0x1ecc76792f661cf5("MAR7_JTOCNOTN"))
			{
				func_27(&uLocal_253, 0);
				if (func_1228(&uLocal_253) > 5f)
				{
					if (func_1777(uParam0, "MAR7_JTOCNOTN", 0))
					{
						func_524(&uLocal_253);
					}
				}
			}
			else
			{
				func_524(&uLocal_253);
			}
		}
	}
}

void func_1232(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_1778(vParam0);
		func_1779(vParam0);
	}
}

bool func_1233()
{
	if (func_1355(iLocal_174))
	{
		return true;
	}
	else if (func_858(Global_35, iLocal_113, 0.5f, 1))
	{
		return true;
	}
	else if (_0x005e6f28dd7ed58d(iLocal_174, "Nils"))
	{
		return true;
	}
	else if (!_is_anim_scene_started(iLocal_174, false))
	{
		return true;
	}
	return false;
}

void func_1234(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			func_436(&iVar0);
		}
	}
}

void func_1235(var uParam0)
{
	func_151(uParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(uParam0, iLocal_110, "CharlesSmith", 0, 0, 0, 0);
	func_151(uParam0, iLocal_111, "MRDEVON", 0, 0, 0, 0);
	func_151(uParam0, iLocal_112, "MRWAYNE", 0, 0, 0, 0);
	func_151(uParam0, iLocal_113, "Nils", 0, 0, 0, 0);
	func_412(uParam0, iLocal_126, "wagon02x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_118, "wagon02x^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_169, "p_toolbox01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_162, "p_axe02x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_163, "p_benchwork01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_164, "p_grindingwheel01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_165, "p_hammer01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_166, "p_mallet01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_167, "p_sawHand01x", 0, 0, 0, 0);
}

Vector3 func_1236(char* sParam0)
{
	waypoint_recording_get_num_points(sParam0, &iVar3);
	waypoint_recording_get_coord(sParam0, (iVar3 - 1), &vVar0);
	return vVar0;
}

void func_1237(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && does_entity_exist(iLocal_169))
	{
		if (bParam1)
		{
			if (!is_entity_attached_to_any_vehicle(iLocal_169))
			{
				set_entity_no_collision_entity(iLocal_169, iParam0, false);
				attach_entity_to_entity_physically(iLocal_169, iParam0, 0, get_entity_bone_index_by_name(iParam0, "boot"), vLocal_209, vLocal_188, vLocal_212, iParam2, iParam3, 1, 0, 1, 2, 1, 1065353216, 1065353216);
			}
		}
		else if (is_entity_attached(iLocal_169))
		{
			detach_entity(iLocal_169, false, true);
			freeze_entity_position(iLocal_169, false);
			set_entity_no_collision_entity(iLocal_169, iParam0, true);
			clear_entity_last_damage_entity(iLocal_169);
		}
	}
}

void func_1238(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0))
		{
			_0x0c3f0f7f92ca847c(iParam0, 100f);
		}
	}
}

void func_1239(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1780((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1240(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 4, 8f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_TOBEECHERS", 1f, 1073741824, 0, 0))
			{
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (func_1758(uParam0, "MAR7_NOTRIGHT", 1f, 1073741824, 0, 0))
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_1759(19))
			{
				if (!func_1297(iLocal_118, func_375(2, 2), 7.5f, 1, 1))
				{
					func_1230();
				}
			}
			else
			{
				func_135(uParam0, 51);
			}
			break;
	}
}

void func_1241(var uParam0)
{
	if (iVar1636 < 5)
	{
		if (func_426(Global_35, 0) && func_426(iLocal_113, 0))
		{
			if (func_858(Global_35, iLocal_113, 6f, 1))
			{
				if (iVar1636 >= 4)
				{
					if (func_1758(uParam0, "MAR7_NILSRET_LT", 5f, 1073741824, 0, 1))
					{
						uLocal_1639 = iVar1636 + 1;
					}
				}
				else if (func_1758(uParam0, "MAR7_NILSRET", 5f, 1073741824, 0, 1))
				{
					uLocal_1639 = iVar1636 + 1;
				}
			}
		}
	}
}

bool func_1242()
{
	if (!_is_anim_scene_loaded(iLocal_176, true, false))
	{
		load_anim_scene(iLocal_176);
		return false;
	}
	set_anim_scene_entity(iLocal_176, "CharlesSmith", iLocal_110, 0);
	start_anim_scene(iLocal_176);
	return true;
}

void func_1243(var uParam0, int iParam1)
{
	func_1781(&(uParam0->f_7375.f_860), iParam1);
}

void func_1244(float fParam0)
{
	func_1782(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1245()
{
	func_524(&uLocal_91);
	func_524(&uLocal_94);
}

bool func_1246()
{
	func_1783(&Local_1063, 10);
	if (!func_1784(&Local_257))
	{
		return false;
	}
	if (!func_1785(Local_257[0], 0, 10, 23, -183018591, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[1], 0, 10, 13, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[8], 4, 10, 2, 1999408598, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[2], 0, 10, 29, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[7], 4, 10, 16, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[6], 4, 10, 17, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[5], 4, 10, 1, 379542007, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[3], 0, 10, 31, -183018591, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_257[4], 0, 10, 30, -1569615261, 680856689, 0, 1))
	{
		return false;
	}
	return true;
}

bool func_1247()
{
	func_1783(&Local_1063, 10);
	if (!func_1784(&Local_438))
	{
		return false;
	}
	if (!func_1785(Local_438[0], 4, 10, 4, 127400949, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_438[1], 4, 10, 11, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_438[2], 4, 10, 24, 1999408598, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_438[3], 4, 10, 26, -183018591, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_438[4], 4, 10, 28, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_438[5], 1, 10, 0, -1569615261, 680856689, 0, 1))
	{
		return false;
	}
	return true;
}

bool func_1248(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			if (!_0xa0bc8faed8cfeb3c(uParam0[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1249()
{
	if (_does_anim_scene_exist(iLocal_176))
	{
		if (does_entity_exist(iLocal_126))
		{
			if (func_1206(iLocal_126, sLocal_57, 210))
			{
				if (func_1354(iLocal_176))
				{
					Var0.f_8 = -1082130432;
					if (!bVar1652)
					{
						vVar20 = { get_offset_from_entity_in_world_coords(iLocal_126, -20f, 15f, 10f) };
						vVar23 = { get_offset_from_entity_in_world_coords(iLocal_126, 0f, -1f, 0f) };
						if (func_1786(iLocal_176, 1.5f))
						{
							Var0 = { vVar20 };
							Var0.f_3 = { vVar23 };
							Var0.f_6 = -2002235300;
							Var0.f_11 = Global_35;
							Var0.f_7 = 1f;
							Var0.f_13 = 1;
							Var0.f_16 = 1;
							iLocal_1654 = 1;
							_fire_single_bullet_ignore_entity_new(&Var0);
							return;
						}
					}
					if (!bVar1653)
					{
						vVar26 = { get_offset_from_entity_in_world_coords(iLocal_126, -20f, 15f, 10f) };
						vVar29 = { get_offset_from_entity_in_world_coords(iLocal_126, 0f, 8f, 1.5f) };
						if (func_1786(iLocal_176, 2.3f))
						{
							Var0 = { vVar26 };
							Var0.f_3 = { vVar29 };
							Var0.f_6 = -2002235300;
							Var0.f_11 = Global_35;
							Var0.f_7 = 1f;
							Var0.f_13 = 1;
							Var0.f_16 = 1;
							iLocal_1655 = 1;
							_fire_single_bullet_ignore_entity_new(&Var0);
							return;
						}
					}
					if (!bVar1654)
					{
						vVar32 = { get_offset_from_entity_in_world_coords(iLocal_126, -20f, 15f, 10f) };
						vVar35 = { get_offset_from_entity_in_world_coords(iLocal_126, 0f, 7f, 2.5f) };
						if (func_1786(iLocal_176, 2.6f))
						{
							Var0 = { vVar32 };
							Var0.f_3 = { vVar35 };
							Var0.f_6 = -2002235300;
							Var0.f_11 = Global_35;
							Var0.f_7 = 1f;
							Var0.f_13 = 1;
							Var0.f_16 = 1;
							iLocal_1656 = 1;
							_fire_single_bullet_ignore_entity_new(&Var0);
							return;
						}
					}
				}
			}
		}
	}
}

bool func_1250()
{
	if (!func_1784(&Local_257))
	{
		return false;
	}
	if (!func_1787(Local_257[0], func_210(3, 13), -183018591))
	{
		return false;
	}
	if (!func_1787(Local_257[1], func_210(3, 14), -2002235300))
	{
		return false;
	}
	return true;
}

void func_1251()
{
	if ((func_1786(iLocal_176, 1.75f) || func_1355(iLocal_176)) || !func_1354(iLocal_176))
	{
		if (!bVar1651)
		{
			if (!does_blip_exist(iVar1635) && does_entity_exist(&(Local_257[0])))
			{
				iLocal_1637 = _blip_add_for_coord(831283580, get_entity_coords(&(Local_257[0]), true, false));
				_blip_set_modifier(iVar1635, -948075745);
			}
			if (!does_blip_exist(iVar1636) && does_entity_exist(&(Local_257[1])))
			{
				iLocal_1638 = _blip_add_for_coord(831283580, get_entity_coords(&(Local_257[1]), true, false));
				_blip_set_modifier(iVar1636, -948075745);
			}
			iLocal_1653 = 1;
		}
	}
}

bool func_1252()
{
	if (func_1355(iLocal_176))
	{
		return true;
	}
	else if (_0x005e6f28dd7ed58d(iLocal_176, "CharlesSmith"))
	{
		return true;
	}
	else if (!_is_anim_scene_started(iLocal_176, false))
	{
		return true;
	}
	return false;
}

void func_1253(var uParam0)
{
	func_151(uParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(uParam0, iLocal_110, "CharlesSmith", 0, 0, 0, 0);
	func_151(uParam0, iLocal_111, "MRDEVON", 0, 0, 0, 0);
	func_151(uParam0, iLocal_112, "MRWAYNE", 0, 0, 0, 0);
	func_151(uParam0, &(Local_257[0]), "G_M_M_UNIMOUNTAINMEN_01", 0, 0, 0, 0);
	func_151(uParam0, &(Local_257[1]), "G_M_M_UniMountainMen_01^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_126, "wagon02x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_118, "wagon02x^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_169, "p_toolbox01x", 0, 0, 0, 0);
}

void func_1254(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_1410(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

void func_1255(bool bParam0)
{
	if (func_426(iLocal_110, 0))
	{
		set_ped_sphere_defensive_area(iLocal_110, get_scripted_cover_point_coords(iLocal_239), (3f * 0.6f), bParam0, !bParam0, 0);
		set_ped_sphere_defensive_area(iLocal_110, get_scripted_cover_point_coords(iLocal_240), (3f * 0.6f), !bParam0, bParam0, 0);
	}
}

float func_1256(int iParam0, int iParam1)
{
	return func_955(iParam0, iParam1);
}

void func_1257()
{
	if (func_426(iLocal_112, 0))
	{
		if (get_ped_relationship_group_hash(iLocal_112) != iLocal_245)
		{
			if (add_relationship_group("MAR7_REL_GROUP_WAYNE", &iLocal_245))
			{
				set_ped_config_flag(iLocal_112, 273, true);
				set_ped_can_ragdoll_from_player_impact(iLocal_112, false);
				set_ped_relationship_group_hash(iLocal_112, iLocal_245);
				set_relationship_between_groups(3, 1269650476, iLocal_245);
				set_relationship_between_groups(3, iLocal_245, 1269650476);
				set_relationship_between_groups(2, -1538724068, iLocal_245);
				set_relationship_between_groups(2, iLocal_245, -1538724068);
				set_relationship_between_groups(2, 1862763509, iLocal_245);
				set_relationship_between_groups(2, iLocal_245, 1862763509);
			}
		}
	}
}

void func_1258()
{
	set_anim_scene_entity(iLocal_180, "MRWAYNE", iLocal_112, 0);
	set_anim_scene_entity(iLocal_180, "wagon", iLocal_126, 0);
}

void func_1259()
{
	*Local_1472[0] = { -2031.353f, -1403.528f, 121.4388f };
	*Local_1472[1] = { -2004.315f, -1394.493f, 116.6264f };
	*Local_1472[2] = { -2017.711f, -1396.377f, 118.3392f };
	*Local_1472[3] = { -2031.825f, -1403.447f, 121.5632f };
	*Local_1472[4] = { -2027.067f, -1422.494f, 122.5268f };
	*Local_1472[5] = { -2034.15f, -1438.8f, 122.7624f };
	*Local_1472[6] = { -2016.325f, -1449.467f, 116.7275f };
	*Local_1472[7] = { -2011.597f, -1428.778f, 116.5006f };
	*Local_1521[0] = { -1969.409f, -1404.5f, 114.9346f };
	*Local_1521[1] = { -1983.125f, -1379.392f, 115.5112f };
	*Local_1521[2] = { -1956.891f, -1416.576f, 110.2996f };
	*Local_1521[3] = { -1965.191f, -1388.451f, 113.2928f };
	*Local_1521[4] = { -1977.144f, -1384.628f, 115.0865f };
	*Local_1521[5] = { -2005.708f, -1392.296f, 116.8853f };
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iVar1470 - 1))
	{
		iVar1 = get_random_int_in_range(2000, 6000);
		Local_1472[iVar0]->f_4 = iVar1;
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar1519 - 1))
	{
		iVar3 = get_random_int_in_range(2000, 6000);
		Local_1521[iVar2]->f_4 = iVar3;
		iVar2++;
	}
}

void func_1260(int iParam0, bool bParam1)
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

void func_1261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_7 = 0;
		clear_ped_tasks(*uParam0, 0, 0);
		_blip_set_modifier(uParam0->f_3, -1186550032);
	}
	else
	{
		_set_blip_flash_style(uParam0->f_3, -1186550032);
	}
	stop_ped_speaking(*uParam0, bParam1);
	_set_ped_crouch_movement(*uParam0, bParam1, 0, bParam1);
	freeze_entity_position(*uParam0, bParam1);
	set_entity_invincible(*uParam0, bParam1);
	set_entity_visible(*uParam0, !bParam1);
	set_ped_config_flag(*uParam0, 273, bParam1);
	set_entity_completely_disable_collision(*uParam0, !bParam1, true);
}

void func_1262(var uParam0)
{
	func_1788(&(uParam0->f_7375));
}

void func_1263(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1789((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1264(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 5, 8f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_JWAYSHOT1", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (func_1758(uParam0, "MAR7_JWAYSHOT2", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_1758(uParam0, "MAR7_JSHOOTOUT", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 5);
			}
			break;
		case 5:
			if (func_1758(uParam0, "MAR7_AMBUSHED", 1f, 1073741824, 0, 1))
			{
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (func_1758(uParam0, "MAR7_CAMBUSH2", 2.5f, 1073741824, 0, 1))
			{
				func_135(uParam0, 7);
			}
			break;
		case 7:
			if (iVar1671 >= 3)
			{
				if (func_1758(uParam0, "MAR7_CAMBUSH3", 2.5f, 1073741824, 0, 1))
				{
					func_135(uParam0, 8);
				}
			}
			break;
		case 8:
			if (iVar1669 == 2)
			{
				if (func_1758(uParam0, "MAR7_COTHERSIDE", 0, 1073741824, 0, 1))
				{
					func_135(uParam0, 9);
				}
			}
			break;
		case 9:
			if (iVar1671 >= 5)
			{
				if (func_1758(uParam0, "MAR7_CRETREAT", 2.5f, 1073741824, 0, 1))
				{
					func_135(uParam0, 51);
				}
			}
			break;
	}
	if (func_1759(19))
	{
		if (func_1274(&Local_257) != (iVar254 - 1) || func_1274(&Local_438) != (iVar435 - 1))
		{
			func_1230();
		}
	}
}

void func_1265(var uParam0)
{
	if (iVar1672 == 0 || iVar1672 == 1)
	{
		func_1307(&Local_257);
		func_1308(uParam0, &Local_257, &Local_1570, 1109393408);
	}
	else if (iVar1672 == 2)
	{
		func_1307(&Local_438);
		func_1308(uParam0, &Local_438, &Local_1570, 1109393408);
	}
}

void func_1266(var uParam0)
{
	if (func_426(iLocal_112, 0))
	{
		if (is_entity_on_screen(iLocal_112))
		{
			if (!func_26(&uLocal_1669) || func_1228(&uLocal_1669) > 8f)
			{
				func_524(&uLocal_1669);
				if (func_1777(uParam0, "MAR7_WAYSHOT", 0))
				{
					func_27(&uLocal_1669, 0);
				}
			}
		}
	}
}

void func_1267(var uParam0)
{
	if (func_426(iLocal_111, 0) && func_426(Global_35, 0))
	{
		iVar0 = 0;
		switch (iVar1670)
		{
			case 2:
				fLocal_1651 = 1f;
				iVar0 = 5;
				break;
			case 1:
			case 3:
				if (func_1790(&Local_257))
				{
					fLocal_1651 = 1f;
					iVar0 = 4;
				}
				else if (func_1297(iLocal_111, get_entity_coords(Global_35, true, false), 5f, 1, 0) && is_entity_on_screen(iLocal_111))
				{
					iVar0 = 3;
				}
				else if ((iVar1649 % 2) == 0)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 1;
				}
				break;
		}
		if (iVar1671 < 4)
		{
			if (iVar0 > 0 && iVar0 < 6)
			{
				if (!func_26(&uLocal_1663) || func_1228(&uLocal_1663) > fVar1648)
				{
					func_524(&uLocal_1663);
					if (func_1777(uParam0, func_1791(iVar0), 0))
					{
						fLocal_1651 = get_random_float_in_range(5f, 10f);
						uLocal_1652 = iVar1649 + 1;
						func_27(&uLocal_1663, 0);
					}
				}
			}
		}
	}
}

void func_1268(var uParam0, bool bParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (does_entity_exist(uParam0[iVar0]) && (*uParam0)[iVar0]->f_19)
		{
			if ((*uParam0)[iVar0]->f_7 != 12)
			{
				func_1792((*uParam0)[iVar0], bParam1);
			}
		}
		iVar0++;
	}
}

void func_1269()
{
	switch (iVar1672)
	{
		case 0:
			iLocal_1674 = 1;
			break;
		case 1:
			if (func_1274(&Local_257) <= 3 || func_1274(&Local_438) <= 3)
			{
				func_1793(&Local_257, 4);
				func_1793(&Local_438, 4);
				func_524(&uLocal_1622);
				iLocal_1677 = 0;
				iLocal_1674 = 2;
			}
			break;
		case 2:
			if (func_1274(&Local_257) <= 3)
			{
				if (func_1794(&Local_257, vLocal_1644, uVar1645))
				{
					func_524(&uLocal_1657);
					func_1795(&Local_1472);
					if (iVar1673 == 1)
					{
						iLocal_1672 = 3;
					}
					iLocal_1676 = 2;
					iLocal_1674 = 3;
				}
			}
			else if (func_1274(&Local_438) <= 3)
			{
				if (func_1794(&Local_438, vLocal_1640, uVar1641))
				{
					func_524(&uLocal_1657);
					func_1795(&Local_1521);
					if (iVar1673 == 2)
					{
						iLocal_1672 = 3;
					}
					iLocal_1676 = 1;
					iLocal_1674 = 3;
				}
			}
			break;
		case 3:
			func_1796();
			if ((func_1274(&Local_257) + func_1274(&Local_438)) <= 3)
			{
				func_1797(&Local_257, 0);
				func_1797(&Local_438, 0);
				func_524(&uLocal_1622);
				iLocal_1677 = 0;
				iLocal_1674 = 4;
			}
			break;
		case 4:
			if (does_entity_exist(&(Local_438[5])))
			{
				if (Local_438[5]->f_7 == 1 || Local_438[5]->f_7 == 0)
				{
					func_439(Local_438[5]);
				}
			}
			func_27(&uLocal_1619, 0);
			if (func_1228(&uLocal_1619) > 10f)
			{
				func_1303(&Local_257, 10);
				func_1303(&Local_438, 10);
				func_1795(&Local_1472);
				func_1795(&Local_1521);
				func_524(&uLocal_1619);
				if (iVar1670 < 4)
				{
					iLocal_1672 = 4;
				}
				iLocal_1674 = 5;
			}
			break;
		case 5:
			func_27(&uLocal_1619, 0);
			if (func_1228(&uLocal_1619) > 10f || (!func_1798(&Local_257, func_375(3, 0), 75f) && !func_1798(&Local_438, func_375(3, 0), 75f)))
			{
				func_524(&uLocal_1619);
				iLocal_1674 = 6;
			}
			break;
	}
	func_1799();
}

void func_1270()
{
	switch (iVar1670)
	{
		case 0:
			func_27(&uLocal_1657, 0);
			if (func_1228(&uLocal_1657) > 2.5f)
			{
				_set_ped_crouch_movement(iLocal_110, false, 0, false);
				func_524(&uLocal_1657);
				iLocal_1675 = 1;
				func_1800(iVar1673);
				iLocal_1672 = 2;
			}
			break;
		case 1:
			if (is_ped_in_cover(iLocal_110, 0, 0) && func_1297(iLocal_110, get_ped_defensive_area_position(iLocal_110, false), 3f, 1, 1))
			{
				iLocal_1672 = 2;
			}
			break;
		case 2:
			if (!func_1762(iLocal_110, 1120685857))
			{
				func_1800(iVar1673);
			}
			else if (iVar1673 == 1)
			{
				func_27(&uLocal_1666, 0);
				if (func_1228(&uLocal_1666) > 8f)
				{
					func_524(&uLocal_1666);
					func_1255(func_1297(iLocal_110, get_scripted_cover_point_coords(iLocal_240), 1.5f, 1, 0));
				}
			}
			if (iVar1672 < 2)
			{
				if (func_1801() != iVar1673)
				{
					func_27(&uLocal_1657, 0);
					if (func_1228(&uLocal_1657) > 6.5f)
					{
						func_1802();
						func_524(&uLocal_1657);
					}
				}
				else
				{
					func_524(&uLocal_1657);
				}
			}
			break;
		case 3:
			func_27(&uLocal_1657, 0);
			if (func_1228(&uLocal_1657) > 6.5f || func_1803(*Local_438[5]))
			{
				func_1802();
				func_524(&uLocal_1657);
			}
			break;
		case 4:
			if (func_1297(iLocal_110, vLocal_1648, 4f, 1, 0))
			{
				iLocal_1672 = 5;
			}
			else if (!func_1762(iLocal_110, 713668775))
			{
				task_follow_nav_mesh_to_coord(iLocal_110, vLocal_1648, 1.5f, 20000, 0.25f, 0, 40000f);
			}
			break;
		case 5:
			break;
	}
}

void func_1271()
{
	switch (iVar1671)
	{
		case 0:
			iLocal_1673 = 1;
			break;
		case 1:
			if (iVar1674 == 2 || func_1274(&Local_257) <= 0)
			{
				func_27(&uLocal_1660, 0);
				if (func_1228(&uLocal_1660) > 5f)
				{
					set_ped_sphere_defensive_area(iLocal_111, func_375(3, 11), 1.15f, true, false, 0);
					set_ped_sphere_defensive_area(iLocal_111, func_375(3, 12), 1.15f, false, true, 0);
					open_sequence_task(&iLocal_216);
					task_seek_cover_to_coords(0, func_375(3, 11), vLocal_1644, -1, 1, 1, 0);
					task_combat_hated_targets_in_area(0, vLocal_1644, fVar1645, 0, 0);
					close_sequence_task(iLocal_216);
					task_perform_sequence(iLocal_111, iLocal_216);
					clear_sequence_task(&iLocal_216);
					func_524(&uLocal_1660);
					iLocal_1673 = 2;
				}
				else if (!func_1762(iLocal_111, 242628503) && !func_1762(iLocal_111, 1120685857))
				{
					task_combat_hated_targets_in_area(iLocal_111, vLocal_1640, fVar1641, 0, 0);
				}
			}
			break;
		case 2:
			if ((func_1297(iLocal_111, func_375(3, 11), 1.15f, 1, 0) || func_1297(iLocal_111, get_ped_defensive_area_position(iLocal_111, false), 1.15f, 1, 0)) || func_1297(iLocal_111, get_ped_defensive_area_position(iLocal_111, true), 1.15f, 1, 0))
			{
				iLocal_1673 = 3;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_1272()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iVar255 - 1))
	{
		if (!func_426(&(Local_257[iVar0]), 0))
		{
			func_1804(&Local_1472, iVar0);
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar436 - 1))
	{
		if (!func_426(&(Local_438[iVar1]), 0))
		{
			func_1804(&Local_1521, iVar1);
		}
		iVar1++;
	}
	func_1805(&Local_1472);
	func_1805(&Local_1521);
}

void func_1273(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (func_426(iParam1, 0))
	{
		if (func_1806(&uLocal_100, fParam2))
		{
			func_1807(uParam0, iParam1, 1, 0);
		}
		else
		{
			if (bParam3)
			{
				set_entity_invincible(iParam1, !is_entity_on_screen(iParam1));
			}
			func_1807(uParam0, iParam1, 0, 0);
		}
	}
}

int func_1274(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (func_426(uParam0[iVar0], 2) && !is_ped_dead_or_dying(uParam0[iVar0], true))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1275()
{
	if (func_426(Global_35, 0))
	{
		if (!func_1762(Global_35, 1318460802))
		{
			if (is_ped_in_cover(Global_35, 0, 1))
			{
				vVar0.x = Global_35;
				vVar0.f_1 = 1;
				vVar0.f_2 = { get_entity_coords(Global_35, true, false) };
				task_exit_cover(&vVar0);
			}
		}
	}
}

void func_1276(int iParam0)
{
	set_ped_config_flag(*iParam0, 273, true);
	set_ped_can_ragdoll_from_player_impact(*iParam0, false);
	set_ped_relationship_group_hash(*iParam0, -1538724068);
}

void func_1277(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (func_426(uParam0[iVar0], 0))
		{
			(*uParam0)[iVar0]->f_19 = 0;
			func_927(&((*uParam0)[iVar0]->f_2));
			func_1550((*uParam0)[iVar0], 1, 1, 1);
		}
		iVar0++;
	}
}

void func_1278(var uParam0, int iParam1)
{
	func_524(&uLocal_100);
	if (func_426(iParam1, 0))
	{
		func_1807(uParam0, iParam1, 0, 0);
	}
}

bool func_1279()
{
	if (!func_1784(&Local_600))
	{
		return false;
	}
	if (!func_1785(Local_600[0], 0, 4, 6, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_600[1], 0, 4, 7, -1569615261, 680856689, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_1280()
{
	if (!func_1784(&Local_559))
	{
		return false;
	}
	if (!func_1785(Local_559[0], 0, 4, 4, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_559[1], 0, 4, 5, -1569615261, 680856689, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_1281()
{
	if (!func_1808(&Local_1026))
	{
		return false;
	}
	if (!func_1809(Local_1026[0], func_210(5, 2), 680856689))
	{
		return false;
	}
	if (!func_1809(Local_1026[1], func_210(5, 3), 680856689))
	{
		return false;
	}
	return true;
}

bool func_1282()
{
	func_1783(&Local_1244, 11);
	if (!func_1784(&Local_641))
	{
		return false;
	}
	if (!func_1785(Local_641[0], 1, 11, 1, -2002235300, 680856689, 1, 0))
	{
		return false;
	}
	if (!func_1785(Local_641[1], 1, 11, 2, -2002235300, 680856689, 1, 0))
	{
		return false;
	}
	if (!func_1785(Local_641[2], 1, 11, 3, -2002235300, 680856689, 1, 0))
	{
		return false;
	}
	if (!func_1785(Local_641[3], 1, 11, 4, 127400949, 680856689, 1, 0))
	{
		return false;
	}
	if (!func_1785(Local_641[4], 1, 11, 5, -183018591, 680856689, 1, 0))
	{
		return false;
	}
	if (!func_1785(Local_641[5], 1, 11, 0, -183018591, 680856689, 0, 1))
	{
		return false;
	}
	return true;
}

void func_1283(var uParam0)
{
	func_151(uParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(uParam0, iLocal_110, "CharlesSmith", 0, 0, 0, 0);
	func_151(uParam0, iLocal_111, "MRDEVON", 0, 0, 0, 0);
	func_151(uParam0, iLocal_112, "MRWAYNE", 0, 0, 0, 0);
	func_151(uParam0, &(Local_559[0]), "G_M_M_UNIMOUNTAINMEN_01", 0, 0, 0, 0);
	func_151(uParam0, &(Local_559[1]), "G_M_M_UniMountainMen_01^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_126, "wagon02x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_118, "wagon02x^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_169, "p_toolbox01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_172, "p_cs_wagon02xbroken", 0, 0, 0, 0);
}

void func_1284(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1285()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_426(&(Local_1026[iVar0]), 0) && does_entity_exist(Local_1026[iVar0]->f_4))
		{
			if (_does_anim_scene_exist(Local_1026[iVar0]->f_14))
			{
				if (!_is_anim_scene_started(Local_1026[iVar0]->f_14, false))
				{
					set_anim_scene_entity(Local_1026[iVar0]->f_14, sLocal_80, &(Local_1026[iVar0]), 0);
					set_anim_scene_entity(Local_1026[iVar0]->f_14, sLocal_78, Local_1026[iVar0]->f_4, 0);
					set_anim_scene_entity(Local_1026[iVar0]->f_14, sLocal_79, get_current_ped_weapon_entity_index(&(Local_1026[iVar0]), 0), 0);
					set_anim_scene_origin(Local_1026[iVar0]->f_14, Local_1026[iVar0]->f_10, 0f, 0f, Local_1026[iVar0]->f_10.f_3, 2);
					start_anim_scene(Local_1026[iVar0]->f_14);
				}
			}
		}
		iVar0++;
	}
}

int func_1286(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	iVar0 = _blip_add_for_radius(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1287(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 6, 5f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_CAFTERWAY", 1f, 1073741824, 0, 0))
			{
				func_135(uParam0, 51);
			}
			break;
	}
	if (func_1759(19))
	{
		if (!func_1297(Global_35, func_375(4, 0), 5f, 1, 1))
		{
			func_1230();
		}
	}
}

void func_1288(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
		{
			waypoint_playback_override_speed(iParam0, fParam1, 0, -1082130432, 0);
		}
	}
}

void func_1289(var uParam0)
{
	if (func_426(iLocal_112, 0))
	{
		if (!func_26(&uLocal_1680) || func_1228(&uLocal_1680) > 1f)
		{
			if (!_0x1ecc76792f661cf5("MAR7_WAYHELP1"))
			{
				func_524(&uLocal_1680);
				if (func_1777(uParam0, "MAR7_WAYHELP1", 0))
				{
					func_27(&uLocal_1680, 0);
				}
			}
		}
	}
}

void func_1290(var uParam0)
{
	if (func_426(Global_35, 0) && func_426(iLocal_111, 0))
	{
		if (!func_26(&uLocal_1683) || func_1228(&uLocal_1683) > 5f)
		{
			if (func_1297(Global_35, get_entity_coords(iLocal_111, true, false), 10f, 1, 0))
			{
				if (is_entity_on_screen(iLocal_111))
				{
					if (get_ped_desired_move_blend_ratio(Global_35) < 1.5f)
					{
						if (func_1777(uParam0, "MAR7_DEVGOCHASE", 0))
						{
							func_27(&uLocal_1686, 0);
						}
					}
				}
			}
		}
	}
}

void func_1291(var uParam0)
{
	if (func_426(Global_35, 0) && func_426(iLocal_110, 0))
	{
		bVar0 = func_1810();
		if (!_0x54b187f111d9c6f8(iLocal_110, 0))
		{
			if (((bVar0 && !bVar1676) || !func_26(&uLocal_1686)) || func_1228(&uLocal_1686) > 5f)
			{
				if (bVar0)
				{
					if (func_1777(uParam0, "MAR7_CJWANDER", 0))
					{
						func_27(&uLocal_1686, 0);
						iLocal_1679 = 1;
					}
				}
				else if (get_ped_desired_move_blend_ratio(Global_35) < 2f)
				{
					if (func_1777(uParam0, "MAR7_CWAITFORJ", 0))
					{
						func_27(&uLocal_1686, 0);
					}
				}
			}
		}
	}
}

void func_1292(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Local_1026[iVar0]->f_6 != 10)
		{
			func_1811(Local_1026[iVar0]);
		}
		iVar0++;
	}
	func_1812(uParam0);
}

bool func_1293()
{
	if ((does_entity_exist(iLocal_112) && does_entity_exist(&(Local_600[0]))) && does_entity_exist(&(Local_600[1])))
	{
		if (func_1206(&(Local_600[0]), cLocal_59, 25) && func_1206(&(Local_600[1]), cLocal_59, 25))
		{
			if ((func_1769(&(Local_600[0]), cLocal_59) && func_1769(&(Local_600[1]), cLocal_59)) || ((!is_tracked_ped_visible(&(Local_600[0])) && !is_tracked_ped_visible(&(Local_600[1]))) && !is_tracked_ped_visible(iLocal_112)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1294()
{
	if (does_entity_exist(&(Local_600[0])) || does_entity_exist(&(Local_600[1])))
	{
		set_entity_visible(iLocal_112, false);
		func_1335(&(Local_600[1]), 0, 1361896662);
		func_1217(iLocal_112, func_210(7, 2), 2, 1073741824);
		func_441(&Local_600, 1);
	}
}

void func_1295(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_424(uParam0, 2);
	}
	else
	{
		func_424(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1526(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

bool func_1296(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vParam4 - vParam1 };
	vVar6 = { vParam4 - vVar0 };
	fVar9 = absf(vmag(vVar3));
	fVar10 = absf(vmag(vVar6));
	if (fVar10 < fVar9)
	{
		return true;
	}
	return false;
}

bool func_1297(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1567(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1298(int iParam0)
{
	if (func_426(iParam0, 0))
	{
		_0x58f7db5bd8fa2288(iParam0);
	}
}

int func_1299(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*iParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*iParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*iParam1, iParam2) != *iParam0)
	{
		if (!is_vehicle_seat_free(*iParam1, iParam2))
		{
			if (iParam3 && func_1813(*iParam1))
			{
				iParam2 = func_1814(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (is_ped_on_mount(*iParam0))
		{
			_remove_ped_from_mount(*iParam0, true, false);
		}
		set_ped_into_vehicle(*iParam0, *iParam1, iParam2);
	}
	return 1;
}

void func_1300()
{
	set_current_ped_weapon(iLocal_111, 127400949, true, 0, false, false);
	task_wander_in_area(iLocal_111, get_entity_coords(iLocal_111, true, false), 7.5f, 1077936128, 1086324736, 0);
	_0x89f5e7adecccb49c(iLocal_111, "action");
}

bool func_1301()
{
	iVar6 = 0;
	while (iVar6 <= 1)
	{
		_get_anim_scene_origin(Local_1026[iVar6]->f_14, &vVar0, &uVar3, 2);
		if (!does_entity_exist(Local_1026[iVar6]->f_4))
		{
			Local_1026[iVar6]->f_4 = create_object(iLocal_47, vVar0, true, true, false, false, true);
			return false;
		}
		set_anim_scene_entity(Local_1026[iVar6]->f_14, sLocal_78, Local_1026[iVar6]->f_4, 0);
		iVar6++;
	}
	return true;
}

void func_1302(var uParam0, float fParam1, float fParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (func_426(uParam0[iVar0], 0))
		{
			(*uParam0)[iVar0]->f_18 = get_random_float_in_range(fParam1, fParam2);
			func_27(&((*uParam0)[iVar0]->f_13), 0);
		}
		iVar0++;
	}
}

void func_1303(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1815((*uParam0)[iVar0], iParam1);
		iVar0++;
	}
}

void func_1304(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (func_426(uParam0[iVar0], 0))
		{
			(*uParam0)[iVar0]->f_6 = iParam1;
		}
		iVar0++;
	}
}

void func_1305(var uParam0, bool bParam1)
{
	if (func_426(*uParam0, 0))
	{
		if (bParam1)
		{
			_set_blip_flash_style(uParam0->f_3, -1186550032);
		}
		else
		{
			_blip_set_modifier(uParam0->f_3, -1186550032);
		}
		set_ped_config_flag(*uParam0, 273, !bParam1);
	}
}

void func_1306(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 7, 8f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1296(Global_35, func_375(4, 10), func_375(6, 2)) && func_1296(iLocal_110, func_375(4, 10), func_375(6, 2)))
			{
				if (func_120(uParam0, 4))
				{
					func_135(uParam0, 3);
				}
				else if (func_1758(uParam0, "MAR7_CFINDSMORE", 0, 1073741824, 1, 0))
				{
					func_135(uParam0, 3);
				}
			}
			break;
		case 3:
			if (func_1758(uParam0, "MAR7_JSHOUTS", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_1758(uParam0, "MAR7_TREES", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 5);
			}
			break;
		case 5:
			if (func_1312() >= 2)
			{
				func_1758(uParam0, "MAR7_TREES2", 8f, 1073741824, 0, 1);
			}
			else
			{
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (func_1274(&Local_641) <= 3 && func_1312() > 0)
			{
				func_1758(uParam0, "MAR7_TREES3", 5f, 1073741824, 0, 1);
			}
			break;
	}
	if (func_1759(19))
	{
		if (func_1274(&Local_641) != (iVar638 - 1) || func_1312() != (iVar1023 - 1))
		{
			func_1230();
		}
	}
}

void func_1307(var uParam0)
{
	func_27(&uLocal_1628, 0);
	if (func_1228(&uLocal_1628) > fVar1632)
	{
		if (!_0x1ecc76792f661cf5(sVar1633))
		{
			if (func_1816(uParam0, &iVar0, vLocal_188, 0f))
			{
				if (func_1818(iVar0, func_1817(), -435184212, 0, 1, 0, 0, 1))
				{
					func_1819();
					func_524(&uLocal_1628);
				}
			}
		}
	}
}

void func_1308(var uParam0, var uParam1, var uParam2, float fParam3)
{
	func_27(&uLocal_1625, 0);
	if (func_1228(&uLocal_1625) > fVar1628)
	{
		iVar0 = func_1820(uParam2);
		if (iVar0 >= 0)
		{
			if (func_1816(uParam1, &iVar1, get_entity_coords(Global_35, true, false), fParam3))
			{
				if (does_entity_exist(uParam2[iVar0]))
				{
					func_1821(uParam0, uParam2[iVar0]);
				}
				func_145(uParam0, iVar1, (*uParam2)[iVar0]->f_2, 0);
				(*uParam2)[iVar0] = iVar1;
				if (func_1777(uParam0, (*uParam2)[iVar0]->f_1, 0))
				{
					func_524(&uLocal_1625);
					func_1503();
					uLocal_1636 = (*uParam2)[iVar0]->f_1;
					(*uParam2)[iVar0]->f_4++;
				}
			}
		}
	}
}

void func_1309()
{
	switch (iVar1690)
	{
		case 0:
			func_27(&uLocal_1622, 0);
			iLocal_1692 = 1;
			break;
		case 1:
			if (func_1228(&uLocal_1622) > 2.5f)
			{
				func_1822(Local_641[5], 9, 1, 1081081856);
				func_207(&uLocal_1622);
				iLocal_1692 = 2;
			}
			break;
		case 2:
			if (func_1228(&uLocal_1622) > 5f)
			{
				func_1822(Local_641[3], 0, 1, 1081081856);
				func_207(&uLocal_1622);
				iLocal_1692 = 3;
			}
			break;
		case 3:
			if (func_1228(&uLocal_1622) > 5f)
			{
				func_1822(Local_641[1], 6, 2, 1081081856);
				func_207(&uLocal_1622);
				iLocal_1692 = 4;
			}
			break;
		case 4:
			if (func_1228(&uLocal_1622) > 8f)
			{
				func_1822(Local_641[2], 10, 0, 1081081856);
				func_207(&uLocal_1622);
				iLocal_1692 = 5;
			}
			break;
		case 5:
			if (func_1228(&uLocal_1622) > 5f)
			{
				func_1822(Local_641[3], 11, 0, 1081081856);
				func_207(&uLocal_1622);
				iLocal_1692 = 6;
			}
			break;
		case 6:
			if (func_1228(&uLocal_1622) > 2.5f)
			{
				if (!func_1314(4))
				{
					func_1823(Local_641[2], 1, 0);
					func_524(&uLocal_1622);
				}
				iLocal_1692 = 7;
			}
			break;
	}
}

void func_1310()
{
	if (!func_1315())
	{
		return;
	}
	if (!func_1316())
	{
		return;
	}
}

void func_1311()
{
	if (func_426(Global_35, 0) && func_426(iLocal_110, 0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (iVar1024 - 1))
		{
			if (func_426(&(Local_1026[iVar0]), 0))
			{
				if (Local_1026[iVar0]->f_6 < 7)
				{
					if (func_1824(Local_1026[iVar0], Global_35) < 2)
					{
						if (func_1825(get_ped_bone_coords(&(Local_1026[iVar0]), 21030, 0f, 0f, -0.2f), 0.2f, 0.8f, 0.01f, 0.99f))
						{
							func_27(&uLocal_1689, 0);
							if (func_1228(&uLocal_1689) > 2.5f)
							{
								if (!func_1762(iLocal_110, 167901368))
								{
									set_ped_combat_attributes(iLocal_110, 27, true);
									task_shoot_at_coord(iLocal_110, get_ped_bone_coords(&(Local_1026[iVar0]), 21030, 0f, 0f, -0.2f), -1, -957453492, 1);
								}
							}
							return;
						}
					}
				}
			}
			iVar0++;
		}
		if (!func_1762(iLocal_110, -2117564886))
		{
			set_ped_combat_attributes(iLocal_110, 27, false);
			task_combat_hated_targets(iLocal_110, -1f);
		}
	}
	func_524(&uLocal_1689);
}

int func_1312()
{
	iVar0 = 0;
	while (iVar0 <= (iVar1024 - 1))
	{
		if (func_426(&(Local_1026[iVar0]), 2) && !is_ped_dead_or_dying(&(Local_1026[iVar0]), true))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1313(int iParam0, struct<4> Param1, float fParam5, int iParam6, float fParam7, int iParam8)
{
	if (!is_entity_dead(iParam0) || iParam0 == 0)
	{
		task_follow_nav_mesh_to_coord(iParam0, Param1, fParam5, iParam6, fParam7, iParam8, Param1.f_3);
	}
}

bool func_1314(int iParam0)
{
	return func_378(Global_43838, iParam0);
}

bool func_1315()
{
	func_1783(&Local_1305, 12);
	if (!func_1784(&Local_762))
	{
		return false;
	}
	if (!func_1785(Local_762[0], 2, 12, 0, 127400949, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_762[1], 2, 12, 1, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_762[2], 2, 12, 8, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_1316()
{
	func_1783(&Local_1305, 12);
	if (!func_1784(&Local_823))
	{
		return false;
	}
	if (!func_1785(Local_823[0], 2, 12, 5, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_823[1], 2, 12, 4, -183018591, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_823[2], 2, 12, 7, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_823[3], 1, 12, 23, -1569615261, 680856689, 0, 1))
	{
		return false;
	}
	return true;
}

bool func_1317()
{
	func_1783(&Local_1305, 12);
	if (!func_1784(&Local_904))
	{
		return false;
	}
	if (!func_1785(Local_904[0], 2, 12, 16, 1999408598, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_904[1], 2, 12, 18, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_904[2], 2, 12, 15, 127400949, 680856689, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_1318()
{
	func_1783(&Local_1431, 13);
	if (!func_1784(&Local_965))
	{
		return false;
	}
	if (!func_1785(Local_965[0], 2, 13, 0, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	if (!func_1785(Local_965[1], 2, 13, 4, -2002235300, 680856689, 0, 0))
	{
		return false;
	}
	return true;
}

void func_1319(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1320(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 8, 12f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1759(19))
			{
				if (!func_1297(Global_35, func_375(6, 0), 10f, 1, 0))
				{
					func_1230();
				}
			}
			else
			{
				func_135(uParam0, -1);
			}
			break;
		case 3:
			func_1349(uParam0, 9, 8f);
			func_135(uParam0, 4);
			break;
		case 4:
			if (func_1759(19))
			{
				if (func_1274(&Local_762) != (iVar759 - 1))
				{
					func_1230();
				}
			}
			else
			{
				func_135(uParam0, -1);
			}
			break;
		case 5:
			func_1349(uParam0, 10, 8f);
			func_135(uParam0, 6);
			break;
		case 6:
			if (func_1759(19))
			{
				if (func_1274(&Local_965) != (iVar962 - 1))
				{
					func_1230();
				}
			}
			else
			{
				func_135(uParam0, -1);
			}
			break;
		case 7:
			func_1226(uParam0, 11, 0);
			func_135(uParam0, -1);
			break;
		case 8:
			if (!_0x1ecc76792f661cf5("MAR7_CLETSLOOK"))
			{
				func_1226(uParam0, 11, 1);
				func_135(uParam0, 51);
			}
			break;
	}
}

void func_1321(var uParam0)
{
	switch (iVar1702)
	{
		case 0:
			func_1826(1);
			break;
		case 1:
			if (func_1758(uParam0, "MAR7_CAFTRFIRST", 0, 1073741824, 1, 0))
			{
				func_1826(2);
			}
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_SK5TAUNT", 1f, 1073741824, 0, 1))
			{
				func_1826(3);
			}
			break;
		case 3:
			if (iVar1703 >= 2)
			{
				if (func_1758(uParam0, "MAR7_SK6RUN2", 0, 1073741824, 0, 1))
				{
					func_1826(4);
				}
			}
			break;
		case 4:
			if (func_1758(uParam0, "MAR7_CSEESMORE", 0, 1073741824, 0, 1))
			{
				func_1826(5);
			}
			break;
		case 5:
			if (iVar1703 >= 3)
			{
				func_1826(6);
			}
			else if (func_1228(&uLocal_1714) > 5f)
			{
				if (func_1777(uParam0, "MAR7_CSAYSCLEAR", 0))
				{
					func_524(&uLocal_1714);
				}
			}
			break;
		case 6:
			if (func_1827("MAR7_CSAYSCLEAR"))
			{
				if (func_1758(uParam0, "MAR7_BELOWUS", 0, 1073741824, 0, 1))
				{
					func_1826(7);
				}
			}
			break;
		case 7:
			if (func_1828("MAR7_BELOWUS"))
			{
				if (func_1758(uParam0, "MAR7_JSAYSCLEAR", 0, 1073741824, 0, 1))
				{
					func_1826(8);
				}
			}
			break;
		case 8:
			if (func_1790(&Local_823))
			{
				if (func_1758(uParam0, "MAR7_CTHEYCHARG", 1f, 1073741824, 1, 0))
				{
					func_1826(9);
				}
			}
			break;
		case 9:
			if (!func_426(&(Local_823[3]), 0))
			{
				if (func_1758(uParam0, "MAR7_WAYHELP2", 1f, 1073741824, 0, 1))
				{
					func_1826(10);
				}
			}
			break;
		case 10:
			if (func_1758(uParam0, "MAR7_THATCRY1", 0, 1073741824, 0, 1))
			{
				func_1826(11);
			}
			break;
		case 11:
			if (iVar1703 >= 4)
			{
				func_1826(12);
			}
			else if (func_1228(&uLocal_1714) > 5f)
			{
				if (func_1777(uParam0, "MAR7_CSAYSCLEAR", 0))
				{
					func_524(&uLocal_1714);
				}
			}
			break;
		case 12:
			if (func_1827("MAR7_CSAYSCLEAR"))
			{
				if (func_1758(uParam0, "MAR7_CAFTRSECND", 0, 1073741824, 0, 1))
				{
					func_1826(13);
				}
			}
			break;
		case 13:
			if (func_1828("MAR7_CAFTRSECND"))
			{
				if (func_1758(uParam0, "MAR7_JSAYSCLEAR", 0, 1073741824, 0, 1))
				{
					func_1826(14);
				}
			}
			break;
		case 14:
			if (func_1758(uParam0, "MAR7_WAYHELP2", 1f, 1073741824, 0, 1))
			{
				func_1826(15);
			}
			break;
		case 15:
			if (func_1758(uParam0, "MAR7_THATCRY2", 0, 1073741824, 0, 1))
			{
				func_1826(16);
			}
			break;
		case 16:
			if (iVar1703 >= 5)
			{
				func_1826(17);
			}
			else if (func_1228(&uLocal_1714) > 5f)
			{
				if (func_1777(uParam0, "MAR7_JTOWAYNE", 0))
				{
					func_524(&uLocal_1714);
				}
			}
			break;
		case 17:
			if (func_1827("MAR7_JTOWAYNE"))
			{
				if (func_1758(uParam0, "MAR7_CLASTFIGHT", 0, 1073741824, 0, 1))
				{
					func_1826(18);
				}
			}
			break;
		case 18:
			if (func_1758(uParam0, "MAR7_JTOWAYNE", 0, 1073741824, 0, 1))
			{
				func_1826(19);
			}
			break;
		case 19:
			if (iVar1703 >= 6)
			{
				func_1826(20);
			}
			else if (func_1228(&uLocal_1714) > 5f)
			{
				if (func_1777(uParam0, "MAR7_WAYHELP2", 0))
				{
					func_524(&uLocal_1714);
				}
			}
			break;
		case 20:
			if (func_1827("MAR7_WAYHELP2"))
			{
				if (func_1758(uParam0, "MAR7_FIGHTOVER2", 0, 1073741824, 0, 1))
				{
					func_1826(21);
				}
			}
			break;
		case 21:
			if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 5.6f, 1, 0))
			{
				func_1245();
				func_1826(24);
			}
			else if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 17.5f, 1, 0))
			{
				func_1245();
				func_1826(22);
			}
			else if (func_1758(uParam0, "MAR7_FIGHTOVER1", 2.5f, 1073741824, 0, 1))
			{
				func_1826(22);
			}
			break;
		case 22:
			if (is_entity_on_screen(iLocal_169) || func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 17.5f, 1, 0))
			{
				if (func_1758(uParam0, "MAR7_CLETSLOOK", 0, 1073741824, 0, 1))
				{
					func_1826(23);
					func_135(uParam0, 8);
				}
			}
			break;
		case 23:
			if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 17.5f, 1, 0))
			{
				if (iVar1705 > 6 || func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 5.6f, 1, 0))
				{
					func_1245();
					func_1826(24);
				}
				else if (func_1758(uParam0, "MAR7_CJSEARCHW", 1f, 1073741824, 0, 1))
				{
					func_1826(24);
				}
			}
			break;
		case 24:
			if (iVar1705 > 7)
			{
				if (func_1758(uParam0, "MAR7_SHIT", 1f, 1073741824, 0, 1))
				{
					func_1826(25);
				}
			}
			break;
		case 25:
			if (func_1354(iLocal_183))
			{
				if (has_anim_event_fired(iLocal_112, 1564215814))
				{
					func_1826(26);
				}
			}
			break;
		case 26:
			if (func_1758(uParam0, "MAR7_CORPSE", 1f, 1073741824, 0, 1))
			{
				func_1826(27);
			}
			break;
	}
}

void func_1322(var uParam0)
{
	if ((iVar1703 > 1 && iVar1703 < 6) && !func_1314(8))
	{
		if ((!func_1762(iLocal_110, -2117564886) && !func_1762(iLocal_110, 242628503)) && !func_1762(iLocal_110, 1812035420))
		{
			task_combat_hated_targets(iLocal_110, -1f);
		}
		func_1273(uParam0, iLocal_110, 1103626240, 0);
	}
	switch (iVar1703)
	{
		case 0:
			iLocal_1706 = 1;
			break;
		case 1:
			func_1829(iLocal_110, Global_35, sLocal_61, 5f, 10f, 1, 1073741824, 2f);
			if (func_1769(iLocal_110, sLocal_61) || iVar1705 >= 2)
			{
				set_ped_sphere_defensive_area(iLocal_110, func_375(6, 3), (3f * 0.66f), false, true, 0);
				set_ped_sphere_defensive_area(iLocal_110, func_375(6, 4), (3f * 0.66f), false, false, 0);
				func_1230();
				func_1227(uParam0, iLocal_110, 1);
				func_1303(&Local_762, 4);
				func_135(uParam0, 3);
				iLocal_1707 = 0;
				iLocal_1706 = 2;
			}
			break;
		case 2:
			if ((func_1274(&Local_762) <= 0 || iVar1705 >= 3) || func_1228(&uLocal_1619) > 10f)
			{
				func_1830();
				if (func_1831(&Local_762, 0))
				{
					set_ped_sphere_defensive_area(iLocal_110, func_375(6, 5), 3f, false, false, 0);
					set_ped_sphere_defensive_area(iLocal_110, func_375(6, 6), 3f, false, true, 0);
					func_1815(Local_823[0], 4);
					func_1815(Local_823[1], 4);
					func_1815(Local_823[2], 4);
					func_524(&uLocal_1619);
					iLocal_1707 = 0;
					iLocal_1706 = 3;
				}
			}
			else if (func_1274(&Local_762) <= 1)
			{
				func_27(&uLocal_1619, 0);
			}
			break;
		case 3:
			if ((func_1274(&Local_823) <= 0 || iVar1705 >= 4) || func_1228(&uLocal_1619) > 10f)
			{
				func_1832();
				if (func_1831(&Local_823, 0))
				{
					set_ped_sphere_defensive_area(iLocal_110, func_375(6, 7), 3f, false, false, 0);
					set_ped_sphere_defensive_area(iLocal_110, func_375(6, 8), 3f, false, true, 0);
					func_1303(&Local_904, 4);
					func_524(&uLocal_1619);
					iLocal_1707 = 0;
					iLocal_1706 = 4;
				}
			}
			else if (func_1274(&Local_823) <= 1)
			{
				func_27(&uLocal_1619, 0);
			}
			break;
		case 4:
			if ((func_1274(&Local_904) <= 0 || iVar1705 >= 5) || func_1228(&uLocal_1619) > 10f)
			{
				func_1833();
				if (func_1831(&Local_904, 1))
				{
					Local_1431[5]->f_4 = 0;
					Local_1431[6]->f_4 = 0;
					set_ped_sphere_defensive_area(iLocal_110, func_375(6, 9), 3f, false, false, 0);
					set_ped_sphere_defensive_area(iLocal_110, func_375(6, 10), 3f, false, true, 0);
					if (!func_1822(Local_965[0], 5, 2, 1081081856))
					{
						if (Local_965[0]->f_7 < 4)
						{
							Local_965[0]->f_7 = 4;
						}
					}
					if (!func_1822(Local_965[1], 6, 0, 1081081856))
					{
						if (Local_965[1]->f_7 < 4)
						{
							Local_965[1]->f_7 = 4;
						}
					}
					func_524(&uLocal_1619);
					func_1834(13, 0, 1);
					func_135(uParam0, 5);
					iLocal_1707 = 0;
					iLocal_1706 = 5;
				}
			}
			else if (func_1274(&Local_904) <= 1)
			{
				func_27(&uLocal_1619, 0);
			}
			break;
		case 5:
			if ((((func_1274(&Local_762) <= 0 && func_1274(&Local_823) <= 0) && func_1274(&Local_904) <= 0) && func_1274(&Local_965) <= 0) && !func_426(iVar1003, 2))
			{
				clear_ped_tasks(iLocal_110, 1, 0);
				set_ped_config_flag(iLocal_110, 249, true);
				set_ped_config_flag(iLocal_110, 333, true);
				_0xb56d41a694e42e86(iLocal_230, 10208, 0, 0, -1, -1, 0);
				func_50(iLocal_110);
				func_1203(7, iLocal_110, 1);
				func_135(uParam0, 7);
				iLocal_237 = func_1286(-308585968, get_entity_coords(iLocal_169, true, false), 15f, 1);
				iLocal_1708 = 6;
				iLocal_1707 = 7;
				iLocal_1706 = 6;
			}
			break;
		case 6:
			if (iVar1705 >= 7)
			{
				if (func_1835())
				{
					if (_get_anim_scene_entity_matrix(iLocal_183, "CS_CharlesSmith", &vVar0, true, func_1836(iVar1709), 2))
					{
						if (func_1297(iLocal_110, vVar0, 0.75f, 1, 0))
						{
							set_anim_scene_bool(iLocal_183, "bBreakout", true, false);
							set_ped_config_flag(iLocal_110, 249, false);
							set_current_ped_weapon(iLocal_110, -1098045850, true, 0, false, false);
							request_ped_visibility_tracking(iLocal_110);
							func_1203(7, iLocal_110, 0);
							iLocal_1706 = 7;
						}
						else if (!is_entity_on_screen(iLocal_110) && !func_1825(vVar0, 0.01f, 0.99f, 0.01f, 0.99f))
						{
							set_current_ped_weapon(iLocal_110, -1098045850, true, 0, false, false);
							_set_entity_coords_and_heading(iLocal_110, vVar0, vVar0.f_3.f_2, true, false, false);
							_0x9587913b9e772d29(iLocal_110, 0);
						}
						else if (!func_1762(iLocal_110, 242628503))
						{
							open_sequence_task(&iLocal_215);
							if (func_791(iLocal_110, 1, 0, 0) != -1098045850)
							{
								set_current_ped_weapon(iLocal_110, -1098045850, false, 0, false, false);
								task_swap_weapon(0, 1, 0, 0, 0);
							}
							task_follow_nav_mesh_to_coord(0, vVar0, 2f, 20000, 0.25f, 5251077, 40000f);
							task_go_straight_to_coord(0, vVar0, 2f, 20000, 40000f, 0.75f, 1);
							close_sequence_task(iLocal_215);
							task_perform_sequence(iLocal_110, iLocal_215);
							clear_sequence_task(&iLocal_215);
						}
					}
				}
			}
			else if (func_1837(Global_35, iLocal_228, 1, 0))
			{
				if (func_1762(iLocal_110, 1833500181))
				{
					clear_ped_tasks(iLocal_110, 1, 0);
					func_1203(7, iLocal_110, 1);
				}
			}
			else if (!func_1762(iLocal_110, 1833500181))
			{
				func_1203(7, iLocal_110, 0);
				task_wander_in_volume(iLocal_110, iLocal_229, 1077936128, 1086324736, 0);
			}
			break;
		case 7:
			if (_0x5102307ce88798eb(iLocal_110))
			{
				if (is_entity_on_screen(iLocal_110))
				{
					if (is_tracked_ped_visible(iLocal_110))
					{
						_0x3088634cf8c819cf(iLocal_110);
						func_1838(iLocal_110, 197772266, 1);
						func_1839(iLocal_110, -1833912565, 1);
					}
				}
			}
			_0xff745b0346e19e2c(1361896662);
			if (func_1355(iLocal_183))
			{
				func_438(iLocal_231);
				func_1335(iLocal_110, 1, 1361896662);
				task_look_at_entity(iLocal_110, Global_35, -1, 0, 51, 0);
				func_1313(iLocal_110, func_210(7, 1), 1f, -1, 1048576000, 0);
				func_1838(iLocal_110, 197772266, 1);
				func_1839(iLocal_110, -1833912565, 1);
				func_135(uParam0, -1);
				iLocal_1706 = 8;
			}
			break;
		case 8:
			break;
	}
}

void func_1323(var uParam0)
{
	switch (iVar1705)
	{
		case 0:
			iLocal_1708 = 1;
			break;
		case 1:
			if (func_1296(Global_35, vLocal_1693, func_375(6, 2)))
			{
				iLocal_1708 = 2;
			}
			break;
		case 2:
			if (func_1296(Global_35, vLocal_1696, func_375(6, 2)))
			{
				iLocal_1708 = 3;
			}
			break;
		case 3:
			func_1830();
			if (func_1296(Global_35, vLocal_1699, func_375(6, 2)))
			{
				iLocal_1708 = 4;
			}
			break;
		case 4:
			func_1832();
			if (func_1296(Global_35, vLocal_1702, func_375(6, 2)))
			{
				iLocal_1708 = 5;
			}
			break;
		case 5:
			func_1833();
			break;
		case 6:
			func_1221(Global_35, get_entity_coords(iLocal_169, true, false), 0, 20f, 17.5f, 3.15f, 0f, 1, 1, 1, 0);
			if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 5.6f, 1, 0))
			{
				func_1838(iLocal_110, -1833912565, 1);
				func_1839(iLocal_110, 197772266, 1);
				if (func_1840())
				{
					_hide_ped_weapons(Global_35, 2, false);
					if (func_791(Global_35, 1, 0, 0) == -1569615261)
					{
						if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 3.15f, 1, 0))
						{
							if (func_1841())
							{
								if (func_1835())
								{
									if (!is_gameplay_hint_active() && !_0xa24c1d341c6e0d53(1, 0, 0))
									{
										set_gameplay_entity_hint(iLocal_169, vLocal_188, true, 2000, 750, 2000, 0);
									}
									func_1827("MAR7_CJSEARCHW");
									set_entity_visible(iLocal_112, true);
									_0x50b72a754ee64a71(-632030841);
									_0x50b72a754ee64a71(-1392528840);
									func_436(&iLocal_237);
									func_1230();
									iLocal_1708 = 7;
								}
							}
						}
					}
				}
			}
			else
			{
				func_1839(iLocal_110, -1833912565, 1);
				func_1838(iLocal_110, 197772266, 1);
			}
			break;
		case 7:
			if (!is_gameplay_hint_active() && !_0xa24c1d341c6e0d53(1, 0, 0))
			{
				if (func_1786(iLocal_182, 3f))
				{
					task_look_at_entity(Global_35, iLocal_112, 10000, 0, 51, 0);
					set_gameplay_entity_hint(iLocal_112, vLocal_188, true, -1, 750, 2000, 0);
				}
			}
			func_1842();
			if (func_1355(iLocal_182))
			{
				func_1843();
				iLocal_237 = func_1339(408396114, iLocal_169, 1);
				func_1226(uParam0, 12, 1);
				iLocal_1713 = func_1844("MAR7_UC_TOOLS", -473983589, iLocal_169, 3, 0, 0, 0, 5, 2.5f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_1346(iVar1710, 1, 1);
				func_1347(iVar1710, 1, 1);
				func_1348(&iLocal_1713, iLocal_169);
				iLocal_1708 = 8;
			}
			break;
		case 8:
			if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 2.5f, 1, 0))
			{
				if (func_791(Global_35, 1, 0, 1) != -1016714371)
				{
					if (func_10(iVar1710))
					{
						_uiprompt_set_ambient_group_this_frame(iLocal_169, 2.5f, 3, 1, 0, "MAR7_TOOLS", 0);
						if (func_1845(iVar1710, 1))
						{
							if (func_1846())
							{
								_0x6dad6630ae4a74cb(iLocal_169, 1);
								task_look_at_entity(Global_35, iLocal_169, -1, 0, 51, 0);
								func_11(&iLocal_1713, 1, 1);
								func_1230();
								iLocal_1708 = 9;
							}
						}
					}
				}
			}
			break;
		case 9:
			if (func_1840())
			{
				if (func_791(Global_35, 1, 0, 0) != -1569615261 || func_791(Global_35, 1, 1, 0) != -1569615261)
				{
					_hide_ped_weapons(Global_35, 2, false);
					task_swap_weapon(Global_35, 0, 1, 0, 0);
				}
				task_enter_anim_scene(Global_35, iLocal_178, "JOHN", func_1847(iVar1707), 1069379748, 1, 0, 20000, -1082130432);
				iLocal_1708 = 10;
			}
			break;
		case 10:
			if (func_1354(iLocal_178))
			{
				func_436(&iLocal_237);
				func_1226(uParam0, 0, 0);
				func_1332(Global_35);
				iLocal_1708 = 11;
			}
			break;
		case 11:
			func_1848();
			if (func_1355(iLocal_178))
			{
				func_1331(Global_35);
				func_1334(Global_35, 1);
				iLocal_1708 = 12;
			}
			break;
		case 12:
			if (func_1355(iLocal_183) || func_1786(iLocal_183, 19.5f))
			{
				if (func_1758(uParam0, "MAR7_MOVEFAST", 0, 1073741824, 0, 0))
				{
					iLocal_1708 = 13;
				}
			}
			break;
		case 13:
			break;
	}
}

void func_1324(var uParam0)
{
	switch (iVar1703)
	{
		case 2:
			func_1307(&Local_762);
			func_1308(uParam0, &Local_762, &Local_1597, 1109393408);
			break;
		case 3:
			func_1307(&Local_823);
			func_1308(uParam0, &Local_823, &Local_1597, 1109393408);
			break;
		case 4:
			func_1307(&Local_904);
			func_1308(uParam0, &Local_904, &Local_1597, 1109393408);
			break;
		case 5:
			func_1307(&Local_965);
			func_1308(uParam0, &Local_965, &Local_1613, 1109393408);
			break;
	}
}

void func_1325()
{
	if (is_entity_attached_to_entity(iLocal_169, Global_35))
	{
		disable_control_action(0, -640622144, false);
		disable_control_action(0, -620139643, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -1758491362, false);
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, 1934388793, false);
		disable_control_action(0, -209515122, false);
		disable_control_action(0, -432665970, false);
		disable_control_action(0, -562475458, false);
		disable_control_action(0, 1963753488, false);
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, -822242784, false);
		disable_control_action(0, 1101824977, false);
		disable_control_action(0, 966551065, false);
		disable_control_action(0, 668058244, false);
		_0xc3abcfbc7d74afa5(Global_35, 0, 1);
	}
}

void func_1326()
{
	if (is_entity_attached_to_entity(iLocal_169, Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1.75f);
		set_ped_reset_flag(Global_35, 2, true);
		set_ped_reset_flag(Global_35, 168, true);
		set_ped_reset_flag(Global_35, 21, true);
	}
}

void func_1327()
{
	if (iVar1707 > 0 && iVar1707 != 4)
	{
		if (!func_426(iVar1004, 0))
		{
			iLocal_1709 = 4;
		}
	}
	switch (iVar1707)
	{
		case 0:
			if (!func_1314(4))
			{
				if (iVar1704 >= 4)
				{
					if (func_1297(Global_35, get_entity_coords(iLocal_169, true, false), 46.5f, 1, 0))
					{
						if (func_1849(&vVar0, 12, 21))
						{
							if (!func_1825(vVar0, 0.01f, 0.99f, 0.01f, 0.99f))
							{
								if (func_426(iLocal_110, 0))
								{
									if (!func_1762(iLocal_110, 1812035420))
									{
										task_seek_cover_to_coords(iLocal_110, func_375(6, 9), get_entity_coords(iLocal_169, true, false), 2500, 1, 0, 0);
									}
								}
								if (func_1850())
								{
									_0x94a3c1b804d291ec(iVar1004, 1, 0, 1, 1);
									set_current_ped_weapon(iVar1004, Local_1006.f_6, true, 0, false, false);
									task_swap_weapon(iVar1004, 1, 1, 0, 0);
									task_clear_defensive_area(iVar1004);
									_0x789dabd18e9024db(iVar1004, 0, 0);
									set_ped_config_flag(iVar1004, 159, true);
									set_ped_relationship_group_hash(iVar1004, 623901053);
									func_1851(iVar1004, 1);
									iLocal_1709 = 1;
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if ((_0x0e99e3bf11bb6367(iVar1004) && is_ped_in_melee_combat(Global_35)) || func_1297(iVar1004, get_entity_coords(Global_35, true, false), 1f, 1, 0))
			{
				iLocal_1709 = 2;
			}
			else if (!func_1762(iVar1004, 1469008894))
			{
				task_grapple(iVar1004, Global_35, 0, 0, 3f, 0, 0);
			}
			break;
		case 2:
			if (!_0x0e99e3bf11bb6367(iVar1004) && !func_1762(iVar1004, 1469008894))
			{
				_0x1854217c640b39ec(iVar1004, Global_35, vLocal_188, 15f, 0, 0);
				iLocal_1709 = 3;
			}
			break;
		case 3:
			if (get_ped_relationship_group_hash(iVar1004) != 1269650476)
			{
				func_27(&(Local_1006.f_13), 0);
				if (func_1228(&(Local_1006.f_13)) > 2.5f)
				{
					func_524(&(Local_1006.f_13));
					set_ped_relationship_group_hash(iVar1004, 1269650476);
				}
			}
			if (!func_1762(iVar1004, -2117564886))
			{
				task_combat_hated_targets(iVar1004, -1f);
			}
			break;
		case 4:
			break;
	}
}

void func_1328()
{
	switch (iVar1704)
	{
		case 2:
			switch (iVar1705)
			{
				case 0:
					func_524(&uLocal_1622);
					iLocal_1707 = 1;
					break;
				case 1:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 2.5f)
					{
						func_1822(Local_762[0], 24, 1, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 2;
					}
					break;
				case 2:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 5f)
					{
						func_1822(Local_762[2], 0, 2, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 7;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1705)
			{
				case 0:
					func_524(&uLocal_1622);
					iLocal_1707 = 1;
					break;
				case 1:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 1f)
					{
						func_1822(Local_823[0], 22, 1, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 2;
					}
					break;
				case 2:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 1f)
					{
						func_1822(Local_823[1], 10, 0, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 3;
					}
					break;
				case 3:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 2.5f)
					{
						if (!func_1314(4))
						{
							if (!func_1803(*Local_823[3]))
							{
								func_1823(Local_823[3], 1, 0);
								func_1261(Local_823[3], 0);
							}
						}
						func_1822(Local_823[2], 11, 0, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 4;
					}
					break;
				case 4:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 5f)
					{
						func_1822(Local_823[2], 2, 0, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 7;
					}
					break;
			}
			break;
		case 4:
			switch (iVar1705)
			{
				case 0:
					if (!func_1314(4))
					{
						if (func_426(&(Local_823[3]), 2))
						{
							if (!func_1803(*Local_823[3]))
							{
								func_1823(Local_823[3], 1, 0);
								func_1261(Local_823[3], 0);
							}
						}
					}
					func_524(&uLocal_1622);
					iLocal_1707 = 1;
					break;
				case 1:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 1f)
					{
						Local_904[2]->f_9 = 2;
						func_1822(Local_904[2], 12, 2, 25f);
						func_524(&uLocal_1622);
						iLocal_1707 = 2;
					}
					break;
				case 2:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 5f)
					{
						func_1822(Local_904[1], 14, 0, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 7;
					}
					break;
			}
			break;
		case 5:
			switch (iVar1705)
			{
				case 0:
					func_524(&uLocal_1622);
					iLocal_1707 = 1;
					break;
				case 1:
					func_27(&uLocal_1622, 0);
					if (func_1228(&uLocal_1622) > 8f)
					{
						func_1822(Local_965[0], 7, 0, 1081081856);
						func_524(&uLocal_1622);
						iLocal_1707 = 7;
					}
					break;
			}
			break;
	}
}

bool func_1329()
{
	return (iVar1706 >= 13 && iVar1704 >= 8);
}

void func_1330(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (func_1852(iParam0) || !func_1853(iParam0))
		{
			set_vehicle_fixed(iParam0);
		}
	}
}

void func_1331(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

void func_1332(int iParam0)
{
	if (func_426(iParam0, 0) && does_entity_exist(iLocal_169))
	{
		_0xce7a6c1d5cde1f9d(iParam0, iLocal_169, "p_toolBox01x_PH_L_HAND", "LOCO_ATTACH_TOOLBOX");
	}
}

void func_1333(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		iVar0 = _get_first_entity_ped_is_carrying(iParam0);
		if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && is_entity_a_ped(iVar0))
		{
			_0xed00d72f81cf7278(iVar0, 0, 0);
		}
	}
}

void func_1334(int iParam0, bool bParam1)
{
	if (func_426(iParam0, 0) && does_entity_exist(iLocal_169))
	{
		if (bParam1)
		{
			set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
			_hide_ped_weapons(iParam0, 2, true);
			func_1332(iParam0);
			attach_entity_to_entity(iLocal_169, iParam0, get_ped_bone_index(iParam0, 37709), vLocal_188, vLocal_188, false, false, false, false, 2, true, false, false);
			_0xe8abe3b73fc7fe17(iParam0, iLocal_169, "p_toolBox01x_PH_L_HAND", "LOCO_ATTACH_TOOLBOX");
		}
		else
		{
			detach_entity(iLocal_169, false, true);
			_0x3a50753042b6891b(iParam0, "p_toolBox01x_PH_L_HAND");
		}
		set_ped_config_flag(iParam0, 249, bParam1);
		set_ped_config_flag(iParam0, 43, bParam1);
		_0x6569f31a01b4c097(iParam0, 2, !bParam1);
		_0x6569f31a01b4c097(iParam0, 3, !bParam1);
		_0x18ff3110cf47115d(iParam0, 9, !bParam1);
		clear_entity_last_damage_entity(iLocal_169);
	}
}

void func_1335(int iParam0, bool bParam1, int iParam2)
{
	if (func_426(iParam0, 0) && func_426(iLocal_112, 0))
	{
		if (bParam1)
		{
			if (!_0x0ccfe72b43c9cf96(iLocal_112))
			{
				task_carriable(iLocal_112, iParam2, iParam0, 0, 0);
				_0x2208438012482a1a(iParam0, false, false);
				_0x2208438012482a1a(iLocal_112, false, false);
			}
		}
		else if (_0x0ccfe72b43c9cf96(iLocal_112))
		{
			clear_ped_tasks_immediately(iLocal_112, true, true);
		}
		clear_entity_last_damage_entity(iLocal_112);
	}
}

void func_1336(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, bool bParam7)
{
	if (func_426(iParam0, 0) || iParam0 == 0)
	{
		vVar0 = { vParam2 + Vector(10f, 0f, 0f) };
		if (get_ground_z_for_3d_coord(vParam2, &(vVar0.f_2), false))
		{
			vVar0 = { vVar0 + Vector(fParam6, 0f, 0f) };
			if (bParam7)
			{
				task_start_scenario_at_position(iParam0, iParam1, vVar0, fParam5, -1, false, true, 0, -1f, false);
			}
			else
			{
				task_start_scenario_at_position(iParam0, iParam1, vVar0, fParam5, -1, true, false, 0, 0.25f, false);
			}
		}
	}
}

void func_1337()
{
	set_anim_scene_entity(iLocal_181, "IG_CharlesSmith", iLocal_110, 0);
	set_anim_scene_entity(iLocal_181, "IG_MRDEVON", iLocal_111, 0);
	set_anim_scene_entity(iLocal_181, "IG_MRWAYNE", iLocal_112, 0);
	set_anim_scene_entity(iLocal_181, "WAGON", iLocal_126, 0);
}

void func_1338()
{
	set_anim_scene_entity(iLocal_179, "JOHN", Global_35, 0);
	set_anim_scene_entity(iLocal_179, "p_toolbox01x", iLocal_169, 0);
}

int func_1339(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1340(var uParam0)
{
	if (func_1757(uParam0) >= 2)
	{
		if (!func_1854(3, 1))
		{
			if (!func_1855(1) && !func_200())
			{
				func_1856(3, 0);
			}
		}
	}
	switch (func_1757(uParam0))
	{
		case 1:
			func_1226(uParam0, 13, 0);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_CWITHWAYNE", 0, 1073741824, 0, 1))
			{
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (!_0x1ecc76792f661cf5("MAR7_CWITHWAYNE"))
			{
				func_1226(uParam0, 13, 1);
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_858(Global_35, iLocal_110, 15f, 1))
			{
				if (func_1758(uParam0, "MAR7_BACKTOWAG1", 5f, 1073741824, 0, 1))
				{
					func_135(uParam0, 5);
				}
			}
			else if (!func_1857(Global_35, iLocal_110, sLocal_62))
			{
				func_1758(uParam0, "MAR7_CJFALLBHND", 8f, 1073741824, 0, 1);
			}
			break;
		case 5:
			if (func_858(Global_35, iLocal_110, 15f, 1))
			{
				if (func_1758(uParam0, "MAR7_BACKTOWAG2", 5f, 1073741824, 0, 1))
				{
					func_135(uParam0, -1);
				}
			}
			else if (!func_1857(Global_35, iLocal_110, sLocal_62))
			{
				func_1758(uParam0, "MAR7_CJFALLBHND", 8f, 1073741824, 0, 1);
			}
			break;
		case 6:
			if (func_1206(iLocal_110, sLocal_62, 105))
			{
				if (func_1758(uParam0, "MAR7_CWAYNEDEAD", 0, 1073741824, 1, 0))
				{
					func_135(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_1355(iLocal_181))
			{
				if (func_1758(uParam0, "MAR7_ANIMALS", 0, 1073741824, 0, 0))
				{
					func_135(uParam0, 8);
				}
			}
			break;
		case 8:
			if (func_10(iVar1717))
			{
				if (func_858(iLocal_110, iLocal_118, 7.5f, 1))
				{
					if (func_1777(uParam0, "MAR7_CTHETOOLS", 0))
					{
						func_135(uParam0, 9);
					}
				}
			}
			else
			{
				func_1245();
				func_135(uParam0, 9);
			}
			break;
		case 9:
			if (func_1758(uParam0, "MAR7_CGOONWAG", 1f, 1073741824, 0, 1))
			{
				func_135(uParam0, 10);
			}
			break;
		case 10:
			if (func_1225(iLocal_110, iLocal_118, 0))
			{
				if (!func_1225(Global_35, iLocal_118, 0))
				{
					func_1758(uParam0, "MAR7_CWAITONWAG", 8f, 1073741824, 0, 1);
				}
			}
			break;
	}
	if (func_1759(15))
	{
		if (is_ped_in_vehicle(Global_35, iLocal_118, true))
		{
			func_1230();
		}
	}
}

void func_1341()
{
	if (func_426(Global_35, 0))
	{
		if (func_1350(Global_35, iLocal_224, 0, 1))
		{
			set_ped_capsule(Global_35, 0.25f);
		}
	}
}

void func_1342()
{
	switch (iVar1720)
	{
		case 0:
			task_follow_waypoint_recording(iLocal_110, sLocal_62, 0, 67136512, -1, 0, 0, -1);
			iLocal_1722 = 1;
			break;
		case 1:
			func_1829(iLocal_110, Global_35, sLocal_62, 7.5f, 15f, 1, 3f, 1f);
			if (func_1769(iLocal_110, sLocal_62))
			{
				iLocal_1722 = 2;
			}
			else if (!func_1762(iLocal_110, 658540077))
			{
				task_follow_waypoint_recording(iLocal_110, sLocal_62, 0, 67136512, -1, 0, 0, -1);
			}
			break;
		case 2:
			if (!func_1762(iLocal_110, 713668775))
			{
				if (_get_anim_scene_entity_matrix(iLocal_181, "IG_CharlesSmith", &Var0, true, "Pl_IG6_Wayne_To_Wagon_Help", 2))
				{
					if (!func_1297(iLocal_110, Var0, 1f, 1, 0))
					{
						task_follow_nav_mesh_to_coord(iLocal_110, Var0, 1f, 20000, 0.25f, 512, Var0.f_3.f_2);
					}
					else if (iVar1721 >= 4)
					{
						start_anim_scene(iLocal_181);
						_0x41cda90ee3450921(iLocal_126);
						iLocal_1722 = 3;
					}
				}
			}
			break;
		case 3:
			if (func_1355(iLocal_181) || _0x005e6f28dd7ed58d(iLocal_181, "IG_CharlesSmith"))
			{
				iLocal_1722 = 4;
			}
			break;
		case 4:
			if (func_1225(iLocal_110, iLocal_118, 0))
			{
				iLocal_1722 = 6;
			}
			else if (!func_1297(iLocal_118, func_375(7, 3), 35f, 1, 1))
			{
				iLocal_1722 = 5;
			}
			else if (!func_1762(iLocal_110, -1794415470))
			{
				func_1331(iLocal_110);
				task_enter_vehicle(iLocal_110, iLocal_118, -1, 0, 2f, 1, 0);
			}
			break;
		case 5:
			if (!func_1762(iLocal_110, 242628503))
			{
				open_sequence_task(&iLocal_215);
				task_follow_nav_mesh_to_coord(0, func_375(8, 0), 1f, -1, 0.25f, 0, 40000f);
				task_look_at_entity(0, iLocal_118, -1, 0, 51, 0);
				task_turn_ped_to_face_entity(0, iLocal_118, -1, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iLocal_215);
				task_perform_sequence(iLocal_110, iLocal_215);
			}
			else if (func_1297(iLocal_118, func_375(7, 3), (35f * 0.75f), 1, 1) || func_1296(iLocal_118, get_entity_coords(iLocal_110, true, false), func_375(8, 0)))
			{
				iLocal_1722 = 4;
			}
			break;
		case 6:
			break;
	}
}

void func_1343()
{
	switch (iVar1721)
	{
		case 0:
			request_ped_visibility_tracking(iLocal_111);
			iLocal_1723 = 1;
			break;
		case 1:
			if (func_426(iLocal_111, 0) && func_426(iLocal_110, 0))
			{
				if (func_1769(iLocal_110, sLocal_62) || (func_1206(iLocal_110, sLocal_62, 105) && is_tracked_ped_visible(iLocal_111)))
				{
					_0x3088634cf8c819cf(iLocal_111);
					iLocal_1723 = 2;
				}
				else if (!func_1762(iLocal_111, 150319005))
				{
					task_look_at_entity(iLocal_111, iLocal_110, -1, 0, 51, 1);
				}
			}
			break;
		case 2:
			func_27(&uLocal_1717, 0);
			if (func_1228(&uLocal_1717) > 1f)
			{
				_0x62fdad5e01d2dd47(iLocal_112, get_entity_coords(iLocal_110, true, false), 1, 0);
				func_524(&uLocal_1717);
				iLocal_1723 = 3;
			}
			break;
		case 3:
			if (!func_1762(iLocal_111, -1794415470))
			{
				if (is_ped_in_vehicle(iLocal_111, iLocal_126, false))
				{
					iLocal_1723 = 4;
				}
				else
				{
					task_enter_vehicle(iLocal_111, iLocal_126, 20000, -1, 1.5f, 131072, 0);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1344()
{
	switch (iVar1722)
	{
		case 0:
			if (_0x0ccfe72b43c9cf96(iLocal_112))
			{
				iLocal_1724 = 1;
			}
			break;
		case 1:
			if (func_1354(iLocal_181))
			{
				func_1858(1);
				iLocal_1724 = 2;
			}
			break;
		case 2:
			if (func_1355(iLocal_181))
			{
				func_1356(1);
				iLocal_1724 = 3;
			}
			break;
		case 3:
			func_1356(0);
			if (func_1859())
			{
				func_1858(0);
				iLocal_1724 = 4;
			}
			break;
		case 4:
			if (func_1366())
			{
				iLocal_1724 = 5;
			}
			break;
		case 5:
			break;
	}
}

int func_1345(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_939(iVar0, 2))
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
		func_1860(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_1346(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_174(iParam0);
	if (bParam1)
	{
		func_1861(iParam0, 4);
		func_1862(iVar0, 1);
		func_1863(iVar0, 1);
	}
	else
	{
		func_1864(iParam0, 4);
		func_1863(iVar0, 0);
	}
}

void func_1347(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_174(iParam0);
	func_1862(iVar0, bParam1);
}

int func_1348(int iParam0, int iParam1)
{
	iVar0 = func_174(*iParam0);
	if (does_entity_exist(iParam1))
	{
		if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
		{
			_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

void func_1349(var uParam0, int iParam1, float fParam2)
{
	func_1773(uParam0, func_1772(iParam1), -1082130432, 0, 0, -1, -1, 0);
	if (fParam2 > 0f)
	{
		func_207(&uLocal_97);
	}
	else
	{
		func_524(&uLocal_97);
	}
	iLocal_247 = iParam1;
	fLocal_187 = fParam2;
}

bool func_1350(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

bool func_1351(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_174(iParam0);
	return _uiprompt_is_released((*Global_1945938)[iVar0]->f_3);
}

int func_1352()
{
	if (func_426(Global_35, 0) && _does_anim_scene_exist(iLocal_179))
	{
		if ((_get_anim_scene_entity_matrix(iLocal_179, "JOHN", &vVar0, true, func_1353(1), 2) && _get_anim_scene_entity_matrix(iLocal_179, "JOHN", &vVar12, true, func_1353(2), 2)) && _get_anim_scene_entity_matrix(iLocal_179, "JOHN", &vVar24, true, func_1353(3), 2))
		{
			fVar36 = func_1765(Global_35, vVar0, 0);
			fVar37 = func_1765(Global_35, vVar12, 0);
			fVar38 = func_1765(Global_35, vVar24, 0);
			if (fVar36 <= fVar37 && fVar36 <= fVar38)
			{
				return 1;
			}
			else if (fVar37 <= fVar38)
			{
				if (!func_1296(Global_35, vVar12, vVar0))
				{
					return 2;
				}
			}
			else if (!func_1296(Global_35, vVar24, vVar0))
			{
				return 3;
			}
		}
		return 1;
	}
	return 6;
}

char* func_1353(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_IG3_drop_off_tools_turn";
		case 2:
			return "pl_IG3_drop_off_tools_back_right";
		case 3:
			return "pl_IG3_drop_off_tools_back_left";
		default:
			break;
	}
	return "";
}

bool func_1354(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			return true;
		}
	}
	return false;
}

bool func_1355(int iParam0)
{
	if ((_is_anim_scene_active(iParam0) || _0xf94692eb9dc15d74(iParam0, 0)) || _is_anim_scene_finished(iParam0, false))
	{
		return true;
	}
	return false;
}

void func_1356(bool bParam0)
{
	if (does_entity_exist(iLocal_112))
	{
		if (is_ped_dead_or_dying(iLocal_112, true) || get_entity_health(iLocal_112) <= 0)
		{
			resurrect_ped(iLocal_112);
		}
		if (!is_ped_in_vehicle(iLocal_112, iLocal_126, false))
		{
			set_ped_into_vehicle(iLocal_112, iLocal_126, 0);
		}
		if (!is_entity_playing_anim(iLocal_112, sLocal_74, sLocal_75, 1))
		{
			set_ped_leg_ik_mode(iLocal_112, 0);
			task_play_anim(iLocal_112, sLocal_74, sLocal_75, 1000f, -8f, -1, 18, 0.999f, false, 1, false, 0, false);
			if (bParam0)
			{
				_0x2208438012482a1a(iLocal_112, false, false);
			}
		}
	}
}

bool func_1357(var uParam0)
{
	if (!func_426(iLocal_116, 0))
	{
		if (!func_855(uParam0, 4, &iLocal_116, 0, 0, 0, 0, 0, 1, -922193456, 1, 0, 1, 0))
		{
			return false;
		}
	}
	if (!does_entity_exist(iLocal_116))
	{
		return false;
	}
	func_1276(&iLocal_116);
	set_blocking_of_non_temporary_events(iLocal_116, true);
	clear_entity_last_damage_entity(iLocal_116);
	if (!func_1297(iLocal_116, vLocal_200, 50f, 1, 1))
	{
		func_863(iLocal_116, vLocal_200, 0f, 2, 1073741824);
	}
	func_145(uParam0, iLocal_116, "UNCLE", 0);
	func_1776(uParam0, iLocal_116, 128);
	return true;
}

int func_1358(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1359()
{
	set_anim_scene_entity(iLocal_184, "uncle", iLocal_116, 0);
	set_anim_scene_entity(iLocal_184, "p_crate01x", iLocal_168, 0);
}

void func_1360(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (!_is_anim_scene_started(iParam0, false))
		{
			start_anim_scene(iParam0);
		}
	}
}

void func_1361(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 1:
			func_1349(uParam0, 17, 12f);
			func_135(uParam0, 2);
			break;
		case 2:
			if (func_1758(uParam0, "MAR7_CBTOBEECH", 1f, 1073741824, 0, 1))
			{
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (func_1759(19))
			{
				if (func_1206(iLocal_118, sLocal_57, 225))
				{
					func_1230();
				}
			}
			else
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (func_1758(uParam0, "MAR7_BEECHERS", 1f, 1073741824, 0, 1))
			{
				func_135(uParam0, 5);
			}
			break;
		case 5:
			if (func_1367(15f))
			{
				_0x36559148b78853b3(1, 1, 1);
				func_135(uParam0, 51);
			}
			break;
	}
	func_1760(iLocal_110, "MAR7_BEECHERS", 1, 1);
}

void func_1362(var uParam0)
{
	if (func_426(Global_35, 0) && func_426(iLocal_111, 0))
	{
		if (does_entity_exist(iLocal_118) && does_entity_exist(iLocal_126))
		{
			if (!func_1297(iLocal_118, func_375(7, 3), 15f, 1, 0))
			{
				if (func_858(Global_35, iLocal_126, 25f, 1))
				{
					if (func_1865(Global_35, iLocal_118, 0))
					{
						if (get_entity_speed(iLocal_126) < 1.5f)
						{
							sVar0 = "MAR7_DEVWAGSTOP";
						}
						else
						{
							sVar0 = "MAR7_DEVKIAWAYN";
						}
					}
					else
					{
						sVar0 = "MAR7_DEVPLYWAG";
					}
				}
				if (!is_string_null_or_empty(sVar0))
				{
					if (!func_26(&uLocal_1725) || func_1228(&uLocal_1725) > 5f)
					{
						func_524(&uLocal_1725);
						if (func_1777(uParam0, sVar0, 0))
						{
							func_27(&uLocal_1725, 0);
						}
					}
				}
			}
		}
	}
}

void func_1363()
{
	if (func_426(Global_35, 0) && func_426(iLocal_110, 0))
	{
		if (func_1225(iLocal_110, iLocal_118, 0))
		{
			if (!func_1762(iLocal_110, 1199744105))
			{
				if (_0x2963b5c1637e8a27(iLocal_118) == iLocal_110 && func_1225(Global_35, iLocal_118, 0))
				{
					if (func_1763(iLocal_118, 5))
					{
						_0x27e3f2b57209fa54(iLocal_118, 1);
						_task_vehicle_drive_to_destination(iLocal_110, iLocal_118, func_1236(sLocal_57), 12.5f, 69730435, 1, 5f, 2.5f, 0);
					}
					else
					{
						_0xfc7f71cf49f70b6b(Global_35);
					}
				}
			}
			else if (_0x2963b5c1637e8a27(iLocal_118) != iLocal_110 || !func_1225(Global_35, iLocal_118, 0))
			{
				_0x27e3f2b57209fa54(iLocal_118, 0);
				clear_ped_tasks(iLocal_110, 1, 0);
			}
		}
	}
}

void func_1364()
{
	if (!func_1762(iLocal_111, 1199744105))
	{
		_0x27e3f2b57209fa54(iLocal_126, 1);
		_task_vehicle_drive_to_destination(iLocal_111, iLocal_126, func_1236(sLocal_57), (12.5f + 5f), 69730435, 1, 5f, 2.5f, 0);
	}
	else
	{
		func_1866();
	}
}

void func_1365()
{
	iVar0 = _0x2963b5c1637e8a27(iLocal_118);
	if (func_426(iVar0, 0))
	{
		func_1221(iVar0, func_375(9, 2), 0, 35f, 10f, 7.5f, 5f, 1, 1, 1, 0);
	}
}

bool func_1366()
{
	if (does_entity_exist(iLocal_112))
	{
		if (!is_entity_playing_anim(iLocal_112, sLocal_74, sLocal_75, 1) || !is_ped_in_vehicle(iLocal_112, iLocal_126, false))
		{
			func_1867(iLocal_112, 1, 0);
			return true;
		}
	}
	return false;
}

bool func_1367(float fParam0)
{
	if (does_entity_exist(iLocal_118))
	{
		if (!is_entity_dead(iLocal_118))
		{
			if (func_1296(iLocal_118, func_375(9, 2), vLocal_200) || func_1297(iLocal_118, func_375(9, 2), fParam0, 1, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1368()
{
	if (!has_model_loaded(iLocal_43))
	{
		return false;
	}
	else
	{
		if (!does_entity_exist(&(iLocal_149[0])))
		{
			iLocal_149[0] = create_object(iLocal_43, vLocal_200, true, true, false, false, true);
			return false;
		}
		if (!does_entity_exist(&(iLocal_149[1])))
		{
			iLocal_149[1] = create_object(iLocal_43, vLocal_200, true, true, false, false, true);
			return false;
		}
		if (!does_entity_exist(&(iLocal_149[2])))
		{
			iLocal_149[2] = create_object(iLocal_43, vLocal_200, true, true, false, false, true);
			return false;
		}
		if (!does_entity_exist(&(iLocal_149[3])))
		{
			iLocal_149[3] = create_object(iLocal_43, vLocal_200, true, true, false, false, true);
			return false;
		}
		if (!does_entity_exist(&(iLocal_149[4])))
		{
			iLocal_149[4] = create_object(iLocal_43, vLocal_200, true, true, false, false, true);
			return false;
		}
		if (!does_entity_exist(&(iLocal_149[5])))
		{
			iLocal_149[5] = create_object(iLocal_43, vLocal_200, true, true, false, false, true);
			return false;
		}
	}
	return true;
}

void func_1369(var uParam0)
{
	func_151(uParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(uParam0, iLocal_110, "CharlesSmith", 0, 0, 0, 0);
	func_151(uParam0, iLocal_111, "MRDEVON", 0, 0, 0, 0);
	func_151(uParam0, iLocal_112, "MRWAYNE", 0, 0, 0, 0);
	func_151(uParam0, iLocal_116, "uncle", 0, 0, 0, 0);
	func_412(uParam0, iLocal_126, "wagon02x^1", 0, 0, 0, 0);
	func_412(uParam0, iLocal_118, "wagon02x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_136, "p_bat_lumber04cx", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_149[0]), "p_woodPlank03x", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_149[1]), "p_woodPlank03x^1", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_149[2]), "p_woodPlank03x^2", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_149[3]), "p_woodPlank03x^3", 0, 0, 0, 0);
	func_412(uParam0, &(iLocal_149[4]), "p_woodPlank03x^4", 0, 0, 0, 0);
	func_412(uParam0, iLocal_169, "p_toolbox01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_167, "p_sawHand01x", 0, 0, 0, 0);
	func_412(uParam0, iLocal_168, "p_crate01x", 0, 0, 0, 0);
}

void func_1370(var uParam0)
{
	switch (func_1757(uParam0))
	{
		case 51:
			break;
	}
}

bool func_1371(int iParam0)
{
	if (-1829635046 == func_1868(81053684))
	{
		if (func_1869(iParam0))
		{
			return true;
		}
	}
	else if (func_1642(-525676072, iParam0))
	{
		if (func_1869(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1372(int iParam0)
{
	if (func_20() != -1)
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

void func_1373(int iParam0)
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

void func_1374()
{
	iVar0 = func_1049(Global_35, 9, 1, 0);
	if (func_663(iVar0))
	{
		return;
	}
	iVar0 = func_1049(Global_35, 7, 1, 0);
	if (func_663(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1049(Global_35, 0, 1, 0);
	if (func_663(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1049(Global_35, 1, 1, 0);
	if (func_663(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1049(Global_35, 18, 1, 0);
	if (func_663(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1870();
	if (func_663(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1871(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1872(6291456, 0);
	if (func_663(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1871(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1375()
{
	return Global_1900383->f_393;
}

int func_1376(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1764(*uParam0, 0f, 0f, 0f))
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

void func_1377(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1378(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1379(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1380()
{
	return &Global_1899515;
}

void func_1381(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1382(int iParam0)
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

bool func_1383()
{
	return (func_1873() || func_1874());
}

void func_1384(bool bParam0)
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
	func_1875(0f);
	Global_1935436->f_11 = 1;
	if (func_291())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1876();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1385(var uParam0)
{
	return uParam0->f_865;
}

float func_1386(var uParam0)
{
	return uParam0->f_868;
}

float func_1387(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
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

void func_1388(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1389(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1390(var uParam0, int iParam1)
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

void func_1391(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1154(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1877(iParam4);
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

bool func_1392(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1393(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1394(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1392(1108822547, 6))
	{
		if (bParam2)
		{
			func_1391(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1395(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1396(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1395(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_648(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 || iParam1);
}

void func_1396(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_648(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 && iParam1));
}

bool func_1397(var uParam0)
{
	if (func_1878(&(uParam0->f_29), 62))
	{
		switch (func_1879())
		{
			case 1:
				if (!func_1878(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1878(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1878(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1878(&(uParam0->f_29), 32))
				{
					if (func_1878(&(uParam0->f_29), 2))
					{
						if (func_670(func_272()) < 5)
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

int func_1398(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1880(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1091("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1092(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_663(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1880(iParam1, 512) && func_1637(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1880(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1880(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1880(iParam1, 33554432)))
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
		func_1093(iVar1);
	}
	if (func_663(iVar0))
	{
	}
	else if (!func_1880(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1398(uParam0, iParam1, iParam2);
	}
	else if (func_1880(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1399(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

bool func_1400(int iParam0)
{
	return iParam0 != 0;
}

int func_1401(int iParam0)
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

void func_1402(var uParam0)
{
	if (!func_852(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_818(&(uParam0->f_1), 1);
	}
}

void func_1403(var uParam0)
{
	if (!func_852(*uParam0, 1))
	{
		request_ptfx_asset();
		func_818(uParam0, 1);
	}
}

bool func_1404(var uParam0)
{
	if (func_852(uParam0->f_2, 1))
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

char* func_1405(int iParam0)
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

int func_1406(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1407(var uParam0, char* sParam1)
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

void func_1408(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1409(var uParam0)
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

void func_1410(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1411(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1412(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1413(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1414(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1414(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1414(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1414(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1414(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1414(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1414(uParam0, 5, iParam4))
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
			if (func_1414(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1414(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1414(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1415(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1416(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_204((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1417(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_467(sParam0, 1);
}

bool func_1418(var uParam0)
{
	if (func_852(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_1, 1))
	{
		func_822(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1419(var uParam0)
{
	if (func_852(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_3, 1))
	{
		func_824(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_818(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_818(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1420(var uParam0)
{
	if (func_852(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_1, 1))
	{
		func_826(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1421(var uParam0, int iParam1)
{
	if (func_852(uParam0->f_1, 2))
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
	if (!func_852(uParam0->f_1, 1))
	{
		func_833(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1422(var uParam0)
{
	if (func_852(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_2, 1))
	{
		func_835(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_818(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1423(var uParam0)
{
	if (func_852(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_3, 1))
	{
		func_837(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_818(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1424(var uParam0)
{
	if (func_852(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_1, 1))
	{
		func_839(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1425(var uParam0)
{
	if (func_852(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_1, 1))
	{
		func_841(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1426(var uParam0)
{
	if (func_852(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_2, 1))
	{
		func_843(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_818(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1427(var uParam0)
{
	if (func_852(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_852(uParam0->f_1, 1))
	{
		func_845(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_818(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1428(int iParam0)
{
	if (func_486(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1429(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_486(iParam0))
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
			if (func_966(iParam0, 2, 1))
			{
				func_964(iParam0, 2, 1);
			}
			if (func_682(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_962(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_492(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_426(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_426(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1881(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_962(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1882(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_962(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1882(iParam0, 1);
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
			if (!func_966(iParam0, 44, 0))
			{
				func_962(iParam0, 44, 0);
			}
			if (func_1883(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1882(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_964(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_968(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1884(iParam0, 0, 0, 1);
			}
			func_964(iParam0, 33, 1);
			func_964(iParam0, 34, 1);
			func_964(iParam0, 29, 1);
			if (!func_383(vVar0) && bParam7)
			{
				func_1882(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1882(iParam0, 4);
			}
			else
			{
				func_1882(iParam0, 5);
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
						func_1881(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_863(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1882(iParam0, 4);
			}
			else
			{
				func_1882(iParam0, 5);
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
				if (func_1885(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1886(iParam0, iParam13, 0);
						func_1887(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_966(iParam0, 25, 0))
						{
							func_964(iParam0, 25, 0);
						}
						func_962(iParam0, 66, 0);
						func_1882(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1882(iParam0, 5);
				}
				func_962(iParam0, 28, 1);
			}
			else
			{
				func_1882(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1882(iParam0, 6);
			}
			break;
		case 6:
			if (func_426(Global_1360165[iParam0], 0))
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
					func_1888(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1889(Global_1360165[iParam0], 1);
				}
			}
			func_1882(iParam0, 7);
		case 7:
			func_968(iParam0, bParam9, bParam15, 0);
			func_959(iParam0, 4, bParam11);
			func_963(iParam0);
			if (bParam20)
			{
				if (func_1890(Global_1360165[iParam0]))
				{
				}
			}
			func_1891(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1882(iParam0, 0);
			func_683(iParam0, 16, 1);
			func_964(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1430(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1892(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1893(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1894(uParam0, iParam1, iParam2, func_311(iParam2, 0));
	func_1752(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_1752(uParam0, iParam1, 128);
	}
	else
	{
		func_1776(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1431(int iParam0)
{
	if (!func_486(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1432(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1433(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1442(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1434(int iParam0)
{
	iParam0 = func_253(iParam0);
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
	func_1895(&Var0);
	func_1896(iParam0, Var0);
	func_1897(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1898(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1899(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1900(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1901(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1902(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1903(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1904(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1905(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1435(vector3 vParam0)
{
	return func_1906(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1436(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_501(iParam0))
	{
		return false;
	}
	iVar0 = func_202(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1437(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_495(iParam0);
	func_495(iParam0);
	func_1907(iParam0, iParam1);
	func_1908(iParam0, iParam1);
	func_1909(iParam0, iParam1);
	iVar1 = func_202(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1910(iVar1);
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
	iVar3 = func_202(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1910(iVar3);
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
	func_255();
}

bool func_1438()
{
	iVar0 = func_1375();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1439()
{
	iVar0 = func_1375();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1911(0);
}

int func_1440(int iParam0)
{
	iParam0 = func_253(iParam0);
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

int func_1441(int iParam0)
{
	iParam0 = func_253(iParam0);
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

int func_1442(int iParam0)
{
	iParam0 = func_253(iParam0);
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

void func_1443(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1699(&iVar0, &iVar1, &iVar2);
	func_1700(iParam0, iVar0);
	func_1701(iParam0, iVar1);
	func_1702(iParam0, iVar2);
	func_1912(iParam0, 1);
	func_1913(iParam0, 1);
}

void func_1444(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1914(iParam0, 1);
}

void func_1445(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_253(iParam0);
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

bool func_1446(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_977(iParam0, 1);
}

struct<2> func_1447(int iParam0)
{
	iParam0 = func_253(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1915(iParam0, &uVar2))
	{
	}
	if (!func_1916(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1448()
{
	if (func_1917(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1917(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1917(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1917(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1917(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1917(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1449(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1918(iParam0);
	func_1919(iParam0, uParam1);
	func_1920(iParam0);
	func_1921(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1922(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1450(int iParam0)
{
	iParam0 = func_253(iParam0);
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

bool func_1451(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1452(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1453(int iParam0)
{
	return iParam0;
}

bool func_1454(int iParam0)
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
	*uParam1 = { func_1923(iParam0) };
	if (func_1764(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_864(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1924(*iParam2, iVar0))
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
	switch (func_1925(uParam0))
	{
		case 0:
			uParam0->f_24 = func_272();
			iVar4 = func_272();
			func_1159(&iVar4, uParam0->f_6);
			func_1160(&iVar4, 0);
			func_1161(&iVar4, 0);
			if (func_996(uParam0->f_24, iVar4, 1))
			{
				func_321(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1926(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1927(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1928(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1927(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1928(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_321(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_670(iVar4), func_671(iVar4), func_672(iVar4));
				func_1929(get_clock_hours());
				func_1930(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1460(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1461(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1931(2000);
	Global_16 = 0;
	func_1932();
	set_entity_invincible(Global_35, func_1933(*iParam0, 8));
	if (!func_1933(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1933(*iParam0, 2) || func_1933(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1933(*iParam0, 16))
	{
		func_222(1);
	}
	if (func_1933(*iParam0, 32))
	{
		func_601(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1934(-1623728698, 0);
	}
	func_788(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1462(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1463(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1464(var uParam0)
{
	return *uParam0;
}

bool func_1465(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1466(uParam0, 32768))
	{
		return true;
	}
	if (func_1935(uParam0) >= 3)
	{
		uParam0->f_2286 = func_917(get_player_index(), 0, 0, 1);
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
		func_1936(uParam0);
	}
	if (func_1935(uParam0) < 10)
	{
		if (func_1935(uParam0) == 3)
		{
			func_1937(uParam0, iParam5, bParam6);
		}
		else if (func_1935(uParam0) > 3)
		{
			if (func_1464(uParam0) == 0)
			{
				if (!func_1466(uParam0, 524288))
				{
					func_1938(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1939(uParam0, 4);
					func_1940(uParam0, 10);
					func_1941(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1466(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1942(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1507(0);
			func_1943();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1942(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1944(uParam0, uParam0->f_2074))
				{
					if (func_1945(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1946(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1946(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1947(uParam0);
			}
		}
	}
	bVar0 = func_1948(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1466(uParam0, 268435456) && bVar1) && !func_1466(uParam0, 262144))
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
				func_721(uParam0, 131072);
				func_721(uParam0, 268435456);
			}
		}
		if (func_1949(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1942(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1464(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1935(uParam0) == 3 || func_1466(uParam0, 131072))
	{
		func_1950(uParam0);
		if (!func_1466(uParam0, 262144))
		{
			if ((bVar0 && func_1466(uParam0, 65536)) || func_1466(uParam0, 131072))
			{
				func_721(uParam0, 32768);
				func_1939(uParam0, 4);
				func_1940(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1941(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1935(uParam0) >= 3)
	{
		func_1951(uParam0, iParam5);
		func_1952(uParam0);
		if (!func_1953(uParam0, 1))
		{
			func_1954(uParam0);
		}
		func_1955(uParam0);
	}
	switch (func_1935(uParam0))
	{
		case 0:
			func_1956(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1957(uParam0);
			break;
		case 2:
			func_1958(uParam0);
			break;
		case 3:
			if (func_1959(uParam0))
			{
				func_1960(2);
				func_1946(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_207(&(uParam0->f_2262));
				func_1939(uParam0, 1);
				func_1961();
				func_1940(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1466(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1935(uParam0) == 5)
			{
				if (func_1962(uParam0))
				{
					func_1939(uParam0, 2);
					func_1940(uParam0, 6);
				}
			}
			if (func_1935(uParam0) == 6)
			{
				if (func_1963(uParam0))
				{
					func_1939(uParam0, 3);
					func_1940(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1228(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1964(uParam0, iParam5))
				{
					if (func_1965(uParam0))
					{
						uParam0->f_2075 = func_1966(uParam0);
						func_207(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1939(uParam0, 6);
						func_1940(uParam0, 9);
					}
					else
					{
						func_1939(uParam0, 4);
						func_1940(uParam0, 10);
						func_1941(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1964(uParam0, iParam5))
			{
				func_1941(uParam0, iParam5);
				func_1940(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1466(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1467(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1468(var uParam0, var uParam1)
{
	if (func_1466(uParam1, 32768))
	{
		Var0 = { func_1967(uParam0) };
		func_1968(uParam0, &Var0);
		if (func_1466(uParam1, 131072))
		{
			func_722(uParam0, 268435456);
			if (func_383(uParam0->f_865))
			{
				uParam0->f_865 = { func_1969(uParam1, uParam1->f_2074) };
			}
			if (func_383(uParam0->f_862))
			{
				uParam0->f_862 = { func_1969(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1466(uParam1, 268435456))
		{
			func_1781(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1466(uParam1, 524288))
	{
		func_722(uParam0, 67108864);
		func_1467(uParam1, 524288);
	}
	if (func_1949(uParam1, 128))
	{
		func_722(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1942(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1781(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1469(var uParam0)
{
	if (func_777(&(uParam0->f_7375), 128) || func_777(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_1970(&(uParam0->f_7375));
		func_1388(&(uParam0->f_7375), 128, 1);
		func_1388(&(uParam0->f_7375), 256, 1);
		func_1388(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1470(var uParam0)
{
	func_1971(&(uParam0->f_7375));
}

bool func_1471(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_1972(uParam4, &uParam0);
	if (func_777(uParam4, 2) && !func_777(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1973(uParam4) != 1)
	{
		func_1974(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1973(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1975(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1976(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1977(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1978(uParam5);
				}
				func_1976(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_777(uParam4, 2097152))
					{
						func_1979(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_777(uParam4, 134217728)))
				{
				}
				else
				{
					func_1788(uParam4);
				}
				func_207(&(uParam4->f_1));
				func_1976(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1980(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_871(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1976(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1981(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1976(uParam4, 4);
					}
					else if (!func_383(func_1982(uParam4)) && !func_1297(Global_35, func_1982(uParam4), 100f, 1, 1))
					{
						func_1373(1);
						start_player_teleport(get_player_index(), func_1982(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_871(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1976(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_266(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1975(uParam4, &uParam0, uParam5);
						func_1976(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_871(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1976(uParam4, 4);
			}
			break;
		case 3:
			func_379(uParam4);
			if (func_1977(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1978(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_777(uParam4, 512)))
			{
				if (!func_777(uParam4, 1024) && func_1983(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_777(uParam4, 512))
				{
					func_207(&(uParam4->f_1));
					func_722(uParam4, 512);
					func_1976(uParam4, 4);
				}
				else if (func_777(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1974(uParam4);
			}
			if (func_777(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1984(uParam4) - func_1985(uParam4)))) <= 2f)
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
				if (func_1986(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1985(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1987(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1988(uParam4);
				return true;
			}
			else
			{
				if (func_777(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_207(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_722(uParam4, 512);
						func_1388(uParam4, 67108864, 1);
						func_1976(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_777(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1985(uParam4) <= 5000) && func_1985(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_777(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1461(&(uParam4->f_861), 0);
					func_722(uParam4, 536870912);
				}
				if (func_1985(uParam4) >= 5000 && func_1985(uParam4) <= (func_1984(uParam4) - 5000))
				{
					func_1989();
				}
			}
			break;
		case 6:
			if (func_1987(uParam4))
			{
				func_1988(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_777(uParam4, 524288))
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
						func_722(uParam4, 1073741824);
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
				if (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3)
				{
					if (func_1990(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1976(uParam4, 3);
					}
					else if (func_871(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1976(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1977(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1976(uParam4, 3);
					}
					else if (func_871(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1976(uParam4, 3);
					}
				}
				if (func_1973(uParam4) == 3)
				{
					if (func_777(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1976(uParam4, 4);
			break;
	}
	return false;
}

void func_1472(var uParam0)
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1991()))
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				delete_entity(&iVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_1473(var uParam0)
{
	func_1979(&(uParam0->f_7375));
}

bool func_1474(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_256(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1992(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_257(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1993(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1475(int iParam0)
{
	MemCopy(&cVar0, {func_256(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1476(int iParam0)
{
	Var0 = { func_1475(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1477(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1994(iVar0));
		iVar0++;
	}
}

int func_1478(var uParam0, char[4] cParam1, bool bParam2)
{
	return func_1995(&(uParam0->f_7375), cParam1, bParam2);
}

int func_1479(var uParam0, char[4] cParam1, bool bParam2)
{
	return func_1996(&(uParam0->f_7375), cParam1, bParam2);
}

void func_1480(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

int func_1481(var uParam0, char[4] cParam1, bool bParam2)
{
	return func_1997(&(uParam0->f_7375), cParam1, bParam2);
}

bool func_1482()
{
	if (!func_426(iLocal_109, 0))
	{
		iLocal_109 = func_1998(iLocal_17, func_375(0, 1), func_1256(0, 1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	func_1999("DISCOVERABLE_NAME_ALBERT_CAKE");
	clear_entity_last_damage_entity(iLocal_109);
	return true;
}

bool func_1483(var uParam0)
{
	if (!func_120(uParam0, 4))
	{
		if (!func_426(iLocal_114, 0))
		{
			iLocal_114 = func_1998(iLocal_20, func_375(0, 3), func_1256(0, 3), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!func_426(iLocal_115, 0))
		{
			iLocal_115 = func_1998(iLocal_21, func_375(0, 4), func_1256(0, 4), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
	}
	clear_entity_last_damage_entity(iLocal_114);
	clear_entity_last_damage_entity(iLocal_115);
	return true;
}

bool func_1484()
{
	if (!func_426(iLocal_113, 0))
	{
		iLocal_113 = func_1998(iLocal_22, func_375(2, 4), func_1256(2, 4), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	stop_ped_speaking(iLocal_113, true);
	clear_entity_last_damage_entity(iLocal_113);
	func_1276(&iLocal_113);
	func_1260(iLocal_113, 1);
	func_1999("DISCOVERABLE_NAME_NILS");
	return true;
}

bool func_1485(var uParam0)
{
	if (!does_entity_exist(iLocal_118))
	{
		iLocal_118 = create_vehicle(iLocal_48, func_375(0, 5), func_1256(0, 5), true, true, false, false);
		return false;
	}
	if (!does_entity_exist(iLocal_126))
	{
		iLocal_126 = create_vehicle(iLocal_49, func_375(0, 6), func_1256(0, 6), true, true, false, false);
		return false;
	}
	if (!_does_propset_exist(iLocal_134))
	{
		if (!_0x53784cea0159439b(iLocal_118))
		{
			if (func_33(uParam0) > 0 || func_120(uParam0, 4))
			{
				_0xd80faf919a2e56ea(iLocal_118, iLocal_55);
			}
			else
			{
				_0xd80faf919a2e56ea(iLocal_118, iLocal_54);
			}
		}
		else
		{
			iLocal_134 = _0xce2acd6f602803e5(iLocal_118);
		}
		return false;
	}
	if (!_does_propset_exist(iLocal_135))
	{
		if (!_0x53784cea0159439b(iLocal_126))
		{
			_0xd80faf919a2e56ea(iLocal_126, iLocal_56);
		}
		else
		{
			iLocal_135 = _0xce2acd6f602803e5(iLocal_126);
		}
		return false;
	}
	if (!does_entity_exist(iLocal_136))
	{
		if (func_33(uParam0) > 0 || func_120(uParam0, 4))
		{
			if (!func_1755(iLocal_118, &iLocal_136, &iLocal_138, &iLocal_140))
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(iLocal_137))
	{
		if (!func_1755(iLocal_126, &iLocal_137, &iLocal_139, &iLocal_141))
		{
			return false;
		}
	}
	if (func_2000(&uLocal_119))
	{
		if (func_2001(iLocal_118, iLocal_48))
		{
			func_2002(iLocal_118, &uLocal_119);
		}
		return false;
	}
	if (func_2000(&uLocal_127))
	{
		if (func_2001(iLocal_126, iLocal_49))
		{
			func_2002(iLocal_126, &uLocal_127);
		}
		return false;
	}
	if (!func_2003(&uLocal_119))
	{
		return false;
	}
	if (!func_2003(&uLocal_127))
	{
		return false;
	}
	func_2004(&uLocal_119);
	func_2004(&uLocal_127);
	if (!_does_volume_exist(iLocal_224))
	{
		iLocal_224 = _create_volume_box_with_custom_name(get_entity_coords(iLocal_118, true, false), get_entity_rotation(iLocal_118, 2), 4.5f, 2.5f, 2.5f, "MAR7_TOOL_DROPOFF");
		_0x7c00cfc48a782dc0(iLocal_224, iLocal_118, 0f, -2.75f, 0f, vLocal_188, 2, 1);
	}
	func_1756(iLocal_136, 500);
	func_1756(iLocal_138, 500);
	func_1756(iLocal_140, 500);
	func_1756(iLocal_137, 500);
	func_1756(iLocal_139, 500);
	func_1756(iLocal_141, 500);
	_0xe1a83d4a3b5d7938(iLocal_118);
	_0xe1a83d4a3b5d7938(iLocal_126);
	set_vehicle_can_be_used_by_fleeing_peds(iLocal_118, false);
	set_vehicle_can_be_used_by_fleeing_peds(iLocal_126, false);
	set_entity_only_damaged_by_player(iLocal_118, true);
	set_entity_only_damaged_by_player(iLocal_126, true);
	set_vehicle_extra(iLocal_118, 1, true);
	set_vehicle_extra(iLocal_126, 1, true);
	set_vehicle_extra(iLocal_118, 2, true);
	set_vehicle_extra(iLocal_126, 2, true);
	set_vehicle_extra(iLocal_118, 3, true);
	set_vehicle_extra(iLocal_126, 3, true);
	if (func_33(uParam0) < 3)
	{
		_0x27e3f2b57209fa54(iLocal_118, 1);
	}
	if (func_33(uParam0) < 7)
	{
		set_vehicle_is_considered_by_player(iLocal_118, false);
	}
	if (func_33(uParam0) > 3)
	{
		set_vehicle_is_considered_by_player(iLocal_126, false);
	}
	return true;
}

void func_1486(int iParam0, vector3 vParam1, vector3 vParam4)
{
	set_entity_coords(iParam0, vParam1, true, false, true, true);
	set_entity_rotation(iParam0, vParam4, 2, true);
	freeze_entity_position(iParam0, true);
}

bool func_1487(var uParam0)
{
	if (!func_2005(uParam0, func_210(0, 7)))
	{
		return false;
	}
	if (func_33(uParam0) == 0)
	{
		if (!func_2006(1))
		{
			func_1871(Global_35, func_1870(), 0, 0, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
	}
	if (func_33(uParam0) < 3)
	{
		_hide_ped_weapons(Global_35, 2, true);
		_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
		_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 1);
	}
	func_145(uParam0, Global_35, "JOHN", 0);
	set_ped_config_flag(Global_35, 159, true);
	_0x0751d461f06e41ce(get_player_index(), 10, 0, 1);
	return true;
}

bool func_1488(var uParam0)
{
	if (!func_855(uParam0, 7, &iLocal_110, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0))
	{
		return false;
	}
	if (!does_entity_exist(iLocal_110))
	{
		return false;
	}
	func_1276(&iLocal_110);
	func_1884(7, 0, 1, 1);
	func_2007(7, 0);
	func_969(7, 1);
	set_ped_combat_movement(iLocal_110, 1);
	set_ped_flee_attributes(iLocal_110, 512, true);
	set_ped_combat_attributes(iLocal_110, 0, true);
	set_ped_combat_attributes(iLocal_110, 17, false);
	set_ped_combat_attributes(iLocal_110, 30, false);
	set_ped_combat_attributes(iLocal_110, 58, true);
	set_ped_combat_attributes(iLocal_110, 46, true);
	clear_entity_last_damage_entity(iLocal_110);
	set_blocking_of_non_temporary_events(iLocal_110, true);
	_0x4ec4ea2f72b36358(iLocal_110, 1);
	set_ped_combat_attributes(iLocal_110, 84, true);
	set_combat_float(iLocal_110, 62, (3f * 2f));
	func_145(uParam0, iLocal_110, "CHARLES_SMITH", 0);
	func_1217(iLocal_110, func_210(0, 2), 2, 1073741824);
	func_2009(uParam0, iLocal_110, 335858, 0, "MAR7_CHARLES", 67108863, 1023, 3, -1);
	func_1752(uParam0, iLocal_110, 32);
	func_2010(iLocal_110, -2002235300);
	func_2010(iLocal_110, 2031861036);
	_give_weapon_to_ped_2(iLocal_110, -1098045850, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	set_ped_drops_weapons_when_dead(iLocal_110, func_122(-1098045850));
	set_ped_infinite_ammo(iLocal_110, true, -1098045850);
	if (is_ped_in_any_vehicle(iLocal_110, true))
	{
		clear_ped_tasks_immediately(iLocal_110, true, true);
	}
	return true;
}

bool func_1489(var uParam0)
{
	if (!func_426(iLocal_111, 0))
	{
		iLocal_111 = func_1998(iLocal_18, func_375(0, 3), func_1256(0, 3), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!func_426(iLocal_112, 0))
	{
		iLocal_112 = func_1998(iLocal_19, func_375(0, 4), func_1256(0, 4), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (func_33(uParam0) == 3)
	{
		if (!is_ped_in_vehicle(iLocal_112, iLocal_126, true))
		{
			set_ped_into_vehicle(iLocal_112, iLocal_126, 0);
			return false;
		}
	}
	if (!_0xa0bc8faed8cfeb3c(iLocal_111) || !_0xa0bc8faed8cfeb3c(iLocal_112))
	{
		return false;
	}
	_give_weapon_to_ped_2(iLocal_111, 127400949, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	set_ped_drops_weapons_when_dead(iLocal_111, func_122(127400949));
	_give_weapon_to_ped_2(iLocal_112, 127400949, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	set_ped_drops_weapons_when_dead(iLocal_112, func_122(127400949));
	if (!func_1229(iLocal_111, 422991367, "MAR7_DEVON", 1, 0, 1))
	{
		return false;
	}
	if (func_33(uParam0) <= 3)
	{
		if (!func_1229(iLocal_112, 422991367, "MAR7_WAYNE", 1, 0, 1))
		{
			return false;
		}
	}
	if (func_33(uParam0) > 3)
	{
		stop_ped_speaking(iLocal_112, true);
		set_ped_can_ragdoll(iLocal_112, false);
		set_entity_only_damaged_by_player(iLocal_112, true);
		set_ped_config_flag(iLocal_112, 16, true);
	}
	if (func_33(uParam0) > 4)
	{
		func_1284(iLocal_112);
		set_entity_invincible(iLocal_112, true);
	}
	if (func_33(uParam0) > 4 && func_33(uParam0) < 7)
	{
		set_entity_visible(iLocal_112, false);
	}
	if (func_33(uParam0) > 7)
	{
		set_ped_leg_ik_mode(iLocal_112, 0);
	}
	func_1276(&iLocal_111);
	func_1999("DISCOVERABLE_NAME_DEVON");
	func_145(uParam0, iLocal_111, "MAR7_Devon", 0);
	set_ped_max_health(iLocal_111, 1200);
	_set_entity_health(iLocal_111, 1200, 0);
	clear_entity_last_damage_entity(iLocal_111);
	set_ped_combat_movement(iLocal_111, 1);
	set_ped_combat_attributes(iLocal_111, 0, true);
	set_ped_config_flag(iLocal_111, 263, true);
	set_ped_config_flag(iLocal_111, 16, true);
	set_blocking_of_non_temporary_events(iLocal_111, true);
	_0x4ec4ea2f72b36358(iLocal_111, 1);
	set_ped_combat_attributes(iLocal_111, 84, true);
	func_1276(&iLocal_112);
	func_1999("DISCOVERABLE_NAME_WAYNE");
	func_145(uParam0, iLocal_112, "MAR7_Wayne", 0);
	set_ped_max_health(iLocal_112, 1200);
	_set_entity_health(iLocal_112, 1200, 0);
	clear_entity_last_damage_entity(iLocal_112);
	set_ped_combat_movement(iLocal_112, 1);
	set_ped_combat_attributes(iLocal_112, 0, true);
	set_blocking_of_non_temporary_events(iLocal_112, true);
	set_ped_config_flag(iLocal_112, 263, true);
	set_ped_config_flag(iLocal_112, 16, true);
	return true;
}

int func_1490(var uParam0)
{
	return 1;
}

void func_1491(var uParam0, int iParam1)
{
	uParam0->f_8265 = iParam1;
	func_103(uParam0, 2048);
}

int func_1492(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			func_2011(uParam0);
			break;
		case 2:
			func_2012(uParam0);
			break;
		case 3:
			func_2013(uParam0);
			break;
		case 4:
			func_2014(uParam0);
			break;
		case 25:
			func_2015(uParam0);
			break;
	}
	return 1;
}

void func_1493(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_1494(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (!func_2016(uParam0))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_2017(uParam0))
			{
				return 0;
			}
			break;
		case 3:
			if (!func_2018(uParam0))
			{
				return 0;
			}
			break;
		case 4:
			if (!func_2019(uParam0))
			{
				return 0;
			}
			break;
		case 25:
			if (!func_2020(uParam0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_1495(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_1496(var uParam0)
{
	if ((func_33(uParam0) == 0 && !func_120(uParam0, 4)) && !func_128(uParam0, 1))
	{
		func_2021(-857562377, 0, 0, 45f);
	}
	else
	{
		func_2021(-857562377, 0, 1, 1103626240);
	}
}

void func_1497(var uParam0)
{
	if (func_128(uParam0, 1) && !func_120(uParam0, 4))
	{
		switch (func_33(uParam0))
		{
			case 0:
				set_clock_time(6, 0, 0);
				break;
			case 1:
				set_clock_time(7, 0, 0);
				break;
			case 2:
				set_clock_time(8, 0, 0);
				break;
			case 3:
				set_clock_time(9, 0, 0);
				break;
			case 4:
				set_clock_time(10, 0, 0);
				break;
			case 5:
				set_clock_time(11, 0, 0);
				break;
			case 6:
				set_clock_time(12, 0, 0);
				break;
			case 7:
				set_clock_time(13, 0, 0);
				break;
			case 8:
				set_clock_time(14, 0, 0);
				break;
			case 25:
				set_clock_time(15, 0, 0);
				break;
		}
	}
}

void func_1498(var uParam0)
{
	if (func_33(uParam0) < 1)
	{
		func_2022(&iLocal_221, -863.667f, -1357.075f, 45.645f, vLocal_188, 36.897f, 87.606f, 10f, "MAR7-BlackwaterCorner");
		func_2022(&iLocal_222, -825.935f, -1336.781f, 45.645f, vLocal_188, 42.083f, 9.017f, 10f, "MAR7-BlackwaterCorner2");
		uLocal_232 = func_2023(iLocal_221, 0, 0, 0);
		uLocal_233 = func_2023(iLocal_222, 0, 0, 0);
		_0xc1799fafd2fdf52b(iLocal_221, 0, 0, 0);
		_0xc1799fafd2fdf52b(iLocal_222, 0, 0, 0);
		if (func_120(uParam0, 4))
		{
			func_2024(iLocal_221, 0, 0, 0, 0, 0);
			func_2024(iLocal_222, 0, 0, 0, 0, 0);
		}
	}
	if (func_33(uParam0) < 3)
	{
		func_2022(&iLocal_220, -1806.812f, -1710.149f, 99.677f, 0f, 0f, 81.812f, 44.964f, 313.475f, 63.12f, "MAR7-ManzanitaJunction");
		func_2022(&iLocal_218, -1982.18f, -1637.106f, 118.185f, 0f, 0f, 16.6f, 10f, 9.507f, 5.023f, "MAR7-Nils");
		uLocal_235 = func_2023(iLocal_218, 0, 0, 0);
		func_2024(iLocal_218, 0, 0, 0, 0, 0);
		_0xc1799fafd2fdf52b(iLocal_220, 0, 0, 1);
	}
	if (func_33(uParam0) < 4)
	{
		func_2022(&iLocal_217, -1994.738f, 1423.998f, 116.687f, 0f, 0f, -3.074f, 3.822f, 7.645f, 3.098f, "MAR7-S04_COVER");
	}
	func_2022(&iLocal_219, -1974.447f, -1543.18f, 115.945f, 0f, 0f, 17.345f, 93.942f, 297.311f, 40f, "MAR7-ManzanitaRoads");
	func_2025(&iLocal_223, -1901.202f, -1462.93f, 103.4024f, vLocal_188, 100f, 100f, 100f, "MAR7-NoLargeAnimals");
	func_2026(&iLocal_228, func_375(6, 2) - Vector(1f, 0f, 0f), vLocal_188, 35f, 35f, 15f, "MAR7-FoundTools");
	func_2026(&iLocal_229, func_375(6, 2) - Vector(1f, 0f, 0f), vLocal_188, 20f, 20f, 15f, "MAR7-CharlesWander");
	func_2026(&iLocal_230, func_375(6, 2) - Vector(1f, 0f, 0f), vLocal_188, 8f, 8f, 15f, "MAR7-IG7");
	uLocal_234 = func_2023(iLocal_219, 0, 0, 0);
	uLocal_236 = func_2023(iLocal_223, 0, 0, 4224);
	func_2024(iLocal_219, 0, 0, 0, 0, 0);
	_0xc1799fafd2fdf52b(iLocal_219, 0, 0, 0);
}

void func_1499()
{
	func_2022(iLocal_225[0], -1869.998f, -1430.979f, 102.808f, 0f, 0f, 0f, 16.111f, 30.564f, 14.255f, "MAR7_FailVol_01");
	func_2025(iLocal_225[1], -1864.286f, -1440.656f, 101.368f, 0f, 0f, 0f, 16.111f, 11.256f, 14.255f, "MAR7_FailVol_02");
}

void func_1500()
{
	func_2027(&uLocal_241, -1918.709f, -1442.559f, 106.4081f, 6f, 1, 12, 0);
	func_2027(&uLocal_242, -1865.911f, -1474.534f, 98.72054f, 3.5f, 1, 12, 0);
	func_2027(&uLocal_243, -1857.587f, -1472.504f, 99.04909f, 3.5f, 1, 12, 0);
	func_2027(&uLocal_244, func_375(6, 2), 1f, 2, 2, 0);
}

void func_1501(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_1502(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_2028(iParam0, 0, 0);
	if (func_2029(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_2030(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_2031(iParam0, 1);
			}
			else
			{
				func_2032(iParam0, 1);
			}
		}
		else
		{
			func_2033(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_2034())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1503()
{
	fLocal_1634 = get_random_float_in_range(6.5f, 12.5f);
}

void func_1504()
{
	if (!func_426(Global_35, 0))
	{
		if (!bLocal_185)
		{
			bLocal_185 = true;
			if (!func_1314(4))
			{
				if (func_1314(2))
				{
					func_2035(4);
				}
				else if (func_1314(1))
				{
					func_2035(2);
				}
				else
				{
					func_2035(1);
				}
			}
		}
	}
}

void func_1505(var uParam0)
{
	if (func_2036(iLocal_247))
	{
		switch (func_33(uParam0))
		{
			case 0:
			case 1:
			case 2:
				if (func_2037(3) || func_1206(iLocal_118, sLocal_57, 192))
				{
					func_2038(uParam0);
					func_2039(uParam0, 0, 0);
				}
				else if (!func_2040(uParam0, iLocal_126, 1))
				{
					func_2039(uParam0, 0, 0);
				}
				break;
			case 3:
			case 4:
			case 5:
			case 7:
				func_2039(uParam0, 0, 0);
				break;
			case 6:
				if (func_2041(&iLocal_225))
				{
					func_27(&uLocal_88, 0);
					func_2039(uParam0, 1, func_1228(&uLocal_88) > 5f);
				}
				else
				{
					func_524(&uLocal_88);
					func_2039(uParam0, 0, 0);
				}
				break;
			case 8:
				if (!func_2040(uParam0, iLocal_118, 0))
				{
					func_2042(uParam0);
				}
				break;
		}
	}
}

void func_1506(var uParam0)
{
	if (func_1228(&uLocal_97) > fLocal_187)
	{
		func_2043(uParam0, func_1772(iLocal_247), 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
		func_524(&uLocal_97);
	}
}

void func_1507(bool bParam0)
{
	if (bParam0)
	{
		func_2044(4);
	}
	func_2044(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1508(var uParam0)
{
	if (iLocal_246 > 0 && iLocal_246 < 16)
	{
		func_27(&uLocal_103, 0);
		if (func_1228(&uLocal_103) > func_2045(iLocal_246))
		{
			func_1295(uParam0, func_2046(iLocal_246), "", 1, 0);
		}
	}
	if (does_entity_exist(iLocal_113))
	{
		if (!func_426(iLocal_113, 0))
		{
			iLocal_246 = 4;
			return;
		}
	}
	if (does_entity_exist(iLocal_111))
	{
		if (!func_426(iLocal_111, 0))
		{
			iLocal_246 = 7;
			return;
		}
		else if (func_2047(iLocal_111, Global_35, 0, 0))
		{
			iLocal_246 = 10;
			return;
		}
	}
	if (func_33(uParam0) <= 3)
	{
		if (does_entity_exist(iLocal_112))
		{
			if (!func_426(iLocal_112, 0))
			{
				iLocal_246 = 6;
				return;
			}
			else if (func_2047(iLocal_112, Global_35, 0, 0))
			{
				iLocal_246 = 9;
				return;
			}
		}
	}
	if (func_33(uParam0) > 1)
	{
		if (func_2047(iLocal_169, Global_35, 0, 0))
		{
			iLocal_246 = 13;
			return;
		}
	}
	if (func_162(uParam0, func_33(uParam0)) == 5)
	{
		if (func_33(uParam0) == 7 && func_1209(uParam0) == 0)
		{
		}
		else if (func_33(uParam0) < 3 || func_33(uParam0) > 6)
		{
			if (does_entity_exist(iLocal_118))
			{
				if (func_1852(iLocal_118) || !func_1853(iLocal_118))
				{
					iLocal_246 = 2;
					return;
				}
			}
			if (does_entity_exist(iLocal_126))
			{
				if (func_1852(iLocal_126) || !func_1853(iLocal_126))
				{
					iLocal_246 = 3;
					return;
				}
			}
		}
		else
		{
			if (does_entity_exist(iLocal_118))
			{
				if (func_1852(iLocal_118) || !func_1853(iLocal_118))
				{
					if ((func_2047(iLocal_118, Global_35, 0, 0) || func_2047(&(uLocal_119[0]), Global_35, 0, 0)) || func_2047(&(uLocal_119[1]), Global_35, 0, 0))
					{
						iLocal_246 = 2;
						return;
					}
				}
			}
			if (does_entity_exist(iLocal_126))
			{
				if (func_1852(iLocal_126) || !func_1853(iLocal_126))
				{
					if ((func_2047(iLocal_126, Global_35, 0, 0) || func_2047(&(uLocal_127[0]), Global_35, 0, 0)) || func_2047(&(uLocal_127[1]), Global_35, 0, 0))
					{
						iLocal_246 = 3;
						return;
					}
				}
			}
		}
	}
	if (func_33(uParam0) == 8)
	{
		if (!func_1297(Global_35, get_entity_coords(iLocal_111, true, false), 75f, 1, 1) && !func_1297(Global_35, func_375(9, 0), 500f, 1, 1))
		{
			iLocal_246 = 15;
			return;
		}
	}
	if (func_2048())
	{
		iLocal_246 = 12;
		return;
	}
	if (get_player_wanted_level(get_player_index()) > 0 || _get_wanted_intensity_for_player(get_player_index()) > 0)
	{
		iLocal_246 = 8;
		return;
	}
}

void func_1509(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_204(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_2049(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1417(uParam0->f_8269[iVar19]);
				}
				else if (func_2050(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_214(uParam0->f_8269[iVar19]);
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						_copy_memory(uParam0->f_8269[iVar19], uParam0->f_8269[(uParam0->f_8269.f_2504 - 1)], 16);
						_copy_memory(uParam0->f_8269[uParam0->f_8269.f_2504], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (func_204(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2051(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2052(uParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(uParam0->f_8269.f_641[iVar19], uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1)], 16);
						_copy_memory(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1)], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269.f_641[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (func_204(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2051(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_205(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_204(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2053(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							_copy_memory(uParam0->f_8269.f_1282[iVar19], uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1)], 16);
							_copy_memory(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1)], &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							_copy_memory(uParam0->f_8269.f_1282[iVar19], &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (func_204(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2049(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2054(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_467(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2050(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2054(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_467(uParam0->f_8269.f_2243[iVar19], 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						_copy_memory(uParam0->f_8269.f_2243[iVar19], uParam0->f_8269.f_2243[iVar19 + 1], 16);
						_copy_memory(uParam0->f_8269.f_2243[iVar19 + 1], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269.f_2243[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_1510(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 16777216))
	{
		return false;
	}
	if (!func_121(uParam0, func_33(uParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_1762(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1511()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1507(0);
	func_2055();
}

void func_1512(var uParam0, int iParam1, int iParam2)
{
	func_2056(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1513(var uParam0)
{
	if (func_485(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_485(uParam0, 1024);
	if (func_485(uParam0, 128) || bVar0)
	{
		if (func_485(uParam0, 4096))
		{
			if (!func_485(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_2057(uParam0, 2048);
				return;
			}
		}
		else if (func_485(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_2058(uParam0, 2048);
		}
		if (func_485(uParam0, 512))
		{
			if (func_486(uParam0->f_10))
			{
				if (func_858(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_2059(uParam0->f_10))
					{
						func_491(uParam0->f_10, 1);
						func_2060(uParam0->f_10, 0);
					}
				}
				else if ((func_2059(uParam0->f_10) && !bVar0) && !func_485(uParam0, 16384))
				{
					func_491(uParam0->f_10, 0);
					func_2060(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_858(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_858(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_485(uParam0, 512))
	{
		if (func_486(uParam0->f_10))
		{
			if (func_2059(uParam0->f_10))
			{
				func_491(uParam0->f_10, 0);
				func_2060(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1514(int iParam0)
{
	return (iParam0 < func_384() && iParam0 >= 0);
}

int func_1515(int iParam0)
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

bool func_1516(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1517(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1514(iVar0))
	{
		return false;
	}
	iVar1 = func_1515(iParam2);
	if (!func_1516(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1518(struct<2> Param0, int iParam2)
{
	if (!func_242(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1519(var uParam0)
{
	func_2061(uParam0);
	if (func_266(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_266(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_866(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_2062(uParam0);
	func_2063(uParam0, 67108864);
	func_2063(uParam0, 8192);
	func_444(uParam0, 4);
	func_444(uParam0, 512);
	func_444(uParam0, 65536);
	func_444(uParam0, 1024);
	func_444(uParam0, 262144);
	func_444(uParam0, 16777216);
	func_444(uParam0, 64);
	func_252(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_2064(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_140(uParam0, func_33(uParam0), 1073741824);
	}
	func_252(uParam0, 4194304);
	func_252(uParam0, 8388608);
	if (!func_121(uParam0, func_33(uParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_20() == 0)
	{
		func_21(8);
		func_79(1);
	}
	if (func_121(uParam0, func_33(uParam0), 64) || !func_115(uParam0))
	{
		func_40(0);
	}
	else
	{
		func_40(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_8(uParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_524(&(uParam0->f_13106));
	func_207(&(uParam0->f_13112));
	func_2065(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_222(1);
	}
	if (func_897(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_897(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_897(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2066(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_216(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2067(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_2068(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_2069(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1520(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1521(var uParam0)
{
	func_1978(uParam0);
}

void func_1522(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1411(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1523(var uParam0)
{
	func_2070(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1524(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1525(var uParam0)
{
	return true;
}

void func_1526(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1527(var uParam0, int iParam1)
{
	iVar0 = func_2071(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1528(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2072(uParam0, uParam1))
	{
		return 0;
	}
	if (func_486(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1513(uParam1);
	func_2073(uParam1);
	if (!bParam2)
	{
		func_2074(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2075(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2076(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2077(uParam0, uParam1);
	func_2078(uParam1);
	return 0;
}

bool func_1529(var uParam0)
{
	return true;
}

int func_1530(int iParam0)
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
						*iParam0 = func_2079(vVar0.z);
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

void func_1531(var uParam0, char[4] cParam1, bool bParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1295(uParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1532(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_2080(cParam1))
			{
				func_140(uParam0, func_33(uParam0), 131072);
			}
			func_140(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1466(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2081(&(uParam0->f_7375), &(uParam0->f_10792));
				func_140(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_140(uParam0, func_33(uParam0), 256);
		}
	}
	return func_1981(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1533(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_815((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2082(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2083(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2084((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_815((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2082(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2083(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2085((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_815((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2082(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2083(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2086((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_815((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2082(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2083(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2087((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_815(uParam4->f_1, iParam12))
	{
		func_2082(&(uParam4->f_1), iParam12);
		if (func_2083(&(uParam4->f_1), iParam13))
		{
			func_2088(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_815((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2082(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2083(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2089((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_815((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2082(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2083(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2090((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_815((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2082(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2083(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2091((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_815((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2082(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2083(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2092((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_815((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2082(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2083(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2093((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_815((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2082(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2083(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2094((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_815((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2082(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2083(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2095((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1534(var uParam0)
{
	iVar0 = func_2096(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1535(bool bParam0, bool bParam1)
{
	if (func_2097(255) == 4)
	{
		return;
	}
	if (func_383(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_277(0);
	}
	else
	{
		if (bParam1)
		{
			func_2098(0, 0, 0, 1);
		}
		func_278(0);
		func_2099(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2100(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2101(Global_1109400->f_389, 42);
	func_2102(Global_1109400->f_428, 42);
}

float func_1536(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_1537(bool bParam0, bool bParam1, bool bParam2)
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

var func_1538(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1539(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2103(sParam1));
}

bool func_1540(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_1541(int iParam0)
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

void func_1542(int iParam0)
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

void func_1543()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1544(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1545();
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
	if (func_2104(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1545()
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
		iVar3 = func_2105(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_1546(int iParam0, int iParam1)
{
	if (!func_925(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_1547(int iParam0, int iParam1)
{
	if (!func_925(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_1548(int iParam0)
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

void func_1549(int iParam0, bool bParam1)
{
	if (!func_2106(iParam0))
	{
		return;
	}
	if ((bParam1 && func_2107(iParam0, 512)) || (!bParam1 && !func_2107(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_2108(iParam0, 512);
	}
	else
	{
		func_2109(iParam0, 512);
	}
	if (func_2110(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

void func_1550(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_1551(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_1552(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_1553(int iParam0, int iParam1)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_1554(int iParam0)
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

void func_1555(int iParam0, int iParam1)
{
	if (!func_481(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

int func_1556(int iParam0)
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

int func_1557(int iParam0)
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

void func_1558(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1559(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2111(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1560(int iParam0)
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

void func_1561()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_382())
	{
		return;
	}
	func_2112(&(Global_40.f_40));
}

void func_1562()
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

bool func_1563()
{
	return !func_383(Global_1310720->f_1);
}

int func_1564()
{
	return Global_40.f_4283.f_1;
}

int func_1565()
{
	return Global_40.f_4283.f_4;
}

void func_1566(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2113())
	{
		fVar0 = func_982(vParam0, Global_40.f_6);
	}
	if (func_2114(33554432))
	{
		if (!func_2115(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_982(vParam0, Global_40.f_2);
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

float func_1567(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1568()
{
	if (!func_185(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2116(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2116(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2116(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2116(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2116(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2116(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2116(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2116(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2116(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2117(10f, to_float(func_2116(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2117(5f, to_float(func_2116(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2117(25f, to_float(func_2118(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2117(1f, to_float(func_2118(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2117(6f, to_float(func_2118(64058978)))));
	fVar0 = (fVar0 + (3f * func_2117(1f, to_float(func_2118(795577402)))));
	iVar1 = func_2119();
	fVar0 = (fVar0 + (0.1111111f * func_2117(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2117(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2117(to_float(20), to_float(func_2121()))));
	if (func_2122(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2122(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2122(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2122(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2122(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2120(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2117(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2117(5f, to_float(func_2118(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2117(5f, to_float(func_2116(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1639(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1639(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1639(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1639(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1639(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1639(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2123(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2117((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2117(1f, to_float(func_2124(-2116919750)))));
	fVar5 = to_float(func_2125());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2117(5f, to_float(func_2118(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2117(1f, to_float(func_2118(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2117(1f, to_float(func_2118(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2117(1f, to_float(func_2118(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2117(1f, to_float(func_2116(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2117(1f, to_float(func_2116(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2117(1f, to_float(func_2116(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2117(1f, to_float(func_2116(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2117(1f, to_float(func_2116(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2117(1f, to_float(func_2116(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2117(1f, to_float(func_2116(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2126(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_177(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_177(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_181(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2127(Global_1898330[iVar61]);
				}
				else
				{
					func_2128(iVar61, 0);
					if (func_182(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_180(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_180((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_180(&Global_1898437), &iVar9);
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

void func_1569(var uParam0, int iParam1, bool bParam2)
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

int func_1570(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1571(int iParam0)
{
	if (!func_960(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2129(iParam0);
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

void func_1572(int iParam0)
{
	if (func_486(iParam0))
	{
		if (does_entity_exist(func_523(iParam0)))
		{
			func_683(iParam0, 67108864, 1);
			func_964(iParam0, 19, 1);
		}
	}
}

float func_1573(int iParam0)
{
	if (!func_960(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1574(int iParam0)
{
	iVar0 = func_523(iParam0);
	iVar1 = func_965(iParam0, 0);
	func_2130(iParam0, iVar0);
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

bool func_1575(int iParam0)
{
	if (!func_960(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1576(int iParam0)
{
	if (!func_960(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1577(int iParam0, int iParam1, bool bParam2)
{
	if (!func_960(iParam0))
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

int func_1578(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_960(iParam0))
	{
		return 0;
	}
	iVar0 = func_972(iParam0);
	if (func_426(iVar0, 0))
	{
		if (func_426(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1575(iParam0)) || func_1576(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2131(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2132(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2133(iParam0);
					_0x7b204f88f6c3d287(func_2134(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2134(iParam0, 0));
					func_2135(iParam0);
				}
			}
			else
			{
				if (func_682(iParam0, 32768, 1))
				{
					iVar2 = func_2134(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_426((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_682(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2133(iParam0);
				_0x7b204f88f6c3d287(func_2134(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2134(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2133(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2136(iParam0, 0);
	return 1;
}

int func_1579(int iParam0)
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

char* func_1580(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_233(37, iParam0))
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
	if (func_233(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1581(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1117(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1582(int iParam0)
{
	iParam0 = func_253(iParam0);
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

float func_1583(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1584(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1585(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1586(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1587(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1588(int iParam0, int iParam1)
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

void func_1589(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2137(bParam1);
	}
}

void func_1590(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1591(int iParam0)
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

bool func_1592(int iParam0)
{
	if (!func_1181(23, &vVar0))
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

bool func_1593(int iParam0, int iParam1, int iParam2)
{
	if (!func_1181(23, &Var0))
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

int func_1594(int iParam0)
{
	return iParam0;
}

int func_1595()
{
	iVar0 = func_1003();
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

int func_1596(int iParam0)
{
	if (!func_549(*iParam0, 0))
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

bool func_1597(int iParam0, var uParam1, bool bParam2)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_660(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1040((386 + iVar29), 1);
		if (func_1041(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1042(iParam0, &Var6, iVar5);
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

int func_1598(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1043(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_944(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1599(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1600(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1601(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_944(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1602(int iParam0)
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

float func_1603(int iParam0)
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
			return func_2138(iParam0);
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
			return func_2138(iParam0);
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
			return func_2138(iParam0);
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

bool func_1604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_571(18);
		case 2:
			return func_571(20);
		case 1:
			return func_571(19);
		default:
			break;
	}
	return true;
}

int func_1605(int iParam0)
{
	return func_2139(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1606(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_571(31))
	{
		return;
	}
	iVar0 = func_1605(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1605(iParam0);
	if (func_2140(iParam0) && func_2141(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2142(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2143(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_312(func_2144(iParam0), 0);
					}
					func_2145(iParam0, iVar2, iVar3);
					func_2146(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1607(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1608(int iParam0)
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

int func_1609()
{
	return func_2147(Global_40.f_12019);
}

int func_1610()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1024(iVar1);
		if (func_334(iVar2, 1, 0) || func_1616(func_1615(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1611()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2148(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1612()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1621(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1613()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1614(int iParam0)
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

int func_1615(int iParam0)
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

bool func_1616(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1617(int iParam0)
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

int func_1618(int iParam0)
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

int func_1619(int iParam0)
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

char* func_1620(int iParam0)
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

bool func_1621(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1622(int iParam0)
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

char* func_1623(int iParam0)
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

bool func_1624(int iParam0)
{
	if (func_2149(iParam0) && func_334(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2150(iParam0) && func_2151(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1625(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_616(iParam0));
}

int func_1626(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1627(bool bParam0)
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

void func_1628(int iParam0)
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

void func_1629(bool bParam0)
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

void func_1630(bool bParam0)
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

void func_1631(bool bParam0)
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

void func_1632(bool bParam0)
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

void func_1633(bool bParam0)
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

void func_1634(bool bParam0)
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

int func_1635(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_648(iParam0, 1)]);
}

void func_1636()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2152();
		_unlock_set_unlocked(-1526891582, true);
		func_576(-916314281);
		func_622(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_576(494733111);
		func_622(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1637(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_944(0);
	*uParam1 = { func_1043(iParam0, func_1149(0), iParam3, 0) };
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

bool func_1638(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1639(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1640(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1641(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_569(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_569(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_569(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_569(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_569(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_569(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1642(int iParam0, int iParam1)
{
	iVar1 = func_648(func_2153(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_573(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1643(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_648(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1086(524288))
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

bool func_1644(int iParam0)
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

int func_1645(int iParam0)
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

int func_1646(int iParam0)
{
	return func_2154(iParam0, -1);
}

bool func_1647(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1648(int iParam0)
{
	iVar0 = func_943(iParam0, 1);
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

void func_1649(int iParam0)
{
	iVar0 = func_943(iParam0, 1);
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

void func_1650()
{
	func_1649(-939420910);
	func_1649(-1187950766);
	func_1649(356365161);
	func_1649(753127042);
	func_1649(-2038424081);
	func_1649(1884271742);
	func_1649(459290420);
}

void func_1651()
{
	func_1649(704802028);
	func_1649(588987611);
	func_1649(2008888900);
	func_1649(1649996811);
	func_1649(227918160);
	func_1649(168171957);
	func_1649(1193080109);
	func_1649(-491981251);
	func_1649(-639037538);
	func_1649(-618620429);
}

bool func_1652(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1653(int iParam0)
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

void func_1654(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1655(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1656()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1657(int iParam0)
{
	func_1396(iParam0, 8, 6);
}

void func_1658(int iParam0)
{
	func_2155(&(Global_1946804->f_2589), iParam0);
}

void func_1659(int iParam0, int iParam1)
{
	func_2156(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1660(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2157(0);
	if (iParam2 != 0 && func_2158(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1140(iParam0, func_1154(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1661(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_2157(0);
	if (func_1086(32768))
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
			iVar5 = func_1154(iVar0, 1);
			if (func_1392(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1392(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1643(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2159(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1086(524288))
					{
						func_1146(524288);
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
							iVar5 = func_1154(iVar0, 1);
							if (func_1392(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1392(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1643(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1659(iVar0, iParam2);
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
					func_1664(524288);
				}
			}
		}
	}
}

void func_1662(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2160(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2161(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1683(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1683(Global_40.f_7729);
				Global_1946804->f_1378 = func_1683(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2162(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1134(0, 1);
	}
}

void func_1663(var uParam0)
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

void func_1664(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1665(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1666(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1721(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1721(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1722(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1146(8);
}

bool func_1667()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1668(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1669()
{
	fVar0 = func_2163(13);
	iVar1 = func_2164(fVar0);
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

float func_1670()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1671()
{
	if (func_325())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1672()
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

float func_1673()
{
	return Global_1955565->f_3;
}

void func_1674(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_2165(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1675(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_2165(iParam0, 2, 0, 0);
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

float func_1676(float fParam0, float fParam1, float fParam2)
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

bool func_1677()
{
	return func_2163(12) <= -99f;
}

bool func_1678()
{
	return func_2163(12) >= 99f;
}

int func_1679()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == -999503751)
		{
			if (func_2166() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1680(int iParam0)
{
	if (!func_1102(iParam0))
	{
		return false;
	}
	if (func_1684(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1681(int iParam0)
{
	if (!func_1102(iParam0))
	{
		return false;
	}
	if (func_1684(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1682(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1102(iParam0))
	{
		return;
	}
	if (!func_1681(iParam0))
	{
		func_1685(iParam0, 2);
		if (bParam2)
		{
			if (!func_184(0, 0, 1))
			{
				func_354(1, 4);
			}
		}
		if ((!func_201() && !bParam1) && !func_184(0, 0, 1))
		{
			func_688(_create_var_string(10, "OUT_JOURN_ADD", func_2167(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1683(int iParam0)
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

bool func_1684(int iParam0, int iParam1)
{
	if (!func_1102(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1685(int iParam0, int iParam1)
{
	if (!func_1102(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1686(int iParam0, bool bParam1)
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

void func_1687(int iParam0, bool bParam1)
{
	iVar0 = func_2168(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_572(50);
			}
			else
			{
				func_572(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_572(51);
			}
			else
			{
				func_572(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2169(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_603();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_603();
			}
			break;
		case 3:
			func_572(24);
			if (bParam1)
			{
				if (!func_2169(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_603();
				}
			}
			break;
	}
}

void func_1688(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2170(0))
			{
				iVar0++;
			}
			if (func_2170(2))
			{
				iVar0++;
			}
			if (func_2170(4))
			{
				iVar0++;
			}
			if (!func_2171(16))
			{
				if (iVar0 == 1)
				{
					func_2172();
					func_312(456, 1);
					func_2173(16);
				}
			}
			if (!func_2171(32))
			{
				if (iVar0 >= 3)
				{
					func_2172();
					func_312(456, 1);
					func_2173(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2170(1))
			{
				iVar0++;
			}
			if (func_2170(3))
			{
				iVar0++;
			}
			if (func_2170(7))
			{
				iVar0++;
			}
			if (!func_2171(1))
			{
				if (iVar0 == 1)
				{
					func_2174();
					func_312(457, 1);
					func_2173(1);
				}
			}
			if (!func_2171(2))
			{
				if (iVar0 >= 3)
				{
					func_2174();
					func_312(457, 1);
					func_2173(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2170(5))
			{
				iVar0++;
			}
			if (func_2170(6))
			{
				iVar0++;
			}
			if (func_2170(8))
			{
				iVar0++;
			}
			if (!func_2171(4))
			{
				if (iVar0 == 1)
				{
					func_2175();
					func_312(455, 1);
					func_2173(4);
				}
			}
			if (!func_2171(8))
			{
				if (iVar0 >= 3)
				{
					func_2175();
					func_312(455, 1);
					func_2173(8);
				}
			}
			break;
	}
}

void func_1689(var uParam0)
{
	func_1108(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1108(uParam0, 617531372);
	}
	else
	{
		func_1108(uParam0, 291123060);
	}
}

void func_1690(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2176(uParam0))
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

bool func_1691(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1692(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_549(iParam0, 0))
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

void func_1693(int iParam0)
{
	func_644(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2177(iParam0, &uVar18);
	func_2178(iParam0, &uVar18, &iVar34, 1);
	if (func_650() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2179(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_646(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_644(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_573(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2179(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2179(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2179(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2179(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2179(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_646(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_648(func_647(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2180(&(Global_1946804->f_1616));
	func_651(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_652(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_652(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_652(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_652(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_652(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_652(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_652(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_652(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_652(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_653(&(iVar0[iVar36]), iVar35))
			{
				func_646(func_2181(iVar35), 1, 1);
				func_2182(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1718(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_654(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1101(iParam0))
	{
		if (!func_2183(8))
		{
			if (func_650() == -2125499975)
			{
				if (bVar17)
				{
					func_651(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2184(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2185(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1101(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_651(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2184(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2185(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1101(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1101(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2186(Global_40.f_7729, 4096);
					func_1685(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_2187(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_651(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_651(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1694()
{
	Var0 = { func_1148(0) };
	return func_1043(856287005, Var0, -218846335, 0);
}

int func_1695(int iParam0, struct<4> Param1)
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
			if (func_549(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1598(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2188(&uVar7);
					if (func_1044(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1696(var uParam0)
{
	return uParam0->f_1;
}

void func_1697(var uParam0)
{
	func_2189(uParam0);
	func_2191(uParam0, func_2190(-1346384396));
	func_2192(uParam0, func_2190(-712836614));
	func_2193(uParam0, func_2190(-1629133289));
	func_2194(uParam0, func_2190(1302066700));
	func_2195(uParam0, func_2190(599669344));
	func_2196(uParam0, func_2190(-1555511632));
}

void func_1698(struct<6> Param0)
{
	if (!func_2197(Param0.f_4, 1))
	{
	}
	if (!func_2197(Param0, 1))
	{
	}
	if (!func_2197(Param0.f_2, 1))
	{
	}
	if (!func_2197(Param0.f_5, 1))
	{
	}
	if (!func_2197(Param0.f_3, 1))
	{
	}
	if (!func_2197(Param0.f_1, 1))
	{
	}
}

int func_1699(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_382())
	{
		if (func_291())
		{
			bVar0 = false;
			if (!func_314((*Global_1835011)[15]->f_1, 1) && !func_571(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_2198();
				*iParam1 = func_2199();
				*iParam2 = func_2200();
				return 1;
			}
			else
			{
				*iParam0 = func_2201();
				*iParam1 = func_2202();
				*iParam2 = func_2203();
				return 1;
			}
		}
		else if (func_1005())
		{
			if (!func_314((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2204();
				*iParam1 = func_2205();
				*iParam2 = func_2206();
				return 1;
			}
			else
			{
				*iParam0 = func_2207();
				*iParam1 = func_2208();
				*iParam2 = func_2209();
				return 1;
			}
		}
	}
	else if (func_291())
	{
		*iParam0 = func_2210();
		*iParam1 = func_2211();
		*iParam2 = func_2212();
		return 1;
	}
	else if (func_1005())
	{
		*iParam0 = func_2213();
		*iParam1 = func_2214();
		*iParam2 = func_2215();
		return 1;
	}
	return 0;
}

void func_1700(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

void func_1701(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

void func_1702(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

void func_1703(int iParam0, int iParam1)
{
	iParam0 = func_253(iParam0);
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

bool func_1704(int iParam0)
{
	iVar0 = func_2216(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1148(0) };
	if (func_2217(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1705(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2218(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1044(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1706(int iParam0)
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

int func_1707(int iParam0, int iParam1)
{
	if (!func_549(iParam1, 0))
	{
		return 0;
	}
	if (!func_2219(iParam1))
	{
		return 0;
	}
	if (func_1704(iParam0))
	{
		return 0;
	}
	iVar0 = func_2216(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1148(0) };
	Var1.f_4 = iVar0;
	if (!func_1099(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1708(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_549(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1598(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2188(&Var7);
					if (func_1099(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1711(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1709(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1725(1) < iParam0)
	{
		iParam0 = func_1725(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_94(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1710(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_944(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1153(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1711(struct<4> Param0, int iParam4)
{
	if (!func_577(0))
	{
		return func_2220(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1153(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_944(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1712(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1638(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_577(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_944(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1713(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_559(43))
		{
			if (func_569(iParam0, 412399755))
			{
				func_1069(-1791518714);
				if (func_1070() == 0)
				{
					func_354(0, 10);
					iVar0 = func_2221(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1072(iParam0) < func_1073(iParam0))
						{
							func_565(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_559(44))
		{
			if (func_569(iParam0, 709057512))
			{
				func_1069(-2087881550);
				if (func_1070() == 1)
				{
					func_354(0, 10);
					iVar0 = func_2221(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1072(iParam0) < func_1073(iParam0))
						{
							func_565(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_559(45))
		{
			if (func_569(iParam0, -1478961327))
			{
				func_1069(1908068621);
				if (func_1070() == 2)
				{
					func_354(0, 10);
					iVar0 = func_2221(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1072(iParam0) < func_1073(iParam0))
						{
							func_565(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_559(46))
		{
			if (func_569(iParam0, -1238404098))
			{
				func_1069(1611247019);
				if (func_1070() == 3)
				{
					func_354(0, 10);
					iVar0 = func_2221(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1072(iParam0) < func_1073(iParam0))
						{
							func_565(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_559(47))
		{
			if (func_569(iParam0, 1160548794))
			{
				func_1069(1319635688);
				if (func_1070() == 4)
				{
					func_354(0, 10);
					iVar0 = func_2221(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1072(iParam0) < func_1073(iParam0))
						{
							func_565(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1714(int iParam0, int iParam1)
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

void func_1715(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_2222(iParam1);
	func_2223(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_2224(&(uParam0->f_26), iVar1);
		if (func_2225(uParam0->f_26, &iVar0))
		{
			func_2226(iVar0, iVar1);
		}
	}
}

bool func_1716(int iParam0, int iParam1)
{
	Var0 = { func_660(iParam0, 0, 0) };
	Var5 = { func_1043(iParam0, Var0, Var0.f_4, 0) };
	if (func_1598(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_944(0), &Var5, iParam1);
	return true;
}

void func_1717(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1718(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1719(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1720(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1659(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1659(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1659(iVar2, iVar0);
		}
	}
}

bool func_1721(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1722(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1723()
{
	return Var0;
}

bool func_1724(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_549(iParam0, 0))
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
		func_2227(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1725(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1726(int iParam0)
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

bool func_1727(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_314((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_1728(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1729(int iParam0)
{
	if (!func_234(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1730(int iParam0)
{
	if (_does_volume_exist((*Global_1897952)[iParam0]->f_1))
	{
		return (*Global_1897952)[iParam0]->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BAYOU_NWA");
			_0x39816f6f94f385ad(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			_0x39816f6f94f385ad(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			_0x39816f6f94f385ad(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			_0x39816f6f94f385ad(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BIG_VALLEY");
			_0x39816f6f94f385ad(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			_0x39816f6f94f385ad(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BLUEGILL_MARSH");
			_0x39816f6f94f385ad(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			_0x39816f6f94f385ad(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			_0x39816f6f94f385ad(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			_0x39816f6f94f385ad(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			_0x39816f6f94f385ad(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			_0x39816f6f94f385ad(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CUMBERLAND_FOREST");
			_0x39816f6f94f385ad(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			_0x39816f6f94f385ad(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			_0x39816f6f94f385ad(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			_0x39816f6f94f385ad(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			_0x39816f6f94f385ad(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GREAT_PLAINS");
			_0x39816f6f94f385ad(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_WEST");
			_0x39816f6f94f385ad(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			_0x39816f6f94f385ad(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			_0x39816f6f94f385ad(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			_0x39816f6f94f385ad(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			_0x39816f6f94f385ad(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_EAST");
			_0x39816f6f94f385ad(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			_0x39816f6f94f385ad(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			_0x39816f6f94f385ad(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (_does_volume_exist((*Global_1897952)[6]->f_1) && _does_volume_exist((*Global_1897952)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[7]->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HEARTLAND");
			_0x39816f6f94f385ad(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			_0x39816f6f94f385ad(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			_0x39816f6f94f385ad(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			_0x39816f6f94f385ad(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			_0x39816f6f94f385ad(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			_0x39816f6f94f385ad(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_ROANOKE_RIDGE");
			_0x39816f6f94f385ad(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			_0x39816f6f94f385ad(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			_0x39816f6f94f385ad(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			_0x39816f6f94f385ad(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_SCARLETT_MEADOWS");
			_0x39816f6f94f385ad(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			_0x39816f6f94f385ad(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			_0x39816f6f94f385ad(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			_0x39816f6f94f385ad(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			_0x39816f6f94f385ad(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			_0x39816f6f94f385ad(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_TALL_TREES");
			_0x39816f6f94f385ad(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			_0x39816f6f94f385ad(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			_0x39816f6f94f385ad(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CHOLLA_SPRINGS");
			_0x39816f6f94f385ad(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HENNIGAS_STEAD");
			_0x39816f6f94f385ad(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			_0x39816f6f94f385ad(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			_0x39816f6f94f385ad(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			_0x39816f6f94f385ad(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			_0x39816f6f94f385ad(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			_0x39816f6f94f385ad(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_RIO_BRAVO");
			_0x39816f6f94f385ad(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			_0x39816f6f94f385ad(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			(*Global_1897952)[iParam0]->f_1 = iVar0;
			return iVar0;
		}

bool func_1731(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_1005())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1732(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
		case 94:
