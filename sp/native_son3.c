void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_7590 = 34;
	fLocal_7595 = 10000f;
	fLocal_7596 = 10000f;
	fLocal_7597 = 9999f;
	fLocal_7598 = 1.75f;
	fLocal_7599 = 25f;
	iLocal_7600 = 1;
	iLocal_7604 = -1;
	vLocal_7612 = { 320.998f, 1475.004f, 179.3623f };
	vLocal_7615 = { 441.0508f, 2229.502f, 247.6421f };
	iLocal_7671 = 3;
	iLocal_7674 = -1;
	fLocal_7688 = 1f;
	fLocal_7689 = 1f;
	vLocal_7690 = { 0f, 0f, 0f };
	iLocal_8006 = 5;
	iLocal_8009 = 45;
	iLocal_8010 = 86;
	fLocal_8014 = 2.048f;
	fLocal_8015 = 0.238f;
	fLocal_8016 = 1f;
	fLocal_8017 = 1f;
	vLocal_8018 = { -0.174f, -0.039f, -0.304f };
	vLocal_8021 = { 342f, 0f, 256.696f };
	iLocal_8025 = -1;
	iLocal_8027 = 5;
	iLocal_8028 = 4;
	iLocal_8030 = 4;
	iLocal_8031 = 8;
	iLocal_8032 = 14;
	fLocal_8033 = 20f;
	fLocal_8034 = 0.1f;
	fLocal_8035 = 1.18f;
	iLocal_8036 = 8;
	iLocal_8040 = 4;
	iLocal_8041 = 3;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_8042, 1073741824);
		func_2(&uLocal_8042, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_8042);
	func_5(&uLocal_8042);
	while (!func_6(&uLocal_8042, -2147483648))
	{
		func_7(&uLocal_8042);
		wait(0);
	}
	while (!func_2(&uLocal_8042, 0))
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
	iLocal_181 = func_125(uParam0);
	iLocal_181 = iLocal_181;
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
	func_59(7);
	func_163();
	if (func_22(uParam0) == 0)
	{
		_disable_first_person_cam_this_frame_2();
	}
	func_164();
	set_ped_config_flag(iVar299, 97, false);
	func_165(0);
	if (func_166(46))
	{
		func_167(46);
		if (does_entity_exist(Global_35))
		{
			_0x411189e51b8020ba(Global_35, "Stealth");
		}
		if (does_entity_exist(iVar299))
		{
			_0x411189e51b8020ba(iVar299, "Stealth");
		}
	}
	func_168(0);
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_169(&(iLocal_268[iVar0]));
		iVar0++;
	}
	func_170(&iLocal_7694);
	func_170(&iLocal_7693);
	func_171();
	func_172();
	func_173();
	func_174();
	func_175();
	func_176();
	func_177();
	func_178(uParam0);
	func_40(1);
	func_179(35, 1, 1);
	func_180();
	func_181();
	func_182();
	if (does_rayfire_map_object_exist(iVar7787))
	{
		set_state_of_rayfire_map_object(iVar7787, 11);
	}
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_183();
	if (has_ped_got_weapon(Global_35, -2002235300, 0, false))
	{
		set_ped_infinite_ammo(Global_35, false, -2002235300);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_184(&(Local_351[iVar0]->f_2));
		iVar0++;
	}
	func_185(1);
	func_186();
	func_187(&Local_7439, 1, 1, 1, 0);
	func_187(&Local_7478, 1, 1, 1, 0);
	func_187(&Local_7534, 1, 1, 1, 0);
	func_188(-963496561, 1, 0, -142743235, 0);
	if (does_entity_exist(iVar7692))
	{
		delete_object(&iLocal_7695);
	}
	if (does_entity_exist(iVar7693))
	{
		delete_object(&iLocal_7696);
	}
	if (does_entity_exist(iVar256))
	{
		delete_object(&iLocal_259);
	}
	if (iVar7709 != 0)
	{
		if (_0x1ff441d7954f8709(iVar7709))
		{
			_0xd2b9c78537ed5759(iVar7709);
		}
	}
	if (iVar7710 != 0)
	{
		if (_0x1ff441d7954f8709(iVar7710))
		{
			_0xd2b9c78537ed5759(iVar7710);
		}
	}
	if (iVar7711 != 0)
	{
		if (_0x1ff441d7954f8709(iVar7711))
		{
			_0xd2b9c78537ed5759(iVar7711);
		}
	}
	if (iVar7712 != 0)
	{
		if (_0x1ff441d7954f8709(iVar7712))
		{
			_0xd2b9c78537ed5759(iVar7712);
		}
	}
	if (bVar7721)
	{
		if (does_entity_exist(iVar7704))
		{
			if (is_entity_a_mission_entity(iVar7704))
			{
				delete_object(&iLocal_7707);
			}
		}
	}
	_0xa3716a77dcf17424(Global_35, -2002235300, 1);
	func_189();
	func_190();
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
	func_191();
	func_192();
	use_waypoint_recording_as_assisted_movement_route(func_193(3), 0, 1065353216, 1056964608, 1);
	use_waypoint_recording_as_assisted_movement_route(func_193(7), 0, 1065353216, 1056964608, 1);
	use_waypoint_recording_as_assisted_movement_route(func_193(2), 0, 1065353216, 1056964608, 1);
	if (does_entity_exist(iVar254))
	{
		delete_object(&uLocal_257);
	}
	if (does_entity_exist(iVar255))
	{
		delete_object(&uLocal_258);
	}
	remove_all_cover_blocking_areas();
	render_script_cams(false, false, 3000, true, false, 0);
	if (does_cam_exist(iVar257))
	{
		destroy_cam(iVar257, false);
	}
	_0x5639fbea922788da(Global_35);
	func_194();
	uParam0->f_607 = uParam0->f_607;
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
	iVar0 = func_195(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_196(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_198(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_199(iParam0) && !func_200(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_201(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_199(iParam0))
	{
		iParam2 = -1;
	}
	if (func_202(iParam0) == 3 || (func_202(iParam0) == 1 && _0x01f4d242765c6b24(func_201(iParam0))))
	{
		func_204(func_203(iParam0), func_201(iParam0), iParam2);
		if ((!func_198(Global_1572864->f_8) && !func_205(0, 1, 0)) && !func_206(&Global_1935630, 32768))
		{
			iVar0 = func_207(iParam0);
			if (iVar0 != -1)
			{
				func_208(0);
			}
			else if (func_203(iParam0) == 8)
			{
				iVar0 = func_209();
				if (iVar0 != -1)
				{
					func_208(0);
				}
			}
		}
	}
	func_210(iParam0, 0);
	if (func_211(0) == iParam0)
	{
		func_40(1);
		func_212(0);
		func_213(1);
	}
	func_214(iParam0, 1);
	func_215(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_216(0);
	func_217(0);
	func_64(0);
	func_65(0);
	func_218(0);
	func_219(1f);
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
		func_220();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_221())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_222())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_201(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_223(0);
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
		func_224(iVar0, iParam0);
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
		if (func_225((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_226((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_226((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_226((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(int iParam0)
{
	return func_227(*iParam0, 1);
}

void func_27(int iParam0, bool bParam1)
{
	if (bParam1 || !func_26(iParam0))
	{
		func_228(iParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_229(&(uParam0->f_13118)) >= 4000)
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
	func_230(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_198(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	iVar4 = func_231(iParam0);
	switch (iVar4)
	{
		case 0:
			func_233(&Var0, func_232(16, 0));
			break;
		case 1:
			func_233(&Var0, func_232(4, 0));
			break;
		case 2:
			func_233(&Var0, func_232(4, 7));
			break;
		case 3:
			func_233(&Var0, func_232(0, 0));
			break;
		case 4:
			func_233(&Var0, func_232(1, 0));
			break;
		case 5:
			func_233(&Var0, func_232(12, 0));
			break;
		case 6:
			func_233(&Var0, func_232(3, 5));
			break;
		case 7:
			func_233(&Var0, func_232(13, 0));
			break;
		case 8:
			func_233(&Var0, func_232(7, 0));
			break;
		case 9:
			func_233(&Var0, func_232(8, 0));
			break;
		case 25:
			func_233(&Var0, func_232(10, 0));
			break;
		case 26:
		default:
			break;
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_234(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_216(0);
	func_235(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_225((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_236((*uParam0)[iVar0]);
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
			func_237(iVar0, 4096);
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
		func_238(Global_1935630, 4194304);
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
	func_239();
	func_240();
	func_241();
	func_242();
}

void func_43()
{
	if (func_243())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_244(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_245();
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
	func_246(1, iParam0, iParam1);
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
	return (func_247() || func_54());
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
	func_248(uParam0);
	func_249(uParam0, 0);
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
		func_250(iVar0);
		iVar0++;
	}
	func_251();
	func_252();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_253())
	{
		if (func_254(255))
		{
			if (!func_255(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_256(Global_1894899->f_2) && func_257(Global_1894899->f_2))
		{
			func_258(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_259(16);
			}
		}
		else if (func_256(Global_1894899->f_2) && !func_260(Global_1894899->f_2, 2))
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
		func_261(16);
		func_262();
		if (bVar0)
		{
			func_261(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_263(uParam0->f_5423[iVar0]))
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
	if (func_264(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_265(uParam0->f_5421))
		{
			iVar1 = func_266(uParam0->f_5421, iVar0);
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
		if (func_267(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_268(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_269(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_270(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_271(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_272(7);
		}
		else
		{
			func_273(iVar0, 0);
		}
		func_274(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_276(iParam0, 32);
	func_277();
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
	Var0 = { func_278(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_279(iParam0) };
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
		func_218(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_218(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_280(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_225((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_226((*uParam1)[iVar0], 1);
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
	iVar0 = func_203(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_281(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_282(iVar1))
			{
				if (func_283(iVar1, 4))
				{
					func_284(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_285(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_281(iParam0);
		if (iVar3 == 59)
		{
			func_285(1);
		}
		else if (iVar3 == 61)
		{
			func_285(0);
		}
		else if (iVar3 == 83)
		{
			func_285(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_282(iVar0))
		{
			if (func_283(iVar0, 4))
			{
				if (func_283(iVar0, 16))
				{
					func_286(iVar0, 1);
				}
				if (func_283(iVar0, 8))
				{
					func_287(iVar0, 1);
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
		if (func_288(uParam0) == 0 && iVar0 == 0)
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
		func_289(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_290(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_291(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_292(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_256(iParam0))
	{
		return;
	}
	bVar0 = func_260(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_293(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_295(iParam0, func_294());
			func_296(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_297(iParam0, 67108864);
		func_295(iParam0, -15);
	}
	func_298(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_299(11);
	}
	else
	{
		func_300(11);
	}
}

void func_80(int iParam0)
{
	if (func_301(iParam0, 0))
	{
		func_302(262144, 5, 0, 1);
		func_303(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_304(101, 7, 1f, 0, 1);
			func_304(89, 7, 1f, 0, 1);
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
	if (!func_198(iParam0))
	{
		return;
	}
	if (func_305(iParam0) == 4)
	{
		func_306(iParam0, func_294());
		if (!func_202(iParam0) == 5 && !func_202(iParam0) == 6)
		{
			if (bParam3)
			{
				func_210(iParam0, 6);
			}
			else
			{
				func_210(iParam0, 5);
			}
			func_215(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_203(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_307(0, 2);
		if (!bVar1 && bParam1)
		{
			func_308();
		}
	}
	else
	{
		func_212(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_309(iParam0);
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
				if (bParam1 && func_202(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_281(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_281(iParam0)]->f_8), true);
						}
					}
					else if ((func_281(iParam0) != 95 && func_281(iParam0) != 82) && !func_310((*Global_1347702)[func_281(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_281(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_281(iParam0)]->f_8), true);
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
		func_312(func_281(iParam0), iVar6, func_311());
	}
	else if (iVar0 == 8)
	{
		func_314(func_281(iParam0), iVar6, func_311(), func_313());
	}
	if (!func_202(iParam0) == 5 && !func_202(iParam0) == 6)
	{
		iVar9 = func_315(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_316(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_317(func_281(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_318((iVar10 - 20), 0, iVar10);
					iVar11 = func_318((iVar11 - 10), 0, iVar11);
				}
				func_319(1);
				func_320(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_320(45, 0, 1);
				break;
			case 8:
				iVar10 = func_321(func_281(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_318((iVar10 - 20), 0, iVar10);
					iVar11 = func_318((iVar11 - 10), 0, iVar11);
				}
				func_320(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_322(func_281(iParam0)))
				{
					func_323(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_320(120, 0, 1);
				break;
			case 2:
				func_320(120, 0, 1);
				break;
			case 6:
				func_320(func_325(func_324(iParam0)), 0, 1);
				break;
			case 5:
				func_320(120, 0, 1);
				break;
		}
	}
	func_214(iParam0, 1);
	func_306(iParam0, func_294());
	func_215(iParam0);
	if ((!func_202(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_207(iParam0);
		if (iVar12 != -1)
		{
			func_208(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_209();
			if (iVar12 != -1)
			{
				func_208(0);
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
				switch (func_281(iParam0))
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
				if (func_282(func_281(iParam0)) && func_310((*Global_1347702)[func_281(iParam0)]->f_12, 4))
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
				if (func_281(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_281(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_202(iParam0) == 5 && !func_202(iParam0) == 6)
	{
		if (bParam3)
		{
			func_210(iParam0, 6);
		}
		else
		{
			func_210(iParam0, 5);
		}
		func_215(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_281(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_326();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_327(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-1267972061);
						func_327(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(1619534881);
						func_327(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-755457379);
						func_327(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(1015404643);
						func_327(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-1724192342);
						func_327(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(1310680212);
						func_327(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-566881549);
						func_327(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-1753730528);
						func_327(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(147796381);
						func_327(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-378547623);
						func_327(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(829545206);
						func_327(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(891318243);
						func_327(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329();
						func_330(967523420);
						func_331();
						func_332();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_333(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_327(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_334(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_334(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_335(304805134, 1, 1);
						if (!func_336((*Global_1347702)[21]->f_15, 1))
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
						func_337();
						break;
					case 26:
						func_338();
						break;
					case 17:
						func_339(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_340())
						{
							func_341(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_342(-514575035, -1))
						{
							iVar15 = func_294();
							func_343(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_344(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_340())
						{
							func_341(1529685685);
						}
						break;
					case 34:
						if (func_340())
						{
							func_341(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_345();
						break;
					case 37:
						func_346();
						if (func_347())
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
						func_348();
						break;
					case 43:
						func_349();
						break;
					case 44:
						if (!func_336((*Global_1347702)[82]->f_15, 1))
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
						if (!func_336((*Global_1347702)[83]->f_15, 1))
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
						func_350();
						break;
					case 59:
						func_351();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_352();
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
						func_353();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_334(451, 0);
						}
						if (!func_354(-1992824800))
						{
							if (func_354(1520110311))
							{
								iVar16 = func_294();
								func_343(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_344(1937177603, iVar16, 1);
							}
						}
						if (func_355(4))
						{
							if (!func_356(684296857, 1, 0))
							{
								iVar17 = func_294();
								func_343(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_344(-1439688706, iVar17, 1);
							}
						}
						func_327(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_327(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_357(89200);
						func_357(2300);
						func_357(2300);
						break;
					case 68:
						func_358();
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
						func_359();
						func_357(-139100);
						break;
					case 69:
						if (func_336((*Global_1347702)[9]->f_15, 1))
						{
							func_357(-6000);
						}
						break;
					case 70:
						func_357(23400);
						func_357(1900);
						func_357(-15000);
						break;
					case 71:
						func_357(-5500);
						break;
				}
				break;
			case 8:
				switch (func_281(iParam0))
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
						func_360();
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
						func_361();
						break;
					case 66:
						func_362();
						func_363();
						break;
					case 67:
						if (!func_364(6))
						{
							func_365(6);
						}
						if (!func_364(3))
						{
							func_365(3);
						}
						if (func_340())
						{
							func_341(1534638301);
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
						if (func_336((*Global_1835011)[69]->f_1, 1))
						{
							func_366(0);
							func_357(40500);
						}
						else
						{
							func_366(0);
							func_357(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_281(iParam0))
				{
					case 0:
						switch (func_324(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_367(iParam0);
		func_368();
		switch (iVar0)
		{
			case 1:
				switch (func_281(iParam0))
				{
					case 4:
						func_369(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_369(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_369(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_369(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_369(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_369(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_369(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_370(iParam0);
						func_369(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_369(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_369(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_356(-2046502963, 1, 0))
						{
							func_327(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_369(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_369(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_369(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_370(iParam0) == 0)
						{
							func_369(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_369(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_310((*Global_1347702)[func_281(iParam0)]->f_12, 536870912))
				{
					func_371(11, 1);
				}
				switch (func_281(iParam0))
				{
					case 109:
						func_369(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_371(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_369(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_369(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_369(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_369(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_372(0, 10, 11, 2116153146))
				{
					func_369(iParam0, func_370(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_372(0, 7, 11, -379687487))
				{
					func_369(iParam0, func_373(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_372(0, 8, 11, -1386089015))
				{
					func_369(iParam0, func_373(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_372(0, 11, 11, -1952009645))
				{
					func_369(iParam0, func_373(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_372(0, 12, 11, 2065895756))
				{
					func_369(iParam0, func_373(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_202(iParam0) == 0)
			{
				if (func_201(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_201(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_204(func_203(iParam0), func_201(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_281(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_375(func_374(Global_1879514->f_1));
						if (iVar0 == 8 && func_281(iParam0) == 58)
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
						if (func_282(func_281(iParam0)) && func_310((*Global_1347702)[func_281(iParam0)]->f_12, 1))
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
			func_376(bParam2, iVar20);
		}
	}
	func_213(1);
	if ((bVar13 || func_129()) && (func_203(iParam0) == 1 || func_203(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_201(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_204(func_203(iParam0), func_201(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_203(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_372(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_377();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_200(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_199(iParam0))
	{
		if (!func_202(iParam0) == 5 && !func_202(iParam0) == 6)
		{
			if (bParam1)
			{
				func_210(iParam0, 6);
			}
			else
			{
				func_210(iParam0, 5);
			}
			func_215(iParam0);
		}
	}
	switch (func_203(iParam0))
	{
		case 1:
			switch (func_281(iParam0))
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
			switch (func_281(iParam0))
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
	vVar2 = { func_378((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_379(vVar2, uVar1, uVar0, 0);
	func_380(vVar2);
	Global_40.f_9.f_15 = func_381(vVar2, 0);
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
	func_382();
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
	func_383(Var10, 0);
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
	if (!func_198(iParam0))
	{
		return;
	}
	if (iParam0 != func_211(0))
	{
		return;
	}
	if (func_201(iParam0) == 0)
	{
	}
	iVar0 = func_203(iParam0);
	if (func_202(iParam0) == 3)
	{
		if (func_201(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_201(iParam0)))
		{
			if (func_203(iParam0) != 1 && func_203(iParam0) != 8)
			{
				func_204(func_203(iParam0), func_201(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_215(iParam0);
	func_40(1);
	func_212(0);
	func_210(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_319(1);
			func_320(15, 0, 1);
			break;
		case 4:
			func_320(10, 0, 1);
			break;
		case 8:
			func_320(10, 0, 1);
			break;
		case 9:
			func_320(10, 0, 1);
			break;
		case 2:
			func_320(10, 0, 1);
			break;
		case 6:
			func_320(10, 0, 1);
			break;
		case 5:
			func_320(10, 0, 1);
			break;
	}
	func_213(1);
}

void func_93()
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Local_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, Local_14);
		iVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(iVar2) && _0x88ad6cc10d8d35b2(iVar2)) && !_0xa7e51b53309eac97(iVar2))
		{
			delete_entity(&iVar2);
		}
		iVar0++;
	}
	destroy_itemset(Local_14);
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
	if (func_384(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_385(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_385(&(Global_1347343->f_11), 16384);
	}
	if (func_386() >= 2)
	{
		if (!func_384(Global_1347343->f_11, 16384))
		{
			func_385(&(Global_1347343->f_11), 8);
		}
		func_219(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_238(Global_1935630, 2048);
	func_387(bParam5);
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
			func_388(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_206(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_389(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_390(&(uParam0->f_7375));
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
	return func_391() != -1;
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
	func_392(uParam0);
	uParam0->f_634[0] = 58320;
	uParam0->f_634[1] = 58320;
	uParam0->f_637 = 0;
	func_394(uParam0, *uParam1);
	func_395(uParam0);
}

int func_109(var uParam0)
{
	func_396(uParam0, 107);
	func_103(uParam0, 128);
	iVar0 = func_397(uParam0, -2046943672, 1);
	if (does_entity_exist(iVar0))
	{
		iLocal_253 = iVar0;
	}
	iVar1 = func_397(uParam0, 1407031519, 1);
	if (does_entity_exist(iVar1))
	{
		func_398(4194304);
		Local_302 = iVar1;
		func_399(uParam0, iVar299, 1105014447, 422991367, 1, 1);
		task_follow_nav_mesh_to_coord(iVar299, 457.4691f, 2213.498f, 245.1969f, 1f, 20000, 0.25f, 0, 40000f);
	}
	if (func_82(32768))
	{
		func_400(uParam0, 30f);
	}
	return 1;
}

char[] func_110(int iParam0)
{
	if (!func_197(iParam0))
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
			func_401(iVar0, iVar1);
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
	if (!func_256(iParam0))
	{
		return false;
	}
	return func_260(iParam0, 33554432);
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
	return func_402(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_403(&(uParam0->f_7375));
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
	return func_404(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_405(Param0, Param0.f_3);
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
	if (!func_406())
	{
		return false;
	}
	if (!func_336((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_336((*Global_1835011)[2]->f_1, 1) && func_336((*Global_1347702)[120]->f_15, 1)) && !func_336((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_336((*Global_1835011)[37]->f_1, 1) && !func_336((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_336((*Global_1835011)[57]->f_1, 1) && !func_336((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_336((*Global_1835011)[26]->f_1, 1) && !func_336((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_336((*Global_1835011)[62]->f_1, 1) && func_336((*Global_1835011)[63]->f_1, 1)) && !func_336((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_336((*Global_1835011)[75]->f_1, 1) && !func_336((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_336((*Global_1835011)[76]->f_1, 1) && !func_336((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_336((*Global_1835011)[40]->f_1, 1) && func_336((*Global_1835011)[41]->f_1, 1)) && !func_336((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_336((*Global_1835011)[62]->f_1, 1) && func_336((*Global_1835011)[63]->f_1, 1)) && !func_336((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_336((*Global_1835011)[65]->f_1, 1) && func_336((*Global_1835011)[66]->f_1, 1)) && !func_336((*Global_1835011)[67]->f_1, 1))
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
	if (func_407(vParam1))
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
	func_228(&(uParam0->f_603));
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
		return func_408();
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
		func_409(uParam0->f_607);
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
	func_410(&(uParam0->f_638));
	func_411(&(uParam0->f_819));
	func_412(&(uParam0->f_1020));
	func_413(&(uParam0->f_1081));
	func_414(&(uParam0->f_1126));
	func_415(&(uParam0->f_5147));
	func_416(&(uParam0->f_1124));
	func_417(&(uParam0->f_5188));
	func_418(&(uParam0->f_5239));
	func_419(&(uParam0->f_5249));
	func_420(&(uParam0->f_5265));
	func_421(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_422(uParam0, 1077976463, 224);
	func_422(uParam0, -2144902919, 67108863);
	func_422(uParam0, 722236839, 67108863);
	func_422(uParam0, -1772051411, 67108863);
	func_422(uParam0, 1468884243, 525280);
	func_422(uParam0, -1038436471, 67108863);
	func_422(uParam0, -1679658797, 67108863);
	func_422(uParam0, 1077976463, 224);
}

void func_139(var uParam0)
{
	func_423(uParam0, func_193(0), 1, 2, -1);
	func_423(uParam0, func_193(1), 2, 2, -1);
	func_423(uParam0, func_193(2), 14, 2, -1);
	func_423(uParam0, func_193(9), 8, 2, -1);
	func_423(uParam0, func_193(10), 48, 2, -1);
	func_423(uParam0, func_193(3), 960, 2, -1);
	func_423(uParam0, func_193(4), 768, 2, -1);
	func_423(uParam0, func_193(5), 768, 2, -1);
	func_423(uParam0, func_193(6), 768, 2, -1);
	func_423(uParam0, func_193(7), 512, 2, -1);
	func_423(uParam0, func_193(8), 512, 2, -1);
	func_423(uParam0, func_193(11), 512, 1, 0);
	func_422(uParam0, 2055697445, 12);
	func_422(uParam0, -1291375629, 30);
	func_422(uParam0, 47939550, 48);
	func_422(uParam0, 604616887, 48);
	func_422(uParam0, -130500054, 48);
	func_422(uParam0, -1025740342, 48);
	func_422(uParam0, -274058460, 124);
	func_422(uParam0, 319326044, 124);
	func_422(uParam0, -10525037, 124);
	func_422(uParam0, 2055697445, 240);
	func_422(uParam0, -296963090, 48);
	func_422(uParam0, -441265845, 48);
	func_422(uParam0, -1988548788, 496);
	func_422(uParam0, -1608851079, 248);
	func_422(uParam0, -1311816336, 48);
	func_422(uParam0, -1898771906, 48);
	func_422(uParam0, 1468884243, 960);
	func_422(uParam0, 2055697445, 512);
	func_422(uParam0, -1772051411, 67108863);
	func_422(uParam0, 1407031519, 67108863);
	func_422(uParam0, -2046943672, 3);
	func_422(uParam0, -1849475873, 48);
	func_422(uParam0, -715631748, 48);
	func_424(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_425(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 1);
	func_103(uParam0, 2);
	uParam0->f_607 = uParam0->f_607;
}

void func_142(var uParam0, int iParam1)
{
	func_426(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_278(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_279(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_427(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_264(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_428() };
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
	func_429(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_430(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_431(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_388(&(uParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_197(iParam0))
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
		if (func_432(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_433(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_432(uParam0, func_33(uParam0), 1))
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
	if (func_434(uParam0) < 1)
	{
		func_435(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_436(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_437(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_438(uParam0);
		}
	}
	switch (func_434(uParam0))
	{
		case -1:
		case 0:
			func_439(uParam0, 1);
			break;
		case 1:
			if (func_440(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_439(uParam0, 2);
				}
				else
				{
					func_439(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_441(uParam0))
			{
				func_439(uParam0, 3);
			}
			break;
		case 3:
			if (func_442(uParam0))
			{
				func_439(uParam0, 4);
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
		func_443(uParam0, 0);
		return true;
	}
	if (func_444(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_443(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_444(uParam0);
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
	if (func_445(&uVar0) || func_166(10))
	{
		func_446();
		func_167(10);
	}
	if (func_447(7))
	{
		func_449(7, func_448(7), 0);
	}
}

void func_164()
{
	set_ped_config_flag(Global_35, 170, false);
	set_ped_config_flag(Global_35, 174, false);
	set_ped_config_flag(Global_35, 97, false);
	set_ped_config_flag(Global_35, 155, false);
}

void func_165(bool bParam0)
{
	if (does_entity_exist(Local_1199[9]->f_1))
	{
		set_entity_invincible(Local_1199[9]->f_1, bParam0);
	}
	if (does_entity_exist(Local_1199[10]->f_1))
	{
		set_entity_invincible(Local_1199[10]->f_1, bParam0);
	}
}

bool func_166(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return false;
	}
	iVar2 = func_450(iVar0);
	return func_451(&(uLocal_7624[iVar1]), iVar2);
}

void func_167(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return;
	}
	iVar2 = func_450(iVar0);
	func_452(uLocal_7624[iVar1], iVar2);
}

void func_168(bool bParam0)
{
	if (does_entity_exist(iVar299))
	{
		if (bParam0)
		{
			_0x1e017404784aa6a3(iVar299, -1109231486);
		}
		else
		{
			_0x2b4ce170de09f346(iVar299, -1109231486);
		}
	}
	if (bParam0)
	{
		if (!func_166(61))
		{
			_0x0d7fd6a55fd63aef(7, 3, bParam0);
			_0x0d7fd6a55fd63aef(25, 3, bParam0);
			_0x0d7fd6a55fd63aef(21, 3, bParam0);
			_0x0d7fd6a55fd63aef(23, 3, bParam0);
			_0x0d7fd6a55fd63aef(19, 3, bParam0);
			_0x0d7fd6a55fd63aef(22, 3, bParam0);
			func_453(61);
		}
	}
	else if (func_166(61))
	{
		_0x660a8f876df1d4f8(7);
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(23);
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(22);
		func_167(61);
	}
}

void func_169(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_170(int* iParam0)
{
	func_454(iParam0, 1);
	func_455(iParam0);
}

void func_171()
{
	if (does_entity_exist(iLocal_255))
	{
		stop_entity_fire(iLocal_255, 0);
	}
	if (does_entity_exist(iVar254))
	{
		stop_entity_fire(iVar254, 0);
	}
}

void func_172()
{
	if (func_166(59) && func_166(60))
	{
		uVar0 = _0x0556c784fa056628("Panic_Fire", "NTS3_Sounds");
		stop_stream(uVar0);
		func_167(60);
	}
}

void func_173()
{
	func_456(&Global_35);
	func_456(&Local_326);
	if (does_group_exist(Local_302.f_20))
	{
		if (is_ped_group_member(iVar300, Local_302.f_20, 0))
		{
			func_457(iVar300);
		}
		remove_group(Local_302.f_20);
	}
}

void func_174()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!_does_scenario_point_exist(&(uLocal_261[iVar0])))
		{
			_delete_scenario_point(&(uLocal_261[iVar0]));
		}
		iVar0++;
	}
}

void func_175()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_458(Local_7292[iVar0], 0, 0, 0, 0, 0);
		func_169(&(Local_7292[iVar0]));
		iVar0++;
	}
}

void func_176()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_459(Local_7793[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_459(Local_7804[iVar0]);
		iVar0++;
	}
}

void func_177()
{
	vVar0 = { 351.02f, 1491.58f, 178.57f };
	func_131(vVar0, 200f, 1, 0, 0, 0, 0);
	_0x9851de7aec10b4e1(vVar0, 200f, 1, 0);
}

void func_178(var uParam0)
{
	func_460();
	func_461();
	func_462();
	func_463();
	func_464();
	if (does_entity_exist(iVar299))
	{
		_0x12990818c1d35886(iVar299, 1, 1065353216);
		_0x3ad8eff9703be657(iVar299, 1f);
		set_ped_path_can_use_climbovers(iVar299, true);
		set_ped_path_can_use_ladders(iVar299, true);
		set_ped_path_can_drop_from_height(iVar299, true);
		set_ped_config_flag(iVar299, 391, false);
		set_ped_config_flag(iVar299, 252, true);
		set_ped_can_be_knocked_off_vehicle(iVar299, 0);
		clear_ragdoll_blocking_flags(iVar299, 526947);
	}
	if (_does_scenario_point_exist(Local_302.f_2))
	{
		_delete_scenario_point(Local_302.f_2);
	}
	if (does_entity_exist(iVar323))
	{
		clear_ragdoll_blocking_flags(iVar323, 526947);
	}
	func_465(0);
	func_466(7);
	func_268(uParam0, 7, iVar299, 0, 1, 1, 0);
	func_466(26);
	func_268(uParam0, 26, iVar323, 0, 1, 1, 0);
	func_467(&iLocal_253, 0, 1, 1);
	if (does_entity_exist(Local_302.f_1))
	{
		_0x2eb75fb86c41f026(Local_302.f_1, 3, 1);
		_0x2eb75fb86c41f026(Local_302.f_1, 2, 1);
		_0x2eb75fb86c41f026(Local_302.f_1, 1, 1);
	}
	func_468(Local_302.f_1, 7, 1, 0, 0);
	if (does_entity_exist(iLocal_252))
	{
		_0xf74e134f40192884(iLocal_252, 0);
		set_animal_tuning_bool_param(iLocal_252, 48, false);
	}
	func_58(uParam0, 0);
	iLocal_252 = 0;
	func_455(&iLocal_267);
}

void func_179(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_296(iParam0, 16777216);
		func_469(iParam0, 1, 350);
		if (bParam2)
		{
			(*Global_1888801)[iParam0]->f_31 = 1;
		}
	}
	else
	{
		func_297(iParam0, 16777216);
		func_469(iParam0, 0, 350);
	}
}

void func_180()
{
	iVar0 = 691;
	while (iVar0 <= 700)
	{
		func_470(iVar0);
		iVar0++;
	}
}

void func_181()
{
	clear_timecycle_modifier();
	clear_weather_type_persist();
	if (func_166(82))
	{
		_0x0e71c80fa4ec8147("thunderstorm", false);
		func_167(82);
	}
}

void func_182()
{
	set_time_scale(1f);
	_set_milliseconds_per_game_minute(2000);
}

void func_183()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0] = 0;
			Global_1934765->f_275[iVar0]->f_1 = 0;
			func_471();
			return;
		}
		iVar0++;
	}
}

void func_184(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_185(bool bParam0)
{
	if (bParam0)
	{
		if (bVar7639)
		{
			_display_hud_component(724769646);
			iLocal_7642 = 0;
		}
		return;
	}
	bVar0 = false;
	if (absi((get_frame_count() - iVar7640)) <= 1)
	{
		bVar0 = true;
	}
	if (bVar7639)
	{
		if (!bVar0)
		{
			_display_hud_component(724769646);
			iLocal_7642 = 0;
		}
	}
	else if (bVar0)
	{
		_hide_hud_component(724769646);
		iLocal_7642 = 1;
	}
}

void func_186()
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (!_does_anim_scene_exist(&(iLocal_7972[iVar0])))
		{
		}
		else if (!check_ownership_of_anim_scene(&(iLocal_7972[iVar0])))
		{
		}
		else
		{
			func_472(&(iLocal_7972[iVar0]));
		}
		iVar0++;
	}
}

void func_187(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_10((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_11(&((*uParam0)[iVar0]->f_6), 1, 1);
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

int func_188(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_474(iParam0, 1);
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
			func_475(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_356(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_476(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_477(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_477(iParam0, 0, 0) - iParam1) < 0)
		{
			func_188(iParam0, func_477(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_478(iParam0) == -427144552)
	{
		if (!func_479(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_480(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_481(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_475(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_482(iParam0, iParam1);
	return 1;
}

void func_189()
{
	func_483(385812466);
	func_483(-1201452352);
	func_483(1223148325);
	func_483(-805302432);
	func_483(1163537966);
	func_483(-46226638);
}

void func_190()
{
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (_0xc276fe69dda22bad(&(Local_183[iVar0])))
		{
			remove_cover_point(&(Local_183[iVar0]));
		}
		func_169(Local_183[iVar0]->f_1);
		iVar0++;
	}
}

void func_191()
{
	stop_fire_in_range(1054.465f, 1592.802f, 192.849f, 100f);
}

void func_192()
{
	func_484(1978275899, 1);
	func_484(-719188272, 2);
	func_484(1452745259, 4);
	func_484(-1273821262, 8);
	func_484(-258459266, 16);
	func_484(-22664287, 32);
	func_484(458213947, 64);
	func_484(2083867781, 128);
	func_484(753163213, 256);
	func_484(-491224884, 512);
	func_484(1750783925, 1024);
	func_484(1802462470, 2048);
	func_484(1546182539, 4096);
	func_484(950667356, 32768);
}

char* func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "native_son3_visit_walk_n_talk";
		case 1:
			return "native_son3_walk_n_talk";
		case 2:
			return "native_son3_to_fort_route_03";
		case 3:
			return "native_son3_toRiver";
		case 4:
			return "native_son3_1stMtnPath";
		case 5:
			return "native_son3_2ndMtnPath";
		case 6:
			return "native_son3_3rdMtnPath";
		case 7:
			return "native_son3_canoe_route";
		case 8:
			return "native_son3_canoe_route_arthur";
		case 9:
			return "native_son3_sneak_to_fort";
		case 10:
			return "native_son3_stealth_fort";
		case 11:
			return "native_son3_river";
	}
	return "";
}

void func_194()
{
	if (!func_166(118))
	{
		return;
	}
	_0x660a8f876df1d4f8(49);
	_0x660a8f876df1d4f8(48);
	func_167(118);
}

int func_195(int iParam0)
{
	return iParam0;
}

void func_196(int iParam0)
{
	if (!func_485(iParam0))
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

bool func_197(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_199(int iParam0)
{
	iVar0 = func_305(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_200(int iParam0)
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
		iVar0 = func_202(iParam0);
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

int func_201(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_202(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_486(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_203(int iParam0)
{
	if (!func_198(iParam0))
	{
		return 0;
	}
	return func_488(func_487(iParam0));
}

void func_204(int iParam0, int iParam1, int iParam2)
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

bool func_205(int iParam0, bool bParam1, bool bParam2)
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
		if (func_489())
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
		iVar0 = func_281(&(Global_1898164->f_1[0]));
		if (func_282(iVar0) && func_310((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_198(&(Global_1898164->f_1[0])))
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

bool func_206(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_207(int iParam0)
{
	switch (func_203(iParam0))
	{
		case 1:
			iVar0 = func_281(iParam0);
			return func_490(iVar0);
		case 8:
			iVar1 = func_281(iParam0);
			if (func_310((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_491(iVar1);
			}
			break;
	}
	return -1;
}

void func_208(bool bParam0)
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
		func_492(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_493();
		Global_1898077->f_9 = func_494(Global_1894899->f_2);
		func_495(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_209()
{
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_336((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_336((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_336((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_336((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_336((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_336((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_210(int iParam0, int iParam1)
{
	if (!func_198(iParam0))
	{
		return;
	}
	func_496(iParam0, iParam1);
}

int func_211(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_212(bool bParam0)
{
	if (!bParam0 && func_497(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_213(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_214(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_211(0) != iParam0)
	{
		return;
	}
	if (func_498(iParam0))
	{
		if (bParam1)
		{
			func_499(-525676072);
		}
		else
		{
			func_500(-525676072);
		}
	}
}

int func_215(int iParam0)
{
	return func_502(func_501(iParam0));
}

void func_216(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_217(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_218(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_219(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_220()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_221()
{
	return func_503(_0xc17f69e1418cd11f(3));
}

bool func_222()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_223(int iParam0)
{
	iParam0 = func_275(iParam0);
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

int func_224(int iParam0, int iParam1)
{
	if (!func_504(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_505(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_225(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_226(char* sParam0, bool bParam1)
{
	if (func_225(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_506(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_506(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_506(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_506(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_506(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_506(sParam0, 1);
		return true;
	}
	func_506(sParam0, 1);
	return false;
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_228(int iParam0)
{
	func_507(iParam0, 0f);
}

int func_229(int iParam0)
{
	if (!func_26(iParam0))
	{
		return round((iParam0->f_1 * 1000f));
	}
	if (func_508(iParam0))
	{
		return round((iParam0->f_2 * 1000f));
	}
	return (func_509() - round((iParam0->f_1 * 1000f)));
}

void func_230(bool bParam0, bool bParam1)
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
		func_510(0);
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

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 25:
			return 25;
		default:
			break;
	}
	return 26;
}

struct<4> func_232(int iParam0, int iParam1)
{
	return func_511(iParam0, iParam1);
}

void func_233(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_234(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_235(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_203(iParam0) == 1)
	{
		cVar0 = func_110(func_512(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_203(iParam0) == 8)
	{
		cVar0 = func_514(func_513(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_515(1, 1);
	func_516(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_219(1f);
}

void func_236(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_506(sParam0, 2);
}

void func_237(int iParam0, int iParam1)
{
	if (!func_517(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_239()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_240()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_241()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_242()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_243()
{
	return func_518(get_id_of_this_thread());
}

void func_244(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_519(bParam0);
}

void func_245()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_247()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_248(var uParam0)
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

void func_249(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_250(int iParam0)
{
	if (!func_520(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_251()
{
	func_521(64);
}

void func_252()
{
	Global_1310750->f_16072 = 0;
}

bool func_253()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_254(int iParam0)
{
	return func_255(23, iParam0);
}

bool func_255(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_522(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_523())
	{
		return func_522(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_522(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_256(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_257(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return func_260(iParam0, 8);
}

void func_258(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_259(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_260(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_261(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_262()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_260(iVar1, 1))
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
			else if (func_260(iVar1, 2))
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
				func_297(iVar1, 11);
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

bool func_263(var uParam0)
{
	if (func_524(uParam0, 1) || func_524(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_264(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_265(struct<2> Param0)
{
	if (!func_264(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_266(struct<2> Param0, int iParam2)
{
	if (!func_264(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_267(int iParam0)
{
	if (!func_525(iParam0))
	{
		return false;
	}
	if (!func_526(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_268(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_525(iParam1))
	{
		return;
	}
	if (!func_267(iParam1))
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
		func_527(uParam0, iParam2);
		func_528(iParam2);
	}
	func_529(iParam1);
	func_530(iParam1, 0);
	func_531(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_269(var uParam0)
{
	return uParam0->f_5411;
}

int func_270(int iParam0)
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

int func_271(int iParam0)
{
	iParam0 = func_275(iParam0);
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

void func_272(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_532(iParam0);
	if (func_533(iParam0))
	{
		if (func_271(iParam0) != iVar0)
		{
			return;
		}
	}
	func_534(iParam0);
	func_535(iParam0);
	iVar1 = func_223(iParam0);
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
			if (!func_536(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_537(iParam0);
	}
}

void func_273(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_538(iParam0))
	{
		return;
	}
	iVar0 = func_270(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_532(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_271(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_533(iVar0))
		{
			return;
		}
	}
	func_539(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_274(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_275(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_276(int iParam0, int iParam1)
{
	iParam0 = func_275(iParam0);
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

void func_277()
{
	if (func_540(0))
	{
		func_541(0);
	}
	if (func_540(1))
	{
		func_541(1);
	}
	if (func_540(5))
	{
		func_541(5);
	}
	if (func_540(6))
	{
		func_534(6);
	}
}

struct<2> func_278(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_279(int iParam0)
{
	Var0 = { func_278(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_280(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_281(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_542(func_487(iParam0));
}

bool func_282(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_283(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_284(int iParam0, bool bParam1)
{
	iVar0 = func_543(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_544(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_544(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_544(iParam0)))
			{
				_uilog_remove_entry(2, func_544(iParam0));
			}
		}
	}
	func_545(iParam0, 4);
	func_545(iParam0, 8);
	func_545(iParam0, 16);
}

void func_285(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_282(iVar0))
		{
			if (func_283(iVar0, 4))
			{
				func_286(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_286(int iParam0, bool bParam1)
{
	if (!func_283(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_543(iParam0), func_544(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_543(iParam0), func_544(iParam0), 2, "");
		func_546(iParam0, 16);
	}
	else
	{
		if (func_283(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_543(iParam0), func_544(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_543(iParam0), func_544(iParam0), 0, "");
		}
		func_545(iParam0, 16);
	}
}

void func_287(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_283(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_543(iParam0), func_544(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_283(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_543(iParam0), func_544(iParam0), 1, "");
		}
		func_546(iParam0, 8);
	}
	else
	{
		if (func_283(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_543(iParam0), func_544(iParam0), 0, "");
		}
		func_545(iParam0, 8);
	}
}

int func_288(var uParam0)
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

void func_289(int iParam0, int iParam1)
{
	if (func_540(0))
	{
		if (func_547(0))
		{
			func_548(0);
		}
	}
	if (func_540(1))
	{
		if (func_547(1))
		{
			func_548(1);
		}
	}
}

void func_290(var uParam0)
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
		if (func_436(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_291(var uParam0)
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

void func_292(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_549(iParam0, sParam4, iParam5);
	}
	func_550(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_293(int iParam0)
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_294()
{
	return &Global_1899515;
}

void func_295(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_296(int iParam0, int iParam1)
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

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_298(int iParam0)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (func_551(iParam0))
	{
		func_552(iParam0);
	}
	else
	{
		func_553(iParam0);
	}
}

int func_299(int iParam0)
{
	if (func_554(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (func_555(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_301(int iParam0, int iParam1)
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

void func_302(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_556(Global_1310750[iVar0], iParam0))
		{
			if (!func_557(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_558(iVar0) < func_559(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_304(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_303(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_560();
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

void func_304(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_561(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_305(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_202(iParam0);
}

void func_306(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_307(bool bParam0, int iParam1)
{
	if (!bParam0 && func_497(373691918))
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
	func_212(bParam0);
	return 1;
}

void func_308()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_525(iVar17))
		{
			iVar18 = func_562(iVar17);
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
	func_563(&(Global_1359489->f_55));
	if (func_564(1777191912, 1))
	{
		func_565(1777191912, 1, 0);
	}
}

void func_309(int iParam0)
{
	if (!func_198(iParam0))
	{
		return;
	}
	func_567(iParam0, (func_566(iParam0) + shift_left(1, 16)));
}

bool func_310(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_311()
{
	return func_568() > 0;
}

void func_312(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_569(-1032423150, iParam1);
			break;
		case 18:
			func_569(294066959, iParam1);
			func_569(-1925639563, iParam1);
			func_569(-378582304, iParam1);
			func_569(-338306437, iParam1);
			break;
		case 20:
			func_569(437270255, iParam1);
			break;
		case 2:
			func_569(-304000413, iParam1);
			func_569(-533612796, iParam1);
			func_569(48036954, iParam1);
			break;
		case 23:
			func_569(193108691, iParam1);
			func_569(491732588, iParam1);
			func_569(671962088, iParam1);
			func_570(1);
			break;
		case 16:
			func_569(-1836056650, iParam1);
			func_569(-754657922, iParam1);
			func_569(-1752355838, iParam1);
			func_569(-1375324510, iParam1);
			break;
		case 59:
			func_569(-514392105, iParam1);
			func_569(-822060246, iParam1);
			if (func_571(146))
			{
				func_569(1372748575, iParam1);
			}
			func_570(1);
			break;
		case 76:
			func_569(1991352213, iParam1);
			if (func_572() == 0)
			{
				func_569(1852488616, iParam1);
			}
			else
			{
				func_569(-9866350, iParam1);
			}
			break;
		case 44:
			func_569(863852599, iParam1);
			func_569(1228374935, iParam1);
			func_569(1517889050, iParam1);
			func_569(830657578, iParam1);
			func_569(1901354958, iParam1);
			break;
		case 46:
			func_569(-582805654, iParam1);
			func_569(250378940, iParam1);
			func_569(-2143265426, iParam1);
			break;
		case 17:
			func_569(-941494139, iParam1);
			func_569(1641489521, iParam1);
			break;
		case 19:
			func_569(-1829423531, iParam1);
			func_569(-1590504752, iParam1);
			func_569(1357221321, iParam1);
			break;
		case 21:
			func_569(-1037992610, iParam1);
			func_569(-1286414399, iParam1);
			func_570(0);
			break;
		case 15:
			func_569(-1014460309, iParam1);
			func_569(-1030502825, iParam1);
			break;
		case 33:
			func_569(479388090, iParam1);
			func_569(-1396342239, iParam1);
			func_569(-619618632, iParam1);
			break;
		case 34:
			func_569(1193561641, iParam1);
			break;
		case 64:
			func_569(1363960851, iParam1);
			break;
		case 60:
			func_569(-1232453926, iParam1);
			func_569(-882833584, iParam1);
			break;
		case 73:
			func_569(2023205767, iParam1);
			break;
		case 74:
			func_569(-2135286513, iParam1);
			if (func_572() == 0)
			{
				func_569(33799444, iParam1);
			}
			else
			{
				func_569(-161343203, iParam1);
			}
			break;
		case 8:
			func_569(841639693, iParam1);
			func_569(358952323, iParam1);
			break;
		case 36:
			func_569(852538149, iParam1);
			func_569(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_569(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_569(1116039310, iParam1);
			}
			break;
		case 27:
			func_569(107633428, iParam1);
			func_569(335902282, iParam1);
			func_569(575673055, iParam1);
			func_569(-425944207, iParam1);
			break;
		case 28:
			func_569(-1941530250, iParam1);
			func_569(1399269304, iParam1);
			func_569(1839684664, iParam1);
			func_569(923168503, iParam1);
			func_569(-1485078322, iParam1);
			break;
		case 29:
			func_569(574995900, iParam1);
			func_569(-1691275407, iParam1);
			func_569(-1725307861, iParam1);
			break;
		case 31:
			func_569(-2108383238, iParam1);
			func_569(-1321828931, iParam1);
			func_569(-1632118592, iParam1);
			func_569(334938948, iParam1);
			break;
		case 4:
			func_569(115823701, iParam1);
			func_569(-1896939736, iParam1);
			func_569(-1830746356, iParam1);
			func_569(-1235169781, iParam1);
			func_570(0);
			break;
		case 6:
			func_569(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_569(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_569(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_569(-384176140, iParam1);
			}
			break;
		case 25:
			func_569(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_569(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_569(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_569(-1374849484, iParam1);
			}
			break;
		case 48:
			func_569(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_569(217772674, iParam1);
			}
			else
			{
				func_569(2071798160, iParam1);
			}
			if (func_573(51))
			{
				func_569(-792802286, iParam1);
			}
			break;
		case 49:
			func_569(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_569(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_569(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_569(1402120602, iParam1);
			}
			break;
		case 58:
			func_569(-1661934591, iParam1);
			break;
		case 50:
			func_569(-1713759426, iParam1);
			break;
		case 52:
			func_569(-314799932, iParam1);
			func_569(-462260432, iParam1);
			func_569(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_569(345256028, iParam1);
				func_569(-1635084094, iParam1);
			}
			else
			{
				func_569(114267347, iParam1);
			}
			break;
		case 32:
			func_569(615304157, iParam1);
			break;
		case 47:
			func_569(415434835, iParam1);
			break;
		case 69:
			func_569(1373465877, iParam1);
			if (func_336((*Global_1347702)[9]->f_15, 1))
			{
				func_569(-2058273527, iParam1);
			}
			break;
		case 70:
			func_569(451334985, iParam1);
			if (func_572() == 0)
			{
				func_569(-224150200, iParam1);
			}
			else
			{
				func_569(289012628, iParam1);
			}
			break;
		case 71:
			if (func_572() == 0)
			{
				func_569(-41692120, iParam1);
			}
			else
			{
				func_569(1537840678, iParam1);
			}
			break;
		case 37:
			func_569(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_569(1842132550, iParam1);
			}
			else
			{
				func_569(-785735240, iParam1);
			}
			func_569(-1605690566, iParam1);
			break;
		case 13:
			func_569(-731367459, iParam1);
			func_569(224176585, iParam1);
			func_569(-14545580, iParam1);
			break;
		case 53:
			func_569(1095274522, iParam1);
			break;
		case 54:
			func_569(-572027988, iParam1);
			break;
		case 56:
			func_569(1339307101, iParam1);
			func_569(2102267732, iParam1);
			break;
		case 57:
			func_569(710102686, iParam1);
			break;
		case 22:
			func_569(-1754368482, iParam1);
			func_569(-2071408557, iParam1);
			break;
		case 12:
			func_569(-181334543, iParam1);
			break;
		case 0:
			func_569(-2134669864, iParam1);
			func_569(-548289709, iParam1);
			func_569(-911271922, iParam1);
			func_569(-604455775, iParam1);
			break;
		case 1:
			func_570(1);
			break;
		case 3:
			if (func_347())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_569(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_569(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_313()
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

void func_314(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_569(-145926707, iParam1);
			func_569(-604922090, iParam1);
			func_569(-848690769, iParam1);
			break;
		case 1:
			func_569(-1477631591, iParam1);
			break;
		case 2:
			func_569(76112544, iParam1);
			break;
		case 9:
			func_569(1396404308, iParam1);
			func_569(-1357381228, iParam1);
			if (func_336((*Global_1835011)[69]->f_1, 1))
			{
				func_569(1902679064, iParam1);
			}
			else
			{
				func_569(-2146422425, iParam1);
			}
			break;
		case 22:
			func_569(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_569(-1934184559, iParam1);
				func_569(1281755988, iParam1);
			}
			else
			{
				func_569(-1745220872, iParam1);
				func_569(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_569(-1641504538, iParam1);
				func_569(-988014485, iParam1);
			}
			else if (func_571(26))
			{
				func_569(-343043950, iParam1);
				func_569(-640062214, iParam1);
			}
			else
			{
				func_569(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_569(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_569(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_569(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_569(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_569(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_569(1301690984, iParam1);
				}
			}
			else
			{
				func_569(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_569(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_569(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_569(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_569(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_569(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_569(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_569(-754570528, iParam1);
			}
			else
			{
				func_569(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_569(-2072125821, iParam1);
			}
			else
			{
				func_569(270040030, iParam1);
			}
			break;
		case 37:
			func_569(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_569(-505314737, iParam1);
				func_569(-1853052860, iParam1);
			}
			else
			{
				func_569(-1975624994, iParam1);
				func_569(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_569(1690231002, iParam1);
			}
			else
			{
				func_569(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_569(1225386280, iParam1);
			}
			else if (func_571(54))
			{
				func_569(-283235773, iParam1);
			}
			else
			{
				func_569(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_569(1355398007, iParam1);
			}
			else
			{
				func_569(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_569(574636806, iParam1);
			}
			else
			{
				func_569(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_569(821118338, iParam1);
			}
			else if (func_571(39))
			{
				func_569(846829260, iParam1);
			}
			else
			{
				func_569(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_370((*Global_1835011)[33]->f_1) == 1)
				{
					func_569(1422779093, iParam1);
				}
				else
				{
					func_569(-1769536986, iParam1);
				}
			}
			else
			{
				func_569(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_569(352134789, iParam1);
			}
			else if (func_571(43))
			{
				func_569(260723113, iParam1);
			}
			else
			{
				func_569(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_569(-457958799, iParam1);
			}
			else
			{
				func_569(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_571(41))
			{
				func_569(-546824600, iParam1);
			}
			else
			{
				func_569(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_569(1297261593, iParam1);
			}
			else
			{
				func_569(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_569(2068484886, iParam1);
			}
			else if (func_571(49))
			{
				func_569(-1489080639, iParam1);
				func_569(-2102244050, iParam1);
			}
			else
			{
				func_569(-1863040467, iParam1);
			}
			break;
		case 51:
			func_569(-2055943209, iParam1);
			break;
		case 58:
			if (func_336((*Global_1347702)[23]->f_15, 1))
			{
				func_569(1650066845, iParam1);
			}
			else
			{
				func_569(151370023, iParam1);
			}
			func_569(1426057961, iParam1);
			func_569(476379584, iParam1);
			break;
		case 59:
			func_569(-1638117866, iParam1);
			break;
		case 62:
			func_569(199541730, iParam1);
			break;
		case 63:
			func_569(1703485804, iParam1);
			func_569(-800449045, iParam1);
			break;
		case 65:
			func_569(-1678210868, iParam1);
			func_569(-1448238026, iParam1);
			func_569(-1200864845, iParam1);
			func_569(1473511536, iParam1);
			break;
		case 66:
			func_569(-1774490051, iParam1);
			func_569(-34645921, iParam1);
			func_569(174027075, iParam1);
			func_569(-1155999, iParam1);
			func_570(1);
			break;
		case 67:
			func_569(701612593, iParam1);
			func_569(-1069631343, iParam1);
			func_569(1673428882, iParam1);
			break;
		case 68:
			func_569(-739133286, iParam1);
			func_569(-2130089358, iParam1);
			func_569(2056190391, iParam1);
			func_569(1941753817, iParam1);
			func_570(0);
			break;
		case 70:
			func_569(-1217555753, iParam1);
			break;
		case 71:
			func_569(697048821, iParam1);
			break;
		case 73:
			func_569(-553148661, iParam1);
			break;
		case 75:
			func_569(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_569(1414263863, iParam1);
			}
			else
			{
				func_569(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_569(1835465936, iParam1);
				func_569(523715611, iParam1);
			}
			else if (func_571(78))
			{
				func_569(1420338873, iParam1);
			}
			else
			{
				func_569(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_569(10180941, iParam1);
			}
			else if (func_571(79))
			{
				func_569(768420635, iParam1);
			}
			else
			{
				func_569(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_569(-383601523, iParam1);
			}
			else
			{
				func_569(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_569(1606472408, iParam1);
			}
			else
			{
				func_569(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_569(-203571927, iParam1);
			}
			else
			{
				func_569(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_569(729886222, iParam1);
			}
			else
			{
				func_569(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_569(-714816362, iParam1);
			}
			else
			{
				func_569(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_569(-932932179, iParam1);
				func_569(-1458537240, iParam1);
			}
			else
			{
				func_569(-1764383885, iParam1);
				func_569(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_569(1741466706, iParam1);
			}
			else
			{
				func_569(1405815775, iParam1);
			}
			break;
		case 94:
			func_569(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_569(1905280979, iParam1);
			}
			else
			{
				func_569(-1966245299, iParam1);
			}
			func_569(721468880, iParam1);
			break;
		case 99:
			func_569(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_569(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_569(-1117781095, iParam1);
				}
				else
				{
					func_569(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_569(141494548, iParam1);
			}
			else
			{
				func_569(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_569(-369525697, iParam1);
			}
			else if (func_571(101))
			{
				func_569(1595015219, iParam1);
			}
			else
			{
				func_569(-321486961, iParam1);
			}
			break;
		case 103:
			func_569(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_569(793460477, iParam1);
				func_569(-1610242176, iParam1);
			}
			else if (func_571(103))
			{
				func_569(1830897187, iParam1);
			}
			else
			{
				func_569(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_569(1528309077, iParam1);
			}
			else if (func_571(104))
			{
				func_569(1864966105, iParam1);
			}
			else
			{
				func_569(-103336013, iParam1);
			}
			break;
		case 108:
			func_569(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_569(-1123227713, iParam1);
				func_569(-889574341, iParam1);
			}
			else
			{
				func_569(2065385917, iParam1);
				func_569(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_569(-887421691, iParam1);
			}
			else if (func_571(109))
			{
				func_569(-1318117949, iParam1);
			}
			else
			{
				func_569(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_569(284822762, iParam1);
				}
				else
				{
					func_569(-1425017554, iParam1);
				}
			}
			else if (func_571(110))
			{
				if (&Global_1357515 == 0)
				{
					func_569(553087292, iParam1);
				}
				else
				{
					func_569(-1766870331, iParam1);
					func_569(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_569(-1980598735, iParam1);
			}
			else
			{
				func_569(-442732098, iParam1);
				func_569(1955756409, iParam1);
			}
			break;
		case 115:
			func_569(394303528, iParam1);
			func_569(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_569(1182403394, iParam1);
			}
			else
			{
				func_569(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_569(924445424, iParam1);
			}
			else
			{
				func_569(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_569(430755273, iParam1);
				func_569(-1473879802, iParam1);
			}
			else
			{
				func_569(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_569(73885747, iParam1);
			}
			else if (func_571(117))
			{
				func_569(1559707913, iParam1);
			}
			else
			{
				func_569(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_569(-2103887972, iParam1);
			}
			else if (func_571(118))
			{
				func_569(-435828462, iParam1);
			}
			else
			{
				func_569(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_569(2054486196, iParam1);
			}
			else
			{
				func_569(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_569(-570086056, iParam1);
			}
			else if (func_571(121))
			{
				func_569(32337856, iParam1);
			}
			else
			{
				func_569(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_569(813493663, iParam1);
			}
			else if (func_571(122))
			{
				func_569(-2132763590, iParam1);
			}
			else
			{
				func_569(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_569(-66240572, iParam1);
				func_569(1563075046, iParam1);
			}
			else
			{
				func_569(-787011772, iParam1);
				func_569(-1523377438, iParam1);
			}
			break;
		case 127:
			func_569(61020800, iParam1);
			break;
		case 129:
			func_569(428985222, iParam1);
			break;
		case 131:
			func_569(-1393851036, iParam1);
			break;
		case 133:
			func_569(1559531342, iParam1);
			break;
		case 134:
			func_569(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_569(-1374407408, iParam1);
				}
				else
				{
					func_569(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_569(-472672138, iParam1);
				}
				else
				{
					func_569(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_569(-1678710489, iParam1);
			}
			else
			{
				func_569(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_569(1717582460, iParam1);
			}
			else
			{
				func_569(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_569(1568112362, iParam1);
				func_569(1388317526, iParam1);
			}
			else if (func_571(136))
			{
				func_569(-1597534828, iParam1);
				func_569(-1207918353, iParam1);
			}
			else
			{
				func_569(-1940891082, iParam1);
				func_569(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_569(448334530, iParam1);
				func_569(2145375502, iParam1);
			}
			else
			{
				func_569(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_569(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_569(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_569(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_569(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_569(-66616327, iParam1);
			}
			else
			{
				func_569(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_569(1862916706, iParam1);
			}
			else if (func_571(147))
			{
				func_569(675105199, iParam1);
			}
			else
			{
				func_569(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_569(174409701, iParam1);
			}
			else if (func_571(148))
			{
				func_569(-1730895475, iParam1);
			}
			else
			{
				func_569(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_569(1295237052, iParam1);
			}
			else if (func_571(149))
			{
				func_569(-788577684, iParam1);
			}
			else
			{
				func_569(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_315(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_203(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_512(iParam0);
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
					if (func_370((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_281(iParam0);
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
			iVar3 = func_281(iParam0);
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

int func_316(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_574(iParam0);
	iVar3 = func_575(iParam0);
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
				iVar1 = func_294();
				func_343(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_576(iParam0, 1);
			if (func_577(iVar2))
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
					func_579(1, iParam0);
				}
				else
				{
					func_580(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_317(int iParam0, int iParam1)
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

int func_318(int iParam0, int iParam1, int iParam2)
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

void func_319(bool bParam0)
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

void func_320(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_581(iParam0, iParam1, bParam2);
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

int func_321(int iParam0, int iParam1)
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

bool func_322(int iParam0)
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

void func_323(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_582(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_583(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_584(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_585(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_584(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_324(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_586(func_487(iParam0));
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_326()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_587(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_327(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (!func_588(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_589(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_590(iParam0, bParam2);
	iVar2 = 0;
	if (func_477(iParam0, 0, 0) == 0)
	{
		if (func_591(iParam0))
		{
			iVar5 = func_592(iParam0);
			iVar6 = func_593(iVar5);
			iVar7 = func_594(iVar6) + 1;
			func_595(iVar5);
			if (func_596(38))
			{
				func_334(483, 0);
			}
			else
			{
				func_334(482, 0);
			}
			if (iVar7 == func_597(iVar6))
			{
				func_327(func_598(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_406() && func_599(4))
				{
					if (func_406() && (func_600(38) || func_596(38)))
					{
						func_602(38, func_598(iVar6), 0, 0, func_601(), 0, -1, 0);
						func_603(2);
					}
					else
					{
						func_602(38, func_598(iVar6), 0, 0, func_601(), 0, -1, 0);
						func_603(1);
					}
				}
			}
			else if (func_406() && func_599(4))
			{
				if (func_406() && (func_600(38) || func_596(38)))
				{
					func_602(38, 0, 0, 0, func_601(), 0, -1, 0);
					func_603(2);
				}
				else
				{
					func_602(38, 0, 0, 0, func_601(), 0, -1, 0);
					func_603(1);
				}
			}
			if (func_406() && func_599(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_406() && (func_600(38) || func_596(38)))
					{
						func_604(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_604(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_478(iParam0) == -1037537535)
	{
		if ((!func_605(iParam0, 866047851) && !func_605(iParam0, -1979000645)) && !func_605(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_606(iParam0, 8388608) && !func_607(28))
	{
		func_608(28);
	}
	if (!bVar3)
	{
		if (func_605(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_609(iParam0) == -1447088266)
			{
				iVar1 = func_611(func_610(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_612(iVar1);
					}
					if (func_481(0) && func_613(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_614(iParam0, iVar0, iParam5);
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
						func_612(iParam0);
					}
					if (func_481(0) && func_613(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_614(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_478(iParam0) == -427144552)
		{
			if (!func_615(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_478(iParam0) == 307971639 && func_616(iParam0))
		{
			if (!func_617(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_605(iParam0, 866047851))
		{
			func_618(iParam0);
		}
		else if (func_605(iParam0, 2000026003))
		{
			func_619(iParam0);
		}
		else if (func_605(iParam0, -103750053))
		{
			func_95(func_620(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_621(-717883113, 2091222383), iVar0);
		}
		else if (func_605(iParam0, -121341956) && !func_605(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_336((*Global_1835011)[4]->f_1, 1))
				{
					func_334(498, 0);
				}
			}
			if (func_605(iParam0, -2017733358) || func_605(iParam0, -1369131378))
			{
				func_622(iParam0);
			}
		}
		else if (func_605(iParam0, -136654233))
		{
			if (func_605(iParam0, -1021472396))
			{
			}
		}
		else if (func_605(iParam0, -1466706512) && func_605(iParam0, 1147021565))
		{
			func_334(484, 0);
		}
		else if (func_605(iParam0, 1147021565) && func_605(iParam0, -524514947))
		{
		}
		else if (func_605(iParam0, 554195525))
		{
		}
		else if (func_605(iParam0, 589988438))
		{
			if (func_623())
			{
				func_624(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_605(iParam0, 787083290) && func_605(iParam0, 949916894))
		{
			func_625(iParam0);
		}
		else if (func_605(iParam0, -1718133314))
		{
			func_626(iParam0);
		}
		else if (func_605(iParam0, -1738650224))
		{
			func_627(iParam0);
		}
		else if (func_605(iParam0, -1112814642) && func_605(iParam0, 949916894))
		{
			func_628(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_605(iParam0, 1841149704))
		{
			func_629();
		}
		else if (func_605(iParam0, 606799272))
		{
			func_630(iParam0, iParam1);
			func_631(iParam0);
		}
		else if (func_605(iParam0, -1112814642) && func_605(iParam0, -1697809989))
		{
			func_632(iParam0, 0, 0, 0);
		}
		else if (func_605(iParam0, -2017733358) || func_605(iParam0, -1369131378))
		{
			func_622(iParam0);
		}
		else if (func_605(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_633(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_605(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_356(215778062, 1, 0))
					{
						func_327(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_356(670273567, 1, 0))
					{
						func_327(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_356(-967317137, 1, 0))
					{
						func_327(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_356(526074061, 1, 0))
					{
						func_327(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_356(-1045488665, 1, 0))
					{
						func_327(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_356(471514780, 1, 0))
					{
						func_327(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_605(iParam0, -839724752) && func_606(iParam0, 4))
		{
			if (!func_596(42))
			{
				func_634(iParam0);
			}
		}
		else if (func_605(iParam0, 1399091007))
		{
			func_635(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_605(iParam0, 1248798204))
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
				func_327(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_608(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_636(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_637(&iVar9, 0))
				{
					func_613(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_636(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_334(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_638();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_639();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_640();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_641();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_642();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_643(499813453, 854119837, 0);
				func_644(499813453, 0);
				func_645(1);
				break;
			case 2127812557:
				func_643(499813453, -1292544588, 0);
				func_644(499813453, 0);
				func_645(2);
				break;
			case 808991383:
				func_643(499813453, -1003325394, 0);
				func_644(499813453, 0);
				func_645(4);
				break;
			case 1134518629:
				func_643(666607663, -335460405, 0);
				func_644(666607663, 0);
				func_646(1);
				break;
			case 902940106:
				func_643(666607663, 903797617, 0);
				func_644(666607663, 0);
				func_646(2);
				break;
			case -418174898:
				func_643(666607663, 669728650, 0);
				func_644(666607663, 0);
				func_646(4);
				break;
			case -648114971:
				func_643(-220219788, 1214120047, 0);
				func_644(-220219788, 0);
				func_647(1);
				break;
			case 211153747:
				func_643(-220219788, 655769340, 0);
				func_644(-220219788, 0);
				func_647(2);
				break;
			case -32876996:
				func_643(-220219788, 885316185, 0);
				func_644(-220219788, 0);
				func_647(4);
				break;
			case 1191437462:
				func_643(218622660, -1491419385, 0);
				func_644(218622660, 0);
				func_648(1);
				break;
			case 1119149048:
				func_643(218622660, 1809565830, 0);
				func_644(218622660, 0);
				func_648(2);
				break;
			case 506073827:
				func_643(390004462, -628873767, 0);
				func_644(390004462, 0);
				func_649(1);
				break;
			case -1876986168:
				func_643(390004462, -405421956, 0);
				func_644(390004462, 0);
				func_649(2);
				break;
			case 2142623221:
				func_643(390004462, -1108972386, 0);
				func_644(390004462, 0);
				func_649(4);
				break;
			case 1508215381:
				func_643(6410548, 1053716392, 0);
				func_644(6410548, 0);
				func_650(1);
				break;
			case -888935280:
				func_643(6410548, 806507056, 0);
				func_644(6410548, 0);
				func_650(2);
				break;
			case -1252474566:
				func_643(6410548, 1571925350, 0);
				func_644(6410548, 0);
				func_650(4);
				break;
			case -1465702449:
				func_643(6410548, 1330352282, 0);
				func_644(6410548, 0);
				func_650(8);
				break;
			case -21093309:
				func_652(242, func_651(-21093309), 0);
				break;
			case 204375141:
				func_652(240, func_651(204375141), 0);
				break;
			case -417963070:
				func_652(241, func_651(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_653(594, 1934060482, 1, 1);
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
					func_653(594, 1110018439, 1, 1);
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
					func_653(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_653(594, -1228016946, 1, 1);
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
					func_653(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_653(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_334(488, 0);
				break;
			case 1613651027:
				func_334(491, 0);
				break;
			case -885810591:
				func_334(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_327(func_654(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_327(func_655(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_607(1))
				{
					func_334(487, 0);
				}
				break;
			case -898386032:
				func_334(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_334(496, 0);
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
		func_656(&iVar10);
		if (!func_657(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_481(0))
		{
			return true;
		}
		if (func_478(iParam0) == -1037537535)
		{
			func_658(iParam0);
		}
		if (func_605(iParam0, -1979000645))
		{
			func_659(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_481(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_327(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_660(iVar2, 0);
		}
	}
	Var35 = { func_476(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_661(iParam0);
	if (fParam6 > 0f)
	{
		if (func_605(iParam0, -839724752))
		{
			func_662(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_475(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_328(int iParam0)
{
	if (func_605(iParam0, 1989861793))
	{
		iVar0 = func_663(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_664(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_665(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_666(iVar14, iVar1);
					if (iVar15 != iParam0 && func_473(iVar15, 0))
					{
						if (func_667(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_668(iVar1);
				if (bVar13)
				{
					func_669(iParam0);
				}
				else
				{
					func_334(306, 0);
				}
			}
		}
	}
}

void func_329()
{
	if (func_20() != -1)
	{
		return;
	}
	func_670();
	func_671();
	func_672();
	func_673();
	func_674();
	func_675();
	func_676();
}

void func_330(int iParam0)
{
	func_188(iParam0, 1, 1, -142743235, 1);
	if (func_677(iParam0))
	{
		func_678(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_680(func_679(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_681(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_682() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_683(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_683(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_684(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_684(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_684(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_684(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_684(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_684(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_684(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_684(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_684(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_685(iVar8, iVar0))
				{
					func_686(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_685(iVar8, iVar0))
		{
			func_686(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_331()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_685(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_682() == -2125499975 || func_682() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_686(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_686(&vVar2, iVar5, iVar0);
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

void func_332()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_587(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_333(int iParam0, bool bParam1)
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
			if ((func_336((*Global_1835011)[59]->f_1, 1) || func_336((*Global_1347702)[1]->f_15, 1)) || func_199((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_564(403634348, 1))
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

void func_334(int iParam0, bool bParam1)
{
	func_687(iParam0, &iVar0, &iVar1);
	if (!func_688(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_689(iVar0, iVar1);
}

void func_335(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_680(iParam0, 1);
	func_690(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_690(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_691(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_690(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_690(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_336(int iParam0, bool bParam1)
{
	switch (func_305(iParam0))
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

void func_337()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_587(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_587(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_339(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_692(iParam1, 1, 0) };
		iParam3 = func_693(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_694(iParam3);
	return func_636(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_340()
{
	return _unlock_is_unlocked(99890643);
}

void func_341(int iParam0)
{
	if (!func_695(iParam0))
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

bool func_342(int iParam0, int iParam1)
{
	if (!func_696(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_697(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_698(Global_40.f_9910[iParam1], 4);
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_699(*iParam0);
	iVar1 = func_700(*iParam0);
	iVar2 = func_701(*iParam0);
	iVar3 = func_702(*iParam0);
	iVar4 = func_703(*iParam0);
	iVar5 = func_704(*iParam0);
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
	iVar6 = func_705(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_705(iVar1, iVar0);
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
	func_706(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_344(int iParam0, int iParam1, bool bParam2)
{
	if (!func_696(iParam0))
	{
		return;
	}
	if (!func_707(iParam1))
	{
		return;
	}
	if (func_708(iParam1, 1))
	{
		return;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_342(iParam0, -1))
	{
		return;
	}
	else
	{
		func_709(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_205(0, 0, 1))
		{
			func_376(0, 17);
		}
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_587(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_587(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_347()
{
	return _unlock_is_unlocked(-121456797);
}

void func_348()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_587(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_587(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_587(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_587(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_587(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_587(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_354(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_355(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_356(int iParam0, int iParam1, bool bParam2)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_478(iParam0);
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
		if (!func_710(iParam0, 1))
		{
			return false;
		}
	}
	return func_477(iParam0, 0, bParam2) >= iParam1;
}

void func_357(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_711(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_711(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_587(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_359()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_587(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_360()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_587(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_361()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_587(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_362()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_587(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_363()
{
	if (func_712() > 1)
	{
		func_713();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_334(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_334(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_334(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_334(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_334(452, 1);
		}
	}
}

bool func_364(int iParam0)
{
	return func_714(iParam0, 4, 1);
}

void func_365(int iParam0)
{
	func_715(iParam0, 4, 1);
}

void func_366(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_367(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_198(iParam0))
	{
		return;
	}
	func_238(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_203(iParam0))
	{
		case 1:
			func_95(func_621(909007663, -587839005), 1);
			iVar0 = func_281(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_490(iVar0))
			{
				case 0:
					func_95(func_621(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_621(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_621(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_621(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_621(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_621(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_621(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_621(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_621(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_621(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_621(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_281(iParam0);
			if (func_310((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_310((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_310((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_621(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_621(909007663, -2049243343), 1);
				}
			}
			if (func_310((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_491(iVar1))
				{
					case 0:
						func_95(func_621(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_621(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_621(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_621(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_621(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_621(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_621(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_621(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_621(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_621(909007663, 532323983), 1);
				}
			}
			else if (func_310((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_310((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_310((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_621(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_621(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_368()
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
	else if (func_206(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_205(0, 0, 1) || func_716()) || func_129())
	{
		return;
	}
	iVar0 = func_209();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_717(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_718(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_718(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_719(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_376(0, -1);
	}
	if (iVar2 > 0)
	{
		func_720("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_721(1, 0);
	Global_1956575->f_4 = 1;
}

void func_369(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_292(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_722(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_370(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_723(iParam0);
}

int func_371(int iParam0, int iParam1)
{
	if (!func_724(iParam0))
	{
		return 0;
	}
	if (!func_406())
	{
		return 0;
	}
	if (!func_725(iParam0, &iVar0, &iVar1))
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

int func_372(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_726())
	{
		iVar2 = func_726();
	}
	iVar5 = func_727(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_487(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_487(iVar6) == 0)
			{
				return func_728(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_487(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_487(iVar6) == 0)
			{
				return func_728(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_728(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_729(1330954593, 0, -1);
		case 1:
			return func_729(1330954593, 0, -1);
		case 2:
			return func_729(1330954593, 0, -1) * 2;
		case 4:
			return func_729(1330954593, 0, -1);
		case 5:
			return func_729(1330954593, 0, -1);
		case 6:
			return func_729(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_729(1330954593, 0, -1) * 3;
		case 9:
			return func_729(1330954593, 0, -1) * 3;
		case 10:
			return func_729(1330954593, 0, -1) * 3;
		case 11:
			return func_729(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_374(int iParam0)
{
	if (!func_198(iParam0))
	{
		return cVar0;
	}
	switch (func_203(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_512(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_281(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_372(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_375(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_377();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_203(Global_1879514->f_1) == 1)
			{
				func_371(5, 1);
			}
			else if (func_203(Global_1879514->f_1) == 8 && (func_310((*Global_1347702)[func_281(Global_1879514->f_1)]->f_12, 1) || func_310((*Global_1347702)[func_281(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_371(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_376(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_730(&Global_0, 8);
	}
	if (!func_406() || func_20() != -1)
	{
		return;
	}
	func_730(&Global_0, 1);
}

int func_377()
{
	iVar0 = func_731(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_732(iVar0))
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

Vector3 func_378(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_733(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_407(vVar0))
	{
		vVar0 = { func_733(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_379(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_380(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_381(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_256(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_734(vParam0, iParam3);
}

void func_382()
{
	func_735();
	func_736();
	func_737();
	_0x11b0a0b282fa9b10(0);
}

void func_383(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_738(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_739(&(Param0.f_10)))
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
			func_740(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_384(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_385(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_386()
{
	return Global_1572864->f_12;
}

void func_387(bool bParam0)
{
	if (func_503(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_741();
	Var1.f_3.f_3 = iVar0;
	if ((!func_742(Global_1347343->f_2) && !func_384(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_743();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_384(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_744();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_384(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_745();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_746(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_747(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_385(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_385(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_388(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_748(uParam0);
	iVar0 = func_749(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_750(iParam1);
		}
		iVar0 = func_751(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_752(uParam0);
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
		iVar0 = func_752(uParam0);
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
	func_753(uParam0, 2);
}

void func_389(var uParam0, int iParam1)
{
	func_754(&(uParam0->f_7375), iParam1);
}

int func_390(var uParam0)
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

int func_391()
{
	return func_512(func_755());
}

void func_392(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_408())
	{
		func_756(uParam0, iVar0);
		iVar0++;
	}
}

int func_393(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_394(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_395(var uParam0)
{
	func_762(uParam0, 0, 1, 108910, 108919, 108995, 109073, 109099, "", 0, -1);
	func_762(uParam0, 1, 2, 109269, 109297, 109384, 109535, 109579, "NTS3_INT", 2, -1);
	func_762(uParam0, 2, 3, 109605, 109845, 109892, 109948, 110850, "", 0, -1);
	func_762(uParam0, 3, 4, 110988, 111182, 111513, 111713, 112532, "NTS3_MCS0", 4099, -1);
	func_762(uParam0, 4, 5, 112568, 112625, 112678, 112861, 112876, "NTS3_MCS1", 4099, -1);
	func_762(uParam0, 5, 6, 112913, 113010, 113093, 113148, 113163, "", 1, -1);
	func_762(uParam0, 6, 7, 113224, 113396, 113461, 113733, 113748, "NTS3_MCS2", 4099, -1);
	func_762(uParam0, 7, 8, 113784, 113867, 113889, 113983, 114074, "", 1, -1);
	func_762(uParam0, 8, 9, 114144, 114291, 114741, 114767, 115632, "", 1, -1);
	func_762(uParam0, 9, 25, 115665, 115723, 116140, 116391, 116776, "", 1, -1);
	func_762(uParam0, 25, 26, 116908, 117026, 117067, 117110, 117140, "NTS3_EXT", 2, -1);
}

void func_396(var uParam0, int iParam1)
{
	uParam0->f_13105 = iParam1;
}

int func_397(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = func_813(uParam0, iParam1, bParam2);
	if (does_entity_exist(iVar0) && is_entity_a_ped(iVar0))
	{
		return get_ped_index_from_entity_index(iVar0);
	}
	return 0;
}

void func_398(int iParam0)
{
	func_425(&uLocal_7602, iParam0);
}

int func_399(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_814(uParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_815(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_816(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_817(uParam0, iParam1, 128);
		if (bParam4)
		{
			func_817(uParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_818(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_814(uParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_819(uParam0, iParam1, &iVar4))
		{
			func_820(uParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_821(iVar3);
	}
	return iVar0;
}

void func_400(var uParam0, float fParam1)
{
	uParam0->f_13144 = fParam1;
}

void func_401(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_402(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_403(var uParam0)
{
	if (!func_822(uParam0, 4))
	{
		if (func_823(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_824(uParam0) };
		if (!func_823(uParam0->f_860, 524288))
		{
			func_825(&(uParam0->f_872));
		}
		func_826(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_827(uParam0, 0f, 0f, 0f);
		func_828(uParam0);
		func_829(uParam0);
		func_830(uParam0, 0f, 0f, 0f, 0, 0);
		func_831(uParam0);
		func_754(uParam0, 4);
		func_832(uParam0, 0);
		func_833(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_404(int iParam0)
{
	if (func_834(iParam0))
	{
		return func_835(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_405(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_515(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_836(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_837(0, 0);
		if (func_695(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_838(1, 0);
		}
	}
	else
	{
		func_838(1, 0);
	}
	func_217(0);
	func_516(0, vParam0, uParam3);
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

bool func_407(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_408()
{
	return 26;
}

void func_409(int iParam0)
{
	if (!func_197(iParam0))
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

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_839((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_840((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_841((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_842((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_843((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_844((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_416(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_845((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_418(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_846((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_419(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_847((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_848((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_421(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_849((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_422(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_850(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_851(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_423(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_852(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_853(&(uParam0->f_819));
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

void func_424(var uParam0)
{
	func_854(uParam0, 1, 1, 1, 0, 1);
	func_854(uParam0, 0, 2, 1, 0, 1);
	func_855(uParam0, 0, 3, 1);
	func_854(uParam0, 2, 5, 8, 0, 1);
	func_855(uParam0, 2, 4, 8);
	func_855(uParam0, 2, 6, 8);
	func_855(uParam0, 2, 7, 8);
	func_855(uParam0, 2, 8, 8);
	func_855(uParam0, 2, 9, 8);
	func_855(uParam0, 2, 10, 8);
	func_854(uParam0, 3, 11, 8, 0, 1);
	func_854(uParam0, 4, 12, 8, 0, 1);
	func_854(uParam0, 5, 12, 8, 0, 1);
	func_854(uParam0, 6, 13, 8, 0, 1);
	func_855(uParam0, 6, 14, 8);
	func_855(uParam0, 6, 15, 8);
	func_854(uParam0, 7, 16, 8, 0, 1);
	func_854(uParam0, 8, 17, 8, 0, 1);
	func_855(uParam0, 8, 18, 8);
	func_855(uParam0, 8, 19, 8);
	func_855(uParam0, 8, 20, 8);
	func_855(uParam0, 8, 21, 8);
	func_854(uParam0, 9, 22, 8, 0, 1);
	func_855(uParam0, 9, 23, 8);
	func_855(uParam0, 9, 24, 8);
	func_855(uParam0, 9, 25, 8);
	func_854(uParam0, 10, 27, 48, 0, 1);
	func_855(uParam0, 10, 26, 48);
	func_854(uParam0, 11, 29, 48, 0, 1);
	func_855(uParam0, 11, 28, 48);
	func_855(uParam0, 11, 30, 48);
	func_855(uParam0, 11, 31, 48);
	func_854(uParam0, 12, 32, 48, 0, 1);
	func_855(uParam0, 12, 33, 48);
	func_855(uParam0, 12, 34, 48);
	func_855(uParam0, 12, 35, 48);
	func_855(uParam0, 12, 36, 48);
	func_854(uParam0, 13, 38, 48, 0, 1);
	func_855(uParam0, 13, 37, 48);
	func_855(uParam0, 13, 39, 48);
	func_854(uParam0, 14, 40, 224, 0, 1);
	func_855(uParam0, 14, 41, 224);
	func_854(uParam0, 15, 42, 48, 0, 1);
	func_855(uParam0, 15, 43, 48);
	func_854(uParam0, 16, 42, 48, 0, 1);
	func_855(uParam0, 16, 43, 48);
	func_854(uParam0, 17, 42, 48, 0, 1);
	func_855(uParam0, 17, 43, 48);
	func_854(uParam0, 18, 44, 48, 2, 1);
	func_855(uParam0, 18, 45, 48);
	func_855(uParam0, 18, 46, 48);
	func_855(uParam0, 18, 47, 48);
	func_854(uParam0, 19, 49, 48, 0, 1);
	func_855(uParam0, 19, 48, 48);
	func_854(uParam0, 20, 51, 32, 0, 1);
	func_855(uParam0, 20, 50, 32);
	func_854(uParam0, 21, 85, 32, 0, 1);
	func_855(uParam0, 21, 86, 32);
	func_855(uParam0, 21, 87, 32);
	func_855(uParam0, 21, 88, 32);
	func_855(uParam0, 21, 89, 32);
	func_854(uParam0, 23, 90, 32, 0, 1);
	func_854(uParam0, 22, 91, 48, 0, 1);
	func_854(uParam0, 24, 52, 192, 0, 1);
	func_855(uParam0, 24, 53, 192);
	func_854(uParam0, 25, 57, 192, 0, 0);
	func_855(uParam0, 25, 55, 192);
	func_855(uParam0, 25, 56, 192);
	func_855(uParam0, 25, 58, 192);
	func_854(uParam0, 26, 61, 192, 0, 0);
	func_855(uParam0, 26, 59, 192);
	func_855(uParam0, 26, 60, 192);
	func_855(uParam0, 26, 62, 192);
	func_854(uParam0, 27, 63, 448, 0, 1);
	func_855(uParam0, 27, 64, 448);
	func_854(uParam0, 28, 66, 768, 0, 1);
	func_855(uParam0, 28, 65, 768);
	func_855(uParam0, 28, 67, 768);
	func_855(uParam0, 28, 68, 768);
	func_855(uParam0, 28, 69, 768);
	func_854(uParam0, 29, 70, 32, 0, 1);
	func_855(uParam0, 29, 71, 32);
	func_855(uParam0, 29, 72, 32);
	func_855(uParam0, 29, 73, 32);
	func_855(uParam0, 29, 74, 32);
	func_855(uParam0, 29, 75, 32);
	func_855(uParam0, 29, 76, 32);
	func_855(uParam0, 29, 77, 32);
	func_854(uParam0, 30, 82, 192, 0, 0);
	func_855(uParam0, 30, 80, 128);
	func_855(uParam0, 30, 81, 128);
	func_855(uParam0, 30, 79, 128);
	func_855(uParam0, 30, 78, 128);
	func_855(uParam0, 30, 83, 128);
	func_855(uParam0, 30, 84, 128);
	func_854(uParam0, 31, 92, 512, 0, 1);
	func_854(uParam0, 32, 93, 524288, 0, 1);
	func_855(uParam0, 32, 94, 524288);
	func_855(uParam0, 32, 95, 524288);
	func_855(uParam0, 32, 96, 524288);
	func_855(uParam0, 32, 97, 524288);
}

void func_425(int iParam0, int iParam1)
{
	func_856(iParam0, iParam1);
}

void func_426(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_857((*uParam0)[iVar0]))
		{
			if (func_858((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_859((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_860((*uParam1)[iVar0]))
		{
			if (func_858((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_861((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_862((*uParam2)[iVar0]))
		{
			if (func_858((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_863((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_864((*uParam3)[iVar0]))
		{
			if (func_858((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_865((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_858(uParam4->f_1, iParam12))
	{
		func_866(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_867((*uParam5)[iVar0]))
		{
			if (func_858((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_868((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_867((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_869((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_858((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_870((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_871((*uParam6)[iVar0]))
		{
			if (func_858((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_872((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_873((*uParam7)[iVar0]))
		{
			if (func_858((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_874((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_875((*uParam8)[iVar0]))
		{
			if (func_858((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_876((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_877((*uParam9)[iVar0]))
		{
			if (func_858((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_878((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_879((*uParam10)[iVar0]))
		{
			if (func_858((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_880((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_881((*uParam11)[iVar0]))
		{
			if (func_858((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_882((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_427(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_883(uParam0, iParam1, sParam2))
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

struct<2> func_428()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_429(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_430(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_431(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_884(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_388(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_432(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_885(uParam0->f_607)}, 3);
			if (func_886(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_887(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_888(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_433(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_867((*uParam0)[iVar0]))
		{
			if (func_858((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_889((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_890((*uParam0)[iVar0]))
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

int func_434(var uParam0)
{
	return uParam0->f_596;
}

bool func_435(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_891(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_892(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_436(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_893(uParam0))
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
				Var0.f_9 = iParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_894(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_895(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_896(iVar12))
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
		if (func_897(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		Var18.f_9 = iParam5;
		if (func_120(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_894(&iVar29, &Var18);
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
		func_898(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_896(iVar13) || func_899(Global_35, iVar13, 1, 1) > 200f) && !func_407(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_900(iVar13, vVar14, iParam5, 2, 1073741824);
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

void func_437(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_901(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_902(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_438(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_903(uParam0);
			if (func_904(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_905(uParam0, 2097152);
				func_274(uParam0, 16384);
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
			func_903(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_906(uParam0, Var0))
			{
				if (func_434(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_434(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_439(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_440(var uParam0)
{
	iVar0 = 1;
	if (!func_907(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_435(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_436(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_885(uParam0->f_607)}, 3);
		if (func_908(&(uParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_909(&(uParam0->f_13115)) < 30f)
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

bool func_441(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_909(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_910()) && func_909(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_274(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_911(0, 0);
		func_274(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_442(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return false;
	}
	if (!func_913(uParam0))
	{
		return false;
	}
	func_914();
	if (!func_915())
	{
		return false;
	}
	func_916(uParam0);
	func_917(uParam0, 1);
	func_918(uParam0);
	func_920(uParam0, 135745);
	func_922(uParam0, 135943);
	func_924(uParam0, 137592);
	func_179(35, 0, 1);
	iVar0 = func_925(uParam0);
	func_927(func_926(2, 2), 150f, 0);
	if (iVar0 > 7)
	{
		func_928(-959357075, 1, 0);
	}
	else if (iVar0 >= 4)
	{
		func_928(1509509592, 1, 0);
	}
	if (iVar0 >= 4 && iVar0 <= 6)
	{
		func_929(1, 1);
	}
	func_40(0);
	func_930();
	func_931();
	func_932();
	if (iVar0 >= 3)
	{
		func_933(5);
	}
	func_934();
	_0x72d4cb5db927009c(1676963302, -1, 0);
	_0x72d4cb5db927009c(-183018591, -1, 0);
	_0x72d4cb5db927009c(-1098045850, -1, 0);
	_0x72d4cb5db927009c(2031861036, -1, 0);
	_0x72d4cb5db927009c(-2002235300, -1, 0);
	_0x72d4cb5db927009c(-1569615261, -1, 0);
	_0x72d4cb5db927009c(-1511427369, -1, 0);
	uParam0->f_607 = uParam0->f_607;
	return true;
}

void func_443(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_444(var uParam0)
{
	func_935(uParam0);
	func_936(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_904(uParam0);
		}
	}
	func_937(uParam0);
	func_938(uParam0);
	func_939(uParam0);
	func_940(uParam0);
	func_941(uParam0);
	func_942(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_943(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_288(uParam0) == 0)
	{
		func_438(uParam0);
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
			if (func_944(uParam0, iVar0, 0))
			{
				if (func_945(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_945(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_945(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_389(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_946(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_947(uParam0);
					func_948(uParam0, iVar0, 1);
				}
				else
				{
					func_948(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_907(uParam0))
			{
				if (func_949(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_905(uParam0, 4);
					}
					func_948(uParam0, iVar0, 2);
				}
			}
			else if (func_950(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_905(uParam0, 4);
				}
				func_948(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_944(uParam0, iVar0, 2))
			{
				if (!func_951(uParam0))
				{
					func_948(uParam0, iVar0, 4);
					if (func_952(uParam0, iVar0, iVar1))
					{
						func_948(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_953(uParam0);
					func_948(uParam0, iVar0, 3);
					if (func_954(uParam0, iVar0))
					{
						func_948(uParam0, iVar0, 4);
						if (func_952(uParam0, iVar0, iVar1))
						{
							func_948(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_955(uParam0))
			{
				func_954(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_954(uParam0, iVar0))
			{
				func_948(uParam0, iVar0, 4);
				if (func_952(uParam0, iVar0, iVar1))
				{
					func_948(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_952(uParam0, iVar0, iVar1))
			{
				func_948(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_956(uParam0);
				func_957(uParam0, iVar0);
				func_958(uParam0);
				func_959(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_960(uParam0, iVar1))
					{
						func_961(uParam0, iVar1);
					}
				}
			}
			if (func_944(uParam0, iVar0, 5))
			{
				if (func_944(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_962(uParam0, func_33(uParam0));
					}
					func_963(uParam0, iVar1);
					func_936(uParam0);
					return true;
				}
				else
				{
					func_948(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_964(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_965(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_966("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_967(uParam0))
					{
						func_948(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_905(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_274(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_956(uParam0);
				func_957(uParam0, iVar0);
				func_958(uParam0);
				func_959(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_960(uParam0, func_35(uParam0)))
					{
						func_961(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_965(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_944(uParam0, iVar0, 5))
				{
					if (func_968(uParam0))
					{
						func_948(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_968(uParam0);
					func_948(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_944(uParam0, iVar0, 5);
				func_969(uParam0);
			}
			break;
		case 7:
			if (func_944(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_962(uParam0, func_33(uParam0));
				}
				func_963(uParam0, iVar1);
				func_936(uParam0);
				return true;
			}
			break;
		default:
			func_948(uParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_445(int iParam0)
{
	if (-1829635046 == func_970(81053684))
	{
		if (func_971(iParam0))
		{
			return true;
		}
	}
	else if (func_972(-525676072, iParam0))
	{
		if (func_971(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_446()
{
	if (!func_973())
	{
		return 0;
	}
	if (!func_971(&iVar0))
	{
		return 0;
	}
	if (!func_974(iVar0))
	{
		return 0;
	}
	return func_975(iVar0, 0);
}

bool func_447(int iParam0)
{
	if (does_entity_exist(Global_1360165[iParam0]) && decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		return true;
	}
	if ((((((((((((((((func_976(iParam0, 1) || func_976(iParam0, 128)) || func_976(iParam0, 256)) || func_976(iParam0, 512)) || func_976(iParam0, 1024)) || func_976(iParam0, 2048)) || func_976(iParam0, 4096)) || func_976(iParam0, 65536)) || func_976(iParam0, 16384)) || func_976(iParam0, 262144)) || func_976(iParam0, 524288)) || func_976(iParam0, 1048576)) || func_976(iParam0, 2097152)) || func_976(iParam0, 32768)) || func_976(iParam0, 131072)) || func_976(iParam0, 134217728)) || func_976(iParam0, 1073741824))
	{
		return true;
	}
	return false;
}

int func_448(int iParam0)
{
	if (func_976(iParam0, 1))
	{
		return 1;
	}
	else if (func_976(iParam0, 128))
	{
		return 128;
	}
	else if (func_976(iParam0, 256))
	{
		return 256;
	}
	else if (func_976(iParam0, 512))
	{
		return 512;
	}
	else if (func_976(iParam0, 1024))
	{
		return 1024;
	}
	else if (func_976(iParam0, 2048))
	{
		return 2048;
	}
	else if (func_976(iParam0, 4096))
	{
		return 4096;
	}
	else if (func_976(iParam0, 65536))
	{
		return 65536;
	}
	else if (func_976(iParam0, 16384))
	{
		return 16384;
	}
	else if (func_976(iParam0, 262144))
	{
		return 262144;
	}
	else if (func_976(iParam0, 524288))
	{
		return 524288;
	}
	else if (func_976(iParam0, 1048576))
	{
		return 1048576;
	}
	else if (func_976(iParam0, 2097152))
	{
		return 2097152;
	}
	else if (func_976(iParam0, 32768))
	{
		return 32768;
	}
	else if (func_976(iParam0, 131072))
	{
		return 131072;
	}
	else if (func_976(iParam0, 134217728))
	{
		return 134217728;
	}
	else if (func_976(iParam0, 1073741824))
	{
		return 1073741824;
	}
	return 0;
}

void func_449(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_977(iParam0);
				func_978(iParam0, 0);
				break;
		}
		func_979(iParam0, iParam1);
		if (func_980(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_981(Global_1360165[iParam0], iVar0))
				{
					_0xa2f8b3b5fedfc100(Global_1360165[iParam0], iVar0);
				}
				_set_ped_body_component(Global_1360165[iParam0], _0x30569f348d126a5a(Global_1360165[iParam0]));
				_update_ped_variation(Global_1360165[iParam0], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_977(iParam0);
				func_978(iParam0, 1);
				break;
		}
		func_982(iParam0, iParam1);
		func_983(iParam0, Global_1360165[iParam0], 1);
	}
}

int func_450(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_451(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_452(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_453(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return;
	}
	iVar2 = func_450(iVar0);
	func_856(uLocal_7624[iVar1], iVar2);
}

void func_454(int iParam0, bool bParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	set_vehicle_doors_locked(*iParam0, 1);
	set_vehicle_is_considered_by_player(*iParam0, true);
	_0xba8818212633500a(*iParam0, 0, 0);
	set_can_climb_on_entity(*iParam0, true);
	_0x6b53f4b811e583d2(*iParam0, 1);
	_set_boat_frozen_when_anchored(*iParam0, 1, 1);
	if (bParam1)
	{
		set_entity_can_be_damaged(*iParam0, true);
		_0x9e8711c81aa17876(*iParam0, 1);
		if (get_vehicle_body_health(*iParam0) > 500f)
		{
			set_vehicle_body_health(*iParam0, 500f);
		}
	}
}

void func_455(int* iParam0)
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
	set_vehicle_as_no_longer_needed(iParam0);
}

void func_456(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return;
	}
	if (*uParam0 == Global_35)
	{
		if (_0x2009f8ab7a5e9d6d(get_player_index()))
		{
			_0x12e09e278c6c29b7(get_player_index());
		}
	}
	if (!does_entity_exist(iVar299))
	{
		return;
	}
	if (*uParam0 == Global_35)
	{
		if (_0xe24c64d9aded2ef5(get_player_index(), iVar299))
		{
			_0x0c6b89876262a99d(get_player_index(), iVar299);
		}
	}
	else if (is_ped_group_member(*uParam0, Local_302.f_20, 0))
	{
		func_457(*uParam0);
	}
}

void func_457(int iParam0)
{
	if ((does_entity_exist(iParam0) && !is_entity_dead(iParam0)) && is_ped_in_group(iParam0))
	{
		remove_ped_from_group(iParam0);
	}
}

void func_458(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (iParam1 == 1)
	{
		if (bParam3)
		{
			if (_0x19c7567d2f2287d6(*uParam0, 16))
			{
				uParam0->f_3 = 1;
			}
		}
		if (bParam4)
		{
			_0xc1799fafd2fdf52b(*uParam0, 0, 0, 0);
			uParam0->f_4 = 1;
		}
		uParam0->f_1 = func_984(*uParam0, bParam2, bParam5);
	}
	else
	{
		if (uParam0->f_3)
		{
			_0x2c87c3e1c7b96ee2(*uParam0);
		}
		if (uParam0->f_4)
		{
			_0xd17672447692478e(*uParam0, 0);
		}
		func_985(&(uParam0->f_1), *uParam0, 0);
	}
}

void func_459(var uParam0)
{
	if (does_entity_exist(uParam0->f_1))
	{
		if (is_entity_a_mission_entity(uParam0->f_1))
		{
			if (uParam0->f_7)
			{
				delete_object(&(uParam0->f_1));
			}
		}
		uParam0->f_1 = 0;
	}
	if (*uParam0 != 0)
	{
		if (_0x1ff441d7954f8709(*uParam0))
		{
			_0xd2b9c78537ed5759(*uParam0);
		}
	}
}

void func_460()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_986(Local_5441[iVar0]);
		iVar0++;
	}
	func_987(&(Local_14.f_121), 0);
	func_987(&(Local_14.f_127), 0);
}

void func_461()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_986(Local_5055[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_986(Local_3359[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_986(Local_3976[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_986(Local_2433[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_986(Local_3127[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_986(Local_5982[iVar0]);
		iVar0++;
	}
	func_987(&(Local_14.f_3), 0);
	func_987(&(Local_14.f_49), 0);
	func_987(&(Local_14.f_11), 0);
	func_987(&(Local_14.f_37), 0);
	func_987(&(Local_14.f_78), 0);
}

void func_462()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_986(Local_351[iVar0]);
		iVar0++;
	}
	func_987(&(Local_14.f_84), 0);
	func_987(&(Local_14.f_98), 0);
	func_987(&(Local_14.f_112), 0);
}

void func_463()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_986(Local_1199[iVar0]);
		iVar0++;
	}
	func_987(&(Local_14.f_60), 0);
	func_987(&(Local_14.f_133), 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_986(Local_2355[iVar0]);
		iVar0++;
	}
	func_987(&(Local_14.f_158), 0);
	func_987(&(Local_14.f_162), 0);
}

void func_464()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_986(Local_5673[iVar0]);
		iVar0++;
	}
	func_987(&(Local_14.f_147), 0);
}

void func_465(bool bParam0)
{
	if (!does_entity_exist(iVar299))
	{
		return;
	}
	if (bParam0)
	{
		if (func_988(2097152))
		{
			return;
		}
		_set_ped_body_component(iVar299, 1928233019);
		func_398(2097152);
	}
	else
	{
		if (!func_988(2097152))
		{
			return;
		}
		_0xa2f8b3b5fedfc100(iVar299, 1928233019);
		func_989(2097152);
	}
	_update_ped_variation(iVar299, false, true, true, true, false);
}

void func_466(int iParam0)
{
	if (!func_525(iParam0))
	{
		return;
	}
	if (!func_990(iParam0, 0))
	{
	}
	func_991(iParam0);
	Global_1359489->f_15 = func_992(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_993();
	func_994(iParam0, 32, 1);
	if (func_995(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_77();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

void func_467(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_468(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_996(iParam1))
	{
		return;
	}
	iVar0 = func_997(iParam1);
	if (func_998(iParam1))
	{
		if (!func_999(iParam1))
		{
			return;
		}
	}
	func_994(iParam1, 39, 1);
	func_1000(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1000(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1000(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1001(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1002(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_469(int iParam0, bool bParam1, int iParam2)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (func_1003(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		iVar0 = (*Global_1888801)[iParam0]->f_5;
	}
	else
	{
		iVar0 = func_1004(iParam0);
	}
	bVar1 = func_260(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1005(iParam0);
		if (iParam2 > iVar2 || !func_707(func_1006(iParam0)))
		{
			func_1007(iParam0, func_294());
			func_1008(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_296(iParam0, 33554432);
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
		func_297(iParam0, 33554432);
		func_1007(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_1009(iParam0);
}

int func_470(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return 0;
	}
	if (!func_1012(func_1011(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_1013(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_1013(iParam0));
	return 1;
}

void func_471()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	_0x2f9ac754fe179d58(func_1014());
}

void func_472(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

bool func_473(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_474(int iParam0, int iParam1)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_478(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_605(iParam0, 1399091007))
	{
		func_1015(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_475(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_473(iParam0, 0))
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
	if (!func_1016())
	{
		func_1017(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1018(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1018(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_606(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_478(iParam0);
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
	else if (!func_1019(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1020(_create_var_string(10, &cVar2, _create_var_string(0, func_651(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_605(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_651(iParam0));
	}
	func_711(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_476(int iParam0)
{
	if (!func_473(iParam0, 0))
	{
		return Var0;
	}
	if (func_605(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_605(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_605(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_605(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

int func_477(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_478(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_474(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1021(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1022(bParam2), iParam0, 0);
	return iVar2;
}

int func_478(int iParam0)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_479(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1023(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1025(&Var0, func_1024(0));
	}
	if (!func_1026(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1027(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1028(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1029(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_480(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_692(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1030(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1031(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1028(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_481(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1022(bParam0));
}

void func_482(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_605(iParam0, 606799272))
		{
			func_1032(iParam0, iParam1);
		}
		if (func_605(iParam0, -1112814642) && func_605(iParam0, -1697809989))
		{
			func_632(iParam0, iParam1, 1, 0);
		}
	}
}

void func_483(int iParam0)
{
	func_1033(iParam0);
}

void func_484(int iParam0, int iParam1)
{
	if (func_1034(iParam1))
	{
		_0x4eddd9e9ca5af985(iParam0);
	}
}

bool func_485(int iParam0)
{
	return func_1035(iParam0, 2);
}

int func_486(int iParam0)
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

int func_487(int iParam0)
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

int func_488(int iParam0)
{
	return iParam0 & 31;
}

bool func_489()
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

int func_490(int iParam0)
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

int func_491(int iParam0)
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

void func_492(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_493()
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

int func_494(int iParam0)
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

void func_495(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_496(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1036(iParam0);
	}
	else
	{
		func_1037(iParam0, iParam1);
	}
	func_1038();
}

bool func_497(int iParam0)
{
	iVar0 = func_1039(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_498(int iParam0)
{
	if (!func_198(iParam0))
	{
		return false;
	}
	switch (func_203(iParam0))
	{
		case 1:
			switch (func_281(iParam0))
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
			switch (func_281(iParam0))
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

void func_499(int iParam0)
{
	iVar2 = func_1022(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_609(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1041(func_1040(iParam0), 6);
}

void func_500(int iParam0)
{
	iVar2 = func_1022(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_609(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1042(func_1040(iParam0), 6);
}

int func_501(int iParam0)
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

int func_502(int iParam0)
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
	func_1043(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_503(int iParam0)
{
	return iParam0 != 0;
}

bool func_504(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_505(int iParam0, var uParam1)
{
	if (!func_504(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1044(iParam0, *uParam1, 0);
	func_1045(uParam1);
	Global_1935183->f_24 = 1;
}

void func_506(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_507(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_560() - fParam1);
	func_1046(iParam0, 1);
	func_1047(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_508(int iParam0)
{
	return func_227(*iParam0, 2);
}

int func_509()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_510(bool bParam0)
{
	if (func_1048())
	{
		Global_1357509 = 1;
	}
	if (func_1049(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_511(int iParam0, int iParam1)
{
	Var0 = { func_1050(iParam0, iParam1) };
	Var0.f_3 = func_1051(iParam0, iParam1);
	return Var0;
}

int func_512(int iParam0)
{
	if (func_203(iParam0) == 1)
	{
		return func_281(iParam0);
	}
	return -1;
}

int func_513(int iParam0)
{
	if (func_203(iParam0) == 8)
	{
		return func_281(iParam0);
	}
	return -1;
}

char[] func_514(int iParam0)
{
	if (!func_282(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_515(int iParam0, bool bParam1)
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
		func_1052(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_294();
	}
}

void func_516(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_381(vParam1, 1);
}

bool func_517(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_518(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_519(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_520(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_521(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_522(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_523()
{
	return Global_1109400->f_245;
}

bool func_524(var uParam0, int iParam1)
{
	return func_402(uParam0->f_64, iParam1);
}

bool func_525(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_526(int iParam0)
{
	return func_714(iParam0, 16, 1);
}

void func_527(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_819(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1053(uParam0, get_object_index_from_entity_index(iParam1)))
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

void func_528(int iParam0)
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

void func_529(int iParam0)
{
	func_1054(iParam0, 8, 0);
}

void func_530(int iParam0, bool bParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1055(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1054(iParam0, 1, 0);
		}
	}
	func_1054(iParam0, 16, bParam1);
}

void func_531(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_525(iParam0))
	{
		return;
	}
	if (func_526(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1001(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_530(iParam0, 0);
	func_1054(iParam0, 4, 0);
	func_529(iParam0);
	func_1056(iParam0);
	func_994(iParam0, 37, 1);
	bVar0 = func_995(Global_1360165[iParam0], 0);
	iVar1 = func_1057(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1058(iParam0, 64, 1))
	{
		func_994(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_994(iParam0, 33, 1);
		func_994(iParam0, 34, 1);
		func_1059(iParam0, 1056964608, -1, 1061158912);
		func_1060(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1001(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1001(iParam0, 35, 1);
			if (bParam8)
			{
				func_1001(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1061(iParam0, 0);
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
		func_994(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1001(iParam0, 33, 1);
		func_1060(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_563(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1001(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1062(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1058(iParam0, 45, 1))
	{
		func_994(iParam0, 45, 1);
	}
	func_1063(iParam0, 16, 1);
	func_994(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_995(func_997(iParam0), 0))
		{
			func_468(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_532(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_271(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_539(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_539(iParam0);
	}
}

bool func_533(int iParam0)
{
	iParam0 = func_275(iParam0);
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

void func_534(int iParam0)
{
	iParam0 = func_275(iParam0);
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

void func_535(int iParam0)
{
	iParam0 = func_275(iParam0);
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

bool func_536(int iParam0)
{
	if (!func_1064(iParam0))
	{
		return false;
	}
	if (!func_340())
	{
		return true;
	}
	return false;
}

void func_537(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_540(iParam0))
	{
		return;
	}
	iVar0 = func_223(iParam0);
	func_1065(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_536(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1066(iParam0, 0);
	func_539(iParam0);
}

bool func_538(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_270(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_539(int iParam0)
{
	iParam0 = func_275(iParam0);
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

bool func_540(int iParam0)
{
	iParam0 = func_275(iParam0);
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

void func_541(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_223(iParam0);
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
	if (func_1067(iParam0, 64))
	{
		func_534(iParam0);
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
	bVar3 = func_607(42);
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
				func_1068(&((*Global_1900383)[iParam0]->f_27));
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
		func_534(iParam0);
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
		if (func_1069(1) < 1)
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
		func_1070(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1067(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1071(iParam0);
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
	fVar15 = func_1072(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1073(iParam0))
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
		func_1074((*Global_1900383)[iParam0]->f_26);
		func_1075((*Global_1900383)[iParam0]->f_26);
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
	if (func_896(iVar0) && !bVar9)
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
	iVar21 = func_1069(iParam0);
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

int func_542(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_543(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_544(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_545(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_546(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_547(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_540(iParam0))
	{
		return false;
	}
	iVar0 = func_223(iParam0);
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

void func_548(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_540(iParam0))
	{
		return;
	}
	iVar0 = func_223(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_549(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_711(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_550(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1076())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_711(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1077(iVar0);
			func_1078(iVar0, 0, 0);
		}
		func_711(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_551(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return func_260(iParam0, 67108864);
}

void func_552(int iParam0)
{
	StringCopy(&cVar0, func_1079(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1080(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_553(int iParam0)
{
	StringCopy(&cVar0, func_1079(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1080(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_554(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_555(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_556(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_557(int iParam0)
{
	if (!func_520(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_558(int iParam0)
{
	if (func_520(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_559(int iParam0)
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

float func_560()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_561(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1081(iParam0) == 1 && bParam7)
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

int func_562(int iParam0)
{
	if (!func_996(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_563(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

bool func_564(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1082(iParam0);
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

int func_565(int iParam0, bool bParam1, bool bParam2)
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

int func_566(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_567(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_568()
{
	return Global_40.f_11095.f_35;
}

void func_569(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1083(iParam0, 0);
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
		func_570(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_570(int iParam0)
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
			func_1083(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1084(1);
	}
}

bool func_571(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_572()
{
	iVar0 = func_1085((*Global_1347702)[9]->f_15);
	iVar1 = func_1085((*Global_1835011)[69]->f_1);
	if (func_1086(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_573(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	return func_336((*Global_1835011)[iParam0]->f_1, 1);
}

int func_574(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1087(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1088(iVar6);
	}
	return iVar5;
}

int func_575(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1089(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_576(int iParam0, bool bParam1)
{
	func_1090(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_577(int iParam0)
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

void func_578(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_576(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_579(2, *uParam0);
		}
		else
		{
			func_580(2, *uParam0);
		}
	}
	func_1091(uParam0);
}

void func_579(int iParam0, int iParam1)
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

void func_580(int iParam0, int iParam1)
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

void func_581(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1092(iParam0, iParam1, bParam2);
}

int func_582(int iParam0)
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

int func_583(int iParam0)
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

void func_584(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1093();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1094(iParam0);
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
	if (func_607(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1095())
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
	Global_40.f_11095.f_35 = func_318(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1093();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1096(iVar1);
		func_1098(func_1097(), 0, 4000);
		func_1099(Global_40.f_11095.f_35);
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
		func_1100(0);
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
				if (iParam0 > func_583(14))
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
					sParam4 = func_1101(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_711(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_711(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_583(4))
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
					sParam4 = func_1101(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_711(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_711(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_371(10, 1);
	}
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_586(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_587(int iParam0)
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

bool func_588(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1102(iParam0) && func_1103(iParam0))
		{
			func_1104(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_589(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1105(iParam0, iParam1);
	Var0 = { func_692(iParam0, 0, 1) };
	iVar5 = func_1106(iParam0, &Var0, 0, 0);
	iVar6 = func_1107(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_605(iParam0, -2051813666))
		{
			func_334(583, 1);
		}
		else
		{
			func_334(582, 0);
		}
	}
	if (func_1108(iParam0, &Var0, *iParam1, 0, 0))
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

void func_590(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_663(iParam0, -949239683))
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

bool func_591(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_592(iParam0) != 0;
}

int func_592(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1109())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1110(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_593(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_594(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1109())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_593(iVar0))
		{
			if (func_356(func_1110(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_595(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1111(48);
	func_376(0, -1);
}

bool func_596(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_336((*Global_1347702)[iParam0]->f_15, 1);
}

int func_597(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_598(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_599(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_336((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_600(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_282(iParam0))
	{
		return false;
	}
	return func_199((*Global_1347702)[iParam0]->f_15);
}

int func_601()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_356(func_1112(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_406() && (func_600(38) || func_596(38)))
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
			if (func_406() && (func_600(39) || func_596(39)))
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
			iVar9 = func_1113(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_406() && (func_600(41) || func_596(41)))
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
			if (func_406() && (func_600(49) || func_596(49)))
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
			iVar9 = func_1113(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1114(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1115(iParam0, iVar13, iVar14))
	{
	}
	if (func_1116(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1117(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1118(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1119(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1120(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_603(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_604(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_406() && (func_600(38) || func_596(38)))
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
			if (func_406() && (func_600(39) || func_596(39)))
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
			if (func_406() && (func_600(49) || func_596(49)))
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
		if (func_406() && (func_600(38) || func_596(38)))
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
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_718(_create_var_string(2, sVar0), _create_var_string(2, func_1122(func_598(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_406() && (func_600(39) || func_596(39)))
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
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_406() && (func_600(49) || func_596(49)))
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
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1121(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_605(int iParam0, int iParam1)
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

bool func_606(int iParam0, int iParam1)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_607(int iParam0)
{
	if (!func_1123(iParam0))
	{
		return false;
	}
	return func_1124(iParam0);
}

void func_608(int iParam0)
{
	if (!func_1123(iParam0))
	{
		return;
	}
	func_1125(iParam0);
	func_1126(iParam0);
}

int func_609(int iParam0)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_610(int iParam0, bool bParam1)
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
	if (func_473(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1127(iVar0) || func_122(iVar0))
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

int func_611(int iParam0, bool bParam1)
{
	if (!func_473(iParam0, 0))
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

void func_612(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_695(iParam0))
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

bool func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_692(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1128((386 + iVar28), 1);
			if (func_1129(iParam0, &Var0, iVar5, 0))
			{
				if (func_1130(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1031(iParam0, Var0, iVar5, 0) };
					func_1028(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_481(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_614(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1131(iParam0, iParam1);
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

bool func_614(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_616(iParam0))
	{
		return false;
	}
	if (!func_481(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_615(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_611(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_612(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1132(iVar0);
			}
		}
		if (!func_1108(iParam0, &uVar1, 1, 0, 0))
		{
			func_1104(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1133(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_613(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_613(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_613(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1095())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1134(iVar0))
				{
					func_613(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_613(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1135(Global_35, 2, 0, 1);
				if ((((func_695(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_607(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_695(iVar7) && func_607(24))
				{
					if (!func_613(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_613(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_613(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_334(480, 1);
	}
	return true;
}

bool func_616(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_617(int iParam0, int iParam1, int iParam2)
{
	if (!func_616(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_695(iVar4))
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
	if (func_356(611073244, 1, 0) && iParam2 == -897553835)
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
		func_652(func_1136(iParam0), func_651(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_336((*Global_1835011)[14]->f_1, 1))
			{
				func_334(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_481(0))
	{
		if (func_614(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_657(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_618(int iParam0)
{
	if ((iParam0 == -615217896 && !func_347()) || iParam0 != -615217896)
	{
		if (func_1137(Global_35, iParam0, &uVar0))
		{
			func_636(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_642();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_642();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_642();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_640();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_638();
			break;
	}
}

void func_619(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_638();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_639();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_640();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_641();
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
			func_642();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1138();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1139();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_620(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_621(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_622(int iParam0)
{
	bVar0 = func_605(iParam0, -2017733358);
	if (func_1140() < 3)
	{
		if (bVar0)
		{
			if (func_1142(func_1141(iParam0), iParam0))
			{
				func_652(79, func_651(func_1141(iParam0)), 1);
			}
			else
			{
				func_652(78, func_651(func_1141(iParam0)), 1);
			}
		}
		else
		{
			func_652(80, func_651(func_1143(iParam0)), 1);
		}
	}
}

bool func_623()
{
	if (((((func_1144(839908568, 400) || func_1144(-1134030454, 400)) || func_1144(623353496, 400)) || func_1144(-344413337, 400)) || func_1144(-1664948962, 400)) || func_1144(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_624(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_729(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_549(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_550(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_625(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_602(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_604(51, 0, 0, 0, 0, -1, 0);
			func_1145(8192);
			break;
		case 581047644:
			func_602(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_604(51, 0, 0, 0, 0, -1, 0);
			func_1145(524288);
			break;
		case -644199619:
			func_602(39, 0, 0, 0, 0, 0, 1, 0);
			func_604(39, 0, 0, 0, 0, -1, 0);
			func_1146(16);
			break;
		case 684296857:
			func_602(41, 0, 0, 0, 0, 0, 1, 0);
			func_604(41, 0, 0, 0, 0, -1, 0);
			func_1147(8);
			break;
		case 466137807:
			func_602(49, 0, 0, 0, 0, 0, 1, 0);
			func_604(49, 0, 0, 0, 0, -1, 0);
			func_1148(16);
			break;
		case -1087522507:
			func_602(43, 0, 0, -1791518714, func_1149(1), 0, -1, 0);
			func_1150(1);
			break;
		case -405829000:
			func_602(43, 0, 0, -2087881550, func_1149(2), 0, -1, 0);
			func_1150(2);
			break;
		case 378660860:
			func_602(43, 0, 0, 1908068621, func_1149(4), 0, -1, 0);
			func_1150(4);
			break;
		case 1566111097:
			func_602(43, 0, 0, 1611247019, func_1149(8), 0, -1, 0);
			func_1150(8);
			break;
		case 1276007140:
			func_602(43, 0, 0, 1319635688, func_1149(16), 0, -1, 0);
			func_1150(16);
			break;
	}
}

void func_626(int iParam0)
{
	if (func_1151() == 1)
	{
		if (func_596(39))
		{
			func_334(342, 0);
		}
		else
		{
			func_334(343, 0);
			func_1146(1);
		}
	}
	if (func_1151() >= 30)
	{
		func_334(344, 0);
	}
	func_602(39, 0, 0, 0, 0, 0, -1, 0);
	func_604(39, 0, 0, func_1151(), 30, 1, 0);
}

void func_627(int iParam0)
{
	if (func_1152() == 1)
	{
		if (func_596(49))
		{
			func_334(409, 0);
		}
		else
		{
			func_334(410, 0);
			func_1148(1);
		}
	}
	if (func_1152() >= 10)
	{
		func_334(411, 0);
	}
	func_602(49, 0, 0, 0, 0, 0, -1, 0);
	func_604(49, 0, 0, func_1152(), 10, 1, 0);
}

void func_628(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_334(437, 0);
			func_334(440, 0);
			func_1153(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_602(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_604(51, 0, 0, sVar0, func_1113(-949689219, 20), 1, 0);
			func_1145(1);
			func_928(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1153(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_602(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_604(51, 0, 0, sVar0, func_1113(-1248968496, 20), 1, 0);
			func_1145(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1153(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_602(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_604(51, 0, 0, sVar0, func_1113(1706369307, 20), 1, 0);
			func_1145(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1153(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_602(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_604(51, 0, 0, sVar0, func_1113(1520110311, 20), 1, 0);
			func_1145(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_334(438, 0);
			func_1153(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_602(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_604(51, 0, 0, sVar0, func_1113(-1992824800, 20), 1, 0);
			func_1145(32768);
			break;
		default:
			func_334(439, 0);
			break;
	}
}

void func_629()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_630(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_596(43))
		{
			if (iParam0 == 281887510)
			{
				func_334(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_334(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_334(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_334(400, 0);
			}
		}
		else if (func_605(iParam0, 412399755))
		{
			func_1154(-1791518714);
			if (func_1155() == 0)
			{
				func_376(0, 10);
				iVar1 = func_1156(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1157(iParam0) < func_1158(iParam0))
					{
						func_602(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_604(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_596(44))
		{
			if (iParam0 == -222563712)
			{
				func_334(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_334(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_334(401, 0);
			}
		}
		else if (func_605(iParam0, 709057512))
		{
			func_1154(-2087881550);
			if (func_1155() == 1)
			{
				func_376(0, 10);
				iVar1 = func_1156(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1157(iParam0) < func_1158(iParam0))
					{
						func_602(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_604(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_596(45))
		{
			if (iParam0 == 2116770557)
			{
				func_334(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_334(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_334(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_334(398, 0);
			}
		}
		else if (func_605(iParam0, -1478961327))
		{
			func_1154(1908068621);
			if (func_1155() == 2)
			{
				func_376(0, 10);
				iVar1 = func_1156(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1159(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1160(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1111(48);
					}
					if (func_1157(iParam0) < func_1158(iParam0))
					{
						func_602(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_604(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1157(iParam0) < func_1158(iParam0))
					{
						func_602(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_604(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_596(46))
		{
			if (iParam0 == 2085530337)
			{
				func_334(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_334(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_334(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_334(406, 0);
			}
		}
		else if (func_605(iParam0, -1238404098))
		{
			func_1154(1611247019);
			if (func_1155() == 3)
			{
				func_376(0, 10);
				iVar1 = func_1156(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1157(iParam0) < func_1158(iParam0))
					{
						func_602(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_604(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_596(47))
		{
			if (iParam0 == -1521783510)
			{
				func_334(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_334(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_334(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_334(403, 0);
			}
		}
		else if (func_605(iParam0, 1160548794))
		{
			func_1154(1319635688);
			if (func_1155() == 4)
			{
				func_376(0, 10);
				iVar1 = func_1156(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1157(iParam0) < func_1158(iParam0))
					{
						func_602(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_604(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_631(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1159(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1160(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1111(48);
		}
	}
}

void func_632(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_356(func_1161(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1162(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1163(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_633(int iParam0, int iParam1, int iParam2)
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
				func_624(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_624(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_624(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_624(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_624(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_624(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_624(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_624(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_624(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_624(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_624(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_624(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_624(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1164())
			{
				func_624(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_624(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_624(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_624(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_624(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_624(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_624(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_624(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_624(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_624(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_624(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_624(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_624(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_634(int iParam0)
{
	if (func_596(41))
	{
		func_334(363, 0);
	}
	else
	{
		func_334(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1165(-1865241121);
			func_1166(-642026005);
			func_1167(-642026005);
			func_376(0, 10);
			break;
		case -2108314374:
			func_1165(2117142684);
			func_1166(-940584364);
			func_1167(-940584364);
			func_376(0, 10);
			break;
		case -1193798153:
			func_1165(-1409326024);
			func_1166(1972645282);
			func_1167(1972645282);
			func_376(0, 10);
			break;
		case -787702678:
			func_1165(-641744968);
			func_1166(1667205433);
			func_1167(1667205433);
			func_376(0, 10);
			break;
		case -804542901:
			func_1165(-946988203);
			func_1166(1362715885);
			func_1167(1362715885);
			func_376(0, 10);
			break;
		case -1696275132:
			func_1165(-646136018);
			func_1166(1053540370);
			func_1167(1053540370);
			func_376(0, 10);
			break;
		case -161595323:
			func_1165(-955835837);
			func_1166(-1100103852);
			func_1167(-1100103852);
			func_376(0, 10);
			break;
		case -1114363619:
			func_1165(-179276075);
			func_1166(-1409869209);
			func_1167(-1409869209);
			func_376(0, 10);
			break;
		case -368407134:
			func_1165(-492711560);
			func_1166(-1760235357);
			func_1167(-1760235357);
			func_376(0, 10);
			break;
		case 1997759228:
			func_1165(1764383959);
			func_1166(-138366827);
			func_1167(-138366827);
			func_376(0, 10);
			break;
		case 1265573293:
			func_1165(317501533);
			func_1166(-1261163843);
			func_1167(-1261163843);
			func_376(0, 10);
			break;
		case -1030441283:
			func_1165(817753087);
			func_1166(-963523016);
			func_1167(-963523016);
			func_376(0, 10);
			break;
		case -1490884871:
			func_1165(576606016);
			func_1166(560825326);
			func_1167(560825326);
			func_376(0, 10);
			break;
		case -395458616:
			func_1165(814934957);
			func_1166(858269539);
			func_1167(858269539);
			break;
	}
}

void func_635(int iParam0, int iParam1)
{
	func_1015(iParam0, iParam1, &uVar0);
}

int func_636(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_692(iParam1, 1, 0) };
		iParam3 = func_693(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1168(iParam1, iParam2, func_680(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1169(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_680(iParam3, 1)])
			{
				func_691(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1170(32768) && iParam1 != &Global_1946804->f_57[func_680(iParam3, 1)])
			{
				func_1171();
				func_691(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_691(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1172(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_691(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1173(0);
			func_1174(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_691(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_637(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1135(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1135(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1175("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1027(&Var3, iVar2, iVar0, iVar1))
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
						func_1029(iVar0);
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

void func_638()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_639()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_640()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_641()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_642()
{
	func_1176();
	func_1177();
	func_1178();
}

void func_643(int iParam0, int iParam1, bool bParam2)
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

void func_644(int iParam0, bool bParam1)
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
	func_1121(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_645(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_646(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_647(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_648(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_649(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_650(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_651(int iParam0)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_652(int iParam0, int iParam1, bool bParam2)
{
	func_687(iParam0, &iVar0, &iVar1);
	if (!func_688(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1179(iParam0, 1024))
	{
		return;
	}
	func_689(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_653(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_687(iParam0, &iVar0, &iVar1);
	if (!func_688(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1179(iParam0, 1024))
	{
		return;
	}
	func_689(iVar0, iVar1);
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

int func_654()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1109())
	{
		return func_655();
	}
	iVar4 = (func_1109() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1109())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1180(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1110(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_655()
{
	iVar0 = get_random_int_in_range(0, func_1109());
	return func_1110(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_656(int iParam0)
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

bool func_657(int iParam0, int iParam1, int iParam2)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_692(iParam0, 0, 1) };
	Var5 = { func_1031(iParam0, Var0, Var0.f_4, 0) };
	return func_1181(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_658(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_609(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1182(81053684, 0) <= 0)
			{
				func_691(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_691(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1183(iParam0);
			if (func_1184(iVar0))
			{
				func_1185(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_691(30, iParam0, 0, 0, 0);
			}
			if (func_682() == -2125499975 || func_682() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_691(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_682() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_691(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1186(-525676072, 0))
			{
				if (func_1187(-525676072, &iVar1))
				{
					func_691(33, iVar1, 0, 0, 0);
				}
			}
			func_691(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1188(99217379))
		{
			func_636(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_608(24);
		if (func_637(&iVar2, 0))
		{
			func_613(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_659(int iParam0)
{
	if (func_605(iParam0, 943695443))
	{
		func_1189(0, iParam0);
	}
	else if (func_605(iParam0, -2096528786))
	{
		func_1189(1, iParam0);
	}
	else if (func_605(iParam0, -1094167013))
	{
		func_1189(2, iParam0);
	}
	else if (func_605(iParam0, 1936654645))
	{
		func_1189(3, iParam0);
	}
	else if (func_605(iParam0, 1306489306))
	{
		func_1189(4, iParam0);
	}
	else if (func_605(iParam0, 435762317))
	{
		func_1189(5, iParam0);
	}
	else if (func_605(iParam0, 1259363210))
	{
		func_1189(6, iParam0);
	}
	else if (func_605(iParam0, 881398259))
	{
		func_1189(7, iParam0);
	}
	else if (func_605(iParam0, -541549214))
	{
		func_1189(8, iParam0);
	}
	else if (func_605(iParam0, 130796156))
	{
		func_1189(-1, iParam0);
	}
}

int func_660(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1190(&Var4, 1356624740);
	return func_1191(iParam0, &Var4, &uVar0, iParam1);
}

void func_661(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_336((*Global_1835011)[4]->f_1, 1))
				{
					func_334(109, 1);
				}
			}
			break;
	}
}

void func_662(int iParam0, char* sParam1)
{
	sVar0 = func_1193(func_1192(0));
	func_711(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1194(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_663(int iParam0, int iParam1)
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

struct<10> func_664(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_665(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_666(int iParam0, int iParam1)
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

bool func_667(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1195(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1195(iParam0, Var2, 1))
				{
					if (func_1196(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1196(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_334(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_205(0, 0, 1))
		{
			func_376(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_668(int iParam0)
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

void func_669(int iParam0)
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
		func_334(iVar0, 0);
	}
}

void func_670()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1197(0);
			_unlock_set_unlocked(-121456797, false);
			func_1198();
		}
		return;
	}
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1199();
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
	func_1197(1);
}

void func_671()
{
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_327(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_672()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1200(0);
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
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1200(1);
}

void func_673()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1201(15000, 0, 0, 0, 1);
			func_1200(0);
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
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_292(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1200(1);
}

void func_674()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_356(1191437462, 1, 0) && !func_199((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_327(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1202(1))
			{
				func_648(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_356(1119149048, 1, 0) && !func_199((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_327(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1202(2))
			{
				func_648(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1202(4))
		{
			func_648(4);
		}
		if (func_1202(0))
		{
			func_1203(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_356(1191437462, 1, 0))
			{
				func_188(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_356(1119149048, 1, 0))
			{
				func_188(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1202(1))
		{
			func_1203(1);
		}
		if (func_1202(2))
		{
			func_1203(2);
		}
		if (func_1202(4))
		{
			func_1203(4);
		}
		if (!func_1202(0))
		{
			func_648(0);
		}
	}
}

void func_675()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1204() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_612(127400949);
		if (func_613(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1204() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1205(-2055673461, Var1, 1423542233);
		func_1205(-202131179, Var1, -1264898804);
		func_1205(2013836545, Var1, 1592019450);
		func_1205(1497476650, Var1, 1117400455);
		func_1205(1063571467, Var1, 1150213537);
		func_1205(2107224237, Var1, 1598825281);
		func_1205(1747981656, Var1, -712527121);
		func_1205(-1371140647, Var1, 454332195);
		func_1205(-19142973, Var1, 256105670);
		func_1205(-2074737817, Var1, -1328061889);
		func_1205(-1114256243, Var1, -782241404);
		func_1205(-1653277288, Var1, 1669853467);
		func_1205(1869398132, Var1, -1559225678);
		func_1205(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_695(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_607(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_607(24) && func_695(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_695(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_607(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_676()
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

bool func_677(int iParam0)
{
	switch (func_609(iParam0))
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

void func_678(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_609(iParam0))
	{
		case -2061583405:
			bVar0 = func_1206(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1206(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1206(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1206(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1206(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1206(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1207();
	}
	if (bParam1)
	{
		func_1208(0, 0);
	}
}

int func_679(int iParam0)
{
	Var0 = { func_692(iParam0, 1, 0) };
	return func_693(Var0.f_4);
}

int func_680(int iParam0, int iParam1)
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

void func_681(int iParam0)
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
		iVar0 = func_680(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1209(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_682()
{
	return Global_1946804->f_1;
}

bool func_683(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1210(iParam6);
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
		func_1212(uParam0, func_1211(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_680(iVar3, 1);
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
							if (func_1213(iVar3) && func_1214(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1215(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_684(int iParam0, int iParam1)
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

int func_685(int iParam0, int iParam1)
{
	vVar0 = { func_684(iParam0, iParam1) };
	return vVar0.x;
}

void func_686(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_687(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_688(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1216(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1217(iParam0))
	{
		return false;
	}
	if (func_1218(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1179(iParam0, 1)) || func_82(32768))
	{
		if (!func_1179(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1219())
	{
		return false;
	}
	return true;
}

void func_689(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_690(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_691(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1220(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1221(Var0);
}

struct<5> func_692(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1222(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_478(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1031(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1024(bParam1) };
			if (bParam2 && func_1223(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1129(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1129(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1130(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1224(bParam1) };
			switch (func_609(iParam0))
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
			if (func_1225(iParam0, -1823706425))
			{
				Var0 = { func_1031(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1225(iParam0, -1483207246))
			{
				Var0 = { func_1031(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1226(Var0, &Var27, bParam1, 0))
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

int func_693(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1227(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_694(int iParam0)
{
	func_1209(Global_1946804->f_1497.f_1[func_680(iParam0, 1)], 2, 6);
	func_1209(Global_1946804->f_1378.f_1[func_680(iParam0, 1)], 2, 6);
}

bool func_695(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_696(int iParam0)
{
	return iParam0 != 0;
}

int func_697(int iParam0)
{
	iVar0 = -1;
	if (!func_696(iParam0))
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

bool func_698(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_699(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1228(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_700(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_701(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_702(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_703(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_704(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_705(int iParam0, int iParam1)
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

void func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1229(iParam0, iParam6);
	func_1230(iParam0, iParam5);
	func_1231(iParam0, iParam4);
	func_1232(iParam0, iParam3);
	func_1233(iParam0, iParam2);
	func_1234(iParam0, iParam1);
}

bool func_707(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_704(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_703(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_702(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_699(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_700(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_701(iParam0);
	if (iVar5 < 1 || iVar5 > func_705(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_708(int iParam0, bool bParam1)
{
	return func_1086(func_294(), iParam0, bParam1);
}

void func_709(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_710(int iParam0, int iParam1)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_474(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1175("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1027(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_695(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1029(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1029(iVar1);
	}
	return false;
}

var func_711(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1235(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_712()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1236(iVar1);
		if (!_unlock_is_visible(func_1237(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_713()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1236(iVar0);
		if (!_unlock_is_visible(func_1237(iVar1)))
		{
			_unlock_set_visible(func_1237(iVar1), true);
		}
		iVar0++;
	}
}

bool func_714(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_996(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_715(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_525(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_716()
{
	return (func_206(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_717(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_473(iVar0, 0))
	{
		return 0;
	}
	if (!func_1238(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1239(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_605(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_692(iVar0, 0, 1) };
	iVar10 = func_1240(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1241(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1242(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_327(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1201(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_718(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_719(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_711(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_720(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_721(bool bParam0, bool bParam1)
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

void func_722(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1076())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1076())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_201(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_281(iParam0);
	if (func_203(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_203(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1243(1, iVar1);
					func_1243(8, iVar1);
					func_1243(7, iVar1);
					break;
				case 12:
					func_1243(6, iVar1);
					break;
				case 53:
					func_1243(3, iVar1);
					func_1243(7, iVar1);
					func_1243(4, iVar1);
					break;
				case 20:
					func_1243(8, iVar1);
					break;
				case 19:
					func_1243(1, iVar1);
					func_1243(2, iVar1);
					break;
				case 24:
					func_1243(3, iVar1);
					func_1243(9, iVar1);
					func_1243(20, iVar1);
					break;
				case 28:
					func_1243(1, iVar1);
					break;
				case 34:
					func_1243(23, iVar1);
					func_1243(2, iVar1);
					func_1243(18, iVar1);
					break;
				case 29:
					func_1243(0, iVar1);
					func_1243(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1243(0, iVar1);
					func_1243(3, iVar1);
					func_1243(2, iVar1);
					func_1243(11, iVar1);
					func_1243(6, iVar1);
					func_1243(25, iVar1);
					func_1243(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1243(5, iVar1);
					break;
				case 63:
					func_1243(1, iVar1);
					func_1243(3, iVar1);
					break;
				case 37:
					func_1243(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_372(0, 10, 11, 2116153146))
			{
				func_1243(7, iVar1);
				func_1243(4, iVar1);
			}
			else if (iParam0 == func_372(0, 7, 11, -379687487))
			{
				func_1243(8, iVar1);
				func_1243(15, iVar1);
			}
			else if (iParam0 == func_372(0, 8, 11, -1386089015))
			{
				func_1243(3, iVar1);
			}
			else if (iParam0 == func_372(0, 11, 11, -1952009645))
			{
				func_1243(6, iVar1);
				func_1243(3, iVar1);
			}
			else if (iParam0 == func_372(0, 12, 11, 2065895756))
			{
				func_1243(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1244()));
	if (!func_1245(629))
	{
		func_334(629, 0);
	}
}

int func_723(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_724(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_725(int iParam0, int iParam1, int iParam2)
{
	if (!func_724(iParam0))
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

int func_726()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_727(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_728(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1246(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_726())
	{
		return -1;
	}
	iVar0 = func_727(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_496(iVar1, 0);
	func_567(iVar1, 0);
	func_1247(iVar1, 0);
	func_1248(iVar1, 0);
	func_1249(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1250(iVar1, iParam4);
	}
	return iVar1;
}

int func_729(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_356(1811977508, 1, 0))
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
			if (func_473(iVar25, 0) && func_605(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_730(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_731(int iParam0)
{
	if (!func_198(iParam0))
	{
		return 0;
	}
	cVar0 = func_374(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_732(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_733(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1251(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1252() == 0 && !func_1253(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1254(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1255();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1256(Global_1310720->f_21))
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
			vVar7 = { func_1257(iVar0, iVar1) };
			bVar11 = func_1258(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_407(vVar7)) && func_1259(iVar0, bParam8, iParam12)) && !func_1260(iVar0)) || bVar11)
			{
				if (func_1261(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_734(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1262(vParam0);
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

void func_735()
{
	disable_script_brain_set(1);
}

void func_736()
{
}

void func_737()
{
	disable_script_brain_set(2);
}

bool func_738(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_739(char* sParam0)
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

void func_740(int iParam0)
{
	if (func_738(iParam0, 1))
	{
		func_1263(1);
	}
}

int func_741()
{
	return -1904156936;
}

bool func_742(int iParam0)
{
	if (!func_198(iParam0))
	{
		return false;
	}
	switch (func_203(iParam0))
	{
		case 1:
			iVar0 = func_281(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_281(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_743()
{
	return 166188472;
}

int func_744()
{
	return 2015838421;
}

int func_745()
{
	return 207908017;
}

var func_746(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_747(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_748(var uParam0)
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

int func_749(var uParam0, int iParam1)
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

char* func_750(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1264(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1265(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1266(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_751(var uParam0, char* sParam1)
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

int func_752(var uParam0)
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

void func_753(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_754(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_755()
{
	return Global_1572864->f_8;
}

void func_756(var uParam0, int iParam1)
{
	func_1267(uParam0, iParam1);
	func_1268(uParam0, iParam1, 26);
}

int func_757(var uParam0)
{
	return 1;
}

int func_758(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return 0;
	}
	if (!func_1269(uParam0))
	{
		return 0;
	}
	func_917(uParam0, 0);
	func_918(uParam0);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	func_1270(uParam0, 1);
	return 1;
}

int func_759(var uParam0)
{
	func_149(uParam0, 60f);
	func_150(uParam0, 80f);
	func_99(uParam0, 33554432);
	func_1271(uParam0, "NormalStart");
	func_1272(uParam0, "NormalStart");
	set_ped_config_flag(Global_35, 170, true);
	func_1273(uParam0);
	return 1;
}

int func_760(var uParam0)
{
	func_1274();
	if (func_1275(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_761(var uParam0)
{
	func_465(1);
	set_ped_config_flag(Global_35, 170, false);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_1276(uParam0, 4);
	return 1;
}

void func_762(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1277(uParam0, iParam1);
	func_1268(uParam0, iParam1, iParam2);
	func_1278(uParam0, &iParam3, iParam1, 0);
	func_1278(uParam0, &iParam4, iParam1, 2);
	func_1278(uParam0, &iParam5, iParam1, 4);
	func_1278(uParam0, &iParam6, iParam1, 5);
	func_1278(uParam0, &iParam7, iParam1, 7);
	func_948(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1279(uParam0, iParam1, cVar0);
	func_1280(uParam0, iParam1, iParam10);
}

bool func_763(var uParam0)
{
	trigger_music_event("NTS3_RESTART_1");
	return uParam0->f_607 == uParam0->f_607;
}

bool func_764(var uParam0)
{
	func_912(uParam0, 26);
	func_917(uParam0, 0);
	func_918(uParam0);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	if (func_8(uParam0, 8))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	func_1270(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_765(var uParam0)
{
	if (!is_entity_dead(Local_302.f_1))
	{
		func_1281(Local_302.f_1, func_232(4, 3), 2, 1073741824);
	}
	if (func_1282(uParam0))
	{
		func_911(0, 0);
	}
	func_1283(&Global_35, &iLocal_252, 1, 1, 1, 0);
	func_1284(uParam0, 0);
	if (!_does_volume_exist(&(iLocal_268[32])))
	{
		iLocal_268[32] = _0x0eb78c2b156635b1(665633627, 439.7228f, 2230.011f, 247.7662f, 0f, 0f, 0f, 2.229988f, 2.259373f, 2.842977f);
	}
	func_1273(uParam0);
	return 1;
}

int func_766(var uParam0)
{
	func_1285();
	if (func_1286(2, Global_36) < 18)
	{
		set_ped_max_move_blend_ratio(iLocal_252, 1.75f);
	}
	return func_1287(uParam0);
}

bool func_767(var uParam0)
{
	func_1284(uParam0, 3);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(var uParam0)
{
	trigger_music_event("NTS3_RESTART_2");
	if (!is_entity_dead(iVar299))
	{
		clear_ped_tasks_immediately(iVar299, false, true);
		func_900(iVar299, func_1288(2, 544), func_1289(2, 544), 2, 1073741824);
		task_stand_still(iVar299, -1);
	}
	if (!is_entity_dead(Local_302.f_1))
	{
		clear_ped_tasks_immediately(Local_302.f_1, false, true);
		func_900(Local_302.f_1, func_1288(2, 544), func_1289(2, 544), 2, 1073741824);
		task_stand_still(Local_302.f_1, -1);
		func_1290(iVar299, Local_302.f_1, 0, -1, 1);
	}
	func_131(get_entity_coords(Global_35, true, false), 100f, 1, 0, 0, 0, 0);
	_0x9851de7aec10b4e1(get_entity_coords(Global_35, true, false), 100f, 1, 0);
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	func_1291(5, 0);
	func_168(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_769(var uParam0)
{
	func_917(uParam0, 0);
	func_918(uParam0);
	func_563(&uLocal_7350);
	func_1270(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_770(var uParam0)
{
	func_99(uParam0, 33554432);
	func_1283(&Global_35, &iLocal_252, 1, 1, 1, 0);
	func_1292(uParam0, 0);
	func_1273(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_771(var uParam0)
{
	func_1285();
	func_1293(uParam0);
	if (func_1294(Global_35, iLocal_252, 0))
	{
		func_59(7);
		if (!func_166(40))
		{
			func_1295(uParam0, 4);
			if (!does_blip_exist(iVar7713))
			{
				iLocal_7716 = func_1296(408396114, func_1288(2, 585), 1);
			}
		}
		else
		{
			func_184(&iLocal_7716);
			func_1297(&(Local_302.f_3), 8);
			func_1295(uParam0, 5);
		}
	}
	else
	{
		func_1298(&(Local_302.f_3), 8);
		func_184(&iLocal_7716);
		func_1299(7);
		func_1295(uParam0, 2);
		_0xc71d07c96946e263(player_id(), iLocal_252);
	}
	if (Local_302.f_10 >= 9)
	{
		_pause_clock_this_frame(true);
	}
	vVar0 = { func_1300(2, 0) };
	bVar3 = false;
	if (func_1301(Global_35, vVar0, 10f, 1, 1) || func_166(117))
	{
		bVar3 = true;
	}
	if (Local_302.f_10 >= 9)
	{
		if (func_1302(Global_35, vVar0, &uLocal_7350, 30f, 20f, 15f, 11f, 1f, 0, 0, 1, 1, 1))
		{
			func_453(117);
		}
	}
	else
	{
		func_1303(Global_35, vVar0, 0, 30f, 20f, 15f, 10f, 1, 1, 1, 0);
	}
	func_912(uParam0, 3);
	if (iVar8027 == 1)
	{
		func_1304(uParam0, 0);
	}
	switch (iVar8027)
	{
		case 0:
			if (Local_302.f_10 >= 7)
			{
				func_1292(uParam0, 1);
			}
			else
			{
				if (Local_302.f_10 >= 5)
				{
					if (!func_166(28))
					{
						if (get_entity_submerged_level(iLocal_252) > 0.5f)
						{
							func_135(uParam0, 5);
							func_453(28);
						}
					}
				}
				Jump @898; //curOff = 445
				if (Local_302.f_10 >= 9)
				{
					func_1292(uParam0, 2);
				}
				else
				{
					if (is_entity_in_angled_area(iVar299, 473.6709f, 1484.607f, 171.3634f, 500.7742f, 1490.39f, 178.8636f, 14.5f, false, true, 0))
					{
						func_1305(11, 0);
					}
					if (is_entity_in_angled_area(Global_35, 473.6709f, 1484.607f, 171.3634f, 500.7742f, 1490.39f, 178.8636f, 14.5f, false, true, 0))
					{
						iVar4 = func_1306(11);
						if (iVar4 == 3)
						{
							if (!func_166(70))
							{
								set_gameplay_coord_hint(371.12f, 1474f, 186.79f, 1100, 3000, 2000, 0);
								func_453(70);
							}
						}
					}
					Jump @898; //curOff = 631
					if (func_1307(21, 0, 5, 0))
					{
						if (!is_ped_on_mount(iVar299))
						{
							func_1308(uParam0);
							func_1309(uParam0);
							func_1310(uParam0, func_35(uParam0), 2);
							func_1292(uParam0, 3);
							func_453(67);
							return 1;
						}
					}
					else
					{
						if (bVar3)
						{
							if (func_1311(Global_35, 501393341) || !is_ped_on_mount(Global_35))
							{
								_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
							}
						}
						if (!is_ped_on_mount(iVar299) && !is_ped_on_mount(Global_35))
						{
							if (func_1312(iVar299, 20f, -1082130432, -1082130432, 25f) || bVar3)
							{
								_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
								func_1292(uParam0, 3);
							}
							else
							{
								Jump @898; //curOff = 830
								bVar5 = true;
								if (!func_166(67))
								{
									_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
									if (_0xa2b1c7ef759a63ce() >= 1f)
									{
										bVar5 = true;
									}
									else
									{
										bVar5 = false;
									}
								}
								if (bVar5)
								{
									if (!func_1313())
									{
										return 1;
									}
								}
							}
							return 0;
						}
					}
				}
			}
			default:
				break;
	}
}

int func_772(var uParam0)
{
	func_563(&uLocal_7350);
	func_456(&Global_35);
	func_1314(2, 0, 1);
	func_1314(3, 0, 1);
	func_1314(4, 0, 1);
	func_1314(5, 0, 1);
	func_1314(6, 0, 1);
	func_1314(7, 0, 1);
	func_1314(8, 0, 1);
	func_1314(9, 0, 1);
	func_1314(10, 0, 1);
	func_1314(11, 0, 1);
	func_1314(76, 0, 1);
	if (!func_166(67))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	func_59(7);
	func_1292(uParam0, 3);
	return 1;
}

bool func_773(var uParam0)
{
	trigger_music_event("NTS3_RESTART_3");
	if (!is_entity_dead(Global_35))
	{
		_remove_ped_from_mount(Global_35, true, false);
		clear_ped_tasks_immediately(Global_35, false, true);
		if (func_120(uParam0, 8388608))
		{
			if (!_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, true, 0, false);
			}
		}
	}
	if (!is_entity_dead(Local_302.f_1))
	{
		clear_ped_tasks_immediately(Local_302.f_1, false, true);
		func_1281(Local_302.f_1, func_232(0, 5), 2, 1073741824);
		task_stand_still(Local_302.f_1, -1);
	}
	if (!is_entity_dead(iVar299))
	{
		clear_ped_tasks_immediately(iVar299, false, true);
		_remove_ped_from_mount(iVar299, true, false);
		func_1281(iVar299, func_232(0, 1), 2, 1073741824);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_774(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		if (!func_166(67))
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	func_918(uParam0);
	func_917(uParam0, 0);
	if (!is_entity_dead(iVar299))
	{
		func_1315(iVar299);
		if (is_ped_in_group(iVar299))
		{
			remove_ped_from_group(iVar299);
		}
		func_1316(uParam0, iVar299, 0);
	}
	if (!func_166(67))
	{
		func_1315(Global_35);
	}
	if (!is_entity_dead(&(Local_5055[0])))
	{
		_give_weapon_to_ped_2(&(Local_5055[0]), -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		func_1317(&(Local_5055[0]), -164645981, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	bVar0 = true;
	if (!func_8(uParam0, 8))
	{
		bVar0 = false;
	}
	func_1283(&Global_35, &iLocal_252, 1, 0, 0, bVar0);
	func_1283(&Local_302, &(Local_302.f_1), 1, 0, 0, 0);
	if (!func_120(uParam0, 4))
	{
		func_1271(uParam0, "multistart");
		func_1318(uParam0, "multistart");
	}
	StringCopy(&cLocal_7630, func_1319(6), 64);
	func_1320(uParam0, &cLocal_7630, -1082130432, 0, 0, -1, -1, 0);
	func_1270(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_775(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return false;
	}
	func_1321(Local_3359[0]);
	if (!func_166(67))
	{
		func_1322(100f, 0, 0, 1);
		func_1323(100f, 0, 0, 1);
		func_1324(100f, 0, 0, 1);
	}
	func_1325(uParam0, 0);
	func_1326(uParam0);
	func_1271(uParam0, "multistart");
	func_140(uParam0, func_33(uParam0), 65536);
	if (!_0x7409669c5ed50144(-1392528840))
	{
		_0x7d654266025e921b(-1392528840);
	}
	func_1327(Local_5055[2], 322.58f, 1512.29f, 189.12f, 0.7f, 0);
	func_1273(uParam0);
	func_929(1, 0);
	func_1328(0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_776(var uParam0)
{
	func_1329(Local_5055[4]);
	func_1329(Local_5055[3]);
	func_1330(uParam0);
	func_931();
	func_1331(uParam0);
	func_1332(uParam0);
	func_1333(uParam0);
	vVar0 = { func_1300(2, 0) };
	func_1302(Global_35, vVar0, &uLocal_7350, 30f, 20f, 15f, 11f, 1f, 0, 0, 1, 1, 1);
	func_1334();
	func_1335(&Local_5441);
	func_1335(&Local_5055);
	func_1336();
	if (does_entity_exist(Local_5055[2]->f_3))
	{
		vVar3 = { get_entity_coords(Local_5055[2]->f_3, true, false) };
		if (vVar3.z < 182.8f)
		{
			delete_object(&(Local_5055[2]->f_3));
		}
	}
	if (((((((((((Local_302.f_11 == 3 || Local_302.f_11 == 2) || Local_302.f_11 == 4) || Local_302.f_11 == 5) || Local_302.f_11 == 6) || Local_302.f_11 == 7) || Local_302.f_11 == 16) || Local_302.f_11 == 17) || Local_302.f_11 == 18) || Local_302.f_11 == 19) || Local_302.f_11 == 20) || Local_302.f_11 == 21)
	{
		_0xe2bb2d6a9fe2ecde(1);
	}
	set_ped_max_move_blend_ratio(Global_35, 1.7f);
	switch (iVar8028)
	{
		case 0:
			if (Local_302.f_11 >= 5)
			{
				func_1325(uParam0, 1);
			}
			else
			{
				Jump @815; //curOff = 444
				if (Local_302.f_11 >= 7)
				{
					func_1325(uParam0, 2);
				}
				else
				{
					Jump @815; //curOff = 466
					if (Local_302.f_11 >= 14)
					{
						func_1325(uParam0, 3);
					}
					else
					{
						Jump @815; //curOff = 489
						if (Local_302.f_11 >= 21)
						{
							func_1325(uParam0, 4);
						}
						else
						{
							Jump @815; //curOff = 512
							if (func_895(Global_35, iVar299, 15f, 1) && func_1301(iVar299, func_926(0, 2), 15f, 1, 1))
							{
								func_184(&iLocal_7716);
								if (!_get_ped_crouch_movement(Global_35))
								{
									_set_ped_crouch_movement(Global_35, true, 0, false);
								}
								if (func_1305(20, 0) == 3)
								{
									func_1325(uParam0, 5);
								}
								else
								{
									Jump @815; //curOff = 608
									if (Local_302.f_11 >= 22)
									{
										func_1271(uParam0, "MultiStart");
										func_1272(uParam0, "MultiStart");
										func_1318(uParam0, "MultiStart");
										if (func_1312(iVar299, 20f, -1082130432, -1082130432, 25f) || func_895(iVar299, Global_35, 7.5f, 1))
										{
											func_1325(uParam0, 7);
											if (!func_166(43))
											{
												func_1325(uParam0, 6);
											}
											else
											{
												Jump @815; //curOff = 730
												_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
												func_1337(0, 1);
												if (_0xa2b1c7ef759a63ce() >= 1f)
												{
													if (!func_166(43))
													{
														return 1;
													}
												}
												func_912(uParam0, 4);
												Jump @815; //curOff = 781
												_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
												if (!func_166(43))
												{
													return 1;
												}
											}
											return 0;
										}
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

int func_777(var uParam0)
{
	func_987(&(Local_14.f_3), 0);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_1325(uParam0, 7);
	return 1;
}

bool func_778(var uParam0)
{
	trigger_music_event("NTS3_RESTART_4");
	func_1283(&Global_35, &iLocal_252, 1, 0, 1, 0);
	func_1283(&Local_302, &(Local_302.f_1), 1, 0, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_779(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	func_1338(uParam0, 524288);
	func_1270(uParam0, 1);
	return func_1339(uParam0);
}

int func_780(var uParam0)
{
	if (func_1282(uParam0))
	{
		if (!func_166(39))
		{
			func_1340(&Global_35, &iLocal_7590, 0, 64, 34);
			_0x2208438012482a1a(Global_35, true, false);
			func_453(39);
			func_228(&uLocal_7785);
			return 0;
		}
		else
		{
			if (!func_26(&uLocal_7785))
			{
				func_228(&uLocal_7785);
			}
			if (func_1341(&uLocal_7785) < 1f)
			{
				return 0;
			}
		}
	}
	if (func_120(uParam0, 4) || func_8(uParam0, 524288))
	{
		func_911(-91.2522f, -10.2041f);
	}
	func_1342(uParam0, 0);
	func_1343();
	func_1344(uParam0, 0);
	func_1273(uParam0);
	func_1345(uParam0, 524288);
	func_1346();
	return 1;
}

int func_781(var uParam0)
{
	return func_1347(uParam0, 0);
}

bool func_782(var uParam0)
{
	if (does_cam_exist(iVar257))
	{
		destroy_cam(iVar257, false);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_783(var uParam0)
{
	trigger_music_event("NTS3_RESTART_4");
	func_1283(&Global_35, &iLocal_252, 1, 0, 1, 0);
	func_1283(&Local_302, &(Local_302.f_1), 1, 0, 1, 0);
	func_986(Local_3359[0]);
	func_986(Local_3359[1]);
	func_986(Local_3359[2]);
	func_986(Local_3359[3]);
	func_986(Local_3359[4]);
	return 1;
}

int func_784(var uParam0)
{
	if (func_120(uParam0, 4) || !func_8(uParam0, 8))
	{
		func_135(uParam0, -1);
		if (!_get_ped_crouch_movement(Global_35))
		{
			_set_ped_crouch_movement(Global_35, true, 0, true);
			_0x2208438012482a1a(Global_35, true, false);
		}
	}
	func_1270(uParam0, 1);
	return func_1339(uParam0);
}

int func_785(var uParam0)
{
	func_1342(uParam0, 1);
	func_1343();
	func_1344(uParam0, 1);
	func_1273(uParam0);
	if (func_1282(uParam0))
	{
		func_1283(&Global_35, &iLocal_252, 1, 0, 1, 0);
	}
	return 1;
}

int func_786(var uParam0)
{
	return func_1347(uParam0, 1);
}

int func_787(var uParam0)
{
	set_ped_config_flag(Global_35, 97, false);
	set_ped_config_flag(iVar299, 97, false);
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	return 1;
}

bool func_788(var uParam0)
{
	iVar0 = 7;
	if (!does_entity_exist(&(Local_3359[iVar0])))
	{
		if (func_1348(iVar0, 1))
		{
			Local_3359[iVar0] = &Local_14.f_49[iVar0];
			Local_3359[iVar0]->f_5 = iVar0;
			set_ped_name_debug(&(Local_3359[iVar0]), "CS Guard");
			_set_entity_coords_and_heading_no_offset(&(Local_3359[iVar0]), 344.8549f, 1470.097f, 178.7422f, 305.8478f, false, true);
			func_1349(&(Local_3359[iVar0]), 1, 0);
		}
	}
	trigger_music_event("NTS3_RESTART_5");
	func_1283(&Global_35, &iLocal_252, 1, 0, 0, 0);
	func_1283(&Local_302, &(Local_302.f_1), 1, 0, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_789(var uParam0)
{
	func_453(64);
	func_1338(uParam0, 8192);
	func_1350();
	func_1270(uParam0, 1);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	func_1351(uParam0, 30);
	return func_1352(uParam0, 0);
}

bool func_790(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return false;
	}
	func_1351(uParam0, 25);
	func_1351(uParam0, 26);
	func_1353();
	if (!func_8(uParam0, 8))
	{
		if (!func_402(iVar7669, 3))
		{
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
	if (!is_entity_dead(iVar323))
	{
		func_1281(iVar323, func_232(3, 2), 2, 1073741824);
	}
	set_ped_config_flag(Global_35, 155, false);
	func_472(&(iLocal_7972[15]));
	func_472(&(iLocal_7972[16]));
	func_472(&(iLocal_7972[17]));
	func_1354(0, 1);
	func_1355(uParam0, 0);
	func_163();
	if (iVar7435 == 0)
	{
		func_1356(1, uParam0);
		func_1356(2, uParam0);
	}
	if (does_entity_exist(iVar7693))
	{
		func_1357(iVar7693, 1, 1);
		delete_object(&iLocal_7696);
	}
	func_1273(uParam0);
	if (does_entity_exist(iVar7692))
	{
		set_entity_visible(iVar7692, true);
	}
	func_1358(19);
	func_1358(22);
	return uParam0->f_607 == uParam0->f_607;
}

int func_791(var uParam0)
{
	return func_1359(uParam0, 0);
}

bool func_792(var uParam0)
{
	if (does_blip_exist(iVar7715))
	{
		remove_blip(&iLocal_7718);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_793(var uParam0)
{
	if (!func_1360())
	{
		return 0;
	}
	func_1353();
	trigger_music_event("NTS3_RESTART_5");
	func_1283(&Global_35, &iLocal_252, 1, 0, 0, 0);
	func_1283(&Local_302, &(Local_302.f_1), 1, 0, 1, 0);
	func_1356(1, uParam0);
	func_1356(7, uParam0);
	func_911(0, 0);
	return 1;
}

int func_794(var uParam0)
{
	func_1270(uParam0, 1);
	return func_1352(uParam0, 1);
}

int func_795(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return 0;
	}
	if (func_120(uParam0, 4) || !func_8(uParam0, 8))
	{
		if (!func_1360())
		{
			return 0;
		}
		func_1361(7, 0);
		func_1362(6, 0);
	}
	func_135(uParam0, 2);
	func_1355(uParam0, 1);
	func_1273(uParam0);
	return 1;
}

int func_796(var uParam0)
{
	func_1363();
	set_entity_can_be_damaged_by_relationship_group(iVar323, false, 1862763509);
	set_entity_can_be_damaged_by_relationship_group(iVar299, false, 1862763509);
	set_ragdoll_blocking_flags(iVar323, 32);
	set_ragdoll_blocking_flags(iVar299, 32);
	if (iVar8033 >= 5)
	{
		func_1364();
	}
	func_1365(&Local_302);
	func_1365(&Local_326);
	return func_1359(uParam0, 1);
}

int func_797(var uParam0)
{
	set_entity_can_be_damaged_by_relationship_group(iVar323, true, 1862763509);
	set_entity_can_be_damaged_by_relationship_group(iVar299, true, 1862763509);
	clear_ragdoll_blocking_flags(iVar323, 32);
	clear_ragdoll_blocking_flags(iVar299, 32);
	set_ped_config_flag(Global_35, 174, false);
	func_1355(uParam0, 7);
	return 1;
}

bool func_798(var uParam0)
{
	if (!func_1364())
	{
		return false;
	}
	trigger_music_event("NTS3_RESTART_6");
	if ((func_995(iVar299, 0) && func_995(iVar323, 0)) && func_995(Local_302.f_1, 0))
	{
		func_1281(Local_302.f_1, func_232(7, 5), 2, 1073741824);
		func_1281(iVar323, func_232(7, 7), 2, 1073741824);
		_set_ped_on_mount(iVar299, Local_302.f_1, -1, true);
		_set_ped_on_mount(iVar323, Local_302.f_1, 0, true);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_799(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return 0;
	}
	func_918(uParam0);
	func_917(uParam0, 0);
	if (func_995(iVar299, 0))
	{
		func_1366(iVar299, 500);
		set_blocking_of_non_temporary_events(iVar299, true);
	}
	if (func_995(iVar323, 0))
	{
		func_1366(iVar323, 500);
		set_blocking_of_non_temporary_events(iVar323, true);
	}
	if (!func_8(uParam0, 8))
	{
		set_gameplay_cam_relative_heading(0f, 1f);
		set_gameplay_cam_relative_pitch(0f, 1f);
	}
	if (func_995(iVar323, 0))
	{
		func_1316(uParam0, iVar323, 0);
		if (is_ped_in_group(iVar323))
		{
			remove_ped_from_group(iVar323);
		}
	}
	if (func_995(iVar299, 0))
	{
		func_1316(uParam0, iVar299, 0);
		if (is_ped_in_group(iVar299))
		{
			remove_ped_from_group(iVar299);
		}
	}
	if (func_995(Global_35, 0))
	{
		func_1354(0, 0);
	}
	if (does_entity_exist(&(Local_14.f_32[1])) && !is_entity_dead(&(Local_14.f_32[1])))
	{
		iLocal_7693 = &Local_14.f_32[1];
		set_vehicle_on_ground_properly(iVar7690, 0f);
		set_vehicle_on_ground_properly(iVar7690, 0f);
		set_entity_coords_no_offset(iVar7690, -6.93399f, 1546.95f, 111.697f, false, true, true);
		set_entity_rotation(iVar7690, -2.31152f, 0.481255f, 68.14f, 2, true);
		freeze_entity_position(iVar7690, true);
		_0x445d7d8ea66e373e(iVar7690, 0, get_entity_coords(iVar7690, true, false), 0f, 0f, 0f, 500f, 1, 0, 0, 0, 0, 0, 0);
	}
	if (does_entity_exist(&(Local_14.f_32[0])) && !is_entity_dead(&(Local_14.f_32[0])))
	{
		iLocal_7694 = &Local_14.f_32[0];
		_0x6b53f4b811e583d2(uVar7691, 1);
		_set_boat_frozen_when_anchored(uVar7691, 1, 1);
		set_vehicle_doors_locked(iVar7690, 3);
	}
	func_563(&uLocal_7350);
	func_1270(uParam0, 1);
	return 1;
}

int func_800(var uParam0)
{
	func_1367(uParam0, 0);
	func_1273(uParam0);
	func_1368();
	return 1;
}

int func_801(var uParam0)
{
	if (func_1364())
	{
		func_912(uParam0, 9);
	}
	func_1369(uParam0);
	func_1370(uParam0);
	func_1371(uParam0);
	iVar0 = func_1372();
	if (func_166(50))
	{
		if (func_1306(52) == 3)
		{
			if (!func_26(&uLocal_7338))
			{
				func_228(&uLocal_7338);
			}
			if (func_1341(&uLocal_7338) >= 4f)
			{
				func_167(50);
			}
		}
	}
	if (func_895(Global_35, iVar7691, 20f, 1))
	{
		if (is_ped_on_mount(Global_35))
		{
			func_1302(Global_35, get_entity_coords(iVar7691, true, false), &uLocal_7350, 30f, 20f, 15f, 12.5f, 0.5f, 0, 0, 1, 1, 1);
		}
		if (func_166(45))
		{
			use_waypoint_recording_as_assisted_movement_route(func_193(3), 0, 1065353216, 1056964608, 1);
			func_167(45);
		}
	}
	switch (iVar8037)
	{
		case 0:
			if (func_895(Global_35, iVar7691, 20f, 1))
			{
				if (iVar0 >= 9 || iVar7602 <= 0)
				{
					if (!func_1373(iVar7691, 45f))
					{
						func_1367(uParam0, 2);
					}
					else
					{
						func_1367(uParam0, 1);
						Jump @861; //curOff = 325
						if (func_895(iVar299, iVar7690, 120f, 1))
						{
							func_1305(71, 0);
						}
						func_1305(50, 0);
						func_1374();
						if (func_1375(17, 60, 88))
						{
							func_1376();
						}
						if (func_1375(60, 115, 89))
						{
							func_1377();
						}
						if (func_1375(115, -1, 90))
						{
							func_1378();
						}
						if (func_1375(180, -1, 91))
						{
							func_1379(2);
						}
						if (func_1375(200, -1, 92))
						{
							func_1380(2);
						}
						set_ped_max_move_blend_ratio(Global_35, 2.5f);
						Jump @861; //curOff = 459
						func_1305(53, 0);
						if (!func_26(&uLocal_7383))
						{
							func_228(&uLocal_7383);
						}
						if (func_1341(&uLocal_7383) >= 30f)
						{
							func_1367(uParam0, 2);
						}
						else if ((iVar0 >= 9 || iVar7602 <= 0) || func_1341(&uLocal_7383) >= 15f)
						{
							if (!func_1373(iVar7691, 45f))
							{
								func_1367(uParam0, 2);
							}
							else
							{
								func_1379(2);
								func_1380(2);
								Jump @861; //curOff = 588
								if (!func_1381(Global_35, iVar7691, 0))
								{
									if (Local_302.f_14 >= 6 || func_166(44))
									{
										func_1305(72, 0);
									}
								}
								if (func_1381(iVar299, iVar7690, 0) && func_1381(iVar323, iVar7690, 0))
								{
									func_169(&(iLocal_268[18]));
									if (func_1381(Global_35, iVar7691, 0))
									{
										if (is_entity_attached(iVar7691))
										{
											detach_entity(iVar7691, false, true);
										}
										vVar1 = { get_entity_coords(iVar7691, true, false) - func_1288(7, 0) };
										vVar1 = { func_1382(vVar1) };
										vVar1 = { vVar1 * Vector(10f, 10f, 10f) };
										apply_force_to_entity(iVar7691, 2, vVar1, 0f, 0f, 0f, 1, true, false, true, true, true);
										func_1383();
										func_1305(55, 0);
										func_1367(uParam0, 3);
									}
									else
									{
										func_1384();
										if (!func_895(iVar7691, iVar7690, 60f, 1))
										{
											func_1385(uParam0, "NTS3_DIST", "", 1, 0);
										}
										func_1379(2);
										func_1380(2);
										Jump @861; //curOff = 848
										return 1;
									}
									return 0;
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

bool func_802(var uParam0)
{
	func_563(&uLocal_7350);
	func_1367(uParam0, 3);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_803(var uParam0)
{
	if (func_995(Global_35, 0))
	{
		func_1386(1681219929);
	}
	trigger_music_event("NTS3_RESTART_7");
	set_gameplay_cam_relative_heading(0f, 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_804(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return false;
	}
	func_918(uParam0);
	func_917(uParam0, 0);
	if (!func_8(uParam0, 8))
	{
		if (!is_entity_dead(Global_35) && !is_entity_dead(&(Local_14.f_32[0])))
		{
			func_1387(&Global_35, Local_14.f_32[0], -1, 1);
		}
		if (does_entity_exist(&(Local_14.f_32[0])))
		{
			iLocal_7694 = &Local_14.f_32[0];
		}
		if (does_entity_exist(&(Local_14.f_32[1])))
		{
			iLocal_7693 = &Local_14.f_32[1];
		}
	}
	if (func_995(Global_35, 0))
	{
		func_1386(1950175060);
	}
	if (!is_entity_dead(iVar299) && !is_entity_dead(iVar7690))
	{
		set_blocking_of_non_temporary_events(iVar299, true);
		if (is_ped_on_mount(iVar299))
		{
			_remove_ped_from_mount(iVar299, true, false);
		}
		if (!is_ped_in_vehicle(iVar299, iVar7690, false))
		{
			set_ped_into_vehicle(iVar299, iVar7690, -1);
		}
	}
	if (_0x2009f8ab7a5e9d6d(player_id()))
	{
		_0x0c6b89876262a99d(player_id(), Local_302.f_1);
	}
	if (!is_entity_dead(iVar323))
	{
		set_blocking_of_non_temporary_events(iVar323, true);
		if (is_ped_on_mount(iVar323))
		{
			_remove_ped_from_mount(iVar323, true, false);
		}
		func_1387(&Local_326, &iLocal_7693, 0, 1);
	}
	if (func_995(iVar323, 0))
	{
		func_1316(uParam0, iVar323, 0);
		if (is_ped_in_group(iVar323))
		{
			remove_ped_from_group(iVar323);
		}
	}
	if (func_995(iVar299, 0))
	{
		func_1316(uParam0, iVar299, 0);
		if (is_ped_in_group(iVar299))
		{
			remove_ped_from_group(iVar299);
		}
	}
	fLocal_7688 = 1f;
	fLocal_7689 = 1f;
	func_1270(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_805(var uParam0)
{
	if (does_entity_exist(iVar7690))
	{
		if (is_entity_attached(iVar7690))
		{
			detach_entity(iVar7690, false, true);
		}
	}
	if (does_entity_exist(iVar7691))
	{
		if (is_entity_attached(iVar7691))
		{
			detach_entity(iVar7691, false, true);
		}
	}
	if (func_995(iVar299, 0))
	{
		set_entity_invincible(iVar299, true);
	}
	if (func_995(iVar323, 0))
	{
		set_entity_invincible(iVar323, true);
	}
	if (does_entity_exist(iVar7691) && func_995(Global_35, 0))
	{
		if (is_ped_in_vehicle(Global_35, iVar7691, false))
		{
			set_vehicle_doors_locked(iVar7691, 4);
		}
	}
	func_1326(uParam0);
	func_1271(uParam0, "multistart");
	func_140(uParam0, func_33(uParam0), 65536);
	func_149(uParam0, 200f);
	func_150(uParam0, 300f);
	set_particle_fx_bullet_impact_scale(1.2f);
	func_1388(uParam0, 0);
	if (Local_302.f_15 != 1)
	{
		func_1389(2, 0);
	}
	func_1273(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_806(var uParam0)
{
	func_1369(uParam0);
	func_1390();
	func_1391();
	func_1392();
	func_1393(uParam0);
	func_1394(uParam0);
	func_1395();
	func_1396(uParam0);
	if (!func_895(iVar7691, iVar7690, 70f, 1))
	{
		func_1385(uParam0, "NTS3_DIST", "", 1, 0);
		return 0;
	}
	func_1397();
	func_1398();
	func_1399();
	func_165(1);
	if (func_1400(&Local_302, 7, 125, 129) && func_1401(&uLocal_7353) > 6000)
	{
		func_1305(78, 0);
	}
	set_player_lockon_range_override(player_id(), (_0x3799efcc3c8cd5e1(Global_35) + 10f));
	switch (iVar8038)
	{
		case 0:
			if (Local_302.f_15 == 3)
			{
				iLocal_7716 = func_1296(408396114, -437.3834f, 1056.578f, 86.6492f, 1);
				func_135(uParam0, 18);
				func_1388(uParam0, 1);
			}
			else
			{
				Jump @381; //curOff = 247
				if (_is_anim_scene_started(&(iLocal_7972[31]), false))
				{
					if (_get_anim_scene_progress(&(iLocal_7972[31])) > 0.85f)
					{
						if (func_1402(uParam0))
						{
							func_1388(uParam0, 2);
							return 1;
						}
					}
					if (func_895(Global_35, iVar7690, 4.5f, 1))
					{
						func_1318(uParam0, "multistart");
						func_1388(uParam0, 2);
						return 1;
					}
				}
				else if (func_1402(uParam0))
				{
					func_1388(uParam0, 2);
					return 1;
				}
				Jump @381; //curOff = 368
				return 1;
			}
			return 0;
			default:
				break;
	}
}

int func_807(var uParam0)
{
	func_184(&iLocal_7716);
	func_1358(31);
	if (func_995(&(Local_1199[9]), 0))
	{
		func_1349(&(Local_1199[9]), 1, 0);
	}
	if (func_995(&(Local_1199[10]), 0))
	{
		func_1349(&(Local_1199[10]), 1, 0);
	}
	func_454(&iLocal_7694, 0);
	func_454(&iLocal_7693, 0);
	func_456(&Global_35);
	func_1403();
	func_1404();
	func_462();
	func_464();
	func_1314(28, 0, 1);
	func_1388(uParam0, 2);
	return 1;
}

bool func_808(var uParam0)
{
	func_900(iVar299, -74.5884f, 1576.592f, 110.4519f, 210.5259f, 2, 1073741824);
	func_900(iVar323, -76.6364f, 1576.958f, 111.0484f, 256.8545f, 2, 1073741824);
	func_900(Global_35, -72.3132f, 1575.811f, 110.2106f, 217.4199f, 2, 1073741824);
	return uParam0->f_607 == uParam0->f_607;
}

int func_809(var uParam0)
{
	func_918(uParam0);
	func_1405();
	func_1270(uParam0, 1);
	func_1406(uParam0, &(iLocal_7972[32]), 0);
	return 1;
}

bool func_810(var uParam0)
{
	if (is_ped_in_any_vehicle(Global_35, false))
	{
		_0xe0b61ed8bb37712f(Global_35);
	}
	func_1273(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_811(var uParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_set_ped_crouch_movement(Global_35, false, 0, false);
	}
	return 1;
}

bool func_812(var uParam0)
{
	func_268(uParam0, 7, iVar299, 0, 1, 1, 0);
	func_268(uParam0, 26, iVar323, 0, 1, 1, 0);
	if (does_entity_exist(iVar323))
	{
		delete_ped(&Local_326);
	}
	func_1407(&(Local_1199[9]->f_1), 0);
	func_1407(&(Local_1199[10]->f_1), 1);
	Local_1199[9]->f_1 = 0;
	Local_1199[10]->f_1 = 0;
	func_1407(Local_1199[9], 1);
	func_1407(Local_1199[10], 1);
	Local_1199[9] = 0;
	Local_1199[10] = 0;
	if (does_entity_exist(Local_1199[9]->f_3))
	{
		func_1357(Local_1199[9]->f_3, 1, 1);
		delete_object(&(Local_1199[9]->f_3));
	}
	if (does_entity_exist(Local_1199[10]->f_3))
	{
		func_1357(Local_1199[10]->f_3, 1, 1);
		delete_object(&(Local_1199[10]->f_3));
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_813(var uParam0, int iParam1, bool bParam2)
{
	if (!is_itemset_valid(Global_43616))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Global_43616))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1408()) && get_entity_model(iVar1) == iParam1)
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				if (bParam2)
				{
					remove_from_itemset(get_indexed_item_in_itemset(iVar0, Global_43616), Global_43616);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_814(var uParam0, int iParam1)
{
	return func_819(uParam0, iParam1, &uVar0);
}

bool func_815(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_20() != -1)
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

int func_816(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_815(iParam0))
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

void func_817(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_819(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1409(uParam0->f_5423[iVar0], iParam2);
}

void func_818(int iParam0)
{
	func_1054(iParam0, 8, 1);
}

bool func_819(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_263(uParam0->f_5423[iVar0]))
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

void func_820(var uParam0)
{
	if (func_524(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_524(uParam0, 1024);
	if (func_524(uParam0, 128) || bVar0)
	{
		if (func_524(uParam0, 4096))
		{
			if (!func_524(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1409(uParam0, 2048);
				return;
			}
		}
		else if (func_524(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1410(uParam0, 2048);
		}
		if (func_524(uParam0, 512))
		{
			if (func_525(uParam0->f_10))
			{
				if (func_895(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1411(uParam0->f_10))
					{
						func_530(uParam0->f_10, 1);
						func_1412(uParam0->f_10, 0);
					}
				}
				else if ((func_1411(uParam0->f_10) && !bVar0) && !func_524(uParam0, 16384))
				{
					func_530(uParam0->f_10, 0);
					func_1412(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_895(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_895(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_524(uParam0, 512))
	{
		if (func_525(uParam0->f_10))
		{
			if (func_1411(uParam0->f_10))
			{
				func_530(uParam0->f_10, 0);
				func_1412(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_821(int iParam0)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1058(iParam0, 36, 1))
	{
		func_994(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1413(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_822(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_823(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_824(var uParam0)
{
	return uParam0->f_862;
}

void func_825(var uParam0)
{
	if (func_445(&iVar0))
	{
		if (func_473(iVar0, 0))
		{
			if (func_609(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_636(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_473(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_826(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1414(-1);
	}
	func_1415(1);
	set_entity_invincible(Global_35, true);
	if (!func_823(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_823(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_823(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_823(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_823(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_823(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_823(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_823(*iParam0, 4) && !func_823(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_823(*iParam0, 2048))
	{
		func_838(0, 0);
	}
	if (func_823(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_823(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_823(*iParam0, 8192))
	{
		func_1416();
	}
	if (!func_823(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_823(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_823(*iParam0, 1024))
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
		if (!func_823(*iParam0, 16))
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
						if (func_1417() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_407(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1418(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1419(2);
						func_1420(-1);
						func_1421(vVar3);
						func_1423(func_1422());
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
	if (!func_823(*iParam0, 4096))
	{
		func_1424(Global_35);
	}
	if (!func_823(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_823(*iParam0, 2097152))
	{
		if (func_1425() || _0x50f124e6ef188b22(Global_35))
		{
			func_1426(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_827(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_828(var uParam0)
{
	if (func_822(uParam0, 2048) && !func_407(func_1427(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_822(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_900(iVar1, func_1427(uParam0), func_1428(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_822(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_900(iVar3, func_1427(uParam0), func_1428(uParam0), 2, 1073741824);
		}
	}
}

void func_829(var uParam0)
{
	if ((func_822(uParam0, 268435456) && !func_407(func_1427(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1427(uParam0) };
			func_900(iVar0, vVar1, func_1429(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_830(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_407(vParam1))
	{
		func_1430(uParam0, 2048, 1);
	}
	else
	{
		func_754(uParam0, 2048);
		if (bParam5)
		{
			func_754(uParam0, -2147483648);
		}
	}
}

void func_831(var uParam0)
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
					if (!func_1431(uParam0->f_13[iVar0], 8))
					{
						if (func_695(func_1135(iVar1, 0, 1, 0)))
						{
							if (!func_1432(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_695(func_1135(iVar1, 1, 1, 0)))
						{
							if (!func_1432(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_832(var uParam0, bool bParam1)
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

void func_833(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1220(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1433(iParam1, 29, bVar4, 1, 0);
			func_1433(iParam1, 31, bVar4, 1, 0);
			func_1433(iParam1, 30, bVar4, 1, 0);
			func_1433(iParam1, 22, bVar4, 1, 0);
			func_1433(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1170(32768) && func_1434(1108822547, 8)) && func_1435(10, iParam3))
	{
		func_1436(iParam1, 0, 1);
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
			iVar3 = func_1227(iVar1, 1);
			if (func_1434(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1435(iVar1, iParam3))
				{
				}
				else if ((func_1434(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1434(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1433(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1437(iVar3, 1, 6);
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
								func_1433(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1434(iVar3, 1))
							{
								func_1438(iVar3, 1, 6);
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

bool func_834(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1439((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_835(int iParam0)
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

int func_836(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_837(int iParam0, int iParam1)
{
	return func_1440(&uVar0, iParam0, iParam1);
}

void func_838(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_695(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1441(1);
	}
}

void func_839(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_840(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_841(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
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
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_844(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_845(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_846(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_848(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_849(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_850(var uParam0, int iParam1)
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

int func_851(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_857((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_852(var uParam0, char* sParam1)
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

int func_853(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_860((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_854(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	sVar0 = func_1442(iParam1);
	sVar1 = func_1443(iParam2);
	func_1444(uParam0, sVar0, iLocal_7972[iParam1], iParam3, iParam4, sVar1, 0, bParam5);
}

void func_855(var uParam0, int iParam1, int iParam2, int iParam3)
{
	cVar0 = func_1443(iParam2);
	func_1445(uParam0, &(iLocal_7972[iParam1]), cVar0, iParam3);
}

void func_856(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_857(var uParam0)
{
	return *uParam0 != 0;
}

bool func_858(int iParam0, int iParam1)
{
	iVar0 = func_1446(iParam1);
	return (iParam0 && iVar0) != 0;
}

void func_859(var uParam0)
{
	if (!func_889(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_1447(&(uParam0->f_1), 1);
	}
}

bool func_860(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_861(var uParam0)
{
	if (!func_889(uParam0->f_3, 1))
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
		func_1447(&(uParam0->f_3), 1);
	}
}

bool func_862(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_863(var uParam0)
{
	if (!func_889(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_1447(&(uParam0->f_1), 1);
	}
}

bool func_864(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_865(var uParam0)
{
	if (func_889(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_1, 1))
	{
		func_1448(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_866(var uParam0)
{
	if (func_889(*uParam0, 2))
	{
		return true;
	}
	if (!func_889(*uParam0, 1))
	{
		func_1449(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_1447(uParam0, 2);
		return true;
	}
	return false;
}

bool func_867(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_868(var uParam0)
{
	if (!func_889(uParam0->f_2, 1))
	{
		if (func_1450(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1451(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_313())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1095())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_1447(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_869(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_870(var uParam0, int iParam1)
{
	if (!func_889(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_1447(&(uParam0->f_1), 1);
	}
}

bool func_871(var uParam0)
{
	return *uParam0 != 0;
}

void func_872(var uParam0)
{
	if (!func_889(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_1447(&(uParam0->f_2), 1);
	}
}

bool func_873(var uParam0)
{
	return *uParam0 != 0;
}

void func_874(var uParam0)
{
	if (!func_889(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_1447(&(uParam0->f_3), 1);
	}
}

bool func_875(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_876(var uParam0)
{
	if (!func_889(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_1447(&(uParam0->f_1), 1);
	}
}

bool func_877(var uParam0)
{
	return func_1452(*uParam0);
}

void func_878(var uParam0)
{
	if (!func_889(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_1447(&(uParam0->f_1), 1);
	}
}

bool func_879(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_880(var uParam0)
{
	if (!func_889(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_1447(&(uParam0->f_2), 1);
	}
}

bool func_881(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_882(var uParam0)
{
	if (!func_889(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_1447(&(uParam0->f_1), 1);
	}
}

bool func_883(var uParam0, int iParam1, char* sParam2)
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

void func_884(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_750(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1453(uParam0, iParam1);
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
		iVar1 = func_1454(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1455(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1456(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1457(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1458(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_885(int iParam0)
{
	if (!func_197(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_886(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_908(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1459(uParam0, 0))
			{
				if (func_1460(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1461(uParam0, 1, &iVar0))
					{
					}
					if (func_1462(uParam0, 3, &cVar2))
					{
					}
					if (func_1461(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1461(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1461(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1461(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1461(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1463(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_506((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_506(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_506(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_225(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1463(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_506(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1459(uParam0, 12))
			{
				if (func_1461(uParam0, 13, &iVar0))
				{
				}
				if (func_1461(uParam0, 14, &iVar1))
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

void func_887(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_225((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_225((*uParam0)[iVar0], 1))
		{
			func_1464((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_888(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_857((*uParam0)[iVar1]))
		{
			if (func_858((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1465((*uParam0)[iVar1]))
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
		if (func_860((*uParam1)[iVar1]))
		{
			if (func_858((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1466((*uParam1)[iVar1]))
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
		if (func_862((*uParam2)[iVar1]))
		{
			if (func_858((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1467((*uParam2)[iVar1]))
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
		if (func_864((*uParam3)[iVar1]))
		{
			if (func_858((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_865((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_858(uParam4->f_1, iParam12))
	{
		if (!func_866(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_867((*uParam5)[iVar1]))
		{
			if (func_858((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1450((*uParam5)[iVar1]))
				{
					if (!func_890((*uParam5)[iVar1]))
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
		if (func_867((*uParam5)[iVar1]))
		{
			if (func_858((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1450((*uParam5)[iVar1]))
				{
					if (func_890((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_869((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1468((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_871((*uParam6)[iVar1]))
		{
			if (func_858((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1469((*uParam6)[iVar1]))
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
		if (func_873((*uParam7)[iVar1]))
		{
			if (func_858((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1470((*uParam7)[iVar1]))
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
		if (func_875((*uParam8)[iVar1]))
		{
			if (func_858((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1471((*uParam8)[iVar1]))
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
		if (func_877((*uParam9)[iVar1]))
		{
			if (func_858((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1472((*uParam9)[iVar1]))
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
		if (func_879((*uParam10)[iVar1]))
		{
			if (func_858((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1473((*uParam10)[iVar1]))
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
		if (func_881((*uParam11)[iVar1]))
		{
			if (func_858((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1474((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_889(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_890(var uParam0)
{
	if (func_889(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_2, 1))
	{
		func_868(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_1447(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_891(int iParam0)
{
	if (!func_197(iParam0))
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

bool func_892(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_525(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*iParam2) && func_267(iParam1)) && func_1475(iParam1) == *iParam2)
	{
		return true;
	}
	*iParam2 = func_1476(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*iParam2))
	{
		func_1477(uParam0, *iParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1478(iParam1);
		return true;
	}
	return false;
}

bool func_893(var uParam0)
{
	if (!func_407(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1479(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1479(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1479(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1479(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1479(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1479(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1479(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1479(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1479(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1479(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1479(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1479(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1479(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1479(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1479(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1479(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1479(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1479(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1479(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1479(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1479(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1479(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1479(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1479(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1479(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1479(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1479(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1479(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1479(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1479(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1479(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1479(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1479(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_407(uParam0->f_5417);
}

int func_894(int iParam0, var uParam1)
{
	uParam1->f_10 = func_275(uParam1->f_10);
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
		if (func_407(uParam1->f_6))
		{
		}
	}
	bVar0 = func_406();
	if (*uParam1)
	{
		if (bVar0 && !func_336((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1480(5))
			{
				func_537(5);
				func_1481(5);
				func_1420(0);
				func_1419(0);
			}
		}
	}
	if (func_1482(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_336((*Global_1835011)[37]->f_1, 1)) && !func_336((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_336((*Global_1835011)[43]->f_1, 1)) && !func_336((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_223(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_540(iVar1))
	{
		bVar3 = true;
		if (func_1483(iVar1))
		{
			bVar4 = true;
		}
		if (func_547(iVar1))
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
				func_548(uParam1->f_10);
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
			if (!func_1480(0) && func_1480(1))
			{
				func_1484(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1485())
			{
				func_1486();
			}
			func_1420(0);
			func_1419(0);
			func_1421(uParam1->f_6);
		}
	}
	if (!func_540(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1487(uParam1->f_10) == 0 || func_1488(uParam1->f_10) == 0) || func_1489(uParam1->f_10) == 0)
			{
				func_1490(uParam1->f_10);
			}
			func_1491(uParam1->f_10);
			func_1492(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_223(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_540(iVar1))
	{
		bVar3 = true;
		if (func_1483(iVar1))
		{
			bVar4 = true;
		}
		if (func_547(iVar1))
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
			if (!func_407(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1493(uParam1->f_10))
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
			Var8 = { func_1494(uParam1->f_10) };
			Var10 = { func_1495() };
			func_1496(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_533(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1497(uParam1->f_10);
		if (uParam1->f_2 && !func_407(uParam1->f_6))
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
	func_532(uParam1->f_10);
	if (func_533(uParam1->f_10))
	{
		iVar16 = func_271(uParam1->f_10);
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

bool func_895(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_896(int iParam0)
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

bool func_897(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1498(iParam1))
	{
		return false;
	}
	iVar0 = func_1499(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_898(var uParam0, bool bParam1)
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

float func_899(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_900(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1500(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1501(iParam0))
	{
		if (func_896(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_402(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_900(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_900(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_402(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_402(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_402(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_402(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_402(iParam5, 129))
	{
		if (func_402(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_402(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_402(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_402(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1501(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_402(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_402(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_901(int iParam0, int iParam1, int iParam2)
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

bool func_902(var uParam0, int iParam1)
{
	switch (func_1502(uParam0))
	{
		case 0:
			if (!func_1503(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1504(uParam0, 1);
			break;
		case 1:
			func_1505(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_826(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1504(uParam0, 2);
			break;
		case 2:
			if (func_1506(uParam0))
			{
				func_927(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1504(uParam0, 3);
			}
			break;
		case 3:
			if (func_909(&(uParam0->f_3)) >= 1f)
			{
				func_1504(uParam0, 4);
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
			func_1507(&iVar1, 0);
			release_script_audio_bank();
			func_1504(uParam0, 0);
			return true;
	}
	return false;
}

void func_903(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1508(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_904(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1509(uParam0, iVar0) };
	if (func_1511(&(uParam0->f_10792), Var1, func_1510(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1512(&(uParam0->f_10792), 524288))
		{
			func_389(uParam0, 67108864);
			func_1513(&(uParam0->f_10792), 524288);
		}
		func_1514(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_905(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_906(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1308(uParam0);
		func_1309(uParam0);
		return true;
	}
	if (func_1515(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_936(uParam0);
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
			func_1516(uParam0);
			func_905(uParam0, 524288);
			func_1326(uParam0);
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

bool func_907(var uParam0)
{
	iVar0 = 1;
	if (!func_1517(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1518(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1519(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_432(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_885(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_908(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_908(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1520(uParam0);
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

float func_909(int iParam0)
{
	if (!func_26(iParam0))
	{
		return iParam0->f_1;
	}
	if (func_508(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_560() - iParam0->f_1);
}

bool func_910()
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

void func_911(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_912(var uParam0, int iParam1)
{
	iVar0 = func_925(uParam0);
	if (iParam1 != 26)
	{
		iVar0 = iParam1;
	}
	if (iVar0 >= 1 && iVar0 < 6)
	{
		if (!func_1521())
		{
			return false;
		}
	}
	if (iVar0 >= 3)
	{
		func_1522();
		func_1523();
		func_1524();
	}
	switch (iVar0)
	{
		case 0:
			if (func_1525(uParam0) && func_1526())
			{
				return true;
			}
			break;
		case 1:
			if (((func_1525(uParam0) && func_1526()) && func_1527(uParam0)) && func_1528())
			{
				return true;
			}
			break;
		case 2:
			if ((func_1525(uParam0) && func_1529()) && func_1527(uParam0))
			{
				return true;
			}
			break;
		case 3:
			if (((((((func_1525(uParam0) && func_1530(uParam0)) && func_1531()) && func_1529()) && func_1532(uParam0)) && func_1533(uParam0)) && func_1534()) && func_1527(uParam0))
			{
				return true;
			}
			break;
		case 4:
			if (((((((func_1525(uParam0) && func_1530(uParam0)) && func_1532(uParam0)) && func_1533(uParam0)) && func_1534()) && func_1535()) && func_1536()) && func_1537(uParam0))
			{
				return true;
			}
			break;
		case 5:
			if (((((((func_1525(uParam0) && func_1530(uParam0)) && func_1532(uParam0)) && func_1533(uParam0)) && func_1534()) && func_1535()) && func_1536()) && func_1537(uParam0))
			{
				return true;
			}
			break;
		case 6:
			if ((((((((func_1525(uParam0) && func_1530(uParam0)) && func_1538()) && func_1534()) && func_1539()) && func_1533(uParam0)) && func_1527(uParam0)) && func_1535()) && func_1536())
			{
				return true;
			}
			break;
		case 7:
			if (((((func_1525(uParam0) && func_1530(uParam0)) && func_1538()) && func_1527(uParam0)) && func_1535()) && func_1536())
			{
				return true;
			}
			break;
		case 8:
			if (((((func_1525(uParam0) && func_1530(uParam0)) && func_1540()) && func_1527(uParam0)) && func_1535()) && func_1536())
			{
				return true;
			}
			break;
		case 9:
			if ((((func_1525(uParam0) && func_1530(uParam0)) && func_1541()) && func_1542()) && func_1540())
			{
				return true;
			}
			break;
		case 25:
			if (((func_1525(uParam0) && func_1530(uParam0)) && func_1540()) && func_1543(uParam0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_913(var uParam0)
{
	iVar0 = func_925(uParam0);
	if (iVar0 >= 6)
	{
		func_1544();
		func_1545();
	}
	switch (iVar0)
	{
		case 0:
			_set_weather_type(-1148613331, false, true, true, 60f, false);
			break;
		case 1:
			_set_weather_type(-1148613331, true, true, false, 0f, false);
			break;
		case 2:
			func_453(6);
			func_453(7);
			_set_weather_type(1420204096, true, true, false, 0f, false);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			_set_weather_type(1420204096, true, true, false, 0f, false);
			break;
		case 7:
		case 8:
		case 9:
		case 25:
			_set_weather_type(2082228755, true, true, false, 0f, false);
			break;
		default:
			_set_weather_type(-1148613331, true, true, false, 0f, false);
			break;
	}
	return true;
}

void func_914()
{
	if (!_does_volume_exist(&(iLocal_268[0])))
	{
		iLocal_268[0] = _create_volume_box_with_custom_name(344.9143f, 1469.994f, 179.9346f, 0f, 0f, 35.36213f, 5.140913f, 7.714101f, 3.363786f, "Jail Cells");
	}
	if (!_does_volume_exist(&(iLocal_268[1])))
	{
		iLocal_268[1] = _create_volume_box_with_custom_name(317.2158f, 1506.657f, 187.0774f, 0f, 0f, 36.23151f, 8.712767f, 2.962682f, 2.731405f, "Stealth Progress Tower 01");
	}
	if (!_does_volume_exist(&(iLocal_268[2])))
	{
		iLocal_268[2] = _create_volume_box_with_custom_name(352.0664f, 1518.714f, 185.1577f, 0f, 0f, 26.8567f, 6.272352f, 3.179944f, 2.559546f, "Stealth Pre Tower 02");
	}
	if (!_does_volume_exist(&(iLocal_268[4])))
	{
		iLocal_268[4] = _create_volume_box_with_custom_name(367.6467f, 1473.702f, 185.4212f, 0f, 0f, -7.457451f, 3.027246f, 3.27694f, 2.70988f, "Stealth Ladder Climb");
	}
	if (!_does_volume_exist(&(iLocal_268[5])))
	{
		iLocal_268[5] = _create_volume_box_with_custom_name(362.3211f, 1514.6f, 185.3793f, 0f, 0f, 22.9925f, 6.570058f, 3.597727f, 4.021171f, "Stealth Leave Tower 02");
	}
	if (!_does_volume_exist(&(iLocal_268[8])))
	{
		iLocal_268[8] = _create_volume_box_with_custom_name(325.5969f, 1483.587f, 180.7039f, 0f, 0f, -20.00071f, 5.175066f, 11.44244f, 2.672337f, "Wall Blow");
	}
	if (!_does_volume_exist(&(iLocal_268[9])))
	{
		iLocal_268[9] = _create_volume_box_with_custom_name(344.6317f, 1468.852f, 180.0282f, 0f, 0f, 34.88868f, 1.848055f, 1.480468f, 3.017986f, "Jail Door");
	}
	if (!_does_volume_exist(&(iLocal_268[10])))
	{
		iLocal_268[10] = _create_volume_box_with_custom_name(322.2613f, 1510.496f, 186.8671f, 0f, 0f, -24.38972f, 2.481702f, 3.248212f, 2.045168f, "Door Dialogue");
	}
	if (!_does_volume_exist(&(iLocal_268[3])))
	{
		iLocal_268[3] = _create_volume_cylinder_with_custom_name(361.9499f, 1515.847f, 184.5322f, 0f, 0f, 39.87955f, 3.235524f, 2.978455f, 2.120134f, "Stealth Progress Tower 02");
	}
	if (!_does_volume_exist(&(iLocal_268[19])))
	{
		iLocal_268[19] = _create_volume_box_with_custom_name(359.16f, 1466.998f, 183.864f, 0f, 0f, 37.12782f, 7.624256f, 2.378335f, 2.51574f, "Walkway Objective");
	}
	if (!_does_volume_exist(&(iLocal_268[25])))
	{
		iLocal_268[25] = _create_volume_box_with_custom_name(381.8254f, 1502.89f, 179.7206f, 0f, 0f, 13.00378f, 16.42387f, 33.54391f, 7.921944f, "Stealth Wall Fail");
	}
	if (!_does_volume_exist(&(iLocal_268[11])))
	{
		iLocal_268[11] = _create_volume_aggregate_with_custom_name("Escaped Fort Vol");
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(370.5444f, 1466.965f, 181.1632f, -0.004039f, -0.877865f, 19.4453f, 8.602258f, 6.945171f, 4.221676f, "01"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(309.1382f, 1508.526f, 183.8122f, 0f, 0f, 41.91126f, 27.37506f, 6.077364f, 4.645149f, "02"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(334.4428f, 1513.555f, 182.3676f, 0f, 0f, 33.9993f, 13.77132f, 4.436282f, 6.388694f, "03"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(374.3148f, 1474.401f, 182.0592f, 0f, 0f, -13.53342f, 5.147135f, 21.04631f, 5.690371f, "04"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(307.1769f, 1487.386f, 183.2041f, 1.447739f, 2.079713f, 34.85424f, 7.115758f, 31.4028f, 6.63748f, "05"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(371.2908f, 1503.154f, 180.4027f, 0f, 0f, 14.37415f, 4.981458f, 41.86314f, 6.055847f, "06"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(322.7136f, 1475.992f, 180.9804f, 0f, 0f, -11.06453f, 14.80638f, 5.313012f, 5.301284f, "07"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(361.6179f, 1522.465f, 183.495f, 0f, 0f, 71.87296f, 3.958126f, 11.05427f, 4.50925f, "08"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(336.2066f, 1464.892f, 179.8135f, 0f, 0f, 35.0523f, 4.016058f, 27.04383f, 5.067613f, "09"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(347.0641f, 1521.705f, 183.5723f, 0f, 0f, 23.9682f, 25.92772f, 5.382093f, 5.332496f, "10"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(355.8163f, 1458.877f, 179.734f, 0f, 0f, 34.48318f, 26.4376f, 5.95972f, 6.87407f, "11"));
		_0x6e0d3c3f828da773(&(iLocal_268[11]), _create_volume_box_with_custom_name(322.7171f, 1514.079f, 184.3579f, 0f, 0f, 66.23207f, 3.718264f, 16.395f, 3.501229f, "12"));
	}
	if (!_does_volume_exist(&(iLocal_268[12])))
	{
		iLocal_268[12] = _create_volume_box_with_custom_name(363.5815f, 1482.207f, 179.7371f, 0f, 0f, 8.263719f, 1f, 1f, 1.255813f, "Floor Cover Right");
	}
	if (!_does_volume_exist(&(iLocal_268[13])))
	{
		iLocal_268[13] = _create_volume_box_with_custom_name(363.773f, 1481.048f, 179.7371f, 0f, 0f, 19.67023f, 1f, 1f, 1.255813f, "Floor Cover Left");
	}
	if (!_does_volume_exist(&(iLocal_268[16])))
	{
		iLocal_268[16] = _create_volume_box_with_custom_name(334.2179f, 1507.628f, 186.2184f, 0f, 0f, 125.3915f, 2.997603f, 3.700167f, 2.167336f, "Cover barrels");
	}
	if (!_does_volume_exist(&(iLocal_268[26])))
	{
		iLocal_268[26] = _0x0eb78c2b156635b1(665633627, 443.7633f, 2238.777f, 248.405f, 0f, 0f, 48.03135f, 1.857357f, 2.395883f, 1.766037f);
	}
}

bool func_915()
{
	if (!_does_volume_exist(&(Local_7292[2])))
	{
		Local_7292[2] = _create_volume_cylinder_with_custom_name(340.9207f, 1489.054f, 185.6808f, 0f, 0f, 0f, 54.92583f, 53.30299f, 27.55761f, "Fort Area");
		func_458(Local_7292[2], 1, 1, 0, 0, 0);
	}
	if (!_does_volume_exist(&(Local_7292[1])))
	{
		Local_7292[1] = _create_volume_cylinder_with_custom_name(443.4114f, 2229.82f, 247.2513f, 0f, 0f, 0f, 2.41772f, 2.429094f, 1.819957f, "Outside Tent");
		func_458(Local_7292[1], 1, 1, 0, 0, 0);
	}
	if (!_does_volume_exist(&(Local_7292[0])))
	{
		Local_7292[0] = _create_volume_cylinder_with_custom_name(156.4021f, 1499.773f, 163.4688f, 0f, 0f, 0f, 305.4504f, 220.0862f, 59.2068f, "mission area");
		func_458(Local_7292[0], 1, 1, 0, 1, 0);
	}
	return true;
}

void func_916(var uParam0)
{
	iVar0 = func_925(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			set_clock_time(7, 0, 0);
			break;
		case 3:
			if (func_120(uParam0, 4))
			{
				set_clock_time(22, 0, 0);
			}
			else
			{
				set_clock_time(12, 0, 0);
			}
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			set_clock_time(22, 0, 0);
			break;
		case 9:
			set_clock_time(0, 0, 0);
			break;
		case 25:
			set_clock_time(5, 0, 0);
			break;
	}
}

void func_917(var uParam0, int iParam1)
{
	iVar0 = func_925(uParam0);
	func_1546(uParam0, 0);
	if (!func_995(Global_35, 0))
	{
		return;
	}
	if (!func_166(14))
	{
		func_453(14);
		func_1547(uParam0, &Global_35, 0);
	}
	if (!func_8(uParam0, 8))
	{
		switch (iVar0)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				func_1290(Global_35, iLocal_252, 0, -1, 1);
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
				func_1290(Global_35, iLocal_252, 0, -1, 1);
				break;
			case 9:
				break;
			case 25:
			case 26:
				break;
		}
	}
	if (iParam1 == 1)
	{
		if (iVar0 >= 8)
		{
			func_1283(&Global_35, &iLocal_252, 0, 0, 1, 0);
		}
	}
}

int func_918(var uParam0)
{
	iVar0 = func_925(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			if (func_995(Global_35, 0))
			{
				func_1548(uParam0, &Global_35, "ARTHUR", 0);
			}
			if (func_995(iVar299, 0))
			{
				func_1548(uParam0, &Local_302, "CharlesSmith", 0);
			}
			if (func_995(iLocal_253, 0))
			{
				func_1548(uParam0, &iLocal_253, "CS_RainsFall", 0);
			}
			break;
		case 2:
			break;
		case 3:
			if (func_995(Global_35, 0))
			{
				func_1548(uParam0, &Global_35, "ARTHUR", 0);
			}
			if (func_995(iVar299, 0))
			{
				func_1548(uParam0, &Local_302, "CharlesSmith", 0);
			}
			if (func_995(Local_302.f_1, 0))
			{
				func_1548(uParam0, &(Local_302.f_1), "Horse_01^1", 0);
			}
			if (func_995(iLocal_252, 0))
			{
				func_1548(uParam0, &iLocal_252, "Horse_01", 0);
			}
			func_1549(uParam0);
			if (does_entity_exist(iLocal_254))
			{
				set_entity_visible(iLocal_254, true);
				set_entity_collision(iLocal_254, true, false);
				func_431(uParam0, iLocal_254, "p_cs_rope05x_coiled", 0, 0, 0, 0);
			}
			break;
		case 4:
			if (func_995(Global_35, 0))
			{
				func_1548(uParam0, &Global_35, "ARTHUR", 0);
			}
			if (func_995(iVar299, 0))
			{
				func_1548(uParam0, &Local_302, "CharlesSmith", 0);
			}
			func_1549(uParam0);
			if (does_entity_exist(iLocal_254))
			{
				set_entity_visible(iLocal_254, true);
				set_entity_collision(iLocal_254, true, false);
				func_431(uParam0, iLocal_254, "p_cs_rope05x_coiled", 0, 0, 0, 0);
			}
			break;
		case 5:
			break;
		case 6:
			if (func_995(Global_35, 0))
			{
				func_1548(uParam0, &Global_35, "ARTHUR", 0);
			}
			if (func_995(iVar299, 0))
			{
				func_1548(uParam0, &Local_302, "CharlesSmith", 0);
			}
			if (func_995(iVar323, 0))
			{
				func_1548(uParam0, &Local_326, "EagleFlies", 0);
			}
			if (does_entity_exist(&(Local_3359[7])))
			{
				func_1548(uParam0, Local_3359[7], "S_M_Y_Army_01", 1);
			}
			func_1550(uParam0, &Global_35, -618550132, "w_melee_knife02");
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 25:
			if (func_995(Global_35, 0))
			{
				func_1548(uParam0, &Global_35, "ARTHUR", 0);
			}
			if (func_995(iVar299, 0))
			{
				func_1548(uParam0, &Local_302, "CharlesSmith", 0);
			}
			if (func_995(iVar323, 0))
			{
				func_1548(uParam0, &Local_326, "EagleFlies", 0);
			}
			if (does_entity_exist(iVar7691))
			{
				func_431(uParam0, iVar7691, "CANOE", 0, 0, 0, 0);
			}
			if (does_entity_exist(iVar7690))
			{
				func_431(uParam0, iVar7690, "canoe^1", 0, 0, 0, 0);
			}
			if (func_995(Local_1199[9]->f_1, 1))
			{
				func_431(uParam0, Local_1199[9]->f_1, "Horse_01", 0, 0, 0, 0);
			}
			break;
		case 26:
			break;
	}
	return 1;
}

int func_919(var uParam0)
{
	iVar0 = func_925(uParam0);
	func_1551();
	switch (iVar0)
	{
		case 0:
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
			func_1552(Global_35);
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 25:
			if (does_entity_exist(Global_35))
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
			func_163();
			break;
		case 26:
			break;
	}
	return 1;
}

void func_920(var uParam0, int iParam1)
{
	uParam0->f_8265 = iParam1;
	func_103(uParam0, 2048);
}

int func_921(var uParam0)
{
	iVar0 = func_925(uParam0);
	func_912(uParam0, 26);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			if (func_1553(uParam0, iVar299, 0, 0, 1, 1))
			{
				func_1291(1, 0);
			}
			if (!func_1282(uParam0))
			{
				if (func_1553(uParam0, Global_35, 0, 0, 1, 1))
				{
					func_1554(-668482597, 1500, 0, 1, 0, 305.0999f, 0, 0);
				}
			}
			if (!func_402(iVar7669, 4))
			{
				if (does_entity_exist(iLocal_252))
				{
					func_1283(&Global_35, &iLocal_252, 1, 1, 1, 0);
					func_425(&iLocal_7672, 4);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (func_1555(uParam0) > 0.8f)
			{
				func_1556(1);
			}
			if (func_1553(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_1554(147004056, 3000, 0, 1, 1, 0, 0, 0);
			}
			else if (!_get_ped_crouch_movement(Global_35))
			{
				if (func_1555(uParam0) > 0.25f)
				{
					_set_ped_crouch_movement(Global_35, true, 0, false);
				}
			}
			if (func_1553(uParam0, iVar299, 0, 0, 1, 1))
			{
				func_1557(2, 0);
			}
			if (func_1553(uParam0, iLocal_254, "p_cs_rope05x_coiled", 0, 1, 1))
			{
				set_entity_visible(iLocal_254, false);
				set_entity_collision(iLocal_254, false, false);
			}
			if (!func_166(69) && !func_1282(uParam0))
			{
				func_1558(12);
				func_453(69);
			}
			if (!func_402(iVar7669, 5))
			{
				if (has_anim_event_fired(Global_35, -1710869645))
				{
					func_929(1, 0);
					func_425(&iLocal_7672, 5);
				}
			}
			if (func_1555(uParam0) > 0.1f)
			{
				if (is_screen_faded_out())
				{
					func_1328(1);
				}
			}
			break;
		case 4:
			if (!func_1282(uParam0))
			{
				func_1559();
			}
			func_1346();
			if (func_1560(uParam0))
			{
				func_425(&iLocal_7672, 3);
			}
			if (!func_402(iVar7669, 0))
			{
				if (func_1561(uParam0, Global_35, 0, 0, 1, 1) || func_402(iVar7669, 3))
				{
					if (!func_166(39))
					{
						func_1340(&Global_35, &iLocal_7590, 0, 64, 34);
						_0x2208438012482a1a(Global_35, true, false);
						func_453(39);
					}
					if (_0xa24c1d341c6e0d53(0, 0, 0))
					{
						func_1562(323.28f, 1511.78f, 186.77f, 0);
					}
					func_425(&iLocal_7672, 0);
				}
			}
			if (!func_402(iVar7669, 1))
			{
				if (func_1561(uParam0, iVar299, 0, 0, 1, 1))
				{
					func_1563(2, 0, 0);
					func_425(&iLocal_7672, 1);
				}
			}
			if (func_1553(uParam0, iLocal_254, "p_cs_rope05x_coiled", 0, 1, 1))
			{
				set_entity_visible(iLocal_254, false);
				set_entity_collision(iLocal_254, false, false);
			}
			func_1564(uParam0, &uLocal_258, "p_cs_grappleHook01x");
			break;
		case 5:
			break;
		case 6:
			func_1565(&(uParam0->f_7375.f_861), 32);
			func_1566(uParam0);
			if (!func_166(30))
			{
				if (_0xd9130842d7226045("NTS3_Sounds", 0))
				{
					if (func_1555(uParam0) > 0.801f)
					{
						_play_sound_from_position("bugle_1", -52.8981f, 1515.186f, 101.5833f, "NTS3_Sounds", false, 0, true, 0);
					}
				}
				if (func_1555(uParam0) > 0.854f)
				{
					func_453(30);
				}
			}
			if (func_1555(uParam0) > 0.854f)
			{
				func_453(58);
				set_ped_reset_flag(Global_35, 25, false);
				set_everyone_ignore_player(player_id(), false);
				set_player_control(player_id(), false, 2048, false);
			}
			if (IntToFloat(func_1567(uParam0)) > 0.1f)
			{
				if (does_entity_exist(iVar7693))
				{
					func_1357(iVar7693, 1, 1);
					delete_object(&iLocal_7696);
				}
			}
			if (func_1555(uParam0) > 0.801f)
			{
				func_1353();
			}
			if (!func_402(iVar7669, 0))
			{
				if (func_1561(uParam0, Global_35, 0, 0, 1, 1))
				{
					func_1354(0, 1);
					func_1340(&Global_35, &iLocal_7590, 12, 68, 34);
					_0x2208438012482a1a(Global_35, true, false);
					if (_0xa24c1d341c6e0d53(0, 0, 0))
					{
						func_1562(352.24f, 1483.73f, 178.86f, 0);
					}
					func_425(&iLocal_7672, 0);
				}
			}
			if (!func_402(iVar7669, 1))
			{
				if (func_1561(uParam0, iVar299, 0, 0, 1, 1))
				{
					if (!has_ped_got_weapon(iVar299, -1098045850, 0, false))
					{
						func_1317(iVar299, -1098045850, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					else
					{
						_add_ammo_to_ped(iVar299, -1098045850, 200, 752097756);
						set_current_ped_weapon(iVar299, -1098045850, true, 0, false, false);
					}
					force_ped_motion_state(iVar299, 1140525470, false, 0, false);
					func_1340(&Local_302, &(Local_302.f_19), 13, 70, 34);
					_0x2208438012482a1a(iVar299, true, false);
					func_425(&iLocal_7672, 1);
				}
			}
			if (!func_402(iVar7669, 2))
			{
				if (func_1561(uParam0, iVar323, "EagleFlies", 0, 1, 1))
				{
					if (func_1566(uParam0))
					{
						func_1281(iVar323, func_232(3, 2), 2, 1073741824);
						func_1568();
						func_425(&iLocal_7672, 2);
					}
				}
			}
			if (!func_402(iVar7669, 3))
			{
				if (func_1560(uParam0) || func_1569(uParam0))
				{
					func_425(&iLocal_7672, 3);
				}
			}
			if (!func_402(iVar7669, 4))
			{
				func_1354(0, 0);
				func_425(&iLocal_7672, 4);
			}
			if (does_entity_exist(iVar7692))
			{
				set_entity_visible(iVar7692, false);
			}
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 25:
			func_1565(&(uParam0->f_7375.f_861), 32);
			if (!func_402(iVar7669, 0))
			{
				if (func_1561(uParam0, Global_35, 0, 0, 1, 1))
				{
					if (is_ped_in_any_vehicle(Global_35, false))
					{
						_0xe0b61ed8bb37712f(Global_35);
					}
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					func_1570();
					set_ped_keep_task(Global_35, true);
					func_425(&iLocal_7672, 0);
				}
			}
			if (!func_402(iVar7669, 3))
			{
				if (func_1560(uParam0) || func_1569(uParam0))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					func_425(&iLocal_7672, 3);
				}
			}
			if (does_entity_exist(iVar7691))
			{
				if (func_1553(uParam0, iVar7691, "CANOE", 0, 1, 0))
				{
					func_454(&iLocal_7694, 0);
				}
			}
			if (does_entity_exist(iVar7690))
			{
				if (func_1553(uParam0, iVar7690, "canoe^1", 0, 1, 0))
				{
					func_454(&iLocal_7693, 0);
				}
			}
			func_1571();
			break;
		case 26:
			break;
	}
	return 1;
}

void func_922(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

bool func_923(var uParam0)
{
	iVar0 = func_925(uParam0);
	bVar1 = true;
	if (!func_912(uParam0, 26))
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		return false;
	}
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			set_clock_time(0, 0, 0);
			func_1572(12, 0);
			func_929(1, 1);
			func_1556(1);
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
			break;
		case 9:
			break;
		case 25:
			func_1573(&iLocal_7694);
			func_1573(&iLocal_7693);
			break;
		case 26:
			break;
	}
	return bVar1;
}

void func_924(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

int func_925(var uParam0)
{
	iVar0 = func_33(uParam0);
	return func_231(iVar0);
}

Vector3 func_926(int iParam0, int iParam1)
{
	return func_1050(iParam0, iParam1);
}

void func_927(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_928(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1574(1497516462);
			func_1575(2016141805);
			func_1575(1010885152);
			func_1575(-502324015);
			break;
		case 2016141805:
			func_1575(1497516462);
			func_1574(2016141805);
			func_1575(1010885152);
			func_1575(-502324015);
			break;
		case 1010885152:
			func_1575(1497516462);
			func_1575(2016141805);
			func_1574(1010885152);
			func_1575(-502324015);
			break;
		case -502324015:
			func_1575(1497516462);
			func_1575(2016141805);
			func_1575(1010885152);
			func_1574(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1575(-538889627);
			func_1575(-538880323);
			func_1575(-1056767524);
			func_1574(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1576();
			func_1574(iParam0);
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
			func_1577();
			func_1574(iParam0);
			break;
		case 2019386373:
			func_1575(-664252410);
			func_1575(2109952320);
			func_1574(2019386373);
			break;
		case -664252410:
			func_1575(2019386373);
			func_1575(2109952320);
			func_1574(-664252410);
			break;
		case 2109952320:
			func_1575(2019386373);
			func_1575(-664252410);
			func_1574(2109952320);
			break;
		case -1674179981:
			func_1575(-1835851517);
			func_1575(-1838352012);
			func_1574(-1674179981);
			break;
		case -1835851517:
			func_1575(-1674179981);
			func_1575(-1838352012);
			func_1574(-1835851517);
			break;
		case -1838352012:
			func_1575(-1674179981);
			func_1575(-1835851517);
			func_1574(-1838352012);
			break;
		case -1717960576:
			func_1575(210001842);
			func_1574(-1717960576);
			break;
		case 210001842:
			func_1575(-1717960576);
			func_1574(210001842);
			break;
		case -150493654:
			func_1575(-1271608261);
			func_1575(1846061697);
			func_1575(-1145519186);
			func_1574(-150493654);
			break;
		case -1271608261:
			func_1575(-150493654);
			func_1575(1846061697);
			func_1575(-1145519186);
			func_1574(-1271608261);
			break;
		case 1846061697:
			func_1575(-150493654);
			func_1575(-1271608261);
			func_1575(-1145519186);
			func_1574(1846061697);
			break;
		case -1145519186:
			func_1575(-150493654);
			func_1575(-1271608261);
			func_1575(1846061697);
			func_1574(-1145519186);
			break;
		case 1766284049:
			func_1575(280705402);
			func_1575(1926308480);
			func_1574(1766284049);
			break;
		case 280705402:
			func_1575(1766284049);
			func_1575(1926308480);
			func_1574(280705402);
			break;
		case 1926308480:
			func_1575(1766284049);
			func_1575(280705402);
			func_1574(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1575(439465264);
				func_1574(1609506757);
			}
			else
			{
				func_1575(1609506757);
				func_1575(439465264);
			}
			break;
		case 439465264:
			if (func_497(1609506757))
			{
				if (bParam1)
				{
					func_1574(439465264);
				}
				else
				{
					func_1575(439465264);
				}
			}
			break;
		case 1822001510:
			func_1575(-1612662716);
			func_1574(1822001510);
			break;
		case -1612662716:
			func_1575(1822001510);
			func_1574(-1612662716);
			break;
		case 1306158345:
			func_1575(1952610440);
			func_1575(-223469678);
			func_1575(-404698347);
			func_1575(1517904467);
			func_1574(1306158345);
			break;
		case 1952610440:
			func_1575(1306158345);
			func_1575(-223469678);
			func_1575(-404698347);
			func_1575(1517904467);
			func_1574(1952610440);
			break;
		case -223469678:
			func_1575(1306158345);
			func_1575(1952610440);
			func_1575(-404698347);
			func_1575(1517904467);
			func_1574(-223469678);
			break;
		case -404698347:
			func_1575(1306158345);
			func_1575(1952610440);
			func_1575(-223469678);
			func_1575(1517904467);
			func_1574(-404698347);
			break;
		case 1517904467:
			func_1575(1306158345);
			func_1575(1952610440);
			func_1575(-223469678);
			func_1575(-404698347);
			func_1574(1517904467);
			break;
		case 1376646519:
			func_1575(931649776);
			func_1575(-434590080);
			func_1575(1743048395);
			func_1575(449774763);
			func_1574(1376646519);
			break;
		case 931649776:
			func_1575(1376646519);
			func_1575(-434590080);
			func_1575(1743048395);
			func_1575(449774763);
			func_1574(931649776);
			break;
		case -434590080:
			func_1575(1376646519);
			func_1575(931649776);
			func_1575(1743048395);
			func_1575(449774763);
			func_1574(-434590080);
			break;
		case 1743048395:
			func_1575(1376646519);
			func_1575(931649776);
			func_1575(-434590080);
			func_1575(449774763);
			func_1574(1743048395);
			break;
		case 449774763:
			func_1575(1376646519);
			func_1575(931649776);
			func_1575(-434590080);
			func_1575(1743048395);
			func_1574(449774763);
			break;
		case -1414537028:
			func_1575(38162571);
			func_1575(1350391819);
			func_1575(54073871);
			func_1574(-1414537028);
			break;
		case 38162571:
			func_1575(-1414537028);
			func_1575(1350391819);
			func_1575(54073871);
			func_1574(38162571);
			break;
		case 1350391819:
			func_1575(-1414537028);
			func_1575(38162571);
			func_1575(54073871);
			func_1574(1350391819);
			break;
		case 54073871:
			func_1575(-1414537028);
			func_1575(38162571);
			func_1575(1350391819);
			func_1574(54073871);
			break;
		case 198200492:
			func_1574(198200492);
			func_1575(-1124061431);
			func_1575(52706132);
			func_1575(-259123672);
			break;
		case -1124061431:
			func_1575(198200492);
			func_1574(-1124061431);
			func_1575(52706132);
			func_1575(-259123672);
			break;
		case 52706132:
			func_1575(198200492);
			func_1575(-1124061431);
			func_1574(52706132);
			func_1575(-259123672);
			break;
		case -259123672:
			func_1575(198200492);
			func_1575(-1124061431);
			func_1575(52706132);
			func_1574(-259123672);
			break;
		case -919512195:
			func_1574(-919512195);
			func_1575(-1925798111);
			func_1575(420709909);
			func_1575(1703426636);
			break;
		case -1925798111:
			func_1574(-1925798111);
			func_1575(-919512195);
			func_1575(420709909);
			func_1575(1703426636);
			break;
		case 420709909:
			func_1574(420709909);
			func_1575(-919512195);
			func_1575(-1925798111);
			func_1575(1703426636);
			break;
		case 1703426636:
			func_1574(1703426636);
			func_1575(-919512195);
			func_1575(-1925798111);
			func_1575(420709909);
			break;
		case -1223121209:
			func_1574(-1223121209);
			func_1575(630808005);
			break;
		case 630808005:
			func_1574(630808005);
			func_1575(-1223121209);
			break;
		case 1453909576:
			func_1574(1453909576);
			func_1575(1643531967);
			break;
		case 1643531967:
			func_1574(1643531967);
			func_1575(1453909576);
			break;
		case 0:
			func_1574(0);
			func_1575(473295046);
			func_1575(-1738165526);
			break;
		case 473295046:
			func_1574(473295046);
			func_1575(0);
			func_1575(-1738165526);
			break;
		case -1738165526:
			func_1574(-1738165526);
			func_1575(0);
			func_1575(473295046);
			break;
		case 932909855:
			func_1574(932909855);
			func_1575(2051822093);
			break;
		case 2051822093:
			func_1574(2051822093);
			func_1575(932909855);
			break;
		case 405586984:
			func_1574(405586984);
			func_1575(1509509592);
			func_1575(-959357075);
			func_1575(-1311865656);
			break;
		case 1509509592:
			func_1574(1509509592);
			func_1575(405586984);
			func_1575(-959357075);
			func_1575(-1311865656);
			break;
		case -959357075:
			func_1574(-959357075);
			func_1575(1509509592);
			func_1575(405586984);
			func_1575(-1311865656);
			break;
		case -1311865656:
			func_1574(-1311865656);
			func_1575(1509509592);
			func_1575(-959357075);
			func_1575(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1574(-524145696);
			}
			else
			{
				func_1575(-524145696);
			}
			func_1575(1626481264);
			func_1575(282809459);
			break;
		case 282809459:
			func_1574(282809459);
			func_1575(1626481264);
			func_1575(-524145696);
			break;
		case 1626481264:
			func_1574(1626481264);
			func_1575(-524145696);
			func_1575(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1574(885203519);
			}
			else
			{
				func_1575(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1574(-1080627546);
			}
			else
			{
				func_1575(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_497(iParam0))
				{
					func_1574(iParam0);
				}
			}
			else if (func_497(iParam0))
			{
				func_1575(iParam0);
			}
			break;
	}
}

void func_929(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_445(&uVar0) && !func_166(10))
		{
			func_1578(-1623728698, 0);
			func_453(10);
		}
	}
	if (bParam1)
	{
		if (!func_447(7))
		{
			func_449(7, 134217728, 1);
		}
	}
}

void func_930()
{
	func_1579(128);
}

void func_931()
{
	iVar0 = 691;
	while (iVar0 <= 700)
	{
		if (!func_1580(iVar0))
		{
			if (func_1581(iVar0))
			{
				func_1582(iVar0);
			}
		}
		iVar0++;
	}
}

void func_932()
{
	func_1584(0, 308.081f, 1497.395f, 185.8259f, func_1583(1, 0), 1, 0, 5, "ARTHUR_INITIAL_BARRELS", 34);
	func_1584(1, 310.21f, 1501.63f, 185.8319f, func_1583(1, 1), 0, 0, 4, "CHARLES_INITIAL_BARRELS", 34);
	func_1584(2, 319.1257f, 1508.388f, 185.8269f, 336.4593f, 0, 2, 4, "CHARLES_OUTSIDE_1ST_TOWER", 34);
	func_1584(3, 322.6371f, 1509.016f, 185.8634f, func_1583(1, 4), 1, 2, 5, "CHARLES_INSIDE_1ST_TOWER", 34);
	func_1584(4, 334.7794f, 1507.248f, 185.3171f, 307.7968f, 1, 0, 0, "CHARLES_WALKWAY_BARRELS", 34);
	func_1584(5, 330.9775f, 1506.935f, 185.8271f, 337.7412f, 3, 2, 5, "CHARLES_WALKWAY_BARRELS_ALT", 34);
	func_1584(6, 358.3705f, 1518.647f, 183.8145f, 223.0325f, 1, 2, 5, "CHARLES_OUTSIDE_2ND_TOWER", 34);
	func_1584(7, 363.2917f, 1512.689f, 183.8677f, 220.1983f, 1, 2, 5, "CHARLES_INSIDE_2ND_TOWER", 34);
	func_1584(8, 366.2886f, 1509.894f, 182.3628f, func_1583(1, 6), 0, 0, 4, "CHARLES_WALKWAY_BOXES", 34);
	func_1584(9, 363.9899f, 1480.91f, 179.167f, 106.4846f, 0, 0, 4, "CHARLES_GROUND_BOXES", 34);
	func_1584(10, 363.8638f, 1482.265f, 179.203f, 91.8309f, 1, 0, 5, "CHARLES_GROUND_BOXES_ALT", 34);
	func_1584(11, 349.76f, 1467.39f, 178.6369f, 35.17f, 0, 2, 6, "CHARLES_OUTSIDE_JAIL", 34);
	func_1584(13, func_926(3, 6), func_1583(3, 6), 0, 0, 4, "CHARLES_FIGHT_WAVE_01", 34);
	func_1584(14, func_926(3, 7), func_1583(3, 7), 3, 0, 2, "CHARLES_FIGHT_WAVE_02", 34);
	func_1584(15, func_926(3, 12), func_1583(3, 12), 3, 0, 2, "CHARLES_FIGHT_WAVE_02_ALT", 34);
	func_1584(16, func_926(3, 9), func_1583(3, 9), 0, 0, 4, "CHARLES_FIGHT_WAVE_03", 34);
	func_1584(17, 359.9766f, 1486.265f, 179.0872f, 7.5564f, 1, 0, 4, "CHARLES_FIGHT_WAVE_03_ALT", 34);
	func_1584(18, func_926(3, 11), func_1583(3, 11), 0, 0, 4, "CHARLES_FIGHT_WAVE_04", 34);
	func_1584(19, 354.5034f, 1493.803f, 178.8349f, 75.7571f, 0, 2, 5, "CHARLES_FIGHT_WAVE_04_ALT", 34);
	func_1584(20, func_926(3, 14), func_1583(3, 14), 2, 0, 0, "CHARLES_FIGHT_WAVE_05", 34);
	func_1584(21, 342.0017f, 1489.124f, 178.6109f, 62.3184f, 1, 0, 4, "CHARLES_FIGHT_WAVE_05_ALT", 34);
	func_1584(22, 329.4866f, 1485.166f, 178.9142f, 237.2759f, 1, 2, 4, "CHARLES_WALL_PRE_EXPLOSION", 34);
	func_1584(23, 330.6557f, 1485.447f, 178.8105f, 150.4123f, 0, 2, 5, "CHARLES_WALL_EXPLOSION", 34);
	func_1584(12, 347.4359f, 1474.859f, 178.6981f, func_1583(3, 5), 1, 0, 0, "ARTHUR_FIGHT_WAVE_01", 34);
	func_1584(24, 346.2861f, 1471.768f, 178.7422f, 311.3868f, 0, 2, 4, "EAGLE_FLIES_FIGHT_WAVE_01", 34);
	func_1584(25, func_926(3, 10), func_1583(3, 10), 1, 0, 5, "EAGLE_FLIES_FIGHT_WAVE_02", 34);
	func_1584(26, 349.509f, 1467.451f, 178.6369f, 33.8819f, 0, 2, 6, "EAGLE_FLIES_FIGHT_WAVE_02_ALT", 11);
	func_1584(27, func_926(3, 12), func_1583(3, 12), 3, 0, 2, "EAGLE_FLIES_FIGHT_WAVE_03", 15);
	func_1584(28, func_926(3, 7), func_1583(3, 7), 3, 0, 2, "EAGLE_FLIES_FIGHT_WAVE_03_ALT", 14);
	func_1584(29, func_926(3, 13), func_1583(3, 13), 2, 0, 2, "EAGLE_FLIES_FIGHT_WAVE_04", 34);
	func_1584(30, 359.9766f, 1486.265f, 179.0872f, 7.5564f, 1, 0, 4, "EAGLE_FLIES_FIGHT_WAVE_04_ALT", 17);
	func_1584(31, func_926(3, 15), func_1583(3, 15), 1, 0, 5, "EAGLE_FLIES_FIGHT_WAVE_05", 34);
	func_1584(32, 354.5034f, 1493.803f, 178.8349f, 75.7571f, 0, 2, 5, "EAGLE_FLIES_FIGHT_WAVE_05_ALT", 19);
	func_1584(33, 324.7f, 1486.48f, 179.4f, 125.57f, 1, 0, 0, "EAGLE_FLIES_WALL_EXPLOSION", 34);
}

void func_933(int iParam0)
{
	Global_36606 = { func_1585() };
	Global_36610 = { func_1585() };
	Global_36605 = iParam0;
}

void func_934()
{
	if (!_does_scenario_point_exist(&(uLocal_261[0])))
	{
		uLocal_261[0] = create_scenario_point(1952317745, 317.79f, 1506.27f, 185.82f, 36.87f, 4f, 0f, 1);
	}
	if (!_does_scenario_point_exist(&(uLocal_261[1])))
	{
		uLocal_261[1] = create_scenario_point(1952317745, 321.2f, 1511.15f, 185.87f, 0f, 3.5f, 0f, 1);
	}
	if (!_does_scenario_point_exist(&(uLocal_261[2])))
	{
		uLocal_261[2] = create_scenario_point(1952317745, 330.53f, 1506.66f, 185.83f, -23.499f, 4f, 0f, 1);
	}
	if (!_does_scenario_point_exist(&(uLocal_261[3])))
	{
		uLocal_261[3] = create_scenario_point(1952317745, 323.35f, 1509.52f, 188.96f, -114.5f, 4f, 0f, 1);
	}
	if (!_does_scenario_point_exist(&(uLocal_261[4])))
	{
		uLocal_261[4] = create_scenario_point(1952317745, 323.3f, 1509.47f, 192.63f, -111.49f, 4f, 0f, 1);
	}
}

void func_935(var uParam0)
{
	func_1270(uParam0, 0);
	func_1586(uParam0);
	func_185(0);
	func_1587(uParam0);
	func_1588(uParam0);
	func_1589(uParam0);
	func_1590(uParam0);
	func_1591(uParam0);
	func_1592(uParam0);
	func_1593(uParam0);
	func_1594(uParam0);
	func_1595(uParam0);
	_0xa3716a77dcf17424(Global_35, -2002235300, 0);
	iVar0 = func_925(uParam0);
	if (iVar0 >= 6 && iVar0 < 8)
	{
		func_1596(uParam0);
	}
	else
	{
		func_1597();
	}
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (func_77() == 56)
		{
			func_1598(56, (*Global_1888801)[56]->f_4, &uLocal_7591);
		}
	}
	if (iVar0 == 4 || iVar0 == 5)
	{
		func_1599();
	}
	if (iVar0 == 6 && func_166(58))
	{
		if (iVar7435 == 0)
		{
			func_1356(1, uParam0);
			func_1356(2, uParam0);
		}
	}
	if ((iVar0 == 6 || iVar0 == 7) || iVar0 == 8)
	{
		set_ped_reset_flag(Global_35, 298, true);
	}
	if (iVar0 == 25)
	{
		_disable_first_person_cam_this_frame_2();
	}
	if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
	{
		if (!func_166(43))
		{
			_0x9f9a829c6751f3c7(player_id(), 47, 1);
		}
	}
	if (iVar0 <= 5)
	{
		func_1600();
	}
	else
	{
		func_194();
	}
	_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
	func_1601(uParam0);
	func_1602(uParam0);
}

void func_936(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1603(uParam0);
}

void func_937(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_221())
			{
				if (func_909(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_228(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_938(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1604(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1605();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1310(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_939(var uParam0)
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
		if (func_247() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_247() && !func_54())
	{
		func_905(uParam0, 1048576);
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
			func_905(uParam0, 134217728);
		}
	}
}

void func_940(var uParam0)
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

void func_941(var uParam0)
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

void func_942(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = get_itemset_size(Local_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
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
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (get_itemset_size(Local_14) - 1);
	}
}

int func_943(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_263(uParam0->f_5423[iVar0]))
		{
			func_820(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_944(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1606(iVar0))
	{
		return false;
	}
	iVar1 = func_1607(iParam2);
	if (!func_1608(iVar1))
	{
		return false;
	}
	if (!func_1609(uParam0, iParam1, iParam2))
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

int func_945(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_946(var uParam0, int iParam1)
{
	return 1;
}

void func_947(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_228(&(uParam0->f_603));
	}
}

void func_948(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_949(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_909(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_264(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_265(uParam0->f_5421))
		{
			iVar2 = func_266(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1610(uParam0->f_5421, iVar1);
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
	while (iVar1 < get_itemset_size(Local_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, Local_14);
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

float func_950(var uParam0)
{
	return func_909(&(uParam0->f_603));
}

bool func_951(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_952(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_944(uParam0, iParam1, 4))
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
		func_1611(uParam0);
		if (func_1612(uParam0))
		{
			func_1613(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_905(uParam0, 524288);
		func_1614(&(uParam0->f_7375), 4);
		if (func_1604(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1605();
		}
		return true;
	}
	return false;
}

void func_953(var uParam0)
{
	func_1615(uParam0);
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

bool func_954(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_904(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_905(uParam0, 2097152);
			func_274(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_946(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1509(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_904(uParam0))
			{
				func_905(uParam0, 2097152);
				func_906(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_906(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_904(uParam0))
		{
			func_905(uParam0, 2097152);
			func_1309(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_906(uParam0, Var0);
	}
	return true;
}

bool func_955(var uParam0)
{
	return func_1616(&(uParam0->f_7375));
}

void func_956(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1617(uParam0))
		{
			func_443(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1618(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_957(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_263(uParam0->f_5423[iVar1]))
		{
			if (func_1619(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1620(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_958(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1621(uParam0))
		{
			func_443(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1618(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_959(var uParam0)
{
	switch (func_1622(&iVar0))
	{
		case 1:
			func_1623(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_198(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_960(var uParam0, int iParam1)
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

int func_961(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1308(uParam0);
		func_905(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1509(uParam0, iParam1) };
	if (func_1624(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_962(var uParam0, int iParam1)
{
	func_1625(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_234(uParam0, iParam1));
}

void func_963(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_948(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_905(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_905(uParam0, 4);
		func_905(uParam0, 8192);
		func_905(uParam0, 536870912);
		func_274(uParam0, 4);
		func_65(0);
		func_64(0);
		func_905(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1626(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_389(uParam0, 524288);
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
				func_1627(1, 1);
			}
		}
	}
}

void func_964(bool bParam0)
{
	if (!func_205(0, 0, 1) || bParam0)
	{
		iVar0 = func_1093();
		iVar1 = func_1096(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1628(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1628(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_965(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1629(bParam1, bParam2, bParam3);
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

var func_966(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1630(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1631(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1630(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_967(var uParam0)
{
	return true;
}

bool func_968(var uParam0)
{
	return true;
}

int func_969(var uParam0)
{
	return 1;
}

int func_970(int iParam0)
{
	iVar0 = func_680(func_1632(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_971(int iParam0)
{
	if (func_972(81053684, iParam0))
	{
		return true;
	}
	if (func_972(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_972(int iParam0, int iParam1)
{
	iVar1 = func_680(func_1632(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_609(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_973()
{
	return Global_1946804->f_2792;
}

bool func_974(int iParam0)
{
	if (func_1633())
	{
		return false;
	}
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (!func_356(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_975(int iParam0, int iParam1)
{
	bVar3 = func_1634(iParam0);
	if (func_605(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_445(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1635();
			}
			else
			{
				iVar0 = func_1636();
			}
		}
		else if (func_402(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1637();
		}
		else
		{
			iVar0 = func_1638();
		}
	}
	else if (func_971(&iVar2))
	{
		if (func_605(iVar2, -1303648999))
		{
			iVar0 = func_1635();
		}
		else
		{
			iVar0 = func_1636();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1637();
	}
	else
	{
		iVar0 = func_1638();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_976(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0]->f_5 && iParam1) > 0;
}

void func_977(int iParam0)
{
	func_979(iParam0, 1);
	func_979(iParam0, 128);
	func_979(iParam0, 256);
	func_979(iParam0, 512);
	func_979(iParam0, 1024);
	func_979(iParam0, 2048);
	func_979(iParam0, 4096);
	func_979(iParam0, 65536);
	func_979(iParam0, 16384);
	func_979(iParam0, 262144);
	func_979(iParam0, 524288);
	func_979(iParam0, 1048576);
	func_979(iParam0, 2097152);
	func_979(iParam0, 32768);
	func_979(iParam0, 131072);
	func_979(iParam0, 134217728);
	func_979(iParam0, 1073741824);
}

void func_978(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

void func_979(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_980(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return true;
		case 128:
			*iParam1 = 1606325429;
			return true;
		case 256:
			*iParam1 = 1743550585;
			return true;
		case 512:
			*iParam1 = 1064646155;
			return true;
		case 1024:
			*iParam1 = -536694793;
			return true;
		case 2048:
			*iParam1 = -1304053509;
			return true;
		case 4096:
			*iParam1 = 879715242;
			return true;
		case 65536:
			*iParam1 = -972364774;
			return true;
		case 16384:
			*iParam1 = -1100875244;
			return true;
		case 262144:
			*iParam1 = 1153596794;
			return true;
		case 524288:
			*iParam1 = 1016389820;
			return true;
		case 1048576:
			*iParam1 = -726966617;
			return true;
		case 2097152:
			*iParam1 = 1365901568;
			return true;
		case 32768:
			*iParam1 = -1658942149;
			return true;
		case 131072:
			*iParam1 = -1980913856;
			return true;
		case 134217728:
			*iParam1 = -1683207356;
			return true;
		case 1073741824:
			*iParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_981(int iParam0, int iParam1)
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

void func_982(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 || iParam1);
}

void func_983(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_981(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_981(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_981(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_981(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_981(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_981(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_981(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_981(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_981(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_981(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_981(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_981(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_981(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_981(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_981(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_981(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_981(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_981(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_981(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_981(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_981(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_981(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_981(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_981(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_981(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_981(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

var func_984(int iParam0, bool bParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			_0x2fcd528a397e5c88(iParam0, 8);
		}
		uVar0 = _0x4c39c95ae5db1329(iParam0, 0, 8);
		return uVar0;
	}
	if (bParam1)
	{
		_0x2fcd528a397e5c88(iParam0, 2442122);
		func_1639(&iParam0);
	}
	_0x18262cafebb5fbe1(iParam0, 0, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, 0, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, 0, 15);
	return uVar0;
}

void func_985(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

void func_986(int* iParam0)
{
	func_184(&(iParam0->f_2));
	if (_does_scenario_point_exist(iParam0->f_4))
	{
		_delete_scenario_point(iParam0->f_4);
	}
	func_1407(iParam0, 0);
	func_1407(&(iParam0->f_1), 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_scenario_point_exist(&(iParam0->f_34[iVar0])))
		{
			_delete_scenario_point(&(iParam0->f_34[iVar0]));
		}
		iVar0++;
	}
	if (does_entity_exist(iParam0->f_3))
	{
		func_1357(iParam0->f_3, 1, 1);
		set_object_as_no_longer_needed(&(iParam0->f_3));
	}
}

void func_987(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1407((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

bool func_988(int iParam0)
{
	return func_402(iVar7599, iParam0);
}

void func_989(int iParam0)
{
	func_1640(&uLocal_7602, iParam0);
}

bool func_990(int iParam0, bool bParam1)
{
	iVar0 = func_562(iParam0);
	if (bParam1)
	{
		if (!func_995(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_1641(), 1);
}

void func_991(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_525(iParam0))
	{
		return;
	}
	if (!is_ped_in_group(iVar0))
	{
		return;
	}
	if (get_ped_group_index(iVar0) != get_player_group(get_player_index()))
	{
		return;
	}
	if (_0x917760cfe7a0e0f1(iVar0))
	{
		_0xd747979c053efa7a(func_1641());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_1642(iParam0, 0, 0);
}

int func_992(bool bParam0)
{
	if (bParam0)
	{
		return func_1643(Global_1359489->f_4);
	}
	get_group_size(func_1641(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_1641(), iVar3);
		if (func_815(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_993()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1644(iVar0);
		iVar2 = func_1644(iVar0 + 1);
		if (!func_525(iVar1))
		{
			if (func_525(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_994(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_996(iParam0))
		{
			return;
		}
	}
	func_1645(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_995(int iParam0, int iParam1)
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
	if (func_402(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_402(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_402(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_402(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_402(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_402(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_402(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_402(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_996(int iParam0)
{
	return iParam0 > -1;
}

int func_997(int iParam0)
{
	if (!func_525(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_998(int iParam0)
{
	if (!func_996(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_999(int iParam0)
{
	if (!func_996(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1000(int iParam0, int iParam1, bool bParam2)
{
	if (!func_996(iParam0))
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

void func_1001(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_996(iParam0))
		{
			return;
		}
	}
	func_1645(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1002(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_996(iParam0))
	{
		return 0;
	}
	iVar0 = func_997(iParam0);
	if (func_995(iVar0, 0))
	{
		if (func_995(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_998(iParam0)) || func_999(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1646(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1647(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1648(iParam0);
					_0x7b204f88f6c3d287(func_1649(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1649(iParam0, 0));
					func_1650(iParam0);
				}
			}
			else
			{
				if (func_714(iParam0, 32768, 1))
				{
					iVar2 = func_1649(iParam0, 0);
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
		if (func_995((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_714(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1648(iParam0);
				_0x7b204f88f6c3d287(func_1649(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1649(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1648(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1651(iParam0, 0);
	return 1;
}

bool func_1003(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return func_260(iParam0, 16777216);
}

int func_1004(int iParam0)
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1005(int iParam0)
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	iVar0 = func_1652(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_1653(func_1006(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_1006(int iParam0)
{
	if (!func_256(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0]->f_1;
	}
	return Global_1058888->f_40615[iParam0]->f_1;
}

void func_1007(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_1 = iParam1;
}

void func_1008(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0]->f_3 = iParam1;
}

void func_1009(int iParam0)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (func_116(iParam0) && func_1654(iParam0))
	{
		func_1656(func_1655(iParam0));
	}
	else
	{
		func_1657(func_1655(iParam0));
	}
}

bool func_1010(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_1011(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_1012(int iParam0)
{
	return iParam0 != 0;
}

int func_1013(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

float func_1014()
{
	return (func_1658(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

void func_1015(int iParam0, int iParam1, var uParam2)
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

bool func_1016()
{
	return !&Global_1911774;
}

void func_1017(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1018(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1019(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1020(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1021(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1023(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1025(&Var0, func_1024(0));
	}
	if (!func_1026(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1029(iVar14);
	return uVar15;
}

int func_1022(bool bParam0)
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

struct<14> func_1023(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1024(bool bParam0)
{
	iVar0 = func_1022(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1031(923904168, func_1222(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1031(923904168, func_1222(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1031(923904168, func_1222(bParam0), -740156546, 0);
}

void func_1025(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1026(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1022(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1027(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1028(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	if (!func_1226(*uParam1, &Var0, bParam6, 0))
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
	if (!func_481(bParam6))
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

int func_1029(int iParam0)
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

bool func_1030(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1659(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_481(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_1022(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_1031(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_473(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1022(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_1032(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_596(43))
		{
			if (func_605(iParam0, 412399755))
			{
				func_1154(-1791518714);
				if (func_1155() == 0)
				{
					func_376(0, 10);
					iVar0 = func_1660(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1157(iParam0) < func_1158(iParam0))
						{
							func_602(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_596(44))
		{
			if (func_605(iParam0, 709057512))
			{
				func_1154(-2087881550);
				if (func_1155() == 1)
				{
					func_376(0, 10);
					iVar0 = func_1660(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1157(iParam0) < func_1158(iParam0))
						{
							func_602(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_596(45))
		{
			if (func_605(iParam0, -1478961327))
			{
				func_1154(1908068621);
				if (func_1155() == 2)
				{
					func_376(0, 10);
					iVar0 = func_1660(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1157(iParam0) < func_1158(iParam0))
						{
							func_602(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_596(46))
		{
			if (func_605(iParam0, -1238404098))
			{
				func_1154(1611247019);
				if (func_1155() == 3)
				{
					func_376(0, 10);
					iVar0 = func_1660(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1157(iParam0) < func_1158(iParam0))
						{
							func_602(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_596(47))
		{
			if (func_605(iParam0, 1160548794))
			{
				func_1154(1319635688);
				if (func_1155() == 4)
				{
					func_376(0, 10);
					iVar0 = func_1660(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1157(iParam0) < func_1158(iParam0))
						{
							func_602(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_1033(int iParam0)
{
	if (func_1661(iParam0) && func_1662())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_1034(int iParam0)
{
	return func_402(iVar7635, iParam0);
}

bool func_1035(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1036(int iParam0)
{
	iVar0 = func_486(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1663(iVar0);
}

int func_1037(int iParam0, int iParam1)
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
			func_1664(iVar2);
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

void func_1038()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1039(int iParam0, int iParam1)
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

int func_1040(int iParam0)
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

void func_1041(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1042(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1043(int iParam0, int iParam1)
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
			func_1665((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1665(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_198(&(Global_1898164->f_1[0])))
	{
		func_210(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1044(int iParam0, int iParam1, bool bParam2)
{
	if (!func_504(iParam0))
	{
		return;
	}
	func_1666(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1045(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1046(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_1047(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_1048()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1049(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1667(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_1050(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 417.1739f, 1443.75f, 171.0088f;
				case 1:
					return 415.5425f, 1443.191f, 171.675f;
				case 2:
					return 307.8952f, 1503.115f, 181.2454f;
				case 3:
					return 422.9284f, 1494.916f, 175.0905f;
				case 4:
					return 420.448f, 1450.571f, 170.1464f;
				case 5:
					return 423.1994f, 1447.194f, 169.7004f;
				case 6:
					return 376.8376f, 1476.801f, 178.7696f;
				case 7:
					return 373.6526f, 1489.681f, 179.1045f;
				case 8:
					return 366.39f, 1517.494f, 180.3545f;
				case 9:
					return 366.0976f, 1510.178f, 182.6045f;
				case 10:
					return 369.6842f, 1497.132f, 182.6045f;
				case 11:
					return 327.1095f, 1516.989f, 182.9459f;
				case 12:
					return 339.0557f, 1519.19f, 182.2087f;
				case 13:
					return 380.8308f, 1466.13f, 178.9308f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 308.0809f, 1497.395f, 186.8258f;
				case 1:
					return 310.2143f, 1501.63f, 186.8319f;
				case 2:
					return 392.0023f, 1349.059f, 180.0272f;
				case 3:
					return 318.7987f, 1508.235f, 186.5186f;
				case 4:
					return 322.2644f, 1508.859f, 186.9668f;
				case 5:
					return 363.1535f, 1513.006f, 184.1735f;
				case 6:
					return 367.5413f, 1505.011f, 182.7942f;
				case 7:
					return 358.3465f, 1472.727f, 179.3523f;
				case 8:
					return 342.9746f, 1471.775f, 179.1641f;
				case 9:
					return 342.088f, 1471.859f, 179.1641f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 346.0386f, 1467.831f, 179.1184f;
				case 1:
					return 344.6357f, 1468.653f, 179.4971f;
				case 2:
					return 349.818f, 1484.026f, 183.8319f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 346.5314f, 1470.975f, 179.269f;
				case 1:
					return 344.4424f, 1469.558f, 179.1054f;
				case 2:
					return 346.2942f, 1471.981f, 178.9141f;
				case 3:
					return 302.7401f, 1486.183f, 177.9398f;
				case 4:
					return 307.6599f, 1483.537f, 178.3397f;
				case 5:
					return 347.0774f, 1474.866f, 178.75f;
				case 6:
					return 348.6219f, 1474.083f, 178.75f;
				case 7:
					return 357.8334f, 1475.038f, 178.85f;
				case 8:
					return 332.4041f, 1488.085f, 179.074f;
				case 9:
					return 355.8468f, 1484.15f, 178.78f;
				case 10:
					return 353.8929f, 1465.768f, 178.6726f;
				case 11:
					return 354.1469f, 1489.141f, 178.85f;
				case 12:
					return 363.4361f, 1480.041f, 179.5028f;
				case 13:
					return 356.6884f, 1484.993f, 178.85f;
				case 14:
					return 336.1721f, 1483.469f, 178.7846f;
				case 15:
					return 346.5326f, 1493.601f, 178.7846f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 476.1559f, 2220.159f, 246.5117f;
				case 1:
					return 479.5653f, 2219.529f, 246.3684f;
				case 2:
					return 476.2691f, 2223.072f, 246.2994f;
				case 3:
					return 478.9951f, 2221.32f, 246.3671f;
				case 4:
					return 477.0961f, 1739.655f, 128.0405f;
				case 5:
					return 428.7225f, 1459.589f, 167.6666f;
				case 6:
					return 507.8702f, 1683.903f, 128.2245f;
				case 7:
					return 477.2274f, 1742.78f, 128.7524f;
				case 8:
					return 478.3563f, 1743.073f, 128.901f;
				case 9:
					return 477.693f, 1739.131f, 127.8897f;
				case 10:
					return 470.7502f, 1483.293f, 171.4454f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 332.7589f, 1484.201f, 178.812f;
				case 1:
					return 325.294f, 1480.284f, 179.9293f;
				case 2:
					return 322.045f, 1474.906f, 179.62f;
				case 3:
					return 317.2776f, 1465.531f, 178.8166f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 575.3957f, 1711.02f, 186.7137f;
				case 1:
					return 460.7237f, 2075.134f, 235.1372f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 315.9155f, 1466.488f, 179.2881f;
				case 1:
					return 312.7028f, 1460.394f, 176.1837f;
				case 2:
					return 313.3564f, 1461.077f, 176.5624f;
				case 3:
					return 305.7186f, 1449.818f, 169.218f;
				case 4:
					return 317.1782f, 1465.636f, 178.5923f;
				case 5:
					return 313.0188f, 1459.823f, 175.9582f;
				case 6:
					return 256.6956f, 1389.297f, 173.8035f;
				case 7:
					return 311.9121f, 1467.958f, 178.9134f;
				case 8:
					return 11.3617f, 1538.285f, 112.8328f;
				case 9:
					return 155.6248f, 1384.757f, 168.5098f;
				case 10:
					return 20.267f, 1433.132f, 137.5098f;
				case 11:
					return 8.8278f, 1501.701f, 116.5098f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -3.0879f, 1547.478f, 111.7625f;
				case 1:
					return -435.3921f, 1056.232f, 86.9171f;
				case 2:
					return -134.8017f, 1570.782f, 113.8368f;
				case 3:
					return -130.621f, 1570.428f, 114.1734f;
				case 4:
					return -654.113f, 1433.994f, 95.593f;
				case 5:
					return -676.176f, 1430.33f, 95.0926f;
				case 6:
					return -15.3447f, 1541.261f, 111.7645f;
				case 7:
					return -78.5391f, 1504.134f, 113.2459f;
				case 8:
					return -87.2287f, 1465.349f, 108.7658f;
				case 9:
					return -14.5853f, 1557.827f, 110.7991f;
				case 10:
					return -32.1297f, 1547.75f, 106.8936f;
				case 11:
					return -50.8737f, 1510.241f, 107.5651f;
				case 12:
					return -91.2717f, 1462.727f, 108.8307f;
				case 13:
					return -50.933f, 1509.638f, 107.6313f;
				case 14:
					return -102.991f, 1409.036f, 112.3209f;
				case 15:
					return -45.6352f, 1535.659f, 107.6194f;
				case 16:
					return -176.4383f, 1430.999f, 109.0096f;
				case 17:
					return -87.9167f, 1435.59f, 101.6817f;
				case 18:
					return -238.578f, 1383.936f, 103.2286f;
				case 19:
					return -134.893f, 1418.681f, 101.6988f;
				case 20:
					return -256.4448f, 1251.079f, 95.0316f;
				case 21:
					return -274.7039f, 1314.01f, 95.9513f;
				case 22:
					return -223.9011f, 1244.791f, 91.0815f;
				case 23:
					return -265.81f, 1284.726f, 93.556f;
				case 24:
					return -407.927f, 1056.498f, 89.1235f;
				case 25:
					return -349.4443f, 1118.604f, 85.9749f;
				case 26:
					return -412.8492f, 1056.058f, 88.7374f;
				case 27:
					return -357.1208f, 1117.379f, 85.8516f;
				case 28:
					return -194.9577f, 1422.488f, 112.4775f;
				case 29:
					return -160.6802f, 1417.97f, 103.4775f;
				case 30:
					return -197.7538f, 1410.642f, 112.2275f;
				case 31:
					return -161.0698f, 1417.839f, 103.2275f;
				case 32:
					return -231.5013f, 1168.693f, 91.8355f;
				case 33:
					return -251.8814f, 1258.386f, 90.7974f;
				case 34:
					return -236.8554f, 1164.984f, 91.4279f;
				case 35:
					return -251.3995f, 1258.846f, 90.7812f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 344.0074f, 1472.577f, 178.9141f;
				case 1:
					return 345.5074f, 1470.352f, 179.9141f;
				case 2:
					return 346.1078f, 1467.693f, 179.0824f;
				case 3:
					return 345.2469f, 1469.125f, 179.0902f;
				case 4:
					return 345.4381f, 1471.763f, 179.1244f;
				case 5:
					return 346.6232f, 1471.066f, 178.9141f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -440.5023f, 1053.125f, 87.6662f;
				case 1:
					return -442.9778f, 1052.066f, 87.6921f;
				case 2:
					return -444.008f, 1050.161f, 87.8307f;
				case 3:
					return -438.6831f, 1056.483f, 87.1383f;
				case 4:
					return -442.1136f, 1056.083f, 86.9621f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 324.0535f, 1479.978f, 179.9195f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 366.2047f, 1482.049f, 179.269f;
				case 1:
					return 363.5474f, 1482.332f, 179.6054f;
				case 2:
					return 345.93f, 1467.406f, 178.9141f;
				case 3:
					return 420.2092f, 1450.631f, 170.461f;
				case 4:
					return 422.8915f, 1447.285f, 169.3397f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 341.2014f, 1486.584f, 179.269f;
				case 1:
					return 338.9223f, 1487.916f, 179.1054f;
				case 2:
					return 336.3652f, 1487.662f, 178.9141f;
				case 3:
					return 300.8604f, 1493.118f, 178.6898f;
				case 4:
					return 303.1824f, 1494.202f, 179.0897f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 355.6879f, 1484.162f, 178.9686f;
				case 1:
					return 352.1621f, 1486.857f, 178.7186f;
				case 2:
					return 349.3562f, 1487.271f, 178.631f;
				case 3:
					return 365.1083f, 1489.674f, 179.7186f;
				case 4:
					return 365.707f, 1491.552f, 179.6781f;
				case 5:
					return 363.8721f, 1495.176f, 179.2755f;
				case 6:
					return 357.0086f, 1503.981f, 179.2999f;
				case 7:
					return 353.4254f, 1504.454f, 179.2186f;
				case 8:
					return 356.6187f, 1505.967f, 179.0213f;
				case 9:
					return 349.9825f, 1501.808f, 178.9629f;
				case 10:
					return 337.043f, 1502.793f, 180.8742f;
				case 11:
					return 336.9312f, 1504.094f, 180.8743f;
				case 12:
					return 333.8073f, 1500.704f, 180.7642f;
				case 13:
					return 320.9655f, 1509.641f, 186.0782f;
				case 14:
					return 322.0266f, 1510.38f, 185.8492f;
				case 15:
					return 363.5462f, 1474.185f, 183.6594f;
				case 16:
					return 323.0697f, 1509.715f, 191.7247f;
				case 17:
					return 320.5485f, 1507.61f, 192.2637f;
				case 18:
					return 316.7175f, 1492.202f, 180.2979f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 356.6432f, 1482.978f, 179.0401f;
				case 1:
					return 352.8882f, 1483.222f, 178.5594f;
				case 2:
					return 352.4495f, 1485.752f, 178.5515f;
				case 3:
					return 362.4247f, 1483.44f, 179.3945f;
				case 4:
					return 358.0505f, 1484.891f, 179.0928f;
				case 5:
					return 360.7966f, 1490.393f, 179.7186f;
				case 6:
					return 361.6851f, 1493.843f, 179.3888f;
				case 7:
					return 353.6803f, 1494.439f, 178.8815f;
				case 8:
					return 355.3935f, 1498.792f, 179.2186f;
				case 9:
					return 351.7705f, 1491.563f, 178.7964f;
				case 10:
					return 341.8961f, 1501.583f, 180.9686f;
				case 11:
					return 339.3718f, 1499.606f, 181.0452f;
				case 12:
					return 340.4454f, 1488.567f, 179.0905f;
				case 13:
					return 312.1092f, 1492.484f, 186.2997f;
				case 14:
					return 315.4628f, 1504.108f, 185.8534f;
				case 15:
					return 363.5469f, 1474.186f, 183.6594f;
				case 16:
					return 323.3138f, 1509.479f, 192.6306f;
				case 17:
					return 320.5606f, 1507.614f, 192.2614f;
				case 18:
					return 326.4435f, 1489.256f, 179.1962f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 458.8378f, 2213.134f, 245.371f;
				case 1:
					return 455.6302f, 2214.675f, 245.371f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -230.7647f, 1405.521f, 103.3422f;
				case 1:
					return -271.7982f, 1327.293f, 113.5404f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1051(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 60.4561f;
				case 1:
					return 52.4561f;
				case 2:
					return 110.4561f;
				case 3:
					return 417.1569f;
				case 4:
					return 450.2219f;
				case 5:
					return 72.4584f;
				case 6:
					return 8.809f;
				case 7:
					return 17.6149f;
				case 8:
					return 13.6149f;
				case 9:
					return -76.3851f;
				case 10:
					return -74.3851f;
				case 11:
					return 127.5105f;
				case 12:
					return 114.9856f;
				case 13:
					return 100.0535f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -49.5439f;
				case 1:
					return -55.5439f;
				case 2:
					return 371.6077f;
				case 3:
					return 333.8717f;
				case 4:
					return 248.1873f;
				case 5:
					return 216.6281f;
				case 6:
					return 192.8335f;
				case 7:
					return 123.57f;
				case 8:
					return 87.0462f;
				case 9:
					return 88.6351f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 30.4561f;
				case 1:
					return 204.7113f;
				case 2:
					return 204.7113f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 306.4561f;
				case 1:
					return 306.4561f;
				case 2:
					return 132.4561f;
				case 3:
					return 225.6077f;
				case 4:
					return 229.5844f;
				case 5:
					return 316.9332f;
				case 6:
					return 338.9332f;
				case 7:
					return 30.0276f;
				case 8:
					return 82.9842f;
				case 9:
					return 364.2003f;
				case 10:
					return 314.2003f;
				case 11:
					return 98.1756f;
				case 12:
					return 22.1756f;
				case 13:
					return 90.1756f;
				case 14:
					return 67.3142f;
				case 15:
					return 111.3142f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 625.994f;
				case 1:
					return 287.994f;
				case 2:
					return 247.994f;
				case 3:
					return 281.994f;
				case 4:
					return 160.3657f;
				case 5:
					return 155.438f;
				case 6:
					return 215.438f;
				case 7:
					return 164.5009f;
				case 8:
					return 158.5009f;
				case 9:
					return 160.5009f;
				case 10:
					return 138.7986f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 78.4561f;
				case 1:
					return 152.4561f;
				case 2:
					return 145.4104f;
				case 3:
					return 147.2932f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 408.0532f;
				case 1:
					return 164.0532f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 146.4561f;
				case 1:
					return 142.4561f;
				case 2:
					return 140.4561f;
				case 3:
					return 528.4164f;
				case 4:
					return 149.2853f;
				case 5:
					return 144.3444f;
				case 6:
					return 465.9047f;
				case 7:
					return -53.0953f;
				case 8:
					return 266.6144f;
				case 9:
					return 459.9556f;
				case 10:
					return 385.9556f;
				case 11:
					return 351.9556f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 52.4561f;
				case 1:
					return -87.5439f;
				case 2:
					return 429.1135f;
				case 3:
					return 70.3275f;
				case 4:
					return 101.3829f;
				case 5:
					return 101.3829f;
				case 6:
					return 329.3499f;
				case 7:
					return 301.3499f;
				case 8:
					return 229.3499f;
				case 9:
					return 439.3467f;
				case 10:
					return 97.3468f;
				case 11:
					return 125.3468f;
				case 12:
					return 448.1412f;
				case 13:
					return 510.1407f;
				case 14:
					return 369.9137f;
				case 15:
					return 119.9137f;
				case 16:
					return 376.873f;
				case 17:
					return 446.873f;
				case 18:
					return 214.2771f;
				case 19:
					return 82.2771f;
				case 20:
					return 214.2771f;
				case 21:
					return 82.2771f;
				case 22:
					return 116.2771f;
				case 23:
					return 82.2771f;
				case 24:
					return 350.2771f;
				case 25:
					return 82.2771f;
				case 26:
					return 342.2771f;
				case 27:
					return 82.2771f;
				case 28:
					return 222.8792f;
				case 29:
					return 160.8792f;
				case 30:
					return -87.1208f;
				case 31:
					return 160.8792f;
				case 32:
					return -87.1208f;
				case 33:
					return 222.8792f;
				case 34:
					return -87.1208f;
				case 35:
					return 218.8792f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 128.273f;
				case 1:
					return 31.4539f;
				case 2:
					return 30.7275f;
				case 3:
					return 216.0235f;
				case 4:
					return 169.082f;
				case 5:
					return 131.9907f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -225.4836f;
				case 1:
					return -225.5744f;
				case 2:
					return -225.6802f;
				case 3:
					return 159.7848f;
				case 4:
					return 161.7437f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 172.4727f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 106.4561f;
				case 1:
					return 272.4561f;
				case 2:
					return -51.5439f;
				case 3:
					return 91.6077f;
				case 4:
					return 75.5844f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 434.4561f;
				case 1:
					return 440.4561f;
				case 2:
					return 78.4561f;
				case 3:
					return 221.6077f;
				case 4:
					return 217.5844f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 182.3664f;
				case 1:
					return 192.3664f;
				case 2:
					return 266.3664f;
				case 3:
					return 106.3664f;
				case 4:
					return 128.3664f;
				case 5:
					return 112.3664f;
				case 6:
					return 160.3664f;
				case 7:
					return 430.3664f;
				case 8:
					return 164.3664f;
				case 9:
					return 160.3664f;
				case 10:
					return 208.3664f;
				case 11:
					return 202.3664f;
				case 12:
					return 216.3664f;
				case 13:
					return 144.3664f;
				case 14:
					return 246.3664f;
				case 15:
					return 80.3664f;
				case 16:
					return 246.3664f;
				case 17:
					return 226.3664f;
				case 18:
					return 308.3664f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 130.3664f;
				case 1:
					return 116.3664f;
				case 2:
					return 126.3664f;
				case 3:
					return 144.3664f;
				case 4:
					return 174.3664f;
				case 5:
					return 152.3664f;
				case 6:
					return 154.3664f;
				case 7:
					return 236.3664f;
				case 8:
					return 176.3664f;
				case 9:
					return 232.3664f;
				case 10:
					return 222.3664f;
				case 11:
					return 228.3664f;
				case 12:
					return 262.3664f;
				case 13:
					return 278.3664f;
				case 14:
					return 216.3664f;
				case 15:
					return 80.3664f;
				case 16:
					return 246.3664f;
				case 17:
					return 228.3664f;
				case 18:
					return 226.3664f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 19.8599f;
				case 1:
					return -26.1401f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 122.2342f;
				case 1:
					return 42.2342f;
			}
			break;
	}
	return 0f;
}

void func_1052(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1668();
	}
	else
	{
		return;
	}
	func_1669();
	Global_40.f_9.f_14 = func_294();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1670())
		{
			func_380(Global_1310720->f_1);
		}
		else if (func_1671() == func_381(Global_36, 1) && func_1672() != 2)
		{
			func_380(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_380(Global_36);
		}
		func_1673(Global_36, &vVar0, &uVar4);
		if (!func_1670())
		{
			if (func_1674(vVar0, Global_36) < func_1674(Global_40.f_9.f_7, Global_36))
			{
				func_380(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_381(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1673(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_238(Global_1935630, 8192);
	}
	func_1675();
}

bool func_1053(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_263(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1054(int iParam0, int iParam1, bool bParam2)
{
	if (!func_996(iParam0))
	{
		return;
	}
	func_1676(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1055(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1056(int iParam0)
{
	func_1001(iParam0, 36, 1);
}

int func_1057(int iParam0, bool bParam1)
{
	if (!func_525(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1677(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1058(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_996(iParam0))
		{
			return false;
		}
	}
	func_1645(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1059(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_525(iParam0))
	{
		iVar1 = func_562(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1678(iParam0);
		}
	}
	if (func_1058(iParam0, 5, 1))
	{
		set_ped_config_flag(func_562(iParam0), 137, true);
	}
}

void func_1060(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_994(iParam0, 50, 1);
		func_994(iParam0, 48, 1);
		func_994(iParam0, 49, 1);
		func_994(iParam0, 51, 1);
		func_994(iParam0, 52, 1);
		func_994(iParam0, 54, 1);
		func_994(iParam0, 55, 1);
	}
	else
	{
		func_1001(iParam0, 50, 1);
		func_1001(iParam0, 48, 1);
		func_1001(iParam0, 49, 1);
		func_1001(iParam0, 51, 1);
		if (bParam3)
		{
			func_1001(iParam0, 54, 1);
		}
		else
		{
			func_994(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1001(iParam0, 52, 1);
			if (bParam3)
			{
				func_1001(iParam0, 55, 1);
			}
		}
		else
		{
			func_994(iParam0, 52, 1);
			if (!bParam3)
			{
				func_994(iParam0, 55, 1);
			}
		}
	}
}

void func_1061(int iParam0, bool bParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_562(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_562(iParam0), 204, false);
	}
}

void func_1062(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_525(iParam0))
	{
		return;
	}
	if (func_526(iParam0))
	{
		if (!func_267(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1058(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1057(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_562(iParam0);
	if (((does_entity_exist(iVar1) && func_1679(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1001(iParam0, 2, 1);
	}
	else
	{
		func_1680(iParam0);
		func_1001(iParam0, 1, 1);
	}
}

void func_1063(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_525(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1064(int iParam0)
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

void func_1065(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_223(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1681(iVar6);
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

void func_1066(int iParam0, int iParam1)
{
	iParam0 = func_275(iParam0);
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

bool func_1067(int iParam0, int iParam1)
{
	iParam0 = func_275(iParam0);
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

void func_1068(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1683(func_1682(255), 109029619));
	}
	else if (func_313())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1095();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1069(int iParam0)
{
	iParam0 = func_275(iParam0);
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

void func_1070(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1683(func_1682(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_313())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1095())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1071(int iParam0)
{
	iParam0 = func_275(iParam0);
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

float func_1072(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1073(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1487(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1069(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1069(iParam0) + 1;
	fVar6 = func_1684(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1685(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1074(int iParam0)
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

void func_1075(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1076()
{
	if (func_347())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1077(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1686((Global_40.f_4283.f_325 + iParam0));
}

void func_1078(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1076())
	{
		func_711(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_711(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1079(int iParam0)
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

char* func_1080(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1081(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1082(int iParam0)
{
	func_1090(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1083(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1084(1);
	}
}

void func_1084(bool bParam0)
{
	if (bParam0)
	{
		func_1687(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1688(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1085(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -15;
	}
	return func_1689(iParam0);
}

bool func_1086(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_707(iParam1) || !func_707(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1087(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1088(int iParam0)
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

bool func_1089(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1090(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1690(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1091(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1092(int iParam0, int iParam1, bool bParam2)
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

int func_1093()
{
	iVar0 = func_568();
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

int func_1094(int iParam0)
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
	fVar1 = func_1628(absf(fVar1) < 1f, func_1628(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1095()
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

int func_1096(int iParam0)
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

int func_1097()
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

void func_1098(int iParam0, bool bParam1, int iParam2)
{
	func_1691((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1692(iParam0);
}

void func_1099(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1693(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1100(bool bParam0)
{
	bVar3 = false;
	if (func_1694(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1695(iVar5, &iVar2, &iVar0))
			{
				if (!func_473(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1696(iVar2);
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
							if (func_478(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1093() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1093() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1697();
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

char* func_1101(int iParam0)
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

bool func_1102(int iParam0)
{
	return func_478(iParam0) == -427144552;
}

bool func_1103(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_606(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1108(iParam0, &uVar0, 1, 0, 0);
	}
	return func_356(iParam0, 1, 0);
}

void func_1104(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_478(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_611(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_612(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_477(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_475(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1105(int iParam0, int iParam1)
{
	if (func_605(iParam0, 58855631))
	{
		func_1239(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1106(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	if (!func_481(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1022(bParam3), iParam0);
}

int func_1107(int iParam0, bool bParam1)
{
	if (func_616(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1022(bParam1), iParam0, 0);
}

bool func_1108(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1698(&iParam0);
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	if (!func_481(0))
	{
		bParam3 = true;
	}
	if (func_1102(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1024(0) };
			Var4.f_9 = -1591664384;
			if (!func_1129(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1130(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1223(iParam0, 1))
			{
				if (!func_1129(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1130(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1699(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1106(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1700(iParam0, *uParam1, uParam1->f_4, bParam4);
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

int func_1109()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1110(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1111(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1701(iParam0);
	fVar1 = func_1702(iParam0);
	if ((Global_1347477->f_117 || !func_607(31)) || !func_1703(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1704(iVar0) >= 7)
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
	func_1705(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_711(_create_var_string(6, func_1706(iParam0), fVar1), "itemtype_textures", func_1707(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1112(int iParam0)
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

int func_1113(int iParam0, int iParam1)
{
	if (!func_1254(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1114(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_601() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1708(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1709(), 12);
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
			else if (func_1151() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1710(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1151(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1711(), 13);
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
			else if (func_1152() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1712(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1152(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1113(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1115(int iParam0, int iParam1, int iParam2)
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

bool func_1116(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1117(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1713(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_356(iVar2, 1, 0) || func_1715(func_1714(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1122(func_1713(iVar0))), func_1122(func_1713(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1151() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1716(iVar0)), func_1716(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1710() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1716(iVar0)), func_1716(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1716(iVar0)), func_1716(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1161(iParam3, func_1717(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1157(iVar2) - iParam7) >= func_1113(iParam3, func_1718(iVar0));
				}
				else
				{
					bVar1 = func_1157(iVar2) >= func_1113(iParam3, func_1718(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1157(iVar2) + iParam7) >= func_1113(iParam3, func_1718(iVar0));
			}
			else
			{
				bVar1 = func_1157(iVar2) >= func_1113(iParam3, func_1718(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1719(iVar2)), func_1719(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1720(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1721(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1721(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1152() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1722(iVar0)), func_1722(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1712() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1722(iVar0)), func_1722(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1722(iVar0)), func_1722(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1161(iParam3, func_1717(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1157(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1723(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1723(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1724(iVar2)), func_1724(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1119(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1711() >= 13)
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

bool func_1120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_198(func_211(0)) && ((func_1725(0) == 1 || func_1725(0) == 8) || func_1725(0) == 6))
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

var func_1121(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1122(int iParam0)
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

bool func_1123(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1124(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1125(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1126(int iParam0)
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
			func_1726(1);
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
			func_1727(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1727(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1727(3);
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
			func_1728(1);
			break;
		case 34:
			func_1729(1);
			break;
		case 35:
			func_1730(1);
			break;
		case 36:
			break;
		case 37:
			func_1731(0);
			break;
		case 38:
			func_1732(0);
			break;
		case 39:
			func_1733(0);
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
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_334(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_334(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_334(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_406()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_334(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1188(99217379) || func_1734(99217379) == 2110595215)
				{
					if (func_1095())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_356(iVar0, 1, 0))
					{
						func_657(iVar0, 1, 752097756);
					}
					func_636(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_356(1013902307, 1, 0))
				{
					func_657(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_356(1013902307, 1, 0))
				{
					func_657(1013902307, 1, 752097756);
				}
				if (!func_356(142640135, 1, 0))
				{
					func_657(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_356(786809402, 1, 0))
				{
					func_657(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_356(786809402, 1, 0))
				{
					func_657(786809402, 1, 752097756);
				}
				if (!func_356(-518019409, 1, 0))
				{
					func_657(-518019409, 1, 752097756);
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
			func_1735();
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

bool func_1127(int iParam0)
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

int func_1128(int iParam0, int iParam1)
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

bool func_1129(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1700(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1130(int iParam0, var uParam1, int iParam2)
{
	if (func_1736(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

void func_1131(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1737(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1132(int iParam0)
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
	iVar2 = func_294();
	func_343(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1133(int iParam0)
{
	if (func_1738(iParam0))
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

bool func_1134(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1135(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1136(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_607(50))
			{
				if (!func_607(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_607(51))
			{
				if (!func_607(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1137(int iParam0, int iParam1, var uParam2)
{
	if (!func_473(iParam1, 0))
	{
		return false;
	}
	if (func_478(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_609(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_679(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_605(iParam1, 866047851))
	{
		iVar5 = func_680(iVar4, 1);
		if (func_1739(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_609(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_605(iParam1, -1638171711))
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
			if (func_972(1868067663, &uVar0))
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
				iVar10 = func_1740(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1740(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_609(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_605(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1741(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1138()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1139()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1140()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_356(func_1742(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1141(int iParam0)
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

bool func_1142(int iParam0, int iParam1)
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
	if (func_356(iVar0, 1, 0) && func_356(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1143(int iParam0)
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

bool func_1144(int iParam0, int iParam1)
{
	iVar0 = func_1743(iParam0);
	if (iVar0 != -15)
	{
		func_343(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_708(iVar0, 1);
	}
	return false;
}

void func_1145(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1146(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1147(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1148(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1149(int iParam0)
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
	iVar1 = func_1157(iVar9);
	iVar2 = func_1157(iVar10);
	iVar3 = func_1157(iVar11);
	iVar5 = func_1158(iVar9);
	iVar6 = func_1158(iVar10);
	iVar7 = func_1158(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1157(iVar12);
		iVar8 = func_1158(iVar12);
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

void func_1150(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1151()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1744(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1152()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1153(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1723(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1723(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1723(iVar0))
		{
			*iParam2++;
		}
		if (func_1723(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1723(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1723(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1723(iVar0))
		{
			*iParam2++;
		}
		if (func_1723(iVar1))
		{
			*iParam2++;
		}
		if (func_1723(iVar0) && func_1723(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1723(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1723(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1723(iVar0))
		{
			*iParam2++;
		}
		if (func_1723(iVar1))
		{
			*iParam2++;
		}
		if (func_1723(iVar2))
		{
			*iParam2++;
		}
		if ((func_1723(iVar0) && func_1723(iVar1)) && func_1723(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1723(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1723(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1723(iVar0))
		{
			*iParam2++;
		}
		if (func_1723(iVar1))
		{
			*iParam2++;
		}
		if (func_1723(iVar2))
		{
			*iParam2++;
		}
		if (func_1723(iVar3))
		{
			*iParam2++;
		}
		if (((func_1723(iVar0) && func_1723(iVar1)) && func_1723(iVar2)) && func_1723(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1154(int iParam0)
{
	if (!func_1745(iParam0))
	{
		func_1747(func_1746(iParam0));
	}
}

int func_1155()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1745(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1156(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1157(iVar9);
	iVar2 = func_1157(iVar10);
	iVar3 = func_1157(iVar11);
	iVar5 = func_1158(iVar9);
	iVar6 = func_1158(iVar10);
	iVar7 = func_1158(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1157(iVar12);
		iVar8 = func_1158(iVar12);
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

int func_1157(int iParam0)
{
	if (func_356(iParam0, 1, 0))
	{
		iVar0 = func_477(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1158(int iParam0)
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

int func_1159(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1160(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1161(int iParam0, int iParam1)
{
	if (!func_1254(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1162(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1161(iParam1, 5) || iParam0 == func_1161(iParam1, 6)) || iParam0 == func_1161(iParam1, 7)) || iParam0 == func_1161(iParam1, 8)) || iParam0 == func_1161(iParam1, 9))
	{
		func_1153(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_602(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_604(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1163(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1161(iParam1, 5) || iParam0 == func_1161(iParam1, 6)) || iParam0 == func_1161(iParam1, 7)) || iParam0 == func_1161(iParam1, 8)) || iParam0 == func_1161(iParam1, 9))
	{
		if (func_1153(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_602(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_604(51, 0, 0, iVar0, func_1113(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_602(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_604(51, 0, 0, iVar0, func_1113(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1164()
{
	if (func_199((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1165(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1166(int iParam0)
{
	if (!func_1748(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1167(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_1168(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1749();
	if (iParam2 == 39)
	{
		Var0 = { func_692(iParam0, 1, 0) };
		iParam2 = func_680(func_693(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_605(iParam0, 866047851) && func_1739(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1170(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1750(func_1227(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1751(iParam2);
	func_1752(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1209(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1209(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1215(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1753(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1754(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1754(&(Global_1946804->f_1378), 1, 0);
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
				func_1438(func_1227(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1169(bool bParam0, bool bParam1, bool bParam2)
{
	func_1755(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1170(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1171()
{
	func_1756(&(Global_1946804->f_2776));
	func_1757(32768);
	func_1438(1108822547, 8, 6);
}

int func_1172(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_680(iParam0, 1);
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

void func_1173(int iParam0)
{
	if (func_1758(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1759(Var0);
}

void func_1174(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1759(Var0);
}

bool func_1175(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1022(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

float func_1176()
{
	if (func_1760())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1761(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1761(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1762();
	fVar2 = func_1763();
	fVar3 = func_1764();
	fVar4 = func_1765();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1766()));
	fVar7 = (func_1761(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1767(3, round((to_float(iVar8) * fVar10)), 0);
	func_1768(3, fVar9, fVar9 > 100f);
	return func_1769(fVar7, -100f, 100f);
}

float func_1177()
{
	if (func_1760())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1761(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1761(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1762();
	fVar2 = func_1763();
	fVar3 = func_1764();
	fVar4 = func_1765();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1766()));
	fVar7 = (func_1761(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1767(2, round((to_float(iVar8) * fVar10)), 0);
	func_1768(2, fVar9, fVar9 > 100f);
	return func_1769(fVar7, -100f, 100f);
}

float func_1178()
{
	if (func_1760())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1761(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1770())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1771())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1761(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1762();
	fVar2 = func_1763();
	fVar3 = func_1764();
	fVar4 = func_1765();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1766()));
	fVar7 = (func_1761(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1767(1, round((to_float(iVar8) * fVar10)), 0);
	func_1768(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1761(0);
	}
	return func_1769(fVar7, -100f, 100f);
}

bool func_1179(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1180(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1181(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_473(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1108(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_481(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1022(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1182(int iParam0, bool bParam1)
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
				return func_1772();
			}
			break;
	}
	return 0;
}

int func_1183(int iParam0)
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

bool func_1184(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1185(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1184(iParam0))
	{
		return;
	}
	if (func_1773(iParam0))
	{
		return;
	}
	if (!func_1774(iParam0))
	{
		func_1775(iParam0, 1, 0);
	}
	iVar0 = func_1776(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1777(iParam0, 512))
		{
			func_691(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_222() && !bParam1) && !func_205(0, 0, 1))
	{
		func_720(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1778(iParam0, 6);
	if (bParam2)
	{
		if (!func_205(0, 0, 1))
		{
			func_376(1, 4);
		}
	}
}

bool func_1186(int iParam0, bool bParam1)
{
	return func_1182(iParam0, 0) < func_1779(iParam0, bParam1);
}

bool func_1187(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_609(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1188(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_680(iParam0, 1)] != &Global_1946804->f_57[func_680(iParam0, 1)];
}

void func_1189(int iParam0, int iParam1)
{
	if (func_605(iParam1, 130796156))
	{
		func_1780(iParam1, 0);
	}
	else if (func_605(iParam1, 930141731))
	{
		func_1780(iParam1, 1);
		func_1781(iParam0);
	}
}

void func_1190(var uParam0, int iParam1)
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

int func_1191(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1782(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1783(uParam2, iParam0, Var1);
	return 1;
}

int func_1192(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1193(int iParam0)
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

int func_1194(int iParam0)
{
	if (!func_1784(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1195(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1785(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1196(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1785(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1197(bool bParam0)
{
	if (bParam0)
	{
		func_327(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1198();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1786(2032023096);
		func_330(-615217896);
		func_188(655868243, 1, 1, -142743235, 1);
		func_1788(146323340, func_1787());
		Var0 = { func_1495() };
		if (func_1789(&Var0) == -1387633835)
		{
			func_1790(&Var0);
			func_1791(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1792(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1488(iVar6) == 2010625508)
			{
				func_1793(iVar6, iVar7);
				func_1794(iVar6, iVar8);
				func_1795(iVar6, iVar9);
				func_1796(iVar6, 0);
				if (func_1797(iVar6))
				{
					func_1798(iVar6);
				}
				iVar10 = func_1799(iVar8);
				func_1800(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1198()
{
	if (!func_1801(-1898635967, func_1787(), 1))
	{
		return 0;
	}
	if (func_347())
	{
		if (!func_1801(146323340, func_1787(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1199()
{
	func_341(34411519);
	func_341(834124286);
	func_341(-570967010);
}

void func_1200(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_327(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_327(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_188(-1080874779, 3, 1, -142743235, 1);
		func_188(-223790555, 3, 1, -142743235, 1);
		func_188(1566032147, 3, 1, -142743235, 1);
		func_188(891311852, 5, 1, -142743235, 1);
		func_188(-1353737667, 5, 1, -142743235, 1);
		func_188(-330313895, 5, 1, -142743235, 1);
		func_188(-2051332199, 5, 1, -142743235, 1);
		func_188(1237770824, 5, 1, -142743235, 1);
		func_188(-1795542128, 3, 1, -142743235, 1);
		func_188(-1757588258, 3, 1, -142743235, 1);
		func_188(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1792(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1488(iVar0) == 153881023)
			{
				func_1793(iVar0, iVar1);
				func_1794(iVar0, iVar2);
				func_1795(iVar0, iVar3);
				func_1796(iVar0, 0);
				if (func_1797(iVar0))
				{
					func_1798(iVar0);
				}
				iVar4 = func_1799(iVar2);
				func_1800(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1198();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1201(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1802(iParam0);
	if (bParam3)
	{
		func_719(iParam0, sParam1, iParam2);
	}
}

bool func_1202(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1203(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1204()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1175("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1027(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1130(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1029(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1029(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1205(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1803(Param1, iParam5, &Var5, 0))
	{
		func_1028(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1181(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1804(Var19, 1);
}

int func_1206(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1805(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_609(iParam0) != -999503751)
		{
			func_1806(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_609(iParam0) != -999503751)
	{
		func_1806(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1807(iParam0, 1);
	return 1;
}

void func_1207()
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

void func_1208(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1808(0);
	}
	if (bParam0)
	{
		func_1220(8);
		func_1220(512);
	}
	else
	{
		func_1220(8);
		func_1220(16);
	}
}

void func_1209(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1210(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_682();
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

int func_1211(int iParam0)
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

void func_1212(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1809(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1227(iVar0, 1);
			if (func_1435(iVar0, iParam1))
			{
				vVar4 = { func_684(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1434(iVar7, 4))
				{
					func_1438(iVar7, 4, 6);
				}
			}
			else
			{
				func_1437(iVar7, 4, 6);
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

bool func_1213(int iParam0)
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
	func_1810(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1214(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1215(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_609(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1435(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1752(iVar1, iVar3);
		}
	}
	if (func_1188(-1586649372) && func_1435(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1752(iVar1, iVar3);
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
						func_1752(iVar1, iVar3);
					}
				}
			}
			func_1811(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1811(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1752(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1811(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1752(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1752(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1811(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1811(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1752(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1811(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1752(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1752(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_609(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1752(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1741(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_609(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1752(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_605(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1752(iVar1, iVar3);
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
						func_1752(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1741(&(Global_1946804->f_1497.f_1[iVar1])) || func_605(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1752(iVar1, iVar3);
					}
				}
			}
			switch (func_609(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_609(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1752(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_609(&(uParam0->f_1[iVar1])) || func_605(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1752(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1216(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1217(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1179(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1179(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1218(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1179(iParam0, 65536) && !func_1179(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1179(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1179(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1219()
{
	return Global_1905944->f_5694;
}

void func_1220(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1221(struct<4> Param0)
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
			if (func_1812(Param0))
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
			func_1813(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1220(8);
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
			if (func_1812(Param0))
			{
				return;
			}
			func_1813(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1220(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1174(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1222(bool bParam0)
{
	return func_1031(1328661203, func_1585(), -1591664384, bParam0);
}

bool func_1223(int iParam0, bool bParam1)
{
	if (func_609(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_607(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1224(bool bParam0)
{
	iVar0 = func_1022(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1031(271701509, func_1222(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1031(271701509, func_1222(bParam0), 12999093, 0);
}

bool func_1225(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_609(iParam0);
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

bool func_1226(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
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

int func_1227(int iParam0, int iParam1)
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

int func_1228(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1229(int iParam0, int iParam1)
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

void func_1230(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1231(int iParam0, int iParam1)
{
	iVar0 = func_700(*iParam0);
	iVar1 = func_699(*iParam0);
	if (iParam1 < 1 || iParam1 > func_705(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1232(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1233(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1234(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1235(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1236(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1237(int iParam0)
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

bool func_1238(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1102(iParam0))
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

int func_1239(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_473(iParam0, 0))
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

int func_1240(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1698(&iParam0);
	if (!func_473(iParam0, 0))
	{
		return 0;
	}
	if (!func_481(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1106(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1700(iParam0, *uParam1, uParam1->f_4, bParam3);
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

int func_1241(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_605(iParam0, -5284486))
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
		if (func_1814(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_663(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_666(iVar62, iVar61);
					if (func_473(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1241(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1241(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1814(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1242(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1815(1);
}

void func_1243(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1816(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_333(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1816(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_333(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1244()
{
	return Global_40.f_4283.f_325;
}

bool func_1245(int iParam0)
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

bool func_1246(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1247(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1248(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1249(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1250(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1251(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_406();
	bVar1 = false;
	if (bVar0 && !func_1817(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1817(37)) && !func_1817(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1817(43)) && !func_1817(44))
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
		if (func_1489(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1489(1) == 1)
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

int func_1252()
{
	return Global_40.f_1095.f_3054;
}

bool func_1253(int iParam0)
{
	iParam0 = func_275(iParam0);
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

bool func_1254(int iParam0, var uParam1)
{
	if (!func_1818(iParam0))
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

int func_1255()
{
	if (func_406())
	{
		if (!func_1817(3))
		{
			return func_1004(43);
		}
		if (func_1817(38) && !func_1817(43))
		{
			return func_1819(8);
		}
	}
	return 0;
}

bool func_1256(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1820(iParam0));
}

Vector3 func_1257(int iParam0, int iParam1)
{
	func_1254(15, &Var0);
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

int func_1258(int iParam0, int iParam1)
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
	iVar0 = func_1821(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1254(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1822(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1259(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1823(iParam0);
	if (func_497(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1260(int iParam0)
{
	if (!func_1254(15, &Var0))
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

bool func_1261(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1824(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1825(5))
	{
		if (func_1826(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1482(vParam0);
	if (bParam6)
	{
		iVar1 = func_381(vParam0, 1);
		if (func_116(iVar1) || func_1827(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1828(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1829())
	{
		if (func_1830(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1831(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_381(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1832(iParam3, iParam4))
	{
		return false;
	}
	if (func_1833(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1834(65536, 2))
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
		if (func_1835(vParam0, bParam10) || func_1836(vParam0, bParam10))
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

int func_1262(vector3 vParam0)
{
	iVar0 = func_1837(vParam0, 0f, 0f, 0, 2);
	return func_1837(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1263(int iParam0)
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

char* func_1264(int iParam0)
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
	return func_1451(iVar0);
}

char* func_1265(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1838(iVar0);
}

char* func_1266(int iParam0)
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

void func_1267(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1606(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 58320;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1268(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1606(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

bool func_1269(var uParam0)
{
	bVar0 = true;
	switch (iVar7942)
	{
		case 0:
			if (!_is_anim_scene_loaded(&(iLocal_7972[1]), true, false))
			{
				if (!_is_anim_scene_loading(&(iLocal_7972[1]), true))
				{
					load_anim_scene(&(iLocal_7972[1]));
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_7945 = 1;
			}
			break;
		case 1:
			if (func_995(Global_35, 1))
			{
				set_anim_scene_entity(&(iLocal_7972[1]), "ARTHUR", Global_35, 0);
			}
			else
			{
				bVar0 = false;
			}
			if (func_995(iVar299, 1))
			{
				set_anim_scene_entity(&(iLocal_7972[1]), "CHARLES", iVar299, 0);
			}
			else
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_7945 = 2;
			}
			break;
		case 2:
			iLocal_7945 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_1270(var uParam0, bool bParam1)
{
	iVar0 = func_925(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
			if (_0x8a3945405b31048f() > 1f || bParam1)
			{
				func_1839(1f);
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 25:
			if (_0x8a3945405b31048f() > 0.8f || bParam1)
			{
				func_1839(0.8f);
			}
			break;
	}
}

void func_1271(var uParam0, char[4] cParam1)
{
	func_1840(&(uParam0->f_7375), cParam1, func_162(uParam0, func_33(uParam0)) != 5);
}

void func_1272(var uParam0, char[4] cParam1)
{
	func_1841(&(uParam0->f_7375), cParam1);
	func_389(uParam0, 33554432);
}

void func_1273(var uParam0)
{
	iVar0 = func_925(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
		case 2:
			_0x660a8f876df1d4f8(34);
			_0x660a8f876df1d4f8(43);
			_0x0d7fd6a55fd63aef(34, 3, false);
			_0x0d7fd6a55fd63aef(43, 3, false);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 25:
			_0x660a8f876df1d4f8(19);
			_0x0d7fd6a55fd63aef(19, 3, false);
			_0x660a8f876df1d4f8(14);
			_0x0d7fd6a55fd63aef(14, 3, false);
			break;
	}
}

void func_1274()
{
	bVar0 = 15f;
	fVar1 = 0.5f;
	vVar2 = { get_entity_coords(iVar300, true, false) };
	func_1302(Global_35, vVar2, &uLocal_7368, 1112014848, 1106247680, (bVar0 + 5f), bVar0, fVar1, 0, 0, 1, 1, 1);
}

bool func_1275(var uParam0)
{
	func_1842(16, 1.5f);
	switch (iVar8024)
	{
		case 0:
			if (func_1843(uParam0))
			{
				func_1844();
			}
			if (!func_166(62))
			{
				if (func_1845("NTS3_IG0_WNT"))
				{
					func_453(62);
				}
			}
			else if (!func_1845("NTS3_IG0_WNT"))
			{
				func_1276(uParam0, 1);
			}
			else
			{
				func_1846();
				func_1847(Global_35, iVar299, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_1848(&uLocal_7422, iVar299);
				func_1295(uParam0, 0);
				Jump @402; //curOff = 167
				if (_0xa24c1d341c6e0d53(1, 0, 0) && func_1301(Global_35, vLocal_7615, fVar7595, 1, 1))
				{
					func_1849(uParam0, "MultiStart");
					func_1276(uParam0, 4);
				}
				else if (func_1843(uParam0) && func_1301(Global_35, vLocal_7615, fVar7595, 1, 1))
				{
					func_1276(uParam0, 2);
				}
				else
				{
					func_1846();
					func_1295(uParam0, 1);
					Jump @402; //curOff = 275
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_1337(1, 1);
					if (func_1843(uParam0) && !_0x9ff5f9b24e870748(Global_35))
					{
						func_1276(uParam0, 3);
					}
					else
					{
						Jump @402; //curOff = 327
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
						func_1337(0, 1);
						if (func_1850())
						{
							func_1276(uParam0, 4);
							return true;
						}
						Jump @402; //curOff = 365
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
						func_1337(0, 1);
						return true;
						Jump @402; //curOff = 389
						func_1276(uParam0, 0);
					}
				}
			}
			return false;
			default:
				break;
	}
}

void func_1276(var uParam0, int iParam1)
{
	if (iVar8023 == iParam1)
	{
		return;
	}
	switch (iVar8023)
	{
		case 0:
			func_1298(&(Local_302.f_3), 8);
			func_1851(2, 0);
			func_1852(Global_35, 1);
			func_1853(&uLocal_7422);
			break;
		case 1:
			func_184(&iLocal_7716);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
	}
	iLocal_8027 = iParam1;
	switch (iVar8023)
	{
		case 0:
			func_1297(&(Local_302.f_3), 8);
			func_1851(1, 0);
			Var0.f_1 = 1050253722;
			Var0.f_2 = 1067030938;
			Var0.f_5 = -1082130432;
			Var0.f_6 = -1082130432;
			Var0 = 0;
			Var0.f_3 = 0;
			func_1854(Global_35, iVar298, &Var0, -1, 1, 0);
			func_1855(&uLocal_7422);
			func_1856();
			func_134(uParam0, 0);
			func_1271(uParam0, "NormalStart");
			func_1271(uParam0, "MultiStart");
			break;
		case 1:
			func_184(&iLocal_7716);
			iLocal_7716 = func_1296(408396114, vLocal_7615, 1);
			set_blip_name_from_text_file(iVar7712, "NTS3_B_TENT");
			func_134(uParam0, 1);
			break;
		case 2:
			func_453(79);
			func_1857(&Global_35, 0, 3, "ARTHUR", 0);
			func_134(uParam0, 2);
			break;
		case 3:
			func_1858();
			func_1859(0, 3, 1, 1065185444);
			func_134(uParam0, 3);
			break;
		case 4:
			clear_ped_secondary_task(Global_35);
			func_134(uParam0, 29);
			break;
		case 5:
			break;
	}
}

void func_1277(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1278(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1606(iVar0))
	{
		return;
	}
	iVar1 = func_1607(iParam3);
	if (!func_1608(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1279(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1280(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1281(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_900(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1282(var uParam0)
{
	if (func_120(uParam0, 4) && !func_8(uParam0, 8))
	{
		return true;
	}
	return false;
}

void func_1283(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_995(*iParam0, 0))
	{
		return;
	}
	iVar0 = -2002235300;
	iVar1 = 954660191;
	iVar2 = 20;
	if (*iParam0 == iVar294)
	{
		iVar0 = 2031861036;
	}
	if (has_ped_got_weapon(*iParam0, iVar0, 0, false))
	{
		if (*iParam0 == Global_35)
		{
			iVar3 = get_ped_ammo_by_type(*iParam0, iVar1);
			iVar4 = (iVar2 - iVar3);
			if (iVar4 > 0)
			{
				func_327(iVar1, iVar2, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			set_ped_infinite_ammo(*iParam0, true, iVar0);
		}
	}
	else if (*iParam0 == Global_35)
	{
		func_327(iVar0, 1, bParam2, 0, 1, 752097756, 0, 0, 0, 0);
		func_327(iVar1, iVar2, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
	}
	else
	{
		func_1317(*iParam0, iVar0, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	if (bParam5)
	{
		return;
	}
	if (bParam3)
	{
		if (func_995(*iParam1, 0))
		{
			func_1860(iVar0);
			if (_0xaffd0ccf31f469b8(*iParam1) != iVar0)
			{
				_0x14ff0c2545527f9b(*iParam1, iVar0, Global_35);
			}
		}
	}
	else if (bParam4)
	{
		set_current_ped_weapon(*iParam0, iVar0, true, 0, false, false);
	}
	else
	{
		if (*iParam0 == Global_35)
		{
			_0xcffc3eccd7a5cceb(player_id(), iVar0, 0);
		}
		set_current_ped_weapon(*iParam0, iVar0, true, 7, false, false);
	}
}

void func_1284(var uParam0, int iParam1)
{
	if (iVar8024 == iParam1)
	{
		return;
	}
	switch (iVar8024)
	{
		case 0:
			func_1298(&(Local_302.f_3), 8);
			break;
		case 1:
			func_59(7);
			break;
		case 2:
			use_waypoint_recording_as_assisted_movement_route(func_193(2), 0, 1065353216, 1056964608, 1);
			break;
		case 3:
			break;
		case 4:
			break;
	}
	iLocal_8028 = iParam1;
	switch (iVar8024)
	{
		case 0:
			func_1291(1, 0);
			func_1297(&(Local_302.f_3), 8);
			func_134(uParam0, 0);
			break;
		case 1:
			func_1299(7);
			func_1861(&Global_35);
			set_ped_max_move_blend_ratio(Global_35, 1f);
			func_134(uParam0, 1);
			break;
		case 2:
			func_134(uParam0, 2);
			break;
		case 3:
			func_134(uParam0, 29);
			break;
		case 4:
			break;
	}
}

void func_1285()
{
	if (!func_166(6))
	{
		if (func_1286(2, Global_36) >= 250 && func_1306(5) != 0)
		{
			_set_weather_type(-1721991356, false, true, true, 45f, false);
			func_453(6);
		}
	}
	else if (!func_166(7))
	{
		if (!func_26(&uLocal_7392))
		{
			func_228(&uLocal_7392);
		}
		if (func_1401(&uLocal_7392) > 70000)
		{
			_set_weather_type(1420204096, false, true, true, 45f, false);
			func_453(7);
		}
	}
}

int func_1286(int iParam0, vector3 vParam1)
{
	if (iParam0 == 11)
	{
		return -1;
	}
	sVar0 = func_193(iParam0);
	if (waypoint_recording_get_closest_waypoint(sVar0, vParam1, &uVar1))
	{
		return uVar1;
	}
	return -1;
}

int func_1287(var uParam0)
{
	if (iVar8025 == 0)
	{
		func_1305(2, 0);
		func_1295(uParam0, 3);
	}
	else if (func_1294(Global_35, iLocal_252, 0))
	{
		if (Local_302.f_10 <= 4)
		{
			func_1297(&(Local_302.f_3), 8);
			func_59(7);
			func_1295(uParam0, 3);
		}
	}
	else
	{
		func_1298(&(Local_302.f_3), 8);
		func_1299(7);
		func_1295(uParam0, 2);
		_0xc71d07c96946e263(player_id(), iLocal_252);
	}
	if (iVar8025 >= 2)
	{
		func_1304(uParam0, 1);
	}
	switch (iVar8025)
	{
		case 0:
			if (Local_302.f_10 >= 2)
			{
				func_1284(uParam0, 1);
			}
			else
			{
				func_1862();
				Jump @268; //curOff = 189
				if (func_1294(Global_35, iLocal_252, 0))
				{
					func_1284(uParam0, 2);
				}
				else
				{
					func_1862();
					_0xc71d07c96946e263(player_id(), iLocal_252);
					Jump @268; //curOff = 229
					if (Local_302.f_10 >= 4)
					{
						func_1284(uParam0, 3);
					}
					else
					{
						func_1863();
						Jump @268; //curOff = 255
						return 1;
					}
				}
			}
			return 0;
			default:
				break;
	}
}

Vector3 func_1288(int iParam0, int iParam1)
{
	if (iParam0 == 11)
	{
		return 0f, 0f, 0f;
	}
	cVar0 = func_193(iParam0);
	vVar1 = { 0f, 0f, 0f };
	if (waypoint_recording_get_coord(cVar0, iParam1, &vVar1))
	{
		return vVar1;
	}
	return vVar1;
}

float func_1289(int iParam0, int iParam1)
{
	vVar0 = { func_1288(iParam0, iParam1) };
	vVar3 = { func_1288(iParam0, iParam1 + 1) };
	return func_1429(vVar0, vVar3, 1);
}

int func_1290(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_1291(int iParam0, bool bParam1)
{
	iVar1 = 0;
	if (Local_302.f_10 == iParam0 && !bParam1)
	{
		return;
	}
	if (!func_995(iVar298, 0))
	{
		return;
	}
	Local_302.f_10 = iParam0;
	set_ped_can_be_knocked_off_vehicle(iVar298, 1);
	switch (Local_302.f_10)
	{
		case 0:
			break;
		case 1:
			clear_ped_tasks_immediately(iVar298, false, true);
			fVar2 = 5f;
			fVar3 = 3.5f;
			fVar4 = 140f;
			Var5.f_4 = 1065353216;
			Var5.f_5 = 1065353216;
			Var5.f_9 = 1065353216;
			Var5.f_10 = 1065353216;
			Var5.f_14 = 1065353216;
			Var5.f_15 = 1065353216;
			Var5.f_17 = 1040187392;
			Var5.f_18 = 1040187392;
			Var5.f_19 = -1;
			Var5.f_26 = -1082130432;
			func_1864(&Var5);
			func_1866(iVar298, Global_35, &Var5, vLocal_7690, func_193(1), 25614, 1, fVar2, fVar3, func_1865(fVar4), 1.5f, 1092616192, -1, 0, 0, 0, 0, 1);
			break;
		case 2:
			if (!is_ped_on_mount(iVar298))
			{
				task_mount_animal(iVar298, Local_302.f_1, -1, -1, 1.5f, 1, 0, 0);
			}
			break;
		case 3:
			func_168(1);
			func_1861(&Global_35);
			task_follow_waypoint_recording(iVar298, func_193(2), 0, 31758, -1, 0, iVar1, -1);
			func_1297(&(Local_302.f_3), 8);
			break;
		case 4:
			task_turn_ped_to_face_entity(iVar298, Global_35, 0, 3f, 0.55f, -1082130432);
			break;
		case 5:
			func_456(&Global_35);
			task_follow_waypoint_recording(iVar298, func_193(2), 0, 31758, -1, 0, iVar1, -1);
			func_1298(&(Local_302.f_3), 8);
			func_1867(64);
			func_1558(76);
			break;
		case 6:
			task_turn_ped_to_face_entity(iVar298, Global_35, -1, -1f, -1f, -1082130432);
			task_look_at_entity(iVar298, Global_35, -1, 0, 51, 0);
			break;
		case 7:
			func_1297(&(Local_302.f_3), 8);
			func_453(40);
			func_184(&iLocal_7716);
			task_look_at_entity(iVar298, Global_35, 10000, 0, 51, 0);
			func_1861(&Global_35);
			task_follow_waypoint_recording(iVar298, func_193(2), 0, 31758, -1, 0, iVar1, -1);
			break;
		case 8:
			func_453(40);
			func_1861(&Global_35);
			task_follow_waypoint_recording(iVar298, func_193(2), 0, 31758, -1, 0, iVar1, -1);
			func_1297(&(Local_302.f_3), 8);
			func_184(&iLocal_7716);
			func_1868(64);
			break;
		case 9:
			func_168(0);
			if (func_1307(21, 0, 5, 0))
			{
				if (is_ped_on_mount(iVar298))
				{
					task_dismount_animal(iVar298, 262144, 0, 0, 0, 0);
				}
			}
			else
			{
				open_sequence_task(&iVar0);
				if (is_ped_on_mount(iVar298))
				{
					task_dismount_animal(0, 0, 0, 0, 0, 0);
					task_animal_interaction(0, Local_302.f_1, 2042508059, 0, 0);
				}
				close_sequence_task(iVar0);
				task_perform_sequence(iVar298, iVar0);
				clear_sequence_task(&iVar0);
			}
			break;
		case 10:
			break;
	}
}

void func_1292(var uParam0, int iParam1)
{
	if (iVar8026 == iParam1)
	{
		return;
	}
	switch (iVar8026)
	{
		case 0:
			func_184(&iLocal_7716);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
	iLocal_8030 = iParam1;
	switch (iVar8026)
	{
		case 0:
			func_134(uParam0, 0);
			func_184(&iLocal_7716);
			break;
		case 1:
			func_134(uParam0, 1);
			break;
		case 2:
			func_933(5);
			func_134(uParam0, 2);
			break;
		case 3:
			func_134(uParam0, 29);
			break;
		case 4:
			break;
	}
}

void func_1293(var uParam0)
{
	switch (func_1869(uParam0))
	{
		case 3:
			if (func_1870(uParam0, "NTS_RTFRIVARRIV", 0, 0, 0))
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (!is_entity_in_angled_area(iVar299, 1284.296f, 1751.041f, 162.1949f, 1255.658f, 1760.959f, 173.2893f, 30f, false, true, 0))
			{
				if (is_entity_in_angled_area(Global_35, 1284.296f, 1751.041f, 162.1949f, 1255.658f, 1760.959f, 173.2893f, 30f, false, true, 0) && func_1871(&uLocal_7782, 15f))
				{
				}
			}
			break;
		case 5:
			if (!func_222())
			{
				func_135(uParam0, -1);
			}
			break;
		case 6:
			if (func_1870(uParam0, "NTS_RTFCROSSED", 0, 0, 0))
			{
				func_135(uParam0, -1);
			}
			break;
		case 7:
			if (func_1870(uParam0, "NTS3_TIME", 0, 0, 0))
			{
				func_135(uParam0, -1);
			}
			break;
		case 8:
			if (func_1870(uParam0, "", 0, 0, 0))
			{
				func_135(uParam0, -1);
			}
			break;
		case 9:
			if (func_1870(uParam0, "NTS3_THEREITIS", 0, 0, 0))
			{
				func_135(uParam0, -1);
			}
			break;
		case 10:
			func_135(uParam0, -1);
			break;
	}
}

bool func_1294(int iParam0, int iParam1, bool bParam2)
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

int func_1295(var uParam0, int iParam1)
{
	if (func_166(66))
	{
		return 0;
	}
	sVar0 = func_1319(iParam1);
	if (is_string_null_or_empty(sVar0))
	{
		return 1;
	}
	if (func_1872(iParam1))
	{
		if (!func_1873(sVar0, 0, 0, -1, -1, 0))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1320(uParam0, sVar0, -1082130432, 0, 0, -1, -1, 0);
		}
		return 1;
	}
	if (func_1874(uParam0, sVar0))
	{
		func_563(&uLocal_7308);
		func_1875(iParam1);
		return 0;
	}
	if (!func_1873(sVar0, 0, 0, -1, -1, 0))
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
		func_1320(uParam0, sVar0, -1082130432, 0, 0, -1, -1, 0);
		func_228(&uLocal_7308);
		fLocal_7595 = 10000f;
		iLocal_7608 = 0;
		return 0;
	}
	if (func_1876(sVar0, 1))
	{
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 0:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 1097859072, 0))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 1:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 3:
			if (func_1306(2) == 3)
			{
				if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 1097859072, 0))
				{
					func_1630(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
			}
			break;
		case 5:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
		case 16:
		case 18:
		case 31:
		case 33:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 1097859072, 0))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 36:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 30f, 1))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 4:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 1097859072, 0))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 7:
			if (func_1878(&uLocal_7308, 1101004800) || func_1306(13) == 3)
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 9:
			if (func_1878(&uLocal_7308, 1101004800) || func_1306(0) == 3)
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 11:
		case 13:
		case 15:
		case 17:
			if (func_1878(&uLocal_7308, 1101004800))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 19:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 20:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 21:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 23:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 5f, 0))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 22:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 5f, 0) || func_1306(82) == 3)
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 24:
			if (func_1306(37) == 3)
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 25:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 26:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 27:
			if (func_1879(&uLocal_7308, &iLocal_7608))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 28:
			if (func_1877(&uLocal_7308, &Local_326, &fLocal_7595, 15f, 1))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 29:
			if (func_1877(&uLocal_7308, &Local_302, &fLocal_7595, 5f, 0))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 32:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 2:
		case 30:
			if (func_1880(&uLocal_7308, get_entity_coords(iLocal_252, true, false), &fLocal_7595, 5f))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 34:
			if (func_1879(&uLocal_7308, &iLocal_7608))
			{
				func_1630(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 35:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		case 37:
			func_1630(sVar0, 7500, 0, 0, 0, 1);
			iVar1 = 1;
			break;
		default:
			return 1;
	}
	if (iVar1 == 1)
	{
		func_563(&uLocal_7308);
		func_1875(iParam1);
	}
	return 0;
}

int func_1296(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1297(int iParam0, int iParam1)
{
	if (func_1881(iParam0, iParam1))
	{
		return;
	}
	func_425(iParam0, iParam1);
}

void func_1298(int iParam0, int iParam1)
{
	if (!func_1881(iParam0, iParam1))
	{
		return;
	}
	func_1640(iParam0, iParam1);
}

void func_1299(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1882(iParam0, 32);
	func_277();
}

Vector3 func_1300(int iParam0, int iParam1)
{
	if (iParam0 == 11)
	{
		return 0f, 0f, 0f;
	}
	cVar0 = func_193(iParam0);
	iVar1 = -1;
	vVar2 = { 0f, 0f, 0f };
	if (waypoint_recording_get_num_points(cVar0, &iVar1))
	{
		if (waypoint_recording_get_coord(cVar0, (iVar1 - (1 + iParam1)), &vVar2))
		{
			return vVar2;
		}
	}
	return vVar2;
}

bool func_1301(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1674(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1302(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1303(iParam0, vParam1, 0, iParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1883(iParam0, vParam1, 1);
	if (!func_26(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_27(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_563(iParam4);
	}
	if (func_26(iParam4))
	{
		if (bParam14)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (!is_entity_dead(iVar1))
		{
			set_ped_max_move_blend_ratio(iVar1, 1f);
		}
		if (!is_entity_dead(iVar2) && _is_draft_vehicle(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iVar2, iVar0);
				if (!is_entity_dead(iVar3))
				{
					set_ped_max_move_blend_ratio(iVar3, 1f);
					_0x0c3f0f7f92ca847c(iVar2, _0x46bf2a810679d6e6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_909(iParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1884(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1884(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (get_is_task_active(iParam0, 8))
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			set_ped_reset_flag(iParam0, 175, true);
		}
	}
	return false;
}

void func_1303(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
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
	if (func_1885(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar3 = func_1883(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1886() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
	if (bVar3 <= bParam6 && bVar3 > bParam7)
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
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (bParam9 == 1)
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
					if (bParam9 == 1)
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
		if (bVar3 <= bParam8)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1884(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1884(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

void func_1304(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
	}
	else if (iVar8025 < 7)
	{
		iLocal_8029 = 7;
	}
	switch (iVar8025)
	{
		case 0:
			func_228(&uLocal_7311);
			if (func_120(uParam0, 4))
			{
				iLocal_8029 = 2;
			}
			else
			{
				iLocal_8029 = 1;
			}
			break;
		case 1:
			if (func_1341(&uLocal_7311) < 8f)
			{
			}
			else if (is_waypoint_playback_going_on_for_ped(iVar298, 0))
			{
				if (get_ped_waypoint_progress(iVar298) <= 10)
				{
				}
				else if (func_1286(2, Global_36) < 18)
				{
				}
				else
				{
					if (func_1305(3, 0) == 3)
					{
						func_228(&uLocal_7311);
						iLocal_8029 = 3;
					}
					Jump @674; //curOff = 203
					if (func_1341(&uLocal_7311) < 8f)
					{
					}
					else if (is_waypoint_playback_going_on_for_ped(iVar298, 0))
					{
						if (get_ped_waypoint_progress(iVar298) <= 10)
						{
						}
						else if (func_1286(2, Global_36) < 18)
						{
						}
						else
						{
							if (func_1305(4, 0) == 3)
							{
								func_228(&uLocal_7311);
								iLocal_8029 = 3;
							}
							Jump @674; //curOff = 290
							if (func_1341(&uLocal_7311) < 4f)
							{
							}
							else
							{
								if (func_1305(5, 0) == 3)
								{
									func_228(&uLocal_7311);
									iLocal_8029 = 4;
								}
								Jump @674; //curOff = 329
								if (func_1341(&uLocal_7311) < 4f)
								{
								}
								else
								{
									if (func_1305(6, 0) == 3)
									{
										func_228(&uLocal_7311);
										iLocal_8029 = 6;
									}
									Jump @674; //curOff = 368
									if (func_1341(&uLocal_7311) < 3f)
									{
									}
									else
									{
										iVar0 = func_1286(2, Global_36);
										if (iVar0 >= 526)
										{
											iLocal_8029 = 5;
										}
										else if (!func_1817(56))
										{
											iLocal_8029 = 5;
										}
										else if (func_1306(76) == 9)
										{
										}
										else
										{
											if (iVar0 >= 414 && iVar0 < 526)
											{
												if (func_1305(8, 0) == 3)
												{
													func_228(&uLocal_7311);
													iLocal_8029 = 5;
												}
											}
											Jump @674; //curOff = 486
											if (func_1341(&uLocal_7311) < 4f)
											{
											}
											else
											{
												iVar0 = func_1286(2, Global_36);
												if (func_1306(76) != 0)
												{
													iLocal_8029 = 7;
												}
												else if (iVar0 >= 543)
												{
													iLocal_8029 = 7;
												}
												else
												{
													if (iVar0 >= 415 && iVar0 < 543)
													{
														if (func_1305(7, 0) == 3)
														{
															func_228(&uLocal_7311);
															iLocal_8029 = 7;
														}
													}
													Jump @674; //curOff = 589
													if (func_1306(9) != 3)
													{
														func_563(&uLocal_7311);
													}
													else
													{
														if (!func_26(&uLocal_7311))
														{
															func_228(&uLocal_7311);
														}
														if (func_1341(&uLocal_7311) < 3f)
														{
														}
														else
														{
															if (func_1305(10, 0) == 3)
															{
																func_563(&uLocal_7311);
																iLocal_8029 = 8;
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
					}
				}
			}
			default:
				break;
	}
}

int func_1305(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = func_450(iVar0);
	if (func_451(&(Local_7648[iVar1]), iVar2))
	{
		if (Local_7648.f_8 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (func_451(&(Local_7648.f_4[iVar1]), iVar2))
	{
		return 9;
	}
	if (bParam1)
	{
		Local_7648.f_9 = 1;
	}
	switch (iParam0)
	{
		case 69:
			func_1558(51);
			break;
		case 70:
			func_1558(51);
			func_1558(69);
			break;
		case 79:
			func_1558(83);
			func_1558(78);
			break;
		case 15:
			func_1314(13, 0, 1);
			func_1314(14, 0, 1);
			break;
		case 39:
			func_1314(37, 1, 1);
			func_1314(38, 0, 1);
			break;
	}
	func_856(Local_7648.f_4[iVar1], iVar2);
	return 9;
}

int func_1306(int iParam0)
{
	if (func_1887(&Local_7648, iParam0))
	{
		if (Local_7648.f_8 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (func_1888(iParam0))
	{
		return 9;
	}
	return 0;
}

bool func_1307(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1422();
	iVar1 = iVar0;
	iVar2 = iVar0;
	func_1232(&iVar1, iParam0);
	func_1233(&iVar1, iParam1);
	func_1232(&iVar2, iParam2);
	func_1233(&iVar2, iParam3);
	if (iParam2 < iParam0)
	{
		if (func_1086(iVar0, iVar2, 1) && !func_1889(iVar0, iVar1))
		{
			return false;
		}
		return true;
	}
	if (func_1889(iVar0, iVar1) && !func_1086(iVar0, iVar2, 1))
	{
		return true;
	}
	return false;
}

void func_1308(var uParam0)
{
	if (func_822(&(uParam0->f_7375), 128) || func_822(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_1890(&(uParam0->f_7375));
		func_1430(&(uParam0->f_7375), 128, 1);
		func_1430(&(uParam0->f_7375), 256, 1);
		func_1430(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1309(var uParam0)
{
	func_1891(&(uParam0->f_7375));
}

void func_1310(var uParam0, int iParam1, int iParam2)
{
	func_1640(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1311(int iParam0, int iParam1)
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

bool func_1312(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_1883(iParam0, Global_36, 1);
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

bool func_1313()
{
	return func_1892(1);
}

void func_1314(int iParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_1893(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	func_1894(sVar0, bParam1);
	func_1895(iParam0);
	if (bParam2)
	{
		func_1558(iParam0);
	}
}

void func_1315(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
	}
}

void func_1316(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_819(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (bParam2)
	{
		func_1410(uParam0->f_5423[iVar0], 256);
	}
	else
	{
		func_1409(uParam0->f_5423[iVar0], 256);
	}
	func_1896(uParam0->f_5423[iVar0], bParam2);
}

int func_1317(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_695(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_695(iVar4) && iVar4 != iVar0)
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
	if (func_20() == -1 && !func_122(iVar0))
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
				if (func_122(-183018591))
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
		if (iParam0 != Global_35 && func_695(iVar0))
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
		func_613(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1897(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1134(iVar0))
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

void func_1318(var uParam0, char[4] cParam1)
{
	func_1898(&(uParam0->f_7375), cParam1);
}

char* func_1319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NTS3_GTF_OBJ1";
		case 1:
			return "NTS3_O_TENT";
		case 2:
			return "NTS3_GTW_OBJ4";
		case 3:
			return "NTS3_GTF_OBJ1";
		case 4:
			return "NTS3_RTF_OBJ2";
		case 5:
			return "NTS3_GTF_OBJ1";
		case 6:
			return "NTS3_GTF_OBJ1";
		case 7:
			return "NTS3_GTF_OBJ2";
		case 8:
			return "NTS3_GTF_OBJ1";
		case 9:
			return "NTS3_GTF_OBJ2";
		case 10:
			return "NTS3_GTF_OBJ1";
		case 11:
			return "NTS3_SF_OBJ3";
		case 12:
			return "NTS3_GTF_OBJ1";
		case 13:
			return "NTS3_SF_OBJ3";
		case 14:
			return "NTS3_GTF_OBJ1";
		case 15:
			return "NTS3_SF_OBJ4";
		case 16:
			return "NTS3_GTF_OBJ1";
		case 17:
			return "NTS3_SF_OBJ3";
		case 18:
			return "NTS3_GTF_OBJ1";
		case 19:
			return "NTS3_SF_OBJ1";
		case 20:
			return "NTS3_SF_WALK";
		case 21:
			return "NTS3_SF_OBJ2";
		case 22:
			return "NTS3_GTW_CHAR";
		case 23:
			return "NTS3_GTF_OBJ1";
		case 24:
			return "NTS3_FEF_OBJ3";
		case 25:
			return "NTS3_FEF_OBJ4";
		case 26:
			return "NTS3_O_CKEYS";
		case 27:
			return "NTS3_GTW_OBJ1";
		case 28:
			return "NTS3_SW_OBJ2";
		case 29:
			return "NTS3_GTW_CHAR";
		case 30:
			return "NTS3_GTW_OBJ4";
		case 31:
			return "NTS3_GTR_OBJ1";
		case 32:
			return "NTS3_SW_OBJ1";
		case 33:
			return "NTS3_GTF_OBJ1";
		case 34:
			return "NTS3_GTR_OBJ3";
		case 35:
			return "NTS3_GTR_OBJ2";
		case 36:
			return "NTS3_GTS_OBJ1";
		case 37:
			return "NTS3_GTS_OBJ2";
	}
	return "";
}

void func_1320(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1631(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != uParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		uParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(uParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(uParam0, func_33(uParam0), 33554432);
}

void func_1321(var uParam0)
{
	if (!func_402(uParam0->f_6, 2))
	{
		func_1899(uParam0, 1, 0);
		if (does_entity_exist(uParam0->f_1))
		{
			func_1899(&(uParam0->f_1), 1, 0);
		}
		func_425(&(uParam0->f_6), 2);
	}
}

void func_1322(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1900(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1761(1);
	if (bParam1)
	{
		func_1901(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1902(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1903(1, func_1769(fParam0, -100f, 100f), bParam1);
}

void func_1323(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1900(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1761(2);
	if (bParam1)
	{
		func_1901(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1902(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1903(2, func_1769(fParam0, -100f, 100f), bParam1);
}

void func_1324(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1900(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1761(0);
	if (bParam1)
	{
		func_1901(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_1904();
	}
	if (bParam2)
	{
		fParam0 = func_1902(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1903(0, func_1769(fParam0, -100f, 100f), bParam1);
}

void func_1325(var uParam0, int iParam1)
{
	if (iVar8027 == iParam1)
	{
		return;
	}
	switch (iVar8027)
	{
		case 0:
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
			break;
	}
	iLocal_8031 = iParam1;
	switch (iVar8027)
	{
		case 0:
			func_1557(2, 0);
			func_134(uParam0, 0);
			break;
		case 1:
			func_134(uParam0, 1);
			if (!is_entity_dead(&(Local_5055[0])))
			{
				func_1857(Local_5055[0], 7, 16, "GUARD", 0);
			}
			if (!is_entity_dead(&(Local_5055[2])))
			{
				task_follow_nav_mesh_to_coord(&(Local_5055[2]), 321.9658f, 1511.582f, 188.856f, 1f, 20000, 0.25f, 0, 159.5904f);
			}
			break;
		case 2:
			func_134(uParam0, 2);
			break;
		case 3:
			func_134(uParam0, 3);
			break;
		case 4:
			func_134(uParam0, 4);
			break;
		case 5:
			func_134(uParam0, 5);
			break;
		case 6:
			set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			task_swap_weapon(Global_35, 0, 1, 0, 0);
			task_go_straight_to_coord(Global_35, get_entity_coords(iVar298, true, false), 1f, -1, 40000f, 1056964608, 0);
			func_134(uParam0, 5);
			break;
		case 7:
			func_134(uParam0, 29);
			break;
		case 8:
			break;
	}
}

void func_1326(var uParam0)
{
	func_1905(&(uParam0->f_7375));
}

void func_1327(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (does_entity_exist(iParam0->f_3))
	{
		return;
	}
	iParam0->f_3 = create_object(2055697445, vParam1, true, true, false, false, true);
	_0xf49574e2332a8f06(iParam0->f_3, (fVar8006 * fParam4));
	_0x63e39f09310f481f(iParam0->f_3, (fVar8008 * fParam4));
	if (!bParam5)
	{
		set_entity_can_be_damaged(iParam0->f_3, false);
	}
	func_1906(iParam0, 128);
}

void func_1328(bool bParam0)
{
	if (func_166(116))
	{
		return;
	}
	if (!func_166(115))
	{
		if (bParam0)
		{
			set_timecycle_modifier("nativeSon3_fortentry");
		}
		else
		{
			set_transition_timecycle_modifier("nativeSon3_fortentry", 10f);
		}
		func_453(115);
	}
}

int func_1329(var uParam0)
{
	if (!func_995(*uParam0, 0))
	{
		return 1;
	}
	_request_ped_emotional_preset(*uParam0, "Default_Shocked");
	if (_has_ped_emotional_preset_loaded(*uParam0, "Default_Shocked"))
	{
		return 1;
	}
	return 0;
}

void func_1330(var uParam0)
{
	if (!does_entity_exist(&(Local_5055[3])) || !does_entity_exist(&(Local_5055[4])))
	{
		return;
	}
	fVar0 = 1f;
	if (((Local_302.f_11 == 5 || Local_302.f_11 == 6) || Local_302.f_11 == 4) || Local_302.f_11 == 7)
	{
		fVar0 = 7f;
	}
	iVar1 = 0;
	if (!func_995(&(Local_5055[3]), 0))
	{
		iVar1++;
	}
	if (!func_995(&(Local_5055[4]), 0))
	{
		iVar1++;
	}
	if (iVar1 == 1)
	{
		if (!func_26(&uLocal_7374))
		{
			func_228(&uLocal_7374);
		}
		if (func_1341(&uLocal_7374) > fVar0)
		{
			if (!func_166(43))
			{
				func_425(&(Local_5055[3]->f_6), 2097152);
				func_425(&(Local_5055[4]->f_6), 2097152);
				func_1907(&Local_2433);
				func_1907(&Local_3359);
				func_1907(&Local_5055);
				func_1907(&Local_3976);
				func_1907(&Local_3127);
				func_1907(&Local_5441);
				func_453(43);
			}
			func_1908();
		}
	}
	else
	{
		func_563(&uLocal_7374);
	}
}

void func_1331(var uParam0)
{
	switch (func_1869(uParam0))
	{
		case 0:
			func_135(uParam0, 1);
			break;
		case 1:
			iLocal_7674 = 0;
			func_135(uParam0, -1);
			break;
		case 2:
			if (func_1306(13) == 3)
			{
				func_135(uParam0, 11);
			}
			break;
		case 3:
			func_135(uParam0, -1);
			break;
		case 4:
			func_135(uParam0, 5);
			break;
		case 5:
			func_135(uParam0, -1);
			break;
		case 6:
			func_135(uParam0, -1);
			break;
		case 7:
			func_135(uParam0, -1);
			break;
		case 8:
			if (func_1870(uParam0, "NTS3_WAIT", 0, 0, 0))
			{
				func_228(&uLocal_7773);
				func_135(uParam0, -1);
			}
			break;
		case 9:
			func_135(uParam0, -1);
			break;
		case 11:
			if (!func_221())
			{
				if (!func_166(4))
				{
					if (func_836(Global_35, 1, 0, 0) != -2002235300)
					{
						if (has_ped_got_weapon(Global_35, -2002235300, 0, false))
						{
							set_current_ped_weapon(Global_35, -2002235300, false, 0, false, false);
						}
						else
						{
							func_1283(&Global_35, &iLocal_252, 1, 0, 1, 0);
						}
					}
					func_1909(0);
					func_135(uParam0, 12);
					func_453(4);
				}
			}
			break;
		case 12:
			if (!func_166(25))
			{
				if (is_control_pressed(0, -128997553))
				{
					func_113(1);
					func_1909(1);
					func_135(uParam0, -1);
					func_453(25);
				}
			}
			break;
		case 13:
			func_135(uParam0, -1);
			break;
	}
}

void func_1332(var uParam0)
{
	func_1910(uParam0);
}

void func_1333(var uParam0)
{
	if (Local_302.f_11 <= 4)
	{
		func_1295(uParam0, 6);
		func_1297(&(Local_302.f_3), 8);
	}
	else if (Local_302.f_11 <= 6)
	{
		func_1295(uParam0, 7);
		func_1298(&(Local_302.f_3), 8);
	}
	else if (Local_302.f_11 <= 17)
	{
		func_1295(uParam0, 8);
		func_1297(&(Local_302.f_3), 8);
	}
	else if (Local_302.f_11 <= 19)
	{
		func_1295(uParam0, 9);
		func_1298(&(Local_302.f_3), 8);
	}
	else if (Local_302.f_11 <= 22)
	{
		func_1295(uParam0, 10);
		func_1297(&(Local_302.f_3), 8);
	}
}

void func_1334()
{
	switch (iVar8022)
	{
		case 0:
			func_1556(1);
			break;
		case 1:
			if (Local_302.f_11 >= 2)
			{
				func_1556(2);
			}
		else
		{
			}
			func_1911();
			default:
				break;
	}
}

void func_1335(var uParam0)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_1912((*uParam0)[iVar1]);
		iVar1++;
	}
}

void func_1336()
{
	if (!func_166(9))
	{
		_set_weather_type(1420204096, false, true, true, 60f, false);
		func_453(9);
	}
}

void func_1337(bool bParam0, bool bParam1)
{
	disable_all_control_actions(0);
	if (bParam0 && !_0xa24c1d341c6e0d53(0, 0, 1))
	{
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
	}
	else
	{
		disable_all_control_actions(1);
	}
	func_1913();
	enable_control_action(0, -668070958, true);
	enable_control_action(0, 1250966545, true);
	if (bParam1)
	{
		iLocal_7643 = get_frame_count();
	}
}

void func_1338(var uParam0, int iParam1)
{
	func_1914(&(uParam0->f_7375.f_860), iParam1);
}

int func_1339(var uParam0)
{
	if (!func_912(uParam0, 26))
	{
		return 0;
	}
	func_918(uParam0);
	func_917(uParam0, 0);
	func_928(1509509592, 1, 0);
	func_1283(&Global_35, &iLocal_252, 1, 0, 0, 0);
	func_1283(&Local_302, &(Local_302.f_1), 1, 0, 0, 0);
	func_131(1023.768f, 1619.207f, 200.1601f, 10f, 1, 0, 0, 0, 0);
	func_929(0, 1);
	func_460();
	_0x72d4cb5db927009c(-2002235300, -1, 0);
	func_465(0);
	if (!_does_volume_exist(&(iLocal_268[20])))
	{
		iLocal_268[20] = _0x0eb78c2b156635b1(665633627, 349.7881f, 1468.217f, 179.845f, 0f, 0f, 35.00479f, 1f, 1f, 1.278439f);
	}
	if (!_does_volume_exist(&(iLocal_268[21])))
	{
		iLocal_268[21] = _0x0eb78c2b156635b1(-1612834106, 348.3908f, 1470.694f, 179.8748f, 0f, 0f, -55.22883f, 5.634069f, 1.467006f, 2.655167f);
	}
	if (!_does_volume_exist(&(iLocal_268[22])))
	{
		iLocal_268[22] = _0x0eb78c2b156635b1(665633627, 344.299f, 1469.81f, 179.8165f, 0f, 0f, 0f, 1f, 1f, 1.191617f);
	}
	if (!_does_volume_exist(&(iLocal_268[23])))
	{
		iLocal_268[23] = _0x0eb78c2b156635b1(-1612834106, 341.9724f, 1471.676f, 179.8294f, 0f, 0f, 35.64489f, 2.524008f, 2.186027f, 2.617475f);
	}
	if (!_does_volume_exist(&(iLocal_268[24])))
	{
		iLocal_268[24] = _0x0eb78c2b156635b1(-1612834106, 342.5061f, 1470.932f, 179.8294f, 0f, 0f, 35.64489f, 2.524008f, 3.807585f, 2.617475f);
	}
	return 1;
}

void func_1340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!_0xc276fe69dda22bad(&(Local_183[iParam2])))
	{
		return;
	}
	iVar0 = iParam3;
	iVar1 = 1;
	if (func_402(iVar0, 2))
	{
		iVar1 = 0;
	}
	bVar2 = false;
	if (func_402(iVar0, 8))
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (func_402(iVar0, 4))
	{
		iVar3 = 1;
	}
	bVar4 = false;
	if (func_402(iVar0, 16))
	{
		bVar4 = true;
	}
	iVar5 = 0;
	if (!bVar2)
	{
		iVar5 = 1;
		if (func_402(iVar0, 32))
		{
			iVar5 = 0;
		}
	}
	bVar6 = true;
	if (func_402(iVar0, 64))
	{
		bVar6 = false;
	}
	vVar7 = { _0xf70f00013a62f866(Local_183[iParam2]->f_1) };
	if (!bVar4)
	{
		if (bVar6)
		{
			task_put_ped_directly_into_cover(0, vVar7, -1, iVar3, 0f, 1, iVar1, &(Local_183[iParam2]), bVar2, iVar5, 0);
		}
		else
		{
			task_put_ped_directly_into_cover(*iParam0, vVar7, -1, iVar3, 0f, 1, iVar1, &(Local_183[iParam2]), bVar2, iVar5, 0);
		}
	}
	if (*iParam0 != Global_35)
	{
		func_1915(*iParam0, Local_183[iParam2]->f_1, 1, 0);
	}
	*iParam1 = iParam2;
}

float func_1341(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0f;
	}
	if (func_508(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_560() - iParam0->f_1);
}

void func_1342(var uParam0, bool bParam1)
{
	if (!is_entity_dead(iVar298))
	{
		if (has_ped_got_weapon(iVar298, -183018591, 0, false))
		{
			remove_weapon_from_ped(iVar298, -183018591, true, -142743235);
		}
		func_1316(uParam0, iVar298, 0);
	}
	func_1916(1, 0);
	if (bParam1)
	{
		if (!func_8(uParam0, 8) || func_120(uParam0, 4))
		{
			func_1563(28, 0, 1);
		}
	}
	else if (Local_302.f_12 == 0)
	{
		func_1563(2, 0, 0);
	}
}

void func_1343()
{
	func_1917();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_1918(Local_7793[iVar0]);
		iVar0++;
	}
}

void func_1344(var uParam0, int iParam1)
{
	if (iVar8028 == iParam1)
	{
		return;
	}
	switch (iVar8028)
	{
		case 0:
			func_1298(&(Local_302.f_3), 8);
			func_184(&iLocal_7716);
			break;
		case 1:
			func_184(&iLocal_7716);
			func_1314(67, 0, 1);
			func_1314(35, 1, 1);
			break;
		case 2:
			func_184(&iLocal_7716);
			break;
		case 3:
			func_1919();
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			func_184(&(Local_3359[7]->f_2));
			func_1298(&(Local_302.f_3), 8);
			break;
		case 7:
			if (_0xe4c11f104620ddce(&(Local_3359[7]), 7))
			{
				_0x6569f31a01b4c097(&(Local_3359[7]), 7, 0);
			}
			if (_0xe4c11f104620ddce(&(Local_3359[7]), 5))
			{
				_0x6569f31a01b4c097(&(Local_3359[7]), 5, 0);
			}
			if (_0xe4c11f104620ddce(&(Local_3359[7]), 4))
			{
				_0x6569f31a01b4c097(&(Local_3359[7]), 4, 0);
			}
			func_1920(&(Local_3359[7]), 1, 0);
			func_184(&(Local_3359[7]->f_2));
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_563(&uLocal_7317);
			break;
		case 8:
			func_1298(&(Local_302.f_3), 8);
			break;
		case 9:
			func_187(&Local_7439, 1, 1, 1, 0);
			func_1298(&(Local_302.f_3), 8);
			break;
		case 10:
			func_184(&iLocal_7716);
			func_11(&iLocal_7788, 1, 1);
			_0xdd1232b332cbb9e7(3, 1, 0);
			if (does_entity_exist(iVar255))
			{
				delete_object(&iLocal_259);
			}
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
	}
	iLocal_8032 = iParam1;
	switch (iVar8028)
	{
		case 0:
			func_1921(Local_3359[0]);
			func_134(uParam0, 0);
			break;
		case 1:
			func_134(uParam0, 1);
			if (func_995(&(Local_3359[6]), 0))
			{
				if (!does_blip_exist(Local_3359[6]->f_2))
				{
					Local_3359[6]->f_2 = _blip_add_for_entity(831283580, &(Local_3359[6]));
					_blip_set_modifier(Local_3359[6]->f_2, -662251075);
				}
			}
			break;
		case 2:
			func_184(&iLocal_7716);
			if (!does_blip_exist(iVar7712))
			{
				iLocal_7716 = func_1296(408396114, 360.0506f, 1467.926f, 182.745f, 1);
			}
			func_134(uParam0, 2);
			break;
		case 3:
			func_1922();
			func_425(&(Local_2433[0]->f_6), 524288);
			func_134(uParam0, 3);
			break;
		case 4:
			func_1297(&(Local_302.f_3), 8);
			if (Local_3359[6]->f_34.f_30 != 0)
			{
				Local_3359[6]->f_14 = 12f;
			}
			func_1314(35, 1, 1);
			func_1314(67, 0, 1);
			func_1314(36, 0, 1);
			func_134(uParam0, 4);
			break;
		case 5:
			func_1297(&(Local_302.f_3), 8);
			set_ped_can_be_targetted(&(Local_3359[7]), false);
			if (!func_166(43))
			{
				set_ped_config_flag(&(Local_3359[7]), 192, true);
				set_ped_config_flag(&(Local_3359[7]), 253, true);
				set_ped_config_flag(&(Local_3359[7]), 273, true);
				set_ped_config_flag(&(Local_3359[7]), 277, true);
			}
			func_134(uParam0, 4);
			break;
		case 6:
			func_1297(&(Local_302.f_3), 8);
			func_1923(Local_3359[7]);
			func_134(uParam0, 5);
			break;
		case 7:
			if (!is_entity_dead(&(Local_3359[7])))
			{
				func_1349(&(Local_3359[7]), 1, 1);
			}
			func_184(&(Local_3359[7]->f_2));
			Local_3359[7]->f_2 = _blip_add_for_entity(1055493006, &(Local_3359[7]));
			set_blip_name_from_text_file(Local_3359[7]->f_2, "NTS3_C_GUARD");
			_0x18ff3110cf47115d(&(Local_3359[7]), 7, 0);
			func_1924(&(Local_3359[7]));
			_0x6569f31a01b4c097(&(Local_3359[7]), 7, 1);
			func_1923(Local_3359[7]);
			_0x6569f31a01b4c097(&(Local_3359[7]), 0, 1);
			_0x6569f31a01b4c097(&(Local_3359[7]), 1, 0);
			func_134(uParam0, 6);
			break;
		case 8:
			func_1925(Local_7439[0], "NTS3_C_KEYS", 0, -163964935, 0, 0, 0, 1, 0);
			func_1926(&(Local_3359[7]), 0);
			func_1297(&(Local_302.f_3), 8);
			func_1563(38, 0, 0);
			func_134(uParam0, 7);
			break;
		case 9:
			func_1563(40, 0, 0);
			func_134(uParam0, 8);
			break;
		case 10:
			if (!does_blip_exist(iVar7712))
			{
				iLocal_7716 = func_1296(408396114, 345.26f, 1468.55f, 178.74f, 1);
			}
			func_1552(Global_35);
			func_134(uParam0, 9);
			break;
		case 11:
			get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
			if (iVar0 != -1569615261)
			{
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			}
			func_1927(Global_35, 1);
			func_1857(&Global_35, 23, 90, "arthur", 0);
			func_134(uParam0, 10);
			break;
		case 12:
			get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
			if (iVar0 != -1569615261)
			{
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			}
			func_1927(Global_35, 1);
			func_188(-963496561, 1, 0, -142743235, 0);
			func_1928();
			func_134(uParam0, 10);
			break;
		case 13:
			func_134(uParam0, 29);
			break;
		case 14:
			break;
	}
}

void func_1345(var uParam0, int iParam1)
{
	func_1929(&(uParam0->f_7375.f_860), iParam1);
}

void func_1346()
{
	if (!func_166(115))
	{
		return;
	}
	if (!func_166(116))
	{
		clear_timecycle_modifier();
		func_166(116);
	}
}

int func_1347(var uParam0, bool bParam1)
{
	func_1930();
	if (!func_166(110))
	{
		if (func_1931(uParam0))
		{
			func_1932();
			func_453(110);
		}
	}
	func_1933(uParam0);
	func_1934(uParam0, bParam1);
	func_931();
	func_1935();
	func_191();
	func_1936(uParam0);
	func_1937(uParam0);
	func_1329(Local_3359[2]);
	func_1329(Local_3359[3]);
	if (func_1938(uParam0, 7, 65f, 1125515264, 0, 0, 1, 422991367))
	{
		func_453(66);
	}
	if (func_1939(uParam0, bParam1))
	{
		if (!func_166(43))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1348(int iParam0, bool bParam1)
{
	if (!func_264(Local_14.f_47))
	{
		Local_14.f_47 = { func_428() };
	}
	if (func_1940(&(Local_14.f_47), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_49[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_49[0] = func_1941(722236839, 323.478f, 1509.596f, 186.8772f, 71.3391f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[0]), "Guard01");
		func_1942(Local_14.f_47, &(Local_14.f_49[0]));
		func_1943(&(Local_14.f_49[0]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_49[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_49[1] = func_1941(722236839, 330.0852f, 1505.966f, 186.8301f, 254.753f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[1]), "Guard02");
		func_1942(Local_14.f_47, &(Local_14.f_49[1]));
		func_1943(&(Local_14.f_49[1]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_49[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_49[2] = func_1941(-2144902919, 342.9523f, 1514.428f, 184.9618f, 209.1349f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[2]), "Guard03");
		func_1942(Local_14.f_47, &(Local_14.f_49[2]));
		func_1943(&(Local_14.f_49[2]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_49[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_49[3] = func_1941(-2144902919, 343.7355f, 1513.057f, 184.9661f, 35.1346f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[3]), "Guard04");
		func_1942(Local_14.f_47, &(Local_14.f_49[3]));
		func_1943(&(Local_14.f_49[3]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_49[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_49[4] = func_1941(722236839, 365.3156f, 1510.561f, 183.6272f, 194.7365f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[4]), "Guard05");
		func_1942(Local_14.f_47, &(Local_14.f_49[4]));
		func_1943(&(Local_14.f_49[4]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_49[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_49[5] = func_1941(722236839, 341.8696f, 1465.543f, 179.3652f, 217.5701f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[5]), "Guard06");
		func_1942(Local_14.f_47, &(Local_14.f_49[5]));
		func_1943(&(Local_14.f_49[5]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_49[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_49[6] = func_1941(722236839, 364.6014f, 1471.455f, 184.7067f, 139.5605f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[6]), "Guard11");
		func_1942(Local_14.f_47, &(Local_14.f_49[6]));
		func_1943(&(Local_14.f_49[6]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 6)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_49[7])) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_49[7] = func_1941(-2144902919, 345.3159f, 1469.232f, 179.7422f, 177.9999f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_49[7]), "Guard10");
		func_1942(Local_14.f_47, &(Local_14.f_49[7]));
		func_1943(&(Local_14.f_49[7]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 7)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1944(&(Local_14.f_47), 1);
	return true;
}

void func_1349(int iParam0, bool bParam1, bool bParam2)
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

void func_1350()
{
	func_1544();
	func_1545();
	if (!func_166(8))
	{
		_set_weather_type(2082228755, false, true, true, 60f, false);
		func_453(8);
	}
}

void func_1351(var uParam0, int iParam1)
{
	iVar0 = &iLocal_7972[iParam1];
	if (_is_anim_scene_loading(iVar0, true))
	{
		return;
	}
	if (_is_anim_scene_loaded(iVar0, true, false))
	{
		return;
	}
	func_1945(uParam0, iVar0);
}

int func_1352(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 8))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	func_918(uParam0);
	func_917(uParam0, 0);
	if (!func_8(uParam0, 8))
	{
		func_928(1509509592, 1, 0);
		if (!bParam1)
		{
			if (!is_entity_dead(iVar298))
			{
				func_1281(iVar298, func_232(3, 6), 2, 1073741824);
			}
		}
		if (func_995(&(Local_3976[3]), 0))
		{
			_set_entity_coords_and_heading_no_offset(&(Local_3976[3]), 351.169f, 1482.206f, 178.5678f, 165.9237f, false, true);
		}
	}
	if (!is_entity_dead(Local_302.f_1))
	{
		clear_ped_tasks_immediately(Local_302.f_1, false, true);
		func_1281(Local_302.f_1, func_232(3, 4), 2, 1073741824);
		task_stand_still(Local_302.f_1, -1);
		set_blocking_of_non_temporary_events(Local_302.f_1, true);
		set_ped_config_flag(Local_302.f_1, 168, false);
		_0x06d26a96ca1bca75(Local_302.f_1, 3, 0f, 0);
		_0x06d26a96ca1bca75(Local_302.f_1, 2, 0f, 0);
		_0x06d26a96ca1bca75(Local_302.f_1, 1, 0f, 0);
		_0x06d26a96ca1bca75(Local_302.f_1, 7, 1f, 0);
		_0x2eb75fb86c41f026(Local_302.f_1, 3, 0);
		_0x2eb75fb86c41f026(Local_302.f_1, 2, 0);
		_0x2eb75fb86c41f026(Local_302.f_1, 1, 0);
	}
	if (func_995(iVar298, 0))
	{
		func_1316(uParam0, iVar298, 0);
		set_entity_proofs(iVar298, 2, false);
	}
	if (func_995(iVar322, 0))
	{
		func_1316(uParam0, iVar322, 0);
		set_entity_proofs(iVar322, 2, false);
	}
	_0x72d4cb5db927009c(1676963302, -1, 0);
	_0x72d4cb5db927009c(-183018591, -1, 0);
	iVar0 = func_1946();
	if (is_weapon_valid(iVar0))
	{
		_0x72d4cb5db927009c(iVar0, -1, 0);
	}
	_0x72d4cb5db927009c(-1098045850, -1, 0);
	if (!bParam1)
	{
		StringCopy(&cLocal_7630, func_1319(27), 64);
		func_1320(uParam0, &cLocal_7630, -1082130432, 0, 0, -1, -1, 0);
	}
	return 1;
}

void func_1353()
{
	if (iLocal_182 == 0)
	{
		iLocal_182 = 1;
	}
}

void func_1354(bool bParam0, bool bParam1)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = 1676963302;
	iVar1 = 218444191;
	iVar2 = func_1946();
	if (func_695(iVar2))
	{
		iVar0 = iVar2;
		iVar1 = _get_ammo_type_for_weapon(iVar0);
		_0x72d4cb5db927009c(iVar0, -1, 0);
	}
	if (has_ped_got_weapon(Global_35, iVar0, 0, false))
	{
		if (bParam0)
		{
			set_current_ped_weapon(Global_35, iVar0, true, 0, false, false);
		}
		else
		{
			if (bParam1)
			{
				set_current_ped_weapon(Global_35, iVar0, false, 0, false, false);
			}
			else
			{
				iVar3 = func_1947(iVar0);
				if (iVar3 != 29)
				{
					set_current_ped_weapon(Global_35, iVar0, true, iVar3, false, false);
				}
			}
			_0xcffc3eccd7a5cceb(player_id(), iVar0, 0);
		}
		func_1386(iVar1);
	}
}

void func_1355(var uParam0, int iParam1)
{
	if (iVar8032 == iParam1)
	{
		return;
	}
	switch (iVar8032)
	{
		case 0:
			break;
		case 1:
			if (does_blip_exist(Local_326.f_1))
			{
				_set_blip_flash_style(Local_326.f_1, -546708623);
			}
			break;
		case 2:
			func_184(&iLocal_7716);
			func_184(&iLocal_7718);
			if (func_1948(uParam0, iVar322, 32))
			{
				func_1949(uParam0, iVar322, 32);
			}
			if (func_1948(uParam0, iVar298, 32))
			{
				func_1949(uParam0, iVar298, 32);
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			func_59(7);
			break;
		case 6:
			func_1298(&(Local_302.f_3), 8);
			break;
		case 7:
			break;
		case 8:
			break;
	}
	iLocal_8036 = iParam1;
	switch (iVar8032)
	{
		case 0:
			func_184(&iLocal_7716);
			func_1361(1, 0);
			func_1362(1, 0);
			func_1353();
			func_1350();
			func_134(uParam0, 0);
			break;
		case 1:
			if (!does_blip_exist(Local_326.f_1))
			{
				Local_326.f_1 = get_blip_from_entity(iVar322);
				_blip_set_modifier(Local_326.f_1, -546708623);
			}
			func_134(uParam0, 1);
			break;
		case 2:
			func_184(&iLocal_7716);
			func_453(56);
			if (!bVar7785)
			{
				iLocal_7716 = _blip_add_for_radius(-666422021, func_926(5, 1), 3f);
				set_blip_name_from_text_file(iVar7712, "NTS3_WALL");
			}
			func_1950(1);
			func_134(uParam0, 2);
			break;
		case 3:
			func_134(uParam0, 3);
			break;
		case 4:
			func_134(uParam0, 4);
			break;
		case 5:
			func_1299(7);
			set_ped_config_flag(Global_35, 174, true);
			func_453(111);
			func_134(uParam0, 5);
			break;
		case 6:
			func_1297(&(Local_302.f_3), 8);
			func_134(uParam0, 6);
			break;
		case 7:
			func_134(uParam0, 29);
			break;
		case 8:
			break;
	}
}

void func_1356(int iParam0, var uParam1)
{
	if (iVar7434 == iParam0)
	{
		return;
	}
	iLocal_7438 = iParam0;
	switch (iVar7434)
	{
		case 0:
			break;
		case 1:
			func_1951();
			func_1952(0, 0);
			func_1952(1, 1);
			func_1952(2, 2);
			func_1952(3, 3);
			func_1952(4, 4);
			func_1952(5, 5);
			func_1952(6, 6);
			func_1952(7, 7);
			func_1952(8, 8);
			func_1952(9, 10);
			func_1952(10, 11);
			func_1952(11, 12);
			func_1952(12, 13);
			func_1952(13, 14);
			func_1952(14, 15);
			func_1952(15, 16);
			func_1953();
			func_172();
			func_1327(Local_5982[4], 362.55f, 1482.46f, 180.172f, 0.5f, 1);
			func_1327(Local_5982[0], 321.96f, 1508.5f, 188.85f, 0.5f, 1);
			func_1906(Local_5982[12], 4);
			func_1906(Local_5982[13], 4);
			func_1906(Local_5982[15], 4);
			break;
		case 2:
			func_1954(2, uParam1);
			break;
		case 3:
			func_1349(&(Local_5982[14]), 0, 0);
			func_1954(3, uParam1);
			break;
		case 4:
			func_1954(4, uParam1);
			break;
		case 5:
			func_1954(5, uParam1);
			break;
		case 6:
			func_1349(&(Local_5982[15]), 0, 0);
			func_1954(6, uParam1);
			break;
		case 7:
			func_563(&uLocal_7329);
			break;
		case 8:
			func_453(63);
			func_1955(1);
			func_228(&uLocal_7329);
			break;
		case 9:
			func_1955(1);
			break;
		case 10:
			func_1955(4);
			break;
		case 11:
			break;
	}
}

void func_1357(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_1358(int iParam0)
{
	func_472(&(iLocal_7972[iParam0]));
}

int func_1359(var uParam0, bool bParam1)
{
	func_1938(uParam0, 26, 100f, 1125515264, 0, 1, 1, 422991367);
	func_1956(uParam0);
	func_931();
	func_1957();
	if (!bVar7785)
	{
		func_1936(uParam0);
	}
	if (func_1958(uParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1360()
{
	if (!func_1959())
	{
		return false;
	}
	return func_1960(&(iLocal_7972[26]), "pbl_Enter_Idle_Loops");
}

void func_1361(int iParam0, bool bParam1)
{
	if (Local_302.f_13 == iParam0 && !bParam1)
	{
		return;
	}
	if (!func_995(iVar298, 0))
	{
		return;
	}
	Local_302.f_13 = iParam0;
	switch (Local_302.f_13)
	{
		case 1:
			if (!_get_ped_crouch_movement(iVar298))
			{
				_set_ped_crouch_movement(iVar298, true, 0, true);
			}
			set_current_ped_weapon(iVar298, -1569615261, true, 1, false, false);
			func_563(&(Local_302.f_16));
			if (!is_ped_in_cover(iVar298, 0, 0))
			{
				open_sequence_task(&iVar1);
				func_1340(&Local_302, &(Local_302.f_19), 13, 6, 34);
				close_sequence_task(iVar1);
				task_perform_sequence(iVar298, iVar1);
				clear_sequence_task(&iVar1);
				_0x2208438012482a1a(iVar298, true, false);
			}
			break;
		case 2:
			set_ped_config_flag(iVar298, 155, false);
			set_ped_config_flag(iVar298, 156, false);
			set_ped_config_flag(iVar298, 154, false);
			set_ped_combat_attributes(iVar298, 0, true);
			set_ped_combat_attributes(iVar298, 35, true);
			set_ped_combat_attributes(iVar298, 30, true);
			set_ped_combat_movement(iVar298, 0);
			set_relationship_between_groups(6, -1247684992, 1269650476);
			set_relationship_between_groups(6, 1269650476, -1247684992);
			set_relationship_between_groups(2, 1269650476, 1269650476);
			set_entity_proofs(iVar298, 4, false);
			set_blocking_of_non_temporary_events(iVar298, true);
			if (!has_ped_got_weapon(iVar298, -1098045850, 0, false))
			{
				func_1317(iVar298, -1098045850, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			else
			{
				_add_ammo_to_ped(iVar298, -1098045850, 200, 752097756);
				set_current_ped_weapon(iVar298, -1098045850, true, 0, false, false);
			}
			func_1915(iVar298, Local_183[13]->f_1, 1, 0);
			open_sequence_task(&iVar1);
			if (!is_ped_in_cover(iVar298, 0, 0))
			{
				func_1340(&Local_302, &(Local_302.f_19), 13, 6, 34);
			}
			task_swap_weapon(0, 1, 1, 0, 0);
			task_combat_hated_targets_in_area(0, func_926(3, 6), 100f, 0, 19);
			close_sequence_task(iVar1);
			task_perform_sequence(iVar298, iVar1);
			clear_sequence_task(&iVar1);
			_0x2208438012482a1a(iVar298, true, false);
			break;
		case 3:
			func_1915(iVar298, Local_183[14]->f_1, 1, 0);
			set_ped_combat_attributes(iVar298, 0, true);
			set_ped_combat_movement(iVar298, 1);
			set_current_ped_weapon(iVar298, get_best_ped_weapon(iVar298, false, false), true, 0, false, false);
			_0x8acc0506743a8a5c(iVar298, 1240409539, 1, -1082130432);
			open_sequence_task(&iVar1);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, func_926(3, 7), func_926(3, 7), 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391);
			func_1340(&Local_302, &(Local_302.f_19), 14, 30, 15);
			task_combat_hated_targets_in_area(0, func_926(3, 7), 100f, 0, 19);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar298, iVar1, 1f, 1f);
			clear_sequence_task(&iVar1);
			break;
		case 4:
			func_1915(iVar298, Local_183[16]->f_1, 1, 0);
			set_ped_combat_attributes(iVar298, 0, true);
			set_ped_combat_movement(iVar298, 1);
			set_current_ped_weapon(iVar298, get_best_ped_weapon(iVar298, false, false), true, 0, false, false);
			_0x8acc0506743a8a5c(iVar298, 1240409539, 1, -1082130432);
			open_sequence_task(&iVar1);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, func_926(3, 9), func_926(3, 9), 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391);
			func_1340(&Local_302, &(Local_302.f_19), 16, 30, 17);
			task_combat_hated_targets_in_area(0, func_926(3, 9), 100f, 0, 19);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar298, iVar1, 1f, 1f);
			clear_sequence_task(&iVar1);
			break;
		case 5:
			func_1915(iVar298, Local_183[18]->f_1, 1, 0);
			set_ped_combat_attributes(iVar298, 0, true);
			set_ped_combat_movement(iVar298, 1);
			set_current_ped_weapon(iVar298, get_best_ped_weapon(iVar298, false, false), true, 0, false, false);
			_0x8acc0506743a8a5c(iVar298, 1240409539, 1, -1082130432);
			open_sequence_task(&iVar1);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, func_926(3, 11), func_926(3, 11), 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391);
			func_1340(&Local_302, &(Local_302.f_19), 18, 30, 19);
			task_combat_hated_targets_in_area(0, func_926(3, 11), 100f, 0, 19);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar298, iVar1, 1f, 1f);
			clear_sequence_task(&iVar1);
			break;
		case 6:
			func_1915(iVar298, Local_183[20]->f_1, 1, 0);
			set_ped_combat_attributes(iVar298, 0, true);
			set_ped_combat_movement(iVar298, 1);
			set_current_ped_weapon(iVar298, get_best_ped_weapon(iVar298, false, false), true, 0, false, false);
			_0x8acc0506743a8a5c(iVar298, 1240409539, 1, -1082130432);
			open_sequence_task(&iVar1);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, func_926(3, 14), func_926(3, 14), 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391);
			func_1340(&Local_302, &(Local_302.f_19), 20, 30, 20);
			task_combat_hated_targets_in_area(0, func_926(3, 14), 100f, 0, 19);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar298, iVar1, 1f, 1f);
			clear_sequence_task(&iVar1);
			break;
		case 7:
			remove_ped_defensive_area(iVar298, false);
			_set_ped_crouch_movement(iVar298, false, 0, false);
			clear_ped_tasks(iVar298, 1, 0);
			task_follow_nav_mesh_to_coord(iVar298, func_926(3, 8), 2f, 20000, 2f, 2097152, 40000f);
			func_563(&(Local_302.f_16));
			func_1961(&Local_302);
			break;
		case 8:
			Local_302.f_5 = { func_1962(&(iLocal_7972[25]), "CS_CharlesSmith", "pbl_idle_Loops") };
			fVar0 = func_1963(&(iLocal_7972[25]), "CS_CharlesSmith", "pbl_idle_Loops");
			if (func_1135(iVar298, 0, 1, 0) != -1098045850)
			{
				set_current_ped_weapon(iVar298, -1098045850, true, 0, false, false);
				task_swap_weapon(iVar298, 1, 1, 0, 0);
			}
			_0x8acc0506743a8a5c(iVar298, 1240409539, 1, -1082130432);
			if (func_1964(iVar298, 0))
			{
				clear_ped_tasks_immediately(iVar298, false, true);
			}
			open_sequence_task(&iVar1);
			func_1340(&Local_302, &(Local_302.f_19), 22, 8, 34);
			close_sequence_task(iVar1);
			task_perform_sequence(iVar298, iVar1);
			clear_sequence_task(&iVar1);
			break;
		case 9:
			set_ped_reset_flag(iVar298, 165, true);
			func_1965();
			break;
		case 10:
			func_1966();
			break;
		case 11:
			Local_302.f_5 = { 330.6557f, 1485.447f, 178.8105f };
			fVar0 = 150.4123f;
			if (!_0x3ab6c7b0bb0df4b1(iVar298, -1))
			{
				open_sequence_task(&iVar1);
				func_1340(&Local_302, &(Local_302.f_19), 23, 2, 34);
				close_sequence_task(iVar1);
				task_perform_sequence(iVar298, iVar1);
				clear_sequence_task(&iVar1);
				_0x2208438012482a1a(iVar298, false, false);
			}
			break;
		case 12:
			remove_ped_defensive_area(iVar298, false);
			func_1967();
			if (func_995(iLocal_252, 0))
			{
				set_animal_tuning_bool_param(iLocal_252, 48, true);
				open_sequence_task(&iVar1);
				task_follow_nav_mesh_to_coord(0, vLocal_7612, 2f, 20000, 0.25f, 0, 40000f);
				task_stand_still(0, -1);
				close_sequence_task(iVar1);
				task_perform_sequence(iLocal_252, iVar1);
				clear_sequence_task(&iVar1);
			}
			if (func_995(Local_302.f_1, 0))
			{
				set_animal_tuning_bool_param(Local_302.f_1, 48, true);
				if (!_0x3ab6c7b0bb0df4b1(Local_302.f_1, -1))
				{
					open_sequence_task(&iVar1);
					task_follow_nav_mesh_to_coord(0, func_1962(&(iLocal_7972[25]), "HORSE", "pbl_Charles_Mount_Horse"), 2f, 20000, 0.25f, 512, func_1963(&(iLocal_7972[25]), "HORSE", "pbl_Charles_Mount_Horse"));
					task_animal_unalerted(0, 1000, 0, 0, 0);
					task_stand_still(0, -1);
					close_sequence_task(iVar1);
					task_perform_sequence(Local_302.f_1, iVar1);
					clear_sequence_task(&iVar1);
				}
			}
			break;
		case 13:
			func_1968();
			break;
		case 14:
			break;
	}
	func_1969(&Local_3359);
	func_1969(&Local_2433);
	func_1969(&Local_3976);
	func_1969(&Local_3127);
	func_1969(&Local_5673);
}

void func_1362(int iParam0, bool bParam1)
{
	if (Local_326.f_7 == iParam0 && !bParam1)
	{
		return;
	}
	if (!func_995(iVar322, 0))
	{
		return;
	}
	Local_326.f_7 = iParam0;
	switch (Local_326.f_7)
	{
		case 1:
			func_563(&(Local_326.f_8));
			set_ped_config_flag(iVar322, 152, false);
			set_ped_config_flag(iVar322, 154, false);
			set_ped_config_flag(iVar322, 168, false);
			set_ped_config_flag(iVar322, 156, false);
			set_entity_can_be_damaged_by_relationship_group(iVar322, false, 1862763509);
			set_entity_proofs(iVar322, 4, false);
			set_ped_combat_attributes(iVar322, 87, false);
			func_1861(&Local_326);
			func_1970(iVar322, 1, 0, "Eagle Flies");
			func_1366(iVar322, 500);
			set_ped_flee_attributes(iVar322, 512, true);
			set_blocking_of_non_temporary_events(iVar322, true);
			func_1340(&Local_326, &(Local_326.f_11), 24, 74, 34);
			break;
		case 2:
			if (Local_326.f_11 == 26)
			{
				Local_326.f_3 = { func_1971(26, &Local_326) };
			}
			else
			{
				Local_326.f_3 = { func_926(3, 10) };
				fVar0 = func_1583(3, 10);
			}
			open_sequence_task(&iVar1);
			task_follow_nav_mesh_to_coord(0, Local_326.f_3, 2f, -1, 2f, 2097152, 40000f);
			if (Local_326.f_11 == 26)
			{
				func_1340(&Local_326, &(Local_326.f_11), 26, 10, 34);
			}
			else
			{
				func_1340(&Local_326, &(Local_326.f_11), 25, 10, 34);
			}
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar322, iVar1, 3f, 3f);
			clear_sequence_task(&iVar1);
			break;
		case 3:
			if (Local_326.f_11 == 28)
			{
				Local_326.f_3 = { func_1971(28, &Local_326) };
			}
			else
			{
				Local_326.f_3 = { func_926(3, 12) };
				fVar0 = func_1583(3, 12);
			}
			open_sequence_task(&iVar1);
			task_follow_nav_mesh_to_coord(0, Local_326.f_3, 2f, -1, 2f, 2097152, 40000f);
			if (Local_326.f_11 == 28)
			{
				func_1340(&Local_326, &(Local_326.f_11), 28, 10, 34);
			}
			else
			{
				func_1340(&Local_326, &(Local_326.f_11), 27, 10, 34);
			}
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar322, iVar1, 3f, 3f);
			clear_sequence_task(&iVar1);
			break;
		case 4:
			if (Local_326.f_11 == 30)
			{
				Local_326.f_3 = { func_1971(30, &Local_326) };
			}
			else
			{
				Local_326.f_3 = { func_926(3, 13) };
				fVar0 = func_1583(3, 13);
			}
			open_sequence_task(&iVar1);
			task_follow_nav_mesh_to_coord(0, Local_326.f_3, 2f, -1, 2f, 2097152, 40000f);
			if (Local_326.f_11 == 30)
			{
				func_1340(&Local_326, &(Local_326.f_11), 30, 8, 34);
			}
			else
			{
				func_1340(&Local_326, &(Local_326.f_11), 29, 10, 34);
			}
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar322, iVar1, 3f, 3f);
			clear_sequence_task(&iVar1);
			break;
		case 5:
			if (Local_326.f_11 == 32)
			{
				Local_326.f_3 = { func_1971(32, &Local_326) };
			}
			else
			{
				Local_326.f_3 = { func_926(3, 15) };
				fVar0 = func_1583(3, 15);
			}
			open_sequence_task(&iVar1);
			task_follow_nav_mesh_to_coord(0, Local_326.f_3, 2f, -1, 2f, 2097152, 40000f);
			if (Local_326.f_11 == 32)
			{
				func_1340(&Local_326, &(Local_326.f_11), 32, 10, 34);
			}
			else
			{
				func_1340(&Local_326, &(Local_326.f_11), 31, 10, 34);
			}
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iVar322, iVar1, 3f, 3f);
			clear_sequence_task(&iVar1);
			break;
		case 6:
			func_1972(-1, 1);
			if (does_entity_exist(&(Local_14.f_165[0])))
			{
				set_object_targettable(&(Local_14.f_165[0]), true);
				set_entity_is_target_priority(&(Local_14.f_165[0]), true, 30f);
				freeze_entity_position(&(Local_14.f_165[0]), true);
				set_entity_visible(&(Local_14.f_165[0]), false);
			}
			remove_ped_defensive_area(iVar322, false);
			Local_326.f_3 = { func_1962(&(iLocal_7972[26]), "CS_EagleFlies", "pbl_action") };
			fVar0 = func_1963(&(iLocal_7972[26]), "CS_EagleFlies", "pbl_action");
			open_sequence_task(&iVar1);
			task_follow_nav_mesh_to_coord(0, Local_326.f_3, 2f, 20000, 0.25f, 0, fVar0);
			close_sequence_task(iVar1);
			clear_ped_tasks(iVar322, 1, 0);
			task_perform_sequence(iVar322, iVar1);
			clear_sequence_task(&iVar1);
			break;
		case 7:
			func_1973();
			break;
		case 8:
			func_1974();
			break;
		case 9:
			if (is_ped_in_group(iVar322))
			{
				remove_ped_from_group(iVar322);
			}
			if (!_0x3ab6c7b0bb0df4b1(iVar322, -1))
			{
				Local_326.f_3 = { get_scripted_cover_point_coords(&(Local_183[33])) };
				func_1340(&Local_326, &(Local_326.f_11), 33, 64, 34);
				set_ped_config_flag(iVar322, 248, true);
				_0x2208438012482a1a(iVar322, true, false);
			}
			break;
		case 10:
			break;
		case 11:
			set_ped_reset_flag(iVar322, 165, true);
			func_1975();
			break;
		case 12:
			func_1976();
			break;
		case 13:
			_set_ped_on_mount(iVar322, Local_302.f_1, 0, true);
			break;
	}
}

void func_1363()
{
	bVar0 = func_1977();
	bVar1 = false;
	if (bVar7787)
	{
		if ((iVar8009 == 0 || iVar8009 == 1) || iVar8009 == 8)
		{
			func_1950(9);
		}
	}
	switch (iVar8009)
	{
		case 0:
			break;
		case 1:
			iLocal_8012 = func_1978();
			if (iVar8010 == 0)
			{
				func_1979(iVar8011, 0, 1);
			}
			else
			{
				func_1979(iVar8011, 1, 1);
			}
			if (func_1980(iVar8011, 1) && bVar0)
			{
				func_11(&iLocal_8013, 1, 1);
				func_1950(2);
			}
			else
			{
				_uiprompt_set_ambient_group_this_frame(iVar265, 3f, 1, 1, 235184899, "NTS3_CANNON", 0);
				Jump @595; //curOff = 220
				if (!_0x9ff5f9b24e870748(Global_35))
				{
					func_1950(3);
				}
				else
				{
					Jump @595; //curOff = 242
					_disable_first_person_cam_this_frame_2();
					if (func_1981(30, "ARTHUR", 1))
					{
						bVar1 = true;
					}
					if (func_1859(30, 83, bVar1, 0.95f))
					{
						func_1950(4);
					}
					else
					{
						Jump @595; //curOff = 289
						_disable_first_person_cam_this_frame_2();
						if (func_1980(iVar8011, 1))
						{
							func_11(&iLocal_8013, 1, 1);
							func_1950(5);
						}
						else
						{
							_uiprompt_set_ambient_group_this_frame(iVar265, 3f, 1, 1, 235184899, "NTS3_CANNON", 0);
							Jump @595; //curOff = 345
							_disable_first_person_cam_this_frame_2();
							if (func_1859(30, 84, 1, 1065185444))
							{
								func_1950(6);
							}
							else
							{
								Jump @595; //curOff = 376
								_disable_first_person_cam_this_frame_2();
								if (func_1982(30))
								{
									func_1950(7);
								}
								else
								{
									Jump @595; //curOff = 400
									_disable_first_person_cam_this_frame_2();
									if (func_1381(Global_35, iVar265, 0) || !_0x9ff5f9b24e870748(Global_35))
									{
										func_1950(8);
									}
									else
									{
										func_1337(1, 0);
										Jump @595; //curOff = 450
										if (func_1381(Global_35, iVar265, 0))
										{
											if (_0xa24c1d341c6e0d53(1, 0, 0))
											{
												fVar2 = get_gameplay_cam_relative_pitch();
												if (fVar2 < -5.518f || fVar2 > 0.2728f)
												{
													disable_control_action(0, -197984200, false);
												}
											}
											else
											{
												fVar2 = get_gameplay_cam_relative_pitch();
												if (fVar2 < -5.518f || fVar2 > 0.2728f)
												{
													disable_control_action(0, -197984200, false);
												}
											}
										}
										Jump @595; //curOff = 564
										if (func_1381(Global_35, iVar265, 0))
										{
											disable_control_action(0, -197984200, false);
										}
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

bool func_1364()
{
	if (func_988(128))
	{
		return true;
	}
	bVar0 = func_1983(-1, 1);
	if (!bVar0)
	{
		return false;
	}
	bVar0 = func_1984(-1, 1);
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (!does_entity_exist(&(Local_14.f_84[iVar2])))
		{
			iVar1++;
		}
		else if (!does_entity_exist(&(Local_14.f_98[iVar2])))
		{
			iVar1++;
		}
		else if (!func_1501(&(Local_14.f_98[iVar2])))
		{
			iVar1++;
		}
		else if (func_1985(Local_351[iVar2], 16))
		{
			iVar1++;
		}
		else
		{
			Local_351[iVar2] = &Local_14.f_84[iVar2];
			Local_351[iVar2]->f_1 = &Local_14.f_98[iVar2];
			Local_351[iVar2]->f_5 = iVar2;
			Local_351[iVar2]->f_22 = { vLocal_7690 };
			func_1986(Local_351[iVar2], 1);
			if (!has_ped_got_weapon(&(Local_351[iVar2]), -183018591, 0, false))
			{
				func_1317(&(Local_351[iVar2]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			if (func_995(Local_351[iVar2]->f_1, 0))
			{
				if (!func_1294(&(Local_351[iVar2]), Local_351[iVar2]->f_1, 0))
				{
					func_1290(&(Local_351[iVar2]), Local_351[iVar2]->f_1, 0, -1, 1);
				}
			}
			func_1321(Local_351[iVar2]);
			func_1906(Local_351[iVar2], 16);
			iVar1++;
		}
		else
		{
			iVar2++;
		}
	}
	if (iVar1 >= 11)
	{
		func_398(128);
	}
	return false;
}

int func_1365(int iParam0)
{
	vVar0 = { get_entity_coords(*iParam0, true, false) };
	fVar3 = 2f;
	if ((((((((is_explosion_in_sphere(25, vVar0, fVar3) || is_explosion_in_sphere(0, vVar0, fVar3)) || is_explosion_in_sphere(2, vVar0, fVar3)) || is_explosion_in_sphere(3, vVar0, fVar3)) || is_explosion_in_sphere(30, vVar0, fVar3)) || is_explosion_in_sphere(31, vVar0, fVar3)) || is_explosion_in_sphere(29, vVar0, fVar3)) || is_explosion_in_sphere(27, vVar0, fVar3)) || is_explosion_in_sphere(26, vVar0, fVar3))
	{
		func_1349(*iParam0, 0, 0);
		return 1;
	}
	return 0;
}

void func_1366(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		fVar0 = (((to_float(get_entity_health(iParam0)) - 100f) / (to_float(get_ped_max_health(iParam0)) - 100f)) * 100f);
		set_ped_max_health(iParam0, iParam1);
		_set_entity_health(iParam0, round((((fVar0 / 100f) * (to_float(get_ped_max_health(iParam0)) - 100f)) + 100f)), 0);
	}
}

void func_1367(var uParam0, int iParam1)
{
	if (iVar8036 == iParam1)
	{
		return;
	}
	switch (iVar8036)
	{
		case 0:
			func_1298(&(Local_302.f_3), 8);
			if (func_166(45))
			{
				use_waypoint_recording_as_assisted_movement_route(func_193(3), 0, 1065353216, 1056964608, 1);
				func_167(45);
			}
			func_453(106);
			break;
		case 1:
			break;
		case 2:
			func_1868(64);
			func_184(&iLocal_7716);
			break;
		case 3:
			break;
		case 4:
			break;
	}
	iLocal_8040 = iParam1;
	switch (iVar8036)
	{
		case 0:
			if (func_995(Local_302.f_1, 0))
			{
				set_blocking_of_non_temporary_events(Local_302.f_1, true);
				set_ped_flee_attributes(Local_302.f_1, 512, true);
			}
			if (func_995(iLocal_252, 0))
			{
				func_1867(64);
			}
			if (func_995(Global_35, 0))
			{
				func_1354(0, 0);
			}
			if (does_entity_exist(Local_302.f_1))
			{
				set_entity_invincible(Local_302.f_1, true);
			}
			func_1297(&(Local_302.f_3), 8);
			set_vehicle_is_considered_by_player(iVar7690, false);
			set_vehicle_is_considered_by_player(iVar7689, false);
			if (!func_166(45))
			{
				use_waypoint_recording_as_assisted_movement_route(func_193(3), 1, 1065353216, 1056964608, 1);
				func_453(45);
			}
			if (!_does_volume_exist(&(iLocal_268[18])))
			{
				iLocal_268[18] = _0x0eb78c2b156635b1(665633627, -10.34977f, 1548.108f, 112.619f, 0f, 0f, 61f, 2.445457f, 4.453917f, 1.662158f);
			}
			func_1987(1, 0);
			func_134(uParam0, 0);
			break;
		case 1:
			func_134(uParam0, 1);
			break;
		case 2:
			func_184(&iLocal_7716);
			iLocal_7716 = func_1988(408396114, iVar7690, 1);
			set_vehicle_is_considered_by_player(iVar7690, true);
			_0xb7079f4c72896756(Global_35, iVar7690, 0, 16, -1);
			if (func_995(Global_35, 0))
			{
				func_1386(1681219929);
			}
			func_134(uParam0, 2);
			break;
		case 3:
			func_169(&(iLocal_268[18]));
			func_134(uParam0, 29);
			break;
		case 4:
			break;
	}
}

void func_1368()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1989(Local_5673[iVar0], 8, 0);
		iVar0++;
	}
}

void func_1369(var uParam0)
{
	if (!does_entity_exist(iVar7691))
	{
		return;
	}
	if (!is_vehicle_driveable(iVar7691, false, false))
	{
		func_1385(uParam0, "NTS3_F_CANOE", "", 1, 0);
	}
}

void func_1370(var uParam0)
{
	func_1990(uParam0);
	func_1991();
	func_1992();
}

void func_1371(var uParam0)
{
	switch (iVar8037)
	{
		case 0:
			func_1295(uParam0, 33);
			break;
		case 1:
			func_1295(uParam0, 34);
			break;
		case 2:
			if (func_1306(72) == 3)
			{
				func_1295(uParam0, 35);
			}
			break;
	}
}

int func_1372()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (!does_entity_exist(&(Local_351[iVar1])))
		{
		}
		else if (!func_995(&(Local_351[iVar1]), 75))
		{
			iVar0++;
		}
		else if (Local_351[iVar1]->f_74 == 5)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1373(int iParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!does_entity_exist(&(Local_351[iVar0])))
		{
		}
		else if (!func_995(&(Local_351[iVar0]), 75))
		{
		}
		else if (func_895(&(Local_351[iVar0]), iParam0, fParam1, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1374()
{
	if (func_1306(51) == 0)
	{
		if (Local_351[0]->f_74 == 1 || Local_351[1]->f_74 == 1)
		{
			if (func_1993(Local_351[0], 1116471296) || func_1993(Local_351[1], 1116471296))
			{
				func_1305(51, 0);
			}
		}
	}
	if (func_1306(69) == 0)
	{
		if (!func_1994(&Local_302, 3, 115, 1))
		{
			if (Local_351[2]->f_74 == 1 || Local_351[3]->f_74 == 1)
			{
				if (func_1993(Local_351[2], 60f) || func_1993(Local_351[3], 60f))
				{
					func_1305(69, 0);
				}
			}
		}
	}
	if (func_1306(70) == 0)
	{
		if (!func_166(90))
		{
			if ((Local_351[4]->f_74 == 1 || Local_351[5]->f_74 == 1) || Local_351[6]->f_74 == 1)
			{
				if ((func_1993(Local_351[4], 1116471296) || func_1993(Local_351[5], 1116471296)) || func_1993(Local_351[6], 1116471296))
				{
					func_1305(70, 0);
				}
			}
		}
	}
}

bool func_1375(int iParam0, int iParam1, int iParam2)
{
	if (func_166(iParam2))
	{
		return false;
	}
	vVar0 = { func_1300(3, 0) };
	if (!is_waypoint_playback_going_on_for_ped(iVar297, 0))
	{
		if (func_1301(iVar297, vVar0, 50f, 1, 1))
		{
			return true;
		}
	}
	if (iParam1 >= 0)
	{
		vVar3 = { func_1288(3, iParam0) };
		vVar6 = { func_1288(3, iParam1) };
		if (!func_1995(vVar3, vVar6, 20f, 1))
		{
			fVar9 = func_1883(iVar297, vVar3, 1);
			fVar10 = func_1883(iVar297, vVar6, 1);
			if (fVar10 < fVar9)
			{
				func_453(iParam2);
				return false;
			}
		}
	}
	if (func_1994(&Local_302, 3, iParam0, 1))
	{
		return true;
	}
	if (func_1994(&Global_35, 3, iParam0, 1))
	{
		return true;
	}
	return false;
}

void func_1376()
{
	if (Local_351[0]->f_74 == 0 && iVar7603 < 3)
	{
		func_1996(&(Local_351[0]), 1, 0);
		func_1997(Local_351[0], 1);
	}
	if (Local_351[1]->f_74 == 0 && iVar7603 < 3)
	{
		func_1997(Local_351[1], 1);
	}
}

void func_1377()
{
	if (Local_351[2]->f_74 == 0 && iVar7603 < 3)
	{
		func_1997(Local_351[2], 1);
	}
	if (Local_351[3]->f_74 == 0 && iVar7603 < 3)
	{
		func_1996(&(Local_351[3]), 1, 1);
		func_1997(Local_351[3], 1);
	}
}

void func_1378()
{
	if (Local_351[4]->f_74 == 0 && iVar7603 < 3)
	{
		func_1997(Local_351[4], 1);
	}
	if (Local_351[5]->f_74 == 0 && iVar7603 < 3)
	{
		func_1997(Local_351[5], 1);
	}
	if (Local_351[6]->f_74 == 0 && iVar7603 < 3)
	{
		func_1996(&(Local_351[6]), 1, func_1998());
		func_1997(Local_351[6], 1);
	}
}

void func_1379(int iParam0)
{
	if (Local_351[7]->f_74 == 0 && iVar7602 < (3 + iParam0))
	{
		func_425(&(Local_351[7]->f_6), 1048576);
		func_1997(Local_351[7], 1);
	}
	if (Local_351[8]->f_74 == 0 && iVar7602 < (3 + iParam0))
	{
		func_425(&(Local_351[8]->f_6), 1048576);
		func_1997(Local_351[8], 1);
		func_1996(&(Local_351[8]), 1, func_1998());
	}
}

void func_1380(int iParam0)
{
	if (Local_351[9]->f_74 == 0 && iVar7602 < (3 + iParam0))
	{
		func_425(&(Local_351[9]->f_6), 1048576);
		func_1997(Local_351[9], 1);
	}
	if (Local_351[10]->f_74 == 0 && iVar7602 < (3 + iParam0))
	{
		func_425(&(Local_351[10]->f_6), 1048576);
		func_1997(Local_351[10], 1);
		func_1996(&(Local_351[10]), 1, func_1998());
	}
}

bool func_1381(int iParam0, int iParam1, bool bParam2)
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

Vector3 func_1382(vector3 vParam0)
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

void func_1383()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!func_995(&(Local_351[iVar0]), 0))
		{
		}
		else if (func_895(&(Local_351[iVar0]), Global_35, 75f, 1))
		{
			func_1997(Local_351[iVar0], 3);
		}
		else
		{
			func_1997(Local_351[iVar0], 4);
		}
		iVar0++;
	}
}

void func_1384()
{
	if (!func_26(&uLocal_7323))
	{
		func_228(&uLocal_7323);
	}
	if (func_229(&uLocal_7323) < 8000)
	{
		return;
	}
	if (func_1999(54, 0))
	{
		func_228(&uLocal_7323);
	}
}

void func_1385(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_443(uParam0, 2);
	}
	else
	{
		func_443(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1618(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

void func_1386(int iParam0)
{
	iVar0 = func_474(iParam0, 1);
	iVar1 = _get_weapon_type_from_ammo_type(iVar0);
	iVar3 = get_ped_ammo_by_type(Global_35, iVar0);
	if (!get_max_ammo(Global_35, &iVar2, iVar1))
	{
		return;
	}
	iVar4 = (iVar2 - iVar3);
	if (iVar4 <= 1)
	{
		return;
	}
	func_327(iParam0, (iVar4 - 1), 1, 0, 0, 752097756, 0, 0, 0, 0);
}

int func_1387(int iParam0, int iParam1, int iParam2, int iParam3)
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
			if (iParam3 && func_2000(*iParam1))
			{
				iParam2 = func_2001(*iParam1);
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

void func_1388(var uParam0, int iParam1)
{
	if (iVar8037 == iParam1)
	{
		return;
	}
	switch (iVar8037)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	iLocal_8041 = iParam1;
	switch (iVar8037)
	{
		case 0:
			func_134(uParam0, 0);
			break;
		case 1:
			func_134(uParam0, 1);
			break;
		case 2:
			func_134(uParam0, 29);
			break;
		case 3:
			break;
	}
}

void func_1389(int iParam0, bool bParam1)
{
	if (Local_302.f_15 == iParam0 && !bParam1)
	{
		return;
	}
	if (!func_995(iVar298, 0))
	{
		return;
	}
	bVar0 = false;
	if (Local_302.f_15 == 1)
	{
		bVar0 = true;
	}
	Local_302.f_15 = iParam0;
	switch (Local_302.f_15)
	{
		case 1:
			set_blocking_of_non_temporary_events(iVar298, true);
			if (_0x083d497d57b7400f(iVar7689))
			{
				freeze_entity_position(iVar7689, false);
			}
			Local_338 = { get_position_of_vehicle_recording_at_time(0, 1000f, func_193(11)) };
			Local_338.f_3 = { get_rotation_of_vehicle_recording_at_time(0, 1000f, func_193(11)) };
			Local_338.f_6 = { get_entity_coords(iVar7689, true, false) };
			Local_338.f_9 = { get_entity_rotation(iVar7689, 2) };
			Local_338.f_12 = 0f;
			break;
		case 2:
			set_blocking_of_non_temporary_events(iVar298, true);
			if (_0x083d497d57b7400f(iVar7689))
			{
				freeze_entity_position(iVar7689, false);
			}
			start_playback_recorded_vehicle(iVar7689, 0, func_193(11), true);
			if (bVar0)
			{
				skip_time_in_playback_recorded_vehicle(iVar7689, 1000f);
			}
			func_563(&(Local_302.f_16));
			Local_302.f_23 = 0;
			break;
		case 3:
			if (is_playback_going_on_for_vehicle(iVar7689))
			{
				stop_playback_recorded_vehicle(iVar7689);
			}
			func_2002();
			break;
		case 4:
			task_turn_ped_to_face_entity(iVar298, Global_35, -1, -1f, -1f, -1082130432);
			task_turn_ped_to_face_entity(iVar322, Global_35, -1, -1f, -1f, -1082130432);
			break;
	}
}

void func_1390()
{
	if (!func_166(100))
	{
		if (func_1400(&Global_35, 8, 12, 15))
		{
			_force_lightning_flash_at_coords(-426.06f, 1316.47f, 162.78f, -1082130432);
			func_453(100);
		}
	}
	if (!func_166(101))
	{
		if (func_1400(&Global_35, 8, 48, 50))
		{
			_force_lightning_flash_at_coords(-456.39f, -993.85f, 40.86f, -1082130432);
			func_453(101);
		}
	}
	if (!func_166(102))
	{
		if (func_1400(&Global_35, 8, 55, 57))
		{
			_force_lightning_flash_at_coords(-149.44f, 753.12f, 129.75f, -1082130432);
			func_453(102);
		}
	}
	if (!func_166(103))
	{
		if (func_1400(&Global_35, 8, 31, 33))
		{
			_force_lightning_flash_at_coords(-405.61f, 1422.32f, 196.94f, -1082130432);
			func_453(103);
		}
	}
	if (!func_166(104))
	{
		if (func_1400(&Global_35, 8, 79, 81))
		{
			_force_lightning_flash_at_coords(-480.72f, 1119.44f, 139.75f, -1082130432);
			func_453(104);
		}
	}
	if (!func_166(105))
	{
		if (func_1400(&Global_35, 8, 5, 7))
		{
			_force_lightning_flash_at_coords(-711.58f, 1460.56f, 302.01f, -1082130432);
			func_453(105);
		}
	}
}

void func_1391()
{
	if (!func_26(&uLocal_7353))
	{
		func_228(&uLocal_7353);
	}
	if (((_0xc8d523bf5bbd3808(Global_35, -978548489) || _0xc8d523bf5bbd3808(Global_35, -1507090758)) || _0xc8d523bf5bbd3808(Global_35, -1102089407)) || _0xc8d523bf5bbd3808(Global_35, -85413846))
	{
		func_228(&uLocal_7353);
	}
	if (!func_26(&uLocal_7356))
	{
		func_228(&uLocal_7356);
	}
	if (is_ped_shooting(Global_35))
	{
		func_228(&uLocal_7356);
	}
	if (func_1341(&uLocal_7353) > 3f)
	{
		if (!func_508(&uLocal_7356))
		{
			func_2003(&uLocal_7356);
		}
	}
	else if (func_508(&uLocal_7356))
	{
		func_2004(&uLocal_7356);
	}
	fVar0 = func_1341(&uLocal_7356);
	iLocal_7600 = round(func_1769((10f + (fVar0 * 2f)), 0f, 100f));
}

void func_1392()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_2005(Local_1199[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2005(Local_2355[iVar0]);
		iVar0++;
	}
}

void func_1393(var uParam0)
{
	switch (func_1869(uParam0))
	{
		case 0:
			func_184(&iLocal_7716);
			func_135(uParam0, 1);
			break;
		case 1:
			func_135(uParam0, 6);
			break;
		case 2:
			if (!func_1301(Global_35, func_926(8, 2), 200f, 1, 1))
			{
				func_135(uParam0, -1);
			}
			break;
		case 3:
			func_135(uParam0, -1);
			break;
		case 4:
			func_135(uParam0, 2);
			break;
		case 5:
			func_135(uParam0, -1);
			break;
		case 6:
			func_135(uParam0, -1);
			break;
		case 7:
			func_135(uParam0, -1);
			break;
		case 10:
			if (func_1870(uParam0, "NTS3_CANOEGO", 0, 0, 0))
			{
				func_135(uParam0, -1);
			}
			break;
		case 11:
			func_135(uParam0, -1);
			break;
		case 12:
			func_135(uParam0, -1);
			break;
		case 13:
			func_135(uParam0, -1);
			break;
		case 14:
			func_135(uParam0, -1);
			break;
		case 15:
			func_135(uParam0, -1);
			break;
		case 16:
			func_135(uParam0, -1);
			break;
		case 17:
			func_135(uParam0, -1);
			break;
		case 18:
			func_135(uParam0, -1);
			break;
		case 43:
			func_135(uParam0, 5);
			break;
		case 44:
			func_135(uParam0, -1);
			break;
		case 45:
			func_135(uParam0, -1);
			break;
		case 46:
			func_135(uParam0, -1);
			break;
		case 47:
			func_135(uParam0, -1);
			break;
		case 48:
			func_135(uParam0, -1);
			break;
		case 49:
			func_135(uParam0, -1);
			break;
		case 42:
			func_135(uParam0, -1);
			break;
	}
}

void func_1394(var uParam0)
{
	func_2006(uParam0);
	func_2007(0);
	func_2008();
	func_2009();
	func_2010(uParam0);
	func_2011(uParam0);
}

void func_1395()
{
	if (!bVar7719)
	{
		if ((!is_entity_dead(Global_35) && !is_entity_dead(iVar7692)) && is_ped_sitting_in_vehicle(Global_35, iVar7692))
		{
			if (!is_control_pressed(0, -1287526382))
			{
				if (func_26(&uLocal_7725))
				{
					func_563(&uLocal_7725);
				}
				if (!func_26(&uLocal_7728))
				{
					func_228(&uLocal_7728);
				}
				else if (func_909(&uLocal_7728) > 3f)
				{
					func_1909(2);
					func_563(&uLocal_7728);
					iLocal_7721 = 1;
				}
			}
			else
			{
				if (func_26(&uLocal_7728))
				{
					func_563(&uLocal_7728);
				}
				if (!func_26(&uLocal_7725))
				{
					func_228(&uLocal_7725);
				}
				else if (func_909(&uLocal_7725) > 3f)
				{
					func_563(&uLocal_7725);
					iLocal_7721 = 1;
				}
			}
		}
	}
}

void func_1396(var uParam0)
{
	if (iVar8038 == 1)
	{
		func_1295(uParam0, 37);
		func_1298(&(Local_302.f_3), 8);
	}
	else
	{
		func_1295(uParam0, 36);
		func_1297(&(Local_302.f_3), 8);
	}
}

void func_1397()
{
	if (Local_302.f_15 >= 3)
	{
		func_1314(59, 0, 1);
		func_1314(58, 0, 1);
		func_1314(56, 0, 1);
		func_1314(57, 0, 1);
		func_1314(83, 0, 1);
		return;
	}
	if (func_1305(59, 0) != 3)
	{
		return;
	}
	func_1909(2);
	if (func_1305(58, 0) != 3)
	{
		return;
	}
	if (func_1341(&uLocal_7353) < 7f)
	{
		return;
	}
	fVar0 = 5f;
	if (!func_26(&uLocal_7359))
	{
		func_507(&uLocal_7359, fVar0);
	}
	if (func_1341(&uLocal_7359) < fVar0)
	{
		return;
	}
	func_2007(1);
	if (func_1306(56) != 3)
	{
		func_228(&uLocal_7359);
		return;
	}
	if (func_1306(57) != 3)
	{
		func_228(&uLocal_7359);
		return;
	}
	if (func_1999(83, 0))
	{
		func_228(&uLocal_7359);
	}
}

void func_1398()
{
	func_2012(0);
	if (!func_995(iLocal_252, 0))
	{
		return;
	}
	if (!func_1311(iLocal_252, -982327190))
	{
		clear_ped_tasks(iLocal_252, 1, 0);
		task_stand_still(iLocal_252, -1);
		_0xff1e339ce40eaaaf(iLocal_252, 0);
	}
}

void func_1399()
{
	if (func_166(54))
	{
		return;
	}
	if (func_1301(iVar300, -271.4112f, 1162.663f, 90.0391f, 20f, 1, 1))
	{
		_set_weather_type(-1721991356, false, true, true, 45f, false);
		func_453(54);
	}
}

bool func_1400(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vVar0 = { get_entity_coords(*iParam0, true, false) };
	iVar3 = func_1286(iParam1, vVar0);
	if (iVar3 >= iParam2 && iVar3 <= iParam3)
	{
		return true;
	}
	return false;
}

int func_1401(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0;
	}
	if (func_508(iParam0))
	{
		return round((iParam0->f_2 * 1000f));
	}
	return (func_509() - round((iParam0->f_1 * 1000f)));
}

bool func_1402(var uParam0)
{
	if (func_899(Global_35, iVar299, 1, 1) < 10f)
	{
		func_1318(uParam0, "multistart");
		if (func_1301(Global_35, -440.48f, 1052.42f, 87.25f, 14f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_1403()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_2013(Local_1199[iVar0], 3, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2013(Local_2355[iVar0], 3, 0);
		iVar0++;
	}
}

void func_1404()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 == 9 || iVar0 == 10)
		{
		}
		else
		{
			func_986(Local_1199[iVar0]);
			func_1407(Local_1199[iVar0], 0);
			func_1407(&(Local_1199[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_986(Local_2355[iVar0]);
		func_1407(Local_2355[iVar0], 0);
		func_1407(&(Local_2355[iVar0]->f_1), 0);
		iVar0++;
	}
}

void func_1405()
{
	_set_weather_type(-1721991356, false, true, true, 20f, false);
}

void func_1406(var uParam0, var uParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_2014(&((*Global_1835011)[uParam0->f_607]->f_22), uParam1, iParam2);
}

void func_1407(int* iParam0, bool bParam1)
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

char* func_1408()
{
	return "cutDeleteMe";
}

void func_1409(var uParam0, int iParam1)
{
	func_425(&(uParam0->f_64), iParam1);
}

void func_1410(var uParam0, int iParam1)
{
	func_1640(&(uParam0->f_64), iParam1);
}

bool func_1411(int iParam0)
{
	if (!func_996(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_1412(int iParam0, bool bParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1055(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1054(iParam0, 16, 0);
		}
	}
	func_1054(iParam0, 1, bParam1);
}

void func_1413(int iParam0, var uParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_1055(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_2015(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_1055(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_1055(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_1055(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_1055(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_2016(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_562(iParam0));
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
		if (bVar2 && !func_205(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_1055(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_1055(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_1055(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_333(iParam0, 0));
		}
	}
}

void func_1414(int iParam0)
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

void func_1415(int iParam0)
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

void func_1416()
{
	iVar0 = func_1135(Global_35, 9, 1, 0);
	if (func_695(iVar0))
	{
		return;
	}
	iVar0 = func_1135(Global_35, 7, 1, 0);
	if (func_695(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1135(Global_35, 0, 1, 0);
	if (func_695(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1135(Global_35, 1, 1, 0);
	if (func_695(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1135(Global_35, 18, 1, 0);
	if (func_695(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_2017();
	if (func_695(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1317(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2018(6291456, 0);
	if (func_695(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1317(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1417()
{
	return Global_1900383->f_393;
}

int func_1418(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1885(*uParam0, 0f, 0f, 0f))
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

void func_1419(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1420(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1421(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1422()
{
	return &Global_1899515;
}

void func_1423(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

void func_1424(int iParam0)
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

bool func_1425()
{
	return (func_2019() || func_2020());
}

void func_1426(bool bParam0)
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
	func_2021(0f);
	Global_1935436->f_11 = 1;
	if (func_313())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_2022();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1427(var uParam0)
{
	return uParam0->f_865;
}

float func_1428(var uParam0)
{
	return uParam0->f_868;
}

float func_1429(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1430(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1431(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1432(var uParam0, int iParam1)
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

void func_1433(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1227(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2023(iParam4);
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

bool func_1434(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_680(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1435(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1436(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1434(1108822547, 6))
	{
		if (bParam2)
		{
			func_1433(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1437(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1438(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1437(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_680(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_680(iParam0, 1)])->f_10 || iParam1);
}

void func_1438(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_680(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_680(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_680(iParam0, 1)])->f_10 && iParam1));
}

bool func_1439(var uParam0)
{
	if (func_2024(&(uParam0->f_29), 62))
	{
		switch (func_2025())
		{
			case 1:
				if (!func_2024(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_2024(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_2024(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_2024(&(uParam0->f_29), 32))
				{
					if (func_2024(&(uParam0->f_29), 2))
					{
						if (func_702(func_294()) < 5)
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

int func_1440(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_2026(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1175("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1027(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_695(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_2026(iParam1, 512) && func_1736(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_2026(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_2026(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_2026(iParam1, 33554432)))
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
		func_1029(iVar1);
	}
	if (func_695(iVar0))
	{
	}
	else if (!func_2026(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1440(uParam0, iParam1, iParam2);
	}
	else if (func_2026(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1441(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

char* func_1442(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "script@story@nts3@ig@ig0_charles_intro_wnt@ig0_charles_wnt";
		case 0:
			return "script@story@nts3@leadin@int@leadin";
		case 2:
			return "script@story@NTS3@IG@IG2_Crouch_Wave_Behind@ig2_crouch_wave_behind";
		case 3:
			return "script@story@NTS3@IG@IG3_Guards_Chat@ig3_guards_chat";
		case 4:
			return "script@story@NTS3@IG@IG3_Guards_Chat@ig3_guards_idle_01";
		case 5:
			return "script@story@NTS3@IG@IG3_Guards_Chat@ig3_guards_idle_01^1";
		case 6:
			return "script@story@NTS3@IG@IG4_Wall_Gesture@ig4_wall_gesture";
		case 7:
			return "script@story@NTS3@IG@IG5_Wall_Cover_Shine_Lantern@IG5_Wall_Cover_Shine_Lantern";
		case 8:
			return "script@story@NTS3@IG@IG5_Wall_Cover_Shine_Lantern@IG5_Wall_Cover_Shine_Lantern_CHARLES";
		case 9:
			return "script@story@NTS3@IG@IG7_Guard_Window@IG7_Guard_Window";
		case 10:
			return "script@story@NTS3@IG@IG9_Indicate_Kill@ig9_indicate_kill";
		case 11:
			return "script@story@NTS3@IG@IG10_Wave_Door@ig10_wave_door";
		case 12:
			return "script@story@NTS3@IG@IG11_Point_Door@ig11_point_door";
		case 13:
			return "script@story@NTS3@IG@IG12_Front_Fort_Look@ig12_front_fort_look";
		case 14:
			return "script@story@nts3@ig@ig13_guard_fire_reacts@ig13_guard_fire_loop";
		case 15:
			return "script@story@NTS3@IG@IG13_Guard_Fire_Reacts@ig13_guard_fire_reacts_arm";
		case 16:
			return "script@story@NTS3@IG@IG13_Guard_Fire_Reacts@ig13_guard_fire_reacts_arm_02";
		case 17:
			return "script@story@NTS3@IG@IG13_Guard_Fire_Reacts@ig13_guard_fire_reacts_arm_03";
		case 18:
			return "script@story@NTS3@IG@IG14_Wave_Down@NTS3_IG14_WAVE_DOWN";
		case 19:
			return "script@story@NTS3@IG@IG15_Jail_Chat@ig15_jail_chat";
		case 20:
			return "script@story@NTS3@IG@IG16_Jail_Kill@ig16_jail_kill";
		case 21:
			return "script@story@NTS3@IG@IG_MCS2_Charles_Drawer_Search@CharlesDrawerSearch";
		case 22:
			return "script@story@nts3@leadin@mcs2@static_prop";
		case 23:
			return "script@story@NTS3@LEADIN@MCS2@LEADIN";
		case 24:
			return "script@story@NTS3@IG@IG17_Eagle_Lean@NTS3_IG17_Eagle_Lean";
		case 25:
			return "script@story@NTS3@IG@IG18_Eagle_Shove@ig18_Eagle_Shove_Charles";
		case 26:
			return "script@story@NTS3@IG@IG18_Eagle_Shove@ig18_Eagle_Shove_Eagle";
		case 27:
			return "script@story@NTS3@IG@IG20_Eagle_Flies_Horse_Ride@ig20_Eagle_Flies_Horse_Ride";
		case 28:
			return "script@story@NTS3@IG@IG22_Canoe_Enter@NTS3_IG22_Canoe_Enter";
		case 29:
			return "script@story@nts3@ig@ig23_charles_finds_keys@ig23_charles_finds_keys";
		case 30:
			return "script@story@nts3@ig@ig24_arthur_rotates_cannon@ig24_arthur_rotates_cannon";
		case 31:
			return "script@story@NTS3@LEADIN@EXT@LEADIN";
		case 32:
			return "script@story@NTS3@leadout@ext@leadout";
		default:
			break;
	}
	return "";
}

char* func_1443(int iParam0)
{
	switch (iParam0)
	{
		case 98:
			return "";
		case 1:
			return "pbl_Walk_N_Talk";
		case 2:
			return "pl_base";
		case 3:
			return "pl_leadin";
		case 4:
			return "pbl_Come_On_Right";
		case 5:
			return "pbl_Wave_Come_LHand_LShoulder";
		case 6:
			return "pbl_Wave_Come_RHand_And_LHand";
		case 7:
			return "pbl_Wave_Come_RHand_RShoulder";
		case 8:
			return "pbl_Wave_Over_Come_On_Left";
		case 9:
			return "pbl_Wave_Over_Impatient_Right";
		case 10:
			return "pbl_Wave_Over_Insistant_Right";
		case 11:
			return "pbl_all_actions";
		case 12:
			return "pbl_armenlisted01^1_idles";
		case 13:
			return "pbl_action_a_lfoot";
		case 14:
			return "pbl_action_b_rfoot";
		case 15:
			return "pbl_action_c";
		case 16:
			return "pbl_enter_action_exit";
		case 17:
			return "pbl_enter";
		case 18:
			return "pbl_exit";
		case 19:
			return "pbl_Idle_02";
		case 20:
			return "pbl_Idle_03";
		case 21:
			return "pbl_Idle_07";
		case 22:
			return "PBL_ENTER";
		case 23:
			return "pbl_Fall";
		case 24:
			return "pbl_Quick_Exit";
		case 25:
			return "pbl_action";
		case 26:
			return "pbl_indicate_kill_hush_one_hand";
		case 27:
			return "pbl_indicate_kill_hush_two_hands";
		case 28:
			return "pbl_long_look_and_wave";
		case 29:
			return "pbl_look_and_wave";
		case 30:
			return "pbl_opposite_side_quick_look_wave";
		case 31:
			return "pbl_opposite_side_wave_while_look";
		case 32:
			return "pbl_look_nod_indicate";
		case 33:
			return "pbl_look_startled_indicate";
		case 34:
			return "pbl_rt_look_nod_indicate";
		case 35:
			return "pbl_rt_low_look_nod_indicate";
		case 36:
			return "pbl_slow_low_look_indicate";
		case 37:
			return "pbl_gesturing_scan_point";
		case 38:
			return "pbl_scan";
		case 39:
			return "pbl_scan_with_nod_indicate";
		case 40:
			return "spread";
		case 41:
			return "Loop";
		case 42:
			return "pbl_Start_Idle";
		case 43:
			return "pbl_Action_To_Idle_Loops";
		case 44:
			return "pbl_idle_A";
		case 45:
			return "pbl_Idle_B";
		case 46:
			return "pbl_Idle_C";
		case 47:
			return "pbl_Idle_F";
		case 48:
			return "pbl_Conversation";
		case 49:
			return "pbl_Eagle_Loop";
		case 50:
			return "pbl_action";
		case 51:
			return "pbl_enter_jailchat";
		case 52:
			return "Pbl_Enter_Idle_Loop";
		case 53:
			return "Pbl_Exit";
		case 54:
			return "pbl_explosion_reaction";
		case 55:
			return "pbl_Charles_Mount_Horse";
		case 56:
			return "pbl_Explosion_Exit";
		case 57:
			return "pbl_Idle_Loops";
		case 58:
			return "pbl_action";
		case 59:
			return "pbl_Eagle_Mount_Horse";
		case 60:
			return "pbl_Explosion_Exit";
		case 61:
			return "pbl_Enter_Idle_Loops";
		case 62:
			return "pbl_action";
		case 63:
			return "pbl_idle_Loops";
		case 64:
			return "pbl_subtle_idle_loops";
		case 65:
			return "pbl_Enter_Fight";
		case 66:
			return "pbl_Enter_Fight_Idle_Loops";
		case 67:
			return "pbl_Exit_Fight";
		case 68:
			return "pbl_Idles";
		case 69:
			return "pbl_action";
		case 70:
			return "pbl_Finds_Keys";
		case 71:
			return "pbl_Charles_Idle_v1";
		case 72:
			return "pbl_Charles_Idle_v2";
		case 73:
			return "pbl_Front_Throw";
		case 74:
			return "pbl_Left_Throw";
		case 75:
			return "pbl_Right_Throw";
		case 76:
			return "pbl_Back_Left_Throw";
		case 77:
			return "pbl_Back_Right_Throw";
		case 85:
			return "pbl_idle_A";
		case 86:
			return "pbl_Idle_D";
		case 87:
			return "pbl_idle_g";
		case 88:
			return "pbl_enter01";
		case 89:
			return "pbl_exit01";
		case 78:
			return "pbl_Left_Pickup_Cannon";
		case 79:
			return "pbl_Right_Pickup_Cannon";
		case 80:
			return "pbl_Back_Left_Pickup_Cannon";
		case 81:
			return "pbl_Back_Right_Pickup_Cannon";
		case 82:
			return "pbl_Front_Pickup_Cannon";
		case 83:
			return "pbl_Front_Pickup_Cannon_Base_Loop";
		case 84:
			return "pbl_Rotate_Cannon";
		case 90:
			return "pbl_NTS3_MCS2_LEADIN";
		case 91:
			return "pl_props_static";
		case 92:
			return "";
		case 93:
			return "pbl_Cough_A";
		case 94:
			return "pbl_Cough_B";
		case 95:
			return "pbl_Exit";
		case 96:
			return "pbl_Labored_Breath";
		case 97:
			return "pbl_Wipe_Face";
		default:
			break;
	}
	return "";
}

void func_1444(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_858(iParam3, func_33(uParam0)) && !func_858(iParam3, func_35(uParam0)))
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
	iVar0 = func_2027(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_2028(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*uParam2))
	{
		*uParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	uParam0->f_1126[iVar0]->f_1 = *uParam2;
	uParam0->f_1126[iVar0] = cParam1;
	uParam0->f_1126[iVar0]->f_3 = (uParam0->f_1126[iVar0]->f_3 || iParam3);
	uParam0->f_1126[iVar0]->f_65 = iParam6;
	uParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_1447(&(uParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_1445(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_858(iParam3, func_33(uParam0)) && !func_858(iParam3, func_35(uParam0)))
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
	iVar0 = func_2029(&(uParam0->f_1126), iParam1);
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

int func_1446(int iParam0)
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

void func_1447(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1448(var uParam0)
{
	if (!func_889(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_1447(&(uParam0->f_1), 1);
	}
}

void func_1449(var uParam0)
{
	if (!func_889(*uParam0, 1))
	{
		request_ptfx_asset();
		func_1447(uParam0, 1);
	}
}

bool func_1450(var uParam0)
{
	if (func_889(uParam0->f_2, 1))
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

char* func_1451(int iParam0)
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

bool func_1452(int iParam0)
{
	return iParam0 != 0;
}

int func_1453(var uParam0, int iParam1)
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

int func_1454(var uParam0, char* sParam1)
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

void func_1455(var uParam0, int iParam1)
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

int func_1456(var uParam0)
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

void func_1457(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1458(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1459(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1460(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1461(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1461(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1461(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1461(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1461(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1461(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1461(uParam0, 5, iParam4))
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
			if (func_1461(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1461(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1461(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1462(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1463(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_225((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1464(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_506(sParam0, 1);
}

bool func_1465(var uParam0)
{
	if (func_889(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_1, 1))
	{
		func_859(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1466(var uParam0)
{
	if (func_889(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_3, 1))
	{
		func_861(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_1447(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_1447(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1467(var uParam0)
{
	if (func_889(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_1, 1))
	{
		func_863(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1468(var uParam0, int iParam1)
{
	if (func_889(uParam0->f_1, 2))
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
	if (!func_889(uParam0->f_1, 1))
	{
		func_870(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1469(var uParam0)
{
	if (func_889(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_2, 1))
	{
		func_872(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_1447(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1470(var uParam0)
{
	if (func_889(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_3, 1))
	{
		func_874(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_1447(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1471(var uParam0)
{
	if (func_889(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_1, 1))
	{
		func_876(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1472(var uParam0)
{
	if (func_889(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_1, 1))
	{
		func_878(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1473(var uParam0)
{
	if (func_889(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_2, 1))
	{
		func_880(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_1447(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1474(var uParam0)
{
	if (func_889(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_889(uParam0->f_1, 1))
	{
		func_882(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_1447(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1475(int iParam0)
{
	if (func_525(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1476(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_525(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_1058(iParam0, 2, 1))
			{
				func_994(iParam0, 2, 1);
			}
			if (func_714(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1001(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_531(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_995(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_995(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_2030(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1001(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2031(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1001(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2031(iParam0, 1);
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
			if (!func_1058(iParam0, 44, 0))
			{
				func_1001(iParam0, 44, 0);
			}
			if (func_2032(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_2031(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_994(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1060(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_2033(iParam0, 0, 0, 1);
			}
			func_994(iParam0, 33, 1);
			func_994(iParam0, 34, 1);
			func_994(iParam0, 29, 1);
			if (!func_407(vVar0) && bParam7)
			{
				func_2031(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_2031(iParam0, 4);
			}
			else
			{
				func_2031(iParam0, 5);
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
						func_2030(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_900(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_2031(iParam0, 4);
			}
			else
			{
				func_2031(iParam0, 5);
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
				if (func_2034(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_2035(iParam0, iParam13, 0);
						func_2036(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1058(iParam0, 25, 0))
						{
							func_994(iParam0, 25, 0);
						}
						func_1001(iParam0, 66, 0);
						func_2031(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_2031(iParam0, 5);
				}
				func_1001(iParam0, 28, 1);
			}
			else
			{
				func_2031(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_2031(iParam0, 6);
			}
			break;
		case 6:
			if (func_995(Global_1360165[iParam0], 0))
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
					func_2037(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1927(Global_1360165[iParam0], 1);
				}
			}
			func_2031(iParam0, 7);
		case 7:
			func_1060(iParam0, bParam9, bParam15, 0);
			func_1054(iParam0, 4, bParam11);
			func_1056(iParam0);
			if (bParam20)
			{
				if (func_2038(Global_1360165[iParam0]))
				{
				}
			}
			func_2039(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_2031(iParam0, 0);
			func_715(iParam0, 16, 1);
			func_994(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1477(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2040(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_2041(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_2042(uParam0, iParam1, iParam2, func_333(iParam2, 0));
	func_817(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_817(uParam0, iParam1, 128);
	}
	else
	{
		func_1949(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1478(int iParam0)
{
	if (!func_525(iParam0))
	{
		return;
	}
	iVar0 = func_562(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1479(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1480(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1489(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1481(int iParam0)
{
	iParam0 = func_275(iParam0);
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
	func_2043(&Var0);
	func_2044(iParam0, Var0);
	func_2045(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2046(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2047(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2048(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2049(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2050(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2051(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2052(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2053(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1482(vector3 vParam0)
{
	return func_2054(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1483(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_540(iParam0))
	{
		return false;
	}
	iVar0 = func_223(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1484(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_534(iParam0);
	func_534(iParam0);
	func_2055(iParam0, iParam1);
	func_2056(iParam0, iParam1);
	func_2057(iParam0, iParam1);
	iVar1 = func_223(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2058(iVar1);
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
	iVar3 = func_223(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2058(iVar3);
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
	func_277();
}

bool func_1485()
{
	iVar0 = func_1417();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1486()
{
	iVar0 = func_1417();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2059(0);
}

int func_1487(int iParam0)
{
	iParam0 = func_275(iParam0);
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

int func_1488(int iParam0)
{
	iParam0 = func_275(iParam0);
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

int func_1489(int iParam0)
{
	iParam0 = func_275(iParam0);
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

void func_1490(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1792(&iVar0, &iVar1, &iVar2);
	func_1793(iParam0, iVar0);
	func_1794(iParam0, iVar1);
	func_1795(iParam0, iVar2);
	func_2060(iParam0, 1);
	func_2061(iParam0, 1);
}

void func_1491(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1882(iParam0, 1);
}

void func_1492(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_275(iParam0);
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

bool func_1493(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1067(iParam0, 1);
}

struct<2> func_1494(int iParam0)
{
	iParam0 = func_275(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2062(iParam0, &uVar2))
	{
	}
	if (!func_2063(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1495()
{
	if (func_2064(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2064(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2064(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2064(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2064(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2064(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1496(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_2065(iParam0);
	func_2066(iParam0, uParam1);
	func_2067(iParam0);
	func_2068(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2069(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1497(int iParam0)
{
	iParam0 = func_275(iParam0);
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

bool func_1498(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1499(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1500(var uParam0)
{
	return uParam0;
}

bool func_1501(int iParam0)
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

int func_1502(var uParam0)
{
	return *uParam0;
}

bool func_1503(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2070(iParam0) };
	if (func_1885(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_901(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2071(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1504(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1505(var uParam0)
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

bool func_1506(var uParam0)
{
	switch (func_2072(uParam0))
	{
		case 0:
			uParam0->f_24 = func_294();
			iVar4 = func_294();
			func_1232(&iVar4, uParam0->f_6);
			func_1233(&iVar4, 0);
			func_1234(&iVar4, 0);
			if (func_1086(uParam0->f_24, iVar4, 1))
			{
				func_343(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2073(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2074(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2075(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2074(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2075(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_343(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_702(iVar4), func_703(iVar4), func_704(iVar4));
				func_2076(get_clock_hours());
				func_2077(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1507(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2078(2000);
	Global_16 = 0;
	func_2079();
	set_entity_invincible(Global_35, func_2080(*iParam0, 8));
	if (!func_2080(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2080(*iParam0, 2) || func_2080(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2080(*iParam0, 16))
	{
		func_244(1);
	}
	if (func_2080(*iParam0, 32))
	{
		func_636(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2081(-1623728698, 0);
	}
	func_833(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1508(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1509(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1510(var uParam0)
{
	return *uParam0;
}

bool func_1511(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1512(uParam0, 32768))
	{
		return true;
	}
	if (func_2082(uParam0) >= 3)
	{
		uParam0->f_2286 = func_965(get_player_index(), 0, 0, 1);
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
		func_2083(uParam0);
	}
	if (func_2082(uParam0) < 10)
	{
		if (func_2082(uParam0) == 3)
		{
			func_2084(uParam0, iParam5, bParam6);
		}
		else if (func_2082(uParam0) > 3)
		{
			if (func_1510(uParam0) == 0)
			{
				if (!func_1512(uParam0, 524288))
				{
					func_2085(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2086(uParam0, 4);
					func_2087(uParam0, 10);
					func_2088(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1512(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2089(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_2012(0);
			func_2090();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2089(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2091(uParam0, uParam0->f_2074))
				{
					if (func_2092(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2093(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2093(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2094(uParam0);
			}
		}
	}
	bVar0 = func_2095(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1512(uParam0, 268435456) && bVar1) && !func_1512(uParam0, 262144))
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
				func_753(uParam0, 131072);
				func_753(uParam0, 268435456);
			}
		}
		if (func_2096(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2089(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1510(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2082(uParam0) == 3 || func_1512(uParam0, 131072))
	{
		func_2097(uParam0);
		if (!func_1512(uParam0, 262144))
		{
			if ((bVar0 && func_1512(uParam0, 65536)) || func_1512(uParam0, 131072))
			{
				func_753(uParam0, 32768);
				func_2086(uParam0, 4);
				func_2087(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2088(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2082(uParam0) >= 3)
	{
		func_2098(uParam0, iParam5);
		func_2099(uParam0);
		if (!func_2100(uParam0, 1))
		{
			func_2101(uParam0);
		}
		func_2102(uParam0);
	}
	switch (func_2082(uParam0))
	{
		case 0:
			func_2103(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2104(uParam0);
			break;
		case 2:
			func_2105(uParam0);
			break;
		case 3:
			if (func_2106(uParam0))
			{
				func_2107(2);
				func_2093(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_228(&(uParam0->f_2262));
				func_2086(uParam0, 1);
				func_2108();
				func_2087(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1512(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2082(uParam0) == 5)
			{
				if (func_2109(uParam0))
				{
					func_2086(uParam0, 2);
					func_2087(uParam0, 6);
				}
			}
			if (func_2082(uParam0) == 6)
			{
				if (func_2110(uParam0))
				{
					func_2086(uParam0, 3);
					func_2087(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1341(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2111(uParam0, iParam5))
				{
					if (func_2112(uParam0))
					{
						uParam0->f_2075 = func_2113(uParam0);
						func_228(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2086(uParam0, 6);
						func_2087(uParam0, 9);
					}
					else
					{
						func_2086(uParam0, 4);
						func_2087(uParam0, 10);
						func_2088(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2111(uParam0, iParam5))
			{
				func_2088(uParam0, iParam5);
				func_2087(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1512(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1513(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1514(var uParam0, var uParam1)
{
	if (func_1512(uParam1, 32768))
	{
		Var0 = { func_2114(uParam0) };
		func_1898(uParam0, &Var0);
		if (func_1512(uParam1, 131072))
		{
			func_754(uParam0, 268435456);
			if (func_407(uParam0->f_865))
			{
				uParam0->f_865 = { func_2115(uParam1, uParam1->f_2074) };
			}
			if (func_407(uParam0->f_862))
			{
				uParam0->f_862 = { func_2115(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1512(uParam1, 268435456))
		{
			func_1914(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1512(uParam1, 524288))
	{
		func_754(uParam0, 67108864);
		func_1513(uParam1, 524288);
	}
	if (func_2096(uParam1, 128))
	{
		func_754(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2089(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1914(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

bool func_1515(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_2116(uParam4, &uParam0);
	if (func_822(uParam4, 2) && !func_822(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2117(uParam4) != 1)
	{
		func_2118(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2117(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2119(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2120(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2121(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2122(uParam5);
				}
				func_2120(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_822(uParam4, 2097152))
					{
						func_1905(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_822(uParam4, 134217728)))
				{
				}
				else
				{
					func_2123(uParam4);
				}
				func_228(&(uParam4->f_1));
				func_2120(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2124(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_909(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2120(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2125(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2120(uParam4, 4);
					}
					else if (!func_407(func_2126(uParam4)) && !func_1301(Global_35, func_2126(uParam4), 100f, 1, 1))
					{
						func_1415(1);
						start_player_teleport(get_player_index(), func_2126(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_909(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2120(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_288(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2119(uParam4, &uParam0, uParam5);
						func_2120(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_909(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2120(uParam4, 4);
			}
			break;
		case 3:
			func_403(uParam4);
			if (func_2121(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2122(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_822(uParam4, 512)))
			{
				if (!func_822(uParam4, 1024) && func_2127(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_822(uParam4, 512))
				{
					func_228(&(uParam4->f_1));
					func_754(uParam4, 512);
					func_2120(uParam4, 4);
				}
				else if (func_822(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2118(uParam4);
			}
			if (func_822(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2128(uParam4) - func_2129(uParam4)))) <= 2f)
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
				if (func_2130(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2129(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2131(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2132(uParam4);
				return true;
			}
			else
			{
				if (func_822(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_228(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_754(uParam4, 512);
						func_1430(uParam4, 67108864, 1);
						func_2120(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_822(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2129(uParam4) <= 5000) && func_2129(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_822(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1507(&(uParam4->f_861), 0);
					func_754(uParam4, 536870912);
				}
				if (func_2129(uParam4) >= 5000 && func_2129(uParam4) <= (func_2128(uParam4) - 5000))
				{
					func_2133();
				}
			}
			break;
		case 6:
			if (func_2131(uParam4))
			{
				func_2132(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_822(uParam4, 524288))
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
						func_754(uParam4, 1073741824);
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
					if (func_2134(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2120(uParam4, 3);
					}
					else if (func_909(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2120(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2121(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2120(uParam4, 3);
					}
					else if (func_909(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2120(uParam4, 3);
					}
				}
				if (func_2117(uParam4) == 3)
				{
					if (func_822(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2120(uParam4, 4);
			break;
	}
	return false;
}

void func_1516(var uParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1408()))
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

bool func_1517(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_278(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2135(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_279(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2136(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1518(int iParam0)
{
	MemCopy(&cVar0, {func_278(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1519(int iParam0)
{
	Var0 = { func_1518(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1520(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2137(iVar0));
		iVar0++;
	}
}

bool func_1521()
{
	if (func_166(112))
	{
		return true;
	}
	if (!func_26(&uLocal_7639))
	{
		func_228(&uLocal_7639);
	}
	bVar0 = true;
	if (!func_2138(1978275899, 1, 65536))
	{
		bVar0 = false;
	}
	if (!func_2138(-719188272, 2, 131072))
	{
		bVar0 = false;
	}
	if (!func_2138(1452745259, 4, 262144))
	{
		bVar0 = false;
	}
	if (!func_2138(-1273821262, 8, 524288))
	{
		bVar0 = false;
	}
	if (!func_2138(-258459266, 16, 1048576))
	{
		bVar0 = false;
	}
	if (!func_2138(-22664287, 32, 2097152))
	{
		bVar0 = false;
	}
	if (!func_2138(458213947, 64, 4194304))
	{
		bVar0 = false;
	}
	if (!func_2138(2083867781, 128, 8388608))
	{
		bVar0 = false;
	}
	if (!func_2138(753163213, 256, 16777216))
	{
		bVar0 = false;
	}
	if (!func_2138(-491224884, 512, 33554432))
	{
		bVar0 = false;
	}
	if (!func_2138(1750783925, 1024, 67108864))
	{
		bVar0 = false;
	}
	if (!func_2138(1802462470, 2048, 134217728))
	{
		bVar0 = false;
	}
	if (!func_2138(1546182539, 4096, 268435456))
	{
		bVar0 = false;
	}
	if (!func_2138(950667356, 32768, -2147483648))
	{
		bVar0 = false;
	}
	if (func_1401(&uLocal_7639) > 10000)
	{
		func_563(&uLocal_7639);
		func_453(112);
		return true;
	}
	if (bVar0)
	{
		func_563(&uLocal_7639);
		func_453(112);
	}
	return bVar0;
}

int func_1522()
{
	if (func_988(65536))
	{
		return 1;
	}
	func_2139(Local_3359[1], 1978275899, 329.73f, 1506.06f, 185.83f, 0.87f, -0.48f, 0f);
	func_2139(Local_3359[2], -719188272, 342.48f, 1514.07f, 184.02f, 0.76f, 0.65f, 0f);
	func_2139(Local_3359[3], 1452745259, 343.97f, 1513.04f, 183.95f, 0.31f, 0.95f, 0f);
	func_2139(Local_3976[0], -1273821262, 352.36f, 1510.07f, 179.24f, 0.6f, -0.8f, 0f);
	func_2139(Local_3976[6], -22664287, 318.26f, 1498.41f, 180.34f, 0.09f, -1f, 0f);
	func_2139(Local_3976[8], -22664287, 331.39f, 1499.9f, 180.72f, 0.65f, -0.76f, 0f);
	func_2139(Local_3976[9], 458213947, 360.84f, 1489.59f, 179.57f, -0.91f, 0.42f, 0f);
	func_2139(Local_3976[11], 2083867781, 335.15f, 1485.42f, 178.56f, 0.62f, 0.79f, 0f);
	func_2139(Local_3976[12], 753163213, 324.79f, 1480.22f, 179.5f, -0.26f, -0.96f, 0f);
	func_2139(Local_3976[13], -491224884, 326.07f, 1480.11f, 179.5f, -0.26f, -0.96f, 0f);
	func_2139(Local_2433[3], 1802462470, 354.24f, 1503.97f, 179.06f, -0.92f, 0.39f, 0f);
	func_2139(Local_2433[4], -1273821262, 340.02f, 1490.09f, 178.57f, 0.42f, 0.91f, 0f);
	func_2139(Local_2433[7], 1546182539, 333.21f, 1499.38f, 180.61f, -0.99f, -0.17f, 0f);
	func_2139(Local_2433[8], 950667356, 358.69f, 1494.93f, 179.22f, -0.43f, -0.9f, 0f);
	func_398(65536);
	return 1;
}

int func_1523()
{
	if (func_988(32768))
	{
		return 1;
	}
	func_2141(Local_3359[0], 0, func_2140(5, 0), vLocal_7690, 0, 0, 0);
	func_2141(Local_3359[0], -22664287, 318.03f, 1505.71f, 185.82f, 0.72f, -0.69f, 0f, -1, 0, 0);
	if (!_does_volume_exist(&(iLocal_268[6])))
	{
		iLocal_268[6] = _create_volume_cylinder_with_custom_name(358.571f, 1519.458f, 184.5813f, 0f, 0f, 0f, 2.698087f, 2.093244f, 1.537923f, "Tower 02 guard move");
	}
	func_2141(Local_3359[4], 1978275899, 365.08f, 1512.68f, 183.8f, 0.25f, -0.97f, 0f, -1, &(iLocal_268[6]), 0);
	func_2141(Local_3359[4], -258459266, 367.99f, 1500.04f, 182.42f, 0.26f, -0.97f, 0f, -1, 0, 0);
	if (!_does_volume_exist(&(iLocal_268[7])))
	{
		iLocal_268[7] = _create_volume_cylinder_with_custom_name(367.6941f, 1473.619f, 180.2133f, 0f, 0f, 0f, 1f, 1f, 1f, "Tower 03 guard move");
	}
	func_2141(Local_3359[6], 1452745259, 364.41f, 1470.74f, 183.7f, -0.86f, 0.5f, 0f, -1, &(iLocal_268[7]), 0);
	func_2141(Local_3359[6], -258459266, 358.59f, 1465.54f, 182.92f, 0.6f, -0.8f, 0f, 8000, 0, 1);
	func_2141(Local_3359[6], -258459266, 353.33f, 1462.08f, 182.92f, 0.56f, -0.83f, 0f, 2000, 0, 1);
	func_2141(Local_3359[6], -258459266, 367.86f, 1470.64f, 183.67f, 0.33f, -0.94f, 0f, -1, 0, 1);
	func_2141(Local_3976[10], -258459266, 351.49f, 1497.05f, 178.82f, -0.28f, -0.96f, 0f, 30000, 0, 0);
	func_2141(Local_3976[10], -258459266, 336.54f, 1486.29f, 178.52f, -0.72f, -0.7f, 0f, 45000, 0, 0);
	func_2141(Local_3976[10], -258459266, 326.04f, 1482.14f, 179.3f, -0.41f, -0.91f, 0f, 30000, 0, 0);
	func_2141(Local_3976[10], -258459266, 336.84f, 1497.18f, 180.28f, 0.42f, -0.91f, 0f, 45000, 0, 0);
	func_2141(Local_3359[5], -258459266, 343.63f, 1466.06f, 178.4f, -0.73f, -0.69f, 0f, -1, 0, 0);
	func_2141(Local_3359[5], -258459266, 351.8f, 1468.19f, 178.71f, 0.81f, 0.59f, 0f, -1, 0, 1);
	func_2141(Local_3976[5], 1978275899, 343.51f, 1463.53f, 182.9f, -0.76f, -0.65f, 0f, 5000, 0, 0);
	func_2141(Local_3976[5], 1978275899, 333.61f, 1476.9f, 182.8f, -0.8f, -0.6f, 0f, 45000, 0, 0);
	func_2141(Local_3976[4], -258459266, 330.98f, 1479.12f, 182.67f, -0.22f, -0.98f, 0f, 20000, 0, 0);
	func_2141(Local_3976[4], -258459266, 321.99f, 1481.02f, 183.57f, -0.19f, -0.98f, 0f, 20000, 0, 0);
	func_2141(Local_3976[4], -258459266, 318.03f, 1482.67f, 184.5f, -0.82f, -0.57f, 0f, 20000, 0, 0);
	func_2141(Local_3976[4], -258459266, 321.99f, 1481.02f, 183.57f, -0.19f, -0.98f, 0f, 20000, 0, 0);
	func_2141(Local_2433[2], 1750783925, 346.86f, 1494.03f, 178.49f, -0.99f, -0.1f, 0f, -1, 0, 0);
	func_2141(Local_2433[2], 1750783925, 356.1f, 1493.43f, 179.16f, 0.49f, 0.87f, 0f, 8000, 0, 0);
	func_2141(Local_2433[2], 1750783925, 355.49f, 1501.49f, 179.16f, 0.19f, 0.98f, 0f, -1, 0, 0);
	func_2141(Local_2433[0], 1750783925, 358.18f, 1508.56f, 179.04f, 0.61f, -0.79f, 0f, -1, &(iLocal_268[7]), 0);
	func_2141(Local_2433[0], 1750783925, 364.23f, 1498.42f, 179f, 0.35f, -0.94f, 0f, 10000, 0, 0);
	func_2141(Local_2433[0], 1750783925, 343.5f, 1489f, 179f, -0.32f, 0.95f, 0f, 6000, 0, 0);
	func_2141(Local_2433[0], 1750783925, 320.77f, 1495.37f, 179.46f, -0.53f, 0.85f, 0f, -1, 0, 0);
	func_398(32768);
	return 1;
}

int func_1524()
{
	if (func_988(16777216))
	{
		return 1;
	}
	func_2142(Local_2433[8], 0, 358.63f, 1493.03f, 179.21f, 2f, 1069547520);
	func_2142(Local_2433[2], 1, 346.83f, 1487.66f, 178.6f, 1f, 1069547520);
	func_2142(Local_2433[4], 2, 345.49f, 1484.87f, 178.62f, 1.8f, 1069547520);
	func_2142(Local_3359[6], 0, 359.03f, 1467.44f, 182.92f, 0.6f, 2f);
	func_2142(Local_2433[0], 2, 357.8787f, 1507.863f, 179.047f, 0.6f, 2f);
	func_2142(Local_3976[9], 1, 356.11f, 1487.48f, 178.88f, 1f, 1069547520);
	func_2142(Local_3976[10], 2, 351.24f, 1489.73f, 178.48f, 0.6f, 1069547520);
	func_2142(Local_3976[1], 3, 0f, 0f, 0f, 0f, 1069547520);
	func_2142(Local_3976[2], 3, 0f, 0f, 0f, 0f, 1069547520);
	func_2142(Local_3976[3], 3, 0f, 0f, 0f, 0f, 1069547520);
	func_398(16777216);
	return 1;
}

int func_1525(var uParam0)
{
	if (func_988(4096))
	{
		return 1;
	}
	fVar3 = 0f;
	iVar4 = func_925(uParam0);
	switch (iVar4)
	{
		case 0:
			vVar0 = { func_926(16, 1) };
			fVar3 = func_1583(16, 1);
			break;
		case 1:
			vVar0 = { func_926(4, 2) };
			fVar3 = func_1583(4, 2);
			break;
		case 2:
			vVar0 = { func_1288(2, 544) };
			fVar3 = func_1289(2, 544);
			break;
		case 3:
			vVar0 = { func_926(0, 1) };
			fVar3 = func_1583(0, 1);
			break;
		case 4:
			vVar0 = { 310.21f, 1501.63f, 185.8319f };
			fVar3 = func_1583(1, 1);
			break;
		case 5:
			vVar0 = { func_926(12, 1) };
			fVar3 = func_1583(12, 1);
			break;
		case 6:
			vVar0 = { func_926(3, 1) };
			fVar3 = func_1583(3, 1);
			break;
		case 7:
			vVar0 = { func_926(13, 1) };
			fVar3 = func_1583(13, 1);
			break;
		case 8:
			vVar0 = { func_926(7, 1) };
			fVar3 = func_1583(7, 1);
			break;
		case 9:
			vVar0 = { func_926(8, 0) };
			fVar3 = func_1583(8, 0);
			break;
		case 25:
			vVar0 = { func_926(10, 1) };
			fVar3 = func_1583(10, 1);
			break;
	}
	bVar5 = true;
	if (func_988(4194304))
	{
		bVar5 = false;
	}
	if (!func_892(uParam0, 7, &Local_302, 0, vVar0.x, vVar0.y, vVar0.z, fVar3, bVar5, 0, 1, 0, 1, 0))
	{
		return 0;
	}
	if (!func_995(iVar299, 0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar299))
	{
	}
	if (!func_988(4194304))
	{
		if (!func_1528())
		{
			return 0;
		}
		_set_entity_coords_and_heading_no_offset(iVar299, vVar0, fVar3, false, true);
	}
	func_1547(uParam0, &Local_302, 1);
	set_ped_config_flag(iVar299, 66, true);
	set_blocking_of_non_temporary_events(iVar299, true);
	set_ped_config_flag(iVar299, 168, false);
	set_ragdoll_blocking_flags(iVar299, 32768);
	set_ped_combat_attributes(iVar299, 27, true);
	set_ped_config_flag(iVar299, 170, true);
	_0x12990818c1d35886(iVar299, 0, 0f);
	_0x3ad8eff9703be657(iVar299, 0f);
	if (!_0x5102307ce88798eb(iVar299))
	{
		request_ped_visibility_tracking(iVar299);
	}
	func_2144(uParam0, iVar299, 385661, 0, "NTS3_COMP", 67108863, 1023, 3, -1);
	func_817(uParam0, iVar299, 16384);
	func_2145(7, 0, 1, 1, 1, 0);
	Local_302 = iVar299;
	if ((iVar4 == 1 || iVar4 == 2) || iVar4 == 3)
	{
		func_465(1);
	}
	if (iVar4 == 0)
	{
		func_1297(&(Local_302.f_3), 8);
		func_1297(&(Local_302.f_3), 16);
		func_399(uParam0, iVar299, 1105014447, 422991367, 1, 1);
	}
	func_398(4096);
	return 0;
}

int func_1526()
{
	if (func_988(8192))
	{
		return 1;
	}
	if (!func_995(iLocal_253, 0))
	{
		iLocal_253 = func_1941(-2046943672, 436.878f, 2229.981f, 247.0323f, 253.6319f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iLocal_253))
	{
		return 0;
	}
	if (func_981(iLocal_253, 243346937))
	{
		_set_ped_body_component(iLocal_253, 243346937);
		_update_ped_variation(iLocal_253, false, true, true, true, false);
	}
	set_entity_coords(iLocal_253, 436.878f, 2229.981f, 247.0323f, true, false, true, true);
	set_ped_relationship_group_hash(iLocal_253, -1247684992);
	if (!is_entity_a_mission_entity(iLocal_253))
	{
		set_entity_as_mission_entity(iLocal_253, true, false);
	}
	set_blocking_of_non_temporary_events(iLocal_253, true);
	set_entity_load_collision_flag(iLocal_253, 1);
	func_398(8192);
	return 1;
}

int func_1527(var uParam0)
{
	iVar0 = func_925(uParam0);
	if (func_166(47))
	{
		if (!func_995(iLocal_252, 1))
		{
			func_167(47);
		}
		else
		{
			return 1;
		}
	}
	func_274(uParam0, 1);
	if (!func_995(iLocal_252, 1))
	{
		vVar1 = { func_2146(iVar0) };
		if (func_436(uParam0, 1, vVar1.x, vVar1.y, vVar1.z, 0, 1, 1, 1))
		{
			iLocal_252 = func_269(uParam0);
		}
		return 0;
	}
	if (func_1546(uParam0, 1))
	{
		set_ped_config_flag(iLocal_252, 312, true);
		_0xf74e134f40192884(iLocal_252, 2);
		func_453(47);
	}
	return 0;
}

bool func_1528()
{
	if (!func_995(Local_302.f_1, 0))
	{
		Local_302.f_1 = func_2147(7, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	_0xba8818212633500a(Local_302.f_1, 0, 1);
	set_ped_relationship_group_hash(Local_302.f_1, -1683752762);
	set_entity_invincible(Local_302.f_1, true);
	return true;
}

int func_1529()
{
	if (func_988(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_995(&(Local_5055[iVar1]), 0))
		{
			iVar2++;
		}
		else
		{
			func_2148(iVar1, 1);
			if (!func_995(&(Local_14.f_3[iVar1]), 0))
			{
			}
			else
			{
				Local_5055[iVar1] = &Local_14.f_3[iVar1];
				Local_5055[iVar1]->f_5 = iVar1;
				set_ped_config_flag(&(Local_5055[iVar1]), 250, true);
				set_ped_config_flag(&(Local_5055[iVar1]), 96, true);
				set_ped_relationship_group_hash(&(Local_5055[iVar1]), 1269650476);
				set_blocking_of_non_temporary_events(&(Local_5055[iVar1]), false);
				set_ped_combat_attributes(&(Local_5055[iVar1]), 14, false);
				_0x9ab33cb5834885b3(&(Local_5055[iVar1]), 6f, 8f, -1082130432, -1082130432);
				_0x899dfa0009ac93de(&(Local_5055[iVar1]), 0.5f);
				_0x3a5697b80fed5ebe(&(Local_5055[iVar1]), 3f, 3f, 8f, 8f);
				set_ped_combat_movement(&(Local_5055[iVar1]), 0);
				set_ped_accuracy(&(Local_5055[iVar1]), 5);
				func_2149(&(Local_5055[iVar1]), 1);
				bVar0 = false;
				if (((iVar1 == 3 || iVar1 == 4) || iVar1 == 1) || iVar1 == 2)
				{
					func_425(&(Local_5055[iVar1]->f_6), 65536);
					func_425(&(Local_5055[iVar1]->f_6), 128);
					bVar0 = true;
				}
				if (iVar1 == 3)
				{
					func_1327(Local_5055[iVar1], 357.16f, 1463.2f, 178.53f, 2f, 1);
				}
				if (iVar1 == 4)
				{
					func_1327(Local_5055[iVar1], 361.99f, 1466.33f, 178.6f, 2f, 1);
				}
				func_1986(Local_5055[iVar1], bVar0);
				set_ped_hearing_range(&(Local_5055[iVar1]), 0f);
				set_ped_name_debug(&(Local_5055[iVar1]), func_2150(iVar1));
				iVar2++;
			}
			else
			{
				iVar1++;
			}
			if (iVar2 >= 5)
			{
				func_398(1);
			}
			return 0;
		}
	}
}

int func_1530(var uParam0)
{
	if (func_988(2048))
	{
		return 1;
	}
	vVar0 = { 343.5773f, 1468.083f, 179.7422f };
	fVar3 = 215.5939f;
	iVar4 = func_925(uParam0);
	switch (iVar4)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
		case 4:
		case 5:
			vVar0 = { func_926(2, 0) };
			fVar3 = func_1583(2, 0);
			break;
		case 6:
			vVar0 = { func_926(3, 2) };
			fVar3 = func_1583(3, 2);
			break;
		case 7:
			vVar0 = { func_926(13, 2) };
			fVar3 = func_1583(13, 2);
			break;
		case 8:
			vVar0 = { func_926(7, 7) };
			fVar3 = func_1583(7, 7);
			break;
		case 9:
			break;
		case 25:
			break;
	}
	if (!func_892(uParam0, 26, &Local_326, 0, vVar0.x, vVar0.y, vVar0.z, fVar3, 1, 0, 1, 0, 1, 0))
	{
		return 0;
	}
	if (!func_995(iVar323, 0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar323))
	{
		return 0;
	}
	_set_entity_coords_and_heading_no_offset(iVar323, vVar0, fVar3, false, true);
	if (func_981(iVar323, 1051259757))
	{
		_set_ped_body_component(iVar323, 1051259757);
		_update_ped_variation(iVar323, false, true, true, true, false);
		func_1001(26, 66, 0);
		func_1001(26, 28, 0);
		func_994(26, 25, 0);
	}
	if (iVar4 >= 6)
	{
		func_2042(uParam0, iVar323, 26, 0);
	}
	set_blocking_of_non_temporary_events(iVar323, true);
	func_1547(uParam0, &Local_326, 2);
	_0x89f5e7adecccb49c(iVar323, "injured_general");
	clear_ped_tasks_immediately(iVar323, false, true);
	task_stand_still(iVar323, -1);
	func_1642(26, 0, 0);
	func_398(2048);
	return 0;
}

int func_1531()
{
	if (func_988(131072))
	{
		return 1;
	}
	bVar0 = func_2151(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	bVar0 = func_2152(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!does_entity_exist(&(Local_14.f_121[iVar1])))
		{
		}
		else
		{
			Local_5441[iVar1] = &Local_14.f_121[iVar1];
			Local_5441[iVar1]->f_5 = iVar1;
			func_1986(Local_5441[iVar1], 0);
			if (!does_entity_exist(&(Local_14.f_127[iVar1])))
			{
			}
			else if (!func_1501(&(Local_14.f_127[iVar1])))
			{
			}
			else
			{
				Local_5441[iVar1]->f_1 = &Local_14.f_127[iVar1];
				func_1290(&(Local_5441[iVar1]), Local_5441[iVar1]->f_1, 0, -1, 1);
				func_1321(Local_5441[iVar1]);
				func_1317(&(Local_5441[iVar1]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				set_ped_relationship_group_hash(&(Local_5441[iVar1]), 1269650476);
				set_blocking_of_non_temporary_events(&(Local_5441[iVar1]), true);
			}
		}
		iVar1++;
	}
	func_398(131072);
	return 0;
}

int func_1532(var uParam0)
{
	if (func_988(8))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_995(&(Local_3359[iVar0]), 0))
		{
			iVar1++;
		}
		else
		{
			func_1348(iVar0, 1);
			if (!func_995(&(Local_14.f_49[iVar0]), 0))
			{
			}
			else
			{
				Local_3359[iVar0] = &Local_14.f_49[iVar0];
				Local_3359[iVar0]->f_5 = iVar0;
				set_blocking_of_non_temporary_events(&(Local_3359[iVar0]), true);
				set_ped_config_flag(&(Local_3359[iVar0]), 250, true);
				set_ped_config_flag(&(Local_3359[iVar0]), 96, true);
				set_ped_relationship_group_hash(&(Local_3359[iVar0]), 1269650476);
				_0x9ab33cb5834885b3(&(Local_3359[iVar0]), 6f, 8f, -1082130432, -1082130432);
				_0x899dfa0009ac93de(&(Local_3359[iVar0]), 0.5f);
				_0x3a5697b80fed5ebe(&(Local_3359[iVar0]), 3f, 3f, 8f, 8f);
				set_ped_combat_movement(&(Local_3359[iVar0]), 0);
				set_ped_accuracy(&(Local_3359[iVar0]), 5);
				set_ped_config_flag(&(Local_3359[iVar0]), 119, false);
				set_ped_config_flag(&(Local_3359[iVar0]), 81, false);
				set_ped_config_flag(&(Local_3359[iVar0]), 80, false);
				set_ped_combat_attributes(&(Local_3359[iVar0]), 14, false);
				set_ped_combat_attributes(&(Local_3359[iVar0]), 30, true);
				func_2149(&(Local_3359[iVar0]), 1);
				if ((((iVar0 != 0 && iVar0 != 1) && iVar0 != 2) && iVar0 != 3) && iVar0 != 4)
				{
					func_425(&(Local_3359[iVar0]->f_6), 8);
				}
				if (iVar0 == 2 || iVar0 == 3)
				{
					func_425(&(Local_3359[iVar0]->f_6), 128);
				}
				if (iVar0 == 7)
				{
					func_425(&(Local_3359[iVar0]->f_6), 131072);
					func_425(&(Local_3359[iVar0]->f_6), 262144);
				}
				if (iVar0 == 7 || iVar0 == 6)
				{
					Local_3359[iVar0]->f_11 = 1;
				}
				if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 1)
				{
					func_1906(Local_3359[iVar0], 256);
				}
				func_425(&(Local_3359[iVar0]->f_6), 32768);
				func_1986(Local_3359[iVar0], 1);
				set_ped_name_debug(&(Local_3359[iVar0]), func_2153(iVar0));
				iVar1++;
			}
			else
			{
				iVar0++;
			}
			if (iVar1 >= 8)
			{
				func_398(8);
			}
			return 0;
		}
	}
}

int func_1533(var uParam0)
{
	if (func_988(16))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_995(&(Local_3976[iVar1]), 0))
		{
			iVar2++;
		}
		else
		{
			func_2154(iVar1, 1);
			if (!func_995(&(Local_14.f_11[iVar1]), 0))
			{
			}
			else
			{
				Local_3976[iVar1] = &Local_14.f_11[iVar1];
				Local_3976[iVar1]->f_5 = iVar1;
				set_blocking_of_non_temporary_events(&(Local_3976[iVar1]), true);
				set_ped_config_flag(&(Local_3976[iVar1]), 250, true);
				set_ped_config_flag(&(Local_3976[iVar1]), 96, true);
				set_ped_relationship_group_hash(&(Local_3976[iVar1]), 1269650476);
				_0x9ab33cb5834885b3(&(Local_3976[iVar1]), 6f, 8f, -1082130432, -1082130432);
				_0x899dfa0009ac93de(&(Local_3976[iVar1]), 0.5f);
				_0x3a5697b80fed5ebe(&(Local_3976[iVar1]), 3f, 3f, 8f, 8f);
				set_ped_combat_movement(&(Local_3976[iVar1]), 0);
				set_ped_accuracy(&(Local_3976[iVar1]), 5);
				set_ped_config_flag(&(Local_3976[iVar1]), 119, false);
				set_ped_config_flag(&(Local_3976[iVar1]), 81, false);
				set_ped_config_flag(&(Local_3976[iVar1]), 80, false);
				set_ped_combat_attributes(&(Local_3976[iVar1]), 14, false);
				set_ped_combat_attributes(&(Local_3976[iVar1]), 30, true);
				func_2149(&(Local_3976[iVar1]), 1);
				func_425(&(Local_3976[iVar1]->f_6), 8);
				if (iVar1 == 1)
				{
					func_425(&(Local_3976[iVar1]->f_6), 4194304);
					func_1547(uParam0, Local_3359[iVar1], 7);
				}
				if (iVar1 == 1 || iVar1 == 2)
				{
					func_425(&(Local_3976[iVar1]->f_6), 524288);
				}
				bVar0 = false;
				if (iVar1 == 1 || iVar1 == 3)
				{
					func_425(&(Local_3976[iVar1]->f_6), 32);
					func_425(&(Local_3976[iVar1]->f_6), 64);
				}
				if (iVar1 == 7)
				{
					_set_entity_coords_and_heading_no_offset(&(Local_3976[iVar1]), 317.32f, 1497.74f, 181.34f, -122.92f, false, true);
				}
				func_1986(Local_3976[iVar1], bVar0);
				set_ped_name_debug(&(Local_3976[iVar1]), func_2155(iVar1));
				func_1989(Local_3976[iVar1], 0, 0);
				iVar2++;
			}
			else
			{
				iVar1++;
			}
			if (iVar2 >= 14)
			{
				func_398(16);
			}
			return 0;
		}
	}
}

int func_1534()
{
	if (func_988(2))
	{
		return 1;
	}
	bVar0 = func_2156(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		Local_2433[iVar1] = &Local_14.f_37[iVar1];
		Local_2433[iVar1]->f_5 = iVar1;
		set_ped_name_debug(&(Local_2433[iVar1]), func_2157(iVar1));
		if (iVar1 != 6)
		{
			func_425(&(Local_2433[iVar1]->f_6), 8);
		}
		if (iVar1 == 6)
		{
			func_425(&(Local_2433[iVar1]->f_6), 16);
		}
		if (iVar1 == 5 || iVar1 == 6)
		{
			func_425(&(Local_2433[iVar1]->f_6), 32);
		}
		if (iVar1 == 5)
		{
			func_425(&(Local_2433[iVar1]->f_6), 64);
			Local_2433[iVar1]->f_13 = 0.75f;
		}
		if (iVar1 == 8)
		{
			Local_2433[iVar1]->f_14 = 3f;
		}
		func_1989(Local_2433[iVar1], 0, 0);
		if (iVar1 == 5 || iVar1 == 6)
		{
			func_2149(&(Local_2433[iVar1]), 1);
		}
		if (iVar1 == 6)
		{
			func_425(&(Local_2433[iVar1]->f_6), 256);
		}
		if (iVar1 == 8)
		{
			func_1906(Local_2433[iVar1], 4);
		}
		func_1986(Local_2433[iVar1], 0);
		iVar1++;
	}
	func_398(2);
	return 0;
}

int func_1535()
{
	iVar0 = 0;
	if (func_988(16384))
	{
		return 1;
	}
	bVar1 = func_2158(-1, 1);
	if (!bVar1)
	{
		return 0;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (!func_995(&(Local_14.f_112[iVar2]), 0))
		{
		}
		else
		{
			set_blocking_of_non_temporary_events(&(Local_14.f_112[iVar2]), true);
			iVar0 = 0;
			if (iVar2 == 0)
			{
				iVar0 = 1;
			}
			func_2161(Local_14.f_112[iVar2], func_2159(10, iVar2), func_2160(10, iVar2), iVar0, 1, 707888648, 1.5f);
			_0xba8818212633500a(&(Local_14.f_112[iVar2]), 0, 1);
			set_ped_can_be_targetted(&(Local_14.f_112[iVar2]), false);
		}
		iVar2++;
	}
	func_398(16384);
	return 0;
}

int func_1536()
{
	if (func_166(55))
	{
		return 1;
	}
	vVar0 = { 331.077f, 1495.016f, 180.8021f };
	fVar3 = 119.7311f;
	if (!does_entity_exist(iVar265))
	{
		iLocal_267 = create_vehicle(-1988548788, vVar0, fVar3, true, true, false, false);
	}
	if (does_entity_exist(iVar265))
	{
		set_vehicle_is_considered_by_player(iVar265, false);
		set_entity_coords(iVar265, vVar0, true, false, true, true);
		set_entity_heading(iVar265, fVar3);
		_0x8a779706da5ca3dd(iVar265, 0, -1);
		set_entity_can_be_damaged(iVar265, false);
		set_vehicle_can_break(iVar265, false);
		func_2162(iVar265);
		set_entity_proofs(iVar265, 7, false);
		func_453(55);
	}
	return 0;
}

int func_1537(var uParam0)
{
	if (func_166(65))
	{
		return 1;
	}
	if (!func_166(18))
	{
		if (func_2163())
		{
			if (func_2164(uParam0))
			{
				func_453(18);
			}
		}
	}
	if (func_166(18))
	{
		func_2165();
	}
	return 0;
}

int func_1538()
{
	if (func_988(262144))
	{
		return 1;
	}
	bVar0 = func_2166(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Local_5673[iVar1] = &Local_14.f_147[iVar1];
		Local_5673[iVar1]->f_5 = iVar1;
		set_ped_name_debug(&(Local_5673[iVar1]), func_2167(iVar1));
		func_425(&(Local_5673[iVar1]->f_6), 32);
		func_425(&(Local_5673[iVar1]->f_6), 8);
		func_425(&(Local_5673[iVar1]->f_6), 256);
		Local_5673[iVar1]->f_15 = get_random_float_in_range(20f, 30f);
		set_ped_accuracy(&(Local_5673[iVar1]), 15);
		func_1986(Local_5673[iVar1], 0);
		func_1989(Local_5673[iVar1], 0, 0);
		func_1989(Local_5673[iVar1], 10, 0);
		iVar1++;
	}
	func_398(262144);
	return 0;
}

int func_1539()
{
	if (func_988(4))
	{
		return 1;
	}
	bVar0 = func_2168(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Local_3127[iVar1] = &Local_14.f_78[iVar1];
		Local_3127[iVar1]->f_5 = iVar1;
		set_ped_name_debug(&(Local_3127[iVar1]), func_2169(iVar1));
		if ((iVar1 != 0 && iVar1 != 1) && iVar1 != 2)
		{
			func_425(&(Local_3127[iVar1]->f_6), 8);
		}
		if ((iVar1 == 0 || iVar1 == 1) || iVar1 == 2)
		{
			func_425(&(Local_3127[iVar1]->f_6), 32);
		}
		if ((iVar1 == 0 || iVar1 == 1) || iVar1 == 2)
		{
			func_425(&(Local_3127[iVar1]->f_6), 64);
			Local_3127[iVar1]->f_13 = 0.75f;
		}
		func_1989(Local_3127[iVar1], 0, 0);
		if ((iVar1 == 0 || iVar1 == 1) || iVar1 == 2)
		{
			func_2149(&(Local_3127[iVar1]), 1);
		}
		func_1986(Local_3127[iVar1], 0);
		iVar1++;
	}
	func_398(4);
	return 0;
}

int func_1540()
{
	if (func_166(57))
	{
		return 1;
	}
	if (!func_2170(-1, 0))
	{
		return 0;
	}
	if (does_entity_exist(&(Local_14.f_32[1])))
	{
		iLocal_7693 = &Local_14.f_32[1];
		_0xba8818212633500a(iVar7691, 0, 1);
		set_vehicle_doors_locked(iVar7691, 3);
		set_vehicle_is_considered_by_player(iVar7691, false);
		set_can_climb_on_entity(iVar7691, false);
		if (!is_entity_a_mission_entity(iVar7691))
		{
			set_entity_as_mission_entity(iVar7691, true, false);
		}
		set_entity_can_be_damaged(iVar7691, false);
		_0x9e8711c81aa17876(iVar7691, 0);
		set_vehicle_can_be_visibly_damaged(iVar7691, true);
		set_vehicle_body_health(iVar7691, 1500f);
	}
	if (does_entity_exist(&(Local_14.f_32[0])))
	{
		iLocal_7694 = &Local_14.f_32[0];
		if (!is_entity_a_mission_entity(iVar7692))
		{
			set_entity_as_mission_entity(iVar7692, true, false);
		}
		_0x9e8711c81aa17876(iVar7692, 0);
	}
	set_vehicle_body_health(iVar7692, 1500f);
	func_453(57);
	return 1;
}

int func_1541()
{
	if (func_988(64))
	{
		return 1;
	}
	bVar0 = func_2171(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	bVar0 = func_2172(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	func_2173(0, 0, 9, 6, 20f, 1, 0, 1065353216);
	func_2173(1, 1, 10, 7, 10f, 1, 0, 1065353216);
	func_2173(2, 2, 11, 8, 10f, 1, 0, 1065353216);
	func_2173(3, 3, 13, 12, 22.5f, 1, 0, 1065353216);
	func_2173(4, 4, 15, 14, 22.5f, 1, 0, 1065353216);
	func_2173(5, 5, 17, 16, 15f, 1, 0, 1065353216);
	func_2173(6, 6, 19, 18, 15f, 1, 0, 1065353216);
	func_2173(7, 7, 21, 20, 15f, 1, 0, 1065353216);
	func_2173(8, 8, 23, 22, 15f, 1, 0, 1065353216);
	func_2173(9, 9, 25, 24, 14f, 1, 0, 1065353216);
	func_2173(10, 10, 27, 26, 15f, 1, 0, 1065353216);
	func_2173(11, -1, 29, 28, 60f, 1, 0, 7f);
	func_2173(12, -1, 31, 30, 50f, 1, 0, 1065353216);
	func_2173(13, -1, 33, 32, 90f, 1, 10000, 1065353216);
	func_2173(14, -1, 35, 34, 90f, 1, 16000, 1065353216);
	func_398(64);
	return 0;
}

int func_1542()
{
	if (func_988(8388608))
	{
		return 1;
	}
	bVar0 = func_2174(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	bVar0 = func_2175(-1, 1);
	if (!bVar0)
	{
		return 0;
	}
	func_2176(0, 0, 0, 1, 10f, 1, 1000);
	func_398(8388608);
	return 0;
}

int func_1543(var uParam0)
{
	if (func_8(uParam0, 8))
	{
		return 1;
	}
	if (func_2177(9, 9) && func_2177(10, 10))
	{
		return 1;
	}
	return 0;
}

void func_1544()
{
	if (!func_166(81))
	{
		set_transition_timecycle_modifier("nativeSonMoonPos", 10f);
		func_453(81);
	}
}

void func_1545()
{
	if (!func_166(82))
	{
		_0x3373779baf7caf48("thunderstorm", "thunderstorm_nativeson3");
		func_453(82);
	}
}

int func_1546(var uParam0, bool bParam1)
{
	if (!func_8(uParam0, 8))
	{
		bParam1 = true;
	}
	iVar0 = 0;
	bVar1 = false;
	vVar2 = { func_926(4, 1) };
	fVar5 = func_1583(4, 1);
	iVar6 = func_925(uParam0);
	switch (iVar6)
	{
		case 0:
		case 1:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			iVar0 = 1;
			break;
		case 2:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			break;
		case 3:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			break;
		case 4:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			bParam1 = true;
			break;
		case 5:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			bParam1 = true;
			break;
		case 6:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			bParam1 = true;
			break;
		case 7:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			bParam1 = true;
			break;
		case 8:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			break;
		case 9:
		case 25:
		case 26:
			vVar2 = { func_2146(iVar6) };
			fVar5 = func_2178(iVar6);
			break;
	}
	if (!bParam1)
	{
		return 1;
	}
	if (bVar1)
	{
		vVar2 = { Global_36 };
		vVar2 = { vVar2 + Vector(20f, 0f, 5f) };
		get_ground_z_for_3d_coord(vVar2, &(vVar2.f_2), false);
	}
	return func_2161(&iLocal_252, vVar2, fVar5, iVar0, 1, -1683752762, 1f);
}

void func_1547(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			sVar0 = "ARTHUR";
			break;
		case 1:
			sVar0 = "CHARLES_SMITH";
			break;
		case 2:
			sVar0 = "EAGLE_FLIES";
			break;
		case 3:
			sVar0 = "NTS3_Soldier";
			break;
		case 4:
			sVar0 = "NTS3_Soldier2";
			break;
		case 5:
			sVar0 = "NTS3_Soldier3";
			break;
		case 6:
			sVar0 = "NTS3_Soldier4";
			break;
		case 7:
			sVar0 = "OFW_Enlisted1";
			break;
		case 8:
			sVar0 = "NTS3_WindowGuard";
			break;
		case 9:
			sVar0 = "NTS3_ChatGuard";
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	Local_7648.f_12[iParam2] = *iParam1;
	func_145(uParam0, *iParam1, sVar0, 0);
}

void func_1548(var uParam0, int iParam1, char[4] cParam2, bool bParam3)
{
	iVar0 = func_2179(&(uParam0->f_7375), cParam2, 1);
	func_431(uParam0, *iParam1, cParam2, 0, 0, bParam3, 0);
	func_2180(&(uParam0->f_7375), cParam2, *iParam1, 0);
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != *iParam1)
		{
			delete_ped(&iVar0);
		}
	}
}

int func_1549(var uParam0)
{
	iVar0 = func_925(uParam0);
	if (iVar0 > 4)
	{
		return 1;
	}
	vVar1 = { 347.3718f, 1493.95f, 162.9821f };
	if (!does_entity_exist(iLocal_254))
	{
		iLocal_254 = create_object(-1291375629, vVar1, true, true, false, false, true);
		set_entity_collision(iLocal_254, false, false);
		set_entity_visible(iLocal_254, false);
		freeze_entity_position(iLocal_254, true);
		return 0;
	}
	return 1;
}

void func_1550(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (func_1135(*uParam1, 0, 1, 0) == iParam2)
	{
		func_2181(&(uParam0->f_7375), *uParam1, 0, sParam3, 0, 0);
		return;
	}
	if (func_1135(*uParam1, 4, 1, 0) == iParam2)
	{
		func_2181(&(uParam0->f_7375), *uParam1, 4, sParam3, 0, 0);
		return;
	}
}

void func_1551()
{
	iLocal_7672 = 0;
}

void func_1552(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
	}
}

int func_1553(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_1612(uParam0))
	{
		if (!func_2130(&(uParam0->f_7375), iParam1, 4))
		{
			func_2182(&(uParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return func_2183(&(uParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1554(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

float func_1555(var uParam0)
{
	iVar0 = uParam0->f_7375.f_804;
	if (!_does_anim_scene_exist(iVar0) || !_is_anim_scene_started(iVar0, false))
	{
		return -1f;
	}
	return _get_anim_scene_progress(iVar0);
}

void func_1556(int iParam0)
{
	if (iVar8021 == iParam0)
	{
		return;
	}
	iLocal_8024 = iParam0;
	switch (iVar8021)
	{
		case 0:
			break;
		case 1:
			func_2184();
			break;
		case 2:
			func_2185();
			break;
	}
}

void func_1557(int iParam0, bool bParam1)
{
	if (Local_302.f_11 == iParam0 && !bParam1)
	{
		return;
	}
	if (!func_995(iVar298, 0))
	{
		return;
	}
	switch (Local_302.f_11)
	{
		case 18:
			func_1558(1);
			func_1314(1, 0, 1);
			break;
	}
	Local_302.f_11 = iParam0;
	func_563(&uLocal_7362);
	func_563(&uLocal_7365);
	switch (Local_302.f_11)
	{
		case 0:
			break;
		case 1:
			if (!has_ped_got_weapon(iVar298, -1098045850, 0, false))
			{
				func_1317(iVar298, -1098045850, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			else
			{
				_add_ammo_to_ped(iVar298, -1098045850, 200, 752097756);
				set_current_ped_weapon(iVar298, -1098045850, true, 0, false, false);
			}
			_0xd8736efda38edc5c(iVar298, Global_36, 50f);
			task_combat_hated_targets_in_area(iVar298, Global_36, 50f, 0, 19);
			break;
		case 2:
			set_relationship_between_groups(6, -1247684992, 1269650476);
			set_relationship_between_groups(6, 1269650476, -1247684992);
			if (_get_ped_crouch_movement(iVar298) == 0)
			{
				_set_ped_crouch_movement(iVar298, true, 0, true);
			}
			set_ped_config_flag(iVar298, 375, true);
			set_current_ped_weapon(iVar298, 2031861036, false, 0, false, false);
			if (get_is_task_active(iVar298, 10))
			{
				clear_ped_tasks(iVar298, 1, 0);
			}
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, 406.51f, 1447.51f, 174.29f, 1.5f, 20000, 1f, 6291457, 40000f);
			task_swap_weapon(0, 1, 0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			_0x2208438012482a1a(iVar298, false, false);
			break;
		case 3:
			func_929(0, 1);
			set_relationship_between_groups(6, -1247684992, 1269650476);
			set_relationship_between_groups(6, 1269650476, -1247684992);
			Local_302.f_5 = { func_1962(&(iLocal_7972[2]), "CS_CharlesSmith", "pbl_Wave_Come_LHand_LShoulder") };
			fVar1 = func_1963(&(iLocal_7972[2]), "CS_CharlesSmith", "pbl_Wave_Come_LHand_LShoulder");
			set_ped_config_flag(iVar298, 375, true);
			Var2.f_4 = 1065353216;
			Var2.f_5 = 1065353216;
			Var2.f_9 = 1065353216;
			Var2.f_10 = 1065353216;
			Var2.f_14 = 1065353216;
			Var2.f_15 = 1065353216;
			Var2.f_17 = 1040187392;
			Var2.f_18 = 1040187392;
			Var2.f_19 = -1;
			Var2.f_26 = -1082130432;
			func_1864(&Var2);
			func_1866(iVar298, Global_35, &Var2, Local_302.f_5, 0, 0, 1, 10f, 7f, 1073069561, 2f, 1092616192, -1, 0, 0, 0, 0, 1);
			break;
		case 4:
			func_2187(func_2186());
			break;
		case 5:
			if (func_995(&(Local_5055[3]), 0))
			{
				if (!does_blip_exist(Local_5055[3]->f_2))
				{
					Local_5055[3]->f_2 = _blip_add_for_entity(831283580, &(Local_5055[3]));
					_blip_set_modifier(Local_5055[3]->f_2, -662251075);
				}
				set_ped_can_be_targetted(&(Local_5055[3]), true);
			}
			if (func_995(&(Local_5055[4]), 0))
			{
				if (!does_blip_exist(Local_5055[4]->f_2))
				{
					Local_5055[4]->f_2 = _blip_add_for_entity(831283580, &(Local_5055[4]));
					_blip_set_modifier(Local_5055[4]->f_2, -662251075);
				}
				set_ped_can_be_targetted(&(Local_5055[4]), true);
			}
			break;
		case 6:
			func_1894("NTS3_IG3_A", 0);
			func_1894("NTS3_IG3_B", 0);
			func_1894("NTS3_IG3_C", 0);
			func_1894("NTS3_IG3_D", 0);
			func_563(&uLocal_7401);
			break;
		case 7:
			Local_302.f_5 = { 374.8418f, 1483.613f, 178.7957f };
			set_current_ped_weapon(iVar298, -1569615261, false, 0, false, false);
			open_sequence_task(&iVar0);
			task_set_crouch_movement(0, true, 0, false);
			task_pause(0, 1500);
			task_swap_weapon(0, 0, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 0.25f, 0, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 8:
			Local_302.f_5 = { func_1962(&(iLocal_7972[6]), "CS_CharlesSmith", "pbl_action_a_lfoot") };
			fVar1 = func_1963(&(iLocal_7972[6]), "CS_CharlesSmith", "pbl_action_a_lfoot");
			open_sequence_task(&iVar0);
			task_swap_weapon(0, 0, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, 20000, 0.25f, 1, fVar1);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 9:
			func_2188();
			break;
		case 10:
			break;
		case 11:
			func_2189();
			func_2190();
			break;
		case 12:
			Local_302.f_5 = { func_926(0, 8) };
			open_sequence_task(&iVar0);
			task_set_crouch_movement(0, true, 0, false);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1f, -1, 0.25f, 0, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 13:
			break;
		case 14:
			Local_302.f_5 = { 354.6207f, 1522.674f, 180.5097f };
			open_sequence_task(&iVar0);
			task_set_crouch_movement(0, true, 0, false);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 0.25f, 0, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 15:
			break;
		case 16:
			Local_302.f_5 = { func_926(0, 12) };
			fVar1 = func_1583(0, 12);
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 0.25f, 0, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 17:
			break;
		case 18:
			if (func_995(&(Local_5055[1]), 0))
			{
				if (!does_blip_exist(Local_5055[1]->f_2))
				{
					Local_5055[1]->f_2 = _blip_add_for_entity(831283580, &(Local_5055[1]));
					_blip_set_modifier(Local_5055[1]->f_2, -662251075);
				}
				set_ped_can_be_targetted(&(Local_5055[1]), true);
				_0x0f967019cc853bcc(&(Local_5055[1]), 21030);
			}
			if (func_995(&(Local_5055[2]), 0))
			{
				if (!does_blip_exist(Local_5055[2]->f_2))
				{
					Local_5055[2]->f_2 = _blip_add_for_entity(831283580, &(Local_5055[2]));
					_blip_set_modifier(Local_5055[2]->f_2, -662251075);
				}
				set_ped_can_be_targetted(&(Local_5055[2]), true);
				_0x0f967019cc853bcc(&(Local_5055[2]), 21030);
				set_entity_invincible(&(Local_5055[2]), true);
			}
			break;
		case 19:
			func_1314(0, 0, 1);
			break;
		case 20:
			func_1314(0, 0, 1);
			func_453(94);
			break;
		case 21:
			Local_302.f_5 = { func_926(0, 2) };
			open_sequence_task(&iVar0);
			task_set_crouch_movement(0, true, 0, false);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 0.25f, 1, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 22:
			open_sequence_task(&iVar0);
			task_set_crouch_movement(0, true, 0, false);
			task_stand_still(0, -1);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar298, iVar0);
			clear_sequence_task(&iVar0);
			break;
		case 23:
			break;
	}
}

void func_1558(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 3)
	{
		return;
	}
	iVar2 = func_450(iVar0);
	func_856(Local_7648[iVar1], iVar2);
}

void func_1559()
{
	if (!_0xa24c1d341c6e0d53(0, 0, 1))
	{
		if (!does_cam_exist(iVar258))
		{
			iLocal_260 = create_camera_with_params(26379945, 307.0696f, 1497.276f, 186.9647f, -10.4528f, 0.0188f, -55.3741f, 51.282f, true, 2);
		}
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

bool func_1560(var uParam0)
{
	return func_2127(&(uParam0->f_7375), 1);
}

int func_1561(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1553(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

int func_1562(vector3 vParam0, bool bParam3)
{
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		set_gameplay_cam_relative_heading(0f, 1f);
		if (bParam3)
		{
			func_2191(vParam0);
		}
		func_2192(vParam0);
		return 1;
	}
	return 0;
}

void func_1563(int iParam0, bool bParam1, bool bParam2)
{
	if (Local_302.f_12 == iParam0 && !bParam1)
	{
		return;
	}
	if (!func_995(iVar297, 0))
	{
		return;
	}
	Local_302.f_12 = iParam0;
	func_2193();
	set_ped_path_can_use_climbovers(iVar297, false);
	set_ped_path_can_use_ladders(iVar297, false);
	set_ped_path_can_drop_from_height(iVar297, false);
	set_ped_config_flag(iVar297, 391, true);
	set_ped_config_flag(iVar297, 252, false);
	func_167(107);
	switch (Local_302.f_12)
	{
		case 0:
			break;
		case 2:
			set_ped_combat_attributes(iVar297, 67, true);
			set_relationship_between_groups(6, -1247684992, 1269650476);
			set_relationship_between_groups(6, 1269650476, -1247684992);
			if (!_get_ped_crouch_movement(iVar297))
			{
				_set_ped_crouch_movement(iVar297, true, 0, true);
			}
			func_563(&(Local_302.f_16));
			set_ped_reset_flag(iVar297, 165, true);
			func_2194();
			break;
		case 3:
			set_ped_reset_flag(iVar297, 165, true);
			break;
		case 4:
			if (!_get_ped_crouch_movement(iVar297))
			{
				_set_ped_crouch_movement(iVar297, true, 0, true);
			}
			if (!is_ped_in_cover(iVar297, 0, 0))
			{
				open_sequence_task(&iVar0);
				func_1340(&Local_302, &(Local_302.f_19), 1, 2, 34);
				close_sequence_task(iVar0);
				task_perform_sequence(iVar297, iVar0);
				clear_sequence_task(&iVar0);
				_0x2208438012482a1a(iVar297, true, false);
			}
			func_2195(Local_3359[0]);
			break;
		case 5:
			_set_ped_crouch_movement(iVar297, false, 0, false);
			set_current_ped_weapon(iVar297, 2031861036, true, 0, false, false);
			register_target(iVar297, &(Local_3359[0]), 1);
			if (func_1311(iVar297, -1073489615))
			{
				_0x2416ec2f31f75266(iVar297, &(Local_3359[0]), 8000, 0, 0);
			}
			else
			{
				task_shoot_at_entity(iVar297, &(Local_3359[0]), 8000, 0, 0);
			}
			break;
		case 6:
			Local_302.f_5 = { func_1971(2, &Local_302) };
			fVar1 = func_1583(1, 3);
			open_sequence_task(&iVar0);
			if (func_1135(iVar297, 0, 1, 0) != -1569615261)
			{
				set_current_ped_weapon(iVar297, -1569615261, false, 0, false, false);
				task_swap_weapon(0, 0, 0, 0, 0);
			}
			task_set_crouch_movement(0, true, 0, false);
			task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 2f, 0, 40000f);
			task_set_crouch_movement(0, false, 0, false);
			func_1340(&Local_302, &(Local_302.f_19), 2, 10, 34);
			close_sequence_task(iVar0);
			if (func_2196(&(Local_3359[0]), iVar297))
			{
				task_perform_sequence(iVar297, iVar0);
			}
			else
			{
				_task_perform_sequence_2(iVar297, iVar0, 1.25f, 1.25f);
			}
			clear_sequence_task(&iVar0);
			set_ped_can_be_targetted(&(Local_3359[2]), false);
			set_ped_can_be_targetted(&(Local_3359[3]), false);
			break;
		case 7:
			if (!is_ped_in_cover(iVar297, 0, 0))
			{
				func_1563(9, 0, 0);
			}
			else
			{
				vVar2 = { get_entity_rotation(iVar297, 2) };
				set_ped_reset_flag(iVar297, 165, true);
				func_2197(get_entity_coords(iVar297, true, false), vVar2, 28);
				func_453(107);
				Jump @5742; //curOff = 951
				_set_ped_crouch_movement(iVar297, false, 0, false);
				func_1340(&Local_302, &(Local_302.f_19), 2, 66, 34);
				_0x2208438012482a1a(iVar297, true, false);
				Jump @5742; //curOff = 989
				Local_302.f_5 = { 322.6371f, 1509.016f, 185.8634f };
				fVar1 = func_1583(1, 4);
				open_sequence_task(&iVar0);
				if (is_ped_in_cover(iVar297, 0, 0))
				{
					vVar5.x = 0;
					vVar5.f_1 = 1;
					vVar5.f_2 = { Local_302.f_5 };
					task_exit_cover(&vVar5);
				}
				task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1f, 20000, (2f * 0.75f), 0, 40000f);
				task_set_crouch_movement(0, false, 0, false);
				func_1340(&Local_302, &(Local_302.f_19), 3, 8, 34);
				close_sequence_task(iVar0);
				task_perform_sequence(iVar297, iVar0);
				clear_sequence_task(&iVar0);
				if (func_995(&(Local_3359[1]), 0))
				{
					if (func_995(&(Local_3359[1]), 0))
					{
						set_blocking_of_non_temporary_events(&(Local_3359[1]), true);
					}
					if (func_995(&(Local_3359[2]), 0))
					{
						set_blocking_of_non_temporary_events(&(Local_3359[2]), true);
					}
					if (func_995(&(Local_3359[3]), 0))
					{
						set_blocking_of_non_temporary_events(&(Local_3359[3]), true);
					}
				}
				Jump @5742; //curOff = 1230
				if (!is_ped_in_cover(iVar297, 0, 0))
				{
					func_453(114);
					func_1563(11, 0, 0);
				}
				else
				{
					vVar2 = { get_entity_rotation(iVar297, 2) };
					vVar2 = { vVar2 + Vector(180f, 0f, 0f) };
					set_ped_reset_flag(iVar297, 165, true);
					func_2197(get_entity_coords(iVar297, true, false), vVar2, 30);
					Jump @5742; //curOff = 1321
					_set_ped_crouch_movement(iVar297, false, 0, false);
					if (func_166(114))
					{
						Local_302.f_5 = { 321.8654f, 1511.279f, 185.866f };
						open_sequence_task(&iVar0);
						task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1f, 20000, 0.5f, 0, 40000f);
						task_set_crouch_movement(0, true, 0, false);
						task_turn_ped_to_face_entity(0, &(Local_3359[1]), 0, -1f, -1f, -1082130432);
						close_sequence_task(iVar0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
					}
					else
					{
						func_1340(&Local_302, &(Local_302.f_19), 3, 64, 34);
						_0x2208438012482a1a(iVar297, true, false);
					}
					func_2195(Local_3359[1]);
					Jump @5742; //curOff = 1492
					Local_302.f_5 = { 321.6437f, 1510.811f, 185.8781f };
					Jump @5742; //curOff = 1517
					Local_302.f_5 = { 327.6438f, 1507.688f, 185.8536f };
					if (!has_ped_got_weapon(iVar297, -1511427369, 0, false))
					{
						func_1317(iVar297, -1511427369, 0, 0, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					set_current_ped_weapon(iVar297, -1511427369, true, 0, false, false);
					open_sequence_task(&iVar0);
					if (is_ped_in_cover(iVar297, 0, 0))
					{
						vVar5.x = 0;
						vVar5.f_1 = 3;
						vVar5.f_2 = { get_entity_coords(iVar297, true, false) };
						task_exit_cover(&vVar5);
					}
					task_swap_weapon(0, 1, 0, 0, 0);
					task_melee(0, &(Local_3359[1]), 1483729867, 1, 1, 1.5f, 1, -1082130432);
					close_sequence_task(iVar0);
					task_perform_sequence(iVar297, iVar0);
					clear_sequence_task(&iVar0);
					Jump @5742; //curOff = 1716
					Local_302.f_5 = { 330.6808f, 1505.937f, 185.8412f };
					open_sequence_task(&iVar0);
					if (is_ped_in_cover(iVar297, 0, 0))
					{
						vVar5.x = 0;
						vVar5.f_1 = 1;
						vVar5.f_2 = { get_entity_coords(iVar297, true, false) };
						task_exit_cover(&vVar5);
					}
					task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 2f, 0, 40000f);
					close_sequence_task(iVar0);
					task_perform_sequence(iVar297, iVar0);
					clear_sequence_task(&iVar0);
					if (func_222())
					{
						func_113(1);
					}
					if (func_221())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					if (has_ped_got_weapon(Global_35, -2002235300, 0, false))
					{
						set_current_ped_weapon(Global_35, -2002235300, false, 0, false, false);
					}
					else
					{
						func_1283(&Global_35, &iLocal_252, 1, 0, 1, 0);
					}
					if (has_ped_got_weapon(iVar297, 2031861036, 0, false))
					{
						if (2031861036 != func_836(iVar297, 1, 0, 0))
						{
							if (!is_ped_weapon_ready_to_shoot(iVar297))
							{
								set_current_ped_weapon(iVar297, 2031861036, false, 0, false, false);
							}
						}
					}
					else
					{
						func_1317(iVar297, 2031861036, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					Jump @5742; //curOff = 2007
					if (!func_2198())
					{
						Local_302.f_5 = { 334.7794f, 1507.248f, 185.3171f };
						fVar1 = 307.7968f;
						if (!_does_volume_exist(&(iLocal_268[17])))
						{
							iLocal_268[17] = _0x0eb78c2b156635b1(-1612834106, 335.159f, 1507.302f, 186.2184f, 0f, 0f, 125.3915f, 1.552161f, 3.700167f, 2.167336f);
						}
						func_1297(&(Local_302.f_3), 1);
					}
					else
					{
						Local_302.f_5 = { 330.8364f, 1506.781f, 185.8279f };
						fVar1 = 186.8279f;
						func_169(&(iLocal_268[17]));
						func_1298(&(Local_302.f_3), 1);
					}
					open_sequence_task(&iVar0);
					task_set_crouch_movement(0, true, 0, false);
					if (func_1135(iVar297, 0, 1, 0) != 2031861036)
					{
						set_current_ped_weapon(iVar297, 2031861036, false, 0, false, false);
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (func_1881(&(Local_302.f_3), 1))
					{
						task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 0.25f, 0, 40000f);
					}
					else
					{
						func_1340(&Local_302, &(Local_302.f_19), 5, 10, 34);
					}
					close_sequence_task(iVar0);
					task_perform_sequence(iVar297, iVar0);
					clear_sequence_task(&iVar0);
					Jump @5742; //curOff = 2317
					if (func_995(&(Local_3359[2]), 0))
					{
						set_ped_can_be_targetted(&(Local_3359[2]), true);
						if (!does_blip_exist(Local_3359[2]->f_2))
						{
							Local_3359[2]->f_2 = _blip_add_for_entity(831283580, &(Local_3359[2]));
							_blip_set_modifier(Local_3359[2]->f_2, -662251075);
						}
					}
					if (func_995(&(Local_3359[3]), 0))
					{
						set_ped_can_be_targetted(&(Local_3359[3]), true);
						if (!does_blip_exist(Local_3359[3]->f_2))
						{
							Local_3359[3]->f_2 = _blip_add_for_entity(831283580, &(Local_3359[3]));
							_blip_set_modifier(Local_3359[3]->f_2, -662251075);
						}
					}
					Jump @5742; //curOff = 2484
					func_563(&uLocal_7401);
					func_1314(24, 0, 1);
					Jump @5742; //curOff = 2502
					func_169(&(iLocal_268[17]));
					Local_302.f_5 = { 358.3705f, 1518.647f, 183.8145f };
					fVar1 = 223.0325f;
					open_sequence_task(&iVar0);
					task_set_crouch_movement(0, true, 0, false);
					if (func_1881(&(Local_302.f_3), 1) && func_2199())
					{
						task_look_at_entity(0, Global_35, 4000, 0, 51, 0);
						task_turn_ped_to_face_entity(0, Global_35, 2000, -1f, -1f, -1082130432);
					}
					task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 2f, 0, 40000f);
					task_set_crouch_movement(0, false, 0, false);
					func_1340(&Local_302, &(Local_302.f_19), 6, 8, 34);
					close_sequence_task(iVar0);
					task_perform_sequence(iVar297, iVar0);
					clear_sequence_task(&iVar0);
					Jump @5742; //curOff = 2688
					set_ped_reset_flag(iVar297, 165, true);
					func_453(107);
					Jump @5742; //curOff = 2707
					_set_ped_crouch_movement(iVar297, false, 0, false);
					func_1340(&Local_302, &(Local_302.f_19), 6, 64, 34);
					_0x2208438012482a1a(iVar297, true, false);
					func_453(107);
					Jump @5742; //curOff = 2751
					Local_302.f_5 = { 363.4341f, 1512.584f, 183.8546f };
					fVar1 = 184.852f;
					open_sequence_task(&iVar0);
					task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 2f, 0, 40000f);
					task_set_crouch_movement(0, false, 0, false);
					func_1340(&Local_302, &(Local_302.f_19), 7, 8, 34);
					close_sequence_task(iVar0);
					task_perform_sequence(iVar297, iVar0);
					clear_sequence_task(&iVar0);
					Jump @5742; //curOff = 2859
					if (func_995(&(Local_3359[4]), 0))
					{
						set_blocking_of_non_temporary_events(&(Local_3359[4]), true);
					}
					_set_ped_crouch_movement(Global_35, true, 0, false);
					if (!is_ped_in_cover(iVar297, 0, 0))
					{
						func_1563(24, 0, 0);
					}
					else
					{
						vVar2 = { get_entity_rotation(iVar297, 2) };
						vVar2 = { vVar2 + Vector(90f, 0f, 0f) };
						set_ped_reset_flag(iVar297, 165, true);
						func_2200(get_entity_coords(iVar297, true, false), vVar2, 33);
						func_2195(Local_3359[4]);
						Jump @5742; //curOff = 2989
						_set_ped_crouch_movement(iVar297, false, 0, false);
						func_1340(&Local_302, &(Local_302.f_19), 7, 64, 34);
						_0x2208438012482a1a(iVar297, true, false);
						func_2195(Local_3359[4]);
						Jump @5742; //curOff = 3037
						Local_302.f_5 = { 366.2886f, 1509.894f, 182.3628f };
						fVar1 = func_1583(1, 6);
						open_sequence_task(&iVar0);
						task_set_crouch_movement(0, true, 0, false);
						task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 2f, 0, 40000f);
						func_1340(&Local_302, &(Local_302.f_19), 8, 10, 34);
						close_sequence_task(iVar0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
						func_2195(Local_3359[4]);
						Jump @5742; //curOff = 3156
						Local_302.f_5 = { 365.59f, 1508.04f, 182.35f };
						open_sequence_task(&iVar0);
						task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 0.5f, 0, 40000f);
						close_sequence_task(iVar0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
						Jump @5742; //curOff = 3237
						register_target(iVar297, &(Local_3359[4]), 1);
						task_shoot_at_entity(iVar297, &(Local_3359[4]), 8000, 0, 1);
						Jump @5742; //curOff = 3272
						if (func_2201(Global_35, &(iLocal_268[12]), 1, 0))
						{
							Local_302.f_5 = { func_1971(9, &Local_302) };
							fVar1 = 110.696f;
							iLocal_268[15] = _0x0eb78c2b156635b1(-1612834106, _0xf70f00013a62f866(&(iLocal_268[13])), _0x18675bc914891122(&(iLocal_268[13])), _0x3e2a25b2416dd67e(&(iLocal_268[13])));
							func_1297(&(Local_302.f_3), 2);
						}
						else
						{
							Local_302.f_5 = { func_1971(10, &Local_302) };
							fVar1 = 106.3883f;
							iLocal_268[14] = _0x0eb78c2b156635b1(-1612834106, _0xf70f00013a62f866(&(iLocal_268[12])), _0x18675bc914891122(&(iLocal_268[12])), _0x3e2a25b2416dd67e(&(iLocal_268[12])));
							func_1298(&(Local_302.f_3), 2);
						}
						add_cover_blocking_area(363.5817f, 1480.175f, 179.1349f, 363.2924f, 1482.934f, 180.2404f, true, true, true, true);
						set_ped_config_flag(Global_35, 97, true);
						set_ped_config_flag(iVar297, 97, true);
						set_current_ped_weapon(iVar297, -1569615261, false, 0, false, false);
						open_sequence_task(&iVar0);
						task_swap_weapon(0, 0, 0, 0, 0);
						task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 2f, 2097152, 40000f);
						if (func_1881(&(Local_302.f_3), 2))
						{
							func_1340(&Local_302, &(Local_302.f_19), 9, 8, 34);
						}
						else
						{
							func_1340(&Local_302, &(Local_302.f_19), 10, 8, 34);
						}
						close_sequence_task(iVar0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
						if (func_222())
						{
							func_113(1);
						}
						if (func_221())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						set_current_ped_weapon(Global_35, -2002235300, false, 0, false, false);
						if (func_995(&(Local_3359[5]), 0))
						{
							set_blocking_of_non_temporary_events(&(Local_3359[5]), true);
						}
						if (func_995(&(Local_3976[1]), 0))
						{
							set_blocking_of_non_temporary_events(&(Local_3976[1]), true);
						}
						if (func_995(&(Local_3976[2]), 0))
						{
							set_blocking_of_non_temporary_events(&(Local_3976[2]), true);
						}
						if (func_995(&(Local_3976[3]), 0))
						{
							set_blocking_of_non_temporary_events(&(Local_3976[3]), true);
						}
						Jump @5742; //curOff = 3785
						if (func_2201(Global_35, &(iLocal_268[12]), 1, 0))
						{
							Local_302.f_5 = { func_1971(9, &Local_302) };
							fVar1 = 110.696f;
							iLocal_268[15] = _0x0eb78c2b156635b1(-1612834106, _0xf70f00013a62f866(&(iLocal_268[13])), _0x18675bc914891122(&(iLocal_268[13])), _0x3e2a25b2416dd67e(&(iLocal_268[13])));
							_0xeb2ed1dc3aec0654(&(iLocal_268[15]), 1, 1, 1, 1);
							func_1297(&(Local_302.f_3), 2);
						}
						else
						{
							Local_302.f_5 = { func_1971(10, &Local_302) };
							fVar1 = 106.3883f;
							iLocal_268[14] = _0x0eb78c2b156635b1(-1612834106, _0xf70f00013a62f866(&(iLocal_268[12])), _0x18675bc914891122(&(iLocal_268[12])), _0x3e2a25b2416dd67e(&(iLocal_268[12])));
							_0xeb2ed1dc3aec0654(&(iLocal_268[14]), 1, 1, 1, 1);
							func_1298(&(Local_302.f_3), 2);
						}
						set_ped_config_flag(Global_35, 97, true);
						set_ped_config_flag(iVar297, 97, true);
						if (bParam2)
						{
							_set_ped_crouch_movement(iVar297, true, 0, true);
							if (!is_ped_in_cover(iVar297, 0, 0))
							{
								open_sequence_task(&iVar0);
								if (func_1881(&(Local_302.f_3), 2))
								{
									func_1340(&Local_302, &(Local_302.f_19), 9, 0, 34);
								}
								else
								{
									func_1340(&Local_302, &(Local_302.f_19), 10, 0, 34);
								}
								close_sequence_task(iVar0);
								task_perform_sequence(iVar297, iVar0);
								clear_sequence_task(&iVar0);
								_0x2208438012482a1a(iVar297, true, false);
							}
						}
						else
						{
							open_sequence_task(&iVar0);
							task_set_crouch_movement(0, true, 0, false);
							task_follow_nav_mesh_to_coord(0, Local_302.f_5, 1.5f, -1, 2f, 2097152, 40000f);
							if (!is_ped_in_cover(iVar297, 0, 0))
							{
								if (func_1881(&(Local_302.f_3), 2))
								{
									func_1340(&Local_302, &(Local_302.f_19), 9, 8, 34);
								}
								else
								{
									func_1340(&Local_302, &(Local_302.f_19), 10, 8, 34);
								}
							}
							close_sequence_task(iVar0);
							task_perform_sequence(iVar297, iVar0);
							clear_sequence_task(&iVar0);
						}
						Jump @5742; //curOff = 4265
						set_ped_reset_flag(iVar297, 165, true);
						func_2202(38, func_1881(&(Local_302.f_3), 2));
						if (func_995(&(Local_3359[5]), 0))
						{
							if (!does_blip_exist(Local_3359[5]->f_2))
							{
								Local_3359[5]->f_2 = _blip_add_for_entity(831283580, &(Local_3359[5]));
								_blip_set_modifier(Local_3359[5]->f_2, -662251075);
							}
							set_ped_can_be_targetted(&(Local_3359[5]), false);
							set_blocking_of_non_temporary_events(&(Local_3359[5]), true);
						}
						if (func_995(&(Local_3976[1]), 0))
						{
							if (!does_blip_exist(Local_3976[1]->f_2))
							{
								Local_3976[1]->f_2 = _blip_add_for_entity(831283580, &(Local_3976[1]));
								_blip_set_modifier(Local_3976[1]->f_2, -662251075);
							}
							set_ped_can_be_targetted(&(Local_3976[1]), false);
							set_blocking_of_non_temporary_events(&(Local_3976[1]), true);
						}
						if (func_995(&(Local_3976[2]), 0))
						{
							if (!does_blip_exist(Local_3976[2]->f_2))
							{
								Local_3976[2]->f_2 = _blip_add_for_entity(831283580, &(Local_3976[2]));
								_blip_set_modifier(Local_3976[2]->f_2, -662251075);
							}
							set_ped_can_be_targetted(&(Local_3976[2]), false);
							set_blocking_of_non_temporary_events(&(Local_3976[2]), true);
						}
						if (func_995(&(Local_3976[3]), 0))
						{
							if (!does_blip_exist(Local_3976[3]->f_2))
							{
								Local_3976[3]->f_2 = _blip_add_for_entity(831283580, &(Local_3976[3]));
								_blip_set_modifier(Local_3976[3]->f_2, -662251075);
							}
							set_ped_can_be_targetted(&(Local_3976[3]), false);
							set_blocking_of_non_temporary_events(&(Local_3976[3]), true);
						}
						Jump @5742; //curOff = 4667
						if (func_1881(&(Local_302.f_3), 2))
						{
							Local_302.f_5 = { func_1971(9, &Local_302) };
							fVar1 = 110.696f;
						}
						else
						{
							Local_302.f_5 = { func_1971(10, &Local_302) };
							fVar1 = 106.3883f;
						}
						open_sequence_task(&iVar0);
						task_set_crouch_movement(0, true, 0, false);
						if (func_1881(&(Local_302.f_3), 2))
						{
							func_1340(&Local_302, &(Local_302.f_19), 9, 8, 34);
						}
						else
						{
							func_1340(&Local_302, &(Local_302.f_19), 10, 8, 34);
						}
						close_sequence_task(iVar0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
						Jump @5742; //curOff = 4815
						if (!has_ped_got_weapon(iVar297, 2031861036, 0, false))
						{
							func_1317(iVar297, 2031861036, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						}
						set_current_ped_weapon(iVar297, 2031861036, true, 0, false, false);
						Local_302.f_5 = { 357.3527f, 1472.357f, 178.82f };
						fVar1 = func_1583(1, 7);
						open_sequence_task(&iVar0);
						if (func_836(iVar297, 1, 0, 1) != 2031861036)
						{
							task_swap_weapon(0, 1, 0, 0, 0);
						}
						task_set_crouch_movement(0, true, 0, false);
						task_follow_nav_mesh_to_coord(0, Local_302.f_5, 2f, -1, 2f, 2097153, 40000f);
						if (func_995(&(Local_3359[5]), 1))
						{
							func_2149(&(Local_3359[5]), 1);
							task_go_to_coord_while_aiming_at_entity(0, 354.8453f, 1470.965f, 178.7458f, &(Local_3359[5]), 2f, 1, 1056964608, 1082130432, 1, 0, 0, 1566631136, 20000, 0);
						}
						close_sequence_task(iVar0);
						clear_ped_tasks(iVar297, 0, 0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
						Jump @5742; //curOff = 5085
						if (func_995(&(Local_3359[5]), 1))
						{
							func_2149(&(Local_3359[5]), 1);
							register_target(iVar297, &(Local_3359[5]), 1);
							Local_302.f_5 = { 354.8453f, 1470.965f, 178.7458f };
							if (!func_1301(iVar297, Local_302.f_5, 3f, 1, 1))
							{
								task_go_to_coord_while_aiming_at_entity(iVar297, Local_302.f_5, &(Local_3359[5]), 2f, 1, 1056964608, 1082130432, 1, 0, 0, 1566631136, 20000, 0);
							}
							else if (func_1311(iVar297, -1073489615))
							{
								_0x2416ec2f31f75266(iVar297, &(Local_3359[5]), 8000, 0, 0);
							}
							else
							{
								task_shoot_at_entity(iVar297, &(Local_3359[5]), 8000, 0, 0);
							}
						}
						Jump @5742; //curOff = 5271
						set_ped_config_flag(iVar297, 249, false);
						Local_302.f_5 = { func_1971(11, &Local_302) };
						fVar1 = 33.8819f;
						set_current_ped_weapon(iVar297, -1569615261, false, 0, false, false);
						open_sequence_task(&iVar0);
						task_swap_weapon(0, 0, 0, 0, 0);
						task_set_crouch_movement(0, false, 0, false);
						func_1340(&Local_302, &(Local_302.f_19), 11, 10, 34);
						close_sequence_task(iVar0);
						task_perform_sequence(iVar297, iVar0);
						clear_sequence_task(&iVar0);
						Jump @5742; //curOff = 5383
						set_ped_reset_flag(iVar297, 165, true);
						func_2203();
						Jump @5742; //curOff = 5400
						if (!does_blip_exist(Local_3359[7]->f_2))
						{
							Local_3359[7]->f_2 = _blip_add_for_entity(831283580, &(Local_3359[7]));
						}
						func_453(64);
						func_1358(18);
						func_2204();
						Jump @5742; //curOff = 5458
						func_2205();
						Jump @5742; //curOff = 5465
						func_169(&(iLocal_268[24]));
						func_2205();
						Jump @5742; //curOff = 5483
						func_1314(37, 0, 1);
						func_1314(38, 0, 1);
						func_2206(70, 0);
						Jump @5742; //curOff = 5509
						func_453(97);
						task_look_at_entity(iVar297, Global_35, 10000, 0, 51, 0);
						func_1358(21);
						Jump @5742; //curOff = 5541
						task_look_at_entity(iVar297, Global_35, 10000, 0, 51, 0);
						iVar10 = func_2207();
						func_2206(iVar10, 0);
						Jump @5742; //curOff = 5574
						clear_ped_secondary_task(iVar297);
						task_turn_ped_to_face_entity(iVar297, Global_35, -1, -1f, -1f, -1082130432);
						Jump @5742; //curOff = 5610
						if (!has_ped_got_weapon(iVar297, -1098045850, 0, false))
						{
							func_1317(iVar297, -1098045850, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						}
						else
						{
							_add_ammo_to_ped(iVar297, -1098045850, 200, 752097756);
							set_current_ped_weapon(iVar297, -1098045850, true, 0, false, false);
						}
						_0xd8736efda38edc5c(iVar297, Global_36, 50f);
						task_combat_hated_targets_in_area(iVar297, Global_36, 50f, 0, 19);
					}
				}
			}
			default:
				break;
	}
}

void func_1564(var uParam0, var uParam1, char[4] cParam2)
{
	if (does_entity_exist(*uParam1))
	{
		return;
	}
	*uParam1 = func_2208(&(uParam0->f_7375), cParam2, 1);
}

void func_1565(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1566(var uParam0)
{
	bVar0 = true;
	switch (iVar7962)
	{
		case 0:
			if (!_is_anim_scene_loaded(&(iLocal_7972[24]), true, false))
			{
				if (!_is_anim_scene_loading(&(iLocal_7972[24]), true))
				{
					load_anim_scene(&(iLocal_7972[24]));
				}
				bVar0 = false;
			}
			if (!func_2209(24, 52))
			{
				bVar0 = false;
			}
			if (!func_2209(24, 53))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_7965 = 1;
			}
			break;
		case 1:
			if (!does_entity_exist(iVar299))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_7965 = 2;
			}
			break;
		case 2:
			set_anim_scene_entity(&(iLocal_7972[24]), "CS_EagleFlies", iVar323, 0);
			iLocal_7965 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

int func_1567(var uParam0)
{
	return func_2129(&(uParam0->f_7375));
}

void func_1568()
{
}

bool func_1569(var uParam0)
{
	return func_2131(&(uParam0->f_7375));
}

void func_1570()
{
	set_anim_scene_entity(&(iLocal_7972[32]), "arthur", Global_35, 0);
	start_anim_scene(&(iLocal_7972[32]));
}

void func_1571()
{
	if (func_166(68))
	{
		return;
	}
	vVar0 = { -393.7137f, 977.2425f, 117.7421f };
	fVar3 = 88.4946f;
	iVar4 = func_223(7);
	if (func_995(iVar4, 0))
	{
		func_900(iVar4, vVar0, fVar3, 2, 1073741824);
		func_166(68);
	}
}

bool func_1572(int iParam0, bool bParam1)
{
	if (!func_1888(iParam0) && !func_1887(&Local_7648, iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		iVar0 = func_1306(iParam0);
		if (iVar0 == 2 || iVar0 == 9)
		{
			return false;
		}
	}
	iVar1 = iParam0;
	iVar2 = 0;
	while (iVar1 >= 32)
	{
		iVar1 = (iVar1 - 32);
		iVar2++;
	}
	if (iVar2 >= 3)
	{
		return true;
	}
	iVar3 = func_450(iVar1);
	func_452(Local_7648[iVar2], iVar3);
	func_452(Local_7648.f_4[iVar2], iVar3);
	return true;
}

void func_1573(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (is_vehicle_driveable(*iParam0, false, false))
		{
			if (!is_vehicle_seat_free(*iParam0, iVar12))
			{
				iVar1[iVar0] = get_ped_in_vehicle_seat(*iParam0, iVar12);
				if (!is_entity_dead(&(iVar1[iVar0])))
				{
					_0xf9acf4a08098ea25(&(iVar1[iVar0]), true);
					func_900(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_1574(int iParam0)
{
	iVar0 = func_1039(iParam0, 1);
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

void func_1575(int iParam0)
{
	iVar0 = func_1039(iParam0, 1);
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

void func_1576()
{
	func_1575(-939420910);
	func_1575(-1187950766);
	func_1575(356365161);
	func_1575(753127042);
	func_1575(-2038424081);
	func_1575(1884271742);
	func_1575(459290420);
}

void func_1577()
{
	func_1575(704802028);
	func_1575(588987611);
	func_1575(2008888900);
	func_1575(1649996811);
	func_1575(227918160);
	func_1575(168171957);
	func_1575(1193080109);
	func_1575(-491981251);
	func_1575(-639037538);
	func_1575(-618620429);
}

int func_1578(int iParam0, bool bParam1)
{
	if (!func_973())
	{
		return 0;
	}
	if (!func_974(iParam0))
	{
		return 0;
	}
	if (func_2210(iParam0))
	{
		iVar0 = 0;
		if (func_609(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_425(&iVar0, 2);
			}
		}
		return func_975(iParam0, iVar0);
	}
	return 0;
}

void func_1579(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

bool func_1580(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (&iLocal_7677[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1581(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return false;
	}
	if (!func_1012(func_1011(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_1013(iParam0)))
	{
		return false;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_1013(iParam0))))
		{
			return true;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_1013(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_1013(iParam0));
	return true;
}

void func_1582(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (&iLocal_7677[iVar0] != -1)
		{
			iLocal_7677[iVar0] = iParam0;
		}
		iVar0++;
	}
}

float func_1583(int iParam0, int iParam1)
{
	return func_1051(iParam0, iParam1);
}

void func_1584(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	if (iParam9 != 34)
	{
		if (_does_volume_exist(Local_183[iParam9]->f_1))
		{
			Local_183[iParam0]->f_1 = Local_183[iParam9]->f_1;
		}
	}
	if (!_does_volume_exist(Local_183[iParam0]->f_1))
	{
		Local_183[iParam0]->f_1 = _create_volume_sphere_with_custom_name(vParam1, 0f, 0f, fParam4, 1.2f, 1.2f, 1.2f, sParam8);
	}
	if (iParam9 != 34)
	{
		if (_0xc276fe69dda22bad(&(Local_183[iParam9])))
		{
			Local_183[iParam0] = &Local_183[iParam9];
			return;
		}
	}
	if (!_0xc276fe69dda22bad(&(Local_183[iParam0])))
	{
		Local_183[iParam0] = add_cover_point(vParam1, fParam4, iParam5, iParam6, iParam7, false);
	}
}

struct<4> func_1585()
{
	return Var0;
}

void func_1586(var uParam0)
{
	iVar0 = func_925(uParam0);
	bVar1 = false;
	if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 3)
	{
		bVar1 = true;
	}
	else if (iVar0 == 6 || iVar0 == 7)
	{
		if (iVar8033 < 5)
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		func_2012(0);
	}
}

void func_1587(var uParam0)
{
	iVar0 = func_925(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 6:
		case 7:
		case 8:
		case 9:
		case 25:
			if (func_166(46))
			{
				func_167(46);
				_0x411189e51b8020ba(Global_35, "Stealth");
				_0x411189e51b8020ba(iVar299, "Stealth");
			}
			break;
		case 3:
		case 4:
		case 5:
			if (!func_166(46))
			{
				func_453(46);
				_0x437c08db4febe2bd(Global_35, "Stealth", 1f, -1);
				_0x437c08db4febe2bd(iVar299, "Stealth", 1f, -1);
			}
			break;
	}
}

void func_1588(var uParam0)
{
	iVar0 = func_925(uParam0);
	if ((((iVar0 != 3 && iVar0 != 4) && iVar0 != 5) && iVar0 != 6) && iVar0 != 7)
	{
		return;
	}
	if (iVar0 <= 5)
	{
		func_2211(-46226638);
	}
	else
	{
		func_2212(-46226638, 0f, 1, 0);
	}
	if (func_166(63))
	{
		func_2212(385812466, 0f, 1, 0);
		func_2212(-1201452352, 0f, 1, 0);
	}
	else
	{
		func_2211(385812466);
		func_2211(-1201452352);
	}
	if (func_166(64))
	{
		if (Local_302.f_12 > 35 || iVar0 == 6)
		{
			func_2213(1163537966, 1);
		}
		else
		{
			func_2212(1163537966, 0f, 1, 0);
		}
	}
	else
	{
		func_2211(1163537966);
	}
	func_2212(1223148325, 0f, 1, 1);
	func_2212(-805302432, 0f, 1, 1);
}

void func_1589(var uParam0)
{
	iVar0 = 0;
	bVar5 = false;
	fVar6 = 45f;
	if (Local_7648.f_8 != 86)
	{
		sVar3 = func_1893(Local_7648.f_8);
		if (Local_7648.f_9)
		{
			func_47(0, 0);
			Local_7648.f_9 = 0;
		}
		if (is_string_null_or_empty(sVar3) || !func_2214(sVar3))
		{
			Local_7648.f_8 = 86;
		}
		else
		{
			iVar7 = func_925(uParam0);
			if (iVar7 == 1 || iVar7 == 2)
			{
				func_2215(iVar299, sVar3, 0, 1);
			}
		}
		return;
	}
	if (Local_7648.f_9)
	{
		Local_7648.f_9 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 86)
	{
		iVar1 = iVar0;
		if (func_1888(iVar1))
		{
			uVar4 = func_2216(uParam0, iVar1);
			switch (iVar1)
			{
				case 71:
				case 72:
					fVar6 = 60f;
					break;
			}
			iVar2 = func_2217(uParam0, &Local_7648, iVar0, &uVar4, 0, fVar6, bVar5);
			if (iVar2 == 1)
			{
				Local_7648.f_8 = iVar1;
			}
			if (iVar2 == 4)
			{
				func_1558(iVar1);
			}
			func_2218(iVar2, iVar1);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_1590(var uParam0)
{
	iVar0 = func_925(uParam0);
	if (!func_995(iVar299, 0))
	{
		func_1385(uParam0, "", "", 1, 0);
		return;
	}
	if (func_1881(&(Local_302.f_3), 8))
	{
		if (!func_1881(&(Local_302.f_3), 16))
		{
			func_1297(&(Local_302.f_3), 16);
			func_399(uParam0, iVar299, 1105014447, 422991367, 1, 1);
		}
	}
	else if (func_1881(&(Local_302.f_3), 16))
	{
		func_1298(&(Local_302.f_3), 16);
		func_2219(uParam0, iVar299, 1);
	}
	set_blocking_of_non_temporary_events(iVar299, true);
	switch (iVar0)
	{
		case 0:
			func_2220(uParam0);
			break;
		case 1:
		case 2:
			func_2221(uParam0);
			break;
		case 3:
			func_2222(uParam0);
			break;
		case 4:
		case 5:
			func_2223(uParam0);
			break;
		case 6:
		case 7:
			func_2224(uParam0);
			break;
		case 8:
			if (Local_302.f_14 == 7)
			{
				if (Local_302.f_15 == 0)
				{
					func_1389(1, 0);
				}
				func_2225(uParam0);
			}
			else
			{
				func_2226(uParam0);
			}
			break;
		case 9:
			func_2225(uParam0);
			break;
		case 25:
			break;
	}
}

void func_1591(var uParam0)
{
	iVar0 = func_925(uParam0);
	if (!does_entity_exist(iVar323))
	{
		return;
	}
	if (!func_995(iVar323, 0))
	{
		func_1623(uParam0, func_2227(26), 1, 0);
		return;
	}
	set_blocking_of_non_temporary_events(iVar323, true);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			break;
		case 4:
		case 5:
			func_2228(uParam0);
			break;
		case 6:
		case 7:
			func_2229(uParam0);
			break;
		case 8:
			break;
		case 9:
			if (is_ped_in_any_vehicle(iVar323, false))
			{
				set_ped_can_be_knocked_off_vehicle(iVar323, 1);
				set_ragdoll_blocking_flags(iVar323, 526947);
			}
			break;
		case 25:
			break;
	}
}

void func_1592(var uParam0)
{
	bVar0 = false;
	iVar1 = func_925(uParam0);
	if (iVar1 >= 4)
	{
		bVar0 = true;
	}
	if (func_166(43))
	{
		if (!func_26(&uLocal_7320))
		{
			func_228(&uLocal_7320);
		}
		if (func_1908())
		{
			if (func_1341(&uLocal_7320) >= 6f)
			{
				func_1385(uParam0, "NTS3_GRIEF", "", 1, 0);
			}
		}
		else if (func_1341(&uLocal_7320) >= 12f)
		{
			func_1385(uParam0, "NTS3_GRIEF", "", 1, 0);
		}
	}
	else
	{
		if (iVar1 >= 6)
		{
			return;
		}
		bVar2 = false;
		if (iVar1 < 3)
		{
			bVar2 = true;
		}
		if (func_2230(iVar1) || func_2231(bVar2, bVar0))
		{
			func_1907(&Local_2433);
			func_1907(&Local_3359);
			func_1907(&Local_5055);
			func_1907(&Local_3976);
			func_1907(&Local_3127);
			func_1907(&Local_5441);
			func_453(43);
		}
	}
}

void func_1593(var uParam0)
{
	if (!does_entity_exist(iLocal_252))
	{
		return;
	}
	iVar0 = func_925(uParam0);
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (!func_995(iLocal_252, 65))
		{
			func_1385(uParam0, "NTS3_F_HORSE", "", 1, 0);
		}
	}
	if (iVar0 == 8)
	{
		if (!func_166(106))
		{
			if (!func_995(iLocal_252, 65))
			{
				func_1385(uParam0, "NTS3_F_HORSE", "", 1, 0);
			}
		}
	}
	if (iVar0 == 7)
	{
		if (func_166(111))
		{
			if (!func_995(iLocal_252, 65))
			{
				func_1385(uParam0, "NTS3_F_HORSE", "", 1, 0);
			}
		}
	}
}

int func_1594(var uParam0)
{
	iVar0 = 2000;
	if (func_77() != 56)
	{
		return 0;
	}
	if (!func_26(&uLocal_7377))
	{
		func_228(&uLocal_7377);
	}
	if (func_1401(&uLocal_7377) < iVar0)
	{
		return 0;
	}
	if (_0x1a6e84f13c952094(get_player_index(), iVar0, &uVar1))
	{
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 4)
		{
			if (!does_entity_exist(&(uVar1[iVar6])))
			{
			}
			else if (func_2232(uVar1[iVar6]))
			{
				if (func_2233(uVar1[iVar6]) || !func_995(&(uVar1[iVar6]), 15))
				{
					func_1385(uParam0, "NTS3_F_ATTACK", "", 1, 0);
					return 1;
				}
			}
			iVar6++;
		}
	}
	func_228(&uLocal_7377);
	return 0;
}

void func_1595(var uParam0)
{
	if (func_166(66))
	{
		func_167(66);
	}
	if (!does_entity_exist(iVar299))
	{
		return;
	}
	fVar0 = -1f;
	fVar1 = -1f;
	iVar2 = func_925(uParam0);
	switch (iVar2)
	{
		case 0:
			fVar0 = 50f;
			fVar1 = 70f;
			break;
		case 1:
		case 2:
			fVar0 = 80f;
			fVar1 = 120f;
			break;
		case 3:
			fVar0 = 50f;
			fVar1 = 70f;
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
			fVar0 = 80f;
			fVar1 = 120f;
			break;
		case 9:
			break;
		case 25:
			break;
	}
	if (fVar0 > 0f && fVar1 > 0f)
	{
		if (func_1938(uParam0, 7, fVar0, fVar1, 0, 0, 1, 422991367))
		{
			func_453(66);
		}
	}
}

void func_1596(var uParam0)
{
	fVar0 = 0.3f;
	iVar1 = func_925(uParam0);
	if (iVar7435 >= 3 || iVar1 != 6)
	{
		fVar0 = 1f;
	}
	if (func_2234(14))
	{
		set_anim_scene_rate(&(iLocal_7972[14]), fVar0);
	}
	switch (iLocal_182)
	{
		case 0:
			break;
		case 1:
			if (func_2235(uParam0))
			{
				_set_anim_scene_playback_list_bool(&(iLocal_7972[14]), func_1443(40), true);
				start_anim_scene(&(iLocal_7972[14]));
				iLocal_182 = 2;
			}
			break;
		case 2:
			if (func_1859(14, 41, 0, 1065185444))
			{
				iLocal_182 = 3;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_1597()
{
	if (iLocal_182 != 0)
	{
		func_1358(14);
		iLocal_182 = 4;
	}
}

void func_1598(int iParam0, bool bParam1, var uParam2)
{
	if ((func_2236() || func_206(&Global_1935630, 2048)) || is_screen_faded_out())
	{
		return;
	}
	if (iParam0 == 105 || iParam0 == 95)
	{
		if (!func_2237())
		{
			func_2238(bParam1, uParam2);
			return;
		}
		if (!func_2239(iParam0))
		{
			func_2238(bParam1, uParam2);
			return;
		}
		iVar0 = func_2240(iParam0, func_1817(17));
		bVar1 = func_2241(2048);
		bVar2 = func_2241(1024);
		if (!uParam2->f_3)
		{
			_0x0751d461f06e41ce(player_id(), 7, 0, 1);
			_0x0751d461f06e41ce(player_id(), 20, 0, 1);
			_0x0751d461f06e41ce(player_id(), 19, 0, 1);
			_0x0751d461f06e41ce(player_id(), 10, 0, 1);
			_0x0751d461f06e41ce(player_id(), 4, 0, 1);
			uParam2->f_3 = 1;
		}
	}
	else
	{
		iVar0 = 175;
		bVar1 = false;
		bVar2 = false;
	}
	func_2242(bParam1, bVar1, bVar2);
	iVar3 = _get_map_zone_at_coords(Global_36, 1);
	if (func_2243(iVar3) == iParam0)
	{
		if (func_2244() || func_2245())
		{
			*uParam2 = 1;
		}
		else if (*uParam2)
		{
			func_334(iVar0, 1);
			*uParam2 = 0;
		}
		if (!uParam2->f_1)
		{
			if (uParam2->f_2 < 3)
			{
				func_334(iVar0, 1);
				uParam2->f_2++;
			}
			uParam2->f_1 = 1;
		}
		if (uParam2->f_1 && (((is_control_pressed(0, -1304887797) || is_disabled_control_pressed(0, -1304887797)) || is_control_just_pressed(0, -1304887797)) || is_disabled_control_just_pressed(0, -1304887797)))
		{
			if (uParam2->f_2 < 3)
			{
				func_334(iVar0, 1);
				uParam2->f_2++;
			}
		}
		_0x8674d138391ffb1b(player_id(), 1);
		_0x9f9a829c6751f3c7(player_id(), 49, 1);
		set_ped_reset_flag(Global_35, 49, true);
		disable_control_action(0, -562475458, false);
		disable_control_action(0, 2028806450, false);
		disable_control_action(0, 371916472, false);
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
		disable_control_action(0, 440314811, false);
		disable_control_action(0, -1616532217, false);
		set_ped_reset_flag(Global_35, 185, true);
		if (!bVar1)
		{
			_0xc9caeaeec1256e54(1833957607);
			func_2246();
			if (Global_1935630->f_44 != -160924582)
			{
				disable_control_action(0, -1304887797, false);
				disable_control_action(0, -128997553, false);
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
		}
		if (!is_ped_in_melee_combat(Global_35) && !bVar2)
		{
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 578288361, false);
		}
	}
	else
	{
		func_2247();
		uParam2->f_1 = 0;
	}
}

void func_1599()
{
	func_2248(&Local_3359);
	func_2248(&Local_2433);
	func_2248(&Local_3976);
	func_2248(&Local_3127);
}

void func_1600()
{
	if (func_166(118))
	{
		return;
	}
	_0x0d7fd6a55fd63aef(49, 3, false);
	_0x0d7fd6a55fd63aef(48, 3, false);
	func_453(118);
}

void func_1601(var uParam0)
{
	iVar0 = func_925(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_2249(22, 0, 0, 0);
			if (iVar0 >= 2)
			{
				if (func_1307(22, 0, 5, 0))
				{
					_pause_clock_this_frame(true);
				}
			}
			break;
		case 8:
			if (!func_2249(0, 0, 0, 0))
			{
				_set_milliseconds_per_game_minute(500);
			}
			if (func_1307(0, 0, 5, 0))
			{
				_pause_clock_this_frame(true);
			}
			break;
		case 9:
			if (!func_2249(5, 0, 0, 0))
			{
				_set_milliseconds_per_game_minute(500);
			}
			break;
		case 25:
			_set_milliseconds_per_game_minute(2000);
			break;
	}
}

void func_1602(var uParam0)
{
	if (func_166(51))
	{
		if (!func_121(uParam0, func_33(uParam0), 1048576))
		{
			func_140(uParam0, func_33(uParam0), 1048576);
		}
		set_ped_reset_flag(Global_35, 175, false);
	}
	else if (func_121(uParam0, func_33(uParam0), 1048576))
	{
		func_1310(uParam0, func_33(uParam0), 1048576);
	}
}

void func_1603(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_225(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_2250(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1464(uParam0->f_8269[iVar19]);
				}
				else if (func_2251(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_236(uParam0->f_8269[iVar19]);
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
			if (func_225(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2252(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2253(uParam0->f_8269.f_641[iVar19]);
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
			if (func_225(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2252(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_226(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_225(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2254(&(uParam0->f_8269));
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
			if (func_225(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2250(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2255(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_506(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2251(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2255(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_506(uParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1604(var uParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1884(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1605()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_2012(0);
	func_1913();
}

bool func_1606(int iParam0)
{
	return (iParam0 < func_408() && iParam0 >= 0);
}

int func_1607(int iParam0)
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

bool func_1608(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1609(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1606(iVar0))
	{
		return false;
	}
	iVar1 = func_1607(iParam2);
	if (!func_1608(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1610(struct<2> Param0, int iParam2)
{
	if (!func_264(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1611(var uParam0)
{
	func_2256(uParam0);
	if (func_288(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_288(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_903(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_2257(uParam0);
	func_2258(uParam0, 67108864);
	func_2258(uParam0, 8192);
	func_905(uParam0, 4);
	func_905(uParam0, 512);
	func_905(uParam0, 65536);
	func_905(uParam0, 1024);
	func_905(uParam0, 262144);
	func_905(uParam0, 16777216);
	func_905(uParam0, 64);
	func_274(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_2259(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_140(uParam0, func_33(uParam0), 1073741824);
	}
	func_274(uParam0, 4194304);
	func_274(uParam0, 8388608);
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
	func_563(&(uParam0->f_13106));
	func_228(&(uParam0->f_13112));
	func_2260(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_244(1);
	}
	if (func_945(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_945(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_945(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2261(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_238(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2262(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_2263(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_2264(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1612(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1613(var uParam0)
{
	func_2122(uParam0);
}

void func_1614(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1458(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1615(var uParam0)
{
	func_2265(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1616(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1617(var uParam0)
{
	return true;
}

void func_1618(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1619(var uParam0, int iParam1)
{
	iVar0 = func_2266(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1620(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2267(uParam0, uParam1))
	{
		return 0;
	}
	if (func_525(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_820(uParam1);
	func_2268(uParam1);
	if (!bParam2)
	{
		func_2269(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2270(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2271(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2272(uParam0, uParam1);
	func_2273(uParam1);
	return 0;
}

bool func_1621(var uParam0)
{
	return true;
}

int func_1622(int iParam0)
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
						*iParam0 = func_2274(vVar0.z);
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

void func_1623(var uParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1385(uParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1624(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_2275(cParam1))
			{
				func_140(uParam0, func_33(uParam0), 131072);
			}
			func_140(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1512(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2276(&(uParam0->f_7375), &(uParam0->f_10792));
				func_140(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_140(uParam0, func_33(uParam0), 256);
		}
	}
	return func_2125(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1625(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_858((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2277(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2278(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2279((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_858((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2277(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2278(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2280((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_858((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2277(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2278(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2281((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_858((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2277(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2278(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2282((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_858(uParam4->f_1, iParam12))
	{
		func_2277(&(uParam4->f_1), iParam12);
		if (func_2278(&(uParam4->f_1), iParam13))
		{
			func_2283(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_858((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2277(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2278(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2284((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_858((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2277(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2278(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2285((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_858((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2277(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2278(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2286((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_858((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2277(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2278(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2287((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_858((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2277(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2278(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2288((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_858((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2277(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2278(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2289((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_858((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2277(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2278(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2290((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1626(var uParam0)
{
	iVar0 = func_2291(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1627(bool bParam0, bool bParam1)
{
	if (func_2292(255) == 4)
	{
		return;
	}
	if (func_407(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_299(0);
	}
	else
	{
		if (bParam1)
		{
			func_2293(0, 0, 0, 1);
		}
		func_300(0);
		func_2294(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2295(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2296(Global_1109400->f_389, 42);
	func_2297(Global_1109400->f_428, 42);
}

bool func_1628(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1629(bool bParam0, bool bParam1, bool bParam2)
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

var func_1630(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1631(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2298(sParam1));
}

int func_1632(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_693(iVar0);
}

bool func_1633()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_2299())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_1634(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_971(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1635()
{
	iVar0 = 1549701178;
	switch (func_2300())
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

int func_1636()
{
	iVar0 = 614608656;
	switch (func_2300())
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

int func_1637()
{
	iVar0 = -1832677570;
	switch (func_2300())
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

int func_1638()
{
	iVar0 = 1623252156;
	switch (func_2300())
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

void func_1639(int iParam0)
{
	vVar0 = { _0xf70f00013a62f866(*iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(*iParam0) };
	fVar6 = func_1658(vVar3.x, vVar3.y);
	fVar6 = func_1658(fVar6, vVar3.z);
	_0x9851de7aec10b4e1(vVar0, fVar6, 1, 0);
}

void func_1640(int iParam0, int iParam1)
{
	func_452(iParam0, iParam1);
}

int func_1641()
{
	return get_player_group(get_player_index());
}

void func_1642(int iParam0, bool bParam1, int iParam2)
{
	if (!func_525(iParam0))
	{
		return;
	}
	if (!func_2301(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_562(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_2302(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_2303())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

int func_1643(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_452(&iVar1, -2147483648);
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

int func_1644(int iParam0)
{
	if (!func_996(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_992(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_1645(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

float func_1646(int iParam0, int iParam1, bool bParam2)
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
	return func_1674(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_1647(int iParam0, bool bParam1)
{
	if (!func_996(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_2304(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_1648(int iParam0)
{
	iVar0 = func_997(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

int func_1649(int iParam0, bool bParam1)
{
	if (!func_996(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_2305(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_1650(int iParam0)
{
	if (!func_996(iParam0))
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

void func_1651(int iParam0, int iParam1)
{
	if (!func_996(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_1652(int iParam0)
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	if (func_1003(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0]->f_3;
}

int func_1653(int iParam0)
{
	if (!func_707(iParam0))
	{
		return 0;
	}
	func_2306(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

bool func_1654(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

int func_1655(int iParam0)
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

void func_1656(int iParam0)
{
	if (func_2307(iParam0) == 57)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_2308(iParam0) == 4 || func_2308(iParam0) == 12) || func_2309(func_2308(iParam0)) == 4) || (func_2310(func_2308(iParam0), 8) && ((func_2308(iParam0) == 2 || func_2308(iParam0) == 0) || func_2308(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_1657(int iParam0)
{
	if (func_2307(iParam0) == 57)
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

float func_1658(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_1659(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1660(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1157(iVar9);
	iVar2 = func_1157(iVar10);
	iVar3 = func_1157(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1157(iVar12);
	}
	iVar5 = func_1158(iVar9);
	iVar6 = func_1158(iVar10);
	iVar7 = func_1158(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1158(iVar12);
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

bool func_1661(int iParam0)
{
	if (func_2311(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_1662()
{
	return true;
}

int func_1663(int iParam0)
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

int func_1664(int iParam0)
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

void func_1665(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1666(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2312(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1667(int iParam0)
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

void func_1668()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_406())
	{
		return;
	}
	func_2313(&(Global_40.f_40));
}

void func_1669()
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

bool func_1670()
{
	return !func_407(Global_1310720->f_1);
}

int func_1671()
{
	return Global_40.f_4283.f_1;
}

int func_1672()
{
	return Global_40.f_4283.f_4;
}

void func_1673(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2314())
	{
		fVar0 = func_1072(vParam0, Global_40.f_6);
	}
	if (func_2315(33554432))
	{
		if (!func_2316(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1072(vParam0, Global_40.f_2);
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

float func_1674(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1675()
{
	if (!func_206(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2317(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2317(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2317(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2317(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2317(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2317(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2317(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2317(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2317(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2318(10f, to_float(func_2317(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2318(5f, to_float(func_2317(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2318(25f, to_float(func_2319(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2318(1f, to_float(func_2319(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2318(6f, to_float(func_2319(64058978)))));
	fVar0 = (fVar0 + (3f * func_2318(1f, to_float(func_2319(795577402)))));
	iVar1 = func_2320();
	fVar0 = (fVar0 + (0.1111111f * func_2318(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2318(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2318(to_float(20), to_float(func_2321()))));
	if (func_2322(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2322(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2322(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2322(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2322(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1658(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2318(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2318(5f, to_float(func_2319(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2318(5f, to_float(func_2317(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1737(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1737(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1737(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1737(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1737(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1737(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2323(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2318((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2318(1f, to_float(func_2324(-2116919750)))));
	fVar5 = to_float(func_2325());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2318(5f, to_float(func_2319(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2318(1f, to_float(func_2319(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2318(1f, to_float(func_2319(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2318(1f, to_float(func_2319(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2318(1f, to_float(func_2317(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2318(1f, to_float(func_2317(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2318(1f, to_float(func_2317(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2318(1f, to_float(func_2317(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2318(1f, to_float(func_2317(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2318(1f, to_float(func_2317(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2318(1f, to_float(func_2317(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2326(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_198(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_198(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_202(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2327(Global_1898330[iVar61]);
				}
				else
				{
					func_2328(iVar61, 0);
					if (func_203(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_201(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_201((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_201(&Global_1898437), &iVar9);
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

void func_1676(var uParam0, int iParam1, bool bParam2)
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

void func_1677(int iParam0)
{
	if (!func_996(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2329(iParam0);
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

void func_1678(int iParam0)
{
	if (func_525(iParam0))
	{
		if (does_entity_exist(func_562(iParam0)))
		{
			func_715(iParam0, 67108864, 1);
			func_994(iParam0, 19, 1);
		}
	}
}

float func_1679(int iParam0)
{
	if (!func_996(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1680(int iParam0)
{
	iVar0 = func_562(iParam0);
	iVar1 = func_1057(iParam0, 0);
	func_2330(iParam0, iVar0);
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

int func_1681(int iParam0)
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

char* func_1682(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_255(37, iParam0))
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
	if (func_255(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1683(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1020(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1684(int iParam0)
{
	iParam0 = func_275(iParam0);
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

float func_1685(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1686(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1687(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1688(var uParam0, int iParam1)
{
}

int func_1689(int iParam0)
{
	{
	}
}